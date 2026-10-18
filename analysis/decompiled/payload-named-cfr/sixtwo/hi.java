/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.MovementType
 */
package sixtwo;

import net.minecraft.entity.MovementType;
import sixtwo.hH;

public class hi
extends hH {
    private MovementType ioDCS;
    private double TtyvP;
    private double HJOdl;
    private double xjPbi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void bcF(double d2) {
        this.TtyvP = d2;
    }

    public void bcG(double d2) {
        this.HJOdl = d2;
    }

    public hi(MovementType movementType, double d2, double d3, double d4) {
        this.ioDCS = movementType;
        this.TtyvP = d2;
        this.HJOdl = d3;
        this.xjPbi = d4;
    }

    public double bcD() {
        return this.HJOdl;
    }

    public MovementType bcB() {
        return this.ioDCS;
    }

    public double bcC() {
        return this.TtyvP;
    }

    public double bcE() {
        return this.xjPbi;
    }

    public void bcH(double d2) {
        this.xjPbi = d2;
    }
}

