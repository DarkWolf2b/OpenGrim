/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import sixtwo.cA;
import sixtwo.gb;
import sixtwo.iX;
import sixtwo.jg;
import sixtwo.of;
import sixtwo.rD;

public class oh {
    private class_1309 KZits;
    private float qXURN = 0.0f;
    private float DbtdA = 10.0f;
    private boolean iepqN = true;
    private boolean EGfIe = false;
    private boolean PuphK = false;
    private boolean uQZIO = false;
    private of cIVZn = of.OGxYa;
    private Predicate<class_1309> tnApV = class_13092 -> true;
    private static final long StRkF = gb.aYR(5472875431081897813L, 5319067998444526085L, MethodHandles.lookup().lookupClass()).a(226608611361197L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private oh(class_1309 class_13093) {
        this.KZits = class_13093;
    }

    public static oh cCX(class_1309 class_13092) {
        return new oh(class_13092);
    }

    public List<class_1309> cDi() {
        return this.cDq().sorted(this.cIVZn.cCG()).toList();
    }

    public oh cDe(boolean bl) {
        this.PuphK = bl;
        return this;
    }

    public oh cDh(Predicate<class_1309> predicate) {
        long l = StRkF ^ 0x2669D0FD3747L;
        try {
            if (predicate != null) {
                this.tnApV = this.tnApV.and(predicate);
            }
        }
        catch (MatchException matchException) {
            throw oh.cDw(matchException);
        }
        return this;
    }

    private Stream<class_1309> cDq() {
        return this.cDo().filter(this::cDp);
    }

    public oh cDc(boolean bl) {
        this.iepqN = bl;
        return this;
    }

    private static MatchException cDw(MatchException matchException) {
        return matchException;
    }

    public oh cDf(boolean bl) {
        this.uQZIO = bl;
        return this;
    }

    private boolean cDp(class_1309 class_13092) {
        boolean bl;
        block30: {
            block31: {
                String[] stringArray;
                block26: {
                    block27: {
                        class_1657 class_16572;
                        block28: {
                            block29: {
                                long l = StRkF ^ 0x5F2394EE171AL;
                                stringArray = of.cCL();
                                try {
                                    bl = class_13092 instanceof class_1657;
                                    if (stringArray == null) break block26;
                                    if (!bl) break block27;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                class_16572 = (class_1657)class_13092;
                                try {
                                    try {
                                        try {
                                            try {
                                                bl = this.PuphK;
                                                if (stringArray == null) break block28;
                                                if (!bl) break block29;
                                            }
                                            catch (MatchException matchException) {
                                                throw oh.cDw(matchException);
                                            }
                                            bl = rD.dmc().ddy(class_16572);
                                            if (stringArray == null) break block28;
                                        }
                                        catch (MatchException matchException) {
                                            throw oh.cDw(matchException);
                                        }
                                        if (!bl) break block29;
                                    }
                                    catch (MatchException matchException) {
                                        throw oh.cDw(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                            }
                            bl = this.uQZIO;
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (stringArray == null) break block26;
                                        if (!bl) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw oh.cDw(matchException);
                                    }
                                    bl = rD.dml().aLp(class_16572);
                                    if (stringArray == null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                if (!bl) break block27;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                    }
                    bl = this.EGfIe;
                }
                try {
                    try {
                        try {
                            try {
                                if (stringArray == null) break block30;
                                if (!bl) break block31;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            bl = iX.bxD((class_1297)class_13092);
                            if (stringArray == null) break block30;
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                        if (!bl) break block31;
                    }
                    catch (MatchException matchException) {
                        throw oh.cDw(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw oh.cDw(matchException);
                }
            }
            bl = this.tnApV.test(class_13092);
        }
        return bl;
    }

    public <T extends class_1309> Stream<T> cDl(Class<T> clazz) {
        return this.cDk().filter(clazz::isInstance).map(clazz::cast);
    }

    public oh cDa(float f, float f2) {
        this.qXURN = f;
        this.DbtdA = f2;
        return this;
    }

    public <T extends class_1309> List<T> cDj(Class<T> clazz) {
        return this.cDq().filter(clazz::isInstance).map(clazz::cast).sorted(this.cIVZn.cCG()).toList();
    }

    public <T extends class_1309> T cDn(Class<T> clazz) {
        return (T)((class_1309)this.cDl(clazz).findFirst().orElse(null));
    }

    private Stream<class_1309> cDo() {
        return StreamSupport.stream(rD.dlmvG.field_1687.method_18112().spliterator(), false).filter(class_12972 -> {
            boolean bl;
            long l = StRkF ^ 0xB537D2FBD06L;
            try {
                bl = class_12972 != this.KZits;
            }
            catch (MatchException matchException) {
                throw oh.cDw(matchException);
            }
            return bl;
        }).filter(class_1309.class::isInstance).map(class_1309.class::cast).filter(class_13092 -> {
            boolean bl;
            block2: {
                block3: {
                    long l = StRkF ^ 0x7EB0DB52889L;
                    String[] stringArray = of.cCL();
                    try {
                        bl = class_13092.method_29504();
                        if (stringArray == null) break block2;
                        if (bl) break block3;
                    }
                    catch (MatchException matchException) {
                        throw oh.cDw(matchException);
                    }
                    bl = true;
                    break block2;
                }
                bl = false;
            }
            return bl;
        }).filter(class_13092 -> {
            boolean bl;
            block6: {
                block8: {
                    block7: {
                        long l = StRkF ^ 0xA97C9DFC121L;
                        String[] stringArray = of.cCL();
                        try {
                            try {
                                try {
                                    bl = this.iepqN;
                                    if (stringArray == null) break block6;
                                    if (bl) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                bl = class_13092.method_5767();
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            if (bl) break block8;
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                    }
                    bl = true;
                    break block6;
                }
                bl = false;
            }
            return bl;
        }).filter(class_13092 -> {
            double d;
            block8: {
                block7: {
                    String[] stringArray;
                    block6: {
                        long l = StRkF ^ 0x63EB17838A75L;
                        double d2 = jg.bBJ(this.KZits.method_33571(), class_13092.method_5829());
                        stringArray = of.cCL();
                        try {
                            try {
                                double d3 = d2 - (double)this.qXURN;
                                d = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (d < 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            double d4 = d2 - (double)this.DbtdA;
                            d = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                    }
                    try {
                        if (stringArray == null) break block8;
                        if (d > 0) break block7;
                    }
                    catch (MatchException matchException) {
                        throw oh.cDw(matchException);
                    }
                    d = 1.0;
                    break block8;
                }
                d = 0.0;
            }
            return (boolean)d;
        });
    }

    public oh cDd(boolean bl) {
        this.EGfIe = bl;
        return this;
    }

    public class_1309 cDm() {
        return this.cDq().min(this.cIVZn.cCG()).orElse(null);
    }

    public oh cDb(cA cA2) {
        this.qXURN = cA2.UP(0);
        this.DbtdA = cA2.UP(1);
        return this;
    }

    public oh cCZ(float f) {
        this.qXURN = 0.0f;
        this.DbtdA = f;
        return this;
    }

    public static oh cCY() {
        return new oh((class_1309)rD.dlmvG.field_1724);
    }

    public oh cDg(of of2) {
        of of3;
        block2: {
            block3: {
                long l = StRkF ^ 0x2C3AAE734C73L;
                String[] stringArray = of.cCL();
                try {
                    oh oh2 = this;
                    of3 = of2;
                    if (stringArray == null) break block2;
                    if (of3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw oh.cDw(matchException);
                }
                of3 = of.OGxYa;
                break block2;
            }
            of3 = of2;
        }
        oh2.cIVZn = of3;
        return this;
    }

    public Stream<class_1309> cDk() {
        return this.cDq().sorted(this.cIVZn.cCG());
    }
}
