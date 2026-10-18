/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.util.Identifier;

public final class ag$rQ
extends Record {
    private final Identifier skin;
    private final boolean slim;
    private static Map<String, Identifier> cachedSkins;
    private static long a;
    private static String[] b;
    private static String[] c;
    private static Map d;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ag$rQ(Identifier identifier, boolean bl2) {
        this.skin = identifier;
        this.slim = bl2;
    }

    static {
        Loader.doInit(ag$rQ.class);
        ag$rQ._fc2aedec5c4f4301afb5097c041378f4();
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    private static native String a(byte[] var0);

    private static native MatchException a(MatchException var0);

    private static native Object a(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String a(int var0, long var1);

    private static native CallSite a(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _fc2aedec5c4f4301afb5097c041378f4();

    public native boolean slim();

    public static native Identifier getSkin(String var0);

    public static native void downloadSkin(String var0);

    public native Identifier skin();

    private static native void lambda$downloadSkin$0(String var0, Identifier var1);
}

