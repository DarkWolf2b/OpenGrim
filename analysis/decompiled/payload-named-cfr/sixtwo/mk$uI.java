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
import sixtwo.mk$uI$wj;

class mk$uI
implements Random {
    final Random dIXSX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mk$uI(Random random) {
        this.dIXSX = random;
    }

    public void setSeed(long seed) {
    }

    public Random split() {
        return this;
    }

    public int nextInt() {
        return 0;
    }

    public RandomSplitter nextSplitter() {
        return new mk$uI$wj(this);
    }

    public boolean nextBoolean() {
        return false;
    }

    public int nextInt(int bound) {
        return 0;
    }

    public float nextFloat() {
        return 0.0f;
    }

    public long nextLong() {
        return 0L;
    }

    public double nextDouble() {
        return 0.0;
    }

    public double nextGaussian() {
        return 0.0;
    }
}

