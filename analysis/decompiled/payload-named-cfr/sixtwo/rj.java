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
        Xmkbr = rj.dgj(f2 -> f2);
        VJKkM = rj.dgj(f2 -> 1.0f - rj.dgs(f2 * 1.5707964f));
        Fhaeo = rj.dgj(f2 -> rj.dgr(f2 * 1.5707964f));
        UPXqT = rj.dgj(f2 -> -(rj.dgs((float)Math.PI * f2) - 1.0f) / 2.0f);
        ceYgU = rj.dgc(0.42, 0.0, 0.58, 1.0);
        Zotpp = rj.dgc(0.45f, 1.45f, 0.49f, 1.15f);
        SXybO = rj.dgj(f2 -> f2 * f2);
        ocrjZ = rj.dgj(f2 -> 1.0f - (1.0f - f2) * (1.0f - f2));
        rGiqX = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x3C264E0E7219L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 2.0f * f2 * f2;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f;
                    f4 = rj.dgu(-2.0f * f2 + 2.0f, 2.0f) / 2.0f;
                }
                f3 = f5 - f4;
            }
            return f3;
        });
        BeAci = rj.dgj(f2 -> f2 * f2 * f2);
        MBpuQ = rj.dgj(f2 -> 1.0f - rj.dgu(1.0f - f2, 3.0f));
        kcXTJ = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x1DC8B20818E5L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 4.0f * f2 * f2 * f2;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f;
                    f4 = rj.dgu(-2.0f * f2 + 2.0f, 3.0f) / 2.0f;
                }
                f3 = f5 - f4;
            }
            return f3;
        });
        ZIApv = rj.dgj(f2 -> {
            float f3;
            float f4;
            block4: {
                float f5;
                block5: {
                    long l2 = VWJVh ^ 0x14EFD3A6391AL;
                    f5 = f2 * 2.0f;
                    String[] stringArray = rk.dhz();
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
                        return 0.5f * f5 * f5 * f5;
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                f4 = 0.5f;
                f3 = (f5 -= 2.0f) * f5 * f5 + 2.0f;
            }
            return f4 * f3;
        });
        lVvRJ = rj.dgj(f2 -> f2 * f2 * f2 * f2);
        JbGQS = rj.dgj(f2 -> 1.0f - rj.dgu(1.0f - f2, 4.0f));
        XcyQP = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x2D4BC640DE13L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 8.0f * f2 * f2 * f2 * f2;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f;
                    f4 = rj.dgu(-2.0f * f2 + 2.0f, 4.0f) / 2.0f;
                }
                f3 = f5 - f4;
            }
            return f3;
        });
        jDSBA = rj.dgj(f2 -> f2 * f2 * f2 * f2 * f2);
        FOTUT = rj.dgj(f2 -> 1.0f - rj.dgu(1.0f - f2, 5.0f));
        WhLYp = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x59420F7F4730L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 16.0f * f2 * f2 * f2 * f2 * f2;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f;
                    f4 = rj.dgu(-2.0f * f2 + 2.0f, 5.0f) / 2.0f;
                }
                f3 = f5 - f4;
            }
            return f3;
        });
        WsJCZ = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x38E76AB92B15L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.0f;
                                if (stringArray != null) break block4;
                                if (f5 != f4) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 0.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 2.0f;
                    f4 = 10.0f * f2 - 10.0f;
                }
                f3 = rj.dgu(f5, f4);
            }
            return f3;
        });
        NJlxm = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x997B5F1EF78L;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 1.0f;
                                if (stringArray != null) break block4;
                                if (f5 != f4) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = 1.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f;
                    f4 = rj.dgu(2.0f, -10.0f * f2);
                }
                f3 = f5 - f4;
            }
            return f3;
        });
        mdBTz = rj.dgj(f2 -> {
            float f3;
            block18: {
                float f4;
                float f5;
                block16: {
                    block17: {
                        float f6;
                        block14: {
                            String[] stringArray;
                            block15: {
                                block12: {
                                    block13: {
                                        long l2 = VWJVh ^ 0x5FDD92CD3AA3L;
                                        stringArray = rk.dhz();
                                        try {
                                            try {
                                                float f7 = f2 - 0.0f;
                                                f6 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                                                if (stringArray != null) break block12;
                                                if (f6 != false) break block13;
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
                                    float f8 = f2 - 1.0f;
                                    f6 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (stringArray != null) break block14;
                                        if (f6 != false) break block15;
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
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block16;
                                float f9 = f5 - f4;
                                f6 = f9 == 0.0f ? 0 : (f9 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                        }
                        try {
                            if (f6 >= 0) break block17;
                            f3 = rj.dgu(2.0f, 20.0f * f2 - 10.0f) / 2.0f;
                            break block18;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 2.0f - rj.dgu(2.0f, -20.0f * f2 + 10.0f);
                    f4 = 2.0f;
                }
                f3 = f5 / f4;
            }
            return f3;
        });
        ivBOj = rj.dgj(f2 -> 1.0f - rj.dgt(1.0f - f2 * f2));
        ryfsW = rj.dgj(f2 -> rj.dgt(1.0f - rj.dgu(f2 - 1.0f, 2.0f)));
        LbXVD = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x25291B17CF2FL;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = (1.0f - rj.dgt(1.0f - rj.dgu(2.0f * f2, 2.0f))) / 2.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = rj.dgt(1.0f - rj.dgu(-2.0f * f2 + 2.0f, 2.0f)) + 1.0f;
                    f4 = 2.0f;
                }
                f3 = f5 / f4;
            }
            return f3;
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
        voiVP = rj.dgj(f2 -> {
            float f3;
            float f4;
            block13: {
                float f5;
                float f6;
                float f7;
                block11: {
                    String[] stringArray;
                    block12: {
                        block9: {
                            block10: {
                                long l2 = VWJVh ^ 0x858AC77B490L;
                                f7 = 7.5625f;
                                stringArray = rk.dhz();
                                f6 = 2.75f;
                                try {
                                    try {
                                        float f8 = f2 - 1.0f / f6;
                                        f5 = f8 == 0.0f ? 0 : (f8 < 0.0f ? -1 : 1);
                                        if (stringArray != null) break block9;
                                        if (f5 >= 0) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj.dhb(matchException);
                                    }
                                    return f7 * f2 * f2;
                                }
                                catch (MatchException matchException) {
                                    throw rj.dhb(matchException);
                                }
                            }
                            float f9 = f2 - 2.0f / f6;
                            f5 = f9 == 0.0f ? 0 : (f9 < 0.0f ? -1 : 1);
                        }
                        try {
                            if (stringArray != null) break block11;
                            if (f5 >= 0) break block12;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                        return f7 * (f2 -= 1.5f / f6) * f2 + 0.75f;
                    }
                    try {
                        f4 = f2;
                        f3 = 2.5f / f6;
                        if (stringArray != null) break block13;
                        float f10 = f4 - f3;
                        f5 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                if (f5 < 0) {
                    return f7 * (f2 -= 2.25f / f6) * f2 + 0.9375f;
                }
                f4 = f7 * (f2 -= 2.625f / f6) * f2;
                f3 = 0.984375f;
            }
            return f4 + f3;
        });
        kfhtE = rj.dgj(f2 -> 1.0f - voiVP.dgb(1.0f - f2));
        yfnub = rj.dgj(f2 -> {
            float f3;
            block6: {
                float f4;
                float f5;
                block4: {
                    block5: {
                        long l2 = VWJVh ^ 0x5FE0858EC7EAL;
                        String[] stringArray = rk.dhz();
                        try {
                            try {
                                f5 = f2;
                                f4 = 0.5f;
                                if (stringArray != null) break block4;
                                if (!(f5 < f4)) break block5;
                            }
                            catch (MatchException matchException) {
                                throw rj.dhb(matchException);
                            }
                            f3 = (1.0f - voiVP.dgb(1.0f - 2.0f * f2)) / 2.0f;
                            break block6;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                    }
                    f5 = 1.0f + voiVP.dgb(2.0f * f2 - 1.0f);
                    f4 = 2.0f;
                }
                f3 = f5 / f4;
            }
            return f3;
        });
        yiIHY = rj.dgj(f2 -> -2.0f * f2 * f2 * f2 + 3.0f * f2 * f2);
    }

    private static rj dgl(float f2) {
        return rj.dgj(f3 -> {
            float f4 = f3 - 1.0f;
            return f4 * f4 * ((f2 + 1.0f) * f4 + f2) + 1.0f;
        });
    }

    public abstract float dga(float var1, float var2, float var3, float var4);

    public static rj dgi(float f2) {
        return new rj$vX(f2);
    }

    private static rj dgm(float f2) {
        return rj.dgj(f3 -> {
            float f4;
            float f5;
            block4: {
                float f6;
                float f7;
                block5: {
                    long l2 = VWJVh ^ 0x7DBBDBA0D616L;
                    f7 = f2 * 1.525f;
                    String[] stringArray = rk.dhz();
                    f6 = f3 * 2.0f;
                    try {
                        try {
                            f5 = f6;
                            f4 = 1.0f;
                            if (stringArray != null) break block4;
                            if (!(f5 < f4)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw rj.dhb(matchException);
                        }
                        return 0.5f * (f6 * f6 * ((f7 + 1.0f) * f6 - f7));
                    }
                    catch (MatchException matchException) {
                        throw rj.dhb(matchException);
                    }
                }
                f5 = 0.5f;
                f4 = (f6 -= 2.0f) * f6 * ((f7 + 1.0f) * f6 + f7) + 2.0f;
            }
            return f5 * f4;
        });
    }

    public static rj dgd(float f2, float f3) {
        return new rj$vT(f2, f3);
    }

    private static rj dgo(float f2, float f3) {
        return new rj$wb(f2, f3);
    }

    private static rj dgp(float f2, float f3) {
        return new rj$wa(f2, f3);
    }

    public static rj dgj(rj$vQ rj$vQ) {
        return new rj$wd(rj$vQ);
    }

    public static rj dgc(double d2, double d3, double d4, double d5) {
        return new rj$vV((float)d2, (float)d3, (float)d4, (float)d5);
    }

    private static MatchException dhb(MatchException matchException) {
        return matchException;
    }

    public static void dgZ(String[] stringArray) {
        jlTVz = stringArray;
    }

    public float dgb(float f2) {
        return this.dga(f2, 0.0f, 1.0f, 1.0f);
    }

    private static float dgq(float f2) {
        return Math.clamp(f2, 0.0f, 1.0f);
    }

    public static rj dgh(float f2) {
        return new rj$vW(f2);
    }

    public static String[] dha() {
        return jlTVz;
    }

    private static rj dgn(float f2, float f3) {
        return new rj$wc(f2, f3);
    }

    private static float dgt(float f2) {
        return (float)Math.sqrt(f2);
    }

    public static rj dgf(float f2, float f3) {
        return new rj$vS(f2, f3);
    }

    public static rj dgg(float f2) {
        return new rj$vY(f2);
    }

    private static float dgs(float f2) {
        return (float)Math.cos(f2);
    }

    public static rj dge(float f2, float f3) {
        return new rj$vR(f2, f3);
    }

    private static rj dgk(float f2) {
        return rj.dgj(f3 -> f3 * f3 * ((f2 + 1.0f) * f3 - f2));
    }

    private static float dgr(float f2) {
        return (float)Math.sin(f2);
    }

    private static float dgu(float f2, float f3) {
        return (float)Math.pow(f2, f3);
    }
}

