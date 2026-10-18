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
import sixtwo.iS;
import sixtwo.re;

public final class rc {
    private final int exHvn;
    private final int PyCSl;
    private final int[] mNMrC;
    private int grmLL;
    private static long ChNvS;
    private static String[] KvKGW;
    private static String[] vvkyJ;
    private static Map RtYsp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native boolean der(int var1);

    public rc(int n2, int n3) {
        int n4;
        long l2;
        block10: {
            block11: {
                l2 = ChNvS ^ 0x67943B65BCA1L;
                int[] nArray = re.dfh();
                int[] nArray2 = nArray;
                try {
                    try {
                        n4 = n2;
                        if (nArray2 == null) break block10;
                        if (n4 > 0) break block11;
                    }
                    catch (IllegalArgumentException illegalArgumentException) {
                        throw rc.dev(illegalArgumentException);
                    }
                    throw new IllegalArgumentException((String)((Object)rc.dez("v", (int)1955, (long)(0x7C3F21C9683CCE3FL ^ l2))));
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw rc.dev(illegalArgumentException);
                }
            }
            n4 = n3;
        }
        try {
            if (n4 <= 0) {
                throw new IllegalArgumentException((String)((Object)rc.dez("v", (int)22334, (long)(0x1A61461A705B9EA1L ^ l2))));
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw rc.dev(illegalArgumentException);
        }
        try {
            this.exHvn = n2;
            this.PyCSl = n3;
            this.mNMrC = new int[n2 * n3];
            if (iS.bwL() == null) {
                re.dfg(new int[1]);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw rc.dev(illegalArgumentException);
        }
    }

    static {
        Loader.doInit(rc.class);
        rc._d028f71408c9f836a0b711b98a80110d();
    }

    private static native IllegalArgumentException dev(IllegalArgumentException var0);

    public native void des();

    public native int dep(int var1);

    public native void det(int[] var1);

    private static native void _d028f71408c9f836a0b711b98a80110d();

    private static native Object dey(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native int deu();

    private static native String dex(int var0, long var1);

    private static native CallSite dez(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean deq();

    private static native String dew(byte[] var0);
}

