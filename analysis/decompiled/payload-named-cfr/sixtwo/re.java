/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.Random;
import java.util.function.BooleanSupplier;
import native.Loader;
import sixtwo.gH;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.rc;
import sixtwo.rd;
import sixtwo.rf;

public final class re
implements AutoCloseable {
    public static Random KYiQd;
    private static int gCxsO;
    private static int sJjJc;
    private final BooleanSupplier DUyHX;
    private final rc dezHc;
    private rd nRKli;
    private rf homNT;
    private int bacvZ;
    private int Qafjr;
    private int jJvVM;
    private int BssAg;
    private long GZOlI;
    private boolean GUqTN;
    private static int[] GIYIn;
    private static long gHfpO;
    private static String[] tRlya;
    private static String[] ReKgH;
    private static Map KcUFS;
    private static long[] XbHsR;
    private static Integer[] KBjnW;
    private static Map bhXhX;
    private static long[] PaSNc;
    private static Long[] JEkdD;
    private static Map BAvDA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public re(int n2, int n3, rf rf2, rd rd2, BooleanSupplier booleanSupplier, boolean bl2) {
        int[] nArray;
        block8: {
            block7: {
                long l2 = gHfpO ^ 0x16E5598C711EL;
                this.dezHc = new rc((int)re.dfp("a", (int)1039, (long)(0xB5BB7E7B28B5DCDL ^ l2)), 2);
                this.deV(n2, n3);
                this.homNT = rf2;
                this.nRKli = rd2;
                nArray = re.dfh();
                try {
                    try {
                        this.DUyHX = booleanSupplier;
                        this.deY();
                        if (nArray == null) break block7;
                        if (!bl2) break block8;
                    }
                    catch (IllegalArgumentException illegalArgumentException) {
                        throw re.dfi(illegalArgumentException);
                    }
                    hF.bdI(this);
                }
                catch (IllegalArgumentException illegalArgumentException) {
                    throw re.dfi(illegalArgumentException);
                }
            }
            this.GUqTN = true;
        }
        try {
            if (nArray == null) {
                iS.bwK("JQFSCc");
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw re.dfi(illegalArgumentException);
        }
    }

    public re(int n2, int n3) {
        this(n2, n3, rf.BfWtc, new rd(), re::dfe, true);
    }

    public re() {
        long l2 = gHfpO ^ 0x6B859E67954L;
        this(5, (int)re.dfp("a", (int)16615, (long)(0xDF2692F0FEA916CL ^ l2)), rf.BfWtc, new rd(), re::dff, true);
    }

    static {
        Loader.doInit(re.class);
        re._a521183a58ad6dadebed2c3c426ed849();
    }

    @Override
    public native void close();

    private static native CallSite dfs(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native rd dfa();

    private static native void _a521183a58ad6dadebed2c3c426ed849();

    private static native /* synthetic */ boolean dff();

    public static native void dfg(int[] var0);

    private static native CallSite dfm(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native void deV(int var1, int var2);

    private static native int dfn(int var0, long var1);

    public static native int[] dfh();

    private static native IllegalArgumentException dfi(IllegalArgumentException var0);

    private static native /* synthetic */ boolean dfe();

    private native void deY();

    private static native CallSite dfp(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean deP();

    public native int deR(int var1);

    public native int deT();

    private native boolean deX(int var1);

    public native int dfd();

    private static native String dfk(int var0, long var1);

    public native boolean deS();

    private static native long dfq(int var0, long var1);

    private static native long dfr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native void deZ(rd var1);

    @hG
    public native void deN(gH.th var1);

    private static native Object dfl(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native rf dfb();

    private static native int dfo(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native int dfc();

    public native boolean deQ(int var1);

    public native void deW(rf var1);

    public native int deU();

    private static native String dfj(byte[] var0);

    public native int deO(BooleanSupplier var1);
}

