package dev.opengrim.util;

import java.util.Collections;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

/**
 * Shared friend list (the original's friend system used by Ignore Friends /
 * friend-indicator / pearl modules). Session-local; persisted separately later.
 */
public final class FriendsManager {
	private static final Set<String> FRIENDS = ConcurrentHashMap.newKeySet();

	private FriendsManager() {
	}

	public static boolean isFriend(String playerName) {
		return playerName != null && FRIENDS.contains(playerName);
	}

	public static void add(String playerName) {
		if (playerName != null) {
			FRIENDS.add(playerName);
		}
	}

	public static void remove(String playerName) {
		if (playerName != null) {
			FRIENDS.remove(playerName);
		}
	}

	public static void toggle(String playerName) {
		if (isFriend(playerName)) {
			remove(playerName);
		} else {
			add(playerName);
		}
	}

	public static Set<String> all() {
		return Collections.unmodifiableSet(FRIENDS);
	}

	public static void clear() {
		FRIENDS.clear();
	}
}
