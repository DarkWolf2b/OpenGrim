/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;
import sixtwo.iE;
import sixtwo.iK;
import sixtwo.iL;
import sixtwo.iM;
import sixtwo.iO;
import sixtwo.iu;

public class iJ
extends iE
implements iK {
    private static String dBTIE;
    private static long tpAxI;
    private static String[] GwRhC;
    private static String[] ciYOV;
    private static Map JHeJg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native MatchException btp(MatchException var0);

    @Override
    public native CompletableFuture<iM> likeConfig(String var1);

    private native /* synthetic */ iM btg(Throwable var1);

    private native /* synthetic */ iM bti(Throwable var1);

    private native /* synthetic */ iu btl(Throwable var1);

    private native /* synthetic */ iM btm(Throwable var1);

    private static native String btr(int var0, long var1);

    public static native String bto();

    private static native String btq(byte[] var0);

    private static native CallSite btt(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ iM btk(Throwable var1);

    private native /* synthetic */ iu btd(Throwable var1);

    private native /* synthetic */ iu btf(Throwable var1);

    private native /* synthetic */ iM bth(Throwable var1);

    private native /* synthetic */ iu btj(Throwable var1);

    public static native void btn(String var0);

    static {
        Loader.doInit(iJ.class);
        iJ._b1b4166abfe67205bc51989fb8318952();
    }

    @Override
    public native CompletableFuture<iu> loadConfig(iM var1);

    private static native Object bts(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @Override
    public native CompletableFuture<iu> importConfig(String var1);

    @Override
    public native CompletableFuture<iu> deleteConfig(String var1);

    @Override
    public native CompletableFuture<iM> dislikeConfig(String var1);

    @Override
    public native CompletableFuture<iM> createConfig(int[] var1, int[] var2, iL var3);

    @Override
    public native CompletableFuture<iM> downloadConfig(String var1);

    @Override
    public native CompletableFuture<iu> resetLoadedConfig();

    @Override
    public native CompletableFuture<List<iO>> fetchMetadata();

    @Override
    public native CompletableFuture<iM> updateConfig(String var1, int[] var2, int[] var3, iL var4, boolean var5);

    @Override
    public native CompletableFuture<iu> favouriteConfig(String var1);

    private native /* synthetic */ iu bte(Throwable var1);

    private static native void _b1b4166abfe67205bc51989fb8318952();
}

