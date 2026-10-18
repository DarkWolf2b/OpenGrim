package dev.opengrim.gui;

import net.minecraft.util.math.MathHelper;

/**
 * Polar layout math for the radial wheel.
 *
 * <p>Sources: sixtwo/bD.java (lines 64-68 constants {@code -90.0f}/
 * {@code 0.43f}/{@code 86.0f}/{@code 118.0f}/{@code 34.0f}, lines 162-166
 * design space {@code 270.0f} in {@code n()}, 594-601 layout {@code LJ()},
 * 848-894 hit test {@code LQ()}, 790-846 wedge sweep in {@code LK()},
 * 896-922 divider metrics in {@code LO()}), sixtwo/bA.java (lines 6-12 record
 * plus {@code diameter() == outerRadius * 2}), sixtwo/bB.java (line 6 wedge
 * record), sixtwo/bC.java (lines 144-211 {@code Lt()} centroid, 276-278
 * {@code Lv()} preview size, 237-274 {@code Lq()} label lift {@code + 3.0f}
 * and text sizes {@code 5.5}/{@code 6.0}), sixtwo/mZ.java ({@code csu()}
 * angle normalize plus {@code csl()} lerp).
 *
 * <p>Vanilla-API deviations (geometry itself is unchanged):
 * <ul>
 * <li>Angle normalize uses {@code ((d % 360) + 360) % 360} here; original
 * calls {@code mZ.csu()} (sixtwo/mZ.java). Same result for finite inputs.</li>
 * <li>Lerp uses plain {@code a + (b - a) * t} here; original calls
 * {@code mZ.csl()} (sixtwo/mZ.java). Same result.</li>
 * <li>Clamp uses vanilla {@link MathHelper#clamp}; original uses the same
 * {@code MathHelper.clamp} (sixtwo/bD.java {@code LJ()}/{@code LQ()}).</li>
 * </ul>
 */
public final class WheelGeometry {
	/** Start angle in degrees; bD.java field {@code zoXBz = -90.0f}. */
	public static final float START_ANGLE = -90.0f;
	/** Inner radius as a fraction of outer; bD.java field {@code WbPKY = 0.43f}. */
	public static final float INNER_RATIO = 0.43f;
	/** Outer radius lower clamp; bD.java field {@code lJYPx = 86.0f}. */
	public static final float OUTER_MIN = 86.0f;
	/** Outer radius upper clamp; bD.java field {@code IosTn = 118.0f}. */
	public static final float OUTER_MAX = 118.0f;
	/** Preview size upper bound; bD.java field {@code iXvMv = 34.0f}, bC.java {@code Lv()}. */
	public static final float PREVIEW_MAX = 34.0f;
	/** Preview size lower bound; bC.java {@code Lv()} uses {@code 30.0f}. */
	public static final float PREVIEW_MIN = 30.0f;
	/** Design-space edge used by {@code av.n()} via bD.java {@code n()} ({@code 270.0f}). */
	public static final float DESIGN_SIZE = 270.0f;
	/** Center-disc diameter factor; bD.java {@code LN()} uses {@code inner * 1.65f}. */
	public static final float CENTER_FACTOR = 1.65f;
	/** Divider ring inset factor; bD.java {@code LO()} uses {@code inner * 0.05f}. */
	public static final float DIVIDER_INSET_FACTOR = 0.05f;
	/** Divider angular width cap; bD.java {@code LO()} uses {@code min(8.0f, sweep * 0.34f)}. */
	public static final float DIVIDER_MAX_DEG = 8.0f;
	/** Divider angular width fraction; bD.java {@code LO()} uses {@code sweep * 0.34f}. */
	public static final float DIVIDER_FRAC = 0.34f;
	/** Center label size; bD.java {@code LN()} uses {@code lE.SVnNc.bYM(10.0f)}. */
	public static final float CENTER_TEXT_SIZE = 10.0f;
	/** Wedge label size range; bC.java {@code Lq()} uses {@code csl(5.5, 6.0, anim)}. */
	public static final float WEDGE_TEXT_MIN = 5.5f;
	/** Wedge label size range upper end; bC.java {@code Lq()}. */
	public static final float WEDGE_TEXT_MAX = 6.0f;
	/** Label lift above preview; bC.java {@code Lq()} uses {@code + 3.0f}. */
	public static final float LABEL_LIFT = 3.0f;

	private WheelGeometry() {
	}

	/** Layout record; mirrors sixtwo/bA.java ({@code centerX/centerY/innerRadius/outerRadius}). */
	public record Layout(float centerX, float centerY, float innerRadius, float outerRadius) {
		/** Mirrors {@code bA.diameter()} ({@code outerRadius * 2.0f}). */
		public float diameter() {
			return outerRadius * 2.0f;
		}
	}

	/** Wedge record; mirrors sixtwo/bB.java field order. */
	public record Wedge(int index, boolean selected, float centerX, float centerY,
			float diameter, float innerRadius, float outerRadius,
			float segmentStart, float segmentEnd, float segmentMiddleAngle) {
	}

	/**
	 * Mirrors bD.java {@code LJ()}: center at half the screen, outer clamped
	 * from {@code min(w, h) * 0.29f} into {@code [86, 118]}, inner at
	 * {@code outer * 0.43f}.
	 */
	public static Layout layout(float screenW, float screenH) {
		float cx = screenW * 0.5f;
		float cy = screenH * 0.5f;
		float outer = MathHelper.clamp(Math.min(screenW, screenH) * 0.29f, OUTER_MIN, OUTER_MAX);
		float inner = outer * INNER_RATIO;
		return new Layout(cx, cy, inner, outer);
	}

	/** Mirrors {@code mZ.csu()}: normalize degrees into {@code [0, 360)}. */
	public static double normalizeAngle(double deg) {
		double d = deg % 360.0;
		if (d < 0.0) {
			d += 360.0;
		}
		return d;
	}

	/** Mirrors {@code mZ.csl(a, b, t)}: linear interpolation. */
	public static float lerp(double a, double b, double t) {
		return (float) (a + (b - a) * t);
	}

	/**
	 * Mirrors bD.java {@code LQ()}: radial band test first ({@code -1} when
	 * inside the hole or outside the rim), then polar sector mapping with
	 * {@code sweep = 360 / size}, {@code base = -90 - sweep * 0.5} and clamped
	 * index output.
	 */
	public static int hitTest(double mouseX, double mouseY, float centerX, float centerY,
			float innerRadius, float outerRadius, int size) {
		double dx = mouseX - (double) centerX;
		double dy = mouseY - (double) centerY;
		double dist = Math.sqrt(dx * dx + dy * dy);
		if (dist < (double) innerRadius || dist > (double) outerRadius) {
			return -1;
		}
		if (size <= 0) {
			return -1;
		}
		float sweep = 360.0f / (float) size;
		double angleDeg = Math.toDegrees(Math.atan2(dy, dx));
		double base = (double) START_ANGLE - (double) sweep * 0.5;
		double rel = normalizeAngle(angleDeg - base);
		int index = (int) (rel / (double) sweep);
		return MathHelper.clamp(index, 0, size - 1);
	}

	/** Mirrors bD.java {@code LK()} sweep/base computation. */
	public static float sweep(int size) {
		return 360.0f / (float) size;
	}

	/** Mirrors bD.java {@code LK()}: {@code base = -90 - sweep * 0.5}. */
	public static float baseAngle(float sweep) {
		return START_ANGLE - sweep * 0.5f;
	}

	/**
	 * Mirrors bC.java {@code Lt()}: annular-sector centroid radius. Full rings
	 * use {@code (inner + outer) * 0.5}; sectors use
	 * {@code 2/3 * (outer^3 - inner^3) / (outer^2 - inner^2) * sin(a/2) / (a/2)}.
	 */
	public static float centroidRadius(float innerRadius, float outerRadius, float startDeg, float endDeg) {
		float arc = Math.abs((float) Math.toRadians(endDeg - startDeg));
		if (arc >= 6.282185f) {
			return (innerRadius + outerRadius) * 0.5f;
		}
		float half = arc * 0.5f;
		float ring = 0.6666667f * (outerRadius * outerRadius * outerRadius - innerRadius * innerRadius * innerRadius)
				/ (outerRadius * outerRadius - innerRadius * innerRadius);
		if (half == 0.0f) {
			return 1.0f;
		}
		return ring * ((float) Math.sin(half) / half);
	}

	/** Mirrors bC.java {@code Lv()}: {@code csl(30.0, 34.0, anim)}. */
	public static float previewSize(float anim) {
		return lerp(PREVIEW_MIN, PREVIEW_MAX, anim);
	}
}
