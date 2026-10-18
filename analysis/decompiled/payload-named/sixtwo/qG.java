/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.datafixers.util.Pair
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.client.texture.TextureManager
 *  net.minecraft.util.AssetInfo$TextureAsset
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
import net.minecraft.util.AssetInfo;
import net.minecraft.util.Identifier;
import sixtwo.lw;
import sixtwo.mr;
import sixtwo.oe;
import sixtwo.qB;
import sixtwo.qy;
import sixtwo.qz;
import sixtwo.rD;
import sixtwo.ry;

public class qG {
    private final Map<String, Pair<String, Integer>> UopWF;
    private final Map<String, List<Identifier>> jDwdU;
    private final Map<String, qz> egLkf;
    private final Map<String, CompletableFuture<Void>> ENods;
    private byte[] odGBQ;
    private volatile qz FTUdq;
    private static boolean Rqahi;
    private static long qFzUN;
    private static String[] FHYfw;
    private static String[] TuhKH;
    private static Map jQdvd;
    private static long[] Paxlo;
    private static Integer[] NneDD;
    private static Map qVsnc;
    private static long nzygq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qG() {
        long l2 = qFzUN ^ 0x4E72FFE334D2L;
        this.UopWF = new ConcurrentHashMap<String, Pair<String, Integer>>();
        this.jDwdU = new ConcurrentHashMap<String, List<Identifier>>();
        this.egLkf = new ConcurrentHashMap<String, qz>();
        this.ENods = new ConcurrentHashMap<String, CompletableFuture<Void>>();
        try {
            HttpRequest httpRequest = HttpRequest.newBuilder().uri(URI.create(mr.clQ((String)((Object)qG.daH("c", (int)9737, (long)(0xF8581C0742BA57L ^ l2)))).toString())).header((String)((Object)qG.daH("c", (int)27861, (long)(0x1ABBBF1B9B2C7088L ^ l2))), (String)((Object)qG.daH("c", (int)31931, (long)(0x7389D8440BCEE0E4L ^ l2))) + ry.dkB().dkJ()).timeout(Duration.ofSeconds(nzygq)).build();
            HttpResponse<byte[]> httpResponse = oe.cBX(httpRequest, HttpResponse.BodyHandlers.ofByteArray());
            try {
                if (httpResponse.statusCode() == qG.daK("x", (int)15144, (long)(0x350D05F9AD9FD0A7L ^ l2))) {
                    this.odGBQ = httpResponse.body();
                }
            }
            catch (Exception exception) {
                throw qG.daD(exception);
            }
        }
        catch (Exception exception) {
            // empty catch block
        }
    }

    static {
        Loader.doInit(qG.class);
        qG._1a0104b3d4a302ac89dcc809aa4dc02f();
    }

    private native /* synthetic */ void day(String var1);

    private native void dap(String var1, String var2) throws IOException;

    public Identifier daj(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        Identifier identifier;
        block21: {
            block20: {
                AssetInfo.TextureAsset textureAsset;
                block19: {
                    boolean bl2;
                    block18: {
                        Identifier identifier2;
                        block17: {
                            Identifier identifier3;
                            block15: {
                                String string;
                                block16: {
                                    String string2;
                                    ClientPlayerEntity clientPlayerEntity;
                                    block13: {
                                        block14: {
                                            long l2 = qFzUN ^ 0x2B491AC55769L;
                                            bl2 = qG.daC();
                                            try {
                                                try {
                                                    clientPlayerEntity = rD.dlmvG.player;
                                                    if (!bl2) break block13;
                                                    if (clientPlayerEntity != null) break block14;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qG.daD(matchException);
                                                }
                                                return null;
                                            }
                                            catch (MatchException matchException) {
                                                throw qG.daD(matchException);
                                            }
                                        }
                                        clientPlayerEntity = abstractClientPlayerEntity;
                                    }
                                    if ((string = clientPlayerEntity.getName().getString()).equals(string2 = rD.dlmvG.player.getName().getString())) {
                                        identifier3 = this.dal();
                                        try {
                                            try {
                                                identifier2 = identifier3;
                                                if (!bl2) break block15;
                                                if (identifier2 == null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw qG.daD(matchException);
                                            }
                                            return identifier3;
                                        }
                                        catch (MatchException matchException) {
                                            throw qG.daD(matchException);
                                        }
                                    }
                                }
                                identifier2 = identifier3 = this.dak(string);
                            }
                            try {
                                if (!bl2) break block17;
                                if (identifier2 == null) break block18;
                            }
                            catch (MatchException matchException) {
                                throw qG.daD(matchException);
                            }
                            identifier2 = identifier3;
                        }
                        return identifier2;
                    }
                    AssetInfo.TextureAsset textureAsset2 = abstractClientPlayerEntity.getSkin().cape();
                    try {
                        textureAsset = textureAsset2;
                        if (!bl2) break block19;
                        if (textureAsset == null) break block20;
                    }
                    catch (MatchException matchException) {
                        throw qG.daD(matchException);
                    }
                    textureAsset = textureAsset2;
                }
                identifier = textureAsset.texturePath();
                break block21;
            }
            identifier = null;
        }
        return identifier;
    }

    public static native boolean daB();

    public static native boolean daC();

    public native Map<String, Pair<String, Integer>> das();

    public native Map<String, List<Identifier>> dat();

    private static native CallSite daK(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native /* synthetic */ void dau(String var1, TextureManager var2, NativeImage var3);

    private Identifier dal() {
        Identifier identifier;
        block6: {
            block5: {
                qz qz2;
                block4: {
                    long l2 = qFzUN ^ 0x1598C9BA3E07L;
                    boolean bl2 = qG.daB();
                    try {
                        try {
                            qz2 = this.FTUdq;
                            if (bl2) break block4;
                            if (qz2 == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw qG.daD(matchException);
                        }
                        qz2 = this.FTUdq;
                    }
                    catch (MatchException matchException) {
                        throw qG.daD(matchException);
                    }
                }
                identifier = qz2.cZk();
                break block6;
            }
            identifier = null;
        }
        return identifier;
    }

    private static native /* synthetic */ String dav();

    private static native CallSite daH(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native int[] dan(int[] var1);

    private native void daq(String var1, String var2) throws IOException;

    private static native Throwable daD(Throwable var0);

    private native void dao(String var1, String var2);

    public String dar(String string) {
        long l2 = qFzUN ^ 0x3868C045EDA2L;
        String string2 = string.substring(string.lastIndexOf((int)qG.daK("x", (int)13532, (long)(0xBE2B540E7BC8620L ^ l2))) + 1);
        return string2.substring(0, string2.lastIndexOf((int)qG.daK("x", (int)4683, (long)(0x5E260798DC1E20B0L ^ l2))));
    }

    public static native NativeImage dah(NativeImage var0);

    public native void dai();

    private Identifier dak(String string) {
        Identifier identifier;
        block10: {
            block9: {
                qz qz2;
                block8: {
                    String string2;
                    Map<String, Object> map;
                    boolean bl2;
                    block6: {
                        block7: {
                            qz qz3;
                            long l2 = qFzUN ^ 0x686D75FC0810L;
                            bl2 = qG.daB();
                            try {
                                map = this.UopWF;
                                string2 = string;
                                if (bl2) break block6;
                                if (!map.containsKey(string2)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw qG.daD(matchException);
                            }
                            int n2 = (Integer)this.UopWF.get(string).getSecond();
                            try {
                                qz3 = n2 == -1 ? new qy(string) : new qB(string, n2);
                            }
                            catch (MatchException matchException) {
                                throw qG.daD(matchException);
                            }
                            qz qz4 = qz3;
                            this.egLkf.put(string, qz4);
                            this.UopWF.remove(string);
                        }
                        map = this.egLkf;
                        string2 = string;
                    }
                    qz qz5 = (qz)map.get(string2);
                    try {
                        qz2 = qz5;
                        if (bl2) break block8;
                        if (qz2 == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw qG.daD(matchException);
                    }
                    qz2 = qz5;
                }
                identifier = qz2.cZk();
                break block10;
            }
            identifier = null;
        }
        return identifier;
    }

    private static native String daE(byte[] var0);

    private static native int daI(int var0, long var1);

    private native /* synthetic */ void daz(String var1, String var2);

    private static native int daJ(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native /* synthetic */ void daw(lw var1, String var2, TextureManager var3, List var4);

    public static native void daA(boolean var0);

    private static native Object daG(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String daF(int var0, long var1);

    private static native /* synthetic */ String dax();

    public native void dam();

    private static native void _1a0104b3d4a302ac89dcc809aa4dc02f();
}

