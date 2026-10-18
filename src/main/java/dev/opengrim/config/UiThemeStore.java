package dev.opengrim.config;

import com.google.gson.JsonObject;

/**
 * Persisted UI theme values (the {@code id} essentials).
 *
 * <p>Sources: sixtwo/id.java (lines 588-599 {@code fromJson} reading five
 * floats plus two packed color ints plus one float, 601-614 {@code toJson}
 * writing the same eight props, 616-618 {@code bhe()}/620-622 {@code bhf()}
 * via {@code mG.cnQ(int)}, 644-646 {@code bhd()} factory), sixtwo/mG.java (channel clamp {@code 0..255} in
 * ctor, packing {@code coh()} as {@code ARGB}, unpacking {@code cnQ(int)}),
 * sixtwo/rp.java (float/int read helpers).
 *
 * <p>Vanilla-API deviations:
 * <ul>
 * <li>JSON keys are readable names here; the original keys are DES strings
 * (sixtwo/id.java static block).</li>
 * <li>Colors are packed ARGB ints with the same clamp/pack order as
 * {@code mG} (sixtwo/mG.java ctor plus {@code coh()}).</li>
 * </ul>
 */
public class UiThemeStore implements RpJson {
	private float rounding;
	private float border;
	private float glow;
	private float shadow;
	private float animMs;
	private int primaryArgb;
	private float scale;
	private int secondaryArgb;

	public float rounding() {
		return rounding;
	}

	public float border() {
		return border;
	}

	public float glow() {
		return glow;
	}

	public float shadow() {
		return shadow;
	}

	public float animMs() {
		return animMs;
	}

	public int primaryArgb() {
		return primaryArgb;
	}

	public float scale() {
		return scale;
	}

	public int secondaryArgb() {
		return secondaryArgb;
	}

	public UiThemeStore rounding(float v) {
		rounding = v;
		return this;
	}

	public UiThemeStore border(float v) {
		border = v;
		return this;
	}

	public UiThemeStore glow(float v) {
		glow = v;
		return this;
	}

	public UiThemeStore shadow(float v) {
		shadow = v;
		return this;
	}

	public UiThemeStore animMs(float v) {
		animMs = v;
		return this;
	}

	public UiThemeStore primaryArgb(int v) {
		primaryArgb = v;
		return this;
	}

	public UiThemeStore scale(float v) {
		scale = v;
		return this;
	}

	public UiThemeStore secondaryArgb(int v) {
		secondaryArgb = v;
		return this;
	}

	/** Mirrors {@code id.fromJson()}: eight props in file order. */
	@Override
	public void fromJson(JsonObject json) {
		if (json == null) {
			return;
		}
		rounding = readFloat(json, "rounding");
		border = readFloat(json, "border");
		glow = readFloat(json, "glow");
		shadow = readFloat(json, "shadow");
		animMs = readFloat(json, "animMs");
		primaryArgb = readInt(json, "primaryArgb");
		scale = readFloat(json, "scale");
		secondaryArgb = readInt(json, "secondaryArgb");
	}

	/** Mirrors {@code id.toJson()}: same eight props. */
	@Override
	public JsonObject toJson() {
		JsonObject json = new JsonObject();
		json.addProperty("rounding", rounding);
		json.addProperty("border", border);
		json.addProperty("glow", glow);
		json.addProperty("shadow", shadow);
		json.addProperty("animMs", animMs);
		json.addProperty("primaryArgb", primaryArgb);
		json.addProperty("scale", scale);
		json.addProperty("secondaryArgb", secondaryArgb);
		return json;
	}

	/** Channel clamp then ARGB pack; mirrors {@code mG} ctor plus {@code coh()}. */
	public static int packArgb(int a, int r, int g, int b) {
		a = Math.max(0, Math.min(255, a));
		r = Math.max(0, Math.min(255, r));
		g = Math.max(0, Math.min(255, g));
		b = Math.max(0, Math.min(255, b));
		return (a << 24) | (r << 16) | (g << 8) | b;
	}

	/** Split packed ARGB into channels; mirrors {@code mG.cnQ(int)}. */
	public static int[] unpackArgb(int argb) {
		return new int[] {(argb >>> 24) & 0xFF, (argb >>> 16) & 0xFF, (argb >>> 8) & 0xFF, argb & 0xFF};
	}
}
