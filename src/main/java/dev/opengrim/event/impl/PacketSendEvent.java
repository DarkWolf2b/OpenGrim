package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.network.packet.Packet;

/** Fired just before a client-bound packet is sent; cancellable. */
public class PacketSendEvent implements Cancellable {
	private Packet<?> packet;
	private boolean cancelled;

	public PacketSendEvent(Packet<?> packet) {
		this.packet = packet;
	}

	public Packet<?> packet() {
		return packet;
	}

	public void setPacket(Packet<?> packet) {
		this.packet = packet;
	}

	@Override
	public boolean cancelled() {
		return cancelled;
	}

	@Override
	public void setCancelled(boolean cancelled) {
		this.cancelled = cancelled;
	}
}
