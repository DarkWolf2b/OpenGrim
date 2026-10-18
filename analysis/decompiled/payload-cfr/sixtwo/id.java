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
import sixtwo.ie;
import sixtwo.mG;
import sixtwo.rp;

public class id
implements rp {
    private float Qqebw;
    private float jIvgU;
    private float orOtZ;
    private float BgypB;
    private float RRbDv;
    private int YiIng;
    private float XbTKn;
    private int bzSgC;
    private static final long McFCz;
    private static final String[] NoJGG;
    private static final String[] mcPaW;
    private static final Map fzQcm;
    private static final long[] Aeqvg;
    private static final Integer[] QlXjr;
    private static final Map JuNfN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        id.McFCz = gb.aYR(-5013027614629213397L, 2779332694424698739L, MethodHandles.lookup().lookupClass()).a(279584518025401L);
                        id.fzQcm = new HashMap<K, V>(13);
                        var11 = id.McFCz ^ 122894762246623L;
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
                        var20_3 = new String[24];
                        var18_4 = 0;
                        var17_5 = "q\u0011\u00e1\u009c\u0010z\u0007\u0087\u00f5\u0005\"\u001a\u00da\u0011\u009c\u00e5\u0018\u00d4\u00ba\u00b5\u00b1\u001a\u007f\u00b6\u00a5A~\u0007%\u00cb\u00d0;+\u0017\u00eb\u00805;}\u00e8\u00b6\u0010'@gu\u00ad\u00f7*g\u00bb\u00a9\u0091H\u00dd\u008a\u001a\u00ad\u0018\u00bay\u00d7+\u009f\u00cc\u0019\u0086>\u0094ix\u00a4\u0084\u00c5\u009a\u00f0x\u00f1tzp\u00aa\u00e5\u0018\u00ad\u00a1~\u0085\u00f7\u00bd\u00e92\u00a7?\u00b4\u0003\u00ea>\u00b3\u00d3\u00eb\u00c9)0\u00d0\u00fc\u0091\u009d mm\u00a84\u00d1/cY\u00d9\u00cf\u00ec\u00ad\u00c0\u001d_X\u0099\u00ef\u00afB\u00ee\u0092~a\u001b\u00b0/\u0012\u00dc\u0093\u00a6\u0088 \u00ea\u0010CA_F\\\u00d2\u00f5Y\u00e1\u008c\u00a4\u00ba\u00fc\u00f3\u00fa\u00f0+\u0097w\u0019\u0016W\u0007\u001d\u00c9\u0092\u00e8n\u00e3\u0010 \u00d6\u00a9\u00a5;/\u0012\u00a7\u00faV&E\u0004\u00c8\u0003\u00cem\u00ba\u00ef\u0080\u0019p\u0093\u0092\u00e1^\u00ee\u0094\u00b8\u009ag<{\u0010\u0007\u0019'j43\u0087\u001e\u00f1;\u0081\u00f0\u00edo\u00d4\u008a \u00a2\u00a7Y\u007fk%\u00f3\u0014E\u00e7\u0016Q\u00c74\u00b4\u00a2\u00cc\u00d5_\u00cc(\u00fd\u00b4z\u000eO\u0085:}u\u00ab\u001a ;\u00ac\u00cd\u009c3\u00d4\u00bc\u0086\u0081\u00a6\u00e2\u00d7\u0010?\u00fb|\\\u0085\u00fc\u001c\u00c5[\u00b9EV\u00c5\u00ad1K\u0013W\u00ab\u0010$\u00fd\u00be\u00d4\u00c3N)@\u0080b\u00e9UI\u00bey\u0000\u0010\u0082\u0006i\u0004\u00f9\u00b3\u00c3Z\n=\u0000\u007f\u0003+\u00cf\u00f9\u0018\u00c3\u008e]\u00ef\u009fm\u00b3\u00b2\u00cc\u00d5\u00b6\u00a4I\u00d1\u0097Se\u00d2\u00fc\u00dd\u008d&\u00c7\u00cf\u0018\u0002\u00f0%\u00dbu\u0006t\u00fb\u00c6\u0082\u00f1\u00ad\u00e4\u00b9\u00f66[\u0000\u0092\u00d1\u00ee\u009a\u00dc\u00b1\u0010~\u00a0.\u00bf%A\u00bf\u0012\t\u007fPSe\u0092\u00e72 \u009a\u00cf\u0003x)\u008dm\u00e1\u008f\u00b2G\u00f6\u00ebm\u00ee\u0017\u00a0\u00ad\u00dd\u00d2\u0093A\u0006\u00cb{\u00c09!\u00dd\u001d\u00ad\u008d \u0099\u00c1m\u00cc\u00cc\u00ed\u00bev\u00d2f\u00c3V7.r\u00b0e\u00b7v\u00a1\u00d0\u00df\u0014v\u0096\u0088!q\u0087V\u00f5\u0014 f\u00979S3\u0086\u00c3\u00dd;\u00fao\u00be\u00e7\u00ce\u0012z\\\u001b\u0087.DFM\u008e,\u00df\u00b9\u00a9P\u00e1\u00af\u001c \u00176\u00b4G\u0000\u00ba\u00b4apr}\u009e\u009b\u00ae\u008d\u0010\u0092\u00d4~s\u00fel\u001c\u00e0\u00dfI\u0000\\dr\u008a\u0019 \u00d0i\u00d7\u00baH?`\u00e2n\u00e1N\"\u00cd#xb\u0018\u00d5\u00b5\u0082\u00b8f\u0018\u008f\u00c5\u001d\u00da\u00ee\u00e8+\u001e\u00fc@\u000e\u0095\u00c48R\u00c4\u00e1'\u00dd\u00f3\u00a0\u00ed\u00dd\u0007B\u00fbw\u0004G\u00b5\u00ad\u001f\u00aa\u0081\u0095#Y\u009e\u0013\u0016V\u00b3\\3\u00b0\u00ad\u001b\u00daa\u009eu\u00ea\u00da\b\u00fe)S\u00e5m\u00f8\u00b7\u0017\u00ff\u00d8\u00b1\u00f8\u0099+\u00c4*U\u00f7r\u00e6";
                        var19_6 = "q\u0011\u00e1\u009c\u0010z\u0007\u0087\u00f5\u0005\"\u001a\u00da\u0011\u009c\u00e5\u0018\u00d4\u00ba\u00b5\u00b1\u001a\u007f\u00b6\u00a5A~\u0007%\u00cb\u00d0;+\u0017\u00eb\u00805;}\u00e8\u00b6\u0010'@gu\u00ad\u00f7*g\u00bb\u00a9\u0091H\u00dd\u008a\u001a\u00ad\u0018\u00bay\u00d7+\u009f\u00cc\u0019\u0086>\u0094ix\u00a4\u0084\u00c5\u009a\u00f0x\u00f1tzp\u00aa\u00e5\u0018\u00ad\u00a1~\u0085\u00f7\u00bd\u00e92\u00a7?\u00b4\u0003\u00ea>\u00b3\u00d3\u00eb\u00c9)0\u00d0\u00fc\u0091\u009d mm\u00a84\u00d1/cY\u00d9\u00cf\u00ec\u00ad\u00c0\u001d_X\u0099\u00ef\u00afB\u00ee\u0092~a\u001b\u00b0/\u0012\u00dc\u0093\u00a6\u0088 \u00ea\u0010CA_F\\\u00d2\u00f5Y\u00e1\u008c\u00a4\u00ba\u00fc\u00f3\u00fa\u00f0+\u0097w\u0019\u0016W\u0007\u001d\u00c9\u0092\u00e8n\u00e3\u0010 \u00d6\u00a9\u00a5;/\u0012\u00a7\u00faV&E\u0004\u00c8\u0003\u00cem\u00ba\u00ef\u0080\u0019p\u0093\u0092\u00e1^\u00ee\u0094\u00b8\u009ag<{\u0010\u0007\u0019'j43\u0087\u001e\u00f1;\u0081\u00f0\u00edo\u00d4\u008a \u00a2\u00a7Y\u007fk%\u00f3\u0014E\u00e7\u0016Q\u00c74\u00b4\u00a2\u00cc\u00d5_\u00cc(\u00fd\u00b4z\u000eO\u0085:}u\u00ab\u001a ;\u00ac\u00cd\u009c3\u00d4\u00bc\u0086\u0081\u00a6\u00e2\u00d7\u0010?\u00fb|\\\u0085\u00fc\u001c\u00c5[\u00b9EV\u00c5\u00ad1K\u0013W\u00ab\u0010$\u00fd\u00be\u00d4\u00c3N)@\u0080b\u00e9UI\u00bey\u0000\u0010\u0082\u0006i\u0004\u00f9\u00b3\u00c3Z\n=\u0000\u007f\u0003+\u00cf\u00f9\u0018\u00c3\u008e]\u00ef\u009fm\u00b3\u00b2\u00cc\u00d5\u00b6\u00a4I\u00d1\u0097Se\u00d2\u00fc\u00dd\u008d&\u00c7\u00cf\u0018\u0002\u00f0%\u00dbu\u0006t\u00fb\u00c6\u0082\u00f1\u00ad\u00e4\u00b9\u00f66[\u0000\u0092\u00d1\u00ee\u009a\u00dc\u00b1\u0010~\u00a0.\u00bf%A\u00bf\u0012\t\u007fPSe\u0092\u00e72 \u009a\u00cf\u0003x)\u008dm\u00e1\u008f\u00b2G\u00f6\u00ebm\u00ee\u0017\u00a0\u00ad\u00dd\u00d2\u0093A\u0006\u00cb{\u00c09!\u00dd\u001d\u00ad\u008d \u0099\u00c1m\u00cc\u00cc\u00ed\u00bev\u00d2f\u00c3V7.r\u00b0e\u00b7v\u00a1\u00d0\u00df\u0014v\u0096\u0088!q\u0087V\u00f5\u0014 f\u00979S3\u0086\u00c3\u00dd;\u00fao\u00be\u00e7\u00ce\u0012z\\\u001b\u0087.DFM\u008e,\u00df\u00b9\u00a9P\u00e1\u00af\u001c \u00176\u00b4G\u0000\u00ba\u00b4apr}\u009e\u009b\u00ae\u008d\u0010\u0092\u00d4~s\u00fel\u001c\u00e0\u00dfI\u0000\\dr\u008a\u0019 \u00d0i\u00d7\u00baH?`\u00e2n\u00e1N\"\u00cd#xb\u0018\u00d5\u00b5\u0082\u00b8f\u0018\u008f\u00c5\u001d\u00da\u00ee\u00e8+\u001e\u00fc@\u000e\u0095\u00c48R\u00c4\u00e1'\u00dd\u00f3\u00a0\u00ed\u00dd\u0007B\u00fbw\u0004G\u00b5\u00ad\u001f\u00aa\u0081\u0095#Y\u009e\u0013\u0016V\u00b3\\3\u00b0\u00ad\u001b\u00daa\u009eu\u00ea\u00da\b\u00fe)S\u00e5m\u00f8\u00b7\u0017\u00ff\u00d8\u00b1\u00f8\u0099+\u00c4*U\u00f7r\u00e6".length();
                        var16_7 = 16;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = id.bhw(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "(\u0011\u00e3\u00a11\u00daV3\n\u00cb\u001czJ\u00aaR\u00dcYMx\u0089(0\u00f0K\u00fc\u0089b\u000b%\u00c8\u00f83 ;\u0002\u00ccU\u0005\u00faDs2\u0094\u0015D\u00a8\u00bdH3\u009f\u00e2&;\u000f\u001b\u00c1\u00dc\u00c7\u00b41\u00fa\u008f9\u00aaW";
                            var19_6 = "(\u0011\u00e3\u00a11\u00daV3\n\u00cb\u001czJ\u00aaR\u00dcYMx\u0089(0\u00f0K\u00fc\u0089b\u000b%\u00c8\u00f83 ;\u0002\u00ccU\u0005\u00faDs2\u0094\u0015D\u00a8\u00bdH3\u009f\u00e2&;\u000f\u001b\u00c1\u00dc\u00c7\u00b41\u00fa\u008f9\u00aaW".length();
                            var16_7 = 32;
                            var15_8 = -1;
lbl34:
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
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = id.bhw(var21_9).intern();
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
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                id.NoJGG = var20_3;
                id.mcPaW = new String[24];
                id.JuNfN = new HashMap<K, V>(13);
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
                var4_14 = "YZ\u009e{\u001e\u0081\u001e\u00c1)8s\u00a2\u00a9\u00fb{\u00b5";
                var5_15 = "YZ\u009e{\u001e\u0081\u001e\u00c1)8s\u00a2\u00a9\u00fb{\u00b5".length();
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
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00ac\u00beq\u00b9\"e\u00daAz:\u00f4\u00a8x,>\u00a4";
                    var5_15 = "\u00ac\u00beq\u00b9\"e\u00daAz:\u00f4\u00a8x,>\u00a4".length();
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
lbl91:
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
lbl104:
                // 1 sources

                ** continue;
            }
        }
        id.Aeqvg = var6_12;
        id.QlXjr = new Integer[4];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        mG mG2;
        mG mG3;
        String string;
        block78: {
            mG mG4;
            block79: {
                id id2;
                id id3;
                block77: {
                    int n;
                    block76: {
                        block75: {
                            mG mG5;
                            mG mG6;
                            block73: {
                                mG mG7;
                                block74: {
                                    id id4;
                                    block72: {
                                        int n2;
                                        block70: {
                                            block71: {
                                                block68: {
                                                    block69: {
                                                        block66: {
                                                            block67: {
                                                                block64: {
                                                                    block65: {
                                                                        block62: {
                                                                            block63: {
                                                                                Object object2;
                                                                                block60: {
                                                                                    block61: {
                                                                                        block58: {
                                                                                            block59: {
                                                                                                long l = McFCz ^ 0x5CE1704E17DCL;
                                                                                                string = ie.bhR();
                                                                                                try {
                                                                                                    try {
                                                                                                        object2 = object;
                                                                                                        if (string != null) break block58;
                                                                                                        if (object2 != this) break block59;
                                                                                                        return true;
                                                                                                    }
                                                                                                    catch (MatchException matchException) {
                                                                                                        throw id.bhv(matchException);
                                                                                                    }
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw id.bhv(matchException);
                                                                                                }
                                                                                            }
                                                                                            object2 = object;
                                                                                        }
                                                                                        try {
                                                                                            try {
                                                                                                if (string != null) break block60;
                                                                                                if (object2 instanceof id) break block61;
                                                                                                return false;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw id.bhv(matchException);
                                                                                            }
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw id.bhv(matchException);
                                                                                        }
                                                                                    }
                                                                                    object2 = object;
                                                                                }
                                                                                id3 = (id)object2;
                                                                                try {
                                                                                    try {
                                                                                        n2 = id3.bhu(this);
                                                                                        if (string != null) break block62;
                                                                                        if (n2 != 0) break block63;
                                                                                        return false;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw id.bhv(matchException);
                                                                                    }
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw id.bhv(matchException);
                                                                                }
                                                                            }
                                                                            n2 = Float.compare(this.bhg(), id3.bhg());
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (string != null) break block64;
                                                                                if (n2 == 0) break block65;
                                                                                return false;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw id.bhv(matchException);
                                                                            }
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw id.bhv(matchException);
                                                                        }
                                                                    }
                                                                    n2 = Float.compare(this.bhh(), id3.bhh());
                                                                }
                                                                try {
                                                                    try {
                                                                        if (string != null) break block66;
                                                                        if (n2 == 0) break block67;
                                                                        return false;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw id.bhv(matchException);
                                                                    }
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw id.bhv(matchException);
                                                                }
                                                            }
                                                            n2 = Float.compare(this.bhi(), id3.bhi());
                                                        }
                                                        try {
                                                            try {
                                                                if (string != null) break block68;
                                                                if (n2 == 0) break block69;
                                                                return false;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw id.bhv(matchException);
                                                            }
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw id.bhv(matchException);
                                                        }
                                                    }
                                                    n2 = Float.compare(this.bhj(), id3.bhj());
                                                }
                                                try {
                                                    try {
                                                        if (string != null) break block70;
                                                        if (n2 == 0) break block71;
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw id.bhv(matchException);
                                                    }
                                                }
                                                catch (MatchException matchException) {
                                                    throw id.bhv(matchException);
                                                }
                                            }
                                            try {
                                                id4 = this;
                                                if (string != null) break block72;
                                                n2 = Float.compare(id4.bhk(), id3.bhk());
                                            }
                                            catch (MatchException matchException) {
                                                throw id.bhv(matchException);
                                            }
                                        }
                                        try {
                                            if (n2 != 0) {
                                                return false;
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw id.bhv(matchException);
                                        }
                                        id4 = this;
                                    }
                                    mG7 = id4.bhe();
                                    mG6 = id3.bhe();
                                    try {
                                        try {
                                            try {
                                                mG5 = mG7;
                                                if (string != null) break block73;
                                                if (mG5 != null) break block74;
                                            }
                                            catch (MatchException matchException) {
                                                throw id.bhv(matchException);
                                            }
                                            if (mG6 == null) break block75;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw id.bhv(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw id.bhv(matchException);
                                    }
                                }
                                mG5 = mG7;
                            }
                            try {
                                try {
                                    n = ((Object)mG5).equals(mG6);
                                    if (string != null) break block76;
                                    if (n != 0) break block75;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw id.bhv(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw id.bhv(matchException);
                            }
                        }
                        try {
                            id2 = this;
                            if (string != null) break block77;
                            n = Float.compare(id2.bhl(), id3.bhl());
                        }
                        catch (MatchException matchException) {
                            throw id.bhv(matchException);
                        }
                    }
                    try {
                        if (n != 0) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw id.bhv(matchException);
                    }
                    id2 = this;
                }
                mG4 = id2.bhf();
                mG3 = id3.bhf();
                try {
                    try {
                        try {
                            mG2 = mG4;
                            if (string != null) break block78;
                            if (mG2 != null) break block79;
                        }
                        catch (MatchException matchException) {
                            throw id.bhv(matchException);
                        }
                        if (mG3 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw id.bhv(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw id.bhv(matchException);
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
                throw id.bhv(matchException);
            }
        }
        catch (MatchException matchException) {
            throw id.bhv(matchException);
        }
    }

    public String toString() {
        long l = McFCz ^ 0x466C72A61CE2L;
        String string = String.valueOf(this.bhf());
        float f = this.bhl();
        String string2 = String.valueOf(this.bhe());
        float f2 = this.bhk();
        float f3 = this.bhj();
        float f4 = this.bhi();
        float f5 = this.bhh();
        float f6 = this.bhg();
        return (String)((Object)id.bhz("o", (int)21352, (long)(0x323FD2A985D97D21L ^ l))) + f6 + (String)((Object)id.bhz("o", (int)7277, (long)(0x7C9005A651153222L ^ l))) + f5 + (String)((Object)id.bhz("o", (int)19270, (long)(0x5AFA53E6A1596514L ^ l))) + f4 + (String)((Object)id.bhz("o", (int)14306, (long)(0x3914E22D1DD219A8L ^ l))) + f3 + (String)((Object)id.bhz("o", (int)23009, (long)(0x6FFD0454341D77AAL ^ l))) + f2 + (String)((Object)id.bhz("o", (int)30386, (long)(0x23850DED73DED8EBL ^ l))) + string2 + (String)((Object)id.bhz("o", (int)8946, (long)(0x5808EE35DE778CA8L ^ l))) + f + (String)((Object)id.bhz("o", (int)1708, (long)(0x1B66758F37ECA8F4L ^ l))) + string + ")";
    }

    public int hashCode() {
        int n;
        Object object;
        int n2;
        int n3;
        String string;
        block16: {
            mG mG2;
            block14: {
                mG mG3;
                block15: {
                    Object object2;
                    int n4;
                    long l;
                    block13: {
                        mG mG4;
                        block11: {
                            mG mG5;
                            block12: {
                                l = McFCz ^ 0x2E2890EE5AEDL;
                                CallSite callSite = id.bhC("k", (int)11443, (long)(0x782729AD207E76BFL ^ l));
                                string = ie.bhR();
                                n3 = 1;
                                n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhg());
                                n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhh());
                                n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhi());
                                n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhj());
                                n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhk());
                                mG5 = this.bhe();
                                try {
                                    try {
                                        n4 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l));
                                        mG4 = mG5;
                                        if (string != null) break block11;
                                        if (mG4 != null) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw id.bhv(matchException);
                                    }
                                    object2 = id.bhC("k", (int)14081, (long)(0x2875BFA82A696D0FL ^ l));
                                    break block13;
                                }
                                catch (MatchException matchException) {
                                    throw id.bhv(matchException);
                                }
                            }
                            mG4 = mG5;
                        }
                        object2 = ((Object)mG4).hashCode();
                    }
                    n3 = n4 + object2;
                    n3 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l)) + Float.floatToIntBits(this.bhl());
                    mG3 = this.bhf();
                    try {
                        try {
                            n2 = n3 * id.bhC("k", (int)22093, (long)(0x56AC008874610C40L ^ l));
                            mG2 = mG3;
                            if (string != null) break block14;
                            if (mG2 != null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw id.bhv(matchException);
                        }
                        object = id.bhC("k", (int)19000, (long)(0x2042FC9C57EF1037L ^ l));
                        break block16;
                    }
                    catch (MatchException matchException) {
                        throw id.bhv(matchException);
                    }
                }
                mG2 = mG3;
            }
            object = ((Object)mG2).hashCode();
        }
        n3 = n2 + object;
        try {
            n = n3;
            if (string != null) {
                iS.bwK("xXflVb");
            }
        }
        catch (MatchException matchException) {
            throw id.bhv(matchException);
        }
        return n;
    }

    public float bhk() {
        return this.RRbDv;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l = McFCz ^ 0x47F3F7A0526AL;
        this.Qqebw = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)13485, (long)(0x544BD98360B45468L ^ l))));
        this.jIvgU = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)20952, (long)(0x5AB184DDF6F0310EL ^ l))));
        this.orOtZ = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)11121, (long)(0x4CBF2144448CCBAAL ^ l))));
        this.BgypB = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)25088, (long)(0x6D1324E9A43A82C0L ^ l))));
        this.RRbDv = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)12461, (long)(0x2C2F6C92135C5072L ^ l))));
        this.YiIng = this.readInt(jsonObject, (String)((Object)id.bhz("o", (int)10247, (long)(0x7EDE174F27E248C1L ^ l))));
        this.XbTKn = this.readFloat(jsonObject, (String)((Object)id.bhz("o", (int)1716, (long)(0x10AEDEF257466669L ^ l))));
        this.bzSgC = this.readInt(jsonObject, (String)((Object)id.bhz("o", (int)30762, (long)(0x225867EAB11198F4L ^ l))));
    }

    @Override
    public JsonObject toJson() {
        long l = McFCz ^ 0x59F8B3E0ACE1L;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)25865, (long)(0x1A51BAA925457B46L ^ l))), (Number)Float.valueOf(this.Qqebw));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)10842, (long)(0x5168BD327FB4B405L ^ l))), (Number)Float.valueOf(this.jIvgU));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)2293, (long)(0x349CFDBB8A7B16A6L ^ l))), (Number)Float.valueOf(this.orOtZ));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)5711, (long)(0x1E4611EF00950817L ^ l))), (Number)Float.valueOf(this.BgypB));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)735, (long)(0x272E1A1E9A71C88L ^ l))), (Number)Float.valueOf(this.RRbDv));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)16725, (long)(0x389824CE828F5F0BL ^ l))), (Number)this.YiIng);
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)20010, (long)(0x513F2C286715078L ^ l))), (Number)Float.valueOf(this.XbTKn));
        jsonObject.addProperty((String)((Object)id.bhz("o", (int)21501, (long)(0x5814A9B4B786CDA1L ^ l))), (Number)this.bzSgC);
        return jsonObject;
    }

    public mG bhe() {
        return mG.cnQ(this.YiIng);
    }

    public mG bhf() {
        return mG.cnQ(this.bzSgC);
    }

    public float bhl() {
        return this.XbTKn;
    }

    public float bhg() {
        return this.Qqebw;
    }

    public float bhj() {
        return this.BgypB;
    }

    public float bhh() {
        return this.jIvgU;
    }

    public float bhi() {
        return this.orOtZ;
    }

    public static id bhd(float f, float f2, float f3, float f4, float f5, mG mG2, float f6, mG mG3) {
        return new id().bhm(f).bhn(f2).bho(f3).bhp(f4).bhq(f5).bhr(mG2.coh()).bhs(f6).bht(mG3.coh());
    }

    public id bhm(float f) {
        this.Qqebw = f;
        return this;
    }

    public id bhn(float f) {
        this.jIvgU = f;
        return this;
    }

    private static int bhA(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3FA8;
        if (QlXjr[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = Aeqvg[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JuNfN.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JuNfN.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/id", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            id.QlXjr[n2] = n3;
        }
        return QlXjr[n2];
    }

    private static CallSite bhC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/id" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bhx(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0xDF7;
        if (mcPaW[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])fzQcm.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fzQcm.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/id", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = NoJGG[n2].getBytes("ISO-8859-1");
            id.mcPaW[n2] = id.bhw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return mcPaW[n2];
    }

    private static Object bhy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = id.bhx(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static MatchException bhv(MatchException matchException) {
        return matchException;
    }

    private static CallSite bhz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/id" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bhw(byte[] byArray) {
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

    public id bhq(float f) {
        this.RRbDv = f;
        return this;
    }

    protected boolean bhu(Object object) {
        return object instanceof id;
    }

    public id bho(float f) {
        this.orOtZ = f;
        return this;
    }

    public id bhs(float f) {
        this.XbTKn = f;
        return this;
    }

    public id bhr(int n) {
        this.YiIng = n;
        return this;
    }

    public id bhp(float f) {
        this.BgypB = f;
        return this;
    }

    private static int bhB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = id.bhA(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public id bht(int n) {
        this.bzSgC = n;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(id.class, "bhB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(id.class, "bhy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
