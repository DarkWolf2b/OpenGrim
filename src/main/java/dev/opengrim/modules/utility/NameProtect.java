package dev.opengrim.modules.utility;

import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Optional;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import dev.opengrim.module.Module;
import dev.opengrim.module.ModuleCategory;
import dev.opengrim.settings.BoolSetting;
import dev.opengrim.settings.GroupSetting;
import dev.opengrim.settings.StringSetting;
import dev.opengrim.util.FriendsManager;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.network.ServerInfo;
import net.minecraft.scoreboard.Scoreboard;
import net.minecraft.scoreboard.ScoreboardDisplaySlot;
import net.minecraft.scoreboard.ScoreboardEntry;
import net.minecraft.scoreboard.ScoreboardObjective;
import net.minecraft.scoreboard.Team;
import net.minecraft.scoreboard.number.NumberFormat;
import net.minecraft.scoreboard.number.StyledNumberFormat;
import net.minecraft.text.MutableText;
import net.minecraft.text.Style;
import net.minecraft.text.Text;
import org.apache.commons.lang3.mutable.MutableInt;

/**
 * Name Protect (registry sixtwo.fS, module id 106, key 106, bind -999,
 * category {@code gh.KfAlY}): "Hides real player name".
 *
 * <p>Port of sixtwo.fS — settings constructor fS.java:82-144, rewrite entry
 * points aWR fS.java:308-358, aWS fS.java:364-1042, aWQ fS.java:1048-1236,
 * aWP fS.java:1242-1310, exported state aWT-aXa fS.java:1328-1506 (all line
 * numbers into analysis/decompiled/payload-decrypted/sixtwo/fS.java; control
 * flow re-read from bytecode, javap aWS 1288-2104, aWQ 2105-2289,
 * aWP 2290-2363, aWR 1236-1288). The class is a text-rewrite filter with
 * three channels — own player name, friend names and the server identity — and
 * has no listeners of its own: the original's call sites are in the native
 * render layer (handler spec analysis/specs/handlers/fS.md "Runtime model"),
 * so the exported methods below are the whole module.
 *
 * <p>Settings (construction order, fS.java:85-143):
 * <ul>
 *   <li>Group "Protect" ({@code cv lHFev}, fS.java:93)</li>
 *   <li>Bool "Name" ({@code cw JniNV}, fS.java:94, {@code .Tz()} = default on)</li>
 *   <li>Bool "Friends" ({@code cw serPq}, fS.java:103, default off)</li>
 *   <li>Bool "Server" ({@code cw VNukw}, fS.java:111, default off)</li>
 *   <li>String "Name" ({@code cy nVujd}, fS.java:112, max 64, "Protected")</li>
 *   <li>String "Friends Name" ({@code cy MSZPL}, fS.java:126, max 64, "Protected Friend")</li>
 *   <li>String "Server Name" ({@code cy IKiTs}, fS.java:139, max 64, "protected.gg")</li>
 * </ul>
 * The three text inputs are module-level settings (the original passes
 * {@code this}, not the group, to {@code cy}); visibility mirrors
 * {@code .Vf(...)} (fS.java:141-143) and is refreshed per tick (no
 * {@code .Vf} supplier exists in this setting API — SelfDestruct precedent).
 * The 64-character limit is not expressible in {@link StringSetting} (flagged,
 * same as the neighbouring fV/fN ports).
 *
 * <p>Every rewrite path shares the original's three-way gate: module enabled
 * ({@code RliRe}) AND the channel checkbox ({@code TC()}) AND the process-wide
 * bypass flag {@code qu.cmARD} (qu.java:15) being clear. The bypass flag's
 * writer is native (qu is a fully native class) and no rebuild component sets
 * it, so the third gate is inert here — documented gap, see the batch report.
 *
 * <p>Known unrecovered pieces carried as stand-ins (see javadoc on each):
 * {@code ru.djG}/{@code ru.djF} (shared fancy-text transforms, native class
 * key), {@code jd.dCIsP} (native-initialised sidebar-title pattern) and the
 * {@code mO} sidebar geometry accessors (native-applied mixin).
 */
public class NameProtect extends Module {
	/**
	 * Sidebar sort order, identical to vanilla InGameHud's
	 * SCOREBOARD_ENTRY_COMPARATOR (static init bytecode) — the original's
	 * {@code oHxpG} field, fS.java:140, exported via {@link #aXa()}.
	 */
	private final Comparator<ScoreboardEntry> scoreboardComparator = Comparator.comparing(ScoreboardEntry::value).reversed()
			.thenComparing(ScoreboardEntry::owner, String.CASE_INSENSITIVE_ORDER);

	private final GroupSetting protect = register(new GroupSetting("protect"));
	private final BoolSetting name = new BoolSetting("name", true);
	private final BoolSetting friends = new BoolSetting("friends", false);
	private final BoolSetting server = new BoolSetting("server", false);
	private final StringSetting nameAlias = register(new StringSetting("name_alias", "Protected"));
	private final StringSetting friendsAlias = register(new StringSetting("friends_name", "Protected Friend"));
	private final StringSetting serverAlias = register(new StringSetting("server_name", "protected.gg"));

	public NameProtect() {
		super("name_protect", "Name Protect", "Hides real player name", ModuleCategory.UTILITY);
		protect.add(name);
		protect.add(friends);
		protect.add(server);
		nameAlias.setVisible(name.getValue());
		friendsAlias.setVisible(friends.getValue());
		serverAlias.setVisible(server.getValue());
	}

	@Override
	public void onTick() {
		// nVujd.Vf(this.JniNV::TC) / MSZPL.Vf(this.serPq::TC) / IKiTs.Vf(this.VNukw::TC)
		// (fS.java:141-143).
		nameAlias.setVisible(name.getValue());
		friendsAlias.setVisible(friends.getValue());
		serverAlias.setVisible(server.getValue());
	}

	/**
	 * General text rewrite visiting every styled literal (sixtwo.fS#aWR,
	 * fS.java:308-358; bytecode 1236-1288): null text or a disabled module
	 * return the original instance (the original also returns early on the
	 * {@code qu.cmARD} bypass — inert here, class javadoc); otherwise every
	 * segment is rewritten through {@code aWQ(aWP(...))} and re-appended with
	 * its style (lambda {@code aXg}, javap 2424-2440).
	 */
	public Text aWR(Text text) {
		if (text == null || !isEnabled()) {
			return text;
		}
		MutableText mutableText = Text.empty();
		text.visit((style, str) -> {
			mutableText.append(Text.literal(aWQ(aWP(str))).setStyle(style));
			return Optional.empty();
		}, Style.EMPTY);
		return mutableText;
	}

	/**
	 * Sidebar/server-title rewrite (sixtwo.fS#aWS, fS.java:364-1042; bytecode
	 * 1288-2104). Gate: enabled AND Server checkbox (otherwise the original
	 * text is returned). Candidates: the title string, the current server
	 * address lower-cased and cut at the first {@code ':'} (the DES-hidden
	 * separator decoded from the class's own decryptor: seed 25326, key
	 * {@code IRkCy ^ 70130708169503}, index {@code seed ^ (key & 0x7FFF) ^
	 * 0x3DC5} → 58), and the configured Server Name.
	 *
	 * <p>Bail-out (javap 423-494) when the transformed title contains neither
	 * the address nor the host label. Geometry gate (javap 494-586): the text
	 * is only rewritten when the incoming x position equals the centred
	 * sidebar-title position within 1.5 px; afterwards the new width is
	 * re-centred (javap 1710-1763). Match engine (javap 588-1692): regex
	 * {@code Pattern.quote} alternatives compiled CASE_INSENSITIVE (flags 2),
	 * a per-style segment list fed by the visitor, word-boundary expansion
	 * over letters/digits and the recovered separator set (walk-back
	 * {@code '-' '.'}; walk-forward {@code '/' '?' '=' '&' '-' '_' '.'}), a
	 * trailing {@code '.'} trim, and one replacement character per matched
	 * width unit so the sidebar keeps its pixel width.
	 *
	 * <p>[U] The original also triggers on {@code jd.dCIsP} and prefixes the
	 * regex with {@code "(?:" + dCIsP.pattern() + ")"} (javap 354-421,
	 * 597-656; prefix decoded: seed 19383 → "(?:"). {@code jd.dCIsP} is set by
	 * jd's native initialiser (jd.java:23,35; no runtime record), so the
	 * alternative trigger is omitted here.
	 */
	public Text aWS(Text text, TextRenderer textRenderer, MutableInt xPosition) {
		if (!isEnabled() || !server.getValue()) {
			return text;
		}
		String title = text.getString();
		MinecraftClient client = MinecraftClient.getInstance();
		ServerInfo serverEntry = client.getCurrentServerEntry();
		String serverName = serverAlias.getValue();
		String fancyServerName = djF(serverName);
		String address = serverEntry == null ? "" : serverEntry.address.toLowerCase();
		String host;
		if (address.isEmpty()) {
			host = "";
		} else {
			int colon = address.indexOf(':');
			host = colon > -1 ? address.substring(0, colon) : address;
		}

		String normalisedTitle = djG(title).toLowerCase();
		boolean hasAddress = !address.isEmpty() && normalisedTitle.contains(address);
		boolean hasHost = !host.isEmpty() && normalisedTitle.contains(host);
		if (!hasAddress && !hasHost) {
			return text;
		}

		int oldWidth = textRenderer.getWidth(text);
		int pos = xPosition.intValue();
		int sidebarWidth = sidebarWidth(client);
		int sidebarX = sidebarX(client, sidebarWidth);
		float center = (float) sidebarX + (float) (sidebarWidth - oldWidth) / 2.0f;
		boolean centered = Math.abs((float) pos - center) <= 1.5f;

		StringBuilder regex = new StringBuilder();
		if (!address.isEmpty()) {
			regex.append(Pattern.quote(address));
		}
		if (!host.isEmpty() && !address.equals(host)) {
			if (!regex.isEmpty()) {
				regex.append("|");
			}
			regex.append(Pattern.quote(host));
		}
		Pattern pattern = Pattern.compile(regex.toString(), Pattern.CASE_INSENSITIVE);

		List<Segment> segments = new ArrayList<>();
		StringBuilder plain = new StringBuilder();
		StringBuilder transformed = new StringBuilder();
		MutableText result = Text.empty();
		text.visit((style, str) -> {
			addSegment(segments, plain, transformed, style, str);
			return Optional.empty();
		}, Style.EMPTY);

		while (true) {
			// A fresh matcher per iteration on the current (already truncated)
			// transformed buffer (bytecode: matcher created at 935 each pass).
			Matcher matcher = pattern.matcher(transformed);
			if (!matcher.find()) {
				break;
			}
			int start = matcher.start();
			int end = matcher.end();

			// Walk the match boundaries over word characters and the recovered
			// separator set (javap 969-1486).
			while (start > 0) {
				char c = transformed.charAt(start - 1);
				if (!Character.isLetterOrDigit(c) && c != '-' && c != '.') {
					break;
				}
				start--;
			}
			while (end < transformed.length()) {
				char c = transformed.charAt(end);
				if (c != '/' && c != '?' && c != '=' && c != '&' && !Character.isLetterOrDigit(c)
						&& c != '-' && c != '_' && c != '.') {
					break;
				}
				end++;
			}
			if (end > start && transformed.charAt(end - 1) == '.') {
				end--;
			}

			int matchLength = end - start;
			flushSegments(segments, result, start);
			// The plain span differs from the normalised span → the original
			// uses the fancy-styled replacement (ru.djF), else the plain one
			// (javap 1524-1569).
			boolean styled = !plain.substring(start, end).equals(transformed.substring(start, end));
			String replacement = styled ? fancyServerName : serverName;
			for (int i = 0; i < replacement.length(); i++) {
				double ratio = (double) i / (double) replacement.length();
				int styleOffset = Math.min((int) (ratio * (double) matchLength), matchLength - 1);
				result.append(Text.literal(String.valueOf(replacement.charAt(i))).setStyle(styleAtOffset(segments, styleOffset)));
			}
			consumeSegments(segments, matchLength);
			plain.delete(0, end);
			transformed.delete(0, end);
		}
		flushSegments(segments, result, plain.length());

		if (centered) {
			int newWidth = textRenderer.getWidth(result);
			xPosition.setValue((int) ((float) sidebarX + (float) (sidebarWidth - newWidth) / 2.0f));
		}
		return result;
	}

	/**
	 * Friend-name rewrite (sixtwo.fS#aWQ, fS.java:1048-1236; bytecode
	 * 2105-2289). Gate: enabled AND Friends checkbox. Detection pass over the
	 * friend list first — if no friend name occurs in the string, the input is
	 * returned unchanged (no allocation); otherwise each contained friend name
	 * is replaced by the "Friends Name" setting.
	 *
	 * <p>The original iterates {@code rD.dmc().ddE()} (the friend manager's
	 * ordered {@code mE} entries, qQ.class). This rebuild's shared friend store
	 * is {@link FriendsManager} (a set — order caveat for names that contain
	 * one another, documented in the batch report).
	 */
	public String aWQ(String string) {
		if (!isEnabled() || !friends.getValue()) {
			return string;
		}
		boolean found = false;
		for (String friend : FriendsManager.all()) {
			if (friend == null) {
				continue;
			}
			if (string.contains(friend)) {
				found = true;
				break;
			}
		}
		if (!found) {
			return string;
		}
		String replacement = friendsAlias.getValue();
		for (String friend : FriendsManager.all()) {
			if (friend == null) {
				continue;
			}
			if (string.contains(friend)) {
				string = string.replace(friend, replacement);
			}
		}
		return string;
	}

	/**
	 * Own-name rewrite (sixtwo.fS#aWP, fS.java:1242-1310; bytecode 2290-2363).
	 * Gate: enabled AND Name checkbox; replaces every occurrence of the session
	 * username with the "Name" setting.
	 */
	public String aWP(String string) {
		if (!isEnabled() || !name.getValue()) {
			return string;
		}
		String username = MinecraftClient.getInstance().getSession().getUsername();
		if (!string.contains(username)) {
			return string;
		}
		return string.replace(username, nameAlias.getValue());
	}

	public GroupSetting aWT() {
		return protect;
	}

	public BoolSetting aWU() {
		return name;
	}

	public BoolSetting aWV() {
		return friends;
	}

	public BoolSetting aWW() {
		return server;
	}

	public StringSetting aWX() {
		return nameAlias;
	}

	public StringSetting aWY() {
		return friendsAlias;
	}

	public StringSetting aWZ() {
		return serverAlias;
	}

	public Comparator<ScoreboardEntry> aXa() {
		return scoreboardComparator;
	}

	// ------------------------------------------------------------------
	// Text-rebuild helpers (fS$sV segment + aXf/aXe/aXd/aXc lambdas).
	// ------------------------------------------------------------------

	/**
	 * Visitor body {@code aXf} (fS.java:1613-1692; bytecode 3360-3455): skips
	 * null/empty segments, merges into the previous segment when the style is
	 * equal, and feeds both the plain and the normalised buffers.
	 */
	private static void addSegment(List<Segment> segments, StringBuilder plain, StringBuilder transformed, Style style,
			String str) {
		if (str == null || str.isEmpty()) {
			return;
		}
		if (!segments.isEmpty() && segments.getLast().style.equals(style)) {
			segments.getLast().text.append(str);
		} else {
			Segment segment = new Segment(style);
			segment.text.append(str);
			segments.add(segment);
		}
		plain.append(str);
		transformed.append(djG(str));
	}

	/** Flush helper {@code aXe} (fS.java:1459-1505; bytecode 3108-3185). */
	private static void flushSegments(List<Segment> segments, MutableText result, int count) {
		int remaining = count;
		while (remaining > 0 && !segments.isEmpty()) {
			Segment segment = segments.getFirst();
			int take = Math.min(remaining, segment.text.length());
			result.append(Text.literal(segment.text.substring(0, take)).setStyle(segment.style));
			segment.text.delete(0, take);
			remaining -= take;
			if (segment.text.length() == 0) {
				segments.removeFirst();
			}
		}
	}

	/** Consume helper {@code aXd} (fS.java:1510-1555; bytecode 3192-3257). */
	private static void consumeSegments(List<Segment> segments, int count) {
		int remaining = count;
		while (remaining > 0 && !segments.isEmpty()) {
			Segment segment = segments.getFirst();
			int take = Math.min(remaining, segment.text.length());
			segment.text.delete(0, take);
			remaining -= take;
			if (segment.text.length() == 0) {
				segments.removeFirst();
			}
		}
	}

	/** Style lookup {@code aXc} (fS.java:1556-1592; bytecode 3258-3307). */
	private static Style styleAtOffset(List<Segment> segments, int offset) {
		int passed = 0;
		for (Segment segment : segments) {
			if (offset < passed + segment.text.length()) {
				return segment.style;
			}
			passed += segment.text.length();
		}
		return Style.EMPTY;
	}

	/** Segment {@code fS$sV} (fS$sV bytecode: style + text buffer, live length). */
	private static final class Segment {
		final Style style;
		final StringBuilder text = new StringBuilder();

		Segment(Style style) {
			this.style = style;
		}
	}

	/**
	 * [U] Stand-in for {@code ru.djG} (payload-named/sixtwo/ru.java:190-281):
	 * the shared fancy-text normalisation (per-character maps sRJBt/VkWRj built
	 * from {@code ru.djO} constants whose class key is native — ru.java:40
	 * {@code gb.aYR} — and which never ran in the 2026-10-17 trace). Carried as
	 * the identity: the transform is per-character in the original, so match
	 * indices and the plain/normalised span comparison stay 1:1 for plain
	 * (non-stylised) titles.
	 */
	private static String djG(String string) {
		return string;
	}

	/**
	 * [U] Stand-in for {@code ru.djF} (ru.java:283-342): the fancy-styled
	 * variant of the Server Name used when the matched span differs from the
	 * normalised span. Identity here (see {@link #djG}).
	 */
	private static String djF(String string) {
		return string;
	}

	// ------------------------------------------------------------------
	// Sidebar geometry (the original's mO accessors).
	// ------------------------------------------------------------------

	/**
	 * Sidebar left x — the original reads
	 * {@code ((mO) rD.dlmvG.inGameHud).getSidebarX()} (fS.java:619-621; mO.java:7).
	 * The mO implementor is applied by the native loader and is not in the
	 * recovered corpora, so the value is computed with vanilla's own sidebar
	 * layout (InGameHud method_1757 bytecode: {@code x = scaledWidth - width - 3}).
	 */
	private int sidebarX(MinecraftClient client, int sidebarWidth) {
		return client.getWindow().getScaledWidth() - sidebarWidth - 3;
	}

	/**
	 * Sidebar box width — {@code getSidebarWidth()} (fS.java:623-625; mO.java:9),
	 * computed as in vanilla InGameHud method_1757: the maximum of the title
	 * width and each of the (at most 15, non-hidden, comparator-sorted) entry
	 * widths, where an entry contributes {@code width(name) + (scoreWidth > 0 ?
	 * width(":") + scoreWidth : 0)}.
	 */
	private int sidebarWidth(MinecraftClient client) {
		if (client.world == null) {
			return 0;
		}
		Scoreboard scoreboard = client.world.getScoreboard();
		ScoreboardObjective objective = scoreboard.getObjectiveForSlot(ScoreboardDisplaySlot.SIDEBAR);
		if (objective == null) {
			return 0;
		}
		TextRenderer textRenderer = client.textRenderer;
		int width = textRenderer.getWidth(objective.getDisplayName());
		int colonWidth = textRenderer.getWidth(":");
		NumberFormat numberFormat = objective.getNumberFormatOr(StyledNumberFormat.RED);
		List<ScoreboardEntry> entries = new ArrayList<>(scoreboard.getScoreboardEntries(objective));
		entries.removeIf(ScoreboardEntry::hidden);
		entries.sort(scoreboardComparator);
		int limit = Math.min(15, entries.size());
		for (int i = 0; i < limit; i++) {
			ScoreboardEntry entry = entries.get(i);
			Team team = scoreboard.getScoreHolderTeam(entry.owner());
			int nameWidth = textRenderer.getWidth(Team.decorateName(team, entry.name()));
			int scoreWidth = textRenderer.getWidth(entry.formatted(numberFormat));
			width = Math.max(width, nameWidth + (scoreWidth > 0 ? colonWidth + scoreWidth : 0));
		}
		return width;
	}
}
