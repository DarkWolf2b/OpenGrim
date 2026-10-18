/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.KeyMappingAccessor
 *  mixin.accessors.MouseHandlerAccessor
 *  mixin.accessors.WindowAccessor
 *  net.minecraft.class_11910
 *  net.minecraft.class_304
 *  net.minecraft.class_408
 *  net.minecraft.class_498
 *  org.lwjgl.glfw.GLFW
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
import java.util.concurrent.TimeUnit;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.KeyMappingAccessor;
import mixin.accessors.MouseHandlerAccessor;
import mixin.accessors.WindowAccessor;
import net.minecraft.class_11910;
import net.minecraft.class_304;
import net.minecraft.class_408;
import net.minecraft.class_498;
import org.lwjgl.glfw.GLFW;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.iU;
import sixtwo.rD;
import sixtwo.rm;

public class rr {
    private static final long DRJHN;
    private static final long[] zfaTi;
    private static final Integer[] rOwPU;
    private static final Map FGwWO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static void diV(class_304 class_3042, long l) {
        rr.diU(((KeyMappingAccessor)class_3042).getKey().method_1444(), l);
    }

    private static MatchException djh(MatchException matchException) {
        return matchException;
    }

    private static int dji(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x598A;
        if (rOwPU[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = zfaTi[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FGwWO.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FGwWO.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/rr", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            rr.rOwPU[n2] = n3;
        }
        return rOwPU[n2];
    }

    public static boolean djf(int n) {
        boolean bl;
        block14: {
            block11: {
                iS[] iSArray;
                block13: {
                    block12: {
                        block10: {
                            long l = DRJHN ^ 0x4BCBC919F34DL;
                            iSArray = rm.div();
                            try {
                                try {
                                    bl = n;
                                    if (iSArray == null) break block10;
                                    if (bl != rr.djk("m", (int)28646, (long)(0x4E3E62DF8B70477FL ^ l))) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = rr.diZ();
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        try {
                            if (iSArray == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw rr.djh(matchException);
                        }
                        bl = rr.dja();
                    }
                    try {
                        if (iSArray == null) break block13;
                        if (bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw rr.djh(matchException);
                    }
                    bl = rr.djb();
                }
                try {
                    if (iSArray == null) break block14;
                    if (bl) break block11;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
                bl = true;
                break block14;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean dja() {
        return rD.dlmvG.method_74187();
    }

    public static boolean djb() {
        return rD.dlmvG.method_74189();
    }

    public static boolean djd(int n) {
        boolean bl;
        block14: {
            block11: {
                iS[] iSArray;
                block13: {
                    block12: {
                        block10: {
                            long l = DRJHN ^ 0x95153C15CE8L;
                            iSArray = rm.div();
                            try {
                                try {
                                    bl = n;
                                    if (iSArray == null) break block10;
                                    if (bl != rr.djk("m", (int)10123, (long)(0x269DF510380FA0B6L ^ l))) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = rr.diZ();
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        try {
                            if (iSArray == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw rr.djh(matchException);
                        }
                        bl = rr.dja();
                    }
                    try {
                        if (iSArray == null) break block13;
                        if (bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw rr.djh(matchException);
                    }
                    bl = rr.djb();
                }
                try {
                    if (iSArray == null) break block14;
                    if (bl) break block11;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
                bl = true;
                break block14;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean djc(int n) {
        boolean bl;
        block14: {
            block11: {
                iS[] iSArray;
                block13: {
                    block12: {
                        block10: {
                            long l = DRJHN ^ 0x151055A135E2L;
                            iSArray = rm.div();
                            try {
                                try {
                                    bl = n;
                                    if (iSArray == null) break block10;
                                    if (bl != rr.djk("m", (int)22597, (long)(0x29E2CA726239B670L ^ l))) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = rr.diZ();
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        try {
                            if (iSArray == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw rr.djh(matchException);
                        }
                        bl = rr.dja();
                    }
                    try {
                        if (iSArray == null) break block13;
                        if (bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw rr.djh(matchException);
                    }
                    bl = rr.djb();
                }
                try {
                    if (iSArray == null) break block14;
                    if (bl) break block11;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
                bl = true;
                break block14;
            }
            bl = false;
        }
        return bl;
    }

    public static void diT(class_304 class_3042) {
        rr.diS(((KeyMappingAccessor)class_3042).getKey().method_1444());
    }

    private static CallSite djk(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/rr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void diU(int n, long l) {
        MouseHandlerAccessor mouseHandlerAccessor = (MouseHandlerAccessor)rD.dlmvG.field_1729;
        WindowAccessor windowAccessor = (WindowAccessor)rD.dlmvG.method_22683();
        long l2 = windowAccessor.getHandle();
        mouseHandlerAccessor.callOnButton(l2, new class_11910(n, 0), 1);
        iU.bwU(() -> mouseHandlerAccessor.callOnButton(l2, new class_11910(n, 0), 0), l, TimeUnit.MILLISECONDS);
    }

    private static int djj(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = rr.dji(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static boolean dje(int n) {
        boolean bl;
        block14: {
            block11: {
                iS[] iSArray;
                block13: {
                    block12: {
                        block10: {
                            long l = DRJHN ^ 0x6BC291BB534AL;
                            iSArray = rm.div();
                            try {
                                try {
                                    bl = n;
                                    if (iSArray == null) break block10;
                                    if (bl != rr.djk("m", (int)29869, (long)(0x70822252679E7C36L ^ l))) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = rr.diZ();
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        try {
                            if (iSArray == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw rr.djh(matchException);
                        }
                        bl = rr.dja();
                    }
                    try {
                        if (iSArray == null) break block13;
                        if (bl) break block11;
                    }
                    catch (MatchException matchException) {
                        throw rr.djh(matchException);
                    }
                    bl = rr.djb();
                }
                try {
                    if (iSArray == null) break block14;
                    if (bl) break block11;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
                bl = true;
                break block14;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean diX(class_304 class_3042) {
        return rr.diW(((KeyMappingAccessor)class_3042).getKey().method_1444());
    }

    public static void diS(int n) {
        MouseHandlerAccessor mouseHandlerAccessor = (MouseHandlerAccessor)rD.dlmvG.field_1729;
        WindowAccessor windowAccessor = (WindowAccessor)rD.dlmvG.method_22683();
        long l = windowAccessor.getHandle();
        mouseHandlerAccessor.callOnButton(l, new class_11910(n, 0), 1);
        mouseHandlerAccessor.callOnButton(l, new class_11910(n, 0), 0);
    }

    public static boolean diZ() {
        return rD.dlmvG.method_74188();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                rr.DRJHN = gb.aYR(3353819894316347284L, -4467285435648143016L, MethodHandles.lookup().lookupClass()).a(157838082167188L);
                rr.FGwWO = new HashMap<K, V>(13);
                var0 = rr.DRJHN ^ 136053133931881L;
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
                var8_3 = new long[6];
                var5_4 = 0;
                var6_5 = "\u00e4\u00ff\n\u00bc\u0007\u0017\u00b4\u009b`\u00c8\u00e3\u0095?Gm\u0089\u008c*\u00b1\u008d\u0081\u0090\"E^02\u00db\u00a4C\r\u00c6";
                var7_6 = "\u00e4\u00ff\n\u00bc\u0007\u0017\u00b4\u009b`\u00c8\u00e3\u0095?Gm\u0089\u008c*\u00b1\u008d\u0081\u0090\"E^02\u00db\u00a4C\r\u00c6".length();
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
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "r\u00ee\u0007\u009az\u00ca\u00c1{\u00b6\u0084\u0085\u0001\nu\u00c1?";
                    var7_6 = "r\u00ee\u0007\u009az\u00ca\u00c1{\u00b6\u0084\u0085\u0001\nu\u00c1?".length();
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
lbl39:
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
lbl52:
                // 1 sources

                ** continue;
            }
        }
        rr.zfaTi = var8_3;
        rr.rOwPU = new Integer[6];
    }

    public static boolean diW(int n) {
        int n2;
        block30: {
            Object object;
            block26: {
                iS[] iSArray;
                block27: {
                    boolean bl;
                    block28: {
                        block29: {
                            long l;
                            block24: {
                                block25: {
                                    block22: {
                                        block23: {
                                            boolean bl2;
                                            block20: {
                                                block21: {
                                                    l = DRJHN ^ 0x19E311D3F7F4L;
                                                    iSArray = rm.div();
                                                    try {
                                                        try {
                                                            try {
                                                                bl2 = rD.dlmvG.field_1755 instanceof class_408;
                                                                if (iSArray == null) break block20;
                                                                if (bl2) break block21;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw rr.djh(matchException);
                                                            }
                                                            n2 = rD.dlmvG.field_1755 instanceof class_498;
                                                            if (iSArray == null) break block22;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw rr.djh(matchException);
                                                        }
                                                        if (n2 == 0) break block23;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw rr.djh(matchException);
                                                    }
                                                }
                                                bl2 = false;
                                            }
                                            return bl2;
                                        }
                                        n2 = n;
                                    }
                                    try {
                                        try {
                                            if (iSArray == null) break block24;
                                            if (n2 >= 0) break block25;
                                        }
                                        catch (MatchException matchException) {
                                            throw rr.djh(matchException);
                                        }
                                        return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw rr.djh(matchException);
                                    }
                                }
                                n2 = n;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            object = rr.djk("m", (int)22130, (long)(0x523412B98622FA56L ^ l));
                                            if (iSArray == null) break block26;
                                            if (n2 > object) break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw rr.djh(matchException);
                                        }
                                        bl = GLFW.glfwGetMouseButton((long)((WindowAccessor)rD.dlmvG.method_22683()).getHandle(), (int)n);
                                        if (iSArray == null) break block28;
                                    }
                                    catch (MatchException matchException) {
                                        throw rr.djh(matchException);
                                    }
                                    if (!bl) break block29;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = true;
                                break block28;
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        bl = false;
                    }
                    return bl;
                }
                try {
                    n2 = GLFW.glfwGetKey((long)((WindowAccessor)rD.dlmvG.method_22683()).getHandle(), (int)n);
                    if (iSArray == null) break block30;
                    object = true;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
            }
            n2 = n2 == object ? 1 : 0;
        }
        return n2 != 0;
    }

    public static boolean diY(int n) {
        int n2;
        block20: {
            Object object;
            block16: {
                iS[] iSArray;
                block17: {
                    boolean bl;
                    block18: {
                        block19: {
                            long l;
                            block14: {
                                block15: {
                                    l = DRJHN ^ 0xE2B6CB21AF4L;
                                    iSArray = rm.div();
                                    try {
                                        try {
                                            n2 = n;
                                            if (iSArray == null) break block14;
                                            if (n2 >= 0) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw rr.djh(matchException);
                                        }
                                        return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw rr.djh(matchException);
                                    }
                                }
                                n2 = n;
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            object = rr.djk("m", (int)14529, (long)(0x50901559D1BF9E3L ^ l));
                                            if (iSArray == null) break block16;
                                            if (n2 > object) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw rr.djh(matchException);
                                        }
                                        bl = GLFW.glfwGetMouseButton((long)((WindowAccessor)rD.dlmvG.method_22683()).getHandle(), (int)n);
                                        if (iSArray == null) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw rr.djh(matchException);
                                    }
                                    if (!bl) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw rr.djh(matchException);
                                }
                                bl = true;
                                break block18;
                            }
                            catch (MatchException matchException) {
                                throw rr.djh(matchException);
                            }
                        }
                        bl = false;
                    }
                    return bl;
                }
                try {
                    n2 = GLFW.glfwGetKey((long)((WindowAccessor)rD.dlmvG.method_22683()).getHandle(), (int)n);
                    if (iSArray == null) break block20;
                    object = true;
                }
                catch (MatchException matchException) {
                    throw rr.djh(matchException);
                }
            }
            n2 = n2 == object ? 1 : 0;
        }
        return n2 != 0;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(rr.class, "djj", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
