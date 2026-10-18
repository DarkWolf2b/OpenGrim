/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.block.BlockState;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.BlockPos;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.eL;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.oD;
import sixtwo.oI;
import sixtwo.oz;

public class eK
extends eL {
    private final cv NMgGy;
    private final cw GDZTu;
    private final cw MeIjx;
    private final cw wBiWF;
    private final cw zlXZx;
    private final cJ OBXLo;
    private final cC mPPOF;
    private final Predicate<BlockState> QStQW;
    private static long LJGVO;
    private static String EbxJv;
    private static long[] gXjjI;
    private static Integer[] CEJUC;
    private static Map WkwXQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eK() {
        long l2 = LJGVO ^ 0x1D4599DCB605L;
        super((int)10);
        int[] nArray = new int[17];
        nArray[0] = (int)80;
        nArray[1] = (int)108;
        nArray[2] = (int)97;
        nArray[3] = (int)99;
        nArray[4] = (int)101;
        nArray[5] = (int)109;
        nArray[6] = (int)101;
        nArray[7] = (int)110;
        nArray[8] = (int)116;
        nArray[9] = (int)32;
        nArray[10] = (int)79;
        nArray[11] = (int)112;
        nArray[12] = (int)116;
        nArray[13] = (int)105;
        nArray[14] = (int)111;
        nArray[15] = (int)110;
        nArray[16] = (int)115;
        this.NMgGy = new cv(this, mr.clS(nArray)).Tm(1);
        this.GDZTu = new cw(this.NMgGy, mr.clS(new int[]{(int)76, (int)101, (int)103, (int)115})).Tz();
        this.MeIjx = new cw(this.NMgGy, mr.clS(new int[]{(int)72, (int)101, (int)97, (int)100})).Tz();
        int[] nArray2 = new int[8];
        nArray2[0] = (int)83;
        nArray2[1] = (int)117;
        nArray2[2] = (int)114;
        nArray2[3] = (int)114;
        nArray2[4] = (int)111;
        nArray2[5] = (int)117;
        nArray2[6] = (int)110;
        nArray2[7] = (int)100;
        this.wBiWF = new cw(this.NMgGy, mr.clS(nArray2));
        int[] nArray3 = new int[14];
        nArray3[0] = (int)85;
        nArray3[1] = (int)112;
        nArray3[2] = (int)112;
        nArray3[3] = (int)101;
        nArray3[4] = (int)114;
        nArray3[5] = (int)32;
        nArray3[6] = (int)83;
        nArray3[7] = (int)117;
        nArray3[8] = (int)114;
        nArray3[9] = (int)114;
        nArray3[10] = (int)111;
        nArray3[11] = (int)117;
        nArray3[12] = (int)110;
        nArray3[13] = (int)100;
        this.zlXZx = new cw(this.NMgGy, mr.clS(nArray3));
        int[] nArray4 = new int[16];
        nArray4[0] = (int)80;
        nArray4[1] = (int)114;
        nArray4[2] = (int)101;
        nArray4[3] = (int)100;
        nArray4[4] = (int)105;
        nArray4[5] = (int)99;
        nArray4[6] = (int)116;
        nArray4[7] = (int)32;
        nArray4[8] = (int)80;
        nArray4[9] = (int)111;
        nArray4[10] = (int)115;
        nArray4[11] = (int)105;
        nArray4[12] = (int)116;
        nArray4[13] = (int)105;
        nArray4[14] = (int)111;
        nArray4[15] = (int)110;
        this.OBXLo = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[16];
        nArray5[0] = (int)80;
        nArray5[1] = (int)114;
        nArray5[2] = (int)101;
        nArray5[3] = (int)100;
        nArray5[4] = (int)105;
        nArray5[5] = (int)99;
        nArray5[6] = (int)116;
        nArray5[7] = (int)105;
        nArray5[8] = (int)111;
        nArray5[9] = (int)110;
        nArray5[10] = (int)32;
        nArray5[11] = (int)84;
        nArray5[12] = (int)105;
        nArray5[13] = (int)99;
        nArray5[14] = (int)107;
        nArray5[15] = (int)115;
        this.mPPOF = new cC(this, mr.clS(nArray5)).Vy(1.0).Vw(1.0).Vx(6.0).VA(3.0).Vz(EbxJv);
        this.QStQW = this::azI;
    }

    static {
        Loader.doInit(eK.class);
        eK._80c677a75e065edc040cf59bbcc641fd();
    }

    @Override
    protected native void ayx(oD var1);

    @Override
    protected native boolean ayt();

    @Override
    protected native List<BlockPos> ayB();

    public native Predicate<BlockState> azD();

    private native /* synthetic */ oz azH(oD var1, BlockPos var2);

    private static native String azK(byte[] var0);

    public native cw azy();

    @Override
    protected native oz ayy(oD var1);

    private static native int azM(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native cJ azB();

    @hG
    public native void azv(gv var1);

    private native /* synthetic */ boolean azF(BlockPos var1);

    private static native int azL(int var0, long var1);

    private native /* synthetic */ boolean azI(BlockState var1);

    @Override
    protected native boolean ays();

    @Override
    protected native boolean ayu();

    public native cv azw();

    private native /* synthetic */ Boolean azG(ClientPlayerEntity var1);

    public native cw azz();

    @Override
    protected native boolean ayv(ItemStack var1);

    public native cw azA();

    private static native CallSite azN(MethodHandles.Lookup var0, String var1, MethodType var2);

    @Override
    protected native oI ayw();

    public native cw azx();

    public native cC azC();

    private static native /* synthetic */ boolean azE(BlockPos var0);

    private static native MatchException azJ(MatchException var0);

    private static native void _80c677a75e065edc040cf59bbcc641fd();
}

