/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1530
 *  net.minecraft.class_1531
 *  net.minecraft.class_1540
 *  net.minecraft.class_1688
 *  net.minecraft.class_2185
 *  net.minecraft.class_2248
 *  net.minecraft.class_2269
 *  net.minecraft.class_2401
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_2478
 *  net.minecraft.class_2680
 *  net.minecraft.class_8168
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1530;
import net.minecraft.class_1531;
import net.minecraft.class_1540;
import net.minecraft.class_1688;
import net.minecraft.class_2185;
import net.minecraft.class_2248;
import net.minecraft.class_2269;
import net.minecraft.class_2401;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_2478;
import net.minecraft.class_2680;
import net.minecraft.class_8168;
import sixtwo.cC;
import sixtwo.cW$sq;
import sixtwo.cW$sr;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.fX;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rl;

public class cW
extends gg {
    private final cv SEHkS;
    private final cw PEUjg;
    private final cw eomCv;
    private final cw IcGgS;
    private final cw WtLkJ;
    private final cw YRSFN;
    private final cw dVboG;
    private final cw sZCWO;
    private final cw XQhcG;
    private final cw TkcsS;
    private final cC RjLgn;
    private final cC BAskS;
    private final cC inyHV;
    private final List<cW$sr> TjXAG;
    private final List<cW$sr> hUpkY;
    private final rl NkSiv;
    private static final long TMUaI;
    private static final String[] ScVGK;
    private static final String[] kXkmN;
    private static final Map IaTZt;
    private static final long[] TVPsE;
    private static final Integer[] MGxMm;
    private static final Map vzSDy;
    private static final long UBtqj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cW() {
        long l = TMUaI ^ 0x22126BA83FF7L;
        super(gf.aZL((int)cW.aai("h", (int)29437, (long)(0x6C818BE4998A9A05L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cW.aai("h", (int)21582, (long)(0x56150AD4B2D6BCA9L ^ l))];
        nArray[0] = (int)cW.aai("h", (int)10851, (long)(0x3379B92B08DDC2ACL ^ l));
        nArray[1] = (int)cW.aai("h", (int)2873, (long)(0x2DCD3F34782DE3C7L ^ l));
        nArray[2] = (int)cW.aai("h", (int)449, (long)(0x19C3388BA530E905L ^ l));
        nArray[3] = (int)cW.aai("h", (int)30829, (long)(0x143E10AC4D629082L ^ l));
        nArray[4] = (int)cW.aai("h", (int)8403, (long)(0x69D17F4B3F304826L ^ l));
        nArray[5] = (int)cW.aai("h", (int)1938, (long)(0x3BE7860B13CD6F77L ^ l));
        nArray[cW.aai("h", (int)6460, (long)(0x737A820820F71CBL ^ l))] = (int)cW.aai("h", (int)10127, (long)(0x4EE44185899BCF5FL ^ l));
        nArray[cW.aai("h", (int)23932, (long)(0x644C6E2240A635ABL ^ l))] = (int)cW.aai("h", (int)2803, (long)(0x9296F8A2F7E621EL ^ l));
        this.SEHkS = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[cW.aai("h", (int)5440, (long)(0x7A15863003FEFDB3L ^ l))];
        nArray2[0] = (int)cW.aai("h", (int)19093, (long)(0x177BBCCC9AD6A276L ^ l));
        nArray2[1] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray2[2] = (int)cW.aai("h", (int)16943, (long)(0x623159C865B3AAF7L ^ l));
        nArray2[3] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray2[4] = (int)cW.aai("h", (int)10803, (long)(0x606BB97CAC3DC2D8L ^ l));
        nArray2[5] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray2[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray2[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)7563, (long)(0x67FC440CFC43F555L ^ l));
        nArray2[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)31371, (long)(0x1690C1C714EE9276L ^ l));
        this.PEUjg = new cw(this.SEHkS, mr.clS(nArray2)).Tz();
        this.eomCv = new cw(this.SEHkS, mr.clS(new int[]{(int)cW.aai("h", (int)29819, (long)(0x5299E01F5BF01CB7L ^ l)), (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l)), (int)cW.aai("h", (int)10416, (long)(0x31AEE2539108406CL ^ l)), (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l)), (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l))})).Tz();
        int[] nArray3 = new int[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))];
        nArray3[0] = (int)cW.aai("h", (int)22375, (long)(0x8698F34FBCABFBEL ^ l));
        nArray3[1] = (int)cW.aai("h", (int)20420, (long)(0x468345516985A716L ^ l));
        nArray3[2] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray3[3] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray3[4] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray3[5] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray3[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.IcGgS = new cw(this.SEHkS, mr.clS(nArray3));
        int[] nArray4 = new int[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))];
        nArray4[0] = (int)cW.aai("h", (int)3109, (long)(0x129FA458A3EB64FFL ^ l));
        nArray4[1] = (int)cW.aai("h", (int)21030, (long)(0xDDB5934A853AD4L ^ l));
        nArray4[2] = (int)cW.aai("h", (int)5248, (long)(0x2DDA0221608FC51L ^ l));
        nArray4[3] = (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l));
        nArray4[4] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray4[5] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.WtLkJ = new cw(this.SEHkS, mr.clS(nArray4));
        int[] nArray5 = new int[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))];
        nArray5[0] = (int)cW.aai("h", (int)5289, (long)(0x2E07352C68F3FC50L ^ l));
        nArray5[1] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray5[2] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray5[3] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray5[4] = (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l));
        nArray5[5] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray5[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.YRSFN = new cw(this.SEHkS, mr.clS(nArray5)).Tz();
        int[] nArray6 = new int[cW.aai("h", (int)4972, (long)(0x26CADAF50DEEFB80L ^ l))];
        nArray6[0] = (int)cW.aai("h", (int)19120, (long)(0x7533163A0556A27EL ^ l));
        nArray6[1] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray6[2] = (int)cW.aai("h", (int)16030, (long)(0x2F3A17B8D04E567FL ^ l));
        nArray6[3] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray6[4] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray6[5] = (int)cW.aai("h", (int)22501, (long)(0x59D3E9658CAFBF2DL ^ l));
        nArray6[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)29819, (long)(0x5299E01F5BF01CB7L ^ l));
        nArray6[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray6[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray6[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray6[cW.aai("h", (int)29560, (long)(0x50DD59FF14E1BADL ^ l))] = (int)cW.aai("h", (int)21889, (long)(0x27ED807C24343D65L ^ l));
        nArray6[cW.aai("h", (int)18619, (long)(0x7F363B701EA4A06DL ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.dVboG = new cw(this.SEHkS, mr.clS(nArray6)).Tz();
        int[] nArray7 = new int[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))];
        nArray7[0] = (int)cW.aai("h", (int)24789, (long)(0x14611F2E85ED882AL ^ l));
        nArray7[1] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray7[2] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray7[3] = (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l));
        nArray7[4] = (int)cW.aai("h", (int)982, (long)(0x75C38E641733EB1BL ^ l));
        nArray7[5] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray7[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray7[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray7[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.sZCWO = new cw(this.SEHkS, mr.clS(nArray7)).Tz();
        int[] nArray8 = new int[cW.aai("h", (int)27826, (long)(0x4F88C36E86BB0446L ^ l))];
        nArray8[0] = (int)cW.aai("h", (int)16050, (long)(0x1DCBB6B9034D5679L ^ l));
        nArray8[1] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray8[2] = (int)cW.aai("h", (int)4979, (long)(0x28389574D2157BBAL ^ l));
        nArray8[3] = (int)cW.aai("h", (int)26532, (long)(0x540BB4388BEF0F7BL ^ l));
        nArray8[4] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray8[5] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray8[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)10416, (long)(0x31AEE2539108406CL ^ l));
        nArray8[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)22501, (long)(0x59D3E9658CAFBF2DL ^ l));
        nArray8[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)5289, (long)(0x2E07352C68F3FC50L ^ l));
        nArray8[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))] = (int)cW.aai("h", (int)26532, (long)(0x540BB4388BEF0F7BL ^ l));
        nArray8[cW.aai("h", (int)731, (long)(0x2BBDC09CC856A2BL ^ l))] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray8[cW.aai("h", (int)8965, (long)(0x3A7D9A8E0907CBD6L ^ l))] = (int)cW.aai("h", (int)982, (long)(0x75C38E641733EB1BL ^ l));
        nArray8[cW.aai("h", (int)27773, (long)(0x495DA9BF1A6B84E7L ^ l))] = (int)cW.aai("h", (int)10803, (long)(0x7B4B8A883B0AC2A8L ^ l));
        nArray8[cW.aai("h", (int)1817, (long)(0x1F817B0DAE61EFDBL ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.XQhcG = new cw(this.SEHkS, mr.clS(nArray8)).Tz();
        int[] nArray9 = new int[cW.aai("h", (int)2783, (long)(0x400A013F1AE4E229L ^ l))];
        nArray9[0] = (int)cW.aai("h", (int)1452, (long)(0x6D2DDC8923B6D57L ^ l));
        nArray9[1] = (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l));
        nArray9[2] = (int)cW.aai("h", (int)982, (long)(0x75C38E641733EB1BL ^ l));
        nArray9[3] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray9[4] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray9[5] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray9[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray9[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray9[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray9[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray9[cW.aai("h", (int)731, (long)(0x2BBDC09CC856A2BL ^ l))] = (int)cW.aai("h", (int)22501, (long)(0x59D3E9658CAFBF2DL ^ l));
        nArray9[cW.aai("h", (int)8965, (long)(0x3A7D9A8E0907CBD6L ^ l))] = (int)cW.aai("h", (int)23199, (long)(0x1FB1A6E0F7513201L ^ l));
        nArray9[cW.aai("h", (int)27773, (long)(0x495DA9BF1A6B84E7L ^ l))] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray9[cW.aai("h", (int)11800, (long)(0x794755FFEEF4C6FAL ^ l))] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray9[cW.aai("h", (int)8683, (long)(0x4E64BA3098E24930L ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.TkcsS = new cw(this.SEHkS, mr.clS(nArray9));
        int[] nArray10 = new int[cW.aai("h", (int)11800, (long)(0x794755FFEEF4C6FAL ^ l))];
        nArray10[0] = (int)cW.aai("h", (int)9196, (long)(0x54426CA3AA95CB1DL ^ l));
        nArray10[1] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray10[2] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray10[3] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray10[4] = (int)cW.aai("h", (int)11545, (long)(0x308A4FA204064581L ^ l));
        nArray10[5] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray10[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)26532, (long)(0x540BB4388BEF0F7BL ^ l));
        nArray10[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)22501, (long)(0x59D3E9658CAFBF2DL ^ l));
        nArray10[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)22030, (long)(0x2D143B160F433ECFL ^ l));
        nArray10[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))] = (int)cW.aai("h", (int)6200, (long)(0x7E7A9D49E0D770E5L ^ l));
        nArray10[cW.aai("h", (int)731, (long)(0x2BBDC09CC856A2BL ^ l))] = (int)cW.aai("h", (int)21802, (long)(0x6BF9D7A82E2ABDE9L ^ l));
        nArray10[cW.aai("h", (int)8965, (long)(0x3A7D9A8E0907CBD6L ^ l))] = (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l));
        nArray10[cW.aai("h", (int)27773, (long)(0x495DA9BF1A6B84E7L ^ l))] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        this.RjLgn = new cC(this, mr.clS(nArray10)).Vy(1.0).Vw(1.0).Vx(100.0).VA(6.0);
        int[] nArray11 = new int[cW.aai("h", (int)8683, (long)(0x4E64BA3098E24930L ^ l))];
        nArray11[0] = (int)cW.aai("h", (int)29624, (long)(0xE32DEB86CC31B21L ^ l));
        nArray11[1] = (int)cW.aai("h", (int)26532, (long)(0x540BB4388BEF0F7BL ^ l));
        nArray11[2] = (int)cW.aai("h", (int)21802, (long)(0x6BF9D7A82E2ABDE9L ^ l));
        nArray11[3] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        nArray11[4] = (int)cW.aai("h", (int)5971, (long)(0x480875CB0FF0FF96L ^ l));
        nArray11[5] = (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l));
        nArray11[cW.aai("h", (int)26429, (long)(0x6029BCE8B2910FDDL ^ l))] = (int)cW.aai("h", (int)69, (long)(0x602100DC2E2F6885L ^ l));
        nArray11[cW.aai("h", (int)25572, (long)(0x5238BA9687DB0B30L ^ l))] = (int)cW.aai("h", (int)22501, (long)(0x59D3E9658CAFBF2DL ^ l));
        nArray11[cW.aai("h", (int)10916, (long)(0x30CB2330BFC3C262L ^ l))] = (int)cW.aai("h", (int)31131, (long)(0x5438E074D98E9167L ^ l));
        nArray11[cW.aai("h", (int)5889, (long)(0x1845E4FAB777FFC6L ^ l))] = (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l));
        nArray11[cW.aai("h", (int)731, (long)(0x2BBDC09CC856A2BL ^ l))] = (int)cW.aai("h", (int)12323, (long)(0x182422EFFD58D8CAL ^ l));
        nArray11[cW.aai("h", (int)8965, (long)(0x3A7D9A8E0907CBD6L ^ l))] = (int)cW.aai("h", (int)6928, (long)(0x56770FC72AB673DAL ^ l));
        nArray11[cW.aai("h", (int)27773, (long)(0x495DA9BF1A6B84E7L ^ l))] = (int)cW.aai("h", (int)21802, (long)(0x6BF9D7A82E2ABDE9L ^ l));
        nArray11[cW.aai("h", (int)11800, (long)(0x794755FFEEF4C6FAL ^ l))] = (int)cW.aai("h", (int)6873, (long)(0x391A86FC5819F23FL ^ l));
        this.BAskS = new cC(this, mr.clS(nArray11)).Vy(1.0).Vw(8.0).Vx(32.0).VA(16.0);
        this.inyHV = new cC(this, mr.clS(new int[]{(int)cW.aai("h", (int)20514, (long)(0x13DF2952AF9438CCL ^ l)), (int)cW.aai("h", (int)28220, (long)(0x538E4D50FFE406D4L ^ l)), (int)cW.aai("h", (int)3882, (long)(0x5CC0E96CC5A9E7D0L ^ l)), (int)cW.aai("h", (int)10416, (long)(0x31AEE2539108406CL ^ l)), (int)cW.aai("h", (int)13811, (long)(0x6238B58EF4C85D19L ^ l))})).Vy(1.0).Vw(1.0).Vx(128.0).VA(100.0).Vz((String)((Object)cW.aaf("y", (int)31572, (long)(0x376FE66273FBC1ECL ^ l))));
        this.TjXAG = new ArrayList<cW$sr>();
        this.hUpkY = new ArrayList<cW$sr>();
        this.NkSiv = new rl();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block17: {
            block16: {
                block15: {
                    block14: {
                        cW.TMUaI = gb.aYR(-7049798968253227656L, -3398100917983016162L, MethodHandles.lookup().lookupClass()).a(130037379353153L);
                        cW.IaTZt = new HashMap<K, V>(13);
                        var16 = cW.TMUaI ^ 94883728457398L;
                        var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var16 >>> 56);
                        for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                            v2 = v2;
                            v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                        }
                        var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var25_3 = new String[3];
                        var23_4 = 0;
                        var22_5 = "\u00e7\u0016L:\u0099\u00d4|8?\u000e\u00ba\u00db\u008b)F\u0000\u0010\u00de\u00a1\u00b4\u00e9\u0081\u00b42j\u00e7\u0007\u00eel\u009e\u00f5\u00c6\u00ba \u00daD\u00a5\u0013$2\u00ae\u00dd\u0080E4\u00c5\u009f\u008b\u00a8\u0084\u0094\u00da\u001e\u0001?\u000f\u00cf\u001f\u00abj>\u0001\u00a5l\u00fb\u00ff";
                        var24_6 = "\u00e7\u0016L:\u0099\u00d4|8?\u000e\u00ba\u00db\u008b)F\u0000\u0010\u00de\u00a1\u00b4\u00e9\u0081\u00b42j\u00e7\u0007\u00eel\u009e\u00f5\u00c6\u00ba \u00daD\u00a5\u0013$2\u00ae\u00dd\u0080E4\u00c5\u009f\u008b\u00a8\u0084\u0094\u00da\u001e\u0001?\u000f\u00cf\u001f\u00abj>\u0001\u00a5l\u00fb\u00ff".length();
                        var21_7 = 16;
                        var20_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            continue;
                            break;
                        }
lbl22:
                        // 1 sources

                        while (true) {
                            var25_3[var23_4++] = cW.aac(var26_9).intern();
                            if ((var20_8 += var21_7) < var24_6) {
                                var21_7 = var22_5.charAt(var20_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                        v3 = ++var20_8;
                        var26_9 = var18_1.doFinal(var22_5.substring(v3, v3 + var21_7).getBytes("ISO-8859-1"));
                        ** while (true)
                    }
                    cW.ScVGK = var25_3;
                    cW.kXkmN = new String[3];
                    cW.vzSDy = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v4 = SecretKeyFactory.getInstance("DES");
                    v5 = new byte[8];
                    v6 = v5;
                    v5[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v6 = v6;
                        v6[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[69];
                    var8_13 = 0;
                    var9_14 = "\u00b4k\u00e5#\u00c1\u0095\u00b8\u00dc\u00e3\u009c\u00e9\u008fu\u000f$E\u00be\u00cb\u00e4\f\u009c\u00a4\u00bc[\u00e7\u00aa\u000fx\u00c3\u001f\u00ee\u00ccr.\u00f2{\u009ap1$\u00fa?\u00a9*\u00ea\u00ae\u00bf\u00f1\u00e9\u00af\u001d\u000b\u00c6W\u00b2\u00aea\u0083\u0001\u008dXF\u00c6\u001f\u00cex\u00b0\u00a7`%\u00c4|4K#\u00fcX_n!\u00d9\u00d8#x\u00cc\u00baq\u0017\u001b|\u00c8\u00da\u0098w/L\u0092\u001a\u00d1=\u00185\u0019\u00d3)\u0092\u0007\u0012\u00b4D\u00a1\u0014X\u008d\u0086\u00f0\u00a2E\u00cf\u00c0\u008b\"u{\u00acJ\u00ac/\u00e9,\u00eeQ\u00bc#\u00a4\u00d7\u0018q\u00a7;\u00c5EI\u00a3\u0001\u0098\u0097\u00fbb\u00af\u0003\u00f89\u00e2~\u000eD\u009eG\u008a\u00f8rs\u00c7\u00e7\u00afc&\u008c\u0007TA\u00dfs\u00f2\u0082\u00f1'8\u00cfbhr\u00e8\u0004^\u00d8r\u00f3\u000f\u00b5\u00dd\u008c7~\u00fa\u00e9\u00f6\u008a?\"\u0018\u00b4w\u0094\u0011\u00e5\u00b6\u00b7\u00f7M\u00eb\u00af\u00ef_I\u00d5\u00f4Z\r\u00f2=\u00dd\r0\u00077\u00a6c\u00c9\u00cb\u00cb\u0001\u00de\u00baE\u00b6\u00e4\u0016\u00b9\u00c6\u00a9s\u0000]\u00a9\u00ff\u00d2K;\u0088&z\u00fc\u00da\u00cc\u009fs\u0006\u00ea\u0081\u00b7Q\u00a2\u00fa\u00bd\u0098\u00b3>te\u00e5\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086\u00f7\u00b6\u00b0\u000eD\u007f\u008dG\u0007\u00cfl\u0088\u0011\fp,\u00b2\u00a8\f\u0096x\u00be\u00cc\u0084\u00b7\u000f\u00ac+O\u000bz\u001bf-\u0080 \u00a2Y\u00e3\r|\u00f1\u00det\u00a78|\u0088\u009f\u00d1\u00ad\u0089\u00a7\u00b4\u0085#\u0014\u0012l\u00a4`T\u0099\u00b1\u00f0H\u00e4\u00c2\u0080\u0091H\u0092\u00b7\u0082N\u0003>\u00a3\u008e\u00f7\u00ef#\u009b \u0092\u00a1\u00b5Z\u0010\u0086k\u00ab\u00e6\u00c1\u00e1\u00a6\u0000k\u00e1d\u009e\u00d7P[c}\u00c1\bj%\u00e4\u00e2\u00b9\u0003\u00f6\u00a0\u0010F\u000f\u0005\u00dd\u0001\u00f2x\u00b2'\u0095~&\u00f6\u00e8\u00ebf\u00ce6i\u0006q\u00a6\u00ca\u0011\u00fc$\u00a2\u00e5\u00aa,yN\u008d\u00bf\u00b6\u0099\u00a8a\u008cNB\u0010*\u001e\u009a\u00f6^\u0082\u00bb0\u00ed\u0097cN\u00c3\u00b1\u00ae\u00a1k\u00e4\u00d0\u00b8Q7\u00e3\u0084\u00ccB\u00fb\u00ce\u00b1E>\u00dc\u00a6a?U\u008a \u00ec\u008bz\u00aa\u00fbJ<w\u00d2|y\u00bd\u00e9_\u00f3]S\u00be?\u00f2#X\u0013\u008aq&\u008b\u00d7\u0080v\u00c18\u001e\u00d1yL\u00c4\u00ff\u0017ZgO\u008bK4q\u00a8\u00d3\u00c3\u00ebp\u008c\u00c9\u0098\u00d2%\u00f0";
                    var10_15 = "\u00b4k\u00e5#\u00c1\u0095\u00b8\u00dc\u00e3\u009c\u00e9\u008fu\u000f$E\u00be\u00cb\u00e4\f\u009c\u00a4\u00bc[\u00e7\u00aa\u000fx\u00c3\u001f\u00ee\u00ccr.\u00f2{\u009ap1$\u00fa?\u00a9*\u00ea\u00ae\u00bf\u00f1\u00e9\u00af\u001d\u000b\u00c6W\u00b2\u00aea\u0083\u0001\u008dXF\u00c6\u001f\u00cex\u00b0\u00a7`%\u00c4|4K#\u00fcX_n!\u00d9\u00d8#x\u00cc\u00baq\u0017\u001b|\u00c8\u00da\u0098w/L\u0092\u001a\u00d1=\u00185\u0019\u00d3)\u0092\u0007\u0012\u00b4D\u00a1\u0014X\u008d\u0086\u00f0\u00a2E\u00cf\u00c0\u008b\"u{\u00acJ\u00ac/\u00e9,\u00eeQ\u00bc#\u00a4\u00d7\u0018q\u00a7;\u00c5EI\u00a3\u0001\u0098\u0097\u00fbb\u00af\u0003\u00f89\u00e2~\u000eD\u009eG\u008a\u00f8rs\u00c7\u00e7\u00afc&\u008c\u0007TA\u00dfs\u00f2\u0082\u00f1'8\u00cfbhr\u00e8\u0004^\u00d8r\u00f3\u000f\u00b5\u00dd\u008c7~\u00fa\u00e9\u00f6\u008a?\"\u0018\u00b4w\u0094\u0011\u00e5\u00b6\u00b7\u00f7M\u00eb\u00af\u00ef_I\u00d5\u00f4Z\r\u00f2=\u00dd\r0\u00077\u00a6c\u00c9\u00cb\u00cb\u0001\u00de\u00baE\u00b6\u00e4\u0016\u00b9\u00c6\u00a9s\u0000]\u00a9\u00ff\u00d2K;\u0088&z\u00fc\u00da\u00cc\u009fs\u0006\u00ea\u0081\u00b7Q\u00a2\u00fa\u00bd\u0098\u00b3>te\u00e5\u00ad\u0099&\u0018!W\u0084\u009b\u008f\u0086\u00f7\u00b6\u00b0\u000eD\u007f\u008dG\u0007\u00cfl\u0088\u0011\fp,\u00b2\u00a8\f\u0096x\u00be\u00cc\u0084\u00b7\u000f\u00ac+O\u000bz\u001bf-\u0080 \u00a2Y\u00e3\r|\u00f1\u00det\u00a78|\u0088\u009f\u00d1\u00ad\u0089\u00a7\u00b4\u0085#\u0014\u0012l\u00a4`T\u0099\u00b1\u00f0H\u00e4\u00c2\u0080\u0091H\u0092\u00b7\u0082N\u0003>\u00a3\u008e\u00f7\u00ef#\u009b \u0092\u00a1\u00b5Z\u0010\u0086k\u00ab\u00e6\u00c1\u00e1\u00a6\u0000k\u00e1d\u009e\u00d7P[c}\u00c1\bj%\u00e4\u00e2\u00b9\u0003\u00f6\u00a0\u0010F\u000f\u0005\u00dd\u0001\u00f2x\u00b2'\u0095~&\u00f6\u00e8\u00ebf\u00ce6i\u0006q\u00a6\u00ca\u0011\u00fc$\u00a2\u00e5\u00aa,yN\u008d\u00bf\u00b6\u0099\u00a8a\u008cNB\u0010*\u001e\u009a\u00f6^\u0082\u00bb0\u00ed\u0097cN\u00c3\u00b1\u00ae\u00a1k\u00e4\u00d0\u00b8Q7\u00e3\u0084\u00ccB\u00fb\u00ce\u00b1E>\u00dc\u00a6a?U\u008a \u00ec\u008bz\u00aa\u00fbJ<w\u00d2|y\u00bd\u00e9_\u00f3]S\u00be?\u00f2#X\u0013\u008aq&\u008b\u00d7\u0080v\u00c18\u001e\u00d1yL\u00c4\u00ff\u0017ZgO\u008bK4q\u00a8\u00d3\u00c3\u00ebp\u008c\u00c9\u0098\u00d2%\u00f0".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v7 = var11_12;
                        v8 = var8_13++;
                        v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v10 = -1;
                        break block15;
                        break;
                    }
lbl58:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u00c1\u00df\u0012\u00bb0\u0013\u00a2d\u0083\u0085\u00e5q\u00867\u00ec\u0094";
                        var10_15 = "\u00c1\u00df\u0012\u00bb0\u0013\u00a2d\u0083\u0085\u00e5q\u00867\u00ec\u0094".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v7 = var11_12;
                            v8 = var8_13++;
                            v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v10 = 0;
                            break block15;
                            break;
                        }
                        break;
                    }
lbl71:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        break block16;
                        break;
                    }
                }
                var13_18 = v9;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v11 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
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
            cW.TVPsE = var11_12;
            cW.MGxMm = new Integer[69];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v12 = SecretKeyFactory.getInstance("DES");
            v13 = new byte[8];
            v14 = v13;
            v13[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v14 = v14;
                v14[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block17;
lbl98:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
        var2_22 = -58831678818083236L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        cW.UBtqj = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    private static String aad(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x400D;
        if (kXkmN[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])IaTZt.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IaTZt.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cW", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ScVGK[n2].getBytes("ISO-8859-1");
            cW.kXkmN[n2] = cW.aac(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return kXkmN[n2];
    }

    private static MatchException aab(MatchException matchException) {
        return matchException;
    }

    private static CallSite aai(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite aaf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ int aaa(class_243 class_2432, cW$sr cW$sr, cW$sr cW$sr2) {
        return Double.compare(class_2432.method_1025(cW$sr2.AqODg), class_2432.method_1025(cW$sr.AqODg));
    }

    private static int aah(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cW.aag(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static Object aae(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cW.aad(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String aac(byte[] byArray) {
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

    private static int aag(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x126F;
        if (MGxMm[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = TVPsE[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])vzSDy.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    vzSDy.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cW", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cW.MGxMm[n2] = n3;
        }
        return MGxMm[n2];
    }

    private List<cW$sq> ZZ(List<class_243> list) {
        ArrayList<cW$sq> arrayList;
        block12: {
            long l = TMUaI ^ 0x3FB1481EF28DL;
            float f = this.BAskS.VB();
            ArrayList<cW$sq> arrayList2 = new ArrayList<cW$sq>();
            Iterator<class_243> iterator = list.iterator();
            iS[] iSArray = dh.afl();
            block8: while (true) {
                int n = iterator.hasNext();
                block9: while (n != 0) {
                    cW$sq cW$sq;
                    class_243 class_2432;
                    block14: {
                        class_2432 = iterator.next();
                        cW$sq cW$sq2 = null;
                        double d = f * f;
                        arrayList = arrayList2;
                        if (iSArray != null) break block12;
                        for (cW$sq cW$sq3 : arrayList) {
                            block13: {
                                double d2;
                                double d3 = cW$sq3.dnH().method_1025(class_2432);
                                try {
                                    d2 = d3;
                                    if (iSArray != null) break block13;
                                    double d4 = d2 - d;
                                    n = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                                    if (iSArray != null) continue block9;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (n < 0) {
                                    cW$sq2 = cW$sq3;
                                    d2 = d = d3;
                                }
                            }
                            if (iSArray == null) continue;
                        }
                        try {
                            block15: {
                                try {
                                    try {
                                        cW$sq = cW$sq2;
                                        if (iSArray != null) break block14;
                                        if (cW$sq == null) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    cW$sq2.dnG(class_2432);
                                    if (iSArray == null) continue block8;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            cW$sq = new cW$sq();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    Iterator iterator2 = cW$sq;
                    ((cW$sq)((Object)iterator2)).dnG(class_2432);
                    arrayList2.add((cW$sq)((Object)iterator2));
                    if (iSArray == null) continue block8;
                }
                break;
            }
            arrayList = arrayList2;
        }
        return arrayList;
    }

    @hG
    public void ZU(gM gM2) {
        this.TjXAG.clear();
        this.hUpkY.clear();
        this.NkSiv.dhH();
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void ZV(gH.th var1_1) {
        block31: {
            block32: {
                var2_2 = cW.TMUaI ^ 88495612642709L;
                var4_3 = dh.afl();
                try {
                    try {
                        v0 = this.bab();
                        if (var4_3 != null) break block31;
                        if (v0 != 0) break block32;
                    }
                    catch (MatchException v1) {
                        throw cW.aab(v1);
                    }
                    this.TjXAG.clear();
                    this.hUpkY.clear();
                    this.NkSiv.dhH();
                    return;
                }
                catch (MatchException v2) {
                    throw cW.aab(v2);
                }
            }
            this.NkSiv.dhL(cW.UBtqj, this.inyHV.VC(), (Predicate<class_2680>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ZX(net.minecraft.class_2680 ), (Lnet/minecraft/class_2680;)Z)((cW)this), (Predicate<class_1297>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ZY(net.minecraft.class_1297 ), (Lnet/minecraft/class_1297;)Z)((cW)this));
            v0 = this.RjLgn.VC();
        }
        var5_4 = v0;
        var6_5 = this.BAskS.VB();
        var7_6 = this.NkSiv.dhG();
        var8_7 = this.ZZ(var7_6);
        var9_8 = new HashSet<Object>();
        var10_9 = var8_7.iterator();
        block26: while (true) lbl-1000:
        // 3 sources

        {
            v3 = var10_9.hasNext();
            block27: while (v3) {
                block36: {
                    block33: {
                        block34: {
                            var11_10 = var10_9.next();
                            try {
                                try {
                                    try {
                                        v4 = var11_10;
                                        if (var4_3 != null) break block33;
                                        v5 = v4.YJdti;
                                        if (var4_3 == null) {
                                        }
                                        ** GOTO lbl108
                                    }
                                    catch (MatchException v6) {
                                        throw cW.aab(v6);
                                    }
                                    if (v5 >= var5_4) break block34;
                                }
                                catch (MatchException v7) {
                                    throw cW.aab(v7);
                                }
                                if (var4_3 == null) ** GOTO lbl-1000
                            }
                            catch (MatchException v8) {
                                throw cW.aab(v8);
                            }
                        }
                        v4 = var11_10;
                    }
                    var12_11 = v4.dnH();
                    var13_12 = null;
                    var14_13 = var6_5 * var6_5;
                    for (cW$sr var17_15 : this.TjXAG) {
                        block35: {
                            v3 = var9_8.contains(var17_15);
                            if (var4_3 != null) continue block27;
                            try {
                                if (v3 && var4_3 == null) continue;
                            }
                            catch (MatchException v9) {
                                throw cW.aab(v9);
                            }
                            var18_16 = var17_15.AqODg.method_1025(var12_11);
                            try {
                                v10 = var18_16;
                                if (var4_3 != null || !(v10 < var14_13)) break block35;
                            }
                            catch (MatchException v11) {
                                throw cW.aab(v11);
                            }
                            var13_12 = var17_15;
                            v10 = var14_13 = var18_16;
                        }
                        if (var4_3 == null) continue;
                    }
                    try {
                        block37: {
                            try {
                                try {
                                    v12 = var13_12;
                                    if (var4_3 != null) break block36;
                                    if (v12 == null) break block37;
                                }
                                catch (MatchException v13) {
                                    throw cW.aab(v13);
                                }
                                var13_12.dnJ(var11_10.YJdti, var12_11);
                                var9_8.add(var13_12);
                                if (var4_3 == null) continue block26;
                            }
                            catch (MatchException v14) {
                                throw cW.aab(v14);
                            }
                        }
                        v12 = new cW$sr();
                    }
                    catch (MatchException v15) {
                        throw cW.aab(v15);
                    }
                }
                var16_14 = v12;
                var16_14.dnJ(var11_10.YJdti, var12_11);
                this.TjXAG.add((cW$sr)var16_14);
                var9_8.add(var16_14);
                if (var4_3 == null) continue block26;
            }
            break;
        }
        var10_9 = this.TjXAG.iterator();
        do {
            block38: {
                block39: {
                    v5 = var10_9.hasNext();
lbl108:
                    // 2 sources

                    if (v5 == 0) break;
                    var11_10 = (cW$sr)var10_9.next();
                    try {
                        try {
                            v16 = var9_8.contains(var11_10);
                            if (var4_3 != null) break block38;
                            if (v16) break block39;
                        }
                        catch (MatchException v17) {
                            throw cW.aab(v17);
                        }
                        var11_10.dnK();
                    }
                    catch (MatchException v18) {
                        throw cW.aab(v18);
                    }
                }
                v16 = var11_10.dnN();
            }
            try {
                if (!v16) continue;
                var10_9.remove();
            }
            catch (MatchException v19) {
                throw cW.aab(v19);
            }
        } while (var4_3 == null);
        var11_10 = rD.dlmvG.field_1724.method_73189();
        this.hUpkY.clear();
        this.hUpkY.addAll(this.TjXAG);
        this.hUpkY.sort((Comparator)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;Ljava/lang/Object;)I, aaa(net.minecraft.class_243 sixtwo.cW$sr sixtwo.cW$sr ), (Lsixtwo/cW$sr;Lsixtwo/cW$sr;)I)((class_243)var11_10));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean ZX(class_2680 class_26802) {
        boolean bl;
        iS[] iSArray;
        block55: {
            class_2248 class_22482;
            block53: {
                block51: {
                    block49: {
                        block47: {
                            class_2680 class_26803;
                            block45: {
                                block46: {
                                    block44: {
                                        long l = TMUaI ^ 0x41E332DF560EL;
                                        iSArray = dh.afl();
                                        try {
                                            class_26803 = class_26802;
                                            if (iSArray != null) break block44;
                                            if (class_26803 == null) return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        class_26803 = class_26802;
                                    }
                                    try {
                                        try {
                                            if (iSArray != null) break block45;
                                            if (!class_26803.method_26215()) break block46;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                }
                                class_26803 = class_26802;
                            }
                            class_22482 = class_26803.method_26204();
                            try {
                                block48: {
                                    try {
                                        try {
                                            try {
                                                bl = this.eomCv.TC();
                                                if (iSArray != null) break block47;
                                                if (!bl) break block48;
                                            }
                                            catch (MatchException matchException) {
                                                throw cW.aab(matchException);
                                            }
                                            bl = class_22482 instanceof class_2478;
                                            if (iSArray != null) return bl;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        if (bl) return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                }
                                bl = this.IcGgS.TC();
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        try {
                            block50: {
                                try {
                                    try {
                                        try {
                                            if (iSArray != null) break block49;
                                            if (!bl) break block50;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        bl = class_22482 instanceof class_2269;
                                        if (iSArray != null) return bl;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    if (bl) return true;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            bl = this.WtLkJ.TC();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    try {
                        block52: {
                            try {
                                try {
                                    try {
                                        if (iSArray != null) break block51;
                                        if (!bl) break block52;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    bl = class_22482 instanceof class_2401;
                                    if (iSArray != null) return bl;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (bl) return true;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        bl = this.YRSFN.TC();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                try {
                    block54: {
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block53;
                                    if (!bl) break block54;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                bl = class_22482 instanceof class_2185;
                                if (iSArray != null) return bl;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            if (bl) return true;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    bl = this.TkcsS.TC();
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
            }
            try {
                try {
                    if (iSArray != null) break block55;
                    if (!bl) return false;
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
                bl = class_22482 instanceof class_8168;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
        }
        try {
            if (iSArray != null) return bl;
            if (!bl) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw cW.aab(matchException);
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean ZY(class_1297 class_12972) {
        boolean bl;
        iS[] iSArray;
        block42: {
            block40: {
                block38: {
                    block36: {
                        class_1297 class_12973;
                        block35: {
                            long l = TMUaI ^ 0x54D49AD4FD62L;
                            iSArray = dh.afl();
                            try {
                                class_12973 = class_12972;
                                if (iSArray != null) break block35;
                                if (class_12973 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            class_12973 = class_12972;
                        }
                        try {
                            if (class_12973 == rD.dlmvG.field_1724) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                        try {
                            block37: {
                                try {
                                    try {
                                        try {
                                            bl = this.PEUjg.TC();
                                            if (iSArray != null) break block36;
                                            if (!bl) break block37;
                                        }
                                        catch (MatchException matchException) {
                                            throw cW.aab(matchException);
                                        }
                                        bl = class_12972 instanceof class_1530;
                                        if (iSArray != null) return bl;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    if (bl) return true;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                            }
                            bl = this.dVboG.TC();
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    try {
                        block39: {
                            try {
                                try {
                                    try {
                                        if (iSArray != null) break block38;
                                        if (!bl) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw cW.aab(matchException);
                                    }
                                    bl = class_12972 instanceof class_1531;
                                    if (iSArray != null) return bl;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                if (bl) return true;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                        }
                        bl = this.sZCWO.TC();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                try {
                    block41: {
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block40;
                                    if (!bl) break block41;
                                }
                                catch (MatchException matchException) {
                                    throw cW.aab(matchException);
                                }
                                bl = class_12972 instanceof class_1688;
                                if (iSArray != null) return bl;
                            }
                            catch (MatchException matchException) {
                                throw cW.aab(matchException);
                            }
                            if (bl) return true;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                    }
                    bl = this.XQhcG.TC();
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
            }
            try {
                try {
                    if (iSArray != null) break block42;
                    if (!bl) return false;
                }
                catch (MatchException matchException) {
                    throw cW.aab(matchException);
                }
                bl = class_12972 instanceof class_1540;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
        }
        try {
            if (iSArray != null) return bl;
            if (!bl) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw cW.aab(matchException);
        }
    }

    @hG
    public void ZW(gk gk2) {
        iS[] iSArray;
        long l;
        block13: {
            block12: {
                boolean bl;
                block11: {
                    l = TMUaI ^ 0x3BCB07DD5B49L;
                    iSArray = dh.afl();
                    try {
                        try {
                            bl = this.bab();
                            if (iSArray != null) break block11;
                            if (!bl) break block12;
                        }
                        catch (MatchException matchException) {
                            throw cW.aab(matchException);
                        }
                        bl = this.hUpkY.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw cW.aab(matchException);
                    }
                }
                if (!bl) break block13;
            }
            return;
        }
        lC lC2 = gk2.baT();
        ii ii2 = rD.dlM();
        class_243 class_2432 = rD.dlmvG.field_1724.method_73189();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        lq lq3 = lE.WTzbi.bYM(6.0f);
        lq lq4 = lE.WTzbi.bYM(5.0f);
        for (cW$sr cW$sr : this.hUpkY) {
            float f = cW$sr.dnM();
            try {
                if (f == 0.0f && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
            class_241 class_2412 = jI.bIw(cW$sr.dnL());
            try {
                if (class_2412 == null && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw cW.aab(matchException);
            }
            class_243 class_2433 = cW$sr.AqODg;
            double d = class_2432.method_1022(class_2433);
            CallSite callSite = cW.aaf("y", (int)18913, (long)(0x7848761EDB4417E5L ^ l));
            String string = Math.round(d) + "m";
            float f2 = 5.0f;
            float f3 = 4.0f;
            float f4 = 70.0f + f2 * 2.0f;
            float f5 = 40.0f;
            float f6 = class_2412.field_1343 - f4 / 2.0f;
            float f7 = class_2412.field_1342;
            float f8 = f6 + f4 / 2.0f;
            float f9 = f7 + f5 / 2.0f;
            jH.bId(lC2, f8, f9, 0.5f + 0.5f * f);
            lC2.ccW(f6, f7, f4, f5, f, 0.0f, ld.all(4.0f), 5.0f);
            mG mG2 = ii2.bjb().coa(255.0f * f);
            mG mG3 = ii2.bjb().cob(0.5f);
            mG mG4 = ii2.bjf().coa(220.0f * f);
            mG mG5 = ii2.bje().coa((255.0f - 100.0f * fX.aYh()) * 0.7f).cob(f);
            float f10 = f6 + f2;
            float f11 = f7 + f3;
            lC2.cez(lq2, (String)((Object)callSite), f10, f11, mG2);
            lC2.ceP(lq3, string, f6 + f4 - f2, f11, mG3);
            float f12 = f6 + f2;
            float f13 = f11 + 18.0f;
            float f14 = f13 - 7.0f;
            lC2.cez(lq4, (String)((Object)cW.aaf("y", (int)29610, (long)(0x4BDD7543488E2DADL ^ l))), f10, f14, mG3);
            float f15 = f4 - 2.0f * f2;
            float f16 = 2.5f;
            float f17 = f12 + f15;
            float f18 = f13 - 7.5f;
            lC2.ceP(lq3, String.valueOf(cW$sr.hRZdA), f17, f18, mG2);
            lC2.cdg(f12, f13, f15, f16, ld.all(0.25f), mG5);
            float f19 = f15 * Math.min(jf.bAI(cW$sr.hRZdA, 0.0f, (float)this.RjLgn.VG()), 1.0f);
            lC2.cdg(f12, f13, f19, f16, ld.all(0.25f), mG4);
            float f20 = f13 + f16 + 5.0f;
            float f21 = 6.0f;
            lC2.cem(lf.GHxLj, f10, f20, f21, mG3);
            float f22 = f10 + f21 + 3.0f;
            float f23 = f20 + jf.bAH(lq3.cat(), f21);
            String string2 = Math.round(rD.dlmvG.field_1724.method_23317()) + " " + Math.round(rD.dlmvG.field_1724.method_23318()) + " " + Math.round(rD.dlmvG.field_1724.method_23321());
            lC2.cez(lq3, string2, f22, f23, mG3);
            jH.bIf();
            if (iSArray == null) continue;
        }
    }

    @Override
    public void YO() {
        super.YO();
        this.TjXAG.clear();
        this.hUpkY.clear();
        this.NkSiv.dhH();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cW.class, "aah", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(cW.class, "aae", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
