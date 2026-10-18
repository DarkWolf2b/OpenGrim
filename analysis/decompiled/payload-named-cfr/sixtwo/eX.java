/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Items
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.math.BlockPos;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.eV;
import sixtwo.gH;
import sixtwo.gO;
import sixtwo.gW;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jc;
import sixtwo.mT;
import sixtwo.mr;

public class eX
extends gg {
    private final ct tGIRe;
    private final cu ctwjT;
    private final cu Jtsgl;
    private final cJ ikcZw;
    private final cA qSoHb;
    private final cJ mmJaL;
    private final cA xdsyS;
    private final cA GIPFr;
    private final cC ymWjd;
    private final cA QJeGA;
    private final cJ JeboL;
    private final cJ JCATM;
    private final cJ KfwhF;
    private final cJ RGmUw;
    private final cD hPUWA;
    private final cK kecKJ;
    private final ct KUvew;
    private final cu EYjJv;
    private final cu lxmFM;
    private final cJ NZxVb;
    private final mT iWmfO;
    private final mT lFxwN;
    private final mT ipGCv;
    private final mT UviIK;
    private final List<BlockPos> FfayM;
    private boolean qMxUf;
    private boolean FjOEe;
    private BlockPos UmOLR;
    private static long syGtg;
    private static String[] ABdpa;
    private static String[] roBjv;
    private static Map hKmNH;
    private static long[] NcYvz;
    private static Integer[] lgFAc;
    private static Map tIAEm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _ba55b7ccc8fde006d5a9a6820279775e();

    public eX() {
        long l2 = syGtg ^ 0x4DEC0469E9D3L;
        super(gf.aZL((int)eX.aFD("m", (int)13673, (long)(0x14E731F844ED72CBL ^ l2)), false, gh.xwjCw));
        this.tGIRe = new ct(this, mr.clS(new int[]{(int)eX.aFD("m", (int)5262, (long)(0x1ADA144392B7D31DL ^ l2)), (int)eX.aFD("m", (int)5694, (long)(0x45A69A5F47D8D1A1L ^ l2)), (int)eX.aFD("m", (int)10506, (long)(0x68B19A75223DEE9FL ^ l2)), (int)eX.aFD("m", (int)8576, (long)(0x6D5564CD207FE60BL ^ l2))}));
        this.ctwjT = new cu(this.tGIRe, mr.clS(new int[]{(int)eX.aFD("m", (int)11852, (long)(0x49C1DFCD464FE9F7L ^ l2)), (int)eX.aFD("m", (int)5785, (long)(0x1147926D01955100L ^ l2)), (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2)), (int)eX.aFD("m", (int)7481, (long)(0x1A5F76A34805A83L ^ l2)), (int)eX.aFD("m", (int)32630, (long)(0x364CE61CD939B8EAL ^ l2))}));
        this.Jtsgl = new cu(this.tGIRe, mr.clS(new int[]{(int)eX.aFD("m", (int)5308, (long)(0x40B87F392BCFD30CL ^ l2)), (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2)), (int)eX.aFD("m", (int)28700, (long)(0x3A98035BBC553794L ^ l2)), (int)eX.aFD("m", (int)14382, (long)(0x14E737757D957F91L ^ l2))}));
        int[] nArray = new int[eX.aFD("m", (int)27349, (long)(0x191112CCC0032D16L ^ l2))];
        nArray[0] = (int)eX.aFD("m", (int)8692, (long)(0x6C743C3C1DBCE64DL ^ l2));
        nArray[1] = (int)eX.aFD("m", (int)30025, (long)(0x21ABA106B3C2B2E4L ^ l2));
        nArray[2] = (int)eX.aFD("m", (int)29194, (long)(0x6ECD5DDC700535AAL ^ l2));
        nArray[3] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray[4] = (int)eX.aFD("m", (int)6389, (long)(0x27FAF618EA88DF50L ^ l2));
        nArray[5] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray[eX.aFD("m", (int)20116, (long)(0x4E28A80309890933L ^ l2))] = (int)eX.aFD("m", (int)10404, (long)(0x76B6572433FFEF0CL ^ l2));
        nArray[eX.aFD("m", (int)29218, (long)(0x71DF6762EF04B593L ^ l2))] = (int)eX.aFD("m", (int)4957, (long)(0x162D3A16B29FD4EFL ^ l2));
        nArray[eX.aFD("m", (int)28257, (long)(0x11E08E205C54A9B2L ^ l2))] = (int)eX.aFD("m", (int)14067, (long)(0x23E28CD0C266F176L ^ l2));
        nArray[eX.aFD("m", (int)10200, (long)(0x63D1E854399FE042L ^ l2))] = (int)eX.aFD("m", (int)17938, (long)(0x53241AC3AC0881A5L ^ l2));
        nArray[eX.aFD("m", (int)2269, (long)(0x241C85B1EA7BCF72L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
        nArray[eX.aFD("m", (int)22238, (long)(0xCAD06BA9DE6915AL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray[eX.aFD("m", (int)17150, (long)(0x5FB50D351C260521L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray[eX.aFD("m", (int)24205, (long)(0x354B23AE37851900L ^ l2))] = (int)eX.aFD("m", (int)32630, (long)(0x364CE61CD939B8EAL ^ l2));
        this.ikcZw = new cJ(this, mr.clS(nArray)).WE(true);
        int[] nArray2 = new int[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))];
        nArray2[0] = (int)eX.aFD("m", (int)10256, (long)(0x262AC283CA0C6F8EL ^ l2));
        nArray2[1] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
        nArray2[2] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray2[3] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray2[4] = (int)eX.aFD("m", (int)3091, (long)(0x51944D7454334B9FL ^ l2));
        nArray2[5] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray2[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray2[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)9628, (long)(0x757DB3E84A42E238L ^ l2));
        nArray2[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray2[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray2[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray2[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)9112, (long)(0x32318465E6E3E419L ^ l2));
        this.qSoHb = new cA(this, mr.clS(nArray2)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)eX.aFA("h", (int)6461, (long)(0x2E57E99987F1F555L ^ l2))));
        int[] nArray3 = new int[eX.aFD("m", (int)15825, (long)(0x17CCF46CD6437A43L ^ l2))];
        nArray3[0] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray3[1] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray3[2] = (int)eX.aFD("m", (int)19308, (long)(0x64EB891029378CDAL ^ l2));
        nArray3[3] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray3[4] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray3[5] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray3[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray3[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray3[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray3[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
        nArray3[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray3[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
        nArray3[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
        nArray3[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray3[eX.aFD("m", (int)21843, (long)(0x8583F4C558192D5L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray3[eX.aFD("m", (int)30391, (long)(0x82E0CED82B9B12FL ^ l2))] = (int)eX.aFD("m", (int)32630, (long)(0x364CE61CD939B8EAL ^ l2));
        this.mmJaL = new cJ(this, mr.clS(nArray3)).WE(true);
        int[] nArray4 = new int[eX.aFD("m", (int)21843, (long)(0x8583F4C558192D5L ^ l2))];
        nArray4[0] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray4[1] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray4[2] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray4[3] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray4[4] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray4[5] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray4[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray4[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray4[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray4[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray4[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray4[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray4[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray4[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))] = (int)eX.aFD("m", (int)14546, (long)(0x6884F94ABA8E7F08L ^ l2));
        this.xdsyS = new cA(this, mr.clS(nArray4)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)eX.aFA("h", (int)14618, (long)(0x49FB06F57068D573L ^ l2))));
        int[] nArray5 = new int[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))];
        nArray5[0] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
        nArray5[1] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray5[2] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
        nArray5[3] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
        nArray5[4] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray5[5] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray5[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray5[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray5[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray5[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray5[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray5[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)14546, (long)(0x6884F94ABA8E7F08L ^ l2));
        this.GIPFr = new cA(this, mr.clS(nArray5)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)eX.aFA("h", (int)14618, (long)(0x49FB06F57068D573L ^ l2))));
        int[] nArray6 = new int[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))];
        nArray6[0] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray6[1] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray6[2] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray6[3] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray6[4] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray6[5] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray6[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray6[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray6[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray6[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)31791, (long)(0x71AF529722EEBBF9L ^ l2));
        nArray6[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray6[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray6[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)30396, (long)(0x2B4D73E4C532317DL ^ l2));
        this.ymWjd = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(1.0).Vx(9.0).VA(1.0).Vz((String)((Object)eX.aFA("h", (int)15178, (long)(0x2BA24A897EAD5721L ^ l2))));
        int[] nArray7 = new int[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))];
        nArray7[0] = (int)eX.aFD("m", (int)3974, (long)(0xAEFB3266E24C828L ^ l2));
        nArray7[1] = (int)eX.aFD("m", (int)23072, (long)(0x4E6B0D1432661D95L ^ l2));
        nArray7[2] = (int)eX.aFD("m", (int)17359, (long)(0x74B142B32BF8464L ^ l2));
        nArray7[3] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
        nArray7[4] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
        nArray7[5] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
        nArray7[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray7[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
        nArray7[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray7[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray7[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray7[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)14546, (long)(0x6884F94ABA8E7F08L ^ l2));
        this.QJeGA = new cA(this, mr.clS(nArray7)).UG(1.0).UE(0.0).UF(10.0).UI(0.0, 0.0).UH((String)((Object)eX.aFA("h", (int)14618, (long)(0x49FB06F57068D573L ^ l2))));
        int[] nArray8 = new int[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))];
        nArray8[0] = (int)eX.aFD("m", (int)2831, (long)(0x25E2B927040C4CACL ^ l2));
        nArray8[1] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray8[2] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray8[3] = (int)eX.aFD("m", (int)14546, (long)(0x6884F94ABA8E7F08L ^ l2));
        nArray8[4] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray8[5] = (int)eX.aFD("m", (int)12992, (long)(0x59795E9B71CF511L ^ l2));
        nArray8[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
        nArray8[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
        nArray8[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray8[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)20712, (long)(0x7617684053931742L ^ l2));
        nArray8[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)26061, (long)(0x1A20944A0416A214L ^ l2));
        nArray8[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        this.JeboL = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))];
        nArray9[0] = (int)eX.aFD("m", (int)10256, (long)(0x262AC283CA0C6F8EL ^ l2));
        nArray9[1] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
        nArray9[2] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray9[3] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
        nArray9[4] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        nArray9[5] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
        nArray9[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray9[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)20712, (long)(0x7617684053931742L ^ l2));
        nArray9[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
        nArray9[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
        nArray9[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)20299, (long)(0x20043E2AA9F888F3L ^ l2));
        nArray9[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)32630, (long)(0x364CE61CD939B8EAL ^ l2));
        nArray9[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
        this.JCATM = new cJ(this, mr.clS(nArray9)).WE(true);
        boolean bl2 = eV.aEq();
        try {
            int[] nArray10 = new int[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))];
            nArray10[0] = (int)eX.aFD("m", (int)21781, (long)(0x4BA268AF7AA292B9L ^ l2));
            nArray10[1] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray10[2] = (int)eX.aFD("m", (int)13993, (long)(0x4FD8D692C0AF7108L ^ l2));
            nArray10[3] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray10[4] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray10[5] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
            nArray10[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
            nArray10[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
            nArray10[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
            nArray10[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray10[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            this.KfwhF = new cJ(this, mr.clS(nArray10)).WE(false);
            int[] nArray11 = new int[eX.aFD("m", (int)26256, (long)(0x1E79CFA7893CA123L ^ l2))];
            nArray11[0] = (int)eX.aFD("m", (int)21781, (long)(0x4BA268AF7AA292B9L ^ l2));
            nArray11[1] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray11[2] = (int)eX.aFD("m", (int)9685, (long)(0x1A9F1C5FE7016268L ^ l2));
            nArray11[3] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray11[4] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray11[5] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
            nArray11[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
            nArray11[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
            nArray11[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
            nArray11[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray11[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray11[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray11[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)23845, (long)(0x12FFC9DD39351AB4L ^ l2));
            nArray11[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray11[eX.aFD("m", (int)21843, (long)(0x8583F4C558192D5L ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
            nArray11[eX.aFD("m", (int)2891, (long)(0x79EA82AD71F04C99L ^ l2))] = (int)eX.aFD("m", (int)14382, (long)(0x14E737757D957F91L ^ l2));
            this.RGmUw = new cJ(this, mr.clS(nArray11)).WE(false);
            int[] nArray12 = new int[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))];
            nArray12[0] = (int)eX.aFD("m", (int)23845, (long)(0x12FFC9DD39351AB4L ^ l2));
            nArray12[1] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray12[2] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
            nArray12[3] = (int)eX.aFD("m", (int)14382, (long)(0x14E737757D957F91L ^ l2));
            nArray12[4] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray12[5] = (int)eX.aFD("m", (int)5742, (long)(0x13773BC242F6D1FEL ^ l2));
            nArray12[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray12[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)14546, (long)(0x6884F94ABA8E7F08L ^ l2));
            this.hPUWA = new cD(this, mr.clS(nArray12)).VO((int)eX.aFD("m", (int)13239, (long)(0x4CE2726161DEF46AL ^ l2)));
            int[] nArray13 = new int[eX.aFD("m", (int)12017, (long)(0x1E09DFF8895C6945L ^ l2))];
            nArray13[0] = (int)eX.aFD("m", (int)21781, (long)(0x4BA268AF7AA292B9L ^ l2));
            nArray13[1] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray13[2] = (int)eX.aFD("m", (int)9685, (long)(0x1A9F1C5FE7016268L ^ l2));
            nArray13[3] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray13[4] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray13[5] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
            nArray13[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
            nArray13[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
            nArray13[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
            nArray13[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray13[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray13[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray13[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)2700, (long)(0x7E36B99908D74D02L ^ l2));
            nArray13[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
            nArray13[eX.aFD("m", (int)21843, (long)(0x8583F4C558192D5L ^ l2))] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray13[eX.aFD("m", (int)2891, (long)(0x79EA82AD71F04C99L ^ l2))] = (int)eX.aFD("m", (int)2990, (long)(0x5F5EC8B675954C10L ^ l2));
            nArray13[eX.aFD("m", (int)26256, (long)(0x1E79CFA7893CA123L ^ l2))] = (int)eX.aFD("m", (int)836, (long)(0x1AA943762BB044DFL ^ l2));
            nArray13[eX.aFD("m", (int)19186, (long)(0x639140DE80420D22L ^ l2))] = (int)eX.aFD("m", (int)32630, (long)(0x364CE61CD939B8EAL ^ l2));
            this.kecKJ = new cK(this, mr.clS(nArray13)).WM(jc.GjreY).WN(Items.OBSIDIAN, Items.GLOWSTONE);
            this.KUvew = new ct(this, mr.clS(new int[]{(int)eX.aFD("m", (int)18768, (long)(0xA222354E99E8EF9L ^ l2)), (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2)), (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2)), (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2))}));
            int[] nArray14 = new int[eX.aFD("m", (int)21135, (long)(0x31CD3423887150DL ^ l2))];
            nArray14[0] = (int)eX.aFD("m", (int)24956, (long)(0x64C25DDC0220A6A8L ^ l2));
            nArray14[1] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray14[2] = (int)eX.aFD("m", (int)9685, (long)(0x1A9F1C5FE7016268L ^ l2));
            nArray14[3] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray14[4] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray14[5] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray14[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray14[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)10256, (long)(0x262AC283CA0C6F8EL ^ l2));
            nArray14[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
            nArray14[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray14[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray14[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)3091, (long)(0x51944D7454334B9FL ^ l2));
            nArray14[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            this.EYjJv = new cu(this.KUvew, mr.clS(nArray14));
            int[] nArray15 = new int[eX.aFD("m", (int)13304, (long)(0x4204A8DC3C46F43AL ^ l2))];
            nArray15[0] = (int)eX.aFD("m", (int)26966, (long)(0xC5686EE440D2EC2L ^ l2));
            nArray15[1] = (int)eX.aFD("m", (int)9685, (long)(0x1A9F1C5FE7016268L ^ l2));
            nArray15[2] = (int)eX.aFD("m", (int)17103, (long)(0x60FA580B13FC8569L ^ l2));
            nArray15[3] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            nArray15[4] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray15[5] = (int)eX.aFD("m", (int)5454, (long)(0xB9A06AF25F65296L ^ l2));
            nArray15[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)10256, (long)(0x262AC283CA0C6F8EL ^ l2));
            nArray15[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)16516, (long)(0x74F889050936870BL ^ l2));
            nArray15[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray15[eX.aFD("m", (int)3094, (long)(0x6F423B77196ACB9CL ^ l2))] = (int)eX.aFD("m", (int)16758, (long)(0x44023C62E20B86E1L ^ l2));
            nArray15[eX.aFD("m", (int)16261, (long)(0x6D7BF621FB0DF850L ^ l2))] = (int)eX.aFD("m", (int)3091, (long)(0x51944D7454334B9FL ^ l2));
            nArray15[eX.aFD("m", (int)9234, (long)(0x54FEC10CBAF063CCL ^ l2))] = (int)eX.aFD("m", (int)29863, (long)(0x7B2C46F24A473327L ^ l2));
            this.lxmFM = new cu(this.KUvew, mr.clS(nArray15));
            int[] nArray16 = new int[eX.aFD("m", (int)18022, (long)(0x2940B404A2B01E1L ^ l2))];
            nArray16[0] = (int)eX.aFD("m", (int)12691, (long)(0x4326FA84E3A87610L ^ l2));
            nArray16[1] = (int)eX.aFD("m", (int)7626, (long)(0x638CC2544E275A11L ^ l2));
            nArray16[2] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray16[3] = (int)eX.aFD("m", (int)3091, (long)(0x51944D7454334B9FL ^ l2));
            nArray16[4] = (int)eX.aFD("m", (int)27867, (long)(0x3962CBC06051AB52L ^ l2));
            nArray16[5] = (int)eX.aFD("m", (int)15987, (long)(0x7FDC8F2C98A6F9EEL ^ l2));
            nArray16[eX.aFD("m", (int)14504, (long)(0xAE8148E2BDB7F7FL ^ l2))] = (int)eX.aFD("m", (int)5462, (long)(0x769D1CFE910D2EAL ^ l2));
            nArray16[eX.aFD("m", (int)9290, (long)(0xFD20F9C09E46396L ^ l2))] = (int)eX.aFD("m", (int)19783, (long)(0x63E8A1EE66DC8AD1L ^ l2));
            this.NZxVb = new cJ(this, mr.clS(nArray16)).WE(true);
            this.iWmfO = mT.cpz();
            this.lFxwN = mT.cpz();
            this.ipGCv = mT.cpz();
            this.UviIK = mT.cpz();
            this.FfayM = new ArrayList<BlockPos>();
            this.qSoHb.Vf(this.ikcZw::WF);
            this.xdsyS.Vf(this.mmJaL::WF);
            this.hPUWA.Vf(this.RGmUw::WF);
            this.kecKJ.Vf(this.KfwhF::WF);
            this.KUvew.Vf(this.KfwhF::WF);
            this.NZxVb.Vf(this.KfwhF::WF);
            if (bl2) {
                iS.bwK("T2qMoc");
            }
        }
        catch (MatchException matchException) {
            throw eX.aFw(matchException);
        }
    }

    static {
        Loader.doInit(eX.class);
        eX._ba55b7ccc8fde006d5a9a6820279775e();
    }

    public native cu aEV();

    public native cJ aEW();

    public native cA aEX();

    public native cJ aEY();

    private native void aEQ();

    public native ct aET();

    private native void aER();

    private native void aES(BlockHitResult var1);

    public native cu aEU();

    @hG
    public native void aEP(gW.tq var1);

    public native cJ aFe();

    public native cD aFh();

    public native mT aFn();

    public native BlockPos aFu();

    public native cK aFi();

    public native cJ aFf();

    public native boolean aFs();

    public native cJ aFm();

    public native ct aFj();

    private static native String aFx(byte[] var0);

    public native cJ aFd();

    public native cA aFc();

    public native mT aFp();

    private static native int aFC(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aFy(int var0, long var1);

    public native cu aFk();

    public native cA aEZ();

    public native cA aFa();

    public native boolean aFt();

    public native cC aFb();

    public native mT aFo();

    private static native /* synthetic */ boolean aFv(BlockPos var0);

    private static native Object aFz(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aFB(int var0, long var1);

    public native cJ aFg();

    public native cu aFl();

    public native List<BlockPos> aFr();

    public native mT aFq();

    private static native CallSite aFD(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aFA(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aEM(gH.th var1);

    @hG
    public native void aEN(gv var1);

    private static native MatchException aFw(MatchException var0);

    @hG
    public native void aEO(gO.tm var1);

    @Override
    public native void YO();
}

