package dev.opengrim.settings;

import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.entity.EntityType;
import net.minecraft.registry.Registries;
import net.minecraft.util.Identifier;

/**
 * Entity-type multiselect setting, the OpenGrim form of the original {@code cF}
 * picker (sixtwo.cF, 270 lines, 0 natives).
 *
 * <p>Recovered contract: {@code AcnID} is the offered universe ({@code VS}/{@code VT}
 * seed it, cF.java:39-96), {@code sulLA} the selected subset (default
 * {@code {PLAYER}}, cF.java:34-36), {@code VX(Entity)} is
 * {@code !selected.isEmpty() && universe.contains(type) && selected.contains(type)}
 * (cF.java:264-290), {@code VU}/{@code VV} add/remove one type, and
 * {@code SS}/{@code SR} serialize by type name.
 *
 * <p>Config stores registry ids (stable across locales), the framework's plain
 * JSON convention; the original stored the display name. Membership semantics
 * are identical.
 */
public class EntityListSetting extends Setting<Set<EntityType<?>>> {
	private final List<EntityType<?>> options;

	public EntityListSetting(String id, Collection<EntityType<?>> options,
			Collection<EntityType<?>> defaultSelected) {
		super(id, initial(options, defaultSelected));
		this.options = List.copyOf(options);
	}

	private static Set<EntityType<?>> initial(Collection<EntityType<?>> options,
			Collection<EntityType<?>> defaultSelected) {
		LinkedHashSet<EntityType<?>> selected = new LinkedHashSet<>();
		if (defaultSelected != null) {
			for (EntityType<?> type : defaultSelected) {
				if (options.contains(type)) {
					selected.add(type);
				}
			}
		}
		return selected;
	}

	/** {@code cF.VY}: the offered universe. */
	public List<EntityType<?>> getOptions() {
		return options;
	}

	/** {@code cF.VZ}: the selected entities. */
	public Set<EntityType<?>> getTypes() {
		return Set.copyOf(getValue());
	}

	/** {@code cF.VW}. */
	public boolean contains(EntityType<?> type) {
		return getValue().contains(type);
	}

	/** {@code cF.VX}: non-empty, offered and selected. */
	public boolean matches(EntityType<?> type) {
		if (type == null || getValue().isEmpty()) {
			return false;
		}
		return options.contains(type) && getValue().contains(type);
	}

	/** {@code cF.VU}. */
	public void select(EntityType<?> type) {
		if (type == null || !options.contains(type)) {
			return;
		}
		LinkedHashSet<EntityType<?>> next = new LinkedHashSet<>(getValue());
		if (next.add(type)) {
			super.setValue(next);
		}
	}

	/** {@code cF.VV}. */
	public void deselect(EntityType<?> type) {
		if (type == null || !getValue().contains(type)) {
			return;
		}
		LinkedHashSet<EntityType<?>> next = new LinkedHashSet<>(getValue());
		next.remove(type);
		super.setValue(next);
	}

	public void toggle(EntityType<?> type) {
		if (getValue().contains(type)) {
			deselect(type);
		} else {
			select(type);
		}
	}

	@Override
	public Object serialize() {
		List<String> ids = new ArrayList<>();
		for (EntityType<?> type : getValue()) {
			ids.add(EntityType.getId(type).toString());
		}
		return ids;
	}

	@Override
	public void deserialize(Object raw) {
		if (!(raw instanceof Collection<?> values)) {
			return;
		}
		LinkedHashSet<EntityType<?>> selected = new LinkedHashSet<>();
		for (Object value : values) {
			if (!(value instanceof String id)) {
				continue;
			}
			Identifier identifier = Identifier.tryParse(id);
			if (identifier == null) {
				continue;
			}
			Registries.ENTITY_TYPE.getOptionalValue(identifier)
					.filter(options::contains)
					.ifPresent(selected::add);
		}
		super.setValue(selected);
	}
}
