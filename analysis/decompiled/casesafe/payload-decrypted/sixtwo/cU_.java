/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cU$sp;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jJ;
import sixtwo.jk;
import sixtwo.kp;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.qQ;
import sixtwo.rD;

public class cU
extends gg {
    private final cv BauFa;
    private final cw PhtFx;
    private final cw BcQvA;
    private final cw QwJkI;
    private final cw QoAWo;
    private final cG gxark;
    private final cC GctAm;
    private final cC LHxFV;
    private final Map<PlayerEntity, List<cU$sp>> ERVmZ;
    private static final long CcSNg;
    private static final long[] bhpzz;
    private static final Integer[] XmDUC;
    private static final Map JJzQs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cU() {
        long l2 = CcSNg ^ 0x7AB88CBB44EEL;
        super(gf.aZL((int)124, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)83;
        nArray[1] = (int)104;
        nArray[2] = (int)111;
        nArray[3] = (int)119;
        nArray[4] = (int)32;
        nArray[5] = (int)70;
        nArray[6] = (int)111;
        nArray[7] = (int)114;
        this.BauFa = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[7];
        nArray2[0] = (int)80;
        nArray2[1] = (int)108;
        nArray2[2] = (int)97;
        nArray2[3] = (int)121;
        nArray2[4] = (int)101;
        nArray2[5] = (int)114;
        nArray2[6] = (int)115;
        this.PhtFx = new cw(this.BauFa, mr.clS(nArray2));
        int[] nArray3 = new int[7];
        nArray3[0] = (int)70;
        nArray3[1] = (int)114;
        nArray3[2] = (int)105;
        nArray3[3] = (int)101;
        nArray3[4] = (int)110;
        nArray3[5] = (int)100;
        nArray3[6] = (int)115;
        this.BcQvA = new cw(this.BauFa, mr.clS(nArray3));
        int[] nArray4 = new int[10];
        nArray4[0] = (int)73;
        nArray4[1] = (int)110;
        nArray4[2] = (int)118;
        nArray4[3] = (int)105;
        nArray4[4] = (int)115;
        nArray4[5] = (int)105;
        nArray4[6] = (int)98;
        nArray4[7] = (int)108;
        nArray4[8] = (int)101;
        nArray4[9] = (int)115;
        this.QwJkI = new cw(this.BauFa, mr.clS(nArray4));
        this.QoAWo = new cw(this.BauFa, mr.clS(new int[]{(int)83, (int)101, (int)108, (int)102})).Tz();
        this.gxark = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114})).Uf(rD.dlM().bjG().bis());
        int[] nArray5 = new int[6];
        nArray5[0] = (int)76;
        nArray5[1] = (int)101;
        nArray5[2] = (int)110;
        nArray5[3] = (int)103;
        nArray5[4] = (int)116;
        nArray5[5] = (int)104;
        this.GctAm = new cC(this, mr.clS(nArray5)).Vy(0.01).Vw(2.0).Vx(4.0).VA(3.0);
        int[] nArray6 = new int[14];
        nArray6[0] = (int)71;
        nArray6[1] = (int)114;
        nArray6[2] = (int)97;
        nArray6[3] = (int)100;
        nArray6[4] = (int)105;
        nArray6[5] = (int)101;
        nArray6[6] = (int)110;
        nArray6[7] = (int)116;
        nArray6[8] = (int)32;
        nArray6[9] = (int)83;
        nArray6[10] = (int)112;
        nArray6[11] = (int)101;
        nArray6[12] = (int)101;
        nArray6[13] = (int)100;
        this.LHxFV = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0);
        this.ERVmZ = new HashMap<PlayerEntity, List<cU$sp>>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cU.CcSNg = gb.aYR(-7573313126502065491L, 2677294498807651305L, MethodHandles.lookup().lookupClass()).a(154380809325564L);
                cU.JJzQs = new HashMap<K, V>(13);
                var0 = cU.CcSNg ^ 136742376114165L;
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
                var6_5 = "uI.Z\u00f4\u00f9\u0083:\u00f8\u0012\u00f2\u00ea\u0001\u00dc\u0094\u00b2\u00f9\u00c8\u00da\u00d5\u009f/\u001aS\u00dd\u00a0\u008cy\u00c6&\u001c~3O.(\u009d\u00c1\u00ca\u00b2\u00e2\u0081\u0084\u00be\u00e5\u00eeq\u00d1\u00d9\u0013.^\u0087\u001f\u00f5\u00c9\u009f\u00bc\u00ad}\u00c3\u001a\u000b)o\u001c\u00a5\u000f\u00f4\u00f0\u0089\u008c<\u00bbAi\u0098j>\tCjH\u00f9V\"\u001f)\u00ecb\u00e8R0S$,\\\u00dc{R\u0007\u0019\u00ea-s\u00d7\u00b3<\u00d9\u00be\u0017\u00d4\u0014\u00a7[\u00d4\u009aZ\u00ff\"\u00d6\u009b\u00fbH\u00f9\u00ba\u00b8\u00c6&a\u001a\u00b7\u00efc\u00b3uC\u00db+k?\u00f1\u0088Wj,\u00cc\u00a6\u0010\u00f5\u00c5n\u00ed\u0080\u0089\u00e1\u0093\u00e6\u00c2-\u001b\u0010\u00b2r\u009d\u0080\u0092\u0081UW\u00c0.\u00a6r\u00f4\u00b3\t\u00bei-\u00adp\u00ce\u00d1\u001f\u000f\u0086q:kRk\u0013\u008blE\u00c9`d\u000b\u00cd\t\u0003\u00d0\u00cf\u00fc}\u00ffR\u0086'BT`\u0098\u009f\u00c4\u00a1']\u00c9\u00c7s\u00bf\u008a3\u00d0\u00b6\u0099\u0098\u0081\f\u0019\u00f1o\u0004T[FQ\u00a0_\u00f1\u0091\u00d9\u001b\u009a\u0091\u00e9k\u00a4P4\u00f7\u00dd\u009d\u00fa\u00ff[\u00f3\u0011\u00c8\u0096~O\u0083<\u00bb\u00ae\u00ac\u00fc\u00f6f\u0085\u00a1\u00e48\u00d4\u00b0\u00d8\u001d\u00cf\u00f1\u0098Ih\u00e5\u00ae\u00ecA\u0014\u00fc\u0007\u0017j\u00d1\u00038/\u0080\u0011\u0016$\u00ee\u00ce\u00b0J\u00dd\u00bc\u00e0N\u00fc\u00ae\u0094\u00deA\u00b6\u00df\u00b1\u00c9~\u0012\u00f5y\u008d1?\u0002\u0092\u00f5*\u00b9\u0019=ey\u00e2\u00f8\u0087\u00e6r\u00ee\u00ae\u00fe\u00bd\u00a0\u001f\u00e0\u0016BT\u0087*\u00bf\u00cd\"\u000f\u00bb\u0016vl\u009c\u00bc/\u0099\u00cf\u00e9\u00d7\u00f6\u0000h\u00a4\u00b9sJC-\u00d1F\u008e\u00a1\u00d2]\u00f0\b\u001f\u00adC\u008b\u00f5z\u009b \u0007t\u00cb\u000eJ\u0012%\u00ec\u00a5\u008b\u00e3h{\u0012h\u00e1\u00ce\u00bc\u0080\"\u00b3.\u0086\u00c3p\u00ab\"G\u0005*\u0006\u009e\u0092s8\f\u0019_\u00c7";
                var7_6 = "uI.Z\u00f4\u00f9\u0083:\u00f8\u0012\u00f2\u00ea\u0001\u00dc\u0094\u00b2\u00f9\u00c8\u00da\u00d5\u009f/\u001aS\u00dd\u00a0\u008cy\u00c6&\u001c~3O.(\u009d\u00c1\u00ca\u00b2\u00e2\u0081\u0084\u00be\u00e5\u00eeq\u00d1\u00d9\u0013.^\u0087\u001f\u00f5\u00c9\u009f\u00bc\u00ad}\u00c3\u001a\u000b)o\u001c\u00a5\u000f\u00f4\u00f0\u0089\u008c<\u00bbAi\u0098j>\tCjH\u00f9V\"\u001f)\u00ecb\u00e8R0S$,\\\u00dc{R\u0007\u0019\u00ea-s\u00d7\u00b3<\u00d9\u00be\u0017\u00d4\u0014\u00a7[\u00d4\u009aZ\u00ff\"\u00d6\u009b\u00fbH\u00f9\u00ba\u00b8\u00c6&a\u001a\u00b7\u00efc\u00b3uC\u00db+k?\u00f1\u0088Wj,\u00cc\u00a6\u0010\u00f5\u00c5n\u00ed\u0080\u0089\u00e1\u0093\u00e6\u00c2-\u001b\u0010\u00b2r\u009d\u0080\u0092\u0081UW\u00c0.\u00a6r\u00f4\u00b3\t\u00bei-\u00adp\u00ce\u00d1\u001f\u000f\u0086q:kRk\u0013\u008blE\u00c9`d\u000b\u00cd\t\u0003\u00d0\u00cf\u00fc}\u00ffR\u0086'BT`\u0098\u009f\u00c4\u00a1']\u00c9\u00c7s\u00bf\u008a3\u00d0\u00b6\u0099\u0098\u0081\f\u0019\u00f1o\u0004T[FQ\u00a0_\u00f1\u0091\u00d9\u001b\u009a\u0091\u00e9k\u00a4P4\u00f7\u00dd\u009d\u00fa\u00ff[\u00f3\u0011\u00c8\u0096~O\u0083<\u00bb\u00ae\u00ac\u00fc\u00f6f\u0085\u00a1\u00e48\u00d4\u00b0\u00d8\u001d\u00cf\u00f1\u0098Ih\u00e5\u00ae\u00ecA\u0014\u00fc\u0007\u0017j\u00d1\u00038/\u0080\u0011\u0016$\u00ee\u00ce\u00b0J\u00dd\u00bc\u00e0N\u00fc\u00ae\u0094\u00deA\u00b6\u00df\u00b1\u00c9~\u0012\u00f5y\u008d1?\u0002\u0092\u00f5*\u00b9\u0019=ey\u00e2\u00f8\u0087\u00e6r\u00ee\u00ae\u00fe\u00bd\u00a0\u001f\u00e0\u0016BT\u0087*\u00bf\u00cd\"\u000f\u00bb\u0016vl\u009c\u00bc/\u0099\u00cf\u00e9\u00d7\u00f6\u0000h\u00a4\u00b9sJC-\u00d1F\u008e\u00a1\u00d2]\u00f0\b\u001f\u00adC\u008b\u00f5z\u009b \u0007t\u00cb\u000eJ\u0012%\u00ec\u00a5\u008b\u00e3h{\u0012h\u00e1\u00ce\u00bc\u0080\"\u00b3.\u0086\u00c3p\u00ab\"G\u0005*\u0006\u009e\u0092s8\f\u0019_\u00c7".length();
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
                    var6_5 = "s_O.\u0003\u00c8%)U\u00a8\u009c\u00f1\u00a3;q\u008e";
                    var7_6 = "s_O.\u0003\u00c8%)U\u00a8\u009c\u00f1\u00a3;q\u008e".length();
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
        cU.bhpzz = var8_3;
        cU.XmDUC = new Integer[56];
    }

    private static CallSite ZJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cU" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void Zz(go.sX sX2) {
        block69: {
            long l2 = CcSNg ^ 0x4641F107D712L;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cU.ZG(matchException);
            }
            float f2 = sX2.bbi();
            long l3 = System.currentTimeMillis();
            qQ qQ2 = rD.dmc();
            MatrixStack matrixStack = sX2.bbh();
            matrixStack.push();
            jI.bIr(matrixStack);
            for (PlayerEntity playerEntity2 : rD.dlmvG.world.getPlayers()) {
                int n2;
                int n3;
                int n4;
                int n5;
                List list;
                block93: {
                    block91: {
                        block92: {
                            block89: {
                                block90: {
                                    int n6;
                                    int n7;
                                    block80: {
                                        int n8;
                                        long l4;
                                        block79: {
                                            block77: {
                                                Object object;
                                                block75: {
                                                    block76: {
                                                        boolean bl2;
                                                        block73: {
                                                            block74: {
                                                                block71: {
                                                                    block72: {
                                                                        block70: {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            if (iSArray != null) break block69;
                                                                                            if (playerEntity2 != rD.dlmvG.player) break block70;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw cU.ZG(matchException);
                                                                                        }
                                                                                        bl2 = this.QoAWo.TC();
                                                                                        if (iSArray != null) break block71;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw cU.ZG(matchException);
                                                                                    }
                                                                                    if (bl2) break block72;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw cU.ZG(matchException);
                                                                                }
                                                                                if (iSArray == null) continue;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                        }
                                                                        try {
                                                                            try {
                                                                                bl2 = this.PhtFx.TC();
                                                                                if (iSArray != null) break block71;
                                                                                if (bl2) break block72;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                            if (iSArray == null) continue;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                    }
                                                                    bl2 = this.BcQvA.TC();
                                                                }
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                if (iSArray != null) break block73;
                                                                                if (bl2) break block74;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                            bl2 = qQ2.ddy(playerEntity2);
                                                                            if (iSArray != null) break block73;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                        if (!bl2) break block74;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cU.ZG(matchException);
                                                                    }
                                                                    if (iSArray == null) continue;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                            }
                                                            try {
                                                                object = this.QwJkI;
                                                                if (iSArray != null) break block75;
                                                                bl2 = ((cw)object).TC();
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                        }
                                                        try {
                                                            try {
                                                                try {
                                                                    if (bl2) break block76;
                                                                    object = playerEntity2;
                                                                    if (iSArray != null) break block75;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                                if (!object.isInvisible()) break block76;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            if (iSArray == null) continue;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                    }
                                                    object = this.ERVmZ.computeIfAbsent(playerEntity2, playerEntity -> {
                                                        long l2 = CcSNg ^ 0x4A7EBE73440L;
                                                        return new ArrayList((int)64);
                                                    });
                                                }
                                                list = (List)object;
                                                l4 = (long)(125.0f * this.GctAm.VB());
                                                Vec3d vec3d = playerEntity2.getLerpedPos(f2);
                                                int n9 = list.size();
                                                try {
                                                    int n10;
                                                    block78: {
                                                        try {
                                                            try {
                                                                try {
                                                                    n10 = n9;
                                                                    if (iSArray != null) break block77;
                                                                    if (n10 == 0) break block78;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                                n8 = ((cU$sp)list.get((int)(n9 - 1))).WyFYf.equals((Object)vec3d);
                                                                if (iSArray != null) break block79;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            if (n8 != 0) break block77;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                    }
                                                    n10 = list.add(new cU$sp(vec3d, l3)) ? 1 : 0;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cU.ZG(matchException);
                                                }
                                            }
                                            n8 = 0;
                                        }
                                        n7 = n8;
                                        n5 = -1;
                                        n4 = -1;
                                        n6 = list.size();
                                        for (int i2 = 0; i2 < n6; ++i2) {
                                            block86: {
                                                int n11;
                                                block87: {
                                                    block88: {
                                                        block85: {
                                                            block83: {
                                                                cU$sp cU$sp;
                                                                block84: {
                                                                    block81: {
                                                                        cU$sp = (cU$sp)list.get(i2);
                                                                        try {
                                                                            block82: {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            long l5 = l3 - cU$sp.TJJOB - l4;
                                                                                            n3 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                                                                                            if (iSArray != null) break block80;
                                                                                            if (iSArray != null) break block81;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw cU.ZG(matchException);
                                                                                        }
                                                                                        if (n3 <= 0) break block82;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw cU.ZG(matchException);
                                                                                    }
                                                                                    if (iSArray == null) continue;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw cU.ZG(matchException);
                                                                                }
                                                                            }
                                                                            n11 = n7;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                    }
                                                                    try {
                                                                        try {
                                                                            if (iSArray != null) break block83;
                                                                            if (n11 == i2) break block84;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                        list.set(n7, cU$sp);
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cU.ZG(matchException);
                                                                    }
                                                                }
                                                                n11 = jJ.bIA(cU$sp.WyFYf) ? 1 : 0;
                                                            }
                                                            try {
                                                                if (iSArray != null) break block85;
                                                                if (n11 == 0) break block86;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            n11 = n5;
                                                        }
                                                        try {
                                                            if (iSArray != null) break block87;
                                                            if (n11 != -1) break block88;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                        n5 = n7;
                                                    }
                                                    n11 = n7;
                                                }
                                                n4 = n11;
                                            }
                                            ++n7;
                                            if (iSArray == null) continue;
                                        }
                                        n3 = n7;
                                    }
                                    try {
                                        try {
                                            n2 = n6;
                                            if (iSArray != null) break block89;
                                            if (n3 >= n2) break block90;
                                        }
                                        catch (MatchException matchException) {
                                            throw cU.ZG(matchException);
                                        }
                                        list.subList(n7, n6).clear();
                                    }
                                    catch (MatchException matchException) {
                                        throw cU.ZG(matchException);
                                    }
                                }
                                int n2 = list.size();
                                n2 = 2;
                            }
                            try {
                                try {
                                    if (iSArray != null) break block91;
                                    if (n3 >= n2) break block92;
                                }
                                catch (MatchException matchException) {
                                    throw cU.ZG(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw cU.ZG(matchException);
                            }
                        }
                        int n2 = n5;
                        n2 = -1;
                    }
                    try {
                        if (iSArray != null) break block93;
                        if (n3 == n2) continue;
                    }
                    catch (MatchException matchException) {
                        throw cU.ZG(matchException);
                    }
                    int n2 = n4 - n5 + 1;
                    n2 = 2;
                }
                try {
                    if (n3 < n2 && iSArray == null) continue;
                }
                catch (MatchException matchException) {
                    throw cU.ZG(matchException);
                }
                this.ZA(matrixStack, playerEntity2, list, n5, n4);
                if (iSArray == null) continue;
            }
            matrixStack.pop();
        }
    }

    private void ZA(MatrixStack matrixStack, PlayerEntity playerEntity, List<cU$sp> list, int n2, int n5) {
        int n6;
        int n7;
        block21: {
            block22: {
                int n8;
                iS[] iSArray;
                block19: {
                    block20: {
                        block17: {
                            block18: {
                                int n9;
                                block16: {
                                    block15: {
                                        long l2 = CcSNg ^ 0x3616F5934618L;
                                        iSArray = dh.afl();
                                        try {
                                            try {
                                                if (playerEntity != rD.dlmvG.player) break block15;
                                                n9 = rD.dlmvG.options.getPerspective().isFirstPerson() ? 1 : 0;
                                                if (iSArray != null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw cU.ZG(matchException);
                                            }
                                            if (n9 == 0) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw cU.ZG(matchException);
                                        }
                                        return;
                                    }
                                    n9 = list.size();
                                }
                                n8 = n9;
                                try {
                                    try {
                                        n7 = n8;
                                        if (iSArray != null) break block17;
                                        if (n7 >= 2) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw cU.ZG(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw cU.ZG(matchException);
                                }
                            }
                            n7 = n2;
                        }
                        try {
                            if (iSArray != null) break block19;
                            if (n7 >= 0) break block20;
                        }
                        catch (MatchException matchException) {
                            throw cU.ZG(matchException);
                        }
                        n2 = 0;
                    }
                    n7 = n5;
                }
                try {
                    n6 = n8;
                    if (iSArray != null) break block21;
                    if (n7 < n6) break block22;
                }
                catch (MatchException matchException) {
                    throw cU.ZG(matchException);
                }
                n5 = n8 - 1;
            }
            n7 = n5 - n2;
            n6 = 1;
        }
        int n10 = n7 + n6;
        try {
            if (n10 < 2) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cU.ZG(matchException);
        }
        List<Vec3d> list2 = list.stream().map(cU$sp -> cU$sp.WyFYf).toList();
        float f2 = playerEntity.getHeight();
        int n11 = this.LHxFV.VC();
        mG mG2 = this.gxark.Wf();
        kp.bQA(matrixStack, list2, n10, n2, n5, f2, (n3, n4) -> jk.bDn(n3, mG2, n11).cob((float)n3.intValue() / (float)n4.intValue() * 0.7f));
        kp.bQB(matrixStack, list2, n10, n2, n5, true, f2, (n3, n4) -> {
            mG mG3 = jk.bDm(n3, mG2, n11);
            float f2 = Math.min((float)n3.intValue() / (float)n4.intValue() * 1.5f, 1.0f);
            return mG3.cob(f2);
        });
        kp.bQB(matrixStack, list2, n10, n2, n5, false, f2, (n3, n4) -> {
            mG mG3 = jk.bDm(n3, mG2, n11);
            float f2 = Math.min((float)n3.intValue() / (float)n4.intValue() * 1.5f, 1.0f);
            return mG3.cob(f2);
        });
    }

    private static MatchException ZG(MatchException matchException) {
        return matchException;
    }

    private static int ZH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6FB3;
        if (XmDUC[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = bhpzz[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JJzQs.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JJzQs.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cU", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cU.XmDUC[n3] = n4;
        }
        return XmDUC[n3];
    }

    private static int ZI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cU.ZH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cU.class, "ZI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

