/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.component.ComponentType
 *  net.minecraft.component.type.ItemEnchantmentsComponent
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.registry.entry.RegistryEntry
 *  net.minecraft.util.Identifier
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.component.ComponentType;
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.RegistryKey;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.util.Identifier;

public class jh {
    private static long YGcvH;
    private static String[] UFhJb;
    private static String[] CBCUU;
    private static Map VrMuV;
    private static long[] FQUus;
    private static Integer[] Xnhyj;
    private static Map uTWcU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(jh.class);
        jh._39da9305c805eb0c03e3a7cb115b2336();
    }

    private static native Identifier bCl(String var0);

    private static native CallSite bCu(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException bCn(MatchException var0);

    private static native String bCm(String var0);

    private static native int bCt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String bCo(byte[] var0);

    public static native RegistryEntry<Enchantment> bCj(String var0);

    public static native ComponentType<ItemEnchantmentsComponent> bCi(ItemStack var0);

    private static native CallSite bCr(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native Object bCq(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int bCs(int var0, long var1);

    public static native String bCk(String var0);

    private static native String bCp(int var0, long var1);

    public static native int bCh(ItemStack var0, RegistryKey<Enchantment> var1);

    public static native boolean bCg(ItemStack var0, RegistryKey<Enchantment> var1);

    private static native void _39da9305c805eb0c03e3a7cb115b2336();
}

