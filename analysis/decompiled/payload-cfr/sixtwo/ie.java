/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
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
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.rp;

public class ie
implements rp {
    private int BfTib;
    private int ptNnz;
    private int lARDN;
    private int XyyGI;
    private int yCtLw;
    private static String XizrS;
    private static final long qWzEO;
    private static final String[] tIpzv;
    private static final String[] mekAn;
    private static final Map piaZM;
    private static final long[] BmhIr;
    private static final Integer[] NeskM;
    private static final Map OUvGJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        ie.qWzEO = gb.aYR(1097760136818681097L, 1776082063223176851L, MethodHandles.lookup().lookupClass()).a(2024396379798L);
                        ie.piaZM = new HashMap<K, V>(13);
                        var11 = ie.qWzEO ^ 8414969092560L;
                        ie.bhQ(null);
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[15];
                        var18_4 = 0;
                        var17_5 = "\u00e7\u00ed\u00eb\u0093\u00bb\u0097\u0019FJ:\u00f5\u00c1\u00f4\u00ebVq=\"H\u00c0\u00e9\u00fb\u0011\u00aa\u00d2\u0087Q\u00edK\t\u00c3\b \u00a5s\u009fq\u0014\u00d4\u009a\u00dc\u00f39]\u00ee\u00adO\u00c4\u00a2\u00c2\u00f0F5\u00f9\u00f2k\u00fb$\bB\u00cd\u00d3\u00d1\u00e2\u0088\u0018\u00bd{9`\u00b8<N\u00dd\u00a2\u009bh\u00c9\u0098U\u008e\u00ef\u00ca\u0005\u00055g\u00b7\u00df\u00b8 Q\u00ea\u00f8\u00d1.\u00ea\u00ff\u00f6\u0010\u00bf\u00bf\u00d2\u00e4(F\u00d1a\u000f\u00ad+#\u00e6!z\u0018\u00c3]\u00ad\u0014{'\u00cc \u00fd&{\u00e6mU\u008e\u00f1\u0019\u00e5NMW\u0085\u009a{\u00c2B\u00b5'\u0081xO\u00c8Q<\u00c4uI`\u00b2\u00b38\u0096L>\u000e\u0013&\u00fcV\u00a0\u0012?\u00f0\u0081\r3\u0014\u0080\u000f\u00de\u00bfh\u00a6\u00e6\u0001\u0083\u001e\u00d7\u0095\u00a2\u00a0\u00c9\r\u00d9\u00deQ\u001d\u00f1x\u00db%Psi\u00c5\u00a5\u00ca\u00b2\u00ael\u00a3\u00e4\b!\u0003\u00d4\u009e\u0018Z\u0097\u00b89ifV\u0004\u00bf\u001b\u001f\u001d\u001f!\u00c8\u001ao\u000f\u009a\u00ff\u00ee\u00d1\u00f9D <\u0006:\u001d?\u00fb/\u00a8\u00ecvi\u000bd\u00a2\u001d\u001d[K\u00fd\u009f\u007f\u00f8\u00c6\u00cf\u00ae\u00a1(YFH\u00f0\f@\u00c9\u00dd\u00fe\u009f(\u00a0aN\u00e7\u009f\u0080\u00f0\u0083G\u00c3f\u0016\u00a6\u00ea\u00f4(G \u0002\u00ec\u0005$'\u00c0\u008e a\u00a0\u0015b \u00ad@Y\u00e4\u0099\u00e7A\u00cagP\u00f4\u00f8\u00a4F\u00b7\u009e\u00b1\u008d\u00a5\u00fc3\u00d30\u0096\u00c5\u00ac\u00e5J \u0080\f\u008b\u00dd\u00d3\"@\u00c8&]]\u007f)0\u00a7\u0097\u00bf\u00b0\u00d1\u008b\u00a7\u00cdH\u0091Q\u00d8\u008b\u0081\u00df\u008d\u008c\u00cb F\u00a8v\u0010\"\u00bc\u00f6 \u00cb\u00b0V\u00d5\u0095\u00ab\u0004F(&\u00b6\u00a4\u00db\u00a6\u00c2\u00f6\u001c\u00ef3l\u00d7\u001f/+0G\u00e0\u00f48\u0085\u0006\u00c7\u00c8o\u00cdlj>\u00ad\u001f~P\u001dE\u00bd\u000b\u00e5\u00ae\u0013cj\u00e2w\u001a\u00ff^\u00e9\u009d\u00f7\b/\u0002\u00c0\u0082'$}\u00f2\u00eeX\u00d3\u00f92 \u008bo8W\u00fe\u00f7I\u008b\u0015S5Z\u00fe[\u00a6\u00b7\u0096:\u00f8V\u0086'o_<\u00a2\u00c4cH\u007f\u00de\u00c5";
                        var19_6 = "\u00e7\u00ed\u00eb\u0093\u00bb\u0097\u0019FJ:\u00f5\u00c1\u00f4\u00ebVq=\"H\u00c0\u00e9\u00fb\u0011\u00aa\u00d2\u0087Q\u00edK\t\u00c3\b \u00a5s\u009fq\u0014\u00d4\u009a\u00dc\u00f39]\u00ee\u00adO\u00c4\u00a2\u00c2\u00f0F5\u00f9\u00f2k\u00fb$\bB\u00cd\u00d3\u00d1\u00e2\u0088\u0018\u00bd{9`\u00b8<N\u00dd\u00a2\u009bh\u00c9\u0098U\u008e\u00ef\u00ca\u0005\u00055g\u00b7\u00df\u00b8 Q\u00ea\u00f8\u00d1.\u00ea\u00ff\u00f6\u0010\u00bf\u00bf\u00d2\u00e4(F\u00d1a\u000f\u00ad+#\u00e6!z\u0018\u00c3]\u00ad\u0014{'\u00cc \u00fd&{\u00e6mU\u008e\u00f1\u0019\u00e5NMW\u0085\u009a{\u00c2B\u00b5'\u0081xO\u00c8Q<\u00c4uI`\u00b2\u00b38\u0096L>\u000e\u0013&\u00fcV\u00a0\u0012?\u00f0\u0081\r3\u0014\u0080\u000f\u00de\u00bfh\u00a6\u00e6\u0001\u0083\u001e\u00d7\u0095\u00a2\u00a0\u00c9\r\u00d9\u00deQ\u001d\u00f1x\u00db%Psi\u00c5\u00a5\u00ca\u00b2\u00ael\u00a3\u00e4\b!\u0003\u00d4\u009e\u0018Z\u0097\u00b89ifV\u0004\u00bf\u001b\u001f\u001d\u001f!\u00c8\u001ao\u000f\u009a\u00ff\u00ee\u00d1\u00f9D <\u0006:\u001d?\u00fb/\u00a8\u00ecvi\u000bd\u00a2\u001d\u001d[K\u00fd\u009f\u007f\u00f8\u00c6\u00cf\u00ae\u00a1(YFH\u00f0\f@\u00c9\u00dd\u00fe\u009f(\u00a0aN\u00e7\u009f\u0080\u00f0\u0083G\u00c3f\u0016\u00a6\u00ea\u00f4(G \u0002\u00ec\u0005$'\u00c0\u008e a\u00a0\u0015b \u00ad@Y\u00e4\u0099\u00e7A\u00cagP\u00f4\u00f8\u00a4F\u00b7\u009e\u00b1\u008d\u00a5\u00fc3\u00d30\u0096\u00c5\u00ac\u00e5J \u0080\f\u008b\u00dd\u00d3\"@\u00c8&]]\u007f)0\u00a7\u0097\u00bf\u00b0\u00d1\u008b\u00a7\u00cdH\u0091Q\u00d8\u008b\u0081\u00df\u008d\u008c\u00cb F\u00a8v\u0010\"\u00bc\u00f6 \u00cb\u00b0V\u00d5\u0095\u00ab\u0004F(&\u00b6\u00a4\u00db\u00a6\u00c2\u00f6\u001c\u00ef3l\u00d7\u001f/+0G\u00e0\u00f48\u0085\u0006\u00c7\u00c8o\u00cdlj>\u00ad\u001f~P\u001dE\u00bd\u000b\u00e5\u00ae\u0013cj\u00e2w\u001a\u00ff^\u00e9\u009d\u00f7\b/\u0002\u00c0\u0082'$}\u00f2\u00eeX\u00d3\u00f92 \u008bo8W\u00fe\u00f7I\u008b\u0015S5Z\u00fe[\u00a6\u00b7\u0096:\u00f8V\u0086'o_<\u00a2\u00c4cH\u007f\u00de\u00c5".length();
                        var16_7 = 32;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ie.bhT(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00df>Z\u001b\u00b6E\u001d\u00cf\u00f20<\u00c3u\u0089@cl\u00eb\u00c1;\u00c7I@\u00a6\u00c5a\u00d8\u00d5\u00a8\u0081\u00c8\u00c6\u00feO\u00d3\u00af\u00c0Y\u00ee\u00b4\u0080\u00e8\u00a0\u009f\u00e3\u009eH\u0000(\u00faZ\b\u00ce\u00bejc\u001aU\u0083\u000eB!\u00a0\u00a6\u00fb\u0081\u00e8]\u00a4>c2\u00da5?\u00c2\u00ac\\\u0088\u0081\u00f3\u00b1S\u00bev\u009a\u0005\u0002\u0002";
                            var19_6 = "\u00df>Z\u001b\u00b6E\u001d\u00cf\u00f20<\u00c3u\u0089@cl\u00eb\u00c1;\u00c7I@\u00a6\u00c5a\u00d8\u00d5\u00a8\u0081\u00c8\u00c6\u00feO\u00d3\u00af\u00c0Y\u00ee\u00b4\u0080\u00e8\u00a0\u009f\u00e3\u009eH\u0000(\u00faZ\b\u00ce\u00bejc\u001aU\u0083\u000eB!\u00a0\u00a6\u00fb\u0081\u00e8]\u00a4>c2\u00da5?\u00c2\u00ac\\\u0088\u0081\u00f3\u00b1S\u00bev\u009a\u0005\u0002\u0002".length();
                            var16_7 = 48;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ie.bhT(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                ie.tIpzv = var20_3;
                ie.mekAn = new String[15];
                ie.OUvGJ = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[4];
                var3_13 = 0;
                var4_14 = "r\u0018\u0003\u008e\u009e@\u00b0\u0086\u00eb\u00d9\u00de\u00ffp\u00f8J\t";
                var5_15 = "r\u0018\u0003\u008e\u009e@\u00b0\u0086\u00eb\u00d9\u00de\u00ffp\u00f8J\t".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00a9\u00e1+X\u0002VuSV\u0006I\u00fc)\u007fVY";
                    var5_15 = "\u00a9\u00e1+X\u0002VuSV\u0006I\u00fc)\u007fVY".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl105:
                // 1 sources

                ** continue;
            }
        }
        ie.BmhIr = var6_12;
        ie.NeskM = new Integer[4];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        mG mG2;
        mG mG3;
        String string;
        block84: {
            mG mG4;
            block85: {
                mG mG5;
                ie ie2;
                block82: {
                    block83: {
                        mG mG6;
                        block80: {
                            mG mG7;
                            block81: {
                                mG mG8;
                                block78: {
                                    block79: {
                                        mG mG9;
                                        block76: {
                                            mG mG10;
                                            block77: {
                                                mG mG11;
                                                block74: {
                                                    block75: {
                                                        mG mG12;
                                                        block72: {
                                                            mG mG13;
                                                            block73: {
                                                                mG mG14;
                                                                block70: {
                                                                    block71: {
                                                                        mG mG15;
                                                                        block68: {
                                                                            mG mG16;
                                                                            block69: {
                                                                                ie ie3;
                                                                                block66: {
                                                                                    block67: {
                                                                                        Object object2;
                                                                                        block64: {
                                                                                            block65: {
                                                                                                block62: {
                                                                                                    block63: {
                                                                                                        long l = qWzEO ^ 0x52D85CD9A82FL;
                                                                                                        string = ie.bhR();
                                                                                                        try {
                                                                                                            try {
                                                                                                                object2 = object;
                                                                                                                if (string != null) break block62;
                                                                                                                if (object2 != this) break block63;
                                                                                                                return true;
                                                                                                            }
                                                                                                            catch (MatchException matchException) {
                                                                                                                throw ie.bhS(matchException);
                                                                                                            }
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw ie.bhS(matchException);
                                                                                                        }
                                                                                                    }
                                                                                                    object2 = object;
                                                                                                }
                                                                                                try {
                                                                                                    try {
                                                                                                        if (string != null) break block64;
                                                                                                        if (object2 instanceof ie) break block65;
                                                                                                        return false;
                                                                                                    }
                                                                                                    catch (MatchException matchException) {
                                                                                                        throw ie.bhS(matchException);
                                                                                                    }
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw ie.bhS(matchException);
                                                                                                }
                                                                                            }
                                                                                            object2 = object;
                                                                                        }
                                                                                        ie2 = (ie)object2;
                                                                                        try {
                                                                                            try {
                                                                                                ie3 = ie2;
                                                                                                if (string != null) break block66;
                                                                                                if (ie3.bhP(this)) break block67;
                                                                                                return false;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw ie.bhS(matchException);
                                                                                            }
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw ie.bhS(matchException);
                                                                                        }
                                                                                    }
                                                                                    ie3 = this;
                                                                                }
                                                                                mG16 = ie3.bhF();
                                                                                mG15 = ie2.bhF();
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            mG14 = mG16;
                                                                                            if (string != null) break block68;
                                                                                            if (mG14 != null) break block69;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw ie.bhS(matchException);
                                                                                        }
                                                                                        mG14 = mG15;
                                                                                        if (string != null) break block70;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw ie.bhS(matchException);
                                                                                    }
                                                                                    if (mG14 == null) break block71;
                                                                                    return false;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw ie.bhS(matchException);
                                                                                }
                                                                            }
                                                                            mG14 = mG16;
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (string != null) break block70;
                                                                                if (((Object)mG14).equals(mG15)) break block71;
                                                                                return false;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw ie.bhS(matchException);
                                                                            }
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw ie.bhS(matchException);
                                                                        }
                                                                    }
                                                                    mG14 = this.bhG();
                                                                }
                                                                mG13 = mG14;
                                                                mG12 = ie2.bhG();
                                                                try {
                                                                    try {
                                                                        try {
                                                                            mG11 = mG13;
                                                                            if (string != null) break block72;
                                                                            if (mG11 != null) break block73;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw ie.bhS(matchException);
                                                                        }
                                                                        mG11 = mG12;
                                                                        if (string != null) break block74;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw ie.bhS(matchException);
                                                                    }
                                                                    if (mG11 == null) break block75;
                                                                    return false;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw ie.bhS(matchException);
                                                                }
                                                            }
                                                            mG11 = mG13;
                                                        }
                                                        try {
                                                            try {
                                                                if (string != null) break block74;
                                                                if (((Object)mG11).equals(mG12)) break block75;
                                                                return false;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw ie.bhS(matchException);
                                                            }
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ie.bhS(matchException);
                                                        }
                                                    }
                                                    mG11 = this.bhH();
                                                }
                                                mG10 = mG11;
                                                mG9 = ie2.bhH();
                                                try {
                                                    try {
                                                        try {
                                                            mG8 = mG10;
                                                            if (string != null) break block76;
                                                            if (mG8 != null) break block77;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ie.bhS(matchException);
                                                        }
                                                        mG8 = mG9;
                                                        if (string != null) break block78;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ie.bhS(matchException);
                                                    }
                                                    if (mG8 == null) break block79;
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ie.bhS(matchException);
                                                }
                                            }
                                            mG8 = mG10;
                                        }
                                        try {
                                            try {
                                                if (string != null) break block78;
                                                if (((Object)mG8).equals(mG9)) break block79;
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw ie.bhS(matchException);
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw ie.bhS(matchException);
                                        }
                                    }
                                    mG8 = this.bhI();
                                }
                                mG7 = mG8;
                                mG6 = ie2.bhI();
                                try {
                                    try {
                                        try {
                                            mG5 = mG7;
                                            if (string != null) break block80;
                                            if (mG5 != null) break block81;
                                        }
                                        catch (MatchException matchException) {
                                            throw ie.bhS(matchException);
                                        }
                                        mG5 = mG6;
                                        if (string != null) break block82;
                                    }
                                    catch (MatchException matchException) {
                                        throw ie.bhS(matchException);
                                    }
                                    if (mG5 == null) break block83;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw ie.bhS(matchException);
                                }
                            }
                            mG5 = mG7;
                        }
                        try {
                            try {
                                if (string != null) break block82;
                                if (((Object)mG5).equals(mG6)) break block83;
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw ie.bhS(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw ie.bhS(matchException);
                        }
                    }
                    mG5 = this.bhJ();
                }
                mG4 = mG5;
                mG3 = ie2.bhJ();
                try {
                    try {
                        try {
                            mG2 = mG4;
                            if (string != null) break block84;
                            if (mG2 != null) break block85;
                        }
                        catch (MatchException matchException) {
                            throw ie.bhS(matchException);
                        }
                        if (mG3 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw ie.bhS(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ie.bhS(matchException);
                }
            }
            mG2 = mG4;
        }
        try {
            try {
                boolean bl = ((Object)mG2).equals(mG3);
                if (string != null) return bl;
                if (bl) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw ie.bhS(matchException);
            }
        }
        catch (MatchException matchException) {
            throw ie.bhS(matchException);
        }
    }

    public String toString() {
        long l = qWzEO ^ 0x21467C06F9F9L;
        String string = String.valueOf(this.bhJ());
        String string2 = String.valueOf(this.bhI());
        String string3 = String.valueOf(this.bhH());
        String string4 = String.valueOf(this.bhG());
        String string5 = String.valueOf(this.bhF());
        return (String)((Object)ie.bhW("e", (int)12996, (long)(0x1377741AC51CA94BL ^ l))) + string5 + (String)((Object)ie.bhW("e", (int)12256, (long)(0x54ADA0576AFB346BL ^ l))) + string4 + (String)((Object)ie.bhW("e", (int)4879, (long)(0x5E751D05445D8886L ^ l))) + string3 + (String)((Object)ie.bhW("e", (int)4380, (long)(0x2E19DEFF9D728A90L ^ l))) + string2 + (String)((Object)ie.bhW("e", (int)13751, (long)(0x2316B32906182E39L ^ l))) + string + ")";
    }

    public int hashCode() {
        int n;
        Object object;
        int n2;
        int n3;
        block37: {
            mG mG2;
            block35: {
                mG mG3;
                block36: {
                    Object object2;
                    int n4;
                    String string;
                    long l;
                    block34: {
                        mG mG4;
                        block32: {
                            mG mG5;
                            block33: {
                                Object object3;
                                int n5;
                                block31: {
                                    mG mG6;
                                    block29: {
                                        mG mG7;
                                        block30: {
                                            Object object4;
                                            int n6;
                                            block28: {
                                                mG mG8;
                                                block26: {
                                                    mG mG9;
                                                    block27: {
                                                        Object object5;
                                                        int n7;
                                                        block25: {
                                                            mG mG10;
                                                            block23: {
                                                                mG mG11;
                                                                block24: {
                                                                    l = qWzEO ^ 0x4DEFC7264EADL;
                                                                    CallSite callSite = ie.bhZ("u", (int)6909, (long)(0x12438243819727C2L ^ l));
                                                                    n3 = 1;
                                                                    mG11 = this.bhF();
                                                                    string = ie.bhR();
                                                                    try {
                                                                        try {
                                                                            n7 = n3 * ie.bhZ("u", (int)26106, (long)(0x51755082AAF58C7L ^ l));
                                                                            mG10 = mG11;
                                                                            if (string != null) break block23;
                                                                            if (mG10 != null) break block24;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw ie.bhS(matchException);
                                                                        }
                                                                        object5 = ie.bhZ("u", (int)20101, (long)(0x5C56CF8AA70373B9L ^ l));
                                                                        break block25;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw ie.bhS(matchException);
                                                                    }
                                                                }
                                                                mG10 = mG11;
                                                            }
                                                            object5 = ((Object)mG10).hashCode();
                                                        }
                                                        n3 = n7 + object5;
                                                        mG9 = this.bhG();
                                                        try {
                                                            try {
                                                                n6 = n3 * ie.bhZ("u", (int)26106, (long)(0x51755082AAF58C7L ^ l));
                                                                mG8 = mG9;
                                                                if (string != null) break block26;
                                                                if (mG8 != null) break block27;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw ie.bhS(matchException);
                                                            }
                                                            object4 = ie.bhZ("u", (int)25428, (long)(0xA20E17DF8BADE6AL ^ l));
                                                            break block28;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ie.bhS(matchException);
                                                        }
                                                    }
                                                    mG8 = mG9;
                                                }
                                                object4 = ((Object)mG8).hashCode();
                                            }
                                            n3 = n6 + object4;
                                            mG7 = this.bhH();
                                            try {
                                                try {
                                                    n5 = n3 * ie.bhZ("u", (int)26106, (long)(0x51755082AAF58C7L ^ l));
                                                    mG6 = mG7;
                                                    if (string != null) break block29;
                                                    if (mG6 != null) break block30;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ie.bhS(matchException);
                                                }
                                                object3 = ie.bhZ("u", (int)25428, (long)(0xA20E17DF8BADE6AL ^ l));
                                                break block31;
                                            }
                                            catch (MatchException matchException) {
                                                throw ie.bhS(matchException);
                                            }
                                        }
                                        mG6 = mG7;
                                    }
                                    object3 = ((Object)mG6).hashCode();
                                }
                                n3 = n5 + object3;
                                mG5 = this.bhI();
                                try {
                                    try {
                                        n4 = n3 * ie.bhZ("u", (int)26106, (long)(0x51755082AAF58C7L ^ l));
                                        mG4 = mG5;
                                        if (string != null) break block32;
                                        if (mG4 != null) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw ie.bhS(matchException);
                                    }
                                    object2 = ie.bhZ("u", (int)25428, (long)(0xA20E17DF8BADE6AL ^ l));
                                    break block34;
                                }
                                catch (MatchException matchException) {
                                    throw ie.bhS(matchException);
                                }
                            }
                            mG4 = mG5;
                        }
                        object2 = ((Object)mG4).hashCode();
                    }
                    n3 = n4 + object2;
                    mG3 = this.bhJ();
                    try {
                        try {
                            n2 = n3 * ie.bhZ("u", (int)26106, (long)(0x51755082AAF58C7L ^ l));
                            mG2 = mG3;
                            if (string != null) break block35;
                            if (mG2 != null) break block36;
                        }
                        catch (MatchException matchException) {
                            throw ie.bhS(matchException);
                        }
                        object = ie.bhZ("u", (int)25428, (long)(0xA20E17DF8BADE6AL ^ l));
                        break block37;
                    }
                    catch (MatchException matchException) {
                        throw ie.bhS(matchException);
                    }
                }
                mG2 = mG3;
            }
            object = ((Object)mG2).hashCode();
        }
        n3 = n2 + object;
        try {
            n = n3;
            if (iS.bwL() == null) {
                ie.bhQ("FvtEVc");
            }
        }
        catch (MatchException matchException) {
            throw ie.bhS(matchException);
        }
        return n;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l = qWzEO ^ 0x7F10BED4145CL;
        this.BfTib = this.readInt(jsonObject, (String)((Object)ie.bhW("e", (int)20574, (long)(0x13F29446001FA676L ^ l))));
        this.ptNnz = this.readInt(jsonObject, (String)((Object)ie.bhW("e", (int)9472, (long)(0x6AC234D148A5321L ^ l))));
        this.lARDN = this.readInt(jsonObject, (String)((Object)ie.bhW("e", (int)5517, (long)(0x55462049945863AEL ^ l))));
        this.XyyGI = this.readInt(jsonObject, (String)((Object)ie.bhW("e", (int)12793, (long)(0x32AF814ABD8A47D6L ^ l))));
        this.yCtLw = this.readInt(jsonObject, (String)((Object)ie.bhW("e", (int)3475, (long)(0x571AB4FD96AFFBB5L ^ l))));
    }

    @Override
    public JsonObject toJson() {
        long l = qWzEO ^ 0x611BFA94EAD7L;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)ie.bhW("e", (int)16634, (long)(0x65A2D35B5E0AC853L ^ l))), (Number)this.BfTib);
        jsonObject.addProperty((String)((Object)ie.bhW("e", (int)16856, (long)(0x4F015225D4E9C976L ^ l))), (Number)this.ptNnz);
        jsonObject.addProperty((String)((Object)ie.bhW("e", (int)3561, (long)(0x79216D45F48C0546L ^ l))), (Number)this.lARDN);
        jsonObject.addProperty((String)((Object)ie.bhW("e", (int)26137, (long)(0x237E7ED6B11DEEB5L ^ l))), (Number)this.XyyGI);
        jsonObject.addProperty((String)((Object)ie.bhW("e", (int)5967, (long)(0x10FD6B87ECEB1FE4L ^ l))), (Number)this.yCtLw);
        return jsonObject;
    }

    public static ie bhE(mG mG2, mG mG3, mG mG4, mG mG5, mG mG6) {
        return ie.bhD(mG2.coh(), mG3.coh(), mG4.coh(), mG5.coh(), mG6.coh());
    }

    public mG bhF() {
        return mG.cnQ(this.BfTib);
    }

    public mG bhI() {
        return mG.cnQ(this.XyyGI);
    }

    public mG bhJ() {
        return mG.cnQ(this.yCtLw);
    }

    public mG bhG() {
        return mG.cnQ(this.ptNnz);
    }

    public mG bhH() {
        return mG.cnQ(this.lARDN);
    }

    public ie bhL(int n) {
        this.ptNnz = n;
        return this;
    }

    private static CallSite bhZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ie" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public ie bhM(int n) {
        this.lARDN = n;
        return this;
    }

    public ie bhN(int n) {
        this.XyyGI = n;
        return this;
    }

    public static void bhQ(String string) {
        XizrS = string;
    }

    public ie bhK(int n) {
        this.BfTib = n;
        return this;
    }

    public static ie bhD(int n, int n2, int n3, int n4, int n5) {
        return new ie().bhK(n).bhL(n2).bhM(n3).bhN(n4).bhO(n5);
    }

    public ie bhO(int n) {
        this.yCtLw = n;
        return this;
    }

    private static MatchException bhS(MatchException matchException) {
        return matchException;
    }

    protected boolean bhP(Object object) {
        return object instanceof ie;
    }

    private static CallSite bhW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ie" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bhT(byte[] byArray) {
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

    public static String bhR() {
        return XizrS;
    }

    private static Object bhV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ie.bhU(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int bhY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ie.bhX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String bhU(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1B01;
        if (mekAn[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])piaZM.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    piaZM.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ie", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = tIpzv[n2].getBytes("ISO-8859-1");
            ie.mekAn[n2] = ie.bhT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return mekAn[n2];
    }

    private static int bhX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0xAEC;
        if (NeskM[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = BmhIr[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])OUvGJ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    OUvGJ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ie", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ie.NeskM[n2] = n3;
        }
        return NeskM[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ie.class, "bhY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(ie.class, "bhV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
