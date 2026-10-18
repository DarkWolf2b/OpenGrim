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

    public boolean crx(int n2) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = GvwYc ^ 0x4659F22EBF90L;
                int n3 = mU.cpU();
                try {
                    try {
                        bl2 = this.VEfPX;
                        if (n3 != 0) break block4;
                        if (bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw mW.crB(matchException);
                    }
                    this.ISQse = mU.cpN(n2);
                    this.VEfPX = true;
                }
                catch (MatchException matchException) {
                    throw mW.crB(matchException);
                }
            }
            bl2 = this.ISQse;
        }
        return bl2;
    }
}

