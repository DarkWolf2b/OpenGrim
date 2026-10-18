/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.im;
import sixtwo.io;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rp;

public class in
implements rp {
    public static in FBjZE;
    public static in mYAkW;
    public static in eiOnG;
    public static in lTmAi;
    private int[] yxFSl;
    private io wPkDg;
    private io WJgNc;
    private boolean IaqFE;
    private float opmrX;
    private im mIkOu;
    private im BnBip;
    private boolean hAyen;
    private boolean IoFoI;
    private boolean UDYLZ;
    private transient rk Tfucw;
    private transient rk kcGmI;
    private static long NPqyE;
    private static String[] VSQwQ;
    private static String[] QYWHV;
    private static Map hrszQ;
    private static long[] XfKFD;
    private static Integer[] gILVB;
    private static Map dvIBQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public in() {
        long l2 = NPqyE ^ 0x23121100217L;
        this.Tfucw = new rk((int)in.blv("b", (int)15138, (long)(0x386B241884D361E3L ^ l2))).dhs(rj.ceYgU);
        this.kcGmI = new rk((int)in.blv("b", (int)13138, (long)(0x2371717F4E1BE995L ^ l2))).dhs(rj.ceYgU);
    }

    public in(int[] nArray, io io2, io io3, boolean bl2, float f2, boolean bl3, boolean bl4, boolean bl5, im im2, im im3) {
        long l2 = NPqyE ^ 0x25640CB2CD75L;
        this.Tfucw = new rk((int)in.blv("b", (int)13138, (long)(0x2371562A63B926F7L ^ l2))).dhs(rj.ceYgU);
        this.kcGmI = new rk((int)in.blv("b", (int)13138, (long)(0x2371562A63B926F7L ^ l2))).dhs(rj.ceYgU);
        this.yxFSl = nArray;
        this.wPkDg = io2;
        this.WJgNc = io3;
        this.IaqFE = bl2;
        this.opmrX = f2;
        this.hAyen = bl3;
        this.IoFoI = bl4;
        this.UDYLZ = bl5;
        this.mIkOu = im2;
        this.BnBip = im3;
    }

    static {
        Loader.doInit(in.class);
        in._5a7af36d39efe4659f5189a76e605002();
    }

    public native in blk(boolean var1);

    public native in blg(float var1);

    @Override
    public native void fromJson(JsonObject var1);

    @Override
    public native JsonObject toJson();

    public native in ble(io var1);

    private static native CallSite blv(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native in blc(int[] var1);

    public native in blf(boolean var1);

    public native in blh(im var1);

    public native in blj(boolean var1);

    public native im bkV();

    public native io bkR();

    public native rk bla();

    public native rk blb();

    public native in bld(io var1);

    public native boolean bkP();

    public native in bll(boolean var1);

    public native in bli(im var1);

    public native in blm(rk var1);

    public native in bln(rk var1);

    private static native String blp(byte[] var0);

    public native boolean bkT();

    public native float bkU();

    public native im bkW();

    private static native MatchException blo(MatchException var0);

    public native int[] bkQ();

    public native String bkO();

    public native io bkS();

    private static native Object blr(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite bls(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String blq(int var0, long var1);

    private static native int blt(int var0, long var1);

    private static native int blu(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native void _5a7af36d39efe4659f5189a76e605002();

    public native boolean bkZ();

    public native boolean bkX();

    public native boolean bkY();
}

