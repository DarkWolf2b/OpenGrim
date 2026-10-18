import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.InputStream;
import java.lang.reflect.Method;
import java.net.URL;
import java.net.URLClassLoader;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

/**
 * Resolves the DES bootstrap call sites of the GUI classes by reflecting on
 * the initialized classes' own (pure-Java) resolution helpers.
 *
 * Same sandboxed decryptor posture as PoolDump: preload native.Loader with
 * the DLL key bootstrap, force-init target classes, then for every
 * <code>Class.Lm("c", (int)idx, (long)(SEED ^ key))</code>-style site found in
 * the decompiled CFR source, compute the concrete long and invoke the class's
 * String/int resolution helper reflectively.
 */
public class GuiStrings {
    // long VAR = FIELD ^ 0x123L;   |   VAR = Class.FIELD ^ 123L;
    static final Pattern KEY_ASSIGN = Pattern.compile(
            "(?:long\\s+)?(\\w+)\\s*=\\s*(?:\\w+\\.)?(\\w+)\\s*\\^\\s*(0x[0-9A-Fa-f]+L|\\d+L)");
    // .Lm("c", (int)123, (long)(0xABCL ^ l2))   OR  (long)l2  OR  (long)0xABCL
    static final Pattern SITE = Pattern.compile(
            "\\.((?:L|l|N|Q|E|A)[A-Za-z]{0,3})\\(\"([^\"]+)\", \\(int\\)(\\d+), \\(long\\)(?:\\((0x[0-9A-Fa-f]+L|\\d+L) \\^ (\\w+)\\)|(\\w+)|(0x[0-9A-Fa-f]+L|\\d+L))\\)");
    // private static String Lk(int n2, long l2) {   /  private static int Ln(...)
    static final Pattern STR_HELPER = Pattern.compile("private static String (\\w+)\\(int \\w+, long \\w+\\)");
    static final Pattern INT_HELPER = Pattern.compile("private static int (\\w+)\\(int \\w+, long \\w+\\)");
    // bz.kleqM = gb.aYR(...)
    static final Pattern KEY_FIELD = Pattern.compile("(\\w+)\\.(\\w+) = gb\\.aYR\\(");

    public static void main(String[] args) throws Exception {
        String jarPath = args[0];
        String srcDir = args[1];
        String outPath = args[2];
        List<String> targets = new ArrayList<>();
        for (int i = 3; i < args.length; i++) targets.add(args[i]);

        List<URL> urls = new ArrayList<>();
        urls.add(new URL("file:" + jarPath));
        String mc = System.getenv("MC_JAR");
        if (mc != null && !mc.isEmpty()) urls.add(new URL("file:" + mc));
        URLClassLoader cl = new URLClassLoader(urls.toArray(new URL[0]), GuiStrings.class.getClassLoader());

        String dllPath = System.getenv("POOLDUMP_DLL");
        if (dllPath != null && !dllPath.isEmpty()) preload(cl, dllPath);

        try (BufferedWriter w = new BufferedWriter(new FileWriter(outPath, StandardCharsets.UTF_8))) {
            for (String cn : targets) {
                Class<?> clazz;
                try {
                    clazz = Class.forName(cn, true, cl);
                } catch (Throwable t) {
                    System.out.println("INIT_FAIL " + cn + " :: " + t);
                    continue;
                }
                Path src = null;
                {
                    for (String line : Files.readAllLines(Path.of(srcDir, "manifest.txt"))) {
                        String[] parts = line.trim().split("\\s+");
                        if (parts.length == 2 && parts[0].equals(cn)) src = Path.of(srcDir, parts[1]);
                    }
                }
                if (src == null) { System.out.println("NO_SRC " + cn); continue; }
                String srcText = Files.readString(src, StandardCharsets.UTF_8);

                // key field: find "X.field = gb.aYR(" in clinit
                String fieldName = null;
                Matcher kf = KEY_FIELD.matcher(srcText);
                if (kf.find()) fieldName = kf.group(2);
                long fieldValue = 0;
                if (fieldName != null) {
                    try {
                        java.lang.reflect.Field f = clazz.getDeclaredField(fieldName);
                        f.setAccessible(true);
                        fieldValue = f.getLong(null);
                    } catch (Throwable t) {
                        System.out.println("NO_FIELD " + cn + "." + fieldName + " :: " + t);
                        continue;
                    }
                }

                String strHelper = null, intHelper = null;
                Matcher sh = STR_HELPER.matcher(srcText);
                if (sh.find()) strHelper = sh.group(1);
                Matcher ih = INT_HELPER.matcher(srcText);
                if (ih.find()) intHelper = ih.group(1);
                Method strM = null, intM = null;
                try { if (strHelper != null) { strM = clazz.getDeclaredMethod(strHelper, int.class, long.class); strM.setAccessible(true); } }
                catch (Throwable t) { System.out.println("NO_STR_HELPER " + cn + "." + strHelper); }
                try { if (intHelper != null) { intM = clazz.getDeclaredMethod(intHelper, int.class, long.class); intM.setAccessible(true); } }
                catch (Throwable t) { System.out.println("NO_INT_HELPER " + cn + "." + intHelper); }

                // walk the source sequentially: current key-var assignments, then sites
                Map<String, Long> vars = new HashMap<>();
                int ok = 0, fail = 0;
                Matcher m = KEY_ASSIGN.matcher(srcText);
                List<int[]> dummy = null;
                // process both assignment and site patterns in document order
                Pattern any = Pattern.compile(KEY_ASSIGN.pattern() + "|" + SITE.pattern());
                Matcher am = any.matcher(srcText);
                StringBuilder sb = new StringBuilder();
                while (am.find()) {
                    String g1 = am.groupCount() >= 1 ? am.group(1) : null;
                    if (am.group(2) != null && (am.group(3) != null)) {
                        // KEY_ASSIGN alternative matched: groups 1,2,3
                        long num = parseLong(am.group(3));
                        vars.put(am.group(1), fieldValue ^ num);
                    } else {
                        // SITE matched: groups shift by 3
                        String helper = am.group(4);
                        String siteName = am.group(5);
                        int idx = Integer.parseInt(am.group(6));
                        Long val = null;
                        if (am.group(7) != null && am.group(8) != null) {
                            Long base = vars.get(am.group(8));
                            if (base == null) base = 0L;
                            val = parseLong(am.group(7)) ^ base;
                        } else if (am.group(9) != null) {
                            Long base = vars.get(am.group(9));
                            val = base == null ? null : base;
                        } else if (am.group(10) != null) {
                            val = parseLong(am.group(10));
                        }
                        if (val == null) { fail++; continue; }
                        String value;
                        try {
                            if (strM != null && looksLikeStringHelper(helper, siteName, strHelper)) {
                                value = (String) strM.invoke(null, idx, val);
                            } else if (intM != null && looksLikeIntHelper(helper, siteName, intHelper)) {
                                value = String.valueOf((Integer) intM.invoke(null, idx, val));
                            } else {
                                fail++; continue;
                            }
                        } catch (Throwable t) {
                            fail++;
                            if (fail < 5) System.out.println("RESOLVE_FAIL " + cn + "." + helper + "(" + idx + ") :: " + t);
                            continue;
                        }
                        ok++;
                        sb.append("{\"class\":\"").append(cn).append("\",\"site\":\"").append(helper)
                          .append("\",\"name\":\"").append(siteName).append("\",\"idx\":").append(idx)
                          .append(",\"key\":").append(val).append(",\"value\":")
                          .append(jsonValue(value)).append("}\n");
                    }
                }
                w.write(sb.toString());
                System.out.println(cn + ": resolved " + ok + " sites, failed/skipped " + fail);
            }
        }
        System.out.println("done -> " + outPath);
    }

    static boolean looksLikeStringHelper(String site, String siteName, String strHelper) {
        return strHelper != null && !siteName.equals("t") && !siteName.equals("r");
    }
    static boolean looksLikeIntHelper(String site, String siteName, String intHelper) {
        return intHelper != null && (siteName.equals("t") || siteName.equals("r"));
    }

    static long parseLong(String s) {
        s = s.endsWith("L") ? s.substring(0, s.length() - 1) : s;
        return s.startsWith("0x") || s.startsWith("0X") ? Long.parseLong(s.substring(2), 16) : Long.parseLong(s);
    }

    static String jsonValue(String s) {
        StringBuilder sb = new StringBuilder("\"");
        for (char c : s.toCharArray()) {
            if (c == '"') sb.append("\\\"");
            else if (c == '\\') sb.append("\\\\");
            else if (c == '\n') sb.append("\\n");
            else if (c == '\r') sb.append("\\r");
            else if (c == '\t') sb.append("\\t");
            else if (c < 0x20 || c > 0x7e) sb.append(String.format("\\u%04x", (int) c));
            else sb.append(c);
        }
        return sb.append('"').toString();
    }

    static void preload(ClassLoader cl, String dllPath) throws Exception {
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
        java.lang.reflect.Method m = loader.getDeclaredMethod("bootstrap", byte[].class);
        m.setAccessible(true);
        m.invoke(null, (Object) key);
        java.lang.reflect.Field f = loader.getDeclaredField("loaded");
        f.setAccessible(true);
        ((java.util.concurrent.atomic.AtomicBoolean) f.get(null)).set(true);
        System.out.println("preloaded native decryptor from " + dllPath);
    }
}