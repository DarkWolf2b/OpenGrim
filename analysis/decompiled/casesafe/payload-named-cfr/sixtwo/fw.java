/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Blocks
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Position
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.BlockView
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.Random;
import native.Loader;
import net.minecraft.block.Blocks;
import net.minecraft.entity.Entity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Position;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.BlockView;
import net.minecraft.world.RaycastContext;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gW;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gv;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.oj;
import sixtwo.rD;

public class fw
extends gg {
    private final ct sGDWO;
    private final cu aRvvg;
    private final cu Qksff;
    private final ct YBVgI;
    private final cu pJxNC;
    private final cu wbUnO;
    private final cA KzsPl;
    private final ct tYcBL;
    private final cu ZtDkv;
    private final cu UFdMN;
    private final cu NnigP;
    private final cu vyhuq;
    private final cu KuKPX;
    private final ct cuIXt;
    private final cu SzYmi;
    private final cu qzZfU;
    private final cJ FbvPk;
    private final mT AOeRT;
    private final oj WJJbs;
    private final List<BlockPos> NrVzh;
    private static long QmxeW;
    private static String zAhcx;
    private static long[] YezLm;
    private static Integer[] lSNgg;
    private static Map SVJts;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fw() {
        long l2 = QmxeW ^ 0x33442C7C60BBL;
        super(gf.aZL((int)fw.aRi("v", (int)32503, (long)(0x6E364B18A10B6A44L ^ l2)), false, gh.xwjCw));
        this.sGDWO = new ct(this, mr.clS(new int[]{(int)fw.aRi("v", (int)31369, (long)(0x1EF2DA66C21E6E14L ^ l2)), (int)fw.aRi("v", (int)8108, (long)(0x1EAA133B5A080B77L ^ l2)), (int)fw.aRi("v", (int)20771, (long)(0x61C0993D71E4581L ^ l2)), (int)fw.aRi("v", (int)31256, (long)(0x5C2641CD6D716E9AL ^ l2))}));
        int[] nArray = new int[fw.aRi("v", (int)32175, (long)(0x3BA2EFEDD045693EL ^ l2))];
        nArray[0] = (int)fw.aRi("v", (int)7338, (long)(0x7D52C81D6EED0822L ^ l2));
        nArray[1] = (int)fw.aRi("v", (int)11263, (long)(0x5B0B1FDBD1FCBF6DL ^ l2));
        nArray[2] = (int)fw.aRi("v", (int)2116, (long)(0x7AF5F5ABBCAE9CF1L ^ l2));
        nArray[3] = (int)fw.aRi("v", (int)32385, (long)(0x1A6632F18B636A39L ^ l2));
        nArray[4] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray[5] = (int)fw.aRi("v", (int)20136, (long)(0x2FE9F13722975A28L ^ l2));
        nArray[fw.aRi("v", (int)8647, (long)(0x59C61409A4DEB577L ^ l2))] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        this.aRvvg = new cu(this.sGDWO, mr.clS(nArray));
        this.Qksff = new cu(this.sGDWO, mr.clS(new int[]{(int)fw.aRi("v", (int)17140, (long)(0x34B5FFE0339ED640L ^ l2)), (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2)), (int)fw.aRi("v", (int)26401, (long)(0x54B0E5E638CC73F6L ^ l2)), (int)fw.aRi("v", (int)29290, (long)(0x786B64DDB74EE6F3L ^ l2)), (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2))}));
        int[] nArray2 = new int[fw.aRi("v", (int)12282, (long)(0x54635A49F9993B77L ^ l2))];
        nArray2[0] = (int)fw.aRi("v", (int)26516, (long)(0x60E357F6DBFCF325L ^ l2));
        nArray2[1] = (int)fw.aRi("v", (int)30876, (long)(0x26C78E08EEB36C08L ^ l2));
        nArray2[2] = (int)fw.aRi("v", (int)12356, (long)(0x7B286A37983A24EAL ^ l2));
        nArray2[3] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        nArray2[4] = (int)fw.aRi("v", (int)12609, (long)(0x4F48AA0E884C25C6L ^ l2));
        nArray2[5] = (int)fw.aRi("v", (int)26039, (long)(0x4133D299BC67112L ^ l2));
        nArray2[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)29876, (long)(0x68EE8D433C5DE06DL ^ l2));
        nArray2[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)3030, (long)(0x1C72D5687CEE1F75L ^ l2));
        nArray2[fw.aRi("v", (int)3713, (long)(0x45B91D1983711A3AL ^ l2))] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray2[fw.aRi("v", (int)13179, (long)(0x13F24B66F17327A8L ^ l2))] = (int)fw.aRi("v", (int)32420, (long)(0xA1D1D7393BCEA75L ^ l2));
        nArray2[fw.aRi("v", (int)1300, (long)(0x4B49B21DEF0E118EL ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        this.YBVgI = new ct(this, mr.clS(nArray2));
        this.pJxNC = new cu(this.YBVgI, mr.clS(new int[]{(int)fw.aRi("v", (int)18060, (long)(0x2421E74B6DE7D22DL ^ l2)), (int)fw.aRi("v", (int)5671, (long)(0x14CEC904EDF182B9L ^ l2)), (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2)), (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2))}));
        int[] nArray3 = new int[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))];
        nArray3[0] = (int)fw.aRi("v", (int)3030, (long)(0x1C72D5687CEE1F75L ^ l2));
        nArray3[1] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray3[2] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray3[3] = (int)fw.aRi("v", (int)23725, (long)(0x56230C100ADCC82EL ^ l2));
        nArray3[4] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray3[5] = (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2));
        this.wbUnO = new cu(this.YBVgI, mr.clS(nArray3));
        int[] nArray4 = new int[fw.aRi("v", (int)11159, (long)(0x71EE3779447F3F42L ^ l2))];
        nArray4[0] = (int)fw.aRi("v", (int)6385, (long)(0x20704819FB5A8C51L ^ l2));
        nArray4[1] = (int)fw.aRi("v", (int)23725, (long)(0x56230C100ADCC82EL ^ l2));
        nArray4[2] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        nArray4[3] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray4[4] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray4[5] = (int)fw.aRi("v", (int)704, (long)(0x4C4DDE870A9C961FL ^ l2));
        nArray4[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)17193, (long)(0x5C4C52340B1CD7AFL ^ l2));
        nArray4[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)12356, (long)(0x7B286A37983A24EAL ^ l2));
        nArray4[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        nArray4[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)14578, (long)(0x38D9354B1F132C73L ^ l2));
        nArray4[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))] = (int)fw.aRi("v", (int)18621, (long)(0x349970FCA4525C60L ^ l2));
        nArray4[fw.aRi("v", (int)1420, (long)(0x292DB48DFAAE915CL ^ l2))] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray4[fw.aRi("v", (int)6903, (long)(0x4FBEC1672CD70E58L ^ l2))] = (int)fw.aRi("v", (int)13142, (long)(0x1050CBE6BBAE2782L ^ l2));
        nArray4[fw.aRi("v", (int)22036, (long)(0x24454D2A74BB42C8L ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray4[fw.aRi("v", (int)22473, (long)(0x63F6F6ECE4B44375L ^ l2))] = (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2));
        nArray4[fw.aRi("v", (int)1322, (long)(0x1213561144A11193L ^ l2))] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray4[fw.aRi("v", (int)9560, (long)(0x5BECB464C4C031CEL ^ l2))] = (int)fw.aRi("v", (int)6004, (long)(0x1112CDDBD53203CAL ^ l2));
        this.KzsPl = new cA(this, mr.clS(nArray4)).UG(1.0).UE(0.0).UF(20.0).UI(1.0, 1.0).UH(zAhcx);
        int[] nArray5 = new int[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))];
        nArray5[0] = (int)fw.aRi("v", (int)704, (long)(0x4C4DDE870A9C961FL ^ l2));
        nArray5[1] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        nArray5[2] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray5[3] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray5[4] = (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2));
        nArray5[5] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray5[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)3030, (long)(0x1C72D5687CEE1F75L ^ l2));
        nArray5[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray5[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)32420, (long)(0xA1D1D7393BCEA75L ^ l2));
        nArray5[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        this.tYcBL = new ct(this, mr.clS(nArray5));
        int[] nArray6 = new int[fw.aRi("v", (int)12729, (long)(0x1C5E327C2A6F2561L ^ l2))];
        nArray6[0] = (int)fw.aRi("v", (int)27549, (long)(0x319CD334BE87F3AL ^ l2));
        nArray6[1] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray6[2] = (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2));
        nArray6[3] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray6[4] = (int)fw.aRi("v", (int)7553, (long)(0x58828122EA38091DL ^ l2));
        nArray6[5] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray6[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)1888, (long)(0x6A0D7417E31B13C9L ^ l2));
        nArray6[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray6[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)2230, (long)(0x164A771DE37B9C3FL ^ l2));
        nArray6[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)17193, (long)(0x5C4C52340B1CD7AFL ^ l2));
        nArray6[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray6[fw.aRi("v", (int)1420, (long)(0x292DB48DFAAE915CL ^ l2))] = (int)fw.aRi("v", (int)208, (long)(0x3122F6DC3E319443L ^ l2));
        this.ZtDkv = new cu(this.tYcBL, mr.clS(nArray6));
        int[] nArray7 = new int[fw.aRi("v", (int)1420, (long)(0x292DB48DFAAE915CL ^ l2))];
        nArray7[0] = (int)fw.aRi("v", (int)13396, (long)(0x782607697B2420EBL ^ l2));
        nArray7[1] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray7[2] = (int)fw.aRi("v", (int)16628, (long)(0x5B0C3F9737AE547FL ^ l2));
        nArray7[3] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray7[4] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray7[5] = (int)fw.aRi("v", (int)10616, (long)(0x559B5E7F93BFBDFCL ^ l2));
        nArray7[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray7[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)208, (long)(0x3122F6DC3E319443L ^ l2));
        nArray7[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)17193, (long)(0x5C4C52340B1CD7AFL ^ l2));
        nArray7[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray7[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))] = (int)fw.aRi("v", (int)208, (long)(0x3122F6DC3E319443L ^ l2));
        this.UFdMN = new cu(this.tYcBL, mr.clS(nArray7));
        this.NnigP = new cu(this.tYcBL, mr.clS(new int[]{(int)fw.aRi("v", (int)27074, (long)(0x5D91BCE88EE57D4DL ^ l2)), (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2)), (int)fw.aRi("v", (int)3201, (long)(0xFFF2645D5CC985FL ^ l2)), (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2)), (int)fw.aRi("v", (int)22387, (long)(0x20ED0EF6E7F343D8L ^ l2))}));
        this.vyhuq = new cu(this.tYcBL, mr.clS(new int[]{(int)fw.aRi("v", (int)13396, (long)(0x782607697B2420EBL ^ l2)), (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2)), (int)fw.aRi("v", (int)28814, (long)(0x5D5339F54D0C6416L ^ l2)), (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2))}));
        this.KuKPX = new cu(this.tYcBL, mr.clS(new int[]{(int)fw.aRi("v", (int)6385, (long)(0x20704819FB5A8C51L ^ l2)), (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2)), (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2))}));
        int[] nArray8 = new int[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))];
        nArray8[0] = (int)fw.aRi("v", (int)10616, (long)(0x559B5E7F93BFBDFCL ^ l2));
        nArray8[1] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray8[2] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray8[3] = (int)fw.aRi("v", (int)14578, (long)(0x38D9354B1F132C73L ^ l2));
        nArray8[4] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray8[5] = (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2));
        nArray8[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray8[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)25956, (long)(0x2E245F3B283C71B2L ^ l2));
        nArray8[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)14258, (long)(0x5020F4F67FCDA31EL ^ l2));
        nArray8[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)22387, (long)(0x20ED0EF6E7F343D8L ^ l2));
        this.cuIXt = new ct(this, mr.clS(nArray8));
        this.SzYmi = new cu(this.cuIXt, mr.clS(new int[]{(int)fw.aRi("v", (int)27274, (long)(0x423B7B367C65FE15L ^ l2)), (int)fw.aRi("v", (int)17193, (long)(0x5C4C52340B1CD7AFL ^ l2)), (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2))}));
        int[] nArray9 = new int[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))];
        nArray9[0] = (int)fw.aRi("v", (int)7226, (long)(0xD8D5611FB0E888CL ^ l2));
        nArray9[1] = (int)fw.aRi("v", (int)22387, (long)(0x20ED0EF6E7F343D8L ^ l2));
        nArray9[2] = (int)fw.aRi("v", (int)12356, (long)(0x7B286A37983A24EAL ^ l2));
        nArray9[3] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray9[4] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray9[5] = (int)fw.aRi("v", (int)32420, (long)(0xA1D1D7393BCEA75L ^ l2));
        nArray9[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)10909, (long)(0x1C6EADA19E5D3E08L ^ l2));
        this.qzZfU = new cu(this.cuIXt, mr.clS(nArray9));
        int[] nArray10 = new int[fw.aRi("v", (int)19525, (long)(0x4F8D8E33661F58EDL ^ l2))];
        nArray10[0] = (int)fw.aRi("v", (int)10616, (long)(0x559B5E7F93BFBDFCL ^ l2));
        nArray10[1] = (int)fw.aRi("v", (int)6552, (long)(0x4F11E44E19B70D22L ^ l2));
        nArray10[2] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray10[3] = (int)fw.aRi("v", (int)14578, (long)(0x38D9354B1F132C73L ^ l2));
        nArray10[4] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray10[5] = (int)fw.aRi("v", (int)26403, (long)(0x40F0BA1B9EA673F1L ^ l2));
        nArray10[fw.aRi("v", (int)23221, (long)(0x18CB6FE6247E4E3FL ^ l2))] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray10[fw.aRi("v", (int)29527, (long)(0x38F5B6FD50D767CCL ^ l2))] = (int)fw.aRi("v", (int)8482, (long)(0x38FB0E666AC735B5L ^ l2));
        nArray10[fw.aRi("v", (int)22224, (long)(0x648F6E2A10894267L ^ l2))] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray10[fw.aRi("v", (int)29794, (long)(0x57D8C92F55DAE0B8L ^ l2))] = (int)fw.aRi("v", (int)16869, (long)(0x61AE668F53A05558L ^ l2));
        nArray10[fw.aRi("v", (int)25298, (long)(0x414A2F40782A765CL ^ l2))] = (int)fw.aRi("v", (int)704, (long)(0x4C4DDE870A9C961FL ^ l2));
        nArray10[fw.aRi("v", (int)1420, (long)(0x292DB48DFAAE915CL ^ l2))] = (int)fw.aRi("v", (int)14578, (long)(0x38D9354B1F132C73L ^ l2));
        nArray10[fw.aRi("v", (int)12729, (long)(0x1C5E327C2A6F2561L ^ l2))] = (int)fw.aRi("v", (int)22387, (long)(0x20ED0EF6E7F343D8L ^ l2));
        nArray10[fw.aRi("v", (int)29240, (long)(0xFB976090BB766BDL ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray10[fw.aRi("v", (int)22473, (long)(0x63F6F6ECE4B44375L ^ l2))] = (int)fw.aRi("v", (int)8586, (long)(0x48315E0751ECB51AL ^ l2));
        nArray10[fw.aRi("v", (int)30614, (long)(0x23B14694B37BE31AL ^ l2))] = (int)fw.aRi("v", (int)15788, (long)(0x40D1E82E1A52290AL ^ l2));
        nArray10[fw.aRi("v", (int)10530, (long)(0xA91099102C33D88L ^ l2))] = (int)fw.aRi("v", (int)24374, (long)(0x4F70D5607FD44B84L ^ l2));
        this.FbvPk = new cJ(this, mr.clS(nArray10)).WE(false);
        this.AOeRT = mT.cpz();
        this.NrVzh = new ArrayList<BlockPos>();
        this.WJJbs = new oj();
    }

    static {
        Loader.doInit(fw.class);
        fw._961434ad71bdf72b01d088a497663a38();
    }

    private static native void _961434ad71bdf72b01d088a497663a38();

    @hG
    public native void aQZ(gW.tq var1);

    @hG
    public native void aQX(gv var1);

    @hG
    public native void aQY(gH.th var1);

    private static native int aRh(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aRa();

    private static native String aRf(byte[] var0);

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private BlockHitResult aRb() {
        var1_1 = fw.QmxeW ^ 83789467979757L;
        var4_2 = (int)rD.dlmvG.player.getBlockInteractionRange();
        var3_3 = fg.aIW();
        var5_4 = BlockPos.iterateOutwards((BlockPos)BlockPos.ofFloored((Position)rD.dlmvG.player.getEntityPos()).up(), (int)var4_2, (int)var4_2, (int)var4_2);
        var6_5 = var5_4.iterator();
        block84: while (true) {
            v0 = var6_5.hasNext();
            block85: while (v0) {
                v1 /* !! */  = var6_5.next();
                block86: while (true) {
                    block97: {
                        if (this.NrVzh.contains(var7_6 = (BlockPos)v1 /* !! */ ) && var3_3 == null) continue block84;
                        var8_7 = rD.dlmvG.world.getFluidState(var7_6);
                        try {
                            if (!var8_7.isStill() && var3_3 == null) continue block84;
                        }
                        catch (MatchException v2) {
                            throw fw.aRe(v2);
                        }
                        var9_8 = rD.dlmvG.world.getBlockState(var7_6).getBlock();
                        var10_9 = rD.dlmvG.world.getBlockState(var7_6.down()).getBlock();
                        try {
                            v3 = var9_8 == Blocks.WATER;
                        }
                        catch (MatchException v4) {
                            throw fw.aRe(v4);
                        }
                        var11_10 = v3;
                        try {
                            v5 = var9_8 == Blocks.LAVA;
                        }
                        catch (MatchException v6) {
                            throw fw.aRe(v6);
                        }
                        var12_11 = v5;
                        try {
                            v7 = var10_9 == Blocks.COBWEB;
                        }
                        catch (MatchException v8) {
                            throw fw.aRe(v8);
                        }
                        var13_12 = v7;
                        try {
                            if (!this.aRc(var11_10, var12_11, var13_12) && var3_3 == null) continue block84;
                        }
                        catch (MatchException v9) {
                            throw fw.aRe(v9);
                        }
                        var14_13 = var8_7.getShape((BlockView)rD.dlmvG.world, var7_6);
                        try {
                            if (var14_13.isEmpty() && var3_3 == null) continue block84;
                        }
                        catch (MatchException v10) {
                            throw fw.aRe(v10);
                        }
                        var15_14 = rD.dlmvG.player.getEyePos();
                        var16_15 = var7_6.toCenterPos();
                        var17_16 = var15_14.subtract(var16_15).normalize();
                        var18_17 = new ArrayList<Vec3d>();
                        var19_18 = 4;
                        var20_20 = var14_13.getBoundingBoxes().iterator();
                        block87: while (true) {
                            v11 = var20_20.hasNext();
                            block88: while (v11 != 0) {
                                var21_21 = (Box)var20_20.next();
                                var22_23 = var21_21.minX + (double)var7_6.getX();
                                var24_26 = var21_21.maxX + (double)var7_6.getX();
                                var26_31 = var21_21.minY + (double)var7_6.getY();
                                var28_33 = var21_21.maxY + (double)var7_6.getY();
                                var30_34 = var21_21.minZ + (double)var7_6.getZ();
                                var32_35 = var21_21.maxZ + (double)var7_6.getZ();
                                v12 = new Vec3d[fw.aRi("v", (int)23221, (long)(1786539916993995113L ^ var1_1))];
                                v12[0] = new Vec3d(1.0, 0.0, 0.0);
                                v12[1] = new Vec3d(-1.0, 0.0, 0.0);
                                v12[2] = new Vec3d(0.0, 1.0, 0.0);
                                v12[3] = new Vec3d(0.0, -1.0, 0.0);
                                v12[4] = new Vec3d(0.0, 0.0, 1.0);
                                v12[5] = new Vec3d(0.0, 0.0, -1.0);
                                var35_37 = var34_36 = v12;
                                var36_38 = var35_37.length;
                                v13 /* !! */  = (CallSite)false;
                                if (var3_3 != null) break block97;
                                var37_39 = v13 /* !! */ ;
                                block89: while (true) {
                                    v14 /* !! */  = var37_39;
                                    block90: while (v14 /* !! */  < var36_38) {
                                        block100: {
                                            block109: {
                                                block107: {
                                                    block108: {
                                                        block106: {
                                                            block104: {
                                                                block105: {
                                                                    block103: {
                                                                        block101: {
                                                                            block102: {
                                                                                block98: {
                                                                                    var38_40 = var35_37[var37_39];
                                                                                    cfr_temp_0 = var38_40.dotProduct(var17_16) - 0.0;
                                                                                    v11 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                                                                    if (var3_3 != null) continue block88;
                                                                                    try {
                                                                                        block99: {
                                                                                            try {
                                                                                                try {
                                                                                                    if (var3_3 != null) break block98;
                                                                                                    if (v11 > 0) break block99;
                                                                                                }
                                                                                                catch (MatchException v15) {
                                                                                                    throw fw.aRe(v15);
                                                                                                }
                                                                                                if (var3_3 == null) break block100;
                                                                                            }
                                                                                            catch (MatchException v16) {
                                                                                                throw fw.aRe(v16);
                                                                                            }
                                                                                        }
                                                                                        v17 = (cfr_temp_1 = var38_40.x - 0.0) == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                                                                    }
                                                                                    catch (MatchException v18) {
                                                                                        throw fw.aRe(v18);
                                                                                    }
                                                                                }
                                                                                try {
                                                                                    try {
                                                                                        if (var3_3 != null) break block101;
                                                                                        if (v17 <= 0) break block102;
                                                                                    }
                                                                                    catch (MatchException v19) {
                                                                                        throw fw.aRe(v19);
                                                                                    }
                                                                                    v20 = var24_26;
                                                                                    break block103;
                                                                                }
                                                                                catch (MatchException v21) {
                                                                                    throw fw.aRe(v21);
                                                                                }
                                                                            }
                                                                            try {
                                                                                v20 = var38_40.x;
                                                                                if (var3_3 != null) break block103;
                                                                                cfr_temp_2 = v20 - 0.0;
                                                                                v17 = cfr_temp_2 == 0.0 ? 0 : (cfr_temp_2 < 0.0 ? -1 : 1);
                                                                            }
                                                                            catch (MatchException v22) {
                                                                                throw fw.aRe(v22);
                                                                            }
                                                                        }
                                                                        v20 = v17 < 0 ? var22_23 : NaN;
                                                                    }
                                                                    var39_41 = v20;
                                                                    try {
                                                                        try {
                                                                            cfr_temp_3 = var38_40.y - 0.0;
                                                                            v23 = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                                                                            if (var3_3 != null) break block104;
                                                                            if (v23 <= 0) break block105;
                                                                        }
                                                                        catch (MatchException v24) {
                                                                            throw fw.aRe(v24);
                                                                        }
                                                                        v25 = var28_33;
                                                                        break block106;
                                                                    }
                                                                    catch (MatchException v26) {
                                                                        throw fw.aRe(v26);
                                                                    }
                                                                }
                                                                try {
                                                                    v25 = var38_40.y;
                                                                    if (var3_3 != null) break block106;
                                                                    cfr_temp_4 = v25 - 0.0;
                                                                    v23 = cfr_temp_4 == 0.0 ? 0 : (cfr_temp_4 < 0.0 ? -1 : 1);
                                                                }
                                                                catch (MatchException v27) {
                                                                    throw fw.aRe(v27);
                                                                }
                                                            }
                                                            v25 = v23 < 0 ? var26_31 : NaN;
                                                        }
                                                        var41_42 = v25;
                                                        try {
                                                            try {
                                                                cfr_temp_5 = var38_40.z - 0.0;
                                                                v28 = cfr_temp_5 == 0.0 ? 0 : (cfr_temp_5 > 0.0 ? 1 : -1);
                                                                if (var3_3 != null) break block107;
                                                                if (v28 <= 0) break block108;
                                                            }
                                                            catch (MatchException v29) {
                                                                throw fw.aRe(v29);
                                                            }
                                                            v30 = var32_35;
                                                            break block109;
                                                        }
                                                        catch (MatchException v31) {
                                                            throw fw.aRe(v31);
                                                        }
                                                    }
                                                    try {
                                                        v30 = var38_40.z;
                                                        if (var3_3 != null) break block109;
                                                        cfr_temp_6 = v30 - 0.0;
                                                        v28 = cfr_temp_6 == 0.0 ? 0 : (cfr_temp_6 < 0.0 ? -1 : 1);
                                                    }
                                                    catch (MatchException v32) {
                                                        throw fw.aRe(v32);
                                                    }
                                                }
                                                v30 = v28 < 0 ? var30_34 : NaN;
                                            }
                                            var43_43 = v30;
                                            var45_44 = 0;
                                            block91: while (true) {
                                                v33 = var45_44;
                                                block92: while (v33 < 4) {
                                                    block110: {
                                                        try {
                                                            v34 = var39_41;
                                                            if (var3_3 != null) break block110;
                                                            v14 /* !! */  = (CallSite)Double.isNaN(v34);
                                                            if (var3_3 != null) continue block90;
                                                        }
                                                        catch (MatchException v35) {
                                                            throw fw.aRe(v35);
                                                        }
                                                        try {
                                                            v34 = v14 /* !! */  != false ? var22_23 + (var24_26 - var22_23) * ((double)var45_44 / 3.0) : var39_41;
                                                        }
                                                        catch (MatchException v36) {
                                                            throw fw.aRe(v36);
                                                        }
                                                    }
                                                    var46_45 = v34;
                                                    for (var48_46 = 0; var48_46 < 4; ++var48_46) {
                                                        block113: {
                                                            block114: {
                                                                block112: {
                                                                    block111: {
                                                                        try {
                                                                            v37 = var41_42;
                                                                            if (var3_3 != null) break block111;
                                                                            v33 = (int)Double.isNaN(v37);
                                                                            if (var3_3 != null) continue block92;
                                                                        }
                                                                        catch (MatchException v38) {
                                                                            throw fw.aRe(v38);
                                                                        }
                                                                        try {
                                                                            v37 = v33 != 0 ? var26_31 + (var28_33 - var26_31) * ((double)var48_46 / 3.0) : var41_42;
                                                                        }
                                                                        catch (MatchException v39) {
                                                                            throw fw.aRe(v39);
                                                                        }
                                                                    }
                                                                    var49_47 = v37;
                                                                    try {
                                                                        v40 = Double.isNaN(var43_43);
                                                                        if (var3_3 != null) break block112;
                                                                        if (!v40) {
                                                                        }
                                                                        ** GOTO lbl220
                                                                    }
                                                                    catch (MatchException v41) {
                                                                        throw fw.aRe(v41);
                                                                    }
                                                                    var51_48 = var43_43;
                                                                    try {
                                                                        try {
                                                                            if (var3_3 == null) break block113;
lbl220:
                                                                            // 2 sources

                                                                            v42 = var41_42;
                                                                            if (var3_3 != null) break block114;
                                                                        }
                                                                        catch (MatchException v43) {
                                                                            throw fw.aRe(v43);
                                                                        }
                                                                        v40 = Double.isNaN(v42);
                                                                    }
                                                                    catch (MatchException v44) {
                                                                        throw fw.aRe(v44);
                                                                    }
                                                                }
                                                                if (!v40) ** GOTO lbl234
                                                                var51_48 = var30_34 + (var32_35 - var30_34) * ((double)var48_46 / 3.0);
                                                                try {
                                                                    if (var3_3 == null) break block113;
lbl234:
                                                                    // 2 sources

                                                                    v42 = var30_34 + (var32_35 - var30_34) * ((double)var45_44 / 3.0);
                                                                }
                                                                catch (MatchException v45) {
                                                                    throw fw.aRe(v45);
                                                                }
                                                            }
                                                            var51_48 = v42;
                                                        }
                                                        var18_17.add(new Vec3d(var46_45, var49_47, var51_48));
                                                        if (var3_3 == null) continue;
                                                    }
                                                    ++var45_44;
                                                    if (var3_3 == null) continue block91;
                                                }
                                                break;
                                            }
                                        }
                                        ++var37_39;
                                        if (var3_3 == null) continue block89;
                                    }
                                    break;
                                }
                                if (var3_3 == null) continue block87;
                            }
                            break;
                        }
                        v13 /* !! */  = fw.aRi("v", (int)20403, (long)(7606990662980219969L ^ var1_1));
                    }
                    var20_19 = v13 /* !! */ ;
                    var21_21 = new Random(var7_6.hashCode());
                    var22_22 = var14_13.getBoundingBoxes();
                    for (var23_24 = 0; var23_24 < fw.aRi("v", (int)5843, (long)(3469466251136560424L ^ var1_1)); ++var23_24) {
                        block131: {
                            block128: {
                                block132: {
                                    block129: {
                                        block130: {
                                            block127: {
                                                block125: {
                                                    block122: {
                                                        block126: {
                                                            block123: {
                                                                block124: {
                                                                    block121: {
                                                                        block119: {
                                                                            block116: {
                                                                                block120: {
                                                                                    block117: {
                                                                                        block118: {
                                                                                            block115: {
                                                                                                var24_27 = (Box)var22_22.get(var21_21.nextInt(var22_22.size()));
                                                                                                var25_29 = var21_21.nextInt((int)fw.aRi("v", (int)23221, (long)(1786539916993995113L ^ var1_1)));
                                                                                                v0 = var21_21.nextBoolean();
                                                                                                if (var3_3 != null) continue block85;
                                                                                                try {
                                                                                                    if (var3_3 != null) break block115;
                                                                                                    if (!v0) break block116;
                                                                                                }
                                                                                                catch (MatchException v46) {
                                                                                                    throw fw.aRe(v46);
                                                                                                }
                                                                                                v47 = var25_29;
                                                                                            }
                                                                                            try {
                                                                                                try {
                                                                                                    if (var3_3 != null) break block117;
                                                                                                    if (v47 != 0) break block118;
                                                                                                }
                                                                                                catch (MatchException v48) {
                                                                                                    throw fw.aRe(v48);
                                                                                                }
                                                                                                v49 = var24_27.minX;
                                                                                                break block119;
                                                                                            }
                                                                                            catch (MatchException v50) {
                                                                                                throw fw.aRe(v50);
                                                                                            }
                                                                                        }
                                                                                        v47 = var25_29;
                                                                                    }
                                                                                    try {
                                                                                        if (v47 != 1) break block120;
                                                                                        v49 = var24_27.maxX;
                                                                                        break block119;
                                                                                    }
                                                                                    catch (MatchException v51) {
                                                                                        throw fw.aRe(v51);
                                                                                    }
                                                                                }
                                                                                v49 = var24_27.minX + var21_21.nextDouble() * (var24_27.maxX - var24_27.minX);
                                                                                break block119;
                                                                            }
                                                                            v49 = var24_27.minX + var21_21.nextDouble() * (var24_27.maxX - var24_27.minX);
                                                                        }
                                                                        var26_31 = v49;
                                                                        try {
                                                                            v52 = var21_21.nextBoolean();
                                                                            if (var3_3 != null) break block121;
                                                                            if (v52 == 0) break block122;
                                                                        }
                                                                        catch (MatchException v53) {
                                                                            throw fw.aRe(v53);
                                                                        }
                                                                        v52 = var25_29;
                                                                    }
                                                                    try {
                                                                        try {
                                                                            v54 = 2;
                                                                            if (var3_3 != null) break block123;
                                                                            if (v52 != v54) break block124;
                                                                        }
                                                                        catch (MatchException v55) {
                                                                            throw fw.aRe(v55);
                                                                        }
                                                                        v56 = var24_27.minY;
                                                                        break block125;
                                                                    }
                                                                    catch (MatchException v57) {
                                                                        throw fw.aRe(v57);
                                                                    }
                                                                }
                                                                v52 = var25_29;
                                                                v54 = 3;
                                                            }
                                                            try {
                                                                if (v52 != v54) break block126;
                                                                v56 = var24_27.maxY;
                                                                break block125;
                                                            }
                                                            catch (MatchException v58) {
                                                                throw fw.aRe(v58);
                                                            }
                                                        }
                                                        v56 = var24_27.minY + var21_21.nextDouble() * (var24_27.maxY - var24_27.minY);
                                                        break block125;
                                                    }
                                                    v56 = var24_27.minY + var21_21.nextDouble() * (var24_27.maxY - var24_27.minY);
                                                }
                                                var28_33 = v56;
                                                try {
                                                    v59 = var21_21.nextBoolean();
                                                    if (var3_3 != null) break block127;
                                                    if (v59 == 0) break block128;
                                                }
                                                catch (MatchException v60) {
                                                    throw fw.aRe(v60);
                                                }
                                                v59 = var25_29;
                                            }
                                            try {
                                                try {
                                                    v61 = 4;
                                                    if (var3_3 != null) break block129;
                                                    if (v59 != v61) break block130;
                                                }
                                                catch (MatchException v62) {
                                                    throw fw.aRe(v62);
                                                }
                                                v63 = var24_27.minZ;
                                                break block131;
                                            }
                                            catch (MatchException v64) {
                                                throw fw.aRe(v64);
                                            }
                                        }
                                        v59 = var25_29;
                                        v61 = 5;
                                    }
                                    try {
                                        if (v59 != v61) break block132;
                                        v63 = var24_27.maxZ;
                                        break block131;
                                    }
                                    catch (MatchException v65) {
                                        throw fw.aRe(v65);
                                    }
                                }
                                v63 = var24_27.minZ + var21_21.nextDouble() * (var24_27.maxZ - var24_27.minZ);
                                break block131;
                            }
                            v63 = var24_27.minZ + var21_21.nextDouble() * (var24_27.maxZ - var24_27.minZ);
                        }
                        var30_34 = v63;
                        var18_17.add(new Vec3d(var26_31 + (double)var7_6.getX(), var28_33 + (double)var7_6.getY(), var30_34 + (double)var7_6.getZ()));
                        if (var3_3 == null) continue;
                    }
                    for (Vec3d var24_28 : var18_17) {
                        block134: {
                            block135: {
                                block133: {
                                    var25_30 = new RaycastContext(var15_14, var24_28, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.SOURCE_ONLY, (Entity)rD.dlmvG.player);
                                    var26_32 = rD.dlmvG.world.raycast(var25_30);
                                    try {
                                        v66 = var26_32;
                                        if (var3_3 != null) break block133;
                                        v1 /* !! */  = v66.getType();
                                        if (var3_3 != null) continue block86;
                                    }
                                    catch (MatchException v67) {
                                        throw fw.aRe(v67);
                                    }
                                    try {
                                        if (v1 /* !! */  != HitResult.Type.BLOCK) break block134;
                                        v66 = var26_32;
                                    }
                                    catch (MatchException v68) {
                                        throw fw.aRe(v68);
                                    }
                                }
                                try {
                                    try {
                                        if (var3_3 != null) break block135;
                                        if (!v66.getBlockPos().equals((Object)var7_6)) break block134;
                                    }
                                    catch (MatchException v69) {
                                        throw fw.aRe(v69);
                                    }
                                    v66 = var26_32;
                                }
                                catch (MatchException v70) {
                                    throw fw.aRe(v70);
                                }
                            }
                            return v66;
                        }
                        if (var3_3 == null) continue;
                    }
                    break;
                }
                if (var3_3 != null) break block84;
                continue block84;
            }
            break;
        }
        return null;
    }

    private static native MatchException aRe(MatchException var0);

    private native boolean aRc(boolean var1, boolean var2, boolean var3);

    private static native CallSite aRi(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int aRg(int var0, long var1);

    private static native /* synthetic */ boolean aRd(BlockPos var0);
}

