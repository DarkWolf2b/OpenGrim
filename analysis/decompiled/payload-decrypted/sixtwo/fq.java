/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityDimensions
 *  net.minecraft.entity.EntityPose
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Items
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.EntityHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.Box
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
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityDimensions;
import net.minecraft.entity.EntityPose;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cz;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gZ;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.jg;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.ou;
import sixtwo.ov;
import sixtwo.ox;
import sixtwo.rD;

public class fq
extends gg {
    private final ct meQED;
    private final cu ufdaw;
    private final cu zpLUV;
    private final cC zGQMR;
    private final cC TrhFC;
    private final cJ sHsoL;
    private final cJ QSPxG;
    private final cJ bLnpl;
    private final cz aucRP;
    private final cJ mEZCb;
    private final cJ ZCQrO;
    private final cC xkXFw;
    private final cJ fylmP;
    private float vzqAe;
    private float ZLJlY;
    private Entity NZTfz;
    private final mT obThK;
    private static final long JcqZx;
    private static final String[] cCFLo;
    private static final String[] DrcSw;
    private static final Map dEDLA;
    private static final long[] RNFBd;
    private static final Integer[] yYxeH;
    private static final Map Hkgvx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fq() {
        long l2 = JcqZx ^ 0x242540AFEB88L;
        super(gf.aZL(4, false, gh.xwjCw));
        this.meQED = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        int[] nArray = new int[7];
        nArray[0] = (int)86;
        nArray[1] = (int)97;
        nArray[2] = (int)110;
        nArray[3] = (int)105;
        nArray[4] = (int)108;
        nArray[5] = (int)108;
        nArray[6] = (int)97;
        this.ufdaw = new cu(this.meQED, mr.clS(nArray)).SY();
        int[] nArray2 = new int[6];
        nArray2[0] = (int)83;
        nArray2[1] = (int)105;
        nArray2[2] = (int)108;
        nArray2[3] = (int)101;
        nArray2[4] = (int)110;
        nArray2[5] = (int)116;
        this.zpLUV = new cu(this.meQED, mr.clS(nArray2));
        this.zGQMR = new cC(this, mr.clS(new int[]{(int)87, (int)105, (int)100, (int)116, (int)104})).Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz((String)((Object)" blocks"));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)72;
        nArray3[1] = (int)101;
        nArray3[2] = (int)105;
        nArray3[3] = (int)103;
        nArray3[4] = (int)104;
        nArray3[5] = (int)116;
        this.TrhFC = new cC(this, mr.clS(nArray3)).Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz((String)((Object)" blocks"));
        int[] nArray4 = new int[14];
        nArray4[0] = (int)73;
        nArray4[1] = (int)103;
        nArray4[2] = (int)110;
        nArray4[3] = (int)111;
        nArray4[4] = (int)114;
        nArray4[5] = (int)101;
        nArray4[6] = (int)32;
        nArray4[7] = (int)70;
        nArray4[8] = (int)114;
        nArray4[9] = (int)105;
        nArray4[10] = (int)101;
        nArray4[11] = (int)110;
        nArray4[12] = (int)100;
        nArray4[13] = (int)115;
        this.sHsoL = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[25];
        nArray5[0] = (int)68;
        nArray5[1] = (int)105;
        nArray5[2] = (int)115;
        nArray5[3] = (int)97;
        nArray5[4] = (int)98;
        nArray5[5] = (int)108;
        nArray5[6] = (int)101;
        nArray5[7] = (int)32;
        nArray5[8] = (int)73;
        nArray5[9] = (int)102;
        nArray5[10] = (int)32;
        nArray5[11] = (int)72;
        nArray5[12] = (int)111;
        nArray5[13] = (int)108;
        nArray5[14] = (int)100;
        nArray5[15] = (int)105;
        nArray5[16] = (int)110;
        nArray5[17] = (int)103;
        nArray5[18] = (int)32;
        nArray5[19] = (int)67;
        nArray5[20] = (int)111;
        nArray5[21] = (int)98;
        nArray5[22] = (int)119;
        nArray5[23] = (int)101;
        nArray5[24] = (int)98;
        this.QSPxG = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[14];
        nArray6[0] = (int)79;
        nArray6[1] = (int)110;
        nArray6[2] = (int)108;
        nArray6[3] = (int)121;
        nArray6[4] = (int)32;
        nArray6[5] = (int)70;
        nArray6[6] = (int)111;
        nArray6[7] = (int)114;
        nArray6[8] = (int)32;
        nArray6[9] = (int)83;
        nArray6[10] = (int)108;
        nArray6[11] = (int)111;
        nArray6[12] = (int)116;
        nArray6[13] = (int)115;
        this.bLnpl = new cJ(this, mr.clS(nArray6)).WE(false);
        this.aucRP = new cz(this, mr.clS(new int[]{(int)83, (int)108, (int)111, (int)116, (int)115}));
        int[] nArray7 = new int[9];
        nArray7[0] = (int)73;
        nArray7[1] = (int)110;
        nArray7[2] = (int)118;
        nArray7[3] = (int)105;
        nArray7[4] = (int)115;
        nArray7[5] = (int)105;
        nArray7[6] = (int)98;
        nArray7[7] = (int)108;
        nArray7[8] = (int)101;
        this.mEZCb = new cJ(this, mr.clS(nArray7)).WE(false);
        int[] nArray8 = new int[7];
        nArray8[0] = (int)86;
        nArray8[1] = (int)105;
        nArray8[2] = (int)115;
        nArray8[3] = (int)105;
        nArray8[4] = (int)98;
        nArray8[5] = (int)108;
        nArray8[6] = (int)101;
        this.ZCQrO = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[13];
        nArray9[0] = (int)82;
        nArray9[1] = (int)101;
        nArray9[2] = (int)116;
        nArray9[3] = (int)114;
        nArray9[4] = (int)121;
        nArray9[5] = (int)32;
        nArray9[6] = (int)84;
        nArray9[7] = (int)105;
        nArray9[8] = (int)109;
        nArray9[9] = (int)101;
        nArray9[10] = (int)111;
        nArray9[11] = (int)117;
        nArray9[12] = (int)116;
        this.xkXFw = new cC(this, mr.clS(nArray9)).Vy(10.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz((String)((Object)" ms"));
        int[] nArray10 = new int[13];
        nArray10[0] = (int)83;
        nArray10[1] = (int)116;
        nArray10[2] = (int)97;
        nArray10[3] = (int)116;
        nArray10[4] = (int)105;
        nArray10[5] = (int)99;
        nArray10[6] = (int)32;
        nArray10[7] = (int)72;
        nArray10[8] = (int)101;
        nArray10[9] = (int)105;
        nArray10[10] = (int)103;
        nArray10[11] = (int)104;
        nArray10[12] = (int)116;
        this.fylmP = new cJ(this, mr.clS(nArray10)).WE(false);
        this.obThK = mT.cpA();
        this.vzqAe = this.zGQMR.VB();
        this.ZLJlY = this.TrhFC.VB();
        this.zGQMR.Vd(() -> {
            this.vzqAe = this.zGQMR.VB();
        });
        this.TrhFC.Vd(() -> {
            this.ZLJlY = this.TrhFC.VB();
        });
        this.aucRP.Vf(this.bLnpl::WF);
        this.mEZCb.Vf(this.ufdaw::SZ);
        this.ZCQrO.Vf(this.zpLUV::SZ);
        this.xkXFw.Vf(this.zpLUV::SZ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    fq.JcqZx = gb.aYR(6722144264915263589L, 8485176403376834707L, MethodHandles.lookup().lookupClass()).a(101350568889068L);
                    fq.dEDLA = new HashMap<K, V>(13);
                    var11 = fq.JcqZx ^ 34595790893839L;
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
                    var20_3 = new String[3];
                    var18_4 = 0;
                    var17_5 = "\u00e4xl*\u0016\u00f8o\u00e9\u001f\u00ab\u00ce\u00f8\u00bc\u00c5]\u00da\u0010V\u00e9.\u00e8\u00beo\u00cdp\u00f0\u00ba\u00a4\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000\u00a9\u00c1\u0002\u0088@\u0096\u009aE\u00b8";
                    var19_6 = "\u00e4xl*\u0016\u00f8o\u00e9\u001f\u00ab\u00ce\u00f8\u00bc\u00c5]\u00da\u0010V\u00e9.\u00e8\u00beo\u00cdp\u00f0\u00ba\u00a4\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000\u00a9\u00c1\u0002\u0088@\u0096\u009aE\u00b8".length();
                    var16_7 = 16;
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
                        var20_3[var18_4++] = fq.aNk(var21_9).intern();
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
                fq.cCFLo = var20_3;
                fq.DrcSw = new String[3];
                fq.Hkgvx = new HashMap<K, V>(13);
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
                var6_12 = new long[82];
                var3_13 = 0;
                var4_14 = "\u00cc\u00ea\"dZ\u00dd\u00bfk\u00a4\u0083)Rcv6\u0098\u00e4\u0085\u00f3I\u0094\u0017\u0004u7\u0018<\u00f9\u0091\u00f4v\u00a1\u000b\u008d\u007f\u00e8l\u008eB\u00c7, \u008c\u00f3y\u00b2F\u00f6\u00c2w^\u0087B\u00fd\u0017k\u0082\u0010.\u008ccO\u00e8N\u00ee\u0005\u0017\u000e0\u00fa8M_\u00c3\u00fa\u00d6\u00b9\u00cd=4\u00b9!\u0015\u00f5\u0086\u00b8\u00ad\u0088\u009e:A\u0006)5\\f\u001d\u00fcm{6uFV\u001bq\u0012?\u0015ufq\u00cc\u00e5\u00e5\u00a5u\u008e\u0001p^\u00edU\u00d8@\u009a\u00af\u00f8p\u0002rn\u00d5\u00a9\u00f6\u00a9\u00c4\u008c\u0091\u00c0\u00cf\u00983\u00c3\u0085\u00f1\u00d1\u00ca\u00d2/\u00f3V!#\u00c9\u00a1\u0003>s\u00e9\u008cI\u00fa\u00ba*\u00a3*\u0017\u0089\u00ce\u00e4\u00a7Al6\u00b1\u007f\u00e1\u000eh\u0013\u00b6\u0010h\u00e1\u00c6`\u0085\u00c5\b\u0012u\u00b6E'\u000eI\u00b4@f\"\u0096\u00c8\u00ec\u00e6\u00daU#\u0094r\u00ef\u0005s\u00c86A\u00e7\u00af\u0091\u00f2\u00c6w\u00dc\u001bW\u00fa\u00a1\u009b\u0085\u00e1\u0007\u0097oZ\u00a1w>\u008a\u0013\u0095\u00b1W0\u00f4\u00f7\u0094\u00af\u00d7\u00ba\u00ae\u00a6\u00f1\u00cc\r^\u00f6)\u009e\u009c\u00e6\u0011\u00f7\u00a1\u00c48\u00d7\t\u00c6\u0088\u0085$c\u00aa\u00c4\u00e4\u00fc\u00c9\u008bSZ\u001b%\u0016\u00d6\u001dh\u00b5\u00bf#.5&\u00f1,\u00ee\nR:\u008f,4\t\u00f5\u00c8/\u00fb\u001f\u008a\u007f\u0086\u008e\u009fHL\u00c45\u009a\u00afd=\u00c9\u0090FQ\u00c9yMv\u0001\u001b\u00c4\u00dd\u00e5\u00dcx\u00a6\u0010\u00b3*^[=\u0015\u0014\u00b4\u00e6C\b=\u0090\u00e6B\u001e\u0004\u00ea;\u008c&4\u00e3\u00ce\u00ac\u00e2\u00a4\u000b\u00bd\u00fa\u0088\u0085\u00cabE\u00d5\u00ae4\u00a8=\u0005\u00f9gL\u00fb\u0015$\u00cb\u0087rS\u0017\u00dd\u00a3\u0015\u00c6\u008f\u0007\u00dd^zE\rJ\u00f3v\u0002E\u00b1\u00cb\u00a5\u00a6\u0087\u001e1\u0090\u007f\u009c>\f\u0011\u00b4\u00a5\u009c\u0097#<\u00cd\u009cYn\u00e0\u00cf\u008fDW\u00fa\u009a(\u00f2\u00cfE\u0018\u00cc'\u00e4\u0001l\u0089?v\u00b4ux\u0093\u0094\u0091\u00b26\u0088e\u0004p\u00df\u009c\u00c3\u001a\u00b1\u00cd\u009e\u008f\u00a6\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812\u00b2J\u008b\u00cdz\u00b0\u00af\u00a6p1)\u00adC\u00b5\u0006\u00cd\u000e\u00f5BmO\u0011\u00b61\u00af\u009e-f\u0081 \u00bb\u001d\u00fd\u00ab;O\u0084\u0086@BZ-&\u008e\u00a8:\u0089\u00b2+\"\\\u0085@\u00cc\u008e\u00c2\u00bb\u00fd\u00eb6m\u0095\u00d0kQ\u00c5\u00de\u0080\u00d4\u00a8\u0094\u00e3f\u00a8L\"\u00ca+\u00be\u00ea\u00fc\u00d5\u00ca\u008d\u0012\u00d78\u009a\u00c5\u00b7\u009bqW3\u00c0\u00fd\t1M\u0094\u0083\u00ff\u008f\u00e5\rCa\u00d1\u0084@\u00e6\u0014\u00b7H\u0011\u00f5U\u00e1\u00dc\u008d\u00b4\u000b\u0084\u0080\u00d3\u00f3b?i\u008c\u001b\u0015\u00f1\u00b3\u0085\u00a2\u0092\u00b5\u00a0\u001ftx\u0016\u001f\u00ce\u0086f\u0083\u0096\u00d3\u00e9\u00fb\u00e2by6j\"";
                var5_15 = "\u00cc\u00ea\"dZ\u00dd\u00bfk\u00a4\u0083)Rcv6\u0098\u00e4\u0085\u00f3I\u0094\u0017\u0004u7\u0018<\u00f9\u0091\u00f4v\u00a1\u000b\u008d\u007f\u00e8l\u008eB\u00c7, \u008c\u00f3y\u00b2F\u00f6\u00c2w^\u0087B\u00fd\u0017k\u0082\u0010.\u008ccO\u00e8N\u00ee\u0005\u0017\u000e0\u00fa8M_\u00c3\u00fa\u00d6\u00b9\u00cd=4\u00b9!\u0015\u00f5\u0086\u00b8\u00ad\u0088\u009e:A\u0006)5\\f\u001d\u00fcm{6uFV\u001bq\u0012?\u0015ufq\u00cc\u00e5\u00e5\u00a5u\u008e\u0001p^\u00edU\u00d8@\u009a\u00af\u00f8p\u0002rn\u00d5\u00a9\u00f6\u00a9\u00c4\u008c\u0091\u00c0\u00cf\u00983\u00c3\u0085\u00f1\u00d1\u00ca\u00d2/\u00f3V!#\u00c9\u00a1\u0003>s\u00e9\u008cI\u00fa\u00ba*\u00a3*\u0017\u0089\u00ce\u00e4\u00a7Al6\u00b1\u007f\u00e1\u000eh\u0013\u00b6\u0010h\u00e1\u00c6`\u0085\u00c5\b\u0012u\u00b6E'\u000eI\u00b4@f\"\u0096\u00c8\u00ec\u00e6\u00daU#\u0094r\u00ef\u0005s\u00c86A\u00e7\u00af\u0091\u00f2\u00c6w\u00dc\u001bW\u00fa\u00a1\u009b\u0085\u00e1\u0007\u0097oZ\u00a1w>\u008a\u0013\u0095\u00b1W0\u00f4\u00f7\u0094\u00af\u00d7\u00ba\u00ae\u00a6\u00f1\u00cc\r^\u00f6)\u009e\u009c\u00e6\u0011\u00f7\u00a1\u00c48\u00d7\t\u00c6\u0088\u0085$c\u00aa\u00c4\u00e4\u00fc\u00c9\u008bSZ\u001b%\u0016\u00d6\u001dh\u00b5\u00bf#.5&\u00f1,\u00ee\nR:\u008f,4\t\u00f5\u00c8/\u00fb\u001f\u008a\u007f\u0086\u008e\u009fHL\u00c45\u009a\u00afd=\u00c9\u0090FQ\u00c9yMv\u0001\u001b\u00c4\u00dd\u00e5\u00dcx\u00a6\u0010\u00b3*^[=\u0015\u0014\u00b4\u00e6C\b=\u0090\u00e6B\u001e\u0004\u00ea;\u008c&4\u00e3\u00ce\u00ac\u00e2\u00a4\u000b\u00bd\u00fa\u0088\u0085\u00cabE\u00d5\u00ae4\u00a8=\u0005\u00f9gL\u00fb\u0015$\u00cb\u0087rS\u0017\u00dd\u00a3\u0015\u00c6\u008f\u0007\u00dd^zE\rJ\u00f3v\u0002E\u00b1\u00cb\u00a5\u00a6\u0087\u001e1\u0090\u007f\u009c>\f\u0011\u00b4\u00a5\u009c\u0097#<\u00cd\u009cYn\u00e0\u00cf\u008fDW\u00fa\u009a(\u00f2\u00cfE\u0018\u00cc'\u00e4\u0001l\u0089?v\u00b4ux\u0093\u0094\u0091\u00b26\u0088e\u0004p\u00df\u009c\u00c3\u001a\u00b1\u00cd\u009e\u008f\u00a6\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812\u00b2J\u008b\u00cdz\u00b0\u00af\u00a6p1)\u00adC\u00b5\u0006\u00cd\u000e\u00f5BmO\u0011\u00b61\u00af\u009e-f\u0081 \u00bb\u001d\u00fd\u00ab;O\u0084\u0086@BZ-&\u008e\u00a8:\u0089\u00b2+\"\\\u0085@\u00cc\u008e\u00c2\u00bb\u00fd\u00eb6m\u0095\u00d0kQ\u00c5\u00de\u0080\u00d4\u00a8\u0094\u00e3f\u00a8L\"\u00ca+\u00be\u00ea\u00fc\u00d5\u00ca\u008d\u0012\u00d78\u009a\u00c5\u00b7\u009bqW3\u00c0\u00fd\t1M\u0094\u0083\u00ff\u008f\u00e5\rCa\u00d1\u0084@\u00e6\u0014\u00b7H\u0011\u00f5U\u00e1\u00dc\u008d\u00b4\u000b\u0084\u0080\u00d3\u00f3b?i\u008c\u001b\u0015\u00f1\u00b3\u0085\u00a2\u0092\u00b5\u00a0\u001ftx\u0016\u001f\u00ce\u0086f\u0083\u0096\u00d3\u00e9\u00fb\u00e2by6j\"".length();
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
                    var4_14 = "'\u0097\u00e6{\u00d3>I\u00b6\u00c1\u008f\u0087\u001d\u00a7\u00f6;6";
                    var5_15 = "'\u0097\u00e6{\u00d3>I\u00b6\u00c1\u008f\u0087\u001d\u00a7\u00f6;6".length();
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
        fq.RNFBd = var6_12;
        fq.yYxeH = new Integer[82];
    }

    private static int aNo(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6CC4;
        if (yYxeH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = RNFBd[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Hkgvx.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Hkgvx.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fq", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fq.yYxeH[n3] = n4;
        }
        return yYxeH[n3];
    }

    public cJ aMZ() {
        return this.ZCQrO;
    }

    public cJ aMU() {
        return this.sHsoL;
    }

    public cJ aMY() {
        return this.mEZCb;
    }

    public Entity aNe() {
        return this.NZTfz;
    }

    public cJ aMW() {
        return this.bLnpl;
    }

    private static int aNp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = fq.aNo(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public float aNc() {
        return this.vzqAe;
    }

    private static String aNk(byte[] byArray) {
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

    public cJ aMV() {
        return this.QSPxG;
    }

    private static Object aNm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = fq.aNl(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cz aMX() {
        return this.aucRP;
    }

    public cC aNa() {
        return this.xkXFw;
    }

    private static String aNl(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x61BB;
        if (DrcSw[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])dEDLA.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dEDLA.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fq", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = cCFLo[n3].getBytes("ISO-8859-1");
            fq.DrcSw[n3] = fq.aNk(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DrcSw[n3];
    }

    public float aNd() {
        return this.ZLJlY;
    }

    public mT aNf() {
        return this.obThK;
    }

    public cJ aNb() {
        return this.fylmP;
    }

    private void aMN() {
        this.NZTfz = null;
    }

    @hG
    public void aMD(gZ.tt tt2) {
        Entity entity;
        block25: {
            fq fq2;
            Entity entity2;
            block26: {
                EntityHitResult entityHitResult;
                int[] nArray;
                block23: {
                    EntityHitResult entityHitResult2;
                    block24: {
                        fq fq3;
                        block22: {
                            boolean bl2;
                            block20: {
                                block21: {
                                    block19: {
                                        block18: {
                                            long l2 = JcqZx ^ 0x708B898EB57EL;
                                            nArray = fg.aIW();
                                            try {
                                                try {
                                                    bl2 = this.bab();
                                                    if (nArray != null) break block18;
                                                    if (!bl2) break block19;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fq.aNj(matchException);
                                                }
                                                bl2 = this.zpLUV.SZ();
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                        }
                                        try {
                                            if (nArray != null) break block20;
                                            if (bl2) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw fq.aNj(matchException);
                                        }
                                    }
                                    return;
                                }
                                try {
                                    fq3 = this;
                                    if (nArray != null) break block22;
                                    fq3.aMN();
                                    bl2 = rD.dlmvG.crosshairTarget instanceof EntityHitResult;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            if (bl2) {
                                return;
                            }
                            fq3 = this;
                        }
                        entityHitResult2 = fq3.aMI();
                        try {
                            entityHitResult = entityHitResult2;
                            if (nArray != null) break block23;
                            if (entityHitResult != null) break block24;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        return;
                    }
                    entityHitResult = entityHitResult2;
                }
                entity2 = entityHitResult.getEntity();
                Vec3d vec3d = this.aMO(entity2);
                try {
                    if (vec3d == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                try {
                    try {
                        fq2 = this;
                        entity = entity2;
                        if (nArray != null) break block25;
                        if (fq2.aMJ(entity, rD.dlX().dbC()) == null) break block26;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
            entity = entity2;
        }
        fq2.NZTfz = entity;
        this.obThK.cpB();
        tt2.bdX(true);
    }

    private Vec3d aMO(Entity entity) {
        Vec3d vec3d;
        block7: {
            block8: {
                long l2 = JcqZx ^ 0x48489E509D30L;
                int[] nArray = fg.aIW();
                try {
                    if (entity == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                Vec3d vec3d2 = rD.dlmvG.player.getEyePos();
                Vec3d vec3d3 = jg.bBK(vec3d2, entity.getBoundingBox());
                double d2 = rD.dlmvG.player.getEntityInteractionRange();
                try {
                    try {
                        vec3d = vec3d2;
                        if (nArray != null) break block7;
                        if (!(vec3d.squaredDistanceTo(vec3d3) <= d2 * d2)) break block8;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    vec3d = vec3d3;
                    break block7;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            vec3d = null;
        }
        return vec3d;
    }

    private static CallSite aNq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean aMG(Entity entity) {
        boolean bl2;
        int[] nArray;
        block34: {
            block35: {
                block32: {
                    block33: {
                        Entity entity2;
                        block31: {
                            long l2 = JcqZx ^ 0x2A65A14E6434L;
                            nArray = fg.aIW();
                            try {
                                entity2 = entity;
                                if (nArray != null) break block31;
                                if (entity2 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            entity2 = entity;
                        }
                        try {
                            if (entity2 == rD.dlmvG.player) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = this.QSPxG.WF();
                                        if (nArray != null) break block32;
                                        if (!bl2) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    bl2 = rD.dlmvG.player.isHolding(Items.COBWEB);
                                    if (nArray != null) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!bl2) break block33;
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    bl2 = this.bLnpl.WF();
                }
                try {
                    try {
                        try {
                            try {
                                if (nArray != null) break block34;
                                if (!bl2) break block35;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            bl2 = this.aucRP.Uy();
                            if (nArray != null) break block34;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        if (bl2) break block35;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            bl2 = entity instanceof PlayerEntity;
        }
        try {
            if (nArray != null) return bl2;
            if (!bl2) return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
        PlayerEntity playerEntity = (PlayerEntity)entity;
        try {
            try {
                try {
                    try {
                        bl2 = this.sHsoL.WF();
                        if (nArray != null) return bl2;
                        if (!bl2) return true;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    bl2 = rD.dmc().ddy(playerEntity);
                    if (nArray != null) return bl2;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                if (!bl2) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw fq.aNj(matchException);
            }
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
    }

    public cu aMQ() {
        return this.ufdaw;
    }

    public Box aMH(Entity entity, Box box) {
        block21: {
            PlayerEntity playerEntity;
            block23: {
                boolean bl2;
                PlayerEntity playerEntity2;
                int[] nArray;
                block22: {
                    Entity entity2;
                    block20: {
                        long l2 = JcqZx ^ 0x5EE9D351990AL;
                        nArray = fg.aIW();
                        try {
                            try {
                                entity2 = entity;
                                if (nArray != null) break block20;
                                if (!(entity2 instanceof PlayerEntity)) break block21;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            entity2 = entity;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    playerEntity2 = (PlayerEntity)entity2;
                    try {
                        try {
                            try {
                                bl2 = this.fylmP.WF();
                                if (nArray != null) break block22;
                                if (!bl2) break block21;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            playerEntity = playerEntity2;
                            if (nArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        bl2 = playerEntity.isGliding();
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    block24: {
                        try {
                            try {
                                try {
                                    try {
                                        if (bl2) break block24;
                                        playerEntity = playerEntity2;
                                        if (nArray != null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    if (playerEntity.isCrawling()) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                playerEntity = playerEntity2;
                                if (nArray != null) break block23;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            if (!playerEntity.isInSwimmingPose()) break block21;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    playerEntity = entity;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            EntityDimensions entityDimensions = playerEntity.getDimensions(EntityPose.STANDING);
            double d2 = entityDimensions.width() + this.vzqAe;
            double d3 = entityDimensions.height() + this.ZLJlY;
            double d4 = (box.minX + box.maxX) / 2.0;
            double d5 = (box.minZ + box.maxZ) / 2.0;
            double d6 = d4 - d2 / 2.0;
            double d7 = d4 + d2 / 2.0;
            double d8 = d5 - d2 / 2.0;
            double d9 = d5 + d2 / 2.0;
            double d10 = box.minY;
            double d11 = d10 + d3;
            return new Box(d6, d10, d8, d7, d11, d9);
        }
        return new Box(box.minX - (double)(this.vzqAe / 2.0f), box.minY - (double)(this.ZLJlY / 2.0f), box.minZ - (double)(this.vzqAe / 2.0f), box.maxX + (double)(this.vzqAe / 2.0f), box.maxY + (double)(this.ZLJlY / 2.0f), box.maxZ + (double)(this.vzqAe / 2.0f));
    }

    private Vec3d aMK() {
        fq fq2;
        block4: {
            block5: {
                long l2 = JcqZx ^ 0x2DBC00AB94A4L;
                int[] nArray = fg.aIW();
                try {
                    try {
                        fq2 = this;
                        if (nArray != null) break block4;
                        if (fq2.aML()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
        }
        return fq2.aMO(this.NZTfz);
    }

    public ct aMP() {
        return this.meQED;
    }

    @hG
    public void aME(gv gv2) {
        block28: {
            Vec3d vec3d;
            block29: {
                fq fq2;
                int[] nArray;
                block26: {
                    block27: {
                        block24: {
                            block25: {
                                block22: {
                                    block23: {
                                        fq fq3;
                                        block20: {
                                            long l2 = JcqZx ^ 0x6A2644CDE4CAL;
                                            nArray = fg.aIW();
                                            try {
                                                block21: {
                                                    try {
                                                        try {
                                                            try {
                                                                fq3 = this;
                                                                if (nArray != null) break block20;
                                                                if (!fq3.bab()) break block21;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw fq.aNj(matchException);
                                                            }
                                                            fq2 = this;
                                                            if (nArray != null) break block22;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw fq.aNj(matchException);
                                                        }
                                                        if (fq2.zpLUV.SZ()) break block23;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fq.aNj(matchException);
                                                    }
                                                }
                                                fq3 = this;
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                        }
                                        fq3.aMN();
                                        return;
                                    }
                                    fq2 = this;
                                }
                                try {
                                    try {
                                        if (nArray != null) break block24;
                                        if (fq2.NZTfz != null) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            fq2 = this;
                        }
                        try {
                            try {
                                if (nArray != null) break block26;
                                if (fq2.aML()) break block27;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            this.aMN();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    fq2 = this;
                }
                vec3d = fq2.aMK();
                try {
                    try {
                        if (nArray != null) break block28;
                        if (vec3d != null) break block29;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    this.aMN();
                    return;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            rD.dlX().dbI(vec3d, ou.kxNyl, mw.uWTdl, this);
        }
    }

    private EntityHitResult aMI() {
        EntityHitResult entityHitResult;
        block16: {
            Vec3d vec3d;
            Entity entity;
            block12: {
                long l2 = JcqZx ^ 0x11E8A5F40542L;
                ov ov2 = rD.dlX().dbC();
                int[] nArray = fg.aIW();
                double d2 = rD.dlmvG.player.getEntityInteractionRange();
                Vec3d vec3d2 = rD.dlmvG.player.getEyePos();
                Vec3d vec3d3 = ov2.cGH();
                double d3 = d2 * d2;
                BlockHitResult blockHitResult = ox.cGV().cHd(ov2).cHe(d2).cHp();
                if (blockHitResult.getType() == HitResult.Type.BLOCK) {
                    d3 = Math.min(d3, vec3d2.squaredDistanceTo(blockHitResult.getPos()));
                }
                double d4 = Math.sqrt(d3);
                Vec3d vec3d4 = vec3d2.add(vec3d3.multiply(d4));
                Box box = rD.dlmvG.player.getBoundingBox().stretch(vec3d3.multiply(d2)).expand(1.0 + (double)this.vzqAe, 1.0 + (double)this.ZLJlY, 1.0 + (double)this.vzqAe);
                entity = null;
                vec3d = null;
                double d5 = d3;
                for (Entity entity2 : rD.dlmvG.world.getOtherEntities((Entity)rD.dlmvG.player, box, this::aMM)) {
                    block14: {
                        double d6;
                        double d7;
                        Optional optional;
                        block15: {
                            block13: {
                                optional = this.aMH(entity2, entity2.getBoundingBox()).raycast(vec3d2, vec3d4);
                                try {
                                    try {
                                        if (nArray != null) break block12;
                                        if (!optional.isEmpty()) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    if (nArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            d7 = vec3d2.squaredDistanceTo((Vec3d)optional.get());
                            try {
                                try {
                                    d6 = d7;
                                    if (nArray != null) break block14;
                                    if (!(d6 >= d5)) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (nArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                        }
                        entity = entity2;
                        vec3d = (Vec3d)optional.get();
                        d6 = d5 = d7;
                    }
                    if (nArray == null) continue;
                }
                try {
                    if (entity != null) break block12;
                    entityHitResult = null;
                    break block16;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            entityHitResult = new EntityHitResult(entity, vec3d);
        }
        return entityHitResult;
    }

    @hG
    public void aMF(gH.th th2) {
        fq fq2;
        block38: {
            block39: {
                block41: {
                    fq fq3;
                    block40: {
                        Vec3d vec3d;
                        int[] nArray;
                        block36: {
                            Vec3d vec3d2;
                            block37: {
                                fq fq4;
                                block34: {
                                    block35: {
                                        block32: {
                                            block33: {
                                                block30: {
                                                    block31: {
                                                        fq fq5;
                                                        block28: {
                                                            long l2 = JcqZx ^ 0x6BFDFD46C81DL;
                                                            nArray = fg.aIW();
                                                            try {
                                                                block29: {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                fq5 = this;
                                                                                if (nArray != null) break block28;
                                                                                if (!fq5.bab()) break block29;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw fq.aNj(matchException);
                                                                            }
                                                                            fq4 = this;
                                                                            if (nArray != null) break block30;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw fq.aNj(matchException);
                                                                        }
                                                                        if (fq4.zpLUV.SZ()) break block31;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw fq.aNj(matchException);
                                                                    }
                                                                }
                                                                fq5 = this;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw fq.aNj(matchException);
                                                            }
                                                        }
                                                        fq5.aMN();
                                                        return;
                                                    }
                                                    fq4 = this;
                                                }
                                                try {
                                                    try {
                                                        if (nArray != null) break block32;
                                                        if (fq4.NZTfz != null) break block33;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fq.aNj(matchException);
                                                    }
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fq.aNj(matchException);
                                                }
                                            }
                                            fq4 = this;
                                        }
                                        try {
                                            try {
                                                if (nArray != null) break block34;
                                                if (fq4.aML()) break block35;
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                            this.aMN();
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw fq.aNj(matchException);
                                        }
                                    }
                                    fq4 = this;
                                }
                                vec3d2 = fq4.aMK();
                                try {
                                    try {
                                        vec3d = vec3d2;
                                        if (nArray != null) break block36;
                                        if (vec3d != null) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    this.aMN();
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            vec3d = vec3d2;
                        }
                        ov ov2 = ov.cGy(vec3d);
                        try {
                            try {
                                try {
                                    try {
                                        fq2 = this;
                                        if (nArray != null) break block38;
                                        if (fq2.aMJ(this.NZTfz, ov2) != null) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    fq3 = this;
                                    if (nArray != null) break block40;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!fq3.obThK.cpC(this.xkXFw.VC())) break block41;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            fq3 = this;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    fq3.aMN();
                }
                return;
            }
            rD.dlW().ddn(this.NZTfz);
            fq2 = this;
        }
        fq2.aMN();
    }

    public cu aMR() {
        return this.zpLUV;
    }

    private boolean aMM(Entity entity) {
        boolean bl2;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    block10: {
                        long l2 = JcqZx ^ 0x498B75FAA826L;
                        nArray = fg.aIW();
                        try {
                            try {
                                bl2 = entity.canHit();
                                if (nArray != null) break block10;
                                if (!bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            bl2 = entity.isSpectator();
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray != null) break block12;
                            if (bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        bl2 = this.aMG(entity);
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (!bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    public cC aMS() {
        return this.zGQMR;
    }

    public cC aMT() {
        return this.TrhFC;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean aML() {
        boolean bl2;
        fq fq2;
        int[] nArray;
        block21: {
            block22: {
                Entity entity;
                block20: {
                    long l2 = JcqZx ^ 0x11407619AC05L;
                    nArray = fg.aIW();
                    try {
                        try {
                            entity = this.NZTfz;
                            if (nArray != null) break block20;
                            if (entity == null) return false;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        entity = this.NZTfz;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    try {
                        try {
                            try {
                                boolean bl3;
                                try {
                                    try {
                                        bl3 = entity.isRemoved();
                                        if (nArray != null) return bl3;
                                        if (bl3) return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    bl3 = this.NZTfz.canHit();
                                    if (nArray != null) return bl3;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!bl3) return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            fq2 = this;
                            if (nArray != null) break block21;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        if (fq2.aMG(this.NZTfz)) break block22;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
        }
        Entity entity = fq2.NZTfz;
        try {
            bl2 = entity instanceof LivingEntity;
            if (nArray != null) return bl2;
            if (!bl2) return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
        LivingEntity livingEntity = (LivingEntity)entity;
        try {
            bl2 = livingEntity.isDead();
            if (nArray != null) return bl2;
            if (bl2) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
    }

    private static CallSite aNn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException aNj(MatchException matchException) {
        return matchException;
    }

    private EntityHitResult aMJ(Entity entity, ov ov2) {
        return ox.cGV().cHd(ov2).cHe(rD.dlmvG.player.getEntityInteractionRange()).cHj(entity2 -> {
            boolean bl2;
            long l2 = JcqZx ^ 0x6B184A3A7005L;
            try {
                bl2 = entity2 == entity;
            }
            catch (MatchException matchException) {
                throw fq.aNj(matchException);
            }
            return bl2;
        }).cHn();
    }

    @Override
    public void YO() {
        super.YO();
        this.aMN();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fq.class, "aNp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(fq.class, "aNm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

