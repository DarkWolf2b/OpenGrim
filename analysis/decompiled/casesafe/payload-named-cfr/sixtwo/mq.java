/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.mp;

public abstract class mq {
    protected Vec3d vMbcc;
    protected Vec3d fmdTe;
    protected Vec3d AkpJr;
    protected mp XIaIs;
    protected float hMiLh;
    private static int nELfM;
    private static final long fnWhW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mq(Vec3d vec3d, Vec3d vec3d2, mp mp2, float f2) {
        long l2 = fnWhW ^ 0xC9CA8713958L;
        int n2 = mq.clO();
        this.vMbcc = vec3d;
        this.fmdTe = vec3d;
        int n3 = n2;
        try {
            this.AkpJr = vec3d2;
            this.XIaIs = mp2;
            this.hMiLh = f2;
            if (iS.bwL() == null) {
                mq.clM(++n3);
            }
        }
        catch (MatchException matchException) {
            throw mq.clP(matchException);
        }
    }

    static {
        fnWhW = gb.aYR(-7470366193575900063L, 157527839226905763L, MethodHandles.lookup().lookupClass()).a(3765218645199L);
        if (mq.clO() != 0) {
            mq.clM(16);
        }
    }

    public abstract void cls(MatrixStack var1, float var2);

    public static void clM(int n2) {
        nELfM = n2;
    }

    private static MatchException clP(MatchException matchException) {
        return matchException;
    }

    public static int clO() {
        int n2 = mq.clN();
        try {
            if (n2 == 0) {
                return 24;
            }
        }
        catch (MatchException matchException) {
            throw mq.clP(matchException);
        }
        return 0;
    }

    public static int clN() {
        return nELfM;
    }

    public abstract boolean clp();

    public abstract void clr(MatrixStack var1, float var2, mG var3);

    public Vec3d clL(float f2) {
        Vec3d vec3d;
        long l2 = fnWhW ^ 0x45B59BAC0D92L;
        double d2 = MathHelper.lerp((double)f2, (double)this.fmdTe.x, (double)this.vMbcc.x);
        int n2 = mq.clN();
        double d3 = MathHelper.lerp((double)f2, (double)this.fmdTe.y, (double)this.vMbcc.y);
        double d4 = MathHelper.lerp((double)f2, (double)this.fmdTe.z, (double)this.vMbcc.z);
        try {
            vec3d = new Vec3d(d2, d3, d4);
            if (n2 == 0) {
                iS.bwK("NMVZ3");
            }
        }
        catch (MatchException matchException) {
            throw mq.clP(matchException);
        }
        return vec3d;
    }

    public abstract void clq(MatrixStack var1, float var2, mG var3);
}

