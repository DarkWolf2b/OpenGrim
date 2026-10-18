/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.rj;
import sixtwo.rk;

public class ae$rP {
    private final String MNrmg;
    private final String noDvP;
    private final rk aRsQd;
    private static long FyIas;
    private static long AGepX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ae$rP(String string, String string2) {
        long l2 = FyIas ^ 0x135B233B14E0L;
        this.aRsQd = new rk((int)AGepX).dhs(rj.UPXqT);
        this.MNrmg = string;
        this.noDvP = string2;
    }

    static {
        Loader.doInit(ae$rP.class);
        ae$rP._1c192b87da7b20b63ab1534bf843fe4b();
    }

    private static native void _1c192b87da7b20b63ab1534bf843fe4b();

    public native String dmN();

    public native String dmO();

    public native rk dmP();
}

