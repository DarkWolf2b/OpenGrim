/* JVMTI agent: log every native method binding via the NativeMethodBind
 * event — (class, method, sig, bound address) for each native the DLL
 * registers. No env-table patching. */
#include <jni.h>
#include <jvmti.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <windows.h>

static FILE *g_log = NULL;
static jvmtiEnv *g_jvmti = NULL;

static void JNICALL NativeMethodBind(jvmtiEnv *jvmti, JNIEnv *env,
                                     jthread thread, jmethodID method,
                                     const void *address, void *ignored) {
    if (address == NULL) return;
    char *name = NULL, *sig = NULL, *cls = NULL;
    jvmtiError e1 = (*jvmti)->GetMethodName(jvmti, method, &name, &sig, NULL);
    if (e1 != JVMTI_ERROR_NONE) return;
    jclass clazz = NULL;
    if ((*jvmti)->GetMethodDeclaringClass(jvmti, method, &clazz) == JVMTI_ERROR_NONE && clazz) {
        char *gcls = NULL;
        if ((*jvmti)->GetClassSignature(jvmti, clazz, &gcls, NULL) == JVMTI_ERROR_NONE && gcls) {
            cls = gcls;
        }
    }
    fprintf(g_log, "{\"class\":\"%s\",\"method\":\"%s\",\"sig\":\"%s\",\"addr\":\"0x%llx\"}\n",
            cls ? cls : "?", name ? name : "?", sig ? sig : "?",
            (unsigned long long)(uintptr_t)address);
    fflush(g_log);
    if (cls) (*jvmti)->Deallocate(jvmti, (unsigned char *)cls);
    if (name) (*jvmti)->Deallocate(jvmti, (unsigned char *)name);
    if (sig) (*jvmti)->Deallocate(jvmti, (unsigned char *)sig);
}

static void JNICALL VmInit(jvmtiEnv *jvmti, JNIEnv *env, jthread thread) {
    fprintf(stderr, "[hook] VMInit: enabling NativeMethodBind\n");
    fflush(stderr);
    jvmtiError err = (*jvmti)->SetEventNotificationMode(
            jvmti, JVMTI_ENABLE, JVMTI_EVENT_NATIVE_METHOD_BIND, NULL);
    fprintf(stderr, "[hook] enable = %d\n", (int)err);
    fflush(stderr);
}

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *vm, char *options, void *reserved) {
    fprintf(stderr, "[hook] OnLoad enter\n");
    fflush(stderr);
    void *penv = NULL;
    jint rc = (*vm)->GetEnv(vm, &penv, JVMTI_VERSION_1_2);
    if (rc != JNI_OK) {
        fprintf(stderr, "[hook] GetEnv(JVMTI) = %d\n", (int)rc);
        fflush(stderr);
        return -1;
    }
    jvmtiEnv *jvmti = (jvmtiEnv *)penv;
    g_jvmti = jvmti;

    jvmtiCapabilities caps;
    memset(&caps, 0, sizeof(caps));
    caps.can_generate_native_method_bind_events = 1;
    jvmtiError err = (*jvmti)->AddCapabilities(jvmti, &caps);
    fprintf(stderr, "[hook] AddCapabilities = %d\n", (int)err);
    fflush(stderr);

    jvmtiEventCallbacks cbs;
    memset(&cbs, 0, sizeof(cbs));
    cbs.VMInit = &VmInit;
    cbs.NativeMethodBind = &NativeMethodBind;
    err = (*jvmti)->SetEventCallbacks(jvmti, &cbs, sizeof(cbs));
    fprintf(stderr, "[hook] SetEventCallbacks = %d\n", (int)err);
    fflush(stderr);

    err = (*jvmti)->SetEventNotificationMode(jvmti, JVMTI_ENABLE, JVMTI_EVENT_VM_INIT, NULL);
    fprintf(stderr, "[hook] VMInit notify = %d\n", (int)err);
    fflush(stderr);

    g_log = fopen("native-bind-log.jsonl", "w");
    if (!g_log) g_log = fopen("native-bind-log.jsonl", "w");
    fprintf(stderr, "[hook] OnLoad done, log=%p\n", (void *)g_log);
    fflush(stderr);
    return JNI_OK;
}
