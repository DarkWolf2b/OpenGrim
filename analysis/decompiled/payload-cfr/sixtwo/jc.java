/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.CooldownInstanceAccessor
 *  mixin.accessors.ItemCooldownsAccessor
 *  net.minecraft.class_1011
 *  net.minecraft.class_10444
 *  net.minecraft.class_10590
 *  net.minecraft.class_11566
 *  net.minecraft.class_1268
 *  net.minecraft.class_1269
 *  net.minecraft.class_1282
 *  net.minecraft.class_1297
 *  net.minecraft.class_1304
 *  net.minecraft.class_1309
 *  net.minecraft.class_1322
 *  net.minecraft.class_1324
 *  net.minecraft.class_1657
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_1838
 *  net.minecraft.class_1887
 *  net.minecraft.class_1890
 *  net.minecraft.class_1893
 *  net.minecraft.class_1937
 *  net.minecraft.class_2246
 *  net.minecraft.class_2248
 *  net.minecraft.class_2561
 *  net.minecraft.class_2583
 *  net.minecraft.class_2960
 *  net.minecraft.class_3218
 *  net.minecraft.class_3489
 *  net.minecraft.class_5134
 *  net.minecraft.class_5321
 *  net.minecraft.class_5819
 *  net.minecraft.class_7923
 *  net.minecraft.class_8051
 *  net.minecraft.class_811
 *  net.minecraft.class_9278
 *  net.minecraft.class_9285
 *  net.minecraft.class_9334
 */
package sixtwo;

import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Field;
import java.security.Key;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.CooldownInstanceAccessor;
import mixin.accessors.ItemCooldownsAccessor;
import net.minecraft.class_1011;
import net.minecraft.class_10444;
import net.minecraft.class_10590;
import net.minecraft.class_11566;
import net.minecraft.class_1268;
import net.minecraft.class_1269;
import net.minecraft.class_1282;
import net.minecraft.class_1297;
import net.minecraft.class_1304;
import net.minecraft.class_1309;
import net.minecraft.class_1322;
import net.minecraft.class_1324;
import net.minecraft.class_1657;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_1838;
import net.minecraft.class_1887;
import net.minecraft.class_1890;
import net.minecraft.class_1893;
import net.minecraft.class_1937;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2561;
import net.minecraft.class_2583;
import net.minecraft.class_2960;
import net.minecraft.class_3218;
import net.minecraft.class_3489;
import net.minecraft.class_5134;
import net.minecraft.class_5321;
import net.minecraft.class_5819;
import net.minecraft.class_7923;
import net.minecraft.class_8051;
import net.minecraft.class_811;
import net.minecraft.class_9278;
import net.minecraft.class_9285;
import net.minecraft.class_9334;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.jh;
import sixtwo.jk;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.oI;
import sixtwo.oP;
import sixtwo.oR;
import sixtwo.qO;
import sixtwo.rD;

public class jc {
    public static final Set<class_1792> WnbNG;
    public static final Set<class_1792> GjreY;
    public static final Set<class_1792> FFgfM;
    private static final class_1792 vSOjt;
    private static final Map<String, class_1792> alGsc;
    private static final Map<String, mG> xxvZl;
    private static final Map<String, mG> IckfH;
    private static int jlfNZ;
    private static final long WedAj;
    private static final String[] UOSQi;
    private static final String[] GXVbC;
    private static final Map baifd;
    private static final long[] NCEKq;
    private static final Integer[] ZHAjc;
    private static final Map uhkkf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static boolean bzr(class_1799 class_17992) {
        boolean bl;
        block4: {
            block5: {
                long l = WedAj ^ 0x473B08F72EE9L;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        bl = jc.bzm(class_17992);
                        if (stringArray == null) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            bl = jh.bCg(class_17992, (class_5321<class_1887>)class_1893.field_63420);
        }
        return bl;
    }

    public static boolean bzd(class_1799 class_17992, Class<? extends class_1792> clazz) {
        return class_17992.method_7909().getClass().equals(clazz);
    }

    public static boolean bzt(class_1799 class_17992) {
        return jh.bCg(class_17992, (class_5321<class_1887>)class_1893.field_9121);
    }

    public static boolean bzb(class_1799 class_17992) {
        boolean bl;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l = WedAj ^ 0x5310756235E5L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            bl = jc.bza(class_17992, class_8051.field_41935);
                            if (stringArray == null) break block6;
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        bl = class_17992.method_31574(class_1802.field_8833);
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (bl) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                bl = true;
                break block8;
            }
            bl = false;
        }
        return bl;
    }

    public static int bze(class_1799 class_17992) {
        int n;
        block8: {
            block9: {
                Object object;
                block6: {
                    long l;
                    block7: {
                        l = WedAj ^ 0x67B7E8478A46L;
                        String[] stringArray = jf.bBe();
                        try {
                            try {
                                try {
                                    object = class_17992.method_7960();
                                    if (stringArray == null) break block6;
                                    if (object != 0) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                                n = class_17992.method_7963();
                                if (stringArray == null) break block8;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            if (n != 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    object = jc.bAd("q", (int)27274, (long)(0x4A1D673663258138L ^ l));
                }
                return object;
            }
            n = class_17992.method_7936() - class_17992.method_7919();
        }
        int n2 = n;
        return (int)((double)n2 / (double)class_17992.method_7936() * 100.0);
    }

    private static CallSite bAa(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static float bzi(class_1799 class_17992) {
        float f = rD.dlmvG.method_61966().method_60637(true);
        return mZ.csc(rD.dlmvG.field_1724.method_7357().method_7905(class_17992, f) * 100.0f, 0);
    }

    public static List<class_1792> byY(Predicate<class_1792> predicate) {
        return WnbNG.stream().filter(predicate).toList();
    }

    public static List<class_1792> byZ(Predicate<class_1792> predicate) {
        return GjreY.stream().filter(predicate).toList();
    }

    private static Throwable bzW(Throwable throwable) {
        return throwable;
    }

    private static CallSite bAd(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static int bzh(class_1792 class_17922) {
        Object v;
        ItemCooldownsAccessor itemCooldownsAccessor;
        block4: {
            Object v2;
            block5: {
                long l = WedAj ^ 0x1606BEB4D43EL;
                itemCooldownsAccessor = (ItemCooldownsAccessor)rD.dlmvG.field_1724.method_7357();
                Map map = itemCooldownsAccessor.getCooldowns();
                v2 = map.get(class_7923.field_41178.method_10221((Object)class_17922));
                String[] stringArray = jf.bBe();
                try {
                    try {
                        v = v2;
                        if (stringArray == null) break block4;
                        if (v != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    return 0;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            v = v2;
        }
        CooldownInstanceAccessor cooldownInstanceAccessor = (CooldownInstanceAccessor)v;
        double d = (float)itemCooldownsAccessor.getTickCount() + rD.dlmvG.method_61966().method_60637(true);
        double d2 = (double)cooldownInstanceAccessor.getEndTime() - d;
        return (int)Math.max(0.0, Math.ceil(d2));
    }

    public static boolean bza(class_1799 class_17992, class_8051 class_80512) {
        boolean bl;
        long l = WedAj ^ 0x3711F805DA7L;
        class_8051 class_80513 = jc.bzc(class_17992);
        try {
            bl = class_80513 == class_80512;
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        return bl;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static float bzj(class_1799 class_17992) {
        double d;
        double d2;
        double d3;
        block16: {
            class_1324 class_13243;
            String[] stringArray;
            block15: {
                class_9285 class_92852;
                block14: {
                    class_1799 class_17993;
                    block13: {
                        long l = WedAj ^ 0x5816C446EB08L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                if (rD.dlmvG.field_1724 == null) return 0.0f;
                                class_17993 = class_17992;
                                if (stringArray == null) break block13;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            if (class_17993 == null) return 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        class_17993 = class_17992;
                    }
                    try {
                        if (class_17993.method_7960()) {
                            return 0.0f;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    class_13243 = new class_1324(class_5134.field_23723, class_13242 -> {});
                    class_13243.method_6192(rD.dlmvG.field_1724.method_45326(class_5134.field_23723));
                    class_9285 class_92853 = (class_9285)class_17992.method_58694(class_9334.field_49636);
                    try {
                        class_92852 = class_92853;
                        if (stringArray == null) break block14;
                        if (class_92852 == null) break block15;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    class_92852 = class_92853;
                }
                class_92852.method_57482(class_1304.field_6173, (class_68802, class_13222) -> {
                    long l = WedAj ^ 0x3B3D759D3DF7L;
                    try {
                        if (class_68802 == class_5134.field_23723) {
                            class_13243.method_55696(class_13222);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                });
            }
            d3 = class_13243.method_6194();
            try {
                try {
                    d2 = d3;
                    d = 0.0;
                    if (stringArray == null) return (float)(d2 / d);
                    if (!(d2 <= d)) break block16;
                    return Float.MAX_VALUE;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            catch (MatchException matchException) {
                throw jc.bzW(matchException);
            }
        }
        d2 = 20.0;
        d = d3;
        return (float)(d2 / d);
    }

    public static boolean bzk(class_1799 class_17992) {
        return class_17992.method_57353().method_57832(class_9334.field_50075);
    }

    public static boolean bzl(class_1799 class_17992) {
        return class_17992.method_31573(class_3489.field_42612);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static String bzf(class_1799 class_17992) {
        int n;
        long l;
        block12: {
            block13: {
                String[] stringArray;
                block11: {
                    l = WedAj ^ 0xE20184F2F76L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            n = class_17992.method_7960();
                            if (stringArray == null) break block11;
                            if (n != 0) return jc.bAa("o", (int)24893, (long)(0x1D0121355EED5684L ^ l));
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        n = class_17992.method_7963();
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    try {
                        if (stringArray == null) break block12;
                        if (n != 0) break block13;
                        return jc.bAa("o", (int)24893, (long)(0x1D0121355EED5684L ^ l));
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n = class_17992.method_7936();
        }
        int n2 = n;
        int n3 = class_17992.method_7919();
        try {
            if (n3 >= n2) {
                return jc.bAa("o", (int)20835, (long)(0x2A5D13158B6266D1L ^ l));
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        double d = 100.0 - (double)n3 / (double)n2 * 100.0;
        return String.format((String)((Object)jc.bAa("o", (int)1325, (long)(0x1ED446C2F0D3B29EL ^ l))), d);
    }

    public static boolean bzo(class_1799 class_17992) {
        int n;
        block6: {
            block5: {
                class_10590 class_105902;
                String[] stringArray;
                block4: {
                    long l = WedAj ^ 0x10E8AA7B1A21L;
                    class_10590 class_105903 = (class_10590)class_17992.method_58694(class_9334.field_55878);
                    stringArray = jf.bBe();
                    try {
                        class_105902 = class_105903;
                        if (stringArray == null) break block4;
                        if (class_105902 == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    class_105902 = class_105903;
                }
                try {
                    float f = class_105902.comp_3602() - 0.0f;
                    n = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
                    if (stringArray == null) break block6;
                    if (n <= 0) break block5;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                n = 1;
                break block6;
            }
            n = 0;
        }
        return n != 0;
    }

    public static double bzg(class_1792 class_17922) {
        Object v;
        ItemCooldownsAccessor itemCooldownsAccessor;
        block4: {
            Object v2;
            block5: {
                long l = WedAj ^ 0x2F733E18EAB9L;
                itemCooldownsAccessor = (ItemCooldownsAccessor)rD.dlmvG.field_1724.method_7357();
                Map map = itemCooldownsAccessor.getCooldowns();
                v2 = map.get(class_7923.field_41178.method_10221((Object)class_17922));
                String[] stringArray = jf.bBe();
                try {
                    try {
                        v = v2;
                        if (stringArray == null) break block4;
                        if (v != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    return 0.0;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            v = v2;
        }
        CooldownInstanceAccessor cooldownInstanceAccessor = (CooldownInstanceAccessor)v;
        int n = itemCooldownsAccessor.getTickCount();
        int n2 = cooldownInstanceAccessor.getEndTime();
        float f = rD.dlmvG.method_61966().method_60637(true);
        double d = (float)n2 - ((float)n + f);
        return mZ.csb(Math.max(0.0, d) * 50.0 / 1000.0, 1);
    }

    public static boolean bzn() {
        return jc.bzo(rD.dlmvG.field_1724.method_6047());
    }

    public static boolean bzm(class_1799 class_17992) {
        return class_17992.method_31573(class_3489.field_63257);
    }

    public static boolean bzp(class_1799 class_17992) {
        boolean bl;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l = WedAj ^ 0x156D6A90FEFDL;
                    stringArray = jf.bBe();
                    try {
                        try {
                            bl = class_17992.method_7919();
                            if (stringArray == null) break block6;
                            if (bl >= class_17992.method_7936() - 1) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        bl = class_17992.method_31574(class_1802.field_8833);
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (!bl) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                bl = true;
                break block8;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean bzq(class_1799 class_17992) {
        return jh.bCg(class_17992, (class_5321<class_1887>)class_1893.field_50159);
    }

    private static int bAb(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x46A7;
        if (ZHAjc[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = NCEKq[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uhkkf.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uhkkf.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jc", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jc.ZHAjc[n2] = n3;
        }
        return ZHAjc[n2];
    }

    public static float bzu(class_1799 class_17992, class_1309 class_13092) {
        class_1324 class_13243;
        block8: {
            class_9285 class_92852;
            block7: {
                String[] stringArray;
                block6: {
                    long l = WedAj ^ 0x4CF2A6C0034BL;
                    class_1324 class_13244 = class_13092.method_5996(class_5134.field_23721);
                    class_13243 = new class_1324(class_5134.field_23721, class_13242 -> {});
                    stringArray = jf.bBe();
                    class_13243.method_6192(class_13244.method_6201());
                    for (class_1322 class_13223 : class_13244.method_6195()) {
                        try {
                            class_13243.method_26835(class_13223);
                            if (stringArray != null) {
                                if (stringArray != null) continue;
                                break;
                            }
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    class_13243.method_6200(class_1792.field_8006);
                }
                class_9285 class_92853 = (class_9285)class_17992.method_58694(class_9334.field_49636);
                try {
                    class_92852 = class_92853;
                    if (stringArray == null) break block7;
                    if (class_92852 == null) break block8;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                class_92852 = class_92853;
            }
            class_92852.method_57482(class_1304.field_6173, (class_68802, class_13222) -> {
                long l = WedAj ^ 0x78A93D4D4339L;
                try {
                    if (class_68802 == class_5134.field_23721) {
                        class_13243.method_55696(class_13222);
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            });
        }
        return (float)class_13243.method_6194();
    }

    private static void bzH(StringBuilder stringBuilder, class_2583 class_25832) {
        int n;
        long l;
        block35: {
            block36: {
                String[] stringArray;
                block33: {
                    block34: {
                        block31: {
                            block32: {
                                block29: {
                                    block30: {
                                        block28: {
                                            class_2583 class_25833;
                                            block26: {
                                                block27: {
                                                    l = WedAj ^ 0x4EC643400DB0L;
                                                    stringArray = jf.bBe();
                                                    try {
                                                        try {
                                                            class_25833 = class_25832;
                                                            if (stringArray == null) break block26;
                                                            if (class_25833.method_10973() == null) break block27;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jc.bzW(matchException);
                                                        }
                                                        n = class_25832.method_10973().method_27716();
                                                        if (stringArray == null) break block28;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jc.bzW(matchException);
                                                    }
                                                    Character c = jk.bDx(n);
                                                    try {
                                                        if (c != null) {
                                                            stringBuilder.append((char)jc.bAd("q", (int)29286, (long)(0x1E507CC8DF729E2BL ^ l))).append(c);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jc.bzW(matchException);
                                                    }
                                                }
                                                class_25833 = class_25832;
                                            }
                                            n = class_25833.method_10984();
                                        }
                                        try {
                                            try {
                                                if (stringArray == null) break block29;
                                                if (n == 0) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw jc.bzW(matchException);
                                            }
                                            stringBuilder.append((String)((Object)jc.bAa("o", (int)16883, (long)(0x7DD5AAAB28AFD48AL ^ l))));
                                        }
                                        catch (MatchException matchException) {
                                            throw jc.bzW(matchException);
                                        }
                                    }
                                    n = class_25832.method_10966() ? 1 : 0;
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block31;
                                        if (n == 0) break block32;
                                    }
                                    catch (MatchException matchException) {
                                        throw jc.bzW(matchException);
                                    }
                                    stringBuilder.append((String)((Object)jc.bAa("o", (int)30876, (long)(0x1EF17EE49D7CEDEDL ^ l))));
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                            }
                            n = class_25832.method_10965() ? 1 : 0;
                        }
                        try {
                            try {
                                if (stringArray == null) break block33;
                                if (n == 0) break block34;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            stringBuilder.append((String)((Object)jc.bAa("o", (int)10733, (long)(0x491A415659993C9EL ^ l))));
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    n = class_25832.method_10986() ? 1 : 0;
                }
                try {
                    try {
                        if (stringArray == null) break block35;
                        if (n == 0) break block36;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    stringBuilder.append((String)((Object)jc.bAa("o", (int)25573, (long)(0x7C29E3D0E4937697L ^ l))));
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n = class_25832.method_10987() ? 1 : 0;
        }
        try {
            if (n != 0) {
                stringBuilder.append((String)((Object)jc.bAa("o", (int)24338, (long)(0x646D7F6E32424A62L ^ l))));
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
    }

    public static boolean bzI(class_1792 class_17922) {
        long l = WedAj ^ 0x3709BB6E6CF3L;
        return jc.bzL(class_17922, (String)((Object)jc.bAa("o", (int)29443, (long)(0x3EC1E65DD45F073AL ^ l))), class_1937.class, class_1657.class, class_1268.class);
    }

    public static int bzU() {
        return jlfNZ;
    }

    /*
     * Unable to fully structure code
     */
    public static class_1792 bzz(String var0) {
        block33: {
            block34: {
                block35: {
                    block36: {
                        block31: {
                            block30: {
                                block29: {
                                    block28: {
                                        block26: {
                                            block27: {
                                                block25: {
                                                    var1_1 = jc.WedAj ^ 93575673862299L;
                                                    var3_2 = jf.bBe();
                                                    try {
                                                        v0 = var0;
                                                        if (var3_2 == null) break block25;
                                                        if (v0 != null) {
                                                        }
                                                        ** GOTO lbl20
                                                    }
                                                    catch (MatchException v1) {
                                                        throw jc.bzW(v1);
                                                    }
                                                    v0 = var0;
                                                }
                                                try {
                                                    try {
                                                        if (var3_2 == null) break block26;
                                                        if (!v0.isBlank()) break block27;
                                                    }
                                                    catch (MatchException v2) {
                                                        throw jc.bzW(v2);
                                                    }
lbl20:
                                                    // 2 sources

                                                    return null;
                                                }
                                                catch (MatchException v3) {
                                                    throw jc.bzW(v3);
                                                }
                                            }
                                            v0 = jc.alGsc.get(var0);
                                        }
                                        var4_3 = (class_1792)v0;
                                        try {
                                            v4 = var4_3;
                                            if (var3_2 == null) break block28;
                                            if (v4 == null) break block29;
                                        }
                                        catch (MatchException v5) {
                                            throw jc.bzW(v5);
                                        }
                                        v4 = var4_3;
                                    }
                                    try {
                                        v6 = v4 == jc.vSOjt ? null : var4_3;
                                    }
                                    catch (MatchException v7) {
                                        throw jc.bzW(v7);
                                    }
                                    return v6;
                                }
                                var5_4 = null;
                                var6_5 = class_2960.method_12829((String)var0);
                                try {
                                    try {
                                        v8 = var6_5;
                                        if (var3_2 == null) break block30;
                                        if (v8 == null) break block31;
                                    }
                                    catch (MatchException v9) {
                                        throw jc.bzW(v9);
                                    }
                                    v8 = class_7923.field_41178.method_17966(var6_5).orElse(null);
                                }
                                catch (MatchException v10) {
                                    throw jc.bzW(v10);
                                }
                            }
                            var5_4 = (class_1792)v8;
                        }
                        if (var5_4 != null) break block36;
                        for (class_1792 var8_7 : class_7923.field_41178) {
                            block32: {
                                try {
                                    try {
                                        if (var3_2 == null) break block32;
                                        v11 = var0;
                                        if (var3_2 == null) break block33;
                                    }
                                    catch (MatchException v12) {
                                        throw jc.bzW(v12);
                                    }
                                    if (v11.equals(var8_7.method_7876())) {
                                    }
                                    ** GOTO lbl78
                                }
                                catch (MatchException v13) {
                                    throw jc.bzW(v13);
                                }
                                var5_4 = var8_7;
                            }
                            try {
                                if (var3_2 != null) break;
lbl78:
                                // 2 sources

                                if (var3_2 != null) continue;
                                break;
                            }
                            catch (MatchException v14) {
                                throw jc.bzW(v14);
                            }
                        }
                    }
                    try {
                        v15 = jc.alGsc;
                        v16 = var0;
                        v17 = var5_4;
                        if (var3_2 == null) break block34;
                        if (v17 != null) break block35;
                    }
                    catch (MatchException v18) {
                        throw jc.bzW(v18);
                    }
                    v17 = jc.vSOjt;
                    break block34;
                }
                v17 = var5_4;
            }
            v11 = v15.put(v16, v17);
        }
        return var5_4;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static mG bzB(class_1792 var0) {
        block39: {
            block38: {
                block37: {
                    block36: {
                        block35: {
                            block34: {
                                block33: {
                                    block42: {
                                        var1_1 = jc.WedAj ^ 78620183132112L;
                                        var3_2 = jf.bBe();
                                        try {
                                            if (var0 == null) {
                                                return mG.hoGuU;
                                            }
                                        }
                                        catch (Throwable v0) {
                                            throw jc.bzW(v0);
                                        }
                                        var4_3 = class_7923.field_41178.method_10221((Object)var0);
                                        var5_4 = var4_3.toString();
                                        v1 = jc.IckfH;
                                        v2 = var5_4;
                                        if (var3_2 == null) break block42;
                                        try {
                                            block43: {
                                                if (!v1.containsKey(v2)) break block33;
                                                break block43;
                                                catch (Throwable v3) {
                                                    throw jc.bzW(v3);
                                                }
                                            }
                                            v1 = jc.IckfH;
                                            v2 = var5_4;
                                        }
                                        catch (Throwable v4) {
                                            throw jc.bzW(v4);
                                        }
                                    }
                                    return v1.get(v2);
                                }
                                var6_5 = jc.bzD(var0);
                                v5 /* !! */  = var6_5;
                                if (var3_2 == null) break block34;
                                try {
                                    block44: {
                                        if (v5 /* !! */  != null) break block35;
                                        break block44;
                                        catch (Throwable v6) {
                                            throw jc.bzW(v6);
                                        }
                                    }
                                    v5 /* !! */  = jc.IckfH.put(var5_4, mG.hoGuU);
                                }
                                catch (Throwable v7) {
                                    throw jc.bzW(v7);
                                }
                            }
                            return mG.hoGuU;
                        }
                        var7_6 = rD.dlmvG.method_1478().open(var6_5);
                        var8_8 = class_1011.method_4309((InputStream)var7_6);
                        var9_10 = jc.bzC(var8_8, 2);
                        jc.IckfH.put(var5_4, var9_10);
                        var10_13 = var9_10;
                        try {
                            v8 = var8_8;
                            if (var3_2 == null) break block36;
                            if (v8 == null) break block37;
                        }
                        catch (Throwable v9) {
                            throw jc.bzW(v9);
                        }
                        v8 = var8_8;
                    }
                    v8.close();
                }
                try {
                    v10 = var7_6;
                    if (var3_2 == null) break block38;
                    if (v10 == null) break block39;
                }
                catch (Throwable v11) {
                    throw jc.bzW(v11);
                }
                v10 = var7_6;
            }
            v10.close();
        }
        return var10_13;
        {
            catch (Throwable var9_11) {
                try {
                    try {
                        block40: {
                            try {
                                v12 = var8_8;
                                if (var3_2 != null) {
                                    if (v12 == null) break block40;
                                }
                                ** GOTO lbl91
                            }
                            catch (Throwable v13) {
                                throw jc.bzW(v13);
                            }
                            try {
                                v12 = var8_8;
lbl91:
                                // 2 sources

                                v12.close();
                            }
                            catch (Throwable var10_14) {
                                var9_11.addSuppressed(var10_14);
                            }
                        }
                        throw var9_11;
                    }
                    catch (Throwable var8_9) {
                        block41: {
                            try {
                                v14 = var7_6;
                                if (var3_2 != null) {
                                    if (v14 == null) break block41;
                                }
                                ** GOTO lbl108
                            }
                            catch (Throwable v15) {
                                throw jc.bzW(v15);
                            }
                            try {
                                v14 = var7_6;
lbl108:
                                // 2 sources

                                v14.close();
                            }
                            catch (Throwable var9_12) {
                                var8_9.addSuppressed(var9_12);
                            }
                        }
                        throw var8_9;
                    }
                }
                catch (Exception var7_7) {
                    jc.IckfH.put(var5_4, mG.hoGuU);
                    return mG.hoGuU;
                }
            }
        }
    }

    private static mG bzC(class_1011 class_10112, int n) {
        float f;
        float f2;
        float f3;
        mG mG2;
        block28: {
            float f4;
            block29: {
                double d;
                double d2;
                mG mG3;
                double d3;
                String[] stringArray;
                double d4;
                double d5;
                block27: {
                    int n2;
                    double d6;
                    block20: {
                        long l = WedAj ^ 0x20EEFC065516L;
                        int n3 = class_10112.method_4307();
                        int n4 = class_10112.method_4323();
                        d6 = 0.0;
                        d5 = 0.0;
                        d4 = 0.0;
                        stringArray = jf.bBe();
                        d3 = 0.0;
                        mG3 = mG.hoGuU;
                        float f5 = -1.0f;
                        int n5 = 0;
                        block16: while (true) {
                            int n6 = n5;
                            block17: while (n6 < n4) {
                                n2 = 0;
                                if (stringArray == null) break block20;
                                int n7 = n2;
                                while (n7 < n3) {
                                    block26: {
                                        block23: {
                                            int n8;
                                            int n9;
                                            int n10;
                                            int n11;
                                            block24: {
                                                int n12;
                                                block21: {
                                                    block22: {
                                                        n6 = (n7 + n5 * n3) % n;
                                                        if (stringArray == null) continue block17;
                                                        try {
                                                            if (stringArray == null) break block21;
                                                            if (n6 == 0) break block22;
                                                            break block23;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jc.bzW(matchException);
                                                        }
                                                    }
                                                    n12 = class_10112.method_61940(n7, n5);
                                                }
                                                void var19_16 = n12;
                                                int n13 = var19_16 >> jc.bAd("q", (int)25841, (long)(0x1A29EBF464F35010L ^ l)) & jc.bAd("q", (int)22631, (long)(0x7112DAF392D8EC84L ^ l));
                                                n11 = var19_16 >> jc.bAd("q", (int)13107, (long)(0x4BE67E9FB97A07DDL ^ l)) & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l));
                                                n10 = var19_16 >> jc.bAd("q", (int)19805, (long)(0x710E407F1689F9A9L ^ l)) & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l));
                                                n9 = var19_16 & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l));
                                                try {
                                                    block25: {
                                                        try {
                                                            try {
                                                                n8 = n13;
                                                                if (stringArray == null) break block24;
                                                                if (n8 >= jc.bAd("q", (int)18498, (long)(0x54072DA9B867CA2L ^ l))) break block25;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw jc.bzW(matchException);
                                                            }
                                                            if (stringArray != null) break block23;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jc.bzW(matchException);
                                                        }
                                                    }
                                                    n8 = n11;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jc.bzW(matchException);
                                                }
                                            }
                                            mG mG4 = mG.cnP(n8, n10, n9);
                                            float f6 = mG4.cok();
                                            float f7 = mG4.coj();
                                            float f8 = (0.35f + f6 * 0.65f) * (0.45f + f7 * 0.55f);
                                            d6 += (double)((float)n11 * f8);
                                            d5 += (double)((float)n10 * f8);
                                            d4 += (double)((float)n9 * f8);
                                            d3 += (double)f8;
                                            float f9 = f6 * 0.7f + f7 * 0.3f;
                                            try {
                                                if (stringArray == null) break block26;
                                                if (!(f9 > f5)) break block23;
                                            }
                                            catch (MatchException matchException) {
                                                throw jc.bzW(matchException);
                                            }
                                            f5 = f9;
                                            mG3 = mG4;
                                        }
                                        ++n7;
                                    }
                                    if (stringArray != null) continue;
                                }
                                ++n5;
                                if (stringArray != null) continue block16;
                            }
                            break;
                        }
                        try {
                            d2 = d3;
                            d = 0.0;
                            if (stringArray == null) break block27;
                            double d7 = d2 - d;
                            n2 = d7 == 0.0 ? 0 : (d7 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    try {
                        if (n2 <= 0) {
                            return mG.hoGuU;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    d2 = d6;
                    d = d3;
                }
                mG mG5 = mG.cnP((float)(d2 / d), (float)(d5 / d3), (float)(d4 / d3));
                mG2 = mG5.coc(mG3, 0.35f);
                f4 = mG2.cok();
                f3 = mG2.coj();
                try {
                    f2 = f4;
                    f = 0.2f;
                    if (stringArray == null) break block28;
                    if (!(f2 > f)) break block29;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                f4 = Math.min(1.0f, f4 * 1.1f);
            }
            f3 = Math.min(1.0f, Math.max(0.72f, f3 * 1.25f));
            f2 = mG2.coi();
            f = f4;
        }
        return mG.cnS(f2, f, f3).coa(mG2.cou());
    }

    public static String bzF(class_1792 class_17922) {
        class_1792 class_17923;
        block4: {
            block5: {
                long l = WedAj ^ 0x149A04DD7A9EL;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        class_17923 = class_17922;
                        if (stringArray == null) break block4;
                        if (class_17923 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    return "";
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            class_17923 = class_17922;
        }
        return class_17923.method_7854().method_7964().getString();
    }

    private static boolean bzL(class_1792 class_17922, String string, Class<?> ... classArray) {
        long l = WedAj ^ 0x11A5EC7FA41AL;
        try {
            boolean bl;
            try {
                bl = class_17922.getClass().getMethod(string, classArray).getDeclaringClass() != class_1792.class;
            }
            catch (NoSuchMethodException noSuchMethodException) {
                throw jc.bzW(noSuchMethodException);
            }
            return bl;
        }
        catch (NoSuchMethodException noSuchMethodException) {
            return false;
        }
    }

    private static Object bzZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jc.bzY(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static Set<class_1792> bzN() {
        Field[] fieldArray;
        long l = WedAj ^ 0x3D0C2FFEE6D9L;
        LinkedHashSet<class_1792> linkedHashSet = new LinkedHashSet<class_1792>();
        Class<class_2246> clazz = class_2246.class;
        for (Field field : fieldArray = clazz.getDeclaredFields()) {
            try {
                class_2248 class_22482;
                Object object = field.get(null);
                if (!(object instanceof class_2248) || (class_22482 = (class_2248)object).method_8389() == class_1802.field_8162) continue;
                linkedHashSet.add(class_22482.method_8389());
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static boolean bzx() {
        int n;
        block27: {
            block28: {
                oI oI2;
                Optional<class_1268> optional;
                int n2;
                String[] stringArray;
                block23: {
                    int n3;
                    block24: {
                        boolean bl;
                        block21: {
                            block22: {
                                block19: {
                                    block20: {
                                        long l = WedAj ^ 0x6596B23E856CL;
                                        class_1799 class_17992 = rD.dlmvG.field_1724.method_6118(class_1304.field_6174);
                                        stringArray = jf.bBe();
                                        try {
                                            try {
                                                bl = class_17992.method_31574(class_1802.field_8833);
                                                if (stringArray == null) break block19;
                                                if (bl) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw jc.bzW(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw jc.bzW(matchException);
                                        }
                                    }
                                    bl = rD.dlmvG.field_1724.method_6128();
                                }
                                try {
                                    try {
                                        try {
                                            if (stringArray == null) break block21;
                                            if (!bl) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw jc.bzW(matchException);
                                        }
                                        n3 = rD.dlmvG.field_1724.method_6115();
                                        if (stringArray == null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw jc.bzW(matchException);
                                    }
                                    if (n3 == 0) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                            }
                            bl = false;
                        }
                        return bl;
                    }
                    n3 = n2 = rD.dlmvG.field_1724.method_31548().method_67532();
                }
                if ((optional = oR.cKi(class_1802.field_8639)).isEmpty()) {
                    oI oI3;
                    block25: {
                        block26: {
                            oI2 = oP.cJm().cJu(class_1802.field_8639);
                            try {
                                try {
                                    oI3 = oI2;
                                    if (stringArray == null) break block25;
                                    if (oI3 != null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                        }
                        oI3 = oI2;
                    }
                    oR.cJS(oI3.cIE());
                    optional = Optional.of(class_1268.field_5808);
                }
                oI2 = rD.dlmvG.field_1761.method_2919((class_1657)rD.dlmvG.field_1724, optional.get());
                try {
                    try {
                        n = n2;
                        if (stringArray == null) break block27;
                        oR.cJS(n);
                        if (oI2 == class_1269.field_5814) break block28;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    n = 1;
                    break block27;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n = 0;
        }
        return n != 0;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static mG bzA(class_1792 var0) {
        block39: {
            block38: {
                block37: {
                    block36: {
                        block35: {
                            block34: {
                                block33: {
                                    block42: {
                                        var1_1 = jc.WedAj ^ 18994902555722L;
                                        var3_2 = jf.bBe();
                                        try {
                                            if (var0 == null) {
                                                return mG.hoGuU;
                                            }
                                        }
                                        catch (Throwable v0) {
                                            throw jc.bzW(v0);
                                        }
                                        var4_3 = class_7923.field_41178.method_10221((Object)var0);
                                        var5_4 = var4_3.toString();
                                        v1 = jc.xxvZl;
                                        v2 = var5_4;
                                        if (var3_2 == null) break block42;
                                        try {
                                            block43: {
                                                if (!v1.containsKey(v2)) break block33;
                                                break block43;
                                                catch (Throwable v3) {
                                                    throw jc.bzW(v3);
                                                }
                                            }
                                            v1 = jc.xxvZl;
                                            v2 = var5_4;
                                        }
                                        catch (Throwable v4) {
                                            throw jc.bzW(v4);
                                        }
                                    }
                                    return v1.get(v2);
                                }
                                var6_5 = jc.bzD(var0);
                                v5 /* !! */  = var6_5;
                                if (var3_2 == null) break block34;
                                try {
                                    block44: {
                                        if (v5 /* !! */  != null) break block35;
                                        break block44;
                                        catch (Throwable v6) {
                                            throw jc.bzW(v6);
                                        }
                                    }
                                    v5 /* !! */  = jc.xxvZl.put(var5_4, mG.hoGuU);
                                }
                                catch (Throwable v7) {
                                    throw jc.bzW(v7);
                                }
                            }
                            return mG.hoGuU;
                        }
                        var7_6 = rD.dlmvG.method_1478().open(var6_5);
                        var8_8 = class_1011.method_4309((InputStream)var7_6);
                        var9_10 = qO.dcM(var8_8, 2);
                        jc.xxvZl.put(var5_4, var9_10);
                        var10_13 = var9_10;
                        try {
                            v8 = var8_8;
                            if (var3_2 == null) break block36;
                            if (v8 == null) break block37;
                        }
                        catch (Throwable v9) {
                            throw jc.bzW(v9);
                        }
                        v8 = var8_8;
                    }
                    v8.close();
                }
                try {
                    v10 = var7_6;
                    if (var3_2 == null) break block38;
                    if (v10 == null) break block39;
                }
                catch (Throwable v11) {
                    throw jc.bzW(v11);
                }
                v10 = var7_6;
            }
            v10.close();
        }
        return var10_13;
        {
            catch (Throwable var9_11) {
                try {
                    try {
                        block40: {
                            try {
                                v12 = var8_8;
                                if (var3_2 != null) {
                                    if (v12 == null) break block40;
                                }
                                ** GOTO lbl91
                            }
                            catch (Throwable v13) {
                                throw jc.bzW(v13);
                            }
                            try {
                                v12 = var8_8;
lbl91:
                                // 2 sources

                                v12.close();
                            }
                            catch (Throwable var10_14) {
                                var9_11.addSuppressed(var10_14);
                            }
                        }
                        throw var9_11;
                    }
                    catch (Throwable var8_9) {
                        block41: {
                            try {
                                v14 = var7_6;
                                if (var3_2 != null) {
                                    if (v14 == null) break block41;
                                }
                                ** GOTO lbl108
                            }
                            catch (Throwable v15) {
                                throw jc.bzW(v15);
                            }
                            try {
                                v14 = var7_6;
lbl108:
                                // 2 sources

                                v14.close();
                            }
                            catch (Throwable var9_12) {
                                var8_9.addSuppressed(var9_12);
                            }
                        }
                        throw var8_9;
                    }
                }
                catch (Exception var7_7) {
                    jc.xxvZl.put(var5_4, mG.hoGuU);
                    return mG.hoGuU;
                }
            }
        }
    }

    public static String bzG(class_2561 class_25612) {
        StringBuilder stringBuilder = new StringBuilder();
        boolean[] blArray = new boolean[]{true};
        class_25612.method_27658((class_25832, string) -> {
            block11: {
                int n;
                boolean[] blArray2;
                boolean bl;
                long l;
                block9: {
                    String[] stringArray;
                    block10: {
                        l = WedAj ^ 0x773EEA3E8843L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                bl = string.isEmpty();
                                if (stringArray == null) break block9;
                                if (!bl) break block10;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            return Optional.empty();
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    try {
                        blArray2 = blArray;
                        n = 0;
                        if (stringArray == null) break block11;
                        bl = blArray2[n];
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (!bl) {
                        stringBuilder.append((String)((Object)jc.bAa("o", (int)25640, (long)(0x69B00FF0AF4374A0L ^ l))));
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                jc.bzH(stringBuilder, class_25832);
                stringBuilder.append(string);
                blArray2 = blArray;
                n = 0;
            }
            blArray2[n] = false;
            return Optional.empty();
        }, class_2583.field_24360);
        return stringBuilder.toString();
    }

    public static int bzV() {
        int n = jc.bzU();
        try {
            if (n == 0) {
                return 18;
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        return 0;
    }

    public static boolean bzJ(class_1792 class_17922) {
        long l = WedAj ^ 0x687D2F51F432L;
        return jc.bzL(class_17922, (String)((Object)jc.bAa("o", (int)76, (long)(0x5CD8D96AC7A66CB8L ^ l))), class_1838.class);
    }

    public static boolean bzw(class_1309 class_13092) {
        double d;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l = WedAj ^ 0x73CF09DC9D40L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            double d2 = class_13092.field_6017 - 1.5;
                            d = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                            if (stringArray == null) break block6;
                            if (d <= 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        d = (double)class_13092.method_6128();
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (d != false) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                d = 1.0;
                break block8;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    public static String bzE(class_1799 class_17992) {
        return jc.bzG(class_17992.method_7964());
    }

    /*
     * Unable to fully structure code
     */
    public static class_2960 bzD(class_1792 var0) {
        block8: {
            var1_1 = jc.WedAj ^ 37062398389628L;
            var3_2 = jf.bBe();
            v0 = var0;
            if (var3_2 == null) ** GOTO lbl18
            try {
                block11: {
                    if (v0 != null) break block8;
                    break block11;
                    catch (Exception v1) {
                        throw jc.bzW(v1);
                    }
                }
                return null;
            }
            catch (Exception v2) {
                throw jc.bzW(v2);
            }
        }
        try {
            block9: {
                block10: {
                    v0 = var0;
lbl18:
                    // 2 sources

                    var4_3 = v0.method_7854();
                    var5_5 = new class_10444();
                    rD.dlmvG.method_65386().method_65598(var5_5, var4_3, class_811.field_4317, (class_1937)rD.dlmvG.field_1687, (class_11566)rD.dlmvG.field_1724, 0);
                    var6_6 = var5_5.method_65603(class_5819.method_43049((long)0L));
                    try {
                        v3 = var6_6;
                        if (var3_2 == null) break block9;
                        if (v3 != null) break block10;
                    }
                    catch (Exception v4) {
                        throw jc.bzW(v4);
                    }
                    return null;
                }
                v3 = var6_6;
            }
            var7_7 = v3.method_45851().method_45816();
            return class_2960.method_12829((String)(var7_7.method_12836() + (String)jc.bAa("o", (int)14745, (long)(7329241294461013037L ^ var1_1)) + var7_7.method_12832() + (String)jc.bAa("o", (int)6813, (long)(854439150398418726L ^ var1_1))));
        }
        catch (Exception var4_4) {
            return null;
        }
    }

    private static Set<class_1792> bzM() {
        Field[] fieldArray;
        long l = WedAj ^ 0xFF58004F622L;
        LinkedHashSet<class_1792> linkedHashSet = new LinkedHashSet<class_1792>();
        Class<class_1802> clazz = class_1802.class;
        for (Field field : fieldArray = clazz.getDeclaredFields()) {
            try {
                class_1792 class_17922;
                Object object = field.get(null);
                if (!(object instanceof class_1792) || (class_17922 = (class_1792)object) == class_1802.field_8162) continue;
                linkedHashSet.add(class_17922);
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static void bzT(int n) {
        jlfNZ = n;
    }

    public static class_9278 bzy(class_1799 class_17992) {
        return (class_9278)class_17992.method_58694(class_9334.field_49649);
    }

    /*
     * Unable to fully structure code
     */
    public static float bzv(class_1297 var0, float var1_1, class_1282 var2_2) {
        block21: {
            block26: {
                block25: {
                    block23: {
                        block24: {
                            block22: {
                                block20: {
                                    var3_3 = jc.WedAj ^ 7527286412367L;
                                    var6_4 = var2_2.method_5526();
                                    var5_5 = jf.bBe();
                                    try {
                                        try {
                                            v0 = var6_4;
                                            if (var5_5 == null) break block20;
                                            if (!(v0 instanceof class_1309)) break block21;
                                        }
                                        catch (MatchException v1) {
                                            throw jc.bzW(v1);
                                        }
                                        v0 = var6_4;
                                    }
                                    catch (MatchException v2) {
                                        throw jc.bzW(v2);
                                    }
                                }
                                var7_6 = (class_1309)v0;
                                try {
                                    if (!jc.bzw(var7_6)) {
                                        return 0.0f;
                                    }
                                }
                                catch (MatchException v3) {
                                    throw jc.bzW(v3);
                                }
                                var8_7 = 3.0;
                                var10_8 = 8.0;
                                var12_9 = var7_6.field_6017;
                                try {
                                    cfr_temp_0 = var12_9 - 3.0;
                                    v4 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                    if (var5_5 == null) break block22;
                                    if (v4 <= 0) {
                                    }
                                    ** GOTO lbl40
                                }
                                catch (MatchException v5) {
                                    throw jc.bzW(v5);
                                }
                                var14_10 = 4.0 * var12_9;
                                try {
                                    try {
                                        if (var5_5 != null) break block23;
lbl40:
                                        // 2 sources

                                        v6 = var12_9;
                                        v7 = 8.0;
                                        if (var5_5 == null) break block24;
                                    }
                                    catch (MatchException v8) {
                                        throw jc.bzW(v8);
                                    }
                                    cfr_temp_1 = v6 - v7;
                                    v4 = cfr_temp_1 == 0.0 ? 0 : (cfr_temp_1 < 0.0 ? -1 : 1);
                                }
                                catch (MatchException v9) {
                                    throw jc.bzW(v9);
                                }
                            }
                            if (v4 > 0) ** GOTO lbl56
                            var14_10 = 12.0 + 2.0 * (var12_9 - 3.0);
                            try {
                                if (var5_5 != null) break block23;
lbl56:
                                // 2 sources

                                v6 = 22.0 + var12_9;
                                v7 = 8.0;
                            }
                            catch (MatchException v10) {
                                throw jc.bzW(v10);
                            }
                        }
                        var14_10 = v6 - v7;
                    }
                    var16_11 = var7_6.method_73183();
                    try {
                        try {
                            v11 = var16_11;
                            if (var5_5 == null) break block25;
                            if (!(v11 instanceof class_3218)) break block26;
                        }
                        catch (MatchException v12) {
                            throw jc.bzW(v12);
                        }
                        v11 = var16_11;
                    }
                    catch (MatchException v13) {
                        throw jc.bzW(v13);
                    }
                }
                var17_12 = (class_3218)v11;
                return (float)(var14_10 + (double)class_1890.method_60160((class_3218)var17_12, (class_1799)var7_6.method_59958(), (class_1297)var0, (class_1282)var2_2, (float)0.0f) * var12_9);
            }
            return (float)var14_10;
        }
        return 0.0f;
    }

    public static boolean bzK(class_1792 class_17922) {
        long l = WedAj ^ 0x2D68DB775FBL;
        return jc.bzL(class_17922, (String)((Object)jc.bAa("o", (int)20168, (long)(0x7A0FAC25126923FDL ^ l))), class_1799.class, class_1657.class, class_1309.class, class_1268.class);
    }

    private static String bzY(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3F96;
        if (GXVbC[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])baifd.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    baifd.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jc", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = UOSQi[n2].getBytes("ISO-8859-1");
            jc.GXVbC[n2] = jc.bzX(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return GXVbC[n2];
    }

    private static int bAc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = jc.bAb(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String bzX(byte[] byArray) {
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

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        jc.WedAj = gb.aYR(4430819896916382669L, -3846377035431529824L, MethodHandles.lookup().lookupClass()).a(135650011832529L);
                        var20 = jc.WedAj ^ 11685133715039L;
                        jc.baifd = new HashMap<K, V>(13);
                        jc.bzT(0);
                        var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var20 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var18_3 = new String[14];
                        var16_4 = 0;
                        var15_5 = "x\u0093@\u00fa\u00ea5\u00c6n\u00edI\u00a9\u00b7\u009a\u00e4d\u0014\u0010\u00ca4\u008dc~\u0006\rL\u0092t\u00ca{\u0091\u00e7\u00dfl\u0010=\u008e\u00c6Vz\u0007\u009a\u00dc!T\u00e0;\u00f0]0,\u0010_2|\u00f3\u00e3\u00c7\u00aa\u00c2\u00da\u009c\u00e2QYZI\u00e1\u0010\u00e3\n\f\u00fb\u00f4N\u00bf\u0002a\u00df\u00be\u00caP\u0097\u00aeo\u0010s\u0013\u00b1[7Y\u00a0\u00ae\u007f\u00fd\u00e9i\u00f2\u0087\u00c8v\u0010\u00b5\u00f5\u00c4\u0002\u0016\u00d9w\u00df.\u0007\u00f1\u00c8Y,\u009d\u00e6\u0010\u0002%\u00f9\u00b0aaO\u009cli\u0081\u00c0\u00c5\u0083\u0004\u0099\u0010\u00cc\u0084,x{\u00ceW\u00cc\u0090\t\u00bc\u00c1a\r\u0019\u0091\u0010\u00b6e3\u00c0&`w\u0082\u00af\u00e8N\u008dtS\u00fc\u00d4\u0010\u00e3n\u0015Cha5mp\u0088W\u009e\u00cc\u00f4\u00b6\t .{'_\u00cd\u0095NG\u00ed\u00c2\u00a56\u001fS\u00c4Y\u008eIJ,\u00dc\u00c16.\u0080r\u00d5\u009es@\u008fu";
                        var17_6 = "x\u0093@\u00fa\u00ea5\u00c6n\u00edI\u00a9\u00b7\u009a\u00e4d\u0014\u0010\u00ca4\u008dc~\u0006\rL\u0092t\u00ca{\u0091\u00e7\u00dfl\u0010=\u008e\u00c6Vz\u0007\u009a\u00dc!T\u00e0;\u00f0]0,\u0010_2|\u00f3\u00e3\u00c7\u00aa\u00c2\u00da\u009c\u00e2QYZI\u00e1\u0010\u00e3\n\f\u00fb\u00f4N\u00bf\u0002a\u00df\u00be\u00caP\u0097\u00aeo\u0010s\u0013\u00b1[7Y\u00a0\u00ae\u007f\u00fd\u00e9i\u00f2\u0087\u00c8v\u0010\u00b5\u00f5\u00c4\u0002\u0016\u00d9w\u00df.\u0007\u00f1\u00c8Y,\u009d\u00e6\u0010\u0002%\u00f9\u00b0aaO\u009cli\u0081\u00c0\u00c5\u0083\u0004\u0099\u0010\u00cc\u0084,x{\u00ceW\u00cc\u0090\t\u00bc\u00c1a\r\u0019\u0091\u0010\u00b6e3\u00c0&`w\u0082\u00af\u00e8N\u008dtS\u00fc\u00d4\u0010\u00e3n\u0015Cha5mp\u0088W\u009e\u00cc\u00f4\u00b6\t .{'_\u00cd\u0095NG\u00ed\u00c2\u00a56\u001fS\u00c4Y\u008eIJ,\u00dc\u00c16.\u0080r\u00d5\u009es@\u008fu".length();
                        var14_7 = 16;
                        var13_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = jc.bzX(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "\u0012\u0081+(\u00d5\u000f\u00cb\u00df\u008e\u0085<\u0097\u0014\u0097\u00ec\u0086(\u00cc\u00b4a]8\u009a\u0007\u0081o\u00e2]HE\u0096 r\u00e9\u009b\u00a5\u001f\u001d{\u0005[\u00ba\u001cQ\u00b4\u0091\rH\u0006,\u001d\u00ee\u0098\u00c7EKe";
                            var17_6 = "\u0012\u0081+(\u00d5\u000f\u00cb\u00df\u008e\u0085<\u0097\u0014\u0097\u00ec\u0086(\u00cc\u00b4a]8\u009a\u0007\u0081o\u00e2]HE\u0096 r\u00e9\u009b\u00a5\u001f\u001d{\u0005[\u00ba\u001cQ\u00b4\u0091\rH\u0006,\u001d\u00ee\u0098\u00c7EKe".length();
                            var14_7 = 16;
                            var13_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var13_8;
                                v4 = var15_5.substring(v6, v6 + var14_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = jc.bzX(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var11_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                jc.UOSQi = var18_3;
                jc.GXVbC = new String[14];
                jc.uhkkf = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var20 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var20 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[20];
                var3_13 = 0;
                var4_14 = "`\u00d0\u008e\u00d0\u00d7\u00e7\u0002\u00bb5.2\u0006<\u009e\u00b0\u00ca\u000ff\u00b7w\u0088\u009b\u00e7\u00888\u00cfC\u00dd[\u0019#\u001bC\u001dao\b\u00fc\u0083\u00b9A\u008a\u00d4>R\u00ad4\u00e8\u0011\u0016K\u00b6\u00e9G\u001f.C%\u0019\u0001\u008c\u00fb\u00e2\u008fX\u00c7Uk\u0099lnj\u00a9j\u00d7\u00d0\u00bf\u0007\u001d\u0017tjj\u00f0N\u00974B\u00f1%J\u00a9\u0095\u00f29\u00b6\u008c{\u00dc\u00e4\u0086\u00e7{\u00e6S\u0002]\u0089\u00ff?\u00e5\u0014X\u00b0K\u00ca\u00f8\u00f2b\u00cb\u00b4\u00c1\u0089\u00079z\u00d7\u00a8KQ\u0010}'\u0097\u00e4\u00aa\u0086\u00f5uW\u0000\u0083\u0098\u00bd";
                var5_15 = "`\u00d0\u008e\u00d0\u00d7\u00e7\u0002\u00bb5.2\u0006<\u009e\u00b0\u00ca\u000ff\u00b7w\u0088\u009b\u00e7\u00888\u00cfC\u00dd[\u0019#\u001bC\u001dao\b\u00fc\u0083\u00b9A\u008a\u00d4>R\u00ad4\u00e8\u0011\u0016K\u00b6\u00e9G\u001f.C%\u0019\u0001\u008c\u00fb\u00e2\u008fX\u00c7Uk\u0099lnj\u00a9j\u00d7\u00d0\u00bf\u0007\u001d\u0017tjj\u00f0N\u00974B\u00f1%J\u00a9\u0095\u00f29\u00b6\u008c{\u00dc\u00e4\u0086\u00e7{\u00e6S\u0002]\u0089\u00ff?\u00e5\u0014X\u00b0K\u00ca\u00f8\u00f2b\u00cb\u00b4\u00c1\u0089\u00079z\u00d7\u00a8KQ\u0010}'\u0097\u00e4\u00aa\u0086\u00f5uW\u0000\u0083\u0098\u00bd".length();
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
                    var4_14 = "\u00a8J.rJ\u00e3\u00e1WK\u00db(\u00bd\u00ad\u0013\u0085\u00f0";
                    var5_15 = "\u00a8J.rJ\u00e3\u00e1WK\u00db(\u00bd\u00ad\u0013\u0085\u00f0".length();
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
        jc.NCEKq = var6_12;
        jc.ZHAjc = new Integer[20];
        jc.WnbNG = jc.bzM();
        jc.GjreY = jc.bzN();
        v15 = new class_1792[jc.bAd("q", (int)28173, (long)(7959716020461767086L ^ var20))];
        v15[0] = class_1802.field_8545;
        v15[1] = class_1802.field_8722;
        v15[2] = class_1802.field_8380;
        v15[3] = class_1802.field_8050;
        v15[4] = class_1802.field_8829;
        v15[5] = class_1802.field_8271;
        v15[jc.bAd("q", (int)23554, (long)(2561424996368268198L ^ var20))] = class_1802.field_8548;
        v15[jc.bAd("q", (int)16110, (long)(618795366467721553L ^ var20))] = class_1802.field_8520;
        v15[jc.bAd("q", (int)530, (long)(564843112810702269L ^ var20))] = class_1802.field_8627;
        v15[jc.bAd("q", (int)18511, (long)(91995185070583786L ^ var20))] = class_1802.field_8451;
        v15[jc.bAd("q", (int)1805, (long)(4702210129977663651L ^ var20))] = class_1802.field_8213;
        v15[jc.bAd("q", (int)28448, (long)(6515264552589985950L ^ var20))] = class_1802.field_8816;
        v15[jc.bAd("q", (int)1524, (long)(2652687055726436953L ^ var20))] = class_1802.field_8350;
        v15[jc.bAd("q", (int)21200, (long)(5702791272268674416L ^ var20))] = class_1802.field_8584;
        v15[jc.bAd("q", (int)6643, (long)(8917329054465621599L ^ var20))] = class_1802.field_8461;
        v15[jc.bAd("q", (int)6839, (long)(5662279751145291019L ^ var20))] = class_1802.field_8676;
        v15[jc.bAd("q", (int)7895, (long)(1852830847504972145L ^ var20))] = class_1802.field_8268;
        jc.FFgfM = Set.of(v15);
        jc.vSOjt = class_1802.field_8162;
        jc.alGsc = new ConcurrentHashMap<String, class_1792>();
        jc.xxvZl = new ConcurrentHashMap<String, mG>();
        jc.IckfH = new ConcurrentHashMap<String, mG>();
    }

    public static boolean bzs(class_1799 class_17992) {
        return jh.bCg(class_17992, (class_5321<class_1887>)class_1893.field_50158);
    }

    /*
     * Exception decompiling
     */
    public static class_8051 bzc(class_1799 var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [2[TRYBLOCK]], but top level block is 3[SWITCH]
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

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jc.class, "bzZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(jc.class, "bAc", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
