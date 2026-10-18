/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import sixtwo.iS;
import sixtwo.oI;
import sixtwo.oK;

public class oJ
extends oK {
    private final LivingEntity rKbxM;
    private final int sJuFf;
    private static long hXcem;
    private static String fFKJR;
    private static long XMJQB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oJ(int n2) {
        this(null, n2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public oJ(LivingEntity livingEntity, int n2) {
        int n3;
        block7: {
            long l2 = hXcem ^ 0x1C2DC066B791L;
            String string = oI.cIG();
            String string2 = string;
            try {
                n3 = n2;
                if (string2 != null) break block7;
                if (n3 < 0) throw new IllegalArgumentException(fFKJR);
            }
            catch (IllegalArgumentException illegalArgumentException) {
                throw oJ.cIP(illegalArgumentException);
            }
            n3 = n2;
        }
        try {
            if (n3 > 3) {
                throw new IllegalArgumentException(fFKJR);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw oJ.cIP(illegalArgumentException);
        }
        try {
            this.rKbxM = livingEntity;
            this.sJuFf = n2;
            if (iS.bwL() != null) return;
            oI.cIF("JDOE7");
            return;
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw oJ.cIP(illegalArgumentException);
        }
    }

    static {
        Loader.doInit(oJ.class);
        oJ._b449aaf11629725125c71fb3b860f015();
    }

    @Override
    public native ItemStack cIu();

    private static native IllegalArgumentException cIP(IllegalArgumentException var0);

    private static native String cIQ(byte[] var0);

    @Override
    public native int cIv();

    public native int cIO();

    private native EquipmentSlot cIM();

    public native LivingEntity cIN();

    private static native void _b449aaf11629725125c71fb3b860f015();
}

