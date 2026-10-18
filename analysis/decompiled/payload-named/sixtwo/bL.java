/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  media.IMediaSession
 *  media.MediaInfo
 *  media.impl.macos.MacOSMediaSession
 *  media.impl.win.WindowsMediaSession
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import media.IMediaSession;
import media.MediaInfo;
import media.impl.macos.MacOSMediaSession;
import media.impl.win.WindowsMediaSession;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import sixtwo.bJ;
import sixtwo.bT;
import sixtwo.bU;
import sixtwo.bV;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jH;
import sixtwo.jf;
import sixtwo.kW;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.qO;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class bL
extends bV {
    private final rk[] pBlmF;
    private final float[] CkuYo;
    private final mT VSvxM;
    private final ri jGMUW;
    private final rk PgRze;
    private final rk IACKo;
    private final rk GBFJq;
    private final rk CAJMs;
    private final rk UzjcR;
    private static final long PysbJ;
    private static final long[] njGgj;
    private static final Integer[] KhHGj;
    private static final Map jOYJZ;
    private static final long rsXSP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bL(cv cv2) {
        block5: {
            boolean bl2;
            block7: {
                block6: {
                    long l2 = PysbJ ^ 0x2A804AE246E8L;
                    int[] nArray = new int[bL.Nm("b", (int)10220, (long)(0x543C0BE1022F96D5L ^ l2))];
                    nArray[0] = (int)bL.Nm("b", (int)5192, (long)(0x524A74B616DEA579L ^ l2));
                    nArray[1] = (int)bL.Nm("b", (int)8269, (long)(0x6380B9BCDB3D917BL ^ l2));
                    nArray[2] = (int)bL.Nm("b", (int)6374, (long)(0x4E8C0C3DA3F129C8L ^ l2));
                    nArray[3] = (int)bL.Nm("b", (int)20668, (long)(0x29E1427278B2E18BL ^ l2));
                    nArray[4] = (int)bL.Nm("b", (int)1217, (long)(0x6160FC9473A735E9L ^ l2));
                    nArray[5] = (int)bL.Nm("b", (int)27774, (long)(0x3975FF8FD00ADD51L ^ l2));
                    nArray[bL.Nm("b", (int)3057, (long)(0x570EB73F35F4BADAL ^ l2))] = (int)bL.Nm("b", (int)3408, (long)(0x4484D87D60ECBC6FL ^ l2));
                    nArray[bL.Nm("b", (int)24800, (long)(0x70BDD4EDC6F651CCL ^ l2))] = (int)bL.Nm("b", (int)12355, (long)(0xD8C351B92BA017FL ^ l2));
                    nArray[bL.Nm("b", (int)3817, (long)(0x2DDCFDFE8B52BFDBL ^ l2))] = (int)bL.Nm("b", (int)32735, (long)(0x33E2CAB66E77CEEAL ^ l2));
                    nArray[bL.Nm("b", (int)20904, (long)(0x33427A6E21426096L ^ l2))] = (int)bL.Nm("b", (int)13770, (long)(0x4E2189E37C0904F9L ^ l2));
                    nArray[bL.Nm("b", (int)27797, (long)(0x54E2EC67304E5DAEL ^ l2))] = (int)bL.Nm("b", (int)18379, (long)(0x444B7BC30A07F6F6L ^ l2));
                    nArray[bL.Nm("b", (int)25276, (long)(0x10DAB88848E2D388L ^ l2))] = (int)bL.Nm("b", (int)5080, (long)(0x629842470FD8A2E0L ^ l2));
                    super(cv2, mr.clS(nArray));
                    this.pBlmF = new rk[bL.Nm("b", (int)19958, (long)(0x1792549DD530FCDCL ^ l2))];
                    this.CkuYo = new float[bL.Nm("b", (int)19958, (long)(0x1792549DD530FCDCL ^ l2))];
                    this.VSvxM = mT.cpz();
                    this.jGMUW = new ri((int)bL.Nm("b", (int)16257, (long)(0x666069F586350EACL ^ l2)));
                    this.PgRze = new rk((int)bL.Nm("b", (int)32728, (long)(0x46A9D09F8044EF9L ^ l2))).dhs(rj.NJlxm);
                    this.IACKo = new rk((int)bL.Nm("b", (int)27304, (long)(0x268117B67652DB98L ^ l2))).dhs(rj.UPXqT);
                    this.GBFJq = new rk((int)bL.Nm("b", (int)27304, (long)(0x268117B67652DB98L ^ l2))).dhs(rj.UPXqT);
                    this.CAJMs = new rk((int)bL.Nm("b", (int)27304, (long)(0x268117B67652DB98L ^ l2))).dhs(rj.UPXqT);
                    this.UzjcR = new rk((int)bL.Nm("b", (int)10829, (long)(0x14EFE76AFA929B77L ^ l2))).dhs(rj.Xmkbr);
                    boolean bl3 = bJ.MN();
                    for (int i2 = 0; i2 < this.pBlmF.length; ++i2) {
                        this.pBlmF[i2] = new rk((int)bL.Nm("b", (int)4038, (long)(0x2AC2B7D2761C3EEFL ^ l2))).dhs(rj.Xmkbr);
                        this.pBlmF[i2].dhf(0.35f);
                        this.CkuYo[i2] = 0.35f;
                        if (!bl3) continue;
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block5;
                            if (!bl3) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bL.Nj(matchException);
                        }
                        bl2 = false;
                        break block7;
                    }
                    catch (MatchException matchException) {
                        throw bL.Nj(matchException);
                    }
                }
                bl2 = true;
            }
            bJ.ML(bl2);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block12: {
            block11: {
                block10: {
                    bL.PysbJ = gb.aYR(3522061553632044626L, -8172081121300398233L, MethodHandles.lookup().lookupClass()).a(33674603162358L);
                    bL.jOYJZ = new HashMap<K, V>(13);
                    var5 = bL.PysbJ ^ 120042774779715L;
                    var7_1 = Cipher.getInstance("DES/CBC/NoPadding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var5 >>> 56);
                    for (var8_2 = 1; var8_2 < 8; ++var8_2) {
                        v2 = v2;
                        v2[var8_2] = (byte)(var5 << var8_2 * 8 >>> 56);
                    }
                    var7_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var13_3 = new long[25];
                    var10_4 = 0;
                    var11_5 = "v\u0019\u00c2&\u00a0\u00b3\u00e1\u00ea\u0087%c\u00aa\u00d6\u00af\u0097\u001f?S\u00c4\u00f7\u00b93\u00ea@s\u00e3\u00b8\u00f8\u0097g\u0091P\u00f6\u00ddm\u007fm\u00e5E)u\u00a8\u0017\u0081 \u0007\u00cd\u00b94\u0000\u00f3 Dx\u00fe\u00fc3\u00e8\u0013\u001e\u00adb\u0091\u0010\u00fbm\u0003,%i\u00c6\u00e0\u0080\u00bc\u000fX\u0000u\u00b2\u00b9\u0014FV\u0014\u00e4\u001a\u00aaF&\u0019ya\u00d1dONDbqW\u0084\u0089\u000b\u00b8\u00da\u00fbD)\u001d\u000bb'rF\u00d4\u0085U\u0098\u00ba\u00d9Z\u00d4\u0002\u00a46\u0088\u00bd\u00ba\u00a4\u00f1\u00fa\u008f\u00ef\u00b3\u00c2\u00c9\u00e0\u00a6\u00ce\u008d\u0019H8W\"\u00a9\u00af\u00d8\u007f\u00e6\u00a9{\u00c6\u00b0\n\u00c4}\u008a%7l8\u0092I8\u00a0N\u00fe 2\u00b6GQOt\u00e0\u0000\u008d\u00c3\u00e2\u0001\u00e9\u00d9x";
                    var12_6 = "v\u0019\u00c2&\u00a0\u00b3\u00e1\u00ea\u0087%c\u00aa\u00d6\u00af\u0097\u001f?S\u00c4\u00f7\u00b93\u00ea@s\u00e3\u00b8\u00f8\u0097g\u0091P\u00f6\u00ddm\u007fm\u00e5E)u\u00a8\u0017\u0081 \u0007\u00cd\u00b94\u0000\u00f3 Dx\u00fe\u00fc3\u00e8\u0013\u001e\u00adb\u0091\u0010\u00fbm\u0003,%i\u00c6\u00e0\u0080\u00bc\u000fX\u0000u\u00b2\u00b9\u0014FV\u0014\u00e4\u001a\u00aaF&\u0019ya\u00d1dONDbqW\u0084\u0089\u000b\u00b8\u00da\u00fbD)\u001d\u000bb'rF\u00d4\u0085U\u0098\u00ba\u00d9Z\u00d4\u0002\u00a46\u0088\u00bd\u00ba\u00a4\u00f1\u00fa\u008f\u00ef\u00b3\u00c2\u00c9\u00e0\u00a6\u00ce\u008d\u0019H8W\"\u00a9\u00af\u00d8\u007f\u00e6\u00a9{\u00c6\u00b0\n\u00c4}\u008a%7l8\u0092I8\u00a0N\u00fe 2\u00b6GQOt\u00e0\u0000\u008d\u00c3\u00e2\u0001\u00e9\u00d9x".length();
                    var9_7 = 0;
                    while (true) {
                        var14_9 = var11_5.substring(var9_7, var9_7 += 8).getBytes("ISO-8859-1");
                        v3 = var13_3;
                        v4 = var10_4++;
                        v5 = ((long)var14_9[0] & 255L) << 56 | ((long)var14_9[1] & 255L) << 48 | ((long)var14_9[2] & 255L) << 40 | ((long)var14_9[3] & 255L) << 32 | ((long)var14_9[4] & 255L) << 24 | ((long)var14_9[5] & 255L) << 16 | ((long)var14_9[6] & 255L) << 8 | (long)var14_9[7] & 255L;
                        v6 = -1;
                        break block10;
                        break;
                    }
lbl26:
                    // 1 sources

                    while (true) {
                        v3[v4] = v7;
                        if (var9_7 < var12_6) ** continue;
                        var11_5 = "\u00b49\u0088\u0094\\\u00bb\u00ab\u00f8\u009f\u00ecb|\u0094~\u00af\u00ba";
                        var12_6 = "\u00b49\u0088\u0094\\\u00bb\u00ab\u00f8\u009f\u00ecb|\u0094~\u00af\u00ba".length();
                        var9_7 = 0;
                        while (true) {
                            var14_9 = var11_5.substring(var9_7, var9_7 += 8).getBytes("ISO-8859-1");
                            v3 = var13_3;
                            v4 = var10_4++;
                            v5 = ((long)var14_9[0] & 255L) << 56 | ((long)var14_9[1] & 255L) << 48 | ((long)var14_9[2] & 255L) << 40 | ((long)var14_9[3] & 255L) << 32 | ((long)var14_9[4] & 255L) << 24 | ((long)var14_9[5] & 255L) << 16 | ((long)var14_9[6] & 255L) << 8 | (long)var14_9[7] & 255L;
                            v6 = 0;
                            break block10;
                            break;
                        }
                        break;
                    }
lbl39:
                    // 1 sources

                    while (true) {
                        v3[v4] = v7;
                        if (var9_7 < var12_6) ** continue;
                        break block11;
                        break;
                    }
                }
                var15_10 = v5;
                var17_8 = var7_1.doFinal(new byte[]{(byte)(var15_10 >>> 56), (byte)(var15_10 >>> 48), (byte)(var15_10 >>> 40), (byte)(var15_10 >>> 32), (byte)(var15_10 >>> 24), (byte)(var15_10 >>> 16), (byte)(var15_10 >>> 8), (byte)var15_10});
                v7 = ((long)var17_8[0] & 255L) << 56 | ((long)var17_8[1] & 255L) << 48 | ((long)var17_8[2] & 255L) << 40 | ((long)var17_8[3] & 255L) << 32 | ((long)var17_8[4] & 255L) << 24 | ((long)var17_8[5] & 255L) << 16 | ((long)var17_8[6] & 255L) << 8 | (long)var17_8[7] & 255L;
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
            bL.njGgj = var13_3;
            bL.KhHGj = new Integer[25];
            var0_11 = Cipher.getInstance("DES/CBC/NoPadding");
            v8 = SecretKeyFactory.getInstance("DES");
            v9 = new byte[8];
            v10 = v9;
            v9[0] = (byte)(var5 >>> 56);
            for (var1_12 = 1; var1_12 < 8; ++var1_12) {
                v10 = v10;
                v10[var1_12] = (byte)(var5 << var1_12 * 8 >>> 56);
            }
            break block12;
lbl66:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_11.init(2, (Key)v8.generateSecret(new DESKeySpec(v10)), new IvParameterSpec(new byte[8]));
        var2_13 = 6068978616664588365L;
        var4_14 = var0_11.doFinal(new byte[]{(byte)(var2_13 >>> 56), (byte)(var2_13 >>> 48), (byte)(var2_13 >>> 40), (byte)(var2_13 >>> 32), (byte)(var2_13 >>> 24), (byte)(var2_13 >>> 16), (byte)(var2_13 >>> 8), (byte)var2_13});
        ** while (true)
        bL.rsXSP = ((long)var4_14[0] & 255L) << 56 | ((long)var4_14[1] & 255L) << 48 | ((long)var4_14[2] & 255L) << 40 | ((long)var4_14[3] & 255L) << 32 | ((long)var4_14[4] & 255L) << 24 | ((long)var4_14[5] & 255L) << 16 | ((long)var4_14[6] & 255L) << 8 | (long)var4_14[7] & 255L;
    }

    @Override
    public boolean MH() {
        return rD.dmg().dcQ();
    }

    private void Nd(lC lC2, mG mG2, IMediaSession iMediaSession, float f2, float f3, float f4) {
        lc lc2 = this.Nf(f2, f3);
        lc lc3 = this.Ng(f2, f3);
        lc lc4 = this.Nh(f2, f3);
        Vec2f vec2f = rm.dis();
        this.IACKo.dhc(lc2.bXD(vec2f.x, vec2f.y));
        this.GBFJq.dhc(lc3.bXD(vec2f.x, vec2f.y));
        this.CAJMs.dhc(lc4.bXD(vec2f.x, vec2f.y));
        lC2.ceq(lf.RJfxY, lc2, mG2.coa((255.0f - 100.0f * this.IACKo.dhj()) * f4));
        float f5 = this.PgRze.dhj();
        float f6 = lc3.bXF() + lc3.bXH() / 2.0f;
        float f7 = lc3.bXG() + lc3.bXI() / 2.0f;
        lC2.ceV();
        lC2.cfb(f6, f7, 90.0f * f5);
        jH.bId(lC2, f6, f7, 1.0f - f5);
        lC2.ceq(lf.bLlHc, lc3, mG2.coa((255.0f * (1.0f - f5) - 100.0f * this.GBFJq.dhj()) * f4));
        jH.bIf();
        lC2.ceW();
        lC2.ceV();
        lC2.cfb(f6, f7, -90.0f + 90.0f * f5);
        jH.bId(lC2, f6, f7, f5);
        lC2.ceq(lf.wJqgL, lc3, mG2.coa((255.0f * f5 - 100.0f * this.GBFJq.dhj()) * f4));
        jH.bIf();
        lC2.ceW();
        lC2.ceq(lf.xesLS, lc4, mG2.coa((255.0f - 100.0f * this.CAJMs.dhj()) * f4));
    }

    private static int Nl(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bL.Nk(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        block16: {
            lC lC3;
            bL bL2;
            float f2;
            float f3;
            MediaInfo mediaInfo;
            mG mG2;
            IMediaSession iMediaSession;
            float f4;
            float f5;
            block15: {
                float f6;
                float f7;
                float f8;
                mG mG3;
                float f9;
                float f10;
                String string;
                lq lq2;
                lC lC4;
                float f11;
                float f12;
                float f13;
                float f14;
                bT bT2;
                long l2 = PysbJ ^ 0x35513F7C09BCL;
                bU bU2 = rD.dlK().RC();
                f5 = bU2.RW();
                f4 = bU2.RX();
                qO qO2 = rD.dmg();
                boolean bl2 = bJ.MN();
                iMediaSession = qO2.dcS();
                try {
                    if (!qO2.dcQ()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                mG2 = ii2.bjb();
                mediaInfo = iMediaSession.media();
                lq lq3 = lE.WTzbi.bYM(7.0f);
                f3 = 164.0f;
                float f15 = 80.0f;
                float f16 = 100.0f;
                float f17 = 32.0f + lq3.cao(mediaInfo.title());
                try {
                    bT2 = this.fGWTH;
                    f14 = bU2.Oa() ? f3 : Math.min(f17, f16);
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                try {
                    f13 = bU2.Oa() ? f15 : 15.0f;
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                bT2.NU(f14, f13);
                f2 = bU2.Ob().dhj();
                float f18 = 4.0f + 6.0f * f2;
                float f19 = 7.0f + 19.0f * f2;
                try {
                    f12 = f4;
                    f11 = bU2.Oa() ? f18 : jf.bAH(f19, bU2.NZ().Joctj);
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                float f20 = f12 + f11;
                try {
                    lC2.cee(qO2.dcK(), f5 + f18 - 10.0f + 10.0f * this.dExGi.dhj(), f20, f19, f19, ld.all(1.0f + 4.0f * f2));
                    lC4 = lC2;
                    lq2 = lq3;
                    string = mediaInfo.title();
                    f10 = f5 - 5.0f + 10.0f * this.dExGi.dhj() + 10.0f * this.dExGi.dhj() + 29.0f * f2;
                    f9 = f4 + 5.0f + 11.0f * f2;
                    mG3 = mG2;
                    f8 = 0.3f;
                    f7 = 0.7f;
                    f6 = bU2.Oa() ? f3 - 30.0f : f16 + 5.0f;
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                lC4.ceH(lq2, string, f10, f9, mG3, f8, f7, f6);
                mG mG4 = rD.dmg().dcU().coc(mG.hoGuU, 0.2f);
                try {
                    try {
                        bL2 = this;
                        lC3 = lC2;
                        if (bl2) break block15;
                        bL2.Nb(lC3, mG4, mediaInfo, f5, f4, f2, f17, f3, f16);
                        if (!(f2 > 0.0f)) break block16;
                    }
                    catch (MatchException matchException) {
                        throw bL.Nj(matchException);
                    }
                    bL2 = this;
                    lC3 = lC2;
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
            }
            bL2.MZ(lC3, iMediaSession, mediaInfo, mG2, f5, f4, f3, f2);
        }
    }

    @Override
    public mG MI() {
        return rD.dmg().dcU();
    }

    private lc Nf(float f2, float f3) {
        return new lc(f2 + 40.0f, f3 + 55.0f, 16.0f, 16.0f);
    }

    private static int Nk(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5CA5;
        if (KhHGj[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = njGgj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jOYJZ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jOYJZ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bL", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bL.KhHGj[n3] = n4;
        }
        return KhHGj[n3];
    }

    private lc Nh(float f2, float f3) {
        return new lc(f2 + 104.0f, f3 + 55.0f, 16.0f, 16.0f);
    }

    private lc Ng(float f2, float f3) {
        return new lc(f2 + 72.0f, f3 + 55.0f, 16.0f, 16.0f);
    }

    private void Nc(boolean n2) {
        int n3;
        boolean bl2;
        block9: {
            int n4;
            block10: {
                block7: {
                    block8: {
                        long l2 = PysbJ ^ 0x7D6D9A1DBED4L;
                        bl2 = bJ.MN();
                        try {
                            try {
                                n4 = n2;
                                if (bl2) break block7;
                                if (n4 != 0) break block8;
                            }
                            catch (MatchException matchException) {
                                throw bL.Nj(matchException);
                            }
                            Arrays.fill(this.CkuYo, 0.35f);
                            return;
                        }
                        catch (MatchException matchException) {
                            throw bL.Nj(matchException);
                        }
                    }
                    n4 = this.VSvxM.cpE(rsXSP) ? 1 : 0;
                }
                try {
                    if (bl2) break block9;
                    if (n4 != 0) break block10;
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                return;
            }
            n4 = n3 = 0;
        }
        while (n3 < this.CkuYo.length) {
            this.CkuYo[n3] = MathHelper.lerp((float)((float)Math.random()), (float)0.35f, (float)1.0f);
            ++n3;
            if (!bl2) continue;
        }
    }

    private void Na(lC lC2, mG mG2, MediaInfo mediaInfo, float f2, float f3, float f4, float f5) {
        lq lq2 = lE.SVnNc.bYM(6.0f);
        String string = jf.bAN(mediaInfo.position());
        long l2 = Math.max(0L, mediaInfo.duration() - mediaInfo.position());
        String string2 = "-" + jf.bAN(l2);
        float f6 = 110.0f;
        float f7 = 3.0f;
        float f8 = f2 + jf.bAH(f6, f4);
        float f9 = f3 + 45.0f;
        mG mG3 = mG2.coa(63.75f * f5);
        lC2.cdg(f8, f9, f6, f7, ld.all(0.5f), mG3);
        this.UzjcR.dhd(Math.min(1.0f, (float)mediaInfo.position() / (float)mediaInfo.duration()));
        float f10 = f6 * this.UzjcR.dhj();
        mG mG4 = mG2.coa(150.0f * f5);
        lC2.cdg(f8, f9, f10, f7, ld.all(0.5f), mG4);
        mG mG5 = mG2.cob(0.5f * f5);
        lC2.cez(lq2, string, f8 - lq2.cao(string) - 3.0f, f9 - 0.75f, mG5);
        lC2.cez(lq2, string2, f8 + f6 + 3.0f, f9 - 0.75f, mG5);
    }

    private void Nb(lC lC2, mG mG2, MediaInfo mediaInfo, float f2, float f3, float f4, float f5, float f6, float f7) {
        Object object;
        float f8;
        float f9;
        boolean bl2;
        float f10;
        kW kW2;
        long l2;
        block3: {
            block4: {
                l2 = PysbJ ^ 0x382AEF32264DL;
                boolean bl3 = bJ.MN();
                this.Nc(mediaInfo.playing());
                kW2 = new kW(mG2.cof(), mG2);
                f10 = 1.2f;
                bl2 = bl3;
                f9 = 7.0f;
                f8 = 1.0f;
                try {
                    float f11 = f4 - 0.7f;
                    object = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                    if (bl2) break block3;
                    if (object <= 0) break block4;
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
                object = bL.Nm("b", (int)19958, (long)(0x1792463770E09C79L ^ l2));
                break block3;
            }
            object = 4;
        }
        float f12 = object;
        float f13 = f10 * (float)f12 + (float)(f12 - true) * f8;
        float f14 = 5.0f - 5.0f * f4;
        float f15 = f2 + mZ.csl(Math.min(f5, f7), f6 - f13, f4) - f13 * this.dExGi.dhj() - f14;
        for (int i2 = 0; i2 < f12; ++i2) {
            this.pBlmF[i2].dhq((int)bL.Nm("b", (int)27304, (long)(0x2681051CD382BB3DL ^ l2)));
            float f16 = this.pBlmF[i2].dhd(this.CkuYo[i2]);
            float f17 = f9 * f16;
            float f18 = f3 + 5.0f + 11.0f * f4;
            float f19 = f18 + 3.0f;
            float f20 = f15 + (float)i2 * (f10 + f8);
            float f21 = f19 - f17 / 2.0f;
            lC2.cdP(f20, f21, f10, f17, ld.all(0.25f), kW2, 0.5f);
            if (!bl2) continue;
        }
    }

    private static MatchException Nj(MatchException matchException) {
        return matchException;
    }

    private lc Ni(float f2, float f3) {
        return new lc(f2 + 136.0f, f3 + 59.0f, 8.0f, 8.0f);
    }

    /*
     * Exception decompiling
     */
    private void MZ(lC var1_1, IMediaSession var2_2, MediaInfo var3_3, mG var4_4, float var5_5, float var6_6, float var7_7, float var8_8) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [1[TRYBLOCK]], but top level block is 5[SWITCH]
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static CallSite Nm(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bL" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public void Ne(double d2, double d3, mA mA2) {
        block36: {
            int n2;
            block39: {
                boolean bl2;
                IMediaSession iMediaSession;
                block37: {
                    block35: {
                        block33: {
                            float f2;
                            float f3;
                            block34: {
                                block31: {
                                    block32: {
                                        block29: {
                                            block30: {
                                                long l2 = PysbJ ^ 0x3BE0A2F4EB94L;
                                                iMediaSession = rD.dmg().dcS();
                                                bl2 = bJ.MM();
                                                try {
                                                    if (iMediaSession == null) {
                                                        return;
                                                    }
                                                }
                                                catch (MatchException matchException) {
                                                    throw bL.Nj(matchException);
                                                }
                                                bU bU2 = rD.dlK().RC();
                                                f3 = bU2.RW();
                                                f2 = bU2.RX();
                                                try {
                                                    try {
                                                        n2 = this.Nf(f3, f2).bXD(d2, d3);
                                                        if (!bl2) break block29;
                                                        if (n2 == 0) break block30;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bL.Nj(matchException);
                                                    }
                                                    iMediaSession.previous();
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bL.Nj(matchException);
                                                }
                                            }
                                            n2 = this.Ng(f3, f2).bXD(d2, d3);
                                        }
                                        try {
                                            try {
                                                if (!bl2) break block31;
                                                if (n2 == 0) break block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw bL.Nj(matchException);
                                            }
                                            iMediaSession.playPause();
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw bL.Nj(matchException);
                                        }
                                    }
                                    n2 = this.Nh(f3, f2).bXD(d2, d3);
                                }
                                try {
                                    try {
                                        if (!bl2) break block33;
                                        if (n2 == 0) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw bL.Nj(matchException);
                                    }
                                    iMediaSession.next();
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw bL.Nj(matchException);
                                }
                            }
                            n2 = this.Ni(f3, f2).bXD(d2, d3);
                        }
                        try {
                            try {
                                if (!bl2) break block35;
                                if (n2 == 0) break block36;
                            }
                            catch (MatchException matchException) {
                                throw bL.Nj(matchException);
                            }
                            iMediaSession.swapCycle();
                            n2 = iMediaSession instanceof WindowsMediaSession;
                        }
                        catch (MatchException matchException) {
                            throw bL.Nj(matchException);
                        }
                    }
                    try {
                        block38: {
                            try {
                                try {
                                    if (!bl2) break block37;
                                    if (n2 == 0) break block38;
                                }
                                catch (MatchException matchException) {
                                    throw bL.Nj(matchException);
                                }
                                WindowsMediaSession.setCycle((int)iMediaSession.getCycleType());
                                if (bl2) break block36;
                            }
                            catch (MatchException matchException) {
                                throw bL.Nj(matchException);
                            }
                        }
                        n2 = iMediaSession instanceof MacOSMediaSession;
                    }
                    catch (MatchException matchException) {
                        throw bL.Nj(matchException);
                    }
                }
                try {
                    try {
                        if (!bl2) break block39;
                        if (n2 == 0) break block36;
                    }
                    catch (MatchException matchException) {
                        throw bL.Nj(matchException);
                    }
                    n2 = iMediaSession.getCycleType();
                }
                catch (MatchException matchException) {
                    throw bL.Nj(matchException);
                }
            }
            MacOSMediaSession.setCycle((int)n2);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bL.class, "Nl", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

