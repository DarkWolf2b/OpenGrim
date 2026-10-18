/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Objects;
import sixtwo.az;
import sixtwo.gb;

public final class ay {
    public static final Object eGcjO;
    private static final Deque<Object> SeYIH;
    private static Object fuxGD;
    private static boolean ZmJyP;
    private static final long VfsuD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        VfsuD = gb.aYR(-9049166262062814204L, -529335740970060287L, MethodHandles.lookup().lookupClass()).a(5773309340471L);
        eGcjO = new Object();
        SeYIH = new ArrayDeque<Object>();
    }

    public static void sp() {
        fuxGD = null;
        ZmJyP = false;
        SeYIH.clear();
    }

    public static Object ss() {
        Object object;
        block5: {
            Object object2;
            block4: {
                long l2 = VfsuD ^ 0x414621E21B2EL;
                Object object3 = SeYIH.peek();
                String string = az.tE();
                try {
                    object2 = object3;
                    if (string == null) break block4;
                    if (object2 == null) break block5;
                }
                catch (MatchException matchException) {
                    throw ay.st(matchException);
                }
                object2 = object3;
            }
            return object2;
        }
        try {
            object = ZmJyP ? fuxGD : eGcjO;
        }
        catch (MatchException matchException) {
            throw ay.st(matchException);
        }
        return object;
    }

    private static MatchException st(MatchException matchException) {
        return matchException;
    }

    public static boolean sr() {
        Object object;
        block10: {
            Object object2;
            block11: {
                boolean bl2;
                block13: {
                    block12: {
                        String string;
                        block9: {
                            boolean bl3;
                            block8: {
                                long l2 = VfsuD ^ 0x583FFDC48074L;
                                string = az.tE();
                                try {
                                    bl3 = ZmJyP;
                                    if (string == null) break block8;
                                    if (bl3) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ay.st(matchException);
                                }
                                bl3 = true;
                            }
                            return bl3;
                        }
                        object2 = SeYIH.peek();
                        try {
                            try {
                                try {
                                    object = object2;
                                    if (string == null) break block10;
                                    if (object != null) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw ay.st(matchException);
                                }
                                if (fuxGD != eGcjO) break block12;
                            }
                            catch (MatchException matchException) {
                                throw ay.st(matchException);
                            }
                            bl2 = true;
                            break block13;
                        }
                        catch (MatchException matchException) {
                            throw ay.st(matchException);
                        }
                    }
                    bl2 = false;
                }
                return bl2;
            }
            object = object2;
        }
        return Objects.equals(object, fuxGD);
    }

    public static void sq(Object object, Runnable runnable) {
        SeYIH.push(object);
        try {
            runnable.run();
        }
        finally {
            SeYIH.pop();
        }
    }

    public static void so(Object object) {
        boolean bl2;
        long l2 = VfsuD ^ 0xC1F5453D8A2L;
        try {
            fuxGD = object;
            bl2 = object != null;
        }
        catch (MatchException matchException) {
            throw ay.st(matchException);
        }
        ZmJyP = bl2;
        SeYIH.clear();
    }
}

