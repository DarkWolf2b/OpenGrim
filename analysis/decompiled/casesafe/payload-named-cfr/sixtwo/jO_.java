/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.texture.AbstractTexture;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.jO$tZ;
import sixtwo.kd;
import sixtwo.kf;
import sixtwo.la;
import sixtwo.ld;
import sixtwo.mG;

public class jO {
    private Matrix3x2fStack xSQbY;
    private float egCsl;
    private float TDmPu;
    private float dBKFM;
    private float HmcPi;
    private kd eaLNK;
    private kf DnKLZ;
    private ld rRoDO;
    private mG FVntd;
    private la itKud;
    private AbstractTexture WEuvT;
    private boolean fUfva;
    private float eFXuw;
    private float BhhVn;
    private float GPlHN;
    private float HhCMg;
    private float vBJeR;
    private float GWDND;
    private float AltXm;
    private float gvMEj;
    private float mEQGi;
    private float xwdNH;
    private float ZvmaJ;
    private static String IJQZt;
    private static final long msXQV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jO(Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, kd kd2, kf kf2, ld ld2, mG mG2, la la2, AbstractTexture abstractTexture, boolean bl2, float f6, float f7, float f8, float f9, float f10, float f11, float f12, float f13, float f14, float f15, float f16) {
        this.xSQbY = matrix3x2fStack;
        this.egCsl = f2;
        this.TDmPu = f3;
        this.dBKFM = f4;
        this.HmcPi = f5;
        this.eaLNK = kd2;
        this.DnKLZ = kf2;
        this.rRoDO = ld2;
        this.FVntd = mG2;
        this.itKud = la2;
        this.WEuvT = abstractTexture;
        this.fUfva = bl2;
        this.eFXuw = f6;
        this.BhhVn = f7;
        this.GPlHN = f8;
        this.HhCMg = f9;
        this.vBJeR = f10;
        this.GWDND = f11;
        this.AltXm = f12;
        this.gvMEj = f13;
        this.mEQGi = f14;
        this.xwdNH = f15;
        this.ZvmaJ = f16;
    }

    static {
        msXQV = gb.aYR(-4971548628320570802L, 3183453657162230179L, MethodHandles.lookup().lookupClass()).a(109257558332503L);
        if (jO.bKy() == null) {
            jO.bKx("wC2Us");
        }
    }

    public float bKw() {
        return this.ZvmaJ;
    }

    public boolean bJG() {
        boolean bl2;
        long l2 = msXQV ^ 0x300EE9E6B3A3L;
        try {
            bl2 = this.itKud != null;
        }
        catch (MatchException matchException) {
            throw jO.bKz(matchException);
        }
        return bl2;
    }

    public boolean bJH() {
        boolean bl2;
        long l2 = msXQV ^ 0x2F36DFFAD6B2L;
        try {
            bl2 = this.WEuvT != null;
        }
        catch (MatchException matchException) {
            throw jO.bKz(matchException);
        }
        return bl2;
    }

    public static jO$tZ bJI(Matrix3x2fStack matrix3x2fStack, double d2, double d3, double d4, double d5) {
        return jO.bJZ().dqc(matrix3x2fStack).dqd((float)d2).dqe((float)d3).dqf((float)d4).dqg((float)d5);
    }

    public ld bKh() {
        return this.rRoDO;
    }

    public float bKd() {
        return this.dBKFM;
    }

    public float bKe() {
        return this.HmcPi;
    }

    public Matrix3x2fStack bKa() {
        return this.xSQbY;
    }

    public float bKt() {
        return this.gvMEj;
    }

    public float bKu() {
        return this.mEQGi;
    }

    public AbstractTexture bKk() {
        return this.WEuvT;
    }

    public mG bKi() {
        return this.FVntd;
    }

    public float bKm() {
        return this.eFXuw;
    }

    public float bKb() {
        return this.egCsl;
    }

    public float bKc() {
        return this.TDmPu;
    }

    public float bKv() {
        return this.xwdNH;
    }

    public la bKj() {
        return this.itKud;
    }

    public float bKr() {
        return this.GWDND;
    }

    private static boolean bJN() {
        return false;
    }

    private static MatchException bKz(MatchException matchException) {
        return matchException;
    }

    private static float bJW() {
        return 0.0f;
    }

    private static float bJX() {
        return 1.0f;
    }

    private static float bJP() {
        return 0.75f;
    }

    private static float bJQ() {
        return 1.0f;
    }

    private static mG bJM() {
        return mG.hoGuU;
    }

    public kf bKg() {
        return this.DnKLZ;
    }

    public float bKo() {
        return this.GPlHN;
    }

    private static float bJU() {
        return 0.5f;
    }

    private static float bJT() {
        return 0.0f;
    }

    public static void bKx(String string) {
        IJQZt = string;
    }

    private static kf bJK() {
        return kf.viqyh;
    }

    private static float bJV() {
        return 0.0f;
    }

    private static float bJR() {
        return 7.0f;
    }

    private static float bJY() {
        return 1.0f;
    }

    private static float bJO() {
        return 0.75f;
    }

    public float bKp() {
        return this.HhCMg;
    }

    public float bKs() {
        return this.AltXm;
    }

    public float bKn() {
        return this.BhhVn;
    }

    public static String bKy() {
        return IJQZt;
    }

    private static kd bJJ() {
        return kd.AhlXN;
    }

    public static jO$tZ bJZ() {
        return new jO$tZ();
    }

    public boolean bKl() {
        return this.fUfva;
    }

    private static ld bJL() {
        return ld.NONE;
    }

    public float bKq() {
        return this.vBJeR;
    }

    public kd bKf() {
        return this.eaLNK;
    }

    private static float bJS() {
        return 0.0f;
    }
}

