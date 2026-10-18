/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.ArrayList;
import java.util.List;
import native.Loader;
import sixtwo.cB;
import sixtwo.gf;

public class iS {
    protected List<cB> oZllQ;
    private static String GYeud;
    private static long kFZrs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public iS() {
        long l2 = kFZrs ^ 0xF80494B2485L;
        String string = gf.aZY();
        String string2 = string;
        try {
            this.oZllQ = new ArrayList<cB>();
            if (string2 != null) {
                iS.bwK("qLIdWc");
            }
        }
        catch (MatchException matchException) {
            throw iS.bwM(matchException);
        }
    }

    static {
        Loader.doInit(iS.class);
        iS._3e90acdd50c76b988d525cf192640a11();
    }

    public static native String bwL();

    private static native MatchException bwM(MatchException var0);

    public native <T extends cB> T bwH(T var1);

    public native List<cB> bwI();

    public static native void bwK(String var0);

    public native iS bwJ(List<cB> var1);

    private static native void _3e90acdd50c76b988d525cf192640a11();
}

