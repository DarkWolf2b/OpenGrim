/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 *  net.minecraft.class_1799
 */
package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.time.LocalDate;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;
import sixtwo.gb;
import sixtwo.iZ;
import sixtwo.nb;
import sixtwo.nf;

public class nd
implements nb {
    private String piqGr;
    private boolean AMdan;
    private int zjfHh;
    private static final long JkvGk;
    private static final String[] DSrxK;
    private static final String[] RyUjX;
    private static final Map aCgyF;
    private static final long[] YjDPi;
    private static final Integer[] tGArl;
    private static final Map BKNKz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        nd.JkvGk = gb.aYR(7144442387384985690L, -4164018036204239398L, MethodHandles.lookup().lookupClass()).a(203251727708464L);
                        nd.aCgyF = new HashMap<K, V>(13);
                        var11 = nd.JkvGk ^ 120380323727684L;
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
                        var17_5 = ",M-\u00b1\u00bc\u00de\u00cfsT\u00e2\t\u00fb]r3\u00ef-\u00df\u00fb/Y\u00e4\u00b39\u0088\u0012\u00c4\u0086Rm\u00c2- \u00a3\u000e\u00c6v\u00fcUn\u00be\u0011\t\u0003p't\u00c9h\u00134\u0085m\u00cePh<\u0016\u00fb!\u001fA3\u00de\u00c7\u0018O\u00c21\u008c\u00e0\u00c0\u00ef\u00b7\u001c\u00c5:\u0090\u0095SA\u00bcK\u0006\u00d4\u009bi\u008d\u00100\u0010xmU\u0085}+=^\u00f4\u00e5\u00c58Q\u00d8\u00c69\u0010\u0010_\b}\u000f\u00fa\u00db\u00bf\u00f9UJyD\u00af2\u0012\u00180K\u00e8\u000f\u00d6\u0015w\u00a4WI\u0094\u0094\u0001?\f\u0012sN\u00a9\u00a9\\m\u007f5 \u00d9\u001f\tH\u0085!\u00ac4r[$P\u00f1@\u0092X\u00c65\u00aa\u0097z_j#_\u0099sM\u00d8\u00db$I";
                        var19_6 = ",M-\u00b1\u00bc\u00de\u00cfsT\u00e2\t\u00fb]r3\u00ef-\u00df\u00fb/Y\u00e4\u00b39\u0088\u0012\u00c4\u0086Rm\u00c2- \u00a3\u000e\u00c6v\u00fcUn\u00be\u0011\t\u0003p't\u00c9h\u00134\u0085m\u00cePh<\u0016\u00fb!\u001fA3\u00de\u00c7\u0018O\u00c21\u008c\u00e0\u00c0\u00ef\u00b7\u001c\u00c5:\u0090\u0095SA\u00bcK\u0006\u00d4\u009bi\u008d\u00100\u0010xmU\u0085}+=^\u00f4\u00e5\u00c58Q\u00d8\u00c69\u0010\u0010_\b}\u000f\u00fa\u00db\u00bf\u00f9UJyD\u00af2\u0012\u00180K\u00e8\u000f\u00d6\u0015w\u00a4WI\u0094\u0094\u0001?\f\u0012sN\u00a9\u00a9\\m\u007f5 \u00d9\u001f\tH\u0085!\u00ac4r[$P\u00f1@\u0092X\u00c65\u00aa\u0097z_j#_\u0099sM\u00d8\u00db$I".length();
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
                            var20_3[var18_4++] = nd.cth(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "X\u00fa\r\u001bC{Mn\u00dc\u00cf\u0091\u00d5kg\u0093\u0014G8\u00bd\u0090\u00cf\u00d7\u00ca% %\u00f3\u00c5\u00e9hr\u00aa\u00f6'm \u001fX\u00c3;\u00f0\u00be\u0085w\u001e\u00a1$E\u00cf;\u0099\n\u00b4\u00a9\u00beg4";
                            var19_6 = "X\u00fa\r\u001bC{Mn\u00dc\u00cf\u0091\u00d5kg\u0093\u0014G8\u00bd\u0090\u00cf\u00d7\u00ca% %\u00f3\u00c5\u00e9hr\u00aa\u00f6'm \u001fX\u00c3;\u00f0\u00be\u0085w\u001e\u00a1$E\u00cf;\u0099\n\u00b4\u00a9\u00beg4".length();
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
                            var20_3[var18_4++] = nd.cth(var21_9).intern();
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
                nd.DSrxK = var20_3;
                nd.RyUjX = new String[9];
                nd.BKNKz = new HashMap<K, V>(13);
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
                var6_12 = new long[5];
                var3_13 = 0;
                var4_14 = "\u00a4\u00be\u00d8\u00af\u0010\u0006_\u00a6|8c\u00d0\u0003\u00187\u0019z3T\u0013)\u00fdm\u0089";
                var5_15 = "\u00a4\u00be\u00d8\u00af\u0010\u0006_\u00a6|8c\u00d0\u0003\u00187\u0019z3T\u0013)\u00fdm\u0089".length();
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
                    var4_14 = "v\u0016\u00e4\u00df\u00e3F\u00eb_p\u00c0\u009b\u0087R\u0082\u0097_";
                    var5_15 = "v\u0016\u00e4\u00df\u00e3F\u00eb_p\u00c0\u009b\u0087R\u0082\u0097_".length();
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
        nd.YjDPi = var6_12;
        nd.tGArl = new Integer[5];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        String string;
        String string2;
        int n;
        block40: {
            String string3;
            block41: {
                nd nd2;
                nd nd3;
                block39: {
                    int n2;
                    int n3;
                    block37: {
                        block38: {
                            block35: {
                                block36: {
                                    Object object2;
                                    block33: {
                                        block34: {
                                            block31: {
                                                block32: {
                                                    long l = JkvGk ^ 0x3F26FE7B8D10L;
                                                    n = nf.cup();
                                                    try {
                                                        try {
                                                            object2 = object;
                                                            if (n != 0) break block31;
                                                            if (object2 != this) break block32;
                                                            return true;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw nd.ctg(matchException);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw nd.ctg(matchException);
                                                    }
                                                }
                                                object2 = object;
                                            }
                                            try {
                                                try {
                                                    if (n != 0) break block33;
                                                    if (object2 instanceof nd) break block34;
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nd.ctg(matchException);
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw nd.ctg(matchException);
                                            }
                                        }
                                        object2 = object;
                                    }
                                    nd3 = (nd)object2;
                                    try {
                                        try {
                                            n3 = nd3.ctf(this);
                                            if (n != 0) break block35;
                                            if (n3 != 0) break block36;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw nd.ctg(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw nd.ctg(matchException);
                                    }
                                }
                                n3 = this.cta();
                            }
                            try {
                                try {
                                    n2 = nd3.cta();
                                    if (n != 0) break block37;
                                    if (n3 == n2) break block38;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw nd.ctg(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw nd.ctg(matchException);
                            }
                        }
                        try {
                            nd2 = this;
                            if (n != 0) break block39;
                            int n2 = nd2.ctb();
                            n2 = nd3.ctb();
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                    }
                    try {
                        if (n3 != n2) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                    nd2 = this;
                }
                string3 = nd2.csZ();
                string2 = nd3.csZ();
                try {
                    try {
                        try {
                            string = string3;
                            if (n != 0) break block40;
                            if (string != null) break block41;
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                        if (string2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nd.ctg(matchException);
                }
            }
            string = string3;
        }
        try {
            try {
                boolean bl = string.equals(string2);
                if (n != 0) return bl;
                if (bl) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw nd.ctg(matchException);
            }
        }
        catch (MatchException matchException) {
            throw nd.ctg(matchException);
        }
    }

    public String toString() {
        long l = JkvGk ^ 0x4F386D950205L;
        int n = this.ctb();
        boolean bl = this.cta();
        String string = this.csZ();
        return (String)((Object)nd.ctk("f", (int)15518, (long)(0x31BB3D40CB4B4F1FL ^ l))) + string + (String)((Object)nd.ctk("f", (int)9889, (long)(0x28B77307630C5523L ^ l))) + bl + (String)((Object)nd.ctk("f", (int)7347, (long)(0x414254A6A3FCEF3FL ^ l))) + n + ")";
    }

    public int hashCode() {
        Object object;
        int n;
        int n2;
        block10: {
            String string;
            block8: {
                String string2;
                block9: {
                    Object object2;
                    int n3;
                    int n4;
                    long l;
                    block6: {
                        block7: {
                            l = JkvGk ^ 0x2AF0017F8291L;
                            CallSite callSite = nd.ctn("w", (int)23215, (long)(0x13B12557F814F109L ^ l));
                            n2 = 1;
                            n4 = nf.cuo();
                            try {
                                n3 = n2 * nd.ctn("w", (int)19627, (long)(0x3399BA403A53670AL ^ l));
                                object2 = this.cta();
                                if (n4 == 0) break block6;
                                if (object2 == 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw nd.ctg(matchException);
                            }
                            object2 = nd.ctn("w", (int)10402, (long)(0x5044D6B371FB0307L ^ l));
                            break block6;
                        }
                        object2 = nd.ctn("w", (int)7584, (long)(0x10FB8B353C01B607L ^ l));
                    }
                    n2 = n3 + object2;
                    n2 = n2 * nd.ctn("w", (int)19627, (long)(0x3399BA403A53670AL ^ l)) + this.ctb();
                    string2 = this.csZ();
                    try {
                        try {
                            n = n2 * nd.ctn("w", (int)19627, (long)(0x3399BA403A53670AL ^ l));
                            string = string2;
                            if (n4 == 0) break block8;
                            if (string != null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                        object = nd.ctn("w", (int)13053, (long)(0x1643972910531959L ^ l));
                        break block10;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                }
                string = string2;
            }
            object = string.hashCode();
        }
        n2 = n + object;
        return n2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public boolean matches(class_1799 class_17992) {
        boolean bl;
        int n;
        block32: {
            List<String> list;
            block33: {
                block29: {
                    nd nd2;
                    block31: {
                        block30: {
                            class_1799 class_17993;
                            block27: {
                                block28: {
                                    block26: {
                                        long l = JkvGk ^ 0x201B8DD81F23L;
                                        n = nf.cuo();
                                        try {
                                            class_17993 = class_17992;
                                            if (n == 0) break block26;
                                            if (class_17993 == null) return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw nd.ctg(matchException);
                                        }
                                        class_17993 = class_17992;
                                    }
                                    try {
                                        try {
                                            if (n == 0) break block27;
                                            if (!class_17993.method_7960()) break block28;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw nd.ctg(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw nd.ctg(matchException);
                                    }
                                }
                                class_17993 = class_17992;
                            }
                            list = iZ.byp(class_17993);
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    bl = list.isEmpty();
                                                    if (n == 0) break block29;
                                                    if (!bl) break block30;
                                                }
                                                catch (MatchException matchException) {
                                                    throw nd.ctg(matchException);
                                                }
                                                nd2 = this;
                                                if (n == 0) break block31;
                                            }
                                            catch (MatchException matchException) {
                                                throw nd.ctg(matchException);
                                            }
                                            if (nd2.piqGr == null) break block30;
                                        }
                                        catch (MatchException matchException) {
                                            throw nd.ctg(matchException);
                                        }
                                        bl = this.piqGr.isBlank();
                                        if (n == 0) break block29;
                                    }
                                    catch (MatchException matchException) {
                                        throw nd.ctg(matchException);
                                    }
                                    if (!bl) break block30;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw nd.ctg(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw nd.ctg(matchException);
                            }
                        }
                        nd2 = this;
                    }
                    bl = nd2.csX(list);
                }
                try {
                    try {
                        if (n == 0) break block32;
                        if (bl) break block33;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw nd.ctg(matchException);
                }
            }
            bl = this.csY(list);
        }
        try {
            try {
                if (n == 0) return bl;
                if (bl) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw nd.ctg(matchException);
            }
        }
        catch (MatchException matchException) {
            throw nd.ctg(matchException);
        }
    }

    private static int ctl(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7D37;
        if (tGArl[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = YjDPi[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])BKNKz.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BKNKz.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nd", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            nd.tGArl[n2] = n3;
        }
        return tGArl[n2];
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l = JkvGk ^ 0x6E072CDEB920L;
        this.piqGr = this.readString(jsonObject, (String)((Object)nd.ctk("f", (int)348, (long)(0x54C4F404253CC9F9L ^ l))));
        this.AMdan = this.readBoolean(jsonObject, (String)((Object)nd.ctk("f", (int)1215, (long)(0xA0AE8EFDE2DCC1FL ^ l))), false);
        this.zjfHh = this.readInt(jsonObject, (String)((Object)nd.ctk("f", (int)2571, (long)(0x5F0104B1AABFC2AAL ^ l))));
    }

    @Override
    public JsonObject toJson() {
        JsonObject jsonObject;
        block4: {
            long l;
            block5: {
                l = JkvGk ^ 0x700C689E47ABL;
                jsonObject = new JsonObject();
                int n = nf.cup();
                try {
                    try {
                        if (n != 0) break block4;
                        if (this.piqGr == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                    jsonObject.addProperty((String)((Object)nd.ctk("f", (int)23448, (long)(0x67CE4EDCDE5DEDB1L ^ l))), this.piqGr);
                }
                catch (MatchException matchException) {
                    throw nd.ctg(matchException);
                }
            }
            jsonObject.addProperty((String)((Object)nd.ctk("f", (int)15176, (long)(0x5FFD685217CC0D60L ^ l))), Boolean.valueOf(this.AMdan));
            jsonObject.addProperty((String)((Object)nd.ctk("f", (int)2370, (long)(0x111F03E2A619BF6FL ^ l))), (Number)this.zjfHh);
        }
        return jsonObject;
    }

    public boolean cta() {
        return this.AMdan;
    }

    public int ctb() {
        return this.zjfHh;
    }

    private static CallSite ctn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nd" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cti(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2582;
        if (RyUjX[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])aCgyF.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    aCgyF.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/nd", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = DSrxK[n2].getBytes("ISO-8859-1");
            nd.RyUjX[n2] = nd.cth(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return RyUjX[n2];
    }

    private static CallSite ctk(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/nd" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean csX(List<String> list) {
        String string;
        int n;
        block24: {
            nd nd2;
            block22: {
                block23: {
                    boolean bl;
                    block20: {
                        block21: {
                            String string2;
                            block19: {
                                long l = JkvGk ^ 0x1AEB214C2D73L;
                                n = nf.cuo();
                                try {
                                    try {
                                        string2 = this.piqGr;
                                        if (n == 0) break block19;
                                        if (string2 == null) return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw nd.ctg(matchException);
                                    }
                                    string2 = this.piqGr;
                                }
                                catch (MatchException matchException) {
                                    throw nd.ctg(matchException);
                                }
                            }
                            try {
                                try {
                                    bl = string2.isBlank();
                                    if (n == 0) break block20;
                                    if (!bl) break block21;
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw nd.ctg(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw nd.ctg(matchException);
                            }
                        }
                        try {
                            nd2 = this;
                            if (n == 0) break block22;
                            bl = nd2.AMdan;
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                    }
                    try {
                        if (!bl) break block23;
                        string = this.piqGr.toLowerCase();
                        break block24;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                }
                nd2 = this;
            }
            string = nd2.piqGr;
        }
        String string3 = string;
        Iterator<String> iterator = list.iterator();
        do {
            String string4;
            block26: {
                String string5;
                block25: {
                    if (!iterator.hasNext()) return false;
                    string5 = iterator.next();
                    try {
                        try {
                            boolean bl = this.AMdan;
                            if (n == 0) return bl;
                            if (!bl) break block25;
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                        string4 = string5.toLowerCase();
                        break block26;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                }
                string4 = string5;
            }
            String string6 = string4;
            try {
                boolean bl = string6.contains(string3);
                if (n == 0) return bl;
                if (!bl) continue;
                return true;
            }
            catch (MatchException matchException) {
                throw nd.ctg(matchException);
            }
        } while (n != 0);
        return false;
    }

    private boolean csY(List<String> list) {
        LocalDate localDate;
        LocalDate localDate2;
        block8: {
            block9: {
                int n;
                block7: {
                    boolean bl;
                    block6: {
                        long l = JkvGk ^ 0x7B84757B89BL;
                        n = nf.cuo();
                        try {
                            bl = this.zjfHh;
                            if (n == 0) break block6;
                            if (bl > false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw nd.ctg(matchException);
                        }
                        bl = true;
                    }
                    return bl;
                }
                localDate2 = iZ.byr(list);
                try {
                    try {
                        localDate = localDate2;
                        if (n == 0) break block8;
                        if (localDate != null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw nd.ctg(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw nd.ctg(matchException);
                }
            }
            localDate = LocalDate.now();
        }
        LocalDate localDate3 = localDate;
        return localDate3.plusDays(this.zjfHh).isBefore(localDate2);
    }

    public String csZ() {
        return this.piqGr;
    }

    private static Object ctj(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = nd.cti(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int ctm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = nd.ctl(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    protected boolean ctf(Object object) {
        return object instanceof nd;
    }

    private static String cth(byte[] byArray) {
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

    private static MatchException ctg(MatchException matchException) {
        return matchException;
    }

    public void ctd(boolean bl) {
        this.AMdan = bl;
    }

    public void ctc(String string) {
        this.piqGr = string;
    }

    public void cte(int n) {
        this.zjfHh = n;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(nd.class, "ctm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(nd.class, "ctj", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
