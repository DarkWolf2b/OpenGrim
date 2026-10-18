/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 */
package sixtwo;

import java.util.function.Consumer;
import net.minecraft.client.texture.AbstractTexture;
import sixtwo.kQ;
import sixtwo.kS;
import sixtwo.lI;
import sixtwo.lM;
import sixtwo.lN;

public sealed interface kP<T>
permits kQ {
    public void flush();

    default public lI command(T t, lN lN2, Consumer<kP<T>> consumer) {
        return new lM<T>(this, lN2, consumer, t);
    }

    public kS defaultState();

    public void render(T var1);

    default public void startBatch() {
        this.startBatch(this.defaultState());
    }

    default public void startBatch(AbstractTexture abstractTexture) {
        this.startBatch(abstractTexture, this.defaultState());
    }

    default public void startBatch(AbstractTexture abstractTexture, kS kS2) {
    }

    default public void startBatch(kS kS2) {
    }

    public void endBatch();

    default public void swapTexture(AbstractTexture abstractTexture) {
    }
}

