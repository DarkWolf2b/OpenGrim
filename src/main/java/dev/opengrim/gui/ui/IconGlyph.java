package dev.opengrim.gui.ui;

/**
 * Port of sixtwo.lf — the icon glyph enum (67 constants, order-preserving).
 *
 * <p>Recovered 1:1 on 2026-10-13 by running the original {@code lf} class
 * against its native decryptor (glyph chars are DES-encrypted in the class
 * pool and decrypted through {@code lf.bXW} at {@code <clinit>}; see
 * {@code win/tmp/GlyphDump.java} and PARITY-DIVERGENCES "GUI port" for the
 * procedure). Every constant carries the custom icon-font codepoint returned
 * by {@code lf.bXR()} ({@code 59905 + ordinal}) and the semantic enum name
 * from the decrypted constructor call. The {@code parity} comment is the
 * obfuscated static-field name in the decompiled {@code sixtwo.lf}
 * ({@code win/gui-src/sixtwo_19.java}); e.g. the ClickGUI search field
 * builder uses {@code lf.blMVg} = {@link #IMPORT} (ordinal 31).
 *
 * <p>parity: native-blocked rendering — the icon font itself is packed inside
 * the payload DLL (no font asset in the payload jar), so these codepoints
 * cannot be drawn with the vanilla text renderer. Call sites in this port
 * keep text stand-ins; the enum is the exact data port.
 */
public enum IconGlyph {
	/* parity: sixtwo.lf.knMYk */ AIRPLANE(59905),
	/* parity: lf.edgju */ ARRAYLIST(59906),
	/* parity: lf.PIPQj */ ARROW_DOWN_TO_LINE(59907),
	/* parity: lf.hzyQG */ ARROW_UP(59908),
	/* parity: lf.bxIAY */ ARROW_UP_TO_LINE(59909),
	/* parity: lf.KWZHV */ ARROW_UTURN_BACKWARD(59910),
	/* parity: lf.RJfxY */ BACKWARD(59911),
	/* parity: lf.YIqMP */ BELL(59912),
	/* parity: lf.qdcKS */ BELLIOS(59913),
	/* parity: lf.lzwua */ CART(59914),
	/* parity: lf.PWkZi */ CHART(59915),
	/* parity: lf.gamnD */ CHECK(59916),
	/* parity: lf.qarUs */ CHEVRON_DOWN_BOLD(59917),
	/* parity: lf.UrjZi */ CHEVRON_RIGHT_BOLD(59918),
	/* parity: lf.KQgFw */ CHEVRON_DOWN(59919),
	/* parity: lf.BSuOE */ CLOUD_DOWNLOAD(59920),
	/* parity: lf.znKtW */ COOLDOWNS(59921),
	/* parity: lf.DhZcm */ COPY(59922),
	/* parity: lf.PqdjL */ CROSS(59923),
	/* parity: lf.EQqYg */ DISLIKE(59924),
	/* parity: lf.freyP */ DOLLARSIGN(59925),
	/* parity: lf.ZEjXc */ DPISCALE(59926),
	/* parity: lf.cuxpa */ EDIT(59927),
	/* parity: lf.DyMwJ */ EFFECTS(59928),
	/* parity: lf.OxOQo */ ELLIPSIS_RECTANGLE_MEDIUM(59929),
	/* parity: lf.RZbxd */ ERROR(59930),
	/* parity: lf.xesLS */ FORWARD(59931),
	/* parity: lf.JIteU */ GEAR(59932),
	/* parity: lf.JliAr */ GLOBE(59933),
	/* parity: lf.dVqHP */ GRID(59934),
	/* parity: lf.DzxCD */ HIDE(59935),
	/* parity: lf.blMVg */ IMPORT(59936),
	/* parity: lf.Blydk */ INSTANCE(59937),
	/* parity: lf.wmWhC */ KEYBINDS(59938),
	/* parity: lf.zNsnc */ LIKE(59939),
	/* parity: lf.XANQE */ LIST_BULLET_RECTANGLE(59940),
	/* parity: lf.TMFYi */ LIST_NUMBER(59941),
	/* parity: lf.GHxLj */ LOCATION(59942),
	/* parity: lf.RUgvb */ LOCK(59943),
	/* parity: lf.kRmbJ */ MAGNIFYINGGLASS(59944),
	/* parity: lf.MZXpZ */ MUSIC(59945),
	/* parity: lf.hYjxy */ NOSIGN(59946),
	/* parity: lf.PDmLl */ PARAGRAPHSIGN(59947),
	/* parity: lf.wJqgL */ PAUSE_FILL(59948),
	/* parity: lf.OhKMZ */ PERSON_FILL_CHECKMARK(59949),
	/* parity: lf.pCKbJ */ PERSON_FILL_XMARK(59950),
	/* parity: lf.Hyozq */ PIPETTE(59951),
	/* parity: lf.bLlHc */ PLAY_FILL(59952),
	/* parity: lf.ucWHb */ PLUS(59953),
	/* parity: lf.KqyTI */ POINTER(59954),
	/* parity: lf.MiBKQ */ POLICE(59955),
	/* parity: lf.QZzTA */ REPEAT_1(59956),
	/* parity: lf.PzeJx */ REPEAT(59957),
	/* parity: lf.IcQeZ */ SCRIBBLE_VARIABLE(59958),
	/* parity: lf.NCCOy */ SHARE(59959),
	/* parity: lf.tCZuD */ SHIELD(59960),
	/* parity: lf.XzjRK */ SHOW(59961),
	/* parity: lf.xHVej */ SLIDER_HORIZONTAL(59962),
	/* parity: lf.ScQgw */ SPARKLES(59963),
	/* parity: lf.fEKkJ */ STACK(59964),
	/* parity: lf.jfwAa */ STAR(59965),
	/* parity: lf.dBvvZ */ STAR_NONFILL(59966),
	/* parity: lf.ENioA */ TARGET(59967),
	/* parity: lf.wOqdh */ TEXT_PAGE(59968),
	/* parity: lf.EqCfG */ TEXTFORMAT(59969),
	/* parity: lf.KuBau */ TEXT_DOCUMENT(59970),
	/* parity: lf.JHGge */ TRASH(59971);

	/** The glyph codepoint in the original custom icon font (lf.bXR()). */
	private final int codepoint;

	IconGlyph(int codepoint) {
		this.codepoint = codepoint;
	}

	/** lf.bXR(): the char in the original icon font (native-blocked render). */
	public char codepoint() {
		return (char) codepoint;
	}
}