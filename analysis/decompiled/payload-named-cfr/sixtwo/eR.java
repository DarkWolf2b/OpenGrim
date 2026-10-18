/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.ItemStack;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;

public class eR
extends gg {
    private final cD woKJb;
    private final cJ aBhOM;
    private final mT OahHn;
    private boolean qdiLm;
    private static long BatsP;
    private static long[] xMZKo;
    private static Integer[] PeQZj;
    private static Map KmTJA;
    private static long MYLev;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eR() {
        long l2 = BatsP ^ 0x414C6CF44B61L;
        super(gf.aZL((int)eR.aCM("e", (int)31128, (long)(0x5B10077A027FF976L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eR.aCM("e", (int)28314, (long)(0x4A2839BA7D42EE4FL ^ l2))];
        nArray[0] = (int)eR.aCM("e", (int)20040, (long)(0x7FC742D1E3A04EB0L ^ l2));
        nArray[1] = (int)eR.aCM("e", (int)2414, (long)(0x3C822E746DB28992L ^ l2));
        nArray[2] = (int)eR.aCM("e", (int)22518, (long)(0x251910FA44DCD724L ^ l2));
        nArray[3] = (int)eR.aCM("e", (int)31390, (long)(0x79A0185B1D3B7A44L ^ l2));
        nArray[4] = (int)eR.aCM("e", (int)22770, (long)(0x4A1180AD1078D816L ^ l2));
        nArray[5] = (int)eR.aCM("e", (int)31328, (long)(0x5409EB549D47FA9DL ^ l2));
        nArray[eR.aCM("e", (int)9168, (long)(0x9EDCCD24EB22300L ^ l2))] = (int)eR.aCM("e", (int)25814, (long)(0x2AC81E7855E5642CL ^ l2));
        nArray[eR.aCM("e", (int)21875, (long)(0x43951DC3D3BBD5ADL ^ l2))] = (int)eR.aCM("e", (int)9062, (long)(0x73BA1798ACF6A39DL ^ l2));
        nArray[eR.aCM("e", (int)18218, (long)(0x54980BE6914247DBL ^ l2))] = (int)eR.aCM("e", (int)10225, (long)(0x18E96D1F59DAA71EL ^ l2));
        nArray[eR.aCM("e", (int)12839, (long)(0x4F4A7DBF0D88B2CEL ^ l2))] = (int)eR.aCM("e", (int)31850, (long)(0x75970C18852FFC99L ^ l2));
        nArray[eR.aCM("e", (int)29077, (long)(0x5622B21D25B17162L ^ l2))] = (int)eR.aCM("e", (int)28901, (long)(0x6F9E0D6AF49F703CL ^ l2));
        nArray[eR.aCM("e", (int)26110, (long)(0x10B1E88C4009E52FL ^ l2))] = (int)eR.aCM("e", (int)30892, (long)(0x37CF5856205F844L ^ l2));
        nArray[eR.aCM("e", (int)21041, (long)(0x1A189251E5BF52DAL ^ l2))] = (int)eR.aCM("e", (int)6046, (long)(0x50E585838B8C1774L ^ l2));
        nArray[eR.aCM("e", (int)20496, (long)(0x3F9F3440B97350F1L ^ l2))] = (int)eR.aCM("e", (int)19042, (long)(0x52FD025ABE08CA9CL ^ l2));
        this.woKJb = new cD(this, mr.clS(nArray)).VO((int)eR.aCM("e", (int)1362, (long)(0x6FEB82B7A3428589L ^ l2)));
        int[] nArray2 = new int[eR.aCM("e", (int)10387, (long)(0x92DD8DCEA31A840L ^ l2))];
        nArray2[0] = (int)eR.aCM("e", (int)1010, (long)(0x3B453C185BD18310L ^ l2));
        nArray2[1] = (int)eR.aCM("e", (int)11218, (long)(0x5BA7BE433D5A2B2BL ^ l2));
        nArray2[2] = (int)eR.aCM("e", (int)31082, (long)(0x3B83BF138DF97995L ^ l2));
        nArray2[3] = (int)eR.aCM("e", (int)30859, (long)(0x67FE0CA284B4F87FL ^ l2));
        nArray2[4] = (int)eR.aCM("e", (int)25165, (long)(0x1367CF7721ADE2AAL ^ l2));
        nArray2[5] = (int)eR.aCM("e", (int)31559, (long)(0x5460E12D1E26FBABL ^ l2));
        nArray2[eR.aCM("e", (int)30781, (long)(0x6051F42E9357F8CBL ^ l2))] = (int)eR.aCM("e", (int)11218, (long)(0x5BA7BE433D5A2B2BL ^ l2));
        nArray2[eR.aCM("e", (int)21860, (long)(0xCE5CAD290E9D587L ^ l2))] = (int)eR.aCM("e", (int)25165, (long)(0x1367CF7721ADE2AAL ^ l2));
        nArray2[eR.aCM("e", (int)19620, (long)(0x1132D9F742E1CC54L ^ l2))] = (int)eR.aCM("e", (int)29614, (long)(0x38E5A925A7B734BL ^ l2));
        nArray2[eR.aCM("e", (int)18921, (long)(0x7B16601C1561493DL ^ l2))] = (int)eR.aCM("e", (int)26049, (long)(0x7C4224396909E533L ^ l2));
        nArray2[eR.aCM("e", (int)21825, (long)(0xE0E6BE09DB4D599L ^ l2))] = (int)eR.aCM("e", (int)22097, (long)(0x6998CD822E7D5687L ^ l2));
        nArray2[eR.aCM("e", (int)2282, (long)(0x65B6887B6595880AL ^ l2))] = (int)eR.aCM("e", (int)2635, (long)(0x2A61E541E0528AADL ^ l2));
        nArray2[eR.aCM("e", (int)14337, (long)(0x59D9F26085A038F4L ^ l2))] = (int)eR.aCM("e", (int)11218, (long)(0x5BA7BE433D5A2B2BL ^ l2));
        nArray2[eR.aCM("e", (int)26840, (long)(0xB4E754CE12D680FL ^ l2))] = (int)eR.aCM("e", (int)22058, (long)(0x4A3C5FB5AC4DD6C7L ^ l2));
        this.aBhOM = new cJ(this, mr.clS(nArray2)).WE(true);
        this.OahHn = mT.cpz();
    }

    static {
        Loader.doInit(eR.class);
        eR._1b1ad07ec9b5fb283d5bab13b747fd08();
    }

    private static native void _1b1ad07ec9b5fb283d5bab13b747fd08();

    @hG
    public native void aCG(gv var1);

    private static native int aCL(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite aCM(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aCH(gH.th var1);

    private static native /* synthetic */ boolean aCI(ItemStack var0);

    private static native MatchException aCJ(MatchException var0);

    private static native int aCK(int var0, long var1);

    @hG
    public native void aCF(gA var1);

    @Override
    public native void YO();
}

