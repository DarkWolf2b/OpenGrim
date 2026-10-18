package dev.opengrim.rotation;

import net.minecraft.entity.Entity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;

/**
 * Port of sixtwo.ov (payload-named-cfr/sixtwo/ov.java) — the original client's
 * yaw/pitch pair.
 *
 * <p>All math below is a direct translation of the decompiled Java bodies:
 * fields {@code WjcUH} (yaw) / {@code pDaqa} (pitch) (ov.java:27-28),
 * factory {@code cGv} (ov.java:160-162), accessors {@code cGI}/{@code cGJ}
 * (ov.java:152-158), mutators {@code cGK}/{@code cGL} (ov.java:164-166,194-196),
 * direction vector {@code cGH} (ov.java:130-150), inverse {@code cGx}
 * (ov.java:181-183), client-rotation wrap {@code cGw} (ov.java:214-216),
 * entity snapshot {@code cGz} (ov.java:218-220), eye-relative aim {@code cGy}
 * (ov.java:269-272), camera-entity rotation {@code cGA} (ov.java:228-267),
 * add/sub {@code cGB}/{@code cGC} (ov.java:185-200), angular distance
 * {@code cGD} (ov.java:222-226), apply {@code cGE} (ov.java:189-192).
 *
 * <p>Not ported: {@code cGF} smoothing (reads native {@code qL.dbZ} plus the
 * native {@code mZ.csr} granularity step, ov.java:206-212) and the
 * {@code equals} control-flow obfuscation (ov.java:45-128) — see
 * analysis/PARITY-DIVERGENCES.md.
 */
public class Rotation {
	private float yaw;
	private float pitch;

	public Rotation(float yaw, float pitch) {
		this.yaw = yaw;
		this.pitch = pitch;
	}

	/** Port of sixtwo.ov#cGv (ov.java:160-162). */
	public static Rotation fromAngles(float yaw, float pitch) {
		return new Rotation(yaw, pitch);
	}

	/** Port of sixtwo.ov#cGI (ov.java:156-158). */
	public float getYaw() {
		return yaw;
	}

	/** Port of sixtwo.ov#cGJ (ov.java:152-154). */
	public float getPitch() {
		return pitch;
	}

	/** Port of sixtwo.ov#cGK (ov.java:164-166). */
	public void setYaw(float yaw) {
		this.yaw = yaw;
	}

	/** Port of sixtwo.ov#cGL (ov.java:194-196). */
	public void setPitch(float pitch) {
		this.pitch = pitch;
	}

	/**
	 * Port of sixtwo.ov#cGH (ov.java:130-150): yaw/pitch to look vector.
	 */
	public Vec3d toDirection() {
		float pitchRad = pitch * (float) Math.PI / 180.0f;
		float yawRad = -yaw * (float) Math.PI / 180.0f;
		float cosYaw = MathHelper.cos(yawRad);
		float sinYaw = MathHelper.sin(yawRad);
		float cosPitch = MathHelper.cos(pitchRad);
		float sinPitch = MathHelper.sin(pitchRad);
		return new Vec3d(sinYaw * cosPitch, -sinPitch, cosYaw * cosPitch);
	}

	/**
	 * Port of sixtwo.ov#cGx (ov.java:181-183): look vector to yaw/pitch.
	 */
	public static Rotation fromDirection(Vec3d vec) {
		return new Rotation(
				(float) MathHelper.wrapDegrees(Math.toDegrees(Math.atan2(vec.z, vec.x)) - 90.0),
				(float) MathHelper.wrapDegrees(Math.toDegrees(-Math.atan2(vec.y, Math.hypot(vec.x, vec.z)))));
	}

	/**
	 * Port of sixtwo.ov#cGw (ov.java:214-216). Note the original's component
	 * order ({@code y} first) is kept verbatim.
	 */
	public static Rotation fromClientRotation(Vec2f vec) {
		return new Rotation(vec.y, vec.x);
	}

	/** Port of sixtwo.ov#cGz (ov.java:218-220). */
	public static Rotation ofEntity(Entity entity) {
		return new Rotation(entity.getYaw(), entity.getPitch());
	}

	/**
	 * Port of sixtwo.ov#cGy (ov.java:269-272): rotation that looks from the
	 * given eye position at the given world point.
	 */
	public static Rotation lookingAt(Vec3d eye, Vec3d target) {
		return fromDirection(target.subtract(eye));
	}

	/** Port of sixtwo.ov#cGB (ov.java:198-200). */
	public Rotation add(Rotation other) {
		return new Rotation(yaw + other.yaw, pitch + other.pitch);
	}

	/** Port of sixtwo.ov#cGC (ov.java:185-187). */
	public Rotation subtract(Rotation other) {
		return new Rotation(yaw - other.yaw, pitch - other.pitch);
	}

	/**
	 * Port of sixtwo.ov#cGD (ov.java:222-226): angular distance combining
	 * wrapped yaw delta and pitch delta.
	 */
	public float angularDistance(Rotation other) {
		float yawDelta = MathHelper.wrapDegrees(other.yaw - yaw);
		float pitchDelta = other.pitch - pitch;
		return (float) Math.sqrt(yawDelta * yawDelta + pitchDelta * pitchDelta);
	}

	/** Port of sixtwo.ov#cGE (ov.java:189-192). */
	public void applyTo(Entity entity) {
		entity.setYaw(yaw);
		entity.setPitch(pitch);
	}

	/** Pitch clamped to [-90, 90] (cf. clamping inside ov#cGF, ov.java:206-212). */
	public Rotation clamped() {
		return new Rotation(yaw, MathHelper.clamp(pitch, -90.0f, 90.0f));
	}
}
