package dev.opengrim.mixin;

import dev.opengrim.event.EventBus;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.PacketSendEvent;
import io.netty.channel.ChannelHandlerContext;
import net.minecraft.network.ClientConnection;
import net.minecraft.network.packet.Packet;
import org.spongepowered.asm.mixin.Mixin;
import org.spongepowered.asm.mixin.injection.At;
import org.spongepowered.asm.mixin.injection.Inject;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;

@Mixin(ClientConnection.class)
public class ClientConnectionMixin {
	/**
	 * Re-entrancy guard: packets sent from inside a PacketSendEvent dispatch
	 * (listener replacements, or listener-initiated sends) must not re-trigger
	 * the event. The replaced packet was produced by the listeners and is
	 * already vetted; re-posting it made replacement listeners run again on
	 * their own output (RotationManager look rewrite: replace -> re-send ->
	 * replace -> ...) and recursed to a StackOverflowError.
	 */
	private static final ThreadLocal<Boolean> opengrim$dispatching = ThreadLocal.withInitial(() -> Boolean.FALSE);

	@Inject(method = "send(Lnet/minecraft/network/packet/Packet;)V", at = @At("HEAD"), cancellable = true)
	public void opengrim$onPacketSend(Packet<?> packet, CallbackInfo ci) {
		if (Boolean.TRUE.equals(opengrim$dispatching.get())) {
			return;
		}
		opengrim$dispatching.set(Boolean.TRUE);
		try {
			PacketSendEvent event = EventBus.get().post(new PacketSendEvent(packet));
			if (event.cancelled()) {
				ci.cancel();
			} else if (event.packet() != packet) {
				// a listener replaced the packet; suppress the original and send the new one
				ci.cancel();
				((ClientConnection) (Object) this).send(event.packet());
			}
		} finally {
			opengrim$dispatching.set(Boolean.FALSE);
		}
	}

	@Inject(method = "channelRead0(Lio/netty/channel/ChannelHandlerContext;Lnet/minecraft/network/packet/Packet;)V",
			at = @At("HEAD"), cancellable = true)
	public void opengrim$onPacketReceive(ChannelHandlerContext context, Packet<?> packet, CallbackInfo ci) {
		PacketReceiveEvent event = EventBus.get().post(new PacketReceiveEvent(packet));
		if (event.cancelled()) {
			ci.cancel();
		}
	}
}
