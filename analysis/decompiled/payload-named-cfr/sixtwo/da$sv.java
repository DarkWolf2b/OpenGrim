/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.sound.SoundInstance
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 *  org.apache.commons.lang3.StringUtils
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.apache.commons.lang3.StringUtils;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

class da$sv {
    private final SoundInstance wneJp;
    private final Vec3d izVKY;
    private final long zstpO;
    private boolean zUbCd;
    private final rk Taibw;
    private static final long iFBqt = gb.aYR(7556872127427825018L, -7644387685138179365L, MethodHandles.lookup().lookupClass()).a(252502118503577L);
    private static final String ySNLn;
    private static final long xwXDE;
    private static final long YpDrW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public da$sv(SoundInstance soundInstance, Vec3d vec3d) {
        long l2 = iFBqt ^ 0x740C731E9204L;
        this.zUbCd = false;
        this.Taibw = new rk((int)xwXDE);
        this.wneJp = soundInstance;
        this.izVKY = vec3d;
        this.zstpO = System.currentTimeMillis();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = iFBqt ^ 0x1BF16801EF5EL;
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
        byte[] byArray3 = cipher.doFinal("l\u008f\u00f1\u00eb9-6\u0088".getBytes("ISO-8859-1"));
        ySNLn = da$sv.dom(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long l3 = -1541778739621727163L;
        byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
        xwXDE = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
        Cipher cipher3 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory3 = SecretKeyFactory.getInstance("DES");
        byte[] byArray7 = new byte[8];
        byte[] byArray8 = byArray7;
        byArray7[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher3.init(2, (Key)secretKeyFactory3.generateSecret(new DESKeySpec(byArray8)), new IvParameterSpec(new byte[8]));
                long l4 = -328728050007090688L;
                byte[] byArray9 = cipher3.doFinal(new byte[]{(byte)(l4 >>> 56), (byte)(l4 >>> 48), (byte)(l4 >>> 40), (byte)(l4 >>> 32), (byte)(l4 >>> 24), (byte)(l4 >>> 16), (byte)(l4 >>> 8), (byte)l4});
                YpDrW = ((long)byArray9[0] & 0xFFL) << 56 | ((long)byArray9[1] & 0xFFL) << 48 | ((long)byArray9[2] & 0xFFL) << 40 | ((long)byArray9[3] & 0xFFL) << 32 | ((long)byArray9[4] & 0xFFL) << 24 | ((long)byArray9[5] & 0xFFL) << 16 | ((long)byArray9[6] & 0xFFL) << 8 | (long)byArray9[7] & 0xFFL;
                return;
            }
            byArray8 = byArray8;
            byArray8[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static String dom(byte[] byArray) {
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

    private static MatchException dol(MatchException matchException) {
        return matchException;
    }

    public void doj(lC lC2, int n2) {
        block14: {
            block13: {
                rj rj2;
                rk rk2;
                boolean bl2;
                rk rk3;
                iS[] iSArray;
                block11: {
                    block12: {
                        long l2 = iFBqt ^ 0x578E3F231214L;
                        iSArray = dh.afl();
                        try {
                            rk3 = this.Taibw;
                            bl2 = this.zUbCd;
                            if (iSArray != null) break block11;
                            if (bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw da$sv.dol(matchException);
                        }
                        bl2 = true;
                        break block11;
                    }
                    bl2 = false;
                }
                try {
                    rk3.dhc(bl2);
                    rk2 = this.Taibw;
                    rj2 = !this.zUbCd ? rj.XzDkv : rj.AYqck;
                }
                catch (MatchException matchException) {
                    throw da$sv.dol(matchException);
                }
                rk2.dhs(rj2);
                long l3 = System.currentTimeMillis() - this.zstpO;
                try {
                    try {
                        if (iSArray != null) break block13;
                        if (l3 <= (long)n2 * YpDrW) break block14;
                    }
                    catch (MatchException matchException) {
                        throw da$sv.dol(matchException);
                    }
                    this.zUbCd = true;
                }
                catch (MatchException matchException) {
                    throw da$sv.dol(matchException);
                }
            }
            this.Taibw.dhd(0.0f);
        }
        Vec2f vec2f = jI.bIw(this.izVKY);
        try {
            if (vec2f == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw da$sv.dol(matchException);
        }
        mG mG2 = rD.dlM().bjb();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        String string = StringUtils.capitalize((String)this.wneJp.getId().getPath().replaceAll(ySNLn, " ").replace("_", " "));
        float f2 = lq2.cao(string) + 10.0f;
        float f3 = lq2.cat() + 10.0f;
        float f4 = vec2f.x - f2 / 2.0f;
        float f5 = vec2f.y;
        float f6 = f4 + jf.bAH(lq2.cao(string), f2);
        float f7 = f5 + jf.bAH(lq2.cat(), f3);
        float f8 = this.Taibw.dhj();
        jH.bId(lC2, f4 + f2 / 2.0f, f5 + f3 / 2.0f, 0.5f + 0.5f * f8);
        lC2.ccU(f4, f5, f2, f3, this.Taibw.dhj(), 0.0f);
        lC2.cez(lq2, string, f6, f7, mG2);
        jH.bIf();
    }

    public boolean dok() {
        float f2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = iFBqt ^ 0x314210443B9DL;
                    iSArray = dh.afl();
                    try {
                        try {
                            float f3 = this.Taibw.dhj() - 0.0f;
                            f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (iSArray != null) break block6;
                            if (f2 != false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw da$sv.dol(matchException);
                        }
                        f2 = (float)this.zUbCd;
                    }
                    catch (MatchException matchException) {
                        throw da$sv.dol(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (f2 == false) break block7;
                }
                catch (MatchException matchException) {
                    throw da$sv.dol(matchException);
                }
                f2 = 1.0f;
                break block8;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }
}

