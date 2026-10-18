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
import sixtwo.cJ;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gH;
import sixtwo.gV;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mB;
import sixtwo.mr;

public class dK
extends gg {
    private final cv zrgbM;
    private final cw ImshN;
    private final cw CzAnG;
    private final cJ QiyGI;
    private mB vuasL;
    private float jcQsa;
    private static long UtFqN;
    private static long[] MxRqJ;
    private static Integer[] krUWC;
    private static Map gnfiQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _c519c9ae2f6445b40eac7d3bfde68b13();

    public dK() {
        long l2 = UtFqN ^ 0x3C04670DB566L;
        super(gf.aZL((int)dK.anp("n", (int)7969, (long)(0x31B287D1D8D74F00L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dK.anp("n", (int)2748, (long)(0x50A2C5EFE5985AB8L ^ l2))];
        nArray[0] = (int)dK.anp("n", (int)22818, (long)(0x1FDEFDA889BC8915L ^ l2));
        nArray[1] = (int)dK.anp("n", (int)5843, (long)(0x72A67653DAFC6E1L ^ l2));
        nArray[2] = (int)dK.anp("n", (int)8456, (long)(0x75626E0DE3347139L ^ l2));
        nArray[3] = (int)dK.anp("n", (int)8005, (long)(0x8FA77D8D467CF4EL ^ l2));
        nArray[4] = (int)dK.anp("n", (int)32581, (long)(0x75F0D56921A62F6EL ^ l2));
        nArray[5] = (int)dK.anp("n", (int)14530, (long)(0x5878936B91D068EFL ^ l2));
        nArray[dK.anp("n", (int)18153, (long)(0x6BC96A9D50BD96ECL ^ l2))] = (int)dK.anp("n", (int)14358, (long)(0x29B3B005A427E81CL ^ l2));
        nArray[dK.anp("n", (int)17079, (long)(0x7D9A91F38EE128CL ^ l2))] = (int)dK.anp("n", (int)8854, (long)(0x7EDB3974931872A9L ^ l2));
        nArray[dK.anp("n", (int)11843, (long)(0x4A941FD6ADFFE42L ^ l2))] = (int)dK.anp("n", (int)5530, (long)(0x609BA043F455C5BEL ^ l2));
        this.zrgbM = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[dK.anp("n", (int)16015, (long)(0xA06D8270B50EEBBL ^ l2))];
        nArray2[0] = (int)dK.anp("n", (int)1710, (long)(0x64DDC02B6E4ED69EL ^ l2));
        nArray2[1] = (int)dK.anp("n", (int)27861, (long)(0x1F730973D258BCE0L ^ l2));
        nArray2[2] = (int)dK.anp("n", (int)17099, (long)(0x5EC9E2F8EFF12F1L ^ l2));
        nArray2[3] = (int)dK.anp("n", (int)32482, (long)(0x6E954F2549ED2EDEL ^ l2));
        nArray2[4] = (int)dK.anp("n", (int)20944, (long)(0x33F93FE2BF8081F9L ^ l2));
        nArray2[5] = (int)dK.anp("n", (int)31888, (long)(0x51C84DB3A0672C93L ^ l2));
        nArray2[dK.anp("n", (int)19313, (long)(0x72F0721EE0AB9B42L ^ l2))] = (int)dK.anp("n", (int)19923, (long)(0x32080F753B931DF0L ^ l2));
        nArray2[dK.anp("n", (int)4002, (long)(0x39A09B7FCAAE5F8AL ^ l2))] = (int)dK.anp("n", (int)4182, (long)(0xCF9CE04BD6C4054L ^ l2));
        nArray2[dK.anp("n", (int)8137, (long)(0xFAA87FBF0974FEEL ^ l2))] = (int)dK.anp("n", (int)21977, (long)(0x38177F5391B485E7L ^ l2));
        this.ImshN = new cw(this.zrgbM, mr.clS(nArray2));
        int[] nArray3 = new int[dK.anp("n", (int)8137, (long)(0xFAA87FBF0974FEEL ^ l2))];
        nArray3[0] = (int)dK.anp("n", (int)15396, (long)(0x2718D75849D76C0EL ^ l2));
        nArray3[1] = (int)dK.anp("n", (int)31219, (long)(0x5D55599D034DA9CAL ^ l2));
        nArray3[2] = (int)dK.anp("n", (int)17099, (long)(0x5EC9E2F8EFF12F1L ^ l2));
        nArray3[3] = (int)dK.anp("n", (int)32482, (long)(0x6E954F2549ED2EDEL ^ l2));
        nArray3[4] = (int)dK.anp("n", (int)20944, (long)(0x33F93FE2BF8081F9L ^ l2));
        nArray3[5] = (int)dK.anp("n", (int)14530, (long)(0x5878936B91D068EFL ^ l2));
        nArray3[dK.anp("n", (int)19313, (long)(0x72F0721EE0AB9B42L ^ l2))] = (int)dK.anp("n", (int)27798, (long)(0x573BD8CBC9F83C96L ^ l2));
        nArray3[dK.anp("n", (int)4002, (long)(0x39A09B7FCAAE5F8AL ^ l2))] = (int)dK.anp("n", (int)10039, (long)(0x658DB7A82F3EF70FL ^ l2));
        this.CzAnG = new cw(this.zrgbM, mr.clS(nArray3));
        int[] nArray4 = new int[dK.anp("n", (int)18656, (long)(0x6C9C180003ED18CEL ^ l2))];
        nArray4[0] = (int)dK.anp("n", (int)2325, (long)(0x7B68B27EC818D937L ^ l2));
        nArray4[1] = (int)dK.anp("n", (int)24839, (long)(0x4781CAD1425BB100L ^ l2));
        nArray4[2] = (int)dK.anp("n", (int)30953, (long)(0x32640EDBCCE728CCL ^ l2));
        nArray4[3] = (int)dK.anp("n", (int)32482, (long)(0x6E954F2549ED2EDEL ^ l2));
        nArray4[4] = (int)dK.anp("n", (int)19923, (long)(0x32080F753B931DF0L ^ l2));
        nArray4[5] = (int)dK.anp("n", (int)26326, (long)(0x274610B6B8ECB6E0L ^ l2));
        nArray4[dK.anp("n", (int)19313, (long)(0x72F0721EE0AB9B42L ^ l2))] = (int)dK.anp("n", (int)20944, (long)(0x33F93FE2BF8081F9L ^ l2));
        nArray4[dK.anp("n", (int)4002, (long)(0x39A09B7FCAAE5F8AL ^ l2))] = (int)dK.anp("n", (int)14530, (long)(0x5878936B91D068EFL ^ l2));
        nArray4[dK.anp("n", (int)8137, (long)(0xFAA87FBF0974FEEL ^ l2))] = (int)dK.anp("n", (int)16503, (long)(0x2668C7B8D155104AL ^ l2));
        nArray4[dK.anp("n", (int)16015, (long)(0xA06D8270B50EEBBL ^ l2))] = (int)dK.anp("n", (int)1447, (long)(0x7EC2CA6BBEEA55A1L ^ l2));
        nArray4[dK.anp("n", (int)25186, (long)(0x51E4FF4E58B93242L ^ l2))] = (int)dK.anp("n", (int)13918, (long)(0x942EFA01043E678L ^ l2));
        nArray4[dK.anp("n", (int)22326, (long)(0x40F1D4E1C2570719L ^ l2))] = (int)dK.anp("n", (int)94, (long)(0x688D2C25B0D55072L ^ l2));
        this.QiyGI = new cJ(this, mr.clS(nArray4)).WE(true);
    }

    static {
        Loader.doInit(dK.class);
        dK._c519c9ae2f6445b40eac7d3bfde68b13();
    }

    public native cw ani();

    private native void and(boolean var1);

    private static native int ann(int var0, long var1);

    public native cv ang();

    @hG
    public native void ana(gv var1);

    private native void ane();

    private static native int ano(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native float anl();

    private native void anf();

    public native cw anh();

    @hG
    public native void anb(gH.th var1);

    private static native MatchException anm(MatchException var0);

    private static native CallSite anp(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native mB ank();

    public native cJ anj();

    @hG
    public native void anc(gV var1);

    @Override
    public native void YO();
}

