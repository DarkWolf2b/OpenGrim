/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.hit.HitResult
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.mf;

public record mg(List<Vec3d> positions, Vec3d finalPosition, HitResult hitResult, mf termination) {
    private static final long a = gb.aYR(-7403550115351378519L, -2043538162424936169L, MethodHandles.lookup().lookupClass()).a(94792783578772L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mg {
        list = List.copyOf(list);
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    public boolean hitBlock() {
        boolean bl2;
        long l2 = a ^ 0x5605AEF834BDL;
        try {
            bl2 = this.termination == mf.juSGK;
        }
        catch (MatchException matchException) {
            throw mg.a(matchException);
        }
        return bl2;
    }

    public int simulatedSteps() {
        return Math.max(this.positions.size() - 1, 0);
    }
}

