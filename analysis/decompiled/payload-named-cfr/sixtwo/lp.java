/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.Map;
import native.Loader;
import sixtwo.iS;
import sixtwo.li;
import sixtwo.ll;
import sixtwo.lq;

public final class lp {
    private final byte[] JaLEf;
    private final li wvwxF;
    private final Map<Integer, ll> Weixs;
    private final Map<Integer, Map<Integer, Float>> walbu;
    private static long jtBoX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lp(byte[] byArray, li li2, Map<Integer, ll> map, Map<Integer, Map<Integer, Float>> map2) {
        long l2 = jtBoX ^ 0x413BF57C53CL;
        int n2 = lq.cay();
        int n3 = n2;
        try {
            this.JaLEf = byArray;
            this.wvwxF = li2;
            this.Weixs = map;
            this.walbu = map2;
            if (n3 != 0) {
                iS.bwK("USpwWb");
            }
        }
        catch (MatchException matchException) {
            throw lp.can(matchException);
        }
    }

    static {
        Loader.doInit(lp.class);
        lp._305a70d79064b1237a33bfc3ecb3e346();
    }

    public native Map<Integer, ll> cal();

    public native li cak();

    public native byte[] caj();

    public native Map<Integer, Map<Integer, Float>> cam();

    private static native MatchException can(MatchException var0);

    private static native void _305a70d79064b1237a33bfc3ecb3e346();
}

