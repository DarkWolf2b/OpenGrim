/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.network.ClientPlayNetworkHandler
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.recipebook.ClientRecipeBook
 *  net.minecraft.client.world.ClientWorld
 *  net.minecraft.sound.SoundEvent
 *  net.minecraft.stat.StatHandler
 *  net.minecraft.util.PlayerInput
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.recipebook.ClientRecipeBook;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.sound.SoundEvent;
import net.minecraft.stat.StatHandler;
import net.minecraft.util.PlayerInput;
import net.minecraft.util.math.BlockPos;

class mk$uL
extends ClientPlayerEntity {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mk$uL(MinecraftClient minecraftClient, ClientWorld clientWorld, ClientPlayNetworkHandler clientPlayNetworkHandler, StatHandler statHandler, ClientRecipeBook clientRecipeBook, PlayerInput playerInput, boolean bl2) {
        super(minecraftClient, clientWorld, clientPlayNetworkHandler, statHandler, clientRecipeBook, playerInput, bl2);
    }

    public float getHealth() {
        return this.getMaxHealth();
    }

    public boolean isCamera() {
        return true;
    }

    protected void fall(double heightDifference, boolean onGround, BlockState state, BlockPos landedPosition) {
    }

    public void playSound(SoundEvent sound, float volume, float pitch) {
    }

    public void tickMovement() {
        this.fallDistance = 0.0;
        super.tickMovement();
    }
}

