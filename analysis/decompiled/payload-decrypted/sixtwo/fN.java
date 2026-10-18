/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.player.SkinTextures
 *  net.minecraft.util.AssetInfo$TextureAsset
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.entity.player.SkinTextures;
import net.minecraft.util.AssetInfo;
import net.minecraft.util.Identifier;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.cy;
import sixtwo.fN$sU;
import sixtwo.fX;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.iS;
import sixtwo.mr;

public class fN
extends gg {
    private final cv TclUV;
    private final cw bHviN;
    private final cw pWupw;
    private final ct xuNWw;
    private final cu DPswU;
    private final cu YESwS;
    private final ct NYWkc;
    private final ct BMcCi;
    private final ct iWgvu;
    private final cu lprwR;
    private final cu smvRE;
    private final cy TCPvX;
    private final cy mzdNu;
    private volatile AssetInfo.TextureAsset SseFa;
    private volatile String WHhIl;
    private volatile String jUZJy;
    private volatile AssetInfo.TextureAsset zvkmn;
    private volatile String mRecC;
    private volatile String HNAeJ;
    static List<fN$sU> VJZzZ;
    private static long slYDs;
    private static String[] fkfoW;
    private static String[] kICrL;
    private static Map rWjLP;
    private static long[] gHArN;
    private static Integer[] OrJyf;
    private static Map kSOIw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fN() {
        block3: {
            long l2 = slYDs ^ 0x15CD18E3F068L;
            super(gf.aZL((int)142, false, gh.KfAlY));
            int[] nArray = new int[7];
            nArray[0] = (int)80;
            nArray[1] = (int)114;
            nArray[2] = (int)111;
            nArray[3] = (int)116;
            nArray[4] = (int)101;
            nArray[5] = (int)99;
            nArray[6] = (int)116;
            this.TclUV = new cv(this, mr.clS(nArray));
            int[] nArray2 = new int[8];
            nArray2[0] = (int)79;
            nArray2[1] = (int)119;
            nArray2[2] = (int)110;
            nArray2[3] = (int)32;
            nArray2[4] = (int)83;
            nArray2[5] = (int)107;
            nArray2[6] = (int)105;
            nArray2[7] = (int)110;
            this.bHviN = new cw(this.TclUV, mr.clS(nArray2)).Tz();
            int[] nArray3 = new int[13];
            nArray3[0] = (int)79;
            nArray3[1] = (int)116;
            nArray3[2] = (int)104;
            nArray3[3] = (int)101;
            nArray3[4] = (int)114;
            nArray3[5] = (int)32;
            nArray3[6] = (int)80;
            nArray3[7] = (int)108;
            nArray3[8] = (int)97;
            nArray3[9] = (int)121;
            nArray3[10] = (int)101;
            nArray3[11] = (int)114;
            nArray3[12] = (int)115;
            this.pWupw = new cw(this.TclUV, mr.clS(nArray3)).Tz();
            int[] nArray4 = new int[15];
            nArray4[0] = (int)79;
            nArray4[1] = (int)119;
            nArray4[2] = (int)110;
            nArray4[3] = (int)32;
            nArray4[4] = (int)83;
            nArray4[5] = (int)107;
            nArray4[6] = (int)105;
            nArray4[7] = (int)110;
            nArray4[8] = (int)32;
            nArray4[9] = (int)83;
            nArray4[10] = (int)111;
            nArray4[11] = (int)117;
            nArray4[12] = (int)114;
            nArray4[13] = (int)99;
            nArray4[14] = (int)101;
            this.xuNWw = new ct(this, mr.clS(nArray4));
            int[] nArray5 = new int[8];
            nArray5[0] = (int)68;
            nArray5[1] = (int)101;
            nArray5[2] = (int)102;
            nArray5[3] = (int)97;
            nArray5[4] = (int)117;
            nArray5[5] = (int)108;
            nArray5[6] = (int)116;
            nArray5[7] = (int)115;
            this.DPswU = new cu(this.xuNWw, mr.clS(nArray5)).SY();
            int[] nArray6 = new int[6];
            nArray6[0] = (int)67;
            nArray6[1] = (int)117;
            nArray6[2] = (int)115;
            nArray6[3] = (int)116;
            nArray6[4] = (int)111;
            nArray6[5] = (int)109;
            this.YESwS = new cu(this.xuNWw, mr.clS(nArray6));
            int[] nArray7 = new int[16];
            nArray7[0] = (int)79;
            nArray7[1] = (int)119;
            nArray7[2] = (int)110;
            nArray7[3] = (int)32;
            nArray7[4] = (int)68;
            nArray7[5] = (int)101;
            nArray7[6] = (int)102;
            nArray7[7] = (int)97;
            nArray7[8] = (int)117;
            nArray7[9] = (int)108;
            nArray7[10] = (int)116;
            nArray7[11] = (int)32;
            nArray7[12] = (int)83;
            nArray7[13] = (int)107;
            nArray7[14] = (int)105;
            nArray7[15] = (int)110;
            this.NYWkc = new ct(this, mr.clS(nArray7));
            int[] nArray8 = new int[18];
            nArray8[0] = (int)79;
            nArray8[1] = (int)116;
            nArray8[2] = (int)104;
            nArray8[3] = (int)101;
            nArray8[4] = (int)114;
            nArray8[5] = (int)32;
            nArray8[6] = (int)80;
            nArray8[7] = (int)108;
            nArray8[8] = (int)97;
            nArray8[9] = (int)121;
            nArray8[10] = (int)101;
            nArray8[11] = (int)114;
            nArray8[12] = (int)115;
            nArray8[13] = (int)32;
            nArray8[14] = (int)83;
            nArray8[15] = (int)107;
            nArray8[16] = (int)105;
            nArray8[17] = (int)110;
            this.BMcCi = new ct(this, mr.clS(nArray8));
            int[] nArray9 = new int[17];
            nArray9[0] = (int)79;
            nArray9[1] = (int)116;
            nArray9[2] = (int)104;
            nArray9[3] = (int)101;
            nArray9[4] = (int)114;
            nArray9[5] = (int)32;
            nArray9[6] = (int)83;
            nArray9[7] = (int)107;
            nArray9[8] = (int)105;
            nArray9[9] = (int)110;
            nArray9[10] = (int)32;
            nArray9[11] = (int)83;
            nArray9[12] = (int)111;
            nArray9[13] = (int)117;
            nArray9[14] = (int)114;
            nArray9[15] = (int)99;
            nArray9[16] = (int)101;
            this.iWgvu = new ct(this, mr.clS(nArray9));
            int[] nArray10 = new int[8];
            nArray10[0] = (int)68;
            nArray10[1] = (int)101;
            nArray10[2] = (int)102;
            nArray10[3] = (int)97;
            nArray10[4] = (int)117;
            nArray10[5] = (int)108;
            nArray10[6] = (int)116;
            nArray10[7] = (int)115;
            this.lprwR = new cu(this.iWgvu, mr.clS(nArray10)).SY();
            int[] nArray11 = new int[6];
            nArray11[0] = (int)67;
            nArray11[1] = (int)117;
            nArray11[2] = (int)115;
            nArray11[3] = (int)116;
            nArray11[4] = (int)111;
            nArray11[5] = (int)109;
            this.smvRE = new cu(this.iWgvu, mr.clS(nArray11));
            int[] nArray12 = new int[11];
            nArray12[0] = (int)84;
            nArray12[1] = (int)101;
            nArray12[2] = (int)120;
            nArray12[3] = (int)116;
            nArray12[4] = (int)117;
            nArray12[5] = (int)114;
            nArray12[6] = (int)101;
            nArray12[7] = (int)32;
            nArray12[8] = (int)85;
            nArray12[9] = (int)82;
            nArray12[10] = (int)76;
            this.TCPvX = new cy(this, mr.clS(nArray12)).Un((int)2048).Up("");
            int[] nArray13 = new int[17];
            nArray13[0] = (int)79;
            nArray13[1] = (int)116;
            nArray13[2] = (int)104;
            nArray13[3] = (int)101;
            nArray13[4] = (int)114;
            nArray13[5] = (int)32;
            nArray13[6] = (int)84;
            nArray13[7] = (int)101;
            nArray13[8] = (int)120;
            nArray13[9] = (int)116;
            nArray13[10] = (int)117;
            nArray13[11] = (int)114;
            nArray13[12] = (int)101;
            nArray13[13] = (int)32;
            nArray13[14] = (int)85;
            nArray13[15] = (int)82;
            nArray13[16] = (int)76;
            this.mzdNu = new cy(this, mr.clS(nArray13)).Un((int)2048).Up("");
            this.WHhIl = "";
            this.jUZJy = "";
            this.mRecC = "";
            this.HNAeJ = "";
            int[] nArray14 = fX.aYu();
            for (fN$sU fN$sU : VJZzZ) {
                try {
                    new cu(this.NYWkc, mr.clS(fN$sU.name()));
                    new cu(this.BMcCi, mr.clS(fN$sU.name()));
                    if (nArray14 == null) break block3;
                    if (nArray14 != null) continue;
                }
                catch (MatchException matchException) {
                    throw fN.aWb(matchException);
                }
                iS.bwK("cuBkD");
                break;
            }
            this.xuNWw.Vf(this.bHviN::TC);
            this.NYWkc.Vf(this::aWa);
            this.iWgvu.Vf(this.pWupw::TC);
            this.BMcCi.Vf(this::aVZ);
            this.TCPvX.Vf(this::aVY);
            this.mzdNu.Vf(this::aVX);
        }
    }

    static {
        Loader.doInit(fN.class);
        fN._3ed70766cc926e506f6b5ec3780a9f8d();
    }

    private native /* synthetic */ Boolean aVY();

    private native /* synthetic */ Boolean aVX();

    private native fN$sU aVy(ct var1);

    private native AssetInfo.TextureAsset aVz();

    private native AssetInfo.TextureAsset aVA();

    private native SkinTextures aVx(SkinTextures var1, AbstractClientPlayerEntity var2);

    private static native CallSite aWi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException aWb(MatchException var0);

    private native /* synthetic */ Boolean aWa();

    private native /* synthetic */ Boolean aVZ();

    public native cu aVM();

    public native cv aVC();

    private static native Object aWe(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native AssetInfo.TextureAsset aVS();

    private static native String aWc(byte[] var0);

    public native cy aVN();

    public native cu aVG();

    public native cu aVH();

    public native ct aVI();

    public native cw aVD();

    public native String aVR();

    public native cy aVO();

    private native String aVB(String var1);

    private native /* synthetic */ void aVV(String var1, Identifier var2);

    public native ct aVF();

    public native String aVT();

    public native AssetInfo.TextureAsset aVP();

    private static native CallSite aWf(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native String aVQ();

    private static native int aWh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cu aVL();

    private static native String aWd(int var0, long var1);

    private native /* synthetic */ void aVW(String var1, Identifier var2);

    public native String aVU();

    public native ct aVK();

    public native cw aVE();

    private static native int aWg(int var0, long var1);

    public native ct aVJ();

    public native SkinTextures aVw(AbstractClientPlayerEntity var1, SkinTextures var2);

    private static native void _3ed70766cc926e506f6b5ec3780a9f8d();
}

