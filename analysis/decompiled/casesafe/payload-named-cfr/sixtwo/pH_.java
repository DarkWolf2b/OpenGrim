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
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.pL;
import sixtwo.rp;

public class pH
implements rp {
    private List<pL> SQOHK = new ArrayList<pL>();
    private boolean Gjlkp;
    private float OAcWY = 1.0f;
    private static long sJrRh;
    private static String[] KUOEq;
    private static String[] DkZQO;
    private static Map OxPZz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native MatchException cSK(MatchException var0);

    private static native String cSM(int var0, long var1);

    public native pH cSI(boolean var1);

    public native float cSG();

    private static native CallSite cSO(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean cSF();

    private static native Object cSN(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native List<pL> cSE();

    public native pH cSJ(float var1);

    public native pH cSH(List<pL> var1);

    private static native String cSL(byte[] var0);

    static {
        Loader.doInit(pH.class);
        pH._6028afdec40f03798ed6bfedfc283347();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native void _6028afdec40f03798ed6bfedfc283347();
}

