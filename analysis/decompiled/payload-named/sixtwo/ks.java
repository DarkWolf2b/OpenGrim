/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.util.DefaultSkinHelper
 *  net.minecraft.entity.EntityPose
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.entity.player.PlayerSkinType
 *  net.minecraft.entity.player.SkinTextures
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.AssetInfo$TextureAsset
 *  net.minecraft.util.Hand
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.util.DefaultSkinHelper;
import net.minecraft.entity.EntityPose;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.player.PlayerSkinType;
import net.minecraft.entity.player.SkinTextures;
import net.minecraft.item.ItemStack;
import net.minecraft.util.AssetInfo;
import net.minecraft.util.Hand;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec3d;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kt;
import sixtwo.qG;
import sixtwo.rD;

public record ks(SkinTextures skin, Identifier texture, Identifier capeTexture, Identifier elytraTexture, PlayerSkinType modelType, float yRot, float xRot, float yRotO, float xRotO, float yBodyRot, float yBodyRotO, float yHeadRot, float yHeadRotO, int hurtTime, int deathTime, EntityPose pose, boolean shiftDown, boolean sprinting, boolean onGround, Vec3d deltaMovement, ItemStack mainHand, ItemStack offHand, ItemStack chestEquipment, float walkAnimationSpeed, float walkAnimationPos, boolean fallFlying, boolean usingItem, Hand usedItemHand) {
    private static final Identifier DEFAULT_ELYTRA_TEXTURE;
    private static final long a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        a = gb.aYR(7382530991093434877L, 5271008029939073395L, MethodHandles.lookup().lookupClass()).a(79907227809167L);
        long l2 = a ^ 0x1E973CC1ADAFL;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0084\u0012$:\u00ee>\u0007(\u00b2\u00ba\u00cc-6\u00f1\u00ab\u00ce\u00e6\u001c\u00e1\u00a1\u0094\u00cb\u00bf?\u0099m\u00a6\u00ba\u00afC^\u0000+lA\u000b\u00b8[\u00a5y\u0010K\u0012\u00b72\u0099\\\u00ea".getBytes("ISO-8859-1"));
                String string = ks.a(byArray3).intern();
                DEFAULT_ELYTRA_TEXTURE = Identifier.ofVanilla((String)string);
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    private static String a(byte[] byArray) {
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

    public static ks capture(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        Hand hand;
        boolean bl2;
        boolean bl3;
        float f2;
        float f3;
        ItemStack itemStack;
        ItemStack itemStack2;
        ItemStack itemStack3;
        Vec3d vec3d;
        boolean bl4;
        boolean bl5;
        boolean bl6;
        EntityPose entityPose;
        int n2;
        int n3;
        float f4;
        float f5;
        float f6;
        float f7;
        float f8;
        float f9;
        float f10;
        float f11;
        PlayerSkinType playerSkinType;
        Identifier identifier;
        Identifier identifier2;
        Identifier identifier3;
        SkinTextures skinTextures;
        ks ks2;
        ks ks3;
        long l2 = a ^ 0x6F09AE656AB4L;
        SkinTextures skinTextures2 = ks.resolveSkin(abstractClientPlayerEntity);
        WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)abstractClientPlayerEntity.limbAnimator;
        float f12 = abstractClientPlayerEntity.getYaw();
        float f13 = abstractClientPlayerEntity.getPitch();
        float f14 = abstractClientPlayerEntity.bodyYaw;
        float f15 = abstractClientPlayerEntity.headYaw;
        boolean bl7 = kt.bRx();
        try {
            ks ks4;
            ks3 = ks4;
            ks2 = ks4;
            skinTextures = skinTextures2;
            identifier3 = skinTextures2.body().texturePath();
            identifier2 = ks.resolveCapeTexture(abstractClientPlayerEntity);
            identifier = ks.resolveElytraTexture(abstractClientPlayerEntity);
            playerSkinType = skinTextures2.model();
            f11 = f12;
            f10 = f13;
            f9 = f12;
            f8 = f13;
            f7 = f14;
            f6 = f14;
            f5 = f15;
            f4 = f15;
            n3 = abstractClientPlayerEntity.hurtTime;
            n2 = abstractClientPlayerEntity.deathTime;
            entityPose = abstractClientPlayerEntity.getPose();
            bl6 = abstractClientPlayerEntity.isSneaking();
            bl5 = abstractClientPlayerEntity.isSprinting();
            bl4 = abstractClientPlayerEntity.isOnGround();
            vec3d = abstractClientPlayerEntity.getVelocity();
            itemStack3 = abstractClientPlayerEntity.getMainHandStack().copy();
            itemStack2 = abstractClientPlayerEntity.getOffHandStack().copy();
            itemStack = abstractClientPlayerEntity.getEquippedStack(EquipmentSlot.CHEST).copy();
            f3 = abstractClientPlayerEntity.limbAnimator.getSpeed();
            f2 = walkAnimationStateAccessor.getPosition();
            bl3 = abstractClientPlayerEntity.isGliding();
            bl2 = abstractClientPlayerEntity.isUsingItem();
            hand = abstractClientPlayerEntity.isUsingItem() ? abstractClientPlayerEntity.getActiveHand() : Hand.MAIN_HAND;
        }
        catch (MatchException matchException) {
            throw ks.a(matchException);
        }
        ks3(skinTextures, identifier3, identifier2, identifier, playerSkinType, f11, f10, f9, f8, f7, f6, f5, f4, n3, n2, entityPose, bl6, bl5, bl4, vec3d, itemStack3, itemStack2, itemStack, f3, f2, bl3, bl2, hand);
        if (iS.bwL() == null) {
            boolean bl8;
            try {
                bl8 = !bl7;
            }
            catch (MatchException matchException) {
                throw ks.a(matchException);
            }
            kt.bRv(bl8);
        }
        return ks2;
    }

    private static Identifier resolveElytraTexture(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        block3: {
            AssetInfo.TextureAsset textureAsset;
            block2: {
                long l2 = a ^ 0x1694B0A347C6L;
                AssetInfo.TextureAsset textureAsset2 = ks.resolveSkin(abstractClientPlayerEntity).elytra();
                boolean bl2 = kt.bRx();
                try {
                    textureAsset = textureAsset2;
                    if (!bl2) break block2;
                    if (textureAsset == null) break block3;
                }
                catch (MatchException matchException) {
                    throw ks.a(matchException);
                }
                textureAsset = textureAsset2;
            }
            return textureAsset.texturePath();
        }
        return DEFAULT_ELYTRA_TEXTURE;
    }

    private static Identifier resolveCapeTexture(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        Identifier identifier;
        block13: {
            block12: {
                AssetInfo.TextureAsset textureAsset;
                block11: {
                    boolean bl2;
                    block9: {
                        qG qG2;
                        block10: {
                            ee ee2;
                            block8: {
                                long l2 = a ^ 0x21F42FC0A10L;
                                ee ee3 = rD.dlJ().aZx(ee.class);
                                bl2 = kt.bRw();
                                try {
                                    ee2 = ee3;
                                    if (bl2) break block8;
                                    if (ee2 == null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ks.a(matchException);
                                }
                                ee2 = ee3;
                            }
                            try {
                                try {
                                    if (!ee2.bag()) break block9;
                                    qG2 = rD.dlT();
                                    if (bl2) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw ks.a(matchException);
                                }
                                if (qG2 == null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ks.a(matchException);
                            }
                            qG2 = rD.dlT();
                        }
                        return qG2.daj(abstractClientPlayerEntity);
                    }
                    AssetInfo.TextureAsset textureAsset2 = ks.resolveSkin(abstractClientPlayerEntity).cape();
                    try {
                        textureAsset = textureAsset2;
                        if (bl2) break block11;
                        if (textureAsset == null) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ks.a(matchException);
                    }
                    textureAsset = textureAsset2;
                }
                identifier = textureAsset.texturePath();
                break block13;
            }
            identifier = null;
        }
        return identifier;
    }

    private static SkinTextures resolveSkin(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        SkinTextures skinTextures;
        block2: {
            block3: {
                long l2 = a ^ 0x6629A78A7D27L;
                SkinTextures skinTextures2 = abstractClientPlayerEntity.getSkin();
                boolean bl2 = kt.bRx();
                try {
                    skinTextures = skinTextures2;
                    if (!bl2) break block2;
                    if (skinTextures == null) break block3;
                }
                catch (MatchException matchException) {
                    throw ks.a(matchException);
                }
                skinTextures = skinTextures2;
                break block2;
            }
            skinTextures = DefaultSkinHelper.getSteve();
        }
        return skinTextures;
    }
}

