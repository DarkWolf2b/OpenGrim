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

public class im
implements rp {
    private float KRmiv;
    private float pFSpJ;
    private float CgBVN;
    private float CfqKZ;
    private float bFZwM;
    private float VLAee;
    private float sZrbs;
    private float mraQS;
    private float kWIxr;
    private static String[] zCEjY;
    private static long JGxeg;
    private static String[] YAJBH;
    private static String[] kblTu;
    private static Map xPwii;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public im(float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10) {
        this.KRmiv = f2;
        this.pFSpJ = f3;
        this.CgBVN = f4;
        this.CfqKZ = f5;
        this.bFZwM = f6;
        this.VLAee = f7;
        this.sZrbs = f8;
        this.mraQS = f9;
        this.kWIxr = f10;
    }

    public im() {
    }

    static {
        Loader.doInit(im.class);
        im._7114862126ec9603e1fb62ce1278dd19();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    private static native MatchException bkJ(MatchException var0);

    public static native void bkH(String[] var0);

    private static native String bkL(int var0, long var1);

    private static native Object bkM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native String[] bkI();

    private static native CallSite bkN(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String bkK(byte[] var0);

    private static native void _7114862126ec9603e1fb62ce1278dd19();

    public native float bkC();

    public native float bkz();

    public native float bkE();

    public native float bkA();

    public native float bky();

    public native float bkD();

    public native float bkG();

    public native float bkB();

    public native float bkF();
}

