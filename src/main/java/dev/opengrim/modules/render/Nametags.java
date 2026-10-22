package dev.opengrim.modules.render;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

import org.joml.Matrix4f;
import org.joml.Quaternionf;
import org.joml.Vector4f;

import dev.opengrim.gui.ui.ColorF;
import dev.opengrim.gui.ui.GuiDraw;
import dev.opengrim.gui.ui.MsdfFont;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.module.ModuleManager;
import dev.opengrim.modules.utility.NameProtect;
import dev.opengrim.render.WorldProjection;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.util.FriendsManager;
import net.fabricmc.fabric.api.client.rendering.v1.hud.HudElementRegistry;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.gui.DrawContext;
import net.minecraft.client.gui.hud.InGameHud;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.ItemEntity;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;

/**
 * Nametags (registry sixtwo.dt, module id 97, category {@code gh.nOCvV}): "Displays information about player".
 *
 * <p>Port of sixtwo.dt (analysis/decompiled/payload-decrypted/sixtwo/dt.java, 1676 lines; bytecode ground truth
 * analysis/decompiled/jar-casesafe/sixtwo/dt.class). The original draws the whole tag strip itself on the HUD layer
 * ({@code @hG aim(gk)}, dt.java:649-878) and cancels the vanilla nameplate ({@code @hG ail(gi)}, dt.java:1492-1546).
 *
 * <p>Settings (constructor dt.java:137-427, builder chains verbatim; all names recovered from the folded char arrays):
 * <ul>
 *   <li>"Render For" group (cv bpDue) — "Players" (cw jtzDi, {@code .Tz()} = default on, dt.java:160),
 *       "Items" (cw VPgLm, default off, dt.java:161).</li>
 *   <li>"Info To Render" group (cv vjqkH) — "Name" (vExdX, {@code .Tz()} on), "Health" (zHaUb, {@code .Tz()} on),
 *       "Absorption" (gxggV, {@code .Tz()} on), "Distance" (AbmMN, {@code .Tz()} on), "Ping" (yhuFt, off),
 *       "Armor" (JKWzw, off), "Hand Items" (ZhrcH, off), "Enchants" (bhXKP, off), "Effects" (VrMbh, off).</li>
 *   <li>"Scale" (cC hSuAc): {@code .Vy(0.01).Vw(0.2).Vx(2.0).VA(1.0)} = step 0.01, min 0.2, max 2.0, default 1.0
 *       (dt.java:242; cC.Vy=max(0,step), Vw=min, Vx=max, VA=default).</li>
 *   <li>"Connected" (cJ uuLKb, {@code .WE(false)}), "Background Color" (cG wRBRi,
 *       {@code mG.QHTxQ.coa(140.0f).coh()} = black @ alpha 140 = 0x8C000000), "Color" (cG uxHfK, cG default =
 *       {@code mG.hoGuU} white), "Name Color" (cG weKln, RGB 191,75,74), "Name Display Mode" (ct bcjCz,
 *       {@code .SO(1)} default index 1) with options "Display Name" (cu OHUtJ, index 0) and "Nickname Only"
 *       (cu bgoRN, index 1), "Friend Name Color" (cG MAUHJ, RGB 75,191,74), "Absorption Color" (cG JdaIF,
 *       RGB 255,196,76), "Distance Color" (cG lFuNf, RGB 150,157,153), "Ping Color" (cG BmdVM, {@code .Uc(-1)}
 *       white), "Health Color" (cG bocCI, {@code .Uc(-1)} white), "Group Items" (cJ KjFun, {@code .WE(true)}).</li>
 * </ul>
 * {@code uxHfK.Vf(VPgLm::TC)} and {@code KjFun.Vf(VPgLm::TC)} (dt.java:425-426): the item text color and the
 * grouping toggle are visible only while "Items" is on — mapped to {@link #onTick()} visibility updates.
 *
 * <p>Recovered behavior (all from jar-casesafe bytecode; the DES-encrypted call-site literals were re-implemented
 * against the class's own decryptor and validated 1/1 (aiz) + 14/14 (aiC) against
 * analysis/decrypted/full-dump.jsonl):
 * <ul>
 *   <li>{@code aim} (dt.class aim:0-612): guard {@code bab()} (enabled + player + world + interactionManager +
 *       networkHandler); iterate {@code world.getEntities()} skipping the local player; PlayerEntity → tag when
 *       "Players" on; ItemEntity → when "Items" on, join the first group whose head is within 5.0f (only when
 *       "Group Items" on, otherwise every item opens its own group); then one pass over the groups: size 1 →
 *       single-item tag, else grouped tag.</li>
 *   <li>Anchor {@code ait} (dt.class ait:0-103): {@code getLerpedPos(delta)} + 2.6f for players, projected by
 *       {@code jI.bIw} — off-screen (w &le; 0) skips the entity.</li>
 *   <li>Player tag {@code ain} (dt.class ain:0-1561): chip order Distance ("{@code <1dp>m}"), Ping
 *       ("{@code <latency>ms}", site 5851 = "ms"), Name (mode 0 → display name, else game-profile name; friend →
 *       "Friend Name Color", and while the Name Protect module is on with its "Friends" toggle the text becomes
 *       its "Friends Name" format; otherwise "Name Color"), Health ({@code String.valueOf(1dp)}), Absorption
 *       (only when amount &gt; 0 and the toggle is on). Chip width = text width + 6.0f, gap 2.0f, height =
 *       line height + 4.0f. If a chip text equals the profile name the strip shifts so that chip is centered on
 *       the anchor. {@code jH.bId(ctx, anchorX, anchorY, Scale)} scales the strip; "Connected" on → one
 *       background rect across all chips, off → one per chip (radius 3.0f, kg.bOC(2.0f)).</li>
 *   <li>Item row (dt.class ain:1162-1475): main hand ("Hand Items"), armor ({@code oP.cJr(player).cJE()} when
 *       "Armor" on), off hand ("Hand Items"), {@code removeIf(ItemStack::isEmpty)}; drawn at 12.0f spacing
 *       (+2.0f gap) at 0.75f scale, 12.0f above the tag; enchant text ({@code aip}) per item when "Enchants" is
 *       on: {@code name.substring(0,2) + " " + level} stacked 8.0f per line upward from {@code y-12.0f}.</li>
 *   <li>Effect row {@code aiq} (dt.class aiq:0-340): only when "Effects" is on and the item pass produced a
 *       finite lowest-enchant offset (i.e. at least one non-empty item stack and "Enchants" on — original
 *       quirk, kept 1:1); effects sorted {@code Comparator.reverseOrder()}; row bottom = lowest item/enchant y
 *       &minus; 5.0f; x starts at anchor + n*12.5f; per effect x -= 25.0f, icon 10x10 px at x+4 (site 13197 = 10)
 *       via {@code InGameHud.getEffectTexture}, duration text centered at x+9, y-8, amplifier glyphs at y-16,
 *       both white; duration strings that are empty or equal "00:00" (site 9370) are skipped.</li>
 *   <li>{@code ail} (dt.class ail:0-96): cancel the vanilla plate for a PlayerEntity that is not the local
 *       player while "Players" is on.</li>
 * </ul>
 *
 * <p>Framework mappings (neighbor style, cf. TrapEsp/Arrows):
 * <ul>
 *   <li>The original's HUD event (gk) → Fabric {@link HudElementRegistry} element registered on enable;
 *       {@code lC.cfe()} → the vanilla {@link DrawContext}; {@code lC.cdh/cdg} → {@link GuiDraw#fillRounded}
 *       (real recovered {@code shape.glsl} SDF path through {@code ShapeGuiElementRenderState} when the
 *       pipeline compiled, inset-fill fallback otherwise); {@code lC.ceV/ceX/ceW} and {@code jH.bId/bIf} →
 *       {@code getMatrices().pushMatrix/translate/scale/popMatrix}.</li>
 *   <li>The original's own 6.0f font stack ({@code lE.WTzbi.bYM(6.0f)}, width {@code lq.cao}, line height
 *       {@code lq.cat() = 0.7f * size}) is the recovered <b>medium</b> MSDF sheet: `analysis/decrypted/gui-dump.jsonl`
 *       lines 427-431 decrypt lE's five font names in {@code cfn} order — {@code joxgd=regular},
 *       {@code WTzbi=medium}, {@code SVnNc=semibold}, {@code ePKsc=bold}, {@code WxpHL=icons-4.4}.
 *       Text is drawn through {@link MsdfFont#of}("medium") / the recovered {@code gui_msdf} pipeline.
 *       {@code lj.bYw} measures {@code Σ(advance·size + 0.25f)} per char; {@code kJ.bUe} draws with
 *       baseline {@code top + 0.7f·size} and pen step {@code advance·size + 0.025f·size} — both quirks are
 *       reproduced (see {@link TagRenderer}). Vanilla {@link TextRenderer} remains only as the fallback when
 *       the MSDF sheet/pipeline is unavailable.</li>
 *   <li>{@code jI.bIw} projection: camera-rotation * projection * camera-relative position (same approximation
 *       as TrapEsp; RenderSystem modelview is identity at HUD time).</li>
 *   <li>{@code oP.cJr(player).cJE()} is a native armor query — [U] slot order unrecovered; helmet → chest →
 *       legs → boots is used (natural display order).</li>
 *   <li>{@code ji.bCv} duration strings: the format literal and the tick divisors are DES int/string sites not
 *       covered by the dump — [G] natural reading: minutes = duration/1200, seconds = (duration%1200)/20 with
 *       "%02d"; infinite → "∞" [G]. The "00:00" skip literal itself is recovered (site 9370) and kept verbatim.</li>
 *   <li>{@code mY.crP(amplifier + 1)} numeral glyphs → the number drawn as vanilla text [G].</li>
 *   <li>The item renderers {@code jv}/{@code jw} + the batch flush {@code ju.bFV()} → one vanilla
 *       {@code DrawContext.drawItem} call at 0.75f scale.</li>
 *   <li>{@code lC.cdh}'s extra {@code kg.bOC(2.0f)} parameter is the shape shader's smoothness field
 *       ({@code kg.DeOtF}, default 0.75); the GuiDraw surface uses its recovered 0.75 default — [U] the 2.0
 *       override is not exposed by the shared shape element, kept as a labeled divergence.</li>
 *   <li>The vanilla-nameplate cancel ({@code gi.bdX(true)}) has no hook in this framework: the predicate
 *       {@link #shouldCancelVanillaNameplates(PlayerEntity)} is the wiring point (same pattern as Esp2D).</li>
 * </ul>
 */
public class Nametags extends Module {
	private static final Identifier HUD_ID = Identifier.of("opengrim", "nametags_hud");

	/** {@code lE.WTzbi.bYM(6.0f)} — the shared HUD font size (dt.class aim:55). */
	private static final float FONT_SIZE = 6.0f;
	/** Vanilla font px at scale 1 (TrapEsp convention: original px size / 9). */
	private static final float FONT_BASE = 9.0f;
	/** {@code lj.bYG(size)} = {@code 0.7f * size} (lj.class bYG:0-5). */
	private static final float LINE_HEIGHT_FACTOR = 0.7f;
	/** dt.class ais:621-623 — group-tag margins: 3 horizontal, 3 vertical, 2 line gap. */
	private static final float GROUP_MARGIN = 3.0f;
	private static final float GROUP_LINE_GAP = 2.0f;
	/** dt.class ain:1310-1339 — item row spacing 12.0f (+2.0f gap) at 0.75f scale. */
	private static final float ITEM_SPACING = 12.0f;
	private static final float ITEM_SCALE = 0.75f;
	/** dt.class aip:113-119 — enchant lines stack 8.0f upward. */
	private static final float ENCHANT_LINE_SPACING = 8.0f;
	/** dt.class ain:1500-1543 — effect row offsets (per-effect 25.0f step, +9.0f centre, -5.0f icon inset). */
	private static final float EFFECT_STEP = 25.0f;
	private static final float EFFECT_CENTRE = 9.0f;
	private static final float EFFECT_ICON_INSET = 5.0f;
	/** dt.class aiq:234-257 — effect texture 10x10 (aiC site 13197 = 10, validated against full-dump.jsonl). */
	private static final int EFFECT_ICON_SIZE = 10;
	/** [G] ji.bCv divisors (DES int sites 28564/2676/23611, no dump coverage): 1200 ticks/minute, 20 ticks/second. */
	private static final int TICKS_PER_MINUTE = 1200;
	private static final int TICKS_PER_SECOND = 20;
	/** [G] ji.bCv format literal (site 25763): "%02d" gives the recovered "00:00"-style seconds field. */
	private static final String SECONDS_FORMAT = "%02d";
	/** [G] ji.bCv infinite marker (site 22249, unrecovered literal): natural reading for an infinite effect. */
	private static final String INFINITE_DURATION = "∞";
	/** dt.class aiq:139-155 — recovered skip literal (aiz site 9370, validated by re-implementing the decryptor). */
	private static final String ZERO_DURATION = "00:00";

	private final GroupSetting renderFor = register(new GroupSetting("render_for"));
	private final BoolSetting players = new BoolSetting("players", true);
	private final BoolSetting items = new BoolSetting("items", false);

	private final GroupSetting infoToRender = register(new GroupSetting("info_to_render"));
	private final BoolSetting name = new BoolSetting("name", true);
	private final BoolSetting health = new BoolSetting("health", true);
	private final BoolSetting absorption = new BoolSetting("absorption", true);
	private final BoolSetting distance = new BoolSetting("distance", true);
	private final BoolSetting ping = new BoolSetting("ping", false);
	private final BoolSetting armor = new BoolSetting("armor", false);
	private final BoolSetting handItems = new BoolSetting("hand_items", false);
	private final BoolSetting enchants = new BoolSetting("enchants", false);
	private final BoolSetting effects = new BoolSetting("effects", false);

	private final DoubleSetting scale = register(new DoubleSetting("scale", 0.01, 0.2, 2.0, 1.0, null));
	private final BoolSetting connected = register(new BoolSetting("connected", false));
	private final ColorSetting backgroundColor = register(new ColorSetting("background_color", 0x8C000000, true));
	private final ColorSetting color = register(new ColorSetting("color", 0xFFFFFFFF, true));
	private final ColorSetting nameColor = register(new ColorSetting("name_color", 0xFFBF4B4A, true));
	private final ModeSetting nameDisplayMode = register(new ModeSetting("name_display_mode",
			List.of("Display Name", "Nickname Only"), "Nickname Only"));
	private final ColorSetting friendNameColor = register(new ColorSetting("friend_name_color", 0xFF4BBF4A, true));
	private final ColorSetting absorptionColor = register(new ColorSetting("absorption_color", 0xFFFFC44C, true));
	private final ColorSetting distanceColor = register(new ColorSetting("distance_color", 0xFF969D99, true));
	private final ColorSetting pingColor = register(new ColorSetting("ping_color", 0xFFFFFFFF, true));
	private final ColorSetting healthColor = register(new ColorSetting("health_color", 0xFFFFFFFF, true));
	private final BoolSetting groupItems = register(new BoolSetting("group_items", true));

	/** One tag chip (dt$sH: text + color, dt.java:100-131). */
	private record Chip(String text, int argb) {
	}

	public Nametags() {
		super("nametags", "Nametags", "Displays information about player", ModuleCategory.VISUALS);
		renderFor.add(players);
		renderFor.add(items);
		infoToRender.add(name);
		infoToRender.add(health);
		infoToRender.add(absorption);
		infoToRender.add(distance);
		infoToRender.add(ping);
		infoToRender.add(armor);
		infoToRender.add(handItems);
		infoToRender.add(enchants);
		infoToRender.add(effects);
	}

	@Override
	protected void onEnable() {
		HudElementRegistry.addLast(HUD_ID, this::renderHud);
	}

	@Override
	protected void onDisable() {
		HudElementRegistry.removeElement(HUD_ID);
	}

	/**
	 * {@code uxHfK.Vf(VPgLm::TC)} / {@code KjFun.Vf(VPgLm::TC)} (dt.java:425-426): both settings are only shown
	 * while "Items" is on.
	 */
	@Override
	public void onTick() {
		color.setVisible(items.getValue());
		groupItems.setVisible(items.getValue());
	}

	/**
	 * {@code aim} (dt.class aim:0-612) — the HUD pass. The original opens the shared font batch
	 * ({@code dt.zXCXX.bUa(font)}) and closes it after the group pass; vanilla drawing is immediate here.
	 */
	private void renderHud(DrawContext ctx, RenderTickCounter tickCounter) {
		if (!isEnabled()) {
			return;
		}
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity self = client.player;
		// bab() guard (gg.class bab): player + world + interactionManager + networkHandler all non-null.
		if (self == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		float delta = tickCounter.getTickProgress(true);
		TagRenderer text = new TagRenderer(ctx, delta, client.textRenderer);
		NameProtect protect = nameProtect();

		List<List<ItemEntity>> groups = new ArrayList<>();
		for (Entity entity : client.world.getEntities()) {
			if (entity == self) {
				continue;
			}
			if (entity instanceof PlayerEntity player) {
				if (players.getValue()) {
					renderPlayerTag(ctx, player, protect, delta, text);
				}
				continue;
			}
			if (!(entity instanceof ItemEntity item) || !items.getValue()) {
				continue;
			}
			boolean added = false;
			if (groupItems.getValue()) {
				for (List<ItemEntity> group : groups) {
					// distanceTo(head) - 5.0f <= 0.0f (dt.class aim:374-402).
					if (group.getFirst().distanceTo(item) - 5.0f <= 0.0f) {
						group.add(item);
						added = true;
						break;
					}
				}
			}
			if (!added) {
				List<ItemEntity> group = new ArrayList<>();
				group.add(item);
				groups.add(group);
			}
		}

		for (List<ItemEntity> group : groups) {
			if (group.size() == 1) {
				renderSingleItemTag(ctx, group.getFirst(), delta, text);
			} else {
				renderGroupedItemTag(ctx, group, delta, text);
			}
		}
	}

	/**
	 * {@code ain} (dt.class ain:0-1561) — the player tag: chip strip, item row, effect row.
	 */
	private void renderPlayerTag(DrawContext ctx, PlayerEntity player, NameProtect protect, float delta,
			TagRenderer tag) {
		MinecraftClient client = MinecraftClient.getInstance();
		Vec2f anchor = anchor(player, delta, ctx);
		if (anchor == null) {
			return;
		}
		float anchorX = anchor.x;
		float anchorY = anchor.y;
		float lineHeight = lineHeight();
		float tagHeight = lineHeight + 4.0f;
		List<Chip> chips = new ArrayList<>();

		if (distance.getValue()) {
			chips.add(new Chip(csc(client.player.distanceTo(player), 1) + "m", distanceColor.getValue()));
		}
		if (ping.getValue()) {
			chips.add(new Chip(latency(player) + "ms", pingColor.getValue()));
		}
		if (name.getValue()) {
			String text = nameDisplayMode.getValue().equals("Display Name")
					? player.getDisplayName().getString()
					: player.getGameProfile().name();
			int chipColor;
			if (FriendsManager.isFriend(player.getGameProfile().name())) {
				chipColor = friendNameColor.getValue();
				// fS.bag() = Name Protect enabled; fS.aWV() = its "Friends" toggle; fS.aWY() = its friends format.
				if (protect != null && protect.isEnabled() && protect.aWV().getValue()) {
					text = protect.aWY().getValue();
				}
			} else {
				chipColor = nameColor.getValue();
			}
			chips.add(new Chip(text, chipColor));
		}
		if (health.getValue()) {
			chips.add(new Chip(String.valueOf(csc(player.getHealth(), 1)), healthColor.getValue()));
		}
		float absorptionAmount = player.getAbsorptionAmount();
		if (absorptionAmount > 0.0f && absorption.getValue()) {
			chips.add(new Chip(String.valueOf(csc(absorptionAmount, 1)), absorptionColor.getValue()));
		}

		List<Float> widths = new ArrayList<>(chips.size());
		float total = 0.0f;
		for (Chip chip : chips) {
			float chipWidth = tag.width(chip.text()) + 6.0f;
			widths.add(chipWidth);
			total += chipWidth;
		}
		total += 2.0f * (chips.size() - 1);

		// Name chip index: the strip is shifted so a chip whose text equals the profile name is centred on the
		// anchor (dt.class ain:705-902).
		String profileName = player.getGameProfile().name();
		int nameIndex = -1;
		for (int i = 0; i < chips.size(); i++) {
			if (chips.get(i).text().equals(profileName)) {
				nameIndex = i;
				break;
			}
		}
		float stripX;
		if (nameIndex >= 0) {
			float before = 0.0f;
			for (int i = 0; i < nameIndex; i++) {
				before += widths.get(i) + 2.0f;
			}
			before += widths.get(nameIndex) / 2.0f;
			stripX = anchorX - before;
		} else {
			stripX = anchorX - total / 2.0f;
		}

		// jH.bId(ctx, anchorX, anchorY, hSuAc.VB()) / jH.bIf() (dt.class ain:904-916, 1558).
		float tagScale = scale.getValue().floatValue();
		ctx.getMatrices().pushMatrix();
		ctx.getMatrices().translate(anchorX, anchorY);
		ctx.getMatrices().scale(tagScale, tagScale);
		ctx.getMatrices().translate(-anchorX, -anchorY);

		boolean isConnected = connected.getValue();
		if (isConnected) {
			tag.rounded(stripX, anchorY, total, tagHeight, 3.0f, backgroundColor.getValue());
		}
		float chipX = stripX;
		for (int i = 0; i < chips.size(); i++) {
			Chip chip = chips.get(i);
			float chipWidth = widths.get(i);
			if (!isConnected) {
				tag.rounded(chipX, anchorY, chipWidth, tagHeight, 3.0f, backgroundColor.getValue());
			}
			float chipTextWidth = tag.width(chip.text());
			tag.draw(chip.text(), chipX + (chipWidth - chipTextWidth) / 2.0f,
					anchorY + (tagHeight - lineHeight) / 2.0f, chip.argb());
			chipX += chipWidth + 2.0f;
		}

		// Item row (dt.class ain:1162-1475).
		List<ItemStack> stacks = new ArrayList<>();
		if (handItems.getValue()) {
			stacks.add(player.getMainHandStack());
		}
		if (armor.getValue()) {
			stacks.addAll(armorStacks(player));
		}
		if (handItems.getValue()) {
			stacks.add(player.getOffHandStack());
		}
		stacks.removeIf(ItemStack::isEmpty);
		float rowWidth = stacks.size() * ITEM_SPACING + (stacks.size() - 1) * 2.0f;
		float itemX = nameIndex >= 0 ? anchorX - rowWidth / 2.0f : stripX + (total - rowWidth) / 2.0f;
		float itemY = anchorY - 2.0f - 12.0f;
		float enchantY = itemY - 12.0f;
		float lowest = Float.POSITIVE_INFINITY;
		for (ItemStack stack : stacks) {
			lowest = Math.min(lowest, renderItem(ctx, stack, tag, itemX, itemY, enchantY));
			itemX += ITEM_SPACING + 2.0f;
		}
		// ju.bFV() — flush the original's item batch; vanilla item drawing is immediate.

		if (effects.getValue() && lowest != Float.POSITIVE_INFINITY) {
			renderEffectRow(ctx, player, tag, anchorX, enchantY + lowest - 5.0f);
		}

		ctx.getMatrices().popMatrix();
	}

	/**
	 * {@code aio} (dt.class aio:0-109) — item stack at 0.75f scale plus its enchant text; returns the lowest
	 * enchant y offset (negative) or +Infinity when "Enchants" is off (the original gates the effect row on this).
	 */
	private float renderItem(DrawContext ctx, ItemStack stack, TagRenderer text, float x, float y,
			float enchantY) {
		ctx.getMatrices().pushMatrix();
		ctx.getMatrices().translate(x, y);
		ctx.getMatrices().scale(ITEM_SCALE, ITEM_SCALE);
		ctx.drawItem(stack, 0, 0);
		ctx.getMatrices().popMatrix();
		if (!enchants.getValue()) {
			return Float.POSITIVE_INFINITY;
		}
		return renderEnchantText(ctx, stack, text, x, enchantY);
	}

	/**
	 * {@code aip} (dt.class aip:0-142) — per enchantment: {@code name.substring(0, 2) + " " + level}, stacked
	 * 8.0f upward from the passed y, white; returns the lowest y offset reached (0.0f when no enchantments).
	 */
	private float renderEnchantText(DrawContext ctx, ItemStack stack, TagRenderer text, float x, float y) {
		float lowest = 0.0f;
		float offset = 0.0f;
		ItemEnchantmentsComponent enchantments = EnchantmentHelper.getEnchantments(stack);
		for (RegistryEntry<Enchantment> enchantment : enchantments.getEnchantments()) {
			int level = enchantments.getLevel(enchantment);
			String label = Enchantment.getName(enchantment, level).getString().substring(0, 2) + " " + level;
			text.draw(label, x, y + offset, 0xFFFFFFFF);
			offset -= ENCHANT_LINE_SPACING;
			lowest = Math.min(lowest, offset);
		}
		return lowest;
	}

	/**
	 * {@code aiq} (dt.class aiq:0-340) — the status-effect row: right-aligned from the anchor, one 10x10 icon
	 * per effect with its duration below and amplifier glyphs above, all white.
	 */
	private void renderEffectRow(DrawContext ctx, PlayerEntity player, TagRenderer text, float x, float y) {
		List<StatusEffectInstance> effectsList = new ArrayList<>(player.getStatusEffects());
		if (effectsList.isEmpty()) {
			return;
		}
		effectsList.sort(Comparator.reverseOrder());
		float cursor = x + effectsList.size() * 12.5f;
		for (StatusEffectInstance effect : effectsList) {
			String label = durationString(effect);
			if (label.isEmpty() || label.equals(ZERO_DURATION)) {
				continue;
			}
			cursor -= EFFECT_STEP;
			float centre = cursor + EFFECT_CENTRE;
			float iconX = centre - EFFECT_ICON_INSET;
			ctx.getMatrices().pushMatrix();
			ctx.getMatrices().translate(iconX, y);
			Identifier texture = InGameHud.getEffectTexture(effect.getEffectType());
			ctx.drawGuiTexture(RenderPipelines.GUI_TEXTURED, texture, 0, 0, EFFECT_ICON_SIZE, EFFECT_ICON_SIZE);
			ctx.getMatrices().popMatrix();
			text.draw(label, centre - text.width(label) / 2.0f, y - 8.0f, 0xFFFFFFFF);
			// mY.crP(amplifier + 1) numeral glyphs [G]: drawn as text.
			String level = String.valueOf(effect.getAmplifier() + 1);
			text.draw(level, centre - text.width(level) / 2.0f, y - 16.0f, 0xFFFFFFFF);
		}
	}

	/**
	 * {@code air} (dt.class air:0-214) — single-item tag: {@code name + " x" + count} (site 678 = " x"),
	 * box = text width + 6.0f by line height + 4.0f, radius 3.0f, text in "Color".
	 */
	private void renderSingleItemTag(DrawContext ctx, ItemEntity item, float delta, TagRenderer text) {
		Vec2f anchor = anchor(item, delta, ctx);
		if (anchor == null) {
			return;
		}
		String label = item.getName().getString() + " x" + item.getStack().getCount();
		float textW = text.width(label);
		float lineHeight = lineHeight();
		float boxW = textW + 6.0f;
		float boxH = lineHeight + 4.0f;
		float boxX = anchor.x - boxW / 2.0f;
		float boxY = anchor.y;
		text.rounded(boxX, boxY, boxW, boxH, 3.0f, backgroundColor.getValue());
		text.draw(label, boxX + (boxW - textW) / 2.0f, boxY + (boxH - lineHeight) / 2.0f, color.getValue());
	}

	/**
	 * {@code ais} (dt.class ais:0-229) — grouped-item tag: one line per item, margins 3/3, line gap 2,
	 * radius 3.0f, text in "Color".
	 */
	private void renderGroupedItemTag(DrawContext ctx, List<ItemEntity> group, float delta, TagRenderer text) {
		Vec2f anchor = anchor(group.getFirst(), delta, ctx);
		if (anchor == null) {
			return;
		}
		List<String> lines = new ArrayList<>(group.size());
		for (ItemEntity item : group) {
			lines.add(item.getName().getString() + " x" + item.getStack().getCount());
		}
		float maxWidth = 0.0f;
		for (String line : lines) {
			maxWidth = Math.max(maxWidth, text.width(line));
		}
		float lineHeight = lineHeight();
		float boxW = maxWidth + GROUP_MARGIN * 2.0f;
		float boxX = anchor.x - boxW / 2.0f;
		float contentH = lines.size() * lineHeight + Math.max(0, lines.size() - 1) * GROUP_LINE_GAP;
		float boxH = contentH + GROUP_MARGIN * 2.0f;
		text.rounded(boxX, anchor.y, boxW, boxH, 3.0f, backgroundColor.getValue());
		float textY = anchor.y + (boxH - contentH) / 2.0f;
		for (String line : lines) {
			float lineW = text.width(line);
			text.draw(line, boxX + (boxW - lineW) / 2.0f, textY, color.getValue());
			textY += lineHeight + GROUP_LINE_GAP;
		}
	}

	/**
	 * {@code ail} (dt.class ail:0-96) — the vanilla-nameplate cancel condition: a PlayerEntity that is not the
	 * local player, while "Players" is on. No mixin hook exists in this framework (cf. Esp2D); a future
	 * nameplate mixin calls this with the rendered entity.
	 */
	public boolean shouldCancelVanillaNameplates(PlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isEnabled() || client.player == null || player == null) {
			return false;
		}
		return player != client.player && players.getValue();
	}

	/**
	 * {@code ait} (dt.class ait:0-103): {@code getLerpedPos(delta)} plus a 2.6f vertical offset for players,
	 * projected to screen pixels; null when behind the camera.
	 */
	private static Vec2f anchor(Entity entity, float delta, DrawContext ctx) {
		Vec3d pos = entity.getLerpedPos(delta);
		float offset = entity instanceof PlayerEntity ? 2.6f : 0.0f;
		MinecraftClient client = MinecraftClient.getInstance();
		Vec3d cameraPos = client.gameRenderer.getCamera().getCameraPos();
		// View rotation = CONJUGATE of Camera#getRotation (vanilla GameRenderer.project:844-845;
		// jI.bIw multiplies by the captured view matrix). The plain quaternion is view->world,
		// which mirrored the projection so tags followed the camera instead of the world.
		Matrix4f rotation = new Matrix4f()
				.rotation(client.gameRenderer.getCamera().getRotation().conjugate(new Quaternionf()));
		Matrix4f projection = WorldProjection.get(client);
		return project(new Vec3d(pos.x, pos.y + offset, pos.z), cameraPos, rotation, projection,
				ctx.getScaledWindowWidth(), ctx.getScaledWindowHeight());
	}

	/** {@code jI.bIw}: camera-relative position -> NDC -> screen pixels; null when behind the camera. */
	private static Vec2f project(Vec3d pos, Vec3d cameraPos, Matrix4f rotation, Matrix4f projection, int width,
			int height) {
		Vector4f v = new Vector4f(
				(float) (pos.x - cameraPos.x),
				(float) (pos.y - cameraPos.y),
				(float) (pos.z - cameraPos.z),
				1.0f);
		v.mul(rotation).mul(projection);
		if (v.w <= 0.0f) {
			return null;
		}
		v.div(v.w);
		return new Vec2f((v.x + 1.0f) / 2.0f * width, (1.0f - v.y) / 2.0f * height);
	}

	/** {@code jg.bBx} (jg.class bBx:0-80): tab-list latency, 0 when the entry is missing. */
	private static int latency(PlayerEntity player) {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.getNetworkHandler() == null) {
			return 0;
		}
		PlayerListEntry entry = client.getNetworkHandler().getPlayerListEntry(player.getUuid());
		return entry == null ? 0 : entry.getLatency();
	}

	/**
	 * {@code mZ.csc(value, digits)} (mZ.class csc:0-127): round half away from zero to {@code digits} decimals
	 * (factor 10^digits).
	 */
	private static float csc(float value, int digits) {
		if (digits < 0) {
			return value;
		}
		float factor = (float) Math.pow(10.0, digits);
		float scaled = value * factor;
		float rounded = scaled >= 0.0f ? (float) Math.floor(scaled + 0.5f) : (float) Math.ceil(scaled - 0.5f);
		return rounded / factor;
	}

	/**
	 * {@code ji.bCv} (ji.class bCv:0-143): infinite → marker; else {@code minutes + ":" + String.format(fmt,
	 * (duration % B) / C)}. The divisors and format are [G] (see class javadoc); the "00:00" comparison in
	 * {@code aiq} is kept verbatim.
	 */
	private static String durationString(StatusEffectInstance effect) {
		if (effect.isInfinite()) {
			return INFINITE_DURATION;
		}
		int duration = effect.getDuration();
		int minutes = duration / TICKS_PER_MINUTE;
		String seconds = String.format(SECONDS_FORMAT, duration % TICKS_PER_MINUTE / TICKS_PER_SECOND);
		return minutes + ":" + seconds;
	}

	/** {@code lq.cat()} = {@code lj.bYG(6.0f)} = 0.7f * 6.0f. */
	private static float lineHeight() {
		return LINE_HEIGHT_FACTOR * FONT_SIZE;
	}

	/**
	 * The per-frame text/background surface: the recovered <b>medium</b> MSDF
	 * sheet (lE.WTzbi, gui-dump lines 427-431) through the {@code gui_msdf}
	 * pipeline, the recovered {@code shape.glsl} rounded fill through
	 * {@link GuiDraw#fillRounded}, and the vanilla font only as the fallback
	 * when the MSDF sheet/pipeline is unavailable.
	 */
	private static final class TagRenderer {
		private static final float LAYOUT_SPACING = 0.25f;
		private static final float DRAW_SPACING = 0.025f;

		private final GuiDraw draw;
		private final TextRenderer vanilla;
		private final MsdfFont msdf;

		TagRenderer(DrawContext ctx, float delta, TextRenderer vanilla) {
			this.draw = new GuiDraw(ctx, 0, 0, delta, vanilla);
			this.vanilla = vanilla;
			this.msdf = MsdfFont.of(MsdfFont.MEDIUM);
		}

		/** {@code lq.cao} → {@code lj.bYw}: Σ(advance·size + 0.25f). */
		float width(String text) {
			if (text == null || text.isEmpty()) {
				return 0.0f;
			}
			if (msdf == null) {
				return vanilla.getWidth(text) * (FONT_SIZE / FONT_BASE);
			}
			float total = 0.0f;
			for (int i = 0; i < text.length(); i++) {
				total += msdf.advance(text.charAt(i), FONT_SIZE) + LAYOUT_SPACING;
			}
			return total;
		}

		/**
		 * {@code lC.cer} → {@code kJ.bUe}: baseline = top + 0.7·size, pen step
		 * = advance·size + 0.025·size.
		 */
		void draw(String text, float x, float topY, int argb) {
			if (text == null || text.isEmpty()) {
				return;
			}
			ColorF color = ColorF.fromArgb(argb);
			if (msdf == null) {
				draw.text(vanilla, text, x, topY, FONT_SIZE, color);
				return;
			}
			float glyphTop = topY + lineHeight() - msdf.ascent(FONT_SIZE);
			float pen = x;
			for (int i = 0; i < text.length(); i++) {
				char codepoint = text.charAt(i);
				if (msdf.has(codepoint)) {
					draw.text(msdf, String.valueOf(codepoint), pen, glyphTop, FONT_SIZE, color);
				}
				pen += msdf.advance(codepoint, FONT_SIZE) + DRAW_SPACING * FONT_SIZE;
			}
		}

		/** {@code lC.cdg/cdh}: recovered shape SDF, with GuiDraw's inset fallback. */
		void rounded(float x, float y, float width, float height, float radius, int argb) {
			draw.fillRounded(x, y, width, height, radius, ColorF.fromArgb(argb));
		}
	}

	/**
	 * {@code oP.cJr(player).cJE()} (native armor query): [U] slot order unrecovered — helmet → chest → legs →
	 * boots (natural display order, matches the previous port's reading).
	 */
	private static List<ItemStack> armorStacks(PlayerEntity player) {
		List<ItemStack> stacks = new ArrayList<>(4);
		for (EquipmentSlot slot : new EquipmentSlot[] { EquipmentSlot.HEAD, EquipmentSlot.CHEST, EquipmentSlot.LEGS,
				EquipmentSlot.FEET }) {
			stacks.add(player.getEquippedStack(slot));
		}
		return stacks;
	}

	/** {@code rD.dlJ().aZx(fS.class)} — the Name Protect module instance (id 106). */
	private static NameProtect nameProtect() {
		Module module = ModuleManager.get().byId("name_protect");
		return module instanceof NameProtect protect ? protect : null;
	}
}
