/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import sixtwo.av;
import sixtwo.bA;
import sixtwo.bB;
import sixtwo.bC;
import sixtwo.fX;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jH;
import sixtwo.kd;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.la;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.pU;
import sixtwo.pW;
import sixtwo.pY;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;
import sixtwo.rr;

public class bD
extends av {
    private static bD tnZYS;
    private static final float zoXBz = -90.0f;
    private static final float WbPKY = 0.43f;
    private static final float lJYPx = 86.0f;
    private static final float IosTn = 118.0f;
    private static final float iXvMv = 34.0f;
    private final List<bC> OsaDL;
    private int LUWfM;
    private int QYxCg;
    private boolean zRUoI;
    private final rk BOnqc;
    private static final long QANEM;
    private static final String VxFyM;
    private static final long[] USzpw;
    private static final Integer[] oWvYs;
    private static final Map PcTAi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static bD LE() {
        bD bD2;
        block4: {
            block5: {
                long l2 = QANEM ^ 0x3DB0960B15A9L;
                int[] nArray = bB.b();
                try {
                    try {
                        bD2 = tnZYS;
                        if (nArray != null) break block4;
                        if (bD2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                    new bD();
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
            }
            bD2 = tnZYS;
        }
        return bD2;
    }

    public bD() {
        long l2 = QANEM ^ 0x449613794A9EL;
        this.OsaDL = new ArrayList<bC>();
        this.LUWfM = -1;
        this.QYxCg = -1;
        this.BOnqc = new rk((int)bD.LW("l", (int)3381, (long)(0x9FF9FF905227C1L ^ l2))).dhs(rj.MBpuQ);
        tnZYS = this;
        this.LF(pU.cTP());
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        QANEM = gb.aYR(8026135256837780643L, 7135336101674305979L, MethodHandles.lookup().lookupClass()).a(100175630757032L);
        long l2 = QANEM ^ 0x1A4BAFF25F76L;
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
        byte[] byArray3 = cipher.doFinal("\u0083 \u000f6\u00f5\u00d3\n\u00e3".getBytes("ISO-8859-1"));
        VxFyM = bD.LT(byArray3).intern();
        PcTAi = new HashMap(13);
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
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "$\u00acX\u00db\u00df\"P\u001d\u007f\u0080\u0094\u0094Y`~u";
        int n3 = "$\u00acX\u00db\u00df\"P\u001d\u007f\u0080\u0094\u0094Y`~u".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        USzpw = lArray;
        oWvYs = new Integer[2];
    }

    @Override
    protected Vec2f n() {
        float f2 = 270.0f;
        return new Vec2f(f2, f2);
    }

    @Override
    public void m(lC lC2) {
        bD bD2;
        float f2;
        float f3;
        float f4;
        block46: {
            int n2;
            float f5;
            float f6;
            float f7;
            float f8;
            block42: {
                int[] nArray;
                block43: {
                    block44: {
                        bD bD3;
                        block45: {
                            block40: {
                                int n3;
                                block41: {
                                    block39: {
                                        block38: {
                                            block36: {
                                                long l2 = QANEM ^ 0x1164FE2E484BL;
                                                int[] nArray2 = bB.b();
                                                this.Weytw.dhq((int)bD.LW("l", (int)6832, (long)(0x2A310C3311B43290L ^ l2)));
                                                this.Weytw.dhs(rj.XzDkv);
                                                nArray = nArray2;
                                                n3 = fX.aYl().aYm().VP();
                                                bA bA2 = this.LJ();
                                                f4 = bA2.centerX();
                                                f3 = bA2.centerY();
                                                f8 = bA2.outerRadius();
                                                f2 = bA2.innerRadius();
                                                f7 = bA2.diameter();
                                                f6 = this.Weytw.dhd(1.0f);
                                                f5 = this.sf();
                                                try {
                                                    block37: {
                                                        try {
                                                            try {
                                                                n2 = this.OsaDL.isEmpty();
                                                                if (nArray != null) break block36;
                                                                if (n2 == 0) break block37;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bD.LS(matchException);
                                                            }
                                                            this.LUWfM = -1;
                                                            if (nArray == null) break block38;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bD.LS(matchException);
                                                        }
                                                    }
                                                    n2 = this.VWsmm;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bD.LS(matchException);
                                                }
                                            }
                                            try {
                                                try {
                                                    if (nArray != null) break block39;
                                                    if (n2 != 0) break block38;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bD.LS(matchException);
                                                }
                                                this.LUWfM = this.LP(lC2, f4, f3, f2 * f5, f8 * f5);
                                            }
                                            catch (MatchException matchException) {
                                                throw bD.LS(matchException);
                                            }
                                        }
                                        n2 = this.LUWfM;
                                    }
                                    try {
                                        try {
                                            if (nArray != null) break block40;
                                            if (n2 == this.QYxCg) break block41;
                                        }
                                        catch (MatchException matchException) {
                                            throw bD.LS(matchException);
                                        }
                                        this.LR(this.QYxCg);
                                        this.BOnqc.dhg();
                                        this.QYxCg = this.LUWfM;
                                    }
                                    catch (MatchException matchException) {
                                        throw bD.LS(matchException);
                                    }
                                }
                                n2 = rr.diW(n3) ? 1 : 0;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            if (nArray != null) break block42;
                                                            if (n2 != 0) break block43;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bD.LS(matchException);
                                                        }
                                                        n2 = this.VWsmm ? 1 : 0;
                                                        if (nArray != null) break block42;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bD.LS(matchException);
                                                    }
                                                    if (n2 != 0) break block43;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bD.LS(matchException);
                                                }
                                                n2 = this.zRUoI ? 1 : 0;
                                                if (nArray != null) break block42;
                                            }
                                            catch (MatchException matchException) {
                                                throw bD.LS(matchException);
                                            }
                                            if (n2 != 0) break block43;
                                        }
                                        catch (MatchException matchException) {
                                            throw bD.LS(matchException);
                                        }
                                        bD3 = this;
                                        if (nArray != null) break block44;
                                    }
                                    catch (MatchException matchException) {
                                        throw bD.LS(matchException);
                                    }
                                    if (bD3.LUWfM < 0) break block45;
                                }
                                catch (MatchException matchException) {
                                    throw bD.LS(matchException);
                                }
                                this.LH();
                            }
                            catch (MatchException matchException) {
                                throw bD.LS(matchException);
                            }
                        }
                        this.zRUoI = true;
                        bD3 = this;
                    }
                    bD3.VWsmm = true;
                }
                try {
                    bD2 = this;
                    if (nArray != null) break block46;
                    n2 = bD2.OsaDL.isEmpty() ? 1 : 0;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
            }
            if (n2 != 0) {
                return;
            }
            jF.bHz(1.0f, 1.0f, 1.0f, MathHelper.clamp((float)f6, (float)0.0f, (float)1.0f));
            jH.bId(lC2, f4, f3, f5);
            this.LK(lC2, f4, f3, f7, f2, f8);
            bD2 = this;
        }
        try {
            bD2.LN(lC2, f4, f3, f2);
            jH.bIf();
            jF.bHz(1.0f, 1.0f, 1.0f, 1.0f);
            if (iS.bwL() == null) {
                bB.b(new int[2]);
            }
        }
        catch (MatchException matchException) {
            throw bD.LS(matchException);
        }
    }

    public void LF(Collection<? extends pY> collection) {
        block4: {
            Collection<? extends pY> collection2;
            int[] nArray;
            block3: {
                long l2 = QANEM ^ 0x26FFA9729BDBL;
                int[] nArray2 = bB.b();
                this.OsaDL.clear();
                nArray = nArray2;
                try {
                    collection2 = collection;
                    if (nArray != null) break block3;
                    if (collection2 == null) break block4;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
                collection2 = collection;
            }
            for (pY pY2 : collection2) {
                this.OsaDL.add(new bC(pY2));
                if (nArray == null) continue;
            }
        }
    }

    /*
     * Unable to fully structure code
     */
    private void LL(lC var1_1, float var2_2, float var3_3, float var4_4, float var5_5, float var6_6) {
        block7: {
            block6: {
                var7_7 = bD.QANEM ^ 111352886679631L;
                var9_8 = bB.b();
                try {
                    v0 = fX.aYf();
                    if (var9_8 != null) break block6;
                    if (!v0) {
                    }
                    ** GOTO lbl15
                }
                catch (MatchException v1) {
                    throw bD.LS(v1);
                }
                v0 = fX.aYe();
            }
            try {
                if (!v0) break block7;
lbl15:
                // 2 sources

                var1_1.cdN(var2_2, var3_3, var4_4, var4_4, var5_5, var6_6, 0.0f, 360.0f, 1.0f, 0.0f);
            }
            catch (MatchException v2) {
                throw bD.LS(v2);
            }
        }
    }

    private static String LT(byte[] byArray) {
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

    public static void LD() {
        long l2 = QANEM ^ 0x7C63269C975L;
        try {
            if (rD.dlmvG.world == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bD.LS(matchException);
        }
        bD bD2 = bD.LE();
        bD2.VWsmm = false;
        bD2.zRUoI = false;
        rD.dlmvG.setScreen((Screen)bD2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public bC LG() {
        Object object;
        int n2;
        block9: {
            long l2 = QANEM ^ 0x46B8AF86DA30L;
            int[] nArray = bB.b();
            try {
                try {
                    try {
                        n2 = this.LUWfM;
                        if (nArray != null) break block9;
                        if (n2 < 0) return null;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                    object = this;
                    if (nArray != null) return (bC)object;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
                n2 = ((bD)object).LUWfM;
            }
            catch (MatchException matchException) {
                throw bD.LS(matchException);
            }
        }
        try {
            if (n2 >= this.OsaDL.size()) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw bD.LS(matchException);
        }
        object = this.OsaDL.get(this.LUWfM);
        return (bC)object;
    }

    private static CallSite LW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bD" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public boolean onMouseClicked(double d2, double d3, mA mA2) {
        long l2 = QANEM ^ 0x51FCF464A8AEL;
        int[] nArray = bB.b();
        if (mA2 == mA.sCBUa) {
            int n2;
            block5: {
                int n3;
                block6: {
                    bA bA2 = this.LJ();
                    float f2 = this.sf();
                    n3 = this.LQ(d2, d3, bA2.centerX(), bA2.centerY(), bA2.innerRadius() * f2, bA2.outerRadius() * f2);
                    try {
                        try {
                            n2 = n3;
                            if (nArray != null) break block5;
                            if (n2 >= 0) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bD.LS(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                }
                this.LUWfM = n3;
                this.LH();
                this.zRUoI = true;
                this.VWsmm = true;
                n2 = 1;
            }
            return n2 != 0;
        }
        return false;
    }

    private static MatchException LS(MatchException matchException) {
        return matchException;
    }

    public void close() {
        block5: {
            bD bD2;
            block4: {
                long l2 = QANEM ^ 0x79C22467AA63L;
                int[] nArray = bB.b();
                try {
                    try {
                        bD2 = this;
                        if (nArray != null) break block4;
                        if (!bD2.VWsmm) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                    this.LI();
                    bD2 = this;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
            }
            super.close();
        }
    }

    public void tick() {
        this.si();
        this.close();
    }

    public void init() {
        this.VWsmm = false;
        this.zRUoI = false;
        this.LUWfM = -1;
        this.QYxCg = -1;
        this.Weytw.dhg();
        this.Weytw.dhs(rj.XzDkv);
        this.BOnqc.dhg();
    }

    private bA LJ() {
        Vec2f vec2f = rm.diq();
        float f2 = vec2f.x * 0.5f;
        float f3 = vec2f.y * 0.5f;
        float f4 = MathHelper.clamp((float)(Math.min(vec2f.x, vec2f.y) * 0.29f), (float)86.0f, (float)118.0f);
        float f5 = f4 * 0.43f;
        return new bA(f2, f3, f5, f4);
    }

    private int LP(lC lC2, float f2, float f3, float f4, float f5) {
        return this.LQ(lC2.cff(), lC2.cfg(), f2, f3, f4, f5);
    }

    private void LN(lC lC2, float f2, float f3, float f4) {
        String string;
        lq lq2;
        ii ii2;
        block6: {
            bC bC2;
            block4: {
                bC bC3;
                block5: {
                    long l2 = QANEM ^ 0x10E9CCFA8358L;
                    ii2 = rD.dlM();
                    float f5 = f4 * 1.65f;
                    float f6 = f2 - f5 * 0.5f;
                    float f7 = f3 - f5 * 0.5f;
                    ld ld2 = ld.all(f5 * 0.5f);
                    int[] nArray = bB.b();
                    mG mG2 = ii2.bjd().cob(0.9f);
                    lC2.cek(kd.AhlXN, f6, f7, f5, f5, 7.0f, ld2, 1.0f);
                    lC2.cdg(f6, f7, f5, f5, ld2, mG2);
                    bC3 = this.LG();
                    int[] nArray2 = nArray;
                    this.LO(lC2, ii2, f2, f3, f5);
                    lq2 = lE.SVnNc.bYM(10.0f);
                    try {
                        try {
                            bC2 = bC3;
                            if (nArray2 != null) break block4;
                            if (bC2 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw bD.LS(matchException);
                        }
                        string = VxFyM;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                }
                bC2 = bC3;
            }
            string = bC2.Ly();
        }
        String string2 = string;
        lC2.cez(lq2, string2, f2 - lq2.cao(string2) * 0.5f, f3 - lq2.cat() * 0.5f, ii2.bjb());
    }

    private static int LU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1338;
        if (oWvYs[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = USzpw[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])PcTAi.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PcTAi.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bD", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bD.oWvYs[n3] = n4;
        }
        return oWvYs[n3];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void LR(int n2) {
        int n3;
        block5: {
            long l2 = QANEM ^ 0x500545FA9AE1L;
            int[] nArray = bB.b();
            try {
                n3 = n2;
                if (nArray != null) break block5;
                if (n3 < 0) return;
            }
            catch (MatchException matchException) {
                throw bD.LS(matchException);
            }
            n3 = n2;
        }
        try {
            if (n3 >= this.OsaDL.size()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bD.LS(matchException);
        }
        this.OsaDL.get(n2).Ls();
    }

    private void LM(lC lC2, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9) {
        mG mG2 = rD.dlM().bjf().cob(f9);
        float f10 = (f7 + f8) * 0.5f;
        float f11 = (f8 - f7) * 0.5f * f9;
        float f12 = f10 - f11;
        float f13 = f10 + f11;
        la la2 = la.bWJ(f10, mG2, mG2.cob(0.01f));
        lC2.cdG(f2, f3, f4, f4, f5, f6, f12, f13, la2);
    }

    public void LI() {
        block4: {
            long l2 = QANEM ^ 0x7BF3668B10B7L;
            Iterator<bC> iterator = this.OsaDL.iterator();
            int[] nArray = bB.b();
            while (iterator.hasNext()) {
                bC bC2 = iterator.next();
                try {
                    bC2.Ls();
                    bC2.LB().dhg();
                    if (nArray == null) {
                        if (nArray == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
            }
            this.BOnqc.dhg();
            this.LUWfM = -1;
            this.QYxCg = -1;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void LH() {
        bC bC2;
        bC bC3;
        block5: {
            long l2 = QANEM ^ 0x5307E92A4383L;
            bC3 = this.LG();
            int[] nArray = bB.b();
            try {
                bC2 = bC3;
                if (nArray != null) break block5;
                if (bC2 == null) return;
            }
            catch (MatchException matchException) {
                throw bD.LS(matchException);
            }
            bC2 = bC3;
        }
        try {
            if (bC2.Lx() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bD.LS(matchException);
        }
        pW.cTX((PlayerLikeEntity)rD.dlmvG.player, bC3.Lx());
    }

    private static int LV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bD.LU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private void LK(lC lC2, float f2, float f3, float f4, float f5, float f6) {
        int n2;
        float f7;
        float f8;
        int[] nArray;
        float f9;
        float f10;
        block5: {
            int n3;
            block6: {
                long l2 = QANEM ^ 0x309B90829EC8L;
                f10 = 360.0f / (float)this.OsaDL.size();
                f9 = -90.0f - f10 * 0.5f;
                float f11 = f2 - f4 * 0.5f;
                float f12 = f3 - f4 * 0.5f;
                nArray = bB.b();
                try {
                    this.LL(lC2, f11, f12, f4, f5, f6);
                    n3 = this.LUWfM;
                    if (nArray != null) break block5;
                    if (n3 < 0) break block6;
                }
                catch (MatchException matchException) {
                    throw bD.LS(matchException);
                }
                float f13 = f9 + (float)this.LUWfM * f10;
                f8 = f9 + (float)(this.LUWfM + 1) * f10;
                f7 = this.BOnqc.dhd(1.0f);
                this.LM(lC2, f11, f12, f4, f5, f6, f13, f8, f7);
            }
            n3 = n2 = 0;
        }
        while (n2 < this.OsaDL.size()) {
            boolean bl2;
            int n4;
            bB bB2;
            bB bB3;
            f8 = f9 + (float)n2 * f10;
            f7 = f9 + (float)(n2 + 1) * f10;
            float f14 = f9 + ((float)n2 + 0.5f) * f10;
            try {
                bB bB4;
                bB3 = bB4;
                bB2 = bB4;
                n4 = n2;
                bl2 = n2 == this.LUWfM;
            }
            catch (MatchException matchException) {
                throw bD.LS(matchException);
            }
            bB3(n4, bl2, f2, f3, f4, f5, f6, f8, f7, f14);
            bB bB5 = bB2;
            this.OsaDL.get(n2).Lq(lC2, bB5);
            ++n2;
            if (nArray == null) continue;
        }
    }

    private int LQ(double d2, double d3, float f2, float f3, float f4, float f5) {
        double d4;
        double d5;
        block8: {
            double d6;
            block6: {
                block7: {
                    long l2 = QANEM ^ 0x32F10548CFE5L;
                    d5 = d2 - (double)f2;
                    d4 = d3 - (double)f3;
                    double d7 = Math.sqrt(d5 * d5 + d4 * d4);
                    int[] nArray = bB.b();
                    try {
                        try {
                            try {
                                double d8 = d7 - (double)f4;
                                d6 = d8 == 0.0 ? 0 : (d8 < 0.0 ? -1 : 1);
                                if (nArray != null) break block6;
                                if (d6 < 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw bD.LS(matchException);
                            }
                            double d9 = d7 - (double)f5;
                            d6 = d9 == 0.0 ? 0 : (d9 > 0.0 ? 1 : -1);
                            if (nArray != null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bD.LS(matchException);
                        }
                        if (d6 <= 0) break block8;
                    }
                    catch (MatchException matchException) {
                        throw bD.LS(matchException);
                    }
                }
                d6 = -1;
            }
            return (int)d6;
        }
        float f6 = 360.0f / (float)this.OsaDL.size();
        double d10 = mZ.csu(Math.toDegrees(Math.atan2(d4, d5)));
        double d11 = -90.0f - f6 * 0.5f;
        double d12 = mZ.csu(d10 - d11);
        int n2 = (int)(d12 / (double)f6);
        return MathHelper.clamp((int)n2, (int)0, (int)(this.OsaDL.size() - 1));
    }

    private void LO(lC lC2, ii ii2, float f2, float f3, float f4) {
        long l2 = QANEM ^ 0x6C87C9AC2DFCL;
        float f5 = f4 * 0.5f - 2.0f;
        float f6 = f5 - f4 * 0.05f;
        float f7 = f5 * 2.0f;
        float f8 = f5 * 2.0f;
        float f9 = f2 - f5;
        float f10 = f3 - f5;
        int[] nArray = bB.b();
        float f11 = 360.0f / (float)this.OsaDL.size();
        float f12 = Math.min(8.0f, f11 * 0.34f);
        float f13 = -90.0f - f11 * 0.5f;
        for (int i2 = 0; i2 < this.OsaDL.size(); ++i2) {
            mG mG2;
            float f14 = f13 + (float)i2 * f11 + f12 * 0.5f;
            float f15 = f13 + (float)(i2 + 1) * f11 - f12 * 0.5f;
            try {
                mG2 = i2 == this.LUWfM ? ii2.bjb() : ii2.bjb().cob(0.5f);
            }
            catch (MatchException matchException) {
                throw bD.LS(matchException);
            }
            mG mG3 = mG2;
            lC2.cdE(f9, f10, f7, f8, f6, f5, f14, f15, mG3);
            if (nArray == null) continue;
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bD.class, "LV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

