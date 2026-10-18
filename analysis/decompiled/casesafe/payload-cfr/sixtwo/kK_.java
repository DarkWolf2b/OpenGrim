/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_290
 *  net.minecraft.class_4587
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Vector3f
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_290;
import net.minecraft.class_4587;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kE;
import sixtwo.kJ;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lh;

public class kK
extends kQ<kE> {
    private static final kS yEFWa;
    private static final Vector3f[] uVxmu;
    private static final int[][] pbVHD;
    private static final float[] JYPKJ;
    private kS DPAFB;
    private static final long zBGqK;
    private static final long[] czRPh;
    private static final Integer[] HqZCZ;
    private static final Map qbodQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                kK.zBGqK = gb.aYR(1976435304290874521L, 5588099496461299734L, MethodHandles.lookup().lookupClass()).a(20116882234589L);
                var11 = kK.zBGqK ^ 74542953173046L;
                kK.qbodQ = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[12];
                var3_4 = 0;
                var4_5 = "\u0004\ra\u00c5\u00af\b\u00aa1\u0010d\u00c6\u00e6\u00aew,\u00e1\u00f4\u00ef\u0014\u00ef\u00e2\u001d@Qs\"Q\u00b0\u00acMl\u00e3[bQ\u00db\u00a0\u0012\u00f7\u00ae1\u0084\u00c8\u0085\u00c8\u00ddp\u00f1\u0005M\u008au\u00ad\u0014!YRY\u00f6\u0005\u00f5.\t\u00a4d\u00b6\u00fa\u00df\u0012\u00fe\u00bc\u008c\u00fa\u00b4\u001f\u00f0^\u009eJ\u008e";
                var5_6 = "\u0004\ra\u00c5\u00af\b\u00aa1\u0010d\u00c6\u00e6\u00aew,\u00e1\u00f4\u00ef\u0014\u00ef\u00e2\u001d@Qs\"Q\u00b0\u00acMl\u00e3[bQ\u00db\u00a0\u0012\u00f7\u00ae1\u0084\u00c8\u0085\u00c8\u00ddp\u00f1\u0005M\u008au\u00ad\u0014!YRY\u00f6\u0005\u00f5.\t\u00a4d\u00b6\u00fa\u00df\u0012\u00fe\u00bc\u008c\u00fa\u00b4\u001f\u00f0^\u009eJ\u008e".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "R\u0090\u00f7r\u00ac\u0096\u009e\u00d2\u00f7\n\u00b7\u0095\u007f\u00c5\u00a7\u00dd";
                    var5_6 = "R\u0090\u00f7r\u00ac\u0096\u009e\u00d2\u00f7\n\u00b7\u0095\u007f\u00c5\u00a7\u00dd".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        kK.czRPh = var6_3;
        kK.HqZCZ = new Integer[12];
        kK.yEFWa = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
        v8 = new Vector3f[kK.bUu("a", (int)22725, (long)(4493992105472163716L ^ var11))];
        v8[0] = new Vector3f(0.0f, 1.5f, 0.0f);
        v8[1] = new Vector3f(0.0f, -1.5f, 0.0f);
        v8[2] = new Vector3f(1.0f, 0.0f, 0.0f);
        v8[3] = new Vector3f(-1.0f, 0.0f, 0.0f);
        v8[4] = new Vector3f(0.0f, 0.0f, 1.0f);
        v8[5] = new Vector3f(0.0f, 0.0f, -1.0f);
        kK.uVxmu = v8;
        v9 = new int[kK.bUu("a", (int)21962, (long)(1421271518174868111L ^ var11))][];
        v9[0] = new int[]{0, 2, 4};
        v9[1] = new int[]{0, 4, 3};
        v9[2] = new int[]{0, 3, 5};
        v9[3] = new int[]{0, 5, 2};
        v9[4] = new int[]{1, 4, 2};
        v9[5] = new int[]{1, 3, 4};
        v9[kK.bUu("a", (int)23340, (long)(7377608597027880047L ^ var11))] = new int[]{1, 5, 3};
        v9[kK.bUu("a", (int)30669, (long)(2295487032180199555L ^ var11))] = new int[]{1, 2, 5};
        kK.pbVHD = v9;
        v10 = new float[kK.bUu("a", (int)21962, (long)(1421271518174868111L ^ var11))];
        v10[0] = 1.0f;
        v10[1] = 0.8f;
        v10[2] = 0.6f;
        v10[3] = 0.9f;
        v10[4] = 0.7f;
        v10[5] = 0.5f;
        v10[kK.bUu("a", (int)23340, (long)(7377608597027880047L ^ var11))] = 0.4f;
        v10[kK.bUu("a", (int)16836, (long)(9205969850718545542L ^ var11))] = 0.6f;
        kK.JYPKJ = v10;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void flush() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kK.zBGqK ^ 103556725143118L;
                    this.bVj();
                    var4_2 = this.WfBOj.method_60794();
                    var3_3 = kJ.bUi();
                    try {
                        block12: {
                            try {
                                v0 = var4_2;
                                if (var3_3) break block11;
                                if (v0 == null) break block12;
                            }
                            catch (Throwable v1) {
                                throw kK.bUr(v1);
                            }
                            var5_4 = kR.rEMzB.bUZ(this.DPAFB);
                            lF.cfW(var5_4, var4_2);
                        }
                        v0 = var4_2;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v2 = var4_2;
                                if (!var3_3) {
                                    if (v2 == null) break block15;
                                }
                                ** GOTO lbl28
                            }
                            catch (Throwable v3) {
                                throw kK.bUr(v3);
                            }
                            try {
                                v2 = var4_2;
lbl28:
                                // 2 sources

                                v2.close();
                            }
                            catch (Throwable var6_6) {
                                var5_5.addSuppressed(var6_6);
                            }
                        }
                        throw var5_5;
                    }
                }
                try {
                    if (var3_3) break block13;
                    if (v0 == null) break block14;
                }
                catch (Throwable v4) {
                    throw kK.bUr(v4);
                }
                v0 = var4_2;
            }
            v0.close();
        }
        this.bVi(VertexFormat.class_5596.field_27379, class_290.field_1576);
    }

    @Override
    public kS defaultState() {
        return yEFWa;
    }

    @Override
    public void startBatch(kS kS2) {
        this.DPAFB = kS2;
        this.bVi(VertexFormat.class_5596.field_27379, class_290.field_1576);
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void endBatch() {
        block14: {
            block13: {
                block11: {
                    var1_1 = kK.zBGqK ^ 122505923909107L;
                    this.bVj();
                    var4_2 = this.WfBOj.method_60794();
                    var3_3 = kJ.bUi();
                    try {
                        block12: {
                            try {
                                v0 = var4_2;
                                if (var3_3) break block11;
                                if (v0 == null) break block12;
                            }
                            catch (Throwable v1) {
                                throw kK.bUr(v1);
                            }
                            var5_4 = kR.rEMzB.bUZ(this.DPAFB);
                            lF.cfW(var5_4, var4_2);
                        }
                        v0 = var4_2;
                    }
                    catch (Throwable var5_5) {
                        block15: {
                            try {
                                v2 = var4_2;
                                if (!var3_3) {
                                    if (v2 == null) break block15;
                                }
                                ** GOTO lbl28
                            }
                            catch (Throwable v3) {
                                throw kK.bUr(v3);
                            }
                            try {
                                v2 = var4_2;
lbl28:
                                // 2 sources

                                v2.close();
                            }
                            catch (Throwable var6_6) {
                                var5_5.addSuppressed(var6_6);
                            }
                        }
                        throw var5_5;
                    }
                }
                try {
                    if (var3_3) break block13;
                    if (v0 == null) break block14;
                }
                catch (Throwable v4) {
                    throw kK.bUr(v4);
                }
                v0 = var4_2;
            }
            v0.close();
        }
        this.bVl();
    }

    private static CallSite bUu(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kK" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Throwable bUr(Throwable throwable) {
        return throwable;
    }

    private static int bUt(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = kK.bUs(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int bUq(int n, float f) {
        long l = zBGqK ^ 0x2FF11605D4FL;
        int n2 = n >> kK.bUu("a", (int)31324, (long)(0x320A09A5A01106AL ^ l)) & kK.bUu("a", (int)31793, (long)(0x36BE2C7793C9960FL ^ l));
        int n3 = (int)((float)(n >> kK.bUu("a", (int)16490, (long)(0x48C8702BBDBD2A5FL ^ l)) & kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l))) * f);
        int n4 = (int)((float)(n >> kK.bUu("a", (int)26336, (long)(0x5EE36AB86AB70CD9L ^ l)) & kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l))) * f);
        int n5 = (int)((float)(n & kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l))) * f);
        n3 = Math.min((int)kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l)), Math.max(0, n3));
        n4 = Math.min((int)kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l)), Math.max(0, n4));
        n5 = Math.min((int)kK.bUu("a", (int)397, (long)(0x755E98B5DD796BB2L ^ l)), Math.max(0, n5));
        return n2 << kK.bUu("a", (int)18124, (long)(0x5BD4069C8ACC2CF8L ^ l)) | n3 << kK.bUu("a", (int)22757, (long)(0x521FD96EAE0B32D8L ^ l)) | n4 << kK.bUu("a", (int)21962, (long)(0x13B91FDE916FBFF6L ^ l)) | n5;
    }

    private static int bUs(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x284B;
        if (HqZCZ[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = czRPh[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])qbodQ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    qbodQ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kK", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kK.HqZCZ[n2] = n3;
        }
        return HqZCZ[n2];
    }

    public void bUp(kE kE2) {
        block9: {
            boolean bl;
            block11: {
                block10: {
                    boolean bl2;
                    block8: {
                        long l = zBGqK ^ 0x2B36107DF8DFL;
                        this.bVj();
                        class_4587 class_45872 = kE2.bTh();
                        bl2 = kJ.bUj();
                        float f = kE2.bTi();
                        float f2 = kE2.bTj();
                        float f3 = kE2.bTk();
                        float f4 = kE2.bTl();
                        int n = kE2.bTm().coh();
                        class_45872.method_22903();
                        class_45872.method_46416(f, f2, f3);
                        class_45872.method_22905(f4, f4, f4);
                        Matrix4f matrix4f = class_45872.method_23760().method_23761();
                        for (int i = 0; i < pbVHD.length; ++i) {
                            int[] nArray = pbVHD[i];
                            float f5 = JYPKJ[i];
                            Vector3f vector3f = uVxmu[nArray[0]];
                            Vector3f vector3f2 = uVxmu[nArray[1]];
                            Vector3f vector3f3 = uVxmu[nArray[2]];
                            int n2 = kK.bUq(n, f5);
                            try {
                                this.WfBOj.method_22918((Matrix4fc)matrix4f, vector3f.x, vector3f.y, vector3f.z).method_39415(n2);
                                this.WfBOj.method_22918((Matrix4fc)matrix4f, vector3f2.x, vector3f2.y, vector3f2.z).method_39415(n2);
                                this.WfBOj.method_22918((Matrix4fc)matrix4f, vector3f3.x, vector3f3.y, vector3f3.z).method_39415(n2);
                                if (bl2) {
                                    if (bl2) continue;
                                    break;
                                }
                                break block8;
                            }
                            catch (MatchException matchException) {
                                throw kK.bUr(matchException);
                            }
                        }
                        class_45872.method_22909();
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block9;
                            if (!bl2) break block10;
                        }
                        catch (MatchException matchException) {
                            throw kK.bUr(matchException);
                        }
                        bl = false;
                        break block11;
                    }
                    catch (MatchException matchException) {
                        throw kK.bUr(matchException);
                    }
                }
                bl = true;
            }
            kJ.bUh(bl);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kK.class, "bUt", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
