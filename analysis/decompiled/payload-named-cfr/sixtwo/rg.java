/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import net.minecraft.util.math.Vec3d;
import sixtwo.rj;
import sixtwo.rk;

public class rg {
    private static final rj QAgkZ = rj.ZIApv;
    private final rk nCHFU;
    private final rk UaZPx;
    private final rk QBwAV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void dfE(Vec3d vec3d) {
        this.nCHFU.dhe((float)vec3d.x);
        this.UaZPx.dhe((float)vec3d.y);
        this.QBwAV.dhe((float)vec3d.z);
    }

    public Vec3d dfA(Vec3d vec3d) {
        this.nCHFU.dhd((float)vec3d.x);
        this.UaZPx.dhd((float)vec3d.y);
        this.QBwAV.dhd((float)vec3d.z);
        return this.dfB();
    }

    public rg dfD(int n2) {
        this.nCHFU.dhq(n2);
        this.UaZPx.dhq(n2);
        this.QBwAV.dhq(n2);
        return this;
    }

    public rg dfC(rj rj2) {
        this.nCHFU.dhs(rj2);
        this.UaZPx.dhs(rj2);
        this.QBwAV.dhs(rj2);
        return this;
    }

    public Vec3d dfB() {
        return new Vec3d((double)this.nCHFU.dhj(), (double)this.UaZPx.dhj(), (double)this.QBwAV.dhj());
    }

    public rg(int n2, rj rj2) {
        this.nCHFU = new rk(n2).dhs(rj2);
        this.UaZPx = new rk(n2).dhs(rj2);
        this.QBwAV = new rk(n2).dhs(rj2);
    }

    public rg(int n2) {
        this(n2, QAgkZ);
    }

    public rg(int n2, Vec3d vec3d, rj rj2) {
        this.nCHFU = new rk(n2, (float)vec3d.x).dhs(rj2);
        this.UaZPx = new rk(n2, (float)vec3d.y).dhs(rj2);
        this.QBwAV = new rk(n2, (float)vec3d.z).dhs(rj2);
    }

    public rg(int n2, Vec3d vec3d) {
        this(n2, vec3d, QAgkZ);
    }
}

