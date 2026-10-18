/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1044;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.lC;
import sixtwo.ld;

public class an
extends az {
    private class_1044 nLhhg;
    private ld ijNkN = ld.NONE;
    private static final long hKMkO = gb.aYR(-8978404935843101031L, 5007309845702240110L, MethodHandles.lookup().lookupClass()).a(230467291552426L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public an ph(class_1044 class_10442) {
        this.nLhhg = class_10442;
        return this;
    }

    public class_1044 pf() {
        return this.nLhhg;
    }

    @Override
    protected void bV(lC lC2) {
        block4: {
            block5: {
                long l = hKMkO ^ 0x27F1A4909720L;
                String[] stringArray = aj.oA();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (this.nLhhg != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw an.pj(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw an.pj(matchException);
                }
            }
            lC2.cee(this.nLhhg, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, this.ijNkN);
        }
    }

    public an pi(ld ld2) {
        this.ijNkN = ld2;
        return this;
    }

    public ld pg() {
        return this.ijNkN;
    }

    private static MatchException pj(MatchException matchException) {
        return matchException;
    }
}
