/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionException;
import java.util.concurrent.CompletionStage;
import native.Loader;
import net.minecraft.client.texture.AbstractTexture;

public class ob {
    static int dznco;
    private final AbstractTexture cNjfD;
    private static boolean dKHKp;
    private static long GeJUi;
    private static long[] fPjmY;
    private static Integer[] MlLyp;
    private static Map tDKhx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _a5f9f47b34450fa927c3ddf9062d67c8();

    private static native int cBG(int var0, long var1);

    private static native int cBH(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public ob(AbstractTexture abstractTexture) {
        this.cNjfD = abstractTexture;
    }

    static {
        Loader.doInit(ob.class);
        ob._a5f9f47b34450fa927c3ddf9062d67c8();
    }

    private static native CallSite cBI(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native void cBC(boolean var0);

    public static native boolean cBE();

    private static native CompletionException cBF(CompletionException var0);

    private static native /* synthetic */ CompletionStage cBz(int var0, String var1, byte[] var2);

    private static native /* synthetic */ ob cBA(byte[] var0);

    private static native /* synthetic */ ob cBB(Throwable var0);

    public static native boolean cBD();

    public static native CompletableFuture<ob> cBw(String var0);

    private static native CompletableFuture<ob> cBx(String var0, int var1);

    public native AbstractTexture cBy();

    public static native AbstractTexture cBv(String var0);
}

