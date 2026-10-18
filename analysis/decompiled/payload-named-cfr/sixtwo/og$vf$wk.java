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
import sixtwo.cF;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.of;
import sixtwo.og$vf;

public class og$vf$wk {
    private cF pGbwx;
    private boolean EmJyM;
    private boolean UlwvW;
    private boolean ziHyi;
    private boolean dukuf;
    private boolean GTkcZ;
    private boolean muToz;
    private boolean uIIyL;
    private boolean wzOKG;
    private boolean XQoPB;
    private boolean EvvPh;
    private boolean dDEaJ;
    private boolean kUynf;
    private float WaEAh;
    private static final long bZMUv;
    private static final String[] AitoK;
    private static final String[] aChtj;
    private static final Map wZoRo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    og$vf$wk() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                og$vf$wk.bZMUv = gb.aYR(1584896708538353200L, -7003303683788694407L, MethodHandles.lookup().lookupClass()).a(213472171466999L);
                og$vf$wk.wZoRo = new HashMap<K, V>(13);
                var0 = og$vf$wk.bZMUv ^ 91442884681499L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[8];
                var7_4 = 0;
                var6_5 = "\u0004n\u00120\u00d1\f\u00d4\u0087\u00c0\\\r\u0097l\f#6\u00ac\u00c7?\u0097^\u00af\u00e0\u00e47\\\u0090\u00f3(\u00eeEQ'\u00d3A\u00bcWC\u0015\u00fb\u0010i\u00b5\u00aa\u00b4_G\u008a~\u00f3\u0013\u0018\u00d5\u00b5\u0007\u008f\u0087(\u00d1+Y\u00bd\u00b3\u00e9\u00ebE\u00cb\u0095\u0087yY|j\u00b5D\u000e\u0016W\u00fc\u00be\u00cd\u008dUv\u0092\u00a8\u00ad\u00def\"\u009f\u00efS\u00b5U\u00ad\u00ea/H\u00f7u\u00e2\u00a3\u001d\u00b3\u00cb3U\u00fb\u00d0\u00c5\u001b\u0013\u00a7-\u0085{^\u00fcZ\u00b6\u00bbb\u0099\u001dx\u00ec\u000b\u0084:N\u00b3\u00b3\u0012J\u00b1\u0000%`\u0018}B\u00bc&\u00e7\u00a9\u00c2\u0018e\u00f2\u00dfxv\b\u00d4\u00fcn\u00e0\u00d3\u0087*\u000e\u00cav\u0010!\u0003pL`5(\u0088n\u0012\u009e,]\u00e6\u00f2\u00f4\u0016?\u0087\u00cf^\u00f0\u00a3\u00ecVh\u00d9&v\n\u0012MP\u0015-\u00fdn~uQ\u0098\u0018\u00d3\u00f6\u0085\u00f3\u0097(\u0097K\u00f5,\u00e5CA\u00bb#\u00a7\u00f5\u0099\u00bf\u00db\u00ef\u009c\u0093[\u0083\u00b3\u00f1\u00ed}\u00cb#\n\u009f\u00b3\u0091A#\u00e6\"s\u0010i\u00d7\u00e2B\u0080";
                var8_6 = "\u0004n\u00120\u00d1\f\u00d4\u0087\u00c0\\\r\u0097l\f#6\u00ac\u00c7?\u0097^\u00af\u00e0\u00e47\\\u0090\u00f3(\u00eeEQ'\u00d3A\u00bcWC\u0015\u00fb\u0010i\u00b5\u00aa\u00b4_G\u008a~\u00f3\u0013\u0018\u00d5\u00b5\u0007\u008f\u0087(\u00d1+Y\u00bd\u00b3\u00e9\u00ebE\u00cb\u0095\u0087yY|j\u00b5D\u000e\u0016W\u00fc\u00be\u00cd\u008dUv\u0092\u00a8\u00ad\u00def\"\u009f\u00efS\u00b5U\u00ad\u00ea/H\u00f7u\u00e2\u00a3\u001d\u00b3\u00cb3U\u00fb\u00d0\u00c5\u001b\u0013\u00a7-\u0085{^\u00fcZ\u00b6\u00bbb\u0099\u001dx\u00ec\u000b\u0084:N\u00b3\u00b3\u0012J\u00b1\u0000%`\u0018}B\u00bc&\u00e7\u00a9\u00c2\u0018e\u00f2\u00dfxv\b\u00d4\u00fcn\u00e0\u00d3\u0087*\u000e\u00cav\u0010!\u0003pL`5(\u0088n\u0012\u009e,]\u00e6\u00f2\u00f4\u0016?\u0087\u00cf^\u00f0\u00a3\u00ecVh\u00d9&v\n\u0012MP\u0015-\u00fdn~uQ\u0098\u0018\u00d3\u00f6\u0085\u00f3\u0097(\u0097K\u00f5,\u00e5CA\u00bb#\u00a7\u00f5\u0099\u00bf\u00db\u00ef\u009c\u0093[\u0083\u00b3\u00f1\u00ed}\u00cb#\n\u009f\u00b3\u0091A#\u00e6\"s\u0010i\u00d7\u00e2B\u0080".length();
                var5_7 = 40;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = og$vf$wk.dzH(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u009cxIv\u00ee\u00c74\u00aa\u00cf\u0099e\u00828\u00e8W\u0092Q\u0014\u00db\f3j\u00b4\u0011\u00c3\u00c2\u008bL\u00f3\u00d4\u00a3\u0089\u008f\u00fb\u00e03\u00ccF\u00cf]-\u00a7P\u008d\u00c0\u00e5T\u0088(\u00d3\u00e3\u0010+\u000e\u00f4\u00dcQqOUo\u0018xF9\f\u00d0\u00f5z\u00b2\u00c5\u00f1\u0095\u00f3\u0083@\u0018z]\u0000\u00bf\f\u00f1&J\u00c9\u0089\u00da\u00c0";
                    var8_6 = "\u009cxIv\u00ee\u00c74\u00aa\u00cf\u0099e\u00828\u00e8W\u0092Q\u0014\u00db\f3j\u00b4\u0011\u00c3\u00c2\u008bL\u00f3\u00d4\u00a3\u0089\u008f\u00fb\u00e03\u00ccF\u00cf]-\u00a7P\u008d\u00c0\u00e5T\u0088(\u00d3\u00e3\u0010+\u000e\u00f4\u00dcQqOUo\u0018xF9\f\u00d0\u00f5z\u00b2\u00c5\u00f1\u0095\u00f3\u0083@\u0018z]\u0000\u00bf\f\u00f1&J\u00c9\u0089\u00da\u00c0".length();
                    var5_7 = 48;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = og$vf$wk.dzH(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
            switch (v5) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl51:
                // 1 sources

                ** continue;
            }
        }
        og$vf$wk.AitoK = var9_3;
        og$vf$wk.aChtj = new String[8];
    }

    public String toString() {
        long l2 = bZMUv ^ 0x2948ED63E9E9L;
        float f2 = this.WaEAh;
        boolean bl2 = this.kUynf;
        boolean bl3 = this.EvvPh;
        boolean bl4 = this.wzOKG;
        boolean bl5 = this.muToz;
        boolean bl6 = this.dukuf;
        boolean bl7 = this.UlwvW;
        String string = String.valueOf(this.pGbwx);
        return (String)((Object)og$vf$wk.dzK("z", (int)13652, (long)(0x5D4F99F937062188L ^ l2))) + string + (String)((Object)og$vf$wk.dzK("z", (int)9337, (long)(0x3D9D6C10900230A3L ^ l2))) + bl7 + (String)((Object)og$vf$wk.dzK("z", (int)27586, (long)(0x3C31FC0ECF44FF1AL ^ l2))) + bl6 + (String)((Object)og$vf$wk.dzK("z", (int)13702, (long)(0x7B31D1627279215BL ^ l2))) + bl5 + (String)((Object)og$vf$wk.dzK("z", (int)10666, (long)(0x19262BE64B1B3D75L ^ l2))) + bl4 + (String)((Object)og$vf$wk.dzK("z", (int)4782, (long)(0x6D3A1AEBF7EE0677L ^ l2))) + bl3 + (String)((Object)og$vf$wk.dzK("z", (int)29032, (long)(0x1120170EB621E5B3L ^ l2))) + bl2 + (String)((Object)og$vf$wk.dzK("z", (int)26607, (long)(0x51C09CC12F837331L ^ l2))) + f2 + ")";
    }

    private static Object dzJ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = og$vf$wk.dzI(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public og$vf$wk dzy(boolean bl2) {
        this.UlwvW = bl2;
        this.EmJyM = true;
        return this;
    }

    public og$vf$wk dzB(boolean bl2) {
        this.wzOKG = bl2;
        this.uIIyL = true;
        return this;
    }

    public og$vf$wk dzx(cF cF2) {
        this.pGbwx = cF2;
        return this;
    }

    public og$vf$wk dzA(boolean bl2) {
        this.muToz = bl2;
        this.GTkcZ = true;
        return this;
    }

    public og$vf$wk dzC(boolean bl2) {
        this.EvvPh = bl2;
        this.XQoPB = true;
        return this;
    }

    public og$vf$wk dzD(boolean bl2) {
        this.kUynf = bl2;
        this.dDEaJ = true;
        return this;
    }

    public og$vf dzF() {
        og$vf og$vf;
        boolean bl2;
        boolean bl3;
        boolean bl4;
        boolean bl5;
        boolean bl6;
        String[] stringArray;
        boolean bl7;
        block26: {
            boolean bl8;
            block25: {
                boolean bl9;
                block23: {
                    block24: {
                        boolean bl10;
                        block21: {
                            block22: {
                                boolean bl11;
                                block19: {
                                    block20: {
                                        boolean bl12;
                                        block17: {
                                            block18: {
                                                boolean bl13;
                                                block15: {
                                                    block16: {
                                                        long l2 = bZMUv ^ 0x5675BEDACAFL;
                                                        bl7 = this.UlwvW;
                                                        stringArray = of.cCL();
                                                        try {
                                                            bl13 = this.EmJyM;
                                                            if (stringArray == null) break block15;
                                                            if (bl13) break block16;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw og$vf$wk.dzG(matchException);
                                                        }
                                                        bl7 = og$vf.dwl();
                                                    }
                                                    bl13 = this.dukuf;
                                                }
                                                bl6 = bl13;
                                                try {
                                                    bl12 = this.ziHyi;
                                                    if (stringArray == null) break block17;
                                                    if (bl12) break block18;
                                                }
                                                catch (MatchException matchException) {
                                                    throw og$vf$wk.dzG(matchException);
                                                }
                                                bl6 = og$vf.dwm();
                                            }
                                            bl12 = this.muToz;
                                        }
                                        bl5 = bl12;
                                        try {
                                            bl11 = this.GTkcZ;
                                            if (stringArray == null) break block19;
                                            if (bl11) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw og$vf$wk.dzG(matchException);
                                        }
                                        bl5 = og$vf.dwn();
                                    }
                                    bl11 = this.wzOKG;
                                }
                                bl4 = bl11;
                                try {
                                    bl10 = this.uIIyL;
                                    if (stringArray == null) break block21;
                                    if (bl10) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw og$vf$wk.dzG(matchException);
                                }
                                bl4 = og$vf.dwo();
                            }
                            bl10 = this.EvvPh;
                        }
                        bl3 = bl10;
                        try {
                            bl9 = this.XQoPB;
                            if (stringArray == null) break block23;
                            if (bl9) break block24;
                        }
                        catch (MatchException matchException) {
                            throw og$vf$wk.dzG(matchException);
                        }
                        bl3 = og$vf.dwp();
                    }
                    bl9 = this.kUynf;
                }
                bl2 = bl9;
                try {
                    bl8 = this.dDEaJ;
                    if (stringArray == null) break block25;
                    if (bl8) break block26;
                }
                catch (MatchException matchException) {
                    throw og$vf$wk.dzG(matchException);
                }
                bl8 = og$vf.dwq();
            }
            bl2 = bl8;
        }
        try {
            og$vf = new og$vf(this.pGbwx, bl7, bl6, bl5, bl4, bl3, bl2, this.WaEAh);
            if (stringArray == null) {
                iS.bwK("z0ut7b");
            }
        }
        catch (MatchException matchException) {
            throw og$vf$wk.dzG(matchException);
        }
        return og$vf;
    }

    public og$vf$wk dzz(boolean bl2) {
        this.dukuf = bl2;
        this.ziHyi = true;
        return this;
    }

    private static CallSite dzK(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/og$vf$wk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public og$vf$wk dzE(float f2) {
        this.WaEAh = f2;
        return this;
    }

    private static MatchException dzG(MatchException matchException) {
        return matchException;
    }

    private static String dzI(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2FF1;
        if (aChtj[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])wZoRo.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    wZoRo.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/og$vf$wk", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = AitoK[n3].getBytes("ISO-8859-1");
            og$vf$wk.aChtj[n3] = og$vf$wk.dzH(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return aChtj[n3];
    }

    private static String dzH(byte[] byArray) {
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
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(og$vf$wk.class, "dzJ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

