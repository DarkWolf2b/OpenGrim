/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1011
 *  net.minecraft.class_1043
 *  net.minecraft.class_1044
 *  net.minecraft.class_2960
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
import net.minecraft.class_1011;
import net.minecraft.class_1043;
import net.minecraft.class_1044;
import net.minecraft.class_2960;
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
    private class_2960 Lizxc;
    private static final long cYQCA = gb.aYR(-5979013963953818785L, 5127075084666226216L, MethodHandles.lookup().lookupClass()).a(141215288678797L);
    private static final String YEeWf;
    private static final long DijeV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qy(String string) {
        long l = cYQCA ^ 0x231EFD328F4FL;
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
        long l = cYQCA ^ 0x21A1F3275A03L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        byte[] byArray3 = cipher.doFinal("\u00beN[D\u00e3\u001a/d".getBytes("ISO-8859-1"));
        YEeWf = qy.cZp(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l2 = -7251447436314085502L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                DijeV = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public class_2960 cZk() {
        return this.Lizxc;
    }

    private static Throwable cZo(Throwable throwable) {
        return throwable;
    }

    private static String cZp(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
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
                        var5_5 = class_1011.method_4309((InputStream)var4_3);
                        var6_7 = qG.dah(var5_5);
                        rD.dlmvG.execute((Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, cZm(net.minecraft.class_1011 ), ()V)((qy)this, (class_1011)var6_7));
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
                long l = cYQCA ^ 0x3A7E43E69CCBL;
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

    private /* synthetic */ void cZm(class_1011 class_10112) {
        long l = cYQCA ^ 0x7DCB7B07B146L;
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
                        class_10112.close();
                    }
                    catch (Exception exception) {
                        // empty catch block
                    }
                }
                return;
            }
            class_1043 class_10432 = new class_1043(() -> {
                long l = cYQCA ^ 0x1C1AF687C665L;
                return mU.cpM((int)DijeV);
            }, class_10112);
            this.Lizxc = class_2960.method_60654((String)(this.cZq() + YEeWf).toLowerCase());
            rD.dlmvG.method_1531().method_4616(this.Lizxc, (class_1044)class_10432);
        }
        catch (Exception exception) {
            try {
                class_10112.close();
            }
            catch (Exception exception2) {
                // empty catch block
            }
        }
    }
}
