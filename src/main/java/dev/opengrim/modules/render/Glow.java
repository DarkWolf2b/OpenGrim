package dev.opengrim.modules.render;

import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.EntityListSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.registry.Registries;

/**
 * Glow (registry sixtwo.dy): "Adds glowing effect to entities".
 *
 * <p>1:1 reconstruction of sixtwo.dy. Spec: analysis/specs/handlers/dy.md
 * (evidence: dy.java constructor with "Entities" cF VS OCdZM and no VT seed plus
 * "Self Glow" cJ default false, cF.java:34-36 default selection EntityType.PLAYER,
 * dy.java:152-193 ajv predicate with bytecode order panic, VX check, self check,
 * Self Glow check, module id 86).
 *
 * <p>Predicate-only module: no handlers, no enable/disable overrides. The
 * recovered polarity {@code VX && self-excluded && !selfGlow} is kept verbatim,
 * including the quirk where Self Glow on disables eligibility for others and
 * never enables self.
 */
public class Glow extends Module {
	private final BoolSetting selfGlow = register(new BoolSetting("self_glow", false));

	/**
	 * cF "Entities": candidate universe = all living types minus armor stands
	 * (jg$tJ.OCdZM); default selected set = {EntityType.PLAYER} (cF.java:34-36).
	 */
	private final EntityListSetting entities = register(new EntityListSetting("entities",
			defaultUniverse(), List.of(EntityType.PLAYER)));

	private final Set<Entity> applied = new HashSet<>();

	public Glow() {
		super("glow", "Glow", "Adds glowing effect to entities", ModuleCategory.VISUALS);
	}

	private static List<EntityType<?>> defaultUniverse() {
		LinkedHashSet<EntityType<?>> set = new LinkedHashSet<>();
		for (EntityType<?> type : Registries.ENTITY_TYPE) {
			if (LivingEntity.class.isAssignableFrom(type.getBaseClass())) {
				set.add(type);
			}
		}
		set.remove(EntityType.ARMOR_STAND);
		return List.copyOf(set);
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.world == null || client.player == null) {
			return;
		}
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
		if (entity == null || entities.getValue().isEmpty()) {
			return false;
		}
		if (!entities.contains(entity.getType())) {
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
		return Set.copyOf(entities.getValue());
	}

	public void addEntityType(EntityType<?> type) {
		entities.select(type);
	}

	public void removeEntityType(EntityType<?> type) {
		entities.deselect(type);
	}
}
