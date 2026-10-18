/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.platform.DepthTestFunction
 *  net.minecraft.class_1297
 *  net.minecraft.class_1665
 *  net.minecraft.class_1684
 *  net.minecraft.class_1685
 *  net.minecraft.class_1937
 *  net.minecraft.class_243
 *  net.minecraft.class_2596
 *  net.minecraft.class_2663
 *  net.minecraft.class_4587
 */
package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1665;
import net.minecraft.class_1684;
import net.minecraft.class_1685;
import net.minecraft.class_1937;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2663;
import net.minecraft.class_4587;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.iX;
import sixtwo.jJ;
import sixtwo.jg;
import sixtwo.kS;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mU;
import sixtwo.mn;
import sixtwo.mo;
import sixtwo.mp;
import sixtwo.mq;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;

public class cR
extends gg
implements lG {
    private final ct imXIw;
    private final cu nVChr;
    private final cu Taplw;
    private final cu sDuYV;
    private final cu GZMuF;
    private final cu HzYvJ;
    private final cu wHlEJ;
    private final cu BUBSR;
    private final cu OJUIx;
    private final cG mNCfB;
    private final ct ywNJH;
    private final cu VMcLW;
    private final cu BjCne;
    private final cC lyHys;
    private final cC mNkAv;
    private final cv pEdgo;
    private final cw Ubjvg;
    private final cw UYbIm;
    private final cw IIZjW;
    private final cw czNck;
    private final cw cfNnD;
    private final cw hQcMD;
    private final cJ aTbJe;
    private final List<mq> ImFtb;
    private final kS wccSb;
    private static final long vBOIC;
    private static final String ZDept;
    private static final long[] RFnIl;
    private static final Integer[] ECHJE;
    private static final Map QOHbp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cR() {
        long l = vBOIC ^ 0x98E776DF081L;
        super(gf.aZL((int)cR.YZ("y", (int)22520, (long)(0x14B940CF343C12C6L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cR.YZ("y", (int)28585, (long)(0x5C6E240F85732AEBL ^ l))];
        nArray[0] = (int)cR.YZ("y", (int)21657, (long)(0x1CDFE940ABDD11D2L ^ l));
        nArray[1] = (int)cR.YZ("y", (int)25853, (long)(0x4E04E3896BF1A1A0L ^ l));
        nArray[2] = (int)cR.YZ("y", (int)30277, (long)(0x779266450335B317L ^ l));
        nArray[3] = (int)cR.YZ("y", (int)21324, (long)(0x3FF69ABBFECC9612L ^ l));
        nArray[4] = (int)cR.YZ("y", (int)28695, (long)(0x22DDEDE65A203543L ^ l));
        nArray[5] = (int)cR.YZ("y", (int)8831, (long)(0x53D212E8F415E710L ^ l));
        nArray[cR.YZ("y", (int)9228, (long)(0x720EA4FDE95EE130L ^ l))] = (int)cR.YZ("y", (int)14302, (long)(0x12D92A6EF0C72B2L ^ l));
        nArray[cR.YZ("y", (int)13764, (long)(0x301C37A3D57EF0B8L ^ l))] = (int)cR.YZ("y", (int)28596, (long)(0x144A0556A533AAC2L ^ l));
        nArray[cR.YZ("y", (int)21229, (long)(0x3D14A4BBF119178AL ^ l))] = (int)cR.YZ("y", (int)17862, (long)(0x6A53B0111CDB00B8L ^ l));
        this.imXIw = new ct(this, mr.clS(nArray));
        this.nVChr = new cu(this.imXIw, mr.clS(new int[]{(int)cR.YZ("y", (int)2233, (long)(0x3445F1DCE2B4DCBL ^ l)), (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l)), (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l)), (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l)), (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l))}));
        int[] nArray2 = new int[cR.YZ("y", (int)28243, (long)(0x6295B88A60A1AB17L ^ l))];
        nArray2[0] = (int)cR.YZ("y", (int)9817, (long)(0x2F68F2FB72676337L ^ l));
        nArray2[1] = (int)cR.YZ("y", (int)12686, (long)(0x7A410DAD601F74ECL ^ l));
        nArray2[2] = (int)cR.YZ("y", (int)21146, (long)(0x312326DAC16B17E5L ^ l));
        nArray2[3] = (int)cR.YZ("y", (int)12487, (long)(0x5C3518D93153F5FAL ^ l));
        nArray2[4] = (int)cR.YZ("y", (int)29923, (long)(0x19DFD2F9A47AB1A4L ^ l));
        nArray2[5] = (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l));
        nArray2[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l));
        nArray2[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)3869, (long)(0x63414918B35ECA50L ^ l));
        nArray2[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray2[cR.YZ("y", (int)10406, (long)(0x30C9E3456AEB6D93L ^ l))] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.Taplw = new cu(this.imXIw, mr.clS(nArray2));
        this.sDuYV = new cu(this.imXIw, mr.clS(new int[]{(int)cR.YZ("y", (int)2360, (long)(0x2595BC205127CC64L ^ l)), (int)cR.YZ("y", (int)925, (long)(0x4FDAE5D4B0CDC6A4L ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l)), (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l))}));
        int[] nArray3 = new int[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))];
        nArray3[0] = (int)cR.YZ("y", (int)147, (long)(0x2A3141EFEB7E45FAL ^ l));
        nArray3[1] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray3[2] = (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l));
        nArray3[3] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray3[4] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        nArray3[5] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.GZMuF = new cu(this.imXIw, mr.clS(nArray3));
        int[] nArray4 = new int[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))];
        nArray4[0] = (int)cR.YZ("y", (int)23652, (long)(0x6D9C91C7E6D3191DL ^ l));
        nArray4[1] = (int)cR.YZ("y", (int)31812, (long)(0x52B1C8CA9618391DL ^ l));
        nArray4[2] = (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l));
        nArray4[3] = (int)cR.YZ("y", (int)31180, (long)(0x17CE1E465D6C3CF7L ^ l));
        nArray4[4] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray4[5] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        nArray4[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)24165, (long)(0x3A031F4321659B33L ^ l));
        nArray4[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.HzYvJ = new cu(this.imXIw, mr.clS(nArray4));
        int[] nArray5 = new int[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))];
        nArray5[0] = (int)cR.YZ("y", (int)11572, (long)(0x24B3F921F13BE849L ^ l));
        nArray5[1] = (int)cR.YZ("y", (int)2506, (long)(0x182431C5AEE7CCAFL ^ l));
        nArray5[2] = (int)cR.YZ("y", (int)18560, (long)(0x5E3939D4EA420DC0L ^ l));
        nArray5[3] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        nArray5[4] = (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l));
        nArray5[5] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray5[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray5[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.wHlEJ = new cu(this.imXIw, mr.clS(nArray5));
        this.BUBSR = new cu(this.imXIw, mr.clS(new int[]{(int)cR.YZ("y", (int)4109, (long)(0x34B265F4C2F6D576L ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l)), (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l))}));
        int[] nArray6 = new int[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))];
        nArray6[0] = (int)cR.YZ("y", (int)30725, (long)(0x1392C61DC8C13D66L ^ l));
        nArray6[1] = (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l));
        nArray6[2] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray6[3] = (int)cR.YZ("y", (int)5644, (long)(0x169DAA5B75BB5340L ^ l));
        nArray6[4] = (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l));
        nArray6[5] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.OJUIx = new cu(this.imXIw, mr.clS(nArray6));
        this.mNCfB = new cG(this, mr.clS(new int[]{(int)cR.YZ("y", (int)26265, (long)(0x5F4DA048E376A3C6L ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray7 = new int[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))];
        nArray7[0] = (int)cR.YZ("y", (int)10083, (long)(0x7F0E4AA4F505E229L ^ l));
        nArray7[1] = (int)cR.YZ("y", (int)2506, (long)(0x182431C5AEE7CCAFL ^ l));
        nArray7[2] = (int)cR.YZ("y", (int)10073, (long)(0x2755475FBE7A626DL ^ l));
        nArray7[3] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        nArray7[4] = (int)cR.YZ("y", (int)31812, (long)(0x52B1C8CA9618391DL ^ l));
        nArray7[5] = (int)cR.YZ("y", (int)18266, (long)(0x54B3529BCF528212L ^ l));
        nArray7[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)22902, (long)(0x3C1DE1CCA4D99C0EL ^ l));
        this.ywNJH = new ct(this, mr.clS(nArray7));
        this.VMcLW = new cu(this.ywNJH, mr.clS(new int[]{(int)cR.YZ("y", (int)15730, (long)(0x2EEF39B0E521F81FL ^ l)), (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l)), (int)cR.YZ("y", (int)11872, (long)(0x438E2BDE073C6B37L ^ l))}));
        this.BjCne = new cu(this.ywNJH, mr.clS(new int[]{(int)cR.YZ("y", (int)14571, (long)(0x376C3746D5157DB8L ^ l)), (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)4891, (long)(0x27A798AD01F4D671L ^ l))}));
        this.lyHys = new cC(this, mr.clS(new int[]{(int)cR.YZ("y", (int)9817, (long)(0x2F68F2FB72676337L ^ l)), (int)cR.YZ("y", (int)18266, (long)(0x54B3529BCF528212L ^ l)), (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l)), (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l)), (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l))})).Vy(0.01).Vw(1.0).Vx(10.0).VA(3.0);
        int[] nArray8 = new int[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))];
        nArray8[0] = (int)cR.YZ("y", (int)10020, (long)(0x6F9583EAD721E213L ^ l));
        nArray8[1] = (int)cR.YZ("y", (int)12696, (long)(0x38B33F086F2BF4A0L ^ l));
        nArray8[2] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray8[3] = (int)cR.YZ("y", (int)5644, (long)(0x169DAA5B75BB5340L ^ l));
        nArray8[4] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        nArray8[5] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        this.mNkAv = new cC(this, mr.clS(nArray8)).Vy(10.0).Vw(20.0).Vx(800.0).VA(200.0);
        int[] nArray9 = new int[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))];
        nArray9[0] = (int)cR.YZ("y", (int)30539, (long)(0x6933C2976D5EB21BL ^ l));
        nArray9[1] = (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l));
        nArray9[2] = (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l));
        nArray9[3] = (int)cR.YZ("y", (int)16693, (long)(0x28F0D3CFF5620470L ^ l));
        nArray9[4] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray9[5] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        this.pEdgo = new cv(this, mr.clS(nArray9));
        this.Ubjvg = new cw(this.pEdgo, mr.clS(new int[]{(int)cR.YZ("y", (int)32381, (long)(0xD5DE8474E62BB3EL ^ l)), (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l)), (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l)), (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l))})).Tz();
        int[] nArray10 = new int[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))];
        nArray10[0] = (int)cR.YZ("y", (int)19257, (long)(0x203D8BE7D49E0E4DL ^ l));
        nArray10[1] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray10[2] = (int)cR.YZ("y", (int)26706, (long)(0x136140A0C20B2D34L ^ l));
        nArray10[3] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray10[4] = (int)cR.YZ("y", (int)12696, (long)(0x38B33F086F2BF4A0L ^ l));
        nArray10[5] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray10[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        nArray10[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        this.UYbIm = new cw(this.pEdgo, mr.clS(nArray10));
        int[] nArray11 = new int[cR.YZ("y", (int)674, (long)(0x2BB24C94526247C2L ^ l))];
        nArray11[0] = (int)cR.YZ("y", (int)10083, (long)(0x7F0E4AA4F505E229L ^ l));
        nArray11[1] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray11[2] = (int)cR.YZ("y", (int)20862, (long)(0x6A74135A3EBD140FL ^ l));
        nArray11[3] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray11[4] = (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l));
        nArray11[5] = (int)cR.YZ("y", (int)5920, (long)(0x1FF582E53C635255L ^ l));
        nArray11[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)10354, (long)(0x40BB5DFADFE66D1AL ^ l));
        nArray11[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)2506, (long)(0x182431C5AEE7CCAFL ^ l));
        nArray11[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray11[cR.YZ("y", (int)10406, (long)(0x30C9E3456AEB6D93L ^ l))] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray11[cR.YZ("y", (int)11310, (long)(0x56DCDC2B9948E976L ^ l))] = (int)cR.YZ("y", (int)29123, (long)(0x25945522E3DE34F9L ^ l));
        this.IIZjW = new cw(this.pEdgo, mr.clS(nArray11));
        int[] nArray12 = new int[cR.YZ("y", (int)11310, (long)(0x56DCDC2B9948E976L ^ l))];
        nArray12[0] = (int)cR.YZ("y", (int)30539, (long)(0x6933C2976D5EB21BL ^ l));
        nArray12[1] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray12[2] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray12[3] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray12[4] = (int)cR.YZ("y", (int)29123, (long)(0x25945522E3DE34F9L ^ l));
        nArray12[5] = (int)cR.YZ("y", (int)5920, (long)(0x1FF582E53C635255L ^ l));
        nArray12[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)9817, (long)(0x2F68F2FB72676337L ^ l));
        nArray12[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)2506, (long)(0x182431C5AEE7CCAFL ^ l));
        nArray12[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray12[cR.YZ("y", (int)10406, (long)(0x30C9E3456AEB6D93L ^ l))] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        this.czNck = new cw(this.pEdgo, mr.clS(nArray12));
        int[] nArray13 = new int[cR.YZ("y", (int)23018, (long)(0x657A59A0BDF19C9DL ^ l))];
        nArray13[0] = (int)cR.YZ("y", (int)10354, (long)(0x40BB5DFADFE66D1AL ^ l));
        nArray13[1] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray13[2] = (int)cR.YZ("y", (int)31812, (long)(0x52B1C8CA9618391DL ^ l));
        nArray13[3] = (int)cR.YZ("y", (int)3795, (long)(0x70F3A0FB52B1CB9DL ^ l));
        nArray13[4] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray13[5] = (int)cR.YZ("y", (int)27352, (long)(0x2F296BDB4677AF9EL ^ l));
        nArray13[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        nArray13[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)5920, (long)(0x1FF582E53C635255L ^ l));
        nArray13[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))] = (int)cR.YZ("y", (int)10354, (long)(0x40BB5DFADFE66D1AL ^ l));
        nArray13[cR.YZ("y", (int)10406, (long)(0x30C9E3456AEB6D93L ^ l))] = (int)cR.YZ("y", (int)2506, (long)(0x182431C5AEE7CCAFL ^ l));
        nArray13[cR.YZ("y", (int)11310, (long)(0x56DCDC2B9948E976L ^ l))] = (int)cR.YZ("y", (int)3755, (long)(0x21A51678BA8A4BDBL ^ l));
        nArray13[cR.YZ("y", (int)24371, (long)(0x1A6229FAA6749A58L ^ l))] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray13[cR.YZ("y", (int)26985, (long)(0x47ED6510F6D42C33L ^ l))] = (int)cR.YZ("y", (int)29123, (long)(0x25945522E3DE34F9L ^ l));
        this.cfNnD = new cw(this.pEdgo, mr.clS(nArray13));
        int[] nArray14 = new int[cR.YZ("y", (int)10406, (long)(0x30C9E3456AEB6D93L ^ l))];
        nArray14[0] = (int)cR.YZ("y", (int)10354, (long)(0x40BB5DFADFE66D1AL ^ l));
        nArray14[1] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray14[2] = (int)cR.YZ("y", (int)19677, (long)(0x6E4BBA0DD95509E2L ^ l));
        nArray14[3] = (int)cR.YZ("y", (int)27201, (long)(0x63BAFCFC1C3B2F00L ^ l));
        nArray14[4] = (int)cR.YZ("y", (int)12696, (long)(0x38B33F086F2BF4A0L ^ l));
        nArray14[5] = (int)cR.YZ("y", (int)5920, (long)(0x1FF582E53C635255L ^ l));
        nArray14[cR.YZ("y", (int)26720, (long)(0x65EBB340CCC2D2FL ^ l))] = (int)cR.YZ("y", (int)10083, (long)(0x7F0E4AA4F505E229L ^ l));
        nArray14[cR.YZ("y", (int)22769, (long)(0xA7E539B7F1A1DA0L ^ l))] = (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l));
        nArray14[cR.YZ("y", (int)2936, (long)(0x2DB8A8AEC2674E1CL ^ l))] = (int)cR.YZ("y", (int)29968, (long)(0x6FF4E488DD7BB045L ^ l));
        this.hQcMD = new cw(this.pEdgo, mr.clS(nArray14));
        this.aTbJe = new cJ(this, mr.clS(new int[]{(int)cR.YZ("y", (int)29746, (long)(0x5322AB5351C4B169L ^ l)), (int)cR.YZ("y", (int)7645, (long)(0x24218A8D038C58AEL ^ l)), (int)cR.YZ("y", (int)2083, (long)(0x41162AB2FD984D59L ^ l)), (int)cR.YZ("y", (int)29123, (long)(0x25945522E3DE34F9L ^ l))})).WE(true);
        this.ImFtb = new ArrayList<mq>();
        this.wccSb = XSRvt.defaultState().bVG(DepthTestFunction.LEQUAL_DEPTH_TEST);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    cR.vBOIC = gb.aYR(5673042269858908484L, -8380775605659325189L, MethodHandles.lookup().lookupClass()).a(271803318299346L);
                    var11 = cR.vBOIC ^ 18149554341388L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("{\u00ab\u00e4\u00b4_;7Z".getBytes("ISO-8859-1"));
                ** while (true)
                cR.ZDept = cR.YW(var15_3).intern();
                cR.QOHbp = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[75];
                var3_7 = 0;
                var4_8 = "0$\u0013\u00be\u00b2cH\u00d76\u00feL~\u000b\u00fcYR\fi\u00c6\u0014~\u0089\u00f6&-8\u00ebo\u00a1\u0010\u0012\u00ecCs,=\u00c7\u00ec\u0014|r\u00bb\u00ad\u0003\u00d7\u0013\u00be<%\u00c3\u0017\u000f\u00a5\u008fd\u0092\u00d6\u00a4\u009fEe.\u00ce\u0081\u00df\u00a1^\u00ed\u00f9\u000f\u008e\u009e\u00c1\u00ec\u0005\u00fd\u00ef\u00f2\u00b6hl\n\u00de\u0091I\u00f5A\u0007}8[\u00afxw<\u00b6\u00d1oE\u009b\u00f0\u00c3\u0011\u00a1q>\u0015\u000f\u0018\u00d5\u00de\u00ce\u0007\u0010\u00f3\u0006\u00e3d\u00c2\u0081\u00ac\u0004\u0005\u00a0jEJ?y\u00e0\u00f4&V\u00be\u00eb\u0003D2\u000b4\u00bc.\u007f\u00d98p\u00dd\u00dc2\u00fb\u00b81g\u00b9\u0012\u00der\u00b5\u00ed\u0010\u0082\u00ddRV\u00e7^\u0088C,\u00c1\u00ad\u00ca\u00e8\u00bb\u00d2\u00ac\u00dc\u00a4%j7\u0000\u00ce%mZ\u0089\u008a\u00e1-\u0011e\u00a5\u00ab\u00cb\u00b03\u0016`L\u00fe\u00de!\u00da\u00e60\u00d4\u00cd\u00baM\b\u00cf\r\u001e\u00fetd.\u00d5\u00f8e\u00be-\u0003X\u00bdm\u008f\u0094\u00f6\u0091\u00e8\u00c2\u00abt\t$\u00d9\u00ec\u0010MG\u0006>\u00e51\u0017ep\u00c6\u00a3\u0007r\u00f7\u0084 y\u00b7\u00dc\u0015\u0017\u00d9\u00800\u00b5\u00dc\u00ac\u00ac\u00be\u00a7'\u00b3\u0082&y+wf;$\u00ea-\u00c3\u0098\u0004\u00b8\u00e3\u00d5\rT/\u00ae\u00e4O\u0015U`^R\u00d9#\u00bb\u00d5Q\u00e2k\u00f10R\u00fd\u0006#\u000f\u0094Ep!RE \u00f3l\u00f2\u00d3\u0007\u00f6\u008b\u00c52\u00f8\u00ed/HOE\u00e6\u00b9\u0087\u00aeP\u00e5;\u00bb\u009f~\u0001\u009d\u00f95\u00b2te\u00d8SD\u009b\u00b2\u001fb\u0018@\u00e4\u00e4\u0006\u00a6\u00ban\u00f6\u0093dj\nB\u00d9\u00a3%\u00e5o\u00b4<\u009b,\u00b6\u00f7\u0017#}\u0084\u0003\u00b0\u0093wpQ\u00fc\u0091\u0086\u00ba^\u0095]o\u00e7\u009d\u00bb\u008cB\u0090Gt\u0007B\u00065I\u00c66g\u00b9\f\u00fe\u00de\u001b\u00c7;\u001e\u00cc\u0096w\\\u00fdN\u00d2\u0092\u008eL\u00c7bG\u0019\u009e\u00de\u00a2\u0086\u00ceU\u0086C\u008c\u0081=f\u0080A\u00da4\u0083\u00f5\u00d8n*\u00f6\u00a3S\u00e3z\u00ebb\u00a9\u00b3\u0017Yz+q\u00f5CR\u00a4<\u00e4\u00d3\u008d\u00dc\u00c1\u0080'\u00a7n\u00a6\u00fd\u00ba\u0004\u00f4\u00b6\u0001\u0094`j\u00c9\u0091u5\u0084!\u00bf\u0005\u00df\u0088\u0003:\u00dc\u0018+\u00f0nj\u00bc\u0098I\u0082\u00ferK\u00cb\u00d9D\u009c\u00a3l\u00f4qHC\u00c8\u00b5\u00e1*!\u00ba\u00d6M\u00af,\u009c+\u0088E>\u00a8E74\u007f/;d\u00d5\u0015\u00e0\u000fa\u00a2\b\u00f8$\u008f\u00f0\u00ce7\u00e7\u00a8\u00aax\u00b0_,1Vp\u0010h\u0083\u00df";
                var5_9 = "0$\u0013\u00be\u00b2cH\u00d76\u00feL~\u000b\u00fcYR\fi\u00c6\u0014~\u0089\u00f6&-8\u00ebo\u00a1\u0010\u0012\u00ecCs,=\u00c7\u00ec\u0014|r\u00bb\u00ad\u0003\u00d7\u0013\u00be<%\u00c3\u0017\u000f\u00a5\u008fd\u0092\u00d6\u00a4\u009fEe.\u00ce\u0081\u00df\u00a1^\u00ed\u00f9\u000f\u008e\u009e\u00c1\u00ec\u0005\u00fd\u00ef\u00f2\u00b6hl\n\u00de\u0091I\u00f5A\u0007}8[\u00afxw<\u00b6\u00d1oE\u009b\u00f0\u00c3\u0011\u00a1q>\u0015\u000f\u0018\u00d5\u00de\u00ce\u0007\u0010\u00f3\u0006\u00e3d\u00c2\u0081\u00ac\u0004\u0005\u00a0jEJ?y\u00e0\u00f4&V\u00be\u00eb\u0003D2\u000b4\u00bc.\u007f\u00d98p\u00dd\u00dc2\u00fb\u00b81g\u00b9\u0012\u00der\u00b5\u00ed\u0010\u0082\u00ddRV\u00e7^\u0088C,\u00c1\u00ad\u00ca\u00e8\u00bb\u00d2\u00ac\u00dc\u00a4%j7\u0000\u00ce%mZ\u0089\u008a\u00e1-\u0011e\u00a5\u00ab\u00cb\u00b03\u0016`L\u00fe\u00de!\u00da\u00e60\u00d4\u00cd\u00baM\b\u00cf\r\u001e\u00fetd.\u00d5\u00f8e\u00be-\u0003X\u00bdm\u008f\u0094\u00f6\u0091\u00e8\u00c2\u00abt\t$\u00d9\u00ec\u0010MG\u0006>\u00e51\u0017ep\u00c6\u00a3\u0007r\u00f7\u0084 y\u00b7\u00dc\u0015\u0017\u00d9\u00800\u00b5\u00dc\u00ac\u00ac\u00be\u00a7'\u00b3\u0082&y+wf;$\u00ea-\u00c3\u0098\u0004\u00b8\u00e3\u00d5\rT/\u00ae\u00e4O\u0015U`^R\u00d9#\u00bb\u00d5Q\u00e2k\u00f10R\u00fd\u0006#\u000f\u0094Ep!RE \u00f3l\u00f2\u00d3\u0007\u00f6\u008b\u00c52\u00f8\u00ed/HOE\u00e6\u00b9\u0087\u00aeP\u00e5;\u00bb\u009f~\u0001\u009d\u00f95\u00b2te\u00d8SD\u009b\u00b2\u001fb\u0018@\u00e4\u00e4\u0006\u00a6\u00ban\u00f6\u0093dj\nB\u00d9\u00a3%\u00e5o\u00b4<\u009b,\u00b6\u00f7\u0017#}\u0084\u0003\u00b0\u0093wpQ\u00fc\u0091\u0086\u00ba^\u0095]o\u00e7\u009d\u00bb\u008cB\u0090Gt\u0007B\u00065I\u00c66g\u00b9\f\u00fe\u00de\u001b\u00c7;\u001e\u00cc\u0096w\\\u00fdN\u00d2\u0092\u008eL\u00c7bG\u0019\u009e\u00de\u00a2\u0086\u00ceU\u0086C\u008c\u0081=f\u0080A\u00da4\u0083\u00f5\u00d8n*\u00f6\u00a3S\u00e3z\u00ebb\u00a9\u00b3\u0017Yz+q\u00f5CR\u00a4<\u00e4\u00d3\u008d\u00dc\u00c1\u0080'\u00a7n\u00a6\u00fd\u00ba\u0004\u00f4\u00b6\u0001\u0094`j\u00c9\u0091u5\u0084!\u00bf\u0005\u00df\u0088\u0003:\u00dc\u0018+\u00f0nj\u00bc\u0098I\u0082\u00ferK\u00cb\u00d9D\u009c\u00a3l\u00f4qHC\u00c8\u00b5\u00e1*!\u00ba\u00d6M\u00af,\u009c+\u0088E>\u00a8E74\u007f/;d\u00d5\u0015\u00e0\u000fa\u00a2\b\u00f8$\u008f\u00f0\u00ce7\u00e7\u00a8\u00aax\u00b0_,1Vp\u0010h\u0083\u00df".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "5\u009f\u00af\u0087b\n|D\u00f4\t\u001c)\u00e1\u001b*\u00e8";
                    var5_9 = "5\u009f\u00af\u0087b\n|D\u00f4\t\u001c)\u00e1\u001b*\u00e8".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        cR.RFnIl = var6_6;
        cR.ECHJE = new Integer[75];
    }

    private static MatchException YV(MatchException matchException) {
        return matchException;
    }

    private class_243 YU() {
        return new class_243((double)mU.cpQ(-0.03f, 0.03f), (double)mU.cpQ(-0.03f, 0.03f), (double)mU.cpQ(-0.03f, 0.03f));
    }

    @hG
    public void YR(gL.tk tk2) {
        block18: {
            byte by;
            class_2663 class_26632;
            iS[] iSArray;
            long l;
            block19: {
                class_2596<?> class_25962;
                block17: {
                    l = vBOIC ^ 0x38766F7E5558L;
                    iSArray = dh.afl();
                    try {
                        if (!this.bab()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                    class_2596<?> class_25963 = tk2.bcf();
                    try {
                        try {
                            class_25962 = class_25963;
                            if (iSArray != null) break block17;
                            if (!(class_25962 instanceof class_2663)) break block18;
                        }
                        catch (MatchException matchException) {
                            throw cR.YV(matchException);
                        }
                        class_25962 = class_25963;
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                }
                class_26632 = (class_2663)class_25962;
                try {
                    try {
                        by = class_26632.method_11470();
                        if (iSArray != null) break block19;
                        if (by != cR.YZ("y", (int)14841, (long)(0x8D92F376483D941L ^ l))) break block18;
                    }
                    catch (MatchException matchException) {
                        throw cR.YV(matchException);
                    }
                    by = (byte)(this.ywNJH.SQ(1) ? 1 : 0);
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
            }
            byte by2 = by;
            class_1297 class_12972 = class_26632.method_11469((class_1937)rD.dlmvG.field_1687);
            try {
                if (class_12972 == null) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cR.YV(matchException);
            }
            for (int i = 0; i < cR.YZ("y", (int)7599, (long)(0x275E0775F6CB7D3FL ^ l)); ++i) {
                class_243 class_2432;
                class_243 class_2433 = new class_243(class_12972.method_23317() + (double)mU.cpQ(-0.2f, 0.2f), class_12972.method_23318() + (double)mU.cpQ(0.0f, class_12972.method_17682()), class_12972.method_23321() + (double)mU.cpQ(-0.2f, 0.2f));
                try {
                    class_2432 = by2 != 0 ? new class_243(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0) : this.YU();
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
                class_243 class_2434 = class_2432;
                this.ImFtb.add(new mn(class_2433, mp.qIoJG, class_2434, this.lyHys.VB()));
                if (iSArray == null) continue;
            }
        }
    }

    private static int YY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cR.YX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @hG
    public void YP(gM gM2) {
        this.ImFtb.clear();
    }

    private static int YX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4EE2;
        if (ECHJE[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = RFnIl[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QOHbp.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QOHbp.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cR", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cR.ECHJE[n2] = n3;
        }
        return ECHJE[n2];
    }

    @hG
    public void YQ(gH.th th2) {
        float f;
        boolean bl;
        boolean bl2;
        block55: {
            block56: {
                class_243 class_2432;
                iS[] iSArray;
                block45: {
                    boolean bl3;
                    block43: {
                        block44: {
                            long l = vBOIC ^ 0x4E1AEB5F0E00L;
                            iSArray = dh.afl();
                            try {
                                bl3 = this.bab();
                                if (iSArray != null) break block43;
                                if (bl3) break block44;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                            return;
                        }
                        this.ImFtb.removeIf(mq::clp);
                        bl3 = this.ywNJH.SQ(1);
                    }
                    bl2 = bl3;
                    for (class_1297 class_12972 : rD.dlmvG.field_1687.method_18112()) {
                        block54: {
                            boolean bl4;
                            class_243 class_2433;
                            block52: {
                                boolean bl5;
                                block53: {
                                    class_1685 class_16852;
                                    block50: {
                                        block51: {
                                            block48: {
                                                block49: {
                                                    class_243 class_2434;
                                                    block47: {
                                                        block46: {
                                                            class_2433 = class_12972.method_73189();
                                                            try {
                                                                try {
                                                                    bl = bl2;
                                                                    if (iSArray != null) break block45;
                                                                    if (!bl) break block46;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cR.YV(matchException);
                                                                }
                                                                class_2434 = new class_243(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0);
                                                                break block47;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cR.YV(matchException);
                                                            }
                                                        }
                                                        class_2434 = this.YU();
                                                    }
                                                    class_2432 = class_2434;
                                                    bl5 = false;
                                                    try {
                                                        try {
                                                            try {
                                                                bl4 = class_12972 instanceof class_1684;
                                                                if (iSArray != null) break block48;
                                                                if (!bl4) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cR.YV(matchException);
                                                            }
                                                            bl4 = this.IIZjW.TC();
                                                            if (iSArray != null) break block48;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cR.YV(matchException);
                                                        }
                                                        if (!bl4) break block49;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cR.YV(matchException);
                                                    }
                                                    bl5 = true;
                                                }
                                                bl4 = class_12972 instanceof class_1685;
                                            }
                                            try {
                                                if (iSArray != null) break block50;
                                                if (!bl4) break block51;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            class_16852 = (class_1685)class_12972;
                                            try {
                                                try {
                                                    try {
                                                        bl4 = this.cfNnD.TC();
                                                        if (iSArray != null) break block50;
                                                        if (!bl4) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cR.YV(matchException);
                                                    }
                                                    bl4 = class_16852.method_24828();
                                                    if (iSArray != null) break block50;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cR.YV(matchException);
                                                }
                                                if (bl4) break block51;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            bl5 = true;
                                        }
                                        bl4 = class_12972 instanceof class_1665;
                                    }
                                    try {
                                        if (iSArray != null) break block52;
                                        if (!bl4) break block53;
                                    }
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                    class_16852 = (class_1665)class_12972;
                                    try {
                                        try {
                                            try {
                                                bl4 = this.czNck.TC();
                                                if (iSArray != null) break block52;
                                                if (!bl4) break block53;
                                            }
                                            catch (MatchException matchException) {
                                                throw cR.YV(matchException);
                                            }
                                            bl4 = class_16852.method_24828();
                                            if (iSArray != null) break block52;
                                        }
                                        catch (MatchException matchException) {
                                            throw cR.YV(matchException);
                                        }
                                        if (bl4) break block53;
                                    }
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                    bl5 = true;
                                }
                                bl4 = bl5;
                            }
                            try {
                                try {
                                    if (iSArray != null || !bl4) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                                bl4 = this.ImFtb.add(new mn(class_2433, mp.qIoJG, class_2432, this.lyHys.VB()));
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        if (iSArray == null) continue;
                    }
                    bl = this.Ubjvg.TC();
                }
                try {
                    if (iSArray != null) break block55;
                    if (!bl) break block56;
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                }
                float f2 = (float)jg.bBy((class_1297)rD.dlmvG.field_1724);
                for (int i = this.ImFtb.size(); i < this.mNkAv.VC(); ++i) {
                    class_243 class_2435;
                    block58: {
                        block57: {
                            float f3 = 20.0f;
                            class_2432 = new class_243(rD.dlmvG.field_1724.method_23317() + (double)mU.cpQ(-f3, f3), rD.dlmvG.field_1724.method_23318() + (double)mU.cpQ(Math.max(-f2, -f3), f3), rD.dlmvG.field_1724.method_23321() + (double)mU.cpQ(-f3, f3));
                            try {
                                try {
                                    bl = bl2;
                                    if (iSArray != null) break block55;
                                    if (!bl) break block57;
                                }
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                                class_2435 = new class_243(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0);
                                break block58;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        class_2435 = this.YU();
                    }
                    class_243 class_2436 = class_2435;
                    this.ImFtb.add(new mn(class_2432, mp.qIoJG, class_2436, this.lyHys.VB()));
                    if (iSArray == null) continue;
                }
            }
            bl = this.UYbIm.TC();
        }
        if (bl && (f = iX.bxS()) > 0.1f) {
            class_243 class_2437;
            class_243 class_2438 = new class_243(rD.dlmvG.field_1724.method_23317() + (double)mU.cpQ(-0.2f, 0.2f), rD.dlmvG.field_1724.method_23318() + (double)mU.cpQ(0.0f, rD.dlmvG.field_1724.method_17682()), rD.dlmvG.field_1724.method_23321() + (double)mU.cpQ(-0.2f, 0.2f));
            try {
                class_2437 = bl2 ? new class_243(0.0, (double)mU.cpQ(-0.2f, -0.05f), 0.0) : this.YU();
            }
            catch (MatchException matchException) {
                throw cR.YV(matchException);
            }
            class_243 class_2439 = class_2437;
            this.ImFtb.add(new mn(class_2438, mp.qIoJG, class_2439, this.lyHys.VB()));
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void YT(class_4587 class_45872, float f, mG mG2, mo mo2) {
        long l = vBOIC ^ 0x7C0566EFB8D7L;
        iS[] iSArray = dh.afl();
        XSRvt.startBatch(mo2.clD(), this.wccSb);
        iS[] iSArray2 = iSArray;
        try {
            boolean bl;
            ArrayList<mq> arrayList;
            block14: {
                arrayList = new ArrayList<mq>(this.ImFtb.size());
                for (mq mq2 : this.ImFtb) {
                    block15: {
                        block16: {
                            block17: {
                                bl = jJ.bIA(mq2.clL(f));
                                if (iSArray2 != null) break block14;
                                if (iSArray2 != null) break block15;
                                break block17;
                                catch (MatchException matchException) {
                                    throw cR.YV(matchException);
                                }
                            }
                            try {
                                block18: {
                                    if (bl) break block16;
                                    break block18;
                                    catch (MatchException matchException) {
                                        throw cR.YV(matchException);
                                    }
                                }
                                if (iSArray2 == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw cR.YV(matchException);
                            }
                        }
                        arrayList.add(mq2);
                    }
                    mq2.clq(class_45872, f, mG2);
                    if (iSArray2 == null) continue;
                }
                bl = this.aTbJe.WF();
            }
            if (!bl) return;
            XSRvt.flush();
            XSRvt.swapTexture(ob.cBv(ZDept));
            for (mq mq2 : arrayList) {
                try {
                    mq2.clr(class_45872, f, mG2);
                    if (iSArray2 != null) return;
                    if (iSArray2 == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw cR.YV(matchException);
                    return;
                }
            }
        }
        finally {
            XSRvt.endBatch();
        }
    }

    private static CallSite YZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cR" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String YW(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    /*
     * Exception decompiling
     */
    @hG
    public void YS(go.sX var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [1[TRYBLOCK]], but top level block is 2[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    @Override
    public void YO() {
        super.YO();
        this.ImFtb.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cR.class, "YY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
