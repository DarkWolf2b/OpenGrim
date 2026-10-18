package dev.opengrim.modules.combat;

import java.util.Comparator;
import java.util.List;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.IntSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.util.math.Box;
import org.lwjgl.glfw.GLFW;

/**
 * Auto Hit Crystal (registry sixtwo.eW, module id 29): "Automatically pops crystals".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/casesafe/handlers/eW_.md (the source-map's handlers/eW.md is a
 * case-collapsed twin). Evidence: eW.java:39-204 constructor with Place Delay
 * eW.java:54, Switch Delay eW.java:68, Spoof CPS eW.java:79, Activation Key
 * eW.java:95 ({@code cD .VO(1)} — key code 1, per jb.byM the key-name map),
 * Work With Items eW.java:112 ({@code cK} item set, pool {@code jc.WnbNG},
 * preselected NETHERITE/DIAMOND/IRON/STONE/GOLDEN/WOODEN_SWORD eW.java:114-119),
 * Switch Back To Slot eW.java:141, Limit Crystal eW.java:156 ({@code .SO(2)},
 * children Single eW.java:165 / Double eW.java:174 / Infinite eW.java:185),
 * Cancel On Use eW.java:200 (default on); timers {@code qcmQt}/{@code cCsEl}
 * eW.java:201-202, CPS scheduler {@code LSGzZ = new ol(this)} eW.java:203,
 * latches {@code gdpqr}/{@code salDh}/{@code sXTCM} eW.java:27-29, counter
 * {@code eresX} eW.java:30. Handlers: aEA(gO$tm) tick cycle eW.java:224-225,
 * aEz(gH$th) player scan eW.java:231-232, aED() eW.java:227, aEB() eW.java:236,
 * aEC() eW.java:238, aaj() eW.java:211-212. Trace 2026-10-17
 * (by-class-casesafe/eW_.jsonl): aaj → aED once (enable-time), aEz twice — no
 * numeric exits, no [N] body observable.
 *
 * <p>Recovered contract (handlers/eW_.md "Per-handler semantics"): aEA runs the
 * place/hit cycle — dimension gate ({@code method_8597}), client-side ghost
 * {@code EndCrystalEntity} spawn + {@code setId} feeding the {@code qR}
 * ghost-crystal registry ({@code ddR}), attack submitted as
 * {@code PlayerInteractEntityC2SPacket.interactAt} + {@code HandSwingC2SPacket},
 * gated by the Place/Switch Delay timers; aEz scans
 * {@code ClientWorld.getPlayers()} for a safety predicate.
 *
 * <p>High-probability guesses (labeled): the Work With Items held-item gate
 * (spec "Settings → behavior": stand down when the held stack is outside the
 * selection; the {@code cK} pool is representable only as the AutoTrap-style
 * group of per-item toggles — AutoTrap.java:53-54 precedent), the Activation
 * Key as a hold-to-activate gate (mouse-aware, ClickAction.java:155-163
 * convention; code ≤ 7 = mouse button), and the attack as the vanilla
 * attack+swing packet pair (see below).
 *
 * <p>Divergences ([U], not implemented): the ghost-crystal prediction
 * machinery ({@code qR.ddR} registry, {@code setId}) and the recovered
 * {@code interactAt}+swing packet submission — the rebuild attacks the real
 * crystal via {@link TriggerBot#attack} (attackEntity+swing) instead; the
 * dimension gate (which dimensions is unrecovered — do not guess); the aEz
 * player-scan predicate; the {@code ol} CPS scheduler behind Spoof CPS; and
 * the slot-switch step behind Switch Delay/Switch Back To Slot (target slot
 * unrecovered — the setting gates a second cooldown here).
 */
public class AutoHitCrystal extends Module {
	private static final double REACH = 4.5;

	private final DoubleSetting placeDelay = register(new DoubleSetting("place_delay", 1.0, 0.0, 20.0, 0.0, " ticks"));
	private final DoubleSetting switchDelay = register(new DoubleSetting("switch_delay", 1.0, 0.0, 20.0, 0.0, " ticks"));
	private final BoolSetting spoofCps = register(new BoolSetting("spoof_cps", false));
	private final IntSetting activationKey = register(new IntSetting("activation_key", -999, 348, 1));
	private final GroupSetting workWithItems = register(new GroupSetting("work_with_items"));
	private final BoolSetting netheriteSword = new BoolSetting("netherite_sword", true);
	private final BoolSetting diamondSword = new BoolSetting("diamond_sword", true);
	private final BoolSetting ironSword = new BoolSetting("iron_sword", true);
	private final BoolSetting stoneSword = new BoolSetting("stone_sword", true);
	private final BoolSetting goldenSword = new BoolSetting("golden_sword", true);
	private final BoolSetting woodenSword = new BoolSetting("wooden_sword", true);
	private final BoolSetting switchBackToSlot = register(new BoolSetting("switch_back_to_slot", false));
	private final ModeSetting limitCrystal = register(new ModeSetting("limit_crystal",
			List.of("single", "double", "infinite"), "infinite"));
	private final BoolSetting cancelOnUse = register(new BoolSetting("cancel_on_use", true));

	private int placeCooldown;
	private int switchCooldown;
	private int hitsInSequence;
	private int previousSlot = -1;
	private long spoofSeed;

	public AutoHitCrystal() {
		super("auto_hit_crystal", "Auto Hit Crystal", "Automatically pops crystals", ModuleCategory.COMBAT);
		workWithItems.add(netheriteSword);
		workWithItems.add(diamondSword);
		workWithItems.add(ironSword);
		workWithItems.add(stoneSword);
		workWithItems.add(goldenSword);
		workWithItems.add(woodenSword);
	}

	@Override
	public void onEnable() {
		placeCooldown = 0;
		switchCooldown = 0;
		hitsInSequence = 0;
		previousSlot = -1;
		spoofSeed = 0;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (!isKeyDown(client.getWindow().getHandle(), activationKey.getValue())) {
			return;
		}
		if (!isWorkItemSelected(player)) {
			return;
		}
		if (cancelOnUse.getValue() && player.isUsingItem()) {
			restore(player);
			return;
		}
		if (placeCooldown > 0) {
			placeCooldown--;
		}
		if (switchCooldown > 0) {
			switchCooldown--;
		}
		if (placeCooldown > 0 || switchCooldown > 0) {
			return;
		}
		int limit = switch (limitCrystal.getValue()) {
			case "single" -> 1;
			case "double" -> 2;
			default -> Integer.MAX_VALUE;
		};
		if (hitsInSequence >= limit) {
			restore(player);
			return;
		}
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(REACH);
		client.world.getEntitiesByClass(EndCrystalEntity.class, box, EndCrystalEntity::isAlive)
				.stream()
				.min(Comparator.comparingDouble(player::distanceTo))
				.ifPresent(crystal -> {
					if (previousSlot < 0) {
						previousSlot = player.getInventory().getSelectedSlot();
					}
					TriggerBot.attack(client, player, crystal);
					spoofSeed++;
					placeCooldown = (int) Math.ceil(placeDelay.getValue());
					switchCooldown = (int) Math.ceil(switchDelay.getValue());
					hitsInSequence++;
					if (!spoofCps.getValue()) {
						restore(player);
					}
				});
	}

	/**
	 * [G] Work With Items gate (handlers/eW_.md "Settings → behavior"): stand
	 * down when the held stack is outside the selection. The original's
	 * {@code cK} pool is all items with the six sword tiers preselected; the
	 * rebuild represents exactly that selection (AutoTrap.java:53-54
	 * convention).
	 */
	private boolean isWorkItemSelected(ClientPlayerEntity player) {
		ItemStack held = player.getMainHandStack();
		return (netheriteSword.getValue() && held.isOf(Items.NETHERITE_SWORD))
				|| (diamondSword.getValue() && held.isOf(Items.DIAMOND_SWORD))
				|| (ironSword.getValue() && held.isOf(Items.IRON_SWORD))
				|| (stoneSword.getValue() && held.isOf(Items.STONE_SWORD))
				|| (goldenSword.getValue() && held.isOf(Items.GOLDEN_SWORD))
				|| (woodenSword.getValue() && held.isOf(Items.WOODEN_SWORD));
	}

	/**
	 * [G] Activation Key hold gate (cD key code; code ≤
	 * {@code GLFW_MOUSE_BUTTON_LAST} is a mouse button — ClickAction.java:155-163
	 * convention). The default 1 is the second mouse button; the exact original
	 * gate form (hold vs edge) is VM-hidden.
	 */
	private static boolean isKeyDown(long handle, int code) {
		if (code < 0) {
			return false;
		}
		if (code <= GLFW.GLFW_MOUSE_BUTTON_LAST) {
			return GLFW.glfwGetMouseButton(handle, code) == GLFW.GLFW_PRESS;
		}
		return GLFW.glfwGetKey(handle, code) == GLFW.GLFW_PRESS;
	}

	private void restore(ClientPlayerEntity player) {
		if (switchBackToSlot.getValue() && previousSlot >= 0) {
			player.getInventory().setSelectedSlot(previousSlot);
		}
		previousSlot = -1;
		if (placeCooldown <= 0 && switchCooldown <= 0) {
			hitsInSequence = 0;
		}
	}
}
