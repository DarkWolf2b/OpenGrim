package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.SkinTexturesResolveEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.Setting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.util.DefaultSkinHelper;
import net.minecraft.entity.player.SkinTextures;

/**
 * Skin Protect (registry sixtwo.fN, key 142, bind -999, category gh.KfAlY):
 * "Hides real player skin".
 *
 * <p>Specification and evidence:
 * <ul>
 *   <li>Primary constructor &amp; settings wiring: analysis/decompiled/payload-decrypted/sixtwo/fN.java:67-272</li>
 *   <li>CFR decompile &amp; native transforms: analysis/decompiled/payload-named-cfr/sixtwo/fN.java:19-28, 51-57, 67-272
 *       (aVx(SkinTextures, AbstractClientPlayerEntity) and consumer aVw(AbstractClientPlayerEntity, SkinTextures))</li>
 *   <li>Pool &amp; handler analysis: analysis/specs/handlers/fN.md:40-79 (POOL 0x14a11,0x339:
 *       SkinTextures constructor cape/elytra/model/secure, qq/qu async URL loader, dynamic preset children)</li>
 *   <li>Registry: analysis/specs/modules/fN.md:1-18</li>
 * </ul>
 *
 * <p>Settings hierarchy:
 * <ul>
 *   <li>Protect (cv GroupSetting): "protect"</li>
 *   <li>Own Skin (cw BoolSetting under Protect): "own_skin", default true (.Tz())</li>
 *   <li>Other Players (cw BoolSetting under Protect): "other_players", default true (.Tz())</li>
 *   <li>Own Skin Source (ct GroupSetting): "own_skin_source"</li>
 *   <li>Defaults (cu BoolSetting under Own Skin Source): "defaults", default true (.SY())</li>
 *   <li>Custom (cu BoolSetting under Own Skin Source): "custom", default false</li>
 *   <li>Own Default Skin (ct GroupSetting): "own_default_skin"</li>
 *   <li>Other Players Skin (ct GroupSetting): "other_players_skin"</li>
 *   <li>Other Skin Source (ct GroupSetting): "other_skin_source"</li>
 *   <li>Defaults (cu BoolSetting under Other Skin Source): "other_defaults", default true (.SY())</li>
 *   <li>Custom (cu BoolSetting under Other Skin Source): "other_custom", default false</li>
 *   <li>Texture URL (cy StringSetting): "texture_url", max length 2048, default ""</li>
 *   <li>Other Texture URL (cy StringSetting): "other_texture_url", max length 2048, default ""</li>
 * </ul>
 *
 * <p>Wiring: the original's aVx/aVw consumers are rebuilt on the
 * {@link SkinTexturesResolveEvent} skin-provider hook (PlayerListEntryMixin);
 * {@link #protectSkin} remains for direct callers. "Defaults" resolves to
 * Steve; the native dynamic preset loader and the custom-URL fetch remain
 * documented gaps (custom currently falls back to Steve).
 */
public class SkinProtect extends Module {
	private final GroupSetting protect = register(new GroupSetting("protect"));
	private final BoolSetting ownSkin = new BoolSetting("own_skin", true);
	private final BoolSetting otherPlayers = new BoolSetting("other_players", true);

	private final GroupSetting ownSkinSource = register(new GroupSetting("own_skin_source"));
	private final BoolSetting ownDefaults = new BoolSetting("defaults", true);
	private final BoolSetting ownCustom = new BoolSetting("custom", false);

	private final GroupSetting ownDefaultSkin = register(new GroupSetting("own_default_skin"));
	private final GroupSetting otherPlayersSkin = register(new GroupSetting("other_players_skin"));

	private final GroupSetting otherSkinSource = register(new GroupSetting("other_skin_source"));
	private final BoolSetting otherDefaults = new BoolSetting("other_defaults", true);
	private final BoolSetting otherCustom = new BoolSetting("other_custom", false);

	private final StringSetting textureUrl = register(new StringSetting("texture_url", ""));
	private final StringSetting otherTextureUrl = register(new StringSetting("other_texture_url", ""));

	public SkinProtect() {
		super("skin_protect", "Skin Protect", "Hides real player skin", ModuleCategory.UTILITY);
		protect.add(ownSkin);
		protect.add(otherPlayers);
		ownSkinSource.add(ownDefaults);
		ownSkinSource.add(ownCustom);
		otherSkinSource.add(otherDefaults);
		otherSkinSource.add(otherCustom);
	}

	@Override
	public void onTick() {
		// Visibility wiring (fN.java:265-270):
		//   xuNWw.Vf(bHviN::TC) / iWgvu.Vf(pWupw::TC) - the source groups follow
		//   the Protect toggles (exact); aWa/aVZ/aVY/aVX are native predicates.
		// high-probability guess: aWa/aVZ = the Defaults option is selected
		// (the skin-preset groups only apply then); aVY/aVX = the Custom option
		// is selected (the URL fields only apply then).
		ownSkinSource.setVisible(ownSkin.getValue());
		otherSkinSource.setVisible(otherPlayers.getValue());
		ownDefaultSkin.setVisible(ownSkin.getValue() && ownDefaults.getValue());
		otherPlayersSkin.setVisible(otherPlayers.getValue() && otherDefaults.getValue());
		textureUrl.setVisible(ownSkin.getValue() && ownCustom.getValue());
		otherTextureUrl.setVisible(otherPlayers.getValue() && otherCustom.getValue());
	}

	/**
	 * Skin-provider hook (sixtwo.fN#aVx/aVw; fired by PlayerListEntryMixin).
	 * Replaces the resolved skin of protected players with a default skin while
	 * enabled, composing with any replacement already applied by other modules
	 * (e.g. Cape) so their assets survive.
	 */
	@Subscribe
	public void onSkinTexturesResolve(SkinTexturesResolveEvent event) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isEnabled() || client.player == null) {
			return;
		}
		boolean own = event.profileId().equals(client.player.getUuid());
		if (own ? !ownSkin.getValue() : !otherPlayers.getValue()) {
			return;
		}
		SkinTextures base = event.replacement() != null ? event.replacement() : event.skin();
		SkinTextures steve = DefaultSkinHelper.getSteve();
		event.setReplacement(new SkinTextures(
				steve.body(), base.cape(), base.elytra(), steve.model(), base.secure()));
	}

	/**
	 * Skin texture transformer mirroring sixtwo.fN#aVx and sixtwo.fN#aVw.
	 * Replaces player skin textures according to configured source and defaults.
	 */
	public SkinTextures protectSkin(SkinTextures original, AbstractClientPlayerEntity player) {
		if (!isEnabled() || player == null) {
			return original;
		}

		boolean isOwn = MinecraftClient.getInstance().player == player;
		if (isOwn) {
			if (!ownSkin.getValue()) {
				return original;
			}
			return DefaultSkinHelper.getSteve();
		} else {
			if (!otherPlayers.getValue()) {
				return original;
			}
			return DefaultSkinHelper.getSteve();
		}
	}

	/**
	 * Returns whether the skin of the given player entity should be protected.
	 */
	public boolean shouldProtectSkin(AbstractClientPlayerEntity player) {
		if (!isEnabled()) {
			return false;
		}
		boolean own = MinecraftClient.getInstance().player == player;
		return own ? ownSkin.getValue() : otherPlayers.getValue();
	}

	/**
	 * Resolves which skin source to use for own ("own") or other players ("other"):
	 * "custom" when custom is selected and URL is non-empty, otherwise "defaults".
	 */
	public String resolveSource(boolean own) {
		boolean useCustom = own
				? ownCustom.getValue() && !textureUrl.getValue().isBlank()
				: otherCustom.getValue() && !otherTextureUrl.getValue().isBlank();
		return useCustom ? "custom" : "defaults";
	}

	/**
	 * Returns configured texture URL for own or other players.
	 */
	public String textureUrlFor(boolean own) {
		return own ? textureUrl.getValue() : otherTextureUrl.getValue();
	}

	/**
	 * Text setting container preserved for consumers (such as NameProtect).
	 */
	public static final class TextSetting extends Setting<String> {
		private final int maxLength;

		public TextSetting(String id, int maxLength, String defaultValue) {
			super(id, defaultValue == null ? "" : defaultValue);
			this.maxLength = maxLength;
		}

		public int getMaxLength() {
			return maxLength;
		}

		@Override
		public void setValue(String value) {
			super.setValue(value == null ? "" : value.substring(0, Math.min(value.length(), maxLength)));
		}

		@Override
		public Object serialize() {
			return getValue();
		}

		@Override
		public void deserialize(Object raw) {
			if (raw instanceof String s) {
				setValue(s);
			}
		}
	}
}