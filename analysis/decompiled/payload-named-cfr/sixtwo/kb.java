/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.BufferBuilder
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.BufferBuilder;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kc;
import sixtwo.la;
import sixtwo.mG;

public class kb
implements kc {
    private static int[] XoDvl;
    private static final long dzPrA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public void uv_quad_region_color(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, mG mG2) {
        long l2 = dzPrA ^ 0x71B715301949L;
        int n2 = mG2.coh();
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3).texture(f6, f7).color(n2);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5).texture(f6, f9).color(n2);
        int[] nArray = kb.bOb();
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5).texture(f8, f9).color(n2);
        int[] nArray2 = nArray;
        try {
            bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3).texture(f8, f7).color(n2);
            if (nArray2 != null) {
                iS.bwK("LdyUFb");
            }
        }
        catch (MatchException matchException) {
            throw kb.bOc(matchException);
        }
    }

    static {
        dzPrA = gb.aYR(3512256792401566856L, -5836583734373741107L, MethodHandles.lookup().lookupClass()).a(13982792772499L);
        if (kb.bOb() != null) {
            kb.bOa(new int[5]);
        }
    }

    private static MatchException bOc(MatchException matchException) {
        return matchException;
    }

    public static int[] bOb() {
        return XoDvl;
    }

    @Override
    public void uv_quad(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5) {
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3).texture(0.0f, 0.0f);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5).texture(0.0f, 1.0f);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5).texture(1.0f, 1.0f);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3).texture(1.0f, 0.0f);
    }

    @Override
    public void quad(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5) {
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3);
    }

    @Override
    public void quad_color(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, mG mG2) {
        int n2 = mG2.coh();
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3).color(n2);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5).color(n2);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5).color(n2);
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3).color(n2);
    }

    @Override
    public void quad_color(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, la la2) {
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3).color(la2.bXe().coh());
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5).color(la2.bXg().coh());
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5).color(la2.bXh().coh());
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3).color(la2.bXf().coh());
    }

    public static void bOa(int[] nArray) {
        XoDvl = nArray;
    }

    @Override
    public void uv_quad_color(BufferBuilder bufferBuilder, Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, mG mG2) {
        long l2 = dzPrA ^ 0x3728E4FEAE2CL;
        int n2 = mG2.coh();
        int[] nArray = kb.bOb();
        bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3).texture(0.0f, 0.0f).color(n2);
        int[] nArray2 = nArray;
        try {
            bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2, f3 + f5).texture(0.0f, 1.0f).color(n2);
            bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3 + f5).texture(1.0f, 1.0f).color(n2);
            bufferBuilder.vertex((Matrix3x2fc)matrix3x2fStack, f2 + f4, f3).texture(1.0f, 0.0f).color(n2);
            if (iS.bwL() == null) {
                kb.bOa(new int[4]);
            }
        }
        catch (MatchException matchException) {
            throw kb.bOc(matchException);
        }
    }
}

