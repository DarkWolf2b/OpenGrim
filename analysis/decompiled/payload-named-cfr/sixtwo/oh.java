/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import java.util.function.Predicate;
import java.util.stream.Stream;
import java.util.stream.StreamSupport;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cA;
import sixtwo.gb;
import sixtwo.iX;
import sixtwo.jg;
import sixtwo.of;
import sixtwo.rD;

public class oh {
    private LivingEntity KZits;
    private float qXURN = 0.0f;
    private float DbtdA = 10.0f;
    private boolean iepqN = true;
    private boolean EGfIe = false;
    private boolean PuphK = false;
    private boolean uQZIO = false;
    private of cIVZn = of.OGxYa;
    private Predicate<LivingEntity> tnApV = livingEntity -> true;
    private static final long StRkF = gb.aYR(5472875431081897813L, 5319067998444526085L, MethodHandles.lookup().lookupClass()).a(226608611361197L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private oh(LivingEntity livingEntity2) {
        this.KZits = livingEntity2;
    }

    public static oh cCX(LivingEntity livingEntity) {
        return new oh(livingEntity);
    }

    public List<LivingEntity> cDi() {
        return this.cDq().sorted(this.cIVZn.cCG()).toList();
    }

    public oh cDe(boolean bl2) {
        this.PuphK = bl2;
        return this;
    }

    public oh cDh(Predicate<LivingEntity> predicate) {
        long l2 = StRkF ^ 0x2669D0FD3747L;
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

    private Stream<LivingEntity> cDq() {
        return this.cDo().filter(this::cDp);
    }

    public oh cDc(boolean bl2) {
        this.iepqN = bl2;
        return this;
    }

    private static MatchException cDw(MatchException matchException) {
        return matchException;
    }

    public oh cDf(boolean bl2) {
        this.uQZIO = bl2;
        return this;
    }

    private boolean cDp(LivingEntity livingEntity) {
        boolean bl2;
        block30: {
            block31: {
                String[] stringArray;
                block26: {
                    block27: {
                        PlayerEntity playerEntity;
                        block28: {
                            block29: {
                                long l2 = StRkF ^ 0x5F2394EE171AL;
                                stringArray = of.cCL();
                                try {
                                    bl2 = livingEntity instanceof PlayerEntity;
                                    if (stringArray == null) break block26;
                                    if (!bl2) break block27;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                playerEntity = (PlayerEntity)livingEntity;
                                try {
                                    try {
                                        try {
                                            try {
                                                bl2 = this.PuphK;
                                                if (stringArray == null) break block28;
                                                if (!bl2) break block29;
                                            }
                                            catch (MatchException matchException) {
                                                throw oh.cDw(matchException);
                                            }
                                            bl2 = rD.dmc().ddy(playerEntity);
                                            if (stringArray == null) break block28;
                                        }
                                        catch (MatchException matchException) {
                                            throw oh.cDw(matchException);
                                        }
                                        if (!bl2) break block29;
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
                            bl2 = this.uQZIO;
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (stringArray == null) break block26;
                                        if (!bl2) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw oh.cDw(matchException);
                                    }
                                    bl2 = rD.dml().aLp(playerEntity);
                                    if (stringArray == null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                if (!bl2) break block27;
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
                    bl2 = this.EGfIe;
                }
                try {
                    try {
                        try {
                            try {
                                if (stringArray == null) break block30;
                                if (!bl2) break block31;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            bl2 = iX.bxD((Entity)livingEntity);
                            if (stringArray == null) break block30;
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                        if (!bl2) break block31;
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
            bl2 = this.tnApV.test(livingEntity);
        }
        return bl2;
    }

    public <T extends LivingEntity> Stream<T> cDl(Class<T> clazz) {
        return this.cDk().filter(clazz::isInstance).map(clazz::cast);
    }

    public oh cDa(float f2, float f3) {
        this.qXURN = f2;
        this.DbtdA = f3;
        return this;
    }

    public <T extends LivingEntity> List<T> cDj(Class<T> clazz) {
        return this.cDq().filter(clazz::isInstance).map(clazz::cast).sorted(this.cIVZn.cCG()).toList();
    }

    public <T extends LivingEntity> T cDn(Class<T> clazz) {
        return (T)((LivingEntity)this.cDl(clazz).findFirst().orElse(null));
    }

    private Stream<LivingEntity> cDo() {
        return StreamSupport.stream(rD.dlmvG.world.getEntities().spliterator(), false).filter(entity -> {
            boolean bl2;
            long l2 = StRkF ^ 0xB537D2FBD06L;
            try {
                bl2 = entity != this.KZits;
            }
            catch (MatchException matchException) {
                throw oh.cDw(matchException);
            }
            return bl2;
        }).filter(LivingEntity.class::isInstance).map(LivingEntity.class::cast).filter(livingEntity -> {
            boolean bl2;
            block2: {
                block3: {
                    long l2 = StRkF ^ 0x7EB0DB52889L;
                    String[] stringArray = of.cCL();
                    try {
                        bl2 = livingEntity.isDead();
                        if (stringArray == null) break block2;
                        if (bl2) break block3;
                    }
                    catch (MatchException matchException) {
                        throw oh.cDw(matchException);
                    }
                    bl2 = true;
                    break block2;
                }
                bl2 = false;
            }
            return bl2;
        }).filter(livingEntity -> {
            boolean bl2;
            block6: {
                block8: {
                    block7: {
                        long l2 = StRkF ^ 0xA97C9DFC121L;
                        String[] stringArray = of.cCL();
                        try {
                            try {
                                try {
                                    bl2 = this.iepqN;
                                    if (stringArray == null) break block6;
                                    if (bl2) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw oh.cDw(matchException);
                                }
                                bl2 = livingEntity.isInvisible();
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            if (bl2) break block8;
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                    }
                    bl2 = true;
                    break block6;
                }
                bl2 = false;
            }
            return bl2;
        }).filter(livingEntity -> {
            double d2;
            block8: {
                block7: {
                    String[] stringArray;
                    block6: {
                        long l2 = StRkF ^ 0x63EB17838A75L;
                        double d3 = jg.bBJ(this.KZits.getEyePos(), livingEntity.getBoundingBox());
                        stringArray = of.cCL();
                        try {
                            try {
                                double d4 = d3 - (double)this.qXURN;
                                d2 = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (d2 < 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oh.cDw(matchException);
                            }
                            double d5 = d3 - (double)this.DbtdA;
                            d2 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw oh.cDw(matchException);
                        }
                    }
                    try {
                        if (stringArray == null) break block8;
                        if (d2 > 0) break block7;
                    }
                    catch (MatchException matchException) {
                        throw oh.cDw(matchException);
                    }
                    d2 = 1.0;
                    break block8;
                }
                d2 = 0.0;
            }
            return (boolean)d2;
        });
    }

    public oh cDd(boolean bl2) {
        this.EGfIe = bl2;
        return this;
    }

    public LivingEntity cDm() {
        return this.cDq().min(this.cIVZn.cCG()).orElse(null);
    }

    public oh cDb(cA cA2) {
        this.qXURN = cA2.UP(0);
        this.DbtdA = cA2.UP(1);
        return this;
    }

    public oh cCZ(float f2) {
        this.qXURN = 0.0f;
        this.DbtdA = f2;
        return this;
    }

    public static oh cCY() {
        return new oh((LivingEntity)rD.dlmvG.player);
    }

    public oh cDg(of of2) {
        of of3;
        block2: {
            block3: {
                long l2 = StRkF ^ 0x2C3AAE734C73L;
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

    public Stream<LivingEntity> cDk() {
        return this.cDq().sorted(this.cIVZn.cCG());
    }
}

