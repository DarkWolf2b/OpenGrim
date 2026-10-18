/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Items
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.item.Items;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.rj;
import sixtwo.rk;

class dn$sF {
    private final Vec3d MZUGo;
    private final long SAKLk;
    private boolean uAOSS;
    private final rk DUqGa;
    private static final long HGXbz = gb.aYR(9072864521275221345L, 5003618611436866665L, MethodHandles.lookup().lookupClass()).a(138821822091752L);
    private static final long jYWIl;
    private static final long ZOVgw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dn$sF(Vec3d vec3d) {
        long l2 = HGXbz ^ 0x341688605BFDL;
        this.uAOSS = false;
        this.DUqGa = new rk((int)jYWIl);
        this.MZUGo = vec3d;
        this.SAKLk = System.currentTimeMillis();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = HGXbz ^ 0x49D07AB23E9BL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long l3 = -4365810018466571872L;
        byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
        jYWIl = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l4 = -8523123680099423305L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l4 >>> 56), (byte)(l4 >>> 48), (byte)(l4 >>> 40), (byte)(l4 >>> 32), (byte)(l4 >>> 24), (byte)(l4 >>> 16), (byte)(l4 >>> 8), (byte)l4});
                ZOVgw = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException doL(MatchException matchException) {
        return matchException;
    }

    public boolean doK() {
        float f2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = HGXbz ^ 0x5B07B061B7DCL;
                    iSArray = dh.afl();
                    try {
                        try {
                            float f3 = this.DUqGa.dhj() - 0.0f;
                            f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (iSArray != null) break block6;
                            if (f2 != false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw dn$sF.doL(matchException);
                        }
                        f2 = (float)this.uAOSS;
                    }
                    catch (MatchException matchException) {
                        throw dn$sF.doL(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (f2 == false) break block7;
                }
                catch (MatchException matchException) {
                    throw dn$sF.doL(matchException);
                }
                f2 = 1.0f;
                break block8;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public void doJ(lC lC2, int n2) {
        block14: {
            block13: {
                rj rj2;
                rk rk2;
                boolean bl2;
                rk rk3;
                iS[] iSArray;
                block11: {
                    block12: {
                        long l2 = HGXbz ^ 0x42265D47A192L;
                        iSArray = dh.afl();
                        try {
                            rk3 = this.DUqGa;
                            bl2 = this.uAOSS;
                            if (iSArray != null) break block11;
                            if (bl2) break block12;
                        }
                        catch (MatchException matchException) {
                            throw dn$sF.doL(matchException);
                        }
                        bl2 = true;
                        break block11;
                    }
                    bl2 = false;
                }
                try {
                    rk3.dhc(bl2);
                    rk2 = this.DUqGa;
                    rj2 = !this.uAOSS ? rj.XzDkv : rj.AYqck;
                }
                catch (MatchException matchException) {
                    throw dn$sF.doL(matchException);
                }
                rk2.dhs(rj2);
                long l3 = System.currentTimeMillis() - this.SAKLk;
                try {
                    try {
                        if (iSArray != null) break block13;
                        if (l3 <= (long)n2 * ZOVgw) break block14;
                    }
                    catch (MatchException matchException) {
                        throw dn$sF.doL(matchException);
                    }
                    this.uAOSS = true;
                }
                catch (MatchException matchException) {
                    throw dn$sF.doL(matchException);
                }
            }
            this.DUqGa.dhd(0.0f);
        }
        Vec2f vec2f = jI.bIw(this.MZUGo);
        try {
            if (vec2f == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dn$sF.doL(matchException);
        }
        float f2 = 25.0f;
        float f3 = vec2f.x - f2 / 2.0f;
        float f4 = vec2f.y;
        float f5 = f3 + jf.bAH(16.0f, f2);
        float f6 = f4 + jf.bAH(16.0f, f2);
        float f7 = this.DUqGa.dhj();
        jH.bId(lC2, f3 + f2 / 2.0f, f4 + f2 / 2.0f, 0.5f + 0.5f * f7);
        lC2.ccW(f3, f4, f2, f2, f7, 0.0f, ld.all(f2 / 2.0f), 3.0f);
        lC2.cdZ(Items.FIREWORK_ROCKET, f5, f6, 1.0f).bGv();
        jH.bIf();
    }
}

