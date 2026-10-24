package dev.opengrim.hud;

import java.util.ArrayList;
import java.util.List;

import dev.opengrim.gui.GuiTheme;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.settings.KeybindSetting;
import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElement;
import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.util.Identifier;

/**
 * HUD overlay: a watermark (client name + fps + ping) and the list of enabled
 * modules, drawn top-left in scaled GUI space.
 *
 * <p>Written against the observable framework
 * contract in analysis/specs/00-framework.md; no code from the original
 * client is reproduced. Drawing is world-independent (no world/player context
 * required beyond cheap client statistics) and uses only vanilla
 * {@link DrawContext#drawText} primitives verified against the Yarn
 * 1.21.11+build.6 mappings.
 *
 * <p>Registration: this Fabric version (fabric-rendering-v1 16.2.x for
 * 1.21.11) exposes {@link HudElementRegistry}, not the older
 * {@code HudLayerRegistrationCallback}; {@link #init()} registers this
 * overlay as the last HUD layer and needs a single
 * {@code HudOverlay.init();} call in {@code OpenGrimClient.onInitializeClient}.
 */
public final class HudOverlay {
	private static final Identifier ID = Identifier.of("opengrim", "hud_overlay");
	private static final int LINE_SPACING = 2;

	private HudOverlay() {
	}

	/**
	 * Registers the overlay with Fabric's HUD element registry.
	 */
	public static void init() {
		HudElementRegistry.addLast(ID, HudOverlay::render);
	}

	/**
	 * Draws the watermark and enabled-module list. Safe to call from any HUD
	 * callback (also usable directly from a mixin-based HUD hook).
	 */
	public static void render(DrawContext ctx, RenderTickCounter tickCounter) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.textRenderer == null) {
			return;
		}

		int x = 4;
		int y = 4;
		int y2 = drawWatermark(ctx, client, x, y);
		drawEnabledModules(ctx, x, y2);
	}

	private static int drawWatermark(DrawContext ctx, MinecraftClient client, int x, int y) {
		TextRenderer font = client.textRenderer;
		int ping = ping(client);
		String info = " | " + client.getCurrentFps() + " fps" + (ping >= 0 ? " | " + ping + " ms" : "");
		int fontHeight = font.fontHeight;
		String text = "OpenGrim" + info;
		ctx.fill(x - 2, y - 2, x + font.getWidth(text) + 2, y + fontHeight + 1,
				GuiTheme.withAlpha(GuiTheme.PANEL_HEADER, 0.6f));
		ctx.drawText(font, "OpenGrim", x, y, GuiTheme.COMBAT, true);
		ctx.drawText(font, info, x + font.getWidth("OpenGrim"), y, GuiTheme.HUD_INFO, true);
		return y + fontHeight + LINE_SPACING + 2;
	}

	private static void drawEnabledModules(DrawContext ctx, int x, int y) {
		List<Module> enabled = new ArrayList<>();
		for (Module module : ModuleManager.get().getModules()) {
			if (module.isEnabled()) {
				enabled.add(module);
			}
		}
		int fontHeight = MinecraftClient.getInstance().textRenderer.fontHeight;
		for (int i = enabled.size() - 1; i >= 0; i--) {
			Module module = enabled.get(i);
			if (!module.isShownInArrayList()) {
				continue;
			}
			int color = GuiTheme.accent(module.getCategory());
			ctx.drawText(MinecraftClient.getInstance().textRenderer, module.getName(), x, y,
					color, true);
			if (module.isShowKeybindInArrayList() && module.getBind() != -999) {
				int nameWidth = MinecraftClient.getInstance().textRenderer.getWidth(module.getName());
				ctx.drawText(MinecraftClient.getInstance().textRenderer,
						"  " + KeybindSetting.displayName(module.getBind()), x + nameWidth, y,
						GuiTheme.HUD_INFO, true);
			}
			y += fontHeight + LINE_SPACING;
		}
	}

	/**
	 * Latency of the local player from the player list, or -1 when unknown
	 * (not connected / entry missing).
	 */
	private static int ping(MinecraftClient client) {
		ClientPlayNetworkHandler handler = client.getNetworkHandler();
		if (handler == null || client.player == null) {
			return -1;
		}
		PlayerListEntry entry = handler.getPlayerListEntry(client.player.getUuid());
		return entry == null ? -1 : entry.getLatency();
	}
}