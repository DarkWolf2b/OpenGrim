/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.util.Identifier;

public final class rs$we
extends Enum<rs$we> {
    public static /* enum */ rs$we vefaf;
    public static /* enum */ rs$we BeeKi;
    public static /* enum */ rs$we AqXBm;
    public static /* enum */ rs$we hTsSe;
    public static /* enum */ rs$we SATwu;
    public static /* enum */ rs$we WGTLq;
    private final Identifier hZpEN;
    private final Identifier etCph;
    private final Identifier GEKwL;
    private final Identifier zrJSu;
    private static rs$we[] PRMBh;
    private static long OKbNr;
    private static long kaYIY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private rs$we(Identifier identifier, Identifier identifier2, Identifier identifier3, Identifier identifier4) {
        this.hZpEN = identifier;
        this.etCph = identifier2;
        this.GEKwL = identifier3;
        this.zrJSu = identifier4;
    }

    static {
        Loader.doInit(rs$we.class);
        rs$we._171f123bc2ea189f3b1c71284e711efe();
    }

    public static native rs$we[] values();

    public static native rs$we valueOf(String var0);

    private static native void _171f123bc2ea189f3b1c71284e711efe();

    private static native MatchException dyM(MatchException var0);

    private static native String dyN(byte[] var0);

    private static native rs$we[] dyL();

    public static native rs$we dyK(PlayerLikeEntity var0);

    public native Identifier dyJ(boolean var1, boolean var2);
}

