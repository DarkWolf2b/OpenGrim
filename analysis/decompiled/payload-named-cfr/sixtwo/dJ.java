/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.item.ItemStack
 *  net.minecraft.screen.slot.Slot
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.item.ItemStack;
import net.minecraft.screen.slot.Slot;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class dJ
extends gg {
    private final cJ hRuUo;
    private final cJ Twcyd;
    private final cJ AkIWJ;
    private final cJ kshzP;
    private final ct MjLVq;
    private final cu GndWc;
    private final cu lULpb;
    private final ct XujOg;
    private final cu BEFfA;
    private final cu FkJRf;
    private final cu RCVzG;
    private final cu iUlIH;
    private final ct cnoHj;
    private final cu YdPTn;
    private final cu QgNbo;
    private Screen bGfmG;
    private Slot wZqCT;
    private double AoTLF;
    private boolean MfpDd;
    private boolean UGWve;
    private boolean aLgGR;
    private static long BBSYk;
    private static long[] CXTPO;
    private static Integer[] IsjYj;
    private static Map crFLs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _f6f055b5122afffdaca62a3a3058ae70();

    public dJ() {
        long l2 = BBSYk ^ 0x3B16EFAFEA02L;
        super(gf.aZL((int)dJ.amZ("h", (int)13245, (long)(0x35D3B3C0F70A9403L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dJ.amZ("h", (int)17906, (long)(0x6954F1D9F192E203L ^ l2))];
        nArray[0] = (int)dJ.amZ("h", (int)28471, (long)(0x2D57C30A986748D8L ^ l2));
        nArray[1] = (int)dJ.amZ("h", (int)6180, (long)(0x3BA0BDC54A86BF93L ^ l2));
        nArray[2] = (int)dJ.amZ("h", (int)3329, (long)(0x14097D9966AAAF7L ^ l2));
        nArray[3] = (int)dJ.amZ("h", (int)4431, (long)(0x2CBA286B244436D2L ^ l2));
        nArray[4] = (int)dJ.amZ("h", (int)526, (long)(0x30E3CF3F1785259AL ^ l2));
        nArray[5] = (int)dJ.amZ("h", (int)5054, (long)(0xF0350706C66B428L ^ l2));
        nArray[dJ.amZ("h", (int)1314, (long)(0x365907484C9D22D1L ^ l2))] = (int)dJ.amZ("h", (int)3174, (long)(0x753489356A802BCFL ^ l2));
        nArray[dJ.amZ("h", (int)10736, (long)(0x33898C6682780E76L ^ l2))] = (int)dJ.amZ("h", (int)30537, (long)(0x48F16119F76A50EFL ^ l2));
        nArray[dJ.amZ("h", (int)387, (long)(0x2D7D7B8D61D9A60AL ^ l2))] = (int)dJ.amZ("h", (int)29126, (long)(0x43163DC6C5045656L ^ l2));
        this.hRuUo = new cJ(this, mr.clS(nArray)).WE(true);
        int[] nArray2 = new int[dJ.amZ("h", (int)22206, (long)(0x6ADB4D59D5F6F12CL ^ l2))];
        nArray2[0] = (int)dJ.amZ("h", (int)14298, (long)(0x2E1F9F96D3DE9069L ^ l2));
        nArray2[1] = (int)dJ.amZ("h", (int)25471, (long)(0x6017C357618D4482L ^ l2));
        nArray2[2] = (int)dJ.amZ("h", (int)28664, (long)(0xA2EC029CF8A4861L ^ l2));
        nArray2[3] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray2[4] = (int)dJ.amZ("h", (int)22115, (long)(0x4544A9E2E14DF1D5L ^ l2));
        nArray2[5] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray2[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray2[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray2[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)5717, (long)(0x2ED055643F6631D2L ^ l2));
        nArray2[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray2[dJ.amZ("h", (int)23620, (long)(0x351398A6FF007BA2L ^ l2))] = (int)dJ.amZ("h", (int)21798, (long)(0x77D591D412A72BAL ^ l2));
        nArray2[dJ.amZ("h", (int)16866, (long)(0x9D6D5759402E603L ^ l2))] = (int)dJ.amZ("h", (int)5212, (long)(0x1BAB1D2DFBD333CDL ^ l2));
        nArray2[dJ.amZ("h", (int)24141, (long)(0x61671F3137AF9AEL ^ l2))] = (int)dJ.amZ("h", (int)24160, (long)(0x5663074B623A79E2L ^ l2));
        nArray2[dJ.amZ("h", (int)19762, (long)(0x31102F08C7B86AD9L ^ l2))] = (int)dJ.amZ("h", (int)5314, (long)(0x2EFC469A91D63351L ^ l2));
        nArray2[dJ.amZ("h", (int)19050, (long)(0xD40E8906F086DC5L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray2[dJ.amZ("h", (int)29266, (long)(0x356DD6886E5D55E8L ^ l2))] = (int)dJ.amZ("h", (int)25192, (long)(0x1539D060690DC5CDL ^ l2));
        nArray2[dJ.amZ("h", (int)3604, (long)(0x51F5EC69EA70A9B6L ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray2[dJ.amZ("h", (int)4466, (long)(0x23C97A70A026B690L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray2[dJ.amZ("h", (int)18422, (long)(0xB2E8DF1A333E06CL ^ l2))] = (int)dJ.amZ("h", (int)30915, (long)(0x2F24F048BD05F71L ^ l2));
        this.Twcyd = new cJ(this, mr.clS(nArray2)).WE(true);
        int[] nArray3 = new int[dJ.amZ("h", (int)13379, (long)(0xC7C8924677D13FAL ^ l2))];
        nArray3[0] = (int)dJ.amZ("h", (int)23552, (long)(0x63CF10ECC732FB88L ^ l2));
        nArray3[1] = (int)dJ.amZ("h", (int)25471, (long)(0x6017C357618D4482L ^ l2));
        nArray3[2] = (int)dJ.amZ("h", (int)28664, (long)(0xA2EC029CF8A4861L ^ l2));
        nArray3[3] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray3[4] = (int)dJ.amZ("h", (int)22115, (long)(0x4544A9E2E14DF1D5L ^ l2));
        nArray3[5] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray3[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray3[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray3[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)5717, (long)(0x2ED055643F6631D2L ^ l2));
        nArray3[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray3[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)22400, (long)(0x395344373D16F021L ^ l2));
        nArray3[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray3[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray3[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)30156, (long)(0x6C7208C9CCD6D270L ^ l2));
        nArray3[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))] = (int)dJ.amZ("h", (int)26104, (long)(0x10C446F4302DC256L ^ l2));
        nArray3[dJ.amZ("h", (int)15121, (long)(0x701CD51F08BE1C9CL ^ l2))] = (int)dJ.amZ("h", (int)6043, (long)(0x4273372B07CD3024L ^ l2));
        nArray3[dJ.amZ("h", (int)12448, (long)(0x7D646D061D6D175EL ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray3[dJ.amZ("h", (int)12400, (long)(0x2F1E9CA6B4C817FFL ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray3[dJ.amZ("h", (int)18003, (long)(0x6535D4D9289E1B7L ^ l2))] = (int)dJ.amZ("h", (int)3973, (long)(0x32DB3C94FFD2871L ^ l2));
        nArray3[dJ.amZ("h", (int)29476, (long)(0x242C223B386FD4CDL ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray3[dJ.amZ("h", (int)8587, (long)(0x3DCEC7F4F76B8608L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray3[dJ.amZ("h", (int)32149, (long)(0x80D3F239533DA32L ^ l2))] = (int)dJ.amZ("h", (int)30625, (long)(0x6F8D6D82AE125021L ^ l2));
        this.AkIWJ = new cJ(this, mr.clS(nArray3)).WE(true);
        int[] nArray4 = new int[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))];
        nArray4[0] = (int)dJ.amZ("h", (int)22400, (long)(0x395344373D16F021L ^ l2));
        nArray4[1] = (int)dJ.amZ("h", (int)30156, (long)(0x6C7208C9CCD6D270L ^ l2));
        nArray4[2] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray4[3] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray4[4] = (int)dJ.amZ("h", (int)1622, (long)(0x4DD4D3F3DCA0A1C9L ^ l2));
        nArray4[5] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray4[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)22115, (long)(0x4544A9E2E14DF1D5L ^ l2));
        nArray4[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray4[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray4[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray4[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)5717, (long)(0x2ED055643F6631D2L ^ l2));
        this.kshzP = new cJ(this, mr.clS(nArray4)).WE(true);
        int[] nArray5 = new int[dJ.amZ("h", (int)18003, (long)(0x6535D4D9289E1B7L ^ l2))];
        nArray5[0] = (int)dJ.amZ("h", (int)22400, (long)(0x395344373D16F021L ^ l2));
        nArray5[1] = (int)dJ.amZ("h", (int)30156, (long)(0x6C7208C9CCD6D270L ^ l2));
        nArray5[2] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray5[3] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray5[4] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray5[5] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray5[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)27558, (long)(0x1A96F330789ACC23L ^ l2));
        nArray5[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray5[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray5[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)29712, (long)(0x1B034995AC21D3E7L ^ l2));
        nArray5[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)16459, (long)(0x584AF1EEA17267FEL ^ l2));
        nArray5[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)30156, (long)(0x6C7208C9CCD6D270L ^ l2));
        nArray5[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray5[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)25030, (long)(0x72A5550978A6C676L ^ l2));
        nArray5[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray5[dJ.amZ("h", (int)15121, (long)(0x701CD51F08BE1C9CL ^ l2))] = (int)dJ.amZ("h", (int)825, (long)(0x4956C2346B2C24C2L ^ l2));
        nArray5[dJ.amZ("h", (int)12448, (long)(0x7D646D061D6D175EL ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray5[dJ.amZ("h", (int)12400, (long)(0x2F1E9CA6B4C817FFL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        this.MjLVq = new ct(this, mr.clS(nArray5));
        int[] nArray6 = new int[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))];
        nArray6[0] = (int)dJ.amZ("h", (int)6335, (long)(0x5E1CDA0A74343F14L ^ l2));
        nArray6[1] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray6[2] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray6[3] = (int)dJ.amZ("h", (int)13989, (long)(0x1481C7689B84914BL ^ l2));
        nArray6[4] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray6[5] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray6[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)22115, (long)(0x4544A9E2E14DF1D5L ^ l2));
        nArray6[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray6[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray6[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)23552, (long)(0x63CF10ECC732FB88L ^ l2));
        nArray6[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray6[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray6[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        this.GndWc = new cu(this.MjLVq, mr.clS(nArray6));
        int[] nArray7 = new int[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))];
        nArray7[0] = (int)dJ.amZ("h", (int)23552, (long)(0x63CF10ECC732FB88L ^ l2));
        nArray7[1] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray7[2] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray7[3] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray7[4] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray7[5] = (int)dJ.amZ("h", (int)22115, (long)(0x4544A9E2E14DF1D5L ^ l2));
        nArray7[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray7[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray7[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)27451, (long)(0x20756C127C06CCE9L ^ l2));
        nArray7[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray7[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray7[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray7[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        this.lULpb = new cu(this.MjLVq, mr.clS(nArray7)).SY();
        int[] nArray8 = new int[dJ.amZ("h", (int)26829, (long)(0x14CFF20097EF4F6EL ^ l2))];
        nArray8[0] = (int)dJ.amZ("h", (int)22400, (long)(0x395344373D16F021L ^ l2));
        nArray8[1] = (int)dJ.amZ("h", (int)30156, (long)(0x6C7208C9CCD6D270L ^ l2));
        nArray8[2] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray8[3] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray8[4] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray8[5] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray8[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)1764, (long)(0xA625255ADCBA118L ^ l2));
        nArray8[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)15606, (long)(0x60C30FFC826C1B0FL ^ l2));
        nArray8[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray8[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray8[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray8[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray8[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray8[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)2748, (long)(0x592B488998552D24L ^ l2));
        nArray8[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray8[dJ.amZ("h", (int)15121, (long)(0x701CD51F08BE1C9CL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray8[dJ.amZ("h", (int)12448, (long)(0x7D646D061D6D175EL ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray8[dJ.amZ("h", (int)12400, (long)(0x2F1E9CA6B4C817FFL ^ l2))] = (int)dJ.amZ("h", (int)15606, (long)(0x60C30FFC826C1B0FL ^ l2));
        nArray8[dJ.amZ("h", (int)18003, (long)(0x6535D4D9289E1B7L ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray8[dJ.amZ("h", (int)29476, (long)(0x242C223B386FD4CDL ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray8[dJ.amZ("h", (int)23659, (long)(0x5EABAC089AD1FBD6L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray8[dJ.amZ("h", (int)775, (long)(0x30463EC55D37A4ABL ^ l2))] = (int)dJ.amZ("h", (int)13889, (long)(0x6E23267B3B3911ECL ^ l2));
        this.XujOg = new ct(this, mr.clS(nArray8));
        int[] nArray9 = new int[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))];
        nArray9[0] = (int)dJ.amZ("h", (int)6608, (long)(0x7D3BD93AD42F3E25L ^ l2));
        nArray9[1] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray9[2] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray9[3] = (int)dJ.amZ("h", (int)30625, (long)(0x6F8D6D82AE125021L ^ l2));
        nArray9[4] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray9[5] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        this.BEFfA = new cu(this.XujOg, mr.clS(nArray9)).SY();
        int[] nArray10 = new int[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))];
        nArray10[0] = (int)dJ.amZ("h", (int)3973, (long)(0x32DB3C94FFD2871L ^ l2));
        nArray10[1] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray10[2] = (int)dJ.amZ("h", (int)9791, (long)(0x787C5A779DE6018EL ^ l2));
        nArray10[3] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray10[4] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray10[5] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray10[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray10[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)31662, (long)(0x250C62056626DC24L ^ l2));
        this.FkJRf = new cu(this.XujOg, mr.clS(nArray10));
        int[] nArray11 = new int[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))];
        nArray11[0] = (int)dJ.amZ("h", (int)23434, (long)(0x58AF7DB2A5E8FC20L ^ l2));
        nArray11[1] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray11[2] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray11[3] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray11[4] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray11[5] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray11[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray11[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray11[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray11[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)32193, (long)(0x38BA41B69626DA4DL ^ l2));
        nArray11[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray11[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray11[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray11[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        this.RCVzG = new cu(this.XujOg, mr.clS(nArray11));
        int[] nArray12 = new int[dJ.amZ("h", (int)6801, (long)(0x42DBF4C7EBA3D2AL ^ l2))];
        nArray12[0] = (int)dJ.amZ("h", (int)11059, (long)(0x15B167E27A0C0CB7L ^ l2));
        nArray12[1] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray12[2] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray12[3] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray12[4] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray12[5] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray12[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray12[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray12[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray12[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)7460, (long)(0x7C7B19438E53BAF4L ^ l2));
        nArray12[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray12[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray12[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray12[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray12[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray12[dJ.amZ("h", (int)15121, (long)(0x701CD51F08BE1C9CL ^ l2))] = (int)dJ.amZ("h", (int)3973, (long)(0x32DB3C94FFD2871L ^ l2));
        nArray12[dJ.amZ("h", (int)12448, (long)(0x7D646D061D6D175EL ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray12[dJ.amZ("h", (int)12400, (long)(0x2F1E9CA6B4C817FFL ^ l2))] = (int)dJ.amZ("h", (int)10579, (long)(0x1407556A694A8EA1L ^ l2));
        nArray12[dJ.amZ("h", (int)18003, (long)(0x6535D4D9289E1B7L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray12[dJ.amZ("h", (int)29476, (long)(0x242C223B386FD4CDL ^ l2))] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray12[dJ.amZ("h", (int)23659, (long)(0x5EABAC089AD1FBD6L ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray12[dJ.amZ("h", (int)775, (long)(0x30463EC55D37A4ABL ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray12[dJ.amZ("h", (int)26829, (long)(0x14CFF20097EF4F6EL ^ l2))] = (int)dJ.amZ("h", (int)31662, (long)(0x250C62056626DC24L ^ l2));
        this.iUlIH = new cu(this.XujOg, mr.clS(nArray12));
        int[] nArray13 = new int[dJ.amZ("h", (int)29476, (long)(0x242C223B386FD4CDL ^ l2))];
        nArray13[0] = (int)dJ.amZ("h", (int)1764, (long)(0xA625255ADCBA118L ^ l2));
        nArray13[1] = (int)dJ.amZ("h", (int)15606, (long)(0x60C30FFC826C1B0FL ^ l2));
        nArray13[2] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray13[3] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray13[4] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray13[5] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray13[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray13[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)3973, (long)(0x32DB3C94FFD2871L ^ l2));
        nArray13[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray13[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        nArray13[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)30625, (long)(0x6F8D6D82AE125021L ^ l2));
        nArray13[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray13[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))] = (int)dJ.amZ("h", (int)1764, (long)(0xA625255ADCBA118L ^ l2));
        nArray13[dJ.amZ("h", (int)20641, (long)(0x5DBF044CF3D772FL ^ l2))] = (int)dJ.amZ("h", (int)15606, (long)(0x60C30FFC826C1B0FL ^ l2));
        nArray13[dJ.amZ("h", (int)26536, (long)(0x1CC1355299AD401CL ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray13[dJ.amZ("h", (int)15121, (long)(0x701CD51F08BE1C9CL ^ l2))] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray13[dJ.amZ("h", (int)12448, (long)(0x7D646D061D6D175EL ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray13[dJ.amZ("h", (int)12400, (long)(0x2F1E9CA6B4C817FFL ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray13[dJ.amZ("h", (int)18003, (long)(0x6535D4D9289E1B7L ^ l2))] = (int)dJ.amZ("h", (int)21191, (long)(0x3E1A2229CF7A7520L ^ l2));
        this.cnoHj = new ct(this, mr.clS(nArray13));
        int[] nArray14 = new int[dJ.amZ("h", (int)1357, (long)(0x31CFE83190B3A2ADL ^ l2))];
        nArray14[0] = (int)dJ.amZ("h", (int)11059, (long)(0x15B167E27A0C0CB7L ^ l2));
        nArray14[1] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray14[2] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray14[3] = (int)dJ.amZ("h", (int)25096, (long)(0x159367C1620EC5E5L ^ l2));
        nArray14[4] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray14[5] = (int)dJ.amZ("h", (int)27581, (long)(0x6D8DEFE1796ECC58L ^ l2));
        nArray14[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)5211, (long)(0x12493AEC4530B3FBL ^ l2));
        nArray14[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)29867, (long)(0x4C1CFAACF84537AL ^ l2));
        nArray14[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)30671, (long)(0x3A7B355F6391D067L ^ l2));
        nArray14[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray14[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray14[dJ.amZ("h", (int)624, (long)(0xBA651115AF825EBL ^ l2))] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        this.YdPTn = new cu(this.cnoHj, mr.clS(nArray14)).SY();
        int[] nArray15 = new int[dJ.amZ("h", (int)30119, (long)(0xB121C81E7ED524BL ^ l2))];
        nArray15[0] = (int)dJ.amZ("h", (int)7460, (long)(0x7C7B19438E53BAF4L ^ l2));
        nArray15[1] = (int)dJ.amZ("h", (int)8807, (long)(0x58A1A424536F858FL ^ l2));
        nArray15[2] = (int)dJ.amZ("h", (int)15406, (long)(0x53A68895EC371BDEL ^ l2));
        nArray15[3] = (int)dJ.amZ("h", (int)31426, (long)(0x37073592FF38DD3DL ^ l2));
        nArray15[4] = (int)dJ.amZ("h", (int)12488, (long)(0x1D8F9443E1ED976CL ^ l2));
        nArray15[5] = (int)dJ.amZ("h", (int)9418, (long)(0x37C9F3DE78310330L ^ l2));
        nArray15[dJ.amZ("h", (int)9514, (long)(0x7448C66A616E82B4L ^ l2))] = (int)dJ.amZ("h", (int)10907, (long)(0x520AB9C189300D1AL ^ l2));
        nArray15[dJ.amZ("h", (int)30650, (long)(0x251316D87913D050L ^ l2))] = (int)dJ.amZ("h", (int)15174, (long)(0x2F287D70679B1CD3L ^ l2));
        nArray15[dJ.amZ("h", (int)23771, (long)(0x64830E8345E8FB50L ^ l2))] = (int)dJ.amZ("h", (int)10167, (long)(0x63CD0C2BD1B004FL ^ l2));
        nArray15[dJ.amZ("h", (int)25213, (long)(0xCEF9966C02245C5L ^ l2))] = (int)dJ.amZ("h", (int)21343, (long)(0x2C27E6DED396F4C8L ^ l2));
        this.QgNbo = new cu(this.cnoHj, mr.clS(nArray15));
    }

    static {
        Loader.doInit(dJ.class);
        dJ._f6f055b5122afffdaca62a3a3058ae70();
    }

    public native void amy(HandledScreen<?> var1, double var2, double var4, int var6);

    public native void amz(HandledScreen<?> var1, double var2, double var4, int var6);

    public native boolean amA(HandledScreen<?> var1, double var2, double var4, double var6);

    public native void amx(HandledScreen<?> var1, double var2, double var4, int var6);

    private native boolean amG(HandledScreen<?> var1);

    private native boolean amN(Slot var1);

    private native boolean amO(Slot var1, HandledScreen<?> var2);

    private native Slot amK(HandledScreen<?> var1, double var2, double var4);

    private native boolean amP(ItemStack var1, ItemStack var2);

    private native Slot amQ(List<Slot> var1, Slot var2);

    private native double amT(double var1);

    private native void amJ();

    private native void amF(HandledScreen<?> var1, Slot var2, ItemStack var3);

    private static native int amY(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void amD(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

    private native boolean amH(int var1);

    private native boolean amS(Slot var1, List<Slot> var2);

    private static native int amX(int var0, long var1);

    private native boolean amV();

    private native void amB(HandledScreen<?> var1, Slot var2, ItemStack var3);

    private native void amI(Screen var1);

    private native void amM(HandledScreen<?> var1);

    private static native CallSite amZ(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native List<Slot> amR(List<Slot> var1, Slot var2, int var3, boolean var4);

    private native boolean amU();

    private native void amL(HandledScreen<?> var1, Slot var2, int var3, boolean var4);

    private native void amE(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6);

    private static native MatchException amW(MatchException var0);

    private native void amC(HandledScreen<?> var1, Slot var2, ItemStack var3, ItemStack var4, List<Slot> var5, int var6, boolean var7);

    @Override
    public native void YO();
}

