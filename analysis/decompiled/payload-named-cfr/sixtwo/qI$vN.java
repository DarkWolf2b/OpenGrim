/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import javax.sound.sampled.AudioFormat;
import native.Loader;

final class qI$vN
extends Record {
    private final AudioFormat format;
    private final byte[] pcmBytes;
    private final long frameLength;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private qI$vN(AudioFormat audioFormat, byte[] byArray, long l2) {
        this.format = audioFormat;
        this.pcmBytes = byArray;
        this.frameLength = l2;
    }

    static {
        Loader.doInit(qI$vN.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native AudioFormat format();

    public native long frameLength();

    public native byte[] pcmBytes();
}

