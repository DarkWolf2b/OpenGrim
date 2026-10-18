/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.attribute.EntityAttributeModifier
 *  net.minecraft.entity.decoration.EndCrystalEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.entry.RegistryEntry
 */
package sixtwo;

import java.util.concurrent.atomic.DoubleAdder;
import native.Loader;
import net.minecraft.entity.attribute.EntityAttributeModifier;
import net.minecraft.entity.decoration.EndCrystalEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.entry.RegistryEntry;
import sixtwo.gL;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;

public class eY
extends gg {
    private final DoubleAdder dGDCh;
    private static long BGwTf;
    private static long pLxzJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eY() {
        long l2 = BGwTf ^ 0x3D4C33F0B21AL;
        super(gf.aZL((int)pLxzJ, false, gh.xwjCw));
        this.dGDCh = new DoubleAdder();
    }

    static {
        Loader.doInit(eY.class);
        eY._ae19a68fccb83e5a6db3e56bb772df6b();
    }

    private static native void _ae19a68fccb83e5a6db3e56bb772df6b();

    private native void aFI(EndCrystalEntity var1);

    private static native MatchException aFK(MatchException var0);

    @hG
    public native void aFE(gL.tj var1);

    private native boolean aFF();

    private native double aFG();

    private native double aFH(ItemStack var1);

    private native /* synthetic */ void aFJ(RegistryEntry var1, EntityAttributeModifier var2);
}

