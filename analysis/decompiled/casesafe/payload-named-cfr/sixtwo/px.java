/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.lc;
import sixtwo.pM;
import sixtwo.py;

public interface px {
    public pM position();

    public py position(pM var1);

    default public py element() {
        return (py)((Object)this);
    }

    public py order(int var1);

    public int order();

    default public boolean active() {
        return this.element().active();
    }

    default public lc previewBounds() {
        return this.element().previewBounds();
    }
}

