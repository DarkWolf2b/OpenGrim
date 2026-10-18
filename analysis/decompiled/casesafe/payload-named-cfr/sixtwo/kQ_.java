/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.util.BufferAllocator
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.util.BufferAllocator;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kP;

public abstract class kQ<T>
implements kP<T> {
    private final BufferAllocator vSpyE;
    protected BufferBuilder WfBOj;
    private boolean FKQkw;
    private static int FmTZh;
    private static final long yTRZZ;
    private static final String rAwAE;
    private static final long adoPO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kQ() {
        long l2 = yTRZZ ^ 0x62EB9FFE61D7L;
        this.vSpyE = new BufferAllocator((int)adoPO);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        yTRZZ = gb.aYR(5115572367117417848L, -6167705444224521846L, MethodHandles.lookup().lookupClass()).a(62993390440604L);
        long l2 = yTRZZ ^ 0x1CB5ACD7E0A1L;
        kQ.bVm(0);
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
        byte[] byArray3 = cipher.doFinal("\u00c4\u0096g\u0098v\u00f8\u00a2\u0085\u00a8\u00a4\u0018\u000b\u00a1\u00e8TC\u009d\u00d7\u0097\u00e4\u0018\u00e6\u00acb\u00d2+G\u0095\u00ca#\u00c0ME\u00d6\u00f9\u000f8\u008e\u00f2k".getBytes("ISO-8859-1"));
        rAwAE = kQ.bVq(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = 3327671005896126166L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                adoPO = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public static int bVo() {
        int n2 = kQ.bVn();
        try {
            if (n2 == 0) {
                return 8;
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw kQ.bVp(illegalStateException);
        }
        return 0;
    }

    private static String bVq(byte[] byArray) {
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

    protected final boolean bVk() {
        boolean bl2;
        block8: {
            block7: {
                kQ kQ2;
                block6: {
                    long l2 = yTRZZ ^ 0x54A02CB87007L;
                    int n2 = kQ.bVo();
                    try {
                        try {
                            kQ2 = this;
                            if (n2 == 0) break block6;
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
                    bl2 = true;
                    break block8;
                }
                catch (IllegalStateException illegalStateException) {
                    throw kQ.bVp(illegalStateException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public void bVi(VertexFormat.DrawMode drawMode, VertexFormat vertexFormat) {
        long l2 = yTRZZ ^ 0x6E6CDB69DE9BL;
        this.WfBOj = new BufferBuilder(this.vSpyE, drawMode, vertexFormat);
        this.FKQkw = true;
        int n2 = kQ.bVn();
        try {
            if (iS.bwL() == null) {
                kQ.bVm(++n2);
            }
        }
        catch (IllegalStateException illegalStateException) {
            throw kQ.bVp(illegalStateException);
        }
    }

    public static void bVm(int n2) {
        FmTZh = n2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    protected final void bVj() {
        kQ kQ2;
        block6: {
            long l2 = yTRZZ ^ 0x1ED1B7C24FBL;
            int n2 = kQ.bVo();
            try {
                try {
                    kQ2 = this;
                    if (n2 == 0) break block6;
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

