/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.lwjgl.BufferUtils
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.nio.FloatBuffer;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.lwjgl.BufferUtils;
import sixtwo.gb;
import sixtwo.kk;

final class kk$uf {
    private final FloatBuffer GXqLx;
    private float jHEXt;
    private static final long TyrgK = gb.aYR(6024773056861076645L, -5695886300698941545L, MethodHandles.lookup().lookupClass()).a(96712415341831L);
    private static final long JZshQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private FloatBuffer dsw(float f2) {
        kk$uf kk$uf;
        block6: {
            block7: {
                block8: {
                    long l2 = TyrgK ^ 0x3F879B8136A5L;
                    String string = kk.bPU();
                    try {
                        kk$uf = this;
                        if (string == null) break block6;
                        if (kk$uf.jHEXt == f2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw kk$uf.dsx(matchException);
                    }
                    this.GXqLx.clear();
                    int n2 = 0;
                    while ((float)n2 <= f2) {
                        try {
                            this.GXqLx.put(kk.bPP(n2, f2 / 2.0f));
                            ++n2;
                            if (string != null) {
                                if (string != null) continue;
                                break;
                            }
                            break block8;
                        }
                        catch (MatchException matchException) {
                            throw kk$uf.dsx(matchException);
                        }
                    }
                    this.GXqLx.flip();
                }
                this.jHEXt = f2;
            }
            kk$uf = this;
        }
        return kk$uf.GXqLx;
    }

    private static MatchException dsx(MatchException matchException) {
        return matchException;
    }

    private kk$uf() {
        long l2 = TyrgK ^ 0x74377069D23BL;
        this.GXqLx = BufferUtils.createFloatBuffer((int)((int)JZshQ));
        this.jHEXt = -1.0f;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = TyrgK ^ 0x62E076149EABL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 1883827088198019100L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                JZshQ = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }
}

