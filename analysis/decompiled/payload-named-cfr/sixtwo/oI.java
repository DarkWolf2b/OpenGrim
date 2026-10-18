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
import sixtwo.iS;
import sixtwo.oK;

public class oI
extends oK {
    private final PlayerEntity sgPHk;
    private final int yUtMe;
    private static String QAjJe;
    private static long Nyxqf;
    private static String SiwyH;
    private static long[] gJXIM;
    private static Integer[] OObll;
    private static Map XjpLI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native int cIE();

    public oI(int n2) {
        this(null, n2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public oI(PlayerEntity playerEntity, int n2) {
        int n3;
        String string;
        long l2;
        block7: {
            l2 = Nyxqf ^ 0x3473ED310682L;
            String string2 = oI.cIG();
            string = string2;
            try {
                n3 = n2;
                if (string != null) break block7;
                if (n3 < 0) throw new IllegalArgumentException(SiwyH);
            }
            catch (IllegalArgumentException illegalArgumentException) {
                throw oI.cIH(illegalArgumentException);
            }
            n3 = n2;
        }
        try {
            if (n3 > oI.cIL("k", (int)31862, (long)(0x7895A2BE609EC4B7L ^ l2))) {
                throw new IllegalArgumentException(SiwyH);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw oI.cIH(illegalArgumentException);
        }
        try {
            this.sgPHk = playerEntity;
            this.yUtMe = n2;
            if (string == null) return;
            iS.bwK("ae7Vz");
            return;
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw oI.cIH(illegalArgumentException);
        }
    }

    static {
        Loader.doInit(oI.class);
        oI._46a80b374e1aa282fd748f80b5cdc450();
    }

    @Override
    public native ItemStack cIu();

    public native PlayerEntity cID();

    private static native CallSite cIL(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native boolean cIC();

    private static native String cII(byte[] var0);

    private static native IllegalArgumentException cIH(IllegalArgumentException var0);

    private static native int cIJ(int var0, long var1);

    private static native int cIK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native String cIG();

    public static native void cIF(String var0);

    @Override
    public native int cIv();

    private static native void _46a80b374e1aa282fd748f80b5cdc450();
}

