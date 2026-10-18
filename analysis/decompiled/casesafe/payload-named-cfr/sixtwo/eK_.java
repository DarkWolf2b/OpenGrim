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
        super((int)eK.azN("l", (int)8721, (long)(0x7148AA8C029305F0L ^ l2)));
        int[] nArray = new int[eK.azN("l", (int)1096, (long)(0x6444BB881306A383L ^ l2))];
        nArray[0] = (int)eK.azN("l", (int)21038, (long)(0x1A77F0FACAC2F5DCL ^ l2));
        nArray[1] = (int)eK.azN("l", (int)10138, (long)(0x34577FFF563C0060L ^ l2));
        nArray[2] = (int)eK.azN("l", (int)10852, (long)(0x779C716A27808DB3L ^ l2));
        nArray[3] = (int)eK.azN("l", (int)400, (long)(0x7F234CC186E72646L ^ l2));
        nArray[4] = (int)eK.azN("l", (int)15458, (long)(0x51F2A5D762C79BB9L ^ l2));
        nArray[5] = (int)eK.azN("l", (int)13719, (long)(0x1734AED989C61269L ^ l2));
        nArray[eK.azN("l", (int)31416, (long)(0x3E5FF32BD3225D7FL ^ l2))] = (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2));
        nArray[eK.azN("l", (int)15411, (long)(0x6BD77863EF561BFAL ^ l2))] = (int)eK.azN("l", (int)5335, (long)(0x6D7519B9EDFDB30FL ^ l2));
        nArray[eK.azN("l", (int)3991, (long)(0x67F6F404EC2A87FL ^ l2))] = (int)eK.azN("l", (int)31554, (long)(0x7EAB575AD2CFDC93L ^ l2));
        nArray[eK.azN("l", (int)19934, (long)(0x6D367623D4ACEA29L ^ l2))] = (int)eK.azN("l", (int)15971, (long)(0x54C760C2E66E99A5L ^ l2));
        nArray[eK.azN("l", (int)19398, (long)(0x7E3C4534331DEC2CL ^ l2))] = (int)eK.azN("l", (int)4233, (long)(0x620668C40A69B779L ^ l2));
        nArray[eK.azN("l", (int)31626, (long)(0x711393D13F7CDC50L ^ l2))] = (int)eK.azN("l", (int)17392, (long)(0x56B05CDF0E996431L ^ l2));
        nArray[eK.azN("l", (int)19444, (long)(0x7E89FAB7CB25EC02L ^ l2))] = (int)eK.azN("l", (int)28129, (long)(0x6304A4CCED694A10L ^ l2));
        nArray[eK.azN("l", (int)12332, (long)(0x223BD5FCCFAF97E1L ^ l2))] = (int)eK.azN("l", (int)25870, (long)(0x60F07107F707C2CDL ^ l2));
        nArray[eK.azN("l", (int)32370, (long)(0x52733655900059BDL ^ l2))] = (int)eK.azN("l", (int)14304, (long)(0x591861DE68629007L ^ l2));
        nArray[eK.azN("l", (int)16042, (long)(0x558A6E712001996AL ^ l2))] = (int)eK.azN("l", (int)14859, (long)(0x19F2B4C347229DD2L ^ l2));
        nArray[eK.azN("l", (int)18683, (long)(0x3CE8F556E0236F2FL ^ l2))] = (int)eK.azN("l", (int)12462, (long)(0x2E281468CB72975DL ^ l2));
        this.NMgGy = new cv(this, mr.clS(nArray)).Tm(1);
        this.GDZTu = new cw(this.NMgGy, mr.clS(new int[]{(int)eK.azN("l", (int)22003, (long)(0x6F75B2068FCEF22FL ^ l2)), (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2)), (int)eK.azN("l", (int)12550, (long)(0x18F20648B6A696EFL ^ l2)), (int)eK.azN("l", (int)29704, (long)(0x44C5E19BCA353FDL ^ l2))})).Tz();
        this.MeIjx = new cw(this.NMgGy, mr.clS(new int[]{(int)eK.azN("l", (int)28746, (long)(0x5DA7EE3BE191D797L ^ l2)), (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2)), (int)eK.azN("l", (int)28099, (long)(0x59834182E673CA13L ^ l2)), (int)eK.azN("l", (int)9520, (long)(0x73F0CBFF3E2D02EFL ^ l2))})).Tz();
        int[] nArray2 = new int[eK.azN("l", (int)26525, (long)(0x7B7083954D89C070L ^ l2))];
        nArray2[0] = (int)eK.azN("l", (int)31102, (long)(0x5805BA06BB6CDE92L ^ l2));
        nArray2[1] = (int)eK.azN("l", (int)4499, (long)(0x5B528170E278B667L ^ l2));
        nArray2[2] = (int)eK.azN("l", (int)7267, (long)(0x3D0E9E6DC7873BA7L ^ l2));
        nArray2[3] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray2[4] = (int)eK.azN("l", (int)16660, (long)(0x6CFD51BDFB1A66E8L ^ l2));
        nArray2[5] = (int)eK.azN("l", (int)904, (long)(0x55226721F2E9246DL ^ l2));
        nArray2[eK.azN("l", (int)11036, (long)(0x97EE224CCD50CC9L ^ l2))] = (int)eK.azN("l", (int)14859, (long)(0x19F2B4C347229DD2L ^ l2));
        nArray2[eK.azN("l", (int)26237, (long)(0x7F3557DFBFF44185L ^ l2))] = (int)eK.azN("l", (int)32130, (long)(0x6E4F72BF521ADA69L ^ l2));
        this.wBiWF = new cw(this.NMgGy, mr.clS(nArray2));
        int[] nArray3 = new int[eK.azN("l", (int)7970, (long)(0x46406987497DB8DFL ^ l2))];
        nArray3[0] = (int)eK.azN("l", (int)2425, (long)(0x257143C213BE2E80L ^ l2));
        nArray3[1] = (int)eK.azN("l", (int)16144, (long)(0x18CC27447E2518DCL ^ l2));
        nArray3[2] = (int)eK.azN("l", (int)16144, (long)(0x18CC27447E2518DCL ^ l2));
        nArray3[3] = (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2));
        nArray3[4] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray3[5] = (int)eK.azN("l", (int)14174, (long)(0x2A5780388F4A9090L ^ l2));
        nArray3[eK.azN("l", (int)11036, (long)(0x97EE224CCD50CC9L ^ l2))] = (int)eK.azN("l", (int)2164, (long)(0x37A63053B176AFAAL ^ l2));
        nArray3[eK.azN("l", (int)26237, (long)(0x7F3557DFBFF44185L ^ l2))] = (int)eK.azN("l", (int)904, (long)(0x55226721F2E9246DL ^ l2));
        nArray3[eK.azN("l", (int)26525, (long)(0x7B7083954D89C070L ^ l2))] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray3[eK.azN("l", (int)11544, (long)(0xB718E1553ED8AF8L ^ l2))] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray3[eK.azN("l", (int)19398, (long)(0x7E3C4534331DEC2CL ^ l2))] = (int)eK.azN("l", (int)16660, (long)(0x6CFD51BDFB1A66E8L ^ l2));
        nArray3[eK.azN("l", (int)17854, (long)(0x3BEEBC283B066250L ^ l2))] = (int)eK.azN("l", (int)904, (long)(0x55226721F2E9246DL ^ l2));
        nArray3[eK.azN("l", (int)24732, (long)(0x2A3F39A4DF01C773L ^ l2))] = (int)eK.azN("l", (int)14859, (long)(0x19F2B4C347229DD2L ^ l2));
        nArray3[eK.azN("l", (int)4941, (long)(0x3BBE9A61C97D34ABL ^ l2))] = (int)eK.azN("l", (int)32130, (long)(0x6E4F72BF521ADA69L ^ l2));
        this.zlXZx = new cw(this.NMgGy, mr.clS(nArray3));
        int[] nArray4 = new int[eK.azN("l", (int)6436, (long)(0xA16727FC06F3EF6L ^ l2))];
        nArray4[0] = (int)eK.azN("l", (int)29062, (long)(0x67A817D7906BD662L ^ l2));
        nArray4[1] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray4[2] = (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2));
        nArray4[3] = (int)eK.azN("l", (int)32130, (long)(0x6E4F72BF521ADA69L ^ l2));
        nArray4[4] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray4[5] = (int)eK.azN("l", (int)14815, (long)(0xD14934F8F379E24L ^ l2));
        nArray4[eK.azN("l", (int)11036, (long)(0x97EE224CCD50CC9L ^ l2))] = (int)eK.azN("l", (int)28129, (long)(0x6304A4CCED694A10L ^ l2));
        nArray4[eK.azN("l", (int)26237, (long)(0x7F3557DFBFF44185L ^ l2))] = (int)eK.azN("l", (int)14174, (long)(0x2A5780388F4A9090L ^ l2));
        nArray4[eK.azN("l", (int)26525, (long)(0x7B7083954D89C070L ^ l2))] = (int)eK.azN("l", (int)29062, (long)(0x67A817D7906BD662L ^ l2));
        nArray4[eK.azN("l", (int)11544, (long)(0xB718E1553ED8AF8L ^ l2))] = (int)eK.azN("l", (int)16660, (long)(0x6CFD51BDFB1A66E8L ^ l2));
        nArray4[eK.azN("l", (int)19398, (long)(0x7E3C4534331DEC2CL ^ l2))] = (int)eK.azN("l", (int)29704, (long)(0x44C5E19BCA353FDL ^ l2));
        nArray4[eK.azN("l", (int)17854, (long)(0x3BEEBC283B066250L ^ l2))] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray4[eK.azN("l", (int)24732, (long)(0x2A3F39A4DF01C773L ^ l2))] = (int)eK.azN("l", (int)28129, (long)(0x6304A4CCED694A10L ^ l2));
        nArray4[eK.azN("l", (int)4941, (long)(0x3BBE9A61C97D34ABL ^ l2))] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray4[eK.azN("l", (int)7970, (long)(0x46406987497DB8DFL ^ l2))] = (int)eK.azN("l", (int)16660, (long)(0x6CFD51BDFB1A66E8L ^ l2));
        nArray4[eK.azN("l", (int)12870, (long)(0x24D9505A750D15B9L ^ l2))] = (int)eK.azN("l", (int)14859, (long)(0x19F2B4C347229DD2L ^ l2));
        this.OBXLo = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[eK.azN("l", (int)6436, (long)(0xA16727FC06F3EF6L ^ l2))];
        nArray5[0] = (int)eK.azN("l", (int)29062, (long)(0x67A817D7906BD662L ^ l2));
        nArray5[1] = (int)eK.azN("l", (int)16190, (long)(0x494948C4FE518EDL ^ l2));
        nArray5[2] = (int)eK.azN("l", (int)25220, (long)(0x5A45AB4A063D454CL ^ l2));
        nArray5[3] = (int)eK.azN("l", (int)32130, (long)(0x6E4F72BF521ADA69L ^ l2));
        nArray5[4] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray5[5] = (int)eK.azN("l", (int)14815, (long)(0xD14934F8F379E24L ^ l2));
        nArray5[eK.azN("l", (int)11036, (long)(0x97EE224CCD50CC9L ^ l2))] = (int)eK.azN("l", (int)28129, (long)(0x6304A4CCED694A10L ^ l2));
        nArray5[eK.azN("l", (int)26237, (long)(0x7F3557DFBFF44185L ^ l2))] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray5[eK.azN("l", (int)26525, (long)(0x7B7083954D89C070L ^ l2))] = (int)eK.azN("l", (int)16660, (long)(0x6CFD51BDFB1A66E8L ^ l2));
        nArray5[eK.azN("l", (int)11544, (long)(0xB718E1553ED8AF8L ^ l2))] = (int)eK.azN("l", (int)14859, (long)(0x19F2B4C347229DD2L ^ l2));
        nArray5[eK.azN("l", (int)19398, (long)(0x7E3C4534331DEC2CL ^ l2))] = (int)eK.azN("l", (int)14174, (long)(0x2A5780388F4A9090L ^ l2));
        nArray5[eK.azN("l", (int)17854, (long)(0x3BEEBC283B066250L ^ l2))] = (int)eK.azN("l", (int)17965, (long)(0x3310C54DC7261E8L ^ l2));
        nArray5[eK.azN("l", (int)24732, (long)(0x2A3F39A4DF01C773L ^ l2))] = (int)eK.azN("l", (int)18061, (long)(0x7D29BAE23599E147L ^ l2));
        nArray5[eK.azN("l", (int)4941, (long)(0x3BBE9A61C97D34ABL ^ l2))] = (int)eK.azN("l", (int)14815, (long)(0xD14934F8F379E24L ^ l2));
        nArray5[eK.azN("l", (int)7970, (long)(0x46406987497DB8DFL ^ l2))] = (int)eK.azN("l", (int)26145, (long)(0x2547D91D632741E3L ^ l2));
        nArray5[eK.azN("l", (int)12870, (long)(0x24D9505A750D15B9L ^ l2))] = (int)eK.azN("l", (int)29704, (long)(0x44C5E19BCA353FDL ^ l2));
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

