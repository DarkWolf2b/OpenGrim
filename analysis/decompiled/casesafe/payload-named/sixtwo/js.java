/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;

public class js {
    private static final ThreadLocal<Integer> TOuAs;
    private static String[] lfwai;
    private static final long JIoBD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        JIoBD = gb.aYR(255756148750922649L, -1897272244287991293L, MethodHandles.lookup().lookupClass()).a(50545706369725L);
        TOuAs = ThreadLocal.withInitial(() -> 0);
        js.bFE(null);
    }

    /*
     * Unable to fully structure code
     */
    public static void bFB() {
        block9: {
            block8: {
                var0 = js.JIoBD ^ 109489683962336L;
                var3_1 = js.TOuAs.get() - 1;
                var2_2 = js.bFF();
                try {
                    try {
                        if (var2_2 != null) break block8;
                        if (var3_1 <= 0) {
                        }
                        ** GOTO lbl19
                    }
                    catch (MatchException v0) {
                        throw js.bFG(v0);
                    }
                    js.TOuAs.remove();
                }
                catch (MatchException v1) {
                    throw js.bFG(v1);
                }
            }
            try {
                if (var2_2 == null) break block9;
lbl19:
                // 2 sources

                js.TOuAs.set(var3_1);
            }
            catch (MatchException v2) {
                throw js.bFG(v2);
            }
        }
    }

    public static void bFA() {
        TOuAs.set(TOuAs.get() + 1);
    }

    private static MatchException bFG(MatchException matchException) {
        return matchException;
    }

    public static void bFE(String[] stringArray) {
        lfwai = stringArray;
    }

    public static String[] bFF() {
        return lfwai;
    }

    public static boolean bFC() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = JIoBD ^ 0x42392A7897BFL;
                String[] stringArray = js.bFF();
                try {
                    bl2 = TOuAs.get().intValue();
                    if (stringArray != null) break block2;
                    if (bl2 <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw js.bFG(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }
}

