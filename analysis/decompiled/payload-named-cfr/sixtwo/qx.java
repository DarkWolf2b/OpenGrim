/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.client.texture.NativeImageBackedTexture
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.io.IOException;
import java.io.InputStream;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandles;
import java.net.URL;
import java.security.Key;
import java.util.List;
import java.util.concurrent.CompletableFuture;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.client.texture.NativeImageBackedTexture;
import net.minecraft.util.Identifier;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mU;
import sixtwo.qw;
import sixtwo.rD;

public class qx
extends qw {
    private final String voGpz;
    private Identifier PlFdi;
    private static final long xsBIM = gb.aYR(-7961019648072389690L, 1314819911249130024L, MethodHandles.lookup().lookupClass()).a(177949752087313L);
    private static final String xkDbM;
    private static final long AdcHI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qx(String string) {
        long l2 = xsBIM ^ 0x12EC81ADEFFFL;
        String string2 = qw.cZd();
        super(string);
        String string3 = string2;
        try {
            this.voGpz = null;
            this.PlFdi = rD.dlR().cZS().getOrDefault(rD.dlR().cZR().get(string).getFirst(), List.of()).stream().findFirst().orElse(null);
            if (string3 != null) {
                iS.bwK("y81N2");
            }
        }
        catch (MatchException matchException) {
            throw qx.cZh(matchException);
        }
    }

    public qx(String string, String string2) {
        super(string);
        this.voGpz = string2;
        this.cZe();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = xsBIM ^ 0x4B156D23A5FBL;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        byte[] byArray3 = cipher.doFinal("\u0080\u00e2\u0001DT\u0092\u00be)".getBytes("ISO-8859-1"));
        xkDbM = qx.cZi(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = -4059865398935449578L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                AdcHI = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    @Override
    public Identifier cZa() {
        return this.PlFdi;
    }

    private void cZe() {
        qx qx2;
        block4: {
            block5: {
                long l2 = xsBIM ^ 0x7D44B29AE9A8L;
                String string = qw.cZd();
                try {
                    try {
                        qx2 = this;
                        if (string != null) break block4;
                        if (qx2.PlFdi == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qx.cZh(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw qx.cZh(matchException);
                }
            }
            qx2 = this;
        }
        CompletableFuture.runAsync(qx2::cZf);
    }

    /*
     * Unable to fully structure code
     */
    private /* synthetic */ void cZf() {
        block11: {
            var1_1 = qx.xsBIM ^ 124048640301103L;
            var3_2 = qw.cZd();
            try {
                block10: {
                    var4_3 = new URL(this.voGpz).openStream();
                    try {
                        var5_5 = NativeImage.read((InputStream)var4_3);
                        this.PlFdi = Identifier.of((String)(this.cZb().toLowerCase() + qx.xkDbM));
                        rD.dlmvG.getTextureManager().registerTexture(this.PlFdi, (AbstractTexture)new NativeImageBackedTexture((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cZg(), ()Ljava/lang/String;)(), var5_5));
                        v0 = var4_3;
                        if (var3_2 != null) break block10;
                    }
                    catch (Throwable var5_6) {
                        block12: {
                            try {
                                v1 = var4_3;
                                if (var3_2 == null) {
                                    if (v1 == null) break block12;
                                }
                                ** GOTO lbl22
                            }
                            catch (Throwable v2) {
                                throw qx.cZh(v2);
                            }
                            try {
                                v1 = var4_3;
lbl22:
                                // 2 sources

                                v1.close();
                            }
                            catch (Throwable var6_7) {
                                var5_6.addSuppressed(var6_7);
                            }
                        }
                        throw var5_6;
                    }
                    if (v0 == null) break block11;
                    v0 = var4_3;
                }
                v0.close();
            }
            catch (IOException var4_4) {
                // empty catch block
            }
        }
    }

    private static Throwable cZh(Throwable throwable) {
        return throwable;
    }

    private static String cZi(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    private static /* synthetic */ String cZg() {
        long l2 = xsBIM ^ 0x11A6D75E1CAAL;
        return mU.cpM((int)AdcHI);
    }
}

