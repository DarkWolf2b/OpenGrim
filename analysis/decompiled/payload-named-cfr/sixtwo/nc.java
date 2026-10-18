/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 *  net.minecraft.item.ItemStack
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
import net.minecraft.item.ItemStack;
import sixtwo.gb;
import sixtwo.jc;
import sixtwo.nb;
import sixtwo.nf;

public class nc
implements nb {
    private String hYtne;
    private boolean igUoH;
    private boolean JPVqp;
    private static final long QSAvd;
    private static final String[] gDKAf;
    private static final String[] sjYYh;
    private static final Map LwJfx;
    private static final long[] Hshvn;
    private static final Integer[] jCSBB;
    private static final Map oLYNn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        nc.QSAvd = gb.aYR(-3680703847985104501L, -3092701088504091093L, MethodHandles.lookup().lookupClass()).a(235940842565768L);
                        nc.LwJfx = new HashMap<K, V>(13);
                        var11 = nc.QSAvd ^ 48695811114515L;
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
                        var20_3 = new String[9];
                        var18_4 = 0;
                        var17_5 = "qU\r\u0004\u0005]\u0091\u0018\u00a6\u0099\u00b4\u00f9\u00ee\u00a8\u0001\u00fd\u00d2xS\u00d0\u00b0*\u00bf\u00e9\u00183\u00ba\u00a6+j\u0015\u00d9\u00f5\u00fb\u00b0\u001bE\u00df\u00f4\u00e0\u001d'\u00c9\u0092\u0097\u00fe\u00e69D <\u00c3\u00dec&a4A0:j\f\u00e3\u00fd\u00d6\u00e2M(\u00d6\u00e6\u001a\u009d\u00e8\u00c0\u00cd\u001b\u00e8\u00b7\u0006\u00a8r\r \u00fd%\u00a4\u0000\u0014\u0089$\u00c8\u00f2\u00a7s\u009b\u0005$+\u001dO\u000f\u0003\u00e1\u0001=<<\u00e1\u0086\u0007<6\u0013\u00cc\u00a2\u0018\u00c3\u001f\u00e2+.`\u00b0b\u00e4\u00db\u0013\u0093\u0016M\u00f3\u00975\u00a6=\u00d0\u0088\u001c\u009c< rv\u0088c\u00a2\u0094}\u00d6\u00ac\u0082\u00f4\u00c18o\u00a63\u0084o\u0007)\u00c0\u001e\u0011\u00ae\fo\u000bh1\r\u00a1\u00fe\u0010\u00a2\u008f\u0098\u00a7\u0087\u00b8/\u00de\u00b5C\u0094\u00f4Tp>\u00ac";
                        var19_6 = "qU\r\u0004\u0005]\u0091\u0018\u00a6\u0099\u00b4\u00f9\u00ee\u00a8\u0001\u00fd\u00d2xS\u00d0\u00b0*\u00bf\u00e9\u00183\u00ba\u00a6+j\u0015\u00d9\u00f5\u00fb\u00b0\u001bE\u00df\u00f4\u00e0\u001d'\u00c9\u0092\u0097\u00fe\u00e69D <\u00c3\u00dec&a4A0:j\f\u00e3\u00fd\u00d6\u00e2M(\u00d6\u00e6\u001a\u009d\u00e8\u00c0\u00cd\u001b\u00e8\u00b7\u0006\u00a8r\r \u00fd%\u00a4\u0000\u0014\u0089$\u00c8\u00f2\u00a7s\u009b\u0005$+\u001dO\u000f\u0003\u00e1\u0001=<<\u00e1\u0086\u0007<6\u0013\u00cc\u00a2\u0018\u00c3\u001f\u00e2+.`\u00b0b\u00e4\u00db\u0013\u0093\u0016M\u00f3\u00975\u00a6=\u00d0\u0088\u001c\u009c< rv\u0088c\u00a2\u0094}\u00d6\u00ac\u0082\u00f4\u00c18o\u00a63\u0084o\u0007)\u00c0\u001e\u0011\u00ae\fo\u000bh1\r\u00a1\u00fe\u0010\u00a2\u008f\u0098\u00a7\u0087\u00b8/\u00de\u00b5C\u0094\u00f4Tp>\u00ac".length();
                        var16_7 = 24;
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
                            var20_3[var18_4++] = nc.csQ(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00c1\u00ce\u00ac\u0016\u00b7\u008d\u0089\u00f4\u00e2q/u\u0098/;\u00e9\u00c3\u0093u\u00ad=\u00a1\u000b\u00d6\u0010y\u00bc\u008d?\\\u00d4\\\u0005B\u0083\u00a3 \u00f0f\b5";
                            var19_6 = "\u00c1\u00ce\u00ac\u0016\u00b7\u008d\u0089\u00f4\u00e2q/u\u0098/;\u00e9\u00c3\u0093u\u00ad=\u00a1\u000b\u00d6\u0010y\u00bc\u008d?\\\u00d4\\\u0005B\u0083\u00a3 \u00f0f\b5".length();
                            var16_7 = 24;
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
                            var20_3[var18_4++] = nc.csQ(var21_9).intern();
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
                nc.gDKAf = var20_3;
                nc.sjYYh = new String[9];
                nc.oLYNn = new HashMap<K, V>(13);
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
                var6_12 = new long[7];
                var3_13 = 0;
                var4_14 = "\u0018\u0017\u0014tp\nP\u0018&\u00d3C\u00e7N\u00a5\u0083#%\u00d3\u00c5$;\u0094k7I\u00a4\u009a'\u000e\u001f\u00018?U9\u0007-\u00beE\u001e";
                var5_15 = "\u0018\u0017\u0014tp\nP\u0018&\u00d3C\u00e7N\u00a5\u0083#%\u00d3\u00c5$;\u0094k7I\u00a4\u009a'\u000e\u001f\u00018?U9\u0007-\u00beE\u001e".length();
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
                    var4_14 = "\u0001Z!\u00fb\u00d0\u0007\u0088@\u00b3\u00f7\u008em\b\u0095\u0004\u008c";
                    var5_15 = "\u0001Z!\u00fb\u00d0\u0007\u0088@\u00b3\u00f7\u008em\b\u0095\u0004\u008c".length();
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
        nc.Hshvn = var6_12;
        nc.jCSBB = new Integer[7];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        String string;
        String string2;
        int n2;
        block40: {
            String string3;
            block41: {
                nc nc2;
                nc nc3;
                block39: {
                    boolean bl2;
                    boolean bl3;
                    block37: {
                        block38: {
                            block35: {
                                block36: {
                                    Object object2;
                                    block33: {
                                        block34: {
                                            block31: {
                                                block32: {
                                                    long l2 = QSAvd ^ 0xE23DC269915L;
                                                    n2 = nf.cup();
                                                    try {
                                                        try {
                                                            object2 = object;
                                                            if (n2 != 0) break block31;
                                                            if (object2 != this) break block32;
                                                            return true;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nc.csP(matchException);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nc.csP(matchException);
                                                    }
                                                }
                                                object2 = object;
                                            }
                                            try {
                                                try {
                                                    if (n2 != 0) break block33;
                                                    if (object2 instanceof nc) break block34;
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nc.csP(matchException);
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw nc.csP(matchException);
                                            }
                                        }
                                        object2 = object;
                                    }
                                    nc3 = (nc)object2;
                                    try {
                                        try {
                                            bl3 = nc3.csO(this);
                                            if (n2 != 0) break block35;
                                            if (bl3) break block36;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw nc.csP(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw nc.csP(matchException);
                                    }
                                }
                                bl3 = this.csJ();
                            }
                            try {
                                try {
                                    bl2 = nc3.csJ();
                                    if (n2 != 0) break block37;
                                    if (bl3 == bl2) break block38;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw nc.csP(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw nc.csP(matchException);
                            }
                        }
                        try {
                            nc2 = this;
                            if (n2 != 0) break block39;
                            bl3 = nc2.csK();
                            bl2 = nc3.csK();
                        }
                        catch (MatchException matchException) {
                            throw nc.csP(matchException);
                        }
                    }
                    try {
                        if (bl3 != bl2) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw nc.csP(matchException);
                    }
                    nc2 = this;
                }
                string3 = nc2.csI();
                string2 = nc3.csI();
                try {
                    try {
                        try {
                            string = string3;
                            if (n2 != 0) break block40;
                            if (string != null) break block41;
                        }
                        catch (MatchException matchException) {
                            throw nc.csP(matchException);
                        }
                        if (string2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw nc.csP(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nc.csP(matchException);
                }
            }
            string = string3;
        }
        try {
            try {
                boolean bl4 = string.equals(string2);
                if (n2 != 0) return bl4;
                if (bl4) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw nc.csP(matchException);
            }
        }
        catch (MatchException matchException) {
            throw nc.csP(matchException);
        }
    }

    public String toString() {
        long l2 = QSAvd ^ 0x22C6217658D8L;
        boolean bl2 = this.csK();
        boolean bl3 = this.csJ();
        String string = this.csI();
        return (String)((Object)nc.csT("h", (int)3974, (long)(0x2A9AEB6E44C559ACL ^ l2))) + string + (String)((Object)nc.csT("h", (int)17558, (long)(0x4746894AD48512BEL ^ l2))) + bl3 + (String)((Object)nc.csT("h", (int)28038, (long)(0x5BE57AF0D56A3BA8L ^ l2))) + bl2 + ")";
    }

    public int hashCode() {
        Object object;
        int n2;
        int n3;
        block14: {
            String string;
            block12: {
                String string2;
                block13: {
                    Object object2;
                    int n4;
                    int n5;
                    long l2;
                    block10: {
                        block11: {
                            Object object3;
                            int n6;
                            block8: {
                                block9: {
                                    l2 = QSAvd ^ 0x76E0A6C1A984L;
                                    CallSite callSite = nc.csW("v", (int)20465, (long)(0x79204BEC41113FF5L ^ l2));
                                    n3 = 1;
                                    n5 = nf.cup();
                                    try {
                                        n6 = n3 * nc.csW("v", (int)5165, (long)(0x389B17184494642AL ^ l2));
                                        object3 = this.csJ();
                                        if (n5 != 0) break block8;
                                        if (object3 == 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw nc.csP(matchException);
                                    }
                                    object3 = nc.csW("v", (int)17840, (long)(0x55085CD023D7B5B5L ^ l2));
                                    break block8;
                                }
                                object3 = nc.csW("v", (int)26521, (long)(0x16842A67FBFB179AL ^ l2));
                            }
                            n3 = n6 + object3;
                            try {
                                n4 = n3 * nc.csW("v", (int)5165, (long)(0x389B17184494642AL ^ l2));
                                object2 = this.csK();
                                if (n5 != 0) break block10;
                                if (object2 == 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw nc.csP(matchException);
                            }
                            object2 = nc.csW("v", (int)31907, (long)(0x197F98DFDA538CA5L ^ l2));
                            break block10;
                        }
                        object2 = nc.csW("v", (int)5862, (long)(0x6B876C77CAD066E6L ^ l2));
                    }
                    n3 = n4 + object2;
                    string2 = this.csI();
                    try {
                        try {
                            n2 = n3 * nc.csW("v", (int)5165, (long)(0x389B17184494642AL ^ l2));
                            string = string2;
                            if (n5 != 0) break block12;
                            if (string != null) break block13;
                        }
                        catch (MatchException matchException) {
                            throw nc.csP(matchException);
                        }
                        object = nc.csW("v", (int)10824, (long)(0x55DF6FA37B4C5A4AL ^ l2));
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw nc.csP(matchException);
                    }
                }
                string = string2;
            }
            object = string.hashCode();
        }
        n3 = n2 + object;
        return n3;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public boolean matches(ItemStack itemStack) {
        boolean bl2;
        int n2;
        block38: {
            String string;
            String string2;
            block39: {
                String string3;
                String string4;
                String string5;
                block37: {
                    nc nc2;
                    block35: {
                        block36: {
                            String string6;
                            block33: {
                                block34: {
                                    block32: {
                                        block31: {
                                            ItemStack itemStack2;
                                            block30: {
                                                long l2 = QSAvd ^ 0x2F55C507A6D0L;
                                                n2 = nf.cup();
                                                try {
                                                    itemStack2 = itemStack;
                                                    if (n2 != 0) break block30;
                                                    if (itemStack2 == null) return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nc.csP(matchException);
                                                }
                                                itemStack2 = itemStack;
                                            }
                                            try {
                                                boolean bl3 = itemStack2.isEmpty();
                                                if (n2 != 0) return bl3;
                                                if (!bl3) break block31;
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw nc.csP(matchException);
                                            }
                                        }
                                        try {
                                            try {
                                                string6 = this.hYtne;
                                                if (n2 != 0) break block32;
                                                if (string6 == null) return true;
                                            }
                                            catch (MatchException matchException) {
                                                throw nc.csP(matchException);
                                            }
                                            string6 = this.hYtne;
                                        }
                                        catch (MatchException matchException) {
                                            throw nc.csP(matchException);
                                        }
                                    }
                                    try {
                                        try {
                                            if (n2 != 0) break block33;
                                            if (!string6.isBlank()) break block34;
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw nc.csP(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw nc.csP(matchException);
                                    }
                                }
                                string6 = jc.bzE(itemStack);
                            }
                            string5 = string6;
                            try {
                                try {
                                    nc2 = this;
                                    if (n2 != 0) break block35;
                                    if (!nc2.JPVqp) break block36;
                                }
                                catch (MatchException matchException) {
                                    throw nc.csP(matchException);
                                }
                                string4 = this.hYtne.toLowerCase();
                                break block37;
                            }
                            catch (MatchException matchException) {
                                throw nc.csP(matchException);
                            }
                        }
                        nc2 = this;
                    }
                    string4 = nc2.hYtne;
                }
                string2 = string4;
                try {
                    string3 = this.JPVqp ? string5.toLowerCase() : string5;
                }
                catch (MatchException matchException) {
                    throw nc.csP(matchException);
                }
                string = string3;
                try {
                    try {
                        try {
                            try {
                                bl2 = this.igUoH;
                                if (n2 != 0) break block38;
                                if (!bl2) break block39;
                            }
                            catch (MatchException matchException) {
                                throw nc.csP(matchException);
                            }
                            bl2 = string.contains(string2);
                            if (n2 != 0) return bl2;
                        }
                        catch (MatchException matchException) {
                            throw nc.csP(matchException);
                        }
                        if (!bl2) return false;
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw nc.csP(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nc.csP(matchException);
                }
            }
            bl2 = string.equals(string2);
        }
        try {
            try {
                if (n2 != 0) return bl2;
                if (!bl2) return false;
                return true;
            }
            catch (MatchException matchException) {
                throw nc.csP(matchException);
            }
        }
        catch (MatchException matchException) {
            throw nc.csP(matchException);
        }
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = QSAvd ^ 0x6149640100D3L;
        this.hYtne = this.readString(jsonObject, (String)((Object)nc.csT("h", (int)29229, (long)(0xE7495B51371FC01L ^ l2))));
        this.igUoH = this.readBoolean(jsonObject, (String)((Object)nc.csT("h", (int)20308, (long)(0x66A45C11137AC174L ^ l2))), false);
        this.JPVqp = this.readBoolean(jsonObject, (String)((Object)nc.csT("h", (int)2184, (long)(0x3C124689F96586ACL ^ l2))), false);
    }

    @Override
    public JsonObject toJson() {
        JsonObject jsonObject;
        block4: {
            long l2;
            block5: {
                l2 = QSAvd ^ 0x7F422041FE58L;
                jsonObject = new JsonObject();
                int n2 = nf.cup();
                try {
                    try {
                        if (n2 != 0) break block4;
                        if (this.hYtne == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw nc.csP(matchException);
                    }
                    jsonObject.addProperty((String)((Object)nc.csT("h", (int)16, (long)(0x3AF43122D0DB70B9L ^ l2))), this.hYtne);
                }
                catch (MatchException matchException) {
                    throw nc.csP(matchException);
                }
            }
            jsonObject.addProperty((String)((Object)nc.csT("h", (int)21627, (long)(0x1A46596259A1A4D7L ^ l2))), Boolean.valueOf(this.igUoH));
            jsonObject.addProperty((String)((Object)nc.csT("h", (int)6173, (long)(0x1F58B214D94DE8B0L ^ l2))), Boolean.valueOf(this.JPVqp));
        }
        return jsonObject;
    }

    private static CallSite csT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException csP(MatchException matchException) {
        return matchException;
    }

    private static String csR(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6307;
        if (sjYYh[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])LwJfx.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LwJfx.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nc", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = gDKAf[n3].getBytes("ISO-8859-1");
            nc.sjYYh[n3] = nc.csQ(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return sjYYh[n3];
    }

    protected boolean csO(Object object) {
        return object instanceof nc;
    }

    private static int csV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = nc.csU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String csQ(byte[] byArray) {
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

    public boolean csK() {
        return this.JPVqp;
    }

    public String csI() {
        return this.hYtne;
    }

    public boolean csJ() {
        return this.igUoH;
    }

    private static int csU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3472;
        if (jCSBB[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = Hshvn[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])oLYNn.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    oLYNn.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nc", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            nc.jCSBB[n3] = n4;
        }
        return jCSBB[n3];
    }

    private static CallSite csW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object csS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = nc.csR(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void csM(boolean bl2) {
        this.igUoH = bl2;
    }

    public void csL(String string) {
        this.hYtne = string;
    }

    public void csN(boolean bl2) {
        this.JPVqp = bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(nc.class, "csS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(nc.class, "csV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

