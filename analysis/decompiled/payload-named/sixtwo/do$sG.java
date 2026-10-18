/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kG;
import sixtwo.lC;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

class do$sG {
    private final Entity ZaYMC;
    private boolean hkzUL;
    private final rk zzzOY;
    private static final long yWgTa = gb.aYR(6292795855422193390L, 741134432073114025L, MethodHandles.lookup().lookupClass()).a(62048899624806L);
    private static final long dEIfC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public do$sG(Entity entity) {
        long l2 = yWgTa ^ 0x1B91BCF2CC66L;
        this.hkzUL = false;
        this.zzzOY = new rk((int)dEIfC).dhs(rj.XzDkv);
        this.ZaYMC = entity;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = yWgTa ^ 0x2B454819E891L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 7637147985002929944L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                dEIfC = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException doO(MatchException matchException) {
        return matchException;
    }

    public void doM(lC lC2, float f2, float f3, float f4, mG mG2) {
        boolean bl2;
        rk rk2;
        block2: {
            block3: {
                long l2 = yWgTa ^ 0x2EF2F6D0494AL;
                iS[] iSArray = dh.afl();
                try {
                    rk2 = this.zzzOY;
                    bl2 = this.hkzUL;
                    if (iSArray != null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw do$sG.doO(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        rk2.dhc(bl2);
        float f5 = this.zzzOY.dhj();
        mG mG3 = mG2.cob(f5);
        float f6 = 30.0f - 30.0f * f5;
        lG.XSRvt.bUH(kG.bTw(lC2.cfc(), f2 - f4 / 2.0f, f3 - f6, 0.0, f4, f4).dtF(mG3).dtG());
    }

    public boolean doN() {
        boolean bl2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = yWgTa ^ 0x4961D9DF9F4AL;
                    iSArray = dh.afl();
                    try {
                        try {
                            bl2 = this.hkzUL;
                            if (iSArray != null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw do$sG.doO(matchException);
                        }
                        float f2 = this.zzzOY.dhj() - 0.0f;
                        bl2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw do$sG.doO(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw do$sG.doO(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }
}

