/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.screen.ScreenHandler
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.ScreenHandler;

public class nQ {
    private static long zOGCM;
    private static long[] GuGMu;
    private static Integer[] mczgE;
    private static Map NGIpB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(nQ.class);
        nQ._18d6c76cceb0d493993e7ca850fba2fe();
    }

    private static native void _18d6c76cceb0d493993e7ca850fba2fe();

    public static native int cyR();

    public static native int cyS(ItemStack var0);

    private static native MatchException cyT(MatchException var0);

    public static native int cyQ(ScreenHandler var0);

    private static native int cyU(int var0, long var1);

    private static native int cyV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cyW(MethodHandles.Lookup var0, String var1, MethodType var2);
}

