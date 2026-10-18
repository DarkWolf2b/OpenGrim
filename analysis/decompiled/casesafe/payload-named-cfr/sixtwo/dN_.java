/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.cz;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gz;
import sixtwo.hG;
import sixtwo.mr;

public class dN
extends gg {
    private final cz mOyJK;
    private static long YAFsA;
    private static long[] ievSW;
    private static Integer[] xzqVc;
    private static Map NTPwK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _086a0a1adaee57dcf039f55a4eea9fca();

    public dN() {
        long l2 = YAFsA ^ 0x7242F6FF0EE6L;
        super(gf.aZL((int)dN.aor("j", (int)30416, (long)(0x342990A50D5B525FL ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dN.aor("j", (int)30271, (long)(0x18768510CC5652B1L ^ l2))];
        nArray[0] = (int)dN.aor("j", (int)3636, (long)(0x67EC887EDD46AAAFL ^ l2));
        nArray[1] = (int)dN.aor("j", (int)17503, (long)(0x4416462FA8A0E0C6L ^ l2));
        nArray[2] = (int)dN.aor("j", (int)7630, (long)(0x637F10B413A43959L ^ l2));
        nArray[3] = (int)dN.aor("j", (int)22058, (long)(0x7F4CAABE09A2F2BBL ^ l2));
        nArray[4] = (int)dN.aor("j", (int)16130, (long)(0x433826CC27799B9CL ^ l2));
        nArray[5] = (int)dN.aor("j", (int)363, (long)(0x28B0B3FF500525FFL ^ l2));
        nArray[dN.aor("j", (int)2554, (long)(0x6AE9FECF2BA22D69L ^ l2))] = (int)dN.aor("j", (int)31255, (long)(0x5A30AA9D875DE8FL ^ l2));
        nArray[dN.aor("j", (int)23210, (long)(0x6F632380844EFE37L ^ l2))] = (int)dN.aor("j", (int)7263, (long)(0x16DE4C8717A8B8C5L ^ l2));
        nArray[dN.aor("j", (int)25504, (long)(0x23F72E91B4D5473FL ^ l2))] = (int)dN.aor("j", (int)17424, (long)(0x23D42D74D044E080L ^ l2));
        nArray[dN.aor("j", (int)13158, (long)(0x2493458BF49117F4L ^ l2))] = (int)dN.aor("j", (int)8086, (long)(0x4C1E02B4C4A5BB0AL ^ l2));
        nArray[dN.aor("j", (int)15066, (long)(0x84060D5F54A9E57L ^ l2))] = (int)dN.aor("j", (int)23605, (long)(0x7EC49F1E9C1178B9L ^ l2));
        nArray[dN.aor("j", (int)14184, (long)(0x44A56C064AFC13FEL ^ l2))] = (int)dN.aor("j", (int)3739, (long)(0x59D1C542730CAA0EL ^ l2));
        this.mOyJK = new cz(this, mr.clS(nArray));
    }

    static {
        Loader.doInit(dN.class);
        dN._086a0a1adaee57dcf039f55a4eea9fca();
    }

    private static native CallSite aor(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aon(gz var1);

    private static native MatchException aoo(MatchException var0);

    private static native int aop(int var0, long var1);

    private static native int aoq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

