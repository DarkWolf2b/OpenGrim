package dev.opengrim.settings;

/**
 * Base setting: an owned, named value with optional visibility state.
 */
public abstract class Setting<T> {
	private final String id;
	private T value;
	private boolean visible = true;

	protected Setting(String id, T defaultValue) {
		this.id = id;
		this.value = defaultValue;
	}

	public String getId() {
		return id;
	}

	public T getValue() {
		return value;
	}

	public void setValue(T value) {
		this.value = value;
		onChange();
	}

	public boolean isVisible() {
		return visible;
	}

	public void setVisible(boolean visible) {
		this.visible = visible;
	}

	/** Called after every value change. */
	protected void onChange() {
	}

	public abstract Object serialize();

	public abstract void deserialize(Object raw);
}