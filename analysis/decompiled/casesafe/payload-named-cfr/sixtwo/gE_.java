/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.world.World
 */
package sixtwo;

import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.world.World;
import sixtwo.hH;

public class gE
extends hH {
    private final ItemStack LZFXO;
    private final World hXHRe;
    private final PlayerEntity dDyGN;
    private final int boXDo;
    private final int pUfOw;
    private final float LPbwe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gE(ItemStack itemStack, World world, PlayerEntity playerEntity, int n2, int n3, float f2) {
        this.LZFXO = itemStack;
        this.hXHRe = world;
        this.dDyGN = playerEntity;
        this.boXDo = n2;
        this.pUfOw = n3;
        this.LPbwe = f2;
    }

    public int bbZ() {
        return this.boXDo;
    }

    public ItemStack bbW() {
        return this.LZFXO;
    }

    public World bbX() {
        return this.hXHRe;
    }

    public PlayerEntity bbY() {
        return this.dDyGN;
    }

    public int bca() {
        return this.pUfOw;
    }

    public float bcb() {
        return this.LPbwe;
    }
}

