package dev.opengrim.modules.render;

import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;

/**
 * Anti Invisible (registry sixtwo.dY, module id 54): "Makes invisible entites visible".
 *
 * <p>parity: partial — the settings surface and the filter predicate are 1:1;
 * the enforcement point is native and unrecovered. Spec:
 * analysis/specs/casesafe/handlers/dY_.md (the source-map's handlers/dY.md is
 * the case-collapsed dy Glow twin). Evidence: dY.java:24-36 constructor
 * building the "Entities" {@code cF} widget with universe
 * {@code jg$tJ.OCdZM} (all LivingEntity types minus ARMOR_STAND, jg.java
 * {@code bBT()}), dY.java:209-211 getter aqV, cF default selection
 * EntityType.PLAYER, cF.VX(Entity) membership test (cF.java:230-268). Zero
 * natives, zero {@code @hG} listeners — the class is pure Java (spec "Evidence
 * base"). Trace 2026-10-17: no dY entries beyond class load.
 *
 * <p>Filter contract (cF.VX): an entity matches only when the selected set is
 * non-empty, the type is inside the OCdZM universe, and the type is selected.
 * With the default {PLAYER} selection this reveals invisible players.
 *
 * <p>Framework limitation (labeled): the original's {@code cF} entity-type
 * multi-select has no settings-API equivalent — the selection lives in
 * {@link #getEntityTypes()} / {@link #setEntityTypes(Set)} instead of a
 * registered widget (same approximation as AutoTrap's cK groups). Not
 * implemented ([U]): the enforcement point — which central/native component
 * forces rendering of invisible entities while the module is enabled is
 * unrecovered (spec "Unrecovered" 1-3).
 */
public class AntiInvisible extends Module {
	private final Set<EntityType<?>> selected = new HashSet<>(List.of(EntityType.PLAYER));

	public AntiInvisible() {
		super("anti_invisible", "Anti Invisible", "Makes invisible entites visible", ModuleCategory.RENDER);
	}

	/**
	 * Port of cF.VX(entity) (cF.java:230-268): true only when the selected set
	 * is non-empty, the entity type is in the OCdZM candidate universe
	 * (LivingEntity minus armor stand) and the type is selected.
	 */
	public boolean matches(Entity entity) {
		if (entity == null || selected.isEmpty()) {
			return false;
		}
		if (entity instanceof ArmorStandEntity || !(entity instanceof LivingEntity)) {
			return false;
		}
		return selected.contains(entity.getType());
	}

	/** Live selection of the "Entities" list (default PLAYER). */
	public Set<EntityType<?>> getEntityTypes() {
		return Collections.unmodifiableSet(selected);
	}

	public void addEntityType(EntityType<?> type) {
		selected.add(type);
	}

	public void removeEntityType(EntityType<?> type) {
		selected.remove(type);
	}

	public void setEntityTypes(Set<EntityType<?>> types) {
		selected.clear();
		selected.addAll(types);
	}
}
