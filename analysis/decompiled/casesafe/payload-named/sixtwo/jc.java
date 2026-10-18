/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.CooldownInstanceAccessor
 *  mixin.accessors.ItemCooldownsAccessor
 *  net.minecraft.block.Block
 *  net.minecraft.block.Blocks
 *  net.minecraft.client.render.item.ItemRenderState
 *  net.minecraft.client.texture.NativeImage
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.AttributeModifiersComponent
 *  net.minecraft.component.type.ChargedProjectilesComponent
 *  net.minecraft.component.type.WeaponComponent
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.enchantment.EnchantmentHelper
 *  net.minecraft.enchantment.Enchantments
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.attribute.EntityAttributeInstance
 *  net.minecraft.entity.attribute.EntityAttributeModifier
 *  net.minecraft.entity.attribute.EntityAttributes
 *  net.minecraft.entity.damage.DamageSource
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemDisplayContext
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.ItemUsageContext
 *  net.minecraft.item.Items
 *  net.minecraft.item.equipment.EquipmentType
 *  net.minecraft.registry.Registries
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.registry.tag.ItemTags
 *  net.minecraft.server.world.ServerWorld
 *  net.minecraft.text.Style
 *  net.minecraft.text.Text
 *  net.minecraft.util.ActionResult
 *  net.minecraft.util.Hand
 *  net.minecraft.util.HeldItemContext
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.random.Random
 *  net.minecraft.world.World
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
import net.minecraft.block.Block;
import net.minecraft.block.Blocks;
import net.minecraft.client.render.item.ItemRenderState;
import net.minecraft.client.texture.NativeImage;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.AttributeModifiersComponent;
import net.minecraft.component.type.ChargedProjectilesComponent;
import net.minecraft.component.type.WeaponComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.attribute.EntityAttributeInstance;
import net.minecraft.entity.attribute.EntityAttributeModifier;
import net.minecraft.entity.attribute.EntityAttributes;
import net.minecraft.entity.damage.DamageSource;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemDisplayContext;
import net.minecraft.item.ItemStack;
import net.minecraft.item.ItemUsageContext;
import net.minecraft.item.Items;
import net.minecraft.item.equipment.EquipmentType;
import net.minecraft.registry.Registries;
import net.minecraft.registry.RegistryKey;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.server.world.ServerWorld;
import net.minecraft.text.Style;
import net.minecraft.text.Text;
import net.minecraft.util.ActionResult;
import net.minecraft.util.Hand;
import net.minecraft.util.HeldItemContext;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.random.Random;
import net.minecraft.world.World;
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
    public static final Set<Item> WnbNG;
    public static final Set<Item> GjreY;
    public static final Set<Item> FFgfM;
    private static final Item vSOjt;
    private static final Map<String, Item> alGsc;
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

    public static boolean bzr(ItemStack itemStack) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = WedAj ^ 0x473B08F72EE9L;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        bl2 = jc.bzm(itemStack);
                        if (stringArray == null) break block4;
                        if (bl2) break block5;
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
            bl2 = jh.bCg(itemStack, (RegistryKey<Enchantment>)Enchantments.LUNGE);
        }
        return bl2;
    }

    public static boolean bzd(ItemStack itemStack, Class<? extends Item> clazz) {
        return itemStack.getItem().getClass().equals(clazz);
    }

    public static boolean bzt(ItemStack itemStack) {
        return jh.bCg(itemStack, (RegistryKey<Enchantment>)Enchantments.KNOCKBACK);
    }

    public static boolean bzb(ItemStack itemStack) {
        boolean bl2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = WedAj ^ 0x5310756235E5L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            bl2 = jc.bza(itemStack, EquipmentType.CHESTPLATE);
                            if (stringArray == null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        bl2 = itemStack.isOf(Items.ELYTRA);
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static int bze(ItemStack itemStack) {
        int n2;
        block8: {
            block9: {
                Object object;
                block6: {
                    long l2;
                    block7: {
                        l2 = WedAj ^ 0x67B7E8478A46L;
                        String[] stringArray = jf.bBe();
                        try {
                            try {
                                try {
                                    object = itemStack.isEmpty();
                                    if (stringArray == null) break block6;
                                    if (object != 0) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                                n2 = itemStack.isDamageable();
                                if (stringArray == null) break block8;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            if (n2 != 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    object = jc.bAd("q", (int)27274, (long)(0x4A1D673663258138L ^ l2));
                }
                return object;
            }
            n2 = itemStack.getMaxDamage() - itemStack.getDamage();
        }
        int n3 = n2;
        return (int)((double)n3 / (double)itemStack.getMaxDamage() * 100.0);
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

    public static float bzi(ItemStack itemStack) {
        float f2 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
        return mZ.csc(rD.dlmvG.player.getItemCooldownManager().getCooldownProgress(itemStack, f2) * 100.0f, 0);
    }

    public static List<Item> byY(Predicate<Item> predicate) {
        return WnbNG.stream().filter(predicate).toList();
    }

    public static List<Item> byZ(Predicate<Item> predicate) {
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

    public static int bzh(Item item) {
        Object v2;
        ItemCooldownsAccessor itemCooldownsAccessor;
        block4: {
            Object v3;
            block5: {
                long l2 = WedAj ^ 0x1606BEB4D43EL;
                itemCooldownsAccessor = (ItemCooldownsAccessor)rD.dlmvG.player.getItemCooldownManager();
                Map map = itemCooldownsAccessor.getCooldowns();
                v3 = map.get(Registries.ITEM.getId((Object)item));
                String[] stringArray = jf.bBe();
                try {
                    try {
                        v2 = v3;
                        if (stringArray == null) break block4;
                        if (v2 != null) break block5;
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
            v2 = v3;
        }
        CooldownInstanceAccessor cooldownInstanceAccessor = (CooldownInstanceAccessor)v2;
        double d2 = (float)itemCooldownsAccessor.getTickCount() + rD.dlmvG.getRenderTickCounter().getTickProgress(true);
        double d3 = (double)cooldownInstanceAccessor.getEndTime() - d2;
        return (int)Math.max(0.0, Math.ceil(d3));
    }

    public static boolean bza(ItemStack itemStack, EquipmentType equipmentType) {
        boolean bl2;
        long l2 = WedAj ^ 0x3711F805DA7L;
        EquipmentType equipmentType2 = jc.bzc(itemStack);
        try {
            bl2 = equipmentType2 == equipmentType;
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static float bzj(ItemStack itemStack) {
        double d2;
        double d3;
        double d4;
        block16: {
            EntityAttributeInstance entityAttributeInstance2;
            String[] stringArray;
            block15: {
                AttributeModifiersComponent attributeModifiersComponent;
                block14: {
                    ItemStack itemStack2;
                    block13: {
                        long l2 = WedAj ^ 0x5816C446EB08L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                if (rD.dlmvG.player == null) return 0.0f;
                                itemStack2 = itemStack;
                                if (stringArray == null) break block13;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            if (itemStack2 == null) return 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        itemStack2 = itemStack;
                    }
                    try {
                        if (itemStack2.isEmpty()) {
                            return 0.0f;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    entityAttributeInstance2 = new EntityAttributeInstance(EntityAttributes.ATTACK_SPEED, entityAttributeInstance -> {});
                    entityAttributeInstance2.setBaseValue(rD.dlmvG.player.getAttributeBaseValue(EntityAttributes.ATTACK_SPEED));
                    AttributeModifiersComponent attributeModifiersComponent2 = (AttributeModifiersComponent)itemStack.get(DataComponentTypes.ATTRIBUTE_MODIFIERS);
                    try {
                        attributeModifiersComponent = attributeModifiersComponent2;
                        if (stringArray == null) break block14;
                        if (attributeModifiersComponent == null) break block15;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    attributeModifiersComponent = attributeModifiersComponent2;
                }
                attributeModifiersComponent.applyModifiers(EquipmentSlot.MAINHAND, (registryEntry, entityAttributeModifier) -> {
                    long l2 = WedAj ^ 0x3B3D759D3DF7L;
                    try {
                        if (registryEntry == EntityAttributes.ATTACK_SPEED) {
                            entityAttributeInstance2.updateModifier(entityAttributeModifier);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                });
            }
            d4 = entityAttributeInstance2.getValue();
            try {
                try {
                    d3 = d4;
                    d2 = 0.0;
                    if (stringArray == null) return (float)(d3 / d2);
                    if (!(d3 <= d2)) break block16;
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
        d3 = 20.0;
        d2 = d4;
        return (float)(d3 / d2);
    }

    public static boolean bzk(ItemStack itemStack) {
        return itemStack.getComponents().contains(DataComponentTypes.FOOD);
    }

    public static boolean bzl(ItemStack itemStack) {
        return itemStack.isIn(ItemTags.AXES);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static String bzf(ItemStack itemStack) {
        int n2;
        long l2;
        block12: {
            block13: {
                String[] stringArray;
                block11: {
                    l2 = WedAj ^ 0xE20184F2F76L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            n2 = itemStack.isEmpty();
                            if (stringArray == null) break block11;
                            if (n2 != 0) return jc.bAa("o", (int)24893, (long)(0x1D0121355EED5684L ^ l2));
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        n2 = itemStack.isDamageable();
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    try {
                        if (stringArray == null) break block12;
                        if (n2 != 0) break block13;
                        return jc.bAa("o", (int)24893, (long)(0x1D0121355EED5684L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n2 = itemStack.getMaxDamage();
        }
        int n3 = n2;
        int n4 = itemStack.getDamage();
        try {
            if (n4 >= n3) {
                return jc.bAa("o", (int)20835, (long)(0x2A5D13158B6266D1L ^ l2));
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        double d2 = 100.0 - (double)n4 / (double)n3 * 100.0;
        return String.format((String)((Object)jc.bAa("o", (int)1325, (long)(0x1ED446C2F0D3B29EL ^ l2))), d2);
    }

    public static boolean bzo(ItemStack itemStack) {
        int n2;
        block6: {
            block5: {
                WeaponComponent weaponComponent;
                String[] stringArray;
                block4: {
                    long l2 = WedAj ^ 0x10E8AA7B1A21L;
                    WeaponComponent weaponComponent2 = (WeaponComponent)itemStack.get(DataComponentTypes.WEAPON);
                    stringArray = jf.bBe();
                    try {
                        weaponComponent = weaponComponent2;
                        if (stringArray == null) break block4;
                        if (weaponComponent == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    weaponComponent = weaponComponent2;
                }
                try {
                    float f2 = weaponComponent.disableBlockingForSeconds() - 0.0f;
                    n2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    if (stringArray == null) break block6;
                    if (n2 <= 0) break block5;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                n2 = 1;
                break block6;
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public static double bzg(Item item) {
        Object v2;
        ItemCooldownsAccessor itemCooldownsAccessor;
        block4: {
            Object v3;
            block5: {
                long l2 = WedAj ^ 0x2F733E18EAB9L;
                itemCooldownsAccessor = (ItemCooldownsAccessor)rD.dlmvG.player.getItemCooldownManager();
                Map map = itemCooldownsAccessor.getCooldowns();
                v3 = map.get(Registries.ITEM.getId((Object)item));
                String[] stringArray = jf.bBe();
                try {
                    try {
                        v2 = v3;
                        if (stringArray == null) break block4;
                        if (v2 != null) break block5;
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
            v2 = v3;
        }
        CooldownInstanceAccessor cooldownInstanceAccessor = (CooldownInstanceAccessor)v2;
        int n2 = itemCooldownsAccessor.getTickCount();
        int n3 = cooldownInstanceAccessor.getEndTime();
        float f2 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
        double d2 = (float)n3 - ((float)n2 + f2);
        return mZ.csb(Math.max(0.0, d2) * 50.0 / 1000.0, 1);
    }

    public static boolean bzn() {
        return jc.bzo(rD.dlmvG.player.getMainHandStack());
    }

    public static boolean bzm(ItemStack itemStack) {
        return itemStack.isIn(ItemTags.SPEARS);
    }

    public static boolean bzp(ItemStack itemStack) {
        boolean bl2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = WedAj ^ 0x156D6A90FEFDL;
                    stringArray = jf.bBe();
                    try {
                        try {
                            bl2 = itemStack.getDamage();
                            if (stringArray == null) break block6;
                            if (bl2 >= itemStack.getMaxDamage() - 1) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        bl2 = itemStack.isOf(Items.ELYTRA);
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean bzq(ItemStack itemStack) {
        return jh.bCg(itemStack, (RegistryKey<Enchantment>)Enchantments.WIND_BURST);
    }

    private static int bAb(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x46A7;
        if (ZHAjc[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = NCEKq[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uhkkf.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uhkkf.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jc.ZHAjc[n3] = n4;
        }
        return ZHAjc[n3];
    }

    public static float bzu(ItemStack itemStack, LivingEntity livingEntity) {
        EntityAttributeInstance entityAttributeInstance2;
        block8: {
            AttributeModifiersComponent attributeModifiersComponent;
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = WedAj ^ 0x4CF2A6C0034BL;
                    EntityAttributeInstance entityAttributeInstance3 = livingEntity.getAttributeInstance(EntityAttributes.ATTACK_DAMAGE);
                    entityAttributeInstance2 = new EntityAttributeInstance(EntityAttributes.ATTACK_DAMAGE, entityAttributeInstance -> {});
                    stringArray = jf.bBe();
                    entityAttributeInstance2.setBaseValue(entityAttributeInstance3.getBaseValue());
                    for (EntityAttributeModifier entityAttributeModifier2 : entityAttributeInstance3.getModifiers()) {
                        try {
                            entityAttributeInstance2.addTemporaryModifier(entityAttributeModifier2);
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
                    entityAttributeInstance2.removeModifier(Item.BASE_ATTACK_DAMAGE_MODIFIER_ID);
                }
                AttributeModifiersComponent attributeModifiersComponent2 = (AttributeModifiersComponent)itemStack.get(DataComponentTypes.ATTRIBUTE_MODIFIERS);
                try {
                    attributeModifiersComponent = attributeModifiersComponent2;
                    if (stringArray == null) break block7;
                    if (attributeModifiersComponent == null) break block8;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                attributeModifiersComponent = attributeModifiersComponent2;
            }
            attributeModifiersComponent.applyModifiers(EquipmentSlot.MAINHAND, (registryEntry, entityAttributeModifier) -> {
                long l2 = WedAj ^ 0x78A93D4D4339L;
                try {
                    if (registryEntry == EntityAttributes.ATTACK_DAMAGE) {
                        entityAttributeInstance2.updateModifier(entityAttributeModifier);
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            });
        }
        return (float)entityAttributeInstance2.getValue();
    }

    private static void bzH(StringBuilder stringBuilder, Style style) {
        int n2;
        long l2;
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
                                            Style style2;
                                            block26: {
                                                block27: {
                                                    l2 = WedAj ^ 0x4EC643400DB0L;
                                                    stringArray = jf.bBe();
                                                    try {
                                                        try {
                                                            style2 = style;
                                                            if (stringArray == null) break block26;
                                                            if (style2.getColor() == null) break block27;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jc.bzW(matchException);
                                                        }
                                                        n2 = style.getColor().getRgb();
                                                        if (stringArray == null) break block28;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jc.bzW(matchException);
                                                    }
                                                    Character c2 = jk.bDx(n2);
                                                    try {
                                                        if (c2 != null) {
                                                            stringBuilder.append((char)jc.bAd("q", (int)29286, (long)(0x1E507CC8DF729E2BL ^ l2))).append(c2);
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jc.bzW(matchException);
                                                    }
                                                }
                                                style2 = style;
                                            }
                                            n2 = style2.isBold();
                                        }
                                        try {
                                            try {
                                                if (stringArray == null) break block29;
                                                if (n2 == 0) break block30;
                                            }
                                            catch (MatchException matchException) {
                                                throw jc.bzW(matchException);
                                            }
                                            stringBuilder.append((String)((Object)jc.bAa("o", (int)16883, (long)(0x7DD5AAAB28AFD48AL ^ l2))));
                                        }
                                        catch (MatchException matchException) {
                                            throw jc.bzW(matchException);
                                        }
                                    }
                                    n2 = style.isItalic() ? 1 : 0;
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block31;
                                        if (n2 == 0) break block32;
                                    }
                                    catch (MatchException matchException) {
                                        throw jc.bzW(matchException);
                                    }
                                    stringBuilder.append((String)((Object)jc.bAa("o", (int)30876, (long)(0x1EF17EE49D7CEDEDL ^ l2))));
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                            }
                            n2 = style.isUnderlined() ? 1 : 0;
                        }
                        try {
                            try {
                                if (stringArray == null) break block33;
                                if (n2 == 0) break block34;
                            }
                            catch (MatchException matchException) {
                                throw jc.bzW(matchException);
                            }
                            stringBuilder.append((String)((Object)jc.bAa("o", (int)10733, (long)(0x491A415659993C9EL ^ l2))));
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    n2 = style.isStrikethrough() ? 1 : 0;
                }
                try {
                    try {
                        if (stringArray == null) break block35;
                        if (n2 == 0) break block36;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    stringBuilder.append((String)((Object)jc.bAa("o", (int)25573, (long)(0x7C29E3D0E4937697L ^ l2))));
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n2 = style.isObfuscated() ? 1 : 0;
        }
        try {
            if (n2 != 0) {
                stringBuilder.append((String)((Object)jc.bAa("o", (int)24338, (long)(0x646D7F6E32424A62L ^ l2))));
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
    }

    public static boolean bzI(Item item) {
        long l2 = WedAj ^ 0x3709BB6E6CF3L;
        return jc.bzL(item, (String)((Object)jc.bAa("o", (int)29443, (long)(0x3EC1E65DD45F073AL ^ l2))), World.class, PlayerEntity.class, Hand.class);
    }

    public static int bzU() {
        return jlfNZ;
    }

    /*
     * Unable to fully structure code
     */
    public static Item bzz(String var0) {
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
                                        var4_3 = (Item)v0;
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
                                var6_5 = Identifier.tryParse((String)var0);
                                try {
                                    try {
                                        v8 = var6_5;
                                        if (var3_2 == null) break block30;
                                        if (v8 == null) break block31;
                                    }
                                    catch (MatchException v9) {
                                        throw jc.bzW(v9);
                                    }
                                    v8 = Registries.ITEM.getOptionalValue(var6_5).orElse(null);
                                }
                                catch (MatchException v10) {
                                    throw jc.bzW(v10);
                                }
                            }
                            var5_4 = (Item)v8;
                        }
                        if (var5_4 != null) break block36;
                        for (Item var8_7 : Registries.ITEM) {
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
                                    if (v11.equals(var8_7.getTranslationKey())) {
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
    public static mG bzB(Item var0) {
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
                                        var4_3 = Registries.ITEM.getId((Object)var0);
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
                        var7_6 = rD.dlmvG.getResourceManager().open(var6_5);
                        var8_8 = NativeImage.read((InputStream)var7_6);
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

    private static mG bzC(NativeImage nativeImage, int n2) {
        float f2;
        float f3;
        float f4;
        mG mG2;
        block28: {
            float f5;
            block29: {
                double d2;
                double d3;
                mG mG3;
                double d4;
                String[] stringArray;
                double d5;
                double d6;
                block27: {
                    int n3;
                    double d7;
                    block20: {
                        long l2 = WedAj ^ 0x20EEFC065516L;
                        int n4 = nativeImage.getWidth();
                        int n5 = nativeImage.getHeight();
                        d7 = 0.0;
                        d6 = 0.0;
                        d5 = 0.0;
                        stringArray = jf.bBe();
                        d4 = 0.0;
                        mG3 = mG.hoGuU;
                        float f6 = -1.0f;
                        int n6 = 0;
                        block16: while (true) {
                            int n7 = n6;
                            block17: while (n7 < n5) {
                                n3 = 0;
                                if (stringArray == null) break block20;
                                int n8 = n3;
                                while (n8 < n4) {
                                    block26: {
                                        block23: {
                                            int n9;
                                            int n10;
                                            int n11;
                                            int n12;
                                            block24: {
                                                int n13;
                                                block21: {
                                                    block22: {
                                                        n7 = (n8 + n6 * n4) % n2;
                                                        if (stringArray == null) continue block17;
                                                        try {
                                                            if (stringArray == null) break block21;
                                                            if (n7 == 0) break block22;
                                                            break block23;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jc.bzW(matchException);
                                                        }
                                                    }
                                                    n13 = nativeImage.getColorArgb(n8, n6);
                                                }
                                                void var19_16 = n13;
                                                int n14 = var19_16 >> jc.bAd("q", (int)25841, (long)(0x1A29EBF464F35010L ^ l2)) & jc.bAd("q", (int)22631, (long)(0x7112DAF392D8EC84L ^ l2));
                                                n12 = var19_16 >> jc.bAd("q", (int)13107, (long)(0x4BE67E9FB97A07DDL ^ l2)) & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l2));
                                                n11 = var19_16 >> jc.bAd("q", (int)19805, (long)(0x710E407F1689F9A9L ^ l2)) & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l2));
                                                n10 = var19_16 & jc.bAd("q", (int)24819, (long)(0x3F36EF9CAF3D541BL ^ l2));
                                                try {
                                                    block25: {
                                                        try {
                                                            try {
                                                                n9 = n14;
                                                                if (stringArray == null) break block24;
                                                                if (n9 >= jc.bAd("q", (int)18498, (long)(0x54072DA9B867CA2L ^ l2))) break block25;
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
                                                    n9 = n12;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jc.bzW(matchException);
                                                }
                                            }
                                            mG mG4 = mG.cnP(n9, n11, n10);
                                            float f7 = mG4.cok();
                                            float f8 = mG4.coj();
                                            float f9 = (0.35f + f7 * 0.65f) * (0.45f + f8 * 0.55f);
                                            d7 += (double)((float)n12 * f9);
                                            d6 += (double)((float)n11 * f9);
                                            d5 += (double)((float)n10 * f9);
                                            d4 += (double)f9;
                                            float f10 = f7 * 0.7f + f8 * 0.3f;
                                            try {
                                                if (stringArray == null) break block26;
                                                if (!(f10 > f6)) break block23;
                                            }
                                            catch (MatchException matchException) {
                                                throw jc.bzW(matchException);
                                            }
                                            f6 = f10;
                                            mG3 = mG4;
                                        }
                                        ++n8;
                                    }
                                    if (stringArray != null) continue;
                                }
                                ++n6;
                                if (stringArray != null) continue block16;
                            }
                            break;
                        }
                        try {
                            d3 = d4;
                            d2 = 0.0;
                            if (stringArray == null) break block27;
                            double d8 = d3 - d2;
                            n3 = d8 == 0.0 ? 0 : (d8 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                    }
                    try {
                        if (n3 <= 0) {
                            return mG.hoGuU;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    d3 = d7;
                    d2 = d4;
                }
                mG mG5 = mG.cnP((float)(d3 / d2), (float)(d6 / d4), (float)(d5 / d4));
                mG2 = mG5.coc(mG3, 0.35f);
                f5 = mG2.cok();
                f4 = mG2.coj();
                try {
                    f3 = f5;
                    f2 = 0.2f;
                    if (stringArray == null) break block28;
                    if (!(f3 > f2)) break block29;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                f5 = Math.min(1.0f, f5 * 1.1f);
            }
            f4 = Math.min(1.0f, Math.max(0.72f, f4 * 1.25f));
            f3 = mG2.coi();
            f2 = f5;
        }
        return mG.cnS(f3, f2, f4).coa(mG2.cou());
    }

    public static String bzF(Item item) {
        Item item2;
        block4: {
            block5: {
                long l2 = WedAj ^ 0x149A04DD7A9EL;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        item2 = item;
                        if (stringArray == null) break block4;
                        if (item2 != null) break block5;
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
            item2 = item;
        }
        return item2.getDefaultStack().getName().getString();
    }

    private static boolean bzL(Item item, String string, Class<?> ... classArray) {
        long l2 = WedAj ^ 0x11A5EC7FA41AL;
        try {
            boolean bl2;
            try {
                bl2 = item.getClass().getMethod(string, classArray).getDeclaringClass() != Item.class;
            }
            catch (NoSuchMethodException noSuchMethodException) {
                throw jc.bzW(noSuchMethodException);
            }
            return bl2;
        }
        catch (NoSuchMethodException noSuchMethodException) {
            return false;
        }
    }

    private static Object bzZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jc.bzY(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static Set<Item> bzN() {
        Field[] fieldArray;
        long l2 = WedAj ^ 0x3D0C2FFEE6D9L;
        LinkedHashSet<Item> linkedHashSet = new LinkedHashSet<Item>();
        Class<Blocks> clazz = Blocks.class;
        for (Field field : fieldArray = clazz.getDeclaredFields()) {
            try {
                Block block;
                Object object = field.get(null);
                if (!(object instanceof Block) || (block = (Block)object).asItem() == Items.AIR) continue;
                linkedHashSet.add(block.asItem());
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static boolean bzx() {
        int n2;
        block27: {
            block28: {
                oI oI2;
                Optional<Hand> optional;
                int n3;
                String[] stringArray;
                block23: {
                    int n4;
                    block24: {
                        boolean bl2;
                        block21: {
                            block22: {
                                block19: {
                                    block20: {
                                        long l2 = WedAj ^ 0x6596B23E856CL;
                                        ItemStack itemStack = rD.dlmvG.player.getEquippedStack(EquipmentSlot.CHEST);
                                        stringArray = jf.bBe();
                                        try {
                                            try {
                                                bl2 = itemStack.isOf(Items.ELYTRA);
                                                if (stringArray == null) break block19;
                                                if (bl2) break block20;
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
                                    bl2 = rD.dlmvG.player.isGliding();
                                }
                                try {
                                    try {
                                        try {
                                            if (stringArray == null) break block21;
                                            if (!bl2) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw jc.bzW(matchException);
                                        }
                                        n4 = rD.dlmvG.player.isUsingItem();
                                        if (stringArray == null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw jc.bzW(matchException);
                                    }
                                    if (n4 == 0) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw jc.bzW(matchException);
                                }
                            }
                            bl2 = false;
                        }
                        return bl2;
                    }
                    n4 = n3 = rD.dlmvG.player.getInventory().getSelectedSlot();
                }
                if ((optional = oR.cKi(Items.FIREWORK_ROCKET)).isEmpty()) {
                    oI oI3;
                    block25: {
                        block26: {
                            oI2 = oP.cJm().cJu(Items.FIREWORK_ROCKET);
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
                    optional = Optional.of(Hand.MAIN_HAND);
                }
                oI2 = rD.dlmvG.interactionManager.interactItem((PlayerEntity)rD.dlmvG.player, optional.get());
                try {
                    try {
                        n2 = n3;
                        if (stringArray == null) break block27;
                        oR.cJS(n2);
                        if (oI2 == ActionResult.FAIL) break block28;
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                    n2 = 1;
                    break block27;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static mG bzA(Item var0) {
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
                                        var4_3 = Registries.ITEM.getId((Object)var0);
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
                        var7_6 = rD.dlmvG.getResourceManager().open(var6_5);
                        var8_8 = NativeImage.read((InputStream)var7_6);
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

    public static String bzG(Text text) {
        StringBuilder stringBuilder = new StringBuilder();
        boolean[] blArray = new boolean[]{true};
        text.visit((style, string) -> {
            block11: {
                int n2;
                boolean[] blArray2;
                boolean bl2;
                long l2;
                block9: {
                    String[] stringArray;
                    block10: {
                        l2 = WedAj ^ 0x773EEA3E8843L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                bl2 = string.isEmpty();
                                if (stringArray == null) break block9;
                                if (!bl2) break block10;
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
                        n2 = 0;
                        if (stringArray == null) break block11;
                        bl2 = blArray2[n2];
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (!bl2) {
                        stringBuilder.append((String)((Object)jc.bAa("o", (int)25640, (long)(0x69B00FF0AF4374A0L ^ l2))));
                    }
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                jc.bzH(stringBuilder, style);
                stringBuilder.append(string);
                blArray2 = blArray;
                n2 = 0;
            }
            blArray2[n2] = false;
            return Optional.empty();
        }, Style.EMPTY);
        return stringBuilder.toString();
    }

    public static int bzV() {
        int n2 = jc.bzU();
        try {
            if (n2 == 0) {
                return 18;
            }
        }
        catch (MatchException matchException) {
            throw jc.bzW(matchException);
        }
        return 0;
    }

    public static boolean bzJ(Item item) {
        long l2 = WedAj ^ 0x687D2F51F432L;
        return jc.bzL(item, (String)((Object)jc.bAa("o", (int)76, (long)(0x5CD8D96AC7A66CB8L ^ l2))), ItemUsageContext.class);
    }

    public static boolean bzw(LivingEntity livingEntity) {
        double d2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = WedAj ^ 0x73CF09DC9D40L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            double d3 = livingEntity.fallDistance - 1.5;
                            d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                            if (stringArray == null) break block6;
                            if (d2 <= 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jc.bzW(matchException);
                        }
                        d2 = (double)livingEntity.isGliding();
                    }
                    catch (MatchException matchException) {
                        throw jc.bzW(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (d2 != false) break block7;
                }
                catch (MatchException matchException) {
                    throw jc.bzW(matchException);
                }
                d2 = 1.0;
                break block8;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    public static String bzE(ItemStack itemStack) {
        return jc.bzG(itemStack.getName());
    }

    /*
     * Unable to fully structure code
     */
    public static Identifier bzD(Item var0) {
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

                    var4_3 = v0.getDefaultStack();
                    var5_5 = new ItemRenderState();
                    rD.dlmvG.getItemModelManager().clearAndUpdate(var5_5, var4_3, ItemDisplayContext.GUI, (World)rD.dlmvG.world, (HeldItemContext)rD.dlmvG.player, 0);
                    var6_6 = var5_5.getParticleSprite(Random.create((long)0L));
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
            var7_7 = v3.getContents().getId();
            return Identifier.tryParse((String)(var7_7.getNamespace() + (String)jc.bAa("o", (int)14745, (long)(7329241294461013037L ^ var1_1)) + var7_7.getPath() + (String)jc.bAa("o", (int)6813, (long)(854439150398418726L ^ var1_1))));
        }
        catch (Exception var4_4) {
            return null;
        }
    }

    private static Set<Item> bzM() {
        Field[] fieldArray;
        long l2 = WedAj ^ 0xFF58004F622L;
        LinkedHashSet<Item> linkedHashSet = new LinkedHashSet<Item>();
        Class<Items> clazz = Items.class;
        for (Field field : fieldArray = clazz.getDeclaredFields()) {
            try {
                Item item;
                Object object = field.get(null);
                if (!(object instanceof Item) || (item = (Item)object) == Items.AIR) continue;
                linkedHashSet.add(item);
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static void bzT(int n2) {
        jlfNZ = n2;
    }

    public static ChargedProjectilesComponent bzy(ItemStack itemStack) {
        return (ChargedProjectilesComponent)itemStack.get(DataComponentTypes.CHARGED_PROJECTILES);
    }

    /*
     * Unable to fully structure code
     */
    public static float bzv(Entity var0, float var1_1, DamageSource var2_2) {
        block21: {
            block26: {
                block25: {
                    block23: {
                        block24: {
                            block22: {
                                block20: {
                                    var3_3 = jc.WedAj ^ 7527286412367L;
                                    var6_4 = var2_2.getSource();
                                    var5_5 = jf.bBe();
                                    try {
                                        try {
                                            v0 = var6_4;
                                            if (var5_5 == null) break block20;
                                            if (!(v0 instanceof LivingEntity)) break block21;
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
                                var7_6 = (LivingEntity)v0;
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
                                var12_9 = var7_6.fallDistance;
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
                    var16_11 = var7_6.getEntityWorld();
                    try {
                        try {
                            v11 = var16_11;
                            if (var5_5 == null) break block25;
                            if (!(v11 instanceof ServerWorld)) break block26;
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
                var17_12 = (ServerWorld)v11;
                return (float)(var14_10 + (double)EnchantmentHelper.getSmashDamagePerFallenBlock((ServerWorld)var17_12, (ItemStack)var7_6.getWeaponStack(), (Entity)var0, (DamageSource)var2_2, (float)0.0f) * var12_9);
            }
            return (float)var14_10;
        }
        return 0.0f;
    }

    public static boolean bzK(Item item) {
        long l2 = WedAj ^ 0x2D68DB775FBL;
        return jc.bzL(item, (String)((Object)jc.bAa("o", (int)20168, (long)(0x7A0FAC25126923FDL ^ l2))), ItemStack.class, PlayerEntity.class, LivingEntity.class, Hand.class);
    }

    private static String bzY(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3F96;
        if (GXVbC[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])baifd.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    baifd.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jc", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = UOSQi[n3].getBytes("ISO-8859-1");
            jc.GXVbC[n3] = jc.bzX(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return GXVbC[n3];
    }

    private static int bAc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jc.bAb(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String bzX(byte[] byArray) {
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
        v15 = new Item[jc.bAd("q", (int)28173, (long)(7959716020461767086L ^ var20))];
        v15[0] = Items.SHULKER_BOX;
        v15[1] = Items.WHITE_SHULKER_BOX;
        v15[2] = Items.ORANGE_SHULKER_BOX;
        v15[3] = Items.MAGENTA_SHULKER_BOX;
        v15[4] = Items.LIGHT_BLUE_SHULKER_BOX;
        v15[5] = Items.YELLOW_SHULKER_BOX;
        v15[jc.bAd("q", (int)23554, (long)(2561424996368268198L ^ var20))] = Items.LIME_SHULKER_BOX;
        v15[jc.bAd("q", (int)16110, (long)(618795366467721553L ^ var20))] = Items.PINK_SHULKER_BOX;
        v15[jc.bAd("q", (int)530, (long)(564843112810702269L ^ var20))] = Items.GRAY_SHULKER_BOX;
        v15[jc.bAd("q", (int)18511, (long)(91995185070583786L ^ var20))] = Items.LIGHT_GRAY_SHULKER_BOX;
        v15[jc.bAd("q", (int)1805, (long)(4702210129977663651L ^ var20))] = Items.CYAN_SHULKER_BOX;
        v15[jc.bAd("q", (int)28448, (long)(6515264552589985950L ^ var20))] = Items.PURPLE_SHULKER_BOX;
        v15[jc.bAd("q", (int)1524, (long)(2652687055726436953L ^ var20))] = Items.BLUE_SHULKER_BOX;
        v15[jc.bAd("q", (int)21200, (long)(5702791272268674416L ^ var20))] = Items.BROWN_SHULKER_BOX;
        v15[jc.bAd("q", (int)6643, (long)(8917329054465621599L ^ var20))] = Items.GREEN_SHULKER_BOX;
        v15[jc.bAd("q", (int)6839, (long)(5662279751145291019L ^ var20))] = Items.RED_SHULKER_BOX;
        v15[jc.bAd("q", (int)7895, (long)(1852830847504972145L ^ var20))] = Items.BLACK_SHULKER_BOX;
        jc.FFgfM = Set.of(v15);
        jc.vSOjt = Items.AIR;
        jc.alGsc = new ConcurrentHashMap<String, Item>();
        jc.xxvZl = new ConcurrentHashMap<String, mG>();
        jc.IckfH = new ConcurrentHashMap<String, mG>();
    }

    public static boolean bzs(ItemStack itemStack) {
        return jh.bCg(itemStack, (RegistryKey<Enchantment>)Enchantments.BREACH);
    }

    /*
     * Exception decompiling
     */
    public static EquipmentType bzc(ItemStack var0) {
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
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

