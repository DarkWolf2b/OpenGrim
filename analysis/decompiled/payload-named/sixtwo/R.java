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
import sixtwo.W;
import sixtwo.X;
import sixtwo.cN;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.ly;
import sixtwo.mA;
import sixtwo.mZ;
import sixtwo.od;

public class R
extends X<R> {
    private ly kxeKc;
    private W fKzYw = W.igoQj;
    private static final long Ruogs = gb.aYR(-7613002557334313971L, 8057406749226264855L, MethodHandles.lookup().lookupClass()).a(52811650700071L);
    private static final String[] vMjtj;
    private static final String[] hVHQH;
    private static final Map rqkRQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public R(od od2) {
        this.kxeKc = new ly(od2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        rqkRQ = new HashMap(13);
        long l2 = Ruogs ^ 0x4C4E096BCBF4L;
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
        String string = "\r\u0092\u00d3w\t\u00ef\u00efo\u0082\u008c\u00f3\u00cb\u00ac\u0097t\u0093\u00d2\u00dc\u00e8\u0080\u00bfd\u0083\u00fd\u00cc%\u00fd7q^\u00e7\u0011\u00f5=\u00a5\u0080j\u0017\u0016&( \u0096j\u0015|Lzr\u001fk\u0007\u00a1\u00b4\u0092\u00a1\u00f5J\u00f0\u0002g=\u00b3!\u00c9C*t)\u008cWq\u0083\"L\u0097M\u00eb\"\u000b\u0082";
        int n3 = "\r\u0092\u00d3w\t\u00ef\u00efo\u0082\u008c\u00f3\u00cb\u00ac\u0097t\u0093\u00d2\u00dc\u00e8\u0080\u00bfd\u0083\u00fd\u00cc%\u00fd7q^\u00e7\u0011\u00f5=\u00a5\u0080j\u0017\u0016&( \u0096j\u0015|Lzr\u001fk\u0007\u00a1\u00b4\u0092\u00a1\u00f5J\u00f0\u0002g=\u00b3!\u00c9C*t)\u008cWq\u0083\"L\u0097M\u00eb\"\u000b\u0082".length();
        int n4 = 40;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = R.iC(byArray3).intern();
            if ((n5 += n4) >= n3) {
                vMjtj = stringArray;
                hVHQH = new String[2];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block23: {
            block24: {
                boolean bl3;
                block31: {
                    block32: {
                        boolean bl4;
                        block33: {
                            block34: {
                                R r2;
                                String[] stringArray;
                                block29: {
                                    block30: {
                                        block27: {
                                            block28: {
                                                block25: {
                                                    block26: {
                                                        long l2 = Ruogs ^ 0x3BE6F388988FL;
                                                        stringArray = P.hY();
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        bl2 = this.tg(d2, d3);
                                                                        if (stringArray != null) break block23;
                                                                        if (!bl2) break block24;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw R.iB(matchException);
                                                                    }
                                                                    r2 = this;
                                                                    if (stringArray != null) break block25;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw R.iB(matchException);
                                                                }
                                                                if (r2.iW()) {
                                                                }
                                                                break block26;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw R.iB(matchException);
                                                            }
                                                            cN.XI((String)((Object)R.iF("g", (int)1365, (long)(0x2BBCD9C7E9440438L ^ l2))) + mZ.cst(this.yPQoU, this.TNQyk) + (String)((Object)R.iF("g", (int)3927, (long)(0x3CAF581BBAF08E3BL ^ l2))));
                                                            return true;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw R.iB(matchException);
                                                        }
                                                    }
                                                    r2 = this;
                                                }
                                                try {
                                                    try {
                                                        if (stringArray != null) break block27;
                                                        if (r2.fKzYw != W.igoQj) break block28;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw R.iB(matchException);
                                                    }
                                                    this.kxeKc.ccz();
                                                    this.kxeKc.cco();
                                                }
                                                catch (MatchException matchException) {
                                                    throw R.iB(matchException);
                                                }
                                            }
                                            r2 = this;
                                        }
                                        try {
                                            try {
                                                if (stringArray != null) break block29;
                                                if (r2.JAVXX == null) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw R.iB(matchException);
                                            }
                                            this.JAVXX.run(this);
                                        }
                                        catch (MatchException matchException) {
                                            throw R.iB(matchException);
                                        }
                                    }
                                    r2 = this;
                                }
                                try {
                                    try {
                                        try {
                                            bl3 = r2.jsFhG;
                                            if (stringArray != null) break block31;
                                            if (!bl3) break block32;
                                        }
                                        catch (MatchException matchException) {
                                            throw R.iB(matchException);
                                        }
                                        R r3 = this;
                                        bl4 = this.aoGjU;
                                        if (stringArray != null) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw R.iB(matchException);
                                    }
                                    if (bl4) break block34;
                                }
                                catch (MatchException matchException) {
                                    throw R.iB(matchException);
                                }
                                bl4 = true;
                                break block33;
                            }
                            bl4 = false;
                        }
                        r3.aoGjU = bl4;
                    }
                    bl3 = true;
                }
                return bl3;
            }
            bl2 = super.dk(d2, d3, mA2);
        }
        return bl2;
    }

    @Override
    protected void bV(lC lC2) {
        long l2 = Ruogs ^ 0x66733B214C4BL;
        super.bV(lC2);
        String[] stringArray = P.hY();
        this.iy(this.ti(lC2));
        float f2 = this.MCnYt + jf.bAH(this.kxeKc.kN(), this.BcpIo);
        float f3 = this.pNyTQ + jf.bAH(this.kxeKc.dn(), this.WjISQ);
        this.kxeKc.sW(f2, f3);
        this.kxeKc.ccC(this.PDdiO.dfU().cob(this.UtcTb));
        String[] stringArray2 = stringArray;
        try {
            this.kxeKc.su(lC2);
            if (iS.bwL() == null) {
                P.hX(new String[4]);
            }
        }
        catch (MatchException matchException) {
            throw R.iB(matchException);
        }
    }

    public R iz(ly ly2) {
        this.kxeKc = ly2;
        return this;
    }

    public R iA(W w2) {
        this.fKzYw = w2;
        return this;
    }

    private static String iC(byte[] byArray) {
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

    /*
     * Unable to fully structure code
     */
    private void iy(boolean var1_1) {
        block25: {
            block32: {
                block30: {
                    block31: {
                        block26: {
                            block29: {
                                block27: {
                                    block28: {
                                        var2_2 = R.Ruogs ^ 94661420158286L;
                                        var4_3 = P.hY();
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            if (this.fKzYw != W.xyBWW) break block25;
                                                            v0 = var1_1;
                                                            if (var4_3 != null) break block26;
                                                        }
                                                        catch (MatchException v1) {
                                                            throw R.iB(v1);
                                                        }
                                                        if (v0) {
                                                        }
                                                        ** GOTO lbl52
                                                    }
                                                    catch (MatchException v2) {
                                                        throw R.iB(v2);
                                                    }
                                                    v3 = this.kxeKc.cct();
                                                    if (var4_3 != null) break block27;
                                                }
                                                catch (MatchException v4) {
                                                    throw R.iB(v4);
                                                }
                                                if (!v3) break block28;
                                            }
                                            catch (MatchException v5) {
                                                throw R.iB(v5);
                                            }
                                            this.kxeKc.ccu();
                                        }
                                        catch (MatchException v6) {
                                            throw R.iB(v6);
                                        }
                                    }
                                    try {
                                        this.kxeKc.ccs();
                                        v7 = this.kxeKc;
                                        if (var4_3 != null) break block29;
                                        v3 = v7.ccp();
                                    }
                                    catch (MatchException v8) {
                                        throw R.iB(v8);
                                    }
                                }
                                try {
                                    if (!v3) break block25;
                                    v7 = this.kxeKc;
                                }
                                catch (MatchException v9) {
                                    throw R.iB(v9);
                                }
                            }
                            try {
                                v7.cco();
                                if (var4_3 == null) break block25;
lbl52:
                                // 2 sources

                                v0 = this.kxeKc.cct();
                            }
                            catch (MatchException v10) {
                                throw R.iB(v10);
                            }
                        }
                        try {
                            try {
                                if (var4_3 != null) break block30;
                                if (v0) break block31;
                            }
                            catch (MatchException v11) {
                                throw R.iB(v11);
                            }
                            this.kxeKc.ccu();
                        }
                        catch (MatchException v12) {
                            throw R.iB(v12);
                        }
                    }
                    try {
                        this.kxeKc.ccr(0);
                        v13 = this.kxeKc;
                        if (var4_3 != null) break block32;
                        v0 = v13.ccp();
                    }
                    catch (MatchException v14) {
                        throw R.iB(v14);
                    }
                }
                try {
                    if (!v0) break block25;
                    v13 = this.kxeKc;
                }
                catch (MatchException v15) {
                    throw R.iB(v15);
                }
            }
            v13.cco();
        }
    }

    private static String iD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6795;
        if (hVHQH[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])rqkRQ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rqkRQ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/R", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = vMjtj[n3].getBytes("ISO-8859-1");
            R.hVHQH[n3] = R.iC(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return hVHQH[n3];
    }

    private static Object iE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = R.iD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static MatchException iB(MatchException matchException) {
        return matchException;
    }

    private static CallSite iF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/R" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(R.class, "iE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

