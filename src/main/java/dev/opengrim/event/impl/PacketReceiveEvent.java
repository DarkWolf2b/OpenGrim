package dev.opengrim.event.impl;

import dev.opengrim.event.Cancellable;
import net.minecraft.network.packet.Packet;

/** Fired when a server-bound packet arrives, before client processing; cancellable. */
public class PacketReceiveEvent implements Cancellable {
	private Packet<?> packet;
	private boolean cancelled;

	public PacketReceiveEvent(Packet<?> packet) {
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
