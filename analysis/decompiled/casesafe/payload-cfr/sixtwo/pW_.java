/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_11890
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import net.minecraft.class_11890;
import sixtwo.gb;
import sixtwo.pX;
import sixtwo.pY;
import sixtwo.qa;

public final class pW {
    private static final Map<UUID, pX> Myjxl;
    private static final long SqIKc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        SqIKc = gb.aYR(-7158962212317253991L, 4891171278871459191L, MethodHandles.lookup().lookupClass()).a(64149559430013L);
        Myjxl = new ConcurrentHashMap<UUID, pX>();
    }

    private static MatchException cUa(MatchException matchException) {
        return matchException;
    }

    public static void cTX(class_11890 class_118902, pY pY2) {
        block5: {
            Object object;
            block6: {
                block4: {
                    long l = SqIKc ^ 0x2F359780039DL;
                    String[] stringArray = qa.cUe();
                    try {
                        try {
                            if (class_118902 == null) break block4;
                            object = pY2;
                            if (stringArray == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw pW.cUa(matchException);
                        }
                        if (object != null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw pW.cUa(matchException);
                    }
                }
                return;
            }
            object = Myjxl.put(class_118902.method_5667(), pY2.createInstance());
        }
    }

    public static void cTY(class_11890 class_118902) {
        block2: {
            Object object;
            block3: {
                long l = SqIKc ^ 0x2DD3799EC888L;
                String[] stringArray = qa.cUe();
                try {
                    object = class_118902;
                    if (stringArray == null) break block2;
                    if (object != null) break block3;
                }
                catch (MatchException matchException) {
                    throw pW.cUa(matchException);
                }
                return;
            }
            object = Myjxl.remove(class_118902.method_5667());
        }
    }

    public static pX cTZ(class_11890 class_118902) {
        pX pX2;
        block16: {
            pX pX3;
            block17: {
                String[] stringArray;
                block14: {
                    block15: {
                        Object object;
                        block12: {
                            block13: {
                                long l = SqIKc ^ 0x5A9D6FB3E7C6L;
                                stringArray = qa.cUe();
                                try {
                                    try {
                                        object = class_118902;
                                        if (stringArray == null) break block12;
                                        if (object != null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw pW.cUa(matchException);
                                    }
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw pW.cUa(matchException);
                                }
                            }
                            object = Myjxl.get(class_118902.method_5667());
                        }
                        pX3 = (pX)object;
                        try {
                            try {
                                pX2 = pX3;
                                if (stringArray == null) break block14;
                                if (pX2 != null) break block15;
                            }
                            catch (MatchException matchException) {
                                throw pW.cUa(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw pW.cUa(matchException);
                        }
                    }
                    pX2 = pX3;
                }
                try {
                    try {
                        if (stringArray == null) break block16;
                        if (!pX2.finished()) break block17;
                    }
                    catch (MatchException matchException) {
                        throw pW.cUa(matchException);
                    }
                    Myjxl.remove(class_118902.method_5667(), pX3);
                    return null;
                }
                catch (MatchException matchException) {
                    throw pW.cUa(matchException);
                }
            }
            pX2 = pX3;
        }
        return pX2;
    }
}
