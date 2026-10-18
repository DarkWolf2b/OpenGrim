package dev.opengrim.modules.combat;

import java.lang.reflect.Field;
import java.util.concurrent.atomic.DoubleAdder;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.attribute.EntityAttributes;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket;

/**
 * Crystal Optimizer (registry sixtwo.eY, module id 33): "Optimizes exploding
 * crystals".
 *
 * <p>Port of sixtwo.eY (analysis/decompiled/casesafe/payload-named-cfr/sixtwo/eY_.java):
 * zero settings; the constructor only creates the {@link DoubleAdder} damage
 * accumulator (eY.java:26, 34); the sole event listener is the outgoing-packet
 * handler aFE(gL$tj) (eY.java:48-49); helpers aFI(EndCrystalEntity) per-crystal
 * step, aFF() gate, aFG() double getter, aFH(ItemStack) per-stack damage and
 * corpus-only aFJ(RegistryEntry, EntityAttributeModifier) — all bodies
 * virtualized; spec: analysis/specs/handlers/eY.md (verified as sixtwo.eY —
 * not ey Blink).
 *
 * <p>Recovered structure mirrored here:
 * <ul>
 *   <li>aFE reads the attacked entity id out of the outgoing interact packet —
 *       the pool slice proves the mixin accessor over
 *       ServerboundInteractPacket/PlayerInteractEntityC2SPacket's entityId
 *       field (handlers/eY.md "main slice": mixin/accessors/
 *       ServerboundInteractPacketAccessor + getEntityId). Our stack has no such
 *       accessor, so the id is read via reflection over the private
 *       {@code entityId} field instead — only-stack-required substitute.
 *   <li>Damage inputs proven by the same slice: EntityAttributes.STRENGTH /
 *       WEAKNESS with StatusEffectInstance.getAmplifier() (field_5911/field_5910,
 *       method_6112, method_5578), EntityAttributes.ATTACK_DAMAGE
 *       (field_23721) and ItemStack.applyAttributeModifiers(EquipmentSlot.MAINHAND, ...)
 *       (field_6173, method_57354).</li>
 *   <li>Accumulation through DoubleAdder reset/sum (aFG() = DoubleAdder.sum
 *       shape).</li>
 * </ul>
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eY_.jsonl,
 * window [169777.3,169781.3]): {@code aFE} entered 1&times; (the window's single
 * outgoing packet). Body order pinned: the in-game guard {@code gg.bab()} &rarr; 1
 * ran first, then {@code gL.bcf()} (the event's packet getter), then the body
 * returned before any of aFF/aFH/aFI — the sent packet was not an attack
 * interact, so the crystal path was not reached. Capture condition: send an
 * attack interact packet (left-click an entity) inside the window — then
 * aFF/aFH/aFI (and the aFJ modifier consumer) should run and the damage
 * arithmetic becomes observable. Note the handler is registered for the general
 * outbound packet event (gL$tj wraps any packet, gL_.java:44-56) and filters
 * inside the body.
 */
public class CrystalOptimizer extends Module {
	private final DoubleAdder damage = new DoubleAdder();

	private static Field cachedEntityIdField;
	private static boolean fieldLookupDone;

	public CrystalOptimizer() {
		super("crystal_optimizer", "Crystal Optimizer", "Optimizes exploding crystals",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		damage.reset();
	}

	/**
	 * aFE(gL$tj) (eY.java:48-49): outgoing-packet listener — crystal-attack
	 * interception. Resolves the attacked entity from the packet's entityId
	 * (accessor equivalent) and, when it is an end crystal, records the hit's
	 * damage via aFH(mainhand stack).
	 */
	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		// trace 2026-10-17: aFE ran the gg.bab() in-game guard (→1) before the
		// gL.bcf() packet read — the in-game check is the handler's first statement.
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (!(event.packet() instanceof PlayerInteractEntityC2SPacket packet)) {
			return;
		}
		int entityId = packetEntityId(packet);
		if (entityId < 0) {
			return;
		}
		Entity target = client.world.getEntityById(entityId);
		// aFJ/aFI/aFF bodies are unrecovered VM bytecode; the crystal filter is
		// the registry-declared subject ("Optimizes exploding crystals").
		if (!(target instanceof EndCrystalEntity)) {
			return;
		}
		damage.add(stackDamage(player, player.getMainHandStack()));
	}

	/**
	 * aFG() (eY.java:53): double getter over the accumulator —
	 * {@code DoubleAdder.sum} shaped.
	 */
	public double aFG() {
		return damage.sum();
	}

	/**
	 * aFH(ItemStack) (eY.java:55): per-stack damage via
	 * applyAttributeModifiers. <b>Parity note</b>: only the inputs are proven
	 * — the exact combination (how STRENGTH/WEAKNESS amplifiers, ATTACK_DAMAGE
	 * and the mainhand attribute modifiers sum) is virtualized VM bytecode
	 * (handlers/eY.md "Per-handler semantics": "the damage formula ... is not
	 * recovered — only the inputs are proven"). The arithmetic below is a
	 * designer-discretion approximation over the *proven inputs only*; it is
	 * NOT a recovered formula.
	 */
	private static double stackDamage(ClientPlayerEntity player, ItemStack stack) {
		double base = 1.0;
		if (player.hasStatusEffect(net.minecraft.entity.effect.StatusEffects.STRENGTH)) {
			base += 3.0 * (player.getStatusEffect(net.minecraft.entity.effect.StatusEffects.STRENGTH).getAmplifier() + 1);
		}
		if (player.hasStatusEffect(net.minecraft.entity.effect.StatusEffects.WEAKNESS)) {
			base -= 4.0 * (player.getStatusEffect(net.minecraft.entity.effect.StatusEffects.WEAKNESS).getAmplifier() + 1);
		}
		final double[] modifier = { 0.0 };
		try {
			stack.applyAttributeModifiers(net.minecraft.entity.EquipmentSlot.MAINHAND,
					(entry, mod) -> modifier[0] += mod.value());
		} catch (RuntimeException ignored) {
		}
		if (player.getAttributes() != null && player.getAttributes()
				.hasAttribute(EntityAttributes.ATTACK_DAMAGE)) {
			base += player.getAttributeValue(EntityAttributes.ATTACK_DAMAGE) - 1.0;
		}
		return Math.max(0.0, base + modifier[0]);
	}

	/**
	 * Stack-required substitute for the recovered
	 * {@code ServerboundInteractPacketAccessor.getEntityId} mixin access over
	 * the packet's private {@code entityId} field. Production (intermediary)
	 * fallback {@code field_12870} = {@code entityId}
	 * (yarn-1.21.11+build.6.tiny: PlayerInteractEntityC2SPacket).
	 */
	private static int packetEntityId(PlayerInteractEntityC2SPacket packet) {
		Field field = entityIdField();
		if (field == null) {
			return -1;
		}
		try {
			return field.getInt(packet);
		} catch (IllegalAccessException ignored) {
			return -1;
		}
	}

	private static Field entityIdField() {
		if (!fieldLookupDone) {
			fieldLookupDone = true;
			for (String name : new String[] { "entityId", "field_12870" }) {
				try {
					Field field = PlayerInteractEntityC2SPacket.class.getDeclaredField(name);
					field.setAccessible(true);
					cachedEntityIdField = field;
					break;
				} catch (ReflectiveOperationException ignored) {
				}
			}
		}
		return cachedEntityIdField;
	}
}
