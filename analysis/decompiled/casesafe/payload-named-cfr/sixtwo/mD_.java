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

public class mD
implements rp {
    public String xjXts;
    public String jkIGf;
    public String TQhmu;
    public String KAYDh;
    public String KUwEj;
    public int iEFUz;
    private static long eNHaL;
    private static String[] ZAwkz;
    private static String[] DuUzh;
    private static Map wAFuY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(mD.class);
        mD._1d94db85ccab5c13812e40ab2a4b4f49();
    }

    public native String toString();

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native void _1d94db85ccab5c13812e40ab2a4b4f49();

    private static native String cnx(byte[] var0);

    private static native String cny(int var0, long var1);

    private static native Object cnz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException cnw(MatchException var0);

    private static native CallSite cnA(MethodHandles.Lookup var0, String var1, MethodType var2);
}

