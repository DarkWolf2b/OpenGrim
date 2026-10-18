/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Direction
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
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.fd$sO;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.oT;

public class fd
extends gg {
    private final cC ZVSdF;
    private final mT hcRZI;
    private boolean YKpSx;
    private BlockPos ghppw;
    private static long NBgrV;
    private static String eVFHp;
    private static long[] HyqSb;
    private static Integer[] OnNGV;
    private static Map oPMeR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fd() {
        long l2 = NBgrV ^ 0x9E20D58A93BL;
        super(gf.aZL((int)fd.aIi("d", (int)22631, (long)(0x7169A49F3131ABE2L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fd.aIi("d", (int)26747, (long)(0x1B186E61A9269BF1L ^ l2))];
        nArray[0] = (int)fd.aIi("d", (int)12502, (long)(0x57249044F3044350L ^ l2));
        nArray[1] = (int)fd.aIi("d", (int)30966, (long)(0x40BAB5EB23470B71L ^ l2));
        nArray[2] = (int)fd.aIi("d", (int)27182, (long)(0x5B2C9EE4B56D19ADL ^ l2));
        nArray[3] = (int)fd.aIi("d", (int)28006, (long)(0x873EC48BAEE1EE2L ^ l2));
        nArray[4] = (int)fd.aIi("d", (int)20891, (long)(0x40F8F07E44EE2212L ^ l2));
        nArray[5] = (int)fd.aIi("d", (int)27182, (long)(0x5B2C9EE4B56D19ADL ^ l2));
        nArray[fd.aIi("d", (int)27696, (long)(0x5237A8BE19171FB2L ^ l2))] = (int)fd.aIi("d", (int)762, (long)(0x4A5EEBBF32C1717AL ^ l2));
        nArray[fd.aIi("d", (int)24087, (long)(0x223E8807C6C72D96L ^ l2))] = (int)fd.aIi("d", (int)3106, (long)(0x4E41EAE11795FFA9L ^ l2));
        this.ZVSdF = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(eVFHp);
        this.hcRZI = mT.cpA();
    }

    static {
        Loader.doInit(fd.class);
        fd._6c0a13300577b58a618e169667ef69c5();
    }

    private static native void _6c0a13300577b58a618e169667ef69c5();

    @Override
    public native void YO();

    private static native int aIh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @hG
    public native void aHU(gv var1);

    private static native CallSite aIi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException aIe(MatchException var0);

    private static native String aIf(byte[] var0);

    private static native int aIg(int var0, long var1);

    private native boolean aIa(Vec3d var1);

    private native sO aHW();

    private native Vec3d aHZ(BlockPos var1, BlockState var2);

    private native Direction aIc(Vec3d var1);

    private native sO aHX(BlockHitResult var1);

    @hG
    public native void aHV(gH.th var1);

    private native BlockHitResult aHY(BlockPos var1, BlockState var2);

    private native void aId();

    private native boolean aIb(oT var1, boolean var2);
}

