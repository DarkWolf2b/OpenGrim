/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;
import sixtwo.os;
import sixtwo.ov;

public class op
extends os {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(op.class);
    }

    @Override
    public native Vec3d cFU();

    @Override
    public native ov cFT(ov var1, ov var2, Entity var3);
}

