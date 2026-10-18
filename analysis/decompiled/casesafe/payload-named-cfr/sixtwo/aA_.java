/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.az;
import sixtwo.bl;
import sixtwo.bz;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public abstract class aA
extends az {
    private final rk pLXUh;
    private final rk sWdzd;
    private float UNVTC;
    private float kLgGw;
    private boolean hxRxH;
    private float yNfcJ;
    private float TMZHo;
    private float uoFGr;
    private boolean hkFfr;
    private boolean DCCbb;
    private boolean WBAUx;
    private boolean QdNTF;
    private boolean fHvqn;
    private static final long GTpjx = gb.aYR(-4850908496947294916L, -5906113067756810804L, MethodHandles.lookup().lookupClass()).a(234998979476403L);
    private static final long[] INkfH;
    private static final Integer[] bhgzy;
    private static final Map BrWZl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aA() {
        long l2 = GTpjx ^ 0x73FD2086EF21L;
        this.pLXUh = new rk((int)aA.tO("d", (int)5197, (long)(0x22BFD686FC81DE32L ^ l2))).dhs(rj.MBpuQ);
        this.sWdzd = new rk((int)aA.tO("d", (int)1864, (long)(0x4040E1296204D36L ^ l2))).dhs(rj.MBpuQ);
        this.WBAUx = true;
        this.QdNTF = true;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        BrWZl = new HashMap(13);
        long l2 = GTpjx ^ 0x3F814D173D46L;
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
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "@\u00f5\u0014\u00ddk\u0093\u00d7\u00af\u00d6\u00aa\u00ce~\u00e2)\u009b\u00d4";
        int n3 = "@\u00f5\u0014\u00ddk\u0093\u00d7\u00af\u00d6\u00aa\u00ce~\u00e2)\u009b\u00d4".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        INkfH = lArray;
        bhgzy = new Integer[2];
    }

    @Override
    public void dY() {
        super.dY();
        this.tK();
    }

    protected void tK() {
        this.hxRxH = false;
        this.hkFfr = false;
        this.DCCbb = false;
        this.UNVTC = this.MCnYt;
        this.kLgGw = this.pNyTQ;
        this.pLXUh.dhg();
        this.sWdzd.dhg();
    }

    private static MatchException tL(MatchException matchException) {
        return matchException;
    }

    public aA tI(boolean bl2) {
        aA aA2;
        block4: {
            block5: {
                long l2 = GTpjx ^ 0x63D20AB3C0ADL;
                String string = az.tE();
                try {
                    try {
                        aA2 = this;
                        if (string == null) break block4;
                        aA2.QdNTF = bl2;
                        if (bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw aA.tL(matchException);
                    }
                    this.sWdzd.dhg();
                }
                catch (MatchException matchException) {
                    throw aA.tL(matchException);
                }
            }
            aA2 = this;
        }
        return aA2;
    }

    private static int tM(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4952;
        if (bhgzy[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = INkfH[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])BrWZl.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BrWZl.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aA", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            aA.bhgzy[n3] = n4;
        }
        return bhgzy[n3];
    }

    public aA tH(boolean bl2) {
        aA aA2;
        block4: {
            block5: {
                long l2 = GTpjx ^ 0x732793E1B182L;
                String string = az.tE();
                try {
                    try {
                        aA2 = this;
                        if (string == null) break block4;
                        aA2.WBAUx = bl2;
                        if (bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw aA.tL(matchException);
                    }
                    this.pLXUh.dhg();
                }
                catch (MatchException matchException) {
                    throw aA.tL(matchException);
                }
            }
            aA2 = this;
        }
        return aA2;
    }

    public aA tJ(boolean bl2) {
        this.fHvqn = bl2;
        return this;
    }

    private static CallSite tO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aA" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int tN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = aA.tM(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Unable to fully structure code
     */
    public aA tG(float var1_1, float var2_2) {
        block110: {
            block111: {
                block112: {
                    block114: {
                        block109: {
                            block108: {
                                block113: {
                                    block107: {
                                        block106: {
                                            block102: {
                                                block105: {
                                                    block103: {
                                                        block104: {
                                                            block100: {
                                                                block99: {
                                                                    block98: {
                                                                        block97: {
                                                                            block95: {
                                                                                block96: {
                                                                                    block94: {
                                                                                        block93: {
                                                                                            block91: {
                                                                                                block92: {
                                                                                                    block90: {
                                                                                                        block89: {
                                                                                                            block88: {
                                                                                                                block84: {
                                                                                                                    block85: {
                                                                                                                        block86: {
                                                                                                                            block87: {
                                                                                                                                var3_3 = aA.GTpjx ^ 122213593604793L;
                                                                                                                                var6_4 = 0.0f;
                                                                                                                                var7_5 = 0.0f;
                                                                                                                                var8_6 = 0.0f;
                                                                                                                                var9_7 = false;
                                                                                                                                var10_8 = 0.0f;
                                                                                                                                var11_9 = 0.0f;
                                                                                                                                var12_10 = false;
                                                                                                                                var13_11 = 0.0f;
                                                                                                                                var16_12 = rD.dlmvG.currentScreen;
                                                                                                                                var5_15 = az.tE();
                                                                                                                                try {
                                                                                                                                    v0 = var16_12 instanceof bl;
                                                                                                                                    if (var5_15 == null) break block84;
                                                                                                                                    if (!v0) break block85;
                                                                                                                                }
                                                                                                                                catch (MatchException v1) {
                                                                                                                                    throw aA.tL(v1);
                                                                                                                                }
                                                                                                                                var14_16 = (bl)var16_12;
                                                                                                                                try {
                                                                                                                                    v2 = var14_16.EF();
                                                                                                                                    if (var5_15 == null) break block86;
                                                                                                                                    if (!v2) break block87;
                                                                                                                                }
                                                                                                                                catch (MatchException v3) {
                                                                                                                                    throw aA.tL(v3);
                                                                                                                                }
                                                                                                                                var9_7 = true;
                                                                                                                                var10_8 = var14_16.Ey().bXF();
                                                                                                                                var11_9 = var14_16.Ey().bXG();
                                                                                                                            }
                                                                                                                            v2 = true;
                                                                                                                        }
                                                                                                                        var12_10 = v2;
                                                                                                                        var13_11 = (float)(-var14_16.Ez().nH());
                                                                                                                        try {
                                                                                                                            if (var5_15 != null) break block88;
                                                                                                                            iS.bwK("YClhyb");
                                                                                                                        }
                                                                                                                        catch (MatchException v4) {
                                                                                                                            throw aA.tL(v4);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    var16_12 = rD.dlmvG.currentScreen;
                                                                                                                    v0 = var16_12 instanceof bz;
                                                                                                                }
                                                                                                                try {
                                                                                                                    if (var5_15 == null) break block89;
                                                                                                                    if (!v0) break block88;
                                                                                                                }
                                                                                                                catch (MatchException v5) {
                                                                                                                    throw aA.tL(v5);
                                                                                                                }
                                                                                                                var15_18 = (bz)var16_12;
                                                                                                                var9_7 = true;
                                                                                                                var10_8 = var15_18.KI().bXF();
                                                                                                                var11_9 = var15_18.KI().bXG();
                                                                                                                var12_10 = true;
                                                                                                                var13_11 = (float)(-var15_18.KO().nH());
                                                                                                            }
                                                                                                            v0 = var9_7;
                                                                                                        }
                                                                                                        try {
                                                                                                            try {
                                                                                                                try {
                                                                                                                    if (var5_15 == null) break block90;
                                                                                                                    if (v0) {
                                                                                                                    }
                                                                                                                    ** GOTO lbl97
                                                                                                                }
                                                                                                                catch (MatchException v6) {
                                                                                                                    throw aA.tL(v6);
                                                                                                                }
                                                                                                                v7 = this;
                                                                                                                if (var5_15 == null) break block91;
                                                                                                            }
                                                                                                            catch (MatchException v8) {
                                                                                                                throw aA.tL(v8);
                                                                                                            }
                                                                                                            v0 = v7.hkFfr;
                                                                                                        }
                                                                                                        catch (MatchException v9) {
                                                                                                            throw aA.tL(v9);
                                                                                                        }
                                                                                                    }
                                                                                                    try {
                                                                                                        if (v0) break block92;
                                                                                                        this.yNfcJ = var10_8;
                                                                                                        this.TMZHo = var11_9;
                                                                                                        this.hkFfr = true;
                                                                                                        if (var5_15 != null) break block93;
                                                                                                    }
                                                                                                    catch (MatchException v10) {
                                                                                                        throw aA.tL(v10);
                                                                                                    }
                                                                                                }
                                                                                                var6_4 = var10_8 - this.yNfcJ;
                                                                                                var7_5 = var11_9 - this.TMZHo;
                                                                                                this.yNfcJ = var10_8;
                                                                                                v7 = this;
                                                                                            }
                                                                                            try {
                                                                                                v7.TMZHo = var11_9;
                                                                                                if (var5_15 != null) break block93;
lbl97:
                                                                                                // 2 sources

                                                                                                this.hkFfr = false;
                                                                                            }
                                                                                            catch (MatchException v11) {
                                                                                                throw aA.tL(v11);
                                                                                            }
                                                                                        }
                                                                                        try {
                                                                                            try {
                                                                                                try {
                                                                                                    v12 = var12_10;
                                                                                                    if (var5_15 == null) break block94;
                                                                                                    if (v12) {
                                                                                                    }
                                                                                                    ** GOTO lbl137
                                                                                                }
                                                                                                catch (MatchException v13) {
                                                                                                    throw aA.tL(v13);
                                                                                                }
                                                                                                v14 = this;
                                                                                                if (var5_15 == null) break block95;
                                                                                            }
                                                                                            catch (MatchException v15) {
                                                                                                throw aA.tL(v15);
                                                                                            }
                                                                                            v12 = v14.DCCbb;
                                                                                        }
                                                                                        catch (MatchException v16) {
                                                                                            throw aA.tL(v16);
                                                                                        }
                                                                                    }
                                                                                    try {
                                                                                        if (v12) break block96;
                                                                                        this.uoFGr = var13_11;
                                                                                        this.DCCbb = true;
                                                                                        if (var5_15 != null) break block97;
                                                                                    }
                                                                                    catch (MatchException v17) {
                                                                                        throw aA.tL(v17);
                                                                                    }
                                                                                }
                                                                                var8_6 = var13_11 - this.uoFGr;
                                                                                v14 = this;
                                                                            }
                                                                            try {
                                                                                v14.uoFGr = var13_11;
                                                                                if (var5_15 != null) break block97;
lbl137:
                                                                                // 2 sources

                                                                                this.DCCbb = false;
                                                                            }
                                                                            catch (MatchException v18) {
                                                                                throw aA.tL(v18);
                                                                            }
                                                                        }
                                                                        try {
                                                                            try {
                                                                                v19 = this;
                                                                                if (var5_15 == null) break block98;
                                                                                if (v19.hxRxH) break block99;
                                                                            }
                                                                            catch (MatchException v20) {
                                                                                throw aA.tL(v20);
                                                                            }
                                                                            this.UNVTC = var1_1;
                                                                            this.kLgGw = var2_2;
                                                                            this.pLXUh.dhg();
                                                                            this.sWdzd.dhg();
                                                                            v19 = this;
                                                                        }
                                                                        catch (MatchException v21) {
                                                                            throw aA.tL(v21);
                                                                        }
                                                                    }
                                                                    v19.hxRxH = true;
                                                                }
                                                                var14_17 = var1_1 - this.UNVTC;
                                                                var15_19 = var2_2 - this.kLgGw;
                                                                try {
                                                                    block101: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    this.UNVTC = var1_1;
                                                                                    this.kLgGw = var2_2;
                                                                                    cfr_temp_0 = var14_17 - 0.0f;
                                                                                    v22 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                                    if (var5_15 == null) break block100;
                                                                                    if (v22 != false) break block101;
                                                                                }
                                                                                catch (MatchException v23) {
                                                                                    throw aA.tL(v23);
                                                                                }
                                                                                cfr_temp_1 = var15_19 - 0.0f;
                                                                                v22 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                                                                if (var5_15 == null) break block100;
                                                                            }
                                                                            catch (MatchException v24) {
                                                                                throw aA.tL(v24);
                                                                            }
                                                                            if (v22 == false) break block102;
                                                                        }
                                                                        catch (MatchException v25) {
                                                                            throw aA.tL(v25);
                                                                        }
                                                                    }
                                                                    v22 = (float)this.WBAUx;
                                                                }
                                                                catch (MatchException v26) {
                                                                    throw aA.tL(v26);
                                                                }
                                                            }
                                                            try {
                                                                v27 = v22 != false ? var14_17 - var6_4 : 0.0f;
                                                            }
                                                            catch (MatchException v28) {
                                                                throw aA.tL(v28);
                                                            }
                                                            var16_13 = v27;
                                                            try {
                                                                v29 = this.QdNTF != false ? var15_19 - var7_5 : 0.0f;
                                                            }
                                                            catch (MatchException v30) {
                                                                throw aA.tL(v30);
                                                            }
                                                            var17_20 = v29;
                                                            try {
                                                                try {
                                                                    try {
                                                                        v31 = this.QdNTF;
                                                                        if (var5_15 == null) break block103;
                                                                        if (v31 == 0) break block104;
                                                                    }
                                                                    catch (MatchException v32) {
                                                                        throw aA.tL(v32);
                                                                    }
                                                                    cfr_temp_2 = var8_6 - 0.0f;
                                                                    v31 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                                                                    if (var5_15 == null) break block103;
                                                                }
                                                                catch (MatchException v33) {
                                                                    throw aA.tL(v33);
                                                                }
                                                                if (v31 == 0) break block104;
                                                            }
                                                            catch (MatchException v34) {
                                                                throw aA.tL(v34);
                                                            }
                                                            var18_21 = var17_20 - var8_6;
                                                            try {
                                                                cfr_temp_3 = Math.abs(var18_21) - 0.001f;
                                                                v31 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                                                                if (var5_15 == null) break block103;
                                                                if (v31 > 0) break block104;
                                                            }
                                                            catch (MatchException v35) {
                                                                throw aA.tL(v35);
                                                            }
                                                            var17_20 = 0.0f;
                                                        }
                                                        v31 = (cfr_temp_4 = var16_13 - 0.0f) == 0.0f ? 0 : (cfr_temp_4 > 0.0f ? 1 : -1);
                                                    }
                                                    try {
                                                        try {
                                                            if (var5_15 == null) break block105;
                                                            if (v31 == 0) {
                                                            }
                                                            ** GOTO lbl250
                                                        }
                                                        catch (MatchException v36) {
                                                            throw aA.tL(v36);
                                                        }
                                                        cfr_temp_5 = var17_20 - 0.0f;
                                                        v31 = cfr_temp_5 == 0.0f ? 0 : (cfr_temp_5 > 0.0f ? 1 : -1);
                                                    }
                                                    catch (MatchException v37) {
                                                        throw aA.tL(v37);
                                                    }
                                                }
                                                try {
                                                    if (v31 == 0) break block102;
lbl250:
                                                    // 2 sources

                                                    this.pLXUh.dhe(this.pLXUh.dhj() - var16_13);
                                                    this.sWdzd.dhe(this.sWdzd.dhj() - var17_20);
                                                }
                                                catch (MatchException v38) {
                                                    throw aA.tL(v38);
                                                }
                                            }
                                            try {
                                                try {
                                                    v39 = this;
                                                    v40 = this.UNVTC;
                                                    v41 = this;
                                                    if (var5_15 == null) break block106;
                                                    if (!v41.WBAUx) break block107;
                                                }
                                                catch (MatchException v42) {
                                                    throw aA.tL(v42);
                                                }
                                                v41 = this;
                                            }
                                            catch (MatchException v43) {
                                                throw aA.tL(v43);
                                            }
                                        }
                                        v44 = v41.pLXUh.dhd(0.0f);
                                        break block113;
                                    }
                                    v44 = 0.0f;
                                }
                                try {
                                    try {
                                        v39.MCnYt = v40 + v44;
                                        v45 = this.kLgGw;
                                        v46 = this;
                                        if (var5_15 == null) break block108;
                                        if (!v46.QdNTF) break block109;
                                    }
                                    catch (MatchException v47) {
                                        throw aA.tL(v47);
                                    }
                                    v46 = this;
                                }
                                catch (MatchException v48) {
                                    throw aA.tL(v48);
                                }
                            }
                            v49 = v46.sWdzd.dhd(0.0f);
                            break block114;
                        }
                        v49 = 0.0f;
                    }
                    var16_14 = v45 + v49;
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            v50 = this;
                                            if (var5_15 == null) break block110;
                                            if (!v50.fHvqn) break block111;
                                        }
                                        catch (MatchException v51) {
                                            throw aA.tL(v51);
                                        }
                                        v50 = this;
                                        if (var5_15 == null) break block110;
                                    }
                                    catch (MatchException v52) {
                                        throw aA.tL(v52);
                                    }
                                    if (!v50.QdNTF) break block111;
                                }
                                catch (MatchException v53) {
                                    throw aA.tL(v53);
                                }
                                v54 = var7_5;
                                if (var5_15 == null) break block112;
                            }
                            catch (MatchException v55) {
                                throw aA.tL(v55);
                            }
                            if (v54 != 0.0f) break block111;
                        }
                        catch (MatchException v56) {
                            throw aA.tL(v56);
                        }
                        v54 = this.kLgGw;
                    }
                    catch (MatchException v57) {
                        throw aA.tL(v57);
                    }
                }
                var16_14 = v54;
            }
            this.pNyTQ = var16_14;
            v50 = this;
        }
        return v50;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(aA.class, "tN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

