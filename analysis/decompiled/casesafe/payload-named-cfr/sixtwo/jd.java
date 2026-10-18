/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.ClientLevelAccessor
 *  net.minecraft.client.network.SequencedPacketCreator
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.regex.Pattern;
import mixin.accessors.ClientLevelAccessor;
import native.Loader;
import net.minecraft.client.network.SequencedPacketCreator;
import sixtwo.jf;
import sixtwo.rD;

public class jd {
    public static Pattern dCIsP;
    private static long oOIqE;
    private static String[] qWqsn;
    private static String[] BrPpj;
    private static Map wIsWz;
    private static long[] neBSq;
    private static Integer[] BaTRC;
    private static Map CkeqV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(jd.class);
        jd._611ca11c3ecf910b3746907091198113();
    }

    private static native CallSite bAt(MethodHandles.Lookup var0, String var1, MethodType var2);

    public static native boolean bAn(String var0);

    public static native byte[] bAj(byte[] var0);

    private static native CallSite bAw(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String bAr(int var0, long var1);

    public static native String bAg(byte[] var0) throws Exception;

    private static native Throwable bAp(Throwable var0);

    private static native String bAq(byte[] var0);

    private static native int bAu(int var0, long var1);

    public static native String bAk();

    public static native byte[] bAe(byte[] var0, String var1);

    public static native String bAi(byte[] var0);

    /*
     * Unable to fully structure code
     */
    public static String bAl() {
        block11: {
            block10: {
                block9: {
                    var0 = jd.oOIqE ^ 87917970447335L;
                    var3_1 = rD.dlmvG.getNetworkHandler();
                    var2_2 = jf.bBe();
                    try {
                        try {
                            if (var3_1 != null && !rD.dlmvG.isConnectedToLocalServer()) break block9;
                        }
                        catch (MatchException v0) {
                            throw jd.bAp(v0);
                        }
                        return jd.bAt("m", (int)4309, (long)(3415637507769365452L ^ var0));
                    }
                    catch (MatchException v1) {
                        throw jd.bAp(v1);
                    }
                }
                var4_3 = var3_1.getServerInfo();
                try {
                    v2 = var4_3;
                    if (var2_2 == null) break block10;
                    if (v2 == null) {
                    }
                    ** GOTO lbl26
                }
                catch (MatchException v3) {
                    throw jd.bAp(v3);
                }
                var5_4 = jd.bAt("m", (int)27583, (long)(7597808096961890471L ^ var0));
                try {
                    if (var2_2 != null) break block11;
lbl26:
                    // 2 sources

                    v2 = var4_3;
                }
                catch (MatchException v4) {
                    throw jd.bAp(v4);
                }
            }
            var5_4 = v2.address;
        }
        return var5_4;
    }

    public static native boolean bAm(String var0);

    public static native String bAf(byte[] var0, String var1);

    private static native Object bAs(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int bAv(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native byte[] bAh(byte[] var0) throws Exception;

    /*
     * Unable to fully structure code
     */
    public static void bAo(SequencedPacketCreator var0) {
        block22: {
            block19: {
                block17: {
                    block18: {
                        block16: {
                            block15: {
                                var1_1 = jd.oOIqE ^ 130271520085907L;
                                var3_2 = jf.bBe();
                                v0 = rD.dlmvG;
                                if (var3_2 == null) break block15;
                                try {
                                    block21: {
                                        if (v0.getNetworkHandler() == null) break block16;
                                        break block21;
                                        catch (Throwable v1) {
                                            throw jd.bAp(v1);
                                        }
                                    }
                                    v0 = rD.dlmvG;
                                }
                                catch (Throwable v2) {
                                    throw jd.bAp(v2);
                                }
                            }
                            try {
                                v3 = v0.world;
                                if (var3_2 == null) break block17;
                                if (v3 != null) break block18;
                            }
                            catch (Throwable v4) {
                                throw jd.bAp(v4);
                            }
                        }
                        return;
                    }
                    v3 = rD.dlmvG.world;
                }
                var4_3 = ((ClientLevelAccessor)v3).getBlockStatePredictionHandler().incrementSequence();
                try {
                    var5_4 = var4_3.getSequence();
                    rD.dlmvG.getNetworkHandler().sendPacket(var0.predict(var5_4));
                    v5 = var4_3;
                    if (var3_2 == null) break block19;
                }
                catch (Throwable var5_5) {
                    block20: {
                        try {
                            v6 = var4_3;
                            if (var3_2 != null) {
                                if (v6 == null) break block20;
                            }
                            ** GOTO lbl46
                        }
                        catch (Throwable v7) {
                            throw jd.bAp(v7);
                        }
                        try {
                            v6 = var4_3;
lbl46:
                            // 2 sources

                            v6.close();
                        }
                        catch (Throwable var6_6) {
                            var5_5.addSuppressed(var6_6);
                        }
                    }
                    throw var5_5;
                }
                if (v5 == null) break block22;
                v5 = var4_3;
            }
            v5.close();
        }
    }

    private static native void _611ca11c3ecf910b3746907091198113();
}

