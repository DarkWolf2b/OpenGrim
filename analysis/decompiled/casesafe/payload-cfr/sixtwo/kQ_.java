/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_287
 *  net.minecraft.class_9799
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_287;
import net.minecraft.class_9799;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kP;

public abstract class kQ<T>
implements kP<T> {
    private final class_9799 vSpyE;
    protected class_287 WfBOj;
    private boolean FKQkw;
    private static int FmTZh;
    private static final long yTRZZ;
    private static final String rAwAE;
    private static final long adoPO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kQ() {
        long l = yTRZZ ^ 0x62EB9FFE61D7L;
        this.vSpyE = new class_9799((int)adoPO);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        yTRZZ = gb.aYR(5115572367117417848L, -6167705444224521846L, MethodHandles.lookup().lookupClass()).a(62993390440604L);
        long l = yTRZZ ^ 0x1CB5ACD7E0A1L;
        kQ.bVm(0);
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
        byte[] byArray3 = cipher.doFinal("\u00c4\u0096g\u0098v\u00f8\u00a2\u0085\u00a8\u00a4\u0018\u000b\u00a1\u00e8TC\u009d\u00d7\u0097\u00e4\u0018\u00e6\u00acb\u00d2+G\u0095\u00ca#\u00c0ME\u00d6\u00f9\u000f8\u008e\u00f2k".getBytes("ISO-8859-1"));
        rAwAE = kQ.bVq(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l2 = 3327671005896126166L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                adoPO = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static int bVo() {
        int n = kQ.bVn();
        try {
            if (n == 0) {
                return 8;
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw kQ.bVp(illegalStateException);
        }
        return 0;
    }

    private static String bVq(byte[] byArray) {
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

    protected final boolean bVk() {
        boolean bl;
        block8: {
            block7: {
                kQ kQ2;
                block6: {
                    long l = yTRZZ ^ 0x54A02CB87007L;
                    int n = kQ.bVo();
                    try {
                        try {
                            kQ2 = this;
                            if (n == 0) break block6;
                            if (!kQ2.FKQkw) break block7;
                        }
                        catch (IllegalStateException illegalStateException) {
                            throw kQ.bVp(illegalStateException);
                        }
                        kQ2 = this;
                    }
                    catch (IllegalStateException illegalStateException) {
                        throw kQ.bVp(illegalStateException);
                    }
                }
                try {
                    if (kQ2.WfBOj == null) break block7;
                    bl = true;
                    break block8;
                }
                catch (IllegalStateException illegalStateException) {
                    throw kQ.bVp(illegalStateException);
                }
            }
            bl = false;
        }
        return bl;
    }

    public void bVi(VertexFormat.class_5596 class_55962, VertexFormat vertexFormat) {
        long l = yTRZZ ^ 0x6E6CDB69DE9BL;
        this.WfBOj = new class_287(this.vSpyE, class_55962, vertexFormat);
        this.FKQkw = true;
        int n = kQ.bVn();
        try {
            if (iS.bwL() == null) {
                kQ.bVm(++n);
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw kQ.bVp(illegalStateException);
        }
    }

    public static void bVm(int n) {
        FmTZh = n;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    protected final void bVj() {
        kQ kQ2;
        block6: {
            long l = yTRZZ ^ 0x1ED1B7C24FBL;
            int n = kQ.bVo();
            try {
                try {
                    kQ2 = this;
                    if (n == 0) break block6;
                    if (!kQ2.FKQkw) throw new IllegalStateException(this.getClass().getSimpleName() + rAwAE);
                }
                catch (IllegalStateException illegalStateException) {
                    throw kQ.bVp(illegalStateException);
                }
                kQ2 = this;
            }
            catch (IllegalStateException illegalStateException) {
                throw kQ.bVp(illegalStateException);
            }
        }
        try {
            if (kQ2.WfBOj != null) return;
            throw new IllegalStateException(this.getClass().getSimpleName() + rAwAE);
        }
        catch (IllegalStateException illegalStateException) {
            throw kQ.bVp(illegalStateException);
        }
    }

    private static IllegalStateException bVp(IllegalStateException illegalStateException) {
        return illegalStateException;
    }

    public static int bVn() {
        return FmTZh;
    }

    protected final void bVl() {
        this.FKQkw = false;
        this.WfBOj = null;
    }
}
