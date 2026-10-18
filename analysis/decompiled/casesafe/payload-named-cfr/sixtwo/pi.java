/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.List;
import net.minecraft.entity.Entity;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.pN;
import sixtwo.pj;

public record pi(lc bounds, List<pN> placements, Entity entity, boolean preview) {
    private static final long a = gb.aYR(-7120916945110568301L, 3023444059066624338L, MethodHandles.lookup().lookupClass()).a(222244175474110L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pi(lc lc2, List<pN> list, Entity entity, boolean bl2) {
        long l2 = a ^ 0x654497DE6166L;
        boolean bl3 = pj.cNz();
        boolean bl4 = bl3;
        try {
            this.bounds = lc2;
            this.placements = list;
            this.entity = entity;
            this.preview = bl2;
            if (bl4) {
                iS.bwK("Xnvnv");
            }
        }
        catch (MatchException matchException) {
            throw pi.a(matchException);
        }
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    public void render(lC lC2) {
        long l2 = a ^ 0x51B2E059838EL;
        Iterator<pN> iterator = this.placements.iterator();
        boolean bl2 = pj.cNA();
        while (iterator.hasNext()) {
            pN pN2 = iterator.next();
            pN2.render(lC2, this.bounds, this.entity, this.preview);
            if (bl2) continue;
        }
    }
}

