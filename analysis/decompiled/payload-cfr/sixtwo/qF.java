/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.datafixers.util.Pair
 *  net.minecraft.class_1011
 *  net.minecraft.class_1060
 *  net.minecraft.class_2960
 *  net.minecraft.class_742
 *  net.minecraft.class_746
 */
package sixtwo;

import com.mojang.datafixers.util.Pair;
import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.net.URI;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.time.Duration;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import net.minecraft.class_1011;
import net.minecraft.class_1060;
import net.minecraft.class_2960;
import net.minecraft.class_742;
import net.minecraft.class_746;
import sixtwo.mr;
import sixtwo.oe;
import sixtwo.qA;
import sixtwo.qG;
import sixtwo.qw;
import sixtwo.qx;
import sixtwo.rD;
import sixtwo.ry;

public class qF {
    private final Map<String, Pair<String, Integer>> UOrmU;
    private final Map<String, List<class_2960>> BtiOf;
    private final Map<String, qw> iskPb;
    private final Map<String, CompletableFuture<Void>> BMURn;
    private byte[] snSlR;
    private static long JMoGY;
    private static String[] HPVXV;
    private static String[] ssXfs;
    private static Map aipts;
    private static long[] BUOYt;
    private static Integer[] jDqdN;
    private static Map atmOn;
    private static long DMVkF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qF() {
        long l = JMoGY ^ 0xAB94136FD7CL;
        this.UOrmU = new ConcurrentHashMap<String, Pair<String, Integer>>();
        this.BtiOf = new ConcurrentHashMap<String, List<class_2960>>();
        this.iskPb = new ConcurrentHashMap<String, qw>();
        this.BMURn = new ConcurrentHashMap<String, CompletableFuture<Void>>();
        try {
            HttpRequest httpRequest = HttpRequest.newBuilder().uri(URI.create(mr.clQ((String)((Object)qF.dad("n", (int)11494, (long)(0x2E2909B6FD54983EL ^ l)))).toString())).header((String)((Object)qF.dad("n", (int)26974, (long)(0x2496F353F203DD84L ^ l))), (String)((Object)qF.dad("n", (int)31269, (long)(0x1C878093974FCEFCL ^ l))) + ry.dkB().dkJ()).timeout(Duration.ofSeconds(DMVkF)).build();
            HttpResponse<byte[]> httpResponse = oe.cBX(httpRequest, HttpResponse.BodyHandlers.ofByteArray());
            try {
                if (httpResponse.statusCode() == qF.dag("e", (int)22441, (long)(0x4508D57E3CC8B3A7L ^ l))) {
                    this.snSlR = httpResponse.body();
                }
            }
            catch (Exception exception) {
                throw qF.cZZ(exception);
            }
        }
        catch (Exception exception) {
            // empty catch block
        }
    }

    static {
        Loader.doInit(qF.class);
        qF._8de2f16764985985d29135fad7a3470f();
    }

    private static native int daf(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public class_2960 cZL(class_742 class_7422) {
        class_746 class_7462;
        block4: {
            block5: {
                long l = JMoGY ^ 0x71CA6F9B4981L;
                boolean bl = qG.daC();
                try {
                    try {
                        class_7462 = rD.dlmvG.field_1724;
                        if (!bl) break block4;
                        if (class_7462 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qF.cZZ(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw qF.cZZ(matchException);
                }
            }
            class_7462 = class_7422;
        }
        String string = class_7462.method_5477().getString();
        return this.cZM(string);
    }

    private class_2960 cZM(String string) {
        class_2960 class_29602;
        block10: {
            block9: {
                qw qw2;
                block8: {
                    String string2;
                    Map<String, Object> map;
                    boolean bl;
                    block6: {
                        block7: {
                            qw qw3;
                            long l = JMoGY ^ 0x77CA288204C3L;
                            bl = qG.daB();
                            try {
                                map = this.UOrmU;
                                string2 = string;
                                if (bl) break block6;
                                if (!map.containsKey(string2)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw qF.cZZ(matchException);
                            }
                            int n = (Integer)this.UOrmU.get(string).getSecond();
                            try {
                                qw3 = n == -1 ? new qx(string) : new qA(string, n);
                            }
                            catch (MatchException matchException) {
                                throw qF.cZZ(matchException);
                            }
                            qw qw4 = qw3;
                            this.iskPb.put(string, qw4);
                            this.UOrmU.remove(string);
                        }
                        map = this.iskPb;
                        string2 = string;
                    }
                    qw qw5 = (qw)map.get(string2);
                    try {
                        qw2 = qw5;
                        if (bl) break block8;
                        if (qw2 == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw qF.cZZ(matchException);
                    }
                    qw2 = qw5;
                }
                class_29602 = qw2.cZa();
                break block10;
            }
            class_29602 = null;
        }
        return class_29602;
    }

    private native void cZO(String var1, String var2) throws IOException;

    private static native Throwable cZZ(Throwable var0);

    private native void cZP(String var1, String var2) throws IOException;

    public String cZQ(String string) {
        long l = JMoGY ^ 0x62462B12EE29L;
        String string2 = string.substring(string.lastIndexOf((int)qF.dag("e", (int)12448, (long)(0x60E27358CEE2C7F9L ^ l))) + 1);
        return string2.substring(0, string2.lastIndexOf((int)qF.dag("e", (int)6876, (long)(0x6F12596856A86D83L ^ l))));
    }

    public native Map<String, List<class_2960>> cZS();

    private static native CallSite dad(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void cZN(String var1, String var2);

    private native /* synthetic */ void cZT(String var1, class_1060 var2, class_1011 var3);

    public native void cZK();

    public native Map<String, Pair<String, Integer>> cZR();

    private static native CallSite dag(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ String cZU();

    private static native /* synthetic */ String cZW();

    private native /* synthetic */ void cZY(String var1, String var2);

    private static native int dae(int var0, long var1);

    private static native String daa(byte[] var0);

    private static native /* synthetic */ void cZV(String var0, class_1060 var1, class_1011 var2, List var3);

    private static native String dab(int var0, long var1);

    private native /* synthetic */ void cZX(String var1);

    private static native Object dac(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _8de2f16764985985d29135fad7a3470f();
}
