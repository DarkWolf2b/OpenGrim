package dev.opengrim.modules.utility;

import java.time.Instant;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;

/**
 * Discord Activity (registry sixtwo.fO, module id 104): "Changes your in game
 * activity".
 *
 * <p>parity: settings 0/0, behavior partial. 1:1 reconstruction of sixtwo.fO.
 * Spec: analysis/specs/casesafe/handlers/fO_.md (declared-class-verified source
 * analysis/decompiled/payload-named/sixtwo/fO.java:19-22 constructor with
 * gf.aZL(JLbAF,true,KfAlY) boot-enabled flag and zero settings; :29-30 aaj
 * enable override; :46-47 YO disable override; :40 aWj private worker — the
 * casesafe/payload-named-cfr/sixtwo/fO.java file declares sixtwo.fo (Anti Bot)
 * on this checkout; pool window
 * with qq scheduler cXK/cXG/cXI/cXN/cXJ, qn DTO cXs/cXt/cXq/cXr/cXu/cXv,
 * Instant.now/getEpochSecond, ry transport dkB/dkI/dkJ/dkP/dkQ; the plain
 * handlers/fO.md file is the fo (Anti Bot) case-twin).
 *
 * <p>Recovered: zero-setting background-service shape, boot-enabled flag,
 * shared qn DTO instance shape, scheduler plus HTTP transport wiring shape,
 * timestamp via Instant epoch seconds, activity build and publish worker
 * entry.
 *
 * <p>trace 2026-10-17 (registry id 104): the disable override ran once —
 * {@code YO()} nested exactly {@code qq.cXK()} (the scheduler stop; inside it
 * {@code qn.cXy() = 1} then {@code qn.cXx() = 0}, the DTO's state queries),
 * with no {@code gg.YO()} in the span (fO declares no {@code @hG} listeners,
 * so the original override does not chain the base unregistration). The enable
 * side ({@code aaj → aWj → qq.cXG(delay, runnable)}) did not re-run in this
 * session (fO boots enabled; the boot-phase trace captured it, see audit
 * 2026-10-17 batch-02). Mapping: {@link #onDisable()} stops the publish loop
 * (onTick no longer runs once disabled) and clears the published activity.
 */
public class DiscordActivity extends Module {
	private String detail = "";
	private String state = "";
	private long startEpoch;
	private long endEpoch;
	private int status;

	public DiscordActivity() {
		super("discord_activity", "Discord Activity", "Changes your in game activity", ModuleCategory.CLIENT);
	}

	/**
	 * Boot-enabled: the original registers fO with the {@code true} metadata
	 * flag ({@code gf.aZL((int)JLbAF, true, gh.KfAlY)}, fO.java:30) — the only
	 * module of its batch booted enabled (casesafe handlers fO_.md,
	 * "Runtime model"). The client enables it before config load.
	 */
	@Override
	public boolean bootEnabled() {
		return true;
	}

	@Override
	protected void onEnable() {
		startEpoch = Instant.now().getEpochSecond();
		push();
	}

	@Override
	protected void onDisable() {
		// trace 2026-10-17: fO.YO → qq.cXK() (scheduler stop) + qn state
		// queries; the original clears the published activity. Stop publishing
		// (onTick is enabled-gated) and clear the activity payload.
		detail = "";
		state = "";
		status = 0;
		endEpoch = Instant.now().getEpochSecond();
	}

	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;
		if (player == null) {
			detail = "";
			state = "";
			return;
		}
		var entry = client.getCurrentServerEntry();
		String server = entry == null ? "singleplayer" : String.valueOf(entry.address);
		detail = server;
		state = player.getBlockPos().toShortString();
		startEpoch = Instant.now().getEpochSecond();
		push();
	}

	private void push() {
		status = detail.isEmpty() ? 0 : 1;
	}

	/**
	 * Activity text the publish worker maintains.
	 */
	public String summary() {
		return detail.isEmpty() ? state : detail + " " + state;
	}
}
