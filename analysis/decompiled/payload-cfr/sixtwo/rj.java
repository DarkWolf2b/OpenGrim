/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj$vQ;
import sixtwo.rj$vR;
import sixtwo.rj$vS;
import sixtwo.rj$vT;
import sixtwo.rj$vV;
import sixtwo.rj$vW;
import sixtwo.rj$vX;
import sixtwo.rj$vY;
import sixtwo.rj$wa;
import sixtwo.rj$wb;
import sixtwo.rj$wc;
import sixtwo.rj$wd;
import sixtwo.rk;

public abstract class rj {
    public static final rj Xmkbr;
    public static final rj VJKkM;
    public static final rj Fhaeo;
    public static final rj UPXqT;
    public static final rj ceYgU;
    public static final rj Zotpp;
    public static final rj SXybO;
    public static final rj ocrjZ;
    public static final rj rGiqX;
    public static final rj BeAci;
    public static final rj MBpuQ;
    public static final rj kcXTJ;
    public static final rj ZIApv;
    public static final rj lVvRJ;
    public static final rj JbGQS;
    public static final rj XcyQP;
    public static final rj jDSBA;
    public static final rj FOTUT;
    public static final rj WhLYp;
    public static final rj WsJCZ;
    public static final rj NJlxm;
    public static final rj mdBTz;
    public static final rj ivBOj;
    public static final rj ryfsW;
    public static final rj LbXVD;
    public static final rj AYqck;
    public static final rj XzDkv;
    public static final rj sUgPa;
    public static final rj YJTYm;
    public static final rj fiXQj;
    public static final rj yHiLG;
    public static final rj XTsWO;
    public static final rj mLsDs;
    public static final rj voiVP;
    public static final rj kfhtE;
    public static final rj yfnub;
    public static final rj yiIHY;
    private static String[] jlTVz;
    private static final long VWJVh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        VWJVh = gb.aYR(-5695672756251898800L, -1980055978287578675L, MethodHandles.lookup().lookupClass()).a(186422137840851L);
        Xmkbr = rj.dgj(f -> f);
        VJKkM = rj.dgj(f -> 1.0f - rj.dgs(f * 1.5707964f));
        Fhaeo = rj.dgj(f -> rj.dgr(f * 1.5707964f));
        UPXqT = rj.dgj(f -> -(rj.dgs((float)Math.PI * f) - 1.0f) / 2.0f);
        ceYgU = rj.dgc(0.42, 0.0, 0.58, 1.0);
        Zotpp = rj.dgc(0.45f, 1.45f, 0.49f, 1.15f);
        SXybO = rj.dgj(f -> f * f);
        ocrjZ = rj.dgj(f -> 1.0f - (1.0f - f) * (1.0f - f));
        rGiqX = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x3C264E0E7219L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 2.0f * f * f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f;
                    f3 = rj.dgu(-2.0f * f + 2.0f, 2.0f) / 2.0f;
                }
                f2 = f4 - f3;
            }
            return f2;
        });
        BeAci = rj.dgj(f -> f * f * f);
        MBpuQ = rj.dgj(f -> 1.0f - rj.dgu(1.0f - f, 3.0f));
        kcXTJ = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x1DC8B20818E5L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 4.0f * f * f * f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f;
                    f3 = rj.dgu(-2.0f * f + 2.0f, 3.0f) / 2.0f;
                }
                f2 = f4 - f3;
            }
            return f2;
        });
        ZIApv = rj.dgj(f -> {
            float f2;
            float f3;
            block4: {
                float f4;
                block5: {
                    long l = VWJVh ^ 0x14EFD3A6391AL;
                    f4 = f * 2.0f;
                    String[] stringArray = rk.dhz();
                    try {
                        try {
                            f3 = f4;
                            f2 = 1.0f;
                            if (stringArray != null) break block4;
                            if (!(f3 < f2)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                        return 0.5f * f4 * f4 * f4;
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                f3 = 0.5f;
                f2 = (f4 -= 2.0f) * f4 * f4 + 2.0f;
            }
            return f3 * f2;
        });
        lVvRJ = rj.dgj(f -> f * f * f * f);
        JbGQS = rj.dgj(f -> 1.0f - rj.dgu(1.0f - f, 4.0f));
        XcyQP = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x2D4BC640DE13L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 8.0f * f * f * f * f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f;
                    f3 = rj.dgu(-2.0f * f + 2.0f, 4.0f) / 2.0f;
                }
                f2 = f4 - f3;
            }
            return f2;
        });
        jDSBA = rj.dgj(f -> f * f * f * f * f);
        FOTUT = rj.dgj(f -> 1.0f - rj.dgu(1.0f - f, 5.0f));
        WhLYp = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x59420F7F4730L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 16.0f * f * f * f * f * f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f;
                    f3 = rj.dgu(-2.0f * f + 2.0f, 5.0f) / 2.0f;
                }
                f2 = f4 - f3;
            }
            return f2;
        });
        WsJCZ = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x38E76AB92B15L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.0f;
                                if (stringArray != null) break block4;
                                if (f4 != f3) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 0.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 2.0f;
                    f3 = 10.0f * f - 10.0f;
                }
                f2 = rj.dgu(f4, f3);
            }
            return f2;
        });
        NJlxm = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x997B5F1EF78L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 1.0f;
                                if (stringArray != null) break block4;
                                if (f4 != f3) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = 1.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f;
                    f3 = rj.dgu(2.0f, -10.0f * f);
                }
                f2 = f4 - f3;
            }
            return f2;
        });
        mdBTz = rj.dgj(f -> {
            float f2;
            block18: {
                float f3;
                float f4;
                block16: {
                    block17: {
                        float f5;
                        block14: {
                            String[] stringArray;
                            block15: {
                                block12: {
                                    block13: {
                                        long l = VWJVh ^ 0x5FDD92CD3AA3L;
                                        stringArray = rk.dhz();
                                        try {
                                            try {
                                                float f6 = f - 0.0f;
                                                f5 = f6 == 0.0f ? 0 : (f6 > 0.0f ? 1 : -1);
                                                if (stringArray != null) break block12;
                                                if (f5 != false) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw rj.dhb(matchException);
                                            }
                                            return 0.0f;
                                        }
                                        catch (MatchException matchException) {
                                            throw rj.dhb(matchException);
                                        }
                                    }
                                    float f7 = f - 1.0f;
                                    f5 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (stringArray != null) break block14;
                                        if (f5 != false) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj.dhb(matchException);
                                    }
                                    return 1.0f;
                                }
                                catch (MatchException matchException) {
                                    throw rj.dhb(matchException);
                                }
                            }
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block16;
                                float f8 = f4 - f3;
                                f5 = f8 == 0.0f ? 0 : (f8 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                        }
                        try {
                            if (f5 >= 0) break block17;
                            f2 = rj.dgu(2.0f, 20.0f * f - 10.0f) / 2.0f;
                            break block18;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 2.0f - rj.dgu(2.0f, -20.0f * f + 10.0f);
                    f3 = 2.0f;
                }
                f2 = f4 / f3;
            }
            return f2;
        });
        ivBOj = rj.dgj(f -> 1.0f - rj.dgt(1.0f - f * f));
        ryfsW = rj.dgj(f -> rj.dgt(1.0f - rj.dgu(f - 1.0f, 2.0f)));
        LbXVD = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x25291B17CF2FL;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = (1.0f - rj.dgt(1.0f - rj.dgu(2.0f * f, 2.0f))) / 2.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = rj.dgt(1.0f - rj.dgu(-2.0f * f + 2.0f, 2.0f)) + 1.0f;
                    f3 = 2.0f;
                }
                f2 = f4 / f3;
            }
            return f2;
        });
        AYqck = rj.dgk(1.70158f);
        XzDkv = rj.dgl(1.70158f);
        sUgPa = rj.dgk(2.70158f);
        YJTYm = rj.dgl(2.70158f);
        fiXQj = rj.dgm(1.70158f);
        yHiLG = rj.dgn(-1.0f, 0.0f);
        XTsWO = rj.dgo(-1.0f, 0.0f);
        rj.dgZ(new String[2]);
        mLsDs = rj.dgp(-1.0f, 0.0f);
        voiVP = rj.dgj(f -> {
            float f2;
            float f3;
            block13: {
                float f4;
                float f5;
                float f6;
                block11: {
                    String[] stringArray;
                    block12: {
                        block9: {
                            block10: {
                                long l = VWJVh ^ 0x858AC77B490L;
                                f6 = 7.5625f;
                                stringArray = rk.dhz();
                                f5 = 2.75f;
                                try {
                                    try {
                                        float f7 = f - 1.0f / f5;
                                        f4 = f7 == 0.0f ? 0 : (f7 < 0.0f ? -1 : 1);
                                        if (stringArray != null) break block9;
                                        if (f4 >= 0) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj.dhb(matchException);
                                    }
                                    return f6 * f * f;
                                }
                                catch (MatchException matchException) {
                                    throw rj.dhb(matchException);
                                }
                            }
                            float f8 = f - 2.0f / f5;
                            f4 = f8 == 0.0f ? 0 : (f8 < 0.0f ? -1 : 1);
                        }
                        try {
                            if (stringArray != null) break block11;
                            if (f4 >= 0) break block12;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                        return f6 * (f -= 1.5f / f5) * f + 0.75f;
                    }
                    try {
                        f3 = f;
                        f2 = 2.5f / f5;
                        if (stringArray != null) break block13;
                        float f9 = f3 - f2;
                        f4 = f9 == 0.0f ? 0 : (f9 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                if (f4 < 0) {
                    return f6 * (f -= 2.25f / f5) * f + 0.9375f;
                }
                f3 = f6 * (f -= 2.625f / f5) * f;
                f2 = 0.984375f;
            }
            return f3 + f2;
        });
        kfhtE = rj.dgj(f -> 1.0f - voiVP.dgb(1.0f - f));
        yfnub = rj.dgj(f -> {
            float f2;
            block6: {
                float f3;
                float f4;
                block4: {
                    block5: {
                        long l = VWJVh ^ 0x5FE0858EC7EAL;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f4 = f;
                                f3 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f4 < f3)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f2 = (1.0f - voiVP.dgb(1.0f - 2.0f * f)) / 2.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f4 = 1.0f + voiVP.dgb(2.0f * f - 1.0f);
                    f3 = 2.0f;
                }
                f2 = f4 / f3;
            }
            return f2;
        });
        yiIHY = rj.dgj(f -> -2.0f * f * f * f + 3.0f * f * f);
    }

    private static rj dgl(float f) {
        return rj.dgj(f2 -> {
            float f3 = f2 - 1.0f;
            return f3 * f3 * ((f + 1.0f) * f3 + f) + 1.0f;
        });
    }

    public abstract float dga(float var1, float var2, float var3, float var4);

    public static rj dgi(float f) {
        return new rj$vX(f);
    }

    private static rj dgm(float f) {
        return rj.dgj(f2 -> {
            float f3;
            float f4;
            block4: {
                float f5;
                float f6;
                block5: {
                    long l = VWJVh ^ 0x7DBBDBA0D616L;
                    f6 = f * 1.525f;
                    String[] stringArray = rk.dhz();
                    f5 = f2 * 2.0f;
                    try {
                        try {
                            f4 = f5;
                            f3 = 1.0f;
                            if (stringArray != null) break block4;
                            if (!(f4 < f3)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                        return 0.5f * (f5 * f5 * ((f6 + 1.0f) * f5 - f6));
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                f4 = 0.5f;
                f3 = (f5 -= 2.0f) * f5 * ((f6 + 1.0f) * f5 + f6) + 2.0f;
            }
            return f4 * f3;
        });
    }

    public static rj dgd(float f, float f2) {
        return new rj$vT(f, f2);
    }

    private static rj dgo(float f, float f2) {
        return new rj$wb(f, f2);
    }

    private static rj dgp(float f, float f2) {
        return new rj$wa(f, f2);
    }

    public static rj dgj(rj$vQ rj$vQ) {
        return new rj$wd(rj$vQ);
    }

    public static rj dgc(double d, double d2, double d3, double d4) {
        return new rj$vV((float)d, (float)d2, (float)d3, (float)d4);
    }

    private static MatchException dhb(MatchException matchException) {
        return matchException;
    }

    public static void dgZ(String[] stringArray) {
        jlTVz = stringArray;
    }

    public float dgb(float f) {
        return this.dga(f, 0.0f, 1.0f, 1.0f);
    }

    private static float dgq(float f) {
        return Math.clamp(f, 0.0f, 1.0f);
    }

    public static rj dgh(float f) {
        return new rj$vW(f);
    }

    public static String[] dha() {
        return jlTVz;
    }

    private static rj dgn(float f, float f2) {
        return new rj$wc(f, f2);
    }

    private static float dgt(float f) {
        return (float)Math.sqrt(f);
    }

    public static rj dgf(float f, float f2) {
        return new rj$vS(f, f2);
    }

    public static rj dgg(float f) {
        return new rj$vY(f);
    }

    private static float dgs(float f) {
        return (float)Math.cos(f);
    }

    public static rj dge(float f, float f2) {
        return new rj$vR(f, f2);
    }

    private static rj dgk(float f) {
        return rj.dgj(f2 -> f2 * f2 * ((f + 1.0f) * f2 - f));
    }

    private static float dgr(float f) {
        return (float)Math.sin(f);
    }

    private static float dgu(float f, float f2) {
        return (float)Math.pow(f, f2);
    }
}
