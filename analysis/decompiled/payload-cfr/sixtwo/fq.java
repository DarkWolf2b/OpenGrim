/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1657
 *  net.minecraft.class_1802
 *  net.minecraft.class_238
 *  net.minecraft.class_239$class_240
 *  net.minecraft.class_243
 *  net.minecraft.class_3965
 *  net.minecraft.class_3966
 *  net.minecraft.class_4048
 *  net.minecraft.class_4050
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
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_1802;
import net.minecraft.class_238;
import net.minecraft.class_239;
import net.minecraft.class_243;
import net.minecraft.class_3965;
import net.minecraft.class_3966;
import net.minecraft.class_4048;
import net.minecraft.class_4050;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cz;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gZ;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.jg;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.ou;
import sixtwo.ov;
import sixtwo.ox;
import sixtwo.rD;

public class fq
extends gg {
    private final ct meQED;
    private final cu ufdaw;
    private final cu zpLUV;
    private final cC zGQMR;
    private final cC TrhFC;
    private final cJ sHsoL;
    private final cJ QSPxG;
    private final cJ bLnpl;
    private final cz aucRP;
    private final cJ mEZCb;
    private final cJ ZCQrO;
    private final cC xkXFw;
    private final cJ fylmP;
    private float vzqAe;
    private float ZLJlY;
    private class_1297 NZTfz;
    private final mT obThK;
    private static final long JcqZx;
    private static final String[] cCFLo;
    private static final String[] DrcSw;
    private static final Map dEDLA;
    private static final long[] RNFBd;
    private static final Integer[] yYxeH;
    private static final Map Hkgvx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fq() {
        long l = JcqZx ^ 0x242540AFEB88L;
        super(gf.aZL(4, false, gh.xwjCw));
        this.meQED = new ct(this, mr.clS(new int[]{(int)fq.aNq("u", (int)16576, (long)(0x64E322EFC884C683L ^ l)), (int)fq.aNq("u", (int)7674, (long)(0x6332F3603A4D1BA7L ^ l)), (int)fq.aNq("u", (int)19675, (long)(0x20B1BBBA3644AAAL ^ l)), (int)fq.aNq("u", (int)17741, (long)(0x48448F4096834303L ^ l))}));
        int[] nArray = new int[fq.aNq("u", (int)14521, (long)(0x67CC0542C485BED9L ^ l))];
        nArray[0] = (int)fq.aNq("u", (int)15485, (long)(0x5C42A54991C23A34L ^ l));
        nArray[1] = (int)fq.aNq("u", (int)20825, (long)(0x64CEE8CADBED72EL ^ l));
        nArray[2] = (int)fq.aNq("u", (int)18752, (long)(0x16D22EDA20DA4F05L ^ l));
        nArray[3] = (int)fq.aNq("u", (int)18702, (long)(0x42E61ACB42BDCF38L ^ l));
        nArray[4] = (int)fq.aNq("u", (int)17596, (long)(0x2ABA5EA85BE4C2FDL ^ l));
        nArray[5] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray[fq.aNq("u", (int)3485, (long)(0x7F427F4F650A0BE5L ^ l))] = (int)fq.aNq("u", (int)661, (long)(0xD66BF11D55A84DEL ^ l));
        this.ufdaw = new cu(this.meQED, mr.clS(nArray)).SY();
        int[] nArray2 = new int[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))];
        nArray2[0] = (int)fq.aNq("u", (int)18722, (long)(0x758022B680744F46L ^ l));
        nArray2[1] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray2[2] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray2[3] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray2[4] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray2[5] = (int)fq.aNq("u", (int)21486, (long)(0x66B6851F87D3D584L ^ l));
        this.zpLUV = new cu(this.meQED, mr.clS(nArray2));
        this.zGQMR = new cC(this, mr.clS(new int[]{(int)fq.aNq("u", (int)21890, (long)(0x7F6CF689AC1853C8L ^ l)), (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l)), (int)fq.aNq("u", (int)381, (long)(0x3309AFF511A08706L ^ l)), (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l)), (int)fq.aNq("u", (int)9999, (long)(0x7DC3BF0D7439214BL ^ l))})).Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz((String)((Object)fq.aNn("n", (int)30950, (long)(0x188DDEF84D6473EEL ^ l))));
        int[] nArray3 = new int[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))];
        nArray3[0] = (int)fq.aNq("u", (int)23237, (long)(0x5610BB3927525CAAL ^ l));
        nArray3[1] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray3[2] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray3[3] = (int)fq.aNq("u", (int)4212, (long)(0x26B7EDF8685A962AL ^ l));
        nArray3[4] = (int)fq.aNq("u", (int)663, (long)(0x3FEADD114AD504DFL ^ l));
        nArray3[5] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        this.TrhFC = new cC(this, mr.clS(nArray3)).Vy(0.01).Vw(0.0).Vx(2.0).VA(0.0).Vz((String)((Object)fq.aNn("n", (int)11733, (long)(0x4EA9AD4CA5126DCL ^ l))));
        int[] nArray4 = new int[fq.aNq("u", (int)7353, (long)(0xEBC5F9123301ADBL ^ l))];
        nArray4[0] = (int)fq.aNq("u", (int)13927, (long)(0x3306C17163B9B05CL ^ l));
        nArray4[1] = (int)fq.aNq("u", (int)31486, (long)(0x51605D898A087CADL ^ l));
        nArray4[2] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray4[3] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray4[4] = (int)fq.aNq("u", (int)3826, (long)(0x594901B0472F88AAL ^ l));
        nArray4[5] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray4[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)30446, (long)(0x62D76914CF9E7094L ^ l));
        nArray4[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)25652, (long)(0x1B3C5991EBB8624AL ^ l));
        nArray4[fq.aNq("u", (int)11594, (long)(0x491C8C1A0842B1AL ^ l))] = (int)fq.aNq("u", (int)20425, (long)(0x2AC99D3502A499DL ^ l));
        nArray4[fq.aNq("u", (int)17598, (long)(0x439E6A59003B42CBL ^ l))] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray4[fq.aNq("u", (int)28558, (long)(0x1C89EE71A1F369F3L ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray4[fq.aNq("u", (int)2587, (long)(0x4E84609453488C47L ^ l))] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray4[fq.aNq("u", (int)27090, (long)(0x59D79504363CEFEFL ^ l))] = (int)fq.aNq("u", (int)381, (long)(0x3309AFF511A08706L ^ l));
        nArray4[fq.aNq("u", (int)9260, (long)(0x4BAB340D6DB3A210L ^ l))] = (int)fq.aNq("u", (int)10532, (long)(0x29268906DAD72F15L ^ l));
        this.sHsoL = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[fq.aNq("u", (int)14861, (long)(0x3D1CD3957601BC39L ^ l))];
        nArray5[0] = (int)fq.aNq("u", (int)22637, (long)(0x5809D4AC4E6C5E14L ^ l));
        nArray5[1] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray5[2] = (int)fq.aNq("u", (int)8448, (long)(0x4121203CE485277CL ^ l));
        nArray5[3] = (int)fq.aNq("u", (int)661, (long)(0xD66BF11D55A84DEL ^ l));
        nArray5[4] = (int)fq.aNq("u", (int)25900, (long)(0x7E20CDD47A026379L ^ l));
        nArray5[5] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray5[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray5[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray5[fq.aNq("u", (int)22339, (long)(0x664DF12186D517BL ^ l))] = (int)fq.aNq("u", (int)24317, (long)(0x29280ACDAB7AD8A4L ^ l));
        nArray5[fq.aNq("u", (int)13173, (long)(0x720F1CFF35EAB51CL ^ l))] = (int)fq.aNq("u", (int)27481, (long)(0x1A1EB064200AED34L ^ l));
        nArray5[fq.aNq("u", (int)2350, (long)(0x393D6E232E810F14L ^ l))] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray5[fq.aNq("u", (int)4738, (long)(0x478E2AB33E1514D5L ^ l))] = (int)fq.aNq("u", (int)6931, (long)(0x72C7818DB7E71D65L ^ l));
        nArray5[fq.aNq("u", (int)14171, (long)(0x7C38372F4C06B165L ^ l))] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray5[fq.aNq("u", (int)27294, (long)(0x23342DE942DA6CD9L ^ l))] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray5[fq.aNq("u", (int)7169, (long)(0x51A41B78A9391A64L ^ l))] = (int)fq.aNq("u", (int)381, (long)(0x3309AFF511A08706L ^ l));
        nArray5[fq.aNq("u", (int)757, (long)(0x68E0393B7E2C04A3L ^ l))] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray5[fq.aNq("u", (int)21249, (long)(0x756DDD3049ADD543L ^ l))] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray5[fq.aNq("u", (int)1817, (long)(0x7320A2251E1F8155L ^ l))] = (int)fq.aNq("u", (int)31486, (long)(0x51605D898A087CADL ^ l));
        nArray5[fq.aNq("u", (int)2007, (long)(0x58EA1E72D69701B1L ^ l))] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray5[fq.aNq("u", (int)16354, (long)(0x1D16F2224CB39C4L ^ l))] = (int)fq.aNq("u", (int)20403, (long)(0x2667859A07FBC9FCL ^ l));
        nArray5[fq.aNq("u", (int)14235, (long)(0x4F950C62F8B31C1L ^ l))] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray5[fq.aNq("u", (int)26688, (long)(0xAB11C1ED67AEE06L ^ l))] = (int)fq.aNq("u", (int)6178, (long)(0x4BB6EEBADEEF1E4AL ^ l));
        nArray5[fq.aNq("u", (int)24376, (long)(0x9B963F32724594BL ^ l))] = (int)fq.aNq("u", (int)18244, (long)(0x53E93FF0FBFA4134L ^ l));
        nArray5[fq.aNq("u", (int)28141, (long)(0x3347B02E5F44EBCAL ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray5[fq.aNq("u", (int)29740, (long)(0x4A769C6D5D51F24FL ^ l))] = (int)fq.aNq("u", (int)6178, (long)(0x4BB6EEBADEEF1E4AL ^ l));
        this.QSPxG = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[fq.aNq("u", (int)7169, (long)(0x51A41B78A9391A64L ^ l))];
        nArray6[0] = (int)fq.aNq("u", (int)9872, (long)(0x313ABC435F1EA0FBL ^ l));
        nArray6[1] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray6[2] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray6[3] = (int)fq.aNq("u", (int)20681, (long)(0x681957EE760D684L ^ l));
        nArray6[4] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray6[5] = (int)fq.aNq("u", (int)21544, (long)(0x56EC030D9C4DD249L ^ l));
        nArray6[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray6[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)20425, (long)(0x2AC99D3502A499DL ^ l));
        nArray6[fq.aNq("u", (int)22339, (long)(0x664DF12186D517BL ^ l))] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray6[fq.aNq("u", (int)13173, (long)(0x720F1CFF35EAB51CL ^ l))] = (int)fq.aNq("u", (int)29147, (long)(0x7E9717CE74FF77EEL ^ l));
        nArray6[fq.aNq("u", (int)2350, (long)(0x393D6E232E810F14L ^ l))] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray6[fq.aNq("u", (int)4738, (long)(0x478E2AB33E1514D5L ^ l))] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray6[fq.aNq("u", (int)14171, (long)(0x7C38372F4C06B165L ^ l))] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        nArray6[fq.aNq("u", (int)27294, (long)(0x23342DE942DA6CD9L ^ l))] = (int)fq.aNq("u", (int)8448, (long)(0x4121203CE485277CL ^ l));
        this.bLnpl = new cJ(this, mr.clS(nArray6)).WE(false);
        this.aucRP = new cz(this, mr.clS(new int[]{(int)fq.aNq("u", (int)29147, (long)(0x7E9717CE74FF77EEL ^ l)), (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l)), (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l)), (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l)), (int)fq.aNq("u", (int)8448, (long)(0x4121203CE485277CL ^ l))}));
        int[] nArray7 = new int[fq.aNq("u", (int)13173, (long)(0x720F1CFF35EAB51CL ^ l))];
        nArray7[0] = (int)fq.aNq("u", (int)24317, (long)(0x29280ACDAB7AD8A4L ^ l));
        nArray7[1] = (int)fq.aNq("u", (int)31255, (long)(0x7C59105D04617C2EL ^ l));
        nArray7[2] = (int)fq.aNq("u", (int)3169, (long)(0x4369D7E69A5B0A3AL ^ l));
        nArray7[3] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray7[4] = (int)fq.aNq("u", (int)8448, (long)(0x4121203CE485277CL ^ l));
        nArray7[5] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray7[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)6178, (long)(0x4BB6EEBADEEF1E4AL ^ l));
        nArray7[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray7[fq.aNq("u", (int)22339, (long)(0x664DF12186D517BL ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        this.mEZCb = new cJ(this, mr.clS(nArray7)).WE(false);
        int[] nArray8 = new int[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))];
        nArray8[0] = (int)fq.aNq("u", (int)10605, (long)(0x2BFFD5C5FC592F2DL ^ l));
        nArray8[1] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray8[2] = (int)fq.aNq("u", (int)8448, (long)(0x4121203CE485277CL ^ l));
        nArray8[3] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray8[4] = (int)fq.aNq("u", (int)6178, (long)(0x4BB6EEBADEEF1E4AL ^ l));
        nArray8[5] = (int)fq.aNq("u", (int)25069, (long)(0x7DA0BAB9EC4267B2L ^ l));
        nArray8[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        this.ZCQrO = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[fq.aNq("u", (int)27294, (long)(0x23342DE942DA6CD9L ^ l))];
        nArray9[0] = (int)fq.aNq("u", (int)27041, (long)(0x563ED865B183EFCDL ^ l));
        nArray9[1] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray9[2] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        nArray9[3] = (int)fq.aNq("u", (int)20425, (long)(0x2AC99D3502A499DL ^ l));
        nArray9[4] = (int)fq.aNq("u", (int)595, (long)(0x6692377E7B6C8460L ^ l));
        nArray9[5] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray9[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)29146, (long)(0x29BA7A0493B477E8L ^ l));
        nArray9[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray9[fq.aNq("u", (int)22339, (long)(0x664DF12186D517BL ^ l))] = (int)fq.aNq("u", (int)23525, (long)(0x2107775281C1DD91L ^ l));
        nArray9[fq.aNq("u", (int)13173, (long)(0x720F1CFF35EAB51CL ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray9[fq.aNq("u", (int)2350, (long)(0x393D6E232E810F14L ^ l))] = (int)fq.aNq("u", (int)20697, (long)(0x210575F9CB29D6E6L ^ l));
        nArray9[fq.aNq("u", (int)4738, (long)(0x478E2AB33E1514D5L ^ l))] = (int)fq.aNq("u", (int)20785, (long)(0x5D48F332E5DA5743L ^ l));
        nArray9[fq.aNq("u", (int)14171, (long)(0x7C38372F4C06B165L ^ l))] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        this.xkXFw = new cC(this, mr.clS(nArray9)).Vy(10.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz((String)((Object)fq.aNn("n", (int)13522, (long)(0x48D139429D13FD9L ^ l))));
        int[] nArray10 = new int[fq.aNq("u", (int)27294, (long)(0x23342DE942DA6CD9L ^ l))];
        nArray10[0] = (int)fq.aNq("u", (int)29147, (long)(0x7E9717CE74FF77EEL ^ l));
        nArray10[1] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        nArray10[2] = (int)fq.aNq("u", (int)661, (long)(0xD66BF11D55A84DEL ^ l));
        nArray10[3] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        nArray10[4] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray10[5] = (int)fq.aNq("u", (int)32167, (long)(0x13F789693A097BD8L ^ l));
        nArray10[fq.aNq("u", (int)11466, (long)(0x1D1C7386E8B8AAA4L ^ l))] = (int)fq.aNq("u", (int)5706, (long)(0x6965CFEC5AF5901BL ^ l));
        nArray10[fq.aNq("u", (int)27878, (long)(0x20ED44A00F09EAD1L ^ l))] = (int)fq.aNq("u", (int)6931, (long)(0x72C7818DB7E71D65L ^ l));
        nArray10[fq.aNq("u", (int)22339, (long)(0x664DF12186D517BL ^ l))] = (int)fq.aNq("u", (int)10627, (long)(0x1C71F70BA5152FE4L ^ l));
        nArray10[fq.aNq("u", (int)13173, (long)(0x720F1CFF35EAB51CL ^ l))] = (int)fq.aNq("u", (int)19152, (long)(0x352493DBA928CC82L ^ l));
        nArray10[fq.aNq("u", (int)2350, (long)(0x393D6E232E810F14L ^ l))] = (int)fq.aNq("u", (int)31486, (long)(0x51605D898A087CADL ^ l));
        nArray10[fq.aNq("u", (int)4738, (long)(0x478E2AB33E1514D5L ^ l))] = (int)fq.aNq("u", (int)663, (long)(0x3FEADD114AD504DFL ^ l));
        nArray10[fq.aNq("u", (int)14171, (long)(0x7C38372F4C06B165L ^ l))] = (int)fq.aNq("u", (int)20625, (long)(0x4010294C64EB56A1L ^ l));
        this.fylmP = new cJ(this, mr.clS(nArray10)).WE(false);
        this.obThK = mT.cpA();
        this.vzqAe = this.zGQMR.VB();
        this.ZLJlY = this.TrhFC.VB();
        this.zGQMR.Vd(() -> {
            this.vzqAe = this.zGQMR.VB();
        });
        this.TrhFC.Vd(() -> {
            this.ZLJlY = this.TrhFC.VB();
        });
        this.aucRP.Vf(this.bLnpl::WF);
        this.mEZCb.Vf(this.ufdaw::SZ);
        this.ZCQrO.Vf(this.zpLUV::SZ);
        this.xkXFw.Vf(this.zpLUV::SZ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    fq.JcqZx = gb.aYR(6722144264915263589L, 8485176403376834707L, MethodHandles.lookup().lookupClass()).a(101350568889068L);
                    fq.dEDLA = new HashMap<K, V>(13);
                    var11 = fq.JcqZx ^ 34595790893839L;
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
                    var17_5 = "\u00e4xl*\u0016\u00f8o\u00e9\u001f\u00ab\u00ce\u00f8\u00bc\u00c5]\u00da\u0010V\u00e9.\u00e8\u00beo\u00cdp\u00f0\u00ba\u00a4\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000\u00a9\u00c1\u0002\u0088@\u0096\u009aE\u00b8";
                    var19_6 = "\u00e4xl*\u0016\u00f8o\u00e9\u001f\u00ab\u00ce\u00f8\u00bc\u00c5]\u00da\u0010V\u00e9.\u00e8\u00beo\u00cdp\u00f0\u00ba\u00a4\u000f'_r\u008a\u0010\rF[U\u000b\u000b\u0000\u00a9\u00c1\u0002\u0088@\u0096\u009aE\u00b8".length();
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
                        var20_3[var18_4++] = fq.aNk(var21_9).intern();
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
                fq.cCFLo = var20_3;
                fq.DrcSw = new String[3];
                fq.Hkgvx = new HashMap<K, V>(13);
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
                var4_14 = "\u00cc\u00ea\"dZ\u00dd\u00bfk\u00a4\u0083)Rcv6\u0098\u00e4\u0085\u00f3I\u0094\u0017\u0004u7\u0018<\u00f9\u0091\u00f4v\u00a1\u000b\u008d\u007f\u00e8l\u008eB\u00c7, \u008c\u00f3y\u00b2F\u00f6\u00c2w^\u0087B\u00fd\u0017k\u0082\u0010.\u008ccO\u00e8N\u00ee\u0005\u0017\u000e0\u00fa8M_\u00c3\u00fa\u00d6\u00b9\u00cd=4\u00b9!\u0015\u00f5\u0086\u00b8\u00ad\u0088\u009e:A\u0006)5\\f\u001d\u00fcm{6uFV\u001bq\u0012?\u0015ufq\u00cc\u00e5\u00e5\u00a5u\u008e\u0001p^\u00edU\u00d8@\u009a\u00af\u00f8p\u0002rn\u00d5\u00a9\u00f6\u00a9\u00c4\u008c\u0091\u00c0\u00cf\u00983\u00c3\u0085\u00f1\u00d1\u00ca\u00d2/\u00f3V!#\u00c9\u00a1\u0003>s\u00e9\u008cI\u00fa\u00ba*\u00a3*\u0017\u0089\u00ce\u00e4\u00a7Al6\u00b1\u007f\u00e1\u000eh\u0013\u00b6\u0010h\u00e1\u00c6`\u0085\u00c5\b\u0012u\u00b6E'\u000eI\u00b4@f\"\u0096\u00c8\u00ec\u00e6\u00daU#\u0094r\u00ef\u0005s\u00c86A\u00e7\u00af\u0091\u00f2\u00c6w\u00dc\u001bW\u00fa\u00a1\u009b\u0085\u00e1\u0007\u0097oZ\u00a1w>\u008a\u0013\u0095\u00b1W0\u00f4\u00f7\u0094\u00af\u00d7\u00ba\u00ae\u00a6\u00f1\u00cc\r^\u00f6)\u009e\u009c\u00e6\u0011\u00f7\u00a1\u00c48\u00d7\t\u00c6\u0088\u0085$c\u00aa\u00c4\u00e4\u00fc\u00c9\u008bSZ\u001b%\u0016\u00d6\u001dh\u00b5\u00bf#.5&\u00f1,\u00ee\nR:\u008f,4\t\u00f5\u00c8/\u00fb\u001f\u008a\u007f\u0086\u008e\u009fHL\u00c45\u009a\u00afd=\u00c9\u0090FQ\u00c9yMv\u0001\u001b\u00c4\u00dd\u00e5\u00dcx\u00a6\u0010\u00b3*^[=\u0015\u0014\u00b4\u00e6C\b=\u0090\u00e6B\u001e\u0004\u00ea;\u008c&4\u00e3\u00ce\u00ac\u00e2\u00a4\u000b\u00bd\u00fa\u0088\u0085\u00cabE\u00d5\u00ae4\u00a8=\u0005\u00f9gL\u00fb\u0015$\u00cb\u0087rS\u0017\u00dd\u00a3\u0015\u00c6\u008f\u0007\u00dd^zE\rJ\u00f3v\u0002E\u00b1\u00cb\u00a5\u00a6\u0087\u001e1\u0090\u007f\u009c>\f\u0011\u00b4\u00a5\u009c\u0097#<\u00cd\u009cYn\u00e0\u00cf\u008fDW\u00fa\u009a(\u00f2\u00cfE\u0018\u00cc'\u00e4\u0001l\u0089?v\u00b4ux\u0093\u0094\u0091\u00b26\u0088e\u0004p\u00df\u009c\u00c3\u001a\u00b1\u00cd\u009e\u008f\u00a6\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812\u00b2J\u008b\u00cdz\u00b0\u00af\u00a6p1)\u00adC\u00b5\u0006\u00cd\u000e\u00f5BmO\u0011\u00b61\u00af\u009e-f\u0081 \u00bb\u001d\u00fd\u00ab;O\u0084\u0086@BZ-&\u008e\u00a8:\u0089\u00b2+\"\\\u0085@\u00cc\u008e\u00c2\u00bb\u00fd\u00eb6m\u0095\u00d0kQ\u00c5\u00de\u0080\u00d4\u00a8\u0094\u00e3f\u00a8L\"\u00ca+\u00be\u00ea\u00fc\u00d5\u00ca\u008d\u0012\u00d78\u009a\u00c5\u00b7\u009bqW3\u00c0\u00fd\t1M\u0094\u0083\u00ff\u008f\u00e5\rCa\u00d1\u0084@\u00e6\u0014\u00b7H\u0011\u00f5U\u00e1\u00dc\u008d\u00b4\u000b\u0084\u0080\u00d3\u00f3b?i\u008c\u001b\u0015\u00f1\u00b3\u0085\u00a2\u0092\u00b5\u00a0\u001ftx\u0016\u001f\u00ce\u0086f\u0083\u0096\u00d3\u00e9\u00fb\u00e2by6j\"";
                var5_15 = "\u00cc\u00ea\"dZ\u00dd\u00bfk\u00a4\u0083)Rcv6\u0098\u00e4\u0085\u00f3I\u0094\u0017\u0004u7\u0018<\u00f9\u0091\u00f4v\u00a1\u000b\u008d\u007f\u00e8l\u008eB\u00c7, \u008c\u00f3y\u00b2F\u00f6\u00c2w^\u0087B\u00fd\u0017k\u0082\u0010.\u008ccO\u00e8N\u00ee\u0005\u0017\u000e0\u00fa8M_\u00c3\u00fa\u00d6\u00b9\u00cd=4\u00b9!\u0015\u00f5\u0086\u00b8\u00ad\u0088\u009e:A\u0006)5\\f\u001d\u00fcm{6uFV\u001bq\u0012?\u0015ufq\u00cc\u00e5\u00e5\u00a5u\u008e\u0001p^\u00edU\u00d8@\u009a\u00af\u00f8p\u0002rn\u00d5\u00a9\u00f6\u00a9\u00c4\u008c\u0091\u00c0\u00cf\u00983\u00c3\u0085\u00f1\u00d1\u00ca\u00d2/\u00f3V!#\u00c9\u00a1\u0003>s\u00e9\u008cI\u00fa\u00ba*\u00a3*\u0017\u0089\u00ce\u00e4\u00a7Al6\u00b1\u007f\u00e1\u000eh\u0013\u00b6\u0010h\u00e1\u00c6`\u0085\u00c5\b\u0012u\u00b6E'\u000eI\u00b4@f\"\u0096\u00c8\u00ec\u00e6\u00daU#\u0094r\u00ef\u0005s\u00c86A\u00e7\u00af\u0091\u00f2\u00c6w\u00dc\u001bW\u00fa\u00a1\u009b\u0085\u00e1\u0007\u0097oZ\u00a1w>\u008a\u0013\u0095\u00b1W0\u00f4\u00f7\u0094\u00af\u00d7\u00ba\u00ae\u00a6\u00f1\u00cc\r^\u00f6)\u009e\u009c\u00e6\u0011\u00f7\u00a1\u00c48\u00d7\t\u00c6\u0088\u0085$c\u00aa\u00c4\u00e4\u00fc\u00c9\u008bSZ\u001b%\u0016\u00d6\u001dh\u00b5\u00bf#.5&\u00f1,\u00ee\nR:\u008f,4\t\u00f5\u00c8/\u00fb\u001f\u008a\u007f\u0086\u008e\u009fHL\u00c45\u009a\u00afd=\u00c9\u0090FQ\u00c9yMv\u0001\u001b\u00c4\u00dd\u00e5\u00dcx\u00a6\u0010\u00b3*^[=\u0015\u0014\u00b4\u00e6C\b=\u0090\u00e6B\u001e\u0004\u00ea;\u008c&4\u00e3\u00ce\u00ac\u00e2\u00a4\u000b\u00bd\u00fa\u0088\u0085\u00cabE\u00d5\u00ae4\u00a8=\u0005\u00f9gL\u00fb\u0015$\u00cb\u0087rS\u0017\u00dd\u00a3\u0015\u00c6\u008f\u0007\u00dd^zE\rJ\u00f3v\u0002E\u00b1\u00cb\u00a5\u00a6\u0087\u001e1\u0090\u007f\u009c>\f\u0011\u00b4\u00a5\u009c\u0097#<\u00cd\u009cYn\u00e0\u00cf\u008fDW\u00fa\u009a(\u00f2\u00cfE\u0018\u00cc'\u00e4\u0001l\u0089?v\u00b4ux\u0093\u0094\u0091\u00b26\u0088e\u0004p\u00df\u009c\u00c3\u001a\u00b1\u00cd\u009e\u008f\u00a6\u0005\u0081\u009dO\u000fX'\u008b^k\u0087\u00812\u00b2J\u008b\u00cdz\u00b0\u00af\u00a6p1)\u00adC\u00b5\u0006\u00cd\u000e\u00f5BmO\u0011\u00b61\u00af\u009e-f\u0081 \u00bb\u001d\u00fd\u00ab;O\u0084\u0086@BZ-&\u008e\u00a8:\u0089\u00b2+\"\\\u0085@\u00cc\u008e\u00c2\u00bb\u00fd\u00eb6m\u0095\u00d0kQ\u00c5\u00de\u0080\u00d4\u00a8\u0094\u00e3f\u00a8L\"\u00ca+\u00be\u00ea\u00fc\u00d5\u00ca\u008d\u0012\u00d78\u009a\u00c5\u00b7\u009bqW3\u00c0\u00fd\t1M\u0094\u0083\u00ff\u008f\u00e5\rCa\u00d1\u0084@\u00e6\u0014\u00b7H\u0011\u00f5U\u00e1\u00dc\u008d\u00b4\u000b\u0084\u0080\u00d3\u00f3b?i\u008c\u001b\u0015\u00f1\u00b3\u0085\u00a2\u0092\u00b5\u00a0\u001ftx\u0016\u001f\u00ce\u0086f\u0083\u0096\u00d3\u00e9\u00fb\u00e2by6j\"".length();
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
                    var4_14 = "'\u0097\u00e6{\u00d3>I\u00b6\u00c1\u008f\u0087\u001d\u00a7\u00f6;6";
                    var5_15 = "'\u0097\u00e6{\u00d3>I\u00b6\u00c1\u008f\u0087\u001d\u00a7\u00f6;6".length();
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
        fq.RNFBd = var6_12;
        fq.yYxeH = new Integer[82];
    }

    private static int aNo(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6CC4;
        if (yYxeH[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = RNFBd[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Hkgvx.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Hkgvx.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fq", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fq.yYxeH[n2] = n3;
        }
        return yYxeH[n2];
    }

    public cJ aMZ() {
        return this.ZCQrO;
    }

    public cJ aMU() {
        return this.sHsoL;
    }

    public cJ aMY() {
        return this.mEZCb;
    }

    public class_1297 aNe() {
        return this.NZTfz;
    }

    public cJ aMW() {
        return this.bLnpl;
    }

    private static int aNp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = fq.aNo(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public float aNc() {
        return this.vzqAe;
    }

    private static String aNk(byte[] byArray) {
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

    public cJ aMV() {
        return this.QSPxG;
    }

    private static Object aNm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = fq.aNl(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cz aMX() {
        return this.aucRP;
    }

    public cC aNa() {
        return this.xkXFw;
    }

    private static String aNl(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x61BB;
        if (DrcSw[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])dEDLA.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dEDLA.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fq", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = cCFLo[n2].getBytes("ISO-8859-1");
            fq.DrcSw[n2] = fq.aNk(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DrcSw[n2];
    }

    public float aNd() {
        return this.ZLJlY;
    }

    public mT aNf() {
        return this.obThK;
    }

    public cJ aNb() {
        return this.fylmP;
    }

    private void aMN() {
        this.NZTfz = null;
    }

    @hG
    public void aMD(gZ.tt tt2) {
        class_1297 class_12972;
        block25: {
            fq fq2;
            class_1297 class_12973;
            block26: {
                class_3966 class_39662;
                int[] nArray;
                block23: {
                    class_3966 class_39663;
                    block24: {
                        fq fq3;
                        block22: {
                            boolean bl;
                            block20: {
                                block21: {
                                    block19: {
                                        block18: {
                                            long l = JcqZx ^ 0x708B898EB57EL;
                                            nArray = fg.aIW();
                                            try {
                                                try {
                                                    bl = this.bab();
                                                    if (nArray != null) break block18;
                                                    if (!bl) break block19;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fq.aNj(matchException);
                                                }
                                                bl = this.zpLUV.SZ();
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                        }
                                        try {
                                            if (nArray != null) break block20;
                                            if (bl) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw fq.aNj(matchException);
                                        }
                                    }
                                    return;
                                }
                                try {
                                    fq3 = this;
                                    if (nArray != null) break block22;
                                    fq3.aMN();
                                    bl = rD.dlmvG.field_1765 instanceof class_3966;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            if (bl) {
                                return;
                            }
                            fq3 = this;
                        }
                        class_39663 = fq3.aMI();
                        try {
                            class_39662 = class_39663;
                            if (nArray != null) break block23;
                            if (class_39662 != null) break block24;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        return;
                    }
                    class_39662 = class_39663;
                }
                class_12973 = class_39662.method_17782();
                class_243 class_2432 = this.aMO(class_12973);
                try {
                    if (class_2432 == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                try {
                    try {
                        fq2 = this;
                        class_12972 = class_12973;
                        if (nArray != null) break block25;
                        if (fq2.aMJ(class_12972, rD.dlX().dbC()) == null) break block26;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
            class_12972 = class_12973;
        }
        fq2.NZTfz = class_12972;
        this.obThK.cpB();
        tt2.bdX(true);
    }

    private class_243 aMO(class_1297 class_12972) {
        class_243 class_2432;
        block7: {
            block8: {
                long l = JcqZx ^ 0x48489E509D30L;
                int[] nArray = fg.aIW();
                try {
                    if (class_12972 == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                class_243 class_2433 = rD.dlmvG.field_1724.method_33571();
                class_243 class_2434 = jg.bBK(class_2433, class_12972.method_5829());
                double d = rD.dlmvG.field_1724.method_55755();
                try {
                    try {
                        class_2432 = class_2433;
                        if (nArray != null) break block7;
                        if (!(class_2432.method_1025(class_2434) <= d * d)) break block8;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    class_2432 = class_2434;
                    break block7;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            class_2432 = null;
        }
        return class_2432;
    }

    private static CallSite aNq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean aMG(class_1297 class_12972) {
        boolean bl;
        int[] nArray;
        block34: {
            block35: {
                block32: {
                    block33: {
                        class_1297 class_12973;
                        block31: {
                            long l = JcqZx ^ 0x2A65A14E6434L;
                            nArray = fg.aIW();
                            try {
                                class_12973 = class_12972;
                                if (nArray != null) break block31;
                                if (class_12973 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            class_12973 = class_12972;
                        }
                        try {
                            if (class_12973 == rD.dlmvG.field_1724) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        try {
                            try {
                                try {
                                    try {
                                        bl = this.QSPxG.WF();
                                        if (nArray != null) break block32;
                                        if (!bl) break block33;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    bl = rD.dlmvG.field_1724.method_24518(class_1802.field_8786);
                                    if (nArray != null) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!bl) break block33;
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    bl = this.bLnpl.WF();
                }
                try {
                    try {
                        try {
                            try {
                                if (nArray != null) break block34;
                                if (!bl) break block35;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            bl = this.aucRP.Uy();
                            if (nArray != null) break block34;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        if (bl) break block35;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            bl = class_12972 instanceof class_1657;
        }
        try {
            if (nArray != null) return bl;
            if (!bl) return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
        class_1657 class_16572 = (class_1657)class_12972;
        try {
            try {
                try {
                    try {
                        bl = this.sHsoL.WF();
                        if (nArray != null) return bl;
                        if (!bl) return true;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    bl = rD.dmc().ddy(class_16572);
                    if (nArray != null) return bl;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                if (!bl) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw fq.aNj(matchException);
            }
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
    }

    public cu aMQ() {
        return this.ufdaw;
    }

    public class_238 aMH(class_1297 class_12972, class_238 class_2382) {
        block21: {
            class_1657 class_16572;
            block23: {
                boolean bl;
                class_1657 class_16573;
                int[] nArray;
                block22: {
                    class_1297 class_12973;
                    block20: {
                        long l = JcqZx ^ 0x5EE9D351990AL;
                        nArray = fg.aIW();
                        try {
                            try {
                                class_12973 = class_12972;
                                if (nArray != null) break block20;
                                if (!(class_12973 instanceof class_1657)) break block21;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            class_12973 = class_12972;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    class_16573 = (class_1657)class_12973;
                    try {
                        try {
                            try {
                                bl = this.fylmP.WF();
                                if (nArray != null) break block22;
                                if (!bl) break block21;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            class_16572 = class_16573;
                            if (nArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        bl = class_16572.method_6128();
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    block24: {
                        try {
                            try {
                                try {
                                    try {
                                        if (bl) break block24;
                                        class_16572 = class_16573;
                                        if (nArray != null) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    if (class_16572.method_20448()) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                class_16572 = class_16573;
                                if (nArray != null) break block23;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            if (!class_16572.method_20232()) break block21;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    class_16572 = class_12972;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            class_4048 class_40482 = class_16572.method_18377(class_4050.field_18076);
            double d = class_40482.comp_2185() + this.vzqAe;
            double d2 = class_40482.comp_2186() + this.ZLJlY;
            double d3 = (class_2382.field_1323 + class_2382.field_1320) / 2.0;
            double d4 = (class_2382.field_1321 + class_2382.field_1324) / 2.0;
            double d5 = d3 - d / 2.0;
            double d6 = d3 + d / 2.0;
            double d7 = d4 - d / 2.0;
            double d8 = d4 + d / 2.0;
            double d9 = class_2382.field_1322;
            double d10 = d9 + d2;
            return new class_238(d5, d9, d7, d6, d10, d8);
        }
        return new class_238(class_2382.field_1323 - (double)(this.vzqAe / 2.0f), class_2382.field_1322 - (double)(this.ZLJlY / 2.0f), class_2382.field_1321 - (double)(this.vzqAe / 2.0f), class_2382.field_1320 + (double)(this.vzqAe / 2.0f), class_2382.field_1325 + (double)(this.ZLJlY / 2.0f), class_2382.field_1324 + (double)(this.vzqAe / 2.0f));
    }

    private class_243 aMK() {
        fq fq2;
        block4: {
            block5: {
                long l = JcqZx ^ 0x2DBC00AB94A4L;
                int[] nArray = fg.aIW();
                try {
                    try {
                        fq2 = this;
                        if (nArray != null) break block4;
                        if (fq2.aML()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
        }
        return fq2.aMO(this.NZTfz);
    }

    public ct aMP() {
        return this.meQED;
    }

    @hG
    public void aME(gv gv2) {
        block28: {
            class_243 class_2432;
            block29: {
                fq fq2;
                int[] nArray;
                block26: {
                    block27: {
                        block24: {
                            block25: {
                                block22: {
                                    block23: {
                                        fq fq3;
                                        block20: {
                                            long l = JcqZx ^ 0x6A2644CDE4CAL;
                                            nArray = fg.aIW();
                                            try {
                                                block21: {
                                                    try {
                                                        try {
                                                            try {
                                                                fq3 = this;
                                                                if (nArray != null) break block20;
                                                                if (!fq3.bab()) break block21;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw fq.aNj(matchException);
                                                            }
                                                            fq2 = this;
                                                            if (nArray != null) break block22;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw fq.aNj(matchException);
                                                        }
                                                        if (fq2.zpLUV.SZ()) break block23;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fq.aNj(matchException);
                                                    }
                                                }
                                                fq3 = this;
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                        }
                                        fq3.aMN();
                                        return;
                                    }
                                    fq2 = this;
                                }
                                try {
                                    try {
                                        if (nArray != null) break block24;
                                        if (fq2.NZTfz != null) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            fq2 = this;
                        }
                        try {
                            try {
                                if (nArray != null) break block26;
                                if (fq2.aML()) break block27;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            this.aMN();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    fq2 = this;
                }
                class_2432 = fq2.aMK();
                try {
                    try {
                        if (nArray != null) break block28;
                        if (class_2432 != null) break block29;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                    this.aMN();
                    return;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            rD.dlX().dbI(class_2432, ou.kxNyl, mw.uWTdl, this);
        }
    }

    private class_3966 aMI() {
        class_3966 class_39662;
        block16: {
            class_243 class_2432;
            class_1297 class_12972;
            block12: {
                long l = JcqZx ^ 0x11E8A5F40542L;
                ov ov2 = rD.dlX().dbC();
                int[] nArray = fg.aIW();
                double d = rD.dlmvG.field_1724.method_55755();
                class_243 class_2433 = rD.dlmvG.field_1724.method_33571();
                class_243 class_2434 = ov2.cGH();
                double d2 = d * d;
                class_3965 class_39652 = ox.cGV().cHd(ov2).cHe(d).cHp();
                if (class_39652.method_17783() == class_239.class_240.field_1332) {
                    d2 = Math.min(d2, class_2433.method_1025(class_39652.method_17784()));
                }
                double d3 = Math.sqrt(d2);
                class_243 class_2435 = class_2433.method_1019(class_2434.method_1021(d3));
                class_238 class_2382 = rD.dlmvG.field_1724.method_5829().method_18804(class_2434.method_1021(d)).method_1009(1.0 + (double)this.vzqAe, 1.0 + (double)this.ZLJlY, 1.0 + (double)this.vzqAe);
                class_12972 = null;
                class_2432 = null;
                double d4 = d2;
                for (class_1297 class_12973 : rD.dlmvG.field_1687.method_8333((class_1297)rD.dlmvG.field_1724, class_2382, this::aMM)) {
                    block14: {
                        double d5;
                        double d6;
                        Optional optional;
                        block15: {
                            block13: {
                                optional = this.aMH(class_12973, class_12973.method_5829()).method_992(class_2433, class_2435);
                                try {
                                    try {
                                        if (nArray != null) break block12;
                                        if (!optional.isEmpty()) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    if (nArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            d6 = class_2433.method_1025((class_243)optional.get());
                            try {
                                try {
                                    d5 = d6;
                                    if (nArray != null) break block14;
                                    if (!(d5 >= d4)) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (nArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                        }
                        class_12972 = class_12973;
                        class_2432 = (class_243)optional.get();
                        d5 = d4 = d6;
                    }
                    if (nArray == null) continue;
                }
                try {
                    if (class_12972 != null) break block12;
                    class_39662 = null;
                    break block16;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            class_39662 = new class_3966(class_12972, class_2432);
        }
        return class_39662;
    }

    @hG
    public void aMF(gH.th th2) {
        fq fq2;
        block38: {
            block39: {
                block41: {
                    fq fq3;
                    block40: {
                        class_243 class_2432;
                        int[] nArray;
                        block36: {
                            class_243 class_2433;
                            block37: {
                                fq fq4;
                                block34: {
                                    block35: {
                                        block32: {
                                            block33: {
                                                block30: {
                                                    block31: {
                                                        fq fq5;
                                                        block28: {
                                                            long l = JcqZx ^ 0x6BFDFD46C81DL;
                                                            nArray = fg.aIW();
                                                            try {
                                                                block29: {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                fq5 = this;
                                                                                if (nArray != null) break block28;
                                                                                if (!fq5.bab()) break block29;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw fq.aNj(matchException);
                                                                            }
                                                                            fq4 = this;
                                                                            if (nArray != null) break block30;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw fq.aNj(matchException);
                                                                        }
                                                                        if (fq4.zpLUV.SZ()) break block31;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw fq.aNj(matchException);
                                                                    }
                                                                }
                                                                fq5 = this;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw fq.aNj(matchException);
                                                            }
                                                        }
                                                        fq5.aMN();
                                                        return;
                                                    }
                                                    fq4 = this;
                                                }
                                                try {
                                                    try {
                                                        if (nArray != null) break block32;
                                                        if (fq4.NZTfz != null) break block33;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fq.aNj(matchException);
                                                    }
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fq.aNj(matchException);
                                                }
                                            }
                                            fq4 = this;
                                        }
                                        try {
                                            try {
                                                if (nArray != null) break block34;
                                                if (fq4.aML()) break block35;
                                            }
                                            catch (MatchException matchException) {
                                                throw fq.aNj(matchException);
                                            }
                                            this.aMN();
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw fq.aNj(matchException);
                                        }
                                    }
                                    fq4 = this;
                                }
                                class_2433 = fq4.aMK();
                                try {
                                    try {
                                        class_2432 = class_2433;
                                        if (nArray != null) break block36;
                                        if (class_2432 != null) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    this.aMN();
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                            }
                            class_2432 = class_2433;
                        }
                        ov ov2 = ov.cGy(class_2432);
                        try {
                            try {
                                try {
                                    try {
                                        fq2 = this;
                                        if (nArray != null) break block38;
                                        if (fq2.aMJ(this.NZTfz, ov2) != null) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    fq3 = this;
                                    if (nArray != null) break block40;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!fq3.obThK.cpC(this.xkXFw.VC())) break block41;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            fq3 = this;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    fq3.aMN();
                }
                return;
            }
            rD.dlW().ddn(this.NZTfz);
            fq2 = this;
        }
        fq2.aMN();
    }

    public cu aMR() {
        return this.zpLUV;
    }

    private boolean aMM(class_1297 class_12972) {
        boolean bl;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    block10: {
                        long l = JcqZx ^ 0x498B75FAA826L;
                        nArray = fg.aIW();
                        try {
                            try {
                                bl = class_12972.method_5863();
                                if (nArray != null) break block10;
                                if (!bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            bl = class_12972.method_7325();
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray != null) break block12;
                            if (bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        bl = this.aMG(class_12972);
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (!bl) break block11;
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    public cC aMS() {
        return this.zGQMR;
    }

    public cC aMT() {
        return this.TrhFC;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean aML() {
        boolean bl;
        fq fq2;
        int[] nArray;
        block21: {
            block22: {
                class_1297 class_12972;
                block20: {
                    long l = JcqZx ^ 0x11407619AC05L;
                    nArray = fg.aIW();
                    try {
                        try {
                            class_12972 = this.NZTfz;
                            if (nArray != null) break block20;
                            if (class_12972 == null) return false;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        class_12972 = this.NZTfz;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                try {
                    try {
                        try {
                            try {
                                boolean bl2;
                                try {
                                    try {
                                        bl2 = class_12972.method_31481();
                                        if (nArray != null) return bl2;
                                        if (bl2) return false;
                                    }
                                    catch (MatchException matchException) {
                                        throw fq.aNj(matchException);
                                    }
                                    bl2 = this.NZTfz.method_5863();
                                    if (nArray != null) return bl2;
                                }
                                catch (MatchException matchException) {
                                    throw fq.aNj(matchException);
                                }
                                if (!bl2) return false;
                            }
                            catch (MatchException matchException) {
                                throw fq.aNj(matchException);
                            }
                            fq2 = this;
                            if (nArray != null) break block21;
                        }
                        catch (MatchException matchException) {
                            throw fq.aNj(matchException);
                        }
                        if (fq2.aMG(this.NZTfz)) break block22;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw fq.aNj(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw fq.aNj(matchException);
                }
            }
            fq2 = this;
        }
        class_1297 class_12973 = fq2.NZTfz;
        try {
            bl = class_12973 instanceof class_1309;
            if (nArray != null) return bl;
            if (!bl) return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
        class_1309 class_13092 = (class_1309)class_12973;
        try {
            bl = class_13092.method_29504();
            if (nArray != null) return bl;
            if (bl) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw fq.aNj(matchException);
        }
    }

    private static CallSite aNn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException aNj(MatchException matchException) {
        return matchException;
    }

    private class_3966 aMJ(class_1297 class_12972, ov ov2) {
        return ox.cGV().cHd(ov2).cHe(rD.dlmvG.field_1724.method_55755()).cHj(class_12973 -> {
            boolean bl;
            long l = JcqZx ^ 0x6B184A3A7005L;
            try {
                bl = class_12973 == class_12972;
            }
            catch (MatchException matchException) {
                throw fq.aNj(matchException);
            }
            return bl;
        }).cHn();
    }

    @Override
    public void YO() {
        super.YO();
        this.aMN();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fq.class, "aNp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(fq.class, "aNm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
