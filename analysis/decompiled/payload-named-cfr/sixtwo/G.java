/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.E;
import sixtwo.F;
import sixtwo.G$rJ;
import sixtwo.P;
import sixtwo.ad;
import sixtwo.ah;
import sixtwo.az;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;
import sixtwo.rj;
import sixtwo.rk;

public abstract class G
extends az {
    private static float JdxZX = 12.0f;
    private static float KeoSe = 0.5f;
    private static float dYUct = 4.0f;
    private static float vrvmB = 12.5f;
    protected final ah gIoQb;
    protected final ad UgfQu;
    protected final rk xzWmG;
    protected final rk HMvBX;
    private static long wNYKc;
    private static String[] OZJxj;
    private static String[] kWfeQ;
    private static Map YkVxs;
    private static long[] kwkup;
    private static Integer[] FJMeo;
    private static Map NrSEb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _4b4e796a151ec20f4460e8fe10ce3302();

    protected G() {
        long l2 = wNYKc ^ 0x995F84FEC18L;
        this.xzWmG = new rk((int)G.fP("b", (int)27319, (long)(0x719026EEC7FC7332L ^ l2))).dhs(rj.UPXqT);
        String[] stringArray = F.b();
        try {
            this.HMvBX = new rk((int)G.fP("b", (int)30396, (long)(0xE6186A7BFC8EF3AL ^ l2))).dhs(rj.NJlxm);
            this.gIoQb = new ah();
            this.UgfQu = new ad(lE.joxgd.bYM(8.0f));
            this.UgfQu.lZ((String)((Object)G.fM("w", (int)20196, (long)(0xD8DD88830DD542CL ^ l2))));
            if (iS.bwL() == null) {
                F.b(new String[4]);
            }
        }
        catch (MatchException matchException) {
            throw G.fI(matchException);
        }
    }

    static {
        Loader.doInit(G.class);
        G._4b4e796a151ec20f4460e8fe10ce3302();
    }

    protected abstract List<E> i();

    protected abstract void j(int[] var1);

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private native G$rJ fG();

    private native void fF(float var1, float var2, E var3);

    @Override
    protected native void bV(lC var1);

    private native void fE();

    protected native float fB();

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private static native String fJ(byte[] var0);

    private static native Object fL(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native /* synthetic */ void fH(F var0, P var1);

    private static native MatchException fI(MatchException var0);

    private native float fD(int var1);

    private static native String fK(int var0, long var1);

    private static native int fN(int var0, long var1);

    private static native int fO(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite fP(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite fM(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    public native boolean eK(char var1);
}

