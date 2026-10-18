/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 *  net.minecraft.component.type.ItemEnchantmentsComponent
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.registry.RegistryKeys
 *  net.minecraft.util.Identifier
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
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.RegistryKey;
import net.minecraft.registry.RegistryKeys;
import net.minecraft.util.Identifier;
import sixtwo.gb;
import sixtwo.jh;
import sixtwo.nb;
import sixtwo.nf;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class ng
implements nb {
    private transient rk gANkz;
    private String AhZpO;
    private int UgHqn;
    private boolean GkUnW;
    private boolean RpMDi;
    private static final long YmNtq;
    private static final String[] yRPAE;
    private static final String[] hehSp;
    private static final Map RIaWJ;
    private static final long[] vAtMC;
    private static final Integer[] OceTR;
    private static final Map sIxDy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ng(RegistryKey<Enchantment> registryKey, int n2, boolean bl2, boolean bl3) {
        this(registryKey.getValue().toString(), n2, bl2, bl3);
    }

    public ng(RegistryKey<Enchantment> registryKey, int n2, boolean bl2) {
        this(registryKey.getValue().toString(), n2, bl2);
    }

    public ng(String string, int n2, boolean bl2, boolean bl3) {
        this.AhZpO = string;
        this.UgHqn = n2;
        this.GkUnW = bl2;
        this.RpMDi = bl3;
    }

    public ng(String string, int n2, boolean bl2) {
        this(string, n2, bl2, false);
    }

    public ng() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        ng.YmNtq = gb.aYR(847945890627004067L, 5479451422923301529L, MethodHandles.lookup().lookupClass()).a(102929415432139L);
                        ng.RIaWJ = new HashMap<K, V>(13);
                        var11 = ng.YmNtq ^ 84310439665730L;
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
                        var20_3 = new String[13];
                        var18_4 = 0;
                        var17_5 = "\u00a2\u00e1\u0083\u00f4,1c\u00feb\u001d\u0001P\u0010\u00bd*\u00bb~\u00cc\u0083Ns\u0013\u009d\u00bb\u00e6\u0099Q\u0006\u00e4\u00da\u00e4\u00bd\u0018\u0087\u00cd\t^6\u00b37\u00f9-I6f({\u00d6J\u00ab\u00fb\u001a\u0002\u00d9\u001f\u00df\u00ca\u0018\u00ff<Q\u0086\u0091\u00ec\u00ba\u00d6j\u00ce\u008c\u00a1L\u00ad\u0082?1\u009d\u00f3\u0087\u00fa\u00e2Pz qf\b\u00b5w5X\u00db\u001f\u009e\u00b3P\u00a6 ,#\\=Z\u0082/\f\u00f5A\u00e2\u00c0\u00c3e4P5\u00c1\u0010~\u00a2g\u00ca\u00ae\u00c7]\u00875\u00df%qy\u008d!w\u0018\u00e0\u00cb`;\u00da\u00b1U\u00dd/~>\u00c9\u0018\u00fa\u00a6\u00beX<\u00f5S\u001a\u00a2*\u00d2\u0018Iv\u009b\u0015\u00bc\u0080\u00ddH\u00aa\u00bc\u00fdJP3\u0097\u001a\u00c4\u00a8\u00d3JE\u00a7\u00e9\u00ec xT\u008fP\\\u00de\u0014\u00c7g\u00e3\u001c\u00fb)\u00f8\u00e6Q\u0096\u00d4\u00e8\u00c7\u001b\u00d8\u0098d\u00e2\u00da\u0093\u0019\u00ce\u00b6\u00fc\u00ee\u00103#\u00a3\u00bf\u0091/\u00b4\u00ce\u00c6*4S|\u00d1\u00e4\u00b08l\u00bb\u0011\u009a\u00ff\u0010\u001eT-\u00d1y\u001e5\u000b\u00b12\u00f1usg\u00ea\u00a3\u00deA\u0016\u00fcB\u00a2Q`va\u00e3g\u007f\u0085\u00b9\u00d19I\u00a7e\u009eI?\u00fb\u0089\u0004Jx+{T\tb\u00e3\u0010W\u0081\u00f9\u0005\u00ac\u00a7:\u0095[kh\u00e6X\u00c8\u00d6\u00af";
                        var19_6 = "\u00a2\u00e1\u0083\u00f4,1c\u00feb\u001d\u0001P\u0010\u00bd*\u00bb~\u00cc\u0083Ns\u0013\u009d\u00bb\u00e6\u0099Q\u0006\u00e4\u00da\u00e4\u00bd\u0018\u0087\u00cd\t^6\u00b37\u00f9-I6f({\u00d6J\u00ab\u00fb\u001a\u0002\u00d9\u001f\u00df\u00ca\u0018\u00ff<Q\u0086\u0091\u00ec\u00ba\u00d6j\u00ce\u008c\u00a1L\u00ad\u0082?1\u009d\u00f3\u0087\u00fa\u00e2Pz qf\b\u00b5w5X\u00db\u001f\u009e\u00b3P\u00a6 ,#\\=Z\u0082/\f\u00f5A\u00e2\u00c0\u00c3e4P5\u00c1\u0010~\u00a2g\u00ca\u00ae\u00c7]\u00875\u00df%qy\u008d!w\u0018\u00e0\u00cb`;\u00da\u00b1U\u00dd/~>\u00c9\u0018\u00fa\u00a6\u00beX<\u00f5S\u001a\u00a2*\u00d2\u0018Iv\u009b\u0015\u00bc\u0080\u00ddH\u00aa\u00bc\u00fdJP3\u0097\u001a\u00c4\u00a8\u00d3JE\u00a7\u00e9\u00ec xT\u008fP\\\u00de\u0014\u00c7g\u00e3\u001c\u00fb)\u00f8\u00e6Q\u0096\u00d4\u00e8\u00c7\u001b\u00d8\u0098d\u00e2\u00da\u0093\u0019\u00ce\u00b6\u00fc\u00ee\u00103#\u00a3\u00bf\u0091/\u00b4\u00ce\u00c6*4S|\u00d1\u00e4\u00b08l\u00bb\u0011\u009a\u00ff\u0010\u001eT-\u00d1y\u001e5\u000b\u00b12\u00f1usg\u00ea\u00a3\u00deA\u0016\u00fcB\u00a2Q`va\u00e3g\u007f\u0085\u00b9\u00d19I\u00a7e\u009eI?\u00fb\u0089\u0004Jx+{T\tb\u00e3\u0010W\u0081\u00f9\u0005\u00ac\u00a7:\u0095[kh\u00e6X\u00c8\u00d6\u00af".length();
                        var16_7 = 32;
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
                            var20_3[var18_4++] = ng.cuL(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "'\u00dc\u00ba0y\u00f7y\u00a61l!1\u00c2\u001c/=?7@\u00cc\u00edZ6\u00e2\u00e5X{+\u00f9`\u00df\u00e7\u0010\u00dc\u000e\u001e\u00c9\u00ae<\u00cf\u00e6m\u00c7l\u00bfq[<\u008f";
                            var19_6 = "'\u00dc\u00ba0y\u00f7y\u00a61l!1\u00c2\u001c/=?7@\u00cc\u00edZ6\u00e2\u00e5X{+\u00f9`\u00df\u00e7\u0010\u00dc\u000e\u001e\u00c9\u00ae<\u00cf\u00e6m\u00c7l\u00bfq[<\u008f".length();
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
                            var20_3[var18_4++] = ng.cuL(var21_9).intern();
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
                ng.yRPAE = var20_3;
                ng.hehSp = new String[13];
                ng.sIxDy = new HashMap<K, V>(13);
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
                var6_12 = new long[8];
                var3_13 = 0;
                var4_14 = "M\u0084DHV\u00b0\u0088{\rGj\u008d\u00f4\u00a9c\u001c\u00d3\u00fc\u008e\u00a0\u00f5i\u00b7\u0013\u0005\u009d-C$\u0019G\u00d2s=\u0095\u00b2f\u00ff[s\u00ab\u00d7\u00ef\b,\u0081\u0010\u009b";
                var5_15 = "M\u0084DHV\u00b0\u0088{\rGj\u008d\u00f4\u00a9c\u001c\u00d3\u00fc\u008e\u00a0\u00f5i\u00b7\u0013\u0005\u009d-C$\u0019G\u00d2s=\u0095\u00b2f\u00ff[s\u00ab\u00d7\u00ef\b,\u0081\u0010\u009b".length();
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
                    var4_14 = "\u0012dYDaO~!\u00de\u008a\u001c\u00e1g~\u00f3\u001f";
                    var5_15 = "\u0012dYDaO~!\u00de\u008a\u001c\u00e1g~\u00f3\u001f".length();
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
        ng.vAtMC = var6_12;
        ng.OceTR = new Integer[8];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        String string;
        String string2;
        int n2;
        block46: {
            String string3;
            block47: {
                ng ng2;
                ng ng3;
                block45: {
                    int n3;
                    int n4;
                    block43: {
                        block44: {
                            block41: {
                                block42: {
                                    block39: {
                                        block40: {
                                            Object object2;
                                            block37: {
                                                block38: {
                                                    block35: {
                                                        block36: {
                                                            long l2 = YmNtq ^ 0x72F8CB11A884L;
                                                            n2 = nf.cuo();
                                                            try {
                                                                try {
                                                                    object2 = object;
                                                                    if (n2 == 0) break block35;
                                                                    if (object2 != this) break block36;
                                                                    return true;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw ng.cuK(matchException);
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw ng.cuK(matchException);
                                                            }
                                                        }
                                                        object2 = object;
                                                    }
                                                    try {
                                                        try {
                                                            if (n2 == 0) break block37;
                                                            if (object2 instanceof ng) break block38;
                                                            return false;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ng.cuK(matchException);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ng.cuK(matchException);
                                                    }
                                                }
                                                object2 = object;
                                            }
                                            ng3 = (ng)object2;
                                            try {
                                                try {
                                                    n4 = ng3.cuJ(this);
                                                    if (n2 == 0) break block39;
                                                    if (n4 != 0) break block40;
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ng.cuK(matchException);
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw ng.cuK(matchException);
                                            }
                                        }
                                        n4 = this.cuB();
                                    }
                                    try {
                                        try {
                                            n3 = ng3.cuB();
                                            if (n2 == 0) break block41;
                                            if (n4 == n3) break block42;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw ng.cuK(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw ng.cuK(matchException);
                                    }
                                }
                                n4 = this.cuC() ? 1 : 0;
                                n3 = ng3.cuC() ? 1 : 0;
                            }
                            try {
                                try {
                                    if (n2 == 0) break block43;
                                    if (n4 == n3) break block44;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw ng.cuK(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw ng.cuK(matchException);
                            }
                        }
                        try {
                            ng2 = this;
                            if (n2 == 0) break block45;
                            n4 = ng2.cuD() ? 1 : 0;
                            n3 = ng3.cuD() ? 1 : 0;
                        }
                        catch (MatchException matchException) {
                            throw ng.cuK(matchException);
                        }
                    }
                    try {
                        if (n4 != n3) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw ng.cuK(matchException);
                    }
                    ng2 = this;
                }
                string3 = ng2.cuA();
                string2 = ng3.cuA();
                try {
                    try {
                        try {
                            string = string3;
                            if (n2 == 0) break block46;
                            if (string != null) break block47;
                        }
                        catch (MatchException matchException) {
                            throw ng.cuK(matchException);
                        }
                        if (string2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw ng.cuK(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ng.cuK(matchException);
                }
            }
            string = string3;
        }
        try {
            try {
                boolean bl2 = string.equals(string2);
                if (n2 == 0) return bl2;
                if (bl2) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw ng.cuK(matchException);
            }
        }
        catch (MatchException matchException) {
            throw ng.cuK(matchException);
        }
    }

    public String toString() {
        long l2 = YmNtq ^ 0x6A2CB9DA05A8L;
        boolean bl2 = this.cuD();
        boolean bl3 = this.cuC();
        int n2 = this.cuB();
        String string = this.cuA();
        String string2 = String.valueOf(this.cuz());
        return (String)((Object)ng.cuO("i", (int)19710, (long)(0x79F856F60198A28EL ^ l2))) + string2 + (String)((Object)ng.cuO("i", (int)14956, (long)(0x370E4E4C5376D417L ^ l2))) + string + (String)((Object)ng.cuO("i", (int)19963, (long)(0x128B4F9EECD5A383L ^ l2))) + n2 + (String)((Object)ng.cuO("i", (int)3071, (long)(0x5C2F74389723E580L ^ l2))) + bl3 + (String)((Object)ng.cuO("i", (int)19461, (long)(0x1C083A2F8736A279L ^ l2))) + bl2 + ")";
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
                                    l2 = YmNtq ^ 0x5B03C621889L;
                                    CallSite callSite = ng.cuR("f", (int)11646, (long)(0x2DC17CFB7D82AE0AL ^ l2));
                                    n3 = 1;
                                    n5 = nf.cuo();
                                    n3 = n3 * ng.cuR("f", (int)13629, (long)(0x6B7340B928B83648L ^ l2)) + this.cuB();
                                    try {
                                        n6 = n3 * ng.cuR("f", (int)13629, (long)(0x6B7340B928B83648L ^ l2));
                                        object3 = this.cuC();
                                        if (n5 == 0) break block8;
                                        if (object3 == 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw ng.cuK(matchException);
                                    }
                                    object3 = ng.cuR("f", (int)20637, (long)(0x7C4F3939396A53EEL ^ l2));
                                    break block8;
                                }
                                object3 = ng.cuR("f", (int)30345, (long)(0x1C2D09ECACB9F5F8L ^ l2));
                            }
                            n3 = n6 + object3;
                            try {
                                n4 = n3 * ng.cuR("f", (int)13629, (long)(0x6B7340B928B83648L ^ l2));
                                object2 = this.cuD();
                                if (n5 == 0) break block10;
                                if (object2 == 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ng.cuK(matchException);
                            }
                            object2 = ng.cuR("f", (int)14284, (long)(0x5CC6F46D0A4934BEL ^ l2));
                            break block10;
                        }
                        object2 = ng.cuR("f", (int)15817, (long)(0x1C076D85FAE63EB9L ^ l2));
                    }
                    n3 = n4 + object2;
                    string2 = this.cuA();
                    try {
                        try {
                            n2 = n3 * ng.cuR("f", (int)13629, (long)(0x6B7340B928B83648L ^ l2));
                            string = string2;
                            if (n5 == 0) break block12;
                            if (string != null) break block13;
                        }
                        catch (MatchException matchException) {
                            throw ng.cuK(matchException);
                        }
                        object = ng.cuR("f", (int)570, (long)(0x5655D5417465814CL ^ l2));
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw ng.cuK(matchException);
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
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    public boolean matches(ItemStack var1_1) {
        block89: {
            block90: {
                block91: {
                    block92: {
                        block88: {
                            block85: {
                                block86: {
                                    block87: {
                                        block84: {
                                            block80: {
                                                block81: {
                                                    block82: {
                                                        block83: {
                                                            block76: {
                                                                block77: {
                                                                    block78: {
                                                                        block79: {
                                                                            block75: {
                                                                                block73: {
                                                                                    block74: {
                                                                                        block71: {
                                                                                            block72: {
                                                                                                block69: {
                                                                                                    block70: {
                                                                                                        block68: {
                                                                                                            block67: {
                                                                                                                block66: {
                                                                                                                    block65: {
                                                                                                                        block64: {
                                                                                                                            var2_2 = ng.YmNtq ^ 19334279757036L;
                                                                                                                            var4_3 = nf.cup();
                                                                                                                            try {
                                                                                                                                v0 = var1_1;
                                                                                                                                if (var4_3 != 0) break block64;
                                                                                                                                if (v0 == null) break block65;
                                                                                                                            }
                                                                                                                            catch (MatchException v1) {
                                                                                                                                throw ng.cuK(v1);
                                                                                                                            }
                                                                                                                            v0 = var1_1;
                                                                                                                        }
                                                                                                                        try {
                                                                                                                            v2 = v0.isEmpty();
                                                                                                                            if (var4_3 != 0) break block66;
                                                                                                                            if (!v2) break block67;
                                                                                                                        }
                                                                                                                        catch (MatchException v3) {
                                                                                                                            throw ng.cuK(v3);
                                                                                                                        }
                                                                                                                    }
                                                                                                                    v2 = false;
                                                                                                                }
                                                                                                                return v2;
                                                                                                            }
                                                                                                            try {
                                                                                                                try {
                                                                                                                    v4 = this.AhZpO;
                                                                                                                    if (var4_3 != 0) break block68;
                                                                                                                    if (v4 != null) {
                                                                                                                    }
                                                                                                                    ** GOTO lbl45
                                                                                                                }
                                                                                                                catch (MatchException v5) {
                                                                                                                    throw ng.cuK(v5);
                                                                                                                }
                                                                                                                v4 = this.AhZpO;
                                                                                                            }
                                                                                                            catch (MatchException v6) {
                                                                                                                throw ng.cuK(v6);
                                                                                                            }
                                                                                                        }
                                                                                                        try {
                                                                                                            try {
                                                                                                                if (var4_3 != 0) break block69;
                                                                                                                if (!v4.isBlank()) break block70;
                                                                                                            }
                                                                                                            catch (MatchException v7) {
                                                                                                                throw ng.cuK(v7);
                                                                                                            }
lbl45:
                                                                                                            // 2 sources

                                                                                                            return true;
                                                                                                        }
                                                                                                        catch (MatchException v8) {
                                                                                                            throw ng.cuK(v8);
                                                                                                        }
                                                                                                    }
                                                                                                    v4 = this.AhZpO;
                                                                                                }
                                                                                                var5_4 = Identifier.tryParse((String)v4);
                                                                                                try {
                                                                                                    if (var5_4 == null) {
                                                                                                        return false;
                                                                                                    }
                                                                                                }
                                                                                                catch (MatchException v9) {
                                                                                                    throw ng.cuK(v9);
                                                                                                }
                                                                                                var6_5 = rD.dlmvG.world.getRegistryManager().getOrThrow(RegistryKeys.ENCHANTMENT);
                                                                                                var7_6 = var6_5.getEntry(var5_4).orElse(null);
                                                                                                try {
                                                                                                    try {
                                                                                                        v10 /* !! */  = var7_6;
                                                                                                        if (var4_3 != 0) break block71;
                                                                                                        if (v10 /* !! */  != null) break block72;
                                                                                                    }
                                                                                                    catch (MatchException v11) {
                                                                                                        throw ng.cuK(v11);
                                                                                                    }
                                                                                                    return false;
                                                                                                }
                                                                                                catch (MatchException v12) {
                                                                                                    throw ng.cuK(v12);
                                                                                                }
                                                                                            }
                                                                                            v10 /* !! */  = var1_1.getOrDefault(jh.bCi(var1_1), (Object)ItemEnchantmentsComponent.DEFAULT);
                                                                                        }
                                                                                        var8_7 = (ItemEnchantmentsComponent)v10 /* !! */ ;
                                                                                        try {
                                                                                            try {
                                                                                                v13 = var8_7;
                                                                                                if (var4_3 != 0) break block73;
                                                                                                if (!v13.isEmpty()) break block74;
                                                                                            }
                                                                                            catch (MatchException v14) {
                                                                                                throw ng.cuK(v14);
                                                                                            }
                                                                                            v15 = 0;
                                                                                            break block75;
                                                                                        }
                                                                                        catch (MatchException v16) {
                                                                                            throw ng.cuK(v16);
                                                                                        }
                                                                                    }
                                                                                    v13 = var8_7;
                                                                                }
                                                                                v15 = v13.getLevel(var7_6);
                                                                            }
                                                                            var9_8 = v15;
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                v17 = this.RpMDi;
                                                                                                if (var4_3 != 0) break block76;
                                                                                                if (v17 == 0) break block77;
                                                                                            }
                                                                                            catch (MatchException v18) {
                                                                                                throw ng.cuK(v18);
                                                                                            }
                                                                                            v17 = this.UgHqn;
                                                                                            if (var4_3 != 0) break block76;
                                                                                        }
                                                                                        catch (MatchException v19) {
                                                                                            throw ng.cuK(v19);
                                                                                        }
                                                                                        if (v17 > 0) break block77;
                                                                                    }
                                                                                    catch (MatchException v20) {
                                                                                        throw ng.cuK(v20);
                                                                                    }
                                                                                    v21 = var9_8;
                                                                                    if (var4_3 != 0) break block78;
                                                                                }
                                                                                catch (MatchException v22) {
                                                                                    throw ng.cuK(v22);
                                                                                }
                                                                                if (v21 > 0) break block79;
                                                                            }
                                                                            catch (MatchException v23) {
                                                                                throw ng.cuK(v23);
                                                                            }
                                                                            v21 = 1;
                                                                            break block78;
                                                                        }
                                                                        v21 = 0;
                                                                    }
                                                                    return (boolean)v21;
                                                                }
                                                                v17 = this.RpMDi;
                                                            }
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                if (var4_3 != 0) break block80;
                                                                                if (v17 != 0) break block81;
                                                                            }
                                                                            catch (MatchException v24) {
                                                                                throw ng.cuK(v24);
                                                                            }
                                                                            v17 = this.UgHqn;
                                                                            if (var4_3 != 0) break block80;
                                                                        }
                                                                        catch (MatchException v25) {
                                                                            throw ng.cuK(v25);
                                                                        }
                                                                        if (v17 > 0) break block81;
                                                                    }
                                                                    catch (MatchException v26) {
                                                                        throw ng.cuK(v26);
                                                                    }
                                                                    v27 = var9_8;
                                                                    if (var4_3 != 0) break block82;
                                                                }
                                                                catch (MatchException v28) {
                                                                    throw ng.cuK(v28);
                                                                }
                                                                if (v27 <= 0) break block83;
                                                            }
                                                            catch (MatchException v29) {
                                                                throw ng.cuK(v29);
                                                            }
                                                            v27 = 1;
                                                            break block82;
                                                        }
                                                        v27 = 0;
                                                    }
                                                    return (boolean)v27;
                                                }
                                                v17 = var9_8;
                                            }
                                            try {
                                                try {
                                                    if (var4_3 != 0) break block84;
                                                    if (v17 <= 0) break block85;
                                                }
                                                catch (MatchException v30) {
                                                    throw ng.cuK(v30);
                                                }
                                                v17 = (int)this.GkUnW;
                                            }
                                            catch (MatchException v31) {
                                                throw ng.cuK(v31);
                                            }
                                        }
                                        try {
                                            try {
                                                try {
                                                    if (var4_3 != 0) break block86;
                                                    if (v17 == 0) break block87;
                                                }
                                                catch (MatchException v32) {
                                                    throw ng.cuK(v32);
                                                }
                                                if (var9_8 < this.UgHqn) break block85;
                                                ** GOTO lbl204
                                            }
                                            catch (MatchException v33) {
                                                throw ng.cuK(v33);
                                            }
                                        }
                                        catch (MatchException v34) {
                                            throw ng.cuK(v34);
                                        }
                                    }
                                    v17 = var9_8;
                                }
                                try {
                                    try {
                                        if (var4_3 != 0) break block88;
                                        if (v17 != this.UgHqn) break block85;
                                    }
                                    catch (MatchException v35) {
                                        throw ng.cuK(v35);
                                    }
lbl204:
                                    // 2 sources

                                    v17 = 1;
                                    break block88;
                                }
                                catch (MatchException v36) {
                                    throw ng.cuK(v36);
                                }
                            }
                            v17 = 0;
                        }
                        var10_9 = v17;
                        try {
                            try {
                                try {
                                    v37 = this.RpMDi;
                                    if (var4_3 != 0) break block89;
                                    if (!v37) break block90;
                                }
                                catch (MatchException v38) {
                                    throw ng.cuK(v38);
                                }
                                v39 = var10_9;
                                if (var4_3 != 0) break block91;
                            }
                            catch (MatchException v40) {
                                throw ng.cuK(v40);
                            }
                            if (v39) break block92;
                        }
                        catch (MatchException v41) {
                            throw ng.cuK(v41);
                        }
                        v39 = true;
                        break block91;
                    }
                    v39 = false;
                }
                return v39;
            }
            v37 = var10_9;
        }
        return v37;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = YmNtq ^ 0x5F893DE6DAEFL;
        this.AhZpO = this.readString(jsonObject, (String)((Object)ng.cuO("i", (int)15417, (long)(0x52CB85BD095A0D04L ^ l2))));
        this.UgHqn = this.readInt(jsonObject, (String)((Object)ng.cuO("i", (int)17154, (long)(0x18C9A6328EE1F236L ^ l2))));
        this.GkUnW = this.readBoolean(jsonObject, (String)((Object)ng.cuO("i", (int)8971, (long)(0x4EBCB881D6A11239L ^ l2))), false);
        this.RpMDi = this.readBoolean(jsonObject, (String)((Object)ng.cuO("i", (int)32493, (long)(0x604031C19C604FD4L ^ l2))), false);
        this.gANkz = null;
    }

    @Override
    public JsonObject toJson() {
        JsonObject jsonObject;
        block4: {
            long l2;
            block5: {
                l2 = YmNtq ^ 0x418279A62464L;
                jsonObject = new JsonObject();
                int n2 = nf.cup();
                try {
                    try {
                        if (n2 != 0) break block4;
                        if (this.AhZpO == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ng.cuK(matchException);
                    }
                    jsonObject.addProperty((String)((Object)ng.cuO("i", (int)12857, (long)(0x1C7E711C27487D87L ^ l2))), this.AhZpO);
                }
                catch (MatchException matchException) {
                    throw ng.cuK(matchException);
                }
            }
            jsonObject.addProperty((String)((Object)ng.cuO("i", (int)4104, (long)(0x5E27CB52D7355FB9L ^ l2))), (Number)this.UgHqn);
            jsonObject.addProperty((String)((Object)ng.cuO("i", (int)12933, (long)(0x16185FD67EFC7D38L ^ l2))), Boolean.valueOf(this.GkUnW));
            jsonObject.addProperty((String)((Object)ng.cuO("i", (int)2695, (long)(0x481063ACC9424532L ^ l2))), Boolean.valueOf(this.RpMDi));
        }
        return jsonObject;
    }

    public void cuI(boolean bl2) {
        this.RpMDi = bl2;
    }

    public void cuG(int n2) {
        this.UgHqn = n2;
    }

    public boolean cuD() {
        return this.RpMDi;
    }

    public void cuH(boolean bl2) {
        this.GkUnW = bl2;
    }

    private static Object cuN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ng.cuM(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int cuQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ng.cuP(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public void cuF(String string) {
        this.AhZpO = string;
    }

    public rk cuz() {
        return this.gANkz;
    }

    private static MatchException cuK(MatchException matchException) {
        return matchException;
    }

    private static CallSite cuO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ng" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    protected boolean cuJ(Object object) {
        return object instanceof ng;
    }

    public void cuE(rk rk2) {
        this.gANkz = rk2;
    }

    private static CallSite cuR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ng" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public rk cuy() {
        rk rk2;
        block4: {
            block5: {
                long l2 = YmNtq ^ 0x5A85FAB0B50FL;
                int n2 = nf.cup();
                try {
                    try {
                        rk2 = this.gANkz;
                        if (n2 != 0) break block4;
                        if (rk2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ng.cuK(matchException);
                    }
                    this.gANkz = new rk((int)ng.cuR("f", (int)17511, (long)(0x2FFE5B109540EA96L ^ l2))).dhs(rj.UPXqT);
                }
                catch (MatchException matchException) {
                    throw ng.cuK(matchException);
                }
            }
            rk2 = this.gANkz;
        }
        return rk2;
    }

    private static int cuP(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2C32;
        if (OceTR[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = vAtMC[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])sIxDy.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    sIxDy.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ng", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ng.OceTR[n3] = n4;
        }
        return OceTR[n3];
    }

    private static String cuM(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5C1D;
        if (hehSp[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])RIaWJ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    RIaWJ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ng", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = yRPAE[n3].getBytes("ISO-8859-1");
            ng.hehSp[n3] = ng.cuL(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return hehSp[n3];
    }

    private static String cuL(byte[] byArray) {
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

    public int cuB() {
        return this.UgHqn;
    }

    public boolean cuC() {
        return this.GkUnW;
    }

    public String cuA() {
        return this.AhZpO;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ng.class, "cuN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ng.class, "cuQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

