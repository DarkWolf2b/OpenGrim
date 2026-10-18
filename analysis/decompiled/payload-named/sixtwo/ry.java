/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.Gson
 *  com.google.gson.GsonBuilder
 *  com.google.gson.JsonDeserializationContext
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonParseException
 *  com.google.gson.JsonSerializationContext
 */
package sixtwo;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonElement;
import com.google.gson.JsonParseException;
import com.google.gson.JsonSerializationContext;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Type;
import java.net.http.HttpClient;
import java.time.Duration;
import java.time.Instant;
import java.util.Map;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import native.Loader;
import sixtwo.mC;

public class ry {
    private static ry RxXot;
    private final Gson DmrIF;
    private final HttpClient QsAWV;
    private final ScheduledExecutorService bVgUI;
    private volatile mC yyzxB;
    private byte[] wYkLL;
    private boolean RlrIz;
    private long bFlmc;
    private static long fCcUX;
    private static String[] oKSsP;
    private static String[] ymlAz;
    private static Map OIBne;
    private static long[] jIuKN;
    private static Integer[] yogQs;
    private static Map nlCxV;
    private static long[] pDbnG;
    private static Long[] XvXXA;
    private static Map AjyIg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ry() {
        long l2 = fCcUX ^ 0x2DBD075BFF51L;
        this.bFlmc = 0L;
        this.DmrIF = new GsonBuilder().registerTypeAdapter(Instant.class, ry::dkW).registerTypeAdapter(Instant.class, ry::dkV).create();
        this.bVgUI = Executors.newSingleThreadScheduledExecutor();
        this.QsAWV = HttpClient.newBuilder().connectTimeout(Duration.ofSeconds((long)ry.dlh("a", (int)25488, (long)(0x7D2C0985FA0F00A3L ^ l2)))).followRedirects(HttpClient.Redirect.ALWAYS).build();
    }

    static {
        Loader.doInit(ry.class);
        ry._34f30310c695636a5b47d8e936802d57();
    }

    public native int dkI();

    public native String dkJ();

    private static native Object dla(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Exception dkX(Exception var0);

    private static native int dld(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native long dlg(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native Gson dkP();

    public native long dkS();

    private static native CallSite dle(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native long dlf(int var0, long var1);

    public native void dkO();

    public native String dkL();

    private static native String dkY(byte[] var0);

    private native /* synthetic */ void dkT(String var1);

    public native HttpClient dkQ();

    private native /* synthetic */ void dkU(String var1);

    private static native CallSite dlb(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native String dkK();

    private static native String dkZ(int var0, long var1);

    private static native int dlc(int var0, long var1);

    public native long dkM();

    public native byte[] dkN();

    public native boolean dkR();

    private native void dkF();

    private static native /* synthetic */ Instant dkW(JsonElement var0, Type var1, JsonDeserializationContext var2) throws JsonParseException;

    private static native CallSite dlh(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ JsonElement dkV(Instant var0, Type var1, JsonSerializationContext var2);

    public native void dkD();

    public native boolean dkG();

    public static native void dkC();

    private native void dkE();

    private native void dkH();

    public static native ry dkB();

    private static native void _34f30310c695636a5b47d8e936802d57();
}

