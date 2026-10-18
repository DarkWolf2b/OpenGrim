/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Collection;
import java.util.Map;
import java.util.function.Consumer;
import native.Loader;
import net.minecraft.util.math.Vec2f;
import sixtwo.Q;
import sixtwo.ac$rM;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.av;
import sixtwo.aw;
import sixtwo.b;
import sixtwo.c$rE;
import sixtwo.cB;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.cL;
import sixtwo.cy;
import sixtwo.d;
import sixtwo.g;
import sixtwo.iS;
import sixtwo.ig;
import sixtwo.in;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class c
extends av
implements aw {
    private static c MGKQD;
    private final g OOoLn;
    private final ap KvjMc;
    private final ap EknuQ;
    private final ap ItmaE;
    private final ap cJonW;
    private final ap uFsRc;
    private final d TPXYP;
    private final d OPcaS;
    private final iS pXzKY;
    private final cJ BbgWr;
    private final cC ayNwz;
    private final cJ ugpZM;
    private final cJ KDIPU;
    private final cJ kYwHO;
    private final iS ReKgb;
    private final cL lOVKq;
    private in BVqbK;
    private boolean RtXXb;
    private static boolean rYxNo;
    private static long aEFGH;
    private static String[] oLZGs;
    private static String[] NjfvR;
    private static Map IjHGR;
    private static long[] LPQVU;
    private static Integer[] RxnRu;
    private static Map dmLYJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _4f84036bfae9883b4cc5c5a67d6c2a06();

    private static native int O(int var0, long var1);

    public c() {
        block4: {
            boolean bl2;
            block6: {
                block5: {
                    long l2 = aEFGH ^ 0x189FFA3C1A67L;
                    this.OOoLn = new g();
                    this.KvjMc = (ap)new ap().pW((String)((Object)c.N("l", (int)20235, (long)(0x3B5C465EF6A4379BL ^ l2)))).qp(false).ol(false);
                    this.EknuQ = (ap)new ap().pY((String)((Object)c.N("l", (int)19160, (long)(0x4EB3E6EAE9E5324DL ^ l2))), (String)((Object)c.N("l", (int)29258, (long)(0x2404ACD082D10AD7L ^ l2))), ac$rM.WpzHJ).qp(false).ol(false);
                    this.ItmaE = (ap)new ap().pW((String)((Object)c.N("l", (int)5526, (long)(0x475871FDFEE26D05L ^ l2)))).qp(false).ol(false);
                    this.cJonW = (ap)new ap().pY((String)((Object)c.N("l", (int)14485, (long)(0x140B9E2B83E5C009L ^ l2))), (String)((Object)c.N("l", (int)2921, (long)(0x649FDF3770F673F8L ^ l2))), ac$rM.iKApR).qp(false).ol(false);
                    this.uFsRc = (ap)new ap().pY((String)((Object)c.N("l", (int)14485, (long)(0x140B9E2B83E5C009L ^ l2))), (String)((Object)c.N("l", (int)8411, (long)(0x7F24D41F88ADD845L ^ l2))), ac$rM.iKApR).qp(false).ol(false);
                    this.TPXYP = new d();
                    this.OPcaS = new d();
                    this.pXzKY = new iS();
                    int[] nArray = new int[c.Q("r", (int)17729, (long)(0x732F4A05966EDD95L ^ l2))];
                    nArray[0] = (int)c.Q("r", (int)5429, (long)(0x3DDF6AB50D110DFBL ^ l2));
                    nArray[1] = (int)c.Q("r", (int)29186, (long)(0x7E797E1D08C36AA0L ^ l2));
                    nArray[2] = (int)c.Q("r", (int)2345, (long)(0x131DB9A27FBD1187L ^ l2));
                    nArray[3] = (int)c.Q("r", (int)21795, (long)(0x372A34FC9D41CDE1L ^ l2));
                    nArray[4] = (int)c.Q("r", (int)28011, (long)(0x39F22BC0A1FAF587L ^ l2));
                    nArray[5] = (int)c.Q("r", (int)1592, (long)(0x3E9EBEAAB60C1EF8L ^ l2));
                    nArray[c.Q("r", (int)11102, (long)(0x751FFC62383833ADL ^ l2))] = (int)c.Q("r", (int)16392, (long)(0x63503255EA3FD8D1L ^ l2));
                    nArray[c.Q("r", (int)19744, (long)(0x5379BB046425D5C6L ^ l2))] = (int)c.Q("r", (int)11606, (long)(0x6377247674C8B5ABL ^ l2));
                    nArray[c.Q("r", (int)10260, (long)(0x4600324D862EB0D1L ^ l2))] = (int)c.Q("r", (int)11798, (long)(0xF7249A4CCF436EEL ^ l2));
                    nArray[c.Q("r", (int)2188, (long)(0x576A272E2B599043L ^ l2))] = (int)c.Q("r", (int)5917, (long)(0x269F7A14B1E50FE6L ^ l2));
                    this.BbgWr = new cJ(this.pXzKY, mr.clS(nArray)).WE(true);
                    int[] nArray2 = new int[c.Q("r", (int)1658, (long)(0x711409A5C8189EDDL ^ l2))];
                    nArray2[0] = (int)c.Q("r", (int)7941, (long)(0x1FA7771728AB07DFL ^ l2));
                    nArray2[1] = (int)c.Q("r", (int)4586, (long)(0xE175D0CBF368923L ^ l2));
                    nArray2[2] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray2[3] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    nArray2[4] = (int)c.Q("r", (int)8925, (long)(0x21548B588FF3BA33L ^ l2));
                    nArray2[5] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray2[c.Q("r", (int)30847, (long)(0x445C73C6C235608AL ^ l2))] = (int)c.Q("r", (int)7941, (long)(0x1FA7771728AB07DFL ^ l2));
                    nArray2[c.Q("r", (int)30223, (long)(0x5B7811070B5CEEECL ^ l2))] = (int)c.Q("r", (int)1932, (long)(0x5FF4A55A5A359F5BL ^ l2));
                    nArray2[c.Q("r", (int)8182, (long)(0x5D2D89233B9D870CL ^ l2))] = (int)c.Q("r", (int)30402, (long)(0x504CA95DE7626E1CL ^ l2));
                    nArray2[c.Q("r", (int)25790, (long)(0x765D3C968D7EFC11L ^ l2))] = (int)c.Q("r", (int)28739, (long)(0x2BFFB576535AE891L ^ l2));
                    nArray2[c.Q("r", (int)6762, (long)(0x1217321B60C602AEL ^ l2))] = (int)c.Q("r", (int)24711, (long)(0x64861EBF3B1CF84CL ^ l2));
                    this.ayNwz = new cC(this.pXzKY, mr.clS(nArray2)).Vy(1.0).Vw(1.0).Vx(10.0).VA(2.0);
                    int[] nArray3 = new int[c.Q("r", (int)13892, (long)(0x75FB831701DAAE99L ^ l2))];
                    nArray3[0] = (int)c.Q("r", (int)20244, (long)(0x5C9F478C93C3D7B4L ^ l2));
                    nArray3[1] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray3[2] = (int)c.Q("r", (int)7731, (long)(0x50060F6FCD4486CAL ^ l2));
                    nArray3[3] = (int)c.Q("r", (int)28739, (long)(0x2BFFB576535AE891L ^ l2));
                    nArray3[4] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray3[5] = (int)c.Q("r", (int)32452, (long)(0x41B7BDEE42D1662BL ^ l2));
                    nArray3[c.Q("r", (int)30847, (long)(0x445C73C6C235608AL ^ l2))] = (int)c.Q("r", (int)1965, (long)(0x56E299811CCE1F53L ^ l2));
                    nArray3[c.Q("r", (int)30223, (long)(0x5B7811070B5CEEECL ^ l2))] = (int)c.Q("r", (int)30962, (long)(0x5DD3B35079D86018L ^ l2));
                    nArray3[c.Q("r", (int)8182, (long)(0x5D2D89233B9D870CL ^ l2))] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray3[c.Q("r", (int)25790, (long)(0x765D3C968D7EFC11L ^ l2))] = (int)c.Q("r", (int)5898, (long)(0x5F27EB93FD720FE1L ^ l2));
                    nArray3[c.Q("r", (int)6762, (long)(0x1217321B60C602AEL ^ l2))] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray3[c.Q("r", (int)14084, (long)(0x4139A541AD18AFE5L ^ l2))] = (int)c.Q("r", (int)15548, (long)(0xA64980FA6A2244AL ^ l2));
                    nArray3[c.Q("r", (int)974, (long)(0x6472F911515A1B23L ^ l2))] = (int)c.Q("r", (int)10874, (long)(0x272E9EBF7246B2D9L ^ l2));
                    nArray3[c.Q("r", (int)29552, (long)(0x27EA0B081FADEBA6L ^ l2))] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray3[c.Q("r", (int)13423, (long)(0x105B4A1451DF2CA5L ^ l2))] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    nArray3[c.Q("r", (int)17868, (long)(0x1D3D30E9D6F45D10L ^ l2))] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray3[c.Q("r", (int)17297, (long)(0x620C5EAB04815B66L ^ l2))] = (int)c.Q("r", (int)15618, (long)(0x45D4FC385E9925D9L ^ l2));
                    nArray3[c.Q("r", (int)22717, (long)(0x27928376C86A407CL ^ l2))] = (int)c.Q("r", (int)10874, (long)(0x272E9EBF7246B2D9L ^ l2));
                    nArray3[c.Q("r", (int)1096, (long)(0x1A2592007B231C99L ^ l2))] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    nArray3[c.Q("r", (int)15937, (long)(0x4FBB02AFB34C26B0L ^ l2))] = (int)c.Q("r", (int)7731, (long)(0x50060F6FCD4486CAL ^ l2));
                    this.ugpZM = new cJ(this.pXzKY, mr.clS(nArray3));
                    int[] nArray4 = new int[c.Q("r", (int)25414, (long)(0x5E5C18292412FB8AL ^ l2))];
                    nArray4[0] = (int)c.Q("r", (int)15618, (long)(0x45D4FC385E9925D9L ^ l2));
                    nArray4[1] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray4[2] = (int)c.Q("r", (int)7731, (long)(0x50060F6FCD4486CAL ^ l2));
                    nArray4[3] = (int)c.Q("r", (int)28739, (long)(0x2BFFB576535AE891L ^ l2));
                    nArray4[4] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray4[5] = (int)c.Q("r", (int)1138, (long)(0x7BC026D035F39C82L ^ l2));
                    nArray4[c.Q("r", (int)30847, (long)(0x445C73C6C235608AL ^ l2))] = (int)c.Q("r", (int)11971, (long)(0x8BCD45F5271B616L ^ l2));
                    nArray4[c.Q("r", (int)30223, (long)(0x5B7811070B5CEEECL ^ l2))] = (int)c.Q("r", (int)16206, (long)(0x7A814DA092D527AEL ^ l2));
                    nArray4[c.Q("r", (int)8182, (long)(0x5D2D89233B9D870CL ^ l2))] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray4[c.Q("r", (int)25790, (long)(0x765D3C968D7EFC11L ^ l2))] = (int)c.Q("r", (int)5898, (long)(0x5F27EB93FD720FE1L ^ l2));
                    nArray4[c.Q("r", (int)6762, (long)(0x1217321B60C602AEL ^ l2))] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray4[c.Q("r", (int)14084, (long)(0x4139A541AD18AFE5L ^ l2))] = (int)c.Q("r", (int)4381, (long)(0x2AE9BEE2CD9709FAL ^ l2));
                    nArray4[c.Q("r", (int)2677, (long)(0x140628DB520C9289L ^ l2))] = (int)c.Q("r", (int)30478, (long)(0x2E368238D041EFEBL ^ l2));
                    nArray4[c.Q("r", (int)25650, (long)(0x2367C50361BE7CEDL ^ l2))] = (int)c.Q("r", (int)619, (long)(0x324EE9F9A7229A89L ^ l2));
                    nArray4[c.Q("r", (int)3924, (long)(0x355B62C239FA17A6L ^ l2))] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray4[c.Q("r", (int)18280, (long)(0x64D0666C05105FA0L ^ l2))] = (int)c.Q("r", (int)15618, (long)(0x45D4FC385E9925D9L ^ l2));
                    nArray4[c.Q("r", (int)2780, (long)(0x4BA13A8BF5F19204L ^ l2))] = (int)c.Q("r", (int)10874, (long)(0x272E9EBF7246B2D9L ^ l2));
                    nArray4[c.Q("r", (int)28193, (long)(0x3B7E866540C5F684L ^ l2))] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    nArray4[c.Q("r", (int)22101, (long)(0x4C67BD73F388CE93L ^ l2))] = (int)c.Q("r", (int)7731, (long)(0x50060F6FCD4486CAL ^ l2));
                    this.KDIPU = new cJ(this.pXzKY, mr.clS(nArray4));
                    int[] nArray5 = new int[c.Q("r", (int)25790, (long)(0x765D3C968D7EFC11L ^ l2))];
                    nArray5[0] = (int)c.Q("r", (int)15618, (long)(0x45D4FC385E9925D9L ^ l2));
                    nArray5[1] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray5[2] = (int)c.Q("r", (int)7731, (long)(0x50060F6FCD4486CAL ^ l2));
                    nArray5[3] = (int)c.Q("r", (int)28739, (long)(0x2BFFB576535AE891L ^ l2));
                    nArray5[4] = (int)c.Q("r", (int)21286, (long)(0x18B5493867794B82L ^ l2));
                    nArray5[5] = (int)c.Q("r", (int)7941, (long)(0x1FA7771728AB07DFL ^ l2));
                    nArray5[c.Q("r", (int)30847, (long)(0x445C73C6C235608AL ^ l2))] = (int)c.Q("r", (int)4586, (long)(0xE175D0CBF368923L ^ l2));
                    nArray5[c.Q("r", (int)30223, (long)(0x5B7811070B5CEEECL ^ l2))] = (int)c.Q("r", (int)10874, (long)(0x272E9EBF7246B2D9L ^ l2));
                    nArray5[c.Q("r", (int)8182, (long)(0x5D2D89233B9D870CL ^ l2))] = (int)c.Q("r", (int)14245, (long)(0x2E6DDB205933AF5AL ^ l2));
                    this.kYwHO = new cJ(this.pXzKY, mr.clS(nArray5));
                    this.ReKgb = new iS();
                    int[] nArray6 = new int[c.Q("r", (int)25790, (long)(0x765D3C968D7EFC11L ^ l2))];
                    nArray6[0] = (int)c.Q("r", (int)25132, (long)(0x7739A5C183DAFAFFL ^ l2));
                    nArray6[1] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    nArray6[2] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray6[3] = (int)c.Q("r", (int)21644, (long)(0x4D04750E7AE2CC41L ^ l2));
                    nArray6[4] = (int)c.Q("r", (int)10874, (long)(0x272E9EBF7246B2D9L ^ l2));
                    nArray6[5] = (int)c.Q("r", (int)18111, (long)(0x40175B003EA25E57L ^ l2));
                    nArray6[c.Q("r", (int)30847, (long)(0x445C73C6C235608AL ^ l2))] = (int)c.Q("r", (int)17549, (long)(0x6484852295E05C5DL ^ l2));
                    nArray6[c.Q("r", (int)30223, (long)(0x5B7811070B5CEEECL ^ l2))] = (int)c.Q("r", (int)16813, (long)(0xD3CAFD627FFD959L ^ l2));
                    nArray6[c.Q("r", (int)8182, (long)(0x5D2D89233B9D870CL ^ l2))] = (int)c.Q("r", (int)27951, (long)(0x4C5D49540F16F58EL ^ l2));
                    this.lOVKq = new cL(this.ReKgb, mr.clS(nArray6)).Xk(0.5f, 1.0f).Xl(0.5f, 0.0f);
                    MGKQD = this;
                    this.OOoLn.aV(() -> c.F(this));
                    this.w(this.pXzKY.bwI(), this.ItmaE);
                    this.w(this.ReKgb.bwI(), this.EknuQ);
                    this.w(this.TPXYP.bwI(), this.cJonW);
                    this.w(this.OPcaS.bwI(), this.uFsRc);
                    ig ig2 = rD.dlM().bjG();
                    mG mG2 = ig2.bio();
                    mG mG3 = ig2.biq().cob(0.3f);
                    Q q2 = new Q().ip((String)((Object)c.N("l", (int)22054, (long)(0x5D0DD0538999AEB2L ^ l2)))).io(lf.blMVg).is(8.0f).je(true).jq(mG3).jr(mG3).js(mG3).jk(mG2).jl(mG2).jm(mG2).jf(ld.all(6.0f)).jb(this::E);
                    boolean bl3 = c.H();
                    try {
                        try {
                            this.KvjMc.pV(new b());
                            this.KvjMc.pV(new c$rE(this, q2));
                            this.r();
                            this.KvjMc.sP(0);
                            this.EknuQ.sP(1);
                            this.ItmaE.sP(2);
                            this.cJonW.sP(3);
                            this.uFsRc.sP(4);
                            this.OOoLn.aE(this.KvjMc);
                            this.OOoLn.aE(this.EknuQ);
                            this.OOoLn.aE(this.ItmaE);
                            this.OOoLn.aE(this.cJonW);
                            this.OOoLn.aE(this.uFsRc);
                            if (iS.bwL() != null) break block4;
                            if (!bl3) break block5;
                        }
                        catch (MatchException matchException) {
                            throw c.J(matchException);
                        }
                        bl2 = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw c.J(matchException);
                    }
                }
                bl2 = true;
            }
            c.G(bl2);
        }
    }

    static {
        Loader.doInit(c.class);
        c._4f84036bfae9883b4cc5c5a67d6c2a06();
    }

    private static native /* synthetic */ void B(cy var0, aj var1);

    private static native /* synthetic */ void C(aj var0, Boolean var1);

    private static native /* synthetic */ void D(ap var0);

    private static native /* synthetic */ void F(c var0);

    public static native boolean I();

    private static native MatchException J(MatchException var0);

    private native void x();

    private native void s(Iterable<cB> var1);

    @Override
    protected native Vec2f n();

    @Override
    public native void m(lC var1);

    private native void o();

    private native void p();

    private native void t();

    private native void v();

    private native float q(ap var1, float var2);

    public static native void z();

    private native void w(Collection<cB> var1, ap var2);

    private native void u(in var1);

    private native void r();

    private native void y(Consumer<ap> var1);

    private native /* synthetic */ void E(Q var1);

    public static native c A();

    private static native String L(int var0, long var1);

    @Override
    public native g manager();

    private static native Object M(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite N(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int P(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native boolean H();

    private static native String K(byte[] var0);

    private static native CallSite Q(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native void G(boolean var0);

    @Override
    public native boolean onMouseDragged(double var1, double var3, mA var5, double var6, double var8);

    @Override
    public native boolean onCharTyped(char var1);

    @Override
    public native boolean onMouseClicked(double var1, double var3, mA var5);

    @Override
    public native boolean onKeyPressed(int var1, int var2, int var3);

    @Override
    public native boolean onMouseReleased(double var1, double var3, mA var5);

    @Override
    public native boolean onMouseScrolled(double var1, double var3, double var5);

    @Override
    public native void addTooltip(k var1);

    @Override
    public native void addPopup(ap var1);

    @Override
    public native void addPopupComponent(aj var1);

    public native void close();

    public native void init();

    public native void tick();
}

