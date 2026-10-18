/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.common.collect.Lists
 *  com.google.common.primitives.Shorts
 *  com.google.common.primitives.SignedBytes
 *  it.unimi.dsi.fastutil.ints.Int2ObjectMap
 *  it.unimi.dsi.fastutil.ints.Int2ObjectOpenHashMap
 *  mixin.accessors.MultiPlayerGameModeAccessor
 *  net.minecraft.class_10936$class_10937
 *  net.minecraft.class_10938
 *  net.minecraft.class_1268
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_1661
 *  net.minecraft.class_1703
 *  net.minecraft.class_1713
 *  net.minecraft.class_1735
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_2371
 *  net.minecraft.class_2596
 *  net.minecraft.class_2813
 *  net.minecraft.class_310
 *  net.minecraft.class_3489
 *  net.minecraft.class_636
 *  net.minecraft.class_746
 *  net.minecraft.class_8051
 *  net.minecraft.class_9304
 *  net.minecraft.class_9334
 */
package sixtwo;

import com.google.common.collect.Lists;
import com.google.common.primitives.Shorts;
import com.google.common.primitives.SignedBytes;
import it.unimi.dsi.fastutil.ints.Int2ObjectMap;
import it.unimi.dsi.fastutil.ints.Int2ObjectOpenHashMap;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.MultiPlayerGameModeAccessor;
import net.minecraft.class_10936;
import net.minecraft.class_10938;
import net.minecraft.class_1268;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_1661;
import net.minecraft.class_1703;
import net.minecraft.class_1713;
import net.minecraft.class_1735;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_2371;
import net.minecraft.class_2596;
import net.minecraft.class_2813;
import net.minecraft.class_310;
import net.minecraft.class_3489;
import net.minecraft.class_636;
import net.minecraft.class_746;
import net.minecraft.class_8051;
import net.minecraft.class_9304;
import net.minecraft.class_9334;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.iX;
import sixtwo.jc;
import sixtwo.oG;
import sixtwo.oH;
import sixtwo.oI;
import sixtwo.oJ;
import sixtwo.oK;
import sixtwo.oP;
import sixtwo.oT;
import sixtwo.qN;
import sixtwo.rB;
import sixtwo.rD;

public class oR {
    private static int HMydo;
    private static final long KOfQd;
    private static final long[] gadYF;
    private static final Integer[] LnehL;
    private static final Map HQEQQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                oR.KOfQd = gb.aYR(5421706130014531987L, 3041131776011365962L, MethodHandles.lookup().lookupClass()).a(16244812251665L);
                oR.HQEQQ = new HashMap<K, V>(13);
                var0 = oR.KOfQd ^ 114397122598377L;
                oR.cKs(0);
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[7];
                var5_4 = 0;
                var6_5 = "ur\u009b\u00f2\u00df\b?eH\u0096\u0080\u0085\u00ee[=\u00faa\u00e1vLy\u0099\u009aQ\u00cai\u000e[{\u009e\u00efp\u0094\u00c18\u0096\u00aaD5\u00d1";
                var7_6 = "ur\u009b\u00f2\u00df\b?eH\u0096\u0080\u0085\u00ee[=\u00faa\u00e1vLy\u0099\u009aQ\u00cai\u000e[{\u009e\u00efp\u0094\u00c18\u0096\u00aaD5\u00d1".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u00f6\u00e7\u00ff!\u00ed\u000e,\\D\u000b\u0088\u00f9Y\u00ec\u008e\u00dd";
                    var7_6 = "\u00f6\u00e7\u00ff!\u00ed\u000e,\\D\u000b\u0088\u00f9Y\u00ec\u008e\u00dd".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl53:
                // 1 sources

                ** continue;
            }
        }
        oR.gadYF = var8_3;
        oR.LnehL = new Integer[7];
    }

    public static oJ cJM(int n) {
        return new oJ(n);
    }

    public static oG cJR() {
        return new oG();
    }

    public static int cKu() {
        int n = oR.cKt();
        try {
            if (n == 0) {
                return 31;
            }
        }
        catch (MatchException matchException) {
            throw oR.cKv(matchException);
        }
        return 0;
    }

    public static boolean cJT() {
        boolean bl;
        block4: {
            block5: {
                long l = KOfQd ^ 0x6E0574BDBC58L;
                int n = oR.cKu();
                try {
                    try {
                        bl = rD.dlmvG.field_1724.method_31548().method_7376();
                        if (n == 0) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    bl = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    public static void cKc(int n) {
        long l = KOfQd ^ 0x5B5569F2A0BAL;
        try {
            if (rD.dlmvG.method_1562() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw oR.cKv(matchException);
        }
        int n2 = oR.cJU(n);
        rD.dlmvG.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n2, (int)oR.cKy("q", (int)2855, (long)(0x4757651B4B150E70L ^ l)), class_1713.field_7791, (class_1657)rD.dlmvG.field_1724);
    }

    public static boolean cKf(oK oK2, int n) {
        oJ oJ2 = oR.cJM(n);
        oR.cJW(oK2, oJ2);
        return true;
    }

    public static void cJY(int n, int n2) {
        oR.cJZ(n, n2, false);
    }

    public static int cKt() {
        return HMydo;
    }

    public static void cKd(int n, int n2) {
        class_310 class_3102;
        block4: {
            block5: {
                long l = KOfQd ^ 0x3B072321D15AL;
                int n3 = oR.cKt();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (n3 != 0) break block4;
                        if (class_3102.method_1562() != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            class_3102 = rD.dlmvG;
        }
        class_3102.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, n2, class_1713.field_7791, (class_1657)rD.dlmvG.field_1724);
    }

    public static oJ cJQ() {
        return oR.cJM(0);
    }

    public static oJ cJP() {
        return oR.cJM(1);
    }

    private static MatchException cKv(MatchException matchException) {
        return matchException;
    }

    public static void cJW(oK oK2, oK oK3) {
        block11: {
            oK oK4;
            block10: {
                int n;
                block8: {
                    block9: {
                        long l = KOfQd ^ 0x6981D775A22EL;
                        n = oR.cKu();
                        try {
                            try {
                                if (n == 0) break block8;
                                if (rD.dlmvG.method_1562() != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    oK2.cIY();
                    oK3.cIY();
                }
                try {
                    try {
                        oK4 = oK3;
                        if (n == 0) break block10;
                        if (oK4.cIT()) break block11;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    oK4 = oK2;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            oK4.cIY();
        }
    }

    public static void cKa(int n, int n2) {
        class_310 class_3102;
        block4: {
            block5: {
                long l = KOfQd ^ 0x25803931CDFFL;
                int n3 = oR.cKu();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (n3 == 0) break block4;
                        if (class_3102.method_1562() != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            rD.dlmvG.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, 1, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
            class_3102 = rD.dlmvG;
        }
        class_3102.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n2, 0, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
    }

    public static boolean cKe(oK oK2, int n) {
        oI oI2 = oR.cJK(n);
        oR.cJW(oK2, oI2);
        return true;
    }

    private static CallSite cKy(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/oR" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static oJ cJO() {
        return oR.cJM(2);
    }

    public static void cKh(class_1703 class_17032, class_1735 class_17352) {
        class_1799 class_17992;
        Iterator iterator;
        block9: {
            long l = KOfQd ^ 0xF3D2B88E270L;
            class_2371 class_23712 = class_17032.field_7761;
            int n = class_23712.size();
            ArrayList arrayList = Lists.newArrayListWithCapacity((int)n);
            iterator = class_23712.iterator();
            int n2 = oR.cKt();
            while (iterator.hasNext()) {
                class_1735 class_17353 = (class_1735)iterator.next();
                arrayList.add(class_17353.method_7677().method_7972());
                if (n2 == 0) continue;
                iS.bwK("kTf95b");
                break;
            }
            iterator = new Int2ObjectOpenHashMap();
            int n3 = 0;
            while (n3 < n) {
                block8: {
                    block10: {
                        class_1799 class_17993 = (class_1799)arrayList.get(n3);
                        class_1799 class_17994 = ((class_1735)class_23712.get(n3)).method_7677();
                        try {
                            try {
                                try {
                                    if (n2 != 0) break block8;
                                    class_17992 = class_17993;
                                    if (n2 != 0) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (class_1799.method_7973((class_1799)class_17992, (class_1799)class_17994)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            iterator.put(n3, class_10938.method_68853((class_1799)class_17994, (class_10936.class_10937)rD.dlmvG.method_1562().method_68823()));
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    ++n3;
                }
                if (n2 == 0) continue;
            }
            class_17992 = class_17032.method_34255();
        }
        class_10938 class_109382 = class_10938.method_68853((class_1799)class_17992, (class_10936.class_10937)rD.dlmvG.method_1562().method_68823());
        rD.dlmvG.method_1562().method_52787((class_2596)new class_2813(class_17032.field_7763, class_17032.method_37421(), Shorts.checkedCast((long)class_17352.field_7874), SignedBytes.checkedCast((long)0L), class_1713.field_7790, (Int2ObjectMap)iterator, class_109382));
    }

    public static oH cJL(int n) {
        return new oH(n);
    }

    public static void cKb(int n, int n2) {
        class_310 class_3102;
        block4: {
            block5: {
                long l = KOfQd ^ 0x1E3698ADFF74L;
                int n3 = oR.cKu();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (n3 == 0) break block4;
                        if (class_3102.method_1562() != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            rD.dlmvG.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, 0, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
            rD.dlmvG.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n2, 1, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
            class_3102 = rD.dlmvG;
        }
        class_3102.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, 0, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
    }

    public static void cKg(oK oK2) {
        oG oG2 = oR.cJR();
        oR.cJW(oK2, oG2);
    }

    public static boolean cKj(class_1268 class_12682) {
        return jc.bzl(rD.dlmvG.field_1724.method_5998(class_12682));
    }

    public static void cJX(int n) {
        class_310 class_3102;
        block4: {
            block5: {
                long l = KOfQd ^ 0x40064FFE27FCL;
                int n2 = oR.cKu();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (n2 == 0) break block4;
                        if (class_3102.method_1562() != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            class_3102 = rD.dlmvG;
        }
        class_3102.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, 0, class_1713.field_7794, (class_1657)rD.dlmvG.field_1724);
    }

    public static boolean cJV(class_1309 class_13092) {
        boolean bl;
        block10: {
            block12: {
                block11: {
                    long l = KOfQd ^ 0x40D17E3AE5B6L;
                    class_1799 class_17992 = class_13092.method_6047();
                    int n = oR.cKu();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        bl = class_17992.method_31573(class_3489.field_42611);
                                        if (n == 0) break block10;
                                        if (bl) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                    bl = jc.bzl(class_17992);
                                    if (n == 0) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            bl = class_17992.method_31574(class_1802.field_49814);
                            if (n == 0) break block10;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        if (!bl) break block12;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                bl = true;
                break block10;
            }
            bl = false;
        }
        return bl;
    }

    public static void cJZ(int n, int n2, boolean bl) {
        block11: {
            class_746 class_7462;
            class_1713 class_17132;
            int n3;
            int n4;
            int n5;
            class_636 class_6362;
            block10: {
                class_310 class_3102;
                int n6;
                block8: {
                    block9: {
                        long l = KOfQd ^ 0x43941907DBCL;
                        n6 = oR.cKt();
                        try {
                            try {
                                class_3102 = rD.dlmvG;
                                if (n6 != 0) break block8;
                                if (class_3102.method_1562() != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    rD.dlmvG.field_1761.method_2906(rD.dlmvG.field_1724.field_7512.field_7763, n, 0, class_1713.field_7790, (class_1657)rD.dlmvG.field_1724);
                    class_3102 = rD.dlmvG;
                }
                try {
                    try {
                        class_6362 = class_3102.field_1761;
                        n5 = rD.dlmvG.field_1724.field_7512.field_7763;
                        n4 = n2;
                        n3 = 0;
                        class_17132 = class_1713.field_7790;
                        class_7462 = rD.dlmvG.field_1724;
                        if (n6 != 0) break block10;
                        class_6362.method_2906(n5, n4, n3, class_17132, (class_1657)class_7462);
                        if (!bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    class_6362 = rD.dlmvG.field_1761;
                    n5 = rD.dlmvG.field_1724.field_7512.field_7763;
                    n4 = n;
                    n3 = 0;
                    class_17132 = class_1713.field_7790;
                    class_7462 = rD.dlmvG.field_1724;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            class_6362.method_2906(n5, n4, n3, class_17132, (class_1657)class_7462);
        }
    }

    public static oI cJK(int n) {
        return new oI(n);
    }

    public static int cJU(int n) {
        int n2;
        block6: {
            block5: {
                Object object;
                int n3;
                block4: {
                    long l = KOfQd ^ 0x5BDEFF17180L;
                    int n4 = oR.cKu();
                    try {
                        try {
                            n3 = n;
                            object = class_1661.method_7368();
                            if (n4 == 0) break block4;
                            if (n3 >= object) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        n3 = n;
                        object = oR.cKy("q", (int)27928, (long)(0x60089CAAC2E93973L ^ l));
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                n2 = n3 + object;
                break block6;
            }
            n2 = n;
        }
        return n2;
    }

    public static oJ cJN() {
        return oR.cJM(3);
    }

    public static Optional<class_1268> cKi(class_1792 class_17922) {
        long l = KOfQd ^ 0x33F03A40137AL;
        class_1268[] class_1268Array = class_1268.values();
        int n = class_1268Array.length;
        int n2 = 0;
        int n3 = oR.cKt();
        while (n2 < n) {
            block5: {
                block6: {
                    class_1268 class_12682 = class_1268Array[n2];
                    try {
                        try {
                            if (n3 != 0) break block5;
                            if (!rD.dlmvG.field_1724.method_5998(class_12682).method_31574(class_17922)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        return Optional.of(class_12682);
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                ++n2;
            }
            if (n3 == 0) continue;
        }
        return Optional.empty();
    }

    public static void cJS(int n) {
        class_1661 class_16612;
        block14: {
            block15: {
                Object object;
                int n2;
                block12: {
                    int n3;
                    block13: {
                        block11: {
                            long l;
                            block10: {
                                l = KOfQd ^ 0x20AA8BA32323L;
                                n3 = oR.cKu();
                                try {
                                    n2 = n;
                                    if (n3 == 0) break block10;
                                    if (n2 < 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                n2 = n;
                            }
                            try {
                                object = oR.cKy("q", (int)28195, (long)(0x3038C285A787E8EEL ^ l));
                                if (n3 == 0) break block12;
                                if (n2 <= object) break block13;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                        }
                        return;
                    }
                    try {
                        class_16612 = rD.dlmvG.field_1724.method_31548();
                        if (n3 == 0) break block14;
                        n2 = class_16612.method_67532();
                        object = n;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                try {
                    try {
                        if (n2 != object || rD.dlZ().dbs() != n) break block15;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            class_16612 = rD.dlmvG.field_1724.method_31548();
        }
        class_16612.method_61496(n);
        ((MultiPlayerGameModeAccessor)rD.dlmvG.field_1761).callEnsureHasSentCarriedItem();
    }

    public static LinkedList<Integer> cKm(class_8051 class_80512) {
        long l = KOfQd ^ 0x38493FDF3469L;
        return oR.cKn(class_80512, (int)oR.cKy("q", (int)24534, (long)(0x66218F1171B6CE53L ^ l)), (int)oR.cKy("q", (int)30501, (long)(0x42EFB2C742C066A5L ^ l)));
    }

    public static int cKl(class_8051 class_80512, int n, int n2) {
        int n3;
        block23: {
            long l = KOfQd ^ 0x564B9235DB07L;
            class_1661 class_16612 = rD.dlmvG.field_1724.method_31548();
            int n4 = -1;
            int n5 = oR.cKu();
            Object object = oR.cKy("q", (int)32528, (long)(0x7173C081422E81FDL ^ l));
            int n6 = n;
            while (n6 <= n2) {
                block31: {
                    block26: {
                        int n7;
                        block29: {
                            class_1799 class_17992;
                            block27: {
                                block24: {
                                    class_17992 = class_16612.method_5438(n6);
                                    try {
                                        block25: {
                                            try {
                                                try {
                                                    try {
                                                        n3 = class_17992.method_7960() ? 1 : 0;
                                                        if (n5 == 0) break block23;
                                                        if (n5 == 0) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oR.cKv(matchException);
                                                    }
                                                    if (n3 == 0) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                                if (n5 != 0) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                        }
                                        n7 = class_17992.method_57826(class_9334.field_54196);
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                }
                                try {
                                    block28: {
                                        try {
                                            try {
                                                if (n5 == 0) break block27;
                                                if (n7 != 0) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                            if (n5 != 0) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                    }
                                    n7 = jc.bza(class_17992, class_80512);
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                            }
                            try {
                                block30: {
                                    try {
                                        try {
                                            if (n5 == 0) break block29;
                                            if (n7 != 0) break block30;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                        if (n5 != 0) break block26;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                }
                                n7 = oR.cKo(class_17992, class_17992.method_58657());
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                        }
                        int n8 = n7;
                        try {
                            if (n5 == 0) break block31;
                            if (n8 <= object) break block26;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        object = n8;
                        n4 = n6;
                    }
                    ++n6;
                }
                if (n5 != 0) continue;
            }
            n3 = n4;
        }
        return n3;
    }

    public static void cKs(int n) {
        HMydo = n;
    }

    private static int cKw(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5FA8;
        if (LnehL[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = gadYF[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HQEQQ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HQEQQ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/oR", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            oR.LnehL[n2] = n3;
        }
        return LnehL[n2];
    }

    /*
     * Exception decompiling
     */
    private static int cKo(class_1799 var0, class_9304 var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [14[TRYBLOCK]], but top level block is 15[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public static rB cKp(gg gg2) {
        block31: {
            block45: {
                qN qN2;
                block44: {
                    boolean bl;
                    block42: {
                        int n;
                        block43: {
                            oJ oJ2;
                            oJ oJ3;
                            block38: {
                                block39: {
                                    rB rB2;
                                    block41: {
                                        block40: {
                                            block34: {
                                                block35: {
                                                    block37: {
                                                        rB rB3;
                                                        boolean bl2;
                                                        block36: {
                                                            oJ oJ4;
                                                            block32: {
                                                                block33: {
                                                                    oK oK2;
                                                                    block30: {
                                                                        long l = KOfQd ^ 0x3F80A86CD328L;
                                                                        oJ3 = oR.cJO();
                                                                        n = oR.cKt();
                                                                        try {
                                                                            try {
                                                                                oK2 = oJ3;
                                                                                if (n != 0) break block30;
                                                                                if (!oK2.cIU(class_1802.field_8833)) break block31;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw oR.cKv(matchException);
                                                                            }
                                                                            oK2 = oP.cJm().cJF(oP.cJs()).cJF(oP.cJo()).cJv(jc::bzb);
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw oR.cKv(matchException);
                                                                        }
                                                                    }
                                                                    oJ2 = oK2;
                                                                    try {
                                                                        try {
                                                                            oJ4 = oJ2;
                                                                            if (n != 0) break block32;
                                                                            if (oJ4 != null) break block33;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw oR.cKv(matchException);
                                                                        }
                                                                        return rB.TfMBm;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw oR.cKv(matchException);
                                                                    }
                                                                }
                                                                oJ4 = oJ2;
                                                            }
                                                            try {
                                                                bl = oJ4 instanceof oI;
                                                                if (n != 0) break block34;
                                                                if (!bl) break block35;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                            oI oI2 = (oI)((Object)oJ2);
                                                            try {
                                                                try {
                                                                    bl2 = rD.dlZ().dbj(oI2, false, gg2);
                                                                    if (n != 0) break block36;
                                                                    if (!bl2) break block37;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw oR.cKv(matchException);
                                                                }
                                                                bl2 = rD.dlW().ddp(oT.UgZrs);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                        }
                                                        try {
                                                            rB3 = bl2 ? rB.ahPNi : rB.TfMBm;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oR.cKv(matchException);
                                                        }
                                                        rB rB4 = rB3;
                                                        return rB4;
                                                    }
                                                    return rB.TfMBm;
                                                }
                                                bl = oJ2 instanceof oG;
                                            }
                                            try {
                                                try {
                                                    try {
                                                        if (n != 0) break block38;
                                                        if (!bl) break block39;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oR.cKv(matchException);
                                                    }
                                                    if (!rD.dlW().ddp(oT.DpyXs)) break block40;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                                rB2 = rB.ahPNi;
                                                break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                        }
                                        rB2 = rB.TfMBm;
                                    }
                                    rB rB5 = rB2;
                                    return rB5;
                                }
                                bl = iX.bxC();
                            }
                            try {
                                try {
                                    if (n != 0) break block42;
                                    if (bl) break block43;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                oR.cJW(oJ2, oJ3);
                                rD.dma().dcw(gg2);
                                return rB.ahPNi;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                        }
                        try {
                            qN2 = rD.dma();
                            if (n != 0) break block44;
                            bl = qN2.dcy();
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    if (bl) break block45;
                    qN2 = rD.dma();
                }
                qN2.dcv(gg2);
            }
            return rB.HbZxW;
        }
        return rB.iSmge;
    }

    public static int cKk(class_8051 class_80512) {
        long l = KOfQd ^ 0x1B313E83B35FL;
        return oR.cKl(class_80512, (int)oR.cKy("q", (int)29454, (long)(0x9209DFB669465B9L ^ l)), (int)oR.cKy("q", (int)27928, (long)(0x60088226139BFBACL ^ l)));
    }

    public static rB cKq(gg gg2) {
        block28: {
            qN qN2;
            block39: {
                boolean bl;
                oJ oJ2;
                oJ oJ3;
                block35: {
                    int n;
                    block36: {
                        rB rB2;
                        block38: {
                            block37: {
                                block31: {
                                    block32: {
                                        block34: {
                                            rB rB3;
                                            boolean bl2;
                                            block33: {
                                                oJ oJ4;
                                                block29: {
                                                    block30: {
                                                        oK oK2;
                                                        block27: {
                                                            long l = KOfQd ^ 0x21E064160F64L;
                                                            oJ3 = oR.cJO();
                                                            n = oR.cKu();
                                                            try {
                                                                try {
                                                                    oK2 = oJ3;
                                                                    if (n == 0) break block27;
                                                                    if (oK2.cIU(class_1802.field_8833)) break block28;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw oR.cKv(matchException);
                                                                }
                                                                oK2 = oP.cJm().cJF(oP.cJs()).cJF(oP.cJo()).cJu(class_1802.field_8833);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                        }
                                                        oJ2 = oK2;
                                                        try {
                                                            try {
                                                                oJ4 = oJ2;
                                                                if (n == 0) break block29;
                                                                if (oJ4 != null) break block30;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                            return rB.TfMBm;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oR.cKv(matchException);
                                                        }
                                                    }
                                                    oJ4 = oJ2;
                                                }
                                                try {
                                                    bl = oJ4 instanceof oI;
                                                    if (n == 0) break block31;
                                                    if (!bl) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                                oI oI2 = (oI)((Object)oJ2);
                                                try {
                                                    try {
                                                        bl2 = rD.dlZ().dbj(oI2, false, gg2);
                                                        if (n == 0) break block33;
                                                        if (!bl2) break block34;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oR.cKv(matchException);
                                                    }
                                                    bl2 = rD.dlW().ddp(oT.UgZrs);
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                            }
                                            try {
                                                rB3 = bl2 ? rB.ahPNi : rB.TfMBm;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                            rB rB4 = rB3;
                                            return rB4;
                                        }
                                        return rB.TfMBm;
                                    }
                                    bl = oJ2 instanceof oG;
                                }
                                try {
                                    try {
                                        try {
                                            if (n == 0) break block35;
                                            if (!bl) break block36;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                        if (!rD.dlW().ddp(oT.DpyXs)) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                    rB2 = rB.ahPNi;
                                    break block38;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                            }
                            rB2 = rB.TfMBm;
                        }
                        rB rB5 = rB2;
                        return rB5;
                    }
                    try {
                        qN2 = rD.dma();
                        if (n == 0) break block39;
                        bl = qN2.dcy();
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                try {
                    if (!bl) {
                        rD.dma().dcv(gg2);
                        return rB.HbZxW;
                    }
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
                oR.cJW(oJ2, oJ3);
                qN2 = rD.dma();
            }
            qN2.dcw(gg2);
            return rB.ahPNi;
        }
        return rB.iSmge;
    }

    private static int cKx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = oR.cKw(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static LinkedList<Integer> cKn(class_8051 class_80512, int n3, int n4) {
        LinkedList<Integer> linkedList;
        int n5;
        ArrayList<Integer> arrayList;
        block14: {
            long l = KOfQd ^ 0x1D09A375F638L;
            class_1661 class_16612 = rD.dlmvG.field_1724.method_31548();
            arrayList = new ArrayList<Integer>();
            n5 = oR.cKu();
            int n6 = n3;
            while (n6 <= n4) {
                block15: {
                    block16: {
                        class_1799 class_17992 = class_16612.method_5438(n6);
                        try {
                            boolean bl;
                            try {
                                try {
                                    try {
                                        try {
                                            if (n5 == 0) break block14;
                                            if (n5 == 0) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                        if (class_17992.method_7960()) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                    bl = jc.bza(class_17992, class_80512);
                                    if (n5 == 0) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (!bl) break block16;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            bl = arrayList.add(n6);
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    ++n6;
                }
                if (n5 != 0) continue;
            }
            arrayList.sort((n, n2) -> {
                class_1799 class_17992 = class_16612.method_5438(n.intValue());
                class_1799 class_17993 = class_16612.method_5438(n2.intValue());
                int n3 = oR.cKo(class_17992, class_17992.method_58657());
                int n4 = oR.cKo(class_17993, class_17993.method_58657());
                return Integer.compare(n4, n3);
            });
        }
        try {
            linkedList = new LinkedList<Integer>(arrayList);
            if (iS.bwL() == null) {
                oR.cKs(++n5);
            }
        }
        catch (MatchException matchException) {
            throw oR.cKv(matchException);
        }
        return linkedList;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(oR.class, "cKx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
