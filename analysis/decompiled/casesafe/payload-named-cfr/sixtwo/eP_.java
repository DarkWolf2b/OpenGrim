/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.eQ;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.oW;
import sixtwo.og;
import sixtwo.ov;
import sixtwo.pe;
import sixtwo.qL;
import sixtwo.qP;

public class eP
extends gg {
    private final cC NAanF;
    private final cF ODZUf;
    private final cv OqtQM;
    private final cw AGzRp;
    private final cw GJMaG;
    private final cw OwGUK;
    private final ct PVTLs;
    private final cu lRWug;
    private final cu xKdBS;
    private final ct AyJJM;
    private final cu zhiUo;
    private final cu oGBUC;
    private final cC AZdEq;
    private final cJ gXxAz;
    private final cJ KSprU;
    private final cJ OWsAx;
    private final cC rJCaB;
    private final og AoABv;
    private final pe NCCFN;
    private final mT tORnN;
    static float SKXmj = 5.0f;
    private boolean NTGZO;
    private boolean rqlbi;
    private LivingEntity ZpjWv;
    private static int[] LuzRg;
    private static long zBBpC;
    private static String[] UsgGq;
    private static String[] TnuSz;
    private static Map CqHSl;
    private static long[] orqhR;
    private static Integer[] zWPlL;
    private static Map AutBw;
    private static long QZFQM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static native void aBT(int[] var0);

    public static native int[] aBU();

    private static native MatchException aBV(MatchException var0);

    private static native CallSite aCc(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aBZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    public eP() {
        long l2 = zBBpC ^ 0x1BF6C9A5C618L;
        super(gf.aZL((int)eP.aCc("j", (int)28496, (long)(0x5DD91424A40A65B8L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eP.aCc("j", (int)17482, (long)(0x6173DEC6E46CCEBCL ^ l2))];
        nArray[0] = (int)eP.aCc("j", (int)5864, (long)(0x65F8FFAC30339C3CL ^ l2));
        nArray[1] = (int)eP.aCc("j", (int)28202, (long)(0x7C42ABC3AE84E4F1L ^ l2));
        nArray[2] = (int)eP.aCc("j", (int)29234, (long)(0x526DBB8CF4CE7885L ^ l2));
        nArray[3] = (int)eP.aCc("j", (int)20826, (long)(0x32C905D6742CDBE9L ^ l2));
        nArray[4] = (int)eP.aCc("j", (int)3243, (long)(0x223A5CFC6658675L ^ l2));
        nArray[5] = (int)eP.aCc("j", (int)20924, (long)(0x3A8857C3C579DB7AL ^ l2));
        nArray[eP.aCc("j", (int)727, (long)(0xA1C693BCF518837L ^ l2))] = (int)eP.aCc("j", (int)4753, (long)(0x3D7C56215A89984BL ^ l2));
        nArray[eP.aCc("j", (int)3581, (long)(0x6E7F5B37A95F0722L ^ l2))] = (int)eP.aCc("j", (int)32232, (long)(0x3830D41751BC770CL ^ l2));
        nArray[eP.aCc("j", (int)20081, (long)(0x39A056AD45B1449BL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray[eP.aCc("j", (int)2277, (long)(0x7330D88D5BA48209L ^ l2))] = (int)eP.aCc("j", (int)3472, (long)(0x6F84FC10F9B28734L ^ l2));
        nArray[eP.aCc("j", (int)22087, (long)(0x3646A5ACCBD4DC92L ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray[eP.aCc("j", (int)6795, (long)(0x548E51B7A06C103AL ^ l2))] = (int)eP.aCc("j", (int)249, (long)(0x6C9468D9DA330A3DL ^ l2));
        nArray[eP.aCc("j", (int)31533, (long)(0x7554B9589E3CF1C3L ^ l2))] = (int)eP.aCc("j", (int)213, (long)(0x588DD541A8C30A77L ^ l2));
        nArray[eP.aCc("j", (int)27335, (long)(0x727F1EA3C7E96033L ^ l2))] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray[eP.aCc("j", (int)7543, (long)(0x38C73797230417B2L ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray[eP.aCc("j", (int)10821, (long)(0x92C7ECFF89F20A7L ^ l2))] = (int)eP.aCc("j", (int)17329, (long)(0x3CA12E10B4A4C958L ^ l2));
        nArray[eP.aCc("j", (int)27939, (long)(0x7A5740371BD367CEL ^ l2))] = (int)eP.aCc("j", (int)21874, (long)(0x3E926B0301E5FC4L ^ l2));
        this.NAanF = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(1.5).Vx(12.0).VA(4.0).Vz((String)((Object)eP.aBZ("z", (int)4163, (long)(0x6AFCDBD1749A15A2L ^ l2))));
        int[] nArray2 = new int[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))];
        nArray2[0] = (int)eP.aCc("j", (int)32166, (long)(0x3D6DEB636E6F718L ^ l2));
        nArray2[1] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray2[2] = (int)eP.aCc("j", (int)8229, (long)(0x64FEC33A5FF52AF9L ^ l2));
        nArray2[3] = (int)eP.aCc("j", (int)31477, (long)(0x6E38318DC2F57045L ^ l2));
        nArray2[4] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray2[5] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray2[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        this.ODZUf = new cF(this, mr.clS(nArray2)).VS(jg$tJ.OCdZM);
        int[] nArray3 = new int[eP.aCc("j", (int)31198, (long)(0x3435958851A5F32BL ^ l2))];
        nArray3[0] = (int)eP.aCc("j", (int)18161, (long)(0x5A40D1EB6F01CC32L ^ l2));
        nArray3[1] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray3[2] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray3[3] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray3[4] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray3[5] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray3[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray3[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)6013, (long)(0x1BAC4C0FD0719DB1L ^ l2));
        nArray3[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)13521, (long)(0x66E88E2C5AF5BE70L ^ l2));
        nArray3[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray3[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray3[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)21172, (long)(0x6EE1F01497BED862L ^ l2));
        nArray3[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray3[eP.aCc("j", (int)28086, (long)(0x3E12BCE05C956771L ^ l2))] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        this.OqtQM = new cv(this, mr.clS(nArray3));
        int[] nArray4 = new int[eP.aCc("j", (int)31198, (long)(0x3435958851A5F32BL ^ l2))];
        nArray4[0] = (int)eP.aCc("j", (int)1440, (long)(0x1A16364D3440F5FL ^ l2));
        nArray4[1] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray4[2] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray4[3] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray4[4] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray4[5] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray4[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray4[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)14752, (long)(0x29EC3EC8716BB31DL ^ l2));
        nArray4[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray4[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray4[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray4[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray4[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))] = (int)eP.aCc("j", (int)11527, (long)(0x14FFC2CCB8F8A7FAL ^ l2));
        nArray4[eP.aCc("j", (int)28086, (long)(0x3E12BCE05C956771L ^ l2))] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        this.AGzRp = new cw(this.OqtQM, mr.clS(nArray4));
        int[] nArray5 = new int[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))];
        nArray5[0] = (int)eP.aCc("j", (int)21269, (long)(0x5314EEDA567BD9DBL ^ l2));
        nArray5[1] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray5[2] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray5[3] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray5[4] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray5[5] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray5[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray5[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)25837, (long)(0x65916738AB61EE25L ^ l2));
        nArray5[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray5[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)7008, (long)(0x539F7D84873891B2L ^ l2));
        nArray5[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray5[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)24474, (long)(0x4513285576ECD543L ^ l2));
        this.GJMaG = new cw(this.OqtQM, mr.clS(nArray5));
        int[] nArray6 = new int[eP.aCc("j", (int)17136, (long)(0x664E29A1A1D54816L ^ l2))];
        nArray6[0] = (int)eP.aCc("j", (int)21269, (long)(0x5314EEDA567BD9DBL ^ l2));
        nArray6[1] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray6[2] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray6[3] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray6[4] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray6[5] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray6[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray6[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)21269, (long)(0x5314EEDA567BD9DBL ^ l2));
        nArray6[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray6[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray6[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)15571, (long)(0x583B51A76E6C3624L ^ l2));
        nArray6[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray6[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))] = (int)eP.aCc("j", (int)18987, (long)(0x4C6933F5B5A8C0F6L ^ l2));
        nArray6[eP.aCc("j", (int)28086, (long)(0x3E12BCE05C956771L ^ l2))] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray6[eP.aCc("j", (int)31198, (long)(0x3435958851A5F32BL ^ l2))] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray6[eP.aCc("j", (int)17457, (long)(0x3CCC98CC52E54EFAL ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray6[eP.aCc("j", (int)31500, (long)(0x43108207F4FD71B9L ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray6[eP.aCc("j", (int)12602, (long)(0x61475B4B6380BBE2L ^ l2))] = (int)eP.aCc("j", (int)18161, (long)(0x5A40D1EB6F01CC32L ^ l2));
        nArray6[eP.aCc("j", (int)7808, (long)(0x1FCC09D9F966147BL ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray6[eP.aCc("j", (int)19610, (long)(0x7027630B504464BL ^ l2))] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray6[eP.aCc("j", (int)28624, (long)(0x69B9CC3F461AE579L ^ l2))] = (int)eP.aCc("j", (int)27794, (long)(0x146C02012A4CE637L ^ l2));
        this.OwGUK = new cw(this.OqtQM, mr.clS(nArray6));
        int[] nArray7 = new int[eP.aCc("j", (int)17457, (long)(0x3CCC98CC52E54EFAL ^ l2))];
        nArray7[0] = (int)eP.aCc("j", (int)18161, (long)(0x5A40D1EB6F01CC32L ^ l2));
        nArray7[1] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray7[2] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray7[3] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray7[4] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray7[5] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray7[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray7[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)23672, (long)(0x63C5F8C772F568AL ^ l2));
        nArray7[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray7[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray7[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray7[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray7[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray7[eP.aCc("j", (int)28086, (long)(0x3E12BCE05C956771L ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray7[eP.aCc("j", (int)31198, (long)(0x3435958851A5F32BL ^ l2))] = (int)eP.aCc("j", (int)24298, (long)(0x377BBF1E81C5455L ^ l2));
        this.PVTLs = new ct(this, mr.clS(nArray7));
        int[] nArray8 = new int[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))];
        nArray8[0] = (int)eP.aCc("j", (int)15571, (long)(0x583B51A76E6C3624L ^ l2));
        nArray8[1] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray8[2] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        nArray8[3] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray8[4] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray8[5] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray8[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray8[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        this.lRWug = new cu(this.PVTLs, mr.clS(nArray8));
        int[] nArray9 = new int[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))];
        nArray9[0] = (int)eP.aCc("j", (int)26340, (long)(0x7B9CD4923B0A6C29L ^ l2));
        nArray9[1] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray9[2] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray9[3] = (int)eP.aCc("j", (int)32232, (long)(0x3830D41751BC770CL ^ l2));
        nArray9[4] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray9[5] = (int)eP.aCc("j", (int)19349, (long)(0x4E404B8EFD9F412CL ^ l2));
        this.xKdBS = new cu(this.PVTLs, mr.clS(nArray9));
        int[] nArray10 = new int[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))];
        nArray10[0] = (int)eP.aCc("j", (int)23551, (long)(0x4E511B5FFCBA5144L ^ l2));
        nArray10[1] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray10[2] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray10[3] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray10[4] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray10[5] = (int)eP.aCc("j", (int)27794, (long)(0x146C02012A4CE637L ^ l2));
        nArray10[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray10[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)26312, (long)(0x2AC14857F5B3EC36L ^ l2));
        nArray10[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray10[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray10[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray10[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        this.AyJJM = new ct(this, mr.clS(nArray10));
        int[] nArray11 = new int[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))];
        nArray11[0] = (int)eP.aCc("j", (int)11174, (long)(0x2A210642A3DAA164L ^ l2));
        nArray11[1] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray11[2] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        nArray11[3] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray11[4] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray11[5] = (int)eP.aCc("j", (int)19851, (long)(0x3518C66D7AA5C741L ^ l2));
        nArray11[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray11[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray11[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray11[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray11[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        this.zhiUo = new cu(this.AyJJM, mr.clS(nArray11));
        int[] nArray12 = new int[eP.aCc("j", (int)31198, (long)(0x3435958851A5F32BL ^ l2))];
        nArray12[0] = (int)eP.aCc("j", (int)4742, (long)(0x252AF52584AB1865L ^ l2));
        nArray12[1] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray12[2] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray12[3] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray12[4] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray12[5] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        nArray12[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray12[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray12[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)16316, (long)(0x649A124E0FBDB57DL ^ l2));
        nArray12[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray12[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray12[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray12[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray12[eP.aCc("j", (int)28086, (long)(0x3E12BCE05C956771L ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        this.oGBUC = new cu(this.AyJJM, mr.clS(nArray12));
        int[] nArray13 = new int[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))];
        nArray13[0] = (int)eP.aCc("j", (int)1265, (long)(0x7AA32EC296010E45L ^ l2));
        nArray13[1] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray13[2] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray13[3] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray13[4] = (int)eP.aCc("j", (int)15571, (long)(0x583B51A76E6C3624L ^ l2));
        nArray13[5] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray13[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4150, (long)(0x47BA1B8AA5499AC6L ^ l2));
        nArray13[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray13[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray13[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray13[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)16079, (long)(0x6919831E36D4342AL ^ l2));
        nArray13[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        this.AZdEq = new cC(this, mr.clS(nArray13)).Vy(0.01).Vw(2.5).Vx(5.0).VA(3.0).Vz((String)((Object)eP.aBZ("z", (int)14312, (long)(0x1FEA1103A2273208L ^ l2))));
        int[] nArray14 = new int[eP.aCc("j", (int)27637, (long)(0x54EECC42AC3A6152L ^ l2))];
        nArray14[0] = (int)eP.aCc("j", (int)12044, (long)(0x30546B649F8525DFL ^ l2));
        nArray14[1] = (int)eP.aCc("j", (int)16858, (long)(0x8DA7567AEDACB35L ^ l2));
        nArray14[2] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray14[3] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray14[4] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray14[5] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray14[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray14[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)9128, (long)(0x759A53DC8C9CA954L ^ l2));
        nArray14[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        nArray14[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)18589, (long)(0x5D905533F3FB4264L ^ l2));
        nArray14[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)4286, (long)(0x5D17FB6FDBCC9A18L ^ l2));
        nArray14[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))] = (int)eP.aCc("j", (int)24046, (long)(0x57DEA4EF4F9C5727L ^ l2));
        this.gXxAz = new cJ(this, mr.clS(nArray14)).WE(false);
        int[] nArray15 = new int[eP.aCc("j", (int)9447, (long)(0x27CEBFC88DB9AE27L ^ l2))];
        nArray15[0] = (int)eP.aCc("j", (int)17207, (long)(0x22473B2977D3498FL ^ l2));
        nArray15[1] = (int)eP.aCc("j", (int)16858, (long)(0x8DA7567AEDACB35L ^ l2));
        nArray15[2] = (int)eP.aCc("j", (int)13412, (long)(0x3394BF28122FBE83L ^ l2));
        nArray15[3] = (int)eP.aCc("j", (int)32485, (long)(0x2E17FF88B8D2F457L ^ l2));
        nArray15[4] = (int)eP.aCc("j", (int)31338, (long)(0x4CD35BC9845DF092L ^ l2));
        nArray15[5] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray15[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray15[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)16316, (long)(0x649A124E0FBDB57DL ^ l2));
        nArray15[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray15[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))] = (int)eP.aCc("j", (int)27561, (long)(0x4DFAEDED346CE115L ^ l2));
        nArray15[eP.aCc("j", (int)19158, (long)(0x19E4B43E84E04019L ^ l2))] = (int)eP.aCc("j", (int)23738, (long)(0x2A2D330E0F525640L ^ l2));
        this.KSprU = new cJ(this, mr.clS(nArray15)).WE(false);
        int[] nArray16 = new int[eP.aCc("j", (int)28511, (long)(0x2E169A48E5C4658FL ^ l2))];
        nArray16[0] = (int)eP.aCc("j", (int)20077, (long)(0x75FF7B79C6A5C486L ^ l2));
        nArray16[1] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray16[2] = (int)eP.aCc("j", (int)18589, (long)(0x5D905533F3FB4264L ^ l2));
        nArray16[3] = (int)eP.aCc("j", (int)7053, (long)(0x9B11893D036916CL ^ l2));
        nArray16[4] = (int)eP.aCc("j", (int)29412, (long)(0x7906D017EE64F815L ^ l2));
        nArray16[5] = (int)eP.aCc("j", (int)4395, (long)(0x3FD55CA02C7D9B8BL ^ l2));
        nArray16[eP.aCc("j", (int)7295, (long)(0x7B86E5148F9496DCL ^ l2))] = (int)eP.aCc("j", (int)14752, (long)(0x29EC3EC8716BB31DL ^ l2));
        nArray16[eP.aCc("j", (int)22479, (long)(0x4DC721CBCACBDD75L ^ l2))] = (int)eP.aCc("j", (int)10664, (long)(0x610788CAFBF4A37FL ^ l2));
        nArray16[eP.aCc("j", (int)30265, (long)(0x294EF92D9F737CCAL ^ l2))] = (int)eP.aCc("j", (int)16316, (long)(0x649A124E0FBDB57DL ^ l2));
        this.OWsAx = new cJ(this, mr.clS(nArray16)).WE(false);
        this.rJCaB = new cC(this, mr.clS(new int[]{(int)eP.aCc("j", (int)14752, (long)(0x29EC3EC8716BB31DL ^ l2)), (int)eP.aCc("j", (int)10664, (long)(0x610788CAFBF4A37FL ^ l2)), (int)eP.aCc("j", (int)16316, (long)(0x649A124E0FBDB57DL ^ l2))})).Vy(1.0).Vw(10.0).Vx(360.0).VA(180.0).Vz((String)((Object)eP.aBZ("z", (int)3844, (long)(0x4B5CA6AB0F100AE6L ^ l2))));
        this.tORnN = mT.cpz();
        this.AoABv = new og();
        int[] nArray17 = eP.aBU();
        try {
            this.NCCFN = new pe();
            if (nArray17 != null) {
                iS.bwK("D1dXbc");
            }
        }
        catch (MatchException matchException) {
            throw eP.aBV(matchException);
        }
    }

    static {
        Loader.doInit(eP.class);
        eP._0a8c9c238fa83059f98b98698224cc7d();
    }

    private static native void _0a8c9c238fa83059f98b98698224cc7d();

    @Override
    public native void YO();

    private native float aBQ();

    private native void aBI(oW var1, qP var2);

    private native boolean aBL();

    private native boolean aBM();

    @hG
    public native void aBC(gH.th var1);

    private native void aBR();

    @hG
    public native void aBB(gv var1);

    private native oW aBH(LivingEntity var1);

    private native LivingEntity aBP();

    private native void aBJ(oW var1, qP var2);

    private native void aBO(LivingEntity var1, ov var2, qL var3);

    private native void aBD(eQ var1);

    private static native String aBW(byte[] var0);

    private native void aBK(oW var1, qP var2);

    private native void aBG(LivingEntity var1, eQ var2);

    private native boolean aBN();

    private static native int aCb(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @hG
    public native void aBA(gM var1);

    public native LivingEntity aBS();

    private static native int aCa(int var0, long var1);

    private native ov aBF(eQ var1, boolean var2, qL var3);

    private static native Object aBY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aBX(int var0, long var1);

    private native void aBE(boolean var1, eQ var2);
}

