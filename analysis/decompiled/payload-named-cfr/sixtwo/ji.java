/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.PotionContentsComponent
 *  net.minecraft.entity.effect.StatusEffect
 *  net.minecraft.entity.effect.StatusEffectCategory
 *  net.minecraft.entity.effect.StatusEffectInstance
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.entry.RegistryEntry
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.PotionContentsComponent;
import net.minecraft.entity.effect.StatusEffect;
import net.minecraft.entity.effect.StatusEffectCategory;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.entry.RegistryEntry;
import sixtwo.gb;
import sixtwo.jf;

public class ji {
    private static final long ddkOp = gb.aYR(-8770930556179578709L, 1365867104116320953L, MethodHandles.lookup().lookupClass()).a(151922222827004L);
    private static final String[] MISSp;
    private static final String[] QMarr;
    private static final Map iyXhB;
    private static final long[] jEdlK;
    private static final Integer[] knWfQ;
    private static final Map ChJqY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        iyXhB = new HashMap(13);
        long l2 = ddkOp ^ 0x7B2DA9AF58FL;
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
        String string = "\u0019\u008e\u00ea R\u0091\u0001\u0093\u00b7\u008dH\u0011\u008e\u00d0\u009e%\u0010H\u00f0\u00a4+\u00d9\u008e\u00aaG\u0012\u000b[\u00d2\u00f3\u00f4\u00be\u0002";
        int n3 = "\u0019\u008e\u00ea R\u0091\u0001\u0093\u00b7\u008dH\u0011\u008e\u00d0\u009e%\u0010H\u00f0\u00a4+\u00d9\u008e\u00aaG\u0012\u000b[\u00d2\u00f3\u00f4\u00be\u0002".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = ji.bCz(byArray3).intern();
            if ((n5 += n4) >= n3) break;
            n4 = string.charAt(n5);
        }
        MISSp = stringArray;
        QMarr = new String[2];
        ChJqY = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[3];
        int n7 = 0;
        String string2 = "u;\u00b7\u00ba\u0084\u0015W*J|\u00e5\u0093\u00f5S\u00a1\u008c\u00b3\u000b\u0092\u0080\u00ffbah";
        int n8 = "u;\u00b7\u00ba\u0084\u0015W*J|\u00e5\u0093\u00f5S\u00a1\u008c\u00b3\u000b\u0092\u0080\u00ffbah".length();
        int n9 = 0;
        do {
            byte[] byArray6 = string2.substring(n9, n9 += 8).getBytes("ISO-8859-1");
            int n10 = n7++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n10] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n9 < n8);
        jEdlK = lArray;
        knWfQ = new Integer[3];
    }

    private static int bCD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x50E1;
        if (knWfQ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = jEdlK[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ChJqY.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ChJqY.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ji", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ji.knWfQ[n3] = n4;
        }
        return knWfQ[n3];
    }

    private static MatchException bCy(MatchException matchException) {
        return matchException;
    }

    private static CallSite bCF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ji" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bCx(ItemStack itemStack) {
        boolean bl2;
        block5: {
            long l2 = ddkOp ^ 0x68104BB8D983L;
            PotionContentsComponent potionContentsComponent = (PotionContentsComponent)itemStack.getComponents().getOrDefault(DataComponentTypes.POTION_CONTENTS, (Object)PotionContentsComponent.DEFAULT);
            Iterator iterator = potionContentsComponent.getEffects().iterator();
            String[] stringArray = jf.bBe();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl3;
                    block6: {
                        StatusEffectInstance statusEffectInstance = (StatusEffectInstance)iterator.next();
                        try {
                            try {
                                bl2 = ((StatusEffect)statusEffectInstance.getEffectType().value()).getCategory().equals((Object)StatusEffectCategory.HARMFUL);
                                if (stringArray == null) break block5;
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw ji.bCy(matchException);
                            }
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw ji.bCy(matchException);
                        }
                        bl3 = true;
                    }
                    return bl3;
                }
                if (stringArray != null) continue;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static String bCz(byte[] byArray) {
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

    private static Object bCB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ji.bCA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite bCC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ji" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bCw(ItemStack itemStack, RegistryEntry<StatusEffect> registryEntry) {
        long l2 = ddkOp ^ 0x3E427235B875L;
        PotionContentsComponent potionContentsComponent = (PotionContentsComponent)itemStack.getComponents().getOrDefault(DataComponentTypes.POTION_CONTENTS, (Object)PotionContentsComponent.DEFAULT);
        String[] stringArray = jf.bBe();
        for (StatusEffectInstance statusEffectInstance : potionContentsComponent.getEffects()) {
            try {
                if (statusEffectInstance.getEffectType() == registryEntry) {
                    return true;
                }
            }
            catch (MatchException matchException) {
                throw ji.bCy(matchException);
            }
            if (stringArray != null) continue;
        }
        return false;
    }

    private static int bCE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ji.bCD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String bCA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7509;
        if (QMarr[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])iyXhB.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    iyXhB.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ji", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = MISSp[n3].getBytes("ISO-8859-1");
            ji.QMarr[n3] = ji.bCz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return QMarr[n3];
    }

    public static String bCv(StatusEffectInstance statusEffectInstance) {
        int n2;
        long l2;
        block4: {
            block5: {
                l2 = ddkOp ^ 0x6A4D8876740FL;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        n2 = statusEffectInstance.isInfinite();
                        if (stringArray == null) break block4;
                        if (n2 == 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ji.bCy(matchException);
                    }
                    return ji.bCC("p", (int)22249, (long)(0x768FC0AE8D0D2F70L ^ l2));
                }
                catch (MatchException matchException) {
                    throw ji.bCy(matchException);
                }
            }
            n2 = statusEffectInstance.getDuration();
        }
        int n3 = n2;
        int n4 = n3 / ji.bCF("n", (int)28564, (long)(0x474A35C9E27A33E5L ^ l2));
        String string = String.format((String)((Object)ji.bCC("p", (int)25763, (long)(0x7BA11368CF089D3BL ^ l2))), n3 % ji.bCF("n", (int)2676, (long)(0x5864ED8FB0B5607L ^ l2)) / ji.bCF("n", (int)23611, (long)(0x333966AAB127804BL ^ l2)));
        return n4 + ":" + string;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ji.class, "bCE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(ji.class, "bCB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

