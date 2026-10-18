package dev.opengrim.event;

import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.event.impl.AttackPressEvent;
import dev.opengrim.event.impl.UseItemEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import net.fabricmc.fabric.api.client.rendering.v1.world.WorldRenderEvents;
import net.fabricmc.fabric.api.event.client.player.ClientPreAttackCallback;
import net.fabricmc.fabric.api.event.player.AttackEntityCallback;
import net.fabricmc.fabric.api.event.player.UseItemCallback;
import net.minecraft.util.ActionResult;

/**
 * Wires Fabric API callbacks into the OpenGrim event bus. Call
 * {@link #init()} once during client initialization.
 */
public final class EventBridge {
	private EventBridge() {
	}

	public static void init() {
		WorldRenderEvents.AFTER_ENTITIES.register(ctx -> EventBus.get().post(new WorldRenderEvent(
				ctx, ctx.gameRenderer().getCamera(), WorldRenderEvent.Phase.AFTER_ENTITIES)));
		WorldRenderEvents.BEFORE_TRANSLUCENT.register(ctx -> EventBus.get().post(new WorldRenderEvent(
				ctx, ctx.gameRenderer().getCamera(), WorldRenderEvent.Phase.BEFORE_TRANSLUCENT)));
		WorldRenderEvents.END_MAIN.register(ctx -> EventBus.get().post(new WorldRenderEvent(
				ctx, ctx.gameRenderer().getCamera(), WorldRenderEvent.Phase.END_MAIN)));

		AttackEntityCallback.EVENT.register((player, world, hand, entity, hitResult) -> {
			AttackEntityEvent event = EventBus.get().post(new AttackEntityEvent(player, entity));
			return event.cancelled() ? ActionResult.FAIL : ActionResult.PASS;
		});

		// Fabric semantics: returning true cancels the vanilla attack handling
		// (block breaking, entity attacking, hand swing) — return true only when
		// our event was cancelled (previously inverted: cancelled everything).
		ClientPreAttackCallback.EVENT.register((client, player, button) ->
				EventBus.get().post(new AttackPressEvent()).cancelled());

		UseItemCallback.EVENT.register((player, world, hand) -> {
			UseItemEvent event = EventBus.get().post(new UseItemEvent(player, world, hand));
			return event.cancelled() ? ActionResult.FAIL : ActionResult.PASS;
		});
	}
}
