/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.pipeline.RenderPipeline$Snippet
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_10789
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10789;
import sixtwo.gb;
import sixtwo.jN;
import sixtwo.kO$uq;
import sixtwo.kQ;
import sixtwo.kS;
import sixtwo.kU;
import sixtwo.lh;

public final class kO {
    private final String DiCsC;
    private final VertexFormat uzwKP;
    private final VertexFormat.class_5596 YetoX;
    private final String WbSgM;
    private final String wLlrv;
    private final jN XySPj;
    private final List<String> mgCAT;
    private final Map<String, class_10789> frezO;
    private final RenderPipeline.Snippet[] asrXs;
    private final Map<kS, RenderPipeline> ftyjn = new ConcurrentHashMap<kS, RenderPipeline>();
    private static final long KinWI;
    private static final String[] JtrOW;
    private static final String[] YjeYU;
    private static final Map mPfDh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kO(kO$uq kO$uq) {
        this.DiCsC = kO$uq.IfTav;
        this.uzwKP = kO$uq.mrfud;
        this.YetoX = kO$uq.bmQDp;
        this.WbSgM = kO$uq.SqHTg;
        this.wLlrv = kO$uq.UxEjn;
        this.XySPj = kO$uq.scPFe;
        this.mgCAT = List.copyOf(kO$uq.JfGsn);
        this.frezO = Map.copyOf(kO$uq.rGVcy);
        this.asrXs = kO$uq.EEbpA;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kO.KinWI = gb.aYR(-183619953945926409L, 2954576237394249373L, MethodHandles.lookup().lookupClass()).a(257615190186659L);
                kO.mPfDh = new HashMap<K, V>(13);
                var0 = kO.KinWI ^ 137204824165017L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[4];
                var7_4 = 0;
                var6_5 = "\u008b\u00c1\u00bb\u00de\u008c\u00c1q\u0082 ^f\u0087\u00ff3\u009a!\u0010(\u00d5\u00c0\u0087\u00db\u00dbp\u00c6\u00e3\u009e\u0080\u0000!\u00bf\u0012\u00e5";
                var8_6 = "\u008b\u00c1\u00bb\u00de\u008c\u00c1q\u0082 ^f\u0087\u00ff3\u009a!\u0010(\u00d5\u00c0\u0087\u00db\u00dbp\u00c6\u00e3\u009e\u0080\u0000!\u00bf\u0012\u00e5".length();
                var5_7 = 16;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kO.bVe(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00837\u000e\u00a5\u00b3\u001a\u0094\u00c5\u009cv\u00a5\u008f\u0080\u00a0\u009d(\u0010\u00e9!\u00c7\u00b6\u00f6\u001a\u00d8\u00e0\u0014\u00c1\u00ef\u00c6\u0093\u00ae]\u00e2";
                    var8_6 = "\u00837\u000e\u00a5\u00b3\u001a\u0094\u00c5\u009cv\u00a5\u008f\u0080\u00a0\u009d(\u0010\u00e9!\u00c7\u00b6\u00f6\u001a\u00d8\u00e0\u0014\u00c1\u00ef\u00c6\u0093\u00ae]\u00e2".length();
                    var5_7 = 16;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kO.bVe(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
            switch (v5) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl51:
                // 1 sources

                ** continue;
            }
        }
        kO.JtrOW = var9_3;
        kO.YjeYU = new String[4];
    }

    public static kO$uq bVc(String string) {
        return new kO$uq(string);
    }

    public RenderPipeline bUZ(kS kS2) {
        return this.ftyjn.computeIfAbsent(kS2, this::bVa);
    }

    private static String bVb(kS kS2) {
        String string;
        String string2;
        String string3;
        Object object;
        long l;
        block10: {
            lh lh2;
            block8: {
                lh lh3;
                block9: {
                    l = KinWI ^ 0x6F1C4EB152A1L;
                    lh3 = kS2.bVJ();
                    int n = kQ.bVo();
                    try {
                        try {
                            lh2 = lh3;
                            if (n == 0) break block8;
                            if (lh2 != null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw kO.bVd(matchException);
                        }
                        object = kO.bVh("b", (int)25010, (long)(0x79CD5915D890363FL ^ l));
                        break block10;
                    }
                    catch (MatchException matchException) {
                        throw kO.bVd(matchException);
                    }
                }
                lh2 = lh3;
            }
            object = lh2.name().toLowerCase(Locale.ROOT);
        }
        try {
            string3 = kS2.bVK().name().toLowerCase(Locale.ROOT);
            string2 = kS2.bVL() ? "1" : "0";
        }
        catch (MatchException matchException) {
            throw kO.bVd(matchException);
        }
        try {
            string = kS2.bVM() ? "1" : "0";
        }
        catch (MatchException matchException) {
            throw kO.bVd(matchException);
        }
        String string4 = string;
        String string5 = string2;
        String string6 = string3;
        return (String)object + (String)((Object)kO.bVh("b", (int)17984, (long)(0x6A7470B9318E91CCL ^ l))) + string6 + (String)((Object)kO.bVh("b", (int)29266, (long)(0x22126DA6EA76A5DCL ^ l))) + string5 + (String)((Object)kO.bVh("b", (int)15678, (long)(0x34EBA066D250EAB1L ^ l))) + string4;
    }

    private static MatchException bVd(MatchException matchException) {
        return matchException;
    }

    private static CallSite bVh(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private RenderPipeline bVa(kS kS2) {
        kU kU2;
        block29: {
            Object object;
            Iterator<Object> iterator;
            int n;
            block28: {
                kO kO2;
                block24: {
                    block25: {
                        String string;
                        block26: {
                            block27: {
                                long l = KinWI ^ 0x52BA057BFE50L;
                                kU2 = kU.bVX(this.DiCsC + "/" + kO.bVb(kS2), this.asrXs).bVY(this.uzwKP, this.YetoX).bWc(kS2);
                                n = kQ.bVo();
                                try {
                                    try {
                                        try {
                                            try {
                                                kO2 = this;
                                                if (n == 0) break block24;
                                                if (kO2.XySPj != null) break block25;
                                            }
                                            catch (MatchException matchException) {
                                                throw kO.bVd(matchException);
                                            }
                                            string = this.WbSgM;
                                            if (n == 0) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw kO.bVd(matchException);
                                        }
                                        if (string == null) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw kO.bVd(matchException);
                                    }
                                    kU2.bVZ(this.WbSgM);
                                }
                                catch (MatchException matchException) {
                                    throw kO.bVd(matchException);
                                }
                            }
                            try {
                                kO2 = this;
                                if (n == 0) break block24;
                                string = kO2.wLlrv;
                            }
                            catch (MatchException matchException) {
                                throw kO.bVd(matchException);
                            }
                        }
                        try {
                            if (string != null) {
                                kU2.bWa(this.wLlrv);
                            }
                        }
                        catch (MatchException matchException) {
                            throw kO.bVd(matchException);
                        }
                    }
                    kO2 = this;
                }
                iterator = kO2.frezO.entrySet().iterator();
                while (iterator.hasNext()) {
                    object = iterator.next();
                    try {
                        kU2.bWe(object.getKey(), object.getValue());
                        if (n != 0) {
                            if (n != 0) continue;
                            break;
                        }
                        break block28;
                    }
                    catch (MatchException matchException) {
                        throw kO.bVd(matchException);
                    }
                }
                iterator = this.mgCAT.iterator();
            }
            while (iterator.hasNext()) {
                object = (String)iterator.next();
                try {
                    kU2.bWf((String)object);
                    if (n != 0) {
                        if (n != 0) continue;
                        break;
                    }
                    break block29;
                }
                catch (MatchException matchException) {
                    throw kO.bVd(matchException);
                }
            }
            try {
                if (this.XySPj != null) {
                    kU2.bWd(this.XySPj);
                }
            }
            catch (MatchException matchException) {
                throw kO.bVd(matchException);
            }
        }
        return kU2.bWg();
    }

    private static String bVf(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6071;
        if (YjeYU[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])mPfDh.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mPfDh.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kO", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = JtrOW[n2].getBytes("ISO-8859-1");
            kO.YjeYU[n2] = kO.bVe(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return YjeYU[n2];
    }

    private static Object bVg(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kO.bVf(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bVe(byte[] byArray) {
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

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kO.class, "bVg", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
