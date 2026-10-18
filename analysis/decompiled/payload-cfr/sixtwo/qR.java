/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1511
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.HashMap;
import java.util.Map;
import net.minecraft.class_1297;
import net.minecraft.class_1511;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.hp;
import sixtwo.hw;
import sixtwo.qL;

public class qR {
    private final Map<class_1297, Boolean> EDYHm = new HashMap<class_1297, Boolean>();
    private static final long AfTAF = gb.aYR(7585163979685280713L, -922062843457004028L, MethodHandles.lookup().lookupClass()).a(101520123846384L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qR() {
        hF.bdI(this);
    }

    public boolean ddR(class_1297 class_12972) {
        return this.EDYHm.containsKey(class_12972);
    }

    private static MatchException ddS(MatchException matchException) {
        return matchException;
    }

    @hG
    public void ddQ(hp hp2) {
        block9: {
            class_1297 class_12972;
            boolean bl;
            block8: {
                long l = AfTAF ^ 0x2EF161B2FEC4L;
                class_1297 class_12973 = hp2.bcX();
                bl = qL.dcc();
                try {
                    try {
                        class_12972 = class_12973;
                        if (bl) break block8;
                        if (!(class_12972 instanceof class_1511)) break block9;
                    }
                    catch (MatchException matchException) {
                        throw qR.ddS(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
            }
            class_1511 class_15112 = (class_1511)class_12972;
            try {
                Object object;
                try {
                    object = this;
                    if (bl || !((qR)object).ddR((class_1297)class_15112)) break block9;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
                object = this.EDYHm.remove(class_15112);
            }
            catch (MatchException matchException) {
                throw qR.ddS(matchException);
            }
        }
    }

    @hG
    public void ddP(hw.tw tw2) {
        block5: {
            class_1297 class_12972;
            block4: {
                long l = AfTAF ^ 0x8ADE9EAA18BL;
                class_1297 class_12973 = tw2.bdm();
                boolean bl = qL.dcb();
                try {
                    try {
                        class_12972 = class_12973;
                        if (!bl) break block4;
                        if (!(class_12972 instanceof class_1511)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw qR.ddS(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw qR.ddS(matchException);
                }
            }
            class_1511 class_15112 = (class_1511)class_12972;
            this.EDYHm.put((class_1297)class_15112, true);
        }
    }
}
