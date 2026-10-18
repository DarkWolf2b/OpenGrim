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

public class db$sw {
    Vec3d AUTLH;
    mT QWqhb;
    boolean PaBdV;
    rk pvrxH;
    private static final long SbMHh = gb.aYR(-6341233503068354144L, 3941715898052231776L, MethodHandles.lookup().lookupClass()).a(15977905994038L);
    private static final long yqWBV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public db$sw(Vec3d vec3d) {
        long l2 = SbMHh ^ 0x77C09A61AE33L;
        this.PaBdV = false;
        this.pvrxH = new rk((int)yqWBV).dhs(rj.XzDkv);
        this.AUTLH = vec3d;
        this.QWqhb = mT.cpz();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = SbMHh ^ 0x222E6A942B0EL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -2372792555177154564L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                yqWBV = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }
}

