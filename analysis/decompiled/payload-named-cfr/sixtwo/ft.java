/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.oI;
import sixtwo.ol;

public class ft
extends gg {
    private final cC VLpcw;
    private final ct elFbq;
    private final cu wztVz;
    private final cu uaqBp;
    private final cC jOgPB;
    private final cu DExMY;
    private final cJ ZEypD;
    private final cJ CcIwq;
    private final cC ZskBX;
    private final ol xQcjf;
    private boolean dYjds;
    private boolean cDIyq;
    private int bxQEh;
    private Item gyalZ;
    private boolean YmGIh;
    private int ZpJKG;
    private static long bDphN;
    private static long[] RtVVv;
    private static Integer[] QXBqm;
    private static Map jqCWG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _1846d37df278f08b3899a429f067ffc2();

    public ft() {
        long l2 = bDphN ^ 0x19E0135E6469L;
        super(gf.aZL((int)ft.aQk("u", (int)9328, (long)(0x51F08B62C867DABCL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[ft.aQk("u", (int)5620, (long)(0x6189B11437EE6B32L ^ l2))];
        nArray[0] = (int)ft.aQk("u", (int)19071, (long)(0x3732A626B68E348DL ^ l2));
        nArray[1] = (int)ft.aQk("u", (int)12570, (long)(0x69A367750608CFD3L ^ l2));
        nArray[2] = (int)ft.aQk("u", (int)24887, (long)(0x1E46FCEB45089FCEL ^ l2));
        nArray[3] = (int)ft.aQk("u", (int)2358, (long)(0x26F96CF6501977F4L ^ l2));
        nArray[4] = (int)ft.aQk("u", (int)7533, (long)(0x5BF78B4AB198E38AL ^ l2));
        nArray[5] = (int)ft.aQk("u", (int)24195, (long)(0x165879179A05A01CL ^ l2));
        nArray[ft.aQk("u", (int)7823, (long)(0x30E84A2D53816054L ^ l2))] = (int)ft.aQk("u", (int)26735, (long)(0x4659EC2BD194168FL ^ l2));
        nArray[ft.aQk("u", (int)47, (long)(0x5445F7DB60FDFED8L ^ l2))] = (int)ft.aQk("u", (int)29832, (long)(0x3F0E3CC905980A5CL ^ l2));
        nArray[ft.aQk("u", (int)618, (long)(0x654044964D8CFCBCL ^ l2))] = (int)ft.aQk("u", (int)1095, (long)(0x6E1C813CA3B7FAABL ^ l2));
        this.VLpcw = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(1.0).Vx(100.0).VA(40.0).Vz("%");
        int[] nArray2 = new int[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))];
        nArray2[0] = (int)ft.aQk("u", (int)25574, (long)(0x54DACF2EC0FA1D7FL ^ l2));
        nArray2[1] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray2[2] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray2[3] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray2[4] = (int)ft.aQk("u", (int)6897, (long)(0x27412D161E96640BL ^ l2));
        nArray2[5] = (int)ft.aQk("u", (int)3275, (long)(0x42F63FC428D7720FL ^ l2));
        nArray2[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray2[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)24646, (long)(0x34FCD2BFF6C89EA7L ^ l2));
        nArray2[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        this.elFbq = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))];
        nArray3[0] = (int)ft.aQk("u", (int)25574, (long)(0x54DACF2EC0FA1D7FL ^ l2));
        nArray3[1] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray3[2] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray3[3] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray3[4] = (int)ft.aQk("u", (int)19337, (long)(0x35EAD2FE9A0E354EL ^ l2));
        nArray3[5] = (int)ft.aQk("u", (int)11777, (long)(0x1A1074F54E3D0D0L ^ l2));
        nArray3[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        this.wztVz = new cu(this.elFbq, mr.clS(nArray3));
        int[] nArray4 = new int[ft.aQk("u", (int)9224, (long)(0x35A8F49C62B8DA92L ^ l2))];
        nArray4[0] = (int)ft.aQk("u", (int)7167, (long)(0xA5100A52F6B6527L ^ l2));
        nArray4[1] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray4[2] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray4[3] = (int)ft.aQk("u", (int)20644, (long)(0x4658CBC7E78FAE59L ^ l2));
        nArray4[4] = (int)ft.aQk("u", (int)3447, (long)(0x65E5FC6B8750739FL ^ l2));
        nArray4[5] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray4[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)9530, (long)(0x284FCB83F8FEDBD9L ^ l2));
        nArray4[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray4[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)21869, (long)(0x39C20BB1B071AB86L ^ l2));
        nArray4[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray4[ft.aQk("u", (int)28935, (long)(0x23AE04089E248FE8L ^ l2))] = (int)ft.aQk("u", (int)30993, (long)(0x2CA91DA0D73A87DAL ^ l2));
        nArray4[ft.aQk("u", (int)10652, (long)(0x311DD2444CB9D771L ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray4[ft.aQk("u", (int)32382, (long)(0x3C2F5B19EDCF80B4L ^ l2))] = (int)ft.aQk("u", (int)26136, (long)(0x75A6660B749198D6L ^ l2));
        nArray4[ft.aQk("u", (int)19610, (long)(0x130A8FA25F1EB248L ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray4[ft.aQk("u", (int)23161, (long)(0x751C708628A3A487L ^ l2))] = (int)ft.aQk("u", (int)16896, (long)(0x3F5764322DFC3CF4L ^ l2));
        nArray4[ft.aQk("u", (int)19345, (long)(0x3FB59D2C4089B569L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray4[ft.aQk("u", (int)13936, (long)(0x48EED2D802ABC88CL ^ l2))] = (int)ft.aQk("u", (int)31231, (long)(0xBD5005B8D398737L ^ l2));
        this.uaqBp = new cu(this.elFbq, mr.clS(nArray4)).SY();
        int[] nArray5 = new int[ft.aQk("u", (int)18728, (long)(0x1A1ED1E5BE9737FBL ^ l2))];
        nArray5[0] = (int)ft.aQk("u", (int)25574, (long)(0x54DACF2EC0FA1D7FL ^ l2));
        nArray5[1] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray5[2] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray5[3] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray5[4] = (int)ft.aQk("u", (int)1422, (long)(0xDB2F9FEA8C07B7DL ^ l2));
        nArray5[5] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray5[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)30310, (long)(0x662A2EBA309C88BCL ^ l2));
        nArray5[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray5[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)26136, (long)(0x75A6660B749198D6L ^ l2));
        nArray5[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray5[ft.aQk("u", (int)29123, (long)(0x7D5C64DAC9888F1CL ^ l2))] = (int)ft.aQk("u", (int)16896, (long)(0x3F5764322DFC3CF4L ^ l2));
        nArray5[ft.aQk("u", (int)15725, (long)(0x62528F82831C43A8L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray5[ft.aQk("u", (int)6580, (long)(0x6B268566126EE764L ^ l2))] = (int)ft.aQk("u", (int)7907, (long)(0x65314E66334C603AL ^ l2));
        this.jOgPB = new cC(this, mr.clS(nArray5)).Vy(0.1).Vw(1.0).Vx(100.0).VA(60.0).Vz("%");
        int[] nArray6 = new int[ft.aQk("u", (int)15725, (long)(0x62528F82831C43A8L ^ l2))];
        nArray6[0] = (int)ft.aQk("u", (int)25212, (long)(0x15ABACF5FBF31C92L ^ l2));
        nArray6[1] = (int)ft.aQk("u", (int)13093, (long)(0x222B695C822ECDDAL ^ l2));
        nArray6[2] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray6[3] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray6[4] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray6[5] = (int)ft.aQk("u", (int)21969, (long)(0x412DFD2A36762B35L ^ l2));
        nArray6[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray6[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray6[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray6[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray6[ft.aQk("u", (int)29123, (long)(0x7D5C64DAC9888F1CL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        this.DExMY = new cu(this.elFbq, mr.clS(nArray6));
        int[] nArray7 = new int[ft.aQk("u", (int)18728, (long)(0x1A1ED1E5BE9737FBL ^ l2))];
        nArray7[0] = (int)ft.aQk("u", (int)25574, (long)(0x54DACF2EC0FA1D7FL ^ l2));
        nArray7[1] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray7[2] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray7[3] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray7[4] = (int)ft.aQk("u", (int)25574, (long)(0x54DACF2EC0FA1D7FL ^ l2));
        nArray7[5] = (int)ft.aQk("u", (int)11777, (long)(0x1A1074F54E3D0D0L ^ l2));
        nArray7[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)24665, (long)(0x2550EF2E736D1E84L ^ l2));
        nArray7[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray7[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray7[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)11777, (long)(0x1A1074F54E3D0D0L ^ l2));
        nArray7[ft.aQk("u", (int)29123, (long)(0x7D5C64DAC9888F1CL ^ l2))] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray7[ft.aQk("u", (int)15725, (long)(0x62528F82831C43A8L ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray7[ft.aQk("u", (int)6580, (long)(0x6B268566126EE764L ^ l2))] = (int)ft.aQk("u", (int)7907, (long)(0x65314E66334C603AL ^ l2));
        this.ZEypD = new cJ(this, mr.clS(nArray7)).WE(true);
        int[] nArray8 = new int[ft.aQk("u", (int)27200, (long)(0x6B3CBF5492491480L ^ l2))];
        nArray8[0] = (int)ft.aQk("u", (int)758, (long)(0x5849CC7DE8237C1CL ^ l2));
        nArray8[1] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray8[2] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray8[3] = (int)ft.aQk("u", (int)11777, (long)(0x1A1074F54E3D0D0L ^ l2));
        nArray8[4] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray8[5] = (int)ft.aQk("u", (int)11080, (long)(0x731CCE3DFE93D5A1L ^ l2));
        nArray8[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray8[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray8[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)9612, (long)(0x6C36B32147245B6EL ^ l2));
        nArray8[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray8[ft.aQk("u", (int)29123, (long)(0x7D5C64DAC9888F1CL ^ l2))] = (int)ft.aQk("u", (int)30310, (long)(0x662A2EBA309C88BCL ^ l2));
        nArray8[ft.aQk("u", (int)15725, (long)(0x62528F82831C43A8L ^ l2))] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray8[ft.aQk("u", (int)6580, (long)(0x6B268566126EE764L ^ l2))] = (int)ft.aQk("u", (int)12469, (long)(0x5E760A6F98F9CE60L ^ l2));
        nArray8[ft.aQk("u", (int)18728, (long)(0x1A1ED1E5BE9737FBL ^ l2))] = (int)ft.aQk("u", (int)7438, (long)(0x7454409CBBAAE3C1L ^ l2));
        nArray8[ft.aQk("u", (int)31010, (long)(0x4ECA9BED22E307BFL ^ l2))] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray8[ft.aQk("u", (int)19738, (long)(0x4C5E5B2A3FE4B384L ^ l2))] = (int)ft.aQk("u", (int)19785, (long)(0x408C234C3362B395L ^ l2));
        this.CcIwq = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[ft.aQk("u", (int)4419, (long)(0x581EBA90614AEFA5L ^ l2))];
        nArray9[0] = (int)ft.aQk("u", (int)19782, (long)(0x39CECE2953AEB3BDL ^ l2));
        nArray9[1] = (int)ft.aQk("u", (int)21832, (long)(0x7098346E0A42AB96L ^ l2));
        nArray9[2] = (int)ft.aQk("u", (int)26136, (long)(0x75A6660B749198D6L ^ l2));
        nArray9[3] = (int)ft.aQk("u", (int)18534, (long)(0x7746EF4C97CE36FAL ^ l2));
        nArray9[4] = (int)ft.aQk("u", (int)2498, (long)(0x5F050605D19C7733L ^ l2));
        nArray9[5] = (int)ft.aQk("u", (int)11777, (long)(0x1A1074F54E3D0D0L ^ l2));
        nArray9[ft.aQk("u", (int)8799, (long)(0x4DFB7AE75DD4DC88L ^ l2))] = (int)ft.aQk("u", (int)24665, (long)(0x2550EF2E736D1E84L ^ l2));
        nArray9[ft.aQk("u", (int)9061, (long)(0x3FE6416FDA065DFDL ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray9[ft.aQk("u", (int)11756, (long)(0x7B8595954F765321L ^ l2))] = (int)ft.aQk("u", (int)18881, (long)(0x7F8DA1C49C893734L ^ l2));
        nArray9[ft.aQk("u", (int)17962, (long)(0x46683A6DB8D38CFL ^ l2))] = (int)ft.aQk("u", (int)1422, (long)(0xDB2F9FEA8C07B7DL ^ l2));
        nArray9[ft.aQk("u", (int)29123, (long)(0x7D5C64DAC9888F1CL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray9[ft.aQk("u", (int)15725, (long)(0x62528F82831C43A8L ^ l2))] = (int)ft.aQk("u", (int)30310, (long)(0x662A2EBA309C88BCL ^ l2));
        nArray9[ft.aQk("u", (int)6580, (long)(0x6B268566126EE764L ^ l2))] = (int)ft.aQk("u", (int)14359, (long)(0x2251CEA3C0AFC6E1L ^ l2));
        nArray9[ft.aQk("u", (int)18728, (long)(0x1A1ED1E5BE9737FBL ^ l2))] = (int)ft.aQk("u", (int)26136, (long)(0x75A6660B749198D6L ^ l2));
        nArray9[ft.aQk("u", (int)31010, (long)(0x4ECA9BED22E307BFL ^ l2))] = (int)ft.aQk("u", (int)29807, (long)(0x431C1B5830010AAEL ^ l2));
        nArray9[ft.aQk("u", (int)19738, (long)(0x4C5E5B2A3FE4B384L ^ l2))] = (int)ft.aQk("u", (int)16896, (long)(0x3F5764322DFC3CF4L ^ l2));
        nArray9[ft.aQk("u", (int)27200, (long)(0x6B3CBF5492491480L ^ l2))] = (int)ft.aQk("u", (int)1158, (long)(0x7987197ACC417A45L ^ l2));
        nArray9[ft.aQk("u", (int)27166, (long)(0x4DE6E284466B94EEL ^ l2))] = (int)ft.aQk("u", (int)7907, (long)(0x65314E66334C603AL ^ l2));
        this.ZskBX = new cC(this, mr.clS(nArray9)).Vy(0.1).Vw(1.0).Vx(30.0).VA(6.0);
        this.xQcjf = new ol(this);
        this.bxQEh = -1;
        this.ZpJKG = -1;
        this.jOgPB.Vf(this.uaqBp::SZ);
        this.ZskBX.Vf(this.CcIwq::WF);
    }

    static {
        Loader.doInit(ft.class);
        ft._1846d37df278f08b3899a429f067ffc2();
    }

    private native void aPV(boolean var1);

    private native void aPX();

    private native void aQd(float var1);

    private static native MatchException aQh(MatchException var0);

    private native boolean aPZ(float var1);

    private native oI aQa();

    private static native int aQi(int var0, long var1);

    private static native CallSite aQk(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aQj(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native boolean aPY(float var1);

    private native void aQc();

    private native boolean aQb(ItemStack var1);

    private native void aPW();

    private native ItemStack aQf(boolean var1);

    private native void aQe();

    private native /* synthetic */ boolean aQg(ItemStack var1);

    @hG
    public native void aPU(gH.th var1);

    @Override
    public native void YO();
}

