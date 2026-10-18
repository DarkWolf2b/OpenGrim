/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.le;
import sixtwo.lq;

record pm$vv(String text, lq font, float renderScale, float alpha, float paddingX, float paddingY, int ping, float iconOutput, float textOutput) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float iconWidth() {
        return le.bXM(this.renderScale);
    }

    public float iconHeight() {
        return le.bXN(this.renderScale);
    }

    public float textHeight() {
        return this.font.cat();
    }

    public float textWidth() {
        return this.font.cao(this.text);
    }
}

