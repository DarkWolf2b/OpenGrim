/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.io.Closeable;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.Clip;
import javax.sound.sampled.LineEvent;
import native.Loader;
import sixtwo.oc;
import sixtwo.qI$vN;

public class qI {
    private final ExecutorService SBoMD = Executors.newSingleThreadExecutor();
    private final Map<byte[], vN> WkaRr = new ConcurrentHashMap<byte[], vN>();
    private final AtomicBoolean FZpSw = new AtomicBoolean(false);
    private static long fTGxs;
    private static String[] JjawV;
    private static String[] LYenT;
    private static Map SIaRK;
    private static long oQYkb;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(qI.class);
        qI._5822afc7983a8d2c11f3b3732e33178a();
    }

    private static native String dbg(int var0, long var1);

    private static native CallSite dbi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void dbb(Closeable var0);

    private static native String dbf(byte[] var0);

    public native void daT();

    public native void daU();

    private static native Throwable dbe(Throwable var0);

    private native vN daX(byte[] var1);

    public native void daR(oc var1, float var2);

    public native void daW();

    private native /* synthetic */ void dbd(byte[] var1, float var2);

    private static native Object dbh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void dba(Clip var1, float var2);

    public native void daS(oc var1);

    private native vN daY(byte[] var1);

    private native void daV(byte[] var1, float var2);

    private native void daZ(vN var1, float var2);

    private static native /* synthetic */ void dbc(Clip var0, AudioInputStream var1, LineEvent var2);

    private static native void _5822afc7983a8d2c11f3b3732e33178a();
}

