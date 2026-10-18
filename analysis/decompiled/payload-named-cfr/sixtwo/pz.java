/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec2f;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.pK;
import sixtwo.px;
import sixtwo.py;

public interface pz
extends px {
    public py verticalAnchor(pK var1);

    public pK verticalAnchor();

    public Vec2f measure(lC var1, lc var2, Entity var3, boolean var4);

    public void drawBox(lC var1, lc var2, lc var3, Entity var4, boolean var5);
}

