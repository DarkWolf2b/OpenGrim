package dev.opengrim.rotation;

/**
 * Port of sixtwo.mw (payload-named-cfr/sixtwo/mw.java:15-20) — the original
 * client's six-slot priority enum used to order rotation requests (and event
 * handler phases, e.g. {@code @hG(priority=mw.CRITICAL)} on
 * sixtwo.qL#dbN, qL.java:62).
 *
 * <p>The six constants are kept in original declaration order with their
 * original identifiers. Their backing {@code int} values come from the native
 * {@code cmD()} (mw.java:52); here ordering is by declaration ordinal, which
 * matches the observed usage ({@code uWTdl} is the silent-aim tier used by
 * dI.java:622-625 and fq.java:1054) — see
 * analysis/PARITY-DIVERGENCES.md.
 */
public enum RotationPriority {
	ZUeMI,
	oxyHZ,
	uwYcK,
	uWTdl,
	Itsnz,
	hrPmv;

	/** Numeric rank; higher wins (mirrors mt.java:16 max-heap on priority). */
	public int rank() {
		return ordinal();
	}
}
