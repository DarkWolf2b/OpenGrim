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

public final class li$uu
implements rp {
    private int OHOtC;
    private int peGaU;
    private float RkcnG;
    private static long LDJil;
    private static String[] PTYcM;
    private static String[] JluNc;
    private static Map Aqeil;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _2ffd798cba1d21081c46ca8b6c3609bc();

    static {
        Loader.doInit(li$uu.class);
        li$uu._2ffd798cba1d21081c46ca8b6c3609bc();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    public native int duM();

    public native int duL();

    private static native CallSite duR(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String duO(byte[] var0);

    public native float duN();

    private static native Object duQ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String duP(int var0, long var1);
}

