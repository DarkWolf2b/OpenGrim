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
import sixtwo.P;
import sixtwo.S;
import sixtwo.X;
import sixtwo.cN;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mZ;

public class Q
extends X<Q> {
    private lf oPMeK;
    private lf wiuXp;
    private String YXNaM = "";
    private lq GLZJQ = lE.joxgd.bYM(8.0f);
    private S rMeoS = S.DcYIP;
    private float zEeue = 8.0f;
    private static final long GfYMS = gb.aYR(-1448213306908423785L, 8756238232399005337L, MethodHandles.lookup().lookupClass()).a(27560254510464L);
    private static final String[] BaLsn;
    private static final String[] lhTYh;
    private static final Map IAsFe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public Q ip(String string) {
        this.YXNaM = string;
        return this;
    }

    public Q ir(S s) {
        this.rMeoS = s;
        return this;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        IAsFe = new HashMap(13);
        long l2 = GfYMS ^ 0x38F6E93D4ED0L;
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
        String[] stringArray = new String[2];
        int n2 = 0;
        String string = "\u00cd\u00cc\u0011\u00b7tFF\u00f4\u0010\u0013\u00b2\u008f\u0006|\u009c\r\u0094\t\u0097)\u00f8\u00b2\u0000A\u0092L/\u00ca\u00bb\u0095\"\u00ff\u00a5\u009eXh\u00c3\u00c2\u00ab\u0083(\u00cb\u00ae\u0098\u009a\u0012\u00d6\u00e6m\u0015\u00d2\u00ddx\u00c1\u00f4\u00c0\u0097oc9\u000e\u0011\u001d\u00b4-\u00dd\u0000>\\\u0099\u00f7\u00ac\u009cW\u00e8\u00fft\u00f5\u0089\u00be\u00cd";
        int n3 = "\u00cd\u00cc\u0011\u00b7tFF\u00f4\u0010\u0013\u00b2\u008f\u0006|\u009c\r\u0094\t\u0097)\u00f8\u00b2\u0000A\u0092L/\u00ca\u00bb\u0095\"\u00ff\u00a5\u009eXh\u00c3\u00c2\u00ab\u0083(\u00cb\u00ae\u0098\u009a\u0012\u00d6\u00e6m\u0015\u00d2\u00ddx\u00c1\u00f4\u00c0\u0097oc9\u000e\u0011\u001d\u00b4-\u00dd\u0000>\\\u0099\u00f7\u00ac\u009cW\u00e8\u00fft\u00f5\u0089\u00be\u00cd".length();
        int n4 = 40;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = Q.iu(byArray3).intern();
            if ((n5 += n4) >= n3) {
                BaLsn = stringArray;
                lhTYh = new String[2];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public Q in(lf lf2) {
        this.oPMeK = lf2;
        return this;
    }

    private static MatchException it(MatchException matchException) {
        return matchException;
    }

    public Q is(float f2) {
        this.zEeue = f2;
        return this;
    }

    private static CallSite ix(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/Q" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public lf ih() {
        return this.oPMeK;
    }

    public Q io(lf lf2) {
        this.wiuXp = lf2;
        return this;
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block19: {
            block20: {
                boolean bl3;
                block25: {
                    block26: {
                        boolean bl4;
                        block27: {
                            block28: {
                                Q q2;
                                String[] stringArray;
                                block23: {
                                    block24: {
                                        block21: {
                                            block22: {
                                                long l2 = GfYMS ^ 0x6B6ABCA29AE8L;
                                                stringArray = P.hY();
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                bl2 = this.tg(d2, d3);
                                                                if (stringArray != null) break block19;
                                                                if (!bl2) break block20;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw Q.it(matchException);
                                                            }
                                                            q2 = this;
                                                            if (stringArray != null) break block21;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw Q.it(matchException);
                                                        }
                                                        if (q2.iW()) {
                                                        }
                                                        break block22;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw Q.it(matchException);
                                                    }
                                                    cN.XI((String)((Object)Q.ix("k", (int)31966, (long)(0x62842EC4A8C20333L ^ l2))) + mZ.cst(this.yPQoU, this.TNQyk) + (String)((Object)Q.ix("k", (int)15188, (long)(0x17589EEE80CFC4B8L ^ l2))));
                                                    return true;
                                                }
                                                catch (MatchException matchException) {
                                                    throw Q.it(matchException);
                                                }
                                            }
                                            q2 = this;
                                        }
                                        try {
                                            try {
                                                if (stringArray != null) break block23;
                                                if (q2.JAVXX == null) break block24;
                                            }
                                            catch (MatchException matchException) {
                                                throw Q.it(matchException);
                                            }
                                            this.JAVXX.run(this);
                                        }
                                        catch (MatchException matchException) {
                                            throw Q.it(matchException);
                                        }
                                    }
                                    q2 = this;
                                }
                                try {
                                    try {
                                        try {
                                            bl3 = q2.jsFhG;
                                            if (stringArray != null) break block25;
                                            if (!bl3) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw Q.it(matchException);
                                        }
                                        Q q3 = this;
                                        bl4 = this.aoGjU;
                                        if (stringArray != null) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw Q.it(matchException);
                                    }
                                    if (bl4) break block28;
                                }
                                catch (MatchException matchException) {
                                    throw Q.it(matchException);
                                }
                                bl4 = true;
                                break block27;
                            }
                            bl4 = false;
                        }
                        q3.aoGjU = bl4;
                    }
                    bl3 = true;
                }
                return bl3;
            }
            bl2 = super.dk(d2, d3, mA2);
        }
        return bl2;
    }

    private static Object iw(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = Q.iv(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected void bV(lC var1_1) {
        block34: {
            block33: {
                block31: {
                    block32: {
                        block29: {
                            block28: {
                                block24: {
                                    block27: {
                                        block25: {
                                            block26: {
                                                var2_2 = Q.GfYMS ^ 60470791458348L;
                                                v0 = P.hY();
                                                super.bV(var1_1);
                                                var4_3 = v0;
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                v1 = this;
                                                                if (var4_3 != null) break block24;
                                                                if (v1.aoGjU) {
                                                                }
                                                                ** GOTO lbl37
                                                            }
                                                            catch (MatchException v2) {
                                                                throw Q.it(v2);
                                                            }
                                                            v3 = this;
                                                            if (var4_3 != null) break block25;
                                                        }
                                                        catch (MatchException v4) {
                                                            throw Q.it(v4);
                                                        }
                                                        if (v3.oPMeK != null) break block26;
                                                    }
                                                    catch (MatchException v5) {
                                                        throw Q.it(v5);
                                                    }
                                                    v6 = this.wiuXp;
                                                    break block27;
                                                }
                                                catch (MatchException v7) {
                                                    throw Q.it(v7);
                                                }
                                            }
                                            v3 = this;
                                        }
                                        v6 = v3.oPMeK;
                                    }
                                    var5_4 = v6;
                                    try {
                                        if (var4_3 == null) break block28;
lbl37:
                                        // 2 sources

                                        v1 = this;
                                    }
                                    catch (MatchException v8) {
                                        throw Q.it(v8);
                                    }
                                }
                                var5_4 = v1.wiuXp;
                            }
                            var6_5 = this.PDdiO.dfU().cob(this.UtcTb);
                            try {
                                block30: {
                                    try {
                                        try {
                                            try {
                                                if (var4_3 != null) break block29;
                                                if (this.YXNaM == null) break block30;
                                            }
                                            catch (MatchException v9) {
                                                throw Q.it(v9);
                                            }
                                            v10 = this;
                                            if (var4_3 != null) break block31;
                                        }
                                        catch (MatchException v11) {
                                            throw Q.it(v11);
                                        }
                                        if (!v10.YXNaM.isBlank()) break block32;
                                    }
                                    catch (MatchException v12) {
                                        throw Q.it(v12);
                                    }
                                }
                                var1_1.ceo(var5_4, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, this.zEeue, var6_5);
                            }
                            catch (MatchException v13) {
                                throw Q.it(v13);
                            }
                        }
                        return;
                    }
                    v10 = this;
                }
                var7_6 = v10.PDdiO.dfU().cob(this.UtcTb);
                var8_7 = this.GLZJQ.cat();
                try {
                    v14 = this;
                    if (var4_3 != null) break block33;
                    if (v14.rMeoS == S.DcYIP) {
                    }
                    ** GOTO lbl91
                }
                catch (MatchException v15) {
                    throw Q.it(v15);
                }
                var9_8 = this.MCnYt + 9.0f;
                var10_9 = this.pNyTQ + jf.bAH(var8_7, this.WjISQ);
                var1_1.ceH(this.GLZJQ, this.YXNaM, var9_8, var10_9, var7_6, 0.8f, 0.99f, this.BcpIo - 24.0f);
                var11_10 = this.MCnYt + this.BcpIo - this.zEeue - 9.0f;
                var12_11 = this.pNyTQ + jf.bAH(this.zEeue, this.WjISQ);
                try {
                    var1_1.cem(var5_4, var11_10, var12_11, this.zEeue, var6_5);
                    if (var4_3 == null) break block34;
lbl91:
                    // 2 sources

                    v14 = this;
                }
                catch (MatchException v16) {
                    throw Q.it(v16);
                }
            }
            var9_8 = v14.MCnYt + 9.0f;
            var10_9 = this.pNyTQ + jf.bAH(this.zEeue, this.WjISQ);
            var1_1.cem(var5_4, var9_8, var10_9, this.zEeue, var6_5);
            var11_10 = var9_8 + this.zEeue + 5.0f;
            var12_11 = this.pNyTQ + jf.bAH(var8_7, this.WjISQ);
            var1_1.ceH(this.GLZJQ, this.YXNaM, var11_10, var12_11, var7_6, 0.8f, 0.99f, this.BcpIo - 24.0f);
        }
    }

    private static String iv(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1915;
        if (lhTYh[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])IAsFe.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IAsFe.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/Q", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = BaLsn[n3].getBytes("ISO-8859-1");
            Q.lhTYh[n3] = Q.iu(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return lhTYh[n3];
    }

    public float im() {
        return this.zEeue;
    }

    public lq ik() {
        return this.GLZJQ;
    }

    public String ij() {
        return this.YXNaM;
    }

    public Q iq(lq lq2) {
        this.GLZJQ = lq2;
        return this;
    }

    private static String iu(byte[] byArray) {
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

    public S il() {
        return this.rMeoS;
    }

    public lf ii() {
        return this.wiuXp;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(Q.class, "iw", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

