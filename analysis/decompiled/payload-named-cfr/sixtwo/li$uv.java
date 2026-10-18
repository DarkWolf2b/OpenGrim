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
import sixtwo.li$uw;
import sixtwo.rp;

public final class li$uv
implements rp {
    private int mPRav;
    private float vVHVn;
    private li$uw FuKuf;
    private li$uw bfrsA;
    private static long oPGtV;
    private static String[] PLpAY;
    private static String[] KRhcN;
    private static Map CVqKN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(li$uv.class);
        li$uv._3bd9ba8664a6ba24463b4a882f736425();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native void _3bd9ba8664a6ba24463b4a882f736425();

    private static native CallSite dva(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native float duT();

    public native li$uw duU();

    private static native Object duZ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException duW(MatchException var0);

    public native li$uw duV();

    private static native String duY(int var0, long var1);

    public native int duS();

    private static native String duX(byte[] var0);
}

