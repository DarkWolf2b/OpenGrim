/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.util.List;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import sixtwo.oJ;
import sixtwo.oQ;

public class oO
extends oQ<oJ> {
    private static long zqJZQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oO() {
        super(oO.cJk(null));
    }

    public oO(LivingEntity livingEntity) {
        super(oO.cJk(livingEntity));
    }

    static {
        Loader.doInit(oO.class);
        oO._53f51fbbb307634e59739844064c8b34();
    }

    private static native void _53f51fbbb307634e59739844064c8b34();

    private static native List<oJ> cJk(LivingEntity var0);

    private static native MatchException cJl(MatchException var0);
}

