/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.VertexConsumer
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.VertexConsumer;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.li$uv;
import sixtwo.lj;

public final class ll {
    private final int IAjQu;
    private final float XqVFz;
    private final float gklxJ;
    private final float rFTRR;
    private final float QqAgq;
    private final float Zkfrx;
    private final float iOwcU;
    private final float CcUvc;
    private final float DiaaM;
    private static final long swvZf = gb.aYR(-5279788945856983259L, 1293598650621952571L, MethodHandles.lookup().lookupClass()).a(115458556905361L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    public ll(li$uv var1_1, float var2_2, float var3_3) {
        block19: {
            block18: {
                block17: {
                    block16: {
                        var4_4 = ll.swvZf ^ 89207116480901L;
                        v0 = lj.bYV();
                        super();
                        this.IAjQu = var1_1.duS();
                        var6_5 = v0;
                        this.Zkfrx = var1_1.duT();
                        var7_6 = var1_1.duV();
                        try {
                            try {
                                if (var6_5 == null) break block16;
                                if (var7_6 != null) {
                                }
                                ** GOTO lbl26
                            }
                            catch (MatchException v1) {
                                throw ll.bZv(v1);
                            }
                            this.XqVFz = var7_6.dvb() / var2_2;
                            this.gklxJ = var7_6.dvd() / var2_2;
                            this.rFTRR = 1.0f - var7_6.dvc() / var3_3;
                            this.QqAgq = 1.0f - var7_6.dve() / var3_3;
                        }
                        catch (MatchException v2) {
                            throw ll.bZv(v2);
                        }
                    }
                    try {
                        if (var6_5 != null) break block17;
lbl26:
                        // 2 sources

                        this.QqAgq = 0.0f;
                        this.rFTRR = 0.0f;
                        this.gklxJ = 0.0f;
                        this.XqVFz = 0.0f;
                    }
                    catch (MatchException v3) {
                        throw ll.bZv(v3);
                    }
                }
                var8_7 = var1_1.duU();
                try {
                    try {
                        if (var6_5 == null) break block18;
                        if (var8_7 != null) {
                        }
                        ** GOTO lbl52
                    }
                    catch (MatchException v4) {
                        throw ll.bZv(v4);
                    }
                    this.CcUvc = var8_7.dvd() - var8_7.dvb();
                    this.DiaaM = var8_7.dvc() - var8_7.dve();
                    this.iOwcU = var8_7.dvc();
                }
                catch (MatchException v5) {
                    throw ll.bZv(v5);
                }
            }
            try {
                if (var6_5 != null) break block19;
lbl52:
                // 2 sources

                this.iOwcU = 0.0f;
                this.DiaaM = 0.0f;
                this.CcUvc = 0.0f;
            }
            catch (MatchException v6) {
                throw ll.bZv(v6);
            }
        }
    }

    public float bZo() {
        return this.gklxJ;
    }

    public float bZk(Matrix4f matrix4f, VertexConsumer vertexConsumer, float f2, float f3, float f4, float f5, int n2) {
        float f6;
        long l2 = swvZf ^ 0x26BDEB83EBB8L;
        String string = lj.bYV();
        float f7 = this.CcUvc * f2;
        float f8 = this.DiaaM * f2;
        float f9 = f4 - this.iOwcU * f2;
        vertexConsumer.vertex((Matrix4fc)matrix4f, f3, f9, f5).texture(this.XqVFz, this.rFTRR).color(n2);
        String string2 = string;
        try {
            vertexConsumer.vertex((Matrix4fc)matrix4f, f3, f9 + f8, f5).texture(this.XqVFz, this.QqAgq).color(n2);
            vertexConsumer.vertex((Matrix4fc)matrix4f, f3 + f7, f9 + f8, f5).texture(this.gklxJ, this.QqAgq).color(n2);
            vertexConsumer.vertex((Matrix4fc)matrix4f, f3 + f7, f9, f5).texture(this.gklxJ, this.rFTRR).color(n2);
            f6 = this.Zkfrx * f2;
            if (string2 == null) {
                iS.bwK("FbUjIc");
            }
        }
        catch (MatchException matchException) {
            throw ll.bZv(matchException);
        }
        return f6;
    }

    private static MatchException bZv(MatchException matchException) {
        return matchException;
    }

    public float bZt() {
        return this.CcUvc;
    }

    public float bZl(float f2) {
        return this.Zkfrx * f2;
    }

    public int bZm() {
        return this.IAjQu;
    }

    public float bZn() {
        return this.XqVFz;
    }

    public float bZr() {
        return this.Zkfrx;
    }

    public float bZs() {
        return this.iOwcU;
    }

    public float bZu() {
        return this.DiaaM;
    }

    public float bZp() {
        return this.rFTRR;
    }

    public float bZq() {
        return this.QqAgq;
    }
}

