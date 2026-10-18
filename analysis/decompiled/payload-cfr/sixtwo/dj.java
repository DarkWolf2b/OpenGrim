/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_2246
 *  net.minecraft.class_2338
 *  net.minecraft.class_2350
 *  net.minecraft.class_2350$class_2353
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_2680
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_746
 *  net.minecraft.class_9799
 *  net.minecraft.class_9801
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
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
import java.util.function.ToIntFunction;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2246;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_746;
import net.minecraft.class_9799;
import net.minecraft.class_9801;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.dj$sB;
import sixtwo.dj$sC;
import sixtwo.dj$sD;
import sixtwo.dj$sE;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.kH;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class dj
extends gg
implements lG {
    private final ct jybpu;
    private final cu lvORN;
    private final cu qEqID;
    private final cC LEzwX;
    private final cC uQNEX;
    private final cJ ZnfqN;
    private final cC TYsOV;
    private final cJ ObAdu;
    private final cJ AMAdS;
    private final cJ vupnD;
    private final cJ NUWIx;
    private final cJ iKDmr;
    private final cJ oBPYh;
    private final cG JMRnw;
    private final cG QfgSU;
    private final cG vJCDp;
    private final cG JaDoR;
    private final Map<dj$sE, rk> Dpuot;
    private List<dj$sE> soBDJ;
    private static final Comparator<class_2338> cMEtP;
    private static final long UFHNj;
    private static final String[] vaAsg;
    private static final String[] NFauy;
    private static final Map XZCIf;
    private static final long[] CvhLh;
    private static final Integer[] gUpUM;
    private static final Map HQhKx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dj() {
        long l = UFHNj ^ 0x40B2B24547D3L;
        super(gf.aZL((int)dj.agu("w", (int)25501, (long)(0x67266FBC4DC2CABFL ^ l)), false, gh.nOCvV));
        this.jybpu = new ct(this, mr.clS(new int[]{(int)dj.agu("w", (int)12901, (long)(0xA17FC50F41F1B57L ^ l)), (int)dj.agu("w", (int)25198, (long)(0x399240B60E68CB73L ^ l)), (int)dj.agu("w", (int)10912, (long)(0x31DFF1ED06A603B3L ^ l)), (int)dj.agu("w", (int)855, (long)(0x91E7BA7347D2A20L ^ l))})).SO(0);
        this.lvORN = new cu(this.jybpu, mr.clS(new int[]{(int)dj.agu("w", (int)12532, (long)(0x7271ED0BB90019C3L ^ l)), (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l)), (int)dj.agu("w", (int)27516, (long)(0x11574BC477764264L ^ l)), (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l)), (int)dj.agu("w", (int)5368, (long)(0x61A7A4AE08D83D85L ^ l))}));
        this.qEqID = new cu(this.jybpu, mr.clS(new int[]{(int)dj.agu("w", (int)22644, (long)(0x41C64D92DD6DF15EL ^ l)), (int)dj.agu("w", (int)26894, (long)(0x546685EBC457C026L ^ l)), (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l)), (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l))}));
        this.LEzwX = new cC(this, mr.clS(new int[]{(int)dj.agu("w", (int)15353, (long)(0x5BCD799B0ED992E3L ^ l)), (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l)), (int)dj.agu("w", (int)31978, (long)(0x31F1CAF165A1D5C4L ^ l)), (int)dj.agu("w", (int)2836, (long)(0x6733E8A3B64EA231L ^ l)), (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l))})).Vy(0.5).Vw(3.0).Vx(25.0).VA(5.0).Vz((String)((Object)dj.agr("v", (int)19651, (long)(0x3A790624D37A0027L ^ l))));
        int[] nArray = new int[dj.agu("w", (int)10302, (long)(0x7EC5AB03F9490130L ^ l))];
        nArray[0] = (int)dj.agu("w", (int)23111, (long)(0x1880516982F9F35CL ^ l));
        nArray[1] = (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l));
        nArray[2] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray[3] = (int)dj.agu("w", (int)12286, (long)(0x6A4B67B6840B86E7L ^ l));
        nArray[4] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray[5] = (int)dj.agu("w", (int)25057, (long)(0x18F18FAFC078C895L ^ l));
        nArray[dj.agu("w", (int)27777, (long)(0x3907B304565BC5B2L ^ l))] = (int)dj.agu("w", (int)12717, (long)(0xA280648E5A798D7L ^ l));
        this.uQNEX = new cC(this, mr.clS(nArray)).Vy(0.5).Vw(0.0).Vx(16.0).VA(3.0).Vz((String)((Object)dj.agr("v", (int)24181, (long)(0x49893D3C73861290L ^ l))));
        int[] nArray2 = new int[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))];
        nArray2[0] = (int)dj.agu("w", (int)6923, (long)(0x5AB04F2BAA4EB21FL ^ l));
        nArray2[1] = (int)dj.agu("w", (int)21764, (long)(0xEFFE583FC29FC71L ^ l));
        nArray2[2] = (int)dj.agu("w", (int)8166, (long)(0x6F553DBBC1C6B6E6L ^ l));
        nArray2[3] = (int)dj.agu("w", (int)993, (long)(0x73A1C0283D6E2ACAL ^ l));
        nArray2[4] = (int)dj.agu("w", (int)6242, (long)(0x539AF24625B0B164L ^ l));
        nArray2[5] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray2[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        this.ZnfqN = new cJ(this, mr.clS(nArray2)).WE(true);
        this.TYsOV = new cC(this, mr.clS(new int[]{(int)dj.agu("w", (int)11246, (long)(0x5D97B3EFB71C82DEL ^ l)), (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l)), (int)dj.agu("w", (int)14073, (long)(0x3E35212567749F87L ^ l)), (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l))})).Vy(0.01).Vw(-1.0).Vx(1.0).VA(1.0);
        int[] nArray3 = new int[dj.agu("w", (int)7620, (long)(0x4428EFDEC58B4C3L ^ l))];
        nArray3[0] = (int)dj.agu("w", (int)511, (long)(0x5F7A1269E677A8CAL ^ l));
        nArray3[1] = (int)dj.agu("w", (int)12286, (long)(0x6A4B67B6840B86E7L ^ l));
        nArray3[2] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray3[3] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray3[4] = (int)dj.agu("w", (int)23566, (long)(0x816CFE40681F52DL ^ l));
        nArray3[5] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray3[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)12557, (long)(0x3269312025D3981CL ^ l));
        nArray3[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)18025, (long)(0x21449134434DEF12L ^ l));
        nArray3[dj.agu("w", (int)27474, (long)(0x4D07059EF2964223L ^ l))] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray3[dj.agu("w", (int)6470, (long)(0x32E2592BD8303EL ^ l))] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray3[dj.agu("w", (int)1551, (long)(0x21EB84C096162F35L ^ l))] = (int)dj.agu("w", (int)18365, (long)(0x7742F889F226EEDEL ^ l));
        this.ObAdu = new cJ(this, mr.clS(nArray3)).WE(false);
        int[] nArray4 = new int[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))];
        nArray4[0] = (int)dj.agu("w", (int)17261, (long)(0x24C78B122F10EA6FL ^ l));
        nArray4[1] = (int)dj.agu("w", (int)30173, (long)(0x5E4D391B09D3DCF1L ^ l));
        nArray4[2] = (int)dj.agu("w", (int)19154, (long)(0x729409E3C85FE3C0L ^ l));
        nArray4[3] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray4[4] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray4[5] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray4[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l));
        nArray4[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        this.AMAdS = new cJ(this, mr.clS(nArray4)).WE(true);
        int[] nArray5 = new int[dj.agu("w", (int)9964, (long)(0x545D6FF0E2600F95L ^ l))];
        nArray5[0] = (int)dj.agu("w", (int)17261, (long)(0x24C78B122F10EA6FL ^ l));
        nArray5[1] = (int)dj.agu("w", (int)28772, (long)(0x4D79AFB74459D950L ^ l));
        nArray5[2] = (int)dj.agu("w", (int)19154, (long)(0x729409E3C85FE3C0L ^ l));
        nArray5[3] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray5[4] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray5[5] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray5[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l));
        nArray5[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray5[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))] = (int)dj.agu("w", (int)23506, (long)(0x5518A7747D7972EDL ^ l));
        nArray5[dj.agu("w", (int)22778, (long)(0x522D0C5BB7D471DBL ^ l))] = (int)dj.agu("w", (int)24366, (long)(0x5759CB608EA1F62DL ^ l));
        nArray5[dj.agu("w", (int)5195, (long)(0x699CDF1BCA77BD3BL ^ l))] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray5[dj.agu("w", (int)23934, (long)(0xBF15D5EEB8E7472L ^ l))] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray5[dj.agu("w", (int)11112, (long)(0x6D2BB46FC8688209L ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        nArray5[dj.agu("w", (int)11882, (long)(0x2AF15314401D870CL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray5[dj.agu("w", (int)3901, (long)(0x551C53001D5B260CL ^ l))] = (int)dj.agu("w", (int)32554, (long)(0x17623724E148563CL ^ l));
        nArray5[dj.agu("w", (int)23000, (long)(0x2C238E9930DF0D5L ^ l))] = (int)dj.agu("w", (int)29129, (long)(0x28408A32C4AB58DEL ^ l));
        this.vupnD = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))];
        nArray6[0] = (int)dj.agu("w", (int)20807, (long)(0x418DFDCF6F877852L ^ l));
        nArray6[1] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray6[2] = (int)dj.agu("w", (int)1633, (long)(0x1F068767FC71AF65L ^ l));
        nArray6[3] = (int)dj.agu("w", (int)28772, (long)(0x4D79AFB74459D950L ^ l));
        nArray6[4] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray6[5] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        this.NUWIx = new cJ(this, mr.clS(nArray6)).WE(false);
        this.iKDmr = new cJ(this, mr.clS(new int[]{(int)dj.agu("w", (int)16055, (long)(0x23CBFC5982C5178CL ^ l)), (int)dj.agu("w", (int)1633, (long)(0x1F068767FC71AF65L ^ l)), (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l)), (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l))})).WE(false);
        this.oBPYh = new cJ(this, mr.clS(new int[]{(int)dj.agu("w", (int)10679, (long)(0x62CC04DB621200BEL ^ l)), (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l)), (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l)), (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l))})).WE(false);
        int[] nArray7 = new int[dj.agu("w", (int)6926, (long)(0xAFED80B476D3271L ^ l))];
        nArray7[0] = (int)dj.agu("w", (int)17261, (long)(0x24C78B122F10EA6FL ^ l));
        nArray7[1] = (int)dj.agu("w", (int)28772, (long)(0x4D79AFB74459D950L ^ l));
        nArray7[2] = (int)dj.agu("w", (int)19154, (long)(0x729409E3C85FE3C0L ^ l));
        nArray7[3] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray7[4] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray7[5] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray7[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l));
        nArray7[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray7[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))] = (int)dj.agu("w", (int)12557, (long)(0x3269312025D3981CL ^ l));
        nArray7[dj.agu("w", (int)22778, (long)(0x522D0C5BB7D471DBL ^ l))] = (int)dj.agu("w", (int)30382, (long)(0x33B733C9AECD5FAFL ^ l));
        nArray7[dj.agu("w", (int)5195, (long)(0x699CDF1BCA77BD3BL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray7[dj.agu("w", (int)23934, (long)(0xBF15D5EEB8E7472L ^ l))] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray7[dj.agu("w", (int)23182, (long)(0x51898392F1573A1L ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray7[dj.agu("w", (int)24322, (long)(0x7C64839AA1F8761CL ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        this.JMRnw = (cG)new cG(this, mr.clS(nArray7)).Uf(mG.cnR(255.0f, 0.0f, 0.0f, 80.0f)).Vf(this.AMAdS::WF);
        int[] nArray8 = new int[dj.agu("w", (int)30237, (long)(0x3FAB40831DADDF15L ^ l))];
        nArray8[0] = (int)dj.agu("w", (int)17261, (long)(0x24C78B122F10EA6FL ^ l));
        nArray8[1] = (int)dj.agu("w", (int)28772, (long)(0x4D79AFB74459D950L ^ l));
        nArray8[2] = (int)dj.agu("w", (int)19154, (long)(0x729409E3C85FE3C0L ^ l));
        nArray8[3] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray8[4] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray8[5] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray8[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)20132, (long)(0x6056F7A5EEEE79DL ^ l));
        nArray8[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)7277, (long)(0x7003D37BA90DB566L ^ l));
        nArray8[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))] = (int)dj.agu("w", (int)1938, (long)(0x4E7023BCF6ED2E97L ^ l));
        nArray8[dj.agu("w", (int)22778, (long)(0x522D0C5BB7D471DBL ^ l))] = (int)dj.agu("w", (int)24366, (long)(0x5759CB608EA1F62DL ^ l));
        nArray8[dj.agu("w", (int)5195, (long)(0x699CDF1BCA77BD3BL ^ l))] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray8[dj.agu("w", (int)23934, (long)(0xBF15D5EEB8E7472L ^ l))] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray8[dj.agu("w", (int)23182, (long)(0x51898392F1573A1L ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        nArray8[dj.agu("w", (int)24322, (long)(0x7C64839AA1F8761CL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray8[dj.agu("w", (int)6926, (long)(0xAFED80B476D3271L ^ l))] = (int)dj.agu("w", (int)1892, (long)(0x3630450E56C42E12L ^ l));
        nArray8[dj.agu("w", (int)25109, (long)(0x348AA451491F4B75L ^ l))] = (int)dj.agu("w", (int)20081, (long)(0x696E27833CCCE751L ^ l));
        nArray8[dj.agu("w", (int)29385, (long)(0x18C85E90A80B5BB5L ^ l))] = (int)dj.agu("w", (int)12557, (long)(0x3269312025D3981CL ^ l));
        nArray8[dj.agu("w", (int)21114, (long)(0x30944140A247FB57L ^ l))] = (int)dj.agu("w", (int)30037, (long)(0x652C6627AF225C45L ^ l));
        nArray8[dj.agu("w", (int)30913, (long)(0xEBBE1485FBDD1E6L ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray8[dj.agu("w", (int)9147, (long)(0x4A17EF4EF09E0A86L ^ l))] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray8[dj.agu("w", (int)24857, (long)(0x93E1BAFB6EA4827L ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray8[dj.agu("w", (int)22940, (long)(0x5AC5CF849331F0EFL ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        this.QfgSU = (cG)new cG(this, mr.clS(nArray8)).Uf(mG.cnR(255.0f, 255.0f, 0.0f, 80.0f)).Vf(this.vupnD::WF);
        int[] nArray9 = new int[dj.agu("w", (int)24322, (long)(0x7C64839AA1F8761CL ^ l))];
        nArray9[0] = (int)dj.agu("w", (int)24366, (long)(0x5759CB608EA1F62DL ^ l));
        nArray9[1] = (int)dj.agu("w", (int)28645, (long)(0x6323B05D9A3E46D3L ^ l));
        nArray9[2] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray9[3] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        nArray9[4] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray9[5] = (int)dj.agu("w", (int)1892, (long)(0x3630450E56C42E12L ^ l));
        nArray9[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)20081, (long)(0x696E27833CCCE751L ^ l));
        nArray9[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)12557, (long)(0x3269312025D3981CL ^ l));
        nArray9[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))] = (int)dj.agu("w", (int)30037, (long)(0x652C6627AF225C45L ^ l));
        nArray9[dj.agu("w", (int)22778, (long)(0x522D0C5BB7D471DBL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray9[dj.agu("w", (int)5195, (long)(0x699CDF1BCA77BD3BL ^ l))] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray9[dj.agu("w", (int)23934, (long)(0xBF15D5EEB8E7472L ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray9[dj.agu("w", (int)23182, (long)(0x51898392F1573A1L ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        this.vJCDp = new cG(this, mr.clS(nArray9)).Uf(mG.cnR(0.0f, 255.0f, 0.0f, 80.0f));
        int[] nArray10 = new int[dj.agu("w", (int)5195, (long)(0x699CDF1BCA77BD3BL ^ l))];
        nArray10[0] = (int)dj.agu("w", (int)6929, (long)(0x358A6C9ECB52B238L ^ l));
        nArray10[1] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray10[2] = (int)dj.agu("w", (int)20734, (long)(0x45A0114E2DC3F9E2L ^ l));
        nArray10[3] = (int)dj.agu("w", (int)28857, (long)(0x4F8B4D72892A5981L ^ l));
        nArray10[4] = (int)dj.agu("w", (int)12557, (long)(0x3269312025D3981CL ^ l));
        nArray10[5] = (int)dj.agu("w", (int)30037, (long)(0x652C6627AF225C45L ^ l));
        nArray10[dj.agu("w", (int)11648, (long)(0x329A1FC271BE048FL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray10[dj.agu("w", (int)12502, (long)(0x216C560994E419B4L ^ l))] = (int)dj.agu("w", (int)30662, (long)(0x3B93548F1874DEB4L ^ l));
        nArray10[dj.agu("w", (int)30587, (long)(0x245BABCE0D485E5FL ^ l))] = (int)dj.agu("w", (int)2806, (long)(0x71700FF71974A3CAL ^ l));
        nArray10[dj.agu("w", (int)22778, (long)(0x522D0C5BB7D471DBL ^ l))] = (int)dj.agu("w", (int)21356, (long)(0x90408E60647FA4AL ^ l));
        this.JaDoR = (cG)new cG(this, mr.clS(nArray10)).Uf(mG.cnR(255.0f, 0.0f, 0.0f, 140.0f)).Vf(this.oBPYh::WF);
        this.Dpuot = new HashMap<dj$sE, rk>();
        this.soBDJ = new ArrayList<dj$sE>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    dj.UFHNj = gb.aYR(-443646992908327867L, 3685075153996180774L, MethodHandles.lookup().lookupClass()).a(36593284610269L);
                    dj.XZCIf = new HashMap<K, V>(13);
                    var11 = dj.UFHNj ^ 27466238224920L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u00e8\u00d2m\u00c7\u00b3o{\u001f\u00f5\u00b8\u00ed\u007f\u00c8\u001dn\u001e\u0010z\u00f4\u00e8\u0014\u00e9.a\u001c\u00fb\u0087\u00d3B\u00ac\u00dbi\u00d5";
                    var19_6 = "\u00e8\u00d2m\u00c7\u00b3o{\u001f\u00f5\u00b8\u00ed\u007f\u00c8\u001dn\u001e\u0010z\u00f4\u00e8\u0014\u00e9.a\u001c\u00fb\u0087\u00d3B\u00ac\u00dbi\u00d5".length();
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
                        var20_3[var18_4++] = dj.ago(var21_9).intern();
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
                dj.vaAsg = var20_3;
                dj.NFauy = new String[2];
                dj.HQhKx = new HashMap<K, V>(13);
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
                var6_12 = new long[85];
                var3_13 = 0;
                var4_14 = "\u00dbd\u0087\u00c6\u00e9\u0092\u00ef\u00c4mr\u008bO\u0003f\u00e3\u008fs\u00c6\u008c\u00ef\u00ad\u0099\u0092\u00f4\u009c;,\u0000\u009czG1\u008b\u0097\u00d6A\u0088\u00a8\u00eaH\u0085\u00a7\u00e5d\u00d3j\u0088\u00ac\u00c5\u007f2\u00d6\u00b4\u00faY\u00ed\u0084\u0086\u00d2\u00984\u0086\u0018\u009dR\u00d8Hk\u00bb|\u0092.\u00a7\u00afY$(`\u00e0\u00b0\u00df2t\u0081#@x\u00ba\u00c1d\u00fa!X\u00a9\u00cc\u008e\u0097\u00a5S\u00c5\b#\u00b9\u00d8\u009a\u0097\u00f1\u00ff\u008f\u00e0\u008f\u00ae\u00a4.\u00c6\u001e\u00ba\u007fn1j\u00dcK\u0013\u000f\u0004\u00d7EIY#A\u00e8\u00ec\u0094X6\u0004PNu\u001d\u0007\r\u00815mx\u00d9\u00c4\u0010\u00c5\u00e7$\u00d8\u0099m\u0015N4W\u009c\u0002z\u00b0\u000f\u00eba\u00f6\u00aa]\u00f9_\u00abB\u0004\bTc\u00cf\u0096\u0090+Q\u00cc\u00e4\u007f\u0019\u00f7r\u0013*\u00fa\u00f5r?\u000f6\u0089#l\f\u0018\u00a1\u0087\u001d%\u00e7\u009d\u0012|O\u00ac\u00baR\u00efo\u00a0\n\u00a8r\u00b5\u008d\u00d5K\u00b1\u0096m\u0098\u008d\u00c9a\u0017\u001d\u0093\u00c0d\u00c3\u00fe4\u0098\u001e\u00bc\u0015\u00f3\u00c1\u0090\u008e\u0000@\u009c\u0080\u00c9\u001a\u00051\u00c3\u00da\u001et\u0004 \u009b\u00dbC\u009f\u0007\u00e7\u00b2\u00aa\u00e1\u00f3\u00e4x\u00e1\u00b6\u00b8<\u0007_\u00c9\u00f5\u0005\u0001f\u00c9PxN\u0001vN\u00a8f\u00c8'\u00c2\u0092u\u00b1\\\u00aa\u00e9Ug\u00b8i\u00ac>\u009eR\u001eX\u00d6\u00f3z\u00bcJ\u0000T\u00ab\u00bb1\u00b9\u00e7\u00bbf\u00a1\u00d8\u00da7\u00ef\u0088\u00c4w\u00ec\u00f0F\u00e8\u00bb\u00e4\u00f7\u0003\u0011u\u0089]K\u0004\u00b2>2\u0007\u001c\u00b3K\u00d6J\u0000r\u00bf^\u0010t\u00a8\u0002\u00ef\b\u009fB\u00fc\u0095\u0090V\u00ac\u00b9\u00efv\u00c7\u00cfNlp2|\u00c7\u001b\u00db!\u00e7|\u00f6\u0011\u0012gu\u00e2\u0085\u0095k\u0086\u00fb\u0016-\u00f9\u0004\u0081=\u00834\u008a\u0084\u00a7%\u00e8q\u009egX\u00cbq\u00d2\u0010\u00a47u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-\u00e7\u0080\u00a6)\u00ef\u00e0\u009a2\u00c5\u00c1\u00bb\u00dc\u008e\u00b6\u00b7O9\u00e5\u00f5\u00f8\u00b1\u000f\u00a4&\u0004K\u00e0\u00f0\u00e2\u00a0H\u0088\u0016\u00a1F\u00ccf\u00d4h\u00c6\u0003>|\u00c7QL]\u00a0\u001e\u00fbac3\u00c0&\u00ff\u0018L\u00a4B*\u00eeV\u00ecs\u00c6o[\u0017\u00ab8\u000f\u00af\u00d1\\8\u0001\b\\\u00cf\u00b2\u00b5\u00880/\u0086?\u00151\u00f6i\u00f5\u00c6_\u00de\u00b6\u00d8j\u00a5\u008b\u00c3\u00a8^\u00e2\u00ca\u00af\u00fd\u0019\u00ae\u00f0\u0014>\u000f\u0002\r\u0093#\u009e\u00ec3\u008e\u0015oyP\u0091\u00e2\u00fc\u00b6\u0013ZA\u008e\u008b\u00eb\u00af\u0096;\u00ef\u00f8\u0014\u0011\u0005H\u0093\u0098\u00b8\u00b6\u00b8\u00c2\u00ed\u00ff5T\u0084\u00ab^\u0085\u001f\u00c9\u00f5M\u0089\u00ff\u0098\u00f0\u00e1\u00ef\u00f6\n\\\u0092\u00ffcQV\u0011\u0094\u00a7\u00c1\u00c6\u0083\u00f4\u00abv\u007f\u00d1l\u00a2\u00cf\u0081\u00ceE:\u0090\u00bdJ\u008b\u007f\u00f0e\u001a\u009a^\u0094J\u0093P\u007f\u0000\u00fd\u00ac\u00caf:W\u00cd\u00cd9b\u00a9;G\u00db\u00de\u00f4\u00a5=";
                var5_15 = "\u00dbd\u0087\u00c6\u00e9\u0092\u00ef\u00c4mr\u008bO\u0003f\u00e3\u008fs\u00c6\u008c\u00ef\u00ad\u0099\u0092\u00f4\u009c;,\u0000\u009czG1\u008b\u0097\u00d6A\u0088\u00a8\u00eaH\u0085\u00a7\u00e5d\u00d3j\u0088\u00ac\u00c5\u007f2\u00d6\u00b4\u00faY\u00ed\u0084\u0086\u00d2\u00984\u0086\u0018\u009dR\u00d8Hk\u00bb|\u0092.\u00a7\u00afY$(`\u00e0\u00b0\u00df2t\u0081#@x\u00ba\u00c1d\u00fa!X\u00a9\u00cc\u008e\u0097\u00a5S\u00c5\b#\u00b9\u00d8\u009a\u0097\u00f1\u00ff\u008f\u00e0\u008f\u00ae\u00a4.\u00c6\u001e\u00ba\u007fn1j\u00dcK\u0013\u000f\u0004\u00d7EIY#A\u00e8\u00ec\u0094X6\u0004PNu\u001d\u0007\r\u00815mx\u00d9\u00c4\u0010\u00c5\u00e7$\u00d8\u0099m\u0015N4W\u009c\u0002z\u00b0\u000f\u00eba\u00f6\u00aa]\u00f9_\u00abB\u0004\bTc\u00cf\u0096\u0090+Q\u00cc\u00e4\u007f\u0019\u00f7r\u0013*\u00fa\u00f5r?\u000f6\u0089#l\f\u0018\u00a1\u0087\u001d%\u00e7\u009d\u0012|O\u00ac\u00baR\u00efo\u00a0\n\u00a8r\u00b5\u008d\u00d5K\u00b1\u0096m\u0098\u008d\u00c9a\u0017\u001d\u0093\u00c0d\u00c3\u00fe4\u0098\u001e\u00bc\u0015\u00f3\u00c1\u0090\u008e\u0000@\u009c\u0080\u00c9\u001a\u00051\u00c3\u00da\u001et\u0004 \u009b\u00dbC\u009f\u0007\u00e7\u00b2\u00aa\u00e1\u00f3\u00e4x\u00e1\u00b6\u00b8<\u0007_\u00c9\u00f5\u0005\u0001f\u00c9PxN\u0001vN\u00a8f\u00c8'\u00c2\u0092u\u00b1\\\u00aa\u00e9Ug\u00b8i\u00ac>\u009eR\u001eX\u00d6\u00f3z\u00bcJ\u0000T\u00ab\u00bb1\u00b9\u00e7\u00bbf\u00a1\u00d8\u00da7\u00ef\u0088\u00c4w\u00ec\u00f0F\u00e8\u00bb\u00e4\u00f7\u0003\u0011u\u0089]K\u0004\u00b2>2\u0007\u001c\u00b3K\u00d6J\u0000r\u00bf^\u0010t\u00a8\u0002\u00ef\b\u009fB\u00fc\u0095\u0090V\u00ac\u00b9\u00efv\u00c7\u00cfNlp2|\u00c7\u001b\u00db!\u00e7|\u00f6\u0011\u0012gu\u00e2\u0085\u0095k\u0086\u00fb\u0016-\u00f9\u0004\u0081=\u00834\u008a\u0084\u00a7%\u00e8q\u009egX\u00cbq\u00d2\u0010\u00a47u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-\u00e7\u0080\u00a6)\u00ef\u00e0\u009a2\u00c5\u00c1\u00bb\u00dc\u008e\u00b6\u00b7O9\u00e5\u00f5\u00f8\u00b1\u000f\u00a4&\u0004K\u00e0\u00f0\u00e2\u00a0H\u0088\u0016\u00a1F\u00ccf\u00d4h\u00c6\u0003>|\u00c7QL]\u00a0\u001e\u00fbac3\u00c0&\u00ff\u0018L\u00a4B*\u00eeV\u00ecs\u00c6o[\u0017\u00ab8\u000f\u00af\u00d1\\8\u0001\b\\\u00cf\u00b2\u00b5\u00880/\u0086?\u00151\u00f6i\u00f5\u00c6_\u00de\u00b6\u00d8j\u00a5\u008b\u00c3\u00a8^\u00e2\u00ca\u00af\u00fd\u0019\u00ae\u00f0\u0014>\u000f\u0002\r\u0093#\u009e\u00ec3\u008e\u0015oyP\u0091\u00e2\u00fc\u00b6\u0013ZA\u008e\u008b\u00eb\u00af\u0096;\u00ef\u00f8\u0014\u0011\u0005H\u0093\u0098\u00b8\u00b6\u00b8\u00c2\u00ed\u00ff5T\u0084\u00ab^\u0085\u001f\u00c9\u00f5M\u0089\u00ff\u0098\u00f0\u00e1\u00ef\u00f6\n\\\u0092\u00ffcQV\u0011\u0094\u00a7\u00c1\u00c6\u0083\u00f4\u00abv\u007f\u00d1l\u00a2\u00cf\u0081\u00ceE:\u0090\u00bdJ\u008b\u007f\u00f0e\u001a\u009a^\u0094J\u0093P\u007f\u0000\u00fd\u00ac\u00caf:W\u00cd\u00cd9b\u00a9;G\u00db\u00de\u00f4\u00a5=".length();
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
                    var4_14 = "\u001f\u00f0;\u0010U\u00fb\u00ea\u009e\f\u0013\u0096\u001e\u008cF\u00d1\n";
                    var5_15 = "\u001f\u00f0;\u0010U\u00fb\u00ea\u009e\f\u0013\u0096\u001e\u008cF\u00d1\n".length();
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
        dj.CvhLh = var6_12;
        dj.gUpUM = new Integer[85];
        dj.cMEtP = Comparator.comparingInt((ToIntFunction<class_2338>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, agm(net.minecraft.class_2338 ), (Lnet/minecraft/class_2338;)I)()).thenComparingInt((ToIntFunction<class_2338>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, method_10264(), (Lnet/minecraft/class_2338;)I)()).thenComparingInt((ToIntFunction<class_2338>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, method_10260(), (Lnet/minecraft/class_2338;)I)());
    }

    private static String agp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4F7F;
        if (NFauy[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])XZCIf.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XZCIf.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dj", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = vaAsg[n2].getBytes("ISO-8859-1");
            dj.NFauy[n2] = dj.ago(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return NFauy[n2];
    }

    /*
     * Unable to fully structure code
     */
    private void age(class_4587 var1_1, class_243 var2_2, List<dj$sB> var3_3) {
        block37: {
            block34: {
                var4_4 = dj.UFHNj ^ 113673690013170L;
                var7_5 = var1_1.method_23760().method_23761();
                var6_6 = dh.afl();
                var8_7 = new class_9799(class_290.field_1576.getVertexSize() * var3_3.size() * dj.agu("w", (int)29385, (long)(1785810570950721940L ^ var4_4)));
                try {
                    var9_8 = new class_287(var8_7, VertexFormat.class_5596.field_27382, class_290.field_1576);
                    var10_11 = var3_3.iterator();
                    while (var10_11.hasNext()) {
                        var11_14 = var10_11.next();
                        var12_17 = var11_14.hole().toBox(this.TYsOV.VI()).method_997(var2_2);
                        var13_20 = this.agl(var11_14.hole().safety());
                        var14_21 = var11_14.fadeFactor();
                        var15_22 = var13_20.cob(var14_21);
                        var16_23 = var15_22.coa(0.0f);
                        try {
                            this.agg(var9_8, var7_5, var12_17.field_1323, var12_17.field_1322, var12_17.field_1321, var12_17.field_1320, var12_17.field_1325, var12_17.field_1321, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.field_1320, var12_17.field_1322, var12_17.field_1321, var12_17.field_1320, var12_17.field_1325, var12_17.field_1324, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.field_1320, var12_17.field_1322, var12_17.field_1324, var12_17.field_1323, var12_17.field_1325, var12_17.field_1324, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.field_1323, var12_17.field_1322, var12_17.field_1324, var12_17.field_1323, var12_17.field_1325, var12_17.field_1321, var15_22, var16_23);
                            if (var6_6 == null) {
                                if (var6_6 == null) continue;
                                break;
                            }
                            ** GOTO lbl68
                        }
                        catch (Throwable v0) {
                            throw dj.agn(v0);
                        }
                    }
                    var10_11 = var9_8.method_60800();
                    try {
                        lF.cfW(kR.oXKXV, (class_9801)var10_11);
                        if (var6_6 != null) break block34;
                    }
                    catch (Throwable var11_15) {
                        block36: {
                            try {
                                v1 = var10_11;
                                if (var6_6 == null) {
                                    if (v1 == null) break block36;
                                }
                                ** GOTO lbl41
                            }
                            catch (Throwable v2) {
                                throw dj.agn(v2);
                            }
                            try {
                                v1 = var10_11;
lbl41:
                                // 2 sources

                                v1.close();
                            }
                            catch (Throwable var12_18) {
                                var11_15.addSuppressed(var12_18);
                            }
                        }
                        throw var11_15;
                    }
                    try {
                        if (var10_11 != null) {
                            var10_11.close();
                        }
                    }
                    catch (Throwable v3) {
                        throw dj.agn(v3);
                    }
                }
                catch (Throwable var9_9) {
                    try {
                        var8_7.close();
                    }
                    catch (Throwable var10_12) {
                        var9_9.addSuppressed(var10_12);
                    }
                    throw var9_9;
                }
                var8_7.close();
            }
            var8_7 = new class_9799(class_290.field_1576.getVertexSize() * var3_3.size() * dj.agu("w", (int)23746, (long)(1045516226155605993L ^ var4_4)));
            try {
                var9_8 = new class_287(var8_7, VertexFormat.class_5596.field_27382, class_290.field_1576);
                var10_11 = var3_3.iterator();
lbl68:
                // 3 sources

                while (var10_11.hasNext()) {
                    var11_14 = (dj$sB)var10_11.next();
                    var12_17 = var11_14.hole().toBox(this.TYsOV.VI()).method_997(var2_2);
                    var13_20 = this.agl(var11_14.hole().safety()).coa(170.0f).cob(var11_14.fadeFactor());
                    this.agf(var9_8, var7_5, var12_17, var13_20);
                    if (var6_6 == null) continue;
                }
                var10_11 = var9_8.method_60800();
                try {
                    lF.cfW(kR.oXKXV, (class_9801)var10_11);
                    if (var6_6 != null) break block37;
                }
                catch (Throwable var11_16) {
                    block38: {
                        try {
                            v4 = var10_11;
                            if (var6_6 == null) {
                                if (v4 == null) break block38;
                            }
                            ** GOTO lbl89
                        }
                        catch (Throwable v5) {
                            throw dj.agn(v5);
                        }
                        try {
                            v4 = var10_11;
lbl89:
                            // 2 sources

                            v4.close();
                        }
                        catch (Throwable var12_19) {
                            var11_16.addSuppressed(var12_19);
                        }
                    }
                    throw var11_16;
                }
                try {
                    if (var10_11 != null) {
                        var10_11.close();
                    }
                }
                catch (Throwable v6) {
                    throw dj.agn(v6);
                }
            }
            finally {
                var8_7.close();
            }
        }
    }

    private boolean agh(class_2338 class_23382) {
        return rD.dlmvG.field_1687.method_8320(class_23382).method_26215();
    }

    private static Object agq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = dj.agp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int agt(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = dj.ags(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Exception decompiling
     */
    private mG agl(dj$sD var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
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

    private double agk() {
        return this.LEzwX.VI() * this.LEzwX.VI();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE aga(class_2338 class_23382, class_2350 class_23502) {
        Object object2;
        boolean bl;
        iS[] iSArray;
        class_2338 class_23383;
        block32: {
            block33: {
                block31: {
                    block30: {
                        long l = UFHNj ^ 0x1663760CE703L;
                        class_23383 = class_23382.method_10093(class_23502);
                        iSArray = dh.afl();
                        try {
                            try {
                                bl = this.agh(class_23383);
                                if (iSArray != null) break block30;
                                if (!bl) return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            bl = this.agh(class_23383.method_10084());
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    try {
                        try {
                            if (iSArray != null) break block31;
                            if (!bl) return null;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        bl = this.agh(class_23383.method_10086(2));
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                try {
                    try {
                        if (iSArray != null) break block32;
                        if (bl) break block33;
                        return null;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            bl = this.agi(class_23383.method_10074());
        }
        try {
            if (!bl) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        ArrayList<class_2338> arrayList = new ArrayList<class_2338>();
        arrayList.add(class_23382.method_10074());
        arrayList.add(class_23383.method_10074());
        for (Object object2 : class_2350.class_2353.field_11062) {
            block37: {
                class_2338 class_23384;
                class_2350 class_23503;
                class_2350 class_23504;
                block34: {
                    block35: {
                        boolean bl2;
                        block36: {
                            try {
                                class_23504 = object2;
                                class_23503 = class_23502;
                                if (iSArray != null) break block34;
                                if (class_23504 == class_23503) break block35;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            class_23384 = class_23382.method_10093((class_2350)object2);
                            try {
                                try {
                                    bl2 = this.agi(class_23384);
                                    if (iSArray != null) break block35;
                                    if (bl2) break block36;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl2 = arrayList.add(class_23384);
                    }
                    class_23504 = object2;
                    class_23503 = class_23502.method_10153();
                }
                if (class_23504 != class_23503) {
                    boolean bl3;
                    block38: {
                        class_23384 = class_23383.method_10093((class_2350)object2);
                        try {
                            try {
                                bl3 = this.agi(class_23384);
                                if (iSArray != null) break block37;
                                if (bl3) break block38;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    bl3 = arrayList.add(class_23384);
                }
            }
            if (iSArray == null) continue;
        }
        dj$sD dj$sD = this.agc(arrayList);
        try {
            if (dj$sD == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        object2 = new ArrayList<class_2338>(List.of(class_23382, class_23383));
        object2.sort(cMEtP);
        return new dj$sE(List.copyOf(object2), dj$sD, dj$sC.XksfN);
    }

    private void agg(class_287 class_2872, Matrix4f matrix4f, double d, double d2, double d3, double d4, double d5, double d6, mG mG2, mG mG3) {
        class_2872.method_22918((Matrix4fc)matrix4f, (float)d, (float)d2, (float)d3).method_39415(mG2.coh());
        class_2872.method_22918((Matrix4fc)matrix4f, (float)d, (float)d5, (float)d3).method_39415(mG3.coh());
        class_2872.method_22918((Matrix4fc)matrix4f, (float)d4, (float)d5, (float)d6).method_39415(mG3.coh());
        class_2872.method_22918((Matrix4fc)matrix4f, (float)d4, (float)d2, (float)d6).method_39415(mG2.coh());
    }

    /*
     * Unable to fully structure code
     */
    private void agd(class_4587 var1_1, dj$sE var2_2, class_243 var3_3, float var4_4) {
        block14: {
            block13: {
                block11: {
                    block12: {
                        var5_5 = dj.UFHNj ^ 15588909691351L;
                        var8_6 = var2_2.toBox(this.TYsOV.VI()).method_997(var3_3);
                        var7_7 = dh.afl();
                        var9_8 = this.agl(var2_2.safety());
                        var10_9 = var9_8.cob(var4_4);
                        var11_10 = var9_8.coa(Math.max(var9_8.cou(), 100.0f)).cob(var4_4);
                        try {
                            v0 = dj.MMuss;
                            v1 = var1_1;
                            v2 = var8_6;
                            v3 = var10_9.cnW();
                            if (var7_7 != null) break block11;
                            if (v3) break block12;
                        }
                        catch (MatchException v4) {
                            throw dj.agn(v4);
                        }
                        v3 = true;
                        break block11;
                    }
                    v3 = false;
                }
                try {
                    try {
                        try {
                            v5 = kH.bTJ(v1, v2, v3, false);
                            v6 = this.ZnfqN.WF();
                            if (var7_7 != null) break block13;
                            if (v6) {
                            }
                            ** GOTO lbl-1000
                        }
                        catch (MatchException v7) {
                            throw dj.agn(v7);
                        }
                        v8 = var11_10;
                        if (var7_7 != null) break block14;
                    }
                    catch (MatchException v9) {
                        throw dj.agn(v9);
                    }
                    v6 = v8.cnW();
                }
                catch (MatchException v10) {
                    throw dj.agn(v10);
                }
            }
            if (!v6) {
                v8 = var11_10;
            } else lbl-1000:
            // 2 sources

            {
                v8 = mG.UhgnI;
            }
        }
        v0.bUS(v5.dtN(v8).dtO(var10_9).dtS());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE agb(class_2338 class_23382) {
        dj dj2;
        List<class_2338> list;
        List<class_2338> list2;
        block38: {
            List<class_2338> list3;
            iS[] iSArray;
            block37: {
                long l = UFHNj ^ 0x13F5832D7A09L;
                iSArray = dh.afl();
                try {
                    if (!this.iKDmr.WF()) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
                list2 = List.of(class_23382, class_23382.method_10078(), class_23382.method_10072(), class_23382.method_10072().method_10078());
                for (class_2338 class_23383 : list2) {
                    boolean bl;
                    block35: {
                        block36: {
                            block34: {
                                block33: {
                                    try {
                                        try {
                                            bl = this.agh(class_23383);
                                            if (iSArray != null) break block33;
                                            if (!bl) return null;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        bl = this.agh(class_23383.method_10084());
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block34;
                                        if (!bl) return null;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl = this.agh(class_23383.method_10086(2));
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block35;
                                    if (bl) break block36;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl = this.agi(class_23383.method_10074());
                    }
                    try {
                        if (!bl) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    if (iSArray == null) continue;
                }
                list = new ArrayList();
                for (class_2338 class_23384 : list2) {
                    try {
                        list3 = list;
                        if (iSArray == null) {
                            list3.add(class_23384.method_10074());
                            if (iSArray == null) continue;
                            break;
                        }
                        break block37;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                list3 = List.of(class_23382.method_10095(), class_23382.method_10078().method_10095(), class_23382.method_10067(), class_23382.method_10072().method_10067(), class_23382.method_10072().method_10072(), class_23382.method_10072().method_10078().method_10072(), class_23382.method_10078().method_10078(), class_23382.method_10072().method_10078().method_10078());
            }
            List<class_2338> list4 = list3;
            for (class_2338 class_23385 : list4) {
                block39: {
                    boolean bl;
                    block40: {
                        try {
                            try {
                                try {
                                    dj2 = this;
                                    if (iSArray != null) break block38;
                                    bl = dj2.agi(class_23385);
                                    if (iSArray != null) break block39;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (bl) break block40;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    bl = list.add(class_23385);
                }
                if (iSArray == null) continue;
            }
            dj2 = this;
        }
        dj$sD dj$sD = dj2.agc(list);
        try {
            if (dj$sD == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        dj$sE dj$sE = new dj$sE(list2, dj$sD, dj$sC.vzSwM);
        return dj$sE;
    }

    /*
     * Unable to fully structure code
     */
    private dj$sD agc(List<class_2338> var1_1) {
        block28: {
            block29: {
                block23: {
                    var2_2 = dj.UFHNj ^ 13877631328698L;
                    var5_3 = false;
                    var4_4 = dh.afl();
                    var6_5 = false;
                    for (class_2338 var8_7 : var1_1) {
                        block27: {
                            block26: {
                                block24: {
                                    block25: {
                                        try {
                                            try {
                                                try {
                                                    v0 = this.agi(var8_7);
                                                    if (var4_4 != null) break block23;
                                                    if (var4_4 != null) break block24;
                                                }
                                                catch (MatchException v1) {
                                                    throw dj.agn(v1);
                                                }
                                                if (v0) break block25;
                                            }
                                            catch (MatchException v2) {
                                                throw dj.agn(v2);
                                            }
                                            return null;
                                        }
                                        catch (MatchException v3) {
                                            throw dj.agn(v3);
                                        }
                                    }
                                    v4 = this.agj(var8_7);
                                }
                                try {
                                    if (var4_4 != null) break block26;
                                    if (v4) {
                                    }
                                    ** GOTO lbl35
                                }
                                catch (MatchException v5) {
                                    throw dj.agn(v5);
                                }
                                var5_3 = true;
                                try {
                                    if (var4_4 == null) break block27;
lbl35:
                                    // 2 sources

                                    v4 = true;
                                }
                                catch (MatchException v6) {
                                    throw dj.agn(v6);
                                }
                            }
                            var6_5 = v4;
                        }
                        if (var4_4 == null) continue;
                    }
                    v0 = var5_3;
                }
                try {
                    try {
                        try {
                            try {
                                if (var4_4 != null) break block28;
                                if (!v0) break block29;
                            }
                            catch (MatchException v7) {
                                throw dj.agn(v7);
                            }
                            v0 = var6_5;
                            if (var4_4 != null) break block28;
                        }
                        catch (MatchException v8) {
                            throw dj.agn(v8);
                        }
                        if (v0) break block29;
                    }
                    catch (MatchException v9) {
                        throw dj.agn(v9);
                    }
                    return dj$sD.zrNsv;
                }
                catch (MatchException v10) {
                    throw dj.agn(v10);
                }
            }
            v0 = var5_3;
        }
        try {
            if (v0) {
                return dj$sD.XoavU;
            }
        }
        catch (MatchException v11) {
            throw dj.agn(v11);
        }
        return dj$sD.WBAxv;
    }

    private boolean agj(class_2338 class_23382) {
        return rD.dlmvG.field_1687.method_8320(class_23382).method_27852(class_2246.field_9987);
    }

    private static /* synthetic */ int agm(class_2338 class_23382) {
        return class_23382.method_10263();
    }

    private static String ago(byte[] byArray) {
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
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE afZ(class_2338 class_23382) {
        dj dj2;
        int n;
        ArrayList<class_2350> arrayList;
        block45: {
            iS[] iSArray;
            block43: {
                block44: {
                    ArrayList<class_2338> arrayList2;
                    block40: {
                        boolean bl;
                        block39: {
                            block38: {
                                block37: {
                                    dj$sE dj$sE;
                                    long l = UFHNj ^ 0x5E70E958F067L;
                                    dj$sE dj$sE2 = this.agb(class_23382);
                                    iSArray = dh.afl();
                                    try {
                                        dj$sE = dj$sE2;
                                        if (iSArray != null) return dj$sE;
                                        if (dj$sE == null) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    dj$sE = dj$sE2;
                                    return dj$sE;
                                }
                                try {
                                    try {
                                        bl = this.agh(class_23382);
                                        if (iSArray != null) break block38;
                                        if (!bl) return null;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl = this.agh(class_23382.method_10084());
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block39;
                                    if (!bl) return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                bl = this.agh(class_23382.method_10086(2));
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        try {
                            if (!bl) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        arrayList = new ArrayList<class_2350>();
                        arrayList2 = new ArrayList<class_2338>();
                        try {
                            arrayList2.add(class_23382.method_10074());
                            if (!this.agi(class_23382.method_10074())) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        for (class_2350 class_23502 : class_2350.class_2353.field_11062) {
                            block41: {
                                block42: {
                                    class_2338 class_23383 = class_23382.method_10093(class_23502);
                                    try {
                                        try {
                                            try {
                                                n = this.agi(class_23383) ? 1 : 0;
                                                if (iSArray != null) break block40;
                                                if (iSArray != null) break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            if (n == 0) break block42;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        arrayList2.add(class_23383);
                                        if (iSArray == null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                }
                                arrayList.add(class_23502);
                            }
                            if (iSArray == null) continue;
                        }
                        n = arrayList.isEmpty();
                    }
                    try {
                        if (iSArray != null) break block43;
                        if (n == 0) break block44;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj$sD dj$sD = this.agc(arrayList2);
                    try {
                        if (dj$sD == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj$sE dj$sE = new dj$sE(List.of(class_23382), dj$sD, dj$sC.iiJny);
                    return dj$sE;
                }
                n = arrayList.size();
            }
            try {
                try {
                    try {
                        if (iSArray != null) break block45;
                        if (n != 1) return null;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj2 = this;
                    if (iSArray != null) return dj2.aga(class_23382, (class_2350)arrayList.get(0));
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
                n = dj2.NUWIx.WF() ? 1 : 0;
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
        }
        try {
            if (n == 0) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        dj2 = this;
        return dj2.aga(class_23382, (class_2350)arrayList.get(0));
    }

    private boolean agi(class_2338 class_23382) {
        boolean bl;
        block18: {
            block20: {
                block19: {
                    long l = UFHNj ^ 0x331C8330B87BL;
                    class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        bl = class_26802.method_27852(class_2246.field_9987);
                                                        if (iSArray != null) break block18;
                                                        if (bl) break block19;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dj.agn(matchException);
                                                    }
                                                    bl = class_26802.method_27852(class_2246.field_10540);
                                                    if (iSArray != null) break block18;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dj.agn(matchException);
                                                }
                                                if (bl) break block19;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            bl = class_26802.method_27852(class_2246.field_22423);
                                            if (iSArray != null) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (bl) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl = class_26802.method_27852(class_2246.field_10443);
                                    if (iSArray != null) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (bl) break block19;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            bl = class_26802.method_27852(class_2246.field_23152);
                            if (iSArray != null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        if (!bl) break block20;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                bl = true;
                break block18;
            }
            bl = false;
        }
        return bl;
    }

    private void agf(class_287 class_2872, Matrix4f matrix4f, class_238 class_2382, mG mG2) {
        long l = UFHNj ^ 0x22A55A80B882L;
        int n = mG2.cob(0.35f).coh();
        try {
            class_2872.method_22918((Matrix4fc)matrix4f, (float)class_2382.field_1323, (float)class_2382.field_1322, (float)class_2382.field_1321).method_39415(n);
            class_2872.method_22918((Matrix4fc)matrix4f, (float)class_2382.field_1320, (float)class_2382.field_1322, (float)class_2382.field_1321).method_39415(n);
            class_2872.method_22918((Matrix4fc)matrix4f, (float)class_2382.field_1320, (float)class_2382.field_1322, (float)class_2382.field_1324).method_39415(n);
            class_2872.method_22918((Matrix4fc)matrix4f, (float)class_2382.field_1323, (float)class_2382.field_1322, (float)class_2382.field_1324).method_39415(n);
            if (!this.ZnfqN.WF()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        float f = (float)class_2382.field_1323;
        float f2 = (float)class_2382.field_1322;
        float f3 = (float)class_2382.field_1321;
        float f4 = (float)class_2382.field_1320;
        float f5 = (float)class_2382.field_1324;
        float f6 = Math.min(0.04f, Math.min(f4 - f, f5 - f3) * 0.5f);
        int n2 = mG2.coh();
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f3).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f3).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f5 - f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f5 - f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f5).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f5).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f + f6, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f + f6, f2, f5 - f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f, f2, f5 - f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4 - f6, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f3 + f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4, f2, f5 - f6).method_39415(n2);
        class_2872.method_22918((Matrix4fc)matrix4f, f4 - f6, f2, f5 - f6).method_39415(n2);
    }

    private static int ags(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2AA9;
        if (gUpUM[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = CvhLh[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HQhKx.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HQhKx.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dj", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dj.gUpUM[n2] = n3;
        }
        return gUpUM[n2];
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void afU(class_4587 class_45872, class_243 class_2432, List<dj$sB> list) {
        long l = UFHNj ^ 0x57895CEA73AFL;
        iS[] iSArray = dh.afl();
        MMuss.startBatch();
        iS[] iSArray2 = iSArray;
        try {
            for (dj$sB dj$sB : list) {
                try {
                    this.agd(class_45872, dj$sB.hole(), class_2432, dj$sB.fadeFactor());
                    if (iSArray2 != null) return;
                    if (iSArray2 == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                    return;
                }
            }
        }
        finally {
            MMuss.endBatch();
        }
    }

    @hG
    public void afR(gH.th th2) {
        block4: {
            dj dj2;
            block5: {
                long l = UFHNj ^ 0x712C21A919F7L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        dj2 = this;
                        if (iSArray != null) break block4;
                        if (dj2.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    this.soBDJ.clear();
                    this.Dpuot.clear();
                    return;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            dj2 = this;
        }
        dj2.soBDJ = this.afY();
    }

    private static Throwable agn(Throwable throwable) {
        return throwable;
    }

    private static CallSite agr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void afW() {
        long l = UFHNj ^ 0x2D1959938863L;
        Iterator<dj$sE> iterator = this.soBDJ.iterator();
        iS[] iSArray = dh.afl();
        while (iterator.hasNext()) {
            dj$sE dj$sE = iterator.next();
            try {
                if (this.Dpuot.containsKey(dj$sE) && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
            rk rk2 = new rk((int)dj.agu("w", (int)15599, (long)(0x70CCB875034DA40L ^ l))).dhs(rj.UPXqT);
            rk2.dhg();
            this.Dpuot.put(dj$sE, rk2);
            if (iSArray == null) continue;
        }
    }

    private List<dj$sB> afT() {
        long l = UFHNj ^ 0x6C5EC7026477L;
        ArrayList<dj$sB> arrayList = new ArrayList<dj$sB>();
        iS[] iSArray = dh.afl();
        Iterator<Map.Entry<dj$sE, rk>> iterator = this.Dpuot.entrySet().iterator();
        while (iterator.hasNext()) {
            block20: {
                boolean bl;
                float f;
                dj$sE dj$sE;
                block21: {
                    block19: {
                        block17: {
                            float f2;
                            block18: {
                                float f3;
                                rk rk2;
                                Map.Entry<dj$sE, rk> entry = iterator.next();
                                dj$sE = entry.getKey();
                                rk rk3 = entry.getValue();
                                boolean bl2 = this.afX(dj$sE);
                                try {
                                    rk2 = rk3;
                                    f3 = bl2 ? 1.0f : 0.0f;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                f = rk2.dhd(f3);
                                try {
                                    try {
                                        try {
                                            try {
                                                bl = bl2;
                                                if (iSArray != null) break block17;
                                                if (bl) break block18;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            float f4 = f - 0.0f;
                                            bl = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                            if (iSArray != null) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (bl) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    iterator.remove();
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            bl = (f2 = f - 0.0f) == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (iSArray != null) break block19;
                            if (!bl) continue;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        bl = jJ.bIA(dj$sE.center());
                    }
                    try {
                        try {
                            if (iSArray != null) break block20;
                            if (bl) break block21;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                bl = arrayList.add(new dj$sB(dj$sE, f));
            }
            if (iSArray == null) continue;
        }
        return arrayList;
    }

    private void afV(class_4587 class_45872, class_243 class_2432, List<dj$sB> list) {
        this.age(class_45872, class_2432, list);
    }

    private List<dj$sE> afY() {
        class_2338 class_23382;
        int n;
        int n2;
        int n3;
        int n4;
        int n5;
        class_2338 class_23383;
        iS[] iSArray;
        ArrayList<dj$sE> arrayList;
        block42: {
            block43: {
                block36: {
                    long l = UFHNj ^ 0x70C074A93B9L;
                    arrayList = new ArrayList<dj$sE>();
                    HashSet<class_2338> hashSet = new HashSet<class_2338>();
                    iSArray = dh.afl();
                    class_23383 = rD.dlmvG.field_1724.method_24515();
                    n5 = class_3532.method_15384((double)this.LEzwX.VI());
                    int n6 = class_3532.method_15384((double)this.uQNEX.VI());
                    n4 = class_23383.method_10264() - n6;
                    block28: while (true) {
                        int n7 = n4;
                        block29: while (n7 <= class_23383.method_10264() + n6) {
                            n3 = -n5;
                            if (iSArray != null) break block36;
                            n2 = n3;
                            block30: while (true) {
                                int n8 = n2;
                                block31: while (n8 <= n5) {
                                    n7 = -n5;
                                    if (iSArray != null) continue block29;
                                    n = n7;
                                    while (n <= n5) {
                                        block37: {
                                            block38: {
                                                dj$sE dj$sE;
                                                block40: {
                                                    block39: {
                                                        class_23382 = new class_2338(class_23383.method_10263() + n2, n4, class_23383.method_10260() + n);
                                                        try {
                                                            if (iSArray != null) break block37;
                                                            n8 = hashSet.contains(class_23382) ? 1 : 0;
                                                            if (iSArray != null) continue block31;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dj.agn(matchException);
                                                        }
                                                        try {
                                                            try {
                                                                if (n8 != 0) break block38;
                                                                if (!(class_23382.method_46558().method_1025(rD.dlmvG.field_1724.method_73189()) > this.agk())) break block39;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dj.agn(matchException);
                                                            }
                                                            if (iSArray == null) break block38;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dj.agn(matchException);
                                                        }
                                                    }
                                                    dj$sE = this.afZ(class_23382);
                                                    try {
                                                        block41: {
                                                            try {
                                                                try {
                                                                    if (iSArray != null) break block40;
                                                                    if (dj$sE != null) break block41;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw dj.agn(matchException);
                                                                }
                                                                if (iSArray == null) break block38;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dj.agn(matchException);
                                                            }
                                                        }
                                                        arrayList.add(dj$sE);
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dj.agn(matchException);
                                                    }
                                                }
                                                hashSet.addAll(dj$sE.cells());
                                            }
                                            ++n;
                                        }
                                        if (iSArray == null) continue;
                                    }
                                    ++n2;
                                    if (iSArray == null) continue block30;
                                }
                                break;
                            }
                            ++n4;
                            if (iSArray == null) continue block28;
                        }
                        break;
                    }
                    n3 = this.oBPYh.WF() ? 1 : 0;
                }
                try {
                    try {
                        if (iSArray != null) break block42;
                        if (n3 != 0) break block43;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    return arrayList;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            n4 = rD.dlmvG.field_1687.method_31607();
            n3 = -n5;
        }
        n2 = n3;
        block33: while (true) {
            int n9 = n2;
            block34: while (n9 <= n5) {
                for (n = -n5; n <= n5; ++n) {
                    boolean bl;
                    block44: {
                        class_23382 = new class_2338(class_23383.method_10263() + n2, n4, class_23383.method_10260() + n);
                        double d = class_23382.method_46558().method_1025(rD.dlmvG.field_1724.method_73189()) - this.agk();
                        n9 = d == 0.0 ? 0 : (d > 0.0 ? 1 : -1);
                        if (iSArray != null) continue block34;
                        try {
                            block45: {
                                try {
                                    try {
                                        if (iSArray != null) break block44;
                                        if (n9 <= 0) break block45;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            bl = rD.dlmvG.field_1687.method_8320(class_23382).method_27852(class_2246.field_9987);
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    try {
                        block46: {
                            try {
                                try {
                                    if (iSArray != null) continue;
                                    if (!bl) break block46;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl = arrayList.add(new dj$sE(List.of(class_23382), dj$sD.btXid, dj$sC.WdDaI));
                        continue;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                ++n2;
                if (iSArray == null) continue block33;
            }
            break;
        }
        return arrayList;
    }

    /*
     * Exception decompiling
     */
    private boolean afX(dj$sE var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [8[TRYBLOCK]], but top level block is 20[SWITCH]
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

    private static CallSite agu(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void afS(go.sX sX2) {
        dj dj2;
        List<dj$sB> list;
        class_243 class_2432;
        class_4587 class_45872;
        block24: {
            boolean bl;
            block22: {
                iS[] iSArray;
                block23: {
                    block25: {
                        block20: {
                            class_746 class_7462;
                            block21: {
                                long l = UFHNj ^ 0x70D1467A33A0L;
                                iSArray = dh.afl();
                                try {
                                    try {
                                        try {
                                            if (!this.bab()) break block20;
                                            class_7462 = rD.dlmvG.field_1724;
                                            if (iSArray != null) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (class_7462 == null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    class_7462 = rD.dlmvG.method_1560();
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            if (class_7462 != null) break block25;
                        }
                        return;
                    }
                    try {
                        this.afW();
                        if (this.Dpuot.isEmpty()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    class_45872 = sX2.bbh();
                    class_2432 = rD.dlmvG.field_1773.method_19418().method_71156().method_22882();
                    list = this.afT();
                    try {
                        bl = list.isEmpty();
                        if (iSArray != null) break block22;
                        if (!bl) break block23;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    return;
                }
                try {
                    dj2 = this;
                    if (iSArray != null) break block24;
                    bl = dj2.lvORN.SZ();
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            try {
                if (bl) {
                    this.afU(class_45872, class_2432, list);
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
            dj2 = this;
        }
        dj2.afV(class_45872, class_2432, list);
    }

    @Override
    public void YO() {
        super.YO();
        this.soBDJ.clear();
        this.Dpuot.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dj.class, "agq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(dj.class, "agt", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
