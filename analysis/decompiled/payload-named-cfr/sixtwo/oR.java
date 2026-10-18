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
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayerInteractionManager
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.ItemEnchantmentsComponent
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.entity.player.PlayerInventory
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.item.equipment.EquipmentType
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket
 *  net.minecraft.registry.tag.ItemTags
 *  net.minecraft.screen.ScreenHandler
 *  net.minecraft.screen.slot.Slot
 *  net.minecraft.screen.slot.SlotActionType
 *  net.minecraft.screen.sync.ComponentChangesHash$ComponentHasher
 *  net.minecraft.screen.sync.ItemStackHash
 *  net.minecraft.util.Hand
 *  net.minecraft.util.collection.DefaultedList
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
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerInteractionManager;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.item.equipment.EquipmentType;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket;
import net.minecraft.registry.tag.ItemTags;
import net.minecraft.screen.ScreenHandler;
import net.minecraft.screen.slot.Slot;
import net.minecraft.screen.slot.SlotActionType;
import net.minecraft.screen.sync.ComponentChangesHash;
import net.minecraft.screen.sync.ItemStackHash;
import net.minecraft.util.Hand;
import net.minecraft.util.collection.DefaultedList;
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

    public static oJ cJM(int n2) {
        return new oJ(n2);
    }

    public static oG cJR() {
        return new oG();
    }

    public static int cKu() {
        int n2 = oR.cKt();
        try {
            if (n2 == 0) {
                return 31;
            }
        }
        catch (MatchException matchException) {
            throw oR.cKv(matchException);
        }
        return 0;
    }

    public static boolean cJT() {
        boolean bl2;
        block4: {
            block5: {
                long l2 = KOfQd ^ 0x6E0574BDBC58L;
                int n2 = oR.cKu();
                try {
                    try {
                        bl2 = rD.dlmvG.player.getInventory().getEmptySlot();
                        if (n2 == 0) break block4;
                        if (bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    bl2 = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public static void cKc(int n2) {
        long l2 = KOfQd ^ 0x5B5569F2A0BAL;
        try {
            if (rD.dlmvG.getNetworkHandler() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw oR.cKv(matchException);
        }
        int n3 = oR.cJU(n2);
        rD.dlmvG.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n3, (int)oR.cKy("q", (int)2855, (long)(0x4757651B4B150E70L ^ l2)), SlotActionType.SWAP, (PlayerEntity)rD.dlmvG.player);
    }

    public static boolean cKf(oK oK2, int n2) {
        oJ oJ2 = oR.cJM(n2);
        oR.cJW(oK2, oJ2);
        return true;
    }

    public static void cJY(int n2, int n3) {
        oR.cJZ(n2, n3, false);
    }

    public static int cKt() {
        return HMydo;
    }

    public static void cKd(int n2, int n3) {
        MinecraftClient minecraftClient;
        block4: {
            block5: {
                long l2 = KOfQd ^ 0x3B072321D15AL;
                int n4 = oR.cKt();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (n4 != 0) break block4;
                        if (minecraftClient.getNetworkHandler() != null) break block5;
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
            minecraftClient = rD.dlmvG;
        }
        minecraftClient.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, n3, SlotActionType.SWAP, (PlayerEntity)rD.dlmvG.player);
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
                int n2;
                block8: {
                    block9: {
                        long l2 = KOfQd ^ 0x6981D775A22EL;
                        n2 = oR.cKu();
                        try {
                            try {
                                if (n2 == 0) break block8;
                                if (rD.dlmvG.getNetworkHandler() != null) break block9;
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
                        if (n2 == 0) break block10;
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

    public static void cKa(int n2, int n3) {
        MinecraftClient minecraftClient;
        block4: {
            block5: {
                long l2 = KOfQd ^ 0x25803931CDFFL;
                int n4 = oR.cKu();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (n4 == 0) break block4;
                        if (minecraftClient.getNetworkHandler() != null) break block5;
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
            rD.dlmvG.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, 1, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
            minecraftClient = rD.dlmvG;
        }
        minecraftClient.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n3, 0, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
    }

    public static boolean cKe(oK oK2, int n2) {
        oI oI2 = oR.cJK(n2);
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

    public static void cKh(ScreenHandler screenHandler, Slot slot) {
        ItemStack itemStack;
        Iterator iterator;
        block9: {
            long l2 = KOfQd ^ 0xF3D2B88E270L;
            DefaultedList defaultedList = screenHandler.slots;
            int n2 = defaultedList.size();
            ArrayList arrayList = Lists.newArrayListWithCapacity((int)n2);
            iterator = defaultedList.iterator();
            int n3 = oR.cKt();
            while (iterator.hasNext()) {
                Slot slot2 = (Slot)iterator.next();
                arrayList.add(slot2.getStack().copy());
                if (n3 == 0) continue;
                iS.bwK("kTf95b");
                break;
            }
            iterator = new Int2ObjectOpenHashMap();
            int n4 = 0;
            while (n4 < n2) {
                block8: {
                    block10: {
                        ItemStack itemStack2 = (ItemStack)arrayList.get(n4);
                        ItemStack itemStack3 = ((Slot)defaultedList.get(n4)).getStack();
                        try {
                            try {
                                try {
                                    if (n3 != 0) break block8;
                                    itemStack = itemStack2;
                                    if (n3 != 0) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (ItemStack.areEqual((ItemStack)itemStack, (ItemStack)itemStack3)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            iterator.put(n4, ItemStackHash.fromItemStack((ItemStack)itemStack3, (ComponentChangesHash.ComponentHasher)rD.dlmvG.getNetworkHandler().getComponentHasher()));
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    ++n4;
                }
                if (n3 == 0) continue;
            }
            itemStack = screenHandler.getCursorStack();
        }
        ItemStackHash itemStackHash = ItemStackHash.fromItemStack((ItemStack)itemStack, (ComponentChangesHash.ComponentHasher)rD.dlmvG.getNetworkHandler().getComponentHasher());
        rD.dlmvG.getNetworkHandler().sendPacket((Packet)new ClickSlotC2SPacket(screenHandler.syncId, screenHandler.getRevision(), Shorts.checkedCast((long)slot.id), SignedBytes.checkedCast((long)0L), SlotActionType.PICKUP, (Int2ObjectMap)iterator, itemStackHash));
    }

    public static oH cJL(int n2) {
        return new oH(n2);
    }

    public static void cKb(int n2, int n3) {
        MinecraftClient minecraftClient;
        block4: {
            block5: {
                long l2 = KOfQd ^ 0x1E3698ADFF74L;
                int n4 = oR.cKu();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (n4 == 0) break block4;
                        if (minecraftClient.getNetworkHandler() != null) break block5;
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
            rD.dlmvG.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, 0, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
            rD.dlmvG.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n3, 1, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
            minecraftClient = rD.dlmvG;
        }
        minecraftClient.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, 0, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
    }

    public static void cKg(oK oK2) {
        oG oG2 = oR.cJR();
        oR.cJW(oK2, oG2);
    }

    public static boolean cKj(Hand hand) {
        return jc.bzl(rD.dlmvG.player.getStackInHand(hand));
    }

    public static void cJX(int n2) {
        MinecraftClient minecraftClient;
        block4: {
            block5: {
                long l2 = KOfQd ^ 0x40064FFE27FCL;
                int n3 = oR.cKu();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (n3 == 0) break block4;
                        if (minecraftClient.getNetworkHandler() != null) break block5;
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
            minecraftClient = rD.dlmvG;
        }
        minecraftClient.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, 0, SlotActionType.QUICK_MOVE, (PlayerEntity)rD.dlmvG.player);
    }

    public static boolean cJV(LivingEntity livingEntity) {
        boolean bl2;
        block10: {
            block12: {
                block11: {
                    long l2 = KOfQd ^ 0x40D17E3AE5B6L;
                    ItemStack itemStack = livingEntity.getMainHandStack();
                    int n2 = oR.cKu();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = itemStack.isIn(ItemTags.SWORDS);
                                        if (n2 == 0) break block10;
                                        if (bl2) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                    bl2 = jc.bzl(itemStack);
                                    if (n2 == 0) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            bl2 = itemStack.isOf(Items.MACE);
                            if (n2 == 0) break block10;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        if (!bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static void cJZ(int n2, int n3, boolean bl2) {
        block11: {
            ClientPlayerEntity clientPlayerEntity;
            SlotActionType slotActionType;
            int n4;
            int n5;
            int n6;
            ClientPlayerInteractionManager clientPlayerInteractionManager;
            block10: {
                MinecraftClient minecraftClient;
                int n7;
                block8: {
                    block9: {
                        long l2 = KOfQd ^ 0x43941907DBCL;
                        n7 = oR.cKt();
                        try {
                            try {
                                minecraftClient = rD.dlmvG;
                                if (n7 != 0) break block8;
                                if (minecraftClient.getNetworkHandler() != null) break block9;
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
                    rD.dlmvG.interactionManager.clickSlot(rD.dlmvG.player.currentScreenHandler.syncId, n2, 0, SlotActionType.PICKUP, (PlayerEntity)rD.dlmvG.player);
                    minecraftClient = rD.dlmvG;
                }
                try {
                    try {
                        clientPlayerInteractionManager = minecraftClient.interactionManager;
                        n6 = rD.dlmvG.player.currentScreenHandler.syncId;
                        n5 = n3;
                        n4 = 0;
                        slotActionType = SlotActionType.PICKUP;
                        clientPlayerEntity = rD.dlmvG.player;
                        if (n7 != 0) break block10;
                        clientPlayerInteractionManager.clickSlot(n6, n5, n4, slotActionType, (PlayerEntity)clientPlayerEntity);
                        if (!bl2) break block11;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                    clientPlayerInteractionManager = rD.dlmvG.interactionManager;
                    n6 = rD.dlmvG.player.currentScreenHandler.syncId;
                    n5 = n2;
                    n4 = 0;
                    slotActionType = SlotActionType.PICKUP;
                    clientPlayerEntity = rD.dlmvG.player;
                }
                catch (MatchException matchException) {
                    throw oR.cKv(matchException);
                }
            }
            clientPlayerInteractionManager.clickSlot(n6, n5, n4, slotActionType, (PlayerEntity)clientPlayerEntity);
        }
    }

    public static oI cJK(int n2) {
        return new oI(n2);
    }

    public static int cJU(int n2) {
        int n3;
        block6: {
            block5: {
                Object object;
                int n4;
                block4: {
                    long l2 = KOfQd ^ 0x5BDEFF17180L;
                    int n5 = oR.cKu();
                    try {
                        try {
                            n4 = n2;
                            object = PlayerInventory.getHotbarSize();
                            if (n5 == 0) break block4;
                            if (n4 >= object) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        n4 = n2;
                        object = oR.cKy("q", (int)27928, (long)(0x60089CAAC2E93973L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                n3 = n4 + object;
                break block6;
            }
            n3 = n2;
        }
        return n3;
    }

    public static oJ cJN() {
        return oR.cJM(3);
    }

    public static Optional<Hand> cKi(Item item) {
        long l2 = KOfQd ^ 0x33F03A40137AL;
        Hand[] handArray = Hand.values();
        int n2 = handArray.length;
        int n3 = 0;
        int n4 = oR.cKt();
        while (n3 < n2) {
            block5: {
                block6: {
                    Hand hand = handArray[n3];
                    try {
                        try {
                            if (n4 != 0) break block5;
                            if (!rD.dlmvG.player.getStackInHand(hand).isOf(item)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        return Optional.of(hand);
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                ++n3;
            }
            if (n4 == 0) continue;
        }
        return Optional.empty();
    }

    public static void cJS(int n2) {
        PlayerInventory playerInventory;
        block14: {
            block15: {
                Object object;
                int n3;
                block12: {
                    int n4;
                    block13: {
                        block11: {
                            long l2;
                            block10: {
                                l2 = KOfQd ^ 0x20AA8BA32323L;
                                n4 = oR.cKu();
                                try {
                                    n3 = n2;
                                    if (n4 == 0) break block10;
                                    if (n3 < 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                n3 = n2;
                            }
                            try {
                                object = oR.cKy("q", (int)28195, (long)(0x3038C285A787E8EEL ^ l2));
                                if (n4 == 0) break block12;
                                if (n3 <= object) break block13;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                        }
                        return;
                    }
                    try {
                        playerInventory = rD.dlmvG.player.getInventory();
                        if (n4 == 0) break block14;
                        n3 = playerInventory.getSelectedSlot();
                        object = n2;
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                try {
                    try {
                        if (n3 != object || rD.dlZ().dbs() != n2) break block15;
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
            playerInventory = rD.dlmvG.player.getInventory();
        }
        playerInventory.setSelectedSlot(n2);
        ((MultiPlayerGameModeAccessor)rD.dlmvG.interactionManager).callEnsureHasSentCarriedItem();
    }

    public static LinkedList<Integer> cKm(EquipmentType equipmentType) {
        long l2 = KOfQd ^ 0x38493FDF3469L;
        return oR.cKn(equipmentType, (int)oR.cKy("q", (int)24534, (long)(0x66218F1171B6CE53L ^ l2)), (int)oR.cKy("q", (int)30501, (long)(0x42EFB2C742C066A5L ^ l2)));
    }

    public static int cKl(EquipmentType equipmentType, int n2, int n3) {
        int n4;
        block23: {
            long l2 = KOfQd ^ 0x564B9235DB07L;
            PlayerInventory playerInventory = rD.dlmvG.player.getInventory();
            int n5 = -1;
            int n6 = oR.cKu();
            Object object = oR.cKy("q", (int)32528, (long)(0x7173C081422E81FDL ^ l2));
            int n7 = n2;
            while (n7 <= n3) {
                block31: {
                    block26: {
                        int n8;
                        block29: {
                            ItemStack itemStack;
                            block27: {
                                block24: {
                                    itemStack = playerInventory.getStack(n7);
                                    try {
                                        block25: {
                                            try {
                                                try {
                                                    try {
                                                        n4 = itemStack.isEmpty() ? 1 : 0;
                                                        if (n6 == 0) break block23;
                                                        if (n6 == 0) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oR.cKv(matchException);
                                                    }
                                                    if (n4 == 0) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                                if (n6 != 0) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                        }
                                        n8 = itemStack.contains(DataComponentTypes.EQUIPPABLE);
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                }
                                try {
                                    block28: {
                                        try {
                                            try {
                                                if (n6 == 0) break block27;
                                                if (n8 != 0) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                            if (n6 != 0) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                    }
                                    n8 = jc.bza(itemStack, equipmentType);
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                            }
                            try {
                                block30: {
                                    try {
                                        try {
                                            if (n6 == 0) break block29;
                                            if (n8 != 0) break block30;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                        if (n6 != 0) break block26;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                }
                                n8 = oR.cKo(itemStack, itemStack.getEnchantments());
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                        }
                        int n9 = n8;
                        try {
                            if (n6 == 0) break block31;
                            if (n9 <= object) break block26;
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                        object = n9;
                        n5 = n7;
                    }
                    ++n7;
                }
                if (n6 != 0) continue;
            }
            n4 = n5;
        }
        return n4;
    }

    public static void cKs(int n2) {
        HMydo = n2;
    }

    private static int cKw(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5FA8;
        if (LnehL[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = gadYF[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HQEQQ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HQEQQ.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            oR.LnehL[n3] = n4;
        }
        return LnehL[n3];
    }

    /*
     * Exception decompiling
     */
    private static int cKo(ItemStack var0, ItemEnchantmentsComponent var1_1) {
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public static rB cKp(gg gg2) {
        block31: {
            block45: {
                qN qN2;
                block44: {
                    boolean bl2;
                    block42: {
                        int n2;
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
                                                        boolean bl3;
                                                        block36: {
                                                            oJ oJ4;
                                                            block32: {
                                                                block33: {
                                                                    oK oK2;
                                                                    block30: {
                                                                        long l2 = KOfQd ^ 0x3F80A86CD328L;
                                                                        oJ3 = oR.cJO();
                                                                        n2 = oR.cKt();
                                                                        try {
                                                                            try {
                                                                                oK2 = oJ3;
                                                                                if (n2 != 0) break block30;
                                                                                if (!oK2.cIU(Items.ELYTRA)) break block31;
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
                                                                            if (n2 != 0) break block32;
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
                                                                bl2 = oJ4 instanceof oI;
                                                                if (n2 != 0) break block34;
                                                                if (!bl2) break block35;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                            oI oI2 = (oI)((Object)oJ2);
                                                            try {
                                                                try {
                                                                    bl3 = rD.dlZ().dbj(oI2, false, gg2);
                                                                    if (n2 != 0) break block36;
                                                                    if (!bl3) break block37;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw oR.cKv(matchException);
                                                                }
                                                                bl3 = rD.dlW().ddp(oT.UgZrs);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                        }
                                                        try {
                                                            rB3 = bl3 ? rB.ahPNi : rB.TfMBm;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw oR.cKv(matchException);
                                                        }
                                                        rB rB4 = rB3;
                                                        return rB4;
                                                    }
                                                    return rB.TfMBm;
                                                }
                                                bl2 = oJ2 instanceof oG;
                                            }
                                            try {
                                                try {
                                                    try {
                                                        if (n2 != 0) break block38;
                                                        if (!bl2) break block39;
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
                                bl2 = iX.bxC();
                            }
                            try {
                                try {
                                    if (n2 != 0) break block42;
                                    if (bl2) break block43;
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
                            if (n2 != 0) break block44;
                            bl2 = qN2.dcy();
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    if (bl2) break block45;
                    qN2 = rD.dma();
                }
                qN2.dcv(gg2);
            }
            return rB.HbZxW;
        }
        return rB.iSmge;
    }

    public static int cKk(EquipmentType equipmentType) {
        long l2 = KOfQd ^ 0x1B313E83B35FL;
        return oR.cKl(equipmentType, (int)oR.cKy("q", (int)29454, (long)(0x9209DFB669465B9L ^ l2)), (int)oR.cKy("q", (int)27928, (long)(0x60088226139BFBACL ^ l2)));
    }

    public static rB cKq(gg gg2) {
        block28: {
            qN qN2;
            block39: {
                boolean bl2;
                oJ oJ2;
                oJ oJ3;
                block35: {
                    int n2;
                    block36: {
                        rB rB2;
                        block38: {
                            block37: {
                                block31: {
                                    block32: {
                                        block34: {
                                            rB rB3;
                                            boolean bl3;
                                            block33: {
                                                oJ oJ4;
                                                block29: {
                                                    block30: {
                                                        oK oK2;
                                                        block27: {
                                                            long l2 = KOfQd ^ 0x21E064160F64L;
                                                            oJ3 = oR.cJO();
                                                            n2 = oR.cKu();
                                                            try {
                                                                try {
                                                                    oK2 = oJ3;
                                                                    if (n2 == 0) break block27;
                                                                    if (oK2.cIU(Items.ELYTRA)) break block28;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw oR.cKv(matchException);
                                                                }
                                                                oK2 = oP.cJm().cJF(oP.cJs()).cJF(oP.cJo()).cJu(Items.ELYTRA);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw oR.cKv(matchException);
                                                            }
                                                        }
                                                        oJ2 = oK2;
                                                        try {
                                                            try {
                                                                oJ4 = oJ2;
                                                                if (n2 == 0) break block29;
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
                                                    bl2 = oJ4 instanceof oI;
                                                    if (n2 == 0) break block31;
                                                    if (!bl2) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                                oI oI2 = (oI)((Object)oJ2);
                                                try {
                                                    try {
                                                        bl3 = rD.dlZ().dbj(oI2, false, gg2);
                                                        if (n2 == 0) break block33;
                                                        if (!bl3) break block34;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw oR.cKv(matchException);
                                                    }
                                                    bl3 = rD.dlW().ddp(oT.UgZrs);
                                                }
                                                catch (MatchException matchException) {
                                                    throw oR.cKv(matchException);
                                                }
                                            }
                                            try {
                                                rB3 = bl3 ? rB.ahPNi : rB.TfMBm;
                                            }
                                            catch (MatchException matchException) {
                                                throw oR.cKv(matchException);
                                            }
                                            rB rB4 = rB3;
                                            return rB4;
                                        }
                                        return rB.TfMBm;
                                    }
                                    bl2 = oJ2 instanceof oG;
                                }
                                try {
                                    try {
                                        try {
                                            if (n2 == 0) break block35;
                                            if (!bl2) break block36;
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
                        if (n2 == 0) break block39;
                        bl2 = qN2.dcy();
                    }
                    catch (MatchException matchException) {
                        throw oR.cKv(matchException);
                    }
                }
                try {
                    if (!bl2) {
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
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = oR.cKw(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static LinkedList<Integer> cKn(EquipmentType equipmentType, int n4, int n5) {
        LinkedList<Integer> linkedList;
        int n6;
        ArrayList<Integer> arrayList;
        block14: {
            long l2 = KOfQd ^ 0x1D09A375F638L;
            PlayerInventory playerInventory = rD.dlmvG.player.getInventory();
            arrayList = new ArrayList<Integer>();
            n6 = oR.cKu();
            int n7 = n4;
            while (n7 <= n5) {
                block15: {
                    block16: {
                        ItemStack itemStack = playerInventory.getStack(n7);
                        try {
                            boolean bl2;
                            try {
                                try {
                                    try {
                                        try {
                                            if (n6 == 0) break block14;
                                            if (n6 == 0) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw oR.cKv(matchException);
                                        }
                                        if (itemStack.isEmpty()) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw oR.cKv(matchException);
                                    }
                                    bl2 = jc.bza(itemStack, equipmentType);
                                    if (n6 == 0) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw oR.cKv(matchException);
                                }
                                if (!bl2) break block16;
                            }
                            catch (MatchException matchException) {
                                throw oR.cKv(matchException);
                            }
                            bl2 = arrayList.add(n7);
                        }
                        catch (MatchException matchException) {
                            throw oR.cKv(matchException);
                        }
                    }
                    ++n7;
                }
                if (n6 != 0) continue;
            }
            arrayList.sort((n2, n3) -> {
                ItemStack itemStack = playerInventory.getStack(n2.intValue());
                ItemStack itemStack2 = playerInventory.getStack(n3.intValue());
                int n4 = oR.cKo(itemStack, itemStack.getEnchantments());
                int n5 = oR.cKo(itemStack2, itemStack2.getEnchantments());
                return Integer.compare(n5, n4);
            });
        }
        try {
            linkedList = new LinkedList<Integer>(arrayList);
            if (iS.bwL() == null) {
                oR.cKs(++n6);
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

