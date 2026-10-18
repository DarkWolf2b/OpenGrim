/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1937
 *  net.minecraft.class_243
 *  net.minecraft.class_3857
 *  net.minecraft.class_3959$class_242
 *  net.minecraft.class_3959$class_3960
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1937;
import net.minecraft.class_243;
import net.minecraft.class_3857;
import net.minecraft.class_3959;
import sixtwo.gb;
import sixtwo.mi;
import sixtwo.mj;
import sixtwo.mk;

public class mh {
    private final class_1937 foaYa;
    private final class_1297 QZsGX;
    private class_243 qwkOz;
    private class_243 gPhig;
    private int BYsgz;
    private double HzTbw;
    private double Owetf;
    private double xbQRr;
    private double nnkxA;
    private boolean gifiq;
    private boolean RGkqd;
    private class_3959.class_3960 sFGuI;
    private class_3959.class_242 ZbWwl;
    private boolean KfLbf;
    private mi JCjmz;
    private static final long UfnGN = gb.aYR(5815992448394471741L, -6440912917958466716L, MethodHandles.lookup().lookupClass()).a(70956652791312L);
    private static final long ckbBc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mh(class_1937 class_19372, class_1297 class_12972, class_243 class_2432, class_243 class_2433) {
        long l = UfnGN ^ 0x323AB582FA76L;
        this.BYsgz = (int)ckbBc;
        this.HzTbw = -128.0;
        this.Owetf = 0.99;
        this.xbQRr = 0.8;
        this.nnkxA = 0.03;
        this.sFGuI = class_3959.class_3960.field_17558;
        this.ZbWwl = class_3959.class_242.field_1348;
        this.KfLbf = true;
        this.JCjmz = mi.CkcQW;
        this.foaYa = class_19372;
        this.QZsGX = class_12972;
        this.qwkOz = class_2432;
        this.gPhig = class_2433;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = UfnGN ^ 0x4312A0DECCE8L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -5405549512601882712L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                ckbBc = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public class_243 ckj() {
        return this.qwkOz;
    }

    public class_243 ckk() {
        return this.gPhig;
    }

    public boolean ckr() {
        return this.RGkqd;
    }

    public mh ckI(boolean bl) {
        this.KfLbf = bl;
        return this;
    }

    public mh ckE(boolean bl) {
        this.RGkqd = bl;
        return this;
    }

    public class_1937 ckh() {
        return this.foaYa;
    }

    public boolean cku() {
        return this.KfLbf;
    }

    public class_3959.class_242 ckt() {
        return this.ZbWwl;
    }

    public class_3959.class_3960 cks() {
        return this.sFGuI;
    }

    public mi ckv() {
        return this.JCjmz;
    }

    public mh ckJ(mi mi2) {
        mi mi3;
        block2: {
            block3: {
                long l = UfnGN ^ 0x15C3BC70319AL;
                int[] nArray = mk.cle();
                try {
                    mh mh2 = this;
                    mi3 = mi2;
                    if (nArray != null) break block2;
                    if (mi3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw mh.ckK(matchException);
                }
                mi3 = mi.CkcQW;
                break block2;
            }
            mi3 = mi2;
        }
        mh2.JCjmz = mi3;
        return this;
    }

    public double cko() {
        return this.xbQRr;
    }

    public mh ckG(class_3959.class_3960 class_39602) {
        this.sFGuI = class_39602;
        return this;
    }

    public mh ckH(class_3959.class_242 class_2422) {
        this.ZbWwl = class_2422;
        return this;
    }

    public class_1297 cki() {
        return this.QZsGX;
    }

    public double ckm() {
        return this.HzTbw;
    }

    public double ckn() {
        return this.Owetf;
    }

    public mh ckw(class_243 class_2432) {
        this.qwkOz = class_2432;
        return this;
    }

    private static MatchException ckK(MatchException matchException) {
        return matchException;
    }

    public int ckl() {
        return this.BYsgz;
    }

    public double ckp() {
        return this.nnkxA;
    }

    public boolean ckq() {
        return this.gifiq;
    }

    public mh ckB(double d) {
        this.xbQRr = d;
        return this;
    }

    public mh cky(int n) {
        this.BYsgz = Math.max(1, n);
        return this;
    }

    public mh ckC(double d) {
        this.nnkxA = d;
        return this;
    }

    public static mh ckf(class_1937 class_19372, class_1297 class_12972, class_243 class_2432, class_243 class_2433) {
        return new mh(class_19372, class_12972, class_2432, class_2433);
    }

    public mh ckz(double d) {
        this.HzTbw = d;
        return this;
    }

    public mh ckA(double d) {
        this.Owetf = d;
        return this;
    }

    public static mh ckg(class_3857 class_38572) {
        return mh.ckf(class_38572.method_73183(), (class_1297)class_38572, class_38572.method_73189(), class_38572.method_18798()).ckF(class_38572.method_5740());
    }

    public mh ckD(mj mj2) {
        block4: {
            block5: {
                long l = UfnGN ^ 0x3E3370B771A8L;
                int[] nArray = mk.cle();
                try {
                    try {
                        if (nArray != null) break block4;
                        if (mj2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw mh.ckK(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw mh.ckK(matchException);
                }
            }
            this.Owetf = mj2.airDrag();
            this.xbQRr = mj2.waterDrag();
            this.nnkxA = mj2.gravity();
            this.gifiq = mj2.noGravity();
            this.RGkqd = mj2.isArrow();
        }
        return this;
    }

    public mh ckF(boolean bl) {
        this.gifiq = bl;
        return this;
    }

    public mh ckx(class_243 class_2432) {
        this.gPhig = class_2432;
        return this;
    }
}
