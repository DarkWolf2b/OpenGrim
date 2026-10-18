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

public class qn$vM
implements rp {
    public String hbWex;
    public String dWnPF;
    public String cCUes;
    public String VPaBx;
    private static long uvBnM;
    private static String[] WosLs;
    private static String[] zKouh;
    private static Map SeXkI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(qn$vM.class);
        qn$vM._787c72ff6a54b403b06eb3b4d204172b();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native String dyh(byte[] var0);

    private static native String dyi(int var0, long var1);

    private static native MatchException dyg(MatchException var0);

    private static native CallSite dyk(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object dyj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _787c72ff6a54b403b06eb3b4d204172b();
}

