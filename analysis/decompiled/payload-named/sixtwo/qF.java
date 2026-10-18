/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.datafixers.util.Pair
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.client.texture.TextureManager
 *  net.minecraft.util.Identifier
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.TextureManager;
import net.minecraft.util.Identifier;
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
    private final Map<String, List<Identifier>> BtiOf;
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
        long l2 = JMoGY ^ 0xAB94136FD7CL;
        this.UOrmU = new ConcurrentHashMap<String, Pair<String, Integer>>();
        this.BtiOf = new ConcurrentHashMap<String, List<Identifier>>();
        this.iskPb = new ConcurrentHashMap<String, qw>();
        this.BMURn = new ConcurrentHashMap<String, CompletableFuture<Void>>();
        try {
            HttpRequest httpRequest = HttpRequest.newBuilder().uri(URI.create(mr.clQ((String)((Object)qF.dad("n", (int)11494, (long)(0x2E2909B6FD54983EL ^ l2)))).toString())).header((String)((Object)qF.dad("n", (int)26974, (long)(0x2496F353F203DD84L ^ l2))), (String)((Object)qF.dad("n", (int)31269, (long)(0x1C878093974FCEFCL ^ l2))) + ry.dkB().dkJ()).timeout(Duration.ofSeconds(DMVkF)).build();
            HttpResponse<byte[]> httpResponse = oe.cBX(httpRequest, HttpResponse.BodyHandlers.ofByteArray());
            try {
                if (httpResponse.statusCode() == qF.dag("e", (int)22441, (long)(0x4508D57E3CC8B3A7L ^ l2))) {
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

    public Identifier cZL(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        ClientPlayerEntity clientPlayerEntity;
        block4: {
            block5: {
                long l2 = JMoGY ^ 0x71CA6F9B4981L;
                boolean bl2 = qG.daC();
                try {
                    try {
                        clientPlayerEntity = rD.dlmvG.player;
                        if (!bl2) break block4;
                        if (clientPlayerEntity != null) break block5;
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
            clientPlayerEntity = abstractClientPlayerEntity;
        }
        String string = clientPlayerEntity.getName().getString();
        return this.cZM(string);
    }

    private Identifier cZM(String string) {
        Identifier identifier;
        block10: {
            block9: {
                qw qw2;
                block8: {
                    String string2;
                    Map<String, Object> map;
                    boolean bl2;
                    block6: {
                        block7: {
                            qw qw3;
                            long l2 = JMoGY ^ 0x77CA288204C3L;
                            bl2 = qG.daB();
                            try {
                                map = this.UOrmU;
                                string2 = string;
                                if (bl2) break block6;
                                if (!map.containsKey(string2)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw qF.cZZ(matchException);
                            }
                            int n2 = (Integer)this.UOrmU.get(string).getSecond();
                            try {
                                qw3 = n2 == -1 ? new qx(string) : new qA(string, n2);
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
                        if (bl2) break block8;
                        if (qw2 == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw qF.cZZ(matchException);
                    }
                    qw2 = qw5;
                }
                identifier = qw2.cZa();
                break block10;
            }
            identifier = null;
        }
        return identifier;
    }

    private native void cZO(String var1, String var2) throws IOException;

    private static native Throwable cZZ(Throwable var0);

    private native void cZP(String var1, String var2) throws IOException;

    public String cZQ(String string) {
        long l2 = JMoGY ^ 0x62462B12EE29L;
        String string2 = string.substring(string.lastIndexOf((int)qF.dag("e", (int)12448, (long)(0x60E27358CEE2C7F9L ^ l2))) + 1);
        return string2.substring(0, string2.lastIndexOf((int)qF.dag("e", (int)6876, (long)(0x6F12596856A86D83L ^ l2))));
    }

    public native Map<String, List<Identifier>> cZS();

    private static native CallSite dad(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void cZN(String var1, String var2);

    private native /* synthetic */ void cZT(String var1, TextureManager var2, NativeImage var3);

    public native void cZK();

    public native Map<String, Pair<String, Integer>> cZR();

    private static native CallSite dag(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ String cZU();

    private static native /* synthetic */ String cZW();

    private native /* synthetic */ void cZY(String var1, String var2);

    private static native int dae(int var0, long var1);

    private static native String daa(byte[] var0);

    private static native /* synthetic */ void cZV(String var0, TextureManager var1, NativeImage var2, List var3);

    private static native String dab(int var0, long var1);

    private native /* synthetic */ void cZX(String var1);

    private static native Object dac(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _8de2f16764985985d29135fad7a3470f();
}

