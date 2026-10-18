/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 */
package sixtwo;

import net.minecraft.client.util.math.MatrixStack;
import sixtwo.hH;

public abstract class go
extends hH {
    private MatrixStack cLmrQ;
    private float smUoY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public go(MatrixStack matrixStack, float f2) {
        this.cLmrQ = matrixStack;
        this.smUoY = f2;
    }

    public MatrixStack bbh() {
        return this.cLmrQ;
    }

    public float bbi() {
        return this.smUoY;
    }

    public static class sY
    extends go {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public sY(MatrixStack matrixStack, float f2) {
            super(matrixStack, f2);
        }
    }

    public static class sX
    extends go {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public sX(MatrixStack matrixStack, float f2) {
            super(matrixStack, f2);
        }
    }
}

