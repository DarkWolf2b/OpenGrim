/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.ClientConnection
 *  net.minecraft.network.listener.PacketListener
 *  net.minecraft.network.packet.Packet
 */
package sixtwo;

import net.minecraft.network.ClientConnection;
import net.minecraft.network.listener.PacketListener;
import net.minecraft.network.packet.Packet;
import sixtwo.hH;

public abstract class gL
extends hH {
    private Packet<?> AweKt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gL(Packet<?> packet) {
        this.AweKt = packet;
    }

    public Packet<?> bcf() {
        return this.AweKt;
    }

    public static class tk
    extends gL {
        private final PacketListener OXWCb;
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public <T extends PacketListener> tk(Packet<T> packet, PacketListener packetListener) {
            super(packet);
            this.OXWCb = packetListener;
        }

        public PacketListener dpn() {
            return this.OXWCb;
        }
    }

    public static class tj
    extends gL {
        private final ClientConnection EkqAB;
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public <T extends PacketListener> tj(Packet<T> packet, ClientConnection clientConnection) {
            super(packet);
            this.EkqAB = clientConnection;
        }

        public ClientConnection dpm() {
            return this.EkqAB;
        }
    }
}

