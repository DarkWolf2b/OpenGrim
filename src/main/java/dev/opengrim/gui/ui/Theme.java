package dev.opengrim.gui.ui;

import dev.opengrim.gui.anim.AnimatedColor;
import dev.opengrim.gui.anim.Tween;

/**
 * Port of the original theme stack: sixtwo.ie (color properties),
 * sixtwo.ig (theme: colors + blur properties + liquid-glass properties),
 * sixtwo.ii (animated theme wrapper), sixtwo.id (panel/liquid-glass
 * properties) and the sixtwo.fX background-style surface.
 *
 * <p>Sources: analysis/decompiled/payload-named/sixtwo/ig.java (default
 * theme {@code PtFoz} at ig.java:238 with ie.bhE(text, accentStrong,
 * background, panel, accent); per-tint variants at ig.java:239-268),
 * sixtwo/ii.java:38-59 (animated channels), sixtwo/lC.java:315-360 + 553-600
 * (background styles: Blur/liquid-glass/Solid with opacities), fX spec
 * (analysis/specs/handlers/fX.md: Liquid Glass idx0, Blur idx1 default,
 * Solid idx2; opacities 0.2/0.75/0.85 via fX.aYh()).
 */
public final class Theme {
	/** fX background styles (spec fX.md + casesafe fX_.java:188-219, 293-299, 413-419). */
	public enum BackgroundStyle {
		/** "Liquid Glass" (idx0, fX.aYe() = SQ(0), fX.aYk() = 0.2f). */
		LIQUID_GLASS(0, "Liquid Glass", 0.2f),
		/** "Blur" (idx1, default, fX.aYf() = SQ(1), fX.aYi() = 0.75f). */
		BLUR(1, "Blur", 0.75f),
		/** "Solid" (idx2, fX.aYg() = SQ(2), fX.aYj() = 0.85f). */
		SOLID(2, "Solid", 0.85f);

		public final int index;
		public final String label;
		/** fX.aYh() background opacity per style. */
		public final float opacity;

		BackgroundStyle(int index, String label, float opacity) {
			this.index = index;
			this.label = label;
			this.opacity = opacity;
		}

		/** Default = Blur (idx1). */
		public static BackgroundStyle defaultStyle() {
			return BLUR;
		}

		public static BackgroundStyle byIndex(int index) {
			BackgroundStyle[] values = values();
			return index >= 0 && index < values.length ? values[index] : defaultStyle();
		}
	}

	/** ie port: the five color properties. */
	public record ColorProps(ColorF text, ColorF accentStrong, ColorF background, ColorF panel, ColorF accent) {
	}

	/**
	 * id port: panel/liquid-glass properties. Recovered default at
	 * casesafe id.java:644-646 — {@code bhd(100,100,100,0,0,mG.UhgnI,1.5f,
	 * mG.hoGuU)} mapping to getters bhg(100)/bhh(100)/bhi(100)/bhj(0)/bhk(0)
	 * /bhe(glass fill)/bhl(1.5 border width)/bhf(glass border). bhj and bhk
	 * are both 0.0f and are not carried in this record (consumers use
	 * ii.bjm()=bhk through the theme surface, always 0).
	 */
	public record PanelProps(float innerRadius, float outerRadius, float borderInset, float borderWidth,
			ColorF glassFill, ColorF glassBorder) {
		public static final PanelProps DEFAULT = new PanelProps(100.0f, 100.0f, 100.0f, 1.5f,
				ColorF.TRANSPARENT, ColorF.WHITE);
	}

	/**
	 * if port (ig.bix). Recovered default at ig.java:229:
	 * {@code ckEfn = if.bia(20.0f, 1.0f)} — these are iif.bib() speed and
	 * iif.bic() multiplier, not durations; the real tween duration is a
	 * DES-encrypted literal (ii.java:48 {@code new rk(<encrypted>,
	 * theme.bix().bib())}). The ms values below are the port's G-approximation.
	 */
	public record MotionProps(int shortMs, int longMs) {
		public static final MotionProps DEFAULT = new MotionProps(150, 300);
	}

	/** ig.PtFoz default theme (ig.java:238). */
	public static final ColorProps DEFAULT_COLORS = new ColorProps(
			ColorF.WHITE, // bhF text
			ColorF.WHITE, // bhG accent-strong
			ColorF.rgb(12.0f, 12.0f, 12.0f), // bhH background
			ColorF.rgb(24.0f, 24.0f, 27.0f), // bhI panel
			ColorF.VIOLET); // bhJ accent (mG.yHyOB)

	// ig per-tint variants (ig.java:239-268), token-for-token.
	/** ig.gsTXO (red). */
	public static final ColorProps RED = new ColorProps(
			ColorF.WHITE, ColorF.rgb(255.0f, 58.0f, 47.0f), ColorF.rgb(14.0f, 2.0f, 1.0f),
			ColorF.rgb(43.0f, 20.0f, 19.0f), ColorF.rgb(255.0f, 58.0f, 47.0f));
	/** ig.hzckK (yellow). */
	public static final ColorProps YELLOW = new ColorProps(
			ColorF.WHITE, ColorF.rgb(255.0f, 191.0f, 0.0f), ColorF.rgb(15.0f, 12.0f, 2.0f),
			ColorF.rgb(45.0f, 35.0f, 10.0f), ColorF.rgb(255.0f, 191.0f, 0.0f));
	/** ig.eaYCr (green). */
	public static final ColorProps GREEN = new ColorProps(
			ColorF.WHITE, ColorF.rgb(46.0f, 204.0f, 113.0f), ColorF.rgb(2.0f, 12.0f, 8.0f),
			ColorF.rgb(10.0f, 35.0f, 20.0f), ColorF.rgb(46.0f, 204.0f, 113.0f));
	/** ig.pHENl (blue). */
	public static final ColorProps BLUE = new ColorProps(
			ColorF.WHITE, ColorF.rgb(79.0f, 124.0f, 255.0f), ColorF.rgb(5.0f, 5.0f, 8.0f),
			ColorF.rgb(8.0f, 10.0f, 20.0f), ColorF.rgb(79.0f, 124.0f, 255.0f));
	/** ig.WSWRe (indigo, mG.JTHGB). */
	public static final ColorProps INDIGO = new ColorProps(
			ColorF.WHITE, ColorF.INDIGO, ColorF.rgb(10.0f, 10.0f, 22.0f),
			ColorF.rgb(22.0f, 22.0f, 38.0f), ColorF.INDIGO);
	/** ig.OetCB (violet, mG.yHyOB). */
	public static final ColorProps VIOLET = new ColorProps(
			ColorF.WHITE, ColorF.VIOLET, ColorF.rgb(13.0f, 4.0f, 25.0f),
			ColorF.rgb(26.0f, 16.0f, 40.0f), ColorF.VIOLET);

	private static final Theme INSTANCE = new Theme();

	private ColorProps colors = DEFAULT_COLORS;
	private PanelProps panel = PanelProps.DEFAULT;
	private MotionProps motion = MotionProps.DEFAULT;
	private BackgroundStyle backgroundStyle = BackgroundStyle.defaultStyle();

	// ii animated channels (ii.java:38-59), durations from ig.eurvE (if).
	private final AnimatedColor text;
	private final AnimatedColor accentStrong;
	private final AnimatedColor background;
	private final AnimatedColor panelColor;
	private final AnimatedColor accent;
	private final AnimatedColor glassFill;
	private final AnimatedColor glassBorder;
	/** ii.lezXT/RqSHC theme transition tweens. */
	private final Tween shortTween = new Tween(MotionProps.DEFAULT.shortMs(), 1.0f);
	private final Tween longTween = new Tween(MotionProps.DEFAULT.longMs(), 1.0f);

	private Theme() {
		int d = motion.shortMs();
		int l = motion.longMs();
		text = new AnimatedColor(d, DEFAULT_COLORS.text());
		accentStrong = new AnimatedColor(d, DEFAULT_COLORS.accentStrong());
		background = new AnimatedColor(d, DEFAULT_COLORS.background());
		panelColor = new AnimatedColor(d, DEFAULT_COLORS.panel());
		accent = new AnimatedColor(l, DEFAULT_COLORS.accent());
		glassFill = new AnimatedColor(d, panel.glassFill());
		glassBorder = new AnimatedColor(d, panel.glassBorder());
	}

	public static Theme get() {
		return INSTANCE;
	}

	/** ig.bix (if) motion props. */
	public MotionProps motion() {
		return motion;
	}

	/** ig.biy (id) panel props. */
	public PanelProps panel() {
		return panel;
	}

	/** ig.biA: swap color props (theme switch). */
	public void setColorProps(ColorProps props) {
		this.colors = props;
	}

	/** ig.biw. */
	public ColorProps colorProps() {
		return colors;
	}

	/** fX style surface. */
	public BackgroundStyle backgroundStyle() {
		return backgroundStyle;
	}

	public void setBackgroundStyle(BackgroundStyle style) {
		this.backgroundStyle = style;
	}

	// ---- ii animated accessors (advance toward current theme each call) ----

	/** ii.bjb (bhF text). */
	public ColorF text() {
		return text.update(colors.text());
	}

	/** ii.bjc (bhG). */
	public ColorF accentStrong() {
		return accentStrong.update(colors.accentStrong());
	}

	/** ii.bjd (bhH background). */
	public ColorF background() {
		return background.update(colors.background());
	}

	/** ii.bje (bhI panel). */
	public ColorF panelColor() {
		return panelColor.update(colors.panel());
	}

	/** ii.bjf (bhJ accent). */
	public ColorF accent() {
		return accent.update(colors.accent());
	}

	/** id.bhe glass fill (ii.bjn). */
	public ColorF glassFill() {
		return glassFill.update(panel.glassFill());
	}

	/** id.bhf glass border (ii.bjp). */
	public ColorF glassBorder() {
		return glassBorder.update(panel.glassBorder());
	}

	/** ii.bjg (lezXT short tween). */
	public Tween shortTween() {
		return shortTween;
	}

	/** ii.bjh (RqSHC long tween). */
	public Tween longTween() {
		return longTween;
	}

	/** ii.bji..bjo passthroughs of id floats used by lC.ccW/cdM. */
	public float glassInnerRadius() {
		return panel.innerRadius();
	}

	public float glassOuterRadius() {
		return panel.outerRadius();
	}

	public float glassBorderInset() {
		return panel.borderInset();
	}

	public float glassBorderWidth() {
		return panel.borderWidth();
	}
}
