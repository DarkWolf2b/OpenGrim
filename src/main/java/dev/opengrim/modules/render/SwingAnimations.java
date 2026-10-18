package dev.opengrim.modules.render;

import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.item.consume.UseAction;

import dev.opengrim.mixin.ItemInHandRendererAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;

/**
 * Swing Animations (registry sixtwo.cQ): "Changes look of swing animation".
 *
 * <p>Port of sixtwo.cQ (analysis/decompiled/payload-decrypted/sixtwo/cQ.java
 * constructor 68-87, YI gate 170-210, YF instant equip 213-301, YH item filter
 * 316-433, YG transform 436-545; spec analysis/specs/handlers/cQ.md).
 *
 * <p>Recovered behavior:
 * <ul>
 *   <li>YF (cQ.java:213-301): on a held-item change, when the first-person
 *       renderer's equip progress is below 1 it is snapped to 1 and the cached
 *       hand stacks are refreshed — the equip animation is skipped. Ported via
 *       {@link ItemInHandRendererAccessor} (the original's own
 *       {@code mixin.accessors.ItemInHandRendererAccessor}); the original's
 *       trigger is the shell's {@code hc} held-item-change event, which is
 *       posted outside the payload — here a per-tick stack comparison
 *       approximates it ([G]).</li>
 *   <li>YH (cQ.java:316-433): the item filter. Returns {@code true} when the
 *       custom swing transform applies; {@code false} (vanilla) for AIR,
 *       FILLED_MAP, CROSSBOW, BOW, TRIDENT and the DRINK/EAT use actions.
 *       (The handler spec's "exclusion predicate returns true" is inverted —
 *       YG proceeds only when YH is true, cQ.java:456.)</li>
 * </ul>
 *
 * <p>Gaps: the YG first-person transform reads its curve from the {@code im}
 * animation profile returned by {@code rD.dlU().blR(swingProgress)} — the
 * profile registry {@code iq} (blR/blM/blN) and {@code im}'s accessors are all
 * native (iq.java:24-173, im.java:18-94; no decrypted constants), so the
 * transform parameters are unrecovered [N]; capture condition: runtime dump of
 * the profile objects or VM deobfuscation. The YI gate's extra
 * {@code in.bkZ()} profile flag (cQ.java:197) is native and unmodeled. The
 * single settings entry is an action button "Edit Animation" (cI.Wx(c::z),
 * cQ.java:86) opening the original's swing-animation editor; neither an action
 * setting nor that editor exists in OpenGrim, so the module has no settings
 * (documented framework gap).
 */
public class SwingAnimations extends Module {
	private ItemStack lastMainHand = ItemStack.EMPTY;
	private ItemStack lastOffHand = ItemStack.EMPTY;

	public SwingAnimations() {
		super("swing_animations", "Swing Animations", "Changes look of swing animation", ModuleCategory.RENDER);
	}

	@Override
	protected void onEnable() {
		// Baseline the held stacks so enabling does not count as a change.
		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		lastMainHand = player != null ? player.getMainHandStack().copy() : ItemStack.EMPTY;
		lastOffHand = player != null ? player.getOffHandStack().copy() : ItemStack.EMPTY;
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			return;
		}
		ItemStack mainHand = player.getMainHandStack();
		ItemStack offHand = player.getOffHandStack();
		boolean mainChanged = !ItemStack.areEqual(mainHand, lastMainHand);
		boolean offChanged = !ItemStack.areEqual(offHand, lastOffHand);
		lastMainHand = mainHand.copy();
		lastOffHand = offHand.copy();
		if (mainChanged || offChanged) {
			instantEquip(client, player, mainChanged, offChanged);
		}
	}

	/**
	 * Instant equip (sixtwo.cQ YF, cQ.java:213-301): snap the first-person
	 * renderer's per-hand equip progress to 1 and refresh its cached stack when
	 * the hand's item changed and progress has not already passed 1. The
	 * original's per-hand {@code in.bkX()/bkY()} profile flags are native and
	 * unmodeled — [G]: the changed-stack condition stands in for them.
	 */
	private void instantEquip(MinecraftClient client, ClientPlayerEntity player, boolean mainChanged, boolean offChanged) {
		if (!(client.getEntityRenderDispatcher().getHeldItemRenderer() instanceof ItemInHandRendererAccessor renderer)) {
			return;
		}
		if (mainChanged && renderer.opengrim$getEquipProgressMainHand() <= 1.0f) {
			renderer.opengrim$setEquipProgressMainHand(1.0f);
			renderer.opengrim$setMainHand(player.getMainHandStack());
		}
		if (offChanged && renderer.opengrim$getEquipProgressOffHand() <= 1.0f) {
			renderer.opengrim$setEquipProgressOffHand(1.0f);
			renderer.opengrim$setOffHand(player.getOffHandStack());
		}
	}

	/**
	 * Item filter (sixtwo.cQ YH, cQ.java:316-433): true when the custom swing
	 * transform applies (YG skips the transform when this is false). False for
	 * AIR, FILLED_MAP, CROSSBOW, BOW, TRIDENT and the DRINK/EAT use actions.
	 */
	public boolean shouldAnimate(ItemStack itemStack) {
		if (itemStack == null || itemStack.isEmpty()) {
			return false;
		}
		Item item = itemStack.getItem();
		if (item == Items.AIR || item == Items.FILLED_MAP || item == Items.CROSSBOW
				|| item == Items.BOW || item == Items.TRIDENT) {
			return false;
		}
		UseAction action = itemStack.getUseAction();
		return action != UseAction.DRINK && action != UseAction.EAT;
	}

	@Override
	protected void onDisable() {
		lastMainHand = ItemStack.EMPTY;
		lastOffHand = ItemStack.EMPTY;
	}
}
