/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_4588
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_4588;
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

    public float bZk(Matrix4f matrix4f, class_4588 class_45882, float f, float f2, float f3, float f4, int n) {
        float f5;
        long l = swvZf ^ 0x26BDEB83EBB8L;
        String string = lj.bYV();
        float f6 = this.CcUvc * f;
        float f7 = this.DiaaM * f;
        float f8 = f3 - this.iOwcU * f;
        class_45882.method_22918((Matrix4fc)matrix4f, f2, f8, f4).method_22913(this.XqVFz, this.rFTRR).method_39415(n);
        String string2 = string;
        try {
            class_45882.method_22918((Matrix4fc)matrix4f, f2, f8 + f7, f4).method_22913(this.XqVFz, this.QqAgq).method_39415(n);
            class_45882.method_22918((Matrix4fc)matrix4f, f2 + f6, f8 + f7, f4).method_22913(this.gklxJ, this.QqAgq).method_39415(n);
            class_45882.method_22918((Matrix4fc)matrix4f, f2 + f6, f8, f4).method_22913(this.gklxJ, this.rFTRR).method_39415(n);
            f5 = this.Zkfrx * f;
            if (string2 == null) {
                iS.bwK("FbUjIc");
            }
        }
        catch (MatchException matchException) {
            throw ll.bZv(matchException);
        }
        return f5;
    }

    private static MatchException bZv(MatchException matchException) {
        return matchException;
    }

    public float bZt() {
        return this.CcUvc;
    }

    public float bZl(float f) {
        return this.Zkfrx * f;
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
