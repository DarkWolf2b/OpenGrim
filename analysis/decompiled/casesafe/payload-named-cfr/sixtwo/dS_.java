/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Items
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;
import sixtwo.cK;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hm;
import sixtwo.jc;
import sixtwo.mr;

public class dS
extends gg {
    private final ct CFOLa;
    private final cu CeZar;
    private final cu UeXgv;
    private final cv gWbBh;
    private final cw Shkca;
    private final cw FoNvc;
    private final cK xmgVN;
    private static long bOPYi;
    private static long[] MuwUi;
    private static Integer[] MVuFv;
    private static Map kpzZC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _3323b79ccdee7f922ab8849d424294e5();

    public dS() {
        long l2 = bOPYi ^ 0xA25EB16DE25L;
        super(gf.aZL((int)dS.apH("j", (int)11491, (long)(0x6A5B64B1827A2156L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dS.apH("j", (int)27449, (long)(0x652CB56AE7B2668AL ^ l2))];
        nArray[0] = (int)dS.apH("j", (int)740, (long)(0x163FF92D935E8F53L ^ l2));
        nArray[1] = (int)dS.apH("j", (int)18423, (long)(0x1D16D2221CAACA56L ^ l2));
        nArray[2] = (int)dS.apH("j", (int)62, (long)(0xE0F8BC1D9D98D8CL ^ l2));
        nArray[3] = (int)dS.apH("j", (int)1111, (long)(0x64B35F4BDD3389F8L ^ l2));
        nArray[4] = (int)dS.apH("j", (int)8291, (long)(0xACCF9406A92DCFL ^ l2));
        nArray[5] = (int)dS.apH("j", (int)2293, (long)(0x293A7D19C82A854CL ^ l2));
        this.CFOLa = new ct(this, mr.clS(nArray));
        this.CeZar = new cu(this.CFOLa, mr.clS(new int[]{(int)dS.apH("j", (int)13325, (long)(0x48FC82BC2944B993L ^ l2)), (int)dS.apH("j", (int)23040, (long)(0x55D61D90991957A2L ^ l2)), (int)dS.apH("j", (int)18673, (long)(0x38107B2AED6A454EL ^ l2))}));
        int[] nArray2 = new int[dS.apH("j", (int)19468, (long)(0x52A86CA17745C1A4L ^ l2))];
        nArray2[0] = (int)dS.apH("j", (int)29635, (long)(0x6087A5E9CAE37E69L ^ l2));
        nArray2[1] = (int)dS.apH("j", (int)30725, (long)(0x5302C9E044F4F5A8L ^ l2));
        nArray2[2] = (int)dS.apH("j", (int)13080, (long)(0x3DDD8A4DB9B33E87L ^ l2));
        nArray2[3] = (int)dS.apH("j", (int)20468, (long)(0x6A022F6FC0D4C253L ^ l2));
        nArray2[4] = (int)dS.apH("j", (int)17826, (long)(0x1516BE22E0A74812L ^ l2));
        nArray2[5] = (int)dS.apH("j", (int)5355, (long)(0x41ED5FED2BAC9940L ^ l2));
        nArray2[dS.apH("j", (int)14497, (long)(0x3ACB75357856351BL ^ l2))] = (int)dS.apH("j", (int)19323, (long)(0x1499EFCD18F46CAL ^ l2));
        nArray2[dS.apH("j", (int)31001, (long)(0x45B12444828FF4ADL ^ l2))] = (int)dS.apH("j", (int)13080, (long)(0x3DDD8A4DB9B33E87L ^ l2));
        nArray2[dS.apH("j", (int)12618, (long)(0x5E5D392C18EE3CEAL ^ l2))] = (int)dS.apH("j", (int)10193, (long)(0x3730C99220AB2A6DL ^ l2));
        this.UeXgv = new cu(this.CFOLa, mr.clS(nArray2));
        int[] nArray3 = new int[dS.apH("j", (int)26457, (long)(0x4D036532709C6AC2L ^ l2))];
        nArray3[0] = (int)dS.apH("j", (int)30592, (long)(0x42EE5EB7D39F7A2EL ^ l2));
        nArray3[1] = (int)dS.apH("j", (int)31453, (long)(0x2790B010A0B8F763L ^ l2));
        nArray3[2] = (int)dS.apH("j", (int)12670, (long)(0x9220E5EED923CE6L ^ l2));
        nArray3[3] = (int)dS.apH("j", (int)5329, (long)(0x524B7E44E4E8196AL ^ l2));
        nArray3[4] = (int)dS.apH("j", (int)14749, (long)(0x257C84E7367B343EL ^ l2));
        nArray3[5] = (int)dS.apH("j", (int)14913, (long)(0x41CAB14FEF8EB7DCL ^ l2));
        nArray3[dS.apH("j", (int)14497, (long)(0x3ACB75357856351BL ^ l2))] = (int)dS.apH("j", (int)23288, (long)(0x2A8513D7CCD25740L ^ l2));
        this.gWbBh = new cv(this, mr.clS(nArray3)).Tm(1);
        this.Shkca = new cw(this.gWbBh, mr.clS(new int[]{(int)dS.apH("j", (int)1768, (long)(0x27A2B17DFD180B4CL ^ l2)), (int)dS.apH("j", (int)18673, (long)(0x38107B2AED6A454EL ^ l2)), (int)dS.apH("j", (int)13855, (long)(0x4E0EFC117278BBBAL ^ l2)), (int)dS.apH("j", (int)16365, (long)(0x115A7BC13F3E325BL ^ l2)), (int)dS.apH("j", (int)13080, (long)(0x3DDD8A4DB9B33E87L ^ l2))})).Tz();
        this.FoNvc = new cw(this.gWbBh, mr.clS(new int[]{(int)dS.apH("j", (int)14371, (long)(0x3F130282C9B2B58AL ^ l2)), (int)dS.apH("j", (int)12670, (long)(0x9220E5EED923CE6L ^ l2)), (int)dS.apH("j", (int)13080, (long)(0x3DDD8A4DB9B33E87L ^ l2)), (int)dS.apH("j", (int)10259, (long)(0x7800C0460D69A58FL ^ l2)), (int)dS.apH("j", (int)16324, (long)(0x325B97A82A80325EL ^ l2))})).Tz();
        int[] nArray4 = new int[dS.apH("j", (int)14497, (long)(0x3ACB75357856351BL ^ l2))];
        nArray4[0] = (int)dS.apH("j", (int)31574, (long)(0x709E5406A8B9F6F0L ^ l2));
        nArray4[1] = (int)dS.apH("j", (int)18673, (long)(0x38107B2AED6A454EL ^ l2));
        nArray4[2] = (int)dS.apH("j", (int)31453, (long)(0x2790B010A0B8F763L ^ l2));
        nArray4[3] = (int)dS.apH("j", (int)16365, (long)(0x115A7BC13F3E325BL ^ l2));
        nArray4[4] = (int)dS.apH("j", (int)16324, (long)(0x325B97A82A80325EL ^ l2));
        nArray4[5] = (int)dS.apH("j", (int)28981, (long)(0x4082CBC440B7FC88L ^ l2));
        this.xmgVN = new cK(this, mr.clS(nArray4)).WM(jc.GjreY).WN(Items.COBWEB, Items.PAINTING);
        this.xmgVN.Vf(this.UeXgv::SZ);
    }

    static {
        Loader.doInit(dS.class);
        dS._3323b79ccdee7f922ab8849d424294e5();
    }

    private static native int apG(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int apF(int var0, long var1);

    private static native CallSite apH(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void apC(hm var1);

    private static native MatchException apE(MatchException var0);

    private native boolean apD();
}

