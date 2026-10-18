/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.MathHelper;
import sixtwo.cJ;
import sixtwo.ca;
import sixtwo.cr;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.eP;
import sixtwo.fS;
import sixtwo.fX;
import sixtwo.fg;
import sixtwo.fr;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jG;
import sixtwo.jc;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.oP;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bZ
extends cr {
    private final cJ NCHJZ;
    private final ct nLbAG;
    private final cu kojYh;
    private final cu cCJxB;
    private final cu mBhYD;
    private final rk[] CCbky;
    private final rk pHErH;
    private final rk jLjXP;
    private final rk sjeIR;
    private final rk PquMu;
    private final rk dfbld;
    private LivingEntity qcZhQ;
    private static final long yIQrZ;
    private static final long[] wNQMp;
    private static final Integer[] GEMJy;
    private static final Map BwsEB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bZ() {
        long l2 = yIQrZ ^ 0x6BAAE7727777L;
        boolean bl2 = ca.OY();
        int[] nArray = new int[bZ.OO("k", (int)23005, (long)(0x64EE44404498FD9FL ^ l2))];
        nArray[0] = (int)bZ.OO("k", (int)30942, (long)(0x46CBD54CDFFA5CB9L ^ l2));
        nArray[1] = (int)bZ.OO("k", (int)12621, (long)(0xCE7D2F941401518L ^ l2));
        nArray[2] = (int)bZ.OO("k", (int)16572, (long)(0x396566BD5B1364DFL ^ l2));
        nArray[3] = (int)bZ.OO("k", (int)10423, (long)(0x35CA47D73C528CDFL ^ l2));
        nArray[4] = (int)bZ.OO("k", (int)16330, (long)(0x5995BCFD7F5C9B8BL ^ l2));
        nArray[5] = (int)bZ.OO("k", (int)16454, (long)(0x41E8DD506886410L ^ l2));
        nArray[bZ.OO("k", (int)31564, (long)(0x3E0BD223A7325F09L ^ l2))] = (int)bZ.OO("k", (int)9079, (long)(0x42013A1B2E138727L ^ l2));
        nArray[bZ.OO("k", (int)26987, (long)(0x5F766EB1667E4D04L ^ l2))] = (int)bZ.OO("k", (int)23633, (long)(0x4FA61E322BE7782EL ^ l2));
        nArray[bZ.OO("k", (int)2558, (long)(0x2743A3FDB5DF2DACL ^ l2))] = (int)bZ.OO("k", (int)6111, (long)(0x49E1AD7A991AB3B5L ^ l2));
        nArray[bZ.OO("k", (int)22698, (long)(0x4973CBD79DA1FCFDL ^ l2))] = (int)bZ.OO("k", (int)15211, (long)(0x24F9258B67029F25L ^ l2));
        super(nArray, lf.ENioA);
        this.NCHJZ = new cJ(this, mr.clS(new int[]{(int)bZ.OO("k", (int)27347, (long)(0x5F63D24B0A714E93L ^ l2)), (int)bZ.OO("k", (int)24518, (long)(0x3E5D48CC77B0FBB8L ^ l2)), (int)bZ.OO("k", (int)4519, (long)(0x33EEAA6BA8FEB5EDL ^ l2)), (int)bZ.OO("k", (int)1010, (long)(0x2E54C92AAC29A79EL ^ l2))})).WE(true);
        int[] nArray2 = new int[bZ.OO("k", (int)22221, (long)(0x66847DAFBA1C7282L ^ l2))];
        nArray2[0] = (int)bZ.OO("k", (int)23329, (long)(0x3D0F9B3F287F7F7AL ^ l2));
        nArray2[1] = (int)bZ.OO("k", (int)3276, (long)(0x4D61280D000F288AL ^ l2));
        nArray2[2] = (int)bZ.OO("k", (int)2652, (long)(0x43AA39EED1DAAE31L ^ l2));
        nArray2[3] = (int)bZ.OO("k", (int)4519, (long)(0x33EEAA6BA8FEB5EDL ^ l2));
        nArray2[4] = (int)bZ.OO("k", (int)3276, (long)(0x4D61280D000F288AL ^ l2));
        nArray2[5] = (int)bZ.OO("k", (int)16694, (long)(0x4A97822A8133E57FL ^ l2));
        nArray2[bZ.OO("k", (int)24825, (long)(0x5C239557C0A64480L ^ l2))] = (int)bZ.OO("k", (int)10126, (long)(0x5207C57DD08B03F4L ^ l2));
        nArray2[bZ.OO("k", (int)23687, (long)(0x7CFC556D090678D4L ^ l2))] = (int)bZ.OO("k", (int)16145, (long)(0x590693FEAACB1B49L ^ l2));
        nArray2[bZ.OO("k", (int)6048, (long)(0x21F1C5EAA73333CEL ^ l2))] = (int)bZ.OO("k", (int)6515, (long)(0x10C8562615F0BD2EL ^ l2));
        nArray2[bZ.OO("k", (int)23276, (long)(0x71E16C7F04DB7EA1L ^ l2))] = (int)bZ.OO("k", (int)32346, (long)(0x1B2049503913DA00L ^ l2));
        nArray2[bZ.OO("k", (int)26283, (long)(0x4FDFD68827A042F4L ^ l2))] = (int)bZ.OO("k", (int)6344, (long)(0x364639305A273C96L ^ l2));
        nArray2[bZ.OO("k", (int)23003, (long)(0xDE18150E3C87DBEL ^ l2))] = (int)bZ.OO("k", (int)29066, (long)(0x15A16B75FF1CD5CDL ^ l2));
        nArray2[bZ.OO("k", (int)8602, (long)(0x5A6927BC5A9E85FCL ^ l2))] = (int)bZ.OO("k", (int)23010, (long)(0x7ABDFEFE02507DAAL ^ l2));
        nArray2[bZ.OO("k", (int)10974, (long)(0x77DC128491AB0E92L ^ l2))] = (int)bZ.OO("k", (int)16694, (long)(0x4A97822A8133E57FL ^ l2));
        nArray2[bZ.OO("k", (int)14087, (long)(0x416481906CF3937FL ^ l2))] = (int)bZ.OO("k", (int)13371, (long)(0xD16983305679062L ^ l2));
        nArray2[bZ.OO("k", (int)604, (long)(0x7F0EB843AE81A635L ^ l2))] = (int)bZ.OO("k", (int)4519, (long)(0x33EEAA6BA8FEB5EDL ^ l2));
        nArray2[bZ.OO("k", (int)26930, (long)(0x1755666A60C6CD52L ^ l2))] = (int)bZ.OO("k", (int)30664, (long)(0x10D817CE5535D38BL ^ l2));
        nArray2[bZ.OO("k", (int)787, (long)(0x3F0EEEF252EEA742L ^ l2))] = (int)bZ.OO("k", (int)2469, (long)(0x22FBDD68AFB12DD9L ^ l2));
        this.nLbAG = new ct(this, mr.clS(nArray2));
        this.kojYh = new cu(this.nLbAG, mr.clS(new int[]{(int)bZ.OO("k", (int)15560, (long)(0x568BC2E56BE298A3L ^ l2)), (int)bZ.OO("k", (int)4519, (long)(0x33EEAA6BA8FEB5EDL ^ l2)), (int)bZ.OO("k", (int)7732, (long)(0x12BA8935463BBA7FL ^ l2)), (int)bZ.OO("k", (int)2469, (long)(0x22FBDD68AFB12DD9L ^ l2))})).SY();
        this.cCJxB = new cu(this.nLbAG, mr.clS(new int[]{(int)bZ.OO("k", (int)24710, (long)(0x297FA86EBB07C4D2L ^ l2)), (int)bZ.OO("k", (int)29066, (long)(0x15A16B75FF1CD5CDL ^ l2)), (int)bZ.OO("k", (int)16594, (long)(0x2D9CD80AD447E496L ^ l2)), (int)bZ.OO("k", (int)15478, (long)(0x1532F980A6E59812L ^ l2)), (int)bZ.OO("k", (int)2469, (long)(0x22FBDD68AFB12DD9L ^ l2))}));
        this.mBhYD = new cu(this.nLbAG, mr.clS(new int[]{(int)bZ.OO("k", (int)25765, (long)(0x5A432B4DFE6CC0C7L ^ l2)), (int)bZ.OO("k", (int)2308, (long)(0x9FB4A5220C12D79L ^ l2)), (int)bZ.OO("k", (int)4519, (long)(0x33EEAA6BA8FEB5EDL ^ l2)), (int)bZ.OO("k", (int)25215, (long)(0x738548371197461EL ^ l2))}));
        this.CCbky = new rk[4];
        this.pHErH = new rk((int)bZ.OO("k", (int)11673, (long)(0x3BECF2D53BC89C5L ^ l2))).dhs(rj.NJlxm);
        boolean bl3 = bl2;
        this.jLjXP = new rk((int)bZ.OO("k", (int)12884, (long)(0x127D84ACF9C962FL ^ l2))).dhs(rj.XzDkv);
        this.sjeIR = new rk((int)bZ.OO("k", (int)12884, (long)(0x127D84ACF9C962FL ^ l2))).dhs(rj.XzDkv);
        this.PquMu = new rk((int)bZ.OO("k", (int)12884, (long)(0x127D84ACF9C962FL ^ l2))).dhs(rj.UPXqT);
        this.dfbld = new rk((int)bZ.OO("k", (int)12884, (long)(0x127D84ACF9C962FL ^ l2))).dhs(rj.XzDkv);
        for (int i2 = 0; i2 < this.CCbky.length; ++i2) {
            this.CCbky[i2] = new rk((int)bZ.OO("k", (int)12884, (long)(0x127D84ACF9C962FL ^ l2))).dhs(rj.XzDkv);
            if (bl3) continue;
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bZ.yIQrZ = gb.aYR(3538484401670313874L, -6506673960747853613L, MethodHandles.lookup().lookupClass()).a(209388426308101L);
                bZ.BwsEB = new HashMap<K, V>(13);
                var0 = bZ.yIQrZ ^ 100398186049059L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[56];
                var5_4 = 0;
                var6_5 = "\u00b2\u00c4\u0098\u0015\u00faVq\u00a6\u00e4.}\u001e_\u0082?w\u001d\u00f3dMA/tDz\u00de\u00c5b\u00e2y\u0082\u0088\u0098\u0087\u00f1\u00b8\u00fb\u00ac\u00c5\u00e9\u008b\u00b6\u00a9)\u00f5\u00f1\u00c4G\u00ab\u0005k}+\u00c5\u00f1\u0012\u00ff\u00f8\u00e64,\u0096\u0001\u00e7\u0081\u0002J\u0088\u00d8\u008cy\u00fe\u00cf;+M\u00b2$#\u0004Qx\u00c9\u00f6M\u0095\u0012\u00f80\t\u00dc\u00e9\u00b5\u00bb\u0006\u00a5*L\u0085\u0005A'C2l\u00ce\u00c7\u00fb\u007fX\u00feG\u0005\u008b##\u00cf\u00a8\u00dc\u00c2\u00bc\u00ec\u00e1b\u0000\u00ab~\u00ef\u009eU\u00d8\u0018\u00c3\u00f3\u0013\u00f6D\u001a\u00e1\u0019\u00db\u00f2\u000e\u00a3|a0.%f\u00e3\u000f\u0092k\u00ed\u00cc\u001f>\u00eb\n\u001b W~\u0018:r\u009anW3\u00f8~\u000f\u0087Yq\u001cl\u00c0\u00aftx\u00db\u00fa\u0007\u00cbl\u007fb\u00a4\u0000m\u00ca\u00d3K\u001e\u00a1\u00f29(\u00ee\u00bc%\u0012\u00b5\u00e9\u00a1<\u00bbS\u0003\u00e2\u00a9\u0083\u0005\u0091\u00c1\u0090\u00e5\u00e1\u00f7B\u00cck\u0012\u0006)k\u00aaOb\u00f0\u00ef\u00af=u\u0091\u00a0\u00c1\u00ba\u0010G4\u00f2\u0010\u0007\u00c9\u00c4\u00c9\u008b\u0094GV0%\u0094;\u001f\u0092i\u0015\n'5m\u00d4\u00b3o\u00fc\u00e9\u00d7\u001c\u0014Q\u009a\u00c5\u00df\u0095s\u00d2H\u00d3\u00b5\u00cd\u00ce\u009cq\u00e6C\u00d0\u00c5\u00da\u00f7\u0014\u00927\u00deA\u0088\u00eb\u0087\u008b\u001e\u00d1\u0092P-\u008c\u0087</c\u008eK\u0088m\u00bfx\u00db\u0082p\u00c0*\u00afo\u00f5\u00b0MXC\u00cbO3\u0003\u00a2\u00e7.\u0091\u0090\u000e;0\u00068\u001e-\u00dd\u00f6\u00f3Y\u0003nb\u00f5/2\u00a2\u00a7&\u00f0K\u00ca9.\u00b9\u00ea\u0012\u00d7\u00b5Fq\u00bf\u0016j\u00de\u00f2A\u0094\u00bb\u0088<\\5V\u008d\u00f6o\u00ca|\u00ba\u0090O k\u00a5\u00f2jN\u00ab\u009aql\u0087\\\u00ffO\u0081\u008eG7y\u009f\ri\u00a6\u00d8a,\u008d\u00c7y\u00c4\u00eeK\u00ad\u0086\u00eb[I\u0005\u00a0";
                var7_6 = "\u00b2\u00c4\u0098\u0015\u00faVq\u00a6\u00e4.}\u001e_\u0082?w\u001d\u00f3dMA/tDz\u00de\u00c5b\u00e2y\u0082\u0088\u0098\u0087\u00f1\u00b8\u00fb\u00ac\u00c5\u00e9\u008b\u00b6\u00a9)\u00f5\u00f1\u00c4G\u00ab\u0005k}+\u00c5\u00f1\u0012\u00ff\u00f8\u00e64,\u0096\u0001\u00e7\u0081\u0002J\u0088\u00d8\u008cy\u00fe\u00cf;+M\u00b2$#\u0004Qx\u00c9\u00f6M\u0095\u0012\u00f80\t\u00dc\u00e9\u00b5\u00bb\u0006\u00a5*L\u0085\u0005A'C2l\u00ce\u00c7\u00fb\u007fX\u00feG\u0005\u008b##\u00cf\u00a8\u00dc\u00c2\u00bc\u00ec\u00e1b\u0000\u00ab~\u00ef\u009eU\u00d8\u0018\u00c3\u00f3\u0013\u00f6D\u001a\u00e1\u0019\u00db\u00f2\u000e\u00a3|a0.%f\u00e3\u000f\u0092k\u00ed\u00cc\u001f>\u00eb\n\u001b W~\u0018:r\u009anW3\u00f8~\u000f\u0087Yq\u001cl\u00c0\u00aftx\u00db\u00fa\u0007\u00cbl\u007fb\u00a4\u0000m\u00ca\u00d3K\u001e\u00a1\u00f29(\u00ee\u00bc%\u0012\u00b5\u00e9\u00a1<\u00bbS\u0003\u00e2\u00a9\u0083\u0005\u0091\u00c1\u0090\u00e5\u00e1\u00f7B\u00cck\u0012\u0006)k\u00aaOb\u00f0\u00ef\u00af=u\u0091\u00a0\u00c1\u00ba\u0010G4\u00f2\u0010\u0007\u00c9\u00c4\u00c9\u008b\u0094GV0%\u0094;\u001f\u0092i\u0015\n'5m\u00d4\u00b3o\u00fc\u00e9\u00d7\u001c\u0014Q\u009a\u00c5\u00df\u0095s\u00d2H\u00d3\u00b5\u00cd\u00ce\u009cq\u00e6C\u00d0\u00c5\u00da\u00f7\u0014\u00927\u00deA\u0088\u00eb\u0087\u008b\u001e\u00d1\u0092P-\u008c\u0087</c\u008eK\u0088m\u00bfx\u00db\u0082p\u00c0*\u00afo\u00f5\u00b0MXC\u00cbO3\u0003\u00a2\u00e7.\u0091\u0090\u000e;0\u00068\u001e-\u00dd\u00f6\u00f3Y\u0003nb\u00f5/2\u00a2\u00a7&\u00f0K\u00ca9.\u00b9\u00ea\u0012\u00d7\u00b5Fq\u00bf\u0016j\u00de\u00f2A\u0094\u00bb\u0088<\\5V\u008d\u00f6o\u00ca|\u00ba\u0090O k\u00a5\u00f2jN\u00ab\u009aql\u0087\\\u00ffO\u0081\u008eG7y\u009f\ri\u00a6\u00d8a,\u008d\u00c7y\u00c4\u00eeK\u00ad\u0086\u00eb[I\u0005\u00a0".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u00cc\u00c9\u0093\u00d2;i\u00a6\u00df\u0019\u00bc\u00a7&8\u00f5\u00d9\u00b5";
                    var7_6 = "\u00cc\u00c9\u0093\u00d2;i\u00a6\u00df\u0019\u00bc\u00a7&8\u00f5\u00d9\u00b5".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
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
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
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
        bZ.wNQMp = var8_3;
        bZ.GEMJy = new Integer[56];
    }

    @Override
    protected void NV(lC lC2) {
        LivingEntity livingEntity;
        block5: {
            block6: {
                long l2 = yIQrZ ^ 0x1D07E9902300L;
                LivingEntity livingEntity2 = this.OK();
                boolean bl2 = ca.OX();
                try {
                    try {
                        livingEntity = livingEntity2;
                        if (bl2) break block5;
                        if (livingEntity == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw bZ.OL(matchException);
                    }
                    this.qcZhQ = livingEntity2;
                }
                catch (MatchException matchException) {
                    throw bZ.OL(matchException);
                }
            }
            livingEntity = this.qcZhQ;
        }
        if (livingEntity == null) {
            return;
        }
        mG mG2 = mG.QHTxQ.cob(0.3f * this.gILqY.dhj());
        lC2.ccY(this.toIeR - 5.0f, this.QWaAn - 5.0f, this.jTsqG + 10.0f, this.Xtjvx + 10.0f, 15.0f, ld.all(6.0f), mG2);
        lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, this.ormBS.dhj(), this.gILqY.dhj());
        this.OJ(lC2);
        this.OG(lC2);
        this.OH(lC2);
        this.OI(lC2);
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.jTsqG = 103.0f;
        this.Xtjvx = 31.0f;
    }

    private static int ON(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bZ.OM(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private LivingEntity OK() {
        block39: {
            MinecraftClient minecraftClient;
            block38: {
                boolean bl2;
                block36: {
                    boolean bl3;
                    block37: {
                        block33: {
                            block34: {
                                LivingEntity livingEntity;
                                block35: {
                                    gg gg2;
                                    LivingEntity livingEntity2;
                                    block30: {
                                        block31: {
                                            LivingEntity livingEntity3;
                                            block32: {
                                                gg gg3;
                                                block28: {
                                                    block29: {
                                                        long l2 = yIQrZ ^ 0x6A8C042A1AD8L;
                                                        fg fg2 = rD.dlJ().aZx(fg.class);
                                                        bl3 = ca.OY();
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        gg3 = fg2;
                                                                        if (!bl3) break block28;
                                                                        if (!gg3.bag()) break block29;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw bZ.OL(matchException);
                                                                    }
                                                                    gg3 = fg2;
                                                                    if (!bl3) break block28;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw bZ.OL(matchException);
                                                                }
                                                                if (((fg)gg3).aIU() == null) break block29;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bZ.OL(matchException);
                                                            }
                                                            return fg2.aIU();
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bZ.OL(matchException);
                                                        }
                                                    }
                                                    gg3 = rD.dlJ().aZx(fr.class);
                                                }
                                                fr fr2 = (fr)gg3;
                                                livingEntity2 = fr2.aOQ();
                                                try {
                                                    try {
                                                        try {
                                                            gg2 = fr2;
                                                            if (!bl3) break block30;
                                                            if (!gg2.bag()) break block31;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bZ.OL(matchException);
                                                        }
                                                        livingEntity3 = livingEntity2;
                                                        if (!bl3) break block32;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bZ.OL(matchException);
                                                    }
                                                    if (livingEntity3 == null) break block31;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bZ.OL(matchException);
                                                }
                                                livingEntity3 = livingEntity2;
                                            }
                                            return livingEntity3;
                                        }
                                        gg2 = rD.dlJ().aZx(eP.class);
                                    }
                                    eP eP2 = (eP)gg2;
                                    livingEntity2 = eP2.aBS();
                                    try {
                                        try {
                                            try {
                                                bl2 = eP2.bag();
                                                if (!bl3) break block33;
                                                if (!bl2) break block34;
                                            }
                                            catch (MatchException matchException) {
                                                throw bZ.OL(matchException);
                                            }
                                            livingEntity = livingEntity2;
                                            if (!bl3) break block35;
                                        }
                                        catch (MatchException matchException) {
                                            throw bZ.OL(matchException);
                                        }
                                        if (livingEntity == null) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                    livingEntity = livingEntity2;
                                }
                                return livingEntity;
                            }
                            bl2 = this.NCHJZ.WF();
                        }
                        try {
                            if (!bl3) break block36;
                            if (!bl2) break block37;
                        }
                        catch (MatchException matchException) {
                            throw bZ.OL(matchException);
                        }
                        Entity entity = rD.dlmvG.targetedEntity;
                        try {
                            bl2 = entity instanceof LivingEntity;
                            if (!bl3) break block36;
                            if (!bl2) break block37;
                        }
                        catch (MatchException matchException) {
                            throw bZ.OL(matchException);
                        }
                        LivingEntity livingEntity = (LivingEntity)entity;
                        return livingEntity;
                    }
                    try {
                        minecraftClient = rD.dlmvG;
                        if (!bl3) break block38;
                        bl2 = minecraftClient.currentScreen instanceof ChatScreen;
                    }
                    catch (MatchException matchException) {
                        throw bZ.OL(matchException);
                    }
                }
                if (!bl2) break block39;
                minecraftClient = rD.dlmvG;
            }
            return minecraftClient.player;
        }
        return null;
    }

    @Override
    public boolean Om() {
        boolean bl2;
        long l2 = yIQrZ ^ 0x1E8A7F10662AL;
        try {
            bl2 = this.OK() != null;
        }
        catch (MatchException matchException) {
            throw bZ.OL(matchException);
        }
        return bl2;
    }

    private static MatchException OL(MatchException matchException) {
        return matchException;
    }

    private void OJ(lC lC2) {
        block44: {
            List<ItemStack> list;
            int n2;
            mG mG2;
            lq lq2;
            boolean bl2;
            boolean bl3;
            boolean bl4;
            float f2;
            ii ii2;
            boolean bl5;
            block35: {
                boolean bl6;
                block32: {
                    block34: {
                        block33: {
                            float f3;
                            rk rk2;
                            block30: {
                                block31: {
                                    long l2 = yIQrZ ^ 0x7BB7F298BD1FL;
                                    bl5 = ca.OX();
                                    try {
                                        rk2 = this.pHErH;
                                        float f4 = this.ormBS.dhj() * this.KgDVz.dhj() - 1.0f;
                                        f3 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                        if (bl5) break block30;
                                        if (f3 < 0) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                    f3 = 1.0f;
                                    break block30;
                                }
                                f3 = 0.0f;
                            }
                            rk2.dhc((boolean)f3);
                            ii2 = rD.dlM();
                            if (this.kojYh.SZ()) break block44;
                            f2 = jF.bHw()[3];
                            try {
                                try {
                                    try {
                                        bl6 = fX.aYf();
                                        if (bl5) break block32;
                                        if (bl6) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                    bl6 = fX.aYe();
                                    if (bl5) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw bZ.OL(matchException);
                                }
                                if (!bl6) break block34;
                            }
                            catch (MatchException matchException) {
                                throw bZ.OL(matchException);
                            }
                        }
                        bl6 = true;
                        break block32;
                    }
                    bl6 = false;
                }
                bl4 = bl6;
                bl3 = this.cCJxB.SZ();
                bl2 = this.mBhYD.SZ();
                lq2 = lE.SVnNc.bYM(6.0f);
                mG2 = ii2.bjd().coa(255.0f * fX.aYh());
                float f5 = 0.0f;
                n2 = 0;
                list = oP.cJr(this.qcZhQ).cJE();
                for (ItemStack object : list) {
                    float f6;
                    float f7;
                    block36: {
                        try {
                            try {
                                if (bl5) break block35;
                                if (!object.isEmpty()) break block36;
                            }
                            catch (MatchException matchException) {
                                throw bZ.OL(matchException);
                            }
                            if (!bl5) continue;
                        }
                        catch (MatchException matchException) {
                            throw bZ.OL(matchException);
                        }
                    }
                    try {
                        f7 = f5;
                        f6 = bl2 ? 11.0f : 5.0f + lq2.cao(jc.bzf(object));
                    }
                    catch (MatchException matchException) {
                        throw bZ.OL(matchException);
                    }
                    f5 = f7 + (f6 + 2.0f);
                    if (!bl5) continue;
                }
                this.jLjXP.dhd(f5);
            }
            float f8 = -this.jLjXP.dhj() / 2.0f;
            for (ItemStack itemStack : list) {
                block42: {
                    float f9;
                    float f10;
                    block43: {
                        float f11;
                        float f12;
                        float f13;
                        float f14;
                        String string;
                        block41: {
                            boolean bl7;
                            block39: {
                                block40: {
                                    float f15;
                                    float f16;
                                    boolean bl8;
                                    rk rk3;
                                    block37: {
                                        block38: {
                                            try {
                                                rk3 = this.CCbky[n2];
                                                bl8 = itemStack.isEmpty();
                                                if (bl5) break block37;
                                                if (bl8) break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw bZ.OL(matchException);
                                            }
                                            bl8 = true;
                                            break block37;
                                        }
                                        bl8 = false;
                                    }
                                    rk3.dhc(bl8);
                                    f10 = this.pHErH.dhj() * this.CCbky[n2].dhj();
                                    string = jc.bzf(itemStack);
                                    try {
                                        f16 = bl2 ? 11.0f : 5.0f + lq2.cao(string);
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                    f9 = f16;
                                    try {
                                        f15 = bl2 ? 11.0f : 9.0f;
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                    f14 = f15;
                                    f13 = this.toIeR + this.jTsqG / 2.0f + f8;
                                    f12 = this.QWaAn + this.Xtjvx - 4.0f + 6.0f * f10;
                                    try {
                                        try {
                                            bl7 = bl4;
                                            if (bl5) break block39;
                                            if (!bl7) break block40;
                                        }
                                        catch (MatchException matchException) {
                                            throw bZ.OL(matchException);
                                        }
                                        jF.bHz(1.0f, 1.0f, 1.0f, f2 * f10);
                                        lC2.cej(f13, f12, f9, f14, 5.0f, ld.all(1.5f), this.ormBS.dhj());
                                        jF.bHz(1.0f, 1.0f, 1.0f, f2);
                                    }
                                    catch (MatchException matchException) {
                                        throw bZ.OL(matchException);
                                    }
                                }
                                try {
                                    lC2.cdg(f13, f12, f9, f14, ld.all(1.5f), mG2.coa(mG2.cou() * f10));
                                    jG.bHK(lC2, f13, f12, f9, f14);
                                    f11 = 1.0f;
                                    if (bl5) break block41;
                                    jF.bHz(f11, 1.0f, 1.0f, f2 * f10 * 0.5f);
                                    bl7 = bl3;
                                }
                                catch (MatchException matchException) {
                                    throw bZ.OL(matchException);
                                }
                            }
                            f11 = bl7 ? 1.0f : 0.7f;
                        }
                        float f17 = f11;
                        float f18 = f13 + jf.bAH(16.0f * f17, f9);
                        float f19 = f12 + jf.bAH(16.0f * f17, f14);
                        try {
                            lC2.cea(itemStack, f18, f19, f17).bGv();
                            jF.bHz(1.0f, 1.0f, 1.0f, f2);
                            jG.bHN();
                            if (bl5) break block42;
                            if (!bl3) break block43;
                        }
                        catch (MatchException matchException) {
                            throw bZ.OL(matchException);
                        }
                        mG mG3 = ii2.bjb().coa(255.0f * f10);
                        float f20 = f13 + jf.bAH(lq2.cao(string), f9);
                        float f21 = f12 + jf.bAH(lq2.cat(), f14);
                        lC2.cez(lq2, string, f20, f21, mG3);
                    }
                    f8 += (f9 + 2.0f) * f10;
                    ++n2;
                }
                if (!bl5) continue;
            }
        }
    }

    /*
     * Unable to fully structure code
     */
    private void OG(lC var1_1) {
        block9: {
            block8: {
                var2_2 = bZ.yIQrZ ^ 75197731000033L;
                var5_3 = mG.hoGuU.coa(255.0f * this.ormBS.dhj());
                var4_4 = ca.OX();
                var7_5 = this.qcZhQ;
                try {
                    try {
                        v0 = var7_5;
                        if (var4_4) break block8;
                        if (v0 instanceof AbstractClientPlayerEntity) {
                        }
                        ** GOTO lbl23
                    }
                    catch (MatchException v1) {
                        throw bZ.OL(v1);
                    }
                    v0 = var7_5;
                }
                catch (MatchException v2) {
                    throw bZ.OL(v2);
                }
            }
            var6_6 = (AbstractClientPlayerEntity)v0;
            try {
                var1_1.ccZ(var6_6, this.toIeR + 6.0f, this.QWaAn + 6.0f, 19.0f, ld.all(3.0f), var5_3);
                if (!var4_4) break block9;
lbl23:
                // 2 sources

                var1_1.cdb(this.toIeR + 6.0f, this.QWaAn + 6.0f, 19.0f, ld.all(3.0f), var5_3);
            }
            catch (MatchException v3) {
                throw bZ.OL(v3);
            }
        }
    }

    private void OH(lC lC2) {
        ii ii2 = rD.dlM();
        float f2 = this.toIeR + 30.0f;
        float f3 = this.QWaAn + this.Xtjvx - 12.0f;
        float f4 = 65.0f;
        float f5 = 3.0f;
        lC2.cdg(f2, f3, f4, f5, ld.all(0.7f), mG.QHTxQ.cob(0.3f));
        float f6 = this.qcZhQ.getHealth();
        float f7 = this.qcZhQ.getAbsorptionAmount();
        float f8 = this.qcZhQ.getMaxHealth();
        float f9 = (f6 + f7) / f8;
        float f10 = f7 / Math.max(20.0f, f7);
        this.sjeIR.dhd(f9);
        this.dfbld.dhd(f10);
        this.PquMu.dhd(f6 + f7);
        float f11 = MathHelper.clamp((float)this.sjeIR.dhj(), (float)0.0f, (float)1.0f);
        lC2.cdg(f2, f3, f4 * f11, f5, ld.all(0.7f), ii2.bjf());
        float f12 = MathHelper.clamp((float)this.dfbld.dhj(), (float)0.0f, (float)1.0f);
        lC2.cdg(f2 + f4 - f4 * f12, f3, f4 * f12, f5, ld.all(0.7f), mG.cnP(255.0f, 220.0f, 81.0f));
    }

    private static int OM(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x19EF;
        if (GEMJy[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = wNQMp[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])BwsEB.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BwsEB.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bZ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bZ.GEMJy[n3] = n4;
        }
        return GEMJy[n3];
    }

    private void OI(lC lC2) {
        bZ bZ2;
        String string;
        mG mG2;
        lq lq2;
        block9: {
            String string2;
            float f2;
            float f3;
            float f4;
            mG mG3;
            lq lq3;
            block10: {
                String string3;
                boolean bl2;
                block8: {
                    float f5;
                    block6: {
                        block7: {
                            long l2 = yIQrZ ^ 0x51BF1B7674B4L;
                            lq3 = lE.joxgd.bYM(7.0f);
                            bl2 = ca.OX();
                            lq2 = lE.SVnNc.bYM(6.0f);
                            ii ii2 = rD.dlM();
                            mG3 = ii2.bjb().coa(255.0f * this.ormBS.dhj());
                            mG2 = ii2.bjf().coa(255.0f * this.ormBS.dhj());
                            try {
                                try {
                                    f5 = this.PquMu.dhj();
                                    if (bl2) break block6;
                                    if (f5 != 1000.0f) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw bZ.OL(matchException);
                                }
                                string3 = "?";
                                break block8;
                            }
                            catch (MatchException matchException) {
                                throw bZ.OL(matchException);
                            }
                        }
                        f5 = this.PquMu.dhj();
                    }
                    string3 = jf.bAM(f5);
                }
                string = string3;
                f4 = this.toIeR + 30.0f;
                f3 = this.QWaAn + 9.0f;
                f2 = this.jTsqG - 40.0f - lq2.cao(string);
                string2 = this.qcZhQ.getName().getString();
                try {
                    bZ2 = this;
                    if (bl2) break block9;
                    if (bZ2.qcZhQ != rD.dlmvG.player) break block10;
                }
                catch (MatchException matchException) {
                    throw bZ.OL(matchException);
                }
                string2 = rD.dlJ().aZx(fS.class).aWP(string2);
            }
            lC2.ceH(lq3, string2, f4, f3, mG3, 0.7f, 1.0f, f2);
            bZ2 = this;
        }
        float f6 = bZ2.toIeR + this.jTsqG - 7.0f;
        float f7 = this.QWaAn + 10.0f;
        lC2.ceP(lq2, string, f6, f7, mG2);
    }

    private static CallSite OO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bZ.class, "ON", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

