package dev.opengrim.settings;

import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/**
 * Group setting: owns child settings (rendered as a collapsible tree,
 * mirroring the ct/cu and cv/cw structure in the original).
 */
public class GroupSetting extends Setting<Void> {
	private final List<Setting<?>> children = new ArrayList<>();

	public GroupSetting(String id) {
		super(id, null);
	}

	public void add(Setting<?> child) {
		children.add(child);
	}

	public List<Setting<?>> getChildren() {
		return Collections.unmodifiableList(children);
	}

	@Override
	public Object serialize() {
		if (children.isEmpty()) {
			return null;
		}
		Map<String, Object> serialized = new LinkedHashMap<>();
		for (Setting<?> child : children) {
			Object value = child.serialize();
			if (value != null) {
				serialized.put(child.getId(), value);
			}
		}
		return serialized.isEmpty() ? null : serialized;
	}

	@Override
	public void deserialize(Object raw) {
		if (raw instanceof Map<?, ?> map) {
			for (Setting<?> child : children) {
				Object value = map.get(child.getId());
				if (value != null) {
					child.deserialize(value);
				}
			}
		}
	}
}