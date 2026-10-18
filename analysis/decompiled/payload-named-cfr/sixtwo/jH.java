/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Stack;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.lC;

public class jH {
    private static final Stack<Matrix3x2fStack> uQzaj;
    private static String[] qPLFl;
    private static final long cgTUn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static String[] bIh() {
        return qPLFl;
    }

    public static void bIg(String[] stringArray) {
        qPLFl = stringArray;
    }

    static {
        cgTUn = gb.aYR(7714846715772269806L, -3538060880037723863L, MethodHandles.lookup().lookupClass()).a(133043786062544L);
        uQzaj = new Stack();
        jH.bIg(null);
    }

    public static void bIf() {
        Matrix3x2fStack matrix3x2fStack;
        block4: {
            block5: {
                long l2 = cgTUn ^ 0x3227F30D6F98L;
                String[] stringArray = jH.bIh();
                try {
                    try {
                        matrix3x2fStack = uQzaj;
                        if (stringArray != null) break block4;
                        if (!matrix3x2fStack.isEmpty()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jH.bIi(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw jH.bIi(matchException);
                }
            }
            matrix3x2fStack = uQzaj.pop();
        }
        Matrix3x2fStack matrix3x2fStack2 = matrix3x2fStack;
        matrix3x2fStack2.popMatrix();
    }

    public static void bId(lC lC2, float f2, float f3, float f4) {
        lC lC3;
        block2: {
            block3: {
                long l2 = cgTUn ^ 0xE32DA2D9B56L;
                String[] stringArray = jH.bIh();
                try {
                    lC3 = lC2;
                    if (stringArray != null) break block2;
                    if (lC3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw jH.bIi(matchException);
                }
                return;
            }
            lC3 = lC2;
        }
        Matrix3x2fStack matrix3x2fStack = lC3.cfe().getMatrices();
        uQzaj.push(matrix3x2fStack);
        matrix3x2fStack.pushMatrix();
        matrix3x2fStack.translate(f2, f3);
        matrix3x2fStack.scale(f4, f4);
        matrix3x2fStack.translate(-f2, -f3);
    }

    public static void bIe(Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4) {
        block2: {
            Matrix3x2fStack matrix3x2fStack2;
            block3: {
                long l2 = cgTUn ^ 0x8C2773AB828L;
                String[] stringArray = jH.bIh();
                try {
                    matrix3x2fStack2 = matrix3x2fStack;
                    if (stringArray != null) break block2;
                    if (matrix3x2fStack2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw jH.bIi(matchException);
                }
                return;
            }
            uQzaj.push(matrix3x2fStack);
            matrix3x2fStack.pushMatrix();
            matrix3x2fStack.translate(f2, f3);
            matrix3x2fStack.scale(f4, f4);
            matrix3x2fStack2 = matrix3x2fStack.translate(-f2, -f3);
        }
    }

    private static MatchException bIi(MatchException matchException) {
        return matchException;
    }
}

