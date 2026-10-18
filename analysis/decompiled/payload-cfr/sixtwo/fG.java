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
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.eD;
import sixtwo.gA;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.mr;

public class fG
extends gg {
    private final ct xHSEs;
    private final cu rLoJa;
    private final cu qPyIG;
    private final cu WOHue;
    private final cJ XOUKT;
    private final cA XUvTV;
    private final cA PWSXA;
    private final cC AqVee;
    private boolean HrnPx;
    private boolean QYvrB;
    private long deLoo;
    private final Runnable RJFVs;
    private final Runnable abWbk;
    private final Runnable YNgob;
    private final Runnable VqvZM;
    private final Runnable DyNeX;
    private static long UXeQf;
    private static String[] dPMvB;
    private static String[] SjiqK;
    private static Map FpKBj;
    private static long[] NDFbm;
    private static Integer[] KEbwq;
    private static Map MdrLn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fG() {
        long l = UXeQf ^ 0x6086707507E1L;
        super(gf.aZL((int)fG.aTu("n", (int)26654, (long)(0x63A4247E7E6AC7B5L ^ l)), false, gh.xwjCw));
        this.xHSEs = new ct(this, mr.clS(new int[]{(int)fG.aTu("n", (int)5080, (long)(0x1CD0AE39BF783C63L ^ l)), (int)fG.aTu("n", (int)18173, (long)(0x2A38D696BD0CE95EL ^ l)), (int)fG.aTu("n", (int)18851, (long)(0xA9927AFB18E62FL ^ l)), (int)fG.aTu("n", (int)9479, (long)(0x6BF25E98AEE78A8AL ^ l))}));
        this.rLoJa = new cu(this.xHSEs, mr.clS(new int[]{(int)fG.aTu("n", (int)14776, (long)(0x29B3BE14188C9604L ^ l)), (int)fG.aTu("n", (int)4732, (long)(0x5640AA58BABCBDF4L ^ l)), (int)fG.aTu("n", (int)22388, (long)(0x5AEF85FA0EBFF8C5L ^ l)), (int)fG.aTu("n", (int)28668, (long)(0x42B735EC78FF4060L ^ l))}));
        this.qPyIG = new cu(this.xHSEs, mr.clS(new int[]{(int)fG.aTu("n", (int)4843, (long)(0x7F8FB601BA03BD6CL ^ l)), (int)fG.aTu("n", (int)31882, (long)(0x5CD48CEFB81AD33EL ^ l)), (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l)), (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l))}));
        int[] nArray = new int[fG.aTu("n", (int)3516, (long)(0x28E4429BCF2220EL ^ l))];
        nArray[0] = (int)fG.aTu("n", (int)4843, (long)(0x7F8FB601BA03BD6CL ^ l));
        nArray[1] = (int)fG.aTu("n", (int)15084, (long)(0x4CAC7009C2BA1567L ^ l));
        nArray[2] = (int)fG.aTu("n", (int)3945, (long)(0x64A59EA75E7120E3L ^ l));
        nArray[3] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray[4] = (int)fG.aTu("n", (int)11326, (long)(0x698AFBB5CDED03B0L ^ l));
        nArray[5] = (int)fG.aTu("n", (int)31882, (long)(0x5CD48CEFB81AD33EL ^ l));
        nArray[fG.aTu("n", (int)30837, (long)(0x50BE686F3D5757F3L ^ l))] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray[fG.aTu("n", (int)8789, (long)(0x75881447B78B0DE2L ^ l))] = (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l));
        this.WOHue = new cu(this.xHSEs, mr.clS(nArray));
        int[] nArray2 = new int[fG.aTu("n", (int)14576, (long)(0x6307C4A809591779L ^ l))];
        nArray2[0] = (int)fG.aTu("n", (int)29845, (long)(0x24F5058FBE005B11L ^ l));
        nArray2[1] = (int)fG.aTu("n", (int)4282, (long)(0x6A62EF071E41BF16L ^ l));
        nArray2[2] = (int)fG.aTu("n", (int)11402, (long)(0x32737E7F45F80328L ^ l));
        nArray2[3] = (int)fG.aTu("n", (int)475, (long)(0xFED00A837B82E76L ^ l));
        nArray2[4] = (int)fG.aTu("n", (int)18845, (long)(0x18A859CC254C6625L ^ l));
        nArray2[5] = (int)fG.aTu("n", (int)18471, (long)(0xA4B3BF8E8F6E797L ^ l));
        nArray2[fG.aTu("n", (int)11596, (long)(0x22E37F14E2FD02E8L ^ l))] = (int)fG.aTu("n", (int)4282, (long)(0x6A62EF071E41BF16L ^ l));
        nArray2[fG.aTu("n", (int)4411, (long)(0x59B957D4649CBEB8L ^ l))] = (int)fG.aTu("n", (int)17359, (long)(0xACD0D32CA63EC4FL ^ l));
        nArray2[fG.aTu("n", (int)13933, (long)(0x66136645380519D3L ^ l))] = (int)fG.aTu("n", (int)13547, (long)(0x773F0AE9D4E01B56L ^ l));
        nArray2[fG.aTu("n", (int)29545, (long)(0xECF2CF454BDCC3L ^ l))] = (int)fG.aTu("n", (int)10580, (long)(0x1985A89167A006DBL ^ l));
        nArray2[fG.aTu("n", (int)17833, (long)(0x703057D6CBAEA1CL ^ l))] = (int)fG.aTu("n", (int)26242, (long)(0x1BF55EB5DE054927L ^ l));
        nArray2[fG.aTu("n", (int)24550, (long)(0x16B7AD555B7AF04EL ^ l))] = (int)fG.aTu("n", (int)32733, (long)(0x21B7D2DCA650D074L ^ l));
        nArray2[fG.aTu("n", (int)29507, (long)(0x4DC2D6FACC9CDCF9L ^ l))] = (int)fG.aTu("n", (int)4282, (long)(0x6A62EF071E41BF16L ^ l));
        nArray2[fG.aTu("n", (int)25962, (long)(0x5773BBF7D220CAEFL ^ l))] = (int)fG.aTu("n", (int)13863, (long)(0x7F01327AC26A9991L ^ l));
        this.XOUKT = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[fG.aTu("n", (int)343, (long)(0x3EE13233107DAEF7L ^ l))];
        nArray3[0] = (int)fG.aTu("n", (int)31882, (long)(0x5CD48CEFB81AD33EL ^ l));
        nArray3[1] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray3[2] = (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l));
        nArray3[3] = (int)fG.aTu("n", (int)17359, (long)(0xACD0D32CA63EC4FL ^ l));
        nArray3[4] = (int)fG.aTu("n", (int)4843, (long)(0x7F8FB601BA03BD6CL ^ l));
        nArray3[5] = (int)fG.aTu("n", (int)20769, (long)(0x578CBA7B55DBFE8EL ^ l));
        nArray3[fG.aTu("n", (int)11596, (long)(0x22E37F14E2FD02E8L ^ l))] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray3[fG.aTu("n", (int)4411, (long)(0x59B957D4649CBEB8L ^ l))] = (int)fG.aTu("n", (int)29867, (long)(0x35D18196F499DB12L ^ l));
        nArray3[fG.aTu("n", (int)13933, (long)(0x66136645380519D3L ^ l))] = (int)fG.aTu("n", (int)27266, (long)(0x36C8E174A453C503L ^ l));
        this.XUvTV = new cA(this, mr.clS(nArray3)).UG(5.0).UE(0.0).UF(1000.0).UI(120.0, 120.0).UH((String)((Object)fG.aTr("o", (int)24056, (long)(0x51BC267447D1097EL ^ l))));
        int[] nArray4 = new int[fG.aTu("n", (int)13933, (long)(0x66136645380519D3L ^ l))];
        nArray4[0] = (int)fG.aTu("n", (int)31882, (long)(0x5CD48CEFB81AD33EL ^ l));
        nArray4[1] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray4[2] = (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l));
        nArray4[3] = (int)fG.aTu("n", (int)17359, (long)(0xACD0D32CA63EC4FL ^ l));
        nArray4[4] = (int)fG.aTu("n", (int)4843, (long)(0x7F8FB601BA03BD6CL ^ l));
        nArray4[5] = (int)fG.aTu("n", (int)27266, (long)(0x36C8E174A453C503L ^ l));
        nArray4[fG.aTu("n", (int)11596, (long)(0x22E37F14E2FD02E8L ^ l))] = (int)fG.aTu("n", (int)26242, (long)(0x1BF55EB5DE054927L ^ l));
        nArray4[fG.aTu("n", (int)4411, (long)(0x59B957D4649CBEB8L ^ l))] = (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l));
        this.PWSXA = new cA(this, mr.clS(nArray4)).UG(5.0).UE(1.0).UF(1000.0).UI(450.0, 450.0).UH((String)((Object)fG.aTr("o", (int)12696, (long)(0xFBF52924259E51FL ^ l))));
        int[] nArray5 = new int[fG.aTu("n", (int)343, (long)(0x3EE13233107DAEF7L ^ l))];
        nArray5[0] = (int)fG.aTu("n", (int)31882, (long)(0x5CD48CEFB81AD33EL ^ l));
        nArray5[1] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray5[2] = (int)fG.aTu("n", (int)3076, (long)(0x2C03D09F60BFA3A2L ^ l));
        nArray5[3] = (int)fG.aTu("n", (int)17359, (long)(0xACD0D32CA63EC4FL ^ l));
        nArray5[4] = (int)fG.aTu("n", (int)17121, (long)(0x30D936A4EDD6ED5EL ^ l));
        nArray5[5] = (int)fG.aTu("n", (int)3945, (long)(0x64A59EA75E7120E3L ^ l));
        nArray5[fG.aTu("n", (int)11596, (long)(0x22E37F14E2FD02E8L ^ l))] = (int)fG.aTu("n", (int)21491, (long)(0xE19F43DA9767C52L ^ l));
        nArray5[fG.aTu("n", (int)4411, (long)(0x59B957D4649CBEB8L ^ l))] = (int)fG.aTu("n", (int)28248, (long)(0x799BD7273E4E41FFL ^ l));
        nArray5[fG.aTu("n", (int)13933, (long)(0x66136645380519D3L ^ l))] = (int)fG.aTu("n", (int)29204, (long)(0x3AE3CBFFADB15DA7L ^ l));
        this.AqVee = new cC(this, mr.clS(nArray5)).Vy(10.0).Vw(0.0).Vx(2500.0).VA(0.0).Vz((String)((Object)fG.aTr("o", (int)12696, (long)(0xFBF52924259E51FL ^ l))));
        this.RJFVs = this::aTm;
        this.abWbk = this::aTl;
        this.YNgob = this::aTk;
        this.VqvZM = this::aTj;
        this.DyNeX = this::aTi;
    }

    static {
        Loader.doInit(fG.class);
        fG._2b9caf2d2a8e73d89bb28f3dd29947fe();
    }

    @Override
    public native void aaj();

    private static native void _2b9caf2d2a8e73d89bb28f3dd29947fe();

    private static native CallSite aTu(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aTr(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void aTm();

    private native /* synthetic */ void aTl();

    private native /* synthetic */ void aTk();

    private native /* synthetic */ void aTj();

    private native /* synthetic */ void aTi();

    @hG
    public native void aTf(hw.tv var1);

    @hG
    public native void aTg(gA var1);

    private static native /* synthetic */ void aTh(boolean var0, eD var1);

    private static native MatchException aTn(MatchException var0);

    private static native String aTo(byte[] var0);

    private static native String aTp(int var0, long var1);

    private static native Object aTq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aTs(int var0, long var1);

    private static native int aTt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
