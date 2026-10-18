/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_11905
 *  net.minecraft.class_11908
 *  net.minecraft.class_11909
 *  net.minecraft.class_241
 *  net.minecraft.class_2561
 *  net.minecraft.class_304
 *  net.minecraft.class_332
 *  net.minecraft.class_3532
 *  net.minecraft.class_437
 *  org.jspecify.annotations.NonNull
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11905;
import net.minecraft.class_11908;
import net.minecraft.class_11909;
import net.minecraft.class_241;
import net.minecraft.class_2561;
import net.minecraft.class_304;
import net.minecraft.class_332;
import net.minecraft.class_3532;
import net.minecraft.class_437;
import org.jspecify.annotations.NonNull;
import sixtwo.ad;
import sixtwo.az;
import sixtwo.cs;
import sixtwo.gb;
import sixtwo.iX;
import sixtwo.kk;
import sixtwo.lC;
import sixtwo.mA;
import sixtwo.rD;
import sixtwo.rk;
import sixtwo.rm;
import sixtwo.rr;

public abstract class av
extends class_437
implements cs {
    protected final rk Weytw;
    protected boolean VWsmm;
    private static boolean LSCIa;
    private static final long oVYdO;
    private static final long myUnc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected av() {
        long l = oVYdO ^ 0x1B5D73AB471DL;
        super((class_2561)class_2561.method_43473());
        this.Weytw = new rk((int)myUnc);
        this.VWsmm = true;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        oVYdO = gb.aYR(5327485615965762991L, -6615214864910727710L, MethodHandles.lookup().lookupClass()).a(37594205416973L);
        long l = oVYdO ^ 0x7B5CA3A0E4D4L;
        av.sk(false);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -3729010028508391083L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                myUnc = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public static boolean sl() {
        return LSCIa;
    }

    protected abstract class_241 n();

    public static boolean sm() {
        boolean bl = av.sl();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw av.sn(matchException);
        }
        return false;
    }

    public abstract void m(lC var1);

    protected void si() {
        String string;
        block5: {
            long l = oVYdO ^ 0x6ABD0C35883L;
            string = az.tE();
            try {
                try {
                    if (ad.rmmkh == null && !rD.dme().ddY()) break block5;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
                return;
            }
            catch (MatchException matchException) {
                throw av.sn(matchException);
            }
        }
        for (class_304 class_3042 : iX.HpSlL) {
            class_3042.method_23481(rr.diW(class_3042.method_1429().method_1444()));
            if (string != null) continue;
        }
    }

    public rk sj() {
        return this.Weytw;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    protected double sh() {
        double d;
        double d2;
        double d3;
        block18: {
            class_241 class_2412;
            class_241 class_2413;
            String string;
            block17: {
                float f2;
                block16: {
                    class_241 class_2414;
                    block15: {
                        long l = oVYdO ^ 0x538F088B9D98L;
                        d3 = 2.0;
                        string = az.tE();
                        class_2413 = this.n();
                        try {
                            class_2414 = class_2413;
                            if (string == null) break block15;
                            if (class_2414 == null) return d3;
                        }
                        catch (MatchException matchException) {
                            throw av.sn(matchException);
                        }
                        class_2414 = class_2413;
                    }
                    try {
                        try {
                            try {
                                float f3 = class_2414.field_1343 - 0.0f;
                                f2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                                if (string == null) break block16;
                                if (f2 <= 0) return d3;
                            }
                            catch (MatchException matchException) {
                                throw av.sn(matchException);
                            }
                            class_2412 = class_2413;
                            if (string == null) break block17;
                        }
                        catch (MatchException matchException) {
                            throw av.sn(matchException);
                        }
                        float f4 = class_2412.field_1342 - 0.0f;
                        f2 = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                }
                try {
                    if (f2 <= 0) {
                        return d3;
                    }
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
                class_2412 = rm.dip();
            }
            class_241 class_2415 = class_2412;
            double d4 = class_2415.field_1343 / class_2413.field_1343;
            double d5 = class_2415.field_1342 / class_2413.field_1342;
            d2 = Math.min(d4, d5);
            try {
                try {
                    d = d2;
                    if (string == null) return d;
                    if (Double.isFinite(d)) break block18;
                    return d3;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            catch (MatchException matchException) {
                throw av.sn(matchException);
            }
        }
        d = class_3532.method_15350((double)d2, (double)0.5, (double)d3);
        return d;
    }

    public boolean closing() {
        return this.VWsmm;
    }

    private static MatchException sn(MatchException matchException) {
        return matchException;
    }

    public float sf() {
        return 0.5f + 0.5f * this.Weytw.dhj();
    }

    public static void sk(boolean bl) {
        LSCIa = bl;
    }

    protected void sg() {
        kk.bPH();
    }

    public final boolean method_25401(double d, double d2, double d3, double d4) {
        boolean bl;
        block4: {
            block5: {
                long l = oVYdO ^ 0x18471DD50F81L;
                class_241 class_2412 = rm.dis();
                String string = az.tE();
                try {
                    try {
                        bl = this.onMouseScrolled(class_2412.field_1343, class_2412.field_1342, d4);
                        if (string == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl = super.method_25401(d, d2, d3, d4);
        }
        return bl;
    }

    public final boolean method_25406(class_11909 class_119092) {
        boolean bl;
        block4: {
            block5: {
                long l = oVYdO ^ 0x2BD621F900FBL;
                mA mA2 = mA.cmN(class_119092.method_74245());
                String string = az.tE();
                class_241 class_2412 = rm.dis();
                try {
                    try {
                        bl = this.onMouseReleased(class_2412.field_1343, class_2412.field_1342, mA2);
                        if (string == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl = super.method_25406(class_119092);
        }
        return bl;
    }

    public final boolean method_25403(class_11909 class_119092, double d, double d2) {
        boolean bl;
        block4: {
            block5: {
                long l = oVYdO ^ 0x38DC6776A938L;
                mA mA2 = mA.cmN(class_119092.method_74245());
                String string = az.tE();
                class_241 class_2412 = rm.dis();
                try {
                    try {
                        bl = this.onMouseDragged(class_2412.field_1343, class_2412.field_1342, mA2, d, d2);
                        if (string == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl = super.method_25403(class_119092, d, d2);
        }
        return bl;
    }

    public final boolean method_25400(class_11905 class_119052) {
        boolean bl;
        block4: {
            block5: {
                long l = oVYdO ^ 0x1D128A4B1161L;
                String string = az.tE();
                try {
                    try {
                        bl = this.onCharTyped((char)class_119052.comp_4793());
                        if (string == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl = super.method_25400(class_119052);
        }
        return bl;
    }

    public final boolean method_25402(class_11909 class_119092, boolean bl) {
        boolean bl2;
        block4: {
            block5: {
                long l = oVYdO ^ 0x1B16028A05F3L;
                mA mA2 = mA.cmN(class_119092.method_74245());
                class_241 class_2412 = rm.dis();
                String string = az.tE();
                try {
                    try {
                        bl2 = this.onMouseClicked(class_2412.field_1343, class_2412.field_1342, mA2);
                        if (string == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl2 = super.method_25402(class_119092, bl);
        }
        return bl2;
    }

    public void method_25420(class_332 class_3322, int n, int n2, float f2) {
        block5: {
            av av2;
            block4: {
                long l = oVYdO ^ 0x362932BE2BA3L;
                String string = az.tE();
                try {
                    try {
                        av2 = this;
                        if (string == null) break block4;
                        if (av2.field_22787.field_1687 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    av2 = this;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            av2.method_57728(class_3322, f2);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public final void method_25394(@NonNull class_332 class_3322, int n, int n2, float f2) {
        rm.dil(this.sh());
        class_241 class_2412 = rm.dis();
        lC lC2 = lC.ccP(class_3322, class_2412.field_1343, class_2412.field_1342, f2);
        try {
            this.m(lC2);
        }
        finally {
            lC2.ccR();
            rm.dim();
        }
    }

    public final boolean method_25404(class_11908 class_119082) {
        boolean bl;
        block4: {
            block5: {
                long l = oVYdO ^ 0x3B9AE85EEC96L;
                String string = az.tE();
                try {
                    try {
                        bl = this.onKeyPressed(class_119082.comp_4795(), class_119082.comp_4796(), class_119082.comp_4797());
                        if (string == null) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw av.sn(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw av.sn(matchException);
                }
            }
            bl = super.method_25404(class_119082);
        }
        return bl;
    }

    public boolean method_25421() {
        return false;
    }
}
