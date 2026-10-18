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
import sixtwo.iS;
import sixtwo.im;
import sixtwo.in;
import sixtwo.io;
import sixtwo.rj;
import sixtwo.rp;

public class ir
extends in
implements rp {
    String MJxSh;
    String JrITo;
    private static long CNpfA;
    private static String[] bQYGM;
    private static String[] sbTyw;
    private static Map iJBZj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native MatchException bmE(MatchException var0);

    public native ir bmC(String var1);

    private static native String bmF(byte[] var0);

    private static native Object bmH(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String bmG(int var0, long var1);

    public native String bmB();

    private static native CallSite bmI(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native ir bmD(String var1);

    public ir() {
    }

    public ir(String string, String string2, int[] nArray, io io2, io io3, boolean bl2, float f2, boolean bl3, boolean bl4, boolean bl5, im im2, im im3) {
        long l2 = CNpfA ^ 0x1FCE3A792842L;
        super(nArray, io2, io3, bl2, f2, bl3, bl4, bl5, im2, im3);
        this.MJxSh = string;
        String[] stringArray = rj.dha();
        try {
            this.JrITo = string2;
            if (stringArray == null) {
                iS.bwK("s64be");
            }
        }
        catch (MatchException matchException) {
            throw ir.bmE(matchException);
        }
    }

    static {
        Loader.doInit(ir.class);
        ir._746b4bb81a153ba095982d63ae6cba3f();
    }

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    @Override
    public native boolean bkP();

    @Override
    public native String bkO();

    private static native void _746b4bb81a153ba095982d63ae6cba3f();
}

