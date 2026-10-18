/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.hL;
import sixtwo.hX;
import sixtwo.hZ;

public class hR {
    private static long zKJZR;
    private static String[] VRROQ;
    private static String[] pefzz;
    private static Map HPyEP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(hR.class);
        hR._cb450bd1a56b1f3ac2916942b09679fa();
    }

    private static native void _cb450bd1a56b1f3ac2916942b09679fa();

    public native hZ beN();

    private native /* synthetic */ void beQ(hX var1);

    private static native String beU(int var0, long var1);

    private static native Object beV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void beP(PlayerEntity var1);

    private native PlayerEntity beO(String var1);

    private static native MatchException beS(MatchException var0);

    private static native String beT(byte[] var0);

    private static native CallSite beW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void beR(hL var1);
}

