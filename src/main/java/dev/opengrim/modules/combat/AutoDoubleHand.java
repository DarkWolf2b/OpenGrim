package dev.opengrim.modules.combat;

import java.util.List;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.EntityStatuses;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.screen.slot.SlotActionType;
import net.minecraft.util.math.Box;

/**
 * Auto Double Hand (registry sixtwo.eZ): "Automatically does double hand".
 *
 * <p>Port of sixtwo.eZ (payload-decrypted/sixtwo/eZ.java:29-151 constructor,
 * :160-184 native surface; spec analysis/specs/handlers/eZ.md). Settings in
 * declaration order: Totem Item (default TOTEM_OF_UNDYING, eZ.java:43), Double
 * Hand After Pop (false, eZ.java:66), Crystal Predict (true, eZ.java:83),
 * Sword Predict (true, eZ.java:98), Check Players Look (true, eZ.java:118),
 * Totem On Inventory (false, eZ.java:138), Totem Slot 1.0/1.0-9.0/1.0
 * (eZ.java:150; suffix AMrtH native-decrypted, unrecovered — null here).
 *
 * <p>Totem-pop handling reads {@link PacketReceiveEvent} for
 * {@link EntityStatusS2CPacket}; crystal/player prediction runs in
 * {@link #onTick} against nearby crystals and players looking at the user.
 *
 * <p><b>High-probability guesses</b> (labeled): the pop status byte is compared
 * against {@link EntityStatuses#USE_TOTEM_OF_UNDYING} (35) — the canonical
 * totem-pop status; the compared constant is VM-internal and eZ.md
 * "Unrecovered" #1 says never to encode it as fact. Crystal prediction uses a
 * vanish latch within 8 blocks and Sword Predict a 6-block looking-player test
 * — the real formulas (aFR/aFS/aFV, aFQ/aFT/aFU with jj.bCL/jj.bBt) are
 * unrecovered (eZ.md #3, #6). The offhand swap is the two-tick PICKUP pair
 * stack adaptation; the original's equip action is unrecovered (eZ.md #2).
 *
 * <p>Totem Slot is wired per the spec's inferred role: with Totem On Inventory
 * off the totem is taken from the fixed hotbar slot (1-9 → screen-handler
 * slots 36-44); with it on, the whole inventory is searched
 * (findFirst/orElse pipeline, eZ.md "Settings → behavior mapping").
 */
public class AutoDoubleHand extends Module {
	private static final int OFFHAND_SLOT = 45;

	private final ModeSetting totemItem = register(new ModeSetting("totem_item",
			List.of("totem_of_undying"), "totem_of_undying"));
	private final BoolSetting doubleHandAfterPop = register(new BoolSetting("double_hand_after_pop", false));
	private final BoolSetting crystalPredict = register(new BoolSetting("crystal_predict", true));
	private final BoolSetting swordPredict = register(new BoolSetting("sword_predict", true));
	private final BoolSetting checkPlayersLook = register(new BoolSetting("check_players_look", true));
	private final BoolSetting totemOnInventory = register(new BoolSetting("totem_on_inventory", false));
	private final DoubleSetting totemSlot = register(new DoubleSetting("totem_slot", 1.0, 1.0, 9.0, 1.0, null));

	private boolean popped;
	private boolean lastSawCrystal;
	private int pendingSource = -1;

	public AutoDoubleHand() {
		super("auto_double_hand", "Auto Double Hand", "Automatically does double hand",
				ModuleCategory.COMBAT);
	}

	@Override
	public void onEnable() {
		popped = false;
		lastSawCrystal = false;
		pendingSource = -1;
	}

	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!(event.packet() instanceof EntityStatusS2CPacket status)) {
			return;
		}
		if (client.player == null || client.world == null) {
			return;
		}
		if (status.getStatus() != EntityStatuses.USE_TOTEM_OF_UNDYING) {
			return;
		}
		if (status.getEntity(client.world) == client.player) {
			popped = true;
		}
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null || client.interactionManager == null) {
			return;
		}
		if (pendingSource >= 0) {
			client.interactionManager.clickSlot(player.currentScreenHandler.syncId, OFFHAND_SLOT,
					0, SlotActionType.PICKUP, player);
			pendingSource = -1;
			return;
		}
		if (!player.getOffHandStack().isEmpty()) {
			return;
		}
		if (doubleHandAfterPop.getValue() && !popped) {
			updateCrystalLatch(client, player);
			return;
		}
		popped = false;
		if (crystalPredict.getValue() && crystalThreat(client, player)) {
			return;
		}
		if (swordPredict.getValue() && swordThreat(client, player)) {
			return;
		}
		int source = findTotem(player);
		if (source < 0) {
			return;
		}
		client.interactionManager.clickSlot(player.currentScreenHandler.syncId, source,
				0, SlotActionType.PICKUP, player);
		pendingSource = source;
	}

	private void updateCrystalLatch(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(8.0);
		boolean any = !client.world.getEntitiesByClass(EndCrystalEntity.class, box, e -> true).isEmpty();
		lastSawCrystal = any;
	}

	private boolean crystalThreat(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(8.0);
		boolean any = !client.world.getEntitiesByClass(EndCrystalEntity.class, box, e -> true).isEmpty();
		boolean vanished = lastSawCrystal && !any;
		lastSawCrystal = any;
		return vanished;
	}

	private boolean swordThreat(MinecraftClient client, ClientPlayerEntity player) {
		Box box = new Box(player.getEntityPos(), player.getEntityPos()).expand(6.0);
		return !client.world.getOtherEntities(player, box,
				e -> e instanceof net.minecraft.entity.player.PlayerEntity p && p.isAlive()
						&& (!checkPlayersLook.getValue() || isLookingAt(p, player))).isEmpty();
	}

	private static boolean isLookingAt(net.minecraft.entity.player.PlayerEntity watcher,
			ClientPlayerEntity target) {
		return watcher.getRotationVec(1.0f)
				.dotProduct(target.getEyePos().subtract(watcher.getEyePos()).normalize()) > 0.0;
	}

	private int findTotem(ClientPlayerEntity player) {
		var handler = player.currentScreenHandler;
		if (!totemOnInventory.getValue()) {
			// Fixed source slot: Totem Slot 1-9 → hotbar screen-handler slots 36-44.
			int slot = 36 + totemSlot.getValue().intValue() - 1;
			return handler.getSlot(slot).getStack().isOf(Items.TOTEM_OF_UNDYING) ? slot : -1;
		}
		for (int slot = 9; slot < OFFHAND_SLOT; slot++) {
			ItemStack stack = handler.getSlot(slot).getStack();
			if (stack.isOf(Items.TOTEM_OF_UNDYING)) {
				return slot;
			}
		}
		return -1;
	}
}

