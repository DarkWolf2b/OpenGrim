package dev.opengrim.modules.utility;

import dev.opengrim.event.Subscribe;
import dev.opengrim.event.impl.PacketReceiveEvent;
import dev.opengrim.gui.WheelScreenBase;
import dev.opengrim.gui.ui.AnimatedScreen;
import dev.opengrim.mixin.HandledScreenAccessor;
import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.KeybindSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.screen.slot.Slot;

/**
 * Auto Market (registry sixtwo.dM, module id 26): "Automatically buys and sells
 * items on market".
 *
 * <p>parity: shell — the module's own Java is fully recovered and translated
 * here, but the entire market rule engine it drives is native-blocked, so the
 * port keeps the recovered shell (settings, key dispatcher, entry guards,
 * session state) and documents every absent subsystem. 1:1 reconstruction of
 * sixtwo.dM. Specs: analysis/specs/casesafe/modules/dM_.md and
 * analysis/specs/casesafe/handlers/dM_.md (evidence: dM.java:122-174
 * constructor with the three settings and the engine subsystem list
 * {@code OgFsa = List.of(nB, nC, nD, nA, nE)}, dM.java:378-411 any(gM) =
 * disconnect, dM.java:425-429 enable reset, dM.java:432-451
 * runMarketOpenCommand, dM.java:453-459 updateFallbackTimeout, dM.java:472-475
 * anx(gN) = post-login reload, dM.java:477-697 anz(gA) key dispatcher,
 * dM.java:697-762 anA(gL$tk) S2C packet entry, dM.java:775-820 anB(gP),
 * dM.java:826-852 anJ config load, dM.java:858-1009 anK hovered-slot add,
 * dM.java:1011-1069 anC start session, dM.java:1071-1127 the four chain
 * helpers, dM.java:1128-1260 anw(gq) and anv(gH$th) entries, dM.java:1480-1646
 * pauseAndNotify/pauseSession, dM.java:1550-1590 reopenMarket).
 *
 * <p>Recovered and translated: the three settings ("State Key" default -999;
 * "Add Rule Key" default {@code mA.OGQHF.cmO()} = 2, the middle mouse button —
 * mA.class static init; "Edit Market" is a {@code cI} action button that opens
 * the {@code bz} market editor, registered here as a group placeholder like
 * Esp2D's "Edit ESP"); the {@code QvQJq} session flag with the state-key
 * toggle; the key-dispatcher guard order ({@code bab()} in-game gate, press
 * only, client-GUI screen guard, add-rule branch, state branch); the packet
 * entry guard; pauseSession/pauseAndNotify/reopenMarket call structure.
 *
 * <p>Not ported (documented gaps):
 * <ul>
 *   <li>[N] the market engine — {@code nO} (orders), {@code nR} (session
 *   timing), {@code nP} (offers), {@code nM} (rule storage), {@code nB/nC/nD/nA/nE}
 *   (the five {@code nH} rule steps) and their {@code nK} context bundle are
 *   native (j2cc VM) in the original; the five-step chain with its
 *   {@code nJ.cxz()} short-circuit is recovered structurally but has no
 *   bodies to port.</li>
 *   <li>[U] the market config store ({@code iu}/{@code iy}/{@code iz} via
 *   {@code rD.dlV().bnM().bmP()}), the market API ({@code iC.bqK/bqI}), the
 *   notifications ({@code cN.XI/XJ/XQ}), the server-address/URL helpers
 *   ({@code jd.bAk/bAn}) and the editor screen ({@code bz.KE/KH/KD}); the
 *   start path ({@code anC}) therefore skips its config gates here.</li>
 *   <li>[U] the pause hotkey compared at dM.java:546 (DES int slot 27464, not
 *   in analysis/decrypted/full-dump.jsonl) and the two
 *   {@code updateFallbackTimeout} long kernels (slots 29691/17688).</li>
 *   <li>[U] the {@code gP} and {@code gq} event identities (never constructed
 *   in the recovered bootstrap/payload trees), and {@code rD.dlO().bpW()}
 *   (post-login reload, dM.java:474/428).</li>
 * </ul>
 */
public class AutoMarket extends Module {
	/** "State Key" (dM.java:135 {@code .VO(-999)} = unbound). */
	private final KeybindSetting stateKey = register(new KeybindSetting("state_key", -999));
	/**
	 * "Add Rule Key" (dM.java:149 {@code .VO(mA.OGQHF.cmO())}): mA is the
	 * client's key/mouse enum (MouseInputMixin maps mouse buttons through
	 * {@code mA.cmN(button)}), and OGQHF's code field is 2 — the middle mouse
	 * button (mA.class static init: OGQHF constructed with code {@code iconst_2}).
	 */
	private final KeybindSetting addRuleKey = register(new KeybindSetting("add_rule_key", 2));
	/**
	 * "Edit Market" (dM.java:162 {@code new cI(this, "Edit Market").Wx(bz::KE)}):
	 * a {@code cI} action button opening the {@code bz} market editor. This
	 * settings API has no button kind (Esp2D's "Edit ESP" convention), so it is
	 * an empty group placeholder.
	 */
	private final GroupSetting editMarket = register(new GroupSetting("edit_market"));

	/** Engine running flag (dM.java:109 {@code QvQJq}). */
	private boolean running;
	/** Port-side edge detection for the polling key check (the original reads {@code gA} press events). */
	private boolean stateDown;
	private boolean addRuleDown;

	public AutoMarket() {
		super("auto_market", "Auto Market", "Automatically buys and sells items on market", ModuleCategory.PLAYER);
	}

	/**
	 * Enable hook (dM.java:424-429 {@code aaj}): {@code super.aaj(); anD();
	 * rD.dlO().bpW();} — engine reset plus the market-manager reload; the
	 * manager reload is [U] (see class javadoc).
	 */
	@Override
	protected void onEnable() {
		resetEngine();
	}

	/**
	 * Per-tick host for the original's key dispatcher (dM.java:477-697
	 * {@code anz(gA)}, a key event in the original; this framework polls, the
	 * same convention as the other key-setting modules) and the engine tick
	 * entry (dM.java:1201-1260 {@code anv(gH$th)}).
	 */
	@Override
	public void onTick() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (!isInGame(client)) {
			// any(gM) (dM.java:378-411): the original fires on ClientWorld.disconnect
			// (bootstrap ClientWorldEventBridgeMixin:53-64) — this framework has no
			// disconnect event, so the reset is applied on the first tick without a
			// world/player [S].
			if (running) {
				pauseSession();
			}
			resetEngine();
			stateDown = false;
			addRuleDown = false;
			return;
		}
		boolean state = stateKey.isPressed();
		boolean addRule = addRuleKey.isPressed();
		if (addRule && !addRuleDown) {
			onKeyPress(client, addRuleKey.getValue());
		}
		if (state && !stateDown) {
			onKeyPress(client, stateKey.getValue());
		}
		stateDown = state;
		addRuleDown = addRule;
		// anv(gH$th) (dM.java:1201-1260): bab() && QvQJq, then anJ() and
		// anF(anE(iy)) over the OgFsa steps — engine not ported [N].
	}

	/**
	 * Key dispatcher body (dM.java:477-697 {@code anz}): {@code bab()} is the
	 * caller's gate; then press-only, the client-GUI guard ({@code currentScreen
	 * instanceof av} = the client's own screens — here AnimatedScreen /
	 * WheelScreenBase), the add-rule branch (Add Rule Key + a container screen +
	 * {@code anK}), and finally the State Key branch (running → pauseAndNotify,
	 * otherwise the anC start path).
	 */
	private void onKeyPress(MinecraftClient client, int key) {
		Screen screen = client.currentScreen;
		if (screen instanceof AnimatedScreen || screen instanceof WheelScreenBase) {
			return;
		}
		// dM.java:546 compares the key against an unrecovered DES int (slot
		// 27464): a pause hotkey that fires while a HandledScreen is open and
		// the engine runs. Not ported [U].
		if (key == addRuleKey.getValue() && screen instanceof HandledScreen<?> handled) {
			addRuleFromHovered(handled);
			// The original falls through to the State Key compare when anK
			// returns false (dM.java:612-618); both keys differ in practice.
		}
		if (key != stateKey.getValue()) {
			return;
		}
		if (running) {
			pauseAndNotify();
			return;
		}
		startSession();
	}

	/**
	 * Packet entry (dM.java:697-762 {@code anA(gL$tk)}): {@code !QvQJq} →
	 * return; then {@code anJ()} (market config — absent [U]) and the five-step
	 * chain {@code anH(anE(iy), tk)} over {@code OgFsa} with the
	 * {@code nJ.cxz()} short-circuit [N]. The guard is kept 1:1; trace
	 * 2026-10-17 dM_ shows anA entered 42× per session and returning on the
	 * {@code QvQJq} guard.
	 */
	@Subscribe
	public void onPacketReceive(PacketReceiveEvent event) {
		if (!running) {
			return;
		}
	}

	/**
	 * Add-rule entry (dM.java:858-1009 {@code anK(HandledScreen)}): the hovered
	 * slot must exist and hold a non-empty stack, and a market config must be
	 * loaded ({@code anJ()} — absent [U], so the message path is skipped). The
	 * recovered remainder — building the {@code nf}/{@code nc}/{@code ng} item
	 * filter from the stack (translation key, custom name, enchantments),
	 * {@code pauseAndNotify}, closing the container screen and opening the
	 * {@code bz} editor with the filter — needs the absent editor/filter
	 * classes [U]; only the validation chain is translated.
	 */
	private void addRuleFromHovered(HandledScreen<?> screen) {
		Slot hovered = ((HandledScreenAccessor) screen).opengrim$getFocusedSlot();
		if (hovered == null || !hovered.hasStack() || hovered.getStack().isEmpty()) {
			return;
		}
	}

	/**
	 * Start path (dM.java:1011-1069 {@code anC(iy)}): {@code anD()}; the server
	 * address and market snapshot gates ({@code jd.bAk()},
	 * {@code rD.dlO().bqh().bqK/bqI}) and the notification/rule-store calls are
	 * absent [U]; the recovered {@code QvQJq} flip (dM.java:1060) is kept so the
	 * session state stays observable — labeled [G] because the config gates are
	 * skipped here.
	 */
	private void startSession() {
		MinecraftClient client = MinecraftClient.getInstance();
		resetEngine();
		running = true;
		// cN.XJ(message) (dM.java:669) — notifications absent [U].
		if (!(client.currentScreen instanceof HandledScreen)) {
			reopenMarket();
		}
	}

	/**
	 * Pause path (dM.java:1592-1646 {@code pauseSession}): {@code !QvQJq} →
	 * return; with a config loaded the original runs {@code cwz(ctx)} on every
	 * step and re-stores the rule ({@code dJbpX.cxS(iy)}), then clears
	 * {@code QvQJq} and resets the engine — the step/config calls are [N]/[U].
	 */
	private void pauseSession() {
		if (!running) {
			return;
		}
		running = false;
		resetEngine();
	}

	/**
	 * Pause with notification (dM.java:1480-1548 {@code pauseAndNotify}):
	 * {@code !QvQJq} → return, then {@code pauseSession()} and the
	 * {@code cN.XJ}/{@code cN.XQ} message — no notification system in the port
	 * [U].
	 */
	private void pauseAndNotify() {
		if (!running) {
			return;
		}
		pauseSession();
	}

	/**
	 * Reopen path (dM.java:1550-1590 {@code reopenMarket}): close the current
	 * screen when one is open, reset the engine, then {@code nO.cyH(true)}
	 * (engine [N]).
	 */
	private void reopenMarket() {
		MinecraftClient client = MinecraftClient.getInstance();
		if (client.player != null && client.currentScreen != null) {
			client.player.closeHandledScreen();
		}
		resetEngine();
	}

	/**
	 * Engine reset (dM.java:763-773 {@code anD}): {@code nO.cyq(); nR.czb();
	 * for (nH step : OgFsa) step.cwq();} — the native subsystems are not
	 * ported [N].
	 */
	private void resetEngine() {
	}

	/** Whether the engine is running (dM.java:1397-1399 {@code aoa}). */
	public boolean isRunning() {
		return running;
	}

	/** The original's {@code gg.bab()} in-game gate. */
	private static boolean isInGame(MinecraftClient client) {
		return client.player != null && client.world != null
				&& client.interactionManager != null && client.getNetworkHandler() != null;
	}
}
