/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.LivingEntity;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.oW$vp;
import sixtwo.ov;
import sixtwo.pa$vq;
import sixtwo.pb$vr;
import sixtwo.qN$vO;

public class oW {
    private LivingEntity YIJgv;
    private ov IClYn;
    private gg zMhmk;
    private float VmFjJ;
    private pa$vq kLvOK;
    private pb$vr hlmLK;
    private qN$vO IQIdu;
    private float ImLms;
    private int NPnTK;
    private boolean iHLPR;
    private boolean UVfDT;
    private boolean oPOxt;
    private boolean mlShD;
    private boolean NcdKH;
    private boolean QPReq;
    private boolean gERBJ;
    private static String hCEzS;
    private static long UKUSN;
    private static long sGXrV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    oW(LivingEntity livingEntity, ov ov2, gg gg2, float f2, pa$vq pa$vq, pb$vr pb$vr, qN$vO qN$vO, float f3, int n2, boolean bl2, boolean bl3, boolean bl4, boolean bl5, boolean bl6, boolean bl7, boolean bl8) {
        long l2 = UKUSN ^ 0x493EC9B2E5E2L;
        this.YIJgv = livingEntity;
        this.IClYn = ov2;
        this.zMhmk = gg2;
        this.VmFjJ = f2;
        this.kLvOK = pa$vq;
        this.hlmLK = pb$vr;
        this.IQIdu = qN$vO;
        this.ImLms = f3;
        this.NPnTK = n2;
        this.iHLPR = bl2;
        this.UVfDT = bl3;
        this.oPOxt = bl4;
        this.mlShD = bl5;
        String string = oW.cLI();
        try {
            this.NcdKH = bl6;
            this.QPReq = bl7;
            this.gERBJ = bl8;
            if (iS.bwL() == null) {
                oW.cLH("hd1JBb");
            }
        }
        catch (MatchException matchException) {
            throw oW.cLJ(matchException);
        }
    }

    static {
        Loader.doInit(oW.class);
        oW._68ef78b1bdb2cf0f048dc8500ce5f5ac();
    }

    public native pa$vq cLv();

    public native pb$vr cLw();

    private static native boolean cLo();

    public native float cLy();

    private static native pa$vq cLf();

    private static native boolean cLk();

    private static native boolean cLp();

    private static native float cLe();

    private static native qN$vO cLh();

    private static native float cLi();

    private static native MatchException cLJ(MatchException var0);

    public native qN$vO cLx();

    public native int cLz();

    private static native pb$vr cLg();

    private static native boolean cLl();

    public native boolean cLB();

    public native boolean cLC();

    public static native void cLH(String var0);

    public native boolean cLA();

    private static native boolean cLm();

    public static native String cLI();

    private static native boolean cLq();

    public native gg cLt();

    private static native boolean cLn();

    public native LivingEntity cLr();

    public native ov cLs();

    public native float cLu();

    private static native int cLj();

    public static native oW$vp cLd(LivingEntity var0, ov var1, gg var2);

    public native boolean cLD();

    public native boolean cLF();

    public native boolean cLE();

    public native boolean cLG();

    private static native void _68ef78b1bdb2cf0f048dc8500ce5f5ac();
}

