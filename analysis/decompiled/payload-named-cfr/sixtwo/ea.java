/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.cC;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class ea
extends gg {
    private final cC rzTvo;
    private static long xPCiw;
    private static String ENAXX;
    private static long[] ADNhJ;
    private static Integer[] CORiV;
    private static Map VZXHC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _9cc2c0b9f3964686b5ba2b38633269d2();

    public ea() {
        long l2 = xPCiw ^ 0x2CB34713CE68L;
        super(gf.aZL((int)ea.arn("n", (int)30947, (long)(0x5F72B448DCE98197L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[ea.arn("n", (int)8583, (long)(0x7BFC5C958E9AD8FDL ^ l2))];
        nArray[0] = (int)ea.arn("n", (int)19650, (long)(0x28FFDFA8FCE135AFL ^ l2));
        nArray[1] = (int)ea.arn("n", (int)12989, (long)(0x766FD3090D1BCBC5L ^ l2));
        nArray[2] = (int)ea.arn("n", (int)7873, (long)(0x63D7DD2CC3D767BEL ^ l2));
        nArray[3] = (int)ea.arn("n", (int)30511, (long)(0x2EB6741F3CD38E5FL ^ l2));
        nArray[4] = (int)ea.arn("n", (int)12125, (long)(0x3F1029890455D626L ^ l2));
        nArray[5] = (int)ea.arn("n", (int)31943, (long)(0x2FCA341958C585B4L ^ l2));
        nArray[ea.arn("n", (int)27143, (long)(0x4E65539DF160936EL ^ l2))] = (int)ea.arn("n", (int)27362, (long)(0x62BAEF5C39A4939FL ^ l2));
        nArray[ea.arn("n", (int)26122, (long)(0x457BDB2D0F441F65L ^ l2))] = (int)ea.arn("n", (int)29594, (long)(0x853BA65CDD0AEDL ^ l2));
        nArray[ea.arn("n", (int)25299, (long)(0x3399EC7DAEB01BAAL ^ l2))] = (int)ea.arn("n", (int)1390, (long)(0x2E279591E46FFC1CL ^ l2));
        nArray[ea.arn("n", (int)18683, (long)(0x560CC126C47C318AL ^ l2))] = (int)ea.arn("n", (int)20181, (long)(0x7F335B01587737BBL ^ l2));
        nArray[ea.arn("n", (int)5224, (long)(0x69D1F59C5B42ED1EL ^ l2))] = (int)ea.arn("n", (int)18304, (long)(0x197C852B2E4E3EFCL ^ l2));
        nArray[ea.arn("n", (int)4657, (long)(0x656D31BEF986B4FL ^ l2))] = (int)ea.arn("n", (int)6715, (long)(0x70DC6A9B8BEC6353L ^ l2));
        nArray[ea.arn("n", (int)31244, (long)(0x1DD4E3E931EA8379L ^ l2))] = (int)ea.arn("n", (int)24985, (long)(0x49C783EC502B98F5L ^ l2));
        this.rzTvo = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(ENAXX);
    }

    static {
        Loader.doInit(ea.class);
        ea._9cc2c0b9f3964686b5ba2b38633269d2();
    }

    private static native int arm(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite arn(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException arj(MatchException var0);

    private static native int arl(int var0, long var1);

    @hG
    public native void ari(gH.th var1);

    private static native String ark(byte[] var0);
}

