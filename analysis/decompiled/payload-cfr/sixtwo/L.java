/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1299
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import native.Loader;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import sixtwo.J;
import sixtwo.L$rK;
import sixtwo.ad;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.cF;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.mA;

public class L
extends aj {
    private final ah cNUBl;
    private final ad JPNtJ;
    private final cF KYfOl;
    private final List<L$rK> PxKRm;
    private final List<L$rK> mtMmj;
    private static Map<class_1299<?>, L$rK> VsWuB;
    private static long XBZtd;
    private static String[] gcBRf;
    private static String[] XfuwI;
    private static Map UQYfW;
    private static long[] WYZZN;
    private static Integer[] GhFEr;
    private static Map MRiyN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public L(float f2, float f3, float f4, cF cF2) {
        block4: {
            long l = XBZtd ^ 0x4FD5FD63D495L;
            super(f2, f3, 110.0f, 160.0f);
            this.PxKRm = new ArrayList<L$rK>();
            this.mtMmj = new ArrayList<L$rK>();
            this.IzFhM = f4;
            this.KYfOl = cF2;
            Set<class_1299<? extends class_1297>> set = cF2.VZ();
            Set<class_1299<? extends class_1297>> set2 = cF2.VY();
            Iterator<class_1299<? extends class_1297>> iterator = set2.iterator();
            int[] nArray = J.gu();
            while (iterator.hasNext()) {
                class_1299<? extends class_1297> class_12992 = iterator.next();
                L$rK l$rK = VsWuB.computeIfAbsent(class_12992, L$rK::new);
                try {
                    l$rK.dmE().rV(set.contains(class_12992));
                    if (nArray == null) {
                        if (nArray == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw L.gS(matchException);
                }
            }
            this.PxKRm.clear();
            this.PxKRm.addAll(VsWuB.values().stream().filter(arg_0 -> L.gR(set2, arg_0)).toList());
            this.cNUBl = new ah();
            this.JPNtJ = new ad(lE.joxgd.bYM(7.0f));
            this.JPNtJ.lZ((String)((Object)L.gW("q", (int)15797, (long)(0x70F087A7A84D01EAL ^ l))));
            this.JPNtJ.me((int)L.gZ("t", (int)15781, (long)(0x414D3E4F9612F9A6L ^ l)));
            this.JPNtJ.mg(this::gO);
            this.gO();
            this.FHbTC = true;
        }
    }

    static {
        Loader.doInit(L.class);
        L._ebf287e8416339bf232284383e6125a3();
    }

    @Override
    public native void dl(double var1, double var3, mA var5);

    @Override
    public native boolean dm(int var1, int var2, int var3);

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native String gU(int var0, long var1);

    private static native CallSite gZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native void gO();

    private native /* synthetic */ boolean gP(L$rK var1);

    private native /* synthetic */ void gQ(lC var1);

    private static native String gT(byte[] var0);

    private static native CallSite gW(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException gS(MatchException var0);

    private static native /* synthetic */ boolean gR(Set var0, L$rK var1);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    @Override
    public native boolean eK(char var1);

    private static native int gX(int var0, long var1);

    private static native int gY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native Object gV(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _ebf287e8416339bf232284383e6125a3();
}
