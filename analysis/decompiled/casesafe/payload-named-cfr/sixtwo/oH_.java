/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import sixtwo.oI;
import sixtwo.oK;

public class oH
extends oK {
    private final PlayerEntity PFgHm;
    private final int LNOqr;
    private static long ianDy;
    private static String pvUue;
    private static long[] wMohK;
    private static Integer[] XkfyD;
    private static Map OxWir;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oH(int n2) {
        this(null, n2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public oH(PlayerEntity playerEntity, int n2) {
        int n3;
        long l2;
        block5: {
            l2 = ianDy ^ 0x85C603F284DL;
            String string = oI.cIG();
            String string2 = string;
            try {
                n3 = n2;
                if (string2 != null) break block5;
                if (n3 < 0) throw new IllegalArgumentException(pvUue);
            }
            catch (IllegalArgumentException illegalArgumentException) {
                throw oH.cIx(illegalArgumentException);
            }
            n3 = n2;
        }
        try {
            if (n3 > oH.cIB("i", (int)20811, (long)(0x7135181C995B6ABAL ^ l2))) {
                throw new IllegalArgumentException(pvUue);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw oH.cIx(illegalArgumentException);
        }
        this.PFgHm = playerEntity;
        this.LNOqr = n2;
    }

    static {
        Loader.doInit(oH.class);
        oH._1e65200583226e7e83e116e0481e0fbd();
    }

    @Override
    public native ItemStack cIu();

    private static native void _1e65200583226e7e83e116e0481e0fbd();

    private static native String cIy(byte[] var0);

    private static native CallSite cIB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native IllegalArgumentException cIx(IllegalArgumentException var0);

    private static native int cIA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int cIz(int var0, long var1);

    @Override
    public native int cIv();
}

