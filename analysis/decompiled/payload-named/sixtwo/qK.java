/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.gui.screen.Screen;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.qL;
import sixtwo.rD;

public class qK {
    private Screen CDRZA;
    private static final long OGmAQ = gb.aYR(-7566814362838651729L, 7488888391049323160L, MethodHandles.lookup().lookupClass()).a(209831431673789L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qK() {
        hF.bdI(this);
    }

    private static MatchException dbB(MatchException matchException) {
        return matchException;
    }

    public void dbA(Screen screen) {
        this.CDRZA = screen;
    }

    @hG
    public void dbz(gH.th th2) {
        block11: {
            block10: {
                boolean bl2;
                block9: {
                    block8: {
                        long l2 = OGmAQ ^ 0x4A4EA71376F4L;
                        bl2 = qL.dcb();
                        try {
                            try {
                                if (!bl2) break block8;
                                if (rD.dlmvG.world != null) break block9;
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
                        if (!bl2) break block10;
                        if (qK2.CDRZA == null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw qK.dbB(matchException);
                    }
                    rD.dlmvG.setScreen(this.CDRZA);
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

