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
import java.util.function.Supplier;
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
import sixtwo.qw;
import sixtwo.rD;

public class qx
extends qw {
    private final String voGpz;
    private class_2960 PlFdi;
    private static final long xsBIM = gb.aYR(-7961019648072389690L, 1314819911249130024L, MethodHandles.lookup().lookupClass()).a(177949752087313L);
    private static final String xkDbM;
    private static final long AdcHI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qx(String string) {
        long l = xsBIM ^ 0x12EC81ADEFFFL;
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
        long l = xsBIM ^ 0x4B156D23A5FBL;
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
        byte[] byArray3 = cipher.doFinal("\u0080\u00e2\u0001DT\u0092\u00be)".getBytes("ISO-8859-1"));
        xkDbM = qx.cZi(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l2 = -4059865398935449578L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                AdcHI = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public class_2960 cZa() {
        return this.PlFdi;
    }

    private void cZe() {
        qx qx2;
        block4: {
            block5: {
                long l = xsBIM ^ 0x7D44B29AE9A8L;
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
                        var5_5 = class_1011.method_4309((InputStream)var4_3);
                        this.PlFdi = class_2960.method_60654((String)(this.cZb().toLowerCase() + qx.xkDbM));
                        rD.dlmvG.method_1531().method_4616(this.PlFdi, (class_1044)new class_1043((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cZg(), ()Ljava/lang/String;)(), var5_5));
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

    private static /* synthetic */ String cZg() {
        long l = xsBIM ^ 0x11A6D75E1CAAL;
        return mU.cpM((int)AdcHI);
    }
}
