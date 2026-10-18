/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import net.minecraft.util.math.Vec3d;
import sixtwo.hH;

public class hb
extends hH {
    private Vec3d Jsypv;
    private float jSwLj;
    private float SYWqk;
    private Vec3d cRDZk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hb(Vec3d vec3d, float f2, float f3, Vec3d vec3d2) {
        this.Jsypv = vec3d;
        this.jSwLj = f2;
        this.SYWqk = f3;
        this.cRDZk = vec3d2;
    }

    public void bcv(Vec3d vec3d) {
        this.cRDZk = vec3d;
    }

    public float bcs() {
        return this.jSwLj;
    }

    public Vec3d bcr() {
        return this.Jsypv;
    }

    public Vec3d bcu() {
        return this.cRDZk;
    }

    public float bct() {
        return this.SYWqk;
    }
}

