package dev.opengrim.modules.utility;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketSendEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.decoration.ItemFrameEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Vec3d;

/**
 * Item Frame Blocker (registry sixtwo.dD, module id 70): "Blocks putting items to an item frame".
 *
 * <p>Port of sixtwo.dD (casesafe/payload-decrypted/sixtwo/dD_.java:23-94; behavior spec
 * analysis/specs/handlers/dD.md). Identity: category {@code gh.qBzlZ} (Misc → utility-
 * function package, per batch6.md). Settings ctor order dD_.java:26-93: Mode
 * radio {@code ZKjem} with children All Items ({@code Qtxqy}), Only Weapons
 * ({@code VCHhf}), Specified Slots ({@code ABbIM}) and the Slots action {@code mJHrk}.
 * The one {@code @hG} listener {@code akB(gO$tm)} (dD_.java:107-108) runs the
 * recovered pipeline (handlers/dD.md "Behavior contract"): crosshairTarget
 * ({@code field_1765}) → {@code HitResult.getType() == Type.ENTITY} ({@code method_17783},
 * {@code field_1331}) → {@code EntityHitResult.getEntity()} ({@code method_17782}) →
 * {@code ItemFrameEntity} ({@code class_1533}) test → item filter → cancel the use
 * ({@code hH.bdX(true)}). Weapon filter = recovered predicate {@code oR.cJV} (oR.java:516):
 * {@code isIn(ItemTags.SWORDS) || isIn(ItemTags.AXES) || isOf(Items.MACE)} on the main
 * hand.
 *
 * <p>Stack-required adaptation: our bus has no client "use" event (original
 * {@code gO$tm}), so the cancel is applied to the resulting
 * {@code PlayerInteractEntityC2SPacket} instead; the crosshair pipeline above is
 * evaluated at packet time.
 *
 * <p><b>Recovered defaults (2026-10-18 re-verify):</b> both guesses are now
 * evidenced from the widget bytecode. Mode is a {@code ct}+{@code cu} radio group
 * whose default is index 0 unless an option is marked: {@code ct}'s constructor
 * sets {@code kErPl = 0} (casesafe/payload-named-cfr/sixtwo/ct.java:33-41) and
 * the only writer of a different index is {@code cu.SY()} →
 * {@code SN(indexOf(this))} (cu.java:200-202); none of dD's three options calls
 * {@code .SY()} (dD_.java:26-81), so the default is the first option =
 * All Items. The "Slots" picker is a {@code cz} slot-index set whose field
 * initializer is an empty {@code HashSet} (cz.java:26) and dD's constructor adds
 * no {@code .Uw(...)}/{@code .UA(...)} seed (dD_.java:82-93) — so all nine
 * hotbar toggles default OFF (the earlier "defaults unrecovered" note is
 * superseded).
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/): the module was never
 * enabled in the capture (load only), so {@code akB(gO$tm)} did not run.
 * Capture condition: right-click an item frame while holding an item, with the
 * module enabled (the use event fires the decision pipeline).
 */
public class ItemFrameBlocker extends Module {
	private final ModeSetting mode = register(new ModeSetting("mode",
			List.of("all_items", "only_weapons", "specified_slots"), "all_items"));
	private final GroupSetting slots = register(new GroupSetting("slots"));
	private final BoolSetting slot0 = new BoolSetting("slot_0", false);
	private final BoolSetting slot1 = new BoolSetting("slot_1", false);
	private final BoolSetting slot2 = new BoolSetting("slot_2", false);
	private final BoolSetting slot3 = new BoolSetting("slot_3", false);
	private final BoolSetting slot4 = new BoolSetting("slot_4", false);
	private final BoolSetting slot5 = new BoolSetting("slot_5", false);
	private final BoolSetting slot6 = new BoolSetting("slot_6", false);
	private final BoolSetting slot7 = new BoolSetting("slot_7", false);
	private final BoolSetting slot8 = new BoolSetting("slot_8", false);

	public ItemFrameBlocker() {
		super("item_frame_blocker", "Item Frame Blocker", "Blocks putting items to an item frame",
				ModuleCategory.UTILITY);
		setBind(-999);
		slots.add(slot0);
		slots.add(slot1);
		slots.add(slot2);
		slots.add(slot3);
		slots.add(slot4);
		slots.add(slot5);
		slots.add(slot6);
		slots.add(slot7);
		slots.add(slot8);
	}

	/**
	 * Port of the {@code akB} decision pipeline (dD handlers token stream
	 * 0x9309,0x19f): crosshair target check + mode filter; cancels the use on
	 * the intercepted packet click. {@code gO$tm} is the right-click *use*
	 * event, so left-click attacks are excluded via the packet's
	 * {@code handle} dispatch ({@code method_34209}, the 1.21.11 replacement
	 * for reading the old {@code action} field).
	 */
	@Subscribe
	public void onPacketSend(PacketSendEvent event) {
		if (!(event.packet() instanceof PlayerInteractEntityC2SPacket packet)) {
			return;
		}
		if (isAttack(packet)) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}

		// crosshairTarget -> HitResult.getType() == ENTITY -> getEntity() instanceof
		// ItemFrameEntity (handlers/dD.md pipeline steps 1-4).
		HitResult target = client.crosshairTarget;
		if (target == null || target.getType() != HitResult.Type.ENTITY
				|| !(((EntityHitResult) target).getEntity() instanceof ItemFrameEntity)) {
			return;
		}

		if (shouldBlock(player)) {
			event.cancel();
		}
	}

	/**
	 * Mode filter (handlers/dD.md "Settings → behavior mapping"). All Items =
	 * block any use on the frame; Only Weapons = recovered predicate
	 * {@code oR.cJV} on the main hand; Specified Slots = only while holding an
	 * item from one of the picked hotbar slots.
	 */
	private boolean shouldBlock(ClientPlayerEntity player) {
		String currentMode = mode.getValue();
		if ("only_weapons".equals(currentMode)) {
			return isWeapon(player.getMainHandStack());
		}
		if ("specified_slots".equals(currentMode)) {
			int selected = player.getInventory().getSelectedSlot();
			return switch (selected) {
				case 0 -> slot0.getValue();
				case 1 -> slot1.getValue();
				case 2 -> slot2.getValue();
				case 3 -> slot3.getValue();
				case 4 -> slot4.getValue();
				case 5 -> slot5.getValue();
				case 6 -> slot6.getValue();
				case 7 -> slot7.getValue();
				case 8 -> slot8.getValue();
				default -> false;
			};
		}
		return true;
	}

	/** Recovered predicate {@code oR.cJV} (oR.java:516): swords || axes || mace. */
	private static boolean isWeapon(ItemStack stack) {
		return stack.isIn(ItemTags.SWORDS) || stack.isIn(ItemTags.AXES) || stack.isOf(Items.MACE);
	}

	/**
	 * Whether the packet is the left-click ATTACK interaction (breaking the
	 * frame) rather than a use interaction. Dispatched through the packet's
	 * public {@code handle(Handler)} method so no accessor mixin is needed.
	 */
	private static boolean isAttack(PlayerInteractEntityC2SPacket packet) {
		boolean[] attack = { false };
		packet.handle(new PlayerInteractEntityC2SPacket.Handler() {
			@Override
			public void attack() {
				attack[0] = true;
			}

			@Override
			public void interact(Hand hand) {
			}

			@Override
			public void interactAt(Hand hand, Vec3d pos) {
			}
		});
		return attack[0];
	}
}
