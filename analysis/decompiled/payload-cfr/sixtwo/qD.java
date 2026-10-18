/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_10055
 *  net.minecraft.class_11659
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_3883
 *  net.minecraft.class_3887
 *  net.minecraft.class_4587
 *  net.minecraft.class_591
 *  net.minecraft.class_742
 *  net.minecraft.class_7833
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10055;
import net.minecraft.class_11659;
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_3883;
import net.minecraft.class_3887;
import net.minecraft.class_4587;
import net.minecraft.class_591;
import net.minecraft.class_742;
import net.minecraft.class_7833;
import org.joml.Quaternionfc;
import sixtwo.cS;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.jo;
import sixtwo.js;
import sixtwo.kn;
import sixtwo.ky;
import sixtwo.mG;
import sixtwo.oR;
import sixtwo.qC;
import sixtwo.qu;
import sixtwo.rD;

public class qD
extends class_3887<class_10055, class_591> {
    private static final long YijCR = gb.aYR(8156976936887596683L, -6150078433035784067L, MethodHandles.lookup().lookupClass()).a(182193575313587L);
    private static final long tRFrF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qD(class_3883<class_10055, class_591> class_38832) {
        super(class_38832);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = YijCR ^ 0xFBB7105F979L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -5095854130532000521L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                tRFrF = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    private static MatchException cZG(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void cZE(class_4587 class_45872, class_11659 class_116592, int n, class_10055 class_100552, float f, float f2) {
        float f3;
        int n2;
        class_742 class_7422;
        cS cS2;
        block57: {
            block58: {
                boolean bl;
                block55: {
                    block56: {
                        block53: {
                            block54: {
                                block50: {
                                    block51: {
                                        block52: {
                                            block48: {
                                                block49: {
                                                    class_742 class_7423;
                                                    block46: {
                                                        block47: {
                                                            class_1297 class_12972;
                                                            block45: {
                                                                boolean bl2;
                                                                block44: {
                                                                    long l = YijCR ^ 0x8C621217AE0L;
                                                                    bl = qC.cZy();
                                                                    try {
                                                                        if (rD.dlmvG.field_1687 == null) {
                                                                            return;
                                                                        }
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    try {
                                                                        bl2 = qu.cmARD.get();
                                                                        if (!bl) break block44;
                                                                        if (bl2) return;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    bl2 = hF.BQuMu;
                                                                }
                                                                if (!bl2) {
                                                                    return;
                                                                }
                                                                cS2 = rD.dlJ().aZx(cS.class);
                                                                try {
                                                                    if (!cS2.bag()) {
                                                                        return;
                                                                    }
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                                class_1297 class_12973 = rD.dlmvG.field_1687.method_8469(class_100552.field_53528);
                                                                try {
                                                                    try {
                                                                        class_12972 = class_12973;
                                                                        if (!bl) break block45;
                                                                        if (!(class_12972 instanceof class_742)) return;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw qD.cZG(matchException);
                                                                    }
                                                                    class_12972 = class_12973;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                            }
                                                            class_7422 = (class_742)class_12972;
                                                            try {
                                                                if (!bl) {
                                                                    return;
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                            try {
                                                                try {
                                                                    class_7423 = class_7422;
                                                                    if (!bl) break block46;
                                                                    if (!class_7423.method_5767()) break block47;
                                                                    return;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw qD.cZG(matchException);
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                        }
                                                        class_7423 = class_7422;
                                                    }
                                                    try {
                                                        try {
                                                            try {
                                                                if (class_7423 != rD.dlmvG.field_1724) break block48;
                                                                n2 = cS2.Zb().TC();
                                                                if (!bl) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw qD.cZG(matchException);
                                                            }
                                                            if (n2 == 0) return;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw qD.cZG(matchException);
                                                        }
                                                        n2 = rD.dlmvG.field_1690.method_31044().method_31034();
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw qD.cZG(matchException);
                                                    }
                                                }
                                                try {
                                                    if (!bl) break block50;
                                                    if (n2 == 0) break block51;
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qD.cZG(matchException);
                                                }
                                            }
                                            try {
                                                try {
                                                    n2 = cS2.Zc().TC();
                                                    if (!bl) break block52;
                                                    if (n2 == 0) return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw qD.cZG(matchException);
                                                }
                                                n2 = rD.dmc().ddy((class_1657)class_7422);
                                            }
                                            catch (MatchException matchException) {
                                                throw qD.cZG(matchException);
                                            }
                                        }
                                        try {
                                            if (!bl) break block50;
                                            if (n2 != 0) break block51;
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw qD.cZG(matchException);
                                        }
                                    }
                                    n2 = kn.YNOIY;
                                }
                                try {
                                    if (!bl) break block53;
                                    if (n2 == 0) break block54;
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw qD.cZG(matchException);
                                }
                            }
                            n2 = js.bFC();
                        }
                        try {
                            if (!bl) break block55;
                            if (n2 == 0) break block56;
                            return;
                        }
                        catch (MatchException matchException) {
                            throw qD.cZG(matchException);
                        }
                    }
                    n2 = n;
                }
                try {
                    try {
                        if (!bl) break block57;
                        if (n2 != (int)tRFrF) break block58;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw qD.cZG(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw qD.cZG(matchException);
                }
            }
            class_45872.method_22903();
            n2 = oR.cJN().cIT() ? 1 : 0;
        }
        try {
            f3 = n2 != 0 ? -0.43f : -0.5f;
        }
        catch (MatchException matchException) {
            throw qD.cZG(matchException);
        }
        float f4 = f3;
        ((class_591)this.method_17165()).method_2838().method_22703(class_45872);
        class_45872.method_46416(0.0f, f4, 0.0f);
        class_45872.method_22907((Quaternionfc)class_7833.field_40717.rotationDegrees(180.0f));
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(90.0f));
        mG mG2 = cS2.Zd().Wf();
        int n3 = cS2.Ze().VC();
        jo.bEt(() -> ky.bSd(class_45872, class_7422, mG2, n3));
        class_45872.method_22909();
    }
}
