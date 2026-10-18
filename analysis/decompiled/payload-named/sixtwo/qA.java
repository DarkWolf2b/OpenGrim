/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.util.Identifier;
import sixtwo.gb;
import sixtwo.qw;
import sixtwo.rD;

public class qA
extends qw {
    private final List<Identifier> lNzom;
    private final int ccBYI;
    private long TlsdL = 0L;
    private int Tpxdy = 1;
    private static final long eAiPH = gb.aYR(1130231821807574649L, 272200908279507853L, MethodHandles.lookup().lookupClass()).a(64036585915147L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qA(String string, int n2) {
        super(string);
        this.ccBYI = n2;
        this.lNzom = rD.dlR().cZS().getOrDefault(rD.dlR().cZR().get(string).getFirst(), List.of());
    }

    @Override
    public Identifier cZa() {
        block8: {
            block7: {
                long l2 = eAiPH ^ 0x3564E5CED8DFL;
                String string = qw.cZd();
                try {
                    if (this.lNzom.isEmpty()) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw qA.cZr(matchException);
                }
                long l3 = System.currentTimeMillis();
                try {
                    try {
                        if (string != null) break block7;
                        if (l3 - this.TlsdL <= (long)this.ccBYI) break block8;
                    }
                    catch (MatchException matchException) {
                        throw qA.cZr(matchException);
                    }
                    this.TlsdL = l3;
                }
                catch (MatchException matchException) {
                    throw qA.cZr(matchException);
                }
            }
            this.Tpxdy = (this.Tpxdy + 1) % this.lNzom.size();
        }
        return this.lNzom.get(this.Tpxdy);
    }

    private static MatchException cZr(MatchException matchException) {
        return matchException;
    }
}

