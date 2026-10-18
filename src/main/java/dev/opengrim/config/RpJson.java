package dev.opengrim.config;

import java.time.Instant;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.function.Supplier;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonPrimitive;

import net.minecraft.util.math.Vec2f;

/**
 * JSON read/write helpers for config and profile payloads.
 *
 * <p>Sources: sixtwo/rp.java (lines 283-344 {@code readElement}, 81-112
 * {@code readInt} default {@code 0}, 114-145 {@code readFloat} default
 * {@code 0.0f}, 147-178 {@code readBoolean} with fallback, 180-211
 * {@code readLong}/246-277 {@code readInteger}/213-244 {@code readString}
 * nullable, 40-79 {@code readObject}/350-436 {@code readList} with
 * {@code fromJson}, 596-670 {@code readStringList}/675-770
 * {@code readIntArray} skipping nulls, 809-847 {@code readVec2}/778-803
 * {@code writeVec2} with {@code x}/{@code y}, 893-924 {@code readEnum} with
 * fallback, 443-481 {@code readInstant} blank-safe, 483-521
 * {@code writeStringList}/523-568 {@code writeIntArray}/849-887
 * {@code writeList} null-safe, 570-590 {@code safeStringList}, 772
 * {@code fromJson}/774-776 {@code toJson}).
 *
 * <p>Vanilla-API deviations: none for Gson shapes; time parsing keeps the
 * original blank-then-parse order (sixtwo/rp.java {@code readInstant}).
 */
public interface RpJson {
	void fromJson(JsonObject json);

	default JsonObject toJson() {
		return new JsonObject();
	}

	default JsonElement readElement(JsonObject json, String key) {
		if (json == null || key == null || key.isBlank()) {
			return null;
		}
		JsonElement el = json.get(key);
		if (el == null || el.isJsonNull()) {
			return null;
		}
		return el;
	}

	default int readInt(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return 0;
		}
		try {
			return el.getAsInt();
		} catch (RuntimeException ex) {
			return 0;
		}
	}

	default float readFloat(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return 0.0f;
		}
		try {
			return el.getAsFloat();
		} catch (RuntimeException ex) {
			return 0.0f;
		}
	}

	default boolean readBoolean(JsonObject json, String key, boolean fallback) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return fallback;
		}
		try {
			return el.getAsBoolean();
		} catch (RuntimeException ex) {
			return fallback;
		}
	}

	default Long readLong(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return null;
		}
		try {
			return el.getAsLong();
		} catch (RuntimeException ex) {
			return null;
		}
	}

	default Integer readInteger(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return null;
		}
		try {
			return el.getAsInt();
		} catch (RuntimeException ex) {
			return null;
		}
	}

	default String readString(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null) {
			return null;
		}
		try {
			return el.getAsString();
		} catch (RuntimeException ex) {
			return null;
		}
	}

	default Instant readInstant(JsonObject json, String key) {
		String s = readString(json, key);
		if (s == null || s.isBlank()) {
			return null;
		}
		try {
			return Instant.parse(s);
		} catch (RuntimeException ex) {
			return null;
		}
	}

	default <T extends RpJson> T readObject(JsonObject json, String key, Supplier<T> factory) {
		JsonElement el = readElement(json, key);
		if (el == null || !el.isJsonObject()) {
			return null;
		}
		T value = factory.get();
		value.fromJson(el.getAsJsonObject());
		return value;
	}

	default <T extends RpJson> List<T> readList(JsonObject json, String key, Supplier<T> factory) {
		JsonElement el = readElement(json, key);
		if (el == null || !el.isJsonArray()) {
			return null;
		}
		JsonArray arr = el.getAsJsonArray();
		List<T> out = new ArrayList<>(arr.size());
		for (JsonElement item : arr) {
			if (item == null || item.isJsonNull() || !item.isJsonObject()) {
				continue;
			}
			T value = factory.get();
			value.fromJson(item.getAsJsonObject());
			out.add(value);
		}
		return out;
	}

	default List<String> readStringList(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null || !el.isJsonArray()) {
			return null;
		}
		JsonArray arr = el.getAsJsonArray();
		List<String> out = new ArrayList<>(arr.size());
		for (JsonElement item : arr) {
			if (item == null || item.isJsonNull()) {
				continue;
			}
			try {
				out.add(item.getAsString());
			} catch (RuntimeException ex) {
				continue;
			}
		}
		return out;
	}

	default int[] readIntArray(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null || !el.isJsonArray()) {
			return null;
		}
		JsonArray arr = el.getAsJsonArray();
		int[] out = new int[arr.size()];
		for (int i = 0; i < arr.size(); i++) {
			JsonElement item = arr.get(i);
			if (item == null || item.isJsonNull()) {
				out[i] = 0;
				continue;
			}
			try {
				out[i] = item.getAsInt();
			} catch (RuntimeException ex) {
				out[i] = 0;
			}
		}
		return out;
	}

	default Vec2f readVec2(JsonObject json, String key) {
		JsonElement el = readElement(json, key);
		if (el == null || !el.isJsonObject()) {
			return null;
		}
		JsonObject obj = el.getAsJsonObject();
		return new Vec2f(readFloat(obj, "x"), readFloat(obj, "y"));
	}

	default JsonObject writeVec2(Vec2f v) {
		JsonObject obj = new JsonObject();
		if (v == null) {
			return obj;
		}
		obj.addProperty("x", v.x);
		obj.addProperty("y", v.y);
		return obj;
	}

	default <E extends Enum<E>> E readEnum(JsonObject json, String key, Class<E> type, E fallback) {
		String s = readString(json, key);
		if (s == null || s.isBlank()) {
			return fallback;
		}
		try {
			return Enum.valueOf(type, s);
		} catch (IllegalArgumentException ex) {
			return fallback;
		}
	}

	default JsonArray writeStringList(List<String> list) {
		JsonArray arr = new JsonArray();
		if (list == null) {
			return arr;
		}
		for (String s : list) {
			if (s != null) {
				arr.add(new JsonPrimitive(s));
			}
		}
		return arr;
	}

	default JsonArray writeIntArray(int[] array) {
		JsonArray arr = new JsonArray();
		if (array == null) {
			return arr;
		}
		for (int v : array) {
			arr.add(new JsonPrimitive(v));
		}
		return arr;
	}

	default JsonArray writeList(List<? extends RpJson> list) {
		JsonArray arr = new JsonArray();
		if (list == null) {
			return arr;
		}
		for (RpJson item : list) {
			if (item != null) {
				arr.add(item.toJson());
			}
		}
		return arr;
	}

	default List<String> safeStringList(List<String> list) {
		return list == null ? Collections.emptyList() : list;
	}
}
