package dev.opengrim.modules.utility;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ThreadLocalRandom;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.DoubleSetting;
import dev.opengrim.settings.StringSetting;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.world.ClientWorld;

/**
 * Spammer (registry sixtwo.dE, key 146, bind -999, category gh.qBzlZ):
 * "Spams specified messages in chat".
 *
 * <p>Specification and evidence:
 * <ul>
 *   <li>Primary constructor &amp; settings wiring: analysis/decompiled/payload-decrypted/sixtwo/dE.java:60-307</li>
 *   <li>CFR decompile &amp; listener declarations: analysis/decompiled/payload-named-cfr/sixtwo/dE.java:60-307, 318 (akH(gM var1) tick loop)</li>
 *   <li>Handler &amp; pool analysis: analysis/specs/handlers/dE.md:65-131 (POOL 0x94a0,0x1a6:
 *       akM message list builder, akO picker, akN splitter, akP anti-spam decorator, akQ submit)</li>
 *   <li>Registry: analysis/specs/modules/dE.md:1-18</li>
 * </ul>
 *
 * <p>Settings hierarchy:
 * <ul>
 *   <li>Message Count (cC DoubleSetting): "message_count", step 1.0, min 1.0, max 5.0, default 1.0</li>
 *   <li>Message 1 (cy StringSetting): "message_1", max 256, default "Hey"</li>
 *   <li>Message 2 (cy StringSetting): "message_2", max 256, default ""</li>
 *   <li>Message 3 (cy StringSetting): "message_3", max 256, default ""</li>
 *   <li>Message 4 (cy StringSetting): "message_4", max 256, default ""</li>
 *   <li>Message 5 (cy StringSetting): "message_5", max 256, default ""</li>
 *   <li>Delay (cC DoubleSetting): "delay", step 0.1, min 0.1, max 60.0, default 1.0, suffix " sec"</li>
 *   <li>Disable On Leave (cJ BoolSetting): "disable_on_leave", default true (.WE(true))</li>
 *   <li>Disable On Disconnect (cJ BoolSetting): "disable_on_disconnect", default true (.WE(true))</li>
 *   <li>Randomize (cJ BoolSetting): "randomize", default false (.WE(false))</li>
 *   <li>Auto Split Messages (cJ BoolSetting): "auto_split_messages", default false (.WE(false))</li>
 *   <li>Split Length (cC DoubleSetting): "split_length", step 1.0, min 1.0, max 256.0, default 256.0, suffix " chars"</li>
 *   <li>Split Delay (cC DoubleSetting): "split_delay", step 0.1, min 0.0, max 10.0, default 1.0, suffix " sec"</li>
 *   <li>Bypass Anti Spam (cJ BoolSetting): "bypass_anti_spam", default false (.WE(false))</li>
 *   <li>Include Uppercase Characters (cJ BoolSetting): "include_uppercase_characters", default true (.WE(true))</li>
 *   <li>Length (cC DoubleSetting): "length", step 1.0, min 1.0, max 256.0, default 16.0, suffix " chars"</li>
 * </ul>
 *
 * <p>Visibility wiring (dE.java:296-299): Split Length / Split Delay ← Auto
 * Split Messages; Include Uppercase Characters / Length ← Bypass Anti Spam;
 * Message 2..5 ← Message Count ≥ k (high-probability guess for the native
 * suppliers akU/akT/akS/akR wired in dE.java:292-295).
 */
public class Spammer extends Module {
	private static final String LOWER_ALPHABET = "abcdefghijklmnopqrstuvwxyz0123456789";
	private static final String FULL_ALPHABET = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	private final DoubleSetting messageCount = register(new DoubleSetting("message_count", 1.0, 1.0, 5.0, 1.0, null));
	private final StringSetting message1 = register(new StringSetting("message_1", "Hey"));
	private final StringSetting message2 = register(new StringSetting("message_2", ""));
	private final StringSetting message3 = register(new StringSetting("message_3", ""));
	private final StringSetting message4 = register(new StringSetting("message_4", ""));
	private final StringSetting message5 = register(new StringSetting("message_5", ""));
	private final DoubleSetting delay = register(new DoubleSetting("delay", 0.1, 0.1, 60.0, 1.0, " sec"));
	private final BoolSetting disableOnLeave = register(new BoolSetting("disable_on_leave", true));
	private final BoolSetting disableOnDisconnect = register(new BoolSetting("disable_on_disconnect", true));
	private final BoolSetting randomize = register(new BoolSetting("randomize", false));
	private final BoolSetting autoSplitMessages = register(new BoolSetting("auto_split_messages", false));
	private final DoubleSetting splitLength = register(new DoubleSetting("split_length", 1.0, 1.0, 256.0, 256.0, " chars"));
	private final DoubleSetting splitDelay = register(new DoubleSetting("split_delay", 0.1, 0.0, 10.0, 1.0, " sec"));
	private final BoolSetting bypassAntiSpam = register(new BoolSetting("bypass_anti_spam", false));
	private final BoolSetting includeUppercaseCharacters = register(new BoolSetting("include_uppercase_characters", true));
	private final DoubleSetting length = register(new DoubleSetting("length", 1.0, 1.0, 256.0, 16.0, " chars"));

	private ClientWorld lastWorld;
	private long nextSendAt;
	private int eyNYv;
	private final List<PendingChunk> pendingChunks = new ArrayList<>();

	private record PendingChunk(String text, long sendAt) {
	}

	public Spammer() {
		super("spammer", "Spammer", "Spams specified messages in chat", ModuleCategory.PLAYER);
	}

	@Override
	public void onEnable() {
		pendingChunks.clear();
		eyNYv = 0;
		nextSendAt = 0L;
		lastWorld = null;
	}

	@Override
	public void onDisable() {
		pendingChunks.clear();
		eyNYv = 0;
		nextSendAt = 0L;
		lastWorld = null;
	}

	/**
	 * Per-tick spam iteration mirroring sixtwo.dE#akH(gM).
	 */
	@Override
	public void onTick() {
		// Visibility wiring, dE.java:296-299 + message-count suppliers dE.java:292-295.
		splitLength.setVisible(autoSplitMessages.getValue());
		splitDelay.setVisible(autoSplitMessages.getValue());
		includeUppercaseCharacters.setVisible(bypassAntiSpam.getValue());
		length.setVisible(bypassAntiSpam.getValue());
		int count = Math.max(1, Math.min(5, messageCount.getValue().intValue()));
		message2.setVisible(count >= 2);
		message3.setVisible(count >= 3);
		message4.setVisible(count >= 4);
		message5.setVisible(count >= 5);

		MinecraftClient client = MinecraftClient.getInstance();
		ClientPlayerEntity player = client.player;

		if (client.world == null || player == null) {
			if (disableOnDisconnect.getValue()) {
				setEnabled(false);
			}
			return;
		}

		if (lastWorld != null && lastWorld != client.world && disableOnLeave.getValue()) {
			setEnabled(false);
			return;
		}
		lastWorld = client.world;

		sendPendingChunks(player);

		if (player.age >= nextSendAt) {
			long intervalTicks = Math.max(1L, (long) (delay.getValue().doubleValue() * 20.0));
			nextSendAt = player.age + intervalTicks;

			String candidate = pickMessage();
			if (!candidate.isEmpty()) {
				String decorated = decorate(candidate);
				submit(player, decorated);
			}
		}
	}

	/**
	 * Gathers configured candidate messages up to Message Count and picks the next message.
	 * Mirrors sixtwo.dE#akM and sixtwo.dE#akO.
	 */
	private String pickMessage() {
		List<String> pool = new ArrayList<>();
		String[] inputs = {
				message1.getValue(),
				message2.getValue(),
				message3.getValue(),
				message4.getValue(),
				message5.getValue()
		};

		int count = Math.max(1, Math.min(5, messageCount.getValue().intValue()));
		for (int i = 0; i < count; i++) {
			String text = inputs[i];
			if (text != null && !text.isEmpty()) {
				pool.add(text);
			}
		}

		if (pool.isEmpty()) {
			return "";
		}

		if (randomize.getValue()) {
			return pool.get(ThreadLocalRandom.current().nextInt(pool.size()));
		}

		String chosen = pool.get(eyNYv % pool.size());
		eyNYv = (eyNYv + 1) % pool.size();
		return chosen;
	}

	/**
	 * Generates random suffix for anti-spam bypass mirroring sixtwo.dE#akP.
	 */
	private String decorate(String message) {
		if (!bypassAntiSpam.getValue()) {
			return message;
		}

		String alphabet = includeUppercaseCharacters.getValue() ? FULL_ALPHABET : LOWER_ALPHABET;
		int suffixLength = Math.max(1, length.getValue().intValue());
		StringBuilder suffix = new StringBuilder(" ");
		ThreadLocalRandom random = ThreadLocalRandom.current();

		for (int i = 0; i < suffixLength; i++) {
			suffix.append(alphabet.charAt(random.nextInt(alphabet.length())));
		}

		return message + suffix.toString();
	}

	/**
	 * Message chunking and delivery mirroring sixtwo.dE#akN and sixtwo.dE#akQ.
	 */
	private void submit(ClientPlayerEntity player, String message) {
		int maxChunk = Math.max(1, splitLength.getValue().intValue());

		if (autoSplitMessages.getValue() && message.length() > maxChunk) {
			long gapTicks = Math.max(1L, (long) (splitDelay.getValue().doubleValue() * 20.0));
			for (int offset = 0; offset < message.length(); offset += maxChunk) {
				String chunk = message.substring(offset, Math.min(offset + maxChunk, message.length()));
				pendingChunks.add(new PendingChunk(chunk, player.age + (long) pendingChunks.size() * gapTicks));
			}
		} else {
			player.networkHandler.sendChatMessage(message);
		}
	}

	private void sendPendingChunks(ClientPlayerEntity player) {
		var iterator = pendingChunks.iterator();
		while (iterator.hasNext()) {
			PendingChunk chunk = iterator.next();
			if (player.age >= chunk.sendAt()) {
				player.networkHandler.sendChatMessage(chunk.text());
				iterator.remove();
			}
		}
	}
}