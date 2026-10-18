import org.objectweb.asm.ClassReader;
import org.objectweb.asm.ClassVisitor;
import org.objectweb.asm.Handle;
import org.objectweb.asm.Label;
import org.objectweb.asm.MethodVisitor;
import org.objectweb.asm.Opcodes;
import org.objectweb.asm.Type;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.net.URL;
import java.net.URLClassLoader;
import java.nio.charset.StandardCharsets;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;

/**
 * Constant-pool decryptor driver (j2cc/mangohide style).
 * Phase 1: ASM scan of invokedynamic sites per class, with a constant-stack
 * simulation to recover the dynamic (encrypted) arguments pushed at each site.
 * Phase 2: force class init (clinit -> Loader.doInit + native stub) and drive
 * each bootstrap reflectively; record decrypted constants as JSONL.
 * Only the decryptor path is exercised; no game code runs.
 */
public class PoolDump {
    static final Object UNK = new Object() {
        @Override public String toString() { return "?"; }
    };

    record Site(String cls, String bsmOwner, String bsmName, String bsmDesc,
                String indyName, String indyDesc, Object[] staticArgs,
                Object[] dynamicArgs, Object[] rawArgs) {}

    /**
     * Symbolic long: field value XOR seed (the obfuscator computes the method
     * key as {@code getstatic longField; ldc2_w seed; lxor} and each site arg
     * as {@code ldc2_w B; lload keyLocal; lxor}). Resolved at runtime by
     * reading the (native-populated) static field via reflection.
     */
    record Sym(String field, long seed) {
        long resolve(ClassLoader cl) throws Exception {
            int dot = field.lastIndexOf('.');
            Class<?> c = Class.forName(field.substring(0, dot).replace('/', '.'), false, cl);
            java.lang.reflect.Field f = c.getDeclaredField(field.substring(dot + 1));
            f.setAccessible(true);
            return f.getLong(null) ^ seed;
        }
    }

    public static void main(String[] args) throws Exception {
        String jarPath = args[0];
        String outPath = args[1];
        List<String> targets = new ArrayList<>();
        for (int i = 2; i < args.length; i++) targets.add(args[i]);

        List<Site> sites = new ArrayList<>();
        try (JarFile jar = new JarFile(jarPath)) {
            for (String cn : targets) {
                String entry = cn.replace('.', '/') + ".class";
                JarEntry e = jar.getJarEntry(entry);
                if (e == null) { System.out.println("MISSING " + cn); continue; }
                byte[] bytes;
                try (InputStream in = jar.getInputStream(e)) {
                    bytes = in.readAllBytes();
                }
                ClassReader cr = new ClassReader(bytes);
                String cls = cn;
                cr.accept(new ClassVisitor(Opcodes.ASM9) {
                    @Override
                    public MethodVisitor visitMethod(int access, String name, String descriptor,
                                                     String signature, String[] exceptions) {
                        return new StackTracker(cls) {
                            @Override
                            public void visitInvokeDynamicInsn(String iname, String idesc,
                                                               Handle bsm, Object... bsmArgs) {
                                Object[] dyn = popArgs(idesc);
                                Object[] raw = new Object[dyn.length];
                                for (int i = 0; i < dyn.length; i++) {
                                    Object d = dyn[i];
                                    if (d instanceof Long || d instanceof Integer || d instanceof String) raw[i] = d;
                                    else if (d instanceof Sym) raw[i] = lastRawLong;
                                    else raw[i] = UNK;
                                }
                                sites.add(new Site(cls, bsm.getOwner(), bsm.getName(),
                                        bsm.getDesc(), iname, idesc, bsmArgs, dyn, raw));
                                pushReturn(idesc);
                            }
                        };
                    }
                }, ClassReader.SKIP_FRAMES | ClassReader.SKIP_DEBUG);
            }
        }
        long known = sites.stream().filter(s -> s.dynamicArgs() != null && !hasUnk(s.dynamicArgs())).count();
        System.out.println("scanned " + targets.size() + " classes, " + sites.size()
                + " indy sites, " + known + " with fully recovered dynamic args");
        List<URL> urls = new ArrayList<>();
        urls.add(new URL("file:" + jarPath));
        String mc = System.getenv("MC_JAR");
        if (mc != null) urls.add(new URL("file:" + mc));
        URLClassLoader cl = new URLClassLoader(urls.toArray(new URL[0]), PoolDump.class.getClassLoader());

        // Preload: load the native decryptor DLL and bootstrap it before ANY
        // payload class init. Loader.<clinit> itself runs a native stub, so the
        // DLL must be loaded first; Loader.loaded is then set so init() never
        // re-loads (init() also needs fabric-loader, absent here).
        String dllPath = System.getenv("POOLDUMP_DLL");
        if (dllPath != null && !dllPath.isEmpty()) preload(cl, dllPath);

        // Force init of every class involved (targets + bootstrap owners + inner classes)
        Map<String, Class<?>> resolved = new HashMap<>();
        List<String> initErrors = new ArrayList<>();
        for (String cn : targets) initQuiet(cn, cl, resolved, initErrors);
        for (Site s : sites) {
            initQuiet(s.bsmOwner().replace('/', '.'), cl, resolved, initErrors);
        }
        System.out.println("init errors: " + initErrors.size());
        for (String err : initErrors) System.out.println("  INIT_FAIL " + err);

        MethodHandles.Lookup lookup = MethodHandles.lookup();
        int ok = 0, fail = 0, skipped = 0;
        try (BufferedWriter w = new BufferedWriter(new FileWriter(outPath, StandardCharsets.UTF_8))) {
            for (Site s : sites) {
                if (s.dynamicArgs() == null || hasUnk(s.dynamicArgs())) { skipped++; continue; }
                try {
                    Object[] concrete = new Object[s.dynamicArgs().length];
                    for (int i = 0; i < s.dynamicArgs().length; i++) {
                        Object a = s.dynamicArgs()[i];
                        concrete[i] = (a instanceof Sym sym) ? sym.resolve(cl) : a;
                    }
                    Site concreteSite = new Site(s.cls(), s.bsmOwner(), s.bsmName(), s.bsmDesc(),
                            s.indyName(), s.indyDesc(), s.staticArgs(), concrete, s.rawArgs());
                    Class<?> owner = resolved.get(s.bsmOwner().replace('/', '.'));
                    if (owner == null) { owner = cl.loadClass(s.bsmOwner().replace('/', '.')); resolved.put(s.bsmOwner(), owner); }
                    Type[] ptypes = Type.getArgumentTypes(s.bsmDesc());
                    Class<?>[] pclasses = new Class<?>[ptypes.length];
                    for (int i = 0; i < ptypes.length; i++) pclasses[i] = toClass(ptypes[i], cl);
                    java.lang.reflect.Method m = owner.getDeclaredMethod(s.bsmName(), pclasses);
                    m.setAccessible(true);
                    List<Object> call = new ArrayList<>();
                    for (Type t : ptypes) {
                        if (t.equals(Type.getType(MethodHandles.Lookup.class))) call.add(lookup);
                        else if (t.equals(Type.getType(String.class))) call.add(s.indyName());
                        else if (t.equals(Type.getType(MethodType.class))) call.add(MethodType.fromMethodDescriptorString(s.indyDesc(), cl));
                        else if (t.getClassName().equals("java.lang.invoke.MutableCallSite"))
                            call.add(new java.lang.invoke.MutableCallSite(MethodType.fromMethodDescriptorString(s.indyDesc(), cl)));
                        else if (t.equals(Type.getType(Object[].class))) call.add(s.staticArgs() == null ? new Object[0] : s.staticArgs());
                        else throw new IllegalStateException("unexpected bsm param " + t);
                    }
                    Object bsmResult = m.invoke(null, call.toArray());
                    Object value;
                    if (bsmResult instanceof CallSite cs) {
                        value = invokeTarget(cs.getTarget(), concreteSite);
                    } else {
                        value = bsmResult;
                    }
                    w.write(jsonSite(concreteSite, value));
                    w.write("\n");
                    ok++;
                } catch (Throwable t) {
                    fail++;
                    if (fail <= 10) {
                        System.out.println("FAIL " + s.cls() + "." + s.bsmName() + " name=" + s.indyName()
                                + " -> " + t);
                    }
                }
            }
        }
        System.out.println("decrypted " + ok + " sites, failed " + fail
                + ", skipped(no/unresolved dyn args) " + skipped + " -> " + outPath);
        String sleepSecs = System.getenv("POOLDUMP_SLEEP");
        if (sleepSecs != null && !sleepSecs.isEmpty()) {
            System.out.println("holding process for registration dump (" + sleepSecs + "s)... PID="
                    + ProcessHandle.current().pid());
            try { Thread.sleep(Long.parseLong(sleepSecs) * 1000L); }
            catch (InterruptedException ignored) { }
        }
    }

    static boolean hasUnk(Object[] a) {
        for (Object o : a) if (o == UNK) return true;
        return false;
    }

    @SuppressWarnings("unchecked")
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
        System.out.println("preloaded native decryptor from " + dllPath + " (key=" + key.length + "B)");
    }

    static Object invokeTarget(java.lang.invoke.MethodHandle target, Site s) throws Throwable {
        MethodType tt = target.type();
        Object[] dyn = s.dynamicArgs();
        Object[] stat = s.staticArgs() == null ? new Object[0] : s.staticArgs();
        if (tt.parameterCount() == dyn.length) {
            return target.invokeWithArguments(dyn);
        }
        if (tt.parameterCount() == dyn.length + stat.length) {
            Object[] all = new Object[stat.length + dyn.length];
            System.arraycopy(stat, 0, all, 0, stat.length);
            System.arraycopy(dyn, 0, all, stat.length, dyn.length);
            return target.invokeWithArguments(all);
        }
        throw new IllegalStateException("target type " + tt + " does not match dyn=" + dyn.length
                + " stat=" + stat.length);
    }

    static void initQuiet(String cn, ClassLoader cl, Map<String, Class<?>> resolved, List<String> errors) {
        if (resolved.containsKey(cn)) return;
        try {
            resolved.put(cn, Class.forName(cn, true, cl));
        } catch (Throwable t) {
            resolved.put(cn, null);
            errors.add(cn + " :: " + t);
        }
    }

    static Class<?> toClass(Type t, ClassLoader cl) throws ClassNotFoundException {
        switch (t.getSort()) {
            case Type.BOOLEAN: return boolean.class;
            case Type.BYTE: return byte.class;
            case Type.CHAR: return char.class;
            case Type.SHORT: return short.class;
            case Type.INT: return int.class;
            case Type.LONG: return long.class;
            case Type.FLOAT: return float.class;
            case Type.DOUBLE: return double.class;
            case Type.VOID: return void.class;
            case Type.OBJECT: case Type.ARRAY: return Class.forName(t.getClassName(), false, cl);
            default: throw new IllegalStateException("sort " + t.getSort());
        }
    }

    static String jsonSite(Site s, Object value) {
        StringBuilder sb = new StringBuilder();
        sb.append("{\"class\":\"").append(s.cls()).append('"');
        sb.append(",\"bsm\":\"").append(s.bsmName()).append('"');
        sb.append(",\"name\":\"").append(esc(s.indyName())).append('"');
        sb.append(",\"desc\":\"").append(s.indyDesc().replace("\\", "\\\\").replace("\"", "\\\"")).append('"');
        if (s.dynamicArgs() != null) sb.append(",\"args\":").append(jsonArray(s.dynamicArgs()));
        if (s.rawArgs() != null) sb.append(",\"raw\":").append(jsonArray(s.rawArgs()));
        sb.append(",\"value\":");
        if (value instanceof String str) {
            sb.append('"').append(esc(str)).append('"');
        } else if (value instanceof Class<?> c) {
            sb.append('"').append("class:").append(c.getName().replace('$', '/')).append('"');
        } else if (value instanceof MethodType mt) {
            sb.append('"').append("type:").append(mt.toMethodDescriptorString().replace("\\", "\\\\")).append('"');
        } else if (value instanceof Enum<?> en) {
            sb.append('"').append("enum:").append(en.getDeclaringClass().getName()).append('#').append(en.name()).append('"');
        } else {
            sb.append(String.valueOf(value));
        }
        sb.append('}');
        return sb.toString();
    }

    static String jsonArray(Object[] vals) {
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < vals.length; i++) {
            if (i > 0) sb.append(',');
            Object v = vals[i];
            if (v instanceof String str) sb.append('"').append(esc(str)).append('"');
            else sb.append(v);
        }
        return sb.append(']').toString();
    }

    static String esc(String s) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == '"') sb.append("\\\"");
            else if (c == '\\') sb.append("\\\\");
            else if (c == '\n') sb.append("\\n");
            else if (c == '\r') sb.append("\\r");
            else if (c == '\t') sb.append("\\t");
            else if (c < 0x20 || c > 0x7e) sb.append(String.format("\\u%04x", (int) c));
            else sb.append(c);
        }
        return sb.toString();
    }

    /**
     * Minimal constant-stack simulation per method. Recovers the constant
     * operands pushed immediately before each invokedynamic; any instruction
     * outside the constant-load subset poisons the stack (sites after it are
     * skipped rather than guessed).
     */
    static abstract class StackTracker extends MethodVisitor {
        final String cls;
        Deque<Object> stack = new ArrayDeque<>();
        Map<Integer, Object> longLocals = new HashMap<>();
        long lastRawLong = 0;
        boolean poisoned = false;

        StackTracker(String cls) {
            super(Opcodes.ASM9);
            this.cls = cls;
        }

        Object pop(Type t) {
            Object v;
            if (t.getSize() == 2) {
                v = stack.isEmpty() ? UNK : stack.pop();
                if (!stack.isEmpty()) stack.pop();
            } else {
                v = stack.isEmpty() ? UNK : stack.pop();
            }
            return (v == UNK || poisoned) ? UNK : v;
        }

        Object popLong() {
            Object v = stack.isEmpty() ? UNK : stack.pop();
            if (!stack.isEmpty()) stack.pop();
            return (v == UNK || poisoned) ? UNK : v;
        }

        void pushLong(Object v) {
            stack.push(UNK);
            stack.push(v);
        }

        void sPop() {
            if (!stack.isEmpty()) stack.pop();
        }

        // combine two longs with XOR: Long^Long -> Long; Long^Sym or Sym^Long -> Sym; Sym^Sym -> UNK
        Object xorLongs(Object a, Object b) {
            if (a instanceof Long x && b instanceof Long y) return x ^ y;
            if (a instanceof Long x && b instanceof Sym y) return new Sym(y.field(), y.seed() ^ x);
            if (a instanceof Sym x && b instanceof Long y) return new Sym(x.field(), x.seed() ^ y);
            return UNK;
        }

        Object[] popArgs(String desc) {
            Type[] ts = Type.getArgumentTypes(desc);
            Object[] vals = new Object[ts.length];
            for (int i = ts.length - 1; i >= 0; i--) vals[i] = pop(ts[i]);
            return vals;
        }

        void pushReturn(String desc) {
            Type t = Type.getReturnType(desc);
            if (t.getSize() == 2) stack.push(UNK);
            stack.push(UNK);
        }

        void poison() {
            stack.clear();
            poisoned = true;
        }

        @Override public void visitInsn(int opcode) {
            switch (opcode) {
                case Opcodes.NOP: break;
                case Opcodes.ACONST_NULL: stack.push(UNK); break;
                case Opcodes.ICONST_M1: stack.push((int) -1); break;
                case Opcodes.ICONST_0: stack.push((int) 0); break;
                case Opcodes.ICONST_1: stack.push((int) 1); break;
                case Opcodes.ICONST_2: stack.push((int) 2); break;
                case Opcodes.ICONST_3: stack.push((int) 3); break;
                case Opcodes.ICONST_4: stack.push((int) 4); break;
                case Opcodes.ICONST_5: stack.push((int) 5); break;
                case Opcodes.LCONST_0: pushLong((long) 0); break;
                case Opcodes.LCONST_1: pushLong((long) 1); break;
                case Opcodes.FCONST_0: stack.push((float) 0); break;
                case Opcodes.FCONST_1: stack.push((float) 1); break;
                case Opcodes.FCONST_2: stack.push((float) 2); break;
                case Opcodes.DCONST_0: stack.push(UNK); stack.push((double) 0); break;
                case Opcodes.DCONST_1: stack.push(UNK); stack.push((double) 1); break;
                case Opcodes.LXOR: {
                    Object b = popLong();
                    Object a = popLong();
                    pushLong(xorLongs(a, b));
                    break;
                }
                case Opcodes.LAND: {
                    Object b = popLong();
                    Object a = popLong();
                    if (a instanceof Long x && b instanceof Long y) pushLong(x & y);
                    else pushLong(UNK);
                    break;
                }
                case Opcodes.LOR: {
                    Object b = popLong();
                    Object a = popLong();
                    if (a instanceof Long x && b instanceof Long y) pushLong(x | y);
                    else pushLong(UNK);
                    break;
                }
                case Opcodes.LNEG: {
                    Object a = popLong();
                    if (a instanceof Long x) pushLong(-x);
                    else pushLong(UNK);
                    break;
                }
                case Opcodes.POP: sPop(); break;
                case Opcodes.POP2: sPop(); sPop(); break;
                case Opcodes.DUP: {
                    Object v = stack.isEmpty() ? UNK : stack.peek();
                    stack.push(v == UNK ? UNK : v);
                    break;
                }
                case Opcodes.DUP2: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v2); stack.push(v1); stack.push(v2); stack.push(v1);
                    break;
                }
                case Opcodes.DUP_X1: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v1); stack.push(v2); stack.push(v1);
                    break;
                }
                case Opcodes.DUP_X2: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    Object v3 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v1); stack.push(v3); stack.push(v2); stack.push(v1);
                    break;
                }
                case Opcodes.DUP2_X1: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    Object v3 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v2); stack.push(v1); stack.push(v3); stack.push(v2); stack.push(v1);
                    break;
                }
                case Opcodes.DUP2_X2: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    Object v3 = stack.isEmpty() ? UNK : stack.pop();
                    Object v4 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v2); stack.push(v1); stack.push(v4); stack.push(v3); stack.push(v2); stack.push(v1);
                    break;
                }
                case Opcodes.SWAP: {
                    Object v1 = stack.isEmpty() ? UNK : stack.pop();
                    Object v2 = stack.isEmpty() ? UNK : stack.pop();
                    stack.push(v1); stack.push(v2);
                    break;
                }
                case Opcodes.NEWARRAY: {
                    sPop();
                    stack.push(UNK);
                    break;
                }
                case Opcodes.IALOAD: case Opcodes.AALOAD: case Opcodes.FALOAD:
                case Opcodes.BALOAD: case Opcodes.CALOAD: case Opcodes.SALOAD:
                    sPop(); sPop(); stack.push(UNK);
                    break;
                case Opcodes.LALOAD: case Opcodes.DALOAD:
                    sPop(); sPop(); stack.push(UNK); stack.push(UNK);
                    break;
                case Opcodes.IASTORE: case Opcodes.AASTORE: case Opcodes.FASTORE:
                case Opcodes.BASTORE: case Opcodes.CASTORE: case Opcodes.SASTORE:
                    sPop(); sPop(); sPop();
                    break;
                case Opcodes.LASTORE: case Opcodes.DASTORE:
                    sPop(); sPop(); sPop(); sPop();
                    break;
                case Opcodes.ARRAYLENGTH:
                    sPop(); stack.push(UNK);
                    break;
                case Opcodes.IRETURN: case Opcodes.ARETURN: case Opcodes.FRETURN:
                    sPop();
                    break;
                case Opcodes.LRETURN: case Opcodes.DRETURN:
                    popLong();
                    break;
                case Opcodes.RETURN:
                    break;
                case Opcodes.ATHROW:
                    sPop(); poison();
                    break;
                case Opcodes.MONITORENTER: case Opcodes.MONITOREXIT:
                    sPop();
                    break;
                default: poison(); break;
            }
        }

        @Override public void visitIntInsn(int opcode, int operand) {
            if (opcode == Opcodes.BIPUSH || opcode == Opcodes.SIPUSH) stack.push(operand);
            else if (opcode == Opcodes.NEWARRAY) { sPop(); stack.push(UNK); }
            else poison();
        }

        @Override public void visitVarInsn(int opcode, int varIndex) {
            switch (opcode) {
                case Opcodes.LSTORE:
                    longLocals.put(varIndex, popLong());
                    break;
                case Opcodes.LLOAD:
                    pushLong(longLocals.getOrDefault(varIndex, UNK));
                    break;
                case Opcodes.DLOAD:
                    stack.push(UNK); stack.push(UNK); break;
                case Opcodes.DSTORE:
                    pop(Type.DOUBLE_TYPE);
                    break;
                default: stack.push(UNK); break;
            }
        }

        @Override public void visitTypeInsn(int opcode, String type) {
            if (opcode == Opcodes.CHECKCAST) {
                // no stack change
            } else if (opcode == Opcodes.INSTANCEOF) {
                sPop();
                stack.push(UNK);
            } else {
                stack.push(UNK);
            }
        }

        @Override public void visitFieldInsn(int opcode, String owner, String name, String desc) {
            Type t = Type.getType(desc);
            if (opcode == Opcodes.GETSTATIC) {
                if (t.getSize() == 2) {
                    if (t.getDescriptor().equals("J")) pushLong(new Sym(owner + "." + name, 0));
                    else { stack.push(UNK); stack.push(UNK); }
                } else {
                    stack.push(UNK);
                }
            } else if (opcode == Opcodes.PUTSTATIC) {
                pop(t);
            } else if (opcode == Opcodes.GETFIELD) {
                sPop();
                if (t.getSize() == 2) { stack.push(UNK); stack.push(UNK); }
                else stack.push(UNK);
            } else {
                pop(t);
                sPop();
            }
        }

        @Override public void visitMethodInsn(int opcode, String owner, String name, String desc, boolean itf) {
            if (opcode != Opcodes.INVOKESTATIC) {
                sPop();
            }
            Type[] ts = Type.getArgumentTypes(desc);
            for (int i = ts.length - 1; i >= 0; i--) pop(ts[i]);
            pushReturn(desc);
        }

        @Override public void visitLdcInsn(Object cst) {
            if (cst instanceof Integer || cst instanceof Float) stack.push(cst);
            else if (cst instanceof Long || cst instanceof Double) { if (cst instanceof Long) lastRawLong = (Long) cst; stack.push(UNK); stack.push(cst); }
            else if (cst instanceof String) stack.push(cst);
            else stack.push(UNK);
        }

        @Override public void visitJumpInsn(int opcode, Label label) {
            if (opcode >= Opcodes.IF_ICMPEQ && opcode <= Opcodes.IF_ICMPLE) { pop(Type.INT_TYPE); pop(Type.INT_TYPE); }
            else if (opcode >= Opcodes.IFEQ && opcode <= Opcodes.IFLE) pop(Type.INT_TYPE);
            else if (opcode == Opcodes.IFNULL || opcode == Opcodes.IFNONNULL) sPop();
            else if (opcode == Opcodes.IF_ACMPEQ || opcode == Opcodes.IF_ACMPNE) { sPop(); sPop(); }
            stack.clear();
            poisoned = true;
        }

        @Override public void visitTableSwitchInsn(int min, int max, Label dflt, Label... labels) {
            pop(Type.INT_TYPE);
            stack.clear();
            poisoned = true;
        }

        @Override public void visitLookupSwitchInsn(Label dflt, int[] keys, Label[] labels) {
            pop(Type.INT_TYPE);
            stack.clear();
            poisoned = true;
        }

        @Override public void visitMultiANewArrayInsn(String desc, int dims) {
            for (int i = 0; i < dims; i++) pop(Type.INT_TYPE);
            stack.push(UNK);
        }
    }
}
