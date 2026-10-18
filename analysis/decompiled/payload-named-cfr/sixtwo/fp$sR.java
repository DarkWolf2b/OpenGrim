/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.Packet
 */
package sixtwo;

import native.Loader;
import net.minecraft.network.packet.Packet;

final class fp$sR
extends Record {
    private final Packet<?> packet;
    private final long time;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fp$sR(Packet<?> packet) {
        this(packet, System.currentTimeMillis());
    }

    private fp$sR(Packet<?> packet, long l2) {
        this.packet = packet;
        this.time = l2;
    }

    static {
        Loader.doInit(fp$sR.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native long time();

    public native Packet<?> packet();
}

