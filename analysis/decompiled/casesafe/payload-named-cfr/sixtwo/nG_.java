/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.iy;

public interface nG {
    public void runMarketOpenCommand(iy var1);

    public long updateFallbackTimeout();

    default public void pauseAndNotify() {
        this.pauseAndNotify(null);
    }

    public void pauseAndNotify(String var1);

    public void reopenMarket(iy var1);

    public void pauseSession();
}

