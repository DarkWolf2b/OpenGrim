/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.entity.Entity
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
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;
import sixtwo.cD;
import sixtwo.fa$sK;
import sixtwo.fa$sL;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.ov;
import sixtwo.oz;

public class fa
extends gg {
    private final cD vPwrl;
    private fa$sL uULHD;
    private fa$sK YfDDm;
    private int oEEDi;
    private static String[] irPKw;
    private static long cTrfy;
    private static long[] qJCJb;
    private static Integer[] zsVGN;
    private static Map TOBUA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fa() {
        long l2 = cTrfy ^ 0x11A318CCE114L;
        super(gf.aZL((int)fa.aGZ("p", (int)20642, (long)(0x6A8A549EF4E814ACL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fa.aGZ("p", (int)29551, (long)(0x280BBA1329ADB775L ^ l2))];
        nArray[0] = (int)fa.aGZ("p", (int)20404, (long)(0x46C46F7FEA860BA0L ^ l2));
        nArray[1] = (int)fa.aGZ("p", (int)24179, (long)(0x1411FA6852591A73L ^ l2));
        nArray[2] = (int)fa.aGZ("p", (int)16652, (long)(0x13E6F9211A1C050EL ^ l2));
        nArray[3] = (int)fa.aGZ("p", (int)20778, (long)(0x55949A7A5DF71521L ^ l2));
        nArray[4] = (int)fa.aGZ("p", (int)1835, (long)(0x42135A62DC7E433BL ^ l2));
        nArray[5] = (int)fa.aGZ("p", (int)4178, (long)(0x523091FEA30A5449L ^ l2));
        nArray[fa.aGZ("p", (int)4281, (long)(0x5DBE1D34D0C6D4AFL ^ l2))] = (int)fa.aGZ("p", (int)1972, (long)(0x243B7C2E60A343A5L ^ l2));
        nArray[fa.aGZ("p", (int)13361, (long)(0x35A049A1453CF030L ^ l2))] = (int)fa.aGZ("p", (int)15794, (long)(0x19527A8C93FCF9A0L ^ l2));
        nArray[fa.aGZ("p", (int)3243, (long)(0x27E4C328F84648A8L ^ l2))] = (int)fa.aGZ("p", (int)10863, (long)(0x1FA9EFCC8432EE63L ^ l2));
        nArray[fa.aGZ("p", (int)1394, (long)(0x738CC2877E8D4167L ^ l2))] = (int)fa.aGZ("p", (int)28875, (long)(0x31DEA91BE5334D8L ^ l2));
        nArray[fa.aGZ("p", (int)24742, (long)(0x6A9CAE99178EA4ACL ^ l2))] = (int)fa.aGZ("p", (int)32076, (long)(0x38A8244F5292B945L ^ l2));
        nArray[fa.aGZ("p", (int)17717, (long)(0x7CC1F8778478131L ^ l2))] = (int)fa.aGZ("p", (int)9157, (long)(0x75036281931167D2L ^ l2));
        nArray[fa.aGZ("p", (int)26057, (long)(0x18E740D6D5DCA1C6L ^ l2))] = (int)fa.aGZ("p", (int)28910, (long)(0x327390E71A0B34E6L ^ l2));
        nArray[fa.aGZ("p", (int)21630, (long)(0x6658DD0535C21078L ^ l2))] = (int)fa.aGZ("p", (int)14733, (long)(0x7898F1BA567D7D80L ^ l2));
        this.vPwrl = new cD(this, mr.clS(nArray)).VO((int)fa.aGZ("p", (int)4326, (long)(0x4EE8D8056FA3D4E1L ^ l2)));
        this.YfDDm = fa$sK.YbJTa;
    }

    static {
        Loader.doInit(fa.class);
        fa._58c15a8e35946d7df205876cf3176779();
    }

    private static native void _58c15a8e35946d7df205876cf3176779();

    @Override
    public native void YO();

    public static native String[] aGV();

    private native oz aGw(BlockPos var1);

    private native void aGf();

    private native void aGi();

    private native boolean aGF();

    private native Hand aGG(Item var1);

    private native void aGj();

    private native boolean aGy(BlockPos var1, BlockState var2);

    private static native CallSite aGZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void aGg();

    private native boolean aGu(BlockPos var1);

    private native boolean aGC(BlockPos var1);

    private native boolean aGD(BlockPos var1);

    @hG
    public native void aGb(gM var1);

    private native fa$sL aGo(BlockPos var1, Vec3d var2, Vec3d var3);

    private native Hand aGH();

    private native void aGk();

    @hG
    public native void aGe(gH.th var1);

    private native BlockPos aGp(BlockPos var1, Vec3d var2, Vec3d var3, Vec3d var4);

    private native fa$sK aGs(fa$sL var1);

    private native oz aGv(BlockPos var1);

    private native boolean aGB(BlockPos var1);

    @hG
    public native void aGd(gv var1);

    private native fa$sL aGn(ov var1);

    private native boolean aGA(BlockPos var1, BlockState var2);

    private native boolean aGI(ItemStack var1);

    private native Hand aGK();

    private native double aGq(Vec3d var1, Vec3d var2, Vec3d var3);

    private native boolean aGL(ItemStack var1);

    private native boolean aGr(fa$sL var1);

    private native boolean aGE(Item var1);

    private native boolean aGx(BlockPos var1);

    private native Vec3d aGM();

    private native Vec3d aGN(BlockPos var1);

    private native boolean aGO(Vec3d var1);

    private native boolean aGP(Vec3d var1);

    private static native /* synthetic */ boolean aGR(Entity var0);

    private native /* synthetic */ boolean aGS(BlockPos var1, BlockState var2);

    private native /* synthetic */ boolean aGT(BlockPos var1, BlockState var2);

    private native boolean aGz(BlockPos var1);

    private native void aGm();

    public static native void aGU(String[] var0);

    private native void aGh();

    private static native MatchException aGW(MatchException var0);

    private native void aGl();

    private native boolean aGt(BlockPos var1);

    @hG
    public native void aGc(gA var1);

    private native boolean aGJ();

    private native void aGQ();

    private static native int aGX(int var0, long var1);

    private static native int aGY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

