/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_241
 */
package sixtwo;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import native.Loader;
import net.minecraft.class_241;
import sixtwo.ck;
import sixtwo.cl;
import sixtwo.cr;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class cm {
    private final List<ck> MENPa;
    protected final rk ybtAZ;
    private static long LwpdX;
    private static long iYuFd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cm() {
        long l = LwpdX ^ 0x35CED3973FA8L;
        iS[] iSArray = ck.QK();
        iS[] iSArray2 = iSArray;
        try {
            this.MENPa = new ArrayList<ck>();
            this.ybtAZ = new rk((int)iYuFd).dhs(rj.yiIHY);
            if (iS.bwL() == null) {
                ck.QJ(new iS[3]);
            }
        }
        catch (MatchException matchException) {
            throw cm.QR(matchException);
        }
    }

    static {
        Loader.doInit(cm.class);
        cm._d888335a83d063d9e5dc28decb42bdd5();
    }

    public void QN(lC lC2) {
        long l = LwpdX ^ 0x45FFA6D0296AL;
        Iterator<ck> iterator = this.MENPa.iterator();
        iS[] iSArray = ck.QK();
        while (iterator.hasNext()) {
            float f;
            float f2;
            float f3;
            float f4;
            class_241 class_2412;
            ck ck2;
            block20: {
                block18: {
                    ck ck3;
                    block17: {
                        float f5;
                        block19: {
                            block16: {
                                ck ck4;
                                block15: {
                                    ck2 = iterator.next();
                                    try {
                                        if (!ck2.QH() && iSArray == null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw cm.QR(matchException);
                                    }
                                    class_2412 = rm.dip();
                                    try {
                                        try {
                                            ck4 = ck2;
                                            if (iSArray != null) break block15;
                                            if (ck4.QF() != cl.zjBim) break block16;
                                        }
                                        catch (MatchException matchException) {
                                            throw cm.QR(matchException);
                                        }
                                        ck4 = ck2;
                                    }
                                    catch (MatchException matchException) {
                                        throw cm.QR(matchException);
                                    }
                                }
                                f5 = ck4.QG();
                                break block19;
                            }
                            f5 = 0.0f;
                        }
                        f4 = f5;
                        try {
                            try {
                                ck3 = ck2;
                                if (iSArray != null) break block17;
                                if (ck3.QF() != cl.BisXp) break block18;
                            }
                            catch (MatchException matchException) {
                                throw cm.QR(matchException);
                            }
                            ck3 = ck2;
                        }
                        catch (MatchException matchException) {
                            throw cm.QR(matchException);
                        }
                    }
                    f3 = ck3.QG();
                    break block20;
                }
                f3 = 0.0f;
            }
            float f6 = f3;
            try {
                f2 = ck2.QF() == cl.zjBim ? 1.0f : class_2412.field_1343;
            }
            catch (MatchException matchException) {
                throw cm.QR(matchException);
            }
            float f7 = f2;
            try {
                f = ck2.QF() == cl.BisXp ? 1.0f : class_2412.field_1342;
            }
            catch (MatchException matchException) {
                throw cm.QR(matchException);
            }
            float f8 = f;
            lC2.cdi(f4, f6, f7, f8, mG.hoGuU.cob(this.ybtAZ.dhj()));
            if (iSArray == null) continue;
        }
    }

    public void QO() {
        long l = LwpdX ^ 0x348F8ACF7D6L;
        this.MENPa.clear();
        class_241 class_2412 = rm.dip();
        iS[] iSArray = ck.QK();
        this.MENPa.add(new ck(cl.BisXp, 5.0f));
        this.MENPa.add(new ck(cl.BisXp, class_2412.field_1342 - 5.0f));
        this.MENPa.add(new ck(cl.zjBim, 4.0f));
        this.MENPa.add(new ck(cl.zjBim, class_2412.field_1343 - 5.0f));
        iS[] iSArray2 = iSArray;
        this.MENPa.add(new ck(cl.zjBim, class_2412.field_1343 / 2.0f - 1.0f));
        this.MENPa.add(new ck(cl.BisXp, class_2412.field_1342 / 2.0f - 0.5f));
        this.MENPa.add(new ck(cl.zjBim, class_2412.field_1343 / 4.0f - 0.5f));
        this.MENPa.add(new ck(cl.zjBim, class_2412.field_1343 / 4.0f * 3.0f - 0.5f));
        this.MENPa.add(new ck(cl.BisXp, class_2412.field_1342 / 4.0f - 0.5f));
        this.MENPa.add(new ck(cl.BisXp, class_2412.field_1342 / 4.0f * 3.0f - 0.5f));
        for (cr cr2 : rD.dlK().Ry()) {
            block5: {
                float f;
                block6: {
                    this.MENPa.add(new ck(cl.BisXp, cr2.RX()));
                    float f2 = cr2.RU();
                    try {
                        try {
                            float f3 = cr2.RW() + f2 / 2.0f - class_2412.field_1343 / 2.0f;
                            f = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (iSArray2 != null) break block5;
                            if (f <= 0) break block6;
                        }
                        catch (MatchException matchException) {
                            throw cm.QR(matchException);
                        }
                        this.MENPa.add(new ck(cl.zjBim, cr2.RW() + f2));
                        if (iSArray2 == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw cm.QR(matchException);
                    }
                    iS.bwK("f7HH9b");
                }
                f = (float)this.MENPa.add(new ck(cl.zjBim, cr2.RW()));
            }
            if (iSArray2 == null) continue;
        }
    }

    private static native MatchException QR(MatchException var0);

    public native List<ck> QP();

    public native rk QQ();

    private static native void _d888335a83d063d9e5dc28decb42bdd5();
}
