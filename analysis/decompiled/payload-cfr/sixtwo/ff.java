/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1309
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_2596
 *  net.minecraft.class_2813
 *  net.minecraft.class_2824
 *  net.minecraft.class_2879
 *  net.minecraft.class_2885
 *  net.minecraft.class_2886
 *  net.minecraft.class_742
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1309;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2813;
import net.minecraft.class_2824;
import net.minecraft.class_2879;
import net.minecraft.class_2885;
import net.minecraft.class_2886;
import net.minecraft.class_742;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.jg;
import sixtwo.ku;
import sixtwo.kw;
import sixtwo.kx;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.of;
import sixtwo.oh;
import sixtwo.rD;

public class ff
extends gg {
    private final ct cehgg;
    private final cu dYwpF;
    private final cu NuoRm;
    private final cA qWnBv;
    private final cA FUqia;
    private final cJ bAadz;
    private final cC qyvvJ;
    private final cJ fFKwZ;
    private final cJ Bfvhw;
    private final kx AhpMu;
    private final Queue<class_2596<?>> zkfXg;
    private final mT uiKAR;
    private class_243 qBKIn;
    private boolean IydTB;
    private int lseaG;
    private class_238 Stryf;
    private boolean nlYuR;
    private static final long ikRrf;
    private static final String[] qVORx;
    private static final String[] snpFS;
    private static final Map mIJyD;
    private static final long[] HcwIb;
    private static final Integer[] maZct;
    private static final Map yGhuZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ff() {
        long l = ikRrf ^ 0x3DDDE8C8A930L;
        super(gf.aZL((int)ff.aIR("g", (int)205, (long)(0x55986337D04F81F6L ^ l)), false, gh.xwjCw).aZS(false));
        this.cehgg = new ct(this, mr.clS(new int[]{(int)ff.aIR("g", (int)23993, (long)(0x7CD2A872A04DDC86L ^ l)), (int)ff.aIR("g", (int)7097, (long)(0x9329F76A9E1AAFL ^ l)), (int)ff.aIR("g", (int)12841, (long)(0x2AA6ED223353337DL ^ l)), (int)ff.aIR("g", (int)25650, (long)(0x3823D2CE8A29650CL ^ l))}));
        int[] nArray = new int[ff.aIR("g", (int)12452, (long)(0x4357C5E53E1B3181L ^ l))];
        nArray[0] = (int)ff.aIR("g", (int)9114, (long)(0x17D4E99FF09CA2A0L ^ l));
        nArray[1] = (int)ff.aIR("g", (int)21789, (long)(0x4C87F2B001ACD442L ^ l));
        nArray[2] = (int)ff.aIR("g", (int)8138, (long)(0x50BD040642169E9BL ^ l));
        nArray[3] = (int)ff.aIR("g", (int)5495, (long)(0x1A8D45F8104C1468L ^ l));
        nArray[4] = (int)ff.aIR("g", (int)2879, (long)(0xDBD2C8F6DCA8A2FL ^ l));
        nArray[5] = (int)ff.aIR("g", (int)11574, (long)(0x63A46F1C14332C25L ^ l));
        this.dYwpF = new cu(this.cehgg, mr.clS(nArray));
        int[] nArray2 = new int[ff.aIR("g", (int)30188, (long)(0x463EA6D7AF03F4E6L ^ l))];
        nArray2[0] = (int)ff.aIR("g", (int)17609, (long)(0x574AC0180C045F0L ^ l));
        nArray2[1] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray2[2] = (int)ff.aIR("g", (int)18709, (long)(0x7E8FA4371AB14832L ^ l));
        nArray2[3] = (int)ff.aIR("g", (int)32752, (long)(0x64744876D9E5FEEBL ^ l));
        nArray2[4] = (int)ff.aIR("g", (int)19767, (long)(0x2929A48174AF4C32L ^ l));
        nArray2[5] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray2[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)9843, (long)(0x1276B963E696277EL ^ l));
        nArray2[ff.aIR("g", (int)29987, (long)(0x98DA95585DF43DL ^ l))] = (int)ff.aIR("g", (int)14706, (long)(0x26FBCAE8F3463822L ^ l));
        nArray2[ff.aIR("g", (int)16187, (long)(0x37632466BEB5BE09L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        this.NuoRm = new cu(this.cehgg, mr.clS(nArray2));
        int[] nArray3 = new int[ff.aIR("g", (int)22711, (long)(0x6F01A12AA2EED9EAL ^ l))];
        nArray3[0] = (int)ff.aIR("g", (int)4502, (long)(0x207BDB92D6761092L ^ l));
        nArray3[1] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray3[2] = (int)ff.aIR("g", (int)11566, (long)(0x69390A6A541C2C6FL ^ l));
        nArray3[3] = (int)ff.aIR("g", (int)28861, (long)(0x3548653E79C7F194L ^ l));
        nArray3[4] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray3[5] = (int)ff.aIR("g", (int)26873, (long)(0x557B17D325CFE9D5L ^ l));
        nArray3[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray3[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)3059, (long)(0x46406FD8855A0ACBL ^ l));
        nArray3[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray3[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray3[ff.aIR("g", (int)6943, (long)(0x307C6CD317411A32L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray3[ff.aIR("g", (int)18280, (long)(0x55864FBF2848C65DL ^ l))] = (int)ff.aIR("g", (int)24976, (long)(0x4256D4D7F7DFE085L ^ l));
        nArray3[ff.aIR("g", (int)27410, (long)(0x6D8CB04D1ECA6A0FL ^ l))] = (int)ff.aIR("g", (int)8622, (long)(0x22706EFA4DF420FBL ^ l));
        nArray3[ff.aIR("g", (int)18206, (long)(0x57088AA43920C604L ^ l))] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray3[ff.aIR("g", (int)30261, (long)(0x2C67432DF5CEF727L ^ l))] = (int)ff.aIR("g", (int)29284, (long)(0x6BDF06EFF408F336L ^ l));
        this.qWnBv = new cA(this, mr.clS(nArray3)).UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH((String)((Object)ff.aIO("a", (int)28664, (long)(0x7B6FA30C1414EF8L ^ l))));
        int[] nArray4 = new int[ff.aIR("g", (int)11148, (long)(0x1A5A84B922C4AABBL ^ l))];
        nArray4[0] = (int)ff.aIR("g", (int)608, (long)(0x6D175233CB21836CL ^ l));
        nArray4[1] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray4[2] = (int)ff.aIR("g", (int)14706, (long)(0x26FBCAE8F3463822L ^ l));
        nArray4[3] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray4[4] = (int)ff.aIR("g", (int)29602, (long)(0x7C4D079377CC7292L ^ l));
        nArray4[5] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray4[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray4[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)14706, (long)(0x26FBCAE8F3463822L ^ l));
        nArray4[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray4[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray4[ff.aIR("g", (int)11058, (long)(0x6A80E1152BE22A30L ^ l))] = (int)ff.aIR("g", (int)17109, (long)(0x1A3CBED4425DC383L ^ l));
        nArray4[ff.aIR("g", (int)7339, (long)(0x5E2C643303879D9FL ^ l))] = (int)ff.aIR("g", (int)30856, (long)(0xFFA12C57BBF9B5L ^ l));
        nArray4[ff.aIR("g", (int)25887, (long)(0x360D44850F85E441L ^ l))] = (int)ff.aIR("g", (int)22285, (long)(0x6EDEFCA0326F5631L ^ l));
        nArray4[ff.aIR("g", (int)26917, (long)(0x3FD78BFE2BEFE814L ^ l))] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray4[ff.aIR("g", (int)27431, (long)(0x2175D8AA0E0BEA7FL ^ l))] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray4[ff.aIR("g", (int)26355, (long)(0x7B037BC35DDBE7E4L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray4[ff.aIR("g", (int)6389, (long)(0x4E152128E64299AFL ^ l))] = (int)ff.aIR("g", (int)11006, (long)(0x2724146B0F93ABE6L ^ l));
        nArray4[ff.aIR("g", (int)30790, (long)(0x2C479A1193917906L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        this.FUqia = new cA(this, mr.clS(nArray4)).UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH((String)((Object)ff.aIO("a", (int)18884, (long)(0x942E9C2D68E8C5L ^ l))));
        int[] nArray5 = new int[ff.aIR("g", (int)11148, (long)(0x1A5A84B922C4AABBL ^ l))];
        nArray5[0] = (int)ff.aIR("g", (int)29602, (long)(0x7C4D079377CC7292L ^ l));
        nArray5[1] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray5[2] = (int)ff.aIR("g", (int)32764, (long)(0x5F8BB51D55AEFED3L ^ l));
        nArray5[3] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray5[4] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray5[5] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray5[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)28951, (long)(0x647ECB08F1AE7018L ^ l));
        nArray5[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray5[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray5[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)18155, (long)(0x3365E52BD750C7EAL ^ l));
        nArray5[ff.aIR("g", (int)11058, (long)(0x6A80E1152BE22A30L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray5[ff.aIR("g", (int)7339, (long)(0x5E2C643303879D9FL ^ l))] = (int)ff.aIR("g", (int)21789, (long)(0x4C87F2B001ACD442L ^ l));
        nArray5[ff.aIR("g", (int)25887, (long)(0x360D44850F85E441L ^ l))] = (int)ff.aIR("g", (int)11006, (long)(0x2724146B0F93ABE6L ^ l));
        nArray5[ff.aIR("g", (int)26917, (long)(0x3FD78BFE2BEFE814L ^ l))] = (int)ff.aIR("g", (int)16425, (long)(0x6A0C6DDF490BC11AL ^ l));
        nArray5[ff.aIR("g", (int)27431, (long)(0x2175D8AA0E0BEA7FL ^ l))] = (int)ff.aIR("g", (int)9589, (long)(0x7956141324F247DL ^ l));
        nArray5[ff.aIR("g", (int)26355, (long)(0x7B037BC35DDBE7E4L ^ l))] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray5[ff.aIR("g", (int)17732, (long)(0x16E8B6F07A9C4418L ^ l))] = (int)ff.aIR("g", (int)11006, (long)(0x2724146B0F93ABE6L ^ l));
        nArray5[ff.aIR("g", (int)5674, (long)(0x6C5B9091C2061721L ^ l))] = (int)ff.aIR("g", (int)16425, (long)(0x6A0C6DDF490BC11AL ^ l));
        this.bAadz = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[ff.aIR("g", (int)11058, (long)(0x6A80E1152BE22A30L ^ l))];
        nArray6[0] = (int)ff.aIR("g", (int)29602, (long)(0x7C4D079377CC7292L ^ l));
        nArray6[1] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray6[2] = (int)ff.aIR("g", (int)32764, (long)(0x5F8BB51D55AEFED3L ^ l));
        nArray6[3] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray6[4] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray6[5] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray6[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)5193, (long)(0x3AD85701A8071550L ^ l));
        nArray6[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)28071, (long)(0x646503E33CE06CF4L ^ l));
        nArray6[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)11417, (long)(0x57AD4A7B0F92DBFL ^ l));
        nArray6[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        this.qyvvJ = new cC(this, mr.clS(nArray6)).Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz((String)((Object)ff.aIO("a", (int)29179, (long)(0x5E3B69CBAB53D0F8L ^ l))));
        int[] nArray7 = new int[ff.aIR("g", (int)11148, (long)(0x1A5A84B922C4AABBL ^ l))];
        nArray7[0] = (int)ff.aIR("g", (int)29602, (long)(0x7C4D079377CC7292L ^ l));
        nArray7[1] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray7[2] = (int)ff.aIR("g", (int)32764, (long)(0x5F8BB51D55AEFED3L ^ l));
        nArray7[3] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray7[4] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray7[5] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray7[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)28792, (long)(0x679DC95CAA497171L ^ l));
        nArray7[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray7[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray7[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)13457, (long)(0x611785F864A8B596L ^ l));
        nArray7[ff.aIR("g", (int)11058, (long)(0x6A80E1152BE22A30L ^ l))] = (int)ff.aIR("g", (int)1749, (long)(0x54A88766C5EB878CL ^ l));
        nArray7[ff.aIR("g", (int)7339, (long)(0x5E2C643303879D9FL ^ l))] = (int)ff.aIR("g", (int)28840, (long)(0x1F4449B31CF271A8L ^ l));
        nArray7[ff.aIR("g", (int)25887, (long)(0x360D44850F85E441L ^ l))] = (int)ff.aIR("g", (int)29284, (long)(0x6BDF06EFF408F336L ^ l));
        nArray7[ff.aIR("g", (int)26917, (long)(0x3FD78BFE2BEFE814L ^ l))] = (int)ff.aIR("g", (int)21789, (long)(0x4C87F2B001ACD442L ^ l));
        nArray7[ff.aIR("g", (int)27431, (long)(0x2175D8AA0E0BEA7FL ^ l))] = (int)ff.aIR("g", (int)32764, (long)(0x5F8BB51D55AEFED3L ^ l));
        nArray7[ff.aIR("g", (int)26355, (long)(0x7B037BC35DDBE7E4L ^ l))] = (int)ff.aIR("g", (int)28071, (long)(0x646503E33CE06CF4L ^ l));
        nArray7[ff.aIR("g", (int)17732, (long)(0x16E8B6F07A9C4418L ^ l))] = (int)ff.aIR("g", (int)21789, (long)(0x4C87F2B001ACD442L ^ l));
        nArray7[ff.aIR("g", (int)5674, (long)(0x6C5B9091C2061721L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        this.fFKwZ = new cJ(this, mr.clS(nArray7)).WE(true);
        int[] nArray8 = new int[ff.aIR("g", (int)14377, (long)(0x45BE203D92633902L ^ l))];
        nArray8[0] = (int)ff.aIR("g", (int)29602, (long)(0x7C4D079377CC7292L ^ l));
        nArray8[1] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray8[2] = (int)ff.aIR("g", (int)32764, (long)(0x5F8BB51D55AEFED3L ^ l));
        nArray8[3] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray8[4] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray8[5] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray8[ff.aIR("g", (int)9728, (long)(0x71079B7E017D2703L ^ l))] = (int)ff.aIR("g", (int)28792, (long)(0x679DC95CAA497171L ^ l));
        nArray8[ff.aIR("g", (int)6296, (long)(0x3B3DDED2AC7219B0L ^ l))] = (int)ff.aIR("g", (int)21005, (long)(0x4E3D9287089D5329L ^ l));
        nArray8[ff.aIR("g", (int)25328, (long)(0x23E2114BD39CE3D0L ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray8[ff.aIR("g", (int)30666, (long)(0xDD6EC363333F6FCL ^ l))] = (int)ff.aIR("g", (int)11240, (long)(0x1BD8060736D5AACBL ^ l));
        nArray8[ff.aIR("g", (int)11058, (long)(0x6A80E1152BE22A30L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        nArray8[ff.aIR("g", (int)7339, (long)(0x5E2C643303879D9FL ^ l))] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray8[ff.aIR("g", (int)25887, (long)(0x360D44850F85E441L ^ l))] = (int)ff.aIR("g", (int)29284, (long)(0x6BDF06EFF408F336L ^ l));
        nArray8[ff.aIR("g", (int)26917, (long)(0x3FD78BFE2BEFE814L ^ l))] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray8[ff.aIR("g", (int)27431, (long)(0x2175D8AA0E0BEA7FL ^ l))] = (int)ff.aIR("g", (int)27708, (long)(0x76752EC95E7C6D1EL ^ l));
        nArray8[ff.aIR("g", (int)26355, (long)(0x7B037BC35DDBE7E4L ^ l))] = (int)ff.aIR("g", (int)13742, (long)(0x6AC485E35075B480L ^ l));
        nArray8[ff.aIR("g", (int)17732, (long)(0x16E8B6F07A9C4418L ^ l))] = (int)ff.aIR("g", (int)31370, (long)(0x3DD33B41E598FBA0L ^ l));
        nArray8[ff.aIR("g", (int)5674, (long)(0x6C5B9091C2061721L ^ l))] = (int)ff.aIR("g", (int)6863, (long)(0x5B8456E703AC1BDBL ^ l));
        nArray8[ff.aIR("g", (int)11148, (long)(0x1A5A84B922C4AABBL ^ l))] = (int)ff.aIR("g", (int)10038, (long)(0x52BA36F019BBA627L ^ l));
        nArray8[ff.aIR("g", (int)23437, (long)(0x62122E898AF9DA83L ^ l))] = (int)ff.aIR("g", (int)8206, (long)(0x4834344E947BA12FL ^ l));
        nArray8[ff.aIR("g", (int)16967, (long)(0x120EFE6C0190C31CL ^ l))] = (int)ff.aIR("g", (int)22032, (long)(0x642D17BCDB04570CL ^ l));
        nArray8[ff.aIR("g", (int)10851, (long)(0x2BDEB1A81F222B65L ^ l))] = (int)ff.aIR("g", (int)19423, (long)(0x39B64C85B26B4A88L ^ l));
        this.Bfvhw = new cJ(this, mr.clS(nArray8)).WE(false);
        this.AhpMu = new kx(this, ku.qnXgu);
        this.zkfXg = new ConcurrentLinkedQueue();
        this.uiKAR = mT.cpz();
        this.qBKIn = class_243.field_1353;
        this.FUqia.Vf(this.NuoRm::SZ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    ff.ikRrf = gb.aYR(8458180115173624693L, 9118909756170962521L, MethodHandles.lookup().lookupClass()).a(27814350386545L);
                    ff.mIJyD = new HashMap<K, V>(13);
                    var11 = ff.ikRrf ^ 99109528719947L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[3];
                    var18_4 = 0;
                    var17_5 = "\u009cqi\u00adn\u00c2w\u001f\u0003\u00f3\u009e\u00f34\u00e8\u00ad)\u0010\u007f,(\u00fb\u00fe\u00d8\u00b4\u00f0\u00e8\u000b\u00c3\u00a0\u00ad\u00ee<\u00ff\u0010\u00e4\u009b\u00d2\u00d3_\u008d\u00fd\u00ea(6\u00c5\u001e4~\u000f\u00b8";
                    var19_6 = "\u009cqi\u00adn\u00c2w\u001f\u0003\u00f3\u009e\u00f34\u00e8\u00ad)\u0010\u007f,(\u00fb\u00fe\u00d8\u00b4\u00f0\u00e8\u000b\u00c3\u00a0\u00ad\u00ee<\u00ff\u0010\u00e4\u009b\u00d2\u00d3_\u008d\u00fd\u00ea(6\u00c5\u001e4~\u000f\u00b8".length();
                    var16_7 = 16;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = ff.aIL(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                ff.qVORx = var20_3;
                ff.snpFS = new String[3];
                ff.yGhuZ = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[82];
                var3_13 = 0;
                var4_14 = "\u00deH\u00c8\u00a6\u00ea_7|d\u00d9\u0086\u00e7\u00cb\u008b\u00da;*]`~\u00db\u007fmhb?&\u00ec\u00c7\u00c5\u0093\u0084\r\u00f59\u00be\u00c3\u00f3\u00ec\u00e2\u00a8\u00f1\u00a9NN\u00174q\u0091\u00b3v\u00f0\u00efks%\u0018\u0018\u0091~\u00eb*\b\u0010\u00aeb;\u0019\u00dd\u0085\u0080\u00c5\u009c\u008a\u001a\u00a6\u00919\u008a\u0094\u00e8Q\u00c1\u009e\u0088-\u008e\u008fv\u00e5z\u00f8G\u00b4\u0004\u001f\u00fd\u00dcl\u00e1V]\u00c3\u0004\u00ff`\u0088\u00b7\u00aa\u0080\u00ecO9\u008a\u00a4\u00ce'e\u008bCs\u0098N\u00a4\u00f9e\u0004'\u00d6\u00be*\u001f\u00c5\b\rg\u00e0\u00a2L\u00a8cC\f\u00de\u00e6\u0083\u0091\f\u00a7\u0003\u00dd'\u00d6\u00d78\u00ac}[\u00b7K\u00c3{9{\u0005\u00d83s|\u00a9\u00b8#[\u00b6$\u00ae\u00fb\u00c3\u0011L2L\u00e6`\u00aa\u00d2U5\u0083*b\u00e99\u0097\u0094\u00d6m7&\u00e5/\u00cd\u00ba\"[\u00af\u0004\u008d\u00ea=\u00b9\u00d9\u00c4\u00cd^\u00ec]r}\u00ce5\u00b3\u0092\u00b4\u001f\u00cc8\u001c4\u0013\u00bbaf\u00a1\u00b5\r\u00f8\u00c5}r\u0006\u00ffm\u00a6~\u00c2\u00e8\u00b8\u001fT\u00d2\u00dd\u00bf\u00a2\u0005u]a\u00a8R8\u0086\u008d8\u001d\u001c9\u008e_\u00fdvh\u00df\u00b7\u0080`\u0091\u00cdk\u00c6_\u0084\u009e\u00b4\u00e6Y\u00ae\u00a2\u00f9'\u009e\u00deW\u0087y\u00a8o\u00e6D\faJ\u00eb\u00d1_kM\u00f7]\u0091T\u00af\u0004\u001e\u00e1\r\u00f9\u0098\u00b3\u008c\u00ef\u001c/\u00fdG\u00ae\u00b8;\u0007\u00ddhL\u0081xH\u00bf\u00b4\u0013\u0088\u00c3L\u00bf\u00cdE\u0001|\"\u0002\u001a\u00d3\u00e5`\u00a3\u00da\u000b\u00cd/{\u0095j\u0001\u0013?:\u00e3c>\u00110\u008f.\u00ca\u00f5-\u0083|\u00dd@\u0080A\"HI\u0012;8\u009f^L\u00b6\u001e\u00a0\u0015DM\u00b2\u00aet\u0012t\u0089\u00c0\u00ca\u00bd\u00f7\u00c3uh\u00ec\u00a37\u00b4\u00eaX\u0000)\u00c4\u00cd\u00bb\u00d3*\u00dd\\\u00ab\f\u00fc\u0085\u00fd\u001a])s\u0083\u00d4!\u00e4\u00e7\u00ff\u00cck\u00ccDI\t\u00b1U\u00c2\u0018\u00f0\u0012x\u00d3v\u00c1\u001b\u00fd\u00f3`r\u00c8@v\u00e4~\u00ba\u0086\u00f1\f\u00f4\u00c2\u00a4zUr#\u0098\u00baE=\u00f9z\u00b5Ip\u0001\u00ccI\u00ae\u00d4\u00da\u00e3\u0088\u00cb\u00bf(\u0011\u00d2`\u0016.\u00ccpW=\u0005\u0018\u00a0Cz\u00a7{\u00f3b\u00cd\u00c6\u0093\u0005m0\u008f\u00ee\u00fb.\u00ca\u00b2\u00ba\u0088\u001e\u0091\u00c5\u00b5\bR1\u008a'\u00feC0\u00cbpIg2\u00b3\u0092\u007f\u008b\u00a0\u000f\u00e5TrJ\u008eD\u00d7\u00f4\u00deL\u00ca\u00efL\u00feg\u00c6\u00cf\u008c`&2\u00ac\u00aa\u00f3\u001fT\u00e5\u0013\u00a3\u00eel\u00f8>\u009dZ\u00caZ\u00e1\u00c2\u001b\u0090-\u00dc\u00eb\u00d5\u00de\u0017\u0002\u00bf\u00f6?\u0003R[U6\u00c4)\u00db\u00f3\u00e1{h\u00d1\u0096\t\u00ec\u00b8\u00ad\u000baf\u00da\u00104\u001d\u00117\u00bf\u00de\u00195x\u00b04\u0080\u00bb\u00c12\u008c";
                var5_15 = "\u00deH\u00c8\u00a6\u00ea_7|d\u00d9\u0086\u00e7\u00cb\u008b\u00da;*]`~\u00db\u007fmhb?&\u00ec\u00c7\u00c5\u0093\u0084\r\u00f59\u00be\u00c3\u00f3\u00ec\u00e2\u00a8\u00f1\u00a9NN\u00174q\u0091\u00b3v\u00f0\u00efks%\u0018\u0018\u0091~\u00eb*\b\u0010\u00aeb;\u0019\u00dd\u0085\u0080\u00c5\u009c\u008a\u001a\u00a6\u00919\u008a\u0094\u00e8Q\u00c1\u009e\u0088-\u008e\u008fv\u00e5z\u00f8G\u00b4\u0004\u001f\u00fd\u00dcl\u00e1V]\u00c3\u0004\u00ff`\u0088\u00b7\u00aa\u0080\u00ecO9\u008a\u00a4\u00ce'e\u008bCs\u0098N\u00a4\u00f9e\u0004'\u00d6\u00be*\u001f\u00c5\b\rg\u00e0\u00a2L\u00a8cC\f\u00de\u00e6\u0083\u0091\f\u00a7\u0003\u00dd'\u00d6\u00d78\u00ac}[\u00b7K\u00c3{9{\u0005\u00d83s|\u00a9\u00b8#[\u00b6$\u00ae\u00fb\u00c3\u0011L2L\u00e6`\u00aa\u00d2U5\u0083*b\u00e99\u0097\u0094\u00d6m7&\u00e5/\u00cd\u00ba\"[\u00af\u0004\u008d\u00ea=\u00b9\u00d9\u00c4\u00cd^\u00ec]r}\u00ce5\u00b3\u0092\u00b4\u001f\u00cc8\u001c4\u0013\u00bbaf\u00a1\u00b5\r\u00f8\u00c5}r\u0006\u00ffm\u00a6~\u00c2\u00e8\u00b8\u001fT\u00d2\u00dd\u00bf\u00a2\u0005u]a\u00a8R8\u0086\u008d8\u001d\u001c9\u008e_\u00fdvh\u00df\u00b7\u0080`\u0091\u00cdk\u00c6_\u0084\u009e\u00b4\u00e6Y\u00ae\u00a2\u00f9'\u009e\u00deW\u0087y\u00a8o\u00e6D\faJ\u00eb\u00d1_kM\u00f7]\u0091T\u00af\u0004\u001e\u00e1\r\u00f9\u0098\u00b3\u008c\u00ef\u001c/\u00fdG\u00ae\u00b8;\u0007\u00ddhL\u0081xH\u00bf\u00b4\u0013\u0088\u00c3L\u00bf\u00cdE\u0001|\"\u0002\u001a\u00d3\u00e5`\u00a3\u00da\u000b\u00cd/{\u0095j\u0001\u0013?:\u00e3c>\u00110\u008f.\u00ca\u00f5-\u0083|\u00dd@\u0080A\"HI\u0012;8\u009f^L\u00b6\u001e\u00a0\u0015DM\u00b2\u00aet\u0012t\u0089\u00c0\u00ca\u00bd\u00f7\u00c3uh\u00ec\u00a37\u00b4\u00eaX\u0000)\u00c4\u00cd\u00bb\u00d3*\u00dd\\\u00ab\f\u00fc\u0085\u00fd\u001a])s\u0083\u00d4!\u00e4\u00e7\u00ff\u00cck\u00ccDI\t\u00b1U\u00c2\u0018\u00f0\u0012x\u00d3v\u00c1\u001b\u00fd\u00f3`r\u00c8@v\u00e4~\u00ba\u0086\u00f1\f\u00f4\u00c2\u00a4zUr#\u0098\u00baE=\u00f9z\u00b5Ip\u0001\u00ccI\u00ae\u00d4\u00da\u00e3\u0088\u00cb\u00bf(\u0011\u00d2`\u0016.\u00ccpW=\u0005\u0018\u00a0Cz\u00a7{\u00f3b\u00cd\u00c6\u0093\u0005m0\u008f\u00ee\u00fb.\u00ca\u00b2\u00ba\u0088\u001e\u0091\u00c5\u00b5\bR1\u008a'\u00feC0\u00cbpIg2\u00b3\u0092\u007f\u008b\u00a0\u000f\u00e5TrJ\u008eD\u00d7\u00f4\u00deL\u00ca\u00efL\u00feg\u00c6\u00cf\u008c`&2\u00ac\u00aa\u00f3\u001fT\u00e5\u0013\u00a3\u00eel\u00f8>\u009dZ\u00caZ\u00e1\u00c2\u001b\u0090-\u00dc\u00eb\u00d5\u00de\u0017\u0002\u00bf\u00f6?\u0003R[U6\u00c4)\u00db\u00f3\u00e1{h\u00d1\u0096\t\u00ec\u00b8\u00ad\u000baf\u00da\u00104\u001d\u00117\u00bf\u00de\u00195x\u00b04\u0080\u00bb\u00c12\u008c".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00b5\u00e6*\u009a\u0016\u00eftq\u00cb\u0089\u00f6\u00ce\u00cf-\u0002\u00b0";
                    var5_15 = "\u00b5\u00e6*\u009a\u0016\u00eftq\u00cb\u0089\u00f6\u00ce\u00cf-\u0002\u00b0".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        ff.HcwIb = var6_12;
        ff.maZct = new Integer[82];
    }

    @Override
    public void aaj() {
        super.aaj();
        this.zkfXg.clear();
        this.qBKIn = rD.dlmvG.field_1724.method_73189();
        this.AhpMu.bQZ(this.qBKIn, (class_742)rD.dlmvG.field_1724);
        this.lseaG = this.qWnBv.UN().intValue();
        this.uiKAR.cpB();
        this.Stryf = null;
        this.nlYuR = false;
    }

    @Override
    public void YO() {
        super.YO();
        this.aIp();
    }

    private static int aIQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ff.aIP(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public cC aIz() {
        return this.qyvvJ;
    }

    private static String aIL(byte[] byArray) {
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

    public ct aIt() {
        return this.cehgg;
    }

    public cu aIu() {
        return this.dYwpF;
    }

    public class_238 aII() {
        return this.Stryf;
    }

    public cu aIv() {
        return this.NuoRm;
    }

    @hG
    public void aIo(go.sX sX2) {
        float f;
        block14: {
            ff ff2;
            block12: {
                block13: {
                    int n;
                    block10: {
                        int[] nArray;
                        block11: {
                            block8: {
                                block9: {
                                    long l = ikRrf ^ 0x3D6C2B0D963DL;
                                    nArray = fg.aIW();
                                    try {
                                        n = this.bab();
                                        if (nArray != null) break block8;
                                        if (n != 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    return;
                                }
                                n = this.AhpMu.bQX();
                            }
                            try {
                                if (nArray != null) break block10;
                                if (n != 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            return;
                        }
                        try {
                            ff2 = this;
                            if (nArray != null) break block12;
                            n = ff2.lseaG;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    try {
                        if (n > 0) break block13;
                        f = 1.0f;
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                ff2 = this;
            }
            f = (float)Math.min(ff2.uiKAR.cpF(), (long)this.lseaG) / (float)this.lseaG;
        }
        float f2 = f;
        kw kw2 = kw.bRK().bRO(f2, 1.0f, 0.5f, 0.0f);
        this.AhpMu.bQV(kw2).bQQ(sX2.bbh(), sX2.bbi(), (class_742)rD.dlmvG.field_1724);
    }

    private static CallSite aIR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ff" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cA aIw() {
        return this.qWnBv;
    }

    public cJ aIy() {
        return this.bAadz;
    }

    public kx aIC() {
        return this.AhpMu;
    }

    public class_243 aIF() {
        return this.qBKIn;
    }

    private void aIp() {
        block10: {
            int[] nArray;
            block8: {
                ff ff2;
                block9: {
                    long l = ikRrf ^ 0x31D8B43BB52AL;
                    nArray = fg.aIW();
                    try {
                        try {
                            ff2 = this;
                            if (nArray != null) break block8;
                            if (ff2.bab()) break block9;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                ff2 = this;
            }
            ff2.IydTB = true;
            while (!this.zkfXg.isEmpty()) {
                try {
                    rD.dlmvG.method_1562().method_52787(this.zkfXg.poll());
                    if (nArray == null) {
                        if (nArray == null) continue;
                        break;
                    }
                    break block10;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            this.IydTB = false;
            this.uiKAR.cpB();
            this.qBKIn = rD.dlmvG.field_1724.method_73189();
            this.AhpMu.bRb(this.qBKIn, (class_742)rD.dlmvG.field_1724);
        }
    }

    private boolean aIq() {
        double d;
        block23: {
            block24: {
                class_238 class_2382;
                int[] nArray;
                class_1309 class_13092;
                block21: {
                    block22: {
                        ff ff2;
                        block20: {
                            boolean bl;
                            block18: {
                                block19: {
                                    long l = ikRrf ^ 0x6AD3C4E22738L;
                                    class_13092 = this.aIr();
                                    nArray = fg.aIW();
                                    try {
                                        if (class_13092 == null) {
                                            return true;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    double d2 = jg.bBJ(rD.dlmvG.field_1724.method_33571(), class_13092.method_5829());
                                    try {
                                        try {
                                            bl = this.FUqia.UM(d2);
                                            if (nArray != null) break block18;
                                            if (bl) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw ff.aIK(matchException);
                                        }
                                        this.nlYuR = false;
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                }
                                try {
                                    ff2 = this;
                                    if (nArray != null) break block20;
                                    bl = ff2.nlYuR;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                            }
                            try {
                                if (bl) {
                                    return true;
                                }
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            ff2 = this;
                        }
                        try {
                            try {
                                class_2382 = ff2.Stryf;
                                if (nArray != null) break block21;
                                if (class_2382 != null) break block22;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    class_2382 = this.Stryf;
                }
                double d3 = jg.bBJ(class_2382.method_1005(), class_13092.method_5829());
                double d4 = jg.bBJ(rD.dlmvG.field_1724.method_5829().method_1005(), class_13092.method_5829());
                try {
                    d = d3 == d4 ? 0 : (d3 < d4 ? -1 : 1);
                    if (nArray != null) break block23;
                    if (d >= 0) break block24;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
                d = 1.0;
                break block23;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    private static MatchException aIK(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void aIm(gL.tj var1_1) {
        block55: {
            block59: {
                block56: {
                    block57: {
                        block58: {
                            block53: {
                                block54: {
                                    block52: {
                                        block51: {
                                            block50: {
                                                block49: {
                                                    block47: {
                                                        block48: {
                                                            block45: {
                                                                block46: {
                                                                    var2_2 = ff.ikRrf ^ 61692911259975L;
                                                                    var4_3 = fg.aIW();
                                                                    try {
                                                                        if (!this.bab()) {
                                                                            return;
                                                                        }
                                                                    }
                                                                    catch (MatchException v0) {
                                                                        throw ff.aIK(v0);
                                                                    }
                                                                    try {
                                                                        try {
                                                                            v1 = var1_1;
                                                                            if (var4_3 != null) break block45;
                                                                            if (v1.dpm() == rD.dlmvG.method_1562().method_48296()) break block46;
                                                                        }
                                                                        catch (MatchException v2) {
                                                                            throw ff.aIK(v2);
                                                                        }
                                                                        return;
                                                                    }
                                                                    catch (MatchException v3) {
                                                                        throw ff.aIK(v3);
                                                                    }
                                                                }
                                                                v1 = var1_1;
                                                            }
                                                            var5_4 = v1.bcf();
                                                            try {
                                                                v4 = this.IydTB;
                                                                if (var4_3 != null) break block47;
                                                                if (!v4) break block48;
                                                            }
                                                            catch (MatchException v5) {
                                                                throw ff.aIK(v5);
                                                            }
                                                            return;
                                                        }
                                                        v4 = var5_4 instanceof class_2824;
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3 != null) break block49;
                                                            if (!v4) {
                                                            }
                                                            ** GOTO lbl94
                                                        }
                                                        catch (MatchException v6) {
                                                            throw ff.aIK(v6);
                                                        }
                                                        v4 = var5_4 instanceof class_2879;
                                                    }
                                                    catch (MatchException v7) {
                                                        throw ff.aIK(v7);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (var4_3 != null) break block50;
                                                        if (!v4) {
                                                        }
                                                        ** GOTO lbl94
                                                    }
                                                    catch (MatchException v8) {
                                                        throw ff.aIK(v8);
                                                    }
                                                    v4 = var5_4 instanceof class_2885;
                                                }
                                                catch (MatchException v9) {
                                                    throw ff.aIK(v9);
                                                }
                                            }
                                            try {
                                                try {
                                                    if (var4_3 != null) break block51;
                                                    if (!v4) {
                                                    }
                                                    ** GOTO lbl94
                                                }
                                                catch (MatchException v10) {
                                                    throw ff.aIK(v10);
                                                }
                                                v4 = var5_4 instanceof class_2886;
                                            }
                                            catch (MatchException v11) {
                                                throw ff.aIK(v11);
                                            }
                                        }
                                        try {
                                            try {
                                                if (var4_3 != null) break block52;
                                                if (!v4) {
                                                }
                                                ** GOTO lbl94
                                            }
                                            catch (MatchException v12) {
                                                throw ff.aIK(v12);
                                            }
                                            v4 = var5_4 instanceof class_2813;
                                        }
                                        catch (MatchException v13) {
                                            throw ff.aIK(v13);
                                        }
                                    }
                                    try {
                                        try {
                                            if (var4_3 != null) break block53;
                                            if (!v4) break block54;
                                        }
                                        catch (MatchException v14) {
                                            throw ff.aIK(v14);
                                        }
lbl94:
                                        // 5 sources

                                        this.aIp();
                                        return;
                                    }
                                    catch (MatchException v15) {
                                        throw ff.aIK(v15);
                                    }
                                }
                                v4 = this.NuoRm.SZ();
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            if (var4_3 != null) break block55;
                                            if (!v4) break block56;
                                        }
                                        catch (MatchException v16) {
                                            throw ff.aIK(v16);
                                        }
                                        v17 = this;
                                        if (var4_3 != null) break block57;
                                    }
                                    catch (MatchException v18) {
                                        throw ff.aIK(v18);
                                    }
                                    if (!v17.aIq()) break block58;
                                }
                                catch (MatchException v19) {
                                    throw ff.aIK(v19);
                                }
                                this.aIp();
                                this.aIs();
                                return;
                            }
                            catch (MatchException v20) {
                                throw ff.aIK(v20);
                            }
                        }
                        v17 = this;
                    }
                    try {
                        try {
                            if (var4_3 != null) break block59;
                            if (v17.Stryf != null) break block56;
                        }
                        catch (MatchException v21) {
                            throw ff.aIK(v21);
                        }
                        this.Stryf = rD.dlmvG.field_1724.method_5829();
                        this.qBKIn = rD.dlmvG.field_1724.method_73189();
                        this.AhpMu.bQZ(this.qBKIn, (class_742)rD.dlmvG.field_1724);
                    }
                    catch (MatchException v22) {
                        throw ff.aIK(v22);
                    }
                }
                v17 = this;
            }
            v4 = v17.zkfXg.add(var5_4);
        }
        var1_1.bdX(true);
    }

    /*
     * Exception decompiling
     */
    @hG
    public void aIl(gL.tk var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [2[TRYBLOCK]], but top level block is 12[SWITCH]
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

    public cA aIx() {
        return this.FUqia;
    }

    private static CallSite aIO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ff" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cJ aIA() {
        return this.fFKwZ;
    }

    public cJ aIB() {
        return this.Bfvhw;
    }

    public Queue<class_2596<?>> aID() {
        return this.zkfXg;
    }

    public mT aIE() {
        return this.uiKAR;
    }

    public boolean aIG() {
        return this.IydTB;
    }

    private class_1309 aIr() {
        return oh.cCY().cDb(this.FUqia).cDg(of.ahXwo).cDm();
    }

    private void aIs() {
        this.Stryf = null;
        this.nlYuR = false;
    }

    @hG
    public void aIn(gH.th th2) {
        block19: {
            block18: {
                ff ff2;
                boolean bl;
                block16: {
                    int[] nArray;
                    block17: {
                        block14: {
                            block15: {
                                long l = ikRrf ^ 0xE79FB0A157CL;
                                nArray = fg.aIW();
                                try {
                                    bl = this.bab();
                                    if (nArray != null) break block14;
                                    if (bl) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                                return;
                            }
                            bl = this.NuoRm.SZ();
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (nArray != null) break block16;
                                        if (!bl) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    bl = this.aIq();
                                    if (nArray != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                                if (!bl) break block17;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            this.aIp();
                            this.aIs();
                            this.lseaG = this.qWnBv.UN().intValue();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    try {
                        ff2 = this;
                        if (nArray != null) break block18;
                        bl = ff2.uiKAR.cpC(this.lseaG);
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                try {
                    if (!bl) break block19;
                    this.aIp();
                    this.aIs();
                    ff2 = this;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            ff2.lseaG = this.qWnBv.UN().intValue();
        }
    }

    @hG
    public void aIj(gM gM2) {
        this.zkfXg.clear();
        this.baa(false);
    }

    @hG
    public void aIk(hw.tw tw2) {
        block7: {
            ff ff2;
            boolean bl;
            block5: {
                int[] nArray;
                block6: {
                    long l = ikRrf ^ 0x67F02DB597F0L;
                    nArray = fg.aIW();
                    try {
                        bl = this.bab();
                        if (nArray != null) break block5;
                        if (bl) break block6;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                    return;
                }
                try {
                    ff2 = this;
                    if (nArray != null) break block7;
                    bl = ff2.NuoRm.SZ();
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            if (!bl) {
                return;
            }
            ff2 = this;
        }
        ff2.nlYuR = true;
    }

    public int aIH() {
        return this.lseaG;
    }

    public boolean aIJ() {
        return this.nlYuR;
    }

    private static String aIM(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3BE0;
        if (snpFS[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])mIJyD.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mIJyD.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ff", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = qVORx[n2].getBytes("ISO-8859-1");
            ff.snpFS[n2] = ff.aIL(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return snpFS[n2];
    }

    private static Object aIN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ff.aIM(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int aIP(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1BF0;
        if (maZct[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = HcwIb[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])yGhuZ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    yGhuZ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ff", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ff.maZct[n2] = n3;
        }
        return maZct[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ff.class, "aIQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(ff.class, "aIN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
