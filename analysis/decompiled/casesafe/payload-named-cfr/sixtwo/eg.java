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
import sixtwo.cJ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class eg
extends gg {
    private final cJ DdQgn;
    private final cJ WgBhf;
    private static long uaZhk;
    private static long[] xbZpE;
    private static Integer[] ZWlNe;
    private static Map hTouB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eg() {
        long l2 = uaZhk ^ 0x33DF6D7A3E51L;
        super(gf.aZL((int)eg.asx("a", (int)6176, (long)(0x5F9FBBBC5EAF231EL ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[eg.asx("a", (int)14578, (long)(0x55E81802FEE303C0L ^ l2))];
        nArray[0] = (int)eg.asx("a", (int)21596, (long)(0x35A71EE3A6F16F6FL ^ l2));
        nArray[1] = (int)eg.asx("a", (int)9418, (long)(0x705D14CA642B9FF3L ^ l2));
        nArray[2] = (int)eg.asx("a", (int)1121, (long)(0x5387C425014FBF5BL ^ l2));
        nArray[3] = (int)eg.asx("a", (int)12475, (long)(0x58C2B2819AA8B84L ^ l2));
        nArray[4] = (int)eg.asx("a", (int)3369, (long)(0x41034214AC72B614L ^ l2));
        nArray[5] = (int)eg.asx("a", (int)4628, (long)(0x2531DB84879B292CL ^ l2));
        this.DdQgn = new cJ(this, mr.clS(nArray)).WE(true);
        this.WgBhf = new cJ(this, mr.clS(new int[]{(int)eg.asx("a", (int)21900, (long)(0x599FDD3F503F6EBCL ^ l2)), (int)eg.asx("a", (int)28580, (long)(0x5B90DA2F032BD495L ^ l2)), (int)eg.asx("a", (int)23085, (long)(0x3DD53C73F3D4E111L ^ l2)), (int)eg.asx("a", (int)19682, (long)(0x1CE91DE4DA2F7D9L ^ l2))})).WE(false);
    }

    static {
        Loader.doInit(eg.class);
        eg._bcedad5687c09f069cce1f935fb3cfb5();
    }

    private static native void _bcedad5687c09f069cce1f935fb3cfb5();

    public native cJ ast();

    public native cJ asu();

    private static native int asw(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int asv(int var0, long var1);

    private static native CallSite asx(MethodHandles.Lookup var0, String var1, MethodType var2);
}

