/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_437
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import net.minecraft.class_437;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.ay;
import sixtwo.az;
import sixtwo.g;
import sixtwo.gb;
import sixtwo.k;
import sixtwo.rD;

public interface aw {
    public static final long WbltW = gb.aYR(5997638455782309412L, 2626269204656746336L, MethodHandles.lookup().lookupClass()).a(58560763372423L);

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    default public boolean closing() {
        return false;
    }

    public g manager();

    public static boolean route(ap ap2) {
        boolean bl;
        block2: {
            block3: {
                long l = WbltW ^ 0x5ADBBF885DEDL;
                class_437 class_4372 = rD.dlmvG.field_1755;
                String string = az.tE();
                try {
                    bl = class_4372 instanceof aw;
                    if (string == null) break block2;
                    if (!bl) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)class_4372;
                aw2.addPopup(ap2);
                return true;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean route(k k2) {
        boolean bl;
        block2: {
            block3: {
                long l = WbltW ^ 0x471B0693C4ACL;
                class_437 class_4372 = rD.dlmvG.field_1755;
                String string = az.tE();
                try {
                    bl = class_4372 instanceof aw;
                    if (string == null) break block2;
                    if (!bl) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)class_4372;
                k2.cB(ay.ss());
                aw2.addTooltip(k2);
                return true;
            }
            bl = false;
        }
        return bl;
    }

    public static boolean route(aj aj2) {
        boolean bl;
        block2: {
            block3: {
                long l = WbltW ^ 0x30FDD16B6B54L;
                class_437 class_4372 = rD.dlmvG.field_1755;
                String string = az.tE();
                try {
                    bl = class_4372 instanceof aw;
                    if (string == null) break block2;
                    if (!bl) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)class_4372;
                aw2.addPopupComponent(aj2);
                return true;
            }
            bl = false;
        }
        return bl;
    }

    default public void addOverlay(aj aj2) {
        this.addPopupComponent(aj2);
    }

    default public void addOverlay(aj aj2, boolean bl) {
        this.addOverlay(aj2);
    }

    public void addTooltip(k var1);

    public void addPopup(ap var1);

    default public Object hoveredRoot(Iterable<? extends az> iterable, double d, double d2) {
        long l = WbltW ^ 0x2DF747E1A9BAL;
        Iterator<? extends az> iterator = iterable.iterator();
        String string = az.tE();
        while (iterator.hasNext()) {
            block6: {
                az az2;
                block5: {
                    az az3 = iterator.next();
                    try {
                        try {
                            az2 = az3;
                            if (string == null) break block5;
                            if (!az2.tg(d, d2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw aw.a(matchException);
                        }
                        az2 = az3;
                    }
                    catch (MatchException matchException) {
                        throw aw.a(matchException);
                    }
                }
                return az2;
            }
            if (string != null) continue;
        }
        return null;
    }

    public static boolean routeOverlay(aj aj2, boolean bl) {
        boolean bl2;
        block2: {
            block3: {
                long l = WbltW ^ 0x42E5A632D4C8L;
                class_437 class_4372 = rD.dlmvG.field_1755;
                String string = az.tE();
                try {
                    bl2 = class_4372 instanceof aw;
                    if (string == null) break block2;
                    if (!bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)class_4372;
                aw2.addOverlay(aj2, bl);
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    public void addPopupComponent(aj var1);
}
