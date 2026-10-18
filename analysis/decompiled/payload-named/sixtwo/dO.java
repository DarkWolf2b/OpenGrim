/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.AbstractContainerScreenAccessor
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.entity.player.PlayerInventory
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Arrays;
import java.util.Map;
import mixin.accessors.AbstractContainerScreenAccessor;
import native.Loader;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.ItemStack;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gq;
import sixtwo.gz;
import sixtwo.hG;
import sixtwo.jk;
import sixtwo.kW;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mr;

public class dO
extends gg {
    private final cD ERHWx;
    private final cD LjWLs;
    private final ct RPJPb;
    private final cu NTcLD;
    private final cu byQPn;
    private final cJ OMKFJ;
    private final cC FvAmO;
    private final kW pWzHb;
    private final ItemStack[] vASOe;
    private final mT CISmK;
    private boolean lIFPa;
    private int fPfGt;
    private static long OMbpn;
    private static String[] mJBQG;
    private static String[] cMhtt;
    private static Map xuJKz;
    private static long[] VTuxn;
    private static Integer[] hqIKw;
    private static Map QPYhl;
    private static long BwwFy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _de547dd9cfcd97b143f45a05b6725199();

    public dO() {
        long l2 = OMbpn ^ 0xE5149F8138BL;
        super(gf.aZL((int)dO.aoQ("o", (int)20524, (long)(0x70780519158E3DF2L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dO.aoQ("o", (int)29854, (long)(0x3DA264BA7F139944L ^ l2))];
        nArray[0] = (int)dO.aoQ("o", (int)10862, (long)(0x14C0D10CD2664784L ^ l2));
        nArray[1] = (int)dO.aoQ("o", (int)14118, (long)(0x4813DC46F4BDDAF6L ^ l2));
        nArray[2] = (int)dO.aoQ("o", (int)28469, (long)(0xC1960D9260482C7L ^ l2));
        nArray[3] = (int)dO.aoQ("o", (int)14345, (long)(0x5C6A82899C10D5EFL ^ l2));
        nArray[4] = (int)dO.aoQ("o", (int)21548, (long)(0x5B8C27D1863EB9DCL ^ l2));
        nArray[5] = (int)dO.aoQ("o", (int)17557, (long)(0xE2242968567A958L ^ l2));
        nArray[dO.aoQ("o", (int)16199, (long)(0xBA2BB56215F5288L ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray[dO.aoQ("o", (int)18661, (long)(0x75ECC0BE6CEF2532L ^ l2))] = (int)dO.aoQ("o", (int)13881, (long)(0x7CF001266CD55BD0L ^ l2));
        this.ERHWx = new cD(this, mr.clS(nArray)).VO((int)dO.aoQ("o", (int)13004, (long)(0x4A6381F85C395F22L ^ l2)));
        int[] nArray2 = new int[dO.aoQ("o", (int)28925, (long)(0x1CA7BEC81DAF9D31L ^ l2))];
        nArray2[0] = (int)dO.aoQ("o", (int)10120, (long)(0xA8EBF6E9441CA6DL ^ l2));
        nArray2[1] = (int)dO.aoQ("o", (int)32290, (long)(0x335E5963FCC393E4L ^ l2));
        nArray2[2] = (int)dO.aoQ("o", (int)6402, (long)(0x1D614E205C9674F6L ^ l2));
        nArray2[3] = (int)dO.aoQ("o", (int)22968, (long)(0x78827FCFA8BB3476L ^ l2));
        nArray2[4] = (int)dO.aoQ("o", (int)23047, (long)(0x496A2BDEEC8FB7F9L ^ l2));
        nArray2[5] = (int)dO.aoQ("o", (int)6784, (long)(0x26CB40EE1C117752L ^ l2));
        nArray2[dO.aoQ("o", (int)7226, (long)(0x14E8AF767DCBF1D9L ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray2[dO.aoQ("o", (int)26440, (long)(0x7E81230E0DD0A80L ^ l2))] = (int)dO.aoQ("o", (int)13904, (long)(0xBB7146C55955BA3L ^ l2));
        this.LjWLs = new cD(this, mr.clS(nArray2)).VO((int)dO.aoQ("o", (int)6077, (long)(0x2C12F1B959CE7A47L ^ l2)));
        this.RPJPb = new ct(this, mr.clS(new int[]{(int)dO.aoQ("o", (int)8543, (long)(0x722A447BCFBF4CA0L ^ l2)), (int)dO.aoQ("o", (int)12840, (long)(0x28FBF4EE9567DFF4L ^ l2)), (int)dO.aoQ("o", (int)7004, (long)(0x2D9B851F5D84F6A9L ^ l2)), (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2))}));
        int[] nArray3 = new int[dO.aoQ("o", (int)7226, (long)(0x14E8AF767DCBF1D9L ^ l2))];
        nArray3[0] = (int)dO.aoQ("o", (int)2630, (long)(0x34CD4037E11167BFL ^ l2));
        nArray3[1] = (int)dO.aoQ("o", (int)6402, (long)(0x1D614E205C9674F6L ^ l2));
        nArray3[2] = (int)dO.aoQ("o", (int)260, (long)(0x2FD769AB95D06CEBL ^ l2));
        nArray3[3] = (int)dO.aoQ("o", (int)18882, (long)(0xBC51E305232408L ^ l2));
        nArray3[4] = (int)dO.aoQ("o", (int)6402, (long)(0x1D614E205C9674F6L ^ l2));
        nArray3[5] = (int)dO.aoQ("o", (int)18039, (long)(0x5B4D0A063F2F2B81L ^ l2));
        this.NTcLD = new cu(this.RPJPb, mr.clS(nArray3));
        this.byQPn = new cu(this.RPJPb, mr.clS(new int[]{(int)dO.aoQ("o", (int)22047, (long)(0x1EC1CDBB9E4B3BCCL ^ l2)), (int)dO.aoQ("o", (int)9431, (long)(0x246AB785D4EEC91CL ^ l2)), (int)dO.aoQ("o", (int)12818, (long)(0x16122D6043205FEFL ^ l2)), (int)dO.aoQ("o", (int)12840, (long)(0x28FBF4EE9567DFF4L ^ l2))}));
        int[] nArray4 = new int[dO.aoQ("o", (int)30782, (long)(0x4F27AA1424F115D5L ^ l2))];
        nArray4[0] = (int)dO.aoQ("o", (int)11281, (long)(0x3C315A12B2AC41F1L ^ l2));
        nArray4[1] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray4[2] = (int)dO.aoQ("o", (int)3885, (long)(0x5EBDC1840EB6E2E4L ^ l2));
        nArray4[3] = (int)dO.aoQ("o", (int)4058, (long)(0x765D82B9DA0D6222L ^ l2));
        nArray4[4] = (int)dO.aoQ("o", (int)12840, (long)(0x28FBF4EE9567DFF4L ^ l2));
        nArray4[5] = (int)dO.aoQ("o", (int)26744, (long)(0x122595AC282C05A5L ^ l2));
        nArray4[dO.aoQ("o", (int)7226, (long)(0x14E8AF767DCBF1D9L ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray4[dO.aoQ("o", (int)26440, (long)(0x7E81230E0DD0A80L ^ l2))] = (int)dO.aoQ("o", (int)23047, (long)(0x496A2BDEEC8FB7F9L ^ l2));
        nArray4[dO.aoQ("o", (int)28925, (long)(0x1CA7BEC81DAF9D31L ^ l2))] = (int)dO.aoQ("o", (int)4740, (long)(0x29F3D65B8A477F55L ^ l2));
        nArray4[dO.aoQ("o", (int)5156, (long)(0x7990E5D8643DF9CCL ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray4[dO.aoQ("o", (int)1618, (long)(0x1A5508DE2E80EBB3L ^ l2))] = (int)dO.aoQ("o", (int)20494, (long)(0xB8B98F292603DDAL ^ l2));
        nArray4[dO.aoQ("o", (int)81, (long)(0x38A81C62EE436DA0L ^ l2))] = (int)dO.aoQ("o", (int)28358, (long)(0x4F2809D6D38E833DL ^ l2));
        nArray4[dO.aoQ("o", (int)1324, (long)(0x169599C2168168C0L ^ l2))] = (int)dO.aoQ("o", (int)6402, (long)(0x1D614E205C9674F6L ^ l2));
        nArray4[dO.aoQ("o", (int)25608, (long)(0x772C0095C15309DEL ^ l2))] = (int)dO.aoQ("o", (int)22738, (long)(0x15AF5FC8784CB507L ^ l2));
        nArray4[dO.aoQ("o", (int)11641, (long)(0x512DA8294AB5C0A2L ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray4[dO.aoQ("o", (int)190, (long)(0x20FA0C1ADC466D61L ^ l2))] = (int)dO.aoQ("o", (int)17156, (long)(0x13364532B4FC2EE3L ^ l2));
        nArray4[dO.aoQ("o", (int)14238, (long)(0x1E8D55BCE4B0DA69L ^ l2))] = (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2));
        nArray4[dO.aoQ("o", (int)9741, (long)(0x3DC3395A1B1C4BE9L ^ l2))] = (int)dO.aoQ("o", (int)30249, (long)(0x24C9D4D8C8E01BCBL ^ l2));
        nArray4[dO.aoQ("o", (int)27583, (long)(0x3631E180E2CC8666L ^ l2))] = (int)dO.aoQ("o", (int)4058, (long)(0x765D82B9DA0D6222L ^ l2));
        this.OMKFJ = new cJ(this, mr.clS(nArray4)).WE(false);
        this.FvAmO = (cC)new cC(this, mr.clS(new int[]{(int)dO.aoQ("o", (int)13694, (long)(0x3DD193F23136D893L ^ l2)), (int)dO.aoQ("o", (int)23684, (long)(0x12A0818EE3D7315CL ^ l2)), (int)dO.aoQ("o", (int)28358, (long)(0x4F2809D6D38E833DL ^ l2)), (int)dO.aoQ("o", (int)6402, (long)(0x1D614E205C9674F6L ^ l2)), (int)dO.aoQ("o", (int)13904, (long)(0xBB7146C55955BA3L ^ l2))})).Vy(10.0).Vw(0.0).Vx(500.0).VA(0.0).Vz((String)((Object)dO.aoN("m", (int)17797, (long)(0x2EA1F912FC28EF63L ^ l2)))).Vf(this::aoI);
        this.pWzHb = new kW(mG.UhgnI, jk.jEkxo.cob(0.8f));
        this.vASOe = new ItemStack[PlayerInventory.getHotbarSize()];
        this.CISmK = mT.cpz();
        Arrays.fill(this.vASOe, ItemStack.EMPTY);
    }

    static {
        Loader.doInit(dO.class);
        dO._de547dd9cfcd97b143f45a05b6725199();
    }

    @hG
    public native void aou(gz var1);

    private static native MatchException aoJ(MatchException var0);

    private static native int aoO(int var0, long var1);

    @hG
    public native void aov(gq var1);

    private native void aow();

    private static native CallSite aoN(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aot(gH.th var1);

    private native /* synthetic */ Boolean aoI();

    private static native int aoP(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aoD(ItemStack var1, ItemStack var2);

    private native void aoz();

    @hG
    public native void aos(gA var1);

    private native void aoA(AbstractContainerScreenAccessor var1, HandledScreen<?> var2, lC var3);

    private native boolean aoB();

    private native boolean aoE(ItemStack var1, ItemStack var2);

    private static native CallSite aoQ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void aoy();

    private static native String aoL(int var0, long var1);

    private static native Object aoM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native int aoF(PlayerInventory var1, ItemStack var2, int var3);

    private native void aox();

    private native int aoG(PlayerInventory var1, ItemStack var2, int var3);

    private static native String aoK(byte[] var0);

    private native int aoH(PlayerInventory var1);

    private native boolean aoC();

    @Override
    public native void YO();
}

