/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Hand
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.util.Hand;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.lA;
import sixtwo.mr;
import sixtwo.oS;
import sixtwo.oz;

public class ei
extends gg
implements lA {
    private final ct cNIJT;
    private final cu kVyvV;
    private final cu mjyti;
    private final cu bjFxu;
    private final ct BhfJC;
    private final cu JluvD;
    private final cu RrLuA;
    private final cJ VLSja;
    private static long Hbvpn;
    private static long[] rzkkP;
    private static Integer[] gnKgk;
    private static Map QqXlu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ei() {
        long l2 = Hbvpn ^ 0xC2D57C438EBL;
        super(gf.aZL((int)ei.asO("b", (int)30290, (long)(0x4EE7BAEE780A07B6L ^ l2)), false, gh.xgeEn));
        int[] nArray = new int[ei.asO("b", (int)21881, (long)(0x208245B642EB24CCL ^ l2))];
        nArray[0] = (int)ei.asO("b", (int)27209, (long)(0x7C22B7F14A49B93L ^ l2));
        nArray[1] = (int)ei.asO("b", (int)23093, (long)(0x190615FB144FABDCL ^ l2));
        nArray[2] = (int)ei.asO("b", (int)8875, (long)(0x3390CEBAB60C5370L ^ l2));
        nArray[3] = (int)ei.asO("b", (int)16582, (long)(0x2919E7E7476FB130L ^ l2));
        nArray[4] = (int)ei.asO("b", (int)20873, (long)(0x3BEF4109555AA05FL ^ l2));
        nArray[5] = (int)ei.asO("b", (int)16492, (long)(0x4E9415C8B9D231A5L ^ l2));
        nArray[ei.asO("b", (int)8350, (long)(0x35E5668457625173L ^ l2))] = (int)ei.asO("b", (int)6676, (long)(0x1226FC4670C06BC7L ^ l2));
        nArray[ei.asO("b", (int)18355, (long)(0xB1740596220367CL ^ l2))] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray[ei.asO("b", (int)25479, (long)(0x63104065F7BC1258L ^ l2))] = (int)ei.asO("b", (int)20837, (long)(0x594AD69DF20420BDL ^ l2));
        nArray[ei.asO("b", (int)28987, (long)(0x24E6E8335C8100F6L ^ l2))] = (int)ei.asO("b", (int)27452, (long)(0x8C8A6C2A8C09AC8L ^ l2));
        nArray[ei.asO("b", (int)30687, (long)(0x62CDF6674B9B0627L ^ l2))] = (int)ei.asO("b", (int)5410, (long)(0x5AC5EA62BEB1E4E6L ^ l2));
        this.cNIJT = new ct(this, mr.clS(nArray));
        int[] nArray2 = new int[ei.asO("b", (int)11813, (long)(0x7F217B9E3D095FE6L ^ l2))];
        nArray2[0] = (int)ei.asO("b", (int)24631, (long)(0x55640609838211FBL ^ l2));
        nArray2[1] = (int)ei.asO("b", (int)18549, (long)(0x563A86355466B997L ^ l2));
        nArray2[2] = (int)ei.asO("b", (int)8490, (long)(0x170676807D3C50C9L ^ l2));
        nArray2[3] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray2[4] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray2[5] = (int)ei.asO("b", (int)5201, (long)(0x134F5B3E5D3965BEL ^ l2));
        nArray2[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))] = (int)ei.asO("b", (int)18549, (long)(0x563A86355466B997L ^ l2));
        nArray2[ei.asO("b", (int)14613, (long)(0x71E6801D854B48D4L ^ l2))] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray2[ei.asO("b", (int)28235, (long)(0x68793DF30CA1FBCL ^ l2))] = (int)ei.asO("b", (int)20519, (long)(0x175296A4540521CBL ^ l2));
        this.kVyvV = new cu(this.cNIJT, mr.clS(nArray2));
        int[] nArray3 = new int[ei.asO("b", (int)28235, (long)(0x68793DF30CA1FBCL ^ l2))];
        nArray3[0] = (int)ei.asO("b", (int)15751, (long)(0x3FBA7B9E528F4C53L ^ l2));
        nArray3[1] = (int)ei.asO("b", (int)24442, (long)(0x6F878E7342342E9DL ^ l2));
        nArray3[2] = (int)ei.asO("b", (int)18020, (long)(0x2C6F79BC9620378EL ^ l2));
        nArray3[3] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray3[4] = (int)ei.asO("b", (int)5201, (long)(0x134F5B3E5D3965BEL ^ l2));
        nArray3[5] = (int)ei.asO("b", (int)18549, (long)(0x563A86355466B997L ^ l2));
        nArray3[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray3[ei.asO("b", (int)14613, (long)(0x71E6801D854B48D4L ^ l2))] = (int)ei.asO("b", (int)20519, (long)(0x175296A4540521CBL ^ l2));
        this.mjyti = new cu(this.cNIJT, mr.clS(nArray3));
        this.bjFxu = new cu(this.cNIJT, mr.clS(new int[]{(int)ei.asO("b", (int)26954, (long)(0x4034B7D360E398B7L ^ l2)), (int)ei.asO("b", (int)16156, (long)(0x3337967455DBCED4L ^ l2)), (int)ei.asO("b", (int)31572, (long)(0x75B894F55F3D8AA1L ^ l2)), (int)ei.asO("b", (int)18886, (long)(0x6FBB91B2261F3808L ^ l2))}));
        int[] nArray4 = new int[ei.asO("b", (int)8107, (long)(0x171CF9F21558EE54L ^ l2))];
        nArray4[0] = (int)ei.asO("b", (int)5201, (long)(0x134F5B3E5D3965BEL ^ l2));
        nArray4[1] = (int)ei.asO("b", (int)18549, (long)(0x563A86355466B997L ^ l2));
        nArray4[2] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray4[3] = (int)ei.asO("b", (int)20519, (long)(0x175296A4540521CBL ^ l2));
        nArray4[4] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray4[5] = (int)ei.asO("b", (int)28149, (long)(0x5921C76C542F1C35L ^ l2));
        nArray4[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))] = (int)ei.asO("b", (int)7239, (long)(0x8D71649BB21ED9AL ^ l2));
        nArray4[ei.asO("b", (int)14613, (long)(0x71E6801D854B48D4L ^ l2))] = (int)ei.asO("b", (int)22431, (long)(0x7328C15DB06EA661L ^ l2));
        nArray4[ei.asO("b", (int)28235, (long)(0x68793DF30CA1FBCL ^ l2))] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray4[ei.asO("b", (int)11813, (long)(0x7F217B9E3D095FE6L ^ l2))] = (int)ei.asO("b", (int)3495, (long)(0x32CD09520DFC61L ^ l2));
        this.BhfJC = new ct(this, mr.clS(nArray4));
        int[] nArray5 = new int[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))];
        nArray5[0] = (int)ei.asO("b", (int)2056, (long)(0x1DAEEB205D6DF9CAL ^ l2));
        nArray5[1] = (int)ei.asO("b", (int)10610, (long)(0x703D2F7EADFE58B5L ^ l2));
        nArray5[2] = (int)ei.asO("b", (int)22431, (long)(0x7328C15DB06EA661L ^ l2));
        nArray5[3] = (int)ei.asO("b", (int)26881, (long)(0x644156C50D918CAL ^ l2));
        nArray5[4] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray5[5] = (int)ei.asO("b", (int)32212, (long)(0x356923F533318C25L ^ l2));
        this.JluvD = new cu(this.BhfJC, mr.clS(nArray5));
        int[] nArray6 = new int[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))];
        nArray6[0] = (int)ei.asO("b", (int)16078, (long)(0x7C99C274C780CF12L ^ l2));
        nArray6[1] = (int)ei.asO("b", (int)26881, (long)(0x644156C50D918CAL ^ l2));
        nArray6[2] = (int)ei.asO("b", (int)9050, (long)(0x5A285653CD29D284L ^ l2));
        nArray6[3] = (int)ei.asO("b", (int)26221, (long)(0x844E75261601791L ^ l2));
        nArray6[4] = (int)ei.asO("b", (int)26881, (long)(0x644156C50D918CAL ^ l2));
        nArray6[5] = (int)ei.asO("b", (int)4900, (long)(0x9635B8FBCAE2E1L ^ l2));
        this.RrLuA = new cu(this.BhfJC, mr.clS(nArray6));
        int[] nArray7 = new int[ei.asO("b", (int)364, (long)(0x73236C35829709FL ^ l2))];
        nArray7[0] = (int)ei.asO("b", (int)29960, (long)(0x2BD505D15B2284E3L ^ l2));
        nArray7[1] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray7[2] = (int)ei.asO("b", (int)12202, (long)(0x1DEA012B3295DE53L ^ l2));
        nArray7[3] = (int)ei.asO("b", (int)10577, (long)(0x2331B8438A958B4L ^ l2));
        nArray7[4] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray7[5] = (int)ei.asO("b", (int)30235, (long)(0x3BC7F363799707E9L ^ l2));
        nArray7[ei.asO("b", (int)1924, (long)(0xF4E7A71F586F65DL ^ l2))] = (int)ei.asO("b", (int)12870, (long)(0x1FCB9DBD6B15C397L ^ l2));
        nArray7[ei.asO("b", (int)14613, (long)(0x71E6801D854B48D4L ^ l2))] = (int)ei.asO("b", (int)26881, (long)(0x644156C50D918CAL ^ l2));
        nArray7[ei.asO("b", (int)28235, (long)(0x68793DF30CA1FBCL ^ l2))] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray7[ei.asO("b", (int)11813, (long)(0x7F217B9E3D095FE6L ^ l2))] = (int)ei.asO("b", (int)14977, (long)(0x5A10654F0BEF4B56L ^ l2));
        nArray7[ei.asO("b", (int)8107, (long)(0x171CF9F21558EE54L ^ l2))] = (int)ei.asO("b", (int)13946, (long)(0x395DBEC52DC0C794L ^ l2));
        nArray7[ei.asO("b", (int)11106, (long)(0x5DABE089AEFBDAD6L ^ l2))] = (int)ei.asO("b", (int)4900, (long)(0x9635B8FBCAE2E1L ^ l2));
        nArray7[ei.asO("b", (int)9694, (long)(0x1DF2685231B7D424L ^ l2))] = (int)ei.asO("b", (int)16156, (long)(0x3337967455DBCED4L ^ l2));
        nArray7[ei.asO("b", (int)8925, (long)(0x2B1DBD515E6D317L ^ l2))] = (int)ei.asO("b", (int)23903, (long)(0x3350726166BCAC8FL ^ l2));
        nArray7[ei.asO("b", (int)2304, (long)(0x453BDBF28D58F8E8L ^ l2))] = (int)ei.asO("b", (int)9907, (long)(0x1847AF932FFD755L ^ l2));
        nArray7[ei.asO("b", (int)22845, (long)(0x6C9D07BA10B028EFL ^ l2))] = (int)ei.asO("b", (int)12870, (long)(0x1FCB9DBD6B15C397L ^ l2));
        nArray7[ei.asO("b", (int)19703, (long)(0x61B290B342263D22L ^ l2))] = (int)ei.asO("b", (int)22431, (long)(0x7328C15DB06EA661L ^ l2));
        nArray7[ei.asO("b", (int)4209, (long)(0x2529356C25A56181L ^ l2))] = (int)ei.asO("b", (int)17041, (long)(0x2EF300288A133371L ^ l2));
        nArray7[ei.asO("b", (int)10110, (long)(0x7855034BCCED569FL ^ l2))] = (int)ei.asO("b", (int)26576, (long)(0x6A49C44DDBE2962BL ^ l2));
        this.VLSja = new cJ(this, mr.clS(nArray7)).WE(false);
    }

    static {
        Loader.doInit(ei.class);
        ei._f25485ee343fb698e3bb919784879d84();
    }

    private static native void _f25485ee343fb698e3bb919784879d84();

    @hG
    public native void asE(gv var1);

    @hG
    public native void asF(gH.th var1);

    private native Hand asH();

    private native boolean asG();

    private native boolean asI(Hand var1);

    private static native CallSite asO(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int asM(int var0, long var1);

    private static native int asN(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native oz asJ();

    private static native MatchException asL(MatchException var0);

    private native oS asK();
}

