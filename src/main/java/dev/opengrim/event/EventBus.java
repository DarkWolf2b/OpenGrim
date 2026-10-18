package dev.opengrim.event;

import java.lang.reflect.Method;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

/**
 * Typed pub/sub event bus. Modules register listener methods annotated with
 * {@link Subscribe} (any visibility); they are discovered reflectively on
 * registration, mirroring the original client's annotated-handler dispatch
 * (see analysis/specs/00-framework.md — event system).
 */
public final class EventBus {
	private record Listener(Object owner, Method method, int priority) {}

	private static final EventBus INSTANCE = new EventBus();

	private final Map<Class<?>, List<Listener>> listeners = new ConcurrentHashMap<>();

	public static EventBus get() {
		return INSTANCE;
	}

	private EventBus() {
	}

	/** Registers all {@link Subscribe}-annotated methods of the owner. */
	public void register(Object owner) {
		for (Class<?> c = owner.getClass(); c != null && c != Object.class; c = c.getSuperclass()) {
			for (Method m : c.getDeclaredMethods()) {
				Subscribe sub = m.getAnnotation(Subscribe.class);
				if (sub == null) {
					continue;
				}
				if (m.getParameterCount() != 1) {
					throw new IllegalStateException(
							"@Subscribe method must take exactly one event argument: " + m);
				}
				m.setAccessible(true);
				listeners.computeIfAbsent(m.getParameterTypes()[0], k -> new CopyOnWriteArrayList<>())
						.add(new Listener(owner, m, sub.priority()));
			}
		}
	}

	public void unregister(Object owner) {
		for (List<Listener> list : listeners.values()) {
			list.removeIf(l -> l.owner() == owner);
		}
	}

	public <E> E post(E event) {
		List<Listener> list = listeners.get(event.getClass());
		if (list == null || list.isEmpty()) {
			return event;
		}
		List<Listener> sorted;
		if (event instanceof Cancellable c && c.cancelled()) {
			return event;
		}
		sorted = new ArrayList<>(list);
		sorted.sort((a, b) -> Integer.compare(b.priority(), a.priority()));
		for (Listener l : sorted) {
			if (event instanceof Cancellable c && c.cancelled()) {
				break;
			}
			try {
				l.method().invoke(l.owner(), event);
			} catch (Throwable t) {
				// Mirrors sixtwo.hH#bdV (casesafe/payload-named-cfr/sixtwo/hh.java
				// bytecode): a listener Throwable is printed and the remaining
				// listeners still run - a broken handler never kills the
				// dispatch loop or the game tick.
				t.printStackTrace();
			}
		}
		return event;
	}

	public int listenerCount(Class<?> eventType) {
		return listeners.getOrDefault(eventType, Collections.emptyList()).size();
	}
}
