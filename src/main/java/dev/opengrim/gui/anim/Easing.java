package dev.opengrim.gui.anim;

/**
 * Port of sixtwo.rj — the easing function table. Exact curves recovered from
 * the runtime-decompiled {@code win/gui-src/sixtwo_24.java} (2026-10-13):
 * <pre>
 *   rj.AYqck = rj.dgk(1.70158f) = x*x*((s+1)*x - s)          (ease-in back)
 *   rj.XzDkv = rj.dgl(1.70158f) = (x-1)^2*((s+1)*(x-1)+s)+1  (ease-out back)
 *   rj.MBpuQ = dgj(x -> 1 - (1-x)^3)                          (ease-out cubic)
 *   rj.Xmkbr = dgj(x -> x)                                    (linear)
 * </pre>
 * with {@code s = 1.70158f} (the classic cubic-back constant; {@code dgc}
 * builds cubic-bezier curves via {@code rj$vV} and {@code dgj} wraps a
 * lambda via {@code rj$wd}). {@code rj.dga(t, min, max, span)} evaluates the
 * curve at {@code t/span} scaled onto {@code [min, max]}.
 *
 * <p>Other recovered curves (not referenced by the GUI call sites ported so
 * far, listed for completeness): Xmkbr linear, VJKkM {@code 1-cos(pi/2·x)}
 * (out sine), Fhaeo {@code sin(pi/2·x)} (in sine), UPXqT
 * {@code -(cos(pi·x)-1)/2} (in-out sine), ceYgU bezier(0.42,0,0.58,1),
 * Zotpp bezier(0.45,1.45,0.49,1.15), SXybO {@code x²} (quad in), ocrjZ
 * {@code 1-(1-x)²} (quad out), rGiqX quad in-out.
 */
public enum Easing {
	/** rj.Xmkbr — linear (rk default in the decompiled default path). */
	LINEAR {
		@Override
		public float apply(float t, float min, float max, float span) {
			return min + (max - min) * clamp01(t / span);
		}
	},
	/** rj.XzDkv — ease-out back with s = 1.70158 (the opening curve: bl.m uses XzDkv while !VWsmm). */
	OPEN {
		@Override
		public float apply(float t, float min, float max, float span) {
			float x = clamp01(t / span);
			float s = BACK_S;
			float u = x - 1.0f;
			return min + (max - min) * (u * u * ((s + 1.0f) * u + s) + 1.0f);
		}
	},
	/** rj.AYqck — ease-in back with s = 1.70158 (the closing curve: bl.m uses AYqck while VWsmm). */
	CLOSE {
		@Override
		public float apply(float t, float min, float max, float span) {
			float x = clamp01(t / span);
			float s = BACK_S;
			return min + (max - min) * (x * x * ((s + 1.0f) * x - s));
		}
	},
	/** rj.MBpuQ — ease-out cubic (hover tweens). */
	HOVER {
		@Override
		public float apply(float t, float min, float max, float span) {
			float x = clamp01(t / span);
			float u = 1.0f - x;
			return min + (max - min) * (1.0f - u * u * u);
		}
	};

	/** rj.dgk/dgl constant: 1.70158f. */
	private static final float BACK_S = 1.70158f;

	private static float clamp01(float t) {
		return t < 0.0f ? 0.0f : (t > 1.0f ? 1.0f : t);
	}

	/** rj.dga(t, min, max, span). */
	public abstract float apply(float t, float min, float max, float span);
}