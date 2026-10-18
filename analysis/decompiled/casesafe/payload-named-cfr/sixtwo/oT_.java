/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Hand
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import native.Loader;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import sixtwo.oS;
import sixtwo.oT$vo;
import sixtwo.oz;

public class oT {
    public static oT UgZrs;
    public static oT DpyXs;
    private Hand cVhsi;
    private oS NGsJb;
    private BlockHitResult zrqTl;
    private oz EJHXC;
    private boolean WGosN;
    private static String[] VeyqH;
    private static long PDnjd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    oT(Hand hand, oS oS2, BlockHitResult blockHitResult, oz oz2, boolean bl2) {
        this.cVhsi = hand;
        this.NGsJb = oS2;
        this.zrqTl = blockHitResult;
        this.EJHXC = oz2;
        this.WGosN = bl2;
    }

    static {
        Loader.doInit(oT.class);
        oT._61524ab86f33acf14ea59b92a413544a();
    }

    private static native MatchException cKU(MatchException var0);

    public native oz cKN();

    public native void cKP(Hand var1);

    public static native vo cKC();

    public native void cKG(oz var1);

    private static native oz cKJ();

    public static native String[] cKT();

    public static native void cKS(String[] var0);

    public static native vo cKB(Hand var0);

    private static native boolean cKK();

    public native void cKQ(oS var1);

    public native boolean cKO();

    public native void cKF(BlockHitResult var1);

    public native void cKR(boolean var1);

    public native Hand cKL();

    public native BlockPos cKE();

    private static native BlockHitResult cKI();

    public native BlockHitResult cKD();

    private static native oS cKH();

    public native oS cKM();

    private static native void _61524ab86f33acf14ea59b92a413544a();
}

