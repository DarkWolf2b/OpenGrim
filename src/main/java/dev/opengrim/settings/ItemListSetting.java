package dev.opengrim.settings;

import java.util.ArrayList;
import java.util.Collection;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import net.minecraft.block.Block;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;

/**
 * Item multiselect setting, the OpenGrim form of the original {@code cK}
 * "Blocks" filter (sixtwo.cK, casesafe/payload-named/sixtwo/cK.java).
 *
 * <p>Recovered contract: {@code NBjNm} is the available pool ({@code WM} sets
 * it, cK.java:335-368), {@code eAose} the selected set ({@code WP},
 * cK.java:401-403), {@code WY/WZ/WX} test membership by item/block/stack
 * (552-573), {@code WV} toggles one item (484-550) and {@code WU} adds one
 * (584-620); {@code Xa} intersects a candidate with the pool, caps it to
 * {@code mnYah} by dropping the oldest entries ({@code Xb}, 405-435) and
 * re-adds the first pool item when the selection would be empty and
 * {@code nppnu} is <em>false</em> (121-203). {@code nppnu} therefore means
 * "allow an empty selection". The Nuker default is
 * {@code new cK(...).WM(jc.GjreY)} with {@code nppnu = true} and
 * {@code mnYah = Integer.MAX_VALUE} (cK.java:54-60; decrypted value of
 * {@code Xj("o",32104,…)} in analysis/decrypted/full-dump.jsonl:22150), so its
 * initial selection is empty and the pool is the all-block set.
 *
 * <p>JSON mirrors {@code cK.SR} (raw item ids, cK.java:642-646) and
 * {@code cK.SS} (resolve by raw id, 294-330); the original stores a set, this
 * stores an ordered list (same membership semantics).
 */
public class ItemListSetting extends Setting<Set<Item>> {
	private final List<Item> options;
	private final int maxSelections;
	private final boolean allowEmpty;

	public ItemListSetting(String id, Collection<Item> options, int maxSelections, boolean allowEmpty,
			Item defaultSelected) {
		super(id, initial(options, maxSelections, allowEmpty, defaultSelected));
		this.options = List.copyOf(options);
		this.maxSelections = Math.max(1, maxSelections);
		this.allowEmpty = allowEmpty;
	}

	private static Set<Item> initial(Collection<Item> options, int maxSelections, boolean allowEmpty,
			Item defaultSelected) {
		LinkedHashSet<Item> selected = new LinkedHashSet<>();
		if (defaultSelected != null && options.contains(defaultSelected)) {
			selected.add(defaultSelected);
		} else if (!allowEmpty && !options.isEmpty()) {
			selected.add(options.iterator().next());
		}
		return cap(selected, Math.max(1, maxSelections));
	}

	private static Set<Item> cap(Set<Item> selected, int max) {
		if (selected.size() <= max) {
			return selected;
		}
		LinkedHashSet<Item> capped = new LinkedHashSet<>();
		var iterator = selected.iterator();
		while (capped.size() < max && iterator.hasNext()) {
			capped.add(iterator.next());
		}
		return capped;
	}

	/** {@code cK.WL}: the available pool ({@code NBjNm}). */
	public List<Item> getOptions() {
		return options;
	}

	/** {@code cK.WP}: the selected items ({@code eAose}). */
	public Set<Item> getItems() {
		return Set.copyOf(getValue());
	}

	public int getMaxSelections() {
		return maxSelections;
	}

	public boolean isAllowEmpty() {
		return allowEmpty;
	}

	/** {@code cK.WY/WZ/WX}. */
	public boolean contains(Item item) {
		return getValue().contains(item);
	}

	public boolean contains(Block block) {
		return contains(block.asItem());
	}

	public boolean contains(ItemStack stack) {
		return contains(stack.getItem());
	}

	/** {@code cK.WV}/{@code cK.WU}: toggle one item; the last one is kept when empty is not allowed. */
	public void toggle(Item item) {
		if (item == null || !options.contains(item)) {
			return;
		}
		LinkedHashSet<Item> next = new LinkedHashSet<>(getValue());
		if (next.contains(item)) {
			if (!allowEmpty && next.size() <= 1) {
				return;
			}
			next.remove(item);
		} else {
			if (next.size() >= maxSelections) {
				return;
			}
			next.add(item);
		}
		super.setValue(next);
	}

	/** {@code cK.WU}: add one item. */
	public void select(Item item) {
		if (item == null || !options.contains(item) || getValue().contains(item)) {
			return;
		}
		if (getValue().size() >= maxSelections) {
			return;
		}
		LinkedHashSet<Item> next = new LinkedHashSet<>(getValue());
		next.add(item);
		super.setValue(next);
	}

	/** Remove one item (toggle-off half of {@code cK.WV}). */
	public void deselect(Item item) {
		if (item == null || !getValue().contains(item)) {
			return;
		}
		if (!allowEmpty && getValue().size() <= 1) {
			return;
		}
		LinkedHashSet<Item> next = new LinkedHashSet<>(getValue());
		next.remove(item);
		super.setValue(next);
	}

	@Override
	public Object serialize() {
		List<Integer> ids = new ArrayList<>();
		for (Item item : getValue()) {
			ids.add(Item.getRawId(item));
		}
		return ids;
	}

	@Override
	public void deserialize(Object raw) {
		if (!(raw instanceof Collection<?> values)) {
			return;
		}
		LinkedHashSet<Item> selected = new LinkedHashSet<>();
		for (Object value : values) {
			if (!(value instanceof Number number)) {
				continue;
			}
			Item item = Item.byRawId(number.intValue());
			if (item != null && item != Items.AIR && options.contains(item)) {
				selected.add(item);
			}
		}
		selected = new LinkedHashSet<>(cap(selected, maxSelections));
		if (selected.isEmpty() && !allowEmpty && !options.isEmpty()) {
			selected.add(options.iterator().next());
		}
		super.setValue(selected);
	}
}
