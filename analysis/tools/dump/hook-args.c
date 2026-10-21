/*
 * JVMTI tracing agent for the original client under Wine — dump-session build.
 *
 * Based on win/hook.c (MethodEntry/MethodExit/ClassPrepare tracer with
 * primitive return values). Adds:
 *
 *   TRACE_STRINGS=1   log String arguments of traced methods as they are
 *                     passed in ({"e":"str",...}) — recovers literals that
 *                     decrypt lazily inside native/VM code and only surface
 *                     as Java String arguments at use sites (e.g. the ClickGUI
 *                     labels). Reference args are read via JVMTI GetLocalObject
 *                     at depth 0 and checked against java/lang/String.
 *   TRACE_STRING_CLASSES  class prefixes whose methods get string capture
 *                     (default: same list as TRACE_CLASSES).
 *
 * Env (as hook.c):
 *   TRACE_CLASSES   comma-separated class prefixes
 *                   (default "java/net/,sixtwo/,Init,av,bz,bl,bD,c,e,i,lC,p,R")
 *   TRACE_FILE      output path (default win\trace.jsonl)
 *   TRACE_MAX       max events before tracing stops (default 10000000)
 *
 * Build (Linux, mingw):
 *   x86_64-w64-mingw32-gcc -O2 -shared -o hook-args.dll hook-args.c \
 *     -I<jdk>/include -I<jdk>/include/win32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <jni.h>
#include <jvmti.h>

static jvmtiEnv *g_jvmti;
static FILE *trace_out;
static jrawMonitorID trace_lock;
static long trace_remaining = 10000000;
static char trace_prefixes[4096];
static int trace_strings = 0;
static char string_prefixes[4096];
static jclass g_string_class = NULL;
static volatile int trace_enabled = 0;
static JavaVM *g_vm;
static char trace_go_path[512];

static int file_exists(const char *p) {
    return GetFileAttributesA(p) != INVALID_FILE_ATTRIBUTES;
}

static void wlock(void) {
    (*g_jvmti)->RawMonitorEnter(g_jvmti, trace_lock);
}

static void wunlock(void) {
    (*g_jvmti)->RawMonitorExit(g_jvmti, trace_lock);
}

/* Deferred tracing: method events stay OFF during boot (the per-call callback
   overhead slows the JVM ~100x — datafixer 6.5 min vs 0.5 s). When the go-file
   appears (written after join), enable them. The watcher ATTACHES first: JVMTI
   calls from an unattached thread fail with JVMTI_ERROR_UNATTACHED_THREAD
   (observed as a silent trace_on with zero events). */
static DWORD WINAPI trace_enable_watcher(LPVOID param) {
    JNIEnv *env = NULL;
    jvmtiError e1, e2;
    (void)param;
    for (;;) {
        Sleep(1000);
        if (file_exists(trace_go_path)) break;
    }
    if ((*g_vm)->AttachCurrentThread(g_vm, (void **)&env, NULL) != JNI_OK) return 1;
    /* Enable method events ONLY for the render thread: all client-side logic
       (module handlers, GUI draws, string use sites) runs there; enabling
       globally starves the JVM (integrated server 58 s behind, input lag). */
    {
        jint tcount = 0;
        jthread *threads = NULL;
        int enabled_specific = 0;
        e1 = e2 = JVMTI_ERROR_NONE;
        if ((*g_jvmti)->GetAllThreads(g_jvmti, &tcount, &threads) == JVMTI_ERROR_NONE) {
            jint t;
            for (t = 0; t < tcount; t++) {
                jvmtiThreadInfo info;
                memset(&info, 0, sizeof(info));
                if ((*g_jvmti)->GetThreadInfo(g_jvmti, threads[t], &info) == JVMTI_ERROR_NONE) {
                    if (info.name && strcmp(info.name, "Render thread") == 0) {
                        e1 = (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                JVMTI_EVENT_METHOD_ENTRY, threads[t]);
                        e2 = (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                JVMTI_EVENT_METHOD_EXIT, threads[t]);
                        enabled_specific = 1;
                    }
                    if (info.name) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) info.name);
                }
            }
            (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) threads);
        }
        if (!enabled_specific) {
            e1 = (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                                      JVMTI_EVENT_METHOD_ENTRY, NULL);
            e2 = (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                                      JVMTI_EVENT_METHOD_EXIT, NULL);
        }
        trace_enabled = 1;
        if (trace_out) {
            wlock();
            fprintf(trace_out, "{\"e\":\"trace_on\",\"me\":%d,\"mx\":%d,\"render\":%d}\n",
                    (int) e1, (int) e2, enabled_specific);
            fflush(trace_out);
            wunlock();
        }
    }
    (*g_vm)->DetachCurrentThread(g_vm);
    return 0;
}

static void env_get(const char *name, const char *dflt, char *buf, size_t n) {
    const char *v = getenv(name);
    if (!v || !*v) v = dflt;
    strncpy(buf, v, n - 1);
    buf[n - 1] = '\0';
}

static int prefix_match_in(const char *prefixes, const char *cls) {
    /* match at class-name boundaries: a prefix ending in '/' matches any
       class under that package; otherwise require an exact default-package
       class name (prefix "Init" matches only "Init") */
    const char *p = prefixes;
    while (*p) {
        const char *comma = strchr(p, ',');
        size_t plen = comma ? (size_t)(comma - p) : strlen(p);
        if (plen && strncmp(cls, p, plen) == 0 &&
            (p[plen - 1] == '/' || cls[plen] == '/' || cls[plen] == '\0'))
            return 1;
        p = comma ? comma + 1 : p + plen;
    }
    return 0;
}

static int prefix_match(const char *cls) {
    return prefix_match_in(trace_prefixes, cls);
}

static char *get_class_name(JNIEnv *env, jclass cls);

static void JNICALL cbClassPrepare(jvmtiEnv *jvmti, JNIEnv *env, jthread thread,
                                   jclass cls) {
    static int cp_counter = 0;
    (void)jvmti; (void)thread;
    char *cname = get_class_name(env, cls);
    if (cname && prefix_match(cname) && trace_out) {
        wlock();
        fprintf(trace_out, "{\"e\":\"load\",\"c\":\"%s\"}\n", cname);
        wunlock();
    }
    if (cname) (*jvmti)->Deallocate(jvmti, (unsigned char *) cname);
    /* fallback: class loads keep happening during the tour; if the go-file
       appeared, enable method events from this (attached) callback thread */
    if (!trace_enabled && (++cp_counter & 15) == 0 && file_exists(trace_go_path)) {
        (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                             JVMTI_EVENT_METHOD_ENTRY, NULL);
        (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                             JVMTI_EVENT_METHOD_EXIT, NULL);
        trace_enabled = 1;
        if (trace_out) {
            wlock();
            fprintf(trace_out, "{\"e\":\"trace_on\",\"via\":\"classprepare\"}\n");
            fflush(trace_out);
            wunlock();
        }
    }
}

static char *get_class_name(JNIEnv *env, jclass cls) {
    jvmtiError err;
    char *name = NULL;
    err = (*g_jvmti)->GetClassSignature(g_jvmti, cls, &name, NULL);
    if (err != JVMTI_ERROR_NONE || !name) return NULL;
    size_t l = strlen(name);
    if (l > 1 && name[0] == 'L' && name[l - 1] == ';') {
        name[l - 1] = '\0';
        memmove(name, name + 1, l - 1);
    }
    return name;
}

static void get_method_name(jmethodID method, char **name, char **sig) {
    *name = *sig = NULL;
    (*g_jvmti)->GetMethodName(g_jvmti, method, name, sig, NULL);
}

static void json_escape_write(FILE *f, const char *s) {
    for (; *s; s++) {
        unsigned char c = (unsigned char)*s;
        switch (c) {
        case '"':  fputs("\\\"", f); break;
        case '\\': fputs("\\\\", f); break;
        case '\n': fputs("\\n", f); break;
        case '\r': fputs("\\r", f); break;
        case '\t': fputs("\\t", f); break;
        default:
            if (c < 0x20) fprintf(f, "\\u%04x", c);
            else fputc(c, f);
        }
    }
}

/* Log every java.lang.String argument of the method (JSON-escaped). */
static void log_string_args(JNIEnv *env, jthread thread, jmethodID method,
                            const char *cname, const char *mname,
                            const char *msig) {
    jint mods = 0;
    int slot;
    const char *p;

    if (!msig || !trace_out) return;
    if ((*g_jvmti)->GetMethodModifiers(g_jvmti, method, &mods) != JVMTI_ERROR_NONE)
        return;
    slot = (mods & 0x0008) ? 0 : 1; /* instance methods: slot 0 = this */
    p = strchr(msig, '(');
    if (!p) return;
    p++;
    while (*p && *p != ')') {
        char t = *p;
        if (t == '[') {
            while (*p == '[') p++;
            if (*p == 'L') { while (*p && *p != ';') p++; if (*p) p++; }
            else if (*p) p++;
            slot += 1;
            continue;
        }
        if (t == 'L') {
            const char *end = strchr(p, ';');
            if (!end) break;
            if (end - p == 17 && strncmp(p, "Ljava/lang/String;", 18) == 0) {
                jobject obj = NULL;
                if ((*g_jvmti)->GetLocalObject(g_jvmti, thread, 0, slot, &obj)
                        == JVMTI_ERROR_NONE && obj != NULL) {
                    if (!g_string_class) {
                        jclass cls = (*env)->FindClass(env, "java/lang/String");
                        /* local refs created in a callback die with the enclosing
                           frame — cache a GLOBAL ref instead (page-fault fix) */
                        if (cls) g_string_class = (jclass)(*env)->NewGlobalRef(env, cls);
                    }
                    if (g_string_class
                            && (*env)->IsInstanceOf(env, obj, g_string_class)) {
                        const char *chars = (*env)->GetStringUTFChars(
                                env, (jstring) obj, NULL);
                        if (chars) {
                            fprintf(trace_out,
                                    "{\"e\":\"str\",\"c\":\"%s\",\"m\":\"%s\",\"v\":\"",
                                    cname, mname ? mname : "?");
                            json_escape_write(trace_out, chars);
                            fprintf(trace_out, "\"}\n");
                            (*env)->ReleaseStringUTFChars(env, (jstring) obj, chars);
                        }
                    }
                    (*env)->DeleteLocalRef(env, obj);
                }
            }
            p = end + 1;
            slot += 1;
            continue;
        }
        /* primitives (J/D take two slots) */
        if (t == 'J' || t == 'D') slot += 2; else slot += 1;
        p++;
    }
}

static void JNICALL cbMethodEntry(jvmtiEnv *jvmti, JNIEnv *env, jthread thread,
                                  jmethodID method, jobject slot) {
    (void)jvmti; (void)slot;
    jclass cls;
    char *cname = NULL, *mname = NULL, *msig = NULL;
    LARGE_INTEGER li;

    if (trace_remaining <= 0) return;
    if ((*env)->ExceptionCheck(env)) return;

    if ((*g_jvmti)->GetMethodDeclaringClass(g_jvmti, method, &cls) != JVMTI_ERROR_NONE || !cls)
        return;
    cname = get_class_name(env, cls);
    if (!cname) return;
    {
        int in_trace = prefix_match(cname);
        int in_strings = trace_strings && prefix_match_in(string_prefixes, cname);
        if (!in_trace && !in_strings) {
            (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) cname);
            return;
        }
        get_method_name(method, &mname, &msig);
        QueryPerformanceCounter(&li);
        if (in_trace && trace_out && trace_remaining > 0) {
            wlock();
            fprintf(trace_out, "{\"e\":\"enter\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\",\"s\":\"%s\"}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?", msig ? msig : "?");
            trace_remaining--;
            wunlock();
        }
        if (in_strings && trace_out) {
            wlock();
            log_string_args(env, thread, method, cname, mname, msig);
            wunlock();
        }
    }
    if (cname) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) cname);
    if (mname) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) mname);
    if (msig) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) msig);
}

static void JNICALL cbMethodExit(jvmtiEnv *jvmti, JNIEnv *env, jthread thread,
                                 jmethodID method, jboolean was_exc,
                                 jvalue ret) {
    (void)jvmti; (void)thread;
    jclass cls;
    char *cname = NULL, *mname = NULL, *msig = NULL;
    LARGE_INTEGER li;
    char rtype;

    if (trace_remaining <= 0) return;
    if (was_exc) return;
    if ((*env)->ExceptionCheck(env)) return;

    if ((*g_jvmti)->GetMethodDeclaringClass(g_jvmti, method, &cls) != JVMTI_ERROR_NONE || !cls)
        return;
    cname = get_class_name(env, cls);
    if (!cname) return;
    if (!prefix_match(cname)) {
        (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) cname);
        return;
    }
    get_method_name(method, &mname, &msig);

    QueryPerformanceCounter(&li);

    rtype = 'v';
    if (msig) {
        size_t l = strlen(msig);
        if (l) rtype = msig[l - 1];
    }

    if (trace_out && trace_remaining > 0) {
        wlock();
        switch (rtype) {
        case 'F':
            fprintf(trace_out, "{\"e\":\"exit\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\",\"r\":%.9g}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?", (double) ret.f);
            break;
        case 'D':
            fprintf(trace_out, "{\"e\":\"exit\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\",\"r\":%.17g}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?", ret.d);
            break;
        case 'I': case 'Z': case 'B': case 'C': case 'S':
            fprintf(trace_out, "{\"e\":\"exit\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\",\"r\":%d}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?", (int) ret.i);
            break;
        case 'J':
            fprintf(trace_out, "{\"e\":\"exit\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\",\"r\":%lld}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?", (long long) ret.j);
            break;
        default:
            fprintf(trace_out, "{\"e\":\"exit\",\"t\":%lld,\"c\":\"%s\",\"m\":\"%s\"}\n",
                    (long long) li.QuadPart, cname, mname ? mname : "?");
        }
        trace_remaining--;
        wunlock();
    }
    if (cname) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) cname);
    if (mname) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) mname);
    if (msig) (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) msig);
}

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *vm, char *options, void *reserved) {
    jint rc;
    jvmtiCapabilities caps;
    jvmtiEventCallbacks cbs;
    char file[512];
    (void)options; (void)reserved;

    g_vm = vm;
    env_get("TRACE_GO", "win\\trace-go", trace_go_path, sizeof(trace_go_path));

    const char *tc = getenv("TRACE_CLASSES");
    if (!tc) {
        env_get("TRACE_CLASSES",
                "java/net/,sixtwo/,Init,av,bz,bl,bD,c,e,i,lC,p,R",
                trace_prefixes, sizeof(trace_prefixes));
    } else {
        env_get("TRACE_CLASSES", tc, trace_prefixes, sizeof(trace_prefixes));
    }
    env_get("TRACE_STRING_CLASSES", trace_prefixes, string_prefixes,
            sizeof(string_prefixes));
    {
        const char *ts = getenv("TRACE_STRINGS");
        if (ts && *ts && strcmp(ts, "0") != 0) trace_strings = 1;
    }
    env_get("TRACE_FILE", "win\\trace.jsonl", file, sizeof(file));
    {
        const char *m = getenv("TRACE_MAX");
        if (m && *m) trace_remaining = atol(m);
    }

    rc = (*vm)->GetEnv(vm, (void **) &g_jvmti, JVMTI_VERSION_1_2);
    if (rc != JNI_OK) return JNI_ERR;

    trace_out = fopen(file, "w");
    if (!trace_out) return JNI_ERR;
    setvbuf(trace_out, NULL, _IOLBF, 0);

    memset(&caps, 0, sizeof(caps));
    caps.can_generate_method_entry_events = 1;
    caps.can_generate_method_exit_events = 1;
    caps.can_access_local_variables = 1;
    (*g_jvmti)->AddCapabilities(g_jvmti, &caps);

    (*g_jvmti)->CreateRawMonitor(g_jvmti, "trace_lock", &trace_lock);

    memset(&cbs, 0, sizeof(cbs));
    cbs.MethodEntry = (jvmtiEventMethodEntry) &cbMethodEntry;
    cbs.MethodExit = (jvmtiEventMethodExit) &cbMethodExit;
    cbs.ClassPrepare = (jvmtiEventClassPrepare) &cbClassPrepare;
    (*g_jvmti)->SetEventCallbacks(g_jvmti, &cbs, sizeof(cbs));
    /* METHOD_ENTRY/EXIT stay disabled until the trace-go file appears
       (deferred tracing — see trace_enable_watcher); CLASS_PREPARE is cheap
       and stays on. */
    (*g_jvmti)->SetEventNotificationMode(g_jvmti, JVMTI_ENABLE,
                                         JVMTI_EVENT_CLASS_PREPARE, NULL);
    CreateThread(NULL, 0, trace_enable_watcher, NULL, 0, NULL);
    return JNI_OK;
}

JNIEXPORT void JNICALL Agent_OnUnload(JavaVM *vm) {
    (void)vm;
    if (trace_out) {
        fflush(trace_out);
        fclose(trace_out);
        trace_out = NULL;
    }
}
