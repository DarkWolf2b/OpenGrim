/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.rp;

public final class li$ux
implements rp {
    private float zyFki;
    private float DoUKn;
    private float LTFKm;
    private static long eIyXe;
    private static String[] OGLuw;
    private static String[] aGqsB;
    private static Map mREUQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(li$ux.class);
        li$ux._d62d9ba3b29fc28df4edc7de2b8c4e04();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    public native float dvl();

    public native float dvj();

    private static native CallSite dvp(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String dvm(byte[] var0);

    private static native Object dvo(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String dvn(int var0, long var1);

    public native float dvk();

    private static native void _d62d9ba3b29fc28df4edc7de2b8c4e04();
}

