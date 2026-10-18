/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.iS;
import sixtwo.nK;
import sixtwo.nQ;
import sixtwo.nf;
import sixtwo.nx;
import sixtwo.ny;

public class nu {
    private final ny gDkRl;
    private final long SstgA;
    private final long bRkjV;
    private final nf tzqLw;
    private static long CQkKj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public nu(ny ny2, long l, nf nf2) {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l2 = CQkKj ^ 0x4F2200190E7AL;
                    this.gDkRl = ny2;
                    this.SstgA = l;
                    this.tzqLw = nf2;
                    boolean bl2 = nx.cwi();
                    try {
                        try {
                            this.bRkjV = nQ.cyR();
                            if (iS.bwL() != null) break block4;
                            if (!bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw nu.cvW(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw nu.cvW(matchException);
                    }
                }
                bl = true;
            }
            nx.cwh(bl);
        }
    }

    static {
        Loader.doInit(nu.class);
        nu._d670a9340e999c38d08d3f1f7820fa9c();
    }

    private static native MatchException cvW(MatchException var0);

    public native boolean cvQ(nK var1);

    private native boolean cvR();

    public native ny cvS();

    public native long cvT();

    public native nf cvV();

    public native long cvU();

    private static native void _d670a9340e999c38d08d3f1f7820fa9c();
}
