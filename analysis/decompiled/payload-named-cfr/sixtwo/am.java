/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  sixtwo.am$rS
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.ah;
import sixtwo.am;
import sixtwo.az;
import sixtwo.lC;

public class am
extends az {
    private final List<rS> dKgZe = new ArrayList<rS>();
    private final ah PZcRW = new ah();
    private static long TXFPf;
    private static String[] YbYUL;
    private static String[] zRGKj;
    private static Map ImqWj;
    private static long GqCCj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public am(String string) {
        this.oX(string);
    }

    static {
        Loader.doInit(am.class);
        am._084bbcaff7b3cc723e303c46feb338d2();
    }

    private static native String pc(int var0, long var1);

    private static native MatchException pa(MatchException var0);

    private static native Object pd(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite pe(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String pb(byte[] var0);

    @Override
    protected native void bV(lC var1);

    @Override
    public native boolean fC(double var1, double var3, double var5);

    private static native void _084bbcaff7b3cc723e303c46feb338d2();

    public native ah oZ();

    public native void oX(String var1);

    public native List<rS> oY();
}

