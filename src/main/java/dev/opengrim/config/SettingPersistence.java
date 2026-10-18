package dev.opengrim.config;

import java.util.ArrayList;
import java.util.List;
import java.util.function.Supplier;

/**
 * Setting change plumbing (the {@code cB} essentials).
 *
 * <p>Sources: sixtwo/cB.java (lines 31-38 id bytes {@code NwlSF}, 51-54
 * change listeners {@code PMSMO} via {@code Vd()}, 156-159 post listeners
 * {@code aFqYe} via {@code Ve()}, 345-367 visibility gate {@code uexTC} via
 * {@code Vf()}, 165-183 owner attach {@code Vg()}, 68-154 batched dispatch
 * {@code Vj()}, 318-341 immediate path {@code Vk()}, 208-300 listener runs in
 * {@code Vl()}, 47-49 id accessor {@code Vm()}, 302-304 {@code Vn()},
 * 314-316 {@code Vo()}, 200-202 {@code Vp()}, static batch helpers 56-58
 * {@code Vi()}/60-62 {@code Vh()}).
 *
 * <p>Vanilla-API deviations:
 * <ul>
 * <li>Ids are the rebuild {@code Setting.getId()} strings; the original keys
 * on {@code mr} int arrays (sixtwo/cB.java ctor).</li>
 * <li>JSON load/store goes through {@code Setting.serialize()}/
 * {@code deserialize(Object)}; the original splits into
 * {@code SS(JsonElement)} plus {@code SR(Map)} (sixtwo/cB.java).</li>
 * <li>Batch nesting keeps the original coalescing shape (collect-then-flush
 * when the outer depth reaches zero) but without the obfuscated control
 * flags.</li>
 * </ul>
 */
public final class SettingPersistence {
	private static final ThreadLocal<Batch> BATCH = new ThreadLocal<>();
	private static final ThreadLocal<Boolean> POST_ONLY = new ThreadLocal<>();

	private final List<Runnable> changeListeners = new ArrayList<>();
	private final List<Runnable> postListeners = new ArrayList<>();
	private Supplier<Boolean> visibleWhen = () -> true;

	private static final class Batch {
		final List<SettingPersistence> queued = new ArrayList<>();
		int depth;
		boolean postOnly;
	}

	/** Mirrors {@code cB.Vd()}: add a change listener. */
	public SettingPersistence onChange(Runnable listener) {
		changeListeners.add(listener);
		return this;
	}

	/** Mirrors {@code cB.Ve()}: add a post listener. */
	public SettingPersistence onPost(Runnable listener) {
		postListeners.add(listener);
		return this;
	}

	/** Mirrors {@code cB.Vf()}: visibility gate, null falls back to true. */
	public SettingPersistence visibleWhen(Supplier<Boolean> gate) {
		visibleWhen = gate == null ? () -> true : gate;
		return this;
	}

	/** Mirrors {@code cB.Vp()}. */
	public Supplier<Boolean> visibleGate() {
		return visibleWhen;
	}

	/** Visibility check used by screens before drawing a row. */
	public boolean isVisible() {
		try {
			return visibleWhen == null || Boolean.TRUE.equals(visibleWhen.get());
		} catch (RuntimeException ex) {
			return true;
		}
	}

	/** Mirrors {@code cB.Vn()}/{@code Vo()}. */
	public List<Runnable> changeListeners() {
		return changeListeners;
	}

	/** Mirrors {@code cB.Vo()}. */
	public List<Runnable> postListeners() {
		return postListeners;
	}

	/**
	 * Mirrors {@code cB.Vk()}: queue when inside a batch, otherwise flush now.
	 */
	public void notifyChanged() {
		Batch batch = BATCH.get();
		if (batch == null) {
			dispatch(Boolean.TRUE.equals(POST_ONLY.get()));
			return;
		}
		if (!batch.queued.contains(this)) {
			batch.queued.add(this);
		}
	}

	/** Mirrors {@code cB.Vl()}: run change listeners, then post listeners. */
	private void dispatch(boolean postOnly) {
		Boolean prev = POST_ONLY.get();
		if (postOnly) {
			POST_ONLY.set(true);
		}
		try {
			for (Runnable r : List.copyOf(changeListeners)) {
				r.run();
			}
			if (!postOnly) {
				for (Runnable r : List.copyOf(postListeners)) {
					r.run();
				}
			}
		} finally {
			if (prev == null) {
				POST_ONLY.remove();
			} else {
				POST_ONLY.set(prev);
			}
		}
	}

	/**
	 * Mirrors {@code cB.Vj(runnable, flag)}: run nested, flush when the outer
	 * depth reaches zero.
	 */
	public static void runBatched(Runnable task, boolean postOnly) {
		Batch batch = BATCH.get();
		boolean outer = batch == null;
		if (outer) {
			batch = new Batch();
			BATCH.set(batch);
		}
		batch.postOnly |= postOnly;
		batch.depth++;
		try {
			task.run();
		} finally {
			batch.depth--;
			if (batch.depth == 0) {
				BATCH.remove();
				boolean flag = batch.postOnly;
				for (SettingPersistence s : List.copyOf(batch.queued)) {
					s.dispatch(flag);
				}
			}
		}
	}

	/**
	 * Mirrors {@code cB.Vi()}: batch with the suppress-post flag set, so the
	 * flush runs change listeners only (cB.java {@code Vl(flag)} skips
	 * {@code aFqYe} when the flag is true).
	 */
	public static void batch(Runnable task) {
		runBatched(task, true);
	}

	/**
	 * Mirrors {@code cB.Vh()}: batch with the flag clear, so the flush runs
	 * change listeners then post listeners.
	 */
	public static void batchPostOnly(Runnable task) {
		runBatched(task, false);
	}
}
