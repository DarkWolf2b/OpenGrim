/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import sixtwo.oK;

public class oG
extends oK {
    private final LivingEntity QyMWj;
    private static long uNzNr;
    private static long dQDPC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oG() {
        this(null);
    }

    public oG(LivingEntity livingEntity) {
        this.QyMWj = livingEntity;
    }

    static {
        Loader.doInit(oG.class);
        oG._64f84ed7ae5974478316d18e59d479fd();
    }

    @Override
    public native ItemStack cIu();

    private static native MatchException cIw(MatchException var0);

    @Override
    public native int cIv();

    private static native void _64f84ed7ae5974478316d18e59d479fd();
}

