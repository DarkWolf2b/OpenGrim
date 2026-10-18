/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import sixtwo.gP;
import sixtwo.gq;
import sixtwo.mT;
import sixtwo.nH;
import sixtwo.nJ;
import sixtwo.nK;

public class nE
extends nH {
    private final mT ttWpb = mT.cpz();
    private final mT KCGDb = mT.cpz();
    private final mT olFTW = mT.cpz();
    private final mT ASWFt = mT.cpz();
    private boolean aIYKf = false;
    private static long mbukj;
    private static String[] HMFBF;
    private static String[] CGVfG;
    private static Map KJXbp;
    private static long eLEcE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _c12d2f44ea57022b2de17872d62b511f();

    static {
        Loader.doInit(nE.class);
        nE._c12d2f44ea57022b2de17872d62b511f();
    }

    @Override
    public native nJ cxc(nK var1, gP var2);

    @Override
    public native nJ cwp(nK var1, gq var2);

    @Override
    public native void cwq();

    private static native Object cxp(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException cxm(MatchException var0);

    private native nJ cxe(nK var1, HandledScreen<?> var2);

    private native nJ cxd(nK var1, HandledScreen<?> var2);

    private native boolean cxi(nK var1);

    private native boolean cxj(nK var1);

    private static native CallSite cxq(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String cxn(byte[] var0);

    private native boolean cxk(nK var1);

    private native void cxf(nK var1);

    private native void cxg(nK var1);

    private native void cxl(nK var1);

    private native boolean cxh(nK var1);

    private static native String cxo(int var0, long var1);
}

