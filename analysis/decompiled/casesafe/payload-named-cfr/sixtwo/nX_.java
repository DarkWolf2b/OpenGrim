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
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.mT;
import sixtwo.nW;
import sixtwo.rk;

public final class nX
implements lA {
    private static rk YgGnF;
    private static rk lCtmb;
    private static mT UAUwi;
    private static boolean ktJNW;
    private static boolean IuVvI;
    private static long hBcIr;
    private static String[] CGTeE;
    private static String[] NKmtF;
    private static Map MOHEo;
    private static long[] OLPKB;
    private static Integer[] lLAxM;
    private static Map dDMRE;
    private static long ePbqd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private nX() {
        long l2 = hBcIr ^ 0x4D5946C3694EL;
        throw new UnsupportedOperationException((String)((Object)nX.cAz("n", (int)14031, (long)(0x161D67DA01D3AE19L ^ l2))));
    }

    static {
        Loader.doInit(nX.class);
        nX._7121319a0950db9a8912791192064035();
    }

    public static boolean cAt() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = hBcIr ^ 0x23AF2878A607L;
                boolean bl3 = nW.cAp();
                try {
                    bl2 = IuVvI;
                    if (bl3) break block2;
                    if (bl2) break block3;
                }
                catch (UnsupportedOperationException unsupportedOperationException) {
                    throw nX.cAv(unsupportedOperationException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static native void cAr(lC var0);

    private static native void _7121319a0950db9a8912791192064035();

    private static native int cAA(int var0, long var1);

    private static native int cAB(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cAC(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void cAu(lC var0, float var1, float var2, float var3, float var4, float var5);

    private static native String cAx(int var0, long var1);

    private static native UnsupportedOperationException cAv(UnsupportedOperationException var0);

    private static native CallSite cAz(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String cAw(byte[] var0);

    public static native boolean cAs();

    private static native Object cAy(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

