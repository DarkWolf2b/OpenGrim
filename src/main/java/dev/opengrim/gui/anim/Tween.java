package dev.opengrim.gui.anim;

/**
 * Port of sixtwo.rk: a duration/easing tween between float values.
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/rk.java (fully
 * plaintext). Method mapping: {@code dhd(target)} = update toward target,
 * {@code dhh(target)} = same with lazy first-value init, {@code dhc(bool)} =
 * target 0/1, {@code dhe(v)} = hard set all, {@code dhg()} = dhe(0),
 * {@code dhj()} = current, {@code dhm()} = start, {@code dhn()} = target,
 * {@code dho()} = finished, {@code dhp()} = initialized (reversed flag),
 * {@code dhi()} = duration, {@code dhk()} = easing.
 */
public final class Tween {
	private int durationMs;
	private float current;
	private Easing easing;
	private long startAt;
	private float start;
	private float target;
	private boolean finished;
	private boolean initialized;

	public Tween(int durationMs) {
		this(durationMs, 0.0f, Easing.LINEAR);
	}

	public Tween(int durationMs, float initial) {
		this(durationMs, initial, Easing.LINEAR);
	}

	public Tween(int durationMs, float initial, Easing easing) {
		this.durationMs = durationMs;
		this.easing = easing;
		this.current = initial;
		this.start = initial;
		this.target = initial;
		this.finished = true;
		this.startAt = 0L;
		this.initialized = false;
	}

	/** rk.dhi. */
	public int duration() {
		return durationMs;
	}

	/** rk.dhq (chain). */
	public Tween withDuration(int durationMs) {
		this.durationMs = durationMs;
		return this;
	}

	/** rk.dhs (chain). */
	public Tween withEasing(Easing easing) {
		this.easing = easing;
		return this;
	}

	/** rk.dhj. */
	public float current() {
		return current;
	}

	/** rk.dhm. */
	public float start() {
		return start;
	}

	/** rk.dhn. */
	public float target() {
		return target;
	}

	/** rk.dho. */
	public boolean finished() {
		return finished;
	}

	/** rk.dhp. */
	public boolean initialized() {
		return initialized;
	}

	/** rk.dht (chain). */
	public Tween withStartAt(long stamp) {
		this.startAt = stamp;
		return this;
	}

	/** rk.dhl. */
	public long startAt() {
		return startAt;
	}

	/** rk.dhr (chain): override current only. */
	public Tween setCurrent(float value) {
		this.current = value;
		return this;
	}

	/** rk.dhu (chain): override start only. */
	public Tween setStart(float value) {
		this.start = value;
		return this;
	}

	/** rk.dhv (chain): override target only. */
	public Tween setTarget(float value) {
		this.target = value;
		return this;
	}

	/** rk.dhx (chain): override initialized flag. */
	public Tween setInitialized(boolean value) {
		this.initialized = value;
		return this;
	}

	/** rk.dhw (chain): override finished flag. */
	public Tween setFinished(boolean value) {
		this.finished = value;
		return this;
	}

	/** rk.dhd: advance toward {@code newTarget}; restarts when target changes. */
	public float update(float newTarget) {
		long now = System.currentTimeMillis();
		if (newTarget != this.target || !initialized) {
			this.start = current;
			this.target = newTarget;
			this.startAt = now;
			this.finished = false;
			// rk.dhd: the lazy init is one-shot. Without this flag every
			// per-frame call re-enters this branch and restarts the tween, so
			// it never advances past its start value (the ClickGUI accent pill
			// stayed at y~0; popup/hover tweens likewise).
			this.initialized = true;
		}
		if (durationMs <= 0) {
			current = target;
			finished = true;
			return current;
		}
		long elapsed = now - startAt;
		if (elapsed >= durationMs) {
			current = target;
			finished = true;
			return current;
		}
		float t = (float) elapsed / (float) durationMs;
		float eased = easing.apply(t, 0.0f, 1.0f, 1.0f);
		current = start + (target - start) * eased;
		return current;
	}

	/** rk.dhh: like update but lazily adopts {@code firstValue} on first call. */
	public float updateInit(float firstValue, float newTarget) {
		long now = System.currentTimeMillis();
		if (!initialized) {
			initialized = true;
			current = firstValue;
			start = firstValue;
			target = firstValue;
			startAt = now;
			return current;
		}
		if (newTarget == target) {
			return current;
		}
		start = current;
		target = newTarget;
		startAt = now;
		finished = false;
		if (durationMs <= 0) {
			current = target;
			finished = true;
			return current;
		}
		long elapsed = now - startAt;
		if (elapsed >= durationMs) {
			current = target;
			finished = true;
			return current;
		}
		float t = (float) elapsed / (float) durationMs;
		float eased = easing.apply(t, 0.0f, 1.0f, 1.0f);
		current = start + (target - start) * eased;
		return current;
	}

	/** rk.dhc: toggle-style target 1.0/0.0. */
	public void update(boolean on) {
		update(on ? 1.0f : 0.0f);
	}

	/** rk.dhe: hard-set every field. */
	public void snap(float value) {
		current = value;
		start = value;
		target = value;
		finished = true;
		startAt = System.currentTimeMillis();
		initialized = true;
	}

	/** rk.dhg: reset to 0. */
	public void reset() {
		snap(0.0f);
	}
}
