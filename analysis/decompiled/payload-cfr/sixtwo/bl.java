/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.MinecraftAccessor
 *  net.minecraft.class_241
 *  net.minecraft.class_338$class_11732
 *  net.minecraft.class_437
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.MinecraftAccessor;
import net.minecraft.class_241;
import net.minecraft.class_338;
import net.minecraft.class_437;
import sixtwo.R;
import sixtwo.W;
import sixtwo.aJ;
import sixtwo.aR;
import sixtwo.ad;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.al;
import sixtwo.ap;
import sixtwo.av;
import sixtwo.aw;
import sixtwo.az;
import sixtwo.bc;
import sixtwo.bd;
import sixtwo.bi;
import sixtwo.bl$sd;
import sixtwo.cq;
import sixtwo.g;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jH;
import sixtwo.jf;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mA;
import sixtwo.od;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class bl
extends av
implements aw {
    private static bl VyQNu;
    private final lc CEIOv;
    private final ah WOOwr;
    private final ad TUFvs;
    private final aJ wraGo;
    private final al ZmUwR;
    private final bi cjnmJ;
    private final g lDPYv;
    private final az vjKVl;
    private boolean TCMij;
    private float bvjoR;
    private float dKaMJ;
    private boolean ncerH;
    private final R uuFQh;
    private static iS[] rxHWS;
    private static final long AGQWN;
    private static final String afmPV;
    private static final long[] iSqCx;
    private static final Integer[] VgeZy;
    private static final Map sBqsw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static void EM(iS[] iSArray) {
        rxHWS = iSArray;
    }

    public bl() {
        long l = AGQWN ^ 0x53E00267D255L;
        this.lDPYv = new g();
        VyQNu = this;
        this.lDPYv.aV(() -> this.sg());
        float f2 = 465.0f;
        float f3 = 305.5f;
        class_241 class_2412 = rm.diq();
        this.CEIOv = new lc(class_2412.field_1343 / 2.0f - f2 / 2.0f, class_2412.field_1342 / 2.0f - f3 / 2.0f, f2, f3);
        this.WOOwr = new ah();
        this.TUFvs = new ad(lE.WTzbi.bYM(6.0f));
        this.wraGo = new aJ();
        this.ZmUwR = new al();
        this.cjnmJ = new bi();
        this.uuFQh = (R)new R(od.cBQ(afmPV)).iA(W.igoQj).jb(r -> this.Er()).sX(20.0f, 20.0f);
        iS[] iSArray = bl.EN();
        this.vjKVl = new bl$sd(this);
        this.vjKVl.sI(this.wraGo);
        this.vjKVl.sI(this.ZmUwR);
        this.vjKVl.sI(this.uuFQh);
        this.vjKVl.sI(this.cjnmJ);
        iS[] iSArray2 = iSArray;
        try {
            this.lDPYv.aE(this.vjKVl);
            if (iSArray2 != null) {
                iS.bwK("sWBKJ");
            }
        }
        catch (MatchException matchException) {
            throw bl.EO(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bl.AGQWN = gb.aYR(6184744718404640296L, 5828307648978400804L, MethodHandles.lookup().lookupClass()).a(200750414847398L);
                    var11 = bl.AGQWN ^ 2541012324948L;
                    bl.EM(null);
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl14:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("I\u00a5\u00c5l\u00ff\u000bp\t".getBytes("ISO-8859-1"));
                ** while (true)
                bl.afmPV = bl.EP(var15_3).intern();
                bl.sBqsw = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[7];
                var3_7 = 0;
                var4_8 = "\u00e4\u00cfn\u00ac\u0090\u00c2\u001a\u001da\u00c6\u00dcBN\u00aa\u0010\u00a0\u009f\u00d6\u00a2\u00fa5U6`.\u00d2Y6{\u0080\u00cc\u00d1\u00fb\u00c6\u00de#\u00e0_\u007f\u00f9";
                var5_9 = "\u00e4\u00cfn\u00ac\u0090\u00c2\u001a\u001da\u00c6\u00dcBN\u00aa\u0010\u00a0\u009f\u00d6\u00a2\u00fa5U6`.\u00d2Y6{\u0080\u00cc\u00d1\u00fb\u00c6\u00de#\u00e0_\u007f\u00f9".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl45:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u000562\u0083\u0002\u000e\u00f7\u000e\u00a3\u0080\u00d1Zft\u0086\u00d7";
                    var5_9 = "\u000562\u0083\u0002\u000e\u00f7\u000e\u00a3\u0080\u00d1Zft\u0086\u00d7".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl71:
                // 1 sources

                ** continue;
            }
        }
        bl.iSqCx = var6_6;
        bl.VgeZy = new Integer[7];
    }

    @Override
    protected class_241 n() {
        return new class_241(this.CEIOv.bXH() + 14.0f, this.CEIOv.bXI() + 14.0f);
    }

    @Override
    public void m(lC lC2) {
        bl bl2;
        block13: {
            block14: {
                rj rj2;
                rk rk2;
                boolean bl3;
                rk rk3;
                iS[] iSArray;
                block11: {
                    block12: {
                        long l = AGQWN ^ 0x36EDF9286577L;
                        iSArray = bl.EN();
                        try {
                            rk3 = this.Weytw;
                            bl3 = this.VWsmm;
                            if (iSArray != null) break block11;
                            if (bl3) break block12;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                        bl3 = true;
                        break block11;
                    }
                    bl3 = false;
                }
                try {
                    rk3.dhc(bl3);
                    rk2 = this.Weytw;
                    rj2 = !this.VWsmm ? rj.XzDkv : rj.AYqck;
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
                try {
                    try {
                        rk2.dhs(rj2);
                        this.WOOwr.nG();
                        bl2 = this;
                        if (iSArray != null) break block13;
                        if (!bl2.TCMij) break block14;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    this.CEIOv.bXt((float)lC2.cff() - this.bvjoR, (float)lC2.cfg() - this.dKaMJ);
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            this.Et();
            this.vjKVl.sZ(this.CEIOv);
            bl2 = this;
        }
        try {
            bl2.lDPYv.aL(lC2);
            if (iS.bwL() == null) {
                bl.EM(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw bl.EO(matchException);
        }
    }

    private static int EQ(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x22E4;
        if (VgeZy[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = iSqCx[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])sBqsw.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    sBqsw.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bl", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bl.VgeZy[n2] = n3;
        }
        return VgeZy[n2];
    }

    @Override
    public g manager() {
        return this.lDPYv;
    }

    public al EC() {
        return this.ZmUwR;
    }

    public static iS[] EN() {
        return rxHWS;
    }

    private static CallSite ES(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public bi ED() {
        return this.cjnmJ;
    }

    public ah Ez() {
        return this.WOOwr;
    }

    public boolean EF() {
        return this.TCMij;
    }

    @Override
    public boolean onMouseDragged(double d, double d2, mA mA2, double d3, double d4) {
        return this.lDPYv.aP(d, d2, mA2, d3, d4);
    }

    @Override
    public boolean onCharTyped(char c) {
        return this.lDPYv.aT(c);
    }

    @Override
    public boolean onMouseClicked(double d, double d2, mA mA2) {
        return this.lDPYv.aN(d, d2, mA2);
    }

    @Override
    public boolean onKeyPressed(int n, int n2, int n3) {
        boolean bl2;
        block35: {
            block36: {
                iS[] iSArray;
                long l;
                block33: {
                    block34: {
                        block31: {
                            block32: {
                                block29: {
                                    block30: {
                                        block26: {
                                            block27: {
                                                block28: {
                                                    l = AGQWN ^ 0xC9E31E5D13DL;
                                                    iSArray = bl.EN();
                                                    try {
                                                        bl2 = n;
                                                        if (iSArray != null) break block26;
                                                        if (bl2 != bl.ES("u", (int)2482, (long)(0x78AF3521EDCCA405L ^ l))) break block27;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bl.EO(matchException);
                                                    }
                                                    bc bc2 = this.lDPYv.ba(bc.class).orElse(null);
                                                    try {
                                                        bc bc3;
                                                        try {
                                                            bc3 = bc2;
                                                            if (iSArray != null) break block28;
                                                            if (bc3 == null) break block27;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bl.EO(matchException);
                                                        }
                                                        bc2.Bv().ly();
                                                        bc3 = bc2.oj(false);
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bl.EO(matchException);
                                                    }
                                                }
                                                return true;
                                            }
                                            bl2 = rD.dlmvG.method_74188();
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        if (iSArray != null) break block29;
                                                        if (!bl2) break block30;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bl.EO(matchException);
                                                    }
                                                    bl2 = n;
                                                    if (iSArray != null) break block29;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bl.EO(matchException);
                                                }
                                                if (bl2 != bl.ES("u", (int)3701, (long)(0x29903B801039A3C7L ^ l))) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw bl.EO(matchException);
                                            }
                                            this.Er();
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw bl.EO(matchException);
                                        }
                                    }
                                    bl2 = this.lDPYv.aS(n, n2, n3);
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block31;
                                        if (!bl2) break block32;
                                    }
                                    catch (MatchException matchException) {
                                        throw bl.EO(matchException);
                                    }
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw bl.EO(matchException);
                                }
                            }
                            bl2 = this.WOOwr.dm(n, n2, n3);
                        }
                        try {
                            try {
                                if (iSArray != null) break block33;
                                if (!bl2) break block34;
                            }
                            catch (MatchException matchException) {
                                throw bl.EO(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                    }
                    bl2 = n;
                }
                try {
                    try {
                        if (iSArray != null) break block35;
                        if (bl2 != bl.ES("u", (int)24648, (long)(0x60AFD142E828CDFEL ^ l))) break block36;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    this.Ew();
                    return true;
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public boolean onMouseReleased(double d, double d2, mA mA2) {
        return this.lDPYv.aO(d, d2, mA2);
    }

    @Override
    public boolean onMouseScrolled(double d, double d2, double d3) {
        return this.lDPYv.aQ(d, d2, d3);
    }

    @Override
    public void addOverlay(aj aj2) {
        this.addOverlay(aj2, true);
    }

    @Override
    public void addOverlay(aj aj2, boolean bl2) {
        g g2;
        iS[] iSArray;
        block13: {
            block14: {
                long l = AGQWN ^ 0x2F568669E605L;
                iS[] iSArray2 = bl.EN();
                aj2.sP((int)bl.ES("u", (int)22170, (long)(0x339C356A39AECC11L ^ l))).sT(true);
                iSArray = iSArray2;
                try {
                    try {
                        g2 = this.lDPYv;
                        if (iSArray != null) break block13;
                        g2.aF(aj2);
                        if (bl2) break block14;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            g2 = this.lDPYv;
        }
        for (aj aj3 : g2.aY(aj.class)) {
            block16: {
                aj aj4;
                block15: {
                    try {
                        try {
                            aj4 = aj3;
                            if (iSArray != null) break block15;
                            if (aj4 == aj2) break block16;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                        aj4 = aj3;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                }
                try {
                    try {
                        if (iSArray != null || !aj4.tz()) break block16;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    aj4 = aj3.oj(false);
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            if (iSArray == null) continue;
        }
    }

    @Override
    public void addTooltip(k k2) {
        block5: {
            az az2;
            long l = AGQWN ^ 0x5C30C71F1AE5L;
            Iterator<k> iterator = this.lDPYv.aY(k.class).iterator();
            iS[] iSArray = bl.EN();
            while (iterator.hasNext()) {
                block6: {
                    k k3 = iterator.next();
                    try {
                        try {
                            az2 = k3.cn();
                            if (iSArray != null) break block5;
                            if (az2 != k2.cn()) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                }
                if (iSArray == null) continue;
            }
            k2.sS(true);
            az2 = this.lDPYv.aF(k2);
        }
    }

    @Override
    public void addPopup(ap ap2) {
        long l = AGQWN ^ 0x71AA7174A97CL;
        iS[] iSArray = bl.EN();
        ap2.sP((int)bl.ES("u", (int)2566, (long)(0x7DB853A46D5BDFF3L ^ l))).sT(false);
        this.lDPYv.aF(ap2);
        Iterator<ap> iterator = this.lDPYv.aY(ap.class).iterator();
        iS[] iSArray2 = iSArray;
        while (iterator.hasNext()) {
            block15: {
                ap ap3;
                int n;
                ap ap4;
                block16: {
                    ap ap5;
                    block14: {
                        ap4 = iterator.next();
                        try {
                            try {
                                ap5 = ap4;
                                if (iSArray2 != null) break block14;
                                if (ap5 == ap2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw bl.EO(matchException);
                            }
                            ap5 = ap4;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                    }
                    try {
                        try {
                            try {
                                n = ap5.sN();
                                if (iSArray2 != null) break block16;
                                if (n <= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw bl.EO(matchException);
                            }
                            ap3 = ap4;
                            if (iSArray2 != null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                        n = ap3.tz() ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                }
                try {
                    if (n == 0) {
                        ap3 = ap4.oj(false);
                    }
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            if (iSArray2 == null) continue;
        }
    }

    public lc Ey() {
        return this.CEIOv;
    }

    @Override
    public void addPopupComponent(aj aj2) {
        long l = AGQWN ^ 0x5A925AC0DA93L;
        aj2.sP((int)bl.ES("u", (int)9009, (long)(0x12A0087CF694852AL ^ l))).sT(false);
        this.lDPYv.aF(aj2);
    }

    public void method_25419() {
        block18: {
            bl bl2;
            block20: {
                iS[] iSArray;
                block19: {
                    int n;
                    block17: {
                        long l = AGQWN ^ 0x1E0C00FA6282L;
                        iSArray = bl.EN();
                        try {
                            try {
                                n = this.VWsmm;
                                if (iSArray != null) break block17;
                                if (n == 0) break block18;
                            }
                            catch (MatchException matchException) {
                                throw bl.EO(matchException);
                            }
                            this.Weytw.dhd(0.0f);
                            float f2 = this.Weytw.dhj() - 0.0f;
                            n = f2 == 0.0f ? 0 : (f2 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                    }
                    try {
                        ad ad2;
                        try {
                            try {
                                if (n > 0) break block18;
                                ad2 = ad.rmmkh;
                                if (iSArray != null) break block19;
                            }
                            catch (MatchException matchException) {
                                throw bl.EO(matchException);
                            }
                            if (ad2 == null) break block19;
                        }
                        catch (MatchException matchException) {
                            throw bl.EO(matchException);
                        }
                        ad2 = ad.rmmkh.lQ(false);
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                }
                try {
                    try {
                        super.method_25419();
                        bl2 = this;
                        if (iSArray != null) break block20;
                        if (!bl2.ncerH) break block18;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    ((MinecraftAccessor)rD.dlmvG).callOpenChatScreen(class_338.class_11732.field_62004);
                    this.ncerH = false;
                    bl2 = this;
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            bl2.wraGo.we();
            cq cq2 = rD.dlK();
            try {
                if (cq2.Rw().isEmpty()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw bl.EO(matchException);
            }
            float f3 = 90.0f;
            class_241 class_2412 = rm.diq();
            cq2.Ru(jf.bAH(f3, class_2412.field_1343), class_2412.field_1342 / 4.0f);
        }
    }

    public void method_25426() {
        this.TCMij = false;
        this.VWsmm = false;
    }

    public void method_25393() {
        this.si();
        this.method_25419();
    }

    public static void Eu() {
        long l = AGQWN ^ 0x746B6E6712C2L;
        try {
            if (rD.dlmvG.field_1687 == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bl.EO(matchException);
        }
        bl bl2 = bl.Ex();
        bl2.VWsmm = false;
        bl2.Weytw.dhg();
        rD.dlmvG.method_1507((class_437)bl2);
    }

    public static bl Ex() {
        bl bl2;
        block4: {
            block5: {
                long l = AGQWN ^ 0x39CF948E2375L;
                iS[] iSArray = bl.EN();
                try {
                    try {
                        bl2 = VyQNu;
                        if (iSArray != null) break block4;
                        if (bl2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bl.EO(matchException);
                    }
                    new bl();
                }
                catch (MatchException matchException) {
                    throw bl.EO(matchException);
                }
            }
            bl2 = VyQNu;
        }
        return bl2;
    }

    public void Eq(bd bd2) {
        bd2.sP(0).sT(false);
        this.lDPYv.aF(bd2);
    }

    public aJ EB() {
        return this.wraGo;
    }

    private static MatchException EO(MatchException matchException) {
        return matchException;
    }

    public bc Er() {
        bc bc2 = this.lDPYv.aX(bc.class, () -> {
            long l = AGQWN ^ 0x3B62549A50FEL;
            bc bc2 = new bc();
            bc2.sP((int)bl.ES("u", (int)10990, (long)(0x44CF0F60DDF2869CL ^ l))).sT(true);
            return bc2;
        });
        bc2.Bv().lx();
        bc2.oj(true);
        return bc2;
    }

    public void Es() {
        this.ncerH = true;
    }

    private void Ep(lC lC2) {
        ii ii2 = rD.dlM();
        float f2 = Math.min(1.0f, this.Weytw.dhj());
        jF.bHz(1.0f, 1.0f, 1.0f, f2);
        jH.bId(lC2, this.CEIOv.bXF() + this.CEIOv.bXH() / 2.0f, this.CEIOv.bXG() + this.CEIOv.bXI() / 2.0f, this.sf());
        lC2.cej(this.CEIOv.bXF(), this.CEIOv.bXG(), this.CEIOv.bXH(), this.CEIOv.bXI(), 5.0f, ld.all(11.0f), this.Weytw.dhj());
        lC2.cdm(this.CEIOv.bXF(), this.CEIOv.bXG(), this.CEIOv.bXH(), this.CEIOv.bXI(), 5.0f, ld.all(6.0f + 5.0f * f2), ii2.bjd().coa(255.0f * f2).coc(ii2.bje(), 0.3f).coc(ii2.bjd().cob(0.75f), f2));
        float f3 = 7.0f;
        float f4 = 28.0f;
        float f5 = 100.0f;
        float f6 = f4 + 2.0f * f3;
        this.wraGo.sW(this.CEIOv.bXF(), this.CEIOv.bXG());
        this.wraGo.sX(this.CEIOv.bXH() - f5, this.CEIOv.bXI());
        this.wraGo.su(lC2);
        float f7 = this.CEIOv.bXH() - f5 - 10.0f;
        this.ZmUwR.sW(this.CEIOv.bXF() + f5, this.CEIOv.bXG() + f3);
        this.ZmUwR.sX(f7, f4);
        this.ZmUwR.su(lC2);
        this.uuFQh.sW(this.ZmUwR.tc() - this.uuFQh.kN() - 7.0f, this.ZmUwR.ts() + jf.bAH(this.uuFQh.dn(), f4));
        this.uuFQh.su(lC2);
        this.cjnmJ.sW(this.CEIOv.bXF() + f5, this.CEIOv.bXG() + f6);
        this.cjnmJ.sX(f7, this.CEIOv.bXI() - f6);
        this.cjnmJ.su(lC2);
        jH.bIf();
        jF.bHz(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public void Ew() {
        this.VWsmm = true;
        this.lDPYv.bb(aj.class);
        this.lDPYv.bb(bd.class);
        this.lDPYv.bb(aR.class);
    }

    public static void Ev() {
        bl.Ex().Ew();
    }

    public ad EA() {
        return this.TUFvs;
    }

    private void Et() {
        class_241 class_2412 = rm.diq();
        float f2 = 0.0f;
        float f3 = 0.0f;
        float f4 = Math.max(0.0f, class_2412.field_1343 - this.CEIOv.bXH());
        float f5 = Math.max(0.0f, class_2412.field_1342 - this.CEIOv.bXI());
        this.CEIOv.bXt(Math.clamp(this.CEIOv.bXF(), f2, f4), Math.clamp(this.CEIOv.bXG(), f3, f5));
    }

    public R EI() {
        return this.uuFQh;
    }

    public float EG() {
        return this.bvjoR;
    }

    public float EH() {
        return this.dKaMJ;
    }

    private static String EP(byte[] byArray) {
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

    private static int ER(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bl.EQ(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public az EE() {
        return this.vjKVl;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bl.class, "ER", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
