/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Items
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

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
import net.minecraft.item.Items;
import net.minecraft.util.math.Vec3d;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

class dg$sx {
    private final Vec3d BQXcJ;
    private final int SDjuQ;
    private final int EVltR;
    private final int rSDHs;
    private boolean sDPfY;
    private final rk iAudN;
    private static final long PLZSI = gb.aYR(3324331490446598336L, -997322021819081517L, MethodHandles.lookup().lookupClass()).a(239710145818019L);
    private static final String NkcQX;
    private static final long[] UKhvu;
    private static final Integer[] hhkIM;
    private static final Map JoHyM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dg$sx(Vec3d vec3d, int n2, int n3) {
        long l2 = PLZSI ^ 0xFF21A0C2DA9L;
        this.sDPfY = false;
        this.iAudN = new rk((int)dg$sx.dou("z", (int)4745, (long)(0x63C6E40F8D23F68FL ^ l2)));
        this.BQXcJ = vec3d;
        this.SDjuQ = n2;
        this.EVltR = n3;
        this.rSDHs = rD.dlmvG.player.age;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = PLZSI ^ 0x35534BA8332L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        byte[] byArray3 = cipher.doFinal("\u00e37\u00a7\u00bbIi\u00b8\u00ca".getBytes("ISO-8859-1"));
        NkcQX = dg$sx.dor(byArray3).intern();
        JoHyM = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00f5Kh\u00f6\u00f0<\u00cd\u00c9\u0098\u00fa\u00d9\u00c6~\u00d0qz";
        int n3 = "\u00f5Kh\u00f6\u00f0<\u00cd\u00c9\u0098\u00fa\u00d9\u00c6~\u00d0qz".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        UKhvu = lArray;
        hhkIM = new Integer[2];
    }

    private static int dot(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dg$sx.dos(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int dos(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xC4D;
        if (hhkIM[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = UKhvu[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JoHyM.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JoHyM.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dg$sx", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dg$sx.hhkIM[n3] = n4;
        }
        return hhkIM[n3];
    }

    private static MatchException doq(MatchException matchException) {
        return matchException;
    }

    private static CallSite dou(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dg$sx" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private int don() {
        int n2 = rD.dlmvG.player.age - this.rSDHs;
        return Math.max(this.EVltR - n2, 0);
    }

    private static String dor(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    public boolean dop() {
        float f2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = PLZSI ^ 0x38B14EC885BL;
                    iSArray = dh.afl();
                    try {
                        try {
                            float f3 = this.iAudN.dhj() - 0.0f;
                            f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (iSArray != null) break block6;
                            if (f2 != false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw dg$sx.doq(matchException);
                        }
                        f2 = (float)this.sDPfY;
                    }
                    catch (MatchException matchException) {
                        throw dg$sx.doq(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (f2 == false) break block7;
                }
                catch (MatchException matchException) {
                    throw dg$sx.doq(matchException);
                }
                f2 = 1.0f;
                break block8;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    /*
     * Unable to fully structure code
     */
    public void doo(lC var1_1, boolean var2_2) {
        block15: {
            block14: {
                block12: {
                    block13: {
                        var3_3 = dg$sx.PLZSI ^ 92431900395106L;
                        var5_4 = dh.afl();
                        try {
                            v0 = this.iAudN;
                            v1 = this.sDPfY;
                            if (var5_4 != null) break block12;
                            if (v1) break block13;
                        }
                        catch (MatchException v2) {
                            throw dg$sx.doq(v2);
                        }
                        v1 = true;
                        break block12;
                    }
                    v1 = false;
                }
                try {
                    v0.dhc(v1);
                    v3 = this.iAudN;
                    v4 = this.sDPfY == false ? rj.XzDkv : rj.AYqck;
                }
                catch (MatchException v5) {
                    throw dg$sx.doq(v5);
                }
                v3.dhs(v4);
                var6_5 = jI.bIw(this.BQXcJ);
                try {
                    if (var6_5 == null) {
                        return;
                    }
                }
                catch (MatchException v6) {
                    throw dg$sx.doq(v6);
                }
                var7_6 = rD.dlM().bjb();
                var8_7 = 25.0f;
                var9_8 = var6_5.x - var8_7 / 2.0f;
                var10_9 = var6_5.y;
                var11_10 = var9_8 + jf.bAH(16.0f, var8_7);
                var12_11 = var10_9 + jf.bAH(16.0f, var8_7);
                var13_12 = this.iAudN.dhj();
                try {
                    jH.bId(var1_1, var9_8 + var8_7 / 2.0f, var10_9 + var8_7 / 2.0f, 0.5f + 0.5f * var13_12);
                    if (var5_4 != null) break block14;
                    if (var2_2) {
                    }
                    ** GOTO lbl57
                }
                catch (MatchException v7) {
                    throw dg$sx.doq(v7);
                }
                var14_13 = 35.0f;
                var15_14 = lE.WTzbi.bYM(7.0f);
                var16_15 = this.don();
                var17_16 = (double)(var16_15 * dg$sx.dou("z", (int)28533, (long)(7306804569590227129L ^ var3_3))) / 1000.0;
                var19_17 = String.format(dg$sx.NkcQX, new Object[]{var17_16});
                try {
                    var1_1.ccW(var9_8, var10_9, var8_7, var14_13, var13_12, 0.0f, ld.all(8.0f), 3.0f);
                    var1_1.cdZ(Items.ENDER_PEARL, var11_10, var12_11, 1.0f).bGv();
                    var1_1.cez(var15_14, var19_17, var9_8 + jf.bAH(var15_14.cao(var19_17), var8_7), var12_11 + 18.0f, var7_6);
                    if (var5_4 == null) break block15;
lbl57:
                    // 2 sources

                    var1_1.ccW(var9_8, var10_9, var8_7, var8_7, var13_12, 0.0f, ld.all(var8_7 / 2.0f), 3.0f);
                }
                catch (MatchException v8) {
                    throw dg$sx.doq(v8);
                }
            }
            var1_1.cdZ(Items.ENDER_PEARL, var11_10, var12_11, 1.0f).bGv();
        }
        jH.bIf();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dg$sx.class, "dot", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

