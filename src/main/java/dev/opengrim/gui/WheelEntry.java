package dev.opengrim.gui;

import java.util.Objects;

/**
 * Per-wedge content (the {@code bC}/{@code pY}/{@code pX} essentials).
 *
 * <p>Sources: sixtwo/bC.java (lines 225-227 label {@code Ly()}, 280-282 idle
 * instance {@code Lz()} via {@code bC$si}, 284-361 hover instance
 * {@code Lr()}, 233-235 reset {@code Ls()}, 221-223 hover anim {@code LB()},
 * 237-274 layout {@code Lq()} with centroid {@code Lt()} (144-211), preview
 * size {@code Lv()} (276-278) and label lift, 102-142 preview {@code Lu()}
 * with pose reset {@code Lw()} (363-405), dispatch guard {@code Lx()}),
 * sixtwo/bC$si.java (idle {@code pX} with {@code finished() == false} plus
 * {@code applyPreviewKeyframe} delegate), sixtwo/pY.java ({@code id()},
 * {@code label()} title-case fallback, {@code createInstance()}),
 * sixtwo/pX.java ({@code finished()}), sixtwo/pW.java {@code cTX()} dispatch
 * shape ({@code put(uuid, createInstance())}).
 *
 * <p>Vanilla-API deviations:
 * <ul>
 * <li>Hover animation uses a timed linear ramp here; the original drives
 * {@code rk} with {@code rj.XzDkv}/{@code rj.UPXqT} curves and native
 * durations (sixtwo/bC.java, sixtwo/rj.java).</li>
 * <li>Player preview uses a vanilla box plus label; the original renders the
 * player {@code PlayerEntityRenderState} with the emote instance applied
 * (sixtwo/bC.java {@code Lu()}/{@code Lw()}).</li>
 * <li>Confirm dispatch runs the local {@code action} here; the original calls
 * {@code pW.cTX(player, pY)} which stores {@code createInstance()} per player
 * UUID (sixtwo/pW.java).</li>
 * <li>Label derivation title-cases {@code id} the same way as
 * {@code pY.label()} (sixtwo/pY.java) when no explicit label is given.</li>
 * </ul>
 */
public final class WheelEntry {
	private final String id;
	private final String label;
	private final Runnable action;
	private final boolean hasPayload;
	private float hoverAnim;
	private long lastHoverChangeAt;
	private boolean hovered;

	public WheelEntry(String id, String label, Runnable action, boolean hasPayload) {
		this.id = Objects.requireNonNull(id, "id");
		this.label = labelOrTitle(id, label);
		this.action = action;
		this.hasPayload = hasPayload;
		this.hoverAnim = 0.0f;
		this.lastHoverChangeAt = System.currentTimeMillis();
		this.hovered = false;
	}

	/** Idle entry without a confirm payload; mirrors {@code Lx() == null} guard. */
	public static WheelEntry labelOnly(String id, String label) {
		return new WheelEntry(id, label, null, false);
	}

	/** Entry with a confirm payload; mirrors a {@code pY} with an instance. */
	public static WheelEntry actionable(String id, String label, Runnable action) {
		return new WheelEntry(id, label, action, true);
	}

	/** Mirrors {@code pY.label()}: explicit label or title-cased {@code id}. */
	public static String labelOrTitle(String id, String label) {
		if (label != null && !label.isBlank()) {
			return label;
		}
		if (id == null || id.isBlank()) {
			return "";
		}
		String cleaned = id.replace('_', ' ').replace('-', ' ').trim();
		String[] parts = cleaned.split("\\s+");
		StringBuilder out = new StringBuilder();
		for (String part : parts) {
			if (part.isEmpty()) {
				continue;
			}
			if (out.length() > 0) {
				out.append(' ');
			}
			out.append(Character.toUpperCase(part.charAt(0)));
			if (part.length() > 1) {
				out.append(part.substring(1).toLowerCase());
			}
		}
		String s = out.toString();
		return s.isEmpty() ? id : s;
	}

	public String id() {
		return id;
	}

	/** Mirrors {@code bC.Ly()}. */
	public String label() {
		return label;
	}

	/** Mirrors the {@code Lx() != null} confirm guard. */
	public boolean hasPayload() {
		return hasPayload && action != null;
	}

	/** Mirrors {@code bC.Ls()}: drop hover-instance state. */
	public void resetHoverInstance() {
		hovered = false;
	}

	/**
	 * Mirrors {@code XclRQ.dhc(selected)}: retarget the hover ramp.
	 * The durations are native in the original; here a 120ms linear ramp is
	 * used and the gap is listed as a divergence.
	 */
	public void setHovered(boolean selected) {
		if (hovered != selected) {
			hovered = selected;
			lastHoverChangeAt = System.currentTimeMillis();
		}
		float target = selected ? 1.0f : 0.0f;
		long dt = System.currentTimeMillis() - lastHoverChangeAt;
		float t = Math.max(0.0f, Math.min(1.0f, (float) dt / 120.0f));
		hoverAnim = hoverAnim + (target - hoverAnim) * Math.max(0.0f, Math.min(1.0f, t));
		if (t >= 1.0f) {
			hoverAnim = target;
		}
	}

	/** Mirrors {@code XclRQ.dhj()}. */
	public float hoverAnim() {
		return hoverAnim;
	}

	/** Snap used on close; mirrors {@code LB().dhg()}. */
	public void snapClosed() {
		hoverAnim = 0.0f;
		hovered = false;
	}

	/**
	 * Confirm dispatch; mirrors {@code bD.LH()} guard plus
	 * {@code pW.cTX(player, Lx())}. Runs the local action only when a payload
	 * is present.
	 */
	public void confirm() {
		if (hasPayload() && action != null) {
			action.run();
		}
	}
}
