/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.Hand
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.block.BlockState;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.fa;
import sixtwo.fb$sM;
import sixtwo.fb$sN;
import sixtwo.gE;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.mr;
import sixtwo.oi;
import sixtwo.oz;

public class fb
extends gg {
    private final cv tuKUN;
    private final cw uMDXH;
    private final cw WbnlP;
    private final cw PVMYe;
    private final ct bKNZB;
    private final cu jsjtu;
    private final cu SGmOv;
    private final cC YCydL;
    private final oi XPiFl;
    private sM jteVW;
    private fb$sN oGEHp;
    private int vVjjy;
    private int kXSZU;
    private int pnzrf;
    private static long kSQqX;
    private static long[] MfnZZ;
    private static Integer[] spCmO;
    private static Map VbNan;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fb() {
        long l2 = kSQqX ^ 0x1E98EB9A24DFL;
        super(gf.aZL((int)fb.aHN("y", (int)10390, (long)(0x62437FF5ED0EA4E9L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fb.aHN("y", (int)21820, (long)(0x2259E3545190D954L ^ l2))];
        nArray[0] = (int)fb.aHN("y", (int)3760, (long)(0x5A3460056DE202E9L ^ l2));
        nArray[1] = (int)fb.aHN("y", (int)26301, (long)(0x753C94E5D2066ACEL ^ l2));
        nArray[2] = (int)fb.aHN("y", (int)11190, (long)(0x49DAA38F6553A7CDL ^ l2));
        nArray[3] = (int)fb.aHN("y", (int)8229, (long)(0x305C5BD35EE42C6EL ^ l2));
        nArray[4] = (int)fb.aHN("y", (int)23440, (long)(0x3075E82F53A557D9L ^ l2));
        nArray[5] = (int)fb.aHN("y", (int)7898, (long)(0x7A3DF441F03C1280L ^ l2));
        nArray[fb.aHN("y", (int)3616, (long)(0x5468158F2FCD827EL ^ l2))] = (int)fb.aHN("y", (int)2188, (long)(0x1A925721A06284E5L ^ l2));
        this.tuKUN = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[fb.aHN("y", (int)16472, (long)(0x42D69E217881CC3BL ^ l2))];
        nArray2[0] = (int)fb.aHN("y", (int)28496, (long)(0x2E434738CBEE30CL ^ l2));
        nArray2[1] = (int)fb.aHN("y", (int)3645, (long)(0x3F847DE32049024CL ^ l2));
        nArray2[2] = (int)fb.aHN("y", (int)5565, (long)(0x3C916EEC1D4019ECL ^ l2));
        nArray2[3] = (int)fb.aHN("y", (int)20345, (long)(0x93BD6F6B83C303L ^ l2));
        nArray2[4] = (int)fb.aHN("y", (int)501, (long)(0x1C31A5E8519D0D8DL ^ l2));
        nArray2[5] = (int)fb.aHN("y", (int)17584, (long)(0x2E44E22BB2D0C8DBL ^ l2));
        nArray2[fb.aHN("y", (int)9704, (long)(0x5C06A55D42152987L ^ l2))] = (int)fb.aHN("y", (int)8811, (long)(0xFA843958C0DAE19L ^ l2));
        nArray2[fb.aHN("y", (int)11823, (long)(0x765479E39BA5A243L ^ l2))] = (int)fb.aHN("y", (int)30516, (long)(0x24711020F3667B4DL ^ l2));
        nArray2[fb.aHN("y", (int)4928, (long)(0x2DD3BE7CDF2A1F15L ^ l2))] = (int)fb.aHN("y", (int)28155, (long)(0x5737542E5AA8E18DL ^ l2));
        nArray2[fb.aHN("y", (int)26080, (long)(0x260D7881A1FEE9A8L ^ l2))] = (int)fb.aHN("y", (int)4252, (long)(0x4E3071A983E91CF8L ^ l2));
        this.uMDXH = new cw(this.tuKUN, mr.clS(nArray2)).Tz();
        int[] nArray3 = new int[fb.aHN("y", (int)1351, (long)(0x4081A5C099398927L ^ l2))];
        nArray3[0] = (int)fb.aHN("y", (int)2580, (long)(0x43D0934D636E0671L ^ l2));
        nArray3[1] = (int)fb.aHN("y", (int)4252, (long)(0x4E3071A983E91CF8L ^ l2));
        nArray3[2] = (int)fb.aHN("y", (int)30516, (long)(0x24711020F3667B4DL ^ l2));
        nArray3[3] = (int)fb.aHN("y", (int)20345, (long)(0x93BD6F6B83C303L ^ l2));
        nArray3[4] = (int)fb.aHN("y", (int)8862, (long)(0x271F11DCC95C2EFCL ^ l2));
        nArray3[5] = (int)fb.aHN("y", (int)24518, (long)(0x4D3C9910AB9D53B2L ^ l2));
        nArray3[fb.aHN("y", (int)9704, (long)(0x5C06A55D42152987L ^ l2))] = (int)fb.aHN("y", (int)23844, (long)(0x1C2215BF3785159L ^ l2));
        nArray3[fb.aHN("y", (int)11823, (long)(0x765479E39BA5A243L ^ l2))] = (int)fb.aHN("y", (int)28155, (long)(0x5737542E5AA8E18DL ^ l2));
        nArray3[fb.aHN("y", (int)4928, (long)(0x2DD3BE7CDF2A1F15L ^ l2))] = (int)fb.aHN("y", (int)19570, (long)(0x601F3A831052C00EL ^ l2));
        nArray3[fb.aHN("y", (int)26080, (long)(0x260D7881A1FEE9A8L ^ l2))] = (int)fb.aHN("y", (int)8862, (long)(0x271F11DCC95C2EFCL ^ l2));
        nArray3[fb.aHN("y", (int)3238, (long)(0x7F06215272E980D8L ^ l2))] = (int)fb.aHN("y", (int)20345, (long)(0x93BD6F6B83C303L ^ l2));
        nArray3[fb.aHN("y", (int)22883, (long)(0x6CF0EEE9B41E5530L ^ l2))] = (int)fb.aHN("y", (int)30516, (long)(0x24711020F3667B4DL ^ l2));
        nArray3[fb.aHN("y", (int)29516, (long)(0x686E3295B8AAFF1BL ^ l2))] = (int)fb.aHN("y", (int)1250, (long)(0x3BFEBE46DFCD8897L ^ l2));
        nArray3[fb.aHN("y", (int)31511, (long)(0x6A2DFEBA5E997771L ^ l2))] = (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2));
        this.WbnlP = new cw(this.tuKUN, mr.clS(nArray3)).Tz();
        int[] nArray4 = new int[fb.aHN("y", (int)18548, (long)(0x1A266DECDECB4426L ^ l2))];
        nArray4[0] = (int)fb.aHN("y", (int)2580, (long)(0x43D0934D636E0671L ^ l2));
        nArray4[1] = (int)fb.aHN("y", (int)4252, (long)(0x4E3071A983E91CF8L ^ l2));
        nArray4[2] = (int)fb.aHN("y", (int)30516, (long)(0x24711020F3667B4DL ^ l2));
        nArray4[3] = (int)fb.aHN("y", (int)20345, (long)(0x93BD6F6B83C303L ^ l2));
        nArray4[4] = (int)fb.aHN("y", (int)8862, (long)(0x271F11DCC95C2EFCL ^ l2));
        nArray4[5] = (int)fb.aHN("y", (int)24518, (long)(0x4D3C9910AB9D53B2L ^ l2));
        nArray4[fb.aHN("y", (int)9704, (long)(0x5C06A55D42152987L ^ l2))] = (int)fb.aHN("y", (int)2580, (long)(0x43D0934D636E0671L ^ l2));
        nArray4[fb.aHN("y", (int)11823, (long)(0x765479E39BA5A243L ^ l2))] = (int)fb.aHN("y", (int)15857, (long)(0x20FBF4DF6548319FL ^ l2));
        nArray4[fb.aHN("y", (int)4928, (long)(0x2DD3BE7CDF2A1F15L ^ l2))] = (int)fb.aHN("y", (int)6734, (long)(0x75F8CFAE7A991613L ^ l2));
        nArray4[fb.aHN("y", (int)26080, (long)(0x260D7881A1FEE9A8L ^ l2))] = (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2));
        nArray4[fb.aHN("y", (int)3238, (long)(0x7F06215272E980D8L ^ l2))] = (int)fb.aHN("y", (int)8862, (long)(0x271F11DCC95C2EFCL ^ l2));
        nArray4[fb.aHN("y", (int)17858, (long)(0x34382269318549B5L ^ l2))] = (int)fb.aHN("y", (int)20345, (long)(0x93BD6F6B83C303L ^ l2));
        nArray4[fb.aHN("y", (int)7432, (long)(0x1AE1854903DE1165L ^ l2))] = (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2));
        this.PVMYe = new cw(this.tuKUN, mr.clS(nArray4));
        int[] nArray5 = new int[fb.aHN("y", (int)26080, (long)(0x260D7881A1FEE9A8L ^ l2))];
        nArray5[0] = (int)fb.aHN("y", (int)21471, (long)(0x184CB28F41EADF89L ^ l2));
        nArray5[1] = (int)fb.aHN("y", (int)8862, (long)(0x271F11DCC95C2EFCL ^ l2));
        nArray5[2] = (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2));
        nArray5[3] = (int)fb.aHN("y", (int)2807, (long)(0x839747939F80687L ^ l2));
        nArray5[4] = (int)fb.aHN("y", (int)15857, (long)(0x20FBF4DF6548319FL ^ l2));
        nArray5[5] = (int)fb.aHN("y", (int)19570, (long)(0x601F3A831052C00EL ^ l2));
        nArray5[fb.aHN("y", (int)9704, (long)(0x5C06A55D42152987L ^ l2))] = (int)fb.aHN("y", (int)24518, (long)(0x4D3C9910AB9D53B2L ^ l2));
        nArray5[fb.aHN("y", (int)11823, (long)(0x765479E39BA5A243L ^ l2))] = (int)fb.aHN("y", (int)3152, (long)(0x53A28B3AFB020004L ^ l2));
        nArray5[fb.aHN("y", (int)4928, (long)(0x2DD3BE7CDF2A1F15L ^ l2))] = (int)fb.aHN("y", (int)6734, (long)(0x75F8CFAE7A991613L ^ l2));
        this.bKNZB = new ct(this, mr.clS(nArray5));
        String[] stringArray = fa.aGV();
        try {
            this.jsjtu = new cu(this.bKNZB, mr.clS(new int[]{(int)fb.aHN("y", (int)18298, (long)(0x74AB356F67074B22L ^ l2)), (int)fb.aHN("y", (int)6734, (long)(0x75F8CFAE7A991613L ^ l2)), (int)fb.aHN("y", (int)12093, (long)(0x37D7D3FCDB7FA371L ^ l2))})).SY();
            this.SGmOv = new cu(this.bKNZB, mr.clS(new int[]{(int)fb.aHN("y", (int)18836, (long)(0x6EB7C3AC2993C5F5L ^ l2)), (int)fb.aHN("y", (int)4252, (long)(0x4E3071A983E91CF8L ^ l2)), (int)fb.aHN("y", (int)6734, (long)(0x75F8CFAE7A991613L ^ l2)), (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2))}));
            this.YCydL = new cC(this, mr.clS(new int[]{(int)fb.aHN("y", (int)934, (long)(0x5048017362DA0FF6L ^ l2)), (int)fb.aHN("y", (int)4252, (long)(0x4E3071A983E91CF8L ^ l2)), (int)fb.aHN("y", (int)6734, (long)(0x75F8CFAE7A991613L ^ l2)), (int)fb.aHN("y", (int)21132, (long)(0xF0EE4F94AE3DEEBL ^ l2))})).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0);
            this.XPiFl = new oi();
            this.oGEHp = fb$sN.OUxZP;
            this.kXSZU = -1;
            this.pnzrf = -1;
            this.YCydL.Vf(this.SGmOv::SZ);
            if (stringArray != null) {
                iS.bwK("eBzAub");
            }
        }
        catch (MatchException matchException) {
            throw fb.aHK(matchException);
        }
    }

    static {
        Loader.doInit(fb.class);
        fb._df5a3fa5a2cf8ba0758086f80f849087();
    }

    private static native void _df5a3fa5a2cf8ba0758086f80f849087();

    @Override
    public native void YO();

    @hG
    public native void aHa(gM var1);

    private native sM aHj(float var1);

    private native fb$sN aHm(sM var1);

    private native void aHn();

    private native boolean aHo();

    private native oz aHp(BlockPos var1);

    private native boolean aHq(BlockPos var1);

    private native void aHt();

    @hG
    public native void aHb(gv var1);

    private native Hand aHx(Item var1);

    private native Vec3d aHA();

    private native void aHk(sM var1, ItemStack var2);

    private native int aHC(ItemStack var1);

    private native boolean aHs(BlockPos var1);

    private native boolean aHz(ItemStack var1);

    private native int aHD();

    private static native MatchException aHK(MatchException var0);

    private static native CallSite aHN(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native boolean aHl(sM var1);

    private native Hand aHy();

    private native boolean aHF();

    @hG
    public native void aHd(gE var1);

    private native boolean aHr(BlockPos var1, BlockState var2);

    private native void aHh();

    @hG
    public native void aHc(gH.th var1);

    private native void aHg();

    private native boolean aHv(Item var1);

    private native boolean aHw();

    private native boolean aHu(BlockPos var1, Item var2);

    private native boolean aHB(Vec3d var1);

    private native void aHE();

    private native void aHG();

    private native void aHf();

    private native void aHe();

    private native void aHi();

    private static native int aHL(int var0, long var1);

    private native /* synthetic */ boolean aHI(BlockPos var1, Item var2);

    private native /* synthetic */ boolean aHJ(BlockPos var1, BlockState var2);

    private static native int aHM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aHH();
}

