/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.opengl.GlStateManager
 */
package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;
import sixtwo.lW;

record lR$uF(int id) implements lW
{
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public void close() {
        GlStateManager.glDeleteProgram((int)this.id);
    }
}

