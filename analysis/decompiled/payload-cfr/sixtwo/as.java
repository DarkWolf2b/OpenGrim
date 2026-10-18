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
import sixtwo.aj;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.ri;

public class as
extends az {
    private lf IMYwx;
    private float roFDy;
    private String eUwLB;
    private lq Dbxwi;
    private ld hXIIw;
    private mG bqrOL;
    private mG ZNkPs;
    private mG zaHDb;
    private mG RUvmV;
    private mG SVUiL;
    private mG TgwOQ;
    private boolean OcHac;
    private final ri PDMmP;
    private final ri nWGSH;
    private final ri tTyYq;
    private static final long vmyiF = gb.aYR(-2646341689623667932L, -9019365439646895507L, MethodHandles.lookup().lookupClass()).a(233193405348572L);
    private static final long[] rxBGn;
    private static final Integer[] HTRFc;
    private static final Map sYRBY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public as() {
        long l = vmyiF ^ 0x5749A1474546L;
        this.hXIIw = ld.all(2.0f);
        this.bqrOL = mG.hoGuU;
        this.ZNkPs = mG.hoGuU;
        this.zaHDb = mG.hoGuU;
        this.RUvmV = null;
        this.SVUiL = null;
        this.TgwOQ = null;
        this.OcHac = false;
        this.PDMmP = new ri((int)as.rT("w", (int)1907, (long)(0x63B2DD280CB7D025L ^ l)));
        this.nWGSH = new ri((int)as.rT("w", (int)22994, (long)(0x68A5BB3B8CA68E85L ^ l)));
        this.tTyYq = new ri((int)as.rT("w", (int)22994, (long)(0x68A5BB3B8CA68E85L ^ l)));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        sYRBY = new HashMap(13);
        long l = vmyiF ^ 0x37897FB9046FL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00ec][M\u0017\u00c9\u00a5az\u00d1my\u00e6 \u00b9\u0003";
        int n2 = "\u00ec][M\u0017\u00c9\u00a5az\u00d1my\u00e6 \u00b9\u0003".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        rxBGn = lArray;
        HTRFc = new Integer[2];
    }

    @Override
    public float dn() {
        this.rp();
        return this.WjISQ;
    }

    public mG rv() {
        return this.bqrOL;
    }

    public String rs() {
        return this.eUwLB;
    }

    private void rp() {
        boolean bl;
        float f2;
        block21: {
            boolean bl2;
            block20: {
                String[] stringArray;
                block19: {
                    boolean bl3;
                    block18: {
                        block16: {
                            as as2;
                            block17: {
                                String string;
                                block15: {
                                    long l = vmyiF ^ 0x5D72FD41D79EL;
                                    f2 = 10.0f;
                                    stringArray = aj.oA();
                                    try {
                                        try {
                                            try {
                                                string = this.eUwLB;
                                                if (stringArray == null) break block15;
                                                if (string == null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw as.rQ(matchException);
                                            }
                                            as2 = this;
                                            if (stringArray == null) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw as.rQ(matchException);
                                        }
                                        string = as2.eUwLB;
                                    }
                                    catch (MatchException matchException) {
                                        throw as.rQ(matchException);
                                    }
                                }
                                try {
                                    if (string.isBlank()) break block16;
                                    as2 = this;
                                }
                                catch (MatchException matchException) {
                                    throw as.rQ(matchException);
                                }
                            }
                            try {
                                if (as2.Dbxwi == null) break block16;
                                bl3 = true;
                                break block18;
                            }
                            catch (MatchException matchException) {
                                throw as.rQ(matchException);
                            }
                        }
                        bl3 = false;
                    }
                    bl2 = bl3;
                    try {
                        if (stringArray == null) break block19;
                        if (this.IMYwx == null) break block20;
                    }
                    catch (MatchException matchException) {
                        throw as.rQ(matchException);
                    }
                    f2 += lE.WxpHL.bYM(this.roFDy).caq(this.IMYwx.bXR());
                }
                try {
                    bl = bl2;
                    if (stringArray == null) break block21;
                    if (!bl) break block20;
                }
                catch (MatchException matchException) {
                    throw as.rQ(matchException);
                }
                f2 += 3.0f;
            }
            bl = bl2;
        }
        if (bl) {
            f2 += this.Dbxwi.cao(this.eUwLB);
        }
        this.BcpIo = f2;
    }

    public ld ru() {
        return this.hXIIw;
    }

    public mG rw() {
        return this.ZNkPs;
    }

    public lq rt() {
        return this.Dbxwi;
    }

    public mG rx() {
        return this.zaHDb;
    }

    public as ro(lq lq2) {
        this.Dbxwi = lq2;
        this.rp();
        return this;
    }

    public lf rq() {
        return this.IMYwx;
    }

    public float rr() {
        return this.roFDy;
    }

    public mG ry() {
        return this.RUvmV;
    }

    public mG rz() {
        return this.SVUiL;
    }

    public ri rD() {
        return this.nWGSH;
    }

    private static int rR(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5A00;
        if (HTRFc[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = rxBGn[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])sYRBY.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    sYRBY.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/as", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            as.HTRFc[n2] = n3;
        }
        return HTRFc[n2];
    }

    public as rI(ld ld2) {
        this.hXIIw = ld2;
        return this;
    }

    public boolean rB() {
        return this.OcHac;
    }

    public ri rC() {
        return this.PDMmP;
    }

    public as rK(mG mG2) {
        this.ZNkPs = mG2;
        return this;
    }

    public as rM(mG mG2) {
        this.RUvmV = mG2;
        return this;
    }

    public ri rE() {
        return this.tTyYq;
    }

    private static CallSite rT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/as" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public as rN(mG mG2) {
        this.SVUiL = mG2;
        return this;
    }

    public as rP(boolean bl) {
        this.OcHac = bl;
        return this;
    }

    private static int rS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = as.rR(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static MatchException rQ(MatchException matchException) {
        return matchException;
    }

    public mG rA() {
        return this.TgwOQ;
    }

    public as rJ(mG mG2) {
        this.bqrOL = mG2;
        return this;
    }

    public as rL(mG mG2) {
        this.zaHDb = mG2;
        return this;
    }

    public as rO(mG mG2) {
        this.TgwOQ = mG2;
        return this;
    }

    @Override
    public float kN() {
        this.rp();
        return this.BcpIo;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected void bV(lC var1_1) {
        block56: {
            block58: {
                block57: {
                    block55: {
                        block53: {
                            block54: {
                                block52: {
                                    block49: {
                                        block51: {
                                            block50: {
                                                block48: {
                                                    block45: {
                                                        block47: {
                                                            block46: {
                                                                block44: {
                                                                    block41: {
                                                                        block43: {
                                                                            block42: {
                                                                                var2_2 = as.vmyiF ^ 121342260116013L;
                                                                                v0 = aj.oA();
                                                                                this.rp();
                                                                                var5_3 = this.ti(var1_1);
                                                                                var4_4 = v0;
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            v1 = this.RUvmV;
                                                                                            if (var4_4 == null) break block41;
                                                                                            if (v1 != null) {
                                                                                            }
                                                                                            ** GOTO lbl30
                                                                                        }
                                                                                        catch (MatchException v2) {
                                                                                            throw as.rQ(v2);
                                                                                        }
                                                                                        if (!var5_3) break block42;
                                                                                    }
                                                                                    catch (MatchException v3) {
                                                                                        throw as.rQ(v3);
                                                                                    }
                                                                                    v4 = this.RUvmV;
                                                                                    break block43;
                                                                                }
                                                                                catch (MatchException v5) {
                                                                                    throw as.rQ(v5);
                                                                                }
                                                                            }
                                                                            v4 = this.bqrOL;
                                                                        }
                                                                        var6_5 = v4;
                                                                        try {
                                                                            if (var4_4 != null) break block44;
lbl30:
                                                                            // 2 sources

                                                                            v1 = this.bqrOL;
                                                                        }
                                                                        catch (MatchException v6) {
                                                                            throw as.rQ(v6);
                                                                        }
                                                                    }
                                                                    var6_5 = v1;
                                                                }
                                                                try {
                                                                    try {
                                                                        try {
                                                                            v7 = this.SVUiL;
                                                                            if (var4_4 == null) break block45;
                                                                            if (v7 != null) {
                                                                            }
                                                                            ** GOTO lbl61
                                                                        }
                                                                        catch (MatchException v8) {
                                                                            throw as.rQ(v8);
                                                                        }
                                                                        if (!var5_3) break block46;
                                                                    }
                                                                    catch (MatchException v9) {
                                                                        throw as.rQ(v9);
                                                                    }
                                                                    v10 = this.SVUiL;
                                                                    break block47;
                                                                }
                                                                catch (MatchException v11) {
                                                                    throw as.rQ(v11);
                                                                }
                                                            }
                                                            v10 = this.ZNkPs;
                                                        }
                                                        var7_6 = v10;
                                                        try {
                                                            if (var4_4 != null) break block48;
lbl61:
                                                            // 2 sources

                                                            v7 = this.ZNkPs;
                                                        }
                                                        catch (MatchException v12) {
                                                            throw as.rQ(v12);
                                                        }
                                                    }
                                                    var7_6 = v7;
                                                }
                                                try {
                                                    try {
                                                        try {
                                                            v13 = this.TgwOQ;
                                                            if (var4_4 == null) break block49;
                                                            if (v13 != null) {
                                                            }
                                                            ** GOTO lbl92
                                                        }
                                                        catch (MatchException v14) {
                                                            throw as.rQ(v14);
                                                        }
                                                        if (!var5_3) break block50;
                                                    }
                                                    catch (MatchException v15) {
                                                        throw as.rQ(v15);
                                                    }
                                                    v16 = this.TgwOQ;
                                                    break block51;
                                                }
                                                catch (MatchException v17) {
                                                    throw as.rQ(v17);
                                                }
                                            }
                                            v16 = this.zaHDb;
                                        }
                                        var8_7 = v16;
                                        try {
                                            if (var4_4 != null) break block52;
lbl92:
                                            // 2 sources

                                            v13 = this.zaHDb;
                                        }
                                        catch (MatchException v18) {
                                            throw as.rQ(v18);
                                        }
                                    }
                                    var8_7 = v13;
                                }
                                this.PDMmP.dfT(var6_5);
                                this.nWGSH.dfT(var7_6);
                                this.tTyYq.dfT(var8_7);
                                var1_1.cdg(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, this.hXIIw, this.tTyYq.dfU());
                                var9_8 = this.MCnYt + 5.0f;
                                try {
                                    v19 = this;
                                    if (var4_4 == null) break block53;
                                    if (v19.IMYwx == null) break block54;
                                }
                                catch (MatchException v20) {
                                    throw as.rQ(v20);
                                }
                                var10_9 = this.MCnYt + 5.0f;
                                var11_10 = this.pNyTQ + jf.bAH(this.roFDy, this.WjISQ);
                                var1_1.cem(this.IMYwx, var10_9, var11_10, this.roFDy, this.PDMmP.dfU());
                                var9_8 = var10_9 + this.roFDy + 3.0f;
                            }
                            v19 = this;
                        }
                        try {
                            try {
                                if (var4_4 == null) break block55;
                                if (v19.Dbxwi == null) break block56;
                            }
                            catch (MatchException v21) {
                                throw as.rQ(v21);
                            }
                            v19 = this;
                        }
                        catch (MatchException v22) {
                            throw as.rQ(v22);
                        }
                    }
                    try {
                        try {
                            try {
                                v23 = v19.eUwLB;
                                if (var4_4 == null) break block57;
                                if (v23 == null) break block56;
                            }
                            catch (MatchException v24) {
                                throw as.rQ(v24);
                            }
                            v25 = this;
                            if (var4_4 == null) break block58;
                        }
                        catch (MatchException v26) {
                            throw as.rQ(v26);
                        }
                        v23 = v25.eUwLB;
                    }
                    catch (MatchException v27) {
                        throw as.rQ(v27);
                    }
                }
                try {
                    if (v23.isBlank()) break block56;
                    v25 = this;
                }
                catch (MatchException v28) {
                    throw as.rQ(v28);
                }
            }
            var10_9 = v25.pNyTQ + jf.bAH(this.Dbxwi.cat(), this.WjISQ);
            var1_1.cez(this.Dbxwi, this.eUwLB, var9_8, var10_9, this.nWGSH.dfU());
        }
    }

    public as rG(float f2) {
        this.roFDy = f2;
        return this;
    }

    public as rH(String string) {
        this.eUwLB = string;
        return this;
    }

    public as rF(lf lf2) {
        this.IMYwx = lf2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(as.class, "rS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
