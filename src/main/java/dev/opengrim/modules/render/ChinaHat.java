package dev.opengrim.modules.render;


import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;

/**
 * China Hat (registry sixtwo.cS): "Renders china hat on your head".
 *
 * <p>parity: settings 1:1; behavior ported from the shell renderer pair
 * {@code qD} (player FeatureRenderer) + {@code ky.bSd} (cone draw), both plain
 * Java in the corpus.
 *
 * <p>Evidence:
 * <ul>
 *   <li>cS settings: analysis/decompiled/payload-named-cfr/sixtwo/cS.java:43-83
 *       constructor; names/values re-derived from the decrypted constant pool
 *       (analysis/decrypted/full-dump.jsonl, {@code sixtwo.cS} entries:
 *       group "Show For" [83,104,111,119,32,70,111,114], "Self"
 *       [83,101,108,102] default-on via {@code cw.Tz()}, "Friends"
 *       [70,114,105,101,110,100,115] default-off, "Color"
 *       {@code .Uf(rD.dlM().bjG().bis())}, numeric "Gradient Speed"
 *       [71,114,97,100,105,101,110,116,32,83,112,101,101,100]
 *       {@code .Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0)}). Trace 2026-10-17: class
 *       load only (never enabled in the tour).</li>
 *   <li>Render logic: analysis/decompiled/payload-named/sixtwo/qD.java:92-300
 *       (gating chain, head offsets -0.43/-0.5, NEGATIVE_Z 180 + POSITIVE_Y 90,
 *       deferred {@code jo.bEt(() -> ky.bSd(...))}) and
 *       analysis/decompiled/payload-named/sixtwo/ky.java:87-286 (triangle fan
 *       apex (0,0.3,0), rim radius {@code player.getWidth()} at
 *       (-sin,0,cos)*2pi*i/segments, alpha literal 40.0f, second
 *       DEBUG_LINE_STRIP pass, per-segment gradient from
 *       {@code jk.bDm(i, color, gradientSpeed)}).</li>
 * </ul>
 *
 * <p>Render path: {@link ChinaHatRenderer} registers the equivalent player-model
 * feature renderer through Fabric's {@code LivingEntityFeatureRendererRegistrationCallback}
 * and uses the exact head transform ({@code getHead().applyTransform} plus the
 * recovered -0.43/-0.5 offsets) and {@code ky.bSd} cone/line geometry.
 *
 * <p>Remaining [G]: {@code ky}'s segment count {@code nUFUt} (DES) stays the
 * 24-segment guess; the gradient triangle constants (180/360/0) are the same
 * high-probability reading; the {@code oK.cIT()} native is read as sneaking
 * (sneaking -0.5, otherwise -0.43); {@code lT.setLineSmoothing} has no
 * equivalent and the line pass runs inline.
 */
public class ChinaHat extends Module {
	/** ky.bSd triangle-fan segment count (nUFUt, DES-only: high-probability guess). */
	static final int SEGMENTS = 24;

	private final GroupSetting showFor = register(new GroupSetting("show_for"));
	private final BoolSetting self = register(new BoolSetting("self", true));
	private final BoolSetting friends = register(new BoolSetting("friends", false));
	private final ColorSetting color = register(new ColorSetting("color", 0xFF9747FF, false));
	private final DoubleSetting gradientSpeed = register(new DoubleSetting("gradient_speed", 1.0, 1.0, 10.0, 5.0, null));

	public ChinaHat() {
		super("china_hat", "China Hat", "Renders china hat on your head", ModuleCategory.VISUALS);
		showFor.add(self);
		showFor.add(friends);
	}

	/**
	 * qD defers {@code ky.bSd} through {@code jo.bEt}; the port draws the
	 * per-frame captures at BEFORE_TRANSLUCENT (after the entity pass and after
	 * the Chams/Outlines AFTER_ENTITIES composite), with the exact feature-stage
	 * matrices.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.BEFORE_TRANSLUCENT) {
			return;
		}
		if (!isEnabled()) {
			ChinaHatRenderer.clearCaptured();
			return;
		}
		ChinaHatRenderer.drawCaptured();
	}

	/** cS.Za() style group "Show For". */
	public GroupSetting getShowFor() {
		return showFor;
	}

	/** cS.Zb() "Self" select (field mjpkN). */
	public boolean isSelf() {
		return self.getValue();
	}

	/** cS.Zc() "Friends" select (field OHlmP). */
	public boolean isFriends() {
		return friends.getValue();
	}

	/** cS.Zd() "Color" (field Ccjvo). */
	public int getColor() {
		return color.getValue();
	}

	/** cS.Ze() "Gradient Speed" (field BdlMa). */
	public double getGradientSpeed() {
		return gradientSpeed.getValue();
	}
}
