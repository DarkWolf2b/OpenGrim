/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.projectile.thrown.EnderPearlEntity
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mc;
import sixtwo.mr;
import sixtwo.ov;

public class fm
extends gg {
    private final cC xGUzz;
    private final cJ HtBNt;
    static double vlFZY;
    private final mT ERRVP;
    private final mT OivbA;
    private BlockPos zPgOp;
    private int EnrbM;
    private int nHFuo;
    private ov wPysa;
    private int vfWoI;
    private boolean gwiUw;
    private int QVPeQ;
    private static long PoXVa;
    private static long[] wJsUx;
    private static Integer[] nGYPn;
    private static Map TspBo;
    private static long[] fLgmv;
    private static Long[] mMfNq;
    private static Map QeCTb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _a79e8a844e8815af838bfc52c5fb090e();

    public fm() {
        long l2 = PoXVa ^ 0x6F3AA75DD47BL;
        super(gf.aZL((int)fm.aKI("i", (int)26702, (long)(0x26933F06BED60D77L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fm.aKI("i", (int)27928, (long)(0x5848D628B85B8830L ^ l2))];
        nArray[0] = (int)fm.aKI("i", (int)1370, (long)(0x54FE6A1C7735E04AL ^ l2));
        nArray[1] = (int)fm.aKI("i", (int)27284, (long)(0x3785721AE32C8F8EL ^ l2));
        nArray[2] = (int)fm.aKI("i", (int)15301, (long)(0x7D9A79428B8DDEEFL ^ l2));
        nArray[3] = (int)fm.aKI("i", (int)26908, (long)(0x4111996F05070C0AL ^ l2));
        nArray[4] = (int)fm.aKI("i", (int)7083, (long)(0x1200C54A2501FEB8L ^ l2));
        nArray[5] = (int)fm.aKI("i", (int)29790, (long)(0x1F759FE1037F915AL ^ l2));
        nArray[fm.aKI("i", (int)10018, (long)(0x75A06CAD15E14224L ^ l2))] = (int)fm.aKI("i", (int)7908, (long)(0x20C7DACAB1BBFBC9L ^ l2));
        nArray[fm.aKI("i", (int)20093, (long)(0x4E489C149962B7FL ^ l2))] = (int)fm.aKI("i", (int)13382, (long)(0x5B4314995415177L ^ l2));
        nArray[fm.aKI("i", (int)10718, (long)(0x379AB62B3491CCD1L ^ l2))] = (int)fm.aKI("i", (int)22622, (long)(0x3D44A7D0B7DABD7DL ^ l2));
        nArray[fm.aKI("i", (int)22366, (long)(0x63A30260F60E3256L ^ l2))] = (int)fm.aKI("i", (int)6456, (long)(0x25BA5518FA07C2CL ^ l2));
        nArray[fm.aKI("i", (int)12946, (long)(0x1EEA502A6919578AL ^ l2))] = (int)fm.aKI("i", (int)727, (long)(0x5D1DC2D46D67E7FCL ^ l2));
        nArray[fm.aKI("i", (int)9067, (long)(0x421CF08E9B934677L ^ l2))] = (int)fm.aKI("i", (int)24497, (long)(0x2AB646AD0DA1BAB8L ^ l2));
        nArray[fm.aKI("i", (int)7987, (long)(0x6B71CEBF9A7AFA0BL ^ l2))] = (int)fm.aKI("i", (int)7077, (long)(0x7F632AFFC389FEA0L ^ l2));
        nArray[fm.aKI("i", (int)29505, (long)(0x5B20A6AC4451965AL ^ l2))] = (int)fm.aKI("i", (int)31869, (long)(0x16AB5724EAD29942L ^ l2));
        nArray[fm.aKI("i", (int)16110, (long)(0x52F7FB3E4B54DBCCL ^ l2))] = (int)fm.aKI("i", (int)17315, (long)(0x55BFE4647F8F2684L ^ l2));
        nArray[fm.aKI("i", (int)26382, (long)(0x43E67E230DEA023DL ^ l2))] = (int)fm.aKI("i", (int)27258, (long)(0x153B4CCBBCB68F71L ^ l2));
        nArray[fm.aKI("i", (int)10344, (long)(0x5739AC898B3C4D56L ^ l2))] = (int)fm.aKI("i", (int)26776, (long)(0xD88797E43980D8FL ^ l2));
        nArray[fm.aKI("i", (int)14720, (long)(0xFF089628B6C5C8EL ^ l2))] = (int)fm.aKI("i", (int)17315, (long)(0x55BFE4647F8F2684L ^ l2));
        nArray[fm.aKI("i", (int)18557, (long)(0x732F5C709D0AD52L ^ l2))] = (int)fm.aKI("i", (int)1406, (long)(0x6D1503FF4964E06CL ^ l2));
        nArray[fm.aKI("i", (int)17311, (long)(0x1057A5D904A6A2L ^ l2))] = (int)fm.aKI("i", (int)7011, (long)(0x2A7B9E0A6887E47L ^ l2));
        nArray[fm.aKI("i", (int)17878, (long)(0x1C52662604EAA0E4L ^ l2))] = (int)fm.aKI("i", (int)13949, (long)(0x76129DABCE4DD368L ^ l2));
        nArray[fm.aKI("i", (int)19029, (long)(0x7044F88DB72DAF74L ^ l2))] = (int)fm.aKI("i", (int)22657, (long)(0x66C9F6F6A253BDAFL ^ l2));
        nArray[fm.aKI("i", (int)17501, (long)(0x7706D7EEF85D215DL ^ l2))] = (int)fm.aKI("i", (int)20640, (long)(0xC96346422E7B5A1L ^ l2));
        this.xGUzz = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(2.0).Vx(20.0).VA(5.0);
        int[] nArray2 = new int[fm.aKI("i", (int)29263, (long)(0x6C72DB8544A81743L ^ l2))];
        nArray2[0] = (int)fm.aKI("i", (int)17117, (long)(0xD5835451FCAA7C0L ^ l2));
        nArray2[1] = (int)fm.aKI("i", (int)27759, (long)(0x195ACD8CC8988965L ^ l2));
        nArray2[2] = (int)fm.aKI("i", (int)13291, (long)(0x57B9E868885756FAL ^ l2));
        nArray2[3] = (int)fm.aKI("i", (int)22657, (long)(0x66C9F6F6A253BDAFL ^ l2));
        nArray2[4] = (int)fm.aKI("i", (int)7467, (long)(0x43E59CB41288780EL ^ l2));
        nArray2[5] = (int)fm.aKI("i", (int)18975, (long)(0x1FB66121D092AF23L ^ l2));
        nArray2[fm.aKI("i", (int)11722, (long)(0x331C7667A11DC8D3L ^ l2))] = (int)fm.aKI("i", (int)17315, (long)(0x55BFE4647F8F2684L ^ l2));
        nArray2[fm.aKI("i", (int)13277, (long)(0x69FC77346B8D6EDL ^ l2))] = (int)fm.aKI("i", (int)8673, (long)(0x72910A64075CC4E6L ^ l2));
        nArray2[fm.aKI("i", (int)8466, (long)(0x148E03BDD3C7C43BL ^ l2))] = (int)fm.aKI("i", (int)7467, (long)(0x43E59CB41288780EL ^ l2));
        nArray2[fm.aKI("i", (int)4397, (long)(0x1EE08D6CE70BF432L ^ l2))] = (int)fm.aKI("i", (int)26908, (long)(0x4111996F05070C0AL ^ l2));
        nArray2[fm.aKI("i", (int)12925, (long)(0x662147703276575BL ^ l2))] = (int)fm.aKI("i", (int)18975, (long)(0x1FB66121D092AF23L ^ l2));
        nArray2[fm.aKI("i", (int)12734, (long)(0x5CCB92F4048E54BDL ^ l2))] = (int)fm.aKI("i", (int)13291, (long)(0x57B9E868885756FAL ^ l2));
        nArray2[fm.aKI("i", (int)4391, (long)(0x24F8A7A381A5740BL ^ l2))] = (int)fm.aKI("i", (int)26841, (long)(0x1AEB9F8F05C98DE3L ^ l2));
        nArray2[fm.aKI("i", (int)22399, (long)(0x788A0CFC5D61B272L ^ l2))] = (int)fm.aKI("i", (int)14210, (long)(0x1479BC917F4B52A2L ^ l2));
        this.HtBNt = new cJ(this, mr.clS(nArray2)).WE(true);
        this.ERRVP = mT.cpz();
        this.OivbA = mT.cpz();
        this.wPysa = ov.cGv(0.0f, 0.0f);
    }

    static {
        Loader.doInit(fm.class);
        fm._a79e8a844e8815af838bfc52c5fb090e();
    }

    private native void aKr();

    private native void aKv();

    private native BlockPos aKw(EnderPearlEntity var1);

    private native void aKt();

    private native void aKu();

    private native double aKx(BlockPos var1);

    private native float aKy(BlockPos var1);

    private native BlockPos aKz();

    @hG
    public native void aKq(gH.th var1);

    private static native CallSite aKI(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native boolean aKs();

    @hG
    public native void aKp(gv var1);

    private static native long aKK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aKA(List<Vec3d> var1, boolean var2, boolean var3);

    private static native /* synthetic */ boolean aKE(AbstractClientPlayerEntity var0);

    private native Vec3d aKB(Vec3d var1, Vec3d var2);

    private static native MatchException aKF(MatchException var0);

    private static native int aKG(int var0, long var1);

    private native /* synthetic */ Vec3d aKC(mc var1, Vec3d var2);

    private static native CallSite aKL(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native long aKJ(int var0, long var1);

    private native /* synthetic */ Vec3d aKD(mc var1, Vec3d var2);

    private static native int aKH(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

