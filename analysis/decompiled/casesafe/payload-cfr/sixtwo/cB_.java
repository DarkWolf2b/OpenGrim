/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.function.Supplier;
import sixtwo.cB$sm;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public abstract class cB {
    private static final ThreadLocal<cB$sm> BgpvM;
    private static final ThreadLocal<Boolean> qrjFk;
    protected final int[] NwlSF;
    protected final List<Runnable> PMSMO = new ArrayList<Runnable>();
    protected final List<Runnable> aFqYe = new ArrayList<Runnable>();
    protected Supplier<Boolean> uexTC = () -> true;
    private static boolean WVYkD;
    private static final long LcOyM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cB(mr mr2) {
        this.NwlSF = mr2.clT();
    }

    public cB(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    static {
        LcOyM = gb.aYR(3762902164579098143L, 1918968295152562278L, MethodHandles.lookup().lookupClass()).a(202678185734377L);
        BgpvM = new ThreadLocal();
        qrjFk = new ThreadLocal();
        cB.Vs(true);
    }

    public int[] Vm() {
        return this.NwlSF;
    }

    public <T extends cB> T Vd(Runnable runnable) {
        this.PMSMO.add(runnable);
        return (T)this;
    }

    public static void Vi(Runnable runnable) {
        cB.Vj(runnable, true);
    }

    public static void Vh(Runnable runnable) {
        cB.Vj(runnable, false);
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private static void Vj(Runnable runnable, boolean bl) {
        block19: {
            cB$sm cB$sm;
            boolean bl2;
            cB$sm cB$sm2;
            block18: {
                block16: {
                    block17: {
                        long l = LcOyM ^ 0x3E521F2C5956L;
                        cB$sm2 = BgpvM.get();
                        bl2 = cB.Vu();
                        try {
                            cB$sm = cB$sm2;
                            if (bl2) break block16;
                            if (cB$sm != null) break block17;
                        }
                        catch (MatchException matchException) {
                            throw cB.Vv(matchException);
                        }
                        cB$sm2 = new cB$sm();
                        BgpvM.set(cB$sm2);
                    }
                    cB$sm2.oTCWD |= bl;
                    ++cB$sm2.Gkoov;
                    runnable.run();
                    --cB$sm2.Gkoov;
                    cB$sm = cB$sm2;
                }
                if (bl2) break block18;
                try {
                    block22: {
                        if (cB$sm.Gkoov != 0) break block19;
                        break block22;
                        catch (MatchException matchException) {
                            throw cB.Vv(matchException);
                        }
                    }
                    cB$sm = cB$sm2;
                }
                catch (MatchException matchException) {
                    throw cB.Vv(matchException);
                }
            }
            List<cB> list = List.copyOf(cB$sm.vzghL);
            BgpvM.remove();
            for (cB cB2 : list) {
                try {
                    cB2.Vl(cB$sm2.oTCWD);
                    if (!bl2 && !bl2) continue;
                    break block19;
                }
                catch (MatchException matchException) {
                    throw cB.Vv(matchException);
                }
            }
            break block19;
            catch (Throwable throwable) {
                block21: {
                    cB$sm cB$sm3;
                    block20: {
                        try {
                            try {
                                --cB$sm2.Gkoov;
                                cB$sm3 = cB$sm2;
                                if (bl2) break block20;
                                if (cB$sm3.Gkoov != 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw cB.Vv(matchException);
                            }
                            cB$sm3 = cB$sm2;
                        }
                        catch (MatchException matchException) {
                            throw cB.Vv(matchException);
                        }
                    }
                    List<cB> list2 = List.copyOf(cB$sm3.vzghL);
                    BgpvM.remove();
                    for (cB cB3 : list2) {
                        cB3.Vl(cB$sm2.oTCWD);
                        if (!bl2) continue;
                    }
                }
                throw throwable;
            }
        }
    }

    public <T extends cB> T Ve(Runnable runnable) {
        this.aFqYe.add(runnable);
        return (T)this;
    }

    private static MatchException Vv(MatchException matchException) {
        return matchException;
    }

    public void Vg(iS iS2) {
        block3: {
            iS iS3;
            block2: {
                long l = LcOyM ^ 0x196A68BFD708L;
                boolean bl = cB.Vt();
                try {
                    iS3 = iS2;
                    if (!bl) break block2;
                    if (iS3 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw cB.Vv(matchException);
                }
                iS3 = iS2;
            }
            iS3.bwH(this);
        }
    }

    public static boolean Vu() {
        boolean bl = cB.Vt();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw cB.Vv(matchException);
        }
        return false;
    }

    public abstract void SS(JsonElement var1);

    public Supplier<Boolean> Vp() {
        return this.uexTC;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    private void Vl(boolean var1_1) {
        block26: {
            block25: {
                var2_2 = cB.LcOyM ^ 40054581482314L;
                var5_3 = cB.qrjFk.get();
                var4_4 = cB.Vt();
                try {
                    if (var1_1) {
                        cB.qrjFk.set(true);
                    }
                }
                catch (MatchException v0) {
                    throw cB.Vv(v0);
                }
                try {
                    for (Runnable var7_6 : this.PMSMO) {
                        try {
                            var7_6.run();
                            if (var4_4) {
                                if (var4_4) continue;
                                break;
                            }
                            break block25;
                        }
                        catch (MatchException v1) {
                            throw cB.Vv(v1);
                        }
                    }
                    if (var1_1) break block25;
                    for (Runnable var7_6 : this.aFqYe) {
                        try {
                            var7_6.run();
                            if (var4_4) {
                                if (var4_4) continue;
                                ** break;
                            }
                            break block26;
                        }
                        catch (MatchException v2) {
                            throw cB.Vv(v2);
                        }
                    }
                }
                catch (Throwable var8_7) {
                    block28: {
                        block27: {
                            try {
                                try {
                                    if (!var4_4) break block27;
                                    if (var5_3 == null) {
                                    }
                                    ** GOTO lbl46
                                }
                                catch (MatchException v3) {
                                    throw cB.Vv(v3);
                                }
                                cB.qrjFk.remove();
                            }
                            catch (MatchException v4) {
                                throw cB.Vv(v4);
                            }
                        }
                        try {
                            if (var4_4) break block28;
lbl46:
                            // 2 sources

                            cB.qrjFk.set(var5_3);
                        }
                        catch (MatchException v5) {
                            throw cB.Vv(v5);
                        }
                    }
                    throw var8_7;
                }
            }
            if (var5_3 != null) ** GOTO lbl61
            try {
                block29: {
                    cB.qrjFk.remove();
                    if (var4_4) break block26;
                    break block29;
                    catch (MatchException v6) {
                        throw cB.Vv(v6);
                    }
                }
                cB.qrjFk.set(var5_3);
            }
            catch (MatchException v7) {
                throw cB.Vv(v7);
            }
        }
    }

    public List<Runnable> Vn() {
        return this.PMSMO;
    }

    public static void Vs(boolean bl) {
        WVYkD = bl;
    }

    public static boolean Vt() {
        return WVYkD;
    }

    public List<Runnable> Vo() {
        return this.aFqYe;
    }

    protected void Vk() {
        block4: {
            block5: {
                long l = LcOyM ^ 0x4AB527BD44A3L;
                cB$sm cB$sm = BgpvM.get();
                boolean bl = cB.Vu();
                try {
                    try {
                        if (bl) break block4;
                        if (cB$sm == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cB.Vv(matchException);
                    }
                    cB$sm.vzghL.add(this);
                    return;
                }
                catch (MatchException matchException) {
                    throw cB.Vv(matchException);
                }
            }
            this.Vl(Boolean.TRUE.equals(qrjFk.get()));
        }
    }

    public abstract void SR(Map<String, Object> var1);

    public <T extends cB> T Vf(Supplier<Boolean> supplier) {
        Supplier<Boolean> supplier2;
        block2: {
            block3: {
                long l = LcOyM ^ 0x767A4A59DA92L;
                boolean bl = cB.Vt();
                try {
                    cB cB2 = this;
                    supplier2 = supplier;
                    if (!bl) break block2;
                    if (supplier2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw cB.Vv(matchException);
                }
                supplier2 = supplier;
                break block2;
            }
            supplier2 = () -> true;
        }
        cB2.uexTC = supplier2;
        return (T)this;
    }
}
