package dev.opengrim.modules.combat;

import java.lang.reflect.Field;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;

/**
 * No Miss Delay (registry sixtwo.dX, id 69): "Removes delay after miss".
 *
 * <p>Port of sixtwo.dX (payload-named-cfr/sixtwo/dX.java:13-36 constructor dX.java:21-24;
 * pre-motion listener aqT(gH$th) dX.java:31-32; handler spec analysis/specs/handlers/dX.md;
 * pool run POOL[0xc091,0x42): mixin/accessors/MinecraftAccessor#setMissTime). No settings are
 * constructed; while enabled the post-miss attack counter is held at zero every tick so a
 * missed swing never gates the next block interaction (the "reset to 0 every tick" reading is
 * the natural reading of the accessor name + registry wording; the written constant itself is
 * VM-resident).
 *
 * <p>1.21.11 note: the vanilla counter yarn calls {@code attackCooldown} (intermediary
 * {@code field_1771}) on {@link MinecraftClient} is the accessor's target — verified on the
 * original's own accessor mixin: {@code @Accessor("field_1771") setMissTime(I)V} in
 * analysis/jars/bootstrap-raw/mixin/accessors/MinecraftAccessor.class; yarn 1.21.11 has no
 * {@code missTime} name (analysis/jars/yarn-1.21.11+build.6.tiny:95105). Reflection uses the
 * mapped name with the intermediary fallback; unrelated fields are never written.
 *
 * <p>trace 2026-10-17 (analysis/traces/2026-10-17/by-class-casesafe/dX_.jsonl, window
 * [167479.4,167495.2]): {@code aqT} entered 2&times; — once per client tick. Each body ran the
 * in-game guard {@code gg.bab()} &rarr; 1 (player/world/interactionManager/getNetworkHandler,
 * gg.java:393-459) and nothing else observable: the mixin accessor write is invisible to the
 * tracer ({@code mixin/accessors/MinecraftAccessor} is outside the {@code sixtwo/} filter)
 * and no other sixtwo method ran. So the [N] body is now pinned to "guard + invisible write".
 * The written value 0 and the unconditional-per-tick reading remain the dX.md reconstruction;
 * capture condition for the residual: extend TRACE_CLASSES to {@code mixin/accessors/} and
 * miss a swing (swing at air) inside the window to see whether {@code setMissTime} is invoked
 * every tick or only on a fresh miss (JVMTI MethodEntry captures no int argument, so the
 * written constant itself is not trace-capturable).
 *
 * <p>Stack-required divergences: the original's {@code MinecraftAccessor#setMissTime} mixin
 * write is replaced by reflective field access (our framework has no such accessor mixin),
 * and our tick runs at END_CLIENT_TICK — a stand-in for the {@code gH$th} pre-motion phase
 * (dX.md:21).
 */
public class NoMissDelay extends Module {
	private static Field missTimeField;
	private static boolean fieldLookupFailed;

	public NoMissDelay() {
		super("no_miss_delay", "No Miss Delay", "Removes delay after miss", ModuleCategory.COMBAT);
	}

	@Override
	public void onTick() {
		// trace 2026-10-17: the in-game guard gg.bab() ran first on both aqT calls
		// (returned 1), before the invisible accessor write — the in-game check is the
		// handler's first statement (1:1).
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player == null || client.world == null || client.interactionManager == null
				|| client.getNetworkHandler() == null) {
			return;
		}
		setMissTime(client, 0);
	}

	private static void setMissTime(MinecraftClient client, int value) {
		if (fieldLookupFailed) {
			return;
		}
		try {
			if (missTimeField == null) {
				try {
					missTimeField = MinecraftClient.class.getDeclaredField("attackCooldown");
				} catch (NoSuchFieldException e) {
					missTimeField = MinecraftClient.class.getDeclaredField("field_1771");
				}
				missTimeField.setAccessible(true);
			}
			missTimeField.setInt(client, value);
		} catch (ReflectiveOperationException e) {
			fieldLookupFailed = true;
		}
	}
}
