/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.util.Identifier
 *  org.joml.Matrix3x2f
 *  org.joml.Matrix3x2fc
 */
package sixtwo;

import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.util.Identifier;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;
import sixtwo.jr;
import sixtwo.lF;
import sixtwo.lJ;
import sixtwo.lN;

public final class jq
implements lJ<jq> {
    private final Matrix3x2fc TxWCH;
    private final PlayerEntityModel WFZJz;
    private final Identifier VuTGU;
    private final float JIkfK;
    private final float PvVIE;
    private final float DWdzr;
    private final float bDAmU;
    private float KjnZj = 1.0f;
    private float bZFHi;
    private float lgJDS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public lN batchKey() {
        return lN.immediate();
    }

    public jq(Matrix3x2fc matrix3x2fc, PlayerEntityModel playerEntityModel, Identifier identifier, float f2, float f3, float f4, float f5) {
        this.TxWCH = new Matrix3x2f(matrix3x2fc);
        this.WFZJz = playerEntityModel;
        this.VuTGU = identifier;
        this.JIkfK = f2;
        this.PvVIE = f3;
        this.DWdzr = f4;
        this.bDAmU = f5;
    }

    @Override
    public void execute() {
        jr.bFt(this.TxWCH, this.WFZJz, this.VuTGU, this.KjnZj, this.bZFHi, this.lgJDS, this.JIkfK, this.PvVIE, this.DWdzr, this.bDAmU);
    }

    public jq bFq(float f2) {
        this.bZFHi = f2;
        return this;
    }

    public jq bFr(float f2) {
        this.lgJDS = f2;
        return this;
    }

    public jq bFp(float f2, float f3) {
        this.bZFHi = f2;
        this.lgJDS = f3;
        return this;
    }

    public jq bFs() {
        lF.cfA(this);
        return this;
    }

    public jq bFo(float f2) {
        this.KjnZj = f2;
        return this;
    }
}

