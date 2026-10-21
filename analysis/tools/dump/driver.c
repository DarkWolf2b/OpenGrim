/*
 * driver.c — JVMTI/JNI module-tour driver for the original client under Wine.
 *
 * Attaches a JVM thread, waits for a go-file, then walks the client's module
 * registry (sixtwo.rD.dlJ().aZz() -> Map<Class, gg>) and toggles each module
 * one at a time via gg.baa(boolean) — the same call the Click GUI uses — so
 * per-module handler traces are captured deterministically.
 *
 * Class lookup note: FindClass from an attached native thread uses the system
 * classloader, but the payload lives in Fabric's Knot classloader — so the
 * sixtwo classes are resolved via JVMTI GetLoadedClasses + signature match.
 *
 * Env:
 *   DRIVER_GO   go-file to wait for (default win\driver-go)
 *   DRIVER_LOG  output log (default win\driver.log)
 *   DRIVER_MS   per-module enabled window in ms (default 4000)
 *
 * Build (Linux, mingw):
 *   x86_64-w64-mingw32-gcc -O2 -shared -o driver.dll driver.c \
 *     -I<jdk>/include -I<jdk>/include/win32
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <jni.h>
#include <jvmti.h>

static JavaVM *g_vm;
static jvmtiEnv *g_jvmti;

static int file_exists(const char *p) {
    return GetFileAttributesA(p) != INVALID_FILE_ATTRIBUTES;
}

/* Find an already-loaded class by JVMTI signature (e.g. "Lsixtwo/rD;") and
   return a global ref. Works across classloaders (FindClass would not). */
static jclass find_loaded_class(JNIEnv *env, const char *sig) {
    jint count = 0;
    jclass *classes = NULL;
    jclass result = NULL;
    jint i;
    if ((*g_jvmti)->GetLoadedClasses(g_jvmti, &count, &classes) != JVMTI_ERROR_NONE)
        return NULL;
    for (i = 0; i < count && !result; i++) {
        char *csig = NULL;
        if ((*g_jvmti)->GetClassSignature(g_jvmti, classes[i], &csig, NULL) == JVMTI_ERROR_NONE && csig) {
            if (strcmp(csig, sig) == 0)
                result = (jclass)(*env)->NewGlobalRef(env, classes[i]);
            (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) csig);
        }
    }
    (*g_jvmti)->Deallocate(g_jvmti, (unsigned char *) classes);
    return result;
}

static DWORD WINAPI driver_thread(LPVOID param) {
    JNIEnv *env = NULL;
    FILE *log;
    const char *go = getenv("DRIVER_GO");
    const char *msenv = getenv("DRIVER_MS");
    int per_ms = 4000;
    jsize n, i;
    jclass rD, geC, mapC, collC, ggC;
    jmethodID dlJ, aZz, values, toArray, baa;
    jfieldID fId, fOn;
    jobject ge, map, coll;
    jobjectArray arr;
    (void)param;

    if (!go || !*go) go = "win\\driver-go";
    if (msenv && *msenv) per_ms = atoi(msenv);

    /* Phase 1: pure Win32 polling — never touch the JVM during VM init. */
    while (!file_exists(go)) Sleep(2000);

    /* Phase 2: the go-file is written only after join; the VM is fully up. */
    if ((*g_vm)->AttachCurrentThread(g_vm, (void **)&env, NULL) != JNI_OK) return 1;

    log = fopen("win\\driver.log", "w");
    if (!log) return 1;
    fprintf(log, "go file seen; resolving registry\n");
    fflush(log);

    rD = find_loaded_class(env, "Lsixtwo/rD;");
    if (!rD) { fprintf(log, "no sixtwo/rD loaded\n"); goto out; }
    dlJ = (*env)->GetStaticMethodID(env, rD, "dlJ", "()Lsixtwo/ge;");
    if (!dlJ) { (*env)->ExceptionClear(env); fprintf(log, "no dlJ\n"); goto out; }
    ge = (*env)->CallStaticObjectMethod(env, rD, dlJ);
    if (!ge || (*env)->ExceptionCheck(env)) { (*env)->ExceptionClear(env); fprintf(log, "dlJ null\n"); goto out; }

    geC = find_loaded_class(env, "Lsixtwo/ge;");
    if (!geC) { fprintf(log, "no sixtwo/ge loaded\n"); goto out; }
    aZz = (*env)->GetMethodID(env, geC, "aZz", "()Ljava/util/Map;");
    if (!aZz) { (*env)->ExceptionClear(env); fprintf(log, "no aZz\n"); goto out; }
    map = (*env)->CallObjectMethod(env, ge, aZz);
    if (!map || (*env)->ExceptionCheck(env)) { (*env)->ExceptionClear(env); fprintf(log, "aZz failed\n"); goto out; }

    mapC = (*env)->FindClass(env, "java/util/Map");
    values = (*env)->GetMethodID(env, mapC, "values", "()Ljava/util/Collection;");
    coll = (*env)->CallObjectMethod(env, map, values);
    collC = (*env)->FindClass(env, "java/util/Collection");
    toArray = (*env)->GetMethodID(env, collC, "toArray", "()[Ljava/lang/Object;");
    arr = (jobjectArray)(*env)->CallObjectMethod(env, coll, toArray);
    if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
    n = arr ? (*env)->GetArrayLength(env, arr) : 0;
    fprintf(log, "modules: %d\n", (int)n);
    fflush(log);
    if (!n) goto out;

    ggC = find_loaded_class(env, "Lsixtwo/gg;");
    if (!ggC) { fprintf(log, "no sixtwo/gg loaded\n"); goto out; }
    baa = (*env)->GetMethodID(env, ggC, "baa", "(Z)V");
    fId = (*env)->GetFieldID(env, ggC, "XWrfQ", "I");
    fOn = (*env)->GetFieldID(env, ggC, "RliRe", "Z");
    if (!baa || !fId || !fOn) { (*env)->ExceptionClear(env); fprintf(log, "missing gg members\n"); goto out; }

    /* Wait until toggles are accepted (in world): probe a disabled module. */
    {
        jobject probe = NULL;
        int waited = 0;
        for (i = 0; i < n; i++) {
            jobject m = (*env)->GetObjectArrayElement(env, arr, i);
            if (m && !(*env)->GetBooleanField(env, m, fOn)) { probe = m; break; }
            if (m) (*env)->DeleteLocalRef(env, m);
        }
        if (!probe) probe = (*env)->GetObjectArrayElement(env, arr, 0);
        for (;;) {
            (*env)->CallVoidMethod(env, probe, baa, JNI_TRUE);
            if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
            if ((*env)->GetBooleanField(env, probe, fOn)) break;
            if (waited % 30000 == 0) { fprintf(log, "waiting for world (%ds)\n", waited / 1000); fflush(log); }
            Sleep(5000);
            waited += 5000;
            if (waited > 3600000) { fprintf(log, "world wait timeout\n"); goto out; }
        }
        fprintf(log, "world ready\n");
        fflush(log);
        (*env)->CallVoidMethod(env, probe, baa, JNI_FALSE);
        if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
        Sleep(300);
    }

    for (i = 0; i < n; i++) {
        jobject m = (*env)->GetObjectArrayElement(env, arr, i);
        jint id;
        jboolean on;
        if (!m) continue;
        id = (*env)->GetIntField(env, m, fId);
        (*env)->CallVoidMethod(env, m, baa, JNI_TRUE);
        if ((*env)->ExceptionCheck(env)) { (*env)->ExceptionClear(env); fprintf(log, "id=%d enable threw\n", (int)id); }
        on = (*env)->GetBooleanField(env, m, fOn);
        fprintf(log, "on id=%d ok=%d\n", (int)id, on);
        fflush(log);
        Sleep(per_ms);
        (*env)->CallVoidMethod(env, m, baa, JNI_FALSE);
        if ((*env)->ExceptionCheck(env)) (*env)->ExceptionClear(env);
        fprintf(log, "off id=%d\n", (int)id);
        fflush(log);
        Sleep(300);
        (*env)->DeleteLocalRef(env, m);
    }
    fprintf(log, "tour done\n");

out:
    fflush(log);
    fclose(log);
    (*g_vm)->DetachCurrentThread(g_vm);
    return 0;
}

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *vm, char *options, void *reserved) {
    (void)options;
    (void)reserved;
    g_vm = vm;
    if ((*vm)->GetEnv(vm, (void **)&g_jvmti, JVMTI_VERSION_1_2) != JNI_OK) return JNI_ERR;
    if (!CreateThread(NULL, 0, driver_thread, NULL, 0, NULL)) return JNI_ERR;
    return JNI_OK;
}
