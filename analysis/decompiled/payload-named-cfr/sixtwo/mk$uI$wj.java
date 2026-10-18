/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.random.Random
 *  net.minecraft.util.math.random.RandomSplitter
 */
package sixtwo;

import net.minecraft.util.math.random.Random;
import net.minecraft.util.math.random.RandomSplitter;
import sixtwo.mk$uI;

class mk$uI$wj
implements RandomSplitter {
    final mk$uI ZKdRM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mk$uI$wj(mk$uI uI2) {
        this.ZKdRM = uI2;
    }

    public Random split(String seed) {
        return this.ZKdRM.dIXSX;
    }

    public Random split(int x2, int y2, int z) {
        return this.ZKdRM.dIXSX;
    }

    public Random split(long seed) {
        return this.ZKdRM.dIXSX;
    }

    public void addDebugInfo(StringBuilder info) {
    }
}

