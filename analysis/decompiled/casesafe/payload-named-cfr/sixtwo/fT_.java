/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.network.packet.s2c.common.ResourcePackSendS2CPacket;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cy;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gN;
import sixtwo.gR;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.mr;

public class fT
extends gg {
    private final ct UpGbN;
    private final cu HRntz;
    private final cu IVIuI;
    private final cy NKPoi;
    private static long fTEJu;
    private static String[] CXiLM;
    private static String[] qVvAp;
    private static Map KLmcG;
    private static long[] AVUzP;
    private static Integer[] uaKgc;
    private static Map zRmWN;
    private static long iEwrn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fT() {
        long l2 = fTEJu ^ 0x24520B41318DL;
        super(gf.aZL((int)fT.aXO("x", (int)4473, (long)(0x75D860F413B2EA8CL ^ l2)), true, gh.KfAlY));
        this.UpGbN = new ct(this, mr.clS(new int[]{(int)fT.aXO("x", (int)9636, (long)(0x6DA8D58E9C0C5E4EL ^ l2)), (int)fT.aXO("x", (int)4401, (long)(0x20BC2CF29DEDEADDL ^ l2)), (int)fT.aXO("x", (int)19926, (long)(0x1A50C01AF2EEB62BL ^ l2)), (int)fT.aXO("x", (int)5816, (long)(0x491056959C6A6D4FL ^ l2))}));
        int[] nArray = new int[fT.aXO("x", (int)29071, (long)(0x3F56E46335F80A57L ^ l2))];
        nArray[0] = (int)fT.aXO("x", (int)22920, (long)(0x27571B1728BEA269L ^ l2));
        nArray[1] = (int)fT.aXO("x", (int)23949, (long)(0x139A7CCE1F4E2659L ^ l2));
        nArray[2] = (int)fT.aXO("x", (int)17008, (long)(0x2E297E698A04B99DL ^ l2));
        nArray[3] = (int)fT.aXO("x", (int)14889, (long)(0x78816DEFFE141F2L ^ l2));
        nArray[4] = (int)fT.aXO("x", (int)8396, (long)(0x372468789FA6DB1AL ^ l2));
        nArray[5] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray[fT.aXO("x", (int)21887, (long)(0x4209827A71F02EBDL ^ l2))] = (int)fT.aXO("x", (int)21617, (long)(0x256F21E5A02BAFA4L ^ l2));
        nArray[fT.aXO("x", (int)24746, (long)(0x6452EE9DA0E41B5EL ^ l2))] = (int)fT.aXO("x", (int)1449, (long)(0x14C3B656A91DFE58L ^ l2));
        nArray[fT.aXO("x", (int)6082, (long)(0x5B1509A84AF36C2CL ^ l2))] = (int)fT.aXO("x", (int)8024, (long)(0x3AC11654C59664B8L ^ l2));
        nArray[fT.aXO("x", (int)23598, (long)(0x3530528BFA7527D7L ^ l2))] = (int)fT.aXO("x", (int)29845, (long)(0x342ABB9EAF1F8F51L ^ l2));
        nArray[fT.aXO("x", (int)28056, (long)(0x5196D126EF99965FL ^ l2))] = (int)fT.aXO("x", (int)18399, (long)(0x1CB129F6F333C39L ^ l2));
        nArray[fT.aXO("x", (int)9729, (long)(0x68E4F3A21DDD5DDFL ^ l2))] = (int)fT.aXO("x", (int)25460, (long)(0x7D57129A792B18BCL ^ l2));
        nArray[fT.aXO("x", (int)30629, (long)(0x7C4D9050FB7E8C76L ^ l2))] = (int)fT.aXO("x", (int)2709, (long)(0x332376E49B0C7172L ^ l2));
        nArray[fT.aXO("x", (int)21024, (long)(0x7A608D928B0229E5L ^ l2))] = (int)fT.aXO("x", (int)2709, (long)(0x332376E49B0C7172L ^ l2));
        this.HRntz = new cu(this.UpGbN, mr.clS(nArray));
        int[] nArray2 = new int[fT.aXO("x", (int)22597, (long)(0x7F6ADA54570923B5L ^ l2))];
        nArray2[0] = (int)fT.aXO("x", (int)1087, (long)(0x4A2B78E70423FFE5L ^ l2));
        nArray2[1] = (int)fT.aXO("x", (int)11205, (long)(0x205A54DFA90BD03AL ^ l2));
        nArray2[2] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray2[3] = (int)fT.aXO("x", (int)15832, (long)(0x22DC91ED2F3DC61EL ^ l2));
        nArray2[4] = (int)fT.aXO("x", (int)18912, (long)(0x7DA546F26D65B231L ^ l2));
        nArray2[5] = (int)fT.aXO("x", (int)9042, (long)(0x3F0276544C3BD8B0L ^ l2));
        nArray2[fT.aXO("x", (int)7315, (long)(0x7F53D6FFEA6770L ^ l2))] = (int)fT.aXO("x", (int)7388, (long)(0x5E206D159B6BE720L ^ l2));
        nArray2[fT.aXO("x", (int)2255, (long)(0x7386558AEF2CF305L ^ l2))] = (int)fT.aXO("x", (int)12150, (long)(0x11DE8225B6E549EL ^ l2));
        nArray2[fT.aXO("x", (int)18084, (long)(0x78D491549AE9BD7BL ^ l2))] = (int)fT.aXO("x", (int)18399, (long)(0x1CB129F6F333C39L ^ l2));
        nArray2[fT.aXO("x", (int)20345, (long)(0x38A612E4AABC34A5L ^ l2))] = (int)fT.aXO("x", (int)29763, (long)(0x681DFBB951F50F9EL ^ l2));
        nArray2[fT.aXO("x", (int)23547, (long)(0x2BD8582D904FA009L ^ l2))] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray2[fT.aXO("x", (int)32739, (long)(0x51C9C3CFF517840AL ^ l2))] = (int)fT.aXO("x", (int)30494, (long)(0x1F32AC8EAF098CCCL ^ l2));
        nArray2[fT.aXO("x", (int)22804, (long)(0x360B374B7719A2C3L ^ l2))] = (int)fT.aXO("x", (int)7179, (long)(0x6B16B1F4AD33E7CBL ^ l2));
        nArray2[fT.aXO("x", (int)26626, (long)(0x5DC6E22AE70D13F8L ^ l2))] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray2[fT.aXO("x", (int)27927, (long)(0x242E794F77CE16E4L ^ l2))] = (int)fT.aXO("x", (int)30494, (long)(0x1F32AC8EAF098CCCL ^ l2));
        nArray2[fT.aXO("x", (int)8622, (long)(0x54BF8456D4265A4AL ^ l2))] = (int)fT.aXO("x", (int)19718, (long)(0x5F18679E5AB0B6F0L ^ l2));
        this.IVIuI = new cu(this.UpGbN, mr.clS(nArray2)).SY();
        int[] nArray3 = new int[fT.aXO("x", (int)2255, (long)(0x7386558AEF2CF305L ^ l2))];
        nArray3[0] = (int)fT.aXO("x", (int)29763, (long)(0x681DFBB951F50F9EL ^ l2));
        nArray3[1] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray3[2] = (int)fT.aXO("x", (int)30494, (long)(0x1F32AC8EAF098CCCL ^ l2));
        nArray3[3] = (int)fT.aXO("x", (int)25611, (long)(0x701FB336D7EE9FE0L ^ l2));
        nArray3[4] = (int)fT.aXO("x", (int)1970, (long)(0x3278C2FBE8BEFC73L ^ l2));
        nArray3[5] = (int)fT.aXO("x", (int)30494, (long)(0x1F32AC8EAF098CCCL ^ l2));
        nArray3[fT.aXO("x", (int)7315, (long)(0x7F53D6FFEA6770L ^ l2))] = (int)fT.aXO("x", (int)27107, (long)(0x192636A1D3F6921BL ^ l2));
        this.NKPoi = new cy(this, mr.clS(nArray3)).Un((int)fT.aXO("x", (int)15231, (long)(0x57AA28DFA5ADC081L ^ l2))).Uo((String)((Object)fT.aXL("l", (int)1545, (long)(0x1B070CB76746B3BBL ^ l2)))).Up((String)((Object)fT.aXL("l", (int)520, (long)(0x5AC29230C265B7BEL ^ l2))));
        this.NKPoi.Vf(this.IVIuI::SZ);
        this.UpGbN.Vd(this::aXt);
        this.NKPoi.Vd(this::aXt);
        hF.bdI(this);
    }

    static {
        Loader.doInit(fT.class);
        fT._0de1305b3b0fabf519af0ffeee017fb9();
    }

    @Override
    public native void aaj();

    private static native CallSite aXL(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aXp(gR var1);

    private native void aXt();

    @hG
    public native void aXq(gN var1);

    @hG
    public native void aXr(gM var1);

    @hG
    public native void aXs(gL.tk var1);

    private static native CallSite aXO(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String aXJ(int var0, long var1);

    private native boolean aXB(String var1, String var2);

    public native cu aXE();

    public native cu aXD();

    private static native Exception aXH(Exception var0);

    private static native int aXM(int var0, long var1);

    private native String aXz(String var1);

    private native String aXy(String var1);

    private static native int aXN(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native ct aXC();

    private native boolean aXx(String var1, String var2);

    private native boolean aXA(String var1);

    private static native /* synthetic */ void aXG(ResourcePackSendS2CPacket var0);

    private static native String aXI(byte[] var0);

    private native boolean aXv();

    private static native Object aXK(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aXw();

    private native boolean aXu();

    public native cy aXF();

    private static native void _0de1305b3b0fabf519af0ffeee017fb9();

    @Override
    public native void YO();
}

