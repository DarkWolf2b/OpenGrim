package dev.opengrim.modules.combat;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.KeybindSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.FishingBobberEntity;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.entity.projectile.thrown.PotionEntity;
import net.minecraft.entity.projectile.thrown.SnowballEntity;
import net.minecraft.text.Text;
import net.minecraft.util.math.Box;

/**
 * Auto Logout (registry sixtwo.fI, module id 2): "Logouts you from server when
 * player is in distance".
 *
 * <p>parity: partial — settings 1:1, behavior bodies VM-native. Spec:
 * analysis/specs/handlers/fI.md. Evidence: fI.java:35-207 constructor with
 * Distance fI.java:47, Logout From group fI.java:60 (cv) with Pearls
 * fI.java:69, Snowballs fI.java:81, Arrows fI.java:90, Fish Rods fI.java:102,
 * Potions fI.java:112 (all {@code cw .Tz()} default on), Ignore Friends
 * fI.java:128 (default on), Invisible fI.java:139 (default off), Disconnect
 * Message fI.java:159 (max 32, default "Disconnected"), Logout on Key
 * fI.java:174, Logout Key fI.java:186 ({@code cD .VO(-999)}), Disable On Logout
 * fI.java:205; Logout Key visible iff Logout on Key fI.java:206. Handlers:
 * aUB(gH$th) tick scan fI.java:233-234, aUC(gA) input event fI.java:214-215,
 * aUD(ProjectileEntity) predicate fI.java:217, aUE() executor fI.java:236.
 * Trace 2026-10-17 (by-class-casesafe/fI_.jsonl): one aUB call — no numeric
 * exits.
 *
 * <p>Recovered contract: per tick, scan for threatening players in Distance
 * (Ignore Friends / Invisible filters) and for incoming projectiles classified
 * by the aUD predicate (window tokens: ProjectileEntity, SnowballEntity,
 * PersistentProjectileEntity, PotionEntity, {@code FlyingItemEntity.getStack()});
 * on trigger, disconnect via {@code Text.literal(Disconnect Message)} +
 * {@code ClientConnection.disconnect(Text)} (method_43470/method_10747) and
 * optionally self-disable.
 *
 * <p>High-probability guesses (labeled): the Logout on Key check as a per-tick
 * held-key poll (the original consumes it in the {@code gA} input event —
 * framework has no general input event), the class-based projectile
 * classification (pearls/fish rods plausibly route through
 * {@code getStack()} item identity per the window), and the Invisible polarity
 * (count invisible players as threats when on — spec "Unrecovered" 4).
 * Unrecovered ([U]): projectile threat criteria (velocity/owner), the
 * truncated window tail. Framework limitation: the 32-char field limit
 * (StringSetting has no max length) — the message is truncated at disconnect.
 */
public class AutoLogout extends Module {
	private final DoubleSetting distance = register(new DoubleSetting("distance", 1.0, 1.0, 100.0, 16.0, " blocks"));
	private final GroupSetting logoutFrom = register(new GroupSetting("logout_from"));
	private final BoolSetting pearls = register(new BoolSetting("pearls", true));
	private final BoolSetting snowballs = register(new BoolSetting("snowballs", true));
	private final BoolSetting arrows = register(new BoolSetting("arrows", true));
	private final BoolSetting fishRods = register(new BoolSetting("fish_rods", true));
	private final BoolSetting potions = register(new BoolSetting("potions", true));
	private final BoolSetting ignoreFriends = register(new BoolSetting("ignore_friends", true));
	private final BoolSetting invisible = register(new BoolSetting("invisible", false));
	private final StringSetting disconnectMessage = register(new StringSetting("disconnect_message", "Disconnected"));
	private final BoolSetting logoutOnKey = register(new BoolSetting("logout_on_key", false));
	private final KeybindSetting logoutKey = register(new KeybindSetting("logout_key", -999));
	private final BoolSetting disableOnLogout = register(new BoolSetting("disable_on_logout", false));

	public AutoLogout() {
		super("auto_logout", "Auto Logout", "Logouts you from server when player is in distance", ModuleCategory.COMBAT);
		logoutFrom.add(pearls);
		logoutFrom.add(snowballs);
		logoutFrom.add(arrows);
		logoutFrom.add(fishRods);
		logoutFrom.add(potions);
	}

	@Override
	public void onTick() {
		logoutKey.setVisible(logoutOnKey.getValue()); // fI.java:206 CLGoi.Vf(yfLPs::WF)
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null || client.world == null) {
			return;
		}
		if (logoutOnKey.getValue() && client.currentScreen == null && logoutKey.isPressed()) {
			disconnect(client);
			return;
		}
		double range = distance.getValue();
		Box box = TriggerBot.reachBox(player.getEyePos(), range);
		boolean playerNear = client.world
				.getOtherEntities(player, box, e -> e instanceof net.minecraft.entity.player.PlayerEntity)
				.stream()
				.anyMatch(e -> player.distanceTo(e) <= range && e.isAlive() && !e.isSpectator()
						&& (invisible.getValue() || !e.isInvisible())
						&& (!ignoreFriends.getValue() || !isFriend(e)));
		if (playerNear) {
			disconnect(client);
			return;
		}
		if (pearls.getValue() && anyNear(client, player, box, range, EnderPearlEntity.class)) {
			disconnect(client);
			return;
		}
		if (snowballs.getValue() && anyNear(client, player, box, range, SnowballEntity.class)) {
			disconnect(client);
			return;
		}
		if (arrows.getValue() && anyNear(client, player, box, range, PersistentProjectileEntity.class)) {
			disconnect(client);
			return;
		}
		if (fishRods.getValue() && anyNear(client, player, box, range, FishingBobberEntity.class)) {
			disconnect(client);
			return;
		}
		if (potions.getValue() && anyNear(client, player, box, range, PotionEntity.class)) {
			disconnect(client);
		}
	}

	private static boolean anyNear(MinecraftClient client, ClientPlayerEntity player, Box box, double range,
			Class<? extends Entity> type) {
		return client.world.getOtherEntities(player, box, type::isInstance).stream()
				.anyMatch(e -> player.distanceTo(e) <= range);
	}

	private static boolean isFriend(Entity entity) {
		return entity instanceof net.minecraft.entity.player.PlayerEntity player
				&& dev.opengrim.util.FriendsManager.isFriend(player.getGameProfile().name());
	}

	private void disconnect(MinecraftClient client) {
		String message = disconnectMessage.getValue();
		if (message == null) {
			message = "Disconnected";
		}
		// fI.java:159 .Un(32): the original field cannot exceed 32 chars; our
		// StringSetting has no max length, so the value is truncated here.
		if (message.length() > 32) {
			message = message.substring(0, 32);
		}
		if (client.getNetworkHandler() != null) {
			client.getNetworkHandler().getConnection().disconnect(Text.literal(message));
		}
		if (disableOnLogout.getValue()) {
			setEnabled(false);
		}
	}
}
