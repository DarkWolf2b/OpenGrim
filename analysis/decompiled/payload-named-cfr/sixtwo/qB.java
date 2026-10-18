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
import sixtwo.qz;
import sixtwo.rD;

public class qB
extends qz {
    private final List<Identifier> vAhyA;
    private final int JPIol;
    private long aEStd = 0L;
    private int lOIJa = 1;
    private static final long hIHKx = gb.aYR(-1468868640441108540L, 8458465084499036594L, MethodHandles.lookup().lookupClass()).a(98482650010113L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qB(String string, int n2) {
        super(string);
        this.JPIol = n2;
        this.vAhyA = rD.dlT().dat().getOrDefault(rD.dlT().das().get(string).getFirst(), List.of());
    }

    @Override
    public Identifier cZk() {
        block8: {
            block7: {
                long l2 = hIHKx ^ 0x44BCDF02470CL;
                String string = qw.cZd();
                try {
                    if (this.vAhyA.isEmpty()) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw qB.cZs(matchException);
                }
                long l3 = System.currentTimeMillis();
                try {
                    try {
                        if (string != null) break block7;
                        if (l3 - this.aEStd <= (long)this.JPIol) break block8;
                    }
                    catch (MatchException matchException) {
                        throw qB.cZs(matchException);
                    }
                    this.aEStd = l3;
                }
                catch (MatchException matchException) {
                    throw qB.cZs(matchException);
                }
            }
            this.lOIJa = (this.lOIJa + 1) % this.vAhyA.size();
        }
        return this.vAhyA.get(this.lOIJa);
    }

    private static MatchException cZs(MatchException matchException) {
        return matchException;
    }
}

