/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import net.minecraft.client.gui.screen.Screen;
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
        boolean bl2;
        block2: {
            block3: {
                long l2 = WbltW ^ 0x5ADBBF885DEDL;
                Screen screen = rD.dlmvG.currentScreen;
                String string = az.tE();
                try {
                    bl2 = screen instanceof aw;
                    if (string == null) break block2;
                    if (!bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)screen;
                aw2.addPopup(ap2);
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean route(k k2) {
        boolean bl2;
        block2: {
            block3: {
                long l2 = WbltW ^ 0x471B0693C4ACL;
                Screen screen = rD.dlmvG.currentScreen;
                String string = az.tE();
                try {
                    bl2 = screen instanceof aw;
                    if (string == null) break block2;
                    if (!bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)screen;
                k2.cB(ay.ss());
                aw2.addTooltip(k2);
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean route(aj aj2) {
        boolean bl2;
        block2: {
            block3: {
                long l2 = WbltW ^ 0x30FDD16B6B54L;
                Screen screen = rD.dlmvG.currentScreen;
                String string = az.tE();
                try {
                    bl2 = screen instanceof aw;
                    if (string == null) break block2;
                    if (!bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)screen;
                aw2.addPopupComponent(aj2);
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    default public void addOverlay(aj aj2) {
        this.addPopupComponent(aj2);
    }

    default public void addOverlay(aj aj2, boolean bl2) {
        this.addOverlay(aj2);
    }

    public void addTooltip(k var1);

    public void addPopup(ap var1);

    default public Object hoveredRoot(Iterable<? extends az> iterable, double d2, double d3) {
        long l2 = WbltW ^ 0x2DF747E1A9BAL;
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
                            if (!az2.tg(d2, d3)) break block6;
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

    public static boolean routeOverlay(aj aj2, boolean bl2) {
        boolean bl3;
        block2: {
            block3: {
                long l2 = WbltW ^ 0x42E5A632D4C8L;
                Screen screen = rD.dlmvG.currentScreen;
                String string = az.tE();
                try {
                    bl3 = screen instanceof aw;
                    if (string == null) break block2;
                    if (!bl3) break block3;
                }
                catch (MatchException matchException) {
                    throw aw.a(matchException);
                }
                aw aw2 = (aw)screen;
                aw2.addOverlay(aj2, bl2);
                return true;
            }
            bl3 = false;
        }
        return bl3;
    }

    public void addPopupComponent(aj var1);
}

