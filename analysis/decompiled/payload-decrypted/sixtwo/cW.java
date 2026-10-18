/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.AbstractBannerBlock
 *  net.minecraft.block.AbstractSignBlock
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.ButtonBlock
 *  net.minecraft.block.DecoratedPotBlock
 *  net.minecraft.block.LeverBlock
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.FallingBlockEntity
 *  net.minecraft.entity.decoration.AbstractDecorationEntity
 *  net.minecraft.entity.decoration.ArmorStandEntity
 *  net.minecraft.entity.vehicle.AbstractMinecartEntity
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
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
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.AbstractBannerBlock;
import net.minecraft.block.AbstractSignBlock;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.ButtonBlock;
import net.minecraft.block.DecoratedPotBlock;
import net.minecraft.block.LeverBlock;
import net.minecraft.entity.Entity;
import net.minecraft.entity.FallingBlockEntity;
import net.minecraft.entity.decoration.AbstractDecorationEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.vehicle.AbstractMinecartEntity;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cW$sq;
import sixtwo.cW$sr;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.fX;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rl;

public class cW
extends gg {
    private final cv SEHkS;
    private final cw PEUjg;
    private final cw eomCv;
    private final cw IcGgS;
    private final cw WtLkJ;
    private final cw YRSFN;
    private final cw dVboG;
    private final cw sZCWO;
    private final cw XQhcG;
    private final cw TkcsS;
    private final cC RjLgn;
    private final cC BAskS;
    private final cC inyHV;
    private final List<cW$sr> TjXAG;
    private final List<cW$sr> hUpkY;
    private final rl NkSiv;
    private static final long TMUaI;
    private static final String[] ScVGK;
    private static final String[] kXkmN;
    private static final Map IaTZt;
    private static final long[] TVPsE;
    private static final Integer[] MGxMm;
    private static final Map vzSDy;
    private static final long UBtqj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cW() {
        long l2 = TMUaI ^ 0x22126BA83FF7L;
        super(gf.aZL((int)140, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)83;
        nArray[1] = (int)99;
        nArray[2] = (int)97;
        nArray[3] = (int)110;
        nArray[4] = (int)32;
        nArray[5] = (int)70;
        nArray[6] = (int)111;
        nArray[7] = (int)114;
        this.SEHkS = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[9];
        nArray2[0] = (int)80;
        nArray2[1] = (int)97;
        nArray2[2] = (int)105;
        nArray2[3] = (int)110;
        nArray2[4] = (int)116;
        nArray2[5] = (int)105;
        nArray2[6] = (int)110;
        nArray2[7] = (int)103;
        nArray2[8] = (int)115;
        this.PEUjg = new cw(this.SEHkS, mr.clS(nArray2)).Tz();
        this.eomCv = new cw(this.SEHkS, mr.clS(new int[]{(int)83, (int)105, (int)103, (int)110, (int)115})).Tz();
        int[] nArray3 = new int[7];
        nArray3[0] = (int)66;
        nArray3[1] = (int)117;
        nArray3[2] = (int)116;
        nArray3[3] = (int)116;
        nArray3[4] = (int)111;
        nArray3[5] = (int)110;
        nArray3[6] = (int)115;
        this.IcGgS = new cw(this.SEHkS, mr.clS(nArray3));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)76;
        nArray4[1] = (int)101;
        nArray4[2] = (int)118;
        nArray4[3] = (int)101;
        nArray4[4] = (int)114;
        nArray4[5] = (int)115;
        this.WtLkJ = new cw(this.SEHkS, mr.clS(nArray4));
        int[] nArray5 = new int[7];
        nArray5[0] = (int)66;
        nArray5[1] = (int)97;
        nArray5[2] = (int)110;
        nArray5[3] = (int)110;
        nArray5[4] = (int)101;
        nArray5[5] = (int)114;
        nArray5[6] = (int)115;
        this.YRSFN = new cw(this.SEHkS, mr.clS(nArray5)).Tz();
        int[] nArray6 = new int[12];
        nArray6[0] = (int)65;
        nArray6[1] = (int)114;
        nArray6[2] = (int)109;
        nArray6[3] = (int)111;
        nArray6[4] = (int)114;
        nArray6[5] = (int)32;
        nArray6[6] = (int)83;
        nArray6[7] = (int)116;
        nArray6[8] = (int)97;
        nArray6[9] = (int)110;
        nArray6[10] = (int)100;
        nArray6[11] = (int)115;
        this.dVboG = new cw(this.SEHkS, mr.clS(nArray6)).Tz();
        int[] nArray7 = new int[9];
        nArray7[0] = (int)77;
        nArray7[1] = (int)105;
        nArray7[2] = (int)110;
        nArray7[3] = (int)101;
        nArray7[4] = (int)99;
        nArray7[5] = (int)97;
        nArray7[6] = (int)114;
        nArray7[7] = (int)116;
        nArray7[8] = (int)115;
        this.sZCWO = new cw(this.SEHkS, mr.clS(nArray7)).Tz();
        int[] nArray8 = new int[14];
        nArray8[0] = (int)70;
        nArray8[1] = (int)97;
        nArray8[2] = (int)108;
        nArray8[3] = (int)108;
        nArray8[4] = (int)105;
        nArray8[5] = (int)110;
        nArray8[6] = (int)103;
        nArray8[7] = (int)32;
        nArray8[8] = (int)66;
        nArray8[9] = (int)108;
        nArray8[10] = (int)111;
        nArray8[11] = (int)99;
        nArray8[12] = (int)107;
        nArray8[13] = (int)115;
        this.XQhcG = new cw(this.SEHkS, mr.clS(nArray8)).Tz();
        int[] nArray9 = new int[15];
        nArray9[0] = (int)68;
        nArray9[1] = (int)101;
        nArray9[2] = (int)99;
        nArray9[3] = (int)111;
        nArray9[4] = (int)114;
        nArray9[5] = (int)97;
        nArray9[6] = (int)116;
        nArray9[7] = (int)105;
        nArray9[8] = (int)111;
        nArray9[9] = (int)110;
        nArray9[10] = (int)32;
        nArray9[11] = (int)80;
        nArray9[12] = (int)111;
        nArray9[13] = (int)116;
        nArray9[14] = (int)115;
        this.TkcsS = new cw(this.SEHkS, mr.clS(nArray9));
        int[] nArray10 = new int[13];
        nArray10[0] = (int)77;
        nArray10[1] = (int)105;
        nArray10[2] = (int)110;
        nArray10[3] = (int)105;
        nArray10[4] = (int)109;
        nArray10[5] = (int)97;
        nArray10[6] = (int)108;
        nArray10[7] = (int)32;
        nArray10[8] = (int)67;
        nArray10[9] = (int)111;
        nArray10[10] = (int)117;
        nArray10[11] = (int)110;
        nArray10[12] = (int)116;
        this.RjLgn = new cC(this, mr.clS(nArray10)).Vy(1.0).Vw(1.0).Vx(100.0).VA(6.0);
        int[] nArray11 = new int[14];
        nArray11[0] = (int)67;
        nArray11[1] = (int)108;
        nArray11[2] = (int)117;
        nArray11[3] = (int)115;
        nArray11[4] = (int)116;
        nArray11[5] = (int)101;
        nArray11[6] = (int)114;
        nArray11[7] = (int)32;
        nArray11[8] = (int)82;
        nArray11[9] = (int)97;
        nArray11[10] = (int)100;
        nArray11[11] = (int)105;
        nArray11[12] = (int)117;
        nArray11[13] = (int)115;
        this.BAskS = new cC(this, mr.clS(nArray11)).Vy(1.0).Vw(8.0).Vx(32.0).VA(16.0);
        this.inyHV = new cC(this, mr.clS(new int[]{(int)82, (int)97, (int)110, (int)103, (int)101})).Vy(1.0).Vw(1.0).Vx(128.0).VA(100.0).Vz((String)((Object)" blocks"));
        this.TjXAG = new ArrayList<cW$sr>();
        this.hUpkY = new ArrayList<cW$sr>();
        this.NkSiv = new rl();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block17: {
            block16: {
                block15: {
                    block14: {
                        cW.TMUaI = gb.aYR(-7049798968253227656L, -3398100917983016162L, MethodHandles.lookup().lookupClass()).a(130037379353153L);
                        cW.IaTZt = new HashMap<K, V>(13);
                        var16 = cW.TMUaI ^ 94883728457398L;
                        var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var16 >>> 56);
                        for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                            v2 = v2;
                            v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                        }
                        var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var25_3 = new String[3];
                        var23_4 = 0;
                        var22_5 = "\u00e7\u0016L:\u0099\u00d4|8?\u000e\u00ba\u00db\u008b)F\u0000\u0010\u00de\u00a1\u00b4\u00e9\u0081\u00b42j\u00e7\u0007\u00eel\u009e\u00f5\u00c6\u00ba \u00daD\u00a5\u0013$2\u00ae\u00dd\u0080E4\u00c5\u009f\u008b\u00a8\u0084\u0094\u00da\u001e\u0001?\u000f\u00cf\u001f\u00abj>\u0001\u00a5l\u00fb\u00ff";
                        var24_6 = "\u00e7\u0016L:\u0099\u00d4|8?\u000e\u00ba\u00db\u008b)F\u0000\u0010\u00de\u00a1\u00b4\u00e9\u0081\u00b42j\u00e7\u0007\u00eel\u009e\u00f5\u00c6\u00ba \u00daD\u00a5\u0013$2\u00ae\u00dd\u0080E4\u00c5\u009f\u008b\u00a8\u0084\u0094\u00da\u001e\u0001?\u000f\u00cf\u001f\u00abj>\u0001\u00a5l\u00fb\u00ff".length();
                        var21_7 = 16;
                        var20_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            continue;
                            break;
                        }
lbl22:
                        // 1 sources

                        while (true) {
                            var25_3[var23_4++] = cW.aac(var26_9).intern();
                            if ((var20_8 += var21_7) < var24_6) {
                                var21_7 = var22_5.charAt(var20_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                        v3 = ++var20_8;
                        var26_9 = var18_1.doFinal(var22_5.substring(v3, v3 + var21_7).getBytes("ISO-8859-1"));
                        ** while (true)
                    }
                    cW.ScVGK = var25_3;
                    cW.kXkmN = new String[3];
                    cW.vzSDy = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v4 = SecretKeyFactory.getInstance("DES");
                    v5 = new byte[8];
                    v6 = v5;
                    v5[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v6 = v6;
                        v6[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[69];
                    var8_13 = 0;
                    var9_14 = "\u00b4k\u00e5#\u00c1\u0095\u00b8\u00dc\u00e3\u009c\u00e9\u008fu\u000f$E\u00be\u00cb\u00e4\f\u009c\u00a4\u00bc[\u00e7\u00aa\u000fx\u00c3\u001f\u00ee\u00ccr.\u00f2{\u009ap1$\u00fa?\u00a9*\u00ea\u00ae\u00bf\u00f1\u00e9\u00af\u001d\u000b\u00c6W\u00b2\u00aea\u0083\u0001\u008dXF\u00c6\u001f\u00cex\u00b0\u00a7`%\u00c4|4K#\u00fcX_n!\u00d9\u00d8#x\u00cc\u00baq\u0017\u001b|\u00c8\u00da\u0098w/L\u0092\u001a\u00d1=\u00185\u0019\u00d3)\u0092\u0007\u0012\u00b4D\u00a1\u0014X\u008d\u0086\u00f0\u00a2E\u00cf\u00c0\u008b\"u{\u00acJ\u00ac/\u00e9,\u00eeQ\u00bc#\u00a4\u00d7\u0018q\u00a7;\u00c5EI\u00a3\u0001\u0098\u0097\u00fbb\u00af\u0003\u00f89\u00e2~\u000eD\u009eG\u008a\u00f8rs\u00c7\u00e7\u00afc&\u008c\u0007TA\u00dfs\u00f2\u0082\u00f1'8\u00cfbhr\u00e8\u0004^\u00d8r\u00f3\u000f\u00b5\u00dd\u008c7~\u00fa\u00e9\u00f6\u008a?\"\u0018\u00b4w\u0094\u0011\u00e5\u00b6\u00b7\u00f7M\u00eb\u00af\u00ef_I\u00d5\u00f4Z\r\u00f2=\u00dd\r0\u00077\u00a6c\u00c9\u00cb\u00cb\u0001\u00de\u00baE\u00b6\u00e4\u0016\u00b9\u00c6\u00a9s\u0000]\u00a9\u00ff\u00d2K;\u0088&z\u00fc\u00da\u00cc\u009fs\u0006\u00ea\u0081\u00b7Q\u00a2\u00fa\u00bd\u0098\u00b3>te\u00e5\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086\u00f7\u00b6\u00b0\u000eD\u007f\u008dG\u0007\u00cfl\u0088\u0011\fp,\u00b2\u00a8\f\u0096x\u00be\u00cc\u0084\u00b7\u000f\u00ac+O\u000bz\u001bf-\u0080 \u00a2Y\u00e3\r|\u00f1\u00det\u00a78|\u0088\u009f\u00d1\u00ad\u0089\u00a7\u00b4\u0085#\u0014\u0012l\u00a4`T\u0099\u00b1\u00f0H\u00e4\u00c2\u0080\u0091H\u0092\u00b7\u0082N\u0003>\u00a3\u008e\u00f7\u00ef#\u009b \u0092\u00a1\u00b5Z\u0010\u0086k\u00ab\u00e6\u00c1\u00e1\u00a6\u0000k\u00e1d\u009e\u00d7P[c}\u00c1\bj%\u00e4\u00e2\u00b9\u0003\u00f6\u00a0\u0010F\u000f\u0005\u00dd\u0001\u00f2x\u00b2'\u0095~&\u00f6\u00e8\u00ebf\u00ce6i\u0006q\u00a6\u00ca\u0011\u00fc$\u00a2\u00e5\u00aa,yN\u008d\u00bf\u00b6\u0099\u00a8a\u008cNB\u0010*\u001e\u009a\u00f6^\u0082\u00bb0\u00ed\u0097cN\u00c3\u00b1\u00ae\u00a1k\u00e4\u00d0\u00b8Q7\u00e3\u0084\u00ccB\u00fb\u00ce\u00b1E>\u00dc\u00a6a?U\u008a \u00ec\u008bz\u00aa\u00fbJ<w\u00d2|y\u00bd\u00e9_\u00f3]S\u00be?\u00f2#X\u0013\u008aq&\u008b\u00d7\u0080v\u00c18\u001e\u00d1yL\u00c4\u00ff\u0017ZgO\u008bK4q\u00a8\u00d3\u00c3\u00ebp\u008c\u00c9\u0098\u00d2%\u00f0";
                    var10_15 = "\u00b4k\u00e5#\u00c1\u0095\u00b8\u00dc\u00e3\u009c\u00e9\u008fu\u000f$E\u00be\u00cb\u00e4\f\u009c\u00a4\u00bc[\u00e7\u00aa\u000fx\u00c3\u001f\u00ee\u00ccr.\u00f2{\u009ap1$\u00fa?\u00a9*\u00ea\u00ae\u00bf\u00f1\u00e9\u00af\u001d\u000b\u00c6W\u00b2\u00aea\u0083\u0001\u008dXF\u00c6\u001f\u00cex\u00b0\u00a7`%\u00c4|4K#\u00fcX_n!\u00d9\u00d8#x\u00cc\u00baq\u0017\u001b|\u00c8\u00da\u0098w/L\u0092\u001a\u00d1=\u00185\u0019\u00d3)\u0092\u0007\u0012\u00b4D\u00a1\u0014X\u008d\u0086\u00f0\u00a2E\u00cf\u00c0\u008b\"u{\u00acJ\u00ac/\u00e9,\u00eeQ\u00bc#\u00a4\u00d7\u0018q\u00a7;\u00c5EI\u00a3\u0001\u0098\u0097\u00fbb\u00af\u0003\u00f89\u00e2~\u000eD\u009eG\u008a\u00f8rs\u00c7\u00e7\u00afc&\u008c\u0007TA\u00dfs\u00f2\u0082\u00f1'8\u00cfbhr\u00e8\u0004^\u00d8r\u00f3\u000f\u00b5\u00dd\u008c7~\u00fa\u00e9\u00f6\u008a?\"\u0018\u00b4w\u0094\u0011\u00e5\u00b6\u00b7\u00f7M\u00eb\u00af\u00ef_I\u00d5\u00f4Z\r\u00f2=\u00dd\r0\u00077\u00a6c\u00c9\u00cb\u00cb\u0001\u00de\u00baE\u00b6\u00e4\u0016\u00b9\u00c6\u00a9s\u0000]\u00a9\u00ff\u00d2K;\u0088&z\u00fc\u00da\u00cc\u009fs\u0006\u00ea\u0081\u00b7Q\u00a2\u00fa\u00bd\u0098\u00b3>te\u00e5\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086\u00f7\u00b6\u00b0\u000eD\u007f\u008dG\u0007\u00cfl\u0088\u0011\fp,\u00b2\u00a8\f\u0096x\u00be\u00cc\u0084\u00b7\u000f\u00ac+O\u000bz\u001bf-\u0080 \u00a2Y\u00e3\r|\u00f1\u00det\u00a78|\u0088\u009f\u00d1\u00ad\u0089\u00a7\u00b4\u0085#\u0014\u0012l\u00a4`T\u0099\u00b1\u00f0H\u00e4\u00c2\u0080\u0091H\u0092\u00b7\u0082N\u0003>\u00a3\u008e\u00f7\u00ef#\u009b \u0092\u00a1\u00b5Z\u0010\u0086k\u00ab\u00e6\u00c1\u00e1\u00a6\u0000k\u00e1d\u009e\u00d7P[c}\u00c1\bj%\u00e4\u00e2\u00b9\u0003\u00f6\u00a0\u0010F\u000f\u0005\u00dd\u0001\u00f2x\u00b2'\u0095~&\u00f6\u00e8\u00ebf\u00ce6i\u0006q\u00a6\u00ca\u0011\u00fc$\u00a2\u00e5\u00aa,yN\u008d\u00bf\u00b6\u0099\u00a8a\u008cNB\u0010*\u001e\u009a\u00f6^\u0082\u00bb0\u00ed\u0097cN\u00c3\u00b1\u00ae\u00a1k\u00e4\u00d0\u00b8Q7\u00e3\u0084\u00ccB\u00fb\u00ce\u00b1E>\u00dc\u00a6a?U\u008a \u00ec\u008bz\u00aa\u00fbJ<w\u00d2|y\u00bd\u00e9_\u00f3]S\u00be?\u00f2#X\u0013\u008aq&\u008b\u00d7\u0080v\u00c18\u001e\u00d1yL\u00c4\u00ff\u0017ZgO\u008bK4q\u00a8\u00d3\u00c3\u00ebp\u008c\u00c9\u0098\u00d2%\u00f0".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v7 = var11_12;
                        v8 = var8_13++;
                        v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v10 = -1;
                        break block15;
                        break;
                    }
lbl58:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u00c1\u00df\u0012\u00bb0\u0013\u00a2d\u0083\u0085\u00e5q\u00867\u00ec\u0094";
                        var10_15 = "\u00c1\u00df\u0012\u00bb0\u0013\u00a2d\u0083\u0085\u00e5q\u00867\u00ec\u0094".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v7 = var11_12;
                            v8 = var8_13++;
                            v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v10 = 0;
                            break block15;
                            break;
                        }
                        break;
                    }
lbl71:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        break block16;
                        break;
                    }
                }
                var13_18 = v9;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v11 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
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
            cW.TVPsE = var11_12;
            cW.MGxMm = new Integer[69];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v12 = SecretKeyFactory.getInstance("DES");
            v13 = new byte[8];
            v14 = v13;
            v13[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v14 = v14;
                v14[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block17;
lbl98:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
        var2_22 = -58831678818083236L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        cW.UBtqj = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    private static String aad(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x400D;
        if (kXkmN[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])IaTZt.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IaTZt.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cW", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ScVGK[n3].getBytes("ISO-8859-1");
            cW.kXkmN[n3] = cW.aac(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return kXkmN[n3];
    }

    private static MatchException aab(MatchException matchException) {
        return matchException;
    }

    private static CallSite aai(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite aaf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ int aaa(Vec3d vec3d, cW$sr cW$sr, cW$sr cW$sr2) {
        return Double.compare(vec3d.squaredDistanceTo(cW$sr2.AqODg), vec3d.squaredDistanceTo(cW$sr.AqODg));
    }

    private static int aah(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cW.aag(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static Object aae(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cW.aad(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String aac(byte[] byArray) {
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

    private static int aag(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x126F;
        if (MGxMm[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = TVPsE[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])vzSDy.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    vzSDy.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cW", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cW.MGxMm[n3] = n4;
        }
        return MGxMm[n3];
    }

    private List<cW$sq> ZZ(List<Vec3d> list) {
        ArrayList<cW$sq> arrayList;
        block12: {
            long l2 = TMUaI ^ 0x3FB1481EF28DL;
            float f2 = this.BAskS.VB();
            ArrayList<cW$sq> arrayList2 = new ArrayList<cW$sq>();
            Iterator<Vec3d> iterator = list.iterator();
            iS[] iSArray = dh.afl();
            block8: while (true) {
                int n2 = iterator.hasNext();
                block9: while (n2 != 0) {
                    cW$sq cW$sq;
                    Vec3d vec3d;
                    block14: {
                        vec3d = iterator.next();
                        cW$sq cW$sq2 = null;
                        double d2 = f2 * f2;
                        arrayList = arrayList2;
                        if (iSArray != null) break block12;
                        for (cW$sq cW$sq3 : arrayList) {
                            block13: {
                                double d3;
                                double d4 = cW$sq3.dnH().squaredDistanceTo(vec3d);
                                try {
                                    d3 = d4;
                                    if (iSArray != null) break block13;
                                    double d5 = d3 - d2;
                                    n2 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                                    if (iSArray != null) continue block9;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (n2 < 0) {
                                    cW$sq2 = cW$sq3;
                                    d3 = d2 = d4;
                                }
                            }
                            if (iSArray == null) continue;
                        }
                        try {
                            block15: {
                                try {
                                    try {
                                        cW$sq = cW$sq2;
                                        if (iSArray != null) break block14;
                                        if (cW$sq == null) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    cW$sq2.dnG(vec3d);
                                    if (iSArray == null) continue block8;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            cW$sq = new cW$sq();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    Iterator iterator2 = cW$sq;
                    ((cW$sq)((Object)iterator2)).dnG(vec3d);
                    arrayList2.add((cW$sq)((Object)iterator2));
                    if (iSArray == null) continue block8;
                }
                break;
            }
            arrayList = arrayList2;
        }
        return arrayList;
    }

    @hG
    public void ZU(gM gM2) {
        this.TjXAG.clear();
        this.hUpkY.clear();
        this.NkSiv.dhH();
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void ZV(gH.th var1_1) {
        block31: {
            block32: {
                var2_2 = cW.TMUaI ^ 88495612642709L;
                var4_3 = dh.afl();
                try {
                    try {
                        v0 = this.bab();
                        if (var4_3 != null) break block31;
                        if (v0 != 0) break block32;
                    }
                    catch (MatchException v1) {
                        throw cW.aab(v1);
                    }
                    this.TjXAG.clear();
                    this.hUpkY.clear();
                    this.NkSiv.dhH();
                    return;
                }
                catch (MatchException v2) {
                    throw cW.aab(v2);
                }
            }
            this.NkSiv.dhL(cW.UBtqj, this.inyHV.VC(), (Predicate<BlockState>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ZX(net.minecraft.block.BlockState ), (Lnet/minecraft/block/BlockState;)Z)((cW)this), (Predicate<Entity>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ZY(net.minecraft.entity.Entity ), (Lnet/minecraft/entity/Entity;)Z)((cW)this));
            v0 = this.RjLgn.VC();
        }
        var5_4 = v0;
        var6_5 = this.BAskS.VB();
        var7_6 = this.NkSiv.dhG();
        var8_7 = this.ZZ(var7_6);
        var9_8 = new HashSet<Object>();
        var10_9 = var8_7.iterator();
        block26: while (true) lbl-1000:
        // 3 sources

        {
            v3 = var10_9.hasNext();
            block27: while (v3) {
                block36: {
                    block33: {
                        block34: {
                            var11_10 = var10_9.next();
                            try {
                                try {
                                    try {
                                        v4 = var11_10;
                                        if (var4_3 != null) break block33;
                                        v5 = v4.YJdti;
                                        if (var4_3 == null) {
                                        }
                                        ** GOTO lbl108
                                    }
                                    catch (MatchException v6) {
                                        throw cW.aab(v6);
                                    }
                                    if (v5 >= var5_4) break block34;
                                }
                                catch (MatchException v7) {
                                    throw cW.aab(v7);
                                }
                                if (var4_3 == null) ** GOTO lbl-1000
                            }
                            catch (MatchException v8) {
                                throw cW.aab(v8);
                            }
                        }
                        v4 = var11_10;
                    }
                    var12_11 = v4.dnH();
                    var13_12 = null;
                    var14_13 = var6_5 * var6_5;
                    for (cW$sr var17_15 : this.TjXAG) {
                        block35: {
                            v3 = var9_8.contains(var17_15);
                            if (var4_3 != null) continue block27;
                            try {
                                if (v3 && var4_3 == null) continue;
                            }
                            catch (MatchException v9) {
                                throw cW.aab(v9);
                            }
                            var18_16 = var17_15.AqODg.squaredDistanceTo(var12_11);
                            try {
                                v10 = var18_16;
                                if (var4_3 != null || !(v10 < var14_13)) break block35;
                            }
                            catch (MatchException v11) {
                                throw cW.aab(v11);
                            }
                            var13_12 = var17_15;
                            v10 = var14_13 = var18_16;
                        }
                        if (var4_3 == null) continue;
                    }
                    try {
                        block37: {
                            try {
                                try {
                                    v12 = var13_12;
                                    if (var4_3 != null) break block36;
                                    if (v12 == null) break block37;
                                }
                                catch (MatchException v13) {
                                    throw cW.aab(v13);
                                }
                                var13_12.dnJ(var11_10.YJdti, var12_11);
                                var9_8.add(var13_12);
                                if (var4_3 == null) continue block26;
                            }
                            catch (MatchException v14) {
                                throw cW.aab(v14);
                            }
                        }
                        v12 = new cW$sr();
                    }
                    catch (MatchException v15) {
                        throw cW.aab(v15);
                    }
                }
                var16_14 = v12;
                var16_14.dnJ(var11_10.YJdti, var12_11);
                this.TjXAG.add((cW$sr)var16_14);
                var9_8.add(var16_14);
                if (var4_3 == null) continue block26;
            }
            break;
        }
        var10_9 = this.TjXAG.iterator();
        do {
            block38: {
                block39: {
                    v5 = var10_9.hasNext();
lbl108:
                    // 2 sources

                    if (v5 == 0) break;
                    var11_10 = (cW$sr)var10_9.next();
                    try {
                        try {
                            v16 = var9_8.contains(var11_10);
                            if (var4_3 != null) break block38;
                            if (v16) break block39;
                        }
                        catch (MatchException v17) {
                            throw cW.aab(v17);
                        }
                        var11_10.dnK();
                    }
                    catch (MatchException v18) {
                        throw cW.aab(v18);
                    }
                }
                v16 = var11_10.dnN();
            }
            try {
                if (!v16) continue;
                var10_9.remove();
            }
            catch (MatchException v19) {
                throw cW.aab(v19);
            }
        } while (var4_3 == null);
        var11_10 = rD.dlmvG.player.getEntityPos();
        this.hUpkY.clear();
        this.hUpkY.addAll(this.TjXAG);
        this.hUpkY.sort((Comparator)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;Ljava/lang/Object;)I, aaa(net.minecraft.util.math.Vec3d sixtwo.cW$sr sixtwo.cW$sr ), (Lsixtwo/cW$sr;Lsixtwo/cW$sr;)I)((Vec3d)var11_10));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean ZX(BlockState blockState) {
        boolean bl2;
        iS[] iSArray;
        block55: {
            Block block;
            block53: {
                block51: {
                    block49: {
                        block47: {
                            BlockState blockState2;
                            block45: {
                                block46: {
                                    block44: {
                                        long l2 = TMUaI ^ 0x41E332DF560EL;
                                        iSArray = dh.afl();
                                        try {
                                            blockState2 = blockState;
                                            if (iSArray != null) break block44;
                                            if (blockState2 == null) return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        blockState2 = blockState;
                                    }
                                    try {
                                        try {
                                            if (iSArray != null) break block45;
                                            if (!blockState2.isAir()) break block46;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                }
                                blockState2 = blockState;
                            }
                            block = blockState2.getBlock();
                            try {
                                block48: {
                                    try {
                                        try {
                                            try {
                                                bl2 = this.eomCv.TC();
                                                if (iSArray != null) break block47;
                                                if (!bl2) break block48;
                                            }
                                            catch (MatchException matchException) {
                                                throw cW.aab(matchException);
                                            }
                                            bl2 = block instanceof AbstractSignBlock;
                                            if (iSArray != null) return bl2;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        if (bl2) return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                }
                                bl2 = this.IcGgS.TC();
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        try {
                            block50: {
                                try {
                                    try {
                                        try {
                                            if (iSArray != null) break block49;
                                            if (!bl2) break block50;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        bl2 = block instanceof ButtonBlock;
                                        if (iSArray != null) return bl2;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    if (bl2) return true;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            bl2 = this.WtLkJ.TC();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    try {
                        block52: {
                            try {
                                try {
                                    try {
                                        if (iSArray != null) break block51;
                                        if (!bl2) break block52;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    bl2 = block instanceof LeverBlock;
                                    if (iSArray != null) return bl2;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (bl2) return true;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        bl2 = this.YRSFN.TC();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                try {
                    block54: {
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block53;
                                    if (!bl2) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                bl2 = block instanceof AbstractBannerBlock;
                                if (iSArray != null) return bl2;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            if (bl2) return true;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    bl2 = this.TkcsS.TC();
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
            }
            try {
                try {
                    if (iSArray != null) break block55;
                    if (!bl2) return false;
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
                bl2 = block instanceof DecoratedPotBlock;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
        }
        try {
            if (iSArray != null) return bl2;
            if (!bl2) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw cW.aab(matchException);
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean ZY(Entity entity) {
        boolean bl2;
        iS[] iSArray;
        block42: {
            block40: {
                block38: {
                    block36: {
                        Entity entity2;
                        block35: {
                            long l2 = TMUaI ^ 0x54D49AD4FD62L;
                            iSArray = dh.afl();
                            try {
                                entity2 = entity;
                                if (iSArray != null) break block35;
                                if (entity2 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            entity2 = entity;
                        }
                        try {
                            if (entity2 == rD.dlmvG.player) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                        try {
                            block37: {
                                try {
                                    try {
                                        try {
                                            bl2 = this.PEUjg.TC();
                                            if (iSArray != null) break block36;
                                            if (!bl2) break block37;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        bl2 = entity instanceof AbstractDecorationEntity;
                                        if (iSArray != null) return bl2;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    if (bl2) return true;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            bl2 = this.dVboG.TC();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    try {
                        block39: {
                            try {
                                try {
                                    try {
                                        if (iSArray != null) break block38;
                                        if (!bl2) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    bl2 = entity instanceof ArmorStandEntity;
                                    if (iSArray != null) return bl2;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (bl2) return true;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        bl2 = this.sZCWO.TC();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                try {
                    block41: {
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block40;
                                    if (!bl2) break block41;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                bl2 = entity instanceof AbstractMinecartEntity;
                                if (iSArray != null) return bl2;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            if (bl2) return true;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    bl2 = this.XQhcG.TC();
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
            }
            try {
                try {
                    if (iSArray != null) break block42;
                    if (!bl2) return false;
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
                bl2 = entity instanceof FallingBlockEntity;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
        }
        try {
            if (iSArray != null) return bl2;
            if (!bl2) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw cW.aab(matchException);
        }
    }

    @hG
    public void ZW(gk gk2) {
        iS[] iSArray;
        long l2;
        block13: {
            block12: {
                boolean bl2;
                block11: {
                    l2 = TMUaI ^ 0x3BCB07DD5B49L;
                    iSArray = dh.afl();
                    try {
                        try {
                            bl2 = this.bab();
                            if (iSArray != null) break block11;
                            if (!bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                        bl2 = this.hUpkY.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                if (!bl2) break block13;
            }
            return;
        }
        lC lC2 = gk2.baT();
        ii ii2 = rD.dlM();
        Vec3d vec3d = rD.dlmvG.player.getEntityPos();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        lq lq3 = lE.WTzbi.bYM(6.0f);
        lq lq4 = lE.WTzbi.bYM(5.0f);
        for (cW$sr cW$sr : this.hUpkY) {
            float f2 = cW$sr.dnM();
            try {
                if (f2 == 0.0f && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
            Vec2f vec2f = jI.bIw(cW$sr.dnL());
            try {
                if (vec2f == null && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
            Vec3d vec3d2 = cW$sr.AqODg;
            double d2 = vec3d.distanceTo(vec3d2);
            CallSite callSite = cW.aaf("y", (int)18913, (long)(0x7848761EDB4417E5L ^ l2));
            String string = Math.round(d2) + "m";
            float f3 = 5.0f;
            float f4 = 4.0f;
            float f5 = 70.0f + f3 * 2.0f;
            float f6 = 40.0f;
            float f7 = vec2f.x - f5 / 2.0f;
            float f8 = vec2f.y;
            float f9 = f7 + f5 / 2.0f;
            float f10 = f8 + f6 / 2.0f;
            jH.bId(lC2, f9, f10, 0.5f + 0.5f * f2);
            lC2.ccW(f7, f8, f5, f6, f2, 0.0f, ld.all(4.0f), 5.0f);
            mG mG2 = ii2.bjb().coa(255.0f * f2);
            mG mG3 = ii2.bjb().cob(0.5f);
            mG mG4 = ii2.bjf().coa(220.0f * f2);
            mG mG5 = ii2.bje().coa((255.0f - 100.0f * fX.aYh()) * 0.7f).cob(f2);
            float f11 = f7 + f3;
            float f12 = f8 + f4;
            lC2.cez(lq2, (String)((Object)callSite), f11, f12, mG2);
            lC2.ceP(lq3, string, f7 + f5 - f3, f12, mG3);
            float f13 = f7 + f3;
            float f14 = f12 + 18.0f;
            float f15 = f14 - 7.0f;
            lC2.cez(lq4, (String)((Object)cW.aaf("y", (int)29610, (long)(0x4BDD7543488E2DADL ^ l2))), f11, f15, mG3);
            float f16 = f5 - 2.0f * f3;
            float f17 = 2.5f;
            float f18 = f13 + f16;
            float f19 = f14 - 7.5f;
            lC2.ceP(lq3, String.valueOf(cW$sr.hRZdA), f18, f19, mG2);
            lC2.cdg(f13, f14, f16, f17, ld.all(0.25f), mG5);
            float f20 = f16 * Math.min(jf.bAI(cW$sr.hRZdA, 0.0f, (float)this.RjLgn.VG()), 1.0f);
            lC2.cdg(f13, f14, f20, f17, ld.all(0.25f), mG4);
            float f21 = f14 + f17 + 5.0f;
            float f22 = 6.0f;
            lC2.cem(lf.GHxLj, f11, f21, f22, mG3);
            float f23 = f11 + f22 + 3.0f;
            float f24 = f21 + jf.bAH(lq3.cat(), f22);
            String string2 = Math.round(rD.dlmvG.player.getX()) + " " + Math.round(rD.dlmvG.player.getY()) + " " + Math.round(rD.dlmvG.player.getZ());
            lC2.cez(lq3, string2, f23, f24, mG3);
            jH.bIf();
            if (iSArray == null) continue;
        }
    }

    @Override
    public void YO() {
        super.YO();
        this.TjXAG.clear();
        this.hUpkY.clear();
        this.NkSiv.dhH();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cW.class, "aah", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(cW.class, "aae", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

