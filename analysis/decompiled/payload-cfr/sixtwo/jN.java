/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  it.unimi.dsi.fastutil.objects.Object2IntMap
 *  it.unimi.dsi.fastutil.objects.Object2IntOpenHashMap
 *  org.joml.Matrix4f
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import it.unimi.dsi.fastutil.objects.Object2IntMap;
import it.unimi.dsi.fastutil.objects.Object2IntOpenHashMap;
import java.io.Closeable;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.FloatBuffer;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jL;
import sixtwo.jM;
import sixtwo.lB;
import sixtwo.lF;
import sixtwo.lT;
import sixtwo.lU;
import sixtwo.lV;
import sixtwo.lW;
import sixtwo.rm;

public class jN
implements Closeable {
    private static final String kPOcq;
    private static final String SQSpe;
    private final lU hbdsS;
    private final lW pqgLF;
    private final Object2IntMap<String> UMoVo;
    private final int hxaAS;
    private final int BvSGk;
    private final Matrix4f gsSlM;
    private final Matrix4f QdyLm;
    private final Matrix4f jiKOF;
    private static final long EuHrv;
    private static final String[] fAbkF;
    private static final String[] SUbhZ;
    private static final Map NLXzj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public jN(VertexFormat vertexFormat, jM ... jMArray) {
        block10: {
            int n;
            long l;
            block9: {
                l = EuHrv ^ 0x111D94268A50L;
                this.UMoVo = new Object2IntOpenHashMap();
                this.gsSlM = new Matrix4f();
                this.QdyLm = new Matrix4f();
                this.jiKOF = new Matrix4f();
                n = jL.bIQ();
                this.hbdsS = lT.ciQ();
                lV[] lVArray = new lV[jMArray.length];
                for (int i = 0; i < jMArray.length; ++i) {
                    try {
                        lVArray[i] = jMArray[i].bJb();
                        if (n == 0) break block9;
                        if (n != 0) continue;
                    }
                    catch (MatchException matchException) {
                        throw jN.bJB(matchException);
                    }
                    iS.bwK("OOfzgb");
                    break;
                }
                try {
                    this.pqgLF = this.hbdsS.createProgram(vertexFormat, lVArray);
                }
                catch (Throwable throwable) {
                    for (jM jM2 : jMArray) {
                        jM2.close();
                        if (n != 0) continue;
                    }
                    throw throwable;
                }
            }
            for (jM jM3 : jMArray) {
                try {
                    jM3.close();
                    if (n == 0) break block10;
                    if (n != 0) continue;
                    break;
                }
                catch (MatchException matchException) {
                    throw jN.bJB(matchException);
                }
            }
            this.hxaAS = this.bJn((String)((Object)jN.bJF("b", (int)25374, (long)(0x54041DF41FB8CB65L ^ l))));
            this.BvSGk = this.bJn((String)((Object)jN.bJF("b", (int)4349, (long)(0x6A655B854DDEB887L ^ l))));
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jN.EuHrv = gb.aYR(-4188272765790085521L, 2895016500510754455L, MethodHandles.lookup().lookupClass()).a(24422337496964L);
                jN.NLXzj = new HashMap<K, V>(13);
                var0 = jN.EuHrv ^ 52998875579115L;
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
                var6_5 = "\u00b8\u00fe\u00e0|\u00d1\u00e3\u00b8\f\u00a5\u00d5\u00d1G{2\u00d2\t bP\u00dd\u00d0@#io\u00ccbML\u0087\u00de\u00a3hU\u00171\u00cdl\u00cf\u0013\u0003F\u00ec^\u0094\u00bf\u0089\u00af\u00f8";
                var8_6 = "\u00b8\u00fe\u00e0|\u00d1\u00e3\u00b8\f\u00a5\u00d5\u00d1G{2\u00d2\t bP\u00dd\u00d0@#io\u00ccbML\u0087\u00de\u00a3hU\u00171\u00cdl\u00cf\u0013\u0003F\u00ec^\u0094\u00bf\u0089\u00af\u00f8".length();
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
                    var9_3[var7_4++] = jN.bJC(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0005\u00ec\u0012\u00e8\u00fd9\u001dF`\u0003\u00fcH\u00ea:.\u00f7\u00c5Y\u00fc\u0014\u0016\u00a6\u00af\u00d1\u0010\u0089\u00a8\u00a2\u00c7\u00b5\u001b \u00f6\u00be)\u0019Y\u00c9Ii\u00d3";
                    var8_6 = "\u0005\u00ec\u0012\u00e8\u00fd9\u001dF`\u0003\u00fcH\u00ea:.\u00f7\u00c5Y\u00fc\u0014\u0016\u00a6\u00af\u00d1\u0010\u0089\u00a8\u00a2\u00c7\u00b5\u001b \u00f6\u00be)\u0019Y\u00c9Ii\u00d3".length();
                    var5_7 = 24;
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
                    var9_3[var7_4++] = jN.bJC(var10_9).intern();
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
        jN.fAbkF = var9_3;
        jN.SUbhZ = new String[4];
        jN.SQSpe = jN.bJF("b", (int)31567, (long)(1357790180969962381L ^ var0));
        jN.kPOcq = jN.bJF("b", (int)860, (long)(7210030969419703199L ^ var0));
    }

    @Override
    public void close() {
        this.pqgLF.close();
    }

    public lW bJz() {
        return this.pqgLF;
    }

    /*
     * Exception decompiling
     */
    private void bJp() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 4[SWITCH]
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

    public static jN bJk(VertexFormat vertexFormat, jM ... jMArray) {
        return new jN(vertexFormat, jMArray);
    }

    private void bJw(int n, Matrix4f matrix4f) {
        this.hbdsS.setUniform(n, matrix4f);
    }

    private static String bJC(byte[] byArray) {
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

    public void bJv(String string, Matrix4f matrix4f) {
        int n = this.bJn(string);
        this.bJw(n, matrix4f);
    }

    public void bJx(String string, int n) {
        this.hbdsS.setUniform(this.bJn(string), n);
    }

    public void bJr(String string, float f, float f2) {
        this.hbdsS.setUniform(this.bJn(string), f, f2);
    }

    public void bJt(String string, float f, float f2, float f3, float f4) {
        this.hbdsS.setUniform(this.bJn(string), f, f2, f3, f4);
    }

    public void bJl() {
        block11: {
            jN jN2;
            block10: {
                int n;
                int n2;
                block8: {
                    int n3;
                    block9: {
                        long l = EuHrv ^ 0x15F8BAD6F5EDL;
                        int n4 = jL.bIQ();
                        this.hbdsS.bindProgram(this.pqgLF);
                        n3 = n4;
                        try {
                            try {
                                n2 = this.hxaAS;
                                n = -1;
                                if (n3 == 0) break block8;
                                if (n2 == n) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jN.bJB(matchException);
                            }
                            this.bJo();
                        }
                        catch (MatchException matchException) {
                            throw jN.bJB(matchException);
                        }
                    }
                    try {
                        jN2 = this;
                        if (n3 == 0) break block10;
                        n2 = jN2.BvSGk;
                        n = -1;
                    }
                    catch (MatchException matchException) {
                        throw jN.bJB(matchException);
                    }
                }
                if (n2 == n) break block11;
                jN2 = this;
            }
            jN2.bJp();
        }
    }

    private void bJo() {
        block4: {
            block5: {
                long l = EuHrv ^ 0x5E9A21CB7241L;
                int n = jL.bIQ();
                try {
                    try {
                        if (n == 0) break block4;
                        if (lF.cfY() != lB.xCeuB) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jN.bJB(matchException);
                    }
                    this.bJw(this.hxaAS, rm.dij());
                    return;
                }
                catch (MatchException matchException) {
                    throw jN.bJB(matchException);
                }
            }
            this.bJw(this.hxaAS, jI.bIk());
        }
    }

    public void bJm() {
        this.hbdsS.unbindProgram();
    }

    private static CallSite bJF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jN" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public int bJn(String string) {
        return this.UMoVo.computeIfAbsent((Object)string, object -> this.hbdsS.uniformLocation(this.pqgLF, (String)object));
    }

    public void bJq(String string, float f) {
        this.hbdsS.setUniform(this.bJn(string), f);
    }

    private static MatchException bJB(MatchException matchException) {
        return matchException;
    }

    public void bJy(String string, FloatBuffer floatBuffer) {
        this.hbdsS.setUniform(this.bJn(string), floatBuffer);
    }

    private static String bJD(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5FB4;
        if (SUbhZ[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])NLXzj.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    NLXzj.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jN", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = fAbkF[n2].getBytes("ISO-8859-1");
            jN.SUbhZ[n2] = jN.bJC(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return SUbhZ[n2];
    }

    public void bJu(String string, float[] fArray) {
        this.hbdsS.setUniform(this.bJn(string), fArray);
    }

    private static Object bJE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jN.bJD(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void bJs(String string, float f, float f2, float f3) {
        this.hbdsS.setUniform(this.bJn(string), f, f2, f3);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jN.class, "bJE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
