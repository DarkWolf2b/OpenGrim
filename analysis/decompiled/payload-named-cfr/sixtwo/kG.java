/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.util.math.MatrixStack;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kG$uo;
import sixtwo.mG;

public class kG {
    private MatrixStack HMKVC;
    private Matrix3x2fStack RyMUH;
    private float CKUpI;
    private float VHjcQ;
    private float zLaiu;
    private float THJBt;
    private float yoCan;
    private mG rjrxM;
    private static iS[] ajnUy;
    private static final long AwfGk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static iS[] bTH() {
        return ajnUy;
    }

    public static void bTG(iS[] iSArray) {
        ajnUy = iSArray;
    }

    public static kG$uo bTx() {
        return new kG$uo();
    }

    private static MatchException bTI(MatchException matchException) {
        return matchException;
    }

    public static kG$uo bTw(Matrix3x2fStack matrix3x2fStack, double d2, double d3, double d4, double d5, double d6) {
        return kG.bTx().dtz(matrix3x2fStack).dtA((float)d2).dtB((float)d3).dtC((float)d4).dtD((float)d5).dtE((float)d6);
    }

    kG(MatrixStack matrixStack, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, float f6, mG mG2) {
        long l2 = AwfGk ^ 0x72128EA2A5E3L;
        this.HMKVC = matrixStack;
        this.RyMUH = matrix3x2fStack;
        this.CKUpI = f2;
        this.VHjcQ = f3;
        this.zLaiu = f4;
        iS[] iSArray = kG.bTH();
        try {
            this.THJBt = f5;
            this.yoCan = f6;
            this.rjrxM = mG2;
            if (iS.bwL() == null) {
                kG.bTG(new iS[4]);
            }
        }
        catch (MatchException matchException) {
            throw kG.bTI(matchException);
        }
    }

    static {
        AwfGk = gb.aYR(2091655255853178601L, 5796732930774797645L, MethodHandles.lookup().lookupClass()).a(280769937773786L);
        if (kG.bTH() != null) {
            kG.bTG(new iS[1]);
        }
    }

    public static kG$uo bTv(MatrixStack matrixStack, double d2, double d3, double d4, double d5, double d6) {
        return kG.bTx().dty(matrixStack).dtA((float)d2).dtB((float)d3).dtC((float)d4).dtD((float)d5).dtE((float)d6);
    }

    public float bTE() {
        return this.yoCan;
    }

    public float bTA() {
        return this.CKUpI;
    }

    public float bTB() {
        return this.VHjcQ;
    }

    public Matrix3x2fStack bTz() {
        return this.RyMUH;
    }

    public float bTC() {
        return this.zLaiu;
    }

    public float bTD() {
        return this.THJBt;
    }

    public MatrixStack bTy() {
        return this.HMKVC;
    }

    public mG bTF() {
        return this.rjrxM;
    }
}

