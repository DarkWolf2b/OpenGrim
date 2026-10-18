/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class fo
extends gg {
    private final cJ xVFMx;
    private final cJ YlLcN;
    private final cJ XKOPz;
    private final cC bxtLO;
    private final cJ PzVPu;
    private final ct xhGdJ;
    private final cu ARssK;
    private final cu kKXsM;
    private final cJ RIfKs;
    private final cJ dhcOz;
    private final cJ PqwUu;
    private final ct zUESX;
    private final cu TCqvH;
    private final cu Icftg;
    private final cJ yGtxA;
    private final cJ tuLHs;
    private final cC QOrOm;
    private final cC tIfIS;
    private final cJ UYAQf;
    private final Set<PlayerEntity> OiqRK;
    private final Set<PlayerEntity> NErxJ;
    private final Set<PlayerEntity> dnuNp;
    private final Set<PlayerEntity> CDnOz;
    private final Set<PlayerEntity> eXPRj;
    private final Predicate<PlayerEntity> ehxwR;
    private final Predicate<PlayerEntity> SrySj;
    private final Predicate<PlayerEntity> JyUYt;
    private final Predicate<PlayerEntity> nkebT;
    private final Predicate<PlayerEntity> VFPqd;
    private final Predicate<PlayerEntity> EbGNQ;
    private final Predicate<PlayerEntity> JnCRB;
    private final Predicate<PlayerEntity> paoyc;
    private final Predicate<PlayerEntity> HwXDN;
    private static long yUbEH;
    private static String[] oxnex;
    private static String[] fdrKp;
    private static Map NySDv;
    private static long[] Mllpf;
    private static Integer[] ZfJvo;
    private static Map SJZlK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private native /* synthetic */ boolean aLu(PlayerEntity var1);

    private static native String aLz(int var0, long var1);

    private native void aLo();

    private native /* synthetic */ boolean aLs(PlayerEntity var1);

    @hG
    public native void aLl(gM var1);

    @hG
    public native void aLm(gL.tk var1);

    private static native int aLC(int var0, long var1);

    private native /* synthetic */ boolean aLq(PlayerEntity var1);

    private static native Object aLA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aLy(byte[] var0);

    private static native int aLD(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite aLB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ boolean aLt(PlayerEntity var1);

    private static native /* synthetic */ boolean aLv(PlayerEntity var0);

    @hG
    public native void aLn(gH.th var1);

    private static native MatchException aLx(MatchException var0);

    private static native CallSite aLE(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ boolean aLr(PlayerEntity var1);

    public boolean aLp(PlayerEntity playerEntity) {
        boolean bl2;
        block8: {
            block7: {
                int[] nArray;
                block6: {
                    long l2 = yUbEH ^ 0x6B473CE45B6FL;
                    nArray = fg.aIW();
                    try {
                        try {
                            bl2 = this.bag();
                            if (nArray != null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw fo.aLx(matchException);
                        }
                        bl2 = this.OiqRK.contains(playerEntity);
                    }
                    catch (MatchException matchException) {
                        throw fo.aLx(matchException);
                    }
                }
                try {
                    if (nArray != null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw fo.aLx(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static native /* synthetic */ boolean aLw(PlayerEntity var0);

    public fo() {
        long l2 = yUbEH ^ 0x26576C36D15EL;
        super(gf.aZL((int)12, false, gh.xwjCw));
        int[] nArray = new int[10];
        nArray[0] = (int)80;
        nArray[1] = (int)105;
        nArray[2] = (int)110;
        nArray[3] = (int)103;
        nArray[4] = (int)32;
        nArray[5] = (int)67;
        nArray[6] = (int)104;
        nArray[7] = (int)101;
        nArray[8] = (int)99;
        nArray[9] = (int)107;
        this.xVFMx = new cJ(this, mr.clS(nArray)).WE(true);
        int[] nArray2 = new int[10];
        nArray2[0] = (int)78;
        nArray2[1] = (int)97;
        nArray2[2] = (int)109;
        nArray2[3] = (int)101;
        nArray2[4] = (int)32;
        nArray2[5] = (int)67;
        nArray2[6] = (int)104;
        nArray2[7] = (int)101;
        nArray2[8] = (int)99;
        nArray2[9] = (int)107;
        this.YlLcN = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[19];
        nArray3[0] = (int)84;
        nArray3[1] = (int)105;
        nArray3[2] = (int)99;
        nArray3[3] = (int)107;
        nArray3[4] = (int)115;
        nArray3[5] = (int)32;
        nArray3[6] = (int)69;
        nArray3[7] = (int)120;
        nArray3[8] = (int)105;
        nArray3[9] = (int)115;
        nArray3[10] = (int)116;
        nArray3[11] = (int)101;
        nArray3[12] = (int)100;
        nArray3[13] = (int)32;
        nArray3[14] = (int)67;
        nArray3[15] = (int)104;
        nArray3[16] = (int)101;
        nArray3[17] = (int)99;
        nArray3[18] = (int)107;
        this.XKOPz = new cJ(this, mr.clS(nArray3)).WE(true);
        int[] nArray4 = new int[13];
        nArray4[0] = (int)84;
        nArray4[1] = (int)105;
        nArray4[2] = (int)99;
        nArray4[3] = (int)107;
        nArray4[4] = (int)115;
        nArray4[5] = (int)32;
        nArray4[6] = (int)69;
        nArray4[7] = (int)120;
        nArray4[8] = (int)105;
        nArray4[9] = (int)115;
        nArray4[10] = (int)116;
        nArray4[11] = (int)101;
        nArray4[12] = (int)100;
        this.bxtLO = new cC(this, mr.clS(nArray4)).Vy(1.0).Vw(0.0).Vx(120.0).VA(20.0).Vz((String)((Object)" ticks"));
        int[] nArray5 = new int[20];
        nArray5[0] = (int)84;
        nArray5[1] = (int)111;
        nArray5[2] = (int)117;
        nArray5[3] = (int)99;
        nArray5[4] = (int)104;
        nArray5[5] = (int)101;
        nArray5[6] = (int)100;
        nArray5[7] = (int)32;
        nArray5[8] = (int)71;
        nArray5[9] = (int)114;
        nArray5[10] = (int)111;
        nArray5[11] = (int)117;
        nArray5[12] = (int)110;
        nArray5[13] = (int)100;
        nArray5[14] = (int)32;
        nArray5[15] = (int)67;
        nArray5[16] = (int)104;
        nArray5[17] = (int)101;
        nArray5[18] = (int)99;
        nArray5[19] = (int)107;
        this.PzVPu = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[17];
        nArray6[0] = (int)71;
        nArray6[1] = (int)114;
        nArray6[2] = (int)111;
        nArray6[3] = (int)117;
        nArray6[4] = (int)110;
        nArray6[5] = (int)100;
        nArray6[6] = (int)32;
        nArray6[7] = (int)67;
        nArray6[8] = (int)104;
        nArray6[9] = (int)101;
        nArray6[10] = (int)99;
        nArray6[11] = (int)107;
        nArray6[12] = (int)32;
        nArray6[13] = (int)77;
        nArray6[14] = (int)111;
        nArray6[15] = (int)100;
        nArray6[16] = (int)101;
        this.xhGdJ = new ct(this, mr.clS(nArray6));
        int[] nArray7 = new int[9];
        nArray7[0] = (int)79;
        nArray7[1] = (int)110;
        nArray7[2] = (int)32;
        nArray7[3] = (int)71;
        nArray7[4] = (int)114;
        nArray7[5] = (int)111;
        nArray7[6] = (int)117;
        nArray7[7] = (int)110;
        nArray7[8] = (int)100;
        this.ARssK = new cu(this.xhGdJ, mr.clS(nArray7));
        int[] nArray8 = new int[10];
        nArray8[0] = (int)79;
        nArray8[1] = (int)102;
        nArray8[2] = (int)102;
        nArray8[3] = (int)32;
        nArray8[4] = (int)71;
        nArray8[5] = (int)114;
        nArray8[6] = (int)111;
        nArray8[7] = (int)117;
        nArray8[8] = (int)110;
        nArray8[9] = (int)100;
        this.kKXsM = new cu(this.xhGdJ, mr.clS(nArray8));
        int[] nArray9 = new int[11];
        nArray9[0] = (int)83;
        nArray9[1] = (int)108;
        nArray9[2] = (int)101;
        nArray9[3] = (int)101;
        nArray9[4] = (int)112;
        nArray9[5] = (int)32;
        nArray9[6] = (int)67;
        nArray9[7] = (int)104;
        nArray9[8] = (int)101;
        nArray9[9] = (int)99;
        nArray9[10] = (int)107;
        this.RIfKs = new cJ(this, mr.clS(nArray9)).WE(false);
        int[] nArray10 = new int[10];
        nArray10[0] = (int)68;
        nArray10[1] = (int)101;
        nArray10[2] = (int)97;
        nArray10[3] = (int)100;
        nArray10[4] = (int)32;
        nArray10[5] = (int)67;
        nArray10[6] = (int)104;
        nArray10[7] = (int)101;
        nArray10[8] = (int)99;
        nArray10[9] = (int)107;
        this.dhcOz = new cJ(this, mr.clS(nArray10)).WE(false);
        int[] nArray11 = new int[11];
        nArray11[0] = (int)83;
        nArray11[1] = (int)119;
        nArray11[2] = (int)105;
        nArray11[3] = (int)110;
        nArray11[4] = (int)103;
        nArray11[5] = (int)32;
        nArray11[6] = (int)67;
        nArray11[7] = (int)104;
        nArray11[8] = (int)101;
        nArray11[9] = (int)99;
        nArray11[10] = (int)107;
        this.PqwUu = new cJ(this, mr.clS(nArray11)).WE(false);
        int[] nArray12 = new int[10];
        nArray12[0] = (int)83;
        nArray12[1] = (int)119;
        nArray12[2] = (int)105;
        nArray12[3] = (int)110;
        nArray12[4] = (int)103;
        nArray12[5] = (int)32;
        nArray12[6] = (int)77;
        nArray12[7] = (int)111;
        nArray12[8] = (int)100;
        nArray12[9] = (int)101;
        this.zUESX = new ct(this, mr.clS(nArray12));
        int[] nArray13 = new int[9];
        nArray13[0] = (int)77;
        nArray13[1] = (int)97;
        nArray13[2] = (int)105;
        nArray13[3] = (int)110;
        nArray13[4] = (int)32;
        nArray13[5] = (int)72;
        nArray13[6] = (int)97;
        nArray13[7] = (int)110;
        nArray13[8] = (int)100;
        this.TCqvH = new cu(this.zUESX, mr.clS(nArray13));
        int[] nArray14 = new int[8];
        nArray14[0] = (int)79;
        nArray14[1] = (int)102;
        nArray14[2] = (int)102;
        nArray14[3] = (int)32;
        nArray14[4] = (int)72;
        nArray14[5] = (int)97;
        nArray14[6] = (int)110;
        nArray14[7] = (int)100;
        this.Icftg = new cu(this.zUESX, mr.clS(nArray14));
        int[] nArray15 = new int[14];
        nArray15[0] = (int)77;
        nArray15[1] = (int)111;
        nArray15[2] = (int)118;
        nArray15[3] = (int)101;
        nArray15[4] = (int)109;
        nArray15[5] = (int)101;
        nArray15[6] = (int)110;
        nArray15[7] = (int)116;
        nArray15[8] = (int)32;
        nArray15[9] = (int)67;
        nArray15[10] = (int)104;
        nArray15[11] = (int)101;
        nArray15[12] = (int)99;
        nArray15[13] = (int)107;
        this.yGtxA = new cJ(this, mr.clS(nArray15)).WE(false);
        int[] nArray16 = new int[11];
        nArray16[0] = (int)83;
        nArray16[1] = (int)111;
        nArray16[2] = (int)117;
        nArray16[3] = (int)110;
        nArray16[4] = (int)100;
        nArray16[5] = (int)32;
        nArray16[6] = (int)67;
        nArray16[7] = (int)104;
        nArray16[8] = (int)101;
        nArray16[9] = (int)99;
        nArray16[10] = (int)107;
        this.tuLHs = new cJ(this, mr.clS(nArray16)).WE(false);
        int[] nArray17 = new int[14];
        nArray17[0] = (int)83;
        nArray17[1] = (int)111;
        nArray17[2] = (int)117;
        nArray17[3] = (int)110;
        nArray17[4] = (int)100;
        nArray17[5] = (int)32;
        nArray17[6] = (int)68;
        nArray17[7] = (int)105;
        nArray17[8] = (int)115;
        nArray17[9] = (int)116;
        nArray17[10] = (int)97;
        nArray17[11] = (int)110;
        nArray17[12] = (int)99;
        nArray17[13] = (int)101;
        this.QOrOm = new cC(this, mr.clS(nArray17)).Vy(0.1).Vw(0.0).Vx(1.0).VA(1.0).Vz((String)((Object)" blocks"));
        int[] nArray18 = new int[14];
        nArray18[0] = (int)77;
        nArray18[1] = (int)105;
        nArray18[2] = (int)110;
        nArray18[3] = (int)105;
        nArray18[4] = (int)109;
        nArray18[5] = (int)97;
        nArray18[6] = (int)108;
        nArray18[7] = (int)32;
        nArray18[8] = (int)86;
        nArray18[9] = (int)111;
        nArray18[10] = (int)108;
        nArray18[11] = (int)117;
        nArray18[12] = (int)109;
        nArray18[13] = (int)101;
        this.tIfIS = new cC(this, mr.clS(nArray18)).Vy(0.1).Vw(0.0).Vx(1.0).VA(0.0);
        int[] nArray19 = new int[14];
        nArray19[0] = (int)86;
        nArray19[1] = (int)101;
        nArray19[2] = (int)108;
        nArray19[3] = (int)111;
        nArray19[4] = (int)99;
        nArray19[5] = (int)105;
        nArray19[6] = (int)116;
        nArray19[7] = (int)121;
        nArray19[8] = (int)32;
        nArray19[9] = (int)67;
        nArray19[10] = (int)104;
        nArray19[11] = (int)101;
        nArray19[12] = (int)99;
        nArray19[13] = (int)107;
        this.UYAQf = new cJ(this, mr.clS(nArray19)).WE(false);
        this.OiqRK = new HashSet<PlayerEntity>();
        this.NErxJ = new HashSet<PlayerEntity>();
        this.dnuNp = new HashSet<PlayerEntity>();
        this.CDnOz = new HashSet<PlayerEntity>();
        this.eXPRj = new HashSet<PlayerEntity>();
        this.ehxwR = fo::aLw;
        this.SrySj = fo::aLv;
        this.JyUYt = this::aLu;
        this.nkebT = this::aLt;
        this.VFPqd = this::aLs;
        this.EbGNQ = this::aLr;
        this.JnCRB = this::aLq;
        this.paoyc = LivingEntity::isSleeping;
        this.HwXDN = LivingEntity::isDead;
        this.bxtLO.Vf(this.XKOPz::WF);
        this.xhGdJ.Vf(this.PzVPu::WF);
        this.zUESX.Vf(this.PqwUu::WF);
        this.QOrOm.Vf(this.tuLHs::WF);
        this.tIfIS.Vf(this.tuLHs::WF);
        this.UYAQf.Vf(this.yGtxA::WF);
    }

    static {
        Loader.doInit(fo.class);
        fo._12b7f932cd1965f4d41129a157fe8203();
    }

    private static native void _12b7f932cd1965f4d41129a157fe8203();

    @Override
    public native void YO();
}

