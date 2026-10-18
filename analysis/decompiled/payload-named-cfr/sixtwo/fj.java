/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.math.Box
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.Box;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.ov;
import sixtwo.rD;

public class fj
extends gg {
    private final cJ NJTyK;
    private final cC FzLhH;
    private final cJ IMpen;
    private final cG WLOHi;
    private final cG OxgJE;
    private final cJ DRvrZ;
    private PlayerEntity zGyRN;
    private static long WnKso;
    private static String zVHFr;
    private static long[] PRoWq;
    private static Integer[] pUNav;
    private static Map iPtle;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fj() {
        long l2 = WnKso ^ 0x51614B11903EL;
        super(gf.aZL((int)fj.aJL("x", (int)27730, (long)(0x578192E5E4214043L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fj.aJL("x", (int)16581, (long)(0x529A03FC0A166CFFL ^ l2))];
        nArray[0] = (int)fj.aJL("x", (int)10746, (long)(0x387A7F905BB185ECL ^ l2));
        nArray[1] = (int)fj.aJL("x", (int)6068, (long)(0x33B853AF8366BBAEL ^ l2));
        nArray[2] = (int)fj.aJL("x", (int)16259, (long)(0x6E53FD86377613B6L ^ l2));
        nArray[3] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray[4] = (int)fj.aJL("x", (int)1022, (long)(0x7DE8C03F012AFD2L ^ l2));
        nArray[5] = (int)fj.aJL("x", (int)8541, (long)(0x7C869D7C2F4F8D4FL ^ l2));
        nArray[fj.aJL("x", (int)2014, (long)(0x1BEEE058B377ABF9L ^ l2))] = (int)fj.aJL("x", (int)9225, (long)(0x53E71BBBAE67882AL ^ l2));
        nArray[fj.aJL("x", (int)27063, (long)(0x3F046771229AC593L ^ l2))] = (int)fj.aJL("x", (int)31602, (long)(0x18A39A8322B4D752L ^ l2));
        nArray[fj.aJL("x", (int)4580, (long)(0x348D20DE297F3DFBL ^ l2))] = (int)fj.aJL("x", (int)29039, (long)(0x716B0C624C80DD77L ^ l2));
        nArray[fj.aJL("x", (int)23424, (long)(0x212626F6C5C27793L ^ l2))] = (int)fj.aJL("x", (int)20547, (long)(0x3C3814ACA96F7C5AL ^ l2));
        nArray[fj.aJL("x", (int)11788, (long)(0x348E621BA459021BL ^ l2))] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray[fj.aJL("x", (int)3593, (long)(0x51BD1A728673A227L ^ l2))] = (int)fj.aJL("x", (int)31221, (long)(0x2AB2CB70E2C8D5C2L ^ l2));
        this.NJTyK = new cJ(this, mr.clS(nArray)).WE(false);
        this.FzLhH = new cC(this, mr.clS(new int[]{(int)fj.aJL("x", (int)6310, (long)(0x10C095FDD992B4A8L ^ l2)), (int)fj.aJL("x", (int)30645, (long)(0xF3B275349A75B81L ^ l2)), (int)fj.aJL("x", (int)30344, (long)(0x67F9FEFA42FB5AA2L ^ l2))})).Vy(1.0).Vw(10.0).Vx(360.0).VA(45.0).Vz(zVHFr);
        int[] nArray2 = new int[fj.aJL("x", (int)29220, (long)(0x108FE43C0CD0DE12L ^ l2))];
        nArray2[0] = (int)fj.aJL("x", (int)6700, (long)(0x556A511597743614L ^ l2));
        nArray2[1] = (int)fj.aJL("x", (int)6356, (long)(0x6A54EC41E827B4D8L ^ l2));
        nArray2[2] = (int)fj.aJL("x", (int)8634, (long)(0x12AB05AAB1560D86L ^ l2));
        nArray2[3] = (int)fj.aJL("x", (int)22536, (long)(0x6818DA78220CF405L ^ l2));
        nArray2[4] = (int)fj.aJL("x", (int)6356, (long)(0x6A54EC41E827B4D8L ^ l2));
        nArray2[5] = (int)fj.aJL("x", (int)25497, (long)(0x3FC4B99BCBBD4F89L ^ l2));
        nArray2[fj.aJL("x", (int)5778, (long)(0x61C02D498C96BABBL ^ l2))] = (int)fj.aJL("x", (int)24175, (long)(0x51C166BBBBC7F271L ^ l2));
        nArray2[fj.aJL("x", (int)9151, (long)(0x28D5353EA39E0F8FL ^ l2))] = (int)fj.aJL("x", (int)19414, (long)(0x5BB39B2F1F8467DCL ^ l2));
        nArray2[fj.aJL("x", (int)12611, (long)(0x16359131951A9D62L ^ l2))] = (int)fj.aJL("x", (int)25497, (long)(0x3FC4B99BCBBD4F89L ^ l2));
        nArray2[fj.aJL("x", (int)3265, (long)(0x29CD04965FCFA0D5L ^ l2))] = (int)fj.aJL("x", (int)6356, (long)(0x6A54EC41E827B4D8L ^ l2));
        nArray2[fj.aJL("x", (int)10991, (long)(0x50D03A5B1F3586C7L ^ l2))] = (int)fj.aJL("x", (int)30751, (long)(0x29324BAA4226D426L ^ l2));
        nArray2[fj.aJL("x", (int)5790, (long)(0x9CF7736E3AA3AA1L ^ l2))] = (int)fj.aJL("x", (int)6659, (long)(0xDFACE484008B61FL ^ l2));
        nArray2[fj.aJL("x", (int)21551, (long)(0x32B5C67B0A5DF804L ^ l2))] = (int)fj.aJL("x", (int)15023, (long)(0x3E9B12BF232816BAL ^ l2));
        nArray2[fj.aJL("x", (int)26744, (long)(0x2BA292ACFF37C457L ^ l2))] = (int)fj.aJL("x", (int)22750, (long)(0x695B158C6732F4EFL ^ l2));
        nArray2[fj.aJL("x", (int)15716, (long)(0x423783FD54131156L ^ l2))] = (int)fj.aJL("x", (int)28158, (long)(0x70B37D0B99A841F1L ^ l2));
        nArray2[fj.aJL("x", (int)10591, (long)(0x1A68B12B1DCA8579L ^ l2))] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray2[fj.aJL("x", (int)7473, (long)(0x7B0BF8F222143113L ^ l2))] = (int)fj.aJL("x", (int)8634, (long)(0x12AB05AAB1560D86L ^ l2));
        this.IMpen = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[fj.aJL("x", (int)28073, (long)(0x4585CADC76D41A0L ^ l2))];
        nArray3[0] = (int)fj.aJL("x", (int)1538, (long)(0x1218BE4619AF2A3CL ^ l2));
        nArray3[1] = (int)fj.aJL("x", (int)25380, (long)(0x5EE4436783114F17L ^ l2));
        nArray3[2] = (int)fj.aJL("x", (int)2259, (long)(0x4CB5BCA4206424C8L ^ l2));
        nArray3[3] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray3[4] = (int)fj.aJL("x", (int)28158, (long)(0x70B37D0B99A841F1L ^ l2));
        nArray3[5] = (int)fj.aJL("x", (int)8634, (long)(0x12AB05AAB1560D86L ^ l2));
        nArray3[fj.aJL("x", (int)5778, (long)(0x61C02D498C96BABBL ^ l2))] = (int)fj.aJL("x", (int)6356, (long)(0x6A54EC41E827B4D8L ^ l2));
        nArray3[fj.aJL("x", (int)9151, (long)(0x28D5353EA39E0F8FL ^ l2))] = (int)fj.aJL("x", (int)24175, (long)(0x51C166BBBBC7F271L ^ l2));
        nArray3[fj.aJL("x", (int)12611, (long)(0x16359131951A9D62L ^ l2))] = (int)fj.aJL("x", (int)27747, (long)(0x5C6A4C4A0B07C058L ^ l2));
        nArray3[fj.aJL("x", (int)3265, (long)(0x29CD04965FCFA0D5L ^ l2))] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray3[fj.aJL("x", (int)10991, (long)(0x50D03A5B1F3586C7L ^ l2))] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray3[fj.aJL("x", (int)5790, (long)(0x9CF7736E3AA3AA1L ^ l2))] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray3[fj.aJL("x", (int)21551, (long)(0x32B5C67B0A5DF804L ^ l2))] = (int)fj.aJL("x", (int)25497, (long)(0x3FC4B99BCBBD4F89L ^ l2));
        this.WLOHi = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis()).Uh(false);
        int[] nArray4 = new int[fj.aJL("x", (int)10991, (long)(0x50D03A5B1F3586C7L ^ l2))];
        nArray4[0] = (int)fj.aJL("x", (int)23242, (long)(0x4F461FA70F3376C2L ^ l2));
        nArray4[1] = (int)fj.aJL("x", (int)28158, (long)(0x70B37D0B99A841F1L ^ l2));
        nArray4[2] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray4[3] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray4[4] = (int)fj.aJL("x", (int)24175, (long)(0x51C166BBBBC7F271L ^ l2));
        nArray4[5] = (int)fj.aJL("x", (int)5123, (long)(0x34432DABD172B826L ^ l2));
        nArray4[fj.aJL("x", (int)5778, (long)(0x61C02D498C96BABBL ^ l2))] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray4[fj.aJL("x", (int)9151, (long)(0x28D5353EA39E0F8FL ^ l2))] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray4[fj.aJL("x", (int)12611, (long)(0x16359131951A9D62L ^ l2))] = (int)fj.aJL("x", (int)20684, (long)(0x5F66B34DD4E0FCF1L ^ l2));
        nArray4[fj.aJL("x", (int)3265, (long)(0x29CD04965FCFA0D5L ^ l2))] = (int)fj.aJL("x", (int)25497, (long)(0x3FC4B99BCBBD4F89L ^ l2));
        this.OxgJE = new cG(this, mr.clS(nArray4)).Uf(rD.dlM().bjG().bis().cob(0.5f)).Uh(false);
        int[] nArray5 = new int[fj.aJL("x", (int)5778, (long)(0x61C02D498C96BABBL ^ l2))];
        nArray5[0] = (int)fj.aJL("x", (int)23242, (long)(0x4F461FA70F3376C2L ^ l2));
        nArray5[1] = (int)fj.aJL("x", (int)28158, (long)(0x70B37D0B99A841F1L ^ l2));
        nArray5[2] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray5[3] = (int)fj.aJL("x", (int)29315, (long)(0x54506949D8D2DEAEL ^ l2));
        nArray5[4] = (int)fj.aJL("x", (int)6356, (long)(0x6A54EC41E827B4D8L ^ l2));
        nArray5[5] = (int)fj.aJL("x", (int)30751, (long)(0x29324BAA4226D426L ^ l2));
        this.DRvrZ = new cJ(this, mr.clS(nArray5)).WE(false);
        this.WLOHi.Vf(this.IMpen::WF);
        this.OxgJE.Vf(this.IMpen::WF);
        this.DRvrZ.Vf(this.IMpen::WF);
    }

    static {
        Loader.doInit(fj.class);
        fj._c3e72fdca4956d5234b74153e63ce371();
    }

    private static native void _c3e72fdca4956d5234b74153e63ce371();

    private static native CallSite aJL(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aJz(go.sX var1);

    private static native /* synthetic */ double aJE(AbstractClientPlayerEntity var0);

    @hG
    public native void aJy(gH.th var1);

    private native double aJA(ItemStack var1);

    private native double aJB(ItemStack var1, double var2, double var4);

    private native Box aJC(ItemStack var1, PlayerEntity var2, ov var3);

    private static native /* synthetic */ boolean aJG(AbstractClientPlayerEntity var0);

    private static native MatchException aJH(MatchException var0);

    private static native String aJI(byte[] var0);

    private native /* synthetic */ boolean aJF(AbstractClientPlayerEntity var1);

    private static native int aJK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ Boolean aJD(ClientPlayerEntity var0);

    private static native int aJJ(int var0, long var1);
}

