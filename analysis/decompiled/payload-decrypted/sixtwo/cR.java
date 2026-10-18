/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.platform.DepthTestFunction
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.projectile.PersistentProjectileEntity
 *  net.minecraft.entity.projectile.TridentEntity
 *  net.minecraft.entity.projectile.thrown.EnderPearlEntity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.World
 */
package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
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
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.entity.projectile.TridentEntity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.iX;
import sixtwo.jJ;
import sixtwo.jg;
import sixtwo.kS;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mU;
import sixtwo.mn;
import sixtwo.mo;
import sixtwo.mp;
import sixtwo.mq;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;

public class cR
extends gg
implements lG {
    private final ct imXIw;
    private final cu nVChr;
    private final cu Taplw;
    private final cu sDuYV;
    private final cu GZMuF;
    private final cu HzYvJ;
    private final cu wHlEJ;
    private final cu BUBSR;
    private final cu OJUIx;
    private final cG mNCfB;
    private final ct ywNJH;
    private final cu VMcLW;
    private final cu BjCne;
    private final cC lyHys;
    private final cC mNkAv;
    private final cv pEdgo;
    private final cw Ubjvg;
    private final cw UYbIm;
    private final cw IIZjW;
    private final cw czNck;
    private final cw cfNnD;
    private final cw hQcMD;
    private final cJ aTbJe;
    private final List<mq> ImFtb;
    private final kS wccSb;
    private static final long vBOIC;
    private static final String ZDept;
    private static final long[] RFnIl;
    private static final Integer[] ECHJE;
    private static final Map QOHbp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cR() {
        long l2 = vBOIC ^ 0x98E776DF081L;
        super(gf.aZL((int)125, false, gh.nOCvV));
        int[] nArray = new int[9];
        nArray[0] = (int)80;
        nArray[1] = (int)97;
        nArray[2] = (int)114;
        nArray[3] = (int)116;
        nArray[4] = (int)105;
        nArray[5] = (int)99;
        nArray[6] = (int)108;
        nArray[7] = (int)101;
        nArray[8] = (int)115;
        this.imXIw = new ct(this, mr.clS(nArray));
        this.nVChr = new cu(this.imXIw, mr.clS(new int[]{(int)83, (int)116, (int)97, (int)114, (int)115}));
        int[] nArray2 = new int[10];
        nArray2[0] = (int)83;
        nArray2[1] = (int)110;
        nArray2[2] = (int)111;
        nArray2[3] = (int)119;
        nArray2[4] = (int)102;
        nArray2[5] = (int)108;
        nArray2[6] = (int)97;
        nArray2[7] = (int)107;
        nArray2[8] = (int)101;
        nArray2[9] = (int)115;
        this.Taplw = new cu(this.imXIw, mr.clS(nArray2));
        this.sDuYV = new cu(this.imXIw, mr.clS(new int[]{(int)71, (int)104, (int)111, (int)115, (int)116}));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)72;
        nArray3[1] = (int)101;
        nArray3[2] = (int)97;
        nArray3[3] = (int)114;
        nArray3[4] = (int)116;
        nArray3[5] = (int)115;
        this.GZMuF = new cu(this.imXIw, mr.clS(nArray3));
        int[] nArray4 = new int[8];
        nArray4[0] = (int)68;
        nArray4[1] = (int)105;
        nArray4[2] = (int)97;
        nArray4[3] = (int)109;
        nArray4[4] = (int)111;
        nArray4[5] = (int)110;
        nArray4[6] = (int)100;
        nArray4[7] = (int)115;
        this.HzYvJ = new cu(this.imXIw, mr.clS(nArray4));
        int[] nArray5 = new int[8];
        nArray5[0] = (int)84;
        nArray5[1] = (int)104;
        nArray5[2] = (int)117;
        nArray5[3] = (int)110;
        nArray5[4] = (int)100;
        nArray5[5] = (int)101;
        nArray5[6] = (int)114;
        nArray5[7] = (int)115;
        this.wHlEJ = new cu(this.imXIw, mr.clS(nArray5));
        this.BUBSR = new cu(this.imXIw, mr.clS(new int[]{(int)77, (int)111, (int)111, (int)110, (int)115}));
        int[] nArray6 = new int[6];
        nArray6[0] = (int)67;
        nArray6[1] = (int)108;
        nArray6[2] = (int)111;
        nArray6[3] = (int)117;
        nArray6[4] = (int)100;
        nArray6[5] = (int)115;
        this.OJUIx = new cu(this.imXIw, mr.clS(nArray6));
        this.mNCfB = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114})).Uf(rD.dlM().bjG().bis());
        int[] nArray7 = new int[7];
        nArray7[0] = (int)80;
        nArray7[1] = (int)104;
        nArray7[2] = (int)121;
        nArray7[3] = (int)115;
        nArray7[4] = (int)105;
        nArray7[5] = (int)99;
        nArray7[6] = (int)115;
        this.ywNJH = new ct(this, mr.clS(nArray7));
        this.VMcLW = new cu(this.ywNJH, mr.clS(new int[]{(int)70, (int)108, (int)121}));
        this.BjCne = new cu(this.ywNJH, mr.clS(new int[]{(int)68, (int)114, (int)111, (int)112}));
        this.lyHys = new cC(this, mr.clS(new int[]{(int)83, (int)99, (int)97, (int)108, (int)101})).Vy(0.01).Vw(1.0).Vx(10.0).VA(3.0);
        int[] nArray8 = new int[6];
        nArray8[0] = (int)65;
        nArray8[1] = (int)109;
        nArray8[2] = (int)111;
        nArray8[3] = (int)117;
        nArray8[4] = (int)110;
        nArray8[5] = (int)116;
        this.mNkAv = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(20.0).Vx(800.0).VA(200.0);
        int[] nArray9 = new int[6];
        nArray9[0] = (int)65;
        nArray9[1] = (int)100;
        nArray9[2] = (int)100;
        nArray9[3] = (int)32;
        nArray9[4] = (int)111;
        nArray9[5] = (int)110;
        this.pEdgo = new cv(this, mr.clS(nArray9));
        this.Ubjvg = new cw(this.pEdgo, mr.clS(new int[]{(int)73, (int)100, (int)108, (int)101})).Tz();
        int[] nArray10 = new int[8];
        nArray10[0] = (int)77;
        nArray10[1] = (int)111;
        nArray10[2] = (int)118;
        nArray10[3] = (int)101;
        nArray10[4] = (int)109;
        nArray10[5] = (int)101;
        nArray10[6] = (int)110;
        nArray10[7] = (int)116;
        this.UYbIm = new cw(this.pEdgo, mr.clS(nArray10));
        int[] nArray11 = new int[11];
        nArray11[0] = (int)80;
        nArray11[1] = (int)101;
        nArray11[2] = (int)97;
        nArray11[3] = (int)114;
        nArray11[4] = (int)108;
        nArray11[5] = (int)32;
        nArray11[6] = (int)84;
        nArray11[7] = (int)104;
        nArray11[8] = (int)114;
        nArray11[9] = (int)111;
        nArray11[10] = (int)119;
        this.IIZjW = new cw(this.pEdgo, mr.clS(nArray11));
        int[] nArray12 = new int[10];
        nArray12[0] = (int)65;
        nArray12[1] = (int)114;
        nArray12[2] = (int)114;
        nArray12[3] = (int)111;
        nArray12[4] = (int)119;
        nArray12[5] = (int)32;
        nArray12[6] = (int)83;
        nArray12[7] = (int)104;
        nArray12[8] = (int)111;
        nArray12[9] = (int)116;
        this.czNck = new cw(this.pEdgo, mr.clS(nArray12));
        int[] nArray13 = new int[13];
        nArray13[0] = (int)84;
        nArray13[1] = (int)114;
        nArray13[2] = (int)105;
        nArray13[3] = (int)100;
        nArray13[4] = (int)101;
        nArray13[5] = (int)110;
        nArray13[6] = (int)116;
        nArray13[7] = (int)32;
        nArray13[8] = (int)84;
        nArray13[9] = (int)104;
        nArray13[10] = (int)114;
        nArray13[11] = (int)111;
        nArray13[12] = (int)119;
        this.cfNnD = new cw(this.pEdgo, mr.clS(nArray13));
        int[] nArray14 = new int[9];
        nArray14[0] = (int)84;
        nArray14[1] = (int)111;
        nArray14[2] = (int)116;
        nArray14[3] = (int)101;
        nArray14[4] = (int)109;
        nArray14[5] = (int)32;
        nArray14[6] = (int)80;
        nArray14[7] = (int)111;
        nArray14[8] = (int)112;
        this.hQcMD = new cw(this.pEdgo, mr.clS(nArray14));
        this.aTbJe = new cJ(this, mr.clS(new int[]{(int)71, (int)108, (int)111, (int)119})).WE(true);
        this.ImFtb = new ArrayList<mq>();
        this.wccSb = XSRvt.defaultState().bVG(DepthTestFunction.LEQUAL_DEPTH_TEST);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    cR.vBOIC = gb.aYR(5673042269858908484L, -8380775605659325189L, MethodHandles.lookup().lookupClass()).a(271803318299346L);
                    var11 = cR.vBOIC ^ 18149554341388L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("{\u00ab\u00e4\u00b4_;7Z".getBytes("ISO-8859-1"));
                ** while (true)
                cR.ZDept = cR.YW(var15_3).intern();
                cR.QOHbp = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[75];
                var3_7 = 0;
                var4_8 = "0$\u0013\u00be\u00b2cH\u00d76\u00feL~\u000b\u00fcYR\fi\u00c6\u0014~\u0089\u00f6&-8\u00ebo\u00a1\u0010\u0012\u00ecCs,=\u00c7\u00ec\u0014|r\u00bb\u00ad\u0003\u00d7\u0013\u00be<%\u00c3\u0017\u000f\u00a5\u008fd\u0092\u00d6\u00a4\u009fEe.\u00ce\u0081\u00df\u00a1^\u00ed\u00f9\u000f\u008e\u009e\u00c1\u00ec\u0005\u00fd\u00ef\u00f2\u00b6hl\n\u00de\u0091I\u00f5A\u0007}8[\u00afxw<\u00b6\u00d1oE\u009b\u00f0\u00c3\u0011\u00a1q>\u0015\u000f\u0018\u00d5\u00de\u00ce\u0007\u0010\u00f3\u0006\u00e3d\u00c2\u0081\u00ac\u0004\u0005\u00a0jEJ?y\u00e0\u00f4&V\u00be\u00eb\u0003D2\u000b4\u00bc.\u007f\u00d98p\u00dd\u00dc2\u00fb\u00b81g\u00b9\u0012\u00der\u00b5\u00ed\u0010\u0082\u00ddRV\u00e7^\u0088C,\u00c1\u00ad\u00ca\u00e8\u00bb\u00d2\u00ac\u00dc\u00a4%j7\u0000\u00ce%mZ\u0089\u008a\u00e1-\u0011e\u00a5\u00ab\u00cb\u00b03\u0016`L\u00fe\u00de!\u00da\u00e60\u00d4\u00cd\u00baM\b\u00cf\r\u001e\u00fetd.\u00d5\u00f8e\u00be-\u0003X\u00bdm\u008f\u0094\u00f6\u0091\u00e8\u00c2\u00abt\t$\u00d9\u00ec\u0010MG\u0006>\u00e51\u0017ep\u00c6\u00a3\u0007r\u00f7\u0084 y\u00b7\u00dc\u0015\u0017\u00d9\u00800\u00b5\u00dc\u00ac\u00ac\u00be\u00a7'\u00b3\u0082&y+wf;$\u00ea-\u00c3\u0098\u0004\u00b8\u00e3\u00d5\rT/\u00ae\u00e4O\u0015U`^R\u00d9#\u00bb\u00d5Q\u00e2k\u00f10R\u00fd\u0006#\u000f\u0094Ep!RE \u00f3l\u00f2\u00d3\u0007\u00f6\u008b\u00c52\u00f8\u00ed/HOE\u00e6\u00b9\u0087\u00aeP\u00e5;\u00bb\u009f~\u0001\u009d\u00f95\u00b2te\u00d8SD\u009b\u00b2\u001fb\u0018@\u00e4\u00e4\u0006\u00a6\u00ban\u00f6\u0093dj\nB\u00d9\u00a3%\u00e5o\u00b4<\u009b,\u00b6\u00f7\u0017#}\u0084\u0003\u00b0\u0093wpQ\u00fc\u0091\u0086\u00ba^\u0095]o\u00e7\u009d\u00bb\u008cB\u0090Gt\u0007B\u00065I\u00c66g\u00b9\f\u00fe\u00de\u001b\u00c7;\u001e\u00cc\u0096w\\\u00fdN\u00d2\u0092\u008eL\u00c7bG\u0019\u009e\u00de\u00a2\u0086\u00ceU\u0086C\u008c\u0081=f\u0080A\u00da4\u0083\u00f5\u00d8n*\u00f6\u00a3S\u00e3z\u00ebb\u00a9\u00b3\u0017Yz+q\u00f5CR\u00a4<\u00e4\u00d3\u008d\u00dc\u00c1\u0080'\u00a7n\u00a6\u00fd\u00ba\u0004\u00f4\u00b6\u0001\u0094`j\u00c9\u0091u5\u0084!\u00bf\u0005\u00df\u0088\u0003:\u00dc\u0018+\u00f0nj\u00bc\u0098I\u0082\u00ferK\u00cb\u00d9D\u009c\u00a3l\u00f4qHC\u00c8\u00b5\u00e1*!\u00ba\u00d6M\u00af,\u009c+\u0088E>\u00a8E74\u007f/;d\u00d5\u0015\u00e0\u000fa\u00a2\b\u00f8$\u008f\u00f0\u00ce7\u00e7\u00a8\u00aax\u00b0_,1Vp\u0010h\u0083\u00df";
                var5_9 = "0$\u0013\u00be\u00b2cH\u00d76\u00feL~\u000b\u00fcYR\fi\u00c6\u0014~\u0089\u00f6&-8\u00ebo\u00a1\u0010\u0012\u00ecCs,=\u00c7\u00ec\u0014|r\u00bb\u00ad\u0003\u00d7\u0013\u00be<%\u00c3\u0017\u000f\u00a5\u008fd\u0092\u00d6\u00a4\u009fEe.\u00ce\u0081\u00df\u00a1^\u00ed\u00f9\u000f\u008e\u009e\u00c1\u00ec\u0005\u00fd\u00ef\u00f2\u00b6hl\n\u00de\u0091I\u00f5A\u0007}8[\u00afxw<\u00b6\u00d1oE\u009b\u00f0\u00c3\u0011\u00a1q>\u0015\u000f\u0018\u00d5\u00de\u00ce\u0007\u0010\u00f3\u0006\u00e3d\u00c2\u0081\u00ac\u0004\u0005\u00a0jEJ?y\u00e0\u00f4&V\u00be\u00eb\u0003D2\u000b4\u00bc.\u007f\u00d98p\u00dd\u00dc2\u00fb\u00b81g\u00b9\u0012\u00der\u00b5\u00ed\u0010\u0082\u00ddRV\u00e7^\u0088C,\u00c1\u00ad\u00ca\u00e8\u00bb\u00d2\u00ac\u00dc\u00a4%j7\u0000\u00ce%mZ\u0089\u008a\u00e1-\u0011e\u00a5\u00ab\u00cb\u00b03\u0016`L\u00fe\u00de!\u00da\u00e60\u00d4\u00cd\u00baM\b\u00cf\r\u001e\u00fetd.\u00d5\u00f8e\u00be-\u0003X\u00bdm\u008f\u0094\u00f6\u0091\u00e8\u00c2\u00abt\t$\u00d9\u00ec\u0010MG\u0006>\u00e51\u0017ep\u00c6\u00a3\u0007r\u00f7\u0084 y\u00b7\u00dc\u0015\u0017\u00d9\u00800\u00b5\u00dc\u00ac\u00ac\u00be\u00a7'\u00b3\u0082&y+wf;$\u00ea-\u00c3\u0098\u0004\u00b8\u00e3\u00d5\rT/\u00ae\u00e4O\u0015U`^R\u00d9#\u00bb\u00d5Q\u00e2k\u00f10R\u00fd\u0006#\u000f\u0094Ep!RE \u00f3l\u00f2\u00d3\u0007\u00f6\u008b\u00c52\u00f8\u00ed/HOE\u00e6\u00b9\u0087\u00aeP\u00e5;\u00bb\u009f~\u0001\u009d\u00f95\u00b2te\u00d8SD\u009b\u00b2\u001fb\u0018@\u00e4\u00e4\u0006\u00a6\u00ban\u00f6\u0093dj\nB\u00d9\u00a3%\u00e5o\u00b4<\u009b,\u00b6\u00f7\u0017#}\u0084\u0003\u00b0\u0093wpQ\u00fc\u0091\u0086\u00ba^\u0095]o\u00e7\u009d\u00bb\u008cB\u0090Gt\u0007B\u00065I\u00c66g\u00b9\f\u00fe\u00de\u001b\u00c7;\u001e\u00cc\u0096w\\\u00fdN\u00d2\u0092\u008eL\u00c7bG\u0019\u009e\u00de\u00a2\u0086\u00ceU\u0086C\u008c\u0081=f\u0080A\u00da4\u0083\u00f5\u00d8n*\u00f6\u00a3S\u00e3z\u00ebb\u00a9\u00b3\u0017Yz+q\u00f5CR\u00a4<\u00e4\u00d3\u008d\u00dc\u00c1\u0080'\u00a7n\u00a6\u00fd\u00ba\u0004\u00f4\u00b6\u0001\u0094`j\u00c9\u0091u5\u0084!\u00bf\u0005\u00df\u0088\u0003:\u00dc\u0018+\u00f0nj\u00bc\u0098I\u0082\u00ferK\u00cb\u00d9D\u009c\u00a3l\u00f4qHC\u00c8\u00b5\u00e1*!\u00ba\u00d6M\u00af,\u009c+\u0088E>\u00a8E74\u007f/;d\u00d5\u0015\u00e0\u000fa\u00a2\b\u00f8$\u008f\u00f0\u00ce7\u00e7\u00a8\u00aax\u00b0_,1Vp\u0010h\u0083\u00df".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "5\u009f\u00af\u0087b\n|D\u00f4\t\u001c)\u00e1\u001b*\u00e8";
                    var5_9 = "5\u009f\u00af\u0087b\n|D\u00f4\t\u001c)\u00e1\u001b*\u00e8".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        cR.RFnIl = var6_6;
        cR.ECHJE = new Integer[75];
    }

    private static MatchException YV(MatchException matchException) {
        return matchException;
    }

    private Vec3d YU() {
        return new Vec3d((double)mU.cpQ(-0.03f, 0.03f), (double)mU.cpQ(-0.03f, 0.03f), (double)mU.cpQ(-0.03f, 0.03f));
    }

    @hG
    public void YR(gL.tk tk2) {
        block18: {
            byte by2;
            EntityStatusS2CPacket entityStatusS2CPacket;
            iS[] iSArray;
            long l2;
            block19: {
                Packet<?> packet;
                block17: {
                    l2 = vBOIC ^ 0x38766F7E5558L;
                    iSArray = dh.afl();
                    try {
                        if (!this.bab()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                    Packet<?> packet2 = tk2.bcf();
                    try {
                        try {
                            packet = packet2;
                            if (iSArray != null) break block17;
                            if (!(packet instanceof EntityStatusS2CPacket)) break block18;
                        }
                        catch (MatchException matchException) {
                            throw cR.YV(matchException);
                        }
                        packet = packet2;
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                }
                entityStatusS2CPacket = (EntityStatusS2CPacket)packet;
                try {
                    try {
                        by2 = entityStatusS2CPacket.getStatus();
                        if (iSArray != null) break block19;
                        if (by2 != cR.YZ("y", (int)14841, (long)(0x8D92F376483D941L ^ l2))) break block18;
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                    by2 = (byte)(this.ywNJH.SQ(1) ? 1 : 0);
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
            }
            byte by3 = by2;
            Entity entity = entityStatusS2CPacket.getEntity((World)rD.dlmvG.world);
            try {
                if (entity == null) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cR.YV(matchException);
            }
            for (int i2 = 0; i2 < cR.YZ("y", (int)7599, (long)(0x275E0775F6CB7D3FL ^ l2)); ++i2) {
                Vec3d vec3d;
                Vec3d vec3d2 = new Vec3d(entity.getX() + (double)mU.cpQ(-0.2f, 0.2f), entity.getY() + (double)mU.cpQ(0.0f, entity.getHeight()), entity.getZ() + (double)mU.cpQ(-0.2f, 0.2f));
                try {
                    vec3d = by3 != 0 ? new Vec3d(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0) : this.YU();
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
                Vec3d vec3d3 = vec3d;
                this.ImFtb.add(new mn(vec3d2, mp.qIoJG, vec3d3, this.lyHys.VB()));
                if (iSArray == null) continue;
            }
        }
    }

    private static int YY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cR.YX(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @hG
    public void YP(gM gM2) {
        this.ImFtb.clear();
    }

    private static int YX(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4EE2;
        if (ECHJE[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = RFnIl[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QOHbp.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QOHbp.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cR", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cR.ECHJE[n3] = n4;
        }
        return ECHJE[n3];
    }

    @hG
    public void YQ(gH.th th2) {
        float f2;
        boolean bl2;
        boolean bl3;
        block55: {
            block56: {
                Vec3d vec3d;
                iS[] iSArray;
                block45: {
                    boolean bl4;
                    block43: {
                        block44: {
                            long l2 = vBOIC ^ 0x4E1AEB5F0E00L;
                            iSArray = dh.afl();
                            try {
                                bl4 = this.bab();
                                if (iSArray != null) break block43;
                                if (bl4) break block44;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                            return;
                        }
                        this.ImFtb.removeIf(mq::clp);
                        bl4 = this.ywNJH.SQ(1);
                    }
                    bl3 = bl4;
                    for (Entity entity : rD.dlmvG.world.getEntities()) {
                        block54: {
                            boolean bl5;
                            Vec3d vec3d2;
                            block52: {
                                boolean bl6;
                                block53: {
                                    TridentEntity tridentEntity;
                                    block50: {
                                        block51: {
                                            block48: {
                                                block49: {
                                                    Vec3d vec3d3;
                                                    block47: {
                                                        block46: {
                                                            vec3d2 = entity.getEntityPos();
                                                            try {
                                                                try {
                                                                    bl2 = bl3;
                                                                    if (iSArray != null) break block45;
                                                                    if (!bl2) break block46;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cR.YV(matchException);
                                                                }
                                                                vec3d3 = new Vec3d(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0);
                                                                break block47;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cR.YV(matchException);
                                                            }
                                                        }
                                                        vec3d3 = this.YU();
                                                    }
                                                    vec3d = vec3d3;
                                                    bl6 = false;
                                                    try {
                                                        try {
                                                            try {
                                                                bl5 = entity instanceof EnderPearlEntity;
                                                                if (iSArray != null) break block48;
                                                                if (!bl5) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cR.YV(matchException);
                                                            }
                                                            bl5 = this.IIZjW.TC();
                                                            if (iSArray != null) break block48;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cR.YV(matchException);
                                                        }
                                                        if (!bl5) break block49;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cR.YV(matchException);
                                                    }
                                                    bl6 = true;
                                                }
                                                bl5 = entity instanceof TridentEntity;
                                            }
                                            try {
                                                if (iSArray != null) break block50;
                                                if (!bl5) break block51;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            tridentEntity = (TridentEntity)entity;
                                            try {
                                                try {
                                                    try {
                                                        bl5 = this.cfNnD.TC();
                                                        if (iSArray != null) break block50;
                                                        if (!bl5) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cR.YV(matchException);
                                                    }
                                                    bl5 = tridentEntity.isOnGround();
                                                    if (iSArray != null) break block50;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cR.YV(matchException);
                                                }
                                                if (bl5) break block51;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            bl6 = true;
                                        }
                                        bl5 = entity instanceof PersistentProjectileEntity;
                                    }
                                    try {
                                        if (iSArray != null) break block52;
                                        if (!bl5) break block53;
                                    }
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                    tridentEntity = (PersistentProjectileEntity)entity;
                                    try {
                                        try {
                                            try {
                                                bl5 = this.czNck.TC();
                                                if (iSArray != null) break block52;
                                                if (!bl5) break block53;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            bl5 = tridentEntity.isOnGround();
                                            if (iSArray != null) break block52;
                                        }
                                        catch (MatchException matchException) {
                                            throw cR.YV(matchException);
                                        }
                                        if (bl5) break block53;
                                    }
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                    bl6 = true;
                                }
                                bl5 = bl6;
                            }
                            try {
                                try {
                                    if (iSArray != null || !bl5) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                                bl5 = this.ImFtb.add(new mn(vec3d2, mp.qIoJG, vec3d, this.lyHys.VB()));
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        if (iSArray == null) continue;
                    }
                    bl2 = this.Ubjvg.TC();
                }
                try {
                    if (iSArray != null) break block55;
                    if (!bl2) break block56;
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
                float f3 = (float)jg.bBy((Entity)rD.dlmvG.player);
                for (int i2 = this.ImFtb.size(); i2 < this.mNkAv.VC(); ++i2) {
                    Vec3d vec3d4;
                    block58: {
                        block57: {
                            float f4 = 20.0f;
                            vec3d = new Vec3d(rD.dlmvG.player.getX() + (double)mU.cpQ(-f4, f4), rD.dlmvG.player.getY() + (double)mU.cpQ(Math.max(-f3, -f4), f4), rD.dlmvG.player.getZ() + (double)mU.cpQ(-f4, f4));
                            try {
                                try {
                                    bl2 = bl3;
                                    if (iSArray != null) break block55;
                                    if (!bl2) break block57;
                                }
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                                vec3d4 = new Vec3d(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0);
                                break block58;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        vec3d4 = this.YU();
                    }
                    Vec3d vec3d5 = vec3d4;
                    this.ImFtb.add(new mn(vec3d, mp.qIoJG, vec3d5, this.lyHys.VB()));
                    if (iSArray == null) continue;
                }
            }
            bl2 = this.UYbIm.TC();
        }
        if (bl2 && (f2 = iX.bxS()) > 0.1f) {
            Vec3d vec3d;
            Vec3d vec3d6 = new Vec3d(rD.dlmvG.player.getX() + (double)mU.cpQ(-0.2f, 0.2f), rD.dlmvG.player.getY() + (double)mU.cpQ(0.0f, rD.dlmvG.player.getHeight()), rD.dlmvG.player.getZ() + (double)mU.cpQ(-0.2f, 0.2f));
            try {
                vec3d = bl3 ? new Vec3d(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0) : this.YU();
            }
            catch (MatchException matchException) {
                throw cR.YV(matchException);
            }
            Vec3d vec3d7 = vec3d;
            this.ImFtb.add(new mn(vec3d6, mp.qIoJG, vec3d7, this.lyHys.VB()));
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void YT(MatrixStack matrixStack, float f2, mG mG2, mo mo2) {
        long l2 = vBOIC ^ 0x7C0566EFB8D7L;
        iS[] iSArray = dh.afl();
        XSRvt.startBatch(mo2.clD(), this.wccSb);
        iS[] iSArray2 = iSArray;
        try {
            boolean bl2;
            ArrayList<mq> arrayList;
            block14: {
                arrayList = new ArrayList<mq>(this.ImFtb.size());
                for (mq mq2 : this.ImFtb) {
                    block15: {
                        block16: {
                            block17: {
                                bl2 = jJ.bIA(mq2.clL(f2));
                                if (iSArray2 != null) break block14;
                                if (iSArray2 != null) break block15;
                                break block17;
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                            }
                            try {
                                block18: {
                                    if (bl2) break block16;
                                    break block18;
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                }
                                if (iSArray2 == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        arrayList.add(mq2);
                    }
                    mq2.clq(matrixStack, f2, mG2);
                    if (iSArray2 == null) continue;
                }
                bl2 = this.aTbJe.WF();
            }
            if (!bl2) return;
            XSRvt.flush();
            XSRvt.swapTexture(ob.cBv(ZDept));
            for (mq mq2 : arrayList) {
                try {
                    mq2.clr(matrixStack, f2, mG2);
                    if (iSArray2 != null) return;
                    if (iSArray2 == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                    return;
                }
            }
        }
        finally {
            XSRvt.endBatch();
        }
    }

    private static CallSite YZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cR" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String YW(byte[] byArray) {
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

    /*
     * Exception decompiling
     */
    @hG
    public void YS(go.sX var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [1[TRYBLOCK]], but top level block is 2[SWITCH]
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

    @Override
    public void YO() {
        super.YO();
        this.ImFtb.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cR.class, "YY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

