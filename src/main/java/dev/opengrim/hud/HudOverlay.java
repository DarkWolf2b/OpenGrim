package dev.opengrim.hud;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.gui.ui.Theme;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.KeybindSetting;
import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.util.Identifier;

/**
 * Port of the original array-list HUD element {@code sixtwo.ce} plus its
 * watermark row ({@code co.NV}, inherited by {@code ce.NV}).
 *
 * <p>Recovered geometry:
 * <ul>
 *   <li>watermark row: {@code ccU(x, y, width, 20, ...)} with the
 *       {@code lE.WTzbi} 7px text and an icon at the right;</li>
 *   <li>rows: 13px high, gap 2, each split into a keybind panel and a name
 *       panel ({@code ccW(..., 13, ..., ld.all(5.0f), 7.0f)}), text via
 *       {@code lE.joxgd 7px}, sorted by {@code nameWidth + keyWidth}
 *       ({@code ce.java:470});</li>
 *   <li>the panel uses the current background style through
 *       {@code lC.ccW} (Blur / Liquid Glass / Solid);</li>
 *   <li>{@code gg.bai/baj} select whether the module appears and whether its
 *       keybind panel is shown.</li>
 * </ul>
 *
 * <p>Registration uses Fabric's {@link HudElementRegistry} for 1.21.11. The
 * original's HUD element base ({@code co}) draws in GUI pixels, so this uses
 * the recovered MSDF font sheets and the shape pipeline directly rather than
 * vanilla {@code drawText}.
 */
public final class HudOverlay {
	private static final Identifier ID = Identifier.of("opengrim", "hud_overlay");
	private static final float ROW_H = 13.0f;
	private static final float ROW_GAP = 2.0f;
	private static final float PAD_X = 7.0f;
	private static final float TEXT_SIZE = 7.0f;
	private static final float WATERMARK_H = 20.0f;

	private HudOverlay() {
	}

	public static void init() {
		HudElementRegistry.addLast(ID, HudOverlay::render);
	}

	public static void render(DrawContext ctx, RenderTickCounter tickCounter) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.textRenderer == null) {
			return;
		}
		GuiDraw draw = new GuiDraw(ctx, 0.0, 0.0, 0.0f, client.textRenderer);
		Theme theme = Theme.get();
		MsdfFont nameFont = MsdfFont.of(MsdfFont.MEDIUM);
		MsdfFont infoFont = MsdfFont.regular();

		float x = 2.0f;
		float y = 2.0f;
		int ping = ping(client);
		String info = " | " + client.getCurrentFps() + " fps" + (ping >= 0 ? " | " + ping + " ms" : "");
		String title = "OpenGrim";
		float titleW = nameFont.width(title, TEXT_SIZE);
		float infoW = infoFont.width(info, TEXT_SIZE);
		float watermarkW = titleW + infoW + PAD_X * 2.0f;
		draw.themedBackground(x, y, watermarkW, WATERMARK_H, WATERMARK_H / 2.0f, 0.75f);
		draw.text(nameFont, title, x + PAD_X, y + (WATERMARK_H - TEXT_SIZE) / 2.0f, TEXT_SIZE,
				theme.accent());
		draw.text(infoFont, info, x + PAD_X + titleW, y + (WATERMARK_H - TEXT_SIZE) / 2.0f,
				TEXT_SIZE, theme.text().withAlphaScale(0.7f));

		List<Module> enabled = new ArrayList<>();
		for (Module module : ModuleManager.get().getModules()) {
			if (module.isEnabled() && module.isShownInArrayList()) {
				enabled.add(module);
			}
		}
		// ce.java:470 sorts ascending by name + keybind width.
		enabled.sort(Comparator.comparingDouble(module -> rowWidth(module, nameFont, infoFont)));

		float rowY = y + WATERMARK_H + 2.0f;
		for (Module module : enabled) {
			float keyW = module.isShowKeybindInArrayList() && module.getBind() != -999
					? infoFont.width(KeybindSetting.displayName(module.getBind()), TEXT_SIZE) + PAD_X * 2.0f
					: 0.0f;
			float nameW = nameFont.width(module.getName(), TEXT_SIZE) + PAD_X * 2.0f;
			float cursor = x;
			if (keyW > 0.0f) {
				draw.themedBackground(cursor, rowY, keyW, ROW_H, ROW_H / 2.0f, 0.75f);
				draw.text(infoFont, KeybindSetting.displayName(module.getBind()), cursor + PAD_X,
						rowY + (ROW_H - TEXT_SIZE) / 2.0f, TEXT_SIZE, theme.text().withAlphaScale(0.7f));
				cursor += keyW + 3.0f;
			}
			draw.themedBackground(cursor, rowY, nameW, ROW_H, ROW_H / 2.0f, 0.75f);
			draw.text(nameFont, module.getName(), cursor + PAD_X,
					rowY + (ROW_H - TEXT_SIZE) / 2.0f, TEXT_SIZE, theme.accent());
			rowY += ROW_H + ROW_GAP;
		}
	}

	private static float rowWidth(Module module, MsdfFont nameFont, MsdfFont infoFont) {
		float width = nameFont.width(module.getName(), TEXT_SIZE) + PAD_X * 2.0f;
		if (module.isShowKeybindInArrayList() && module.getBind() != -999) {
			width += infoFont.width(KeybindSetting.displayName(module.getBind()), TEXT_SIZE)
					+ PAD_X * 2.0f + 3.0f;
		}
		return width;
	}

	private static int ping(MinecraftClient client) {
		ClientPlayNetworkHandler handler = client.getNetworkHandler();
		if (handler == null || client.player == null) {
			return -1;
		}
		PlayerListEntry entry = handler.getPlayerListEntry(client.player.getUuid());
		return entry == null ? -1 : entry.getLatency();
	}
}
