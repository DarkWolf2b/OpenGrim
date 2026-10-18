/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.entity.player.PlayerInventory
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.regex.MatchResult;
import java.util.regex.Pattern;
import native.Loader;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.entity.player.PlayerInventory;
import net.minecraft.item.ItemStack;
import sixtwo.gq;
import sixtwo.iS;
import sixtwo.iy;
import sixtwo.mT;
import sixtwo.nA;
import sixtwo.nF;
import sixtwo.nJ;
import sixtwo.nK;
import sixtwo.nf;
import sixtwo.nt;

public class nC
extends nF {
    private static Pattern KkqxP;
    private final mT uEOcp;
    private final mT sxTnR;
    private final mT xUIbP;
    private final mT lsMgm;
    private final List<nt> GpCpR;
    private nt QRQuJ;
    private int BOqlb;
    private boolean fNENu;
    private static long gKhkI;
    private static String[] atFGg;
    private static String[] AshGp;
    private static Map jKRpZ;
    private static long[] yMgqF;
    private static Integer[] cqjUn;
    private static Map vNonF;
    private static long[] LSaOe;
    private static Long[] iNSrh;
    private static Map Jlvcm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _133f4b96e3c51851b54d050e0dcf883a();

    public nC() {
        long l2 = gKhkI ^ 0x61C69D55927L;
        iS[] iSArray = nA.cwt();
        super(nC::cwO);
        iS[] iSArray2 = iSArray;
        try {
            this.uEOcp = mT.cpz();
            this.sxTnR = mT.cpz();
            this.xUIbP = mT.cpz();
            this.lsMgm = mT.cpz();
            this.GpCpR = new ArrayList<nt>();
            this.BOqlb = -1;
            if (iSArray2 != null) {
                iS.bwK("TVZnfc");
            }
        }
        catch (MatchException matchException) {
            throw nC.cwP(matchException);
        }
    }

    static {
        Loader.doInit(nC.class);
        nC._133f4b96e3c51851b54d050e0dcf883a();
    }

    @Override
    public native void cwy(nK var1);

    @Override
    public native void cwz(nK var1);

    @Override
    public native nJ cwm(nK var1);

    @Override
    public native nJ cwp(nK var1, gq var2);

    @Override
    public native void cwq();

    private native nJ cwx(nK var1, HandledScreen<?> var2);

    private static native MatchException cwP(MatchException var0);

    private static native /* synthetic */ String cwN(MatchResult var0);

    private static native /* synthetic */ long cwO(iy var0);

    private static native String cwQ(byte[] var0);

    private native String cwD(String var1, nt var2, ItemStack var3);

    private static native CallSite cwT(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int cwV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native int cwJ(PlayerInventory var1);

    private static native CallSite cwZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native int cwB(PlayerInventory var1, nt var2);

    private static native int cwU(int var0, long var1);

    private native boolean cwM(ItemStack var1, nt var2);

    private native int cwE(String var1, ItemStack var2);

    private native boolean cwK(PlayerInventory var1);

    private native void cwF();

    private native void cwI();

    private native void cwA(PlayerInventory var1, List<nf> var2);

    private static native long cwY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean cwL(ItemStack var1, ItemStack var2);

    private static native Object cwS(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native long cwX(int var0, long var1);

    private native void cwC(nK var1);

    private native void cwH(PlayerInventory var1);

    private static native CallSite cwW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String cwR(int var0, long var1);

    private native void cwG();
}

