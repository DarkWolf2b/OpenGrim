/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.Map;
import native.Loader;
import sixtwo.Z;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;
import sixtwo.mT;
import sixtwo.rj;

public class r
extends ak<cv> {
    private static float piMCO = 12.0f;
    private static float MjAVk = 0.5f;
    private static float CUApF = 4.0f;
    private static float IQDsG = 12.5f;
    private static float mscaa = 17.0f;
    private cw FSRiQ;
    private final mT MkBfE;
    private final Z Chffk;
    private static long ILzZt;
    private static String[] HgqCA;
    private static String[] RMPNV;
    private static Map arSSg;
    private static long YFYaN;
    private static long YOaMg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private native void dQ(boolean var1);

    public r(cv cv2, az az2) {
        long l2 = ILzZt ^ 0x12FDB96DD15L;
        super(cv2, az2);
        this.MkBfE = mT.cpz();
        this.Chffk = new Z().kJ(lE.SVnNc.bYM(7.0f)).kK(5.0f).kL((int)YFYaN).kM(rj.XzDkv);
    }

    static {
        Loader.doInit(r.class);
        r._52d2aac29e8b59f18d95bc9ab41f5ff7();
    }

    @Override
    public native float dn();

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native String dU(byte[] var0);

    private static native Object dW(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite dX(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String dV(int var0, long var1);

    private static native MatchException dT(MatchException var0);

    private static native /* synthetic */ void dS(ArrayList var0, cw var1);

    private native int dR();

    private static native void _52d2aac29e8b59f18d95bc9ab41f5ff7();
}

