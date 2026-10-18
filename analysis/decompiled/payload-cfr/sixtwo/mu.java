/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.ListIterator;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Objects;
import java.util.Spliterator;
import java.util.concurrent.atomic.AtomicReference;
import java.util.function.Consumer;
import java.util.function.Predicate;
import java.util.function.UnaryOperator;
import java.util.stream.Stream;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.mr;
import sixtwo.mu$uO;

public class mu<T>
implements List<T> {
    private final AtomicReference<List<T>> jbniD = new AtomicReference(List.of());
    private static final long syNob = gb.aYR(-8841223941323317669L, 1949852818307639758L, MethodHandles.lookup().lookupClass()).a(175576887778821L);
    private static final String[] hvxpO;
    private static final String[] NeXuT;
    private static final Map OcIYx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public List<T> cmj() {
        return this.jbniD.get();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        OcIYx = new HashMap(13);
        long l = syNob ^ 0x37E0EAB4519DL;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n = 0;
        String string = "\u00e9\u00ad\u00c9\u001e\u0007\u00c6\u0092?\u009a\u00da\u00d3/z\u001e\u00ba\u00a95%;\u00bc\u00fd\u00c76\u0099\u0018\u00fa5-2`5\u00b9\u00a2<\u00e9V\u00b8\u008f\u00b3\u00ff\u001ec\u0085\u008e\u0099o\u0003\u00e4r";
        int n2 = "\u00e9\u00ad\u00c9\u001e\u0007\u00c6\u0092?\u009a\u00da\u00d3/z\u001e\u00ba\u00a95%;\u00bc\u00fd\u00c76\u0099\u0018\u00fa5-2`5\u00b9\u00a2<\u00e9V\u00b8\u008f\u00b3\u00ff\u001ec\u0085\u008e\u0099o\u0003\u00e4r".length();
        int n3 = 24;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = mu.cmy(byArray3).intern();
            if ((n4 += n3) >= n2) {
                hvxpO = stringArray;
                NeXuT = new String[2];
                return;
            }
            n3 = string.charAt(n4);
        }
    }

    @Override
    public T remove(int n) {
        AtomicReference atomicReference = new AtomicReference();
        this.cmi(list -> {
            ArrayList arrayList = new ArrayList(list);
            atomicReference.set(arrayList.remove(n));
            return arrayList;
        });
        return (T)atomicReference.get();
    }

    @Override
    public boolean remove(Object object) {
        return this.cmi(list -> {
            block5: {
                List list2;
                block4: {
                    long l = syNob ^ 0x6E04C9F358F3L;
                    int[] nArray = mr.clW();
                    try {
                        try {
                            list2 = list;
                            if (nArray != null) break block4;
                            if (list2.contains(object)) break block5;
                        }
                        catch (NoSuchElementException noSuchElementException) {
                            throw mu.cmx(noSuchElementException);
                        }
                        list2 = list;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                }
                return list2;
            }
            ArrayList arrayList = new ArrayList(list);
            arrayList.remove(object);
            return arrayList;
        });
    }

    @Override
    public int size() {
        return this.cmj().size();
    }

    @Override
    public T get(int n) {
        return this.cmj().get(n);
    }

    @Override
    public int indexOf(Object object) {
        return this.cmj().indexOf(object);
    }

    @Override
    public void clear() {
        this.jbniD.set(List.of());
    }

    @Override
    public int lastIndexOf(Object object) {
        return this.cmj().lastIndexOf(object);
    }

    @Override
    public boolean isEmpty() {
        return this.cmj().isEmpty();
    }

    @Override
    public void add(int n, T t) {
        this.cmi(list -> {
            ArrayList<Object> arrayList = new ArrayList<Object>((Collection<Object>)list);
            arrayList.add(n, t);
            return arrayList;
        });
    }

    @Override
    public boolean add(T t) {
        return this.cmi(list -> {
            ArrayList<Object> arrayList = new ArrayList<Object>(list.size() + 1);
            arrayList.addAll((Collection<Object>)list);
            arrayList.add(t);
            return arrayList;
        });
    }

    @Override
    public List<T> subList(int n, int n2) {
        return this.cmj().subList(n, n2);
    }

    @Override
    public <E> E[] toArray(E[] EArray) {
        return this.cmj().toArray(EArray);
    }

    @Override
    public Object[] toArray() {
        return this.cmj().toArray();
    }

    @Override
    public Iterator<T> iterator() {
        return this.cmj().iterator();
    }

    @Override
    public Stream<T> stream() {
        return this.cmj().stream();
    }

    @Override
    public boolean contains(Object object) {
        return this.cmj().contains(object);
    }

    @Override
    public Spliterator<T> spliterator() {
        return this.cmj().spliterator();
    }

    @Override
    public boolean addAll(int n, Collection<? extends T> collection) {
        boolean bl;
        block4: {
            block5: {
                long l = syNob ^ 0x1BB00665E501L;
                int[] nArray = mr.clW();
                Objects.requireNonNull(collection);
                int[] nArray2 = nArray;
                try {
                    try {
                        bl = collection.isEmpty();
                        if (nArray2 != null) break block4;
                        if (!bl) break block5;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                    return false;
                }
                catch (NoSuchElementException noSuchElementException) {
                    throw mu.cmx(noSuchElementException);
                }
            }
            bl = this.cmi(list -> {
                ArrayList arrayList = new ArrayList(list);
                arrayList.addAll(n, collection);
                return arrayList;
            });
        }
        return bl;
    }

    @Override
    public boolean addAll(Collection<? extends T> collection) {
        boolean bl;
        block4: {
            block5: {
                long l = syNob ^ 0x7B7F038F1D33L;
                int[] nArray = mr.clW();
                Objects.requireNonNull(collection);
                int[] nArray2 = nArray;
                try {
                    try {
                        bl = collection.isEmpty();
                        if (nArray2 != null) break block4;
                        if (!bl) break block5;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                    return false;
                }
                catch (NoSuchElementException noSuchElementException) {
                    throw mu.cmx(noSuchElementException);
                }
            }
            bl = this.cmi(list -> {
                ArrayList arrayList = new ArrayList(list.size() + collection.size());
                arrayList.addAll(list);
                arrayList.addAll(collection);
                return arrayList;
            });
        }
        return bl;
    }

    @Override
    public T set(int n, T t) {
        AtomicReference atomicReference = new AtomicReference();
        this.cmi(list -> {
            ArrayList<Object> arrayList = new ArrayList<Object>((Collection<Object>)list);
            atomicReference.set(arrayList.set(n, t));
            return arrayList;
        });
        return (T)atomicReference.get();
    }

    @Override
    public void forEach(Consumer<? super T> consumer) {
        this.cmj().forEach(consumer);
    }

    @Override
    public void sort(Comparator<? super T> comparator) {
        Objects.requireNonNull(comparator);
        this.cmi(list -> {
            block5: {
                List list2;
                block4: {
                    long l = syNob ^ 0x4EB86371F8B2L;
                    int[] nArray = mr.clW();
                    try {
                        try {
                            list2 = list;
                            if (nArray != null) break block4;
                            if (list2.size() > 1) break block5;
                        }
                        catch (NoSuchElementException noSuchElementException) {
                            throw mu.cmx(noSuchElementException);
                        }
                        list2 = list;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                }
                return list2;
            }
            ArrayList arrayList = new ArrayList(list);
            arrayList.sort(comparator);
            return arrayList;
        });
    }

    @Override
    public boolean removeIf(Predicate<? super T> predicate) {
        Objects.requireNonNull(predicate);
        return this.cmi(arg_0 -> mu.cmm(predicate, arg_0));
    }

    @Override
    public T getFirst() {
        List<T> list;
        block4: {
            List<T> list2;
            block5: {
                long l = syNob ^ 0x472F9A48EB67L;
                list2 = this.jbniD.get();
                int[] nArray = mr.clW();
                try {
                    try {
                        list = list2;
                        if (nArray != null) break block4;
                        if (!list.isEmpty()) break block5;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                    throw new NoSuchElementException((String)((Object)mu.cmB("g", (int)22303, (long)(0x4F10BEA5F1836CC2L ^ l))));
                }
                catch (NoSuchElementException noSuchElementException) {
                    throw mu.cmx(noSuchElementException);
                }
            }
            list = list2.get(0);
        }
        return (T)list;
    }

    @Override
    public T getLast() {
        List<T> list;
        block4: {
            List<T> list2;
            block5: {
                long l = syNob ^ 0x7BC3E5E0A04CL;
                list2 = this.jbniD.get();
                int[] nArray = mr.clW();
                try {
                    try {
                        list = list2;
                        if (nArray != null) break block4;
                        if (!list.isEmpty()) break block5;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                    throw new NoSuchElementException((String)((Object)mu.cmB("g", (int)1340, (long)(0x18D39355C76E75CBL ^ l))));
                }
                catch (NoSuchElementException noSuchElementException) {
                    throw mu.cmx(noSuchElementException);
                }
            }
            list = list2.get(list2.size() - 1);
        }
        return (T)list;
    }

    @Override
    public boolean removeAll(Collection<?> collection) {
        Objects.requireNonNull(collection);
        return this.cmi(list -> {
            ArrayList arrayList;
            block4: {
                ArrayList arrayList2;
                block5: {
                    long l = syNob ^ 0x65AC6BE94E41L;
                    arrayList2 = new ArrayList(list);
                    int[] nArray = mr.clW();
                    try {
                        try {
                            arrayList = arrayList2;
                            if (nArray != null) break block4;
                            if (arrayList.removeAll(collection)) break block5;
                        }
                        catch (NoSuchElementException noSuchElementException) {
                            throw mu.cmx(noSuchElementException);
                        }
                        return list;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                }
                arrayList = arrayList2;
            }
            return arrayList;
        });
    }

    @Override
    public boolean retainAll(Collection<?> collection) {
        Objects.requireNonNull(collection);
        return this.cmi(list -> {
            ArrayList arrayList;
            block4: {
                ArrayList arrayList2;
                block5: {
                    long l = syNob ^ 0x418B5E2A1D98L;
                    arrayList2 = new ArrayList(list);
                    int[] nArray = mr.clW();
                    try {
                        try {
                            arrayList = arrayList2;
                            if (nArray != null) break block4;
                            if (arrayList.retainAll(collection)) break block5;
                        }
                        catch (NoSuchElementException noSuchElementException) {
                            throw mu.cmx(noSuchElementException);
                        }
                        return list;
                    }
                    catch (NoSuchElementException noSuchElementException) {
                        throw mu.cmx(noSuchElementException);
                    }
                }
                arrayList = arrayList2;
            }
            return arrayList;
        });
    }

    @Override
    public ListIterator<T> listIterator(int n) {
        return this.cmj().listIterator(n);
    }

    @Override
    public ListIterator<T> listIterator() {
        return this.cmj().listIterator();
    }

    @Override
    public boolean containsAll(Collection<?> collection) {
        return new HashSet<T>(this.cmj()).containsAll(collection);
    }

    public Iterable<T> cmk() {
        return this::cml;
    }

    /*
     * Exception decompiling
     */
    private boolean cmi(UnaryOperator<List<T>> var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [6[DOLOOP]], but top level block is 2[TRYBLOCK]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static NoSuchElementException cmx(NoSuchElementException noSuchElementException) {
        return noSuchElementException;
    }

    private static Object cmA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = mu.cmz(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String cmz(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x61C1;
        if (NeXuT[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])OcIYx.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    OcIYx.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mu", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = hvxpO[n2].getBytes("ISO-8859-1");
            mu.NeXuT[n2] = mu.cmy(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return NeXuT[n2];
    }

    private static CallSite cmB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mu" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cmy(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    public Iterator<T> cml() {
        List<T> list = this.cmj();
        return new mu$uO(this, list);
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private static /* synthetic */ List cmm(Predicate var0, List var1_1) {
        block11: {
            var2_2 = mu.syNob ^ 67033355480765L;
            var5_3 = new ArrayList<E>(var1_1.size());
            var4_4 = mr.clW();
            var6_5 = false;
            for (E var8_7 : var1_1) {
                block12: {
                    try {
                        try {
                            v0 = var0.test(var8_7);
                            if (var4_4 != null) break block11;
                            if (var4_4 != null) break block12;
                        }
                        catch (NoSuchElementException v1) {
                            throw mu.cmx(v1);
                        }
                        if (v0) {
                        }
                        ** GOTO lbl22
                    }
                    catch (NoSuchElementException v2) {
                        throw mu.cmx(v2);
                    }
                    var6_5 = true;
                    try {
                        if (var4_4 == null) break block12;
lbl22:
                        // 2 sources

                        var5_3.add(var8_7);
                    }
                    catch (NoSuchElementException v3) {
                        throw mu.cmx(v3);
                    }
                }
                if (var4_4 == null) continue;
            }
            v0 = var6_5;
        }
        try {
            v4 /* !! */  = v0 != false ? var5_3 : var1_1;
        }
        catch (NoSuchElementException v5) {
            throw mu.cmx(v5);
        }
        return v4 /* !! */ ;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mu.class, "cmA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
