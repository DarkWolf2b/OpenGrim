/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_437
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_437;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.qL;
import sixtwo.rD;

public class qK {
    private class_437 CDRZA;
    private static final long OGmAQ = gb.aYR(-7566814362838651729L, 7488888391049323160L, MethodHandles.lookup().lookupClass()).a(209831431673789L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qK() {
        hF.bdI(this);
    }

    private static MatchException dbB(MatchException matchException) {
        return matchException;
    }

    public void dbA(class_437 class_4372) {
        this.CDRZA = class_4372;
    }

    @hG
    public void dbz(gH.th th2) {
        block11: {
            block10: {
                boolean bl;
                block9: {
                    block8: {
                        long l = OGmAQ ^ 0x4A4EA71376F4L;
                        bl = qL.dcb();
                        try {
                            try {
                                if (!bl) break block8;
                                if (rD.dlmvG.field_1687 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw qK.dbB(matchException);
                            }
                            this.CDRZA = null;
                        }
                        catch (MatchException matchException) {
                            throw qK.dbB(matchException);
                        }
                    }
                    return;
                }
                try {
                    qK qK2;
                    try {
                        qK2 = this;
                        if (!bl) break block10;
                        if (qK2.CDRZA == null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw qK.dbB(matchException);
                    }
                    rD.dlmvG.method_1507(this.CDRZA);
                    qK2 = this;
                }
                catch (MatchException matchException) {
                    throw qK.dbB(matchException);
                }
            }
            qK2.CDRZA = null;
        }
    }
}
