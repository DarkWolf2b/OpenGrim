/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import sixtwo.az;
import sixtwo.bs;
import sixtwo.lC;
import sixtwo.rj;
import sixtwo.rk;

class bs$se
extends az {
    private final bs mAGlG;
    private final Item zVisd;
    private final rk XIdWx;
    private final rk PlZba;
    private boolean rjcuK;
    private static long jnWEe;
    private static String gUvvz;
    private static long[] NEAZe;
    private static Integer[] ZJgLS;
    private static Map xVRty;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bs$se(bs bs2, Item item) {
        long l2 = jnWEe ^ 0x7DBD1451FEBDL;
        this.XIdWx = new rk((int)bs$se.dnu("e", (int)20016, (long)(0x19C0E793981D4F38L ^ l2))).dhs(rj.UPXqT);
        this.PlZba = new rk((int)bs$se.dnu("e", (int)27095, (long)(0xB1A8E741F4A68DEL ^ l2))).dhs(rj.UPXqT);
        this.mAGlG = bs2;
        this.zVisd = item;
    }

    static {
        Loader.doInit(bs$se.class);
        bs$se._02c8e32375e80bbbd9a400eee85b58d8();
    }

    private static native void _02c8e32375e80bbbd9a400eee85b58d8();

    @Override
    protected native void bV(lC var1);

    private static native MatchException dnq(MatchException var0);

    public native void dnk(boolean var1);

    public native boolean dnp();

    public native rk dno();

    public native bs dnl();

    public native Item dnm();

    private static native CallSite dnu(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native rk dnn();

    private static native String dnr(byte[] var0);

    private static native int dns(int var0, long var1);

    private static native int dnt(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

