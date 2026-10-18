package dev.opengrim.modules.combat;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.InteractionRangeEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.DoubleSetting;
import net.minecraft.client.MinecraftClient;

/**
 * Reach (registry sixtwo.fK): "Extends player's reach".
 *
 * <p>parity: full. 1:1 reconstruction of sixtwo.fK — a pure value-provider
 * module with zero event handlers. Spec:
 * analysis/specs/handlers/fK.md (evidence: fK.java:41-71 registration,
 * aUW block accessor fK.java:196-232, aUV entity accessor fK.java:236-262).
 *
 * <p>The original's reach consumers live in the central native/mixin layer,
 * which reads these accessors unconditionally; the off state is expressed by
 * returning vanilla constants rather than by an enabled check at the call
 * site (fK.md "Runtime model").
 *
 * <p>The rebuild wires the consumers through
 * {@link dev.opengrim.event.impl.InteractionRangeEvent}, posted by
 * InteractionRangeMixin from the vanilla attribute getters
 * {@code PlayerEntity#getBlockInteractionRange}/{@code getEntityInteractionRange}
 * (the crosshair-target scan and attack-range checks read exactly these).
 */
public class Reach extends Module {
	private final DoubleSetting entityValue = register(new DoubleSetting("entity_value", 0.01, 3.0, 6.0, 3.0, " blocks"));
	private final DoubleSetting blocksValue = register(new DoubleSetting("blocks_value", 0.01, 4.5, 6.0, 4.5, " blocks"));

	public Reach() {
		super("reach", "Reach", "Extends player's reach", ModuleCategory.COMBAT);
	}

	/** Applies the slider to the vanilla attribute getter while enabled. */
	@Subscribe
	public void onInteractionRange(InteractionRangeEvent event) {
		if (!isEnabled()) {
			return;
		}
		if (event.kind() == InteractionRangeEvent.Kind.BLOCK) {
			event.setValue(blocksValue.getValue());
		} else {
			event.setValue(entityValue.getValue());
		}
	}

	/**
	 * Entity/attack reach (sixtwo.fK#aUV, fK.java:236-262).
	 *
	 * <p>Enabled: live "Entity Value" setting. Disabled: vanilla constant 3.0.
	 * No creative branch — the original applies the setting value
	 * unconditionally while enabled.
	 */
	public double getEntityReach() {
		if (isEnabled()) {
			return entityValue.getValue();
		}
		return 3.0;
	}

	/**
	 * Block interaction reach (sixtwo.fK#aUW, fK.java:196-232).
	 *
	 * <p>Enabled: live "Blocks Value" setting, applied unconditionally — the
	 * slider minimum (4.5) equals vanilla survival reach but is below the
	 * vanilla creative reach (5.0), so enabling Reach in creative mode with
	 * the default value shrinks block reach to 4.5 (fK.md "Settings→behavior").
	 * Disabled: vanilla behavior — 4.5, or 5.0 in creative mode.
	 */
	public double getBlockReach() {
		if (isEnabled()) {
			return blocksValue.getValue();
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null
				&& client.interactionManager != null
				&& client.interactionManager.getCurrentGameMode().isCreative()) {
			return 5.0;
		}
		return 4.5;
	}
}
