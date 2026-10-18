/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.lI;

public interface lK
extends lI {
    @Override
    default public void execute() {
        this.beginBatch();
        try {
            this.renderIntoBatch();
        }
        finally {
            this.endBatch();
        }
    }

    public void endBatch();

    public void beginBatch();

    public void renderIntoBatch();
}

