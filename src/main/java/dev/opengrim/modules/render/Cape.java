package dev.opengrim.modules.render;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.SkinTexturesResolveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.player.SkinTextures;
import net.minecraft.util.AssetInfo.TextureAssetInfo;

/**
 * Cape (registry sixtwo.ee, module id 73, bind -999 = unbound, original
 * category gh.qBzlZ - the rebuild's own category assignment, as for every
 * qBzlZ module): "Allows to set custom cape".
 *
 * <p>1:1 reconstruction of sixtwo.ee (verified 2026-10-17 against
 * analysis/decompiled/payload-decrypted/sixtwo/ee.java and the bytecode in
 * analysis/decompiled/jar-casesafe/sixtwo/ee.class):
 * <ul>
 *   <li>Settings, in construction order (ee.java:30-80): "Texture URL" cy
 *       {@code .Un(2048).Up("")} (ee.java:47), "Use Presets" cJ
 *       {@code .WE(true)} (ee.java:60), "Preset" ct (ee.java:68) with the 13
 *       TDPHW options in map insertion order (ee.java:81-102), "Hide Wings" cJ
 *       {@code .WE(false)} (ee.java:80). The "Preset" group has no
 *       {@code .SO()}/{@code .SY()} default marker, so {@code ct.kErPl} stays 0
 *       = the first option "2011".</li>
 *   <li>Change callbacks (ee.java:104-116): Texture URL change refreshes only
 *       when {@code jd.bAm(url)} validates the URL (native [N], ee.java:108),
 *       Use Presets and Preset changes refresh unconditionally. Rebuilt as the
 *       per-tick idempotent {@link CapeTextureManager#ensureLoaded} poll; the
 *       native validator is replaced by "failed fetch keeps the previous cape"
 *       (PARITY divergences).</li>
 *   <li>Visibility gate (ee.java:117-135): Texture URL is visible only while
 *       Use Presets is OFF. The original evaluates
 *       {@code ZOSxo.Vf(() -> !sxdUz.WF())} dynamically at GUI draw time; the
 *       rebuild refreshes the flag at construction and from the Use Presets
 *       change callback, so the gate holds regardless of the module's enabled
 *       state.</li>
 *   <li>Lifecycle: {@code aaj()} (ee.java:898-920) refreshes immediately on
 *       enable; {@code YO()} (ee.java:1048-1050) is empty - no cleanup, the
 *       last-applied cape stays until native restore.</li>
 *   <li>{@code arI(gR)} (ee.java:947-971): the single {@code @hG} listener,
 *       registered in the constructor via {@code hF.bdI(this)} (ee.java:136)
 *       and never unregistered (the empty YO override drops the base
 *       {@code hF.bdM}); {@code gR} is a bare hH subclass dispatched from the
 *       native layer, never fired in the 2026-10-17 trace, firing point unknown
 *       [U] - the rebuild refreshes per tick instead.</li>
 *   <li>Preset registry TDPHW (ee.java:141-892 static block):
 *       {@code new LinkedHashMap<>()} (ee.java:206) filled by 13 puts
 *       (ee.java:253/300/347/394/441/491/556/606/656/705/757/807/861);
 *       keys/values decrypted through the class's own {@code arW/arU} DES
 *       kernel, cross-checked against the 58 recorded runtime call values
 *       (analysis/decrypted/full-dump.jsonl) - key/value lengths and order
 *       re-verified offline 2026-10-17.</li>
 *   <li>Obfuscation tripwire {@code arS()/arR()} (ee.java:938-945, 1044-1046):
 *       always null in practice (trace 2026-10-17: arS returned 0 in all 46
 *       samples) - not ported.</li>
 * </ul>
 *
 * <p>The original's native texture pipeline ({@code qG.dam()} refresh,
 * {@code qG.daj(AbstractClientPlayerEntity)} cape identifier rendered by the
 * {@code qE} custom-cape FeatureRenderer) is rebuilt as
 * {@link CapeTextureManager} (background download of the resolved URL to
 * {@code opengrim:cape}) plus the {@link SkinTexturesResolveEvent} skin-provider
 * hook. Cape application is gated exactly like the original: only while the
 * module is enabled ({@code ee2.bag()}, qE.java:151-181) and only once a cape
 * texture is loaded ({@code qG.daj() == null -> return}, qE.java:182-186);
 * otherwise the vanilla cape renders.
 *
 * <p>Hide Wings (FsBgj, ee.java:80, {@code arM()} ee.java:894-896) gates the
 * client's cosmetic wings render: {@code qC} returns early while the toggle is
 * on (qC.java:396) - the same renderer also hides the wings whenever an elytra
 * is worn (qC.java:403-405), so the toggle never affects the elytra itself. The
 * wings FeatureRenderer ({@code qC}) is not part of this rebuild; the toggle is
 * exposed via {@link #isHideWings()} for that consumer and currently has no
 * visible effect [U].
 */
public class Cape extends Module {
	/**
	 * Preset registry TDPHW in insertion order (ee.java:206 LinkedHashMap,
	 * puts ee.java:253-861) - name to cape texture URL.
	 */
	private static final Map<String, String> PRESET_URLS = presetUrls();

	/** "Texture URL" cy (ee.java:47): {@code .Un(2048).Up("")} - capped input. */
	private final StringSetting textureUrl = register(new StringSetting("texture_url", "") {
		@Override
		public void setValue(String value) {
			super.setValue(value == null ? "" : value.substring(0, Math.min(value.length(), 2048)));
		}
	});
	private final BoolSetting usePresets = register(new BoolSetting("use_presets", true) {
		@Override
		protected void onChange() {
			// ee.java:117-135 ZOSxo.Vf(() -> !sxdUz.WF()): the original
			// re-evaluates the visibility supplier on every GUI draw, so the
			// Texture URL row follows Use Presets immediately - also while the
			// module is disabled.
			textureUrl.setVisible(!getValue());
		}
	});
	private final ModeSetting preset = register(new ModeSetting("preset",
			List.of("2011", "2012", "2013", "2015", "2016", "Mojang", "Mojang Studios",
					"Mojira", "Cobalt", "Spade", "Snowman", "Turtle", "Birthday"),
			"2011"));
	private final BoolSetting hideWings = register(new BoolSetting("hide_wings", false));

	public Cape() {
		super("cape", "Cape", "Allows to set custom cape", ModuleCategory.RENDER);
		// ee.java:117-135 ZOSxo.Vf(() -> !sxdUz.WF()): "Texture URL" is only
		// visible while "Use Presets" is off. Set the boot state here (the
		// module starts disabled); the Use Presets change callback keeps it
		// current afterwards.
		textureUrl.setVisible(!usePresets.getValue());
	}

	/**
	 * Enable hook (ee.java:898-920 {@code aaj()}): refresh the cape
	 * immediately. The original's {@code qG.dam()} does a blocking fetch here
	 * (trace 2026-10-17: the aaj enter/exit pair spans 218,436 QPC ticks); the
	 * rebuild fetches in the background (PARITY divergences).
	 */
	@Override
	protected void onEnable() {
		CapeTextureManager.ensureLoaded(getResolvedCapeUrl());
	}

	@Override
	public void onTick() {
		// Mirror the original's qG.dam refresh (change callbacks ee.java:104-116,
		// gR listener ee.java:947-971): ensureLoaded is idempotent per URL.
		CapeTextureManager.ensureLoaded(getResolvedCapeUrl());
	}

	/**
	 * Skin-provider hook (ee.java:948-970 arI listener refreshing qG.dam):
	 * replaces the local player's cape asset with {@code opengrim:cape} while
	 * enabled, mirroring the qE custom-cape renderer (qE.java:151-186). Composes
	 * with replacements already applied by other modules (SkinProtect
	 * precedent), so their body/elytra changes survive.
	 */
	@Subscribe
	public void onSkinTexturesResolve(SkinTexturesResolveEvent event) {
		var player = MinecraftClient.getInstance().player;
		if (!isEnabled() || player == null || !event.profileId().equals(player.getUuid())) {
			return;
		}
		// qE.java:182-186: no custom cape while qG.daj() has none loaded.
		if (!CapeTextureManager.hasCape()) {
			return;
		}
		SkinTextures base = event.replacement() != null ? event.replacement() : event.skin();
		event.setReplacement(new SkinTextures(
				base.body(),
				new TextureAssetInfo(CapeTextureManager.CAPE_ID),
				base.elytra(),
				base.model(),
				base.secure()));
	}

	/** "Texture URL" (cy ZOSxo, ee.java:47; {@code arJ()} ee.java:972-975). */
	public String getTextureUrl() {
		return textureUrl.getValue();
	}

	/** "Use Presets" (cJ sxdUz, ee.java:60; {@code arK()} ee.java:986-988). */
	public boolean isUsePresets() {
		return usePresets.getValue();
	}

	/** "Preset" selection (ct SmLHL, ee.java:68; {@code arL()} ee.java:1040-1042). */
	public String getPreset() {
		return preset.getValue();
	}

	/**
	 * "Hide Wings" (cJ FsBgj, ee.java:80; {@code arM()} ee.java:894-896) -
	 * consumed by the (unported) qC wings renderer, qC.java:396.
	 */
	public boolean isHideWings() {
		return hideWings.getValue();
	}

	/**
	 * Resolved cape source: the preset URL while Use Presets is on, else the
	 * custom Texture URL. Rebuild of the native qG side reading the module's
	 * settings; the Texture URL branch is applied only when it parses as a URL
	 * (ee.java:108 {@code jd.bAm}, native [N]) - here enforced by the download
	 * failing and keeping the previous cape.
	 */
	public String getResolvedCapeUrl() {
		if (usePresets.getValue()) {
			return PRESET_URLS.getOrDefault(preset.getValue(), "");
		}
		return getTextureUrl();
	}

	/** Preset registry TDPHW in insertion order (ee.java static block). */
	public static Map<String, String> getPresetUrls() {
		return PRESET_URLS;
	}

	/** TDPHW construction (ee.java:206-861): LinkedHashMap + 13 puts. */
	private static Map<String, String> presetUrls() {
		Map<String, String> urls = new LinkedHashMap<>();
		urls.put("2011", "https://cute.rip/assets/capes/2011.png");
		urls.put("2012", "https://cute.rip/assets/capes/2012.png");
		urls.put("2013", "https://cute.rip/assets/capes/2013.png");
		urls.put("2015", "https://cute.rip/assets/capes/2015.png");
		urls.put("2016", "https://cute.rip/assets/capes/2016.png");
		urls.put("Mojang", "https://cute.rip/assets/capes/mojang.png");
		urls.put("Mojang Studios", "https://cute.rip/assets/capes/mojangstudios.png");
		urls.put("Mojira", "https://cute.rip/assets/capes/mojira.png");
		urls.put("Cobalt", "https://cute.rip/assets/capes/cobalt.png");
		urls.put("Spade", "https://cute.rip/assets/capes/spade.png");
		urls.put("Snowman", "https://cute.rip/assets/capes/snowman.png");
		urls.put("Turtle", "https://cute.rip/assets/capes/turtle.png");
		urls.put("Birthday", "https://cute.rip/assets/capes/birthday.png");
		return Collections.unmodifiableMap(urls);
	}
}
