package dev.opengrim.modules.render;

import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;

/**
 * Glow (registry sixtwo.dy): "Adds glowing effect to entities".
 *
 * <p>parity: Java-visible surface 1:1; the application layer is a documented
 * substitute. 1:1 reconstruction of sixtwo.dy. Spec:
 * analysis/specs/handlers/dy.md (evidence: dy.java constructor with "Entities"
 * cF VS OCdZM and no VT seed plus "Self Glow" cJ default false, cF.java:34-36
 * default selection EntityType.PLAYER, dy.java:152-193 ajv predicate with
 * bytecode order panic, VX check, self check, Self Glow check, module id 86).
 *
 * <p>Predicate-only module: no handlers, no enable/disable overrides. The
 * recovered polarity {@code VX && self-excluded && !selfGlow} is kept verbatim,
 * including the quirk where Self Glow on disables eligibility for others and
 * never enables self.
 *
 * <p>high-probability guess: the original's glow consumer is outside the
 * decompiled payload; this rebuild applies {@code Entity.setGlowing} per tick
 * for eligible entities and clears exactly the flags it set on disable.
 */
public class Glow extends Module {
	private final BoolSetting selfGlow = register(new BoolSetting("self_glow", false));

	// cF "Entities": candidate universe = all living types minus armor stands
	// (jg$tJ.OCdZM); default selected set = {EntityType.PLAYER} (cF.java:34-36).
	private final Set<EntityType<?>> entityTypes = new HashSet<>(List.of(EntityType.PLAYER));
	private final Set<Entity> applied = new HashSet<>();

	public Glow() {
		super("glow", "Glow", "Adds glowing effect to entities", ModuleCategory.RENDER);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}
		// high-probability guess: the original's glow consumer lives outside the
		// payload (handlers/dy.md "Unrecovered" - no caller of ajv in the
		// corpus). This rebuild applies the vanilla glowing flag per tick for
		// eligible entities and clears exactly what it set on disable.
		for (Entity entity : client.world.getEntities()) {
			if (isGlowEligible(entity)) {
				entity.setGlowing(true);
				applied.add(entity);
			} else if (applied.remove(entity)) {
				entity.setGlowing(false);
			}
		}
	}

	@Override
	protected void onDisable() {
		for (Entity entity : applied) {
			entity.setGlowing(false);
		}
		applied.clear();
	}

	/**
	 * Glow-eligibility ajv (dy.java:152-193): in-set and not self and Self
	 * Glow off. Armor stands are outside the OCdZM universe and never match.
	 */
	public boolean isGlowEligible(Entity entity) {
		if (entity == null || entityTypes.isEmpty()) {
			return false;
		}
		if (!entityTypes.contains(entity.getType())) {
			return false;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null && entity == client.player) {
			return false;
		}
		if (entity instanceof ArmorStandEntity || !(entity instanceof LivingEntity)) {
			return false;
		}
		if (selfGlow.getValue()) {
			return false;
		}
		return true;
	}

	public boolean isSelfGlow() {
		return selfGlow.getValue();
	}

	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(entityTypes);
	}

	public void addEntityType(EntityType<?> type) {
		entityTypes.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entityTypes.remove(type);
	}
}
