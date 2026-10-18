/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.az;
import sixtwo.bc;
import sixtwo.cB;
import sixtwo.lC;
import sixtwo.mA;

class bc$sb
extends az {
    private final Object bAjVG;
    private final cB ghlhU;
    private final int[] hhZmz;
    private final int[] jLLoD;
    private final int[] whbju;
    final bc fJevp;
    private static long ENaeo;
    private static String LgTly;
    private static long aupXC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bc$sb(bc bc2, Object object, cB cB2, int[] nArray, int[] nArray2, int[] nArray3) {
        this.fJevp = bc2;
        this.bAjVG = object;
        this.ghlhU = cB2;
        this.hhZmz = nArray;
        this.jLLoD = nArray2;
        this.whbju = nArray3;
    }

    static {
        Loader.doInit(bc$sb.class);
        bc$sb._5ba714509a8f0b92bcd19ff33b74b026();
    }

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    @Override
    protected native void bV(lC var1);

    private static native void _5ba714509a8f0b92bcd19ff33b74b026();

    private static native MatchException dnh(MatchException var0);

    private native void dng();

    private native boolean dnf();

    private static native String dni(byte[] var0);
}

