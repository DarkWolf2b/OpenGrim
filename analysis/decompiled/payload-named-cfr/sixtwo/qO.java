/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  media.IMediaSession
 *  media.MediaInfo
 *  media.MediaPlayerInfo
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.texture.NativeImage
 *  oshi.PlatformEnum
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.concurrent.ConcurrentHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import media.IMediaSession;
import media.MediaInfo;
import media.MediaPlayerInfo;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.texture.NativeImage;
import oshi.PlatformEnum;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lv;
import sixtwo.mG;
import sixtwo.ob;
import sixtwo.qL;
import sixtwo.rt;

public class qO {
    private final Thread dZNWF;
    private volatile IMediaSession Nbypb;
    private volatile byte[] sNQdS;
    private mG ynvHN;
    private final Map<Integer, lv> pIWlK;
    private final Map<Integer, mG> AfCNN;
    private String PBdhi;
    private String InsIP;
    private static final long kCZlV;
    private static final String[] EKyPO;
    private static final String[] EYVen;
    private static final Map xmkNH;
    private static final long[] NHnxq;
    private static final Integer[] iJsds;
    private static final Map CKnfM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * WARNING - void declaration
     */
    public static mG dcM(NativeImage nativeImage, int n2) {
        float f2;
        float f3;
        float[] fArray;
        block50: {
            float[] fArray2;
            block62: {
                block63: {
                    float f4;
                    float f5;
                    float f6;
                    float f7;
                    float f8;
                    float[] fArray3;
                    int n3;
                    int n4;
                    int n5;
                    int n6;
                    int n7;
                    ArrayList<float[]> arrayList;
                    boolean bl2;
                    long l2;
                    block46: {
                        block47: {
                            block43: {
                                l2 = kCZlV ^ 0x7FA0F67762L;
                                int n8 = nativeImage.getWidth();
                                int n9 = nativeImage.getHeight();
                                bl2 = qL.dcb();
                                arrayList = new ArrayList<float[]>();
                                n7 = 0;
                                block28: while (true) {
                                    int n10 = n7;
                                    block29: while (n10 < n9) {
                                        n6 = 0;
                                        if (!bl2) break block43;
                                        for (int i2 = v116164; i2 < n8; ++i2) {
                                            CallSite callSite;
                                            int n11;
                                            void var10_10;
                                            block45: {
                                                int n12;
                                                block44: {
                                                    n10 = (i2 + n7 * n8) % n2;
                                                    if (!bl2) continue block29;
                                                    try {
                                                        if (!bl2) break block44;
                                                        if (n10 != 0) {
                                                            continue;
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw qO.ddc(matchException);
                                                    }
                                                    n12 = nativeImage.getColorArgb(i2, n7);
                                                }
                                                var10_10 = n12;
                                                n5 = var10_10 >> qO.ddj("m", (int)26187, (long)(0x342829C5347750CFL ^ l2)) & qO.ddj("m", (int)23238, (long)(0x64315298104EEC4FL ^ l2));
                                                try {
                                                    n11 = n5;
                                                    callSite = qO.ddj("m", (int)12364, (long)(0x664E240521FF86C7L ^ l2));
                                                    if (!bl2) break block45;
                                                    if (n11 < callSite) {
                                                        continue;
                                                    }
                                                }
                                                catch (MatchException matchException) {
                                                    throw qO.ddc(matchException);
                                                }
                                                n11 = var10_10 >> qO.ddj("m", (int)14710, (long)(0x6DB7F44B043E0FFEL ^ l2));
                                                callSite = qO.ddj("m", (int)6704, (long)(0x57EEF8A2325F2CBCL ^ l2));
                                            }
                                            n4 = n11 & callSite;
                                            int n13 = var10_10 >> qO.ddj("m", (int)24280, (long)(0x3A88EE6C51E3685FL ^ l2)) & qO.ddj("m", (int)6704, (long)(0x57EEF8A2325F2CBCL ^ l2));
                                            n3 = var10_10 & qO.ddj("m", (int)6704, (long)(0x57EEF8A2325F2CBCL ^ l2));
                                            arrayList.add(new float[]{n4, n13, n3});
                                            if (bl2) continue;
                                        }
                                        ++n7;
                                        if (bl2) continue block28;
                                    }
                                    break;
                                }
                                n6 = arrayList.isEmpty();
                            }
                            try {
                                try {
                                    if (!bl2) break block46;
                                    if (n6 == 0) break block47;
                                }
                                catch (MatchException matchException) {
                                    throw qO.ddc(matchException);
                                }
                                return mG.cnP(230.0f, 230.0f, 230.0f);
                            }
                            catch (MatchException matchException) {
                                throw qO.ddc(matchException);
                            }
                        }
                        n6 = Math.min((int)qO.ddj("m", (int)24280, (long)(0x3A88EE6C51E3685FL ^ l2)), arrayList.size());
                    }
                    n7 = n6;
                    Random random = new Random(1L);
                    float[][] fArray4 = new float[n7][3];
                    for (n5 = 0; n5 < n7; ++n5) {
                        fArray4[n5] = (float[])((float[])arrayList.get(random.nextInt(arrayList.size()))).clone();
                        if (bl2) continue;
                    }
                    int[] nArray = new int[n7];
                    n4 = 0;
                    block32: while (true) {
                        int n13 = n4;
                        block33: while (n13 < qO.ddj("m", (int)1606, (long)(0x34147B0312A30C9L ^ l2))) {
                            float[][] fArray5;
                            block48: {
                                int n14;
                                Arrays.fill(nArray, 0);
                                fArray5 = new float[n7][3];
                                Iterator iterator = arrayList.iterator();
                                block34: while (true) {
                                    int n15 = iterator.hasNext();
                                    block35: while (n15 != 0) {
                                        fArray3 = (float[])iterator.next();
                                        int n17 = 0;
                                        f8 = (fArray3[0] - fArray4[0][0]) * (fArray3[0] - fArray4[0][0]) + (fArray3[1] - fArray4[0][1]) * (fArray3[1] - fArray4[0][1]) + (fArray3[2] - fArray4[0][2]) * (fArray3[2] - fArray4[0][2]);
                                        n14 = 1;
                                        if (!bl2) break block48;
                                        int n18 = n14;
                                        while (n18 < n7) {
                                            block49: {
                                                f7 = fArray3[0] - fArray4[n18][0];
                                                f6 = fArray3[1] - fArray4[n18][1];
                                                f5 = fArray3[2] - fArray4[n18][2];
                                                f4 = f7 * f7 + f6 * f6 + f5 * f5;
                                                try {
                                                    if (!bl2) break block49;
                                                    n15 = f4 == f8 ? 0 : (f4 < f8 ? -1 : 1);
                                                    if (!bl2) continue block35;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qO.ddc(matchException);
                                                }
                                                if (n15 < 0) {
                                                    f8 = f4;
                                                    n17 = n18;
                                                }
                                                ++n18;
                                            }
                                            if (bl2) continue;
                                        }
                                        int n16 = n17;
                                        nArray[n16] = nArray[n16] + 1;
                                        float[] fArray6 = fArray5[n17];
                                        fArray6[0] = fArray6[0] + fArray3[0];
                                        float[] fArray7 = fArray5[n17];
                                        fArray7[1] = fArray7[1] + fArray3[1];
                                        float[] fArray8 = fArray5[n17];
                                        fArray8[2] = fArray8[2] + fArray3[2];
                                        if (bl2) continue block34;
                                    }
                                    break;
                                }
                                n14 = n3 = 0;
                            }
                            while (n3 < n7) {
                                n13 = nArray[n3];
                                if (!bl2) continue block33;
                                if (n13 != 0) {
                                    fArray4[n3][0] = fArray5[n3][0] / (float)nArray[n3];
                                    fArray4[n3][1] = fArray5[n3][1] / (float)nArray[n3];
                                    fArray4[n3][2] = fArray5[n3][2] / (float)nArray[n3];
                                }
                                ++n3;
                                if (bl2) continue;
                            }
                            ++n4;
                            if (bl2) continue block32;
                        }
                        break;
                    }
                    float f9 = -1.0f;
                    fArray = null;
                    n3 = 0;
                    while (n3 < n7) {
                        block61: {
                            block56: {
                                float f10;
                                void var23_33;
                                block59: {
                                    block60: {
                                        block57: {
                                            block58: {
                                                block54: {
                                                    block55: {
                                                        float f11;
                                                        block53: {
                                                            float f12;
                                                            float f13;
                                                            block51: {
                                                                block52: {
                                                                    fArray3 = fArray4[n3];
                                                                    float f14 = fArray3[0] / 255.0f;
                                                                    f8 = fArray3[1] / 255.0f;
                                                                    float f15 = fArray3[2] / 255.0f;
                                                                    f7 = Math.max(f14, Math.max(f8, f15));
                                                                    f6 = Math.min(f14, Math.min(f8, f15));
                                                                    f5 = f7 - f6;
                                                                    f4 = f7;
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                float f2 = f7;
                                                                                f2 = 0.0f;
                                                                                if (!bl2) break block50;
                                                                                if (!bl2) break block51;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw qO.ddc(matchException);
                                                                            }
                                                                            if (f3 != f2) break block52;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw qO.ddc(matchException);
                                                                        }
                                                                        f11 = 0.0f;
                                                                        break block53;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qO.ddc(matchException);
                                                                    }
                                                                }
                                                                float f12 = f5;
                                                                f12 = f7;
                                                            }
                                                            f11 = f13 / f12;
                                                        }
                                                        var23_33 = f11;
                                                        try {
                                                            float f10 = f4 - 0.15f;
                                                            f10 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                                                            if (!bl2) break block54;
                                                            if (f10 >= 0) break block55;
                                                            break block56;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw qO.ddc(matchException);
                                                        }
                                                    }
                                                    float f10 = f4 - 0.95f;
                                                    f10 = f10 == 0.0f ? 0 : (f10 > 0.0f ? 1 : -1);
                                                }
                                                try {
                                                    if (!bl2) break block57;
                                                    if (f10 <= 0) break block58;
                                                    break block56;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qO.ddc(matchException);
                                                }
                                            }
                                            void cfr_temp_2 = var23_33 - 0.18f;
                                            f10 = cfr_temp_2 == 0 ? 0 : (cfr_temp_2 < 0 ? -1 : 1);
                                        }
                                        try {
                                            if (!bl2) break block59;
                                            if (f10 >= 0) break block60;
                                            break block56;
                                        }
                                        catch (MatchException matchException) {
                                            throw qO.ddc(matchException);
                                        }
                                    }
                                    f10 = nArray[n3];
                                }
                                float f18 = f10;
                                void var25_35 = var23_33 * 0.6f + f4 * 0.2f + (float)Math.sqrt(f18) * 0.2f;
                                try {
                                    if (!bl2) break block61;
                                    if (!(var25_35 > f9)) break block56;
                                }
                                catch (MatchException matchException) {
                                    throw qO.ddc(matchException);
                                }
                                f9 = var25_35;
                                fArray = fArray3;
                            }
                            ++n3;
                        }
                        if (bl2) continue;
                    }
                    try {
                        try {
                            fArray2 = fArray;
                            if (!bl2) break block62;
                            if (fArray2 != null) break block63;
                        }
                        catch (MatchException matchException) {
                            throw qO.ddc(matchException);
                        }
                        return mG.cnP(230.0f, 230.0f, 230.0f);
                    }
                    catch (MatchException matchException) {
                        throw qO.ddc(matchException);
                    }
                }
                fArray2 = fArray;
            }
            float f2 = fArray2[0];
            f2 = fArray[1];
        }
        return mG.cnP(f3, f2, (float)fArray[2]);
    }

    public qO() {
        block6: {
            boolean bl2;
            block8: {
                block7: {
                    CallSite callSite;
                    long l2 = kCZlV ^ 0x18E6AD47D859L;
                    this.ynvHN = mG.hoGuU;
                    this.pIWlK = new ConcurrentHashMap<Integer, lv>();
                    this.AfCNN = new ConcurrentHashMap<Integer, mG>();
                    this.PBdhi = "";
                    this.InsIP = "";
                    boolean bl3 = qL.dcc();
                    try {
                        callSite = rt.dju() == PlatformEnum.WINDOWS ? qO.ddj("m", (int)7391, (long)(0x342D8078A1FF856AL ^ l2)) : qO.ddj("m", (int)24318, (long)(0x5D8E5475BEAD4748L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw qO.ddc(matchException);
                    }
                    CallSite callSite2 = callSite;
                    try {
                        try {
                            this.dZNWF = new Thread(() -> this.ddb((int)callSite2));
                            this.dZNWF.setDaemon(true);
                            this.dZNWF.start();
                            if (iS.bwL() != null) break block6;
                            if (!bl3) break block7;
                        }
                        catch (MatchException matchException) {
                            throw qO.ddc(matchException);
                        }
                        bl2 = false;
                        break block8;
                    }
                    catch (MatchException matchException) {
                        throw qO.ddc(matchException);
                    }
                }
                bl2 = true;
            }
            qL.dca(bl2);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    qO.kCZlV = gb.aYR(5168238402007549606L, 856602005683921272L, MethodHandles.lookup().lookupClass()).a(191905785319103L);
                    qO.xmkNH = new HashMap<K, V>(13);
                    var11 = qO.kCZlV ^ 70379192303644L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u00f4\b\u00c6\u00f3e\u00ba\t\u00ad\u001c\u0014V\u000b\u00a1X\u00cb\u0014\u00e0\u00cb\u0080!r\u00afp\u008d\u008a\u00d8\u0001\u00b4wa\u0090\u00d7Z\u00ad\u0018\u008b\u00a69\u0012\u00d8(H\u0082\u00e8?A\u00d9S?MJi\u00e7\u0017\bB\u001c+\u00c5\u0092\u008fh\u00d9w\n\u0097\u00f6\u000b\u0014\u0090\u0013\u0086\u00c0@_8\u00e2\u00f9\u00b6=F";
                    var19_6 = "\u00f4\b\u00c6\u00f3e\u00ba\t\u00ad\u001c\u0014V\u000b\u00a1X\u00cb\u0014\u00e0\u00cb\u0080!r\u00afp\u008d\u008a\u00d8\u0001\u00b4wa\u0090\u00d7Z\u00ad\u0018\u008b\u00a69\u0012\u00d8(H\u0082\u00e8?A\u00d9S?MJi\u00e7\u0017\bB\u001c+\u00c5\u0092\u008fh\u00d9w\n\u0097\u00f6\u000b\u0014\u0090\u0013\u0086\u00c0@_8\u00e2\u00f9\u00b6=F".length();
                    var16_7 = 40;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = qO.ddd(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                qO.EKyPO = var20_3;
                qO.EYVen = new String[2];
                qO.CKnfM = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[11];
                var3_13 = 0;
                var4_14 = "\u00e0\u00dd\u0096|r\u009e[[\u00faO\u008c\u0093\u00cd@\u00d2\u0084\u0081\u00b7\u001e\u00e5\u00a8\u00dbu\u0081\u00c5\u00e7\u00d7X\u000eQ\b\u0089\u0093&\u0098\u0084IGFJ\u00f2\u00c3\u00a8(\u00c6\u00e9\u00e4\u0014\u00ca\n?PZ\u009e\u0081\u001b\u00b0\u00ba\u0088vL\u0096\u00c2\u00a0Uf\u0010t\u008aj\u0095\u00f1";
                var5_15 = "\u00e0\u00dd\u0096|r\u009e[[\u00faO\u008c\u0093\u00cd@\u00d2\u0084\u0081\u00b7\u001e\u00e5\u00a8\u00dbu\u0081\u00c5\u00e7\u00d7X\u000eQ\b\u0089\u0093&\u0098\u0084IGFJ\u00f2\u00c3\u00a8(\u00c6\u00e9\u00e4\u0014\u00ca\n?PZ\u009e\u0081\u001b\u00b0\u00ba\u0088vL\u0096\u00c2\u00a0Uf\u0010t\u008aj\u0095\u00f1".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "$S\u0017iN\u00fe\u001a\u00af\"\u0083\u00c3\u00b5\u001f;\u00802";
                    var5_15 = "$S\u0017iN\u00fe\u001a\u00af\"\u0083\u00c3\u00b5\u001f;\u00802".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        qO.NHnxq = var6_12;
        qO.iJsds = new Integer[11];
    }

    public String dcX() {
        return this.PBdhi;
    }

    private static Object ddf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = qO.dde(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int ddi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = qO.ddh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public Map<Integer, lv> dcV() {
        return this.pIWlK;
    }

    private static CallSite ddj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/qO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private /* synthetic */ void dcZ(IMediaSession iMediaSession) {
        block8: {
            long l2 = kCZlV ^ 0x60428677E21EL;
            boolean bl2 = qL.dcc();
            try {
                byte[] byArray;
                byte[] byArray2;
                block7: {
                    byArray2 = iMediaSession.getArtworkBytes();
                    try {
                        byArray = byArray2;
                        if (bl2) break block7;
                        if (byArray == null) break block8;
                    }
                    catch (Exception exception) {
                        throw qO.ddc(exception);
                    }
                    byArray = byArray2;
                }
                try {
                    if (byArray.length > qO.ddj("m", (int)24280, (long)(0x3A888E517762FD23L ^ l2))) {
                        this.sNQdS = byArray2;
                    }
                }
                catch (Exception exception) {
                    throw qO.ddc(exception);
                }
            }
            catch (Exception exception) {
                // empty catch block
            }
        }
    }

    private NativeImage dcL(NativeImage nativeImage) {
        block9: {
            int n2;
            int n3;
            int n4;
            int n5;
            boolean bl2;
            block8: {
                long l2 = kCZlV ^ 0x758A59D6656EL;
                int n6 = nativeImage.getWidth();
                bl2 = qL.dcb();
                int n7 = nativeImage.getHeight();
                n5 = (int)((double)n6 * 0.11);
                int n8 = (int)((double)n6 * 0.11);
                int n9 = (int)((double)n7 * 0.22);
                n4 = n6 - n5 - n8;
                n3 = n7 - n9;
                try {
                    n2 = n4;
                    if (!bl2) break block8;
                    if (n2 <= 0) break block9;
                }
                catch (MatchException matchException) {
                    throw qO.ddc(matchException);
                }
                n2 = n3;
            }
            if (n2 > 0) {
                NativeImage nativeImage2;
                block10: {
                    nativeImage2 = new NativeImage(nativeImage.getFormat(), n4, n3, false);
                    int n10 = 0;
                    while (n10 < n3) {
                        block11: {
                            if (!bl2) break block10;
                            for (int i2 = 0; i2 < n4; ++i2) {
                                int n11 = i2 + n5;
                                int n12 = n10;
                                try {
                                    nativeImage2.setColorArgb(i2, n10, nativeImage.getColorArgb(n11, n12));
                                    if (bl2) {
                                        if (bl2) continue;
                                        break;
                                    }
                                    break block11;
                                }
                                catch (MatchException matchException) {
                                    throw qO.ddc(matchException);
                                }
                            }
                            ++n10;
                        }
                        if (bl2) continue;
                    }
                    nativeImage.close();
                }
                return nativeImage2;
            }
        }
        return nativeImage;
    }

    public Thread dcR() {
        return this.dZNWF;
    }

    public Map<Integer, mG> dcW() {
        return this.AfCNN;
    }

    private static CallSite ddg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/qO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public String dcY() {
        return this.InsIP;
    }

    private static String ddd(byte[] byArray) {
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

    private /* synthetic */ void ddb(int n2) {
        while (true) {
            try {
                while (true) {
                    Thread.sleep(n2);
                    this.dcI();
                }
            }
            catch (InterruptedException interruptedException) {
                continue;
            }
            break;
        }
    }

    private static float dcN(float f2, float f3, float f4) {
        float f5 = Math.abs(f2 - f3);
        float f6 = Math.abs(0.5f * (f2 + f3) - f4);
        float f7 = f5;
        float f8 = 0.0f;
        float f9 = f6;
        float f10 = 0.0f;
        float f11 = (float)Math.sqrt(f8 * f8 + f10 * f10);
        float f12 = (float)Math.sqrt(f7 * f7 + f9 * f9);
        return f11 + 0.3f * f12;
    }

    /*
     * Loose catch block
     */
    private void dcI() {
        block10: {
            long l2 = kCZlV ^ 0x5B73AE919C3DL;
            boolean bl2 = qL.dcc();
            try {
                block11: {
                    IMediaSession iMediaSession2;
                    block8: {
                        block9: {
                            List list = MediaPlayerInfo.INSTANCE.getMediaSessions();
                            try {
                                iMediaSession2 = this.Nbypb = (IMediaSession)list.stream().filter(iMediaSession -> {
                                    boolean bl2;
                                    block21: {
                                        block17: {
                                            String string;
                                            boolean bl3;
                                            block20: {
                                                MediaInfo mediaInfo;
                                                block19: {
                                                    block18: {
                                                        MediaInfo mediaInfo2;
                                                        block16: {
                                                            long l2 = kCZlV ^ 0x299EA37C5AFCL;
                                                            mediaInfo = iMediaSession.media();
                                                            bl3 = qL.dcc();
                                                            try {
                                                                mediaInfo2 = mediaInfo;
                                                                if (bl3) break block16;
                                                                if (mediaInfo2 == null) break block17;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qO.ddc(matchException);
                                                            }
                                                            mediaInfo2 = mediaInfo;
                                                        }
                                                        try {
                                                            try {
                                                                string = mediaInfo2.title();
                                                                if (bl3) break block18;
                                                                if (string == null) break block17;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qO.ddc(matchException);
                                                            }
                                                            string = mediaInfo.title();
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw qO.ddc(matchException);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            if (bl3) break block19;
                                                            if (string.isEmpty()) break block17;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw qO.ddc(matchException);
                                                        }
                                                        string = mediaInfo.artist();
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw qO.ddc(matchException);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (bl3) break block20;
                                                        if (string == null) break block17;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw qO.ddc(matchException);
                                                    }
                                                    string = mediaInfo.artist();
                                                }
                                                catch (MatchException matchException) {
                                                    throw qO.ddc(matchException);
                                                }
                                            }
                                            try {
                                                bl2 = string.isEmpty();
                                                if (bl3) break block21;
                                                if (bl2) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw qO.ddc(matchException);
                                            }
                                            bl2 = true;
                                            break block21;
                                        }
                                        bl2 = false;
                                    }
                                    return bl2;
                                }).findFirst().orElse(null);
                                if (bl2) break block8;
                                if (iMediaSession2 != null) break block9;
                            }
                            catch (Exception exception) {
                                throw qO.ddc(exception);
                            }
                            this.PBdhi = "";
                            this.InsIP = "";
                            this.sNQdS = null;
                            this.ynvHN = mG.hoGuU;
                            return;
                        }
                        iMediaSession2 = this.Nbypb;
                    }
                    String string = iMediaSession2.media().title();
                    if (bl2) break block11;
                    try {
                        block12: {
                            if (string.equals(this.PBdhi)) break block10;
                            break block12;
                            catch (Exception exception) {
                                throw qO.ddc(exception);
                            }
                        }
                        this.PBdhi = string;
                    }
                    catch (Exception exception) {
                        throw qO.ddc(exception);
                    }
                }
                this.dcJ(this.Nbypb);
            }
            catch (Exception exception) {
                exception.printStackTrace();
            }
        }
    }

    private static float dcP(float[] fArray, float[] fArray2) {
        float f2 = fArray[0] - fArray2[0];
        float f3 = fArray[1] - fArray2[1];
        float f4 = fArray[2] - fArray2[2];
        return f2 * f2 + f3 * f3 + f4 * f4;
    }

    public byte[] dcT() {
        return this.sNQdS;
    }

    private static Exception ddc(Exception exception) {
        return exception;
    }

    private static String dde(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7155;
        if (EYVen[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])xmkNH.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xmkNH.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/qO", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = EKyPO[n3].getBytes("ISO-8859-1");
            qO.EYVen[n3] = qO.ddd(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return EYVen[n3];
    }

    /*
     * Unable to fully structure code
     */
    private void dcJ(IMediaSession var1_1) {
        block17: {
            block14: {
                block15: {
                    var2_2 = qO.kCZlV ^ 102463695155084L;
                    var5_3 = var1_1.owner() + ":" + var1_1.media().title();
                    var4_4 = qL.dcc();
                    if (var4_4) break block14;
                    try {
                        block18: {
                            if (!var5_3.equals(this.InsIP)) break block15;
                            break block18;
                            catch (Exception v0) {
                                throw qO.ddc(v0);
                            }
                        }
                        return;
                    }
                    catch (Exception v1) {
                        throw qO.ddc(v1);
                    }
                }
                this.InsIP = var5_3;
            }
            if (rt.dju() != PlatformEnum.WINDOWS) ** GOTO lbl39
            try {
                block16: {
                    var6_5 = var1_1.getArtworkBytes();
                    try {
                        v2 = var6_5;
                        if (var4_4) break block16;
                        if (v2 == null) break block17;
                    }
                    catch (Exception v3) {
                        throw qO.ddc(v3);
                    }
                    v2 = var6_5;
                }
                try {
                    if (v2.length > qO.ddj("m", (int)20754, (long)(8364545684164902777L ^ var2_2))) {
                        this.sNQdS = var6_5;
                    }
                }
                catch (Exception v4) {
                    throw qO.ddc(v4);
                }
            }
            catch (Exception var6_6) {
                try {
                    if (!var4_4) break block17;
lbl39:
                    // 2 sources

                    new Thread((Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, dcZ(media.IMediaSession ), ()V)((qO)this, (IMediaSession)var1_1)).start();
                }
                catch (Exception v5) {
                    throw qO.ddc(v5);
                }
            }
        }
    }

    private static float[][] dcO(List<float[]> list, int n2, int n3) {
        float[][] fArray;
        block15: {
            int n4;
            float[][] fArray2;
            boolean bl2;
            block14: {
                long l2 = kCZlV ^ 0x59328A2CFF73L;
                Random random = new Random();
                bl2 = qL.dcc();
                fArray2 = new float[n2][3];
                for (n4 = 0; n4 < n2; ++n4) {
                    try {
                        fArray2[n4] = (float[])list.get(random.nextInt(list.size())).clone();
                        if (!bl2) {
                            if (!bl2) continue;
                            break;
                        }
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw qO.ddc(matchException);
                    }
                }
                n4 = 0;
            }
            block5: while (true) {
                int n5 = n4;
                block6: while (n5 < n3) {
                    int n6;
                    float[][] fArray3;
                    int[] nArray;
                    block16: {
                        int n7;
                        nArray = new int[n2];
                        fArray = new float[n2][3];
                        if (bl2) break block15;
                        fArray3 = fArray;
                        Iterator<float[]> iterator = list.iterator();
                        block7: while (true) {
                            int n8 = iterator.hasNext();
                            block8: while (n8 != 0) {
                                float[] fArray4 = iterator.next();
                                int n9 = 0;
                                float f2 = qO.dcP(fArray4, fArray2[0]);
                                n7 = 1;
                                if (bl2) break block16;
                                int n10 = n7;
                                while (n10 < n2) {
                                    block17: {
                                        float f3 = qO.dcP(fArray4, fArray2[n10]);
                                        try {
                                            if (bl2) break block17;
                                            n8 = f3 == f2 ? 0 : (f3 < f2 ? -1 : 1);
                                            if (bl2) continue block8;
                                        }
                                        catch (MatchException matchException) {
                                            throw qO.ddc(matchException);
                                        }
                                        if (n8 < 0) {
                                            f2 = f3;
                                            n9 = n10;
                                        }
                                        ++n10;
                                    }
                                    if (!bl2) continue;
                                }
                                int n11 = n9;
                                nArray[n11] = nArray[n11] + 1;
                                float[] fArray5 = fArray3[n9];
                                fArray5[0] = fArray5[0] + fArray4[0];
                                float[] fArray6 = fArray3[n9];
                                fArray6[1] = fArray6[1] + fArray4[1];
                                float[] fArray7 = fArray3[n9];
                                fArray7[2] = fArray7[2] + fArray4[2];
                                if (!bl2) continue block7;
                            }
                            break;
                        }
                        n7 = n6 = 0;
                    }
                    while (n6 < n2) {
                        n5 = nArray[n6];
                        if (bl2) continue block6;
                        if (n5 != 0) {
                            fArray2[n6][0] = fArray3[n6][0] / (float)nArray[n6];
                            fArray2[n6][1] = fArray3[n6][1] / (float)nArray[n6];
                            fArray2[n6][2] = fArray3[n6][2] / (float)nArray[n6];
                        }
                        ++n6;
                        if (!bl2) continue;
                    }
                    ++n4;
                    if (!bl2) continue block5;
                }
                break;
            }
            fArray = fArray2;
        }
        return fArray;
    }

    private static int ddh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7BAD;
        if (iJsds[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = NHnxq[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])CKnfM.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CKnfM.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/qO", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            qO.iJsds[n3] = n4;
        }
        return iJsds[n3];
    }

    public IMediaSession dcS() {
        return this.Nbypb;
    }

    /*
     * Loose catch block
     */
    public AbstractTexture dcK() {
        long l2 = kCZlV ^ 0x1FD21450F4FEL;
        boolean bl2 = qL.dcb();
        try {
            NativeImage nativeImage;
            int n2;
            Object object;
            block26: {
                AbstractTexture abstractTexture;
                block25: {
                    int n3;
                    block23: {
                        block24: {
                            block22: {
                                byte[] byArray;
                                block21: {
                                    qO qO2;
                                    block18: {
                                        block19: {
                                            block20: {
                                                try {
                                                    qO2 = this;
                                                    if (!bl2) break block18;
                                                    if (qO2.pIWlK.size() <= qO.ddj("m", (int)12888, (long)(0xD82D2BEA9F6074EL ^ l2))) break block19;
                                                }
                                                catch (Exception exception) {
                                                    throw qO.ddc(exception);
                                                }
                                                object = this.pIWlK.values().iterator();
                                                while (object.hasNext()) {
                                                    lv lv2 = (lv)((Object)object.next());
                                                    try {
                                                        lv2.close();
                                                        if (bl2) {
                                                            if (bl2) continue;
                                                            break;
                                                        }
                                                        break block20;
                                                    }
                                                    catch (Exception exception) {
                                                        throw qO.ddc(exception);
                                                    }
                                                }
                                                this.pIWlK.clear();
                                            }
                                            this.AfCNN.clear();
                                        }
                                        qO2 = this;
                                    }
                                    object = qO2.sNQdS;
                                    try {
                                        byArray = object;
                                        if (!bl2) break block21;
                                        if (byArray == null) break block22;
                                    }
                                    catch (Exception exception) {
                                        throw qO.ddc(exception);
                                    }
                                    byArray = object;
                                }
                                try {
                                    n3 = byArray.length;
                                    if (!bl2) break block23;
                                    if (n3 >= qO.ddj("m", (int)24280, (long)(0x3A88F1C1E545EBC3L ^ l2))) break block24;
                                }
                                catch (Exception exception) {
                                    throw qO.ddc(exception);
                                }
                            }
                            return ob.cBv((String)((Object)qO.ddg("i", (int)12633, (long)(0x7D03864D3ED78EB1L ^ l2))));
                        }
                        n3 = Arrays.hashCode((byte[])object);
                    }
                    n2 = n3;
                    AbstractTexture abstractTexture2 = this.pIWlK.get(n2);
                    abstractTexture = abstractTexture2;
                    if (!bl2) break block25;
                    try {
                        block27: {
                            if (abstractTexture == null) break block26;
                            break block27;
                            catch (Exception exception) {
                                throw qO.ddc(exception);
                            }
                        }
                        this.ynvHN = this.AfCNN.get(n2);
                        abstractTexture = abstractTexture2;
                    }
                    catch (Exception exception) {
                        throw qO.ddc(exception);
                    }
                }
                return abstractTexture;
            }
            NativeImage nativeImage2 = NativeImage.read((byte[])object);
            try {
                nativeImage = rt.djx() ? nativeImage2 : this.dcL(nativeImage2);
            }
            catch (Exception exception) {
                throw qO.ddc(exception);
            }
            NativeImage nativeImage3 = nativeImage;
            this.ynvHN = qO.dcM(nativeImage3, 2);
            lv lv3 = new lv(nativeImage3);
            this.AfCNN.put(n2, this.ynvHN);
            this.pIWlK.put(n2, lv3);
            return lv3;
        }
        catch (Exception exception) {
            return ob.cBv((String)((Object)qO.ddg("i", (int)28200, (long)(0xC20907BA7A4D1C1L ^ l2))));
        }
    }

    public mG dcU() {
        return this.ynvHN;
    }

    public boolean dcQ() {
        boolean bl2;
        long l2 = kCZlV ^ 0x157B41CE20A3L;
        try {
            bl2 = this.Nbypb != null;
        }
        catch (MatchException matchException) {
            throw qO.ddc(matchException);
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(qO.class, "ddi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(qO.class, "ddf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

