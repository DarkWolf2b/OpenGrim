package dev.opengrim.modules.utility;

import java.time.LocalTime;
import java.time.ZoneId;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.event.impl.WorldRenderEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.ColorSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.ModeSetting;
import dev.opengrim.settings.RangeSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.network.packet.s2c.common.DisconnectS2CPacket;
import net.minecraft.network.packet.s2c.play.GameStateChangeS2CPacket;
import net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket;
import net.minecraft.util.math.Vec3d;

/**
 * Ambience (registry sixtwo.dh, module id 123): "Changes the world ambience".
 *
 * <p>1:1 reconstruction of sixtwo.dh. Evidence: constructor
 * {@code payload-decrypted/sixtwo/dh.java:125-449} (settings 128-365,
 * visibility wiring 367-447, gradient stash 448), packet handler
 * {@code aes(gL.tk)} dh.java:649-787, bare tick {@code aep(gM)} dh.java:1161-1165,
 * pre-motion tick {@code aeq(gH.th)} dh.java:1170 (CFR failure; recovered from
 * {@code javap -c} bytecode - the method the rebuild runs as {@code onTick}),
 * world render {@code aer(go.sX)} dh.java:1241-1475, inner classes
 * {@code dh$sy} (gradient stash) / {@code dh$sz} (ambient particle). Decrypted
 * pool: full-dump.jsonl {@code sixtwo.dh} records confirm the " ticks"/" blocks"
 * suffixes ({@code afq}) and the char arrays. Trace 2026-10-17: {@code aeq}
 * ran once (single tour tick), {@code aet} returned 23000 (preset case),
 * {@code aes} ×16 calls, {@code aer} ×1, {@code YO} on disable.
 *
 * <p>Settings (wrappers per the original): Particles {@code cJ mfkLN} false;
 * Particle Type {@code ct jabvB} Triangles ({@code GBNpt}) / Cubes
 * ({@code CqmWf}); Particles Color {@code cG GGEeK} = theme accent
 * {@code rD.dlM().bjG().bis()} = {@code mG.yHyOB} (151,71,255) of the default
 * theme (ig.java:238); Change Time {@code cJ yFtsJ} true; Time Mode
 * {@code ct qpOXm} Presets ({@code BoBPt}) / Custom ({@code aZAwH}); Time
 * {@code ct JQMui} Dawn/Morning/Day/Evening/Sunset/Night/Real Time; Time Value
 * {@code cC WEVIb} 100/0-24000/0 " ticks"; Change Weather {@code cJ YdEwv}
 * true; Weather {@code ct pJzyP} Clear/Rain/Thunder/Snow; Fog {@code ct tOEQJ}
 * None/Clear/Override ({@code uxQGU} {@code .SY()} default); Fog Color
 * {@code cG UipTW} = theme accent; Fog Range {@code cA MbiQi}
 * step 1/0-256/default handles 64,128 " blocks" ({@link RangeSetting});
 * Sync With Sky {@code cJ VkfWt} true.
 *
 * <p>Behavior: the packet handler cancels rain/thunder game-state changes into
 * the {@code dh$sy} stash and cancels {@code WorldTimeUpdateS2CPacket} while
 * Change Time holds ({@code aes}, dh.java:649-787); the tick handler
 * (dh.java:1170, javap) removes expired particles
 * ({@code JiVPB.dhj() == 0 && WWClU}), integrates the rest
 * ({@code dh$sz.doB}: pos += vel × 0.04, rot += spin × 0.04, both damped
 * × 0.98), spawns one particle per tick at the player plus
 * (±20, 0..5, ±20) with random rotation/velocity (× 0.04 in the ctor),
 * applies the Weather switch (Clear rain 0; Rain/Snow rain 1 thunder 0;
 * Thunder rain 1 thunder 1), restores the stashed gradients
 * ({@code doz} = rain ≥ 0 || thunder ≥ 1 → {@code doy} + {@code dox}) and
 * applies the time from {@code aet} via {@code ClientWorld.setTime(t, t,
 * false)}.
 *
 * <p>Remaining gaps: [U] five preset times (Morning/Day/Evening/Sunset/Night)
 * - each is an {@code afw}/{@code afv} DES long (dh.java:1112, javap
 * {@code aet} offsets 96-193) keyed by {@code lbjfT}, which is
 * {@code gb.aYR(...).a(...)} (native, dh.java static init); the audit note that
 * "javap can recover the five literals" is wrong - javap exposes the encrypted
 * blocks only, not the plaintext;
 * Dawn = 23000 is a labeled high-probability reading of trace 2026-10-17
 * ({@code aet} → 23000 with default settings: Presets + Dawn; the run's HUD
 * clock read 18:25-18:47, so the Real Time branch - which would map to
 * ~18500 - was not taken). [U] particle cap (DES int slot 2577) and the
 * interval bounds (slots 15922/12446) - the rebuild spawns one particle per
 * tick, interval stand-in 1000 ms. [U] the fade duration
 * ({@code dh$sz.IWwlL}) and billboard texture (DES string slot 3717) -
 * {@code aer}'s batch passes have no framework path, so only the gate and the
 * per-particle state machine are ported; the fade countdown uses the interval
 * as a stand-in ({@code dh$sz.IWwlL} is another native-key DES long) so
 * expired particles are removed as in {@code afe}. [U] the Fog settings are
 * consumed by the original shell's fog pipeline, which this rebuild does not
 * have; Fog Range is now the exact {@link RangeSetting} two-handle widget
 * (64/128) even though the port has no fog consumer. [U] the original's category constant is
 * {@code gh.nOCvV} (same as the render modules) while this file sits in
 * {@code utility} - see the batch report. [N] {@code ro.diF}-style preset
 * tables do not exist here; no native calls are involved in this class.
 */
public class Ambience extends Module {
	private final BoolSetting particles = register(new BoolSetting("particles", false));
	private final ModeSetting particleType = register(new ModeSetting("particle_type",
			List.of("triangles", "cubes"), "triangles"));
	private final ColorSetting particlesColor = register(new ColorSetting("particles_color", 0xFF9747FF, false));
	private final BoolSetting changeTime = register(new BoolSetting("change_time", true));
	private final ModeSetting timeMode = register(new ModeSetting("time_mode",
			List.of("presets", "custom"), "presets"));
	private final ModeSetting time = register(new ModeSetting("time",
			List.of("dawn", "morning", "day", "evening", "sunset", "night", "real_time"), "dawn"));
	private final DoubleSetting timeValue = register(new DoubleSetting("time_value", 100.0, 0.0, 24000.0, 0.0, " ticks"));
	private final BoolSetting changeWeather = register(new BoolSetting("change_weather", true));
	private final ModeSetting weather = register(new ModeSetting("weather",
			List.of("clear", "rain", "thunder", "snow"), "clear"));
	private final ModeSetting fog = register(new ModeSetting("fog",
			List.of("none", "clear", "override"), "override"));
	private final ColorSetting fogColor = register(new ColorSetting("fog_color", 0xFF9747FF, false));
	private final RangeSetting fogRange = register(new RangeSetting("fog_range", 1.0, 0.0, 256.0, 64.0, 128.0, " blocks"));
	private final BoolSetting syncWithSky = register(new BoolSetting("sync_with_sky", true));

	/** {@code dh$sy.cmcMI} - stashed rain gradient (0.0f initial). */
	private float stashedRain;
	/** {@code dh$sy.eIsxf} - stashed thunder gradient (0.0f initial). */
	private float stashedThunder;
	private final List<Particle> live = new ArrayList<>();

	/** Port of {@code dh$sz}: ambient particle state. */
	private static final class Particle {
		double x;
		double y;
		double z;
		double prevX;
		double prevY;
		double prevZ;
		/** {@code aoOwi}: position delta per tick (argument × 0.04). */
		double vx;
		double vy;
		double vz;
		/** {@code zgdiH}/{@code euQyK}: rotation and its previous value. */
		double rotX;
		double rotY;
		double rotZ;
		/** {@code FoYEg}: rotation delta per tick (argument × 0.04). */
		double spinX;
		double spinY;
		double spinZ;
		/** {@code uTzzU}: billboard/geometry scale. */
		float scale;
		/** {@code WWClU}: throttle fired, fade running. */
		boolean done;
		long nextAt;
		long doneAt;
		long interval;
		/** {@code JiVPB.dhj()}: 1.0 while alive, counting down after {@code done}. */
		float fade;
	}

	public Ambience() {
		super("ambience", "Ambience", "Changes the world ambience", ModuleCategory.VISUALS);
	}

	/**
	 * {@code aep(gM)} clears the particle list and the gradient stash
	 * (dh.java:1161-1165); the rebuild folds it into the disable path, its
	 * nearest event (no world-unload hook in this framework).
	 */
	@Override
	protected void onDisable() {
		live.clear();
		stashedRain = 0.0f;
		stashedThunder = 0.0f;
	}

	/**
	 * Packet handler {@code aes(gL.tk)} (dh.java:649-787): rain/thunder reasons
	 * stash the gradient and cancel; {@code WorldTimeUpdateS2CPacket} cancels
	 * while Change Time holds; {@code DisconnectS2CPacket} resets the stash.
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (event.packet() instanceof GameStateChangeS2CPacket packet) {
			GameStateChangeS2CPacket.Reason reason = packet.getReason();
			if (reason == GameStateChangeS2CPacket.RAIN_STARTED) {
				stashedRain = 1.0f;
				event.setCancelled(true);
			} else if (reason == GameStateChangeS2CPacket.RAIN_STOPPED) {
				stashedRain = 0.0f;
				event.setCancelled(true);
			} else if (reason == GameStateChangeS2CPacket.RAIN_GRADIENT_CHANGED) {
				stashedRain = packet.getValue();
				event.setCancelled(true);
			} else if (reason == GameStateChangeS2CPacket.THUNDER_GRADIENT_CHANGED) {
				stashedThunder = packet.getValue();
				event.setCancelled(true);
			}
			return;
		}
		if (event.packet() instanceof WorldTimeUpdateS2CPacket) {
			if (changeTime.getValue()) {
				event.setCancelled(true);
			}
			return;
		}
		if (event.packet() instanceof DisconnectS2CPacket) {
			stashedRain = 0.0f;
			stashedThunder = 0.0f;
		}
	}

	/**
	 * Tick handler {@code aeq(gH.th)} (dh.java:1170, javap offsets 0-568).
	 * Visibility predicates first (the original wires them in the constructor,
	 * dh.java:367-447), then the {@code bab()} gate and the recovered order:
	 * particles, weather, stash restore, time.
	 */
	@Override
	public void onTick() {
		particleType.setVisible(particles.getValue());
		particlesColor.setVisible(particles.getValue());
		timeMode.setVisible(changeTime.getValue());
		time.setVisible(changeTime.getValue() && "presets".equals(timeMode.getValue()));
		timeValue.setVisible(changeTime.getValue() && "custom".equals(timeMode.getValue()));
		weather.setVisible(changeWeather.getValue());
		boolean fogOverride = "override".equals(fog.getValue());
		fogColor.setVisible(fogOverride);
		fogRange.setVisible(fogOverride);
		syncWithSky.setVisible(fogOverride);

		MinecraftClient client = MinecraftClient.getInstance();
		ClientWorld world = client.world;
		// bab(): player, world, interaction manager and network handler present.
		if (client.player == null || world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		if (particles.getValue()) {
			tickParticles(client);
		}
		if (changeWeather.getValue()) {
			applyWeather(world);
		}
		// dh$sy.doz() = rain >= 0.0f || thunder >= 1.0f; the fields start at 0
		// and dox() zeroes them, so this restore runs every tick - after the
		// weather switch above, which it therefore overwrites with the stashed
		// (0,0) gradients. That ordering is the original's own quirk
		// (javap aeq 344-519) and is kept 1:1.
		if (stashedRain >= 0.0f || stashedThunder >= 1.0f) {
			if (stashedRain >= 0.0f) {
				world.setRainGradient(stashedRain);
			}
			if (stashedThunder >= 0.0f) {
				world.setThunderGradient(stashedThunder);
			}
			stashedRain = 0.0f;
			stashedThunder = 0.0f;
		}
		if (changeTime.getValue()) {
			Long tick = resolveTime();
			if (tick != null) {
				world.setTime(tick, tick, false);
			}
		}
	}

	/** Weather switch, javap offsets 344-465 (dh.java:1170). */
	private void applyWeather(ClientWorld world) {
		switch (weather.getValue()) {
			case "clear" -> world.setRainGradient(0.0f);
			case "rain", "snow" -> {
				world.setRainGradient(1.0f);
				world.setThunderGradient(0.0f);
			}
			case "thunder" -> {
				world.setRainGradient(1.0f);
				world.setThunderGradient(1.0f);
			}
			default -> {
			}
		}
	}

	/**
	 * Time source {@code aet()} (javap offsets 0-212): Time Mode Presets
	 * switches on the Time selection - case 0 Dawn = 23000 (trace 2026-10-17,
	 * labeled [G]), case 6/default Real Time = {@code aeu}; Custom reads
	 * Time Value ({@code cC.VC()}, an int cast). The five unrecovered preset
	 * longs return null = leave the world time untouched (documented gap).
	 */
	private Long resolveTime() {
		if ("presets".equals(timeMode.getValue())) {
			return switch (time.getValue()) {
				case "dawn" -> 23000L;
				case "real_time" -> realTimeTick(ZoneId.systemDefault());
				default -> null;
			};
		}
		return (long) timeValue.getValue().intValue();
	}

	/**
	 * Real-time mapping {@code aeu(ZoneId)} (dh.java:974-998):
	 * {@code round(minutes-of-day / 1440 × 24000) + 0 % 24000 + 0} - the three
	 * DES longs are unrecovered; the observed arithmetic reduces to the plain
	 * minute mapping with a modulo 24000 guard.
	 */
	static long realTimeTick(ZoneId zone) {
		LocalTime now = LocalTime.now(zone);
		int minutes = now.getHour() * 60 + now.getMinute();
		long tick = Math.round(minutes / 1440.0 * 24000.0);
		tick %= 24000L;
		if (tick < 0L) {
			tick += 24000L;
		}
		return tick;
	}

	/**
	 * Particle tick, javap offsets 55-322: {@code removeIf(dh::afe)} then
	 * {@code doB()} per particle, then one spawn while under the (unrecovered)
	 * cap.
	 */
	private void tickParticles(MinecraftClient client) {
		live.removeIf(p -> p.fade <= 0.0f && p.done);
		for (Particle p : live) {
			p.prevX = p.x;
			p.prevY = p.y;
			p.prevZ = p.z;
			p.x += p.vx;
			p.y += p.vy;
			p.z += p.vz;
			p.rotX += p.spinX;
			p.rotY += p.spinY;
			p.rotZ += p.spinZ;
			p.vx *= 0.98;
			p.vy *= 0.98;
			p.vz *= 0.98;
			p.spinX *= 0.98;
			p.spinY *= 0.98;
			p.spinZ *= 0.98;
		}
		ThreadLocalRandom random = ThreadLocalRandom.current();
		Particle spawned = new Particle();
		Vec3d pos = client.player.getEntityPos().add(random.nextDouble(-20.0, 20.0),
				random.nextDouble(0.0, 5.0), random.nextDouble(-20.0, 20.0));
		spawned.x = pos.x;
		spawned.y = pos.y;
		spawned.z = pos.z;
		spawned.prevX = spawned.x;
		spawned.prevY = spawned.y;
		spawned.prevZ = spawned.z;
		// dh$sz ctor multiplies both argument vectors by 0.04 (dh$sz.java:44-45).
		spawned.vx = random.nextDouble(-1.0, 1.0) * 0.04;
		spawned.vy = random.nextDouble(0.0, 2.0) * 0.04;
		spawned.vz = random.nextDouble(-1.0, 1.0) * 0.04;
		spawned.spinX = random.nextDouble(-1.0, 1.0) * 0.04;
		spawned.spinY = random.nextDouble(-1.0, 1.0) * 0.04;
		spawned.spinZ = random.nextDouble(-1.0, 1.0) * 0.04;
		spawned.scale = (float) random.nextDouble(0.1, 0.3);
		spawned.interval = 1000L;
		spawned.nextAt = System.currentTimeMillis() + spawned.interval;
		spawned.fade = 1.0f;
		live.add(spawned);
	}

	/**
	 * Render pass {@code aer(go.sX)} (dh.java:1241-1475): billboard and
	 * Triangles/Cubes batches over {@code Box(-0.5..0.5)}; the batch pipeline
	 * has no framework path, so this hook keeps the recovered state machine -
	 * the throttle {@code jYAnc.cpC(JoZky)} flips {@code WWClU}, after which
	 * the fade stopwatch {@code JiVPB} counts down (duration unrecovered;
	 * interval used as stand-in) until {@code afe} removes the particle.
	 */
	@Subscribe
	public void onWorldRender(WorldRenderEvent event) {
		if (event.phase() != WorldRenderEvent.Phase.AFTER_ENTITIES || !isEnabled() || !particles.getValue()) {
			return;
		}
		long now = System.currentTimeMillis();
		for (Particle p : live) {
			if (!p.done && now >= p.nextAt) {
				p.done = true;
				p.doneAt = now;
			}
			if (p.done) {
				p.fade = 1.0f - (now - p.doneAt) / (float) p.interval;
				if (p.fade < 0.0f) {
					p.fade = 0.0f;
				}
			}
		}
	}
}
