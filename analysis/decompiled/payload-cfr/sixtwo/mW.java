/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.mU;

public class mW {
    private boolean VEfPX;
    private boolean ISQse;
    private static final long GvwYc = gb.aYR(3304271961851692338L, 6547709399777409721L, MethodHandles.lookup().lookupClass()).a(101794849805559L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean cry() {
        return this.VEfPX;
    }

    private static MatchException crB(MatchException matchException) {
        return matchException;
    }

    public void crA() {
        this.VEfPX = false;
        this.ISQse = false;
    }

    public boolean crz() {
        return this.ISQse;
    }

    public boolean crx(int n) {
        boolean bl;
        block4: {
            block5: {
                long l = GvwYc ^ 0x4659F22EBF90L;
                int n2 = mU.cpU();
                try {
                    try {
                        bl = this.VEfPX;
                        if (n2 != 0) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw mW.crB(matchException);
                    }
                    this.ISQse = mU.cpN(n);
                    this.VEfPX = true;
                }
                catch (MatchException matchException) {
                    throw mW.crB(matchException);
                }
            }
            bl = this.ISQse;
        }
        return bl;
    }
}
