package dev.opengrim.modules.movement;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.AttackEntityEvent;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.GroupSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;

/**
 * Sprint (registry sixtwo.eC, module id 34): "Automatically sprints".
 *
 * <p>Port of sixtwo.eC (analysis/decompiled/payload-decrypted/sixtwo/eC.java:32-162
 * constructor; events {@code awc(hk)} / {@code awb(gH$ti)}, predicates
 * {@code awd/awi/awh/awj/awg}, {@code awf} collision / {@code awe} hunger /
 * {@code awg} ownership pinned by the bootstrap mixins; handler spec
 * analysis/specs/handlers/eC.md). Settings in declaration order (eC.java:42-161):
 * <ul>
 * <li>Ignore {@code cv} (eC.java:42) with Blindness / Hunger / Collision
 * ({@code cw} children, no {@code .Tz()} — cv is multi-select: all children
 * live in {@code jjOKZ} but the selected list {@code JIvPe} starts empty
 * (cv.java:24-25) and only {@code To(cw)} adds (cv.java:40-126); effective
 * value = {@code RDnKR && parent.Tn(this)} (cw.java:157-198) → all three
 * default <em>off</em>. The NoSlow eo port uses the same rule),</li>
 * <li>Stop On {@code cv} (eC.java:84) with Ground / Air ({@code cw}, default
 * off),</li>
 * <li>Keep Sprint {@code cJ .WE(false)} (eC.java:112),</li>
 * <li>Motion / Motion When Hurt / Hurt Time / Chance — visibility-gated on
 * Keep Sprint via {@code Vf(this.AjuCa::WF)} (eC.java:158-161); Motion
 * {@code cA .UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(" %")}, Motion When
 * Hurt identical, Hurt Time {@code cA .UG(1.0).UE(1.0).UF(10.0).UI(1.0, 10.0)}
 * (no suffix), Chance {@code cC .Vy(1.0).Vw(0.0).Vx(100.0).VA(100.0).Vz(" %")}.</li>
 * </ul>
 *
 * <p>Core loop pinned by the offline shim (ClientEventBridgeMixin
 * {@code restoreMovementModules}, analysis/decompiled/bootstrap/mixin/accessors/
 * ClientEventBridgeMixin.java): while enabled, {@code sideways² + forward² >
 * 1.0E-4F} forces {@code setSprinting(true)} every tick (the omni-sprint
 * condition, eC.md "Core loop"). Ignore→Hunger ({@code awe}) / Ignore→Collision
 * ({@code awf}) / sprint-ownership ({@code awg}) are the mixin-verified gates;
 * the Ignore→Blindness consumer ({@code awh}/{@code awj}) is native (eC.md
 * "Unrecovered" 1). Keep Sprint's forwardSpeed/sidewaysSpeed/updateVelocity
 * math is native; the port applies the documented motion-fraction
 * reconstruction on hurt ticks and attacks.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/eC_.jsonl):
 * the window captured only the disable override {@code YO} (no tick listener
 * activity) — {@code awb}/{@code awc} never fired (capture condition: run with
 * live ticks while moving).
 */
public class Sprint extends Module {
	private final GroupSetting ignore = register(new GroupSetting("ignore"));
	private final BoolSetting blindness = register(new BoolSetting("blindness", false));
	private final BoolSetting hunger = register(new BoolSetting("hunger", false));
	private final BoolSetting collision = register(new BoolSetting("collision", false));

	private final GroupSetting stopOn = register(new GroupSetting("stop_on"));
	private final BoolSetting ground = register(new BoolSetting("ground", false));
	private final BoolSetting air = register(new BoolSetting("air", false));

	private final BoolSetting keepSprint = register(new BoolSetting("keep_sprint", false));
	private final DoubleSetting motion = register(new DoubleSetting("motion", 1.0, 0.0, 100.0, 100.0, " %"));
	private final DoubleSetting motionWhenHurt = register(new DoubleSetting("motion_when_hurt", 1.0, 0.0, 100.0, 100.0, " %"));
	private final DoubleSetting hurtTime = register(new DoubleSetting("hurt_time", 1.0, 1.0, 10.0, 1.0, null));
	private final DoubleSetting chance = register(new DoubleSetting("chance", 1.0, 0.0, 100.0, 100.0, " %"));

	public Sprint() {
		super("sprint", "Sprint", "Automatically sprints", ModuleCategory.MOVEMENT);
		ignore.add(blindness);
		ignore.add(hunger);
		ignore.add(collision);
		stopOn.add(ground);
		stopOn.add(air);
	}

	@Override
	public void onTick() {
		boolean showKeep = keepSprint.getValue();
		motion.setVisible(showKeep);
		motionWhenHurt.setVisible(showKeep);
		hurtTime.setVisible(showKeep);
		chance.setVisible(showKeep);

		ClientPlayerEntity player = MinecraftClient.getInstance().player;
		if (player == null) {
			return;
		}

		// Stop On checks
		if (ground.getValue() && player.isOnGround()) {
			player.setSprinting(false);
			return;
		}
		if (air.getValue() && !player.isOnGround()) {
			player.setSprinting(false);
			return;
		}

		// Sprint precondition gates
		boolean blocked = player.isSneaking();
		if (!hunger.getValue() && player.getHungerManager().getFoodLevel() <= 6) {
			blocked = true;
		}
		if (!collision.getValue() && player.horizontalCollision) {
			blocked = true;
		}
		if (!blindness.getValue() && player.hasStatusEffect(StatusEffects.BLINDNESS)) {
			blocked = true;
		}

		// Verbatim core sprint loop: sideways^2 + forward^2 > 1.0E-4F
		Vec2f movementInput = player.input.getMovementInput();
		float sideways = movementInput.x;
		float forward = movementInput.y;
		if ((sideways * sideways + forward * forward) > 1.0E-4F && !blocked) {
			player.setSprinting(true);
		}

		// Keep Sprint hurt window handling
		if (keepSprint.getValue() && player.hurtTime > 0 && player.hurtTime <= hurtTime.getValue().intValue()) {
			if (chance.getValue().doubleValue() >= 100.0 || (Math.random() * 100.0) < chance.getValue().doubleValue()) {
				double factor = motionWhenHurt.getValue().doubleValue() / 100.0;
				Vec3d vel = player.getVelocity();
				player.setVelocity(vel.x * factor, vel.y, vel.z * factor);
				player.setSprinting(true);
			}
		}
	}

	@Subscribe
	public void onAttackEntity(AttackEntityEvent event) {
		if (!keepSprint.getValue()) {
			return;
		}
		if (chance.getValue().doubleValue() >= 100.0 || (Math.random() * 100.0) < chance.getValue().doubleValue()) {
			double factor = motion.getValue().doubleValue() / 100.0;
			ClientPlayerEntity player = MinecraftClient.getInstance().player;
			if (player != null) {
				Vec3d vel = player.getVelocity();
				player.setVelocity(vel.x * factor, vel.y, vel.z * factor);
				player.setSprinting(true);
			}
		}
	}
}