/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.aE;
import sixtwo.az;
import sixtwo.bg;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.jG;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.mA;

public class bi
extends az {
    private static final long VEYAp = gb.aYR(9139635386457903753L, 1557971589278227743L, MethodHandles.lookup().lookupClass()).a(32253300271458L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public void dl(double d, double d2, mA mA2) {
        bl.Ex().EB().wp().dl(d, d2, mA2);
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        return bl.Ex().EB().wp().dk(d, d2, mA2);
    }

    @Override
    protected void bV(lC lC2) {
        long l = VEYAp ^ 0x5E27D0A0BC07L;
        aE aE2 = bl.Ex().EB().wp();
        try {
            if (aE2 == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bi.Dx(matchException);
        }
        float f2 = this.WjISQ - 0.75f;
        jG.bHK(lC2, this.MCnYt, this.pNyTQ, this.BcpIo, f2);
        aE2.sY(this.MCnYt, this.pNyTQ, this.BcpIo, f2);
        aE2.su(lC2);
        jG.bHN();
    }

    @Override
    public boolean fC(double d, double d2, double d3) {
        boolean bl2;
        block4: {
            block5: {
                long l = VEYAp ^ 0x452E16CAD9C9L;
                int n = bg.De();
                try {
                    try {
                        bl2 = this.tg(d, d2);
                        if (n == 0) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bi.Dx(matchException);
                    }
                    bl.Ex().Ez().nJ(d3);
                    return true;
                }
                catch (MatchException matchException) {
                    throw bi.Dx(matchException);
                }
            }
            bl2 = super.fC(d, d2, d3);
        }
        return bl2;
    }

    @Override
    public boolean dB(double d, double d2, mA mA2, double d3, double d4) {
        return bl.Ex().EB().wp().dB(d, d2, mA2, d3, d4);
    }

    public boolean Dv(az az2) {
        return jf.bAU(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, az2.tr(), az2.ts(), az2.kN(), az2.dn());
    }

    public boolean Dw(double d, double d2) {
        return jf.bAX(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, d, d2);
    }

    private static MatchException Dx(MatchException matchException) {
        return matchException;
    }
}
