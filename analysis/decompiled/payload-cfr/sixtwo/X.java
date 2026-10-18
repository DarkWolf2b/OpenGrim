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
import sixtwo.V;
import sixtwo.aw;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.k;
import sixtwo.l;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.n;
import sixtwo.ri;

public abstract class X<T extends X<T>>
extends az {
    protected boolean rfAch;
    protected ld dPBSv;
    protected boolean jsFhG;
    protected boolean aoGjU;
    protected V<? super T> JAVXX;
    protected int yPQoU;
    protected mT TNQyk;
    protected mG PDPjF;
    protected mG mLQxH;
    protected mG syPUd;
    protected mG qMEZk;
    protected mG cQuwD;
    protected mG OiSGh;
    protected mG yNEVl;
    protected mG ZboOg;
    protected mG DMXak;
    protected float UtcTb;
    protected final ri PDdiO;
    protected final ri KUqGC;
    protected final ri IpOQw;
    protected mT VoUxF;
    protected boolean hyJHA;
    protected k cpjgN;
    protected boolean tKJaM;
    protected boolean SYMSh;
    private static String[] pwtRk;
    private static final long gfxGl;
    private static final long[] ubpsf;
    private static final Integer[] QagfK;
    private static final Map cdJwA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public X() {
        mG mG2;
        mG mG3;
        String[] stringArray;
        long l;
        block16: {
            X x;
            block14: {
                block15: {
                    mG mG4;
                    block13: {
                        X x2;
                        block11: {
                            block12: {
                                l = gfxGl ^ 0x587100EB4F59L;
                                this.rfAch = false;
                                this.dPBSv = ld.NONE;
                                this.yPQoU = 0;
                                this.TNQyk = mT.cpA();
                                this.PDPjF = null;
                                this.mLQxH = null;
                                this.syPUd = null;
                                this.qMEZk = null;
                                this.cQuwD = null;
                                this.OiSGh = null;
                                this.yNEVl = mG.UhgnI;
                                stringArray = X.jZ();
                                try {
                                    try {
                                        this.ZboOg = mG.UhgnI;
                                        this.DMXak = mG.UhgnI;
                                        this.UtcTb = 1.0f;
                                        this.VoUxF = mT.cpz();
                                        x2 = this;
                                        if (stringArray == null) break block11;
                                        if (x2.syPUd != null) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw X.ka(matchException);
                                    }
                                    mG4 = this.CtPwV.bjb();
                                    break block13;
                                }
                                catch (MatchException matchException) {
                                    throw X.ka(matchException);
                                }
                            }
                            x2 = this;
                        }
                        mG4 = x2.syPUd;
                    }
                    mG3 = mG4;
                    try {
                        try {
                            x = this;
                            if (stringArray == null) break block14;
                            if (x.OiSGh != null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw X.ka(matchException);
                        }
                        mG2 = this.CtPwV.bjc();
                        break block16;
                    }
                    catch (MatchException matchException) {
                        throw X.ka(matchException);
                    }
                }
                x = this;
            }
            mG2 = x.OiSGh;
        }
        mG mG5 = mG2;
        try {
            this.PDdiO = new ri((int)X.kd("h", (int)832, (long)(0x4364479C1988E468L ^ l)), mG3);
            this.IpOQw = new ri((int)X.kd("h", (int)10822, (long)(0x6F4540DB381BCD6FL ^ l)), mG5);
            this.KUqGC = new ri((int)X.kd("h", (int)10822, (long)(0x6F4540DB381BCD6FL ^ l)), this.yNEVl);
            if (stringArray == null) {
                iS.bwK("pJrm7b");
            }
        }
        catch (MatchException matchException) {
            throw X.ka(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        gfxGl = gb.aYR(-6788563015481561213L, 2550596124349801623L, MethodHandles.lookup().lookupClass()).a(153933445783030L);
        cdJwA = new HashMap(13);
        long l = gfxGl ^ 0x70F1BDD9F8FBL;
        X.jY(new String[3]);
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
        String string = "\u00f1\u00c3/\u0005p\u00eb-\u00d2\u0098\u001ev\u00e36w1\u001f";
        int n2 = "\u00f1\u00c3/\u0005p\u00eb-\u00d2\u0098\u001ev\u00e36w1\u001f".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        ubpsf = lArray;
        QagfK = new Integer[2];
    }

    public X<T> jv(boolean bl) {
        this.hyJHA = bl;
        return this;
    }

    private static int kc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = X.kb(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public X<T> jf(ld ld2) {
        this.dPBSv = ld2;
        return this;
    }

    public T ja(mG mG2) {
        this.qMEZk = mG2;
        this.cQuwD = mG2;
        this.OiSGh = mG2;
        return (T)this;
    }

    public X<T> jp(mG mG2) {
        this.OiSGh = mG2;
        return this;
    }

    public X<T> je(boolean bl) {
        this.rfAch = bl;
        return this;
    }

    public X<T> jw(k k2) {
        this.cpjgN = k2;
        return this;
    }

    public X<T> ji(int n) {
        this.yPQoU = n;
        return this;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected void bV(lC var1_1) {
        block124: {
            block123: {
                block107: {
                    block122: {
                        block120: {
                            block121: {
                                block119: {
                                    block117: {
                                        block118: {
                                            block116: {
                                                block114: {
                                                    block115: {
                                                        block113: {
                                                            block111: {
                                                                block112: {
                                                                    block110: {
                                                                        block108: {
                                                                            block109: {
                                                                                block87: {
                                                                                    block106: {
                                                                                        block104: {
                                                                                            block105: {
                                                                                                block103: {
                                                                                                    block101: {
                                                                                                        block102: {
                                                                                                            block100: {
                                                                                                                block98: {
                                                                                                                    block99: {
                                                                                                                        block97: {
                                                                                                                            block95: {
                                                                                                                                block96: {
                                                                                                                                    block94: {
                                                                                                                                        block92: {
                                                                                                                                            block93: {
                                                                                                                                                block90: {
                                                                                                                                                    block91: {
                                                                                                                                                        block88: {
                                                                                                                                                            block89: {
                                                                                                                                                                block85: {
                                                                                                                                                                    block86: {
                                                                                                                                                                        var2_2 = X.gfxGl ^ 40050139109926L;
                                                                                                                                                                        var4_3 = X.jZ();
                                                                                                                                                                        try {
                                                                                                                                                                            try {
                                                                                                                                                                                v0 = this.SYMSh;
                                                                                                                                                                                if (var4_3 == null) break block85;
                                                                                                                                                                                if (v0) break block86;
                                                                                                                                                                            }
                                                                                                                                                                            catch (MatchException v1) {
                                                                                                                                                                                throw X.ka(v1);
                                                                                                                                                                            }
                                                                                                                                                                            this.iX();
                                                                                                                                                                            this.SYMSh = true;
                                                                                                                                                                        }
                                                                                                                                                                        catch (MatchException v2) {
                                                                                                                                                                            throw X.ka(v2);
                                                                                                                                                                        }
                                                                                                                                                                    }
                                                                                                                                                                    v0 = this.ti(var1_1);
                                                                                                                                                                }
                                                                                                                                                                var5_4 = v0;
                                                                                                                                                                try {
                                                                                                                                                                    try {
                                                                                                                                                                        try {
                                                                                                                                                                            try {
                                                                                                                                                                                if (var4_3 == null) break block87;
                                                                                                                                                                                if (var5_4) {
                                                                                                                                                                                }
                                                                                                                                                                                ** GOTO lbl192
                                                                                                                                                                            }
                                                                                                                                                                            catch (MatchException v3) {
                                                                                                                                                                                throw X.ka(v3);
                                                                                                                                                                            }
                                                                                                                                                                            v4 = this;
                                                                                                                                                                            if (var4_3 == null) break block88;
                                                                                                                                                                        }
                                                                                                                                                                        catch (MatchException v5) {
                                                                                                                                                                            throw X.ka(v5);
                                                                                                                                                                        }
                                                                                                                                                                        if (v4.hyJHA) break block89;
                                                                                                                                                                    }
                                                                                                                                                                    catch (MatchException v6) {
                                                                                                                                                                        throw X.ka(v6);
                                                                                                                                                                    }
                                                                                                                                                                    this.VoUxF = mT.cpz();
                                                                                                                                                                    this.hyJHA = true;
                                                                                                                                                                }
                                                                                                                                                                catch (MatchException v7) {
                                                                                                                                                                    throw X.ka(v7);
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                            v4 = this;
                                                                                                                                                        }
                                                                                                                                                        try {
                                                                                                                                                            try {
                                                                                                                                                                try {
                                                                                                                                                                    try {
                                                                                                                                                                        try {
                                                                                                                                                                            try {
                                                                                                                                                                                if (var4_3 == null) break block90;
                                                                                                                                                                                if (v4.cpjgN == null) break block91;
                                                                                                                                                                            }
                                                                                                                                                                            catch (MatchException v8) {
                                                                                                                                                                                throw X.ka(v8);
                                                                                                                                                                            }
                                                                                                                                                                            v4 = this;
                                                                                                                                                                            if (var4_3 == null) break block90;
                                                                                                                                                                        }
                                                                                                                                                                        catch (MatchException v9) {
                                                                                                                                                                            throw X.ka(v9);
                                                                                                                                                                        }
                                                                                                                                                                        if (v4.tKJaM) break block91;
                                                                                                                                                                    }
                                                                                                                                                                    catch (MatchException v10) {
                                                                                                                                                                        throw X.ka(v10);
                                                                                                                                                                    }
                                                                                                                                                                    v4 = this;
                                                                                                                                                                    if (var4_3 == null) break block90;
                                                                                                                                                                }
                                                                                                                                                                catch (MatchException v11) {
                                                                                                                                                                    throw X.ka(v11);
                                                                                                                                                                }
                                                                                                                                                                if (!v4.VoUxF.cpC(this.cpjgN.cy())) break block91;
                                                                                                                                                            }
                                                                                                                                                            catch (MatchException v12) {
                                                                                                                                                                throw X.ka(v12);
                                                                                                                                                            }
                                                                                                                                                            aw.route(this.cpjgN);
                                                                                                                                                            this.tKJaM = true;
                                                                                                                                                        }
                                                                                                                                                        catch (MatchException v13) {
                                                                                                                                                            throw X.ka(v13);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                    v4 = this;
                                                                                                                                                }
                                                                                                                                                try {
                                                                                                                                                    try {
                                                                                                                                                        if (var4_3 == null) break block92;
                                                                                                                                                        if (v4.syPUd != null) break block93;
                                                                                                                                                    }
                                                                                                                                                    catch (MatchException v14) {
                                                                                                                                                        throw X.ka(v14);
                                                                                                                                                    }
                                                                                                                                                    v15 = this.CtPwV.bjb();
                                                                                                                                                    break block94;
                                                                                                                                                }
                                                                                                                                                catch (MatchException v16) {
                                                                                                                                                    throw X.ka(v16);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                            v4 = this;
                                                                                                                                        }
                                                                                                                                        v15 = v4.syPUd;
                                                                                                                                    }
                                                                                                                                    var6_5 = v15;
                                                                                                                                    try {
                                                                                                                                        try {
                                                                                                                                            v17 = this;
                                                                                                                                            if (var4_3 == null) break block95;
                                                                                                                                            if (v17.mLQxH != null) break block96;
                                                                                                                                        }
                                                                                                                                        catch (MatchException v18) {
                                                                                                                                            throw X.ka(v18);
                                                                                                                                        }
                                                                                                                                        v19 = this.CtPwV.bjb();
                                                                                                                                        break block97;
                                                                                                                                    }
                                                                                                                                    catch (MatchException v20) {
                                                                                                                                        throw X.ka(v20);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                v17 = this;
                                                                                                                            }
                                                                                                                            v19 = v17.mLQxH;
                                                                                                                        }
                                                                                                                        var7_6 = v19;
                                                                                                                        try {
                                                                                                                            try {
                                                                                                                                v21 = this;
                                                                                                                                if (var4_3 == null) break block98;
                                                                                                                                if (v21.OiSGh != null) break block99;
                                                                                                                            }
                                                                                                                            catch (MatchException v22) {
                                                                                                                                throw X.ka(v22);
                                                                                                                            }
                                                                                                                            v23 = this.CtPwV.bjc();
                                                                                                                            break block100;
                                                                                                                        }
                                                                                                                        catch (MatchException v24) {
                                                                                                                            throw X.ka(v24);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    v21 = this;
                                                                                                                }
                                                                                                                v23 = v21.OiSGh;
                                                                                                            }
                                                                                                            var8_7 = v23;
                                                                                                            try {
                                                                                                                try {
                                                                                                                    v25 = this;
                                                                                                                    if (var4_3 == null) break block101;
                                                                                                                    if (v25.cQuwD != null) break block102;
                                                                                                                }
                                                                                                                catch (MatchException v26) {
                                                                                                                    throw X.ka(v26);
                                                                                                                }
                                                                                                                v27 = this.CtPwV.bjc();
                                                                                                                break block103;
                                                                                                            }
                                                                                                            catch (MatchException v28) {
                                                                                                                throw X.ka(v28);
                                                                                                            }
                                                                                                        }
                                                                                                        v25 = this;
                                                                                                    }
                                                                                                    v27 = v25.cQuwD;
                                                                                                }
                                                                                                var9_8 = v27;
                                                                                                try {
                                                                                                    v29 = this.PDdiO;
                                                                                                    v30 = this.aoGjU != false ? var6_5 : var7_6;
                                                                                                }
                                                                                                catch (MatchException v31) {
                                                                                                    throw X.ka(v31);
                                                                                                }
                                                                                                try {
                                                                                                    v29.dfT(v30);
                                                                                                    v32 = this.IpOQw;
                                                                                                    v33 = this.aoGjU != false ? var8_7 : var9_8;
                                                                                                }
                                                                                                catch (MatchException v34) {
                                                                                                    throw X.ka(v34);
                                                                                                }
                                                                                                try {
                                                                                                    try {
                                                                                                        v32.dfT(v33);
                                                                                                        v35 = this.KUqGC;
                                                                                                        v36 = this;
                                                                                                        if (var4_3 == null) break block104;
                                                                                                        if (!v36.aoGjU) break block105;
                                                                                                    }
                                                                                                    catch (MatchException v37) {
                                                                                                        throw X.ka(v37);
                                                                                                    }
                                                                                                    v38 = this.DMXak;
                                                                                                    break block106;
                                                                                                }
                                                                                                catch (MatchException v39) {
                                                                                                    throw X.ka(v39);
                                                                                                }
                                                                                            }
                                                                                            v36 = this;
                                                                                        }
                                                                                        v38 = v36.ZboOg;
                                                                                    }
                                                                                    try {
                                                                                        v35.dfT(v38);
                                                                                        if (var4_3 != null) break block107;
lbl192:
                                                                                        // 2 sources

                                                                                        this.hyJHA = false;
                                                                                        this.VoUxF = mT.cpz();
                                                                                        this.tKJaM = false;
                                                                                    }
                                                                                    catch (MatchException v40) {
                                                                                        throw X.ka(v40);
                                                                                    }
                                                                                }
                                                                                try {
                                                                                    try {
                                                                                        v41 = this;
                                                                                        if (var4_3 == null) break block108;
                                                                                        if (v41.PDPjF != null) break block109;
                                                                                    }
                                                                                    catch (MatchException v42) {
                                                                                        throw X.ka(v42);
                                                                                    }
                                                                                    v43 = this.CtPwV.bjb().cob(0.5f);
                                                                                    break block110;
                                                                                }
                                                                                catch (MatchException v44) {
                                                                                    throw X.ka(v44);
                                                                                }
                                                                            }
                                                                            v41 = this;
                                                                        }
                                                                        v43 = v41.PDPjF;
                                                                    }
                                                                    var6_5 = v43;
                                                                    try {
                                                                        try {
                                                                            v45 = this;
                                                                            if (var4_3 == null) break block111;
                                                                            if (v45.syPUd != null) break block112;
                                                                        }
                                                                        catch (MatchException v46) {
                                                                            throw X.ka(v46);
                                                                        }
                                                                        v47 = this.CtPwV.bjb();
                                                                        break block113;
                                                                    }
                                                                    catch (MatchException v48) {
                                                                        throw X.ka(v48);
                                                                    }
                                                                }
                                                                v45 = this;
                                                            }
                                                            v47 = v45.syPUd;
                                                        }
                                                        var7_6 = v47;
                                                        try {
                                                            try {
                                                                v49 = this;
                                                                if (var4_3 == null) break block114;
                                                                if (v49.qMEZk != null) break block115;
                                                            }
                                                            catch (MatchException v50) {
                                                                throw X.ka(v50);
                                                            }
                                                            v51 = this.CtPwV.bjc();
                                                            break block116;
                                                        }
                                                        catch (MatchException v52) {
                                                            throw X.ka(v52);
                                                        }
                                                    }
                                                    v49 = this;
                                                }
                                                v51 = v49.qMEZk;
                                            }
                                            var8_7 = v51;
                                            try {
                                                try {
                                                    v53 = this;
                                                    if (var4_3 == null) break block117;
                                                    if (v53.OiSGh != null) break block118;
                                                }
                                                catch (MatchException v54) {
                                                    throw X.ka(v54);
                                                }
                                                v55 = this.CtPwV.bjc();
                                                break block119;
                                            }
                                            catch (MatchException v56) {
                                                throw X.ka(v56);
                                            }
                                        }
                                        v53 = this;
                                    }
                                    v55 = v53.OiSGh;
                                }
                                var9_8 = v55;
                                try {
                                    v57 = this.PDdiO;
                                    v58 = this.aoGjU != false ? var7_6 : var6_5;
                                }
                                catch (MatchException v59) {
                                    throw X.ka(v59);
                                }
                                try {
                                    v57.dfT(v58);
                                    v60 = this.IpOQw;
                                    v61 = this.aoGjU != false ? var9_8 : var8_7;
                                }
                                catch (MatchException v62) {
                                    throw X.ka(v62);
                                }
                                try {
                                    try {
                                        v60.dfT(v61);
                                        v63 = this.KUqGC;
                                        v64 = this;
                                        if (var4_3 == null) break block120;
                                        if (!v64.aoGjU) break block121;
                                    }
                                    catch (MatchException v65) {
                                        throw X.ka(v65);
                                    }
                                    v66 = this.DMXak;
                                    break block122;
                                }
                                catch (MatchException v67) {
                                    throw X.ka(v67);
                                }
                            }
                            v64 = this;
                        }
                        v66 = v64.yNEVl;
                    }
                    v63.dfT(v66);
                }
                var6_5 = this.KUqGC.dfU().cob(this.UtcTb);
                try {
                    try {
                        v68 = this.rfAch;
                        if (var4_3 == null) break block123;
                        if (!v68) break block124;
                    }
                    catch (MatchException v69) {
                        throw X.ka(v69);
                    }
                    v68 = var6_5.cnW();
                }
                catch (MatchException v70) {
                    throw X.ka(v70);
                }
            }
            try {
                if (!v68) {
                    var1_1.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 5.0f, this.dPBSv, var6_5);
                }
            }
            catch (MatchException v71) {
                throw X.ka(v71);
            }
        }
        try {
            if (iS.bwL() == null) {
                X.jY(new String[4]);
            }
        }
        catch (MatchException v72) {
            throw X.ka(v72);
        }
    }

    private static CallSite kd(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/X" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public X<T> js(mG mG2) {
        this.DMXak = mG2;
        return this;
    }

    public X<T> jg(boolean bl) {
        this.jsFhG = bl;
        return this;
    }

    public T jd(String string, String ... stringArray) {
        this.cpjgN = new n(this, string, stringArray);
        return (T)this;
    }

    private static MatchException ka(MatchException matchException) {
        return matchException;
    }

    public boolean jC() {
        return this.aoGjU;
    }

    public X<T> jt(float f2) {
        this.UtcTb = f2;
        return this;
    }

    public T jc(int[] nArray) {
        this.cpjgN = new l((az)this, nArray);
        return (T)this;
    }

    public X<T> jh(boolean bl) {
        this.aoGjU = bl;
        return this;
    }

    public boolean jB() {
        return this.jsFhG;
    }

    public ri jR() {
        return this.KUqGC;
    }

    public T iZ(mG mG2) {
        this.yNEVl = mG2;
        this.ZboOg = mG2;
        this.DMXak = mG2;
        return (T)this;
    }

    public X<T> ju(mT mT2) {
        this.VoUxF = mT2;
        return this;
    }

    public X<T> jy(boolean bl) {
        this.SYMSh = bl;
        return this;
    }

    public mG jM() {
        return this.yNEVl;
    }

    public mG jO() {
        return this.DMXak;
    }

    public float jP() {
        return this.UtcTb;
    }

    public mT jT() {
        return this.VoUxF;
    }

    public boolean jU() {
        return this.hyJHA;
    }

    public boolean jW() {
        return this.tKJaM;
    }

    public X<T> jo(mG mG2) {
        this.cQuwD = mG2;
        return this;
    }

    public X<T> jj(mT mT2) {
        this.TNQyk = mT2;
        return this;
    }

    public mG jK() {
        return this.cQuwD;
    }

    public ri jS() {
        return this.IpOQw;
    }

    public ld jA() {
        return this.dPBSv;
    }

    public int jE() {
        return this.yPQoU;
    }

    public mT jF() {
        return this.TNQyk;
    }

    public mG jL() {
        return this.OiSGh;
    }

    public ri jQ() {
        return this.PDdiO;
    }

    public k jV() {
        return this.cpjgN;
    }

    public mG jN() {
        return this.ZboOg;
    }

    public X<T> jn(mG mG2) {
        this.qMEZk = mG2;
        return this;
    }

    public boolean jX() {
        return this.SYMSh;
    }

    public mG jJ() {
        return this.qMEZk;
    }

    public static void jY(String[] stringArray) {
        pwtRk = stringArray;
    }

    public X<T> jx(boolean bl) {
        this.tKJaM = bl;
        return this;
    }

    public mG jI() {
        return this.syPUd;
    }

    private void iX() {
        mG mG2;
        mG mG3;
        mG mG4;
        block38: {
            X x;
            block36: {
                block37: {
                    mG mG5;
                    mG mG6;
                    mG mG7;
                    mG mG8;
                    mG mG9;
                    mG mG10;
                    String[] stringArray;
                    block35: {
                        X x2;
                        block33: {
                            block34: {
                                mG mG11;
                                block32: {
                                    X x3;
                                    block30: {
                                        block31: {
                                            mG mG12;
                                            block29: {
                                                X x4;
                                                block27: {
                                                    block28: {
                                                        mG mG13;
                                                        block26: {
                                                            X x5;
                                                            block24: {
                                                                block25: {
                                                                    long l2 = gfxGl ^ 0x2B9E08208D5L;
                                                                    stringArray = X.jZ();
                                                                    try {
                                                                        try {
                                                                            x5 = this;
                                                                            if (stringArray == null) break block24;
                                                                            if (x5.PDPjF != null) break block25;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw X.ka(matchException);
                                                                        }
                                                                        mG13 = this.CtPwV.bjb().cob(0.5f);
                                                                        break block26;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw X.ka(matchException);
                                                                    }
                                                                }
                                                                x5 = this;
                                                            }
                                                            mG13 = x5.PDPjF;
                                                        }
                                                        mG10 = mG13;
                                                        try {
                                                            try {
                                                                x4 = this;
                                                                if (stringArray == null) break block27;
                                                                if (x4.syPUd != null) break block28;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw X.ka(matchException);
                                                            }
                                                            mG12 = this.CtPwV.bjb();
                                                            break block29;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw X.ka(matchException);
                                                        }
                                                    }
                                                    x4 = this;
                                                }
                                                mG12 = x4.syPUd;
                                            }
                                            mG9 = mG12;
                                            try {
                                                try {
                                                    x3 = this;
                                                    if (stringArray == null) break block30;
                                                    if (x3.qMEZk != null) break block31;
                                                }
                                                catch (MatchException matchException) {
                                                    throw X.ka(matchException);
                                                }
                                                mG11 = this.CtPwV.bjc();
                                                break block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw X.ka(matchException);
                                            }
                                        }
                                        x3 = this;
                                    }
                                    mG11 = x3.qMEZk;
                                }
                                mG8 = mG11;
                                try {
                                    try {
                                        x2 = this;
                                        if (stringArray == null) break block33;
                                        if (x2.OiSGh != null) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw X.ka(matchException);
                                    }
                                    mG7 = this.CtPwV.bjc();
                                    break block35;
                                }
                                catch (MatchException matchException) {
                                    throw X.ka(matchException);
                                }
                            }
                            x2 = this;
                        }
                        mG7 = x2.OiSGh;
                    }
                    mG mG14 = mG7;
                    try {
                        mG6 = this.aoGjU ? mG9 : mG10;
                    }
                    catch (MatchException matchException) {
                        throw X.ka(matchException);
                    }
                    mG4 = mG6;
                    try {
                        mG5 = this.aoGjU ? mG14 : mG8;
                    }
                    catch (MatchException matchException) {
                        throw X.ka(matchException);
                    }
                    mG3 = mG5;
                    try {
                        try {
                            x = this;
                            if (stringArray == null) break block36;
                            if (!x.aoGjU) break block37;
                        }
                        catch (MatchException matchException) {
                            throw X.ka(matchException);
                        }
                        mG2 = this.DMXak;
                        break block38;
                    }
                    catch (MatchException matchException) {
                        throw X.ka(matchException);
                    }
                }
                x = this;
            }
            mG2 = x.yNEVl;
        }
        mG mG15 = mG2;
        this.PDdiO.dfY(mG4);
        this.IpOQw.dfY(mG3);
        this.KUqGC.dfY(mG15);
    }

    public static String[] jZ() {
        return pwtRk;
    }

    public boolean iW() {
        boolean bl;
        block2: {
            block3: {
                long l2 = gfxGl ^ 0x3E27D295EA3L;
                String[] stringArray = X.jZ();
                try {
                    bl = this.TNQyk.cpC(this.yPQoU);
                    if (stringArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw X.ka(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    public mG jH() {
        return this.mLQxH;
    }

    public V<? super T> jD() {
        return this.JAVXX;
    }

    private static int kb(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6A;
        if (QagfK[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ubpsf[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])cdJwA.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cdJwA.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/X", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            X.QagfK[n3] = n4;
        }
        return QagfK[n3];
    }

    public mG jG() {
        return this.PDPjF;
    }

    public X<T> jl(mG mG2) {
        this.mLQxH = mG2;
        return this;
    }

    public T iY(mG mG2) {
        this.PDPjF = mG2;
        this.mLQxH = mG2;
        this.syPUd = mG2;
        return (T)this;
    }

    public X<T> jk(mG mG2) {
        this.PDPjF = mG2;
        return this;
    }

    public X<T> jq(mG mG2) {
        this.yNEVl = mG2;
        return this;
    }

    public X<T> jr(mG mG2) {
        this.ZboOg = mG2;
        return this;
    }

    public T jb(V<? super T> v) {
        this.JAVXX = v;
        return (T)this;
    }

    public X<T> jm(mG mG2) {
        this.syPUd = mG2;
        return this;
    }

    public boolean jz() {
        return this.rfAch;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(X.class, "kc", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
