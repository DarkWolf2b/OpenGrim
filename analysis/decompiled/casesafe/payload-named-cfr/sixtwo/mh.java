/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.projectile.thrown.ThrownItemEntity
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 *  net.minecraft.world.World
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.thrown.ThrownItemEntity;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import net.minecraft.world.World;
import sixtwo.gb;
import sixtwo.mi;
import sixtwo.mj;
import sixtwo.mk;

public class mh {
    private final World foaYa;
    private final Entity QZsGX;
    private Vec3d qwkOz;
    private Vec3d gPhig;
    private int BYsgz;
    private double HzTbw;
    private double Owetf;
    private double xbQRr;
    private double nnkxA;
    private boolean gifiq;
    private boolean RGkqd;
    private RaycastContext.ShapeType sFGuI;
    private RaycastContext.FluidHandling ZbWwl;
    private boolean KfLbf;
    private mi JCjmz;
    private static final long UfnGN = gb.aYR(5815992448394471741L, -6440912917958466716L, MethodHandles.lookup().lookupClass()).a(70956652791312L);
    private static final long ckbBc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private mh(World world, Entity entity, Vec3d vec3d, Vec3d vec3d2) {
        long l2 = UfnGN ^ 0x323AB582FA76L;
        this.BYsgz = (int)ckbBc;
        this.HzTbw = -128.0;
        this.Owetf = 0.99;
        this.xbQRr = 0.8;
        this.nnkxA = 0.03;
        this.sFGuI = RaycastContext.ShapeType.COLLIDER;
        this.ZbWwl = RaycastContext.FluidHandling.NONE;
        this.KfLbf = true;
        this.JCjmz = mi.CkcQW;
        this.foaYa = world;
        this.QZsGX = entity;
        this.qwkOz = vec3d;
        this.gPhig = vec3d2;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = UfnGN ^ 0x4312A0DECCE8L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -5405549512601882712L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                ckbBc = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public Vec3d ckj() {
        return this.qwkOz;
    }

    public Vec3d ckk() {
        return this.gPhig;
    }

    public boolean ckr() {
        return this.RGkqd;
    }

    public mh ckI(boolean bl2) {
        this.KfLbf = bl2;
        return this;
    }

    public mh ckE(boolean bl2) {
        this.RGkqd = bl2;
        return this;
    }

    public World ckh() {
        return this.foaYa;
    }

    public boolean cku() {
        return this.KfLbf;
    }

    public RaycastContext.FluidHandling ckt() {
        return this.ZbWwl;
    }

    public RaycastContext.ShapeType cks() {
        return this.sFGuI;
    }

    public mi ckv() {
        return this.JCjmz;
    }

    public mh ckJ(mi mi2) {
        mi mi3;
        block2: {
            block3: {
                long l2 = UfnGN ^ 0x15C3BC70319AL;
                int[] nArray = mk.cle();
                try {
                    mh mh2 = this;
                    mi3 = mi2;
                    if (nArray != null) break block2;
                    if (mi3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw mh.ckK(matchException);
                }
                mi3 = mi.CkcQW;
                break block2;
            }
            mi3 = mi2;
        }
        mh2.JCjmz = mi3;
        return this;
    }

    public double cko() {
        return this.xbQRr;
    }

    public mh ckG(RaycastContext.ShapeType shapeType) {
        this.sFGuI = shapeType;
        return this;
    }

    public mh ckH(RaycastContext.FluidHandling fluidHandling) {
        this.ZbWwl = fluidHandling;
        return this;
    }

    public Entity cki() {
        return this.QZsGX;
    }

    public double ckm() {
        return this.HzTbw;
    }

    public double ckn() {
        return this.Owetf;
    }

    public mh ckw(Vec3d vec3d) {
        this.qwkOz = vec3d;
        return this;
    }

    private static MatchException ckK(MatchException matchException) {
        return matchException;
    }

    public int ckl() {
        return this.BYsgz;
    }

    public double ckp() {
        return this.nnkxA;
    }

    public boolean ckq() {
        return this.gifiq;
    }

    public mh ckB(double d2) {
        this.xbQRr = d2;
        return this;
    }

    public mh cky(int n2) {
        this.BYsgz = Math.max(1, n2);
        return this;
    }

    public mh ckC(double d2) {
        this.nnkxA = d2;
        return this;
    }

    public static mh ckf(World world, Entity entity, Vec3d vec3d, Vec3d vec3d2) {
        return new mh(world, entity, vec3d, vec3d2);
    }

    public mh ckz(double d2) {
        this.HzTbw = d2;
        return this;
    }

    public mh ckA(double d2) {
        this.Owetf = d2;
        return this;
    }

    public static mh ckg(ThrownItemEntity thrownItemEntity) {
        return mh.ckf(thrownItemEntity.getEntityWorld(), (Entity)thrownItemEntity, thrownItemEntity.getEntityPos(), thrownItemEntity.getVelocity()).ckF(thrownItemEntity.hasNoGravity());
    }

    public mh ckD(mj mj2) {
        block4: {
            block5: {
                long l2 = UfnGN ^ 0x3E3370B771A8L;
                int[] nArray = mk.cle();
                try {
                    try {
                        if (nArray != null) break block4;
                        if (mj2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw mh.ckK(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw mh.ckK(matchException);
                }
            }
            this.Owetf = mj2.airDrag();
            this.xbQRr = mj2.waterDrag();
            this.nnkxA = mj2.gravity();
            this.gifiq = mj2.noGravity();
            this.RGkqd = mj2.isArrow();
        }
        return this;
    }

    public mh ckF(boolean bl2) {
        this.gifiq = bl2;
        return this;
    }

    public mh ckx(Vec3d vec3d) {
        this.gPhig = vec3d;
        return this;
    }
}

