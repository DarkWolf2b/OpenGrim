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
import sixtwo.qG;
import sixtwo.qw;
import sixtwo.qz;
import sixtwo.rD;

public class qy
extends qz {
    private final String npyNN;
    private Identifier Lizxc;
    private static final long cYQCA = gb.aYR(-5979013963953818785L, 5127075084666226216L, MethodHandles.lookup().lookupClass()).a(141215288678797L);
    private static final String YEeWf;
    private static final long DijeV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qy(String string) {
        long l2 = cYQCA ^ 0x231EFD328F4FL;
        super(string);
        this.npyNN = null;
        String string2 = qw.cZd();
        try {
            this.Lizxc = rD.dlT().dat().getOrDefault(rD.dlT().das().get(string).getFirst(), List.of()).stream().findFirst().orElse(null);
            if (iS.bwL() == null) {
                qw.cZc("sS2mJ");
            }
        }
        catch (MatchException matchException) {
            throw qy.cZo(matchException);
        }
    }

    public qy(String string, String string2) {
        super(string);
        this.npyNN = string2;
        this.cZj();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = cYQCA ^ 0x21A1F3275A03L;
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
        byte[] byArray3 = cipher.doFinal("\u00beN[D\u00e3\u001a/d".getBytes("ISO-8859-1"));
        YEeWf = qy.cZp(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = -7251447436314085502L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                DijeV = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    @Override
    public Identifier cZk() {
        return this.Lizxc;
    }

    private static Throwable cZo(Throwable throwable) {
        return throwable;
    }

    private static String cZp(byte[] byArray) {
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

    /*
     * Unable to fully structure code
     */
    private /* synthetic */ void cZl() {
        block11: {
            var1_1 = qy.cYQCA ^ 28004747605407L;
            var3_2 = qw.cZd();
            try {
                block10: {
                    var4_3 = new URL(this.npyNN).openStream();
                    try {
                        var5_5 = NativeImage.read((InputStream)var4_3);
                        var6_7 = qG.dah(var5_5);
                        rD.dlmvG.execute((Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, cZm(net.minecraft.client.texture.NativeImage ), ()V)((qy)this, (NativeImage)var6_7));
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
                                throw qy.cZo(v2);
                            }
                            try {
                                v1 = var4_3;
lbl22:
                                // 2 sources

                                v1.close();
                            }
                            catch (Throwable var6_8) {
                                var5_6.addSuppressed(var6_8);
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

    private void cZj() {
        qy qy2;
        block4: {
            block5: {
                long l2 = cYQCA ^ 0x3A7E43E69CCBL;
                String string = qw.cZd();
                try {
                    try {
                        qy2 = this;
                        if (string != null) break block4;
                        if (qy2.Lizxc == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qy.cZo(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw qy.cZo(matchException);
                }
            }
            qy2 = this;
        }
        CompletableFuture.runAsync(qy2::cZl);
    }

    private /* synthetic */ void cZm(NativeImage nativeImage) {
        long l2 = cYQCA ^ 0x7DCB7B07B146L;
        String string = qw.cZd();
        try {
            block9: {
                block8: {
                    try {
                        if (string != null) break block8;
                        if (this.Lizxc == null) break block9;
                    }
                    catch (Exception exception) {
                        throw qy.cZo(exception);
                    }
                    try {
                        nativeImage.close();
                    }
                    catch (Exception exception) {
                        // empty catch block
                    }
                }
                return;
            }
            NativeImageBackedTexture nativeImageBackedTexture = new NativeImageBackedTexture(() -> {
                long l2 = cYQCA ^ 0x1C1AF687C665L;
                return mU.cpM((int)DijeV);
            }, nativeImage);
            this.Lizxc = Identifier.of((String)(this.cZq() + YEeWf).toLowerCase());
            rD.dlmvG.getTextureManager().registerTexture(this.Lizxc, (AbstractTexture)nativeImageBackedTexture);
        }
        catch (Exception exception) {
            try {
                nativeImage.close();
            }
            catch (Exception exception2) {
                // empty catch block
            }
        }
    }
}

