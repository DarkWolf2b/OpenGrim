/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.mT;
import sixtwo.rj;
import sixtwo.rk;

class dh$sz {
    Vec3d vxPfu;
    Vec3d euQyK;
    Vec3d AbOcV;
    Vec3d zgdiH;
    Vec3d aoOwi;
    Vec3d FoYEg;
    long JoZky;
    float uTzzU;
    boolean WWClU;
    mT jYAnc;
    rk JiVPB;
    private static final long lQGTL = gb.aYR(-1412005196320346377L, 1304572542534617863L, MethodHandles.lookup().lookupClass()).a(151037727181724L);
    private static final long IWwlL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dh$sz(Vec3d vec3d, Vec3d vec3d2, Vec3d vec3d3, Vec3d vec3d4, long l2, float f2) {
        long l3 = lQGTL ^ 0x1293FA5AABBBL;
        this.WWClU = false;
        this.jYAnc = mT.cpz();
        this.JiVPB = new rk((int)IWwlL).dhs(rj.UPXqT);
        this.vxPfu = vec3d;
        this.euQyK = vec3d2;
        this.aoOwi = vec3d3.multiply((double)0.04f);
        this.FoYEg = vec3d4.multiply((double)0.04f);
        this.JoZky = l2;
        this.uTzzU = f2;
        this.zgdiH = vec3d2;
        this.AbOcV = vec3d;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = lQGTL ^ 0x7F2D7980976L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 1077618560853009042L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                IWwlL = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    void doB() {
        this.AbOcV = this.vxPfu;
        this.zgdiH = this.euQyK;
        this.vxPfu = this.vxPfu.add(this.aoOwi);
        this.euQyK = this.euQyK.add(this.FoYEg);
        this.aoOwi = this.aoOwi.multiply(0.98);
        this.FoYEg = this.FoYEg.multiply(0.98);
    }
}

