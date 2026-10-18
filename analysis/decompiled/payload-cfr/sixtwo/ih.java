/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import sixtwo.bb;
import sixtwo.iS;
import sixtwo.ig;
import sixtwo.ii;
import sixtwo.ij;
import sixtwo.mu;

public class ih {
    private final Map<String, ig> WUEfC;
    private final mu<bb<ig>> JopFf;
    private final mu<bb<ig>> XGrSW;
    private final List<ig> RmnBU;
    private static long UZuoX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ih() {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l = UZuoX ^ 0x46458C204547L;
                    this.WUEfC = new ConcurrentHashMap<String, ig>();
                    boolean bl2 = ii.bjT();
                    try {
                        try {
                            this.JopFf = new mu();
                            this.XGrSW = new mu();
                            this.RmnBU = List.of(ig.PtFoz, ig.gsTXO, ig.hzckK, ig.eaYCr, ig.pHENl, ig.WSWRe, ig.OetCB);
                            if (iS.bwL() != null) break block4;
                            if (!bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw ih.biR(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw ih.biR(matchException);
                    }
                }
                bl = true;
            }
            ii.bjS(bl);
        }
    }

    static {
        Loader.doInit(ih.class);
        ih._40ff4fd37e63ca4e3dd1b28d8fef6d7f();
    }

    public native int biK();

    private static native MatchException biR(MatchException var0);

    public native Map<String, ig> biN();

    public native mu<bb<ig>> biP();

    public native List<ig> biQ();

    public native ij biL(String var1);

    public native void biM(ig var1);

    public native mu<bb<ig>> biO();

    private static native void _40ff4fd37e63ca4e3dd1b28d8fef6d7f();
}
