import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.InputStream;
import java.lang.reflect.Constructor;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.net.URL;
import java.net.URLClassLoader;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

/**
 * Native surface sweep driver.
 *
 * Mode "sweep": force-init every class that declares native methods
 * (clinit -> Loader.doInit -> RegisterNatives); the JVMTI hook.dll agent logs
 * every binding. Progress is appended to a manifest after EACH class so a
 * crashed process resumes where it died.
 *
 * Mode "invoke": additionally invoke each captured native method once with
 * null/zero arguments so lazy encrypted code blobs decrypt at first execution.
 * A crash kills only the current call; the manifest marks the method as
 * "inflight" so the outer loop can retry or skip it.
 *
 * No game code runs; only payload class init + single-shot native calls,
 * under Wine with network disabled.
 */
public class NativeSweep {
    static String progressFile;
    static BufferedWriter progress;
    static final java.util.Map<String, Object> receivers = new java.util.HashMap<>();

    public static void main(String[] args) throws Exception {
        String mode = args[0];            // sweep | invoke
        String jarPath = args[1];
        String listFile = args[2];        // classes (sweep) or class!method!sig lines (invoke)
        progressFile = args[3] + ".progress";
        String doneFile = args[3] + ".done";

        List<String> lines = new ArrayList<>();
        try (BufferedReader r = new BufferedReader(new FileReader(listFile, StandardCharsets.UTF_8))) {
            for (String l; (l = r.readLine()) != null; ) {
                l = l.trim();
                if (!l.isEmpty() && !l.startsWith("#")) lines.add(l);
            }
        }

        // resume: skip entries already marked DONE or CRASHED by a previous run
        List<String> skip = new ArrayList<>();
        try (BufferedReader r = new BufferedReader(new FileReader(doneFile, StandardCharsets.UTF_8))) {
            for (String l; (l = r.readLine()) != null; ) {
                l = l.trim();
                if (l.startsWith("DONE ") || l.startsWith("CRASHED ")) skip.add(l.substring("DONE ".length()));
            }
        } catch (Exception ignored) { }

        List<URL> urls = new ArrayList<>();
        urls.add(new URL("file:" + jarPath));
        String mc = System.getenv("MC_JAR");
        if (mc != null && !mc.isEmpty()) urls.add(new URL("file:" + mc));
        URLClassLoader cl = new URLClassLoader(urls.toArray(new URL[0]), NativeSweep.class.getClassLoader());

        String dllPath = System.getenv("POOLDUMP_DLL");
        if (dllPath != null && !dllPath.isEmpty()) preload(dllPath, cl);

        progress = new BufferedWriter(new FileWriter(progressFile, StandardCharsets.UTF_8, true));

        int modeInvoke = mode.equals("invoke") ? 1 : 0;
        int started = skip.size();
        System.out.println("mode=" + mode + " entries=" + lines.size() + " skipped=" + started);
        for (int i = 0; i < lines.size(); i++) {
            String entry = lines.get(i);
            if (skip.contains(entry)) continue;
            log("INFLIGHT " + entry);
            try {
                if (modeInvoke == 1) invokeEntry(entry, cl);
                else sweepEntry(entry, cl);
                log("DONE " + entry);
            } catch (Throwable t) {
                Throwable cause = t.getCause() != null ? t.getCause() : t;
                log("ERROR " + entry + " :: " + t + " :: root=" + cause);
                log("DONE " + entry);
            }
            try (BufferedWriter d = new BufferedWriter(new FileWriter(doneFile, StandardCharsets.UTF_8, true))) {
                d.write("DONE " + entry);
                d.write("\n");
            }
        }
        log("ALLDONE");
        System.out.println("sweep complete");

        String sleepSecs = System.getenv("SWEEP_SLEEP");
        if (sleepSecs != null && !sleepSecs.isEmpty()) {
            System.out.println("holding process for memory dump (" + sleepSecs + "s)... PID="
                    + ProcessHandle.current().pid());
            System.out.flush();
            try { Thread.sleep(Long.parseLong(sleepSecs) * 1000L); }
            catch (InterruptedException ignored) { }
        }
        System.exit(0);
    }

    static void sweepEntry(String cn, ClassLoader cl) throws ClassNotFoundException {
        Class.forName(cn, true, cl);
    }

    static void invokeEntry(String entry, ClassLoader cl) throws Exception {
        String[] parts = entry.split("!");
        String cn = parts[0];
        String mname = parts[1].equals("~init") ? "<init>" : parts[1];
        String mdesc = parts.length > 2 ? parts[2] : null;

        Class<?> c = Class.forName(cn, true, cl);

        if (mname.equals("<init>")) {
            for (Constructor<?> k : c.getDeclaredConstructors()) {
                if (mdesc == null || k.toString().contains(mdesc) || descMatches(k.getParameterTypes(), mdesc)) {
                    k.setAccessible(true);
                    Class<?>[] ps = k.getParameterTypes();
                    Object[] argv = zeroArgs(ps);
                    try {
                        k.newInstance(argv);
                    } catch (Throwable t) {
                        Throwable cause = t.getCause() != null ? t.getCause() : t;
                        System.out.println("ctor-threw " + cn + " :: " + cause);
                    }
                    if (mdesc != null) return;
                }
            }
            return;
        }

        for (Method m : c.getDeclaredMethods()) {
            if (!m.getName().equals(mname)) continue;
            if (mdesc != null && !descMatches(m.getParameterTypes(), mdesc)) continue;
            m.setAccessible(true);
            Class<?>[] ps = m.getParameterTypes();
            Object recv = null;
            if (!Modifier.isStatic(m.getModifiers())) {
                recv = receivers.get(cn);
                if (recv == null) {
                    for (Constructor<?> k : c.getDeclaredConstructors()) {
                        k.setAccessible(true);
                        try {
                            recv = k.newInstance(zeroArgs(k.getParameterTypes()));
                            receivers.put(cn, recv);
                            System.out.println("constructed " + cn + " (" + k.getParameterCount() + " args)");
                            break;
                        } catch (Throwable t) {
                            Throwable cause = t.getCause() != null ? t.getCause() : t;
                            System.out.println("ctor-fail " + cn + " :: " + cause);
                        }
                    }
                }
            }
            try {
                m.invoke(recv, zeroArgs(ps));
            } catch (Throwable t) {
                Throwable cause = t.getCause() != null ? t.getCause() : t;
                System.out.println("invoke-threw " + cn + "." + mname + " :: " + cause);
            }
            if (mdesc == null) return;
        }
    }

    static boolean descMatches(Class<?>[] ps, String jvmDesc) {
        if (jvmDesc == null || jvmDesc.isEmpty()) return true;
        StringBuilder sb = new StringBuilder("(");
        for (Class<?> p : ps) sb.append(typeDesc(p));
        sb.append(")");
        return jvmDesc.startsWith(sb.toString());
    }

    static String typeDesc(Class<?> c) {
        if (c == int.class) return "I";
        if (c == long.class) return "J";
        if (c == double.class) return "D";
        if (c == float.class) return "F";
        if (c == boolean.class) return "Z";
        if (c == byte.class) return "B";
        if (c == char.class) return "C";
        if (c == short.class) return "S";
        if (c == void.class) return "V";
        if (c.isArray()) return c.getName().replace('.', '/');
        return "L" + c.getName().replace('.', '/') + ";";
    }

    static Object[] zeroArgs(Class<?>[] ps) {
        Object[] a = new Object[ps.length];
        for (int i = 0; i < ps.length; i++) {
            Class<?> p = ps[i];
            if (!p.isPrimitive()) a[i] = null;
            else if (p == boolean.class) a[i] = Boolean.FALSE;
            else if (p == byte.class) a[i] = (byte) 0;
            else if (p == char.class) a[i] = (char) 0;
            else if (p == short.class) a[i] = (short) 0;
            else if (p == int.class) a[i] = 0;
            else if (p == long.class) a[i] = 0L;
            else if (p == float.class) a[i] = 0f;
            else if (p == double.class) a[i] = 0d;
        }
        return a;
    }

    static synchronized void log(String s) {
        try {
            progress.write(s); progress.write("\n"); progress.flush();
        } catch (Exception ignored) { }
        System.out.println(s);
        System.out.flush();
    }

    static void preload(String dllPath, ClassLoader cl) throws Exception {
        System.load(dllPath);
        Class<?> loader = Class.forName("native.Loader", true, cl);
        byte[] key;
        try (InputStream in = cl.getResourceAsStream("native/info")) {
            if (in == null) throw new IllegalStateException("native/info not found on classpath");
            java.io.DataInputStream d = new java.io.DataInputStream(in);
            d.readUTF();
            d.readLong();
            d.readLong();
            key = new byte[48];
            d.readFully(key);
        }
        Method m = loader.getDeclaredMethod("bootstrap", byte[].class);
        m.setAccessible(true);
        m.invoke(null, (Object) key);
        java.lang.reflect.Field f = loader.getDeclaredField("loaded");
        f.setAccessible(true);
        ((java.util.concurrent.atomic.AtomicBoolean) f.get(null)).set(true);
        System.out.println("preloaded native decryptor from " + dllPath + " (key=" + key.length + "B)");
    }
}
