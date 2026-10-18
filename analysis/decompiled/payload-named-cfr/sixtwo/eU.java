/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.network.packet.Packet;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mW;
import sixtwo.mr;

public class eU
extends gg {
    private final cJ uOhjt;
    private final cC CrAYX;
    private BlockPos cEkBs;
    private boolean KALVf;
    private final mW HyfoP;
    private static long QgLWU;
    private static String pyZOh;
    private static long[] oZHIK;
    private static Integer[] rKPMZ;
    private static Map ISkoE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eU() {
        long l2 = QgLWU ^ 0x5505B8751E3CL;
        super(gf.aZL((int)eU.aDN("o", (int)18961, (long)(0x1C8956719594257EL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eU.aDN("o", (int)27720, (long)(0xBA8D0084AEE0333L ^ l2))];
        nArray[0] = (int)eU.aDN("o", (int)389, (long)(0xE605C56C135EEF8L ^ l2));
        nArray[1] = (int)eU.aDN("o", (int)29699, (long)(0xBD875B8828E1B7DL ^ l2));
        nArray[2] = (int)eU.aDN("o", (int)16625, (long)(0x588399D4297E2F8BL ^ l2));
        nArray[3] = (int)eU.aDN("o", (int)6587, (long)(0x63473411D7D376C9L ^ l2));
        nArray[4] = (int)eU.aDN("o", (int)6857, (long)(0x65F9A204A93DF5BAL ^ l2));
        nArray[5] = (int)eU.aDN("o", (int)4658, (long)(0x6D6EA34E86F9FD44L ^ l2));
        nArray[eU.aDN("o", (int)32702, (long)(0x7A5AB132F53610D4L ^ l2))] = (int)eU.aDN("o", (int)16626, (long)(0x151E311A5730AF87L ^ l2));
        nArray[eU.aDN("o", (int)18343, (long)(0x5D61B643811828C1L ^ l2))] = (int)eU.aDN("o", (int)6242, (long)(0x75DB02EB7143F70EL ^ l2));
        nArray[eU.aDN("o", (int)27113, (long)(0x685CA34FAFE869EL ^ l2))] = (int)eU.aDN("o", (int)31938, (long)(0x693A85CB53AB13B2L ^ l2));
        nArray[eU.aDN("o", (int)22291, (long)(0x5DF0BD6A8E743862L ^ l2))] = (int)eU.aDN("o", (int)17876, (long)(0x528943637045AAB6L ^ l2));
        nArray[eU.aDN("o", (int)9024, (long)(0x2464BCE575BDCC39L ^ l2))] = (int)eU.aDN("o", (int)21882, (long)(0x66F878382BB2BA06L ^ l2));
        nArray[eU.aDN("o", (int)1951, (long)(0x3A77F0BD5B0668E0L ^ l2))] = (int)eU.aDN("o", (int)26532, (long)(0x2F353329373208C3L ^ l2));
        nArray[eU.aDN("o", (int)10357, (long)(0x3D042A0CCD59471CL ^ l2))] = (int)eU.aDN("o", (int)22539, (long)(0x4DE5974453FBB763L ^ l2));
        this.uOhjt = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[eU.aDN("o", (int)22747, (long)(0x10AAC2ABA82037BEL ^ l2))];
        nArray2[0] = (int)eU.aDN("o", (int)9050, (long)(0x75F82D7987B34C3EL ^ l2));
        nArray2[1] = (int)eU.aDN("o", (int)4197, (long)(0x5C9594EB0B8FFF08L ^ l2));
        nArray2[2] = (int)eU.aDN("o", (int)1928, (long)(0x5A255A9D0D6968FCL ^ l2));
        nArray2[3] = (int)eU.aDN("o", (int)23057, (long)(0x91BA7436B9DB57AL ^ l2));
        nArray2[4] = (int)eU.aDN("o", (int)25073, (long)(0x2EC00EA804CB0E89L ^ l2));
        nArray2[5] = (int)eU.aDN("o", (int)32278, (long)(0x13021A1312959178L ^ l2));
        this.CrAYX = new cC(this, mr.clS(nArray2)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(pyZOh);
        this.HyfoP = new mW();
    }

    static {
        Loader.doInit(eU.class);
        eU._52fd631e8564c1ac6eff89a1e8b2d5a7();
    }

    private static native void _52fd631e8564c1ac6eff89a1e8b2d5a7();

    public native mW aDH();

    public native BlockPos aDF();

    private static native int aDM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ Packet aDI(BlockHitResult var0, int var1);

    private static native CallSite aDN(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aDC(gH.th var1);

    public native cJ aDD();

    private static native MatchException aDJ(MatchException var0);

    private static native int aDL(int var0, long var1);

    private static native String aDK(byte[] var0);

    public native cC aDE();

    public native boolean aDG();

    @Override
    public native void YO();
}

