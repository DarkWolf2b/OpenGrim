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
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.li$ut;
import sixtwo.li$uu;
import sixtwo.li$uv;
import sixtwo.li$ux;
import sixtwo.rp;

public final class li
implements rp {
    private li$ux jrqOK;
    private ut YvJxf;
    private List<li$uv> paGtU;
    private List<uu> rPcli;
    private static long FRMBe;
    private static String[] BaEbn;
    private static String[] FbSiY;
    private static Map NKduB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(li.class);
        li._bb0a58328670fec40d548b8c03abff75();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    public native List<li$uv> bYm();

    public native List<uu> bYn();

    private static native MatchException bYo(MatchException var0);

    private static native String bYp(byte[] var0);

    private static native String bYq(int var0, long var1);

    private static native Object bYr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bYs(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _bb0a58328670fec40d548b8c03abff75();

    public native li$ux bYk();

    public native ut bYl();
}

