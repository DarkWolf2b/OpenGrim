/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.datafixers.util.Pair
 *  net.minecraft.block.entity.BlockEntity
 *  net.minecraft.item.Item
 *  net.minecraft.item.Items
 *  net.minecraft.util.Util
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.chunk.WorldChunk
 */
package sixtwo;

import com.mojang.datafixers.util.Pair;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;
import net.minecraft.util.Util;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.chunk.WorldChunk;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.ja;
import sixtwo.jc;
import sixtwo.kF;
import sixtwo.kH;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.rD;

public class dq
extends gg
implements lG {
    private final cK YLsuJ;
    private final cJ rlmtC;
    private final cJ wzGtS;
    private final cC pveEv;
    private final cG ApnsN;
    private final cG ZRJVA;
    private final cG mEDKH;
    private final cG JsVce;
    private final cG rQwKE;
    private final cG rmZxW;
    private final cG XwDpx;
    private final cG krEuG;
    private final cG hFiYC;
    private final cG ytNWg;
    private final cG WZexV;
    private final cG SSRqp;
    private final cG OPRdv;
    private final cG jppZY;
    private final cG RalId;
    private final cG IkAKZ;
    private final cG tWvfT;
    private final cG Yvlpb;
    private final Map<Item, Pair<cG, cG>> bZIEf;
    private final mT laGjl;
    private final List<BlockEntity> DJvpl;
    private final ExecutorService balhj;
    private boolean pvnDE;
    private static final long oXnOA;
    private static final long[] XmczP;
    private static final Integer[] pGfGW;
    private static final Map CSXAw;
    private static final long irQyF;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dq() {
        block4: {
            long l2 = oXnOA ^ 0x3A5C067AF755L;
            super(gf.aZL((int)81, false, gh.nOCvV));
            int[] nArray = new int[14];
            nArray[0] = (int)66;
            nArray[1] = (int)108;
            nArray[2] = (int)111;
            nArray[3] = (int)99;
            nArray[4] = (int)107;
            nArray[5] = (int)32;
            nArray[6] = (int)69;
            nArray[7] = (int)110;
            nArray[8] = (int)116;
            nArray[9] = (int)105;
            nArray[10] = (int)116;
            nArray[11] = (int)105;
            nArray[12] = (int)101;
            nArray[13] = (int)115;
            Item[] itemArray = new Item[9];
            itemArray[0] = Items.CHEST;
            itemArray[1] = Items.BARREL;
            itemArray[2] = Items.SHULKER_BOX;
            itemArray[3] = Items.ENDER_CHEST;
            itemArray[4] = Items.FURNACE;
            itemArray[5] = Items.TRAPPED_CHEST;
            itemArray[6] = Items.BREWING_STAND;
            itemArray[7] = Items.SPAWNER;
            itemArray[8] = Items.HOPPER;
            this.YLsuJ = new cK(this, mr.clS(nArray)).WK(itemArray).WQ();
            int[] nArray2 = new int[6];
            nArray2[0] = (int)70;
            nArray2[1] = (int)105;
            nArray2[2] = (int)108;
            nArray2[3] = (int)108;
            nArray2[4] = (int)101;
            nArray2[5] = (int)100;
            this.rlmtC = new cJ(this, mr.clS(nArray2)).WE(false);
            int[] nArray3 = new int[7];
            nArray3[0] = (int)84;
            nArray3[1] = (int)114;
            nArray3[2] = (int)97;
            nArray3[3] = (int)99;
            nArray3[4] = (int)101;
            nArray3[5] = (int)114;
            nArray3[6] = (int)115;
            this.wzGtS = new cJ(this, mr.clS(nArray3)).WE(false);
            int[] nArray4 = new int[13];
            nArray4[0] = (int)84;
            nArray4[1] = (int)114;
            nArray4[2] = (int)97;
            nArray4[3] = (int)99;
            nArray4[4] = (int)101;
            nArray4[5] = (int)114;
            nArray4[6] = (int)115;
            nArray4[7] = (int)32;
            nArray4[8] = (int)87;
            nArray4[9] = (int)105;
            nArray4[10] = (int)100;
            nArray4[11] = (int)116;
            nArray4[12] = (int)104;
            this.pveEv = new cC(this, mr.clS(nArray4)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
            int[] nArray5 = new int[19];
            nArray5[0] = (int)67;
            nArray5[1] = (int)104;
            nArray5[2] = (int)101;
            nArray5[3] = (int)115;
            nArray5[4] = (int)116;
            nArray5[5] = (int)32;
            nArray5[6] = (int)79;
            nArray5[7] = (int)117;
            nArray5[8] = (int)116;
            nArray5[9] = (int)108;
            nArray5[10] = (int)105;
            nArray5[11] = (int)110;
            nArray5[12] = (int)101;
            nArray5[13] = (int)32;
            nArray5[14] = (int)67;
            nArray5[15] = (int)111;
            nArray5[16] = (int)108;
            nArray5[17] = (int)111;
            nArray5[18] = (int)114;
            this.ApnsN = new cG(this, mr.clS(nArray5)).Uf(rD.dlM().bjG().bis());
            int[] nArray6 = new int[16];
            nArray6[0] = (int)67;
            nArray6[1] = (int)104;
            nArray6[2] = (int)101;
            nArray6[3] = (int)115;
            nArray6[4] = (int)116;
            nArray6[5] = (int)32;
            nArray6[6] = (int)70;
            nArray6[7] = (int)105;
            nArray6[8] = (int)108;
            nArray6[9] = (int)108;
            nArray6[10] = (int)32;
            nArray6[11] = (int)67;
            nArray6[12] = (int)111;
            nArray6[13] = (int)108;
            nArray6[14] = (int)111;
            nArray6[15] = (int)114;
            this.ZRJVA = new cG(this, mr.clS(nArray6)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray7 = new int[20];
            nArray7[0] = (int)66;
            nArray7[1] = (int)97;
            nArray7[2] = (int)114;
            nArray7[3] = (int)114;
            nArray7[4] = (int)101;
            nArray7[5] = (int)108;
            nArray7[6] = (int)32;
            nArray7[7] = (int)79;
            nArray7[8] = (int)117;
            nArray7[9] = (int)116;
            nArray7[10] = (int)108;
            nArray7[11] = (int)105;
            nArray7[12] = (int)110;
            nArray7[13] = (int)101;
            nArray7[14] = (int)32;
            nArray7[15] = (int)67;
            nArray7[16] = (int)111;
            nArray7[17] = (int)108;
            nArray7[18] = (int)111;
            nArray7[19] = (int)114;
            this.mEDKH = new cG(this, mr.clS(nArray7)).Uf(rD.dlM().bjG().bis());
            int[] nArray8 = new int[17];
            nArray8[0] = (int)66;
            nArray8[1] = (int)97;
            nArray8[2] = (int)114;
            nArray8[3] = (int)114;
            nArray8[4] = (int)101;
            nArray8[5] = (int)108;
            nArray8[6] = (int)32;
            nArray8[7] = (int)70;
            nArray8[8] = (int)105;
            nArray8[9] = (int)108;
            nArray8[10] = (int)108;
            nArray8[11] = (int)32;
            nArray8[12] = (int)67;
            nArray8[13] = (int)111;
            nArray8[14] = (int)108;
            nArray8[15] = (int)111;
            nArray8[16] = (int)114;
            this.JsVce = new cG(this, mr.clS(nArray8)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray9 = new int[21];
            nArray9[0] = (int)83;
            nArray9[1] = (int)104;
            nArray9[2] = (int)117;
            nArray9[3] = (int)108;
            nArray9[4] = (int)107;
            nArray9[5] = (int)101;
            nArray9[6] = (int)114;
            nArray9[7] = (int)32;
            nArray9[8] = (int)79;
            nArray9[9] = (int)117;
            nArray9[10] = (int)116;
            nArray9[11] = (int)108;
            nArray9[12] = (int)105;
            nArray9[13] = (int)110;
            nArray9[14] = (int)101;
            nArray9[15] = (int)32;
            nArray9[16] = (int)67;
            nArray9[17] = (int)111;
            nArray9[18] = (int)108;
            nArray9[19] = (int)111;
            nArray9[20] = (int)114;
            this.rQwKE = new cG(this, mr.clS(nArray9)).Uf(rD.dlM().bjG().bis());
            int[] nArray10 = new int[18];
            nArray10[0] = (int)83;
            nArray10[1] = (int)104;
            nArray10[2] = (int)117;
            nArray10[3] = (int)108;
            nArray10[4] = (int)107;
            nArray10[5] = (int)101;
            nArray10[6] = (int)114;
            nArray10[7] = (int)32;
            nArray10[8] = (int)70;
            nArray10[9] = (int)105;
            nArray10[10] = (int)108;
            nArray10[11] = (int)108;
            nArray10[12] = (int)32;
            nArray10[13] = (int)67;
            nArray10[14] = (int)111;
            nArray10[15] = (int)108;
            nArray10[16] = (int)111;
            nArray10[17] = (int)114;
            this.rmZxW = new cG(this, mr.clS(nArray10)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray11 = new int[25];
            nArray11[0] = (int)69;
            nArray11[1] = (int)110;
            nArray11[2] = (int)100;
            nArray11[3] = (int)101;
            nArray11[4] = (int)114;
            nArray11[5] = (int)32;
            nArray11[6] = (int)67;
            nArray11[7] = (int)104;
            nArray11[8] = (int)101;
            nArray11[9] = (int)115;
            nArray11[10] = (int)116;
            nArray11[11] = (int)32;
            nArray11[12] = (int)79;
            nArray11[13] = (int)117;
            nArray11[14] = (int)116;
            nArray11[15] = (int)108;
            nArray11[16] = (int)105;
            nArray11[17] = (int)110;
            nArray11[18] = (int)101;
            nArray11[19] = (int)32;
            nArray11[20] = (int)67;
            nArray11[21] = (int)111;
            nArray11[22] = (int)108;
            nArray11[23] = (int)111;
            nArray11[24] = (int)114;
            this.XwDpx = new cG(this, mr.clS(nArray11)).Uf(rD.dlM().bjG().bis());
            int[] nArray12 = new int[22];
            nArray12[0] = (int)69;
            nArray12[1] = (int)110;
            nArray12[2] = (int)100;
            nArray12[3] = (int)101;
            nArray12[4] = (int)114;
            nArray12[5] = (int)32;
            nArray12[6] = (int)67;
            nArray12[7] = (int)104;
            nArray12[8] = (int)101;
            nArray12[9] = (int)115;
            nArray12[10] = (int)116;
            nArray12[11] = (int)32;
            nArray12[12] = (int)70;
            nArray12[13] = (int)105;
            nArray12[14] = (int)108;
            nArray12[15] = (int)108;
            nArray12[16] = (int)32;
            nArray12[17] = (int)67;
            nArray12[18] = (int)111;
            nArray12[19] = (int)108;
            nArray12[20] = (int)111;
            nArray12[21] = (int)114;
            this.krEuG = new cG(this, mr.clS(nArray12)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray13 = new int[21];
            nArray13[0] = (int)70;
            nArray13[1] = (int)117;
            nArray13[2] = (int)114;
            nArray13[3] = (int)110;
            nArray13[4] = (int)97;
            nArray13[5] = (int)99;
            nArray13[6] = (int)101;
            nArray13[7] = (int)32;
            nArray13[8] = (int)79;
            nArray13[9] = (int)117;
            nArray13[10] = (int)116;
            nArray13[11] = (int)108;
            nArray13[12] = (int)105;
            nArray13[13] = (int)110;
            nArray13[14] = (int)101;
            nArray13[15] = (int)32;
            nArray13[16] = (int)67;
            nArray13[17] = (int)111;
            nArray13[18] = (int)108;
            nArray13[19] = (int)111;
            nArray13[20] = (int)114;
            this.hFiYC = new cG(this, mr.clS(nArray13)).Uf(rD.dlM().bjG().bis());
            int[] nArray14 = new int[18];
            nArray14[0] = (int)70;
            nArray14[1] = (int)117;
            nArray14[2] = (int)114;
            nArray14[3] = (int)110;
            nArray14[4] = (int)97;
            nArray14[5] = (int)99;
            nArray14[6] = (int)101;
            nArray14[7] = (int)32;
            nArray14[8] = (int)70;
            nArray14[9] = (int)105;
            nArray14[10] = (int)108;
            nArray14[11] = (int)108;
            nArray14[12] = (int)32;
            nArray14[13] = (int)67;
            nArray14[14] = (int)111;
            nArray14[15] = (int)108;
            nArray14[16] = (int)111;
            nArray14[17] = (int)114;
            this.ytNWg = new cG(this, mr.clS(nArray14)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray15 = new int[27];
            nArray15[0] = (int)84;
            nArray15[1] = (int)114;
            nArray15[2] = (int)97;
            nArray15[3] = (int)112;
            nArray15[4] = (int)112;
            nArray15[5] = (int)101;
            nArray15[6] = (int)100;
            nArray15[7] = (int)32;
            nArray15[8] = (int)67;
            nArray15[9] = (int)104;
            nArray15[10] = (int)101;
            nArray15[11] = (int)115;
            nArray15[12] = (int)116;
            nArray15[13] = (int)32;
            nArray15[14] = (int)79;
            nArray15[15] = (int)117;
            nArray15[16] = (int)116;
            nArray15[17] = (int)108;
            nArray15[18] = (int)105;
            nArray15[19] = (int)110;
            nArray15[20] = (int)101;
            nArray15[21] = (int)32;
            nArray15[22] = (int)67;
            nArray15[23] = (int)111;
            nArray15[24] = (int)108;
            nArray15[25] = (int)111;
            nArray15[26] = (int)114;
            this.WZexV = new cG(this, mr.clS(nArray15)).Uf(rD.dlM().bjG().bis());
            int[] nArray16 = new int[24];
            nArray16[0] = (int)84;
            nArray16[1] = (int)114;
            nArray16[2] = (int)97;
            nArray16[3] = (int)112;
            nArray16[4] = (int)112;
            nArray16[5] = (int)101;
            nArray16[6] = (int)100;
            nArray16[7] = (int)32;
            nArray16[8] = (int)67;
            nArray16[9] = (int)104;
            nArray16[10] = (int)101;
            nArray16[11] = (int)115;
            nArray16[12] = (int)116;
            nArray16[13] = (int)32;
            nArray16[14] = (int)70;
            nArray16[15] = (int)105;
            nArray16[16] = (int)108;
            nArray16[17] = (int)108;
            nArray16[18] = (int)32;
            nArray16[19] = (int)67;
            nArray16[20] = (int)111;
            nArray16[21] = (int)108;
            nArray16[22] = (int)111;
            nArray16[23] = (int)114;
            this.SSRqp = new cG(this, mr.clS(nArray16)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray17 = new int[27];
            nArray17[0] = (int)66;
            nArray17[1] = (int)114;
            nArray17[2] = (int)101;
            nArray17[3] = (int)119;
            nArray17[4] = (int)105;
            nArray17[5] = (int)110;
            nArray17[6] = (int)103;
            nArray17[7] = (int)32;
            nArray17[8] = (int)83;
            nArray17[9] = (int)116;
            nArray17[10] = (int)97;
            nArray17[11] = (int)110;
            nArray17[12] = (int)100;
            nArray17[13] = (int)32;
            nArray17[14] = (int)79;
            nArray17[15] = (int)117;
            nArray17[16] = (int)116;
            nArray17[17] = (int)108;
            nArray17[18] = (int)105;
            nArray17[19] = (int)110;
            nArray17[20] = (int)101;
            nArray17[21] = (int)32;
            nArray17[22] = (int)67;
            nArray17[23] = (int)111;
            nArray17[24] = (int)108;
            nArray17[25] = (int)111;
            nArray17[26] = (int)114;
            this.OPRdv = new cG(this, mr.clS(nArray17)).Uf(rD.dlM().bjG().bis());
            iS[] iSArray = dh.afl();
            int[] nArray18 = new int[24];
            nArray18[0] = (int)66;
            nArray18[1] = (int)114;
            nArray18[2] = (int)101;
            nArray18[3] = (int)119;
            nArray18[4] = (int)105;
            nArray18[5] = (int)110;
            nArray18[6] = (int)103;
            nArray18[7] = (int)32;
            nArray18[8] = (int)83;
            nArray18[9] = (int)116;
            nArray18[10] = (int)97;
            nArray18[11] = (int)110;
            nArray18[12] = (int)100;
            nArray18[13] = (int)32;
            nArray18[14] = (int)70;
            nArray18[15] = (int)105;
            nArray18[16] = (int)108;
            nArray18[17] = (int)108;
            nArray18[18] = (int)32;
            nArray18[19] = (int)67;
            nArray18[20] = (int)111;
            nArray18[21] = (int)108;
            nArray18[22] = (int)111;
            nArray18[23] = (int)114;
            this.jppZY = new cG(this, mr.clS(nArray18)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray19 = new int[21];
            nArray19[0] = (int)83;
            nArray19[1] = (int)112;
            nArray19[2] = (int)97;
            nArray19[3] = (int)119;
            nArray19[4] = (int)110;
            nArray19[5] = (int)101;
            nArray19[6] = (int)114;
            nArray19[7] = (int)32;
            nArray19[8] = (int)79;
            nArray19[9] = (int)117;
            nArray19[10] = (int)116;
            nArray19[11] = (int)108;
            nArray19[12] = (int)105;
            nArray19[13] = (int)110;
            nArray19[14] = (int)101;
            nArray19[15] = (int)32;
            nArray19[16] = (int)67;
            nArray19[17] = (int)111;
            nArray19[18] = (int)108;
            nArray19[19] = (int)111;
            nArray19[20] = (int)114;
            this.RalId = new cG(this, mr.clS(nArray19)).Uf(rD.dlM().bjG().bis());
            int[] nArray20 = new int[18];
            nArray20[0] = (int)83;
            nArray20[1] = (int)112;
            nArray20[2] = (int)97;
            nArray20[3] = (int)119;
            nArray20[4] = (int)110;
            nArray20[5] = (int)101;
            nArray20[6] = (int)114;
            nArray20[7] = (int)32;
            nArray20[8] = (int)70;
            nArray20[9] = (int)105;
            nArray20[10] = (int)108;
            nArray20[11] = (int)108;
            nArray20[12] = (int)32;
            nArray20[13] = (int)67;
            nArray20[14] = (int)111;
            nArray20[15] = (int)108;
            nArray20[16] = (int)111;
            nArray20[17] = (int)114;
            this.IkAKZ = new cG(this, mr.clS(nArray20)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            int[] nArray21 = new int[20];
            nArray21[0] = (int)72;
            nArray21[1] = (int)111;
            nArray21[2] = (int)112;
            nArray21[3] = (int)112;
            nArray21[4] = (int)101;
            nArray21[5] = (int)114;
            nArray21[6] = (int)32;
            nArray21[7] = (int)79;
            nArray21[8] = (int)117;
            nArray21[9] = (int)116;
            nArray21[10] = (int)108;
            nArray21[11] = (int)105;
            nArray21[12] = (int)110;
            nArray21[13] = (int)101;
            nArray21[14] = (int)32;
            nArray21[15] = (int)67;
            nArray21[16] = (int)111;
            nArray21[17] = (int)108;
            nArray21[18] = (int)111;
            nArray21[19] = (int)114;
            this.tWvfT = new cG(this, mr.clS(nArray21)).Uf(rD.dlM().bjG().bis());
            int[] nArray22 = new int[17];
            nArray22[0] = (int)72;
            nArray22[1] = (int)111;
            nArray22[2] = (int)112;
            nArray22[3] = (int)112;
            nArray22[4] = (int)101;
            nArray22[5] = (int)114;
            nArray22[6] = (int)32;
            nArray22[7] = (int)70;
            nArray22[8] = (int)105;
            nArray22[9] = (int)108;
            nArray22[10] = (int)108;
            nArray22[11] = (int)32;
            nArray22[12] = (int)67;
            nArray22[13] = (int)111;
            nArray22[14] = (int)108;
            nArray22[15] = (int)111;
            nArray22[16] = (int)114;
            this.Yvlpb = new cG(this, mr.clS(nArray22)).Uf(rD.dlM().bjG().bis().cob(0.5f));
            this.bZIEf = new LinkedHashMap<Item, Pair<cG, cG>>();
            this.laGjl = mT.cpz();
            this.DJvpl = new ArrayList<BlockEntity>();
            this.balhj = Executors.newSingleThreadExecutor();
            this.pveEv.Vf(this.wzGtS::WF);
            this.ahS(Items.CHEST, this.ApnsN, this.ZRJVA);
            this.ahS(Items.BARREL, this.mEDKH, this.JsVce);
            for (Item item : jc.FFgfM) {
                try {
                    this.bZIEf.put(item, (Pair<cG, cG>)Pair.of((Object)this.rQwKE, (Object)this.rmZxW));
                    if (iSArray == null) {
                        if (iSArray == null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw dq.ahX(matchException);
                }
            }
            this.ahT(Items.SHULKER_BOX, this.rQwKE, this.rmZxW);
            this.ahS(Items.ENDER_CHEST, this.XwDpx, this.krEuG);
            this.ahS(Items.FURNACE, this.hFiYC, this.ytNWg);
            this.ahS(Items.TRAPPED_CHEST, this.WZexV, this.SSRqp);
            this.ahS(Items.BREWING_STAND, this.OPRdv, this.jppZY);
            this.ahS(Items.SPAWNER, this.RalId, this.IkAKZ);
            this.ahS(Items.HOPPER, this.tWvfT, this.Yvlpb);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block12: {
            block11: {
                block10: {
                    dq.oXnOA = gb.aYR(-8878282971857989560L, 7372403609700005598L, MethodHandles.lookup().lookupClass()).a(9899638482448L);
                    dq.CSXAw = new HashMap<K, V>(13);
                    var5 = dq.oXnOA ^ 13066716436961L;
                    var7_1 = Cipher.getInstance("DES/CBC/NoPadding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var5 >>> 56);
                    for (var8_2 = 1; var8_2 < 8; ++var8_2) {
                        v2 = v2;
                        v2[var8_2] = (byte)(var5 << var8_2 * 8 >>> 56);
                    }
                    var7_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var13_3 = new long[98];
                    var10_4 = 0;
                    var11_5 = "\r\u0013$\u000f\u0087\u00a7,\u0011Df\u00caK;:\u001ao\u00e3k\u0013?\u00c9$:\u008e\u00e9I\u008b\u000b?\u00f2\u0011\u00f7\u0084\u00a8-\u00f7W<]}\u00d8n\u0015x\u00a0goz8\u009c\u00d3\u0019m\u00b2@8#\u00c0\u009fD\u00c3_\u000e\u0091\u0086\u00bd\u00d0M\u0091Z\u00c47\u0004i\u00b8\u00c1\u00c1\u00f6z\u00a0\u00a2\u000f}n\u00d9\u00cd\u00df\u001e&\u0095\\\u00f8\b\u00d0\u00f0\u00eb\u00b4\u00bf?\u00b3P\u00c3H\u008f\u00950\u00b6\u0018\u00a5\u00d3\u009fUa\u00ce\u0012\u00bf\u00ef\u00c7\u0018\u00ff\u00a7\u0010\u00ec\u00cf\u0017\u00160\u00cb\u0001\u00f9]\u00b8\u00fc)\u0094G2\u001e\u00aeS\u00ed.Hy\u0089\"\u0095\u00d6C\u00ce\u00f4\u009f=u-6m\u008f6\u00ab\u0003\u001a\u00d9O\u0080\u00a3\u008a> $\t\u0096\u00cf\u008f\u0003\u0019\u00a4\u0014l\u0019M\u00d3\u001dy\u00b1\u00c5^\b\u00dd*\u00fcJ#\u00d3\u00b4D\u00e4+:@\u001c>WZ\u00e8\u00ddo\u00f6\u0084d\u0090\u00e7O\u0082\u00e2{\u00fc\u00e7\u00d6\u0088\u00a0D<\u00cd\u00f0H|\u0090\u00cc\\\u0087\u001a\u00fd\u009a\f\u00cf\u00a8S\u0092L\u00baDO\u00a6 }_h\u00ebr\u00e7\u00f7\u00db\b\"7\u00a7\u00bbD7\u0012y\u0091$\u00f3I\u0005\u00d7R\u00d0\u00c9t\u0089\u00d0\u00ae7c\u00d9'\u00faVXq\u00a4n\u001f\u001d\u00b9\u00fb\u00aa\u001eh\u00b0\u00a7\u00a8,\\\u00e0/\u00ef\u0088\"\u0010\u008eU|\u00f4\u00f8\u00f6\u00de\u00abt\u00aad[srh\u0012xa\u009f\u00f9\u00e2\u00d8Y\u000f\u00eb\u00ca\u0098%\\YV\u00e5I@I\u00f2\u00da\u00a7\u008f\u00e03b\u00e9\buv\u00bc1L(\u0088\u00cd\u0099\t\u009c\u00ba$\u0080\u001ee\u00d6&\u0013\u00b6r\u00d0SC\u00c9\u0098\u00a9\u0012\u00f6\u00e3Du\u0000\u00d6\u00e1\u00e6u\u00feVQDffgJ\u0084\u009c\u00b5\u0016\u00b4\u0082\u00b6EN\u00de#\u000e\u008a\u00f2\u00c6k\u00c4\u000fP\u00d6\u007fd3M\u001b\u00f4\u00bc\u0093\u00b3}\u00af\u008b\u000b\u00ef\u00cb+\u00eb%\u008d\u00acF\u0012\u00e7\u00af\u0010\u00cfob\u00a7\u001d\u00aa\u0019\u00d8\u00bbw\u000f\u00dc}J\u0095\u00f5#\u00db\u00ce\u00c7zC\u00b2\u00cem3\u00e1j\u008a\u008b\u009ex95\u0013R\u00c3\u00d0i?\u001c\u00ca\u00b3K\u009f\u00dfn\u0084\u00b1'\u00fe\u000b\u00c5NG\u00d4\u00cdSR&Zp\u0013\u00fd\u00afG\u00ba\u00a5\u00aeLS\u00c7I\u0095\u00cb'\u0090;k\u00e1\u00f4\u0084\u0000]\u0004R\u001d\u0000\\\u00a0\u008c\u00e0\u00c3\u00f6\u0096\u00f0\u000b\u00d0\u00d0\u00d0\u00ba\b%\u0087T+\u00e0\u00fe\u0012o\u0093\u00f3\u00b9\u00c81\u008bY:\u00c7b\u0014,\u00cc6I\u00b8-i\u00fc};]\u008c\u00d1|p\u00e7FZ0\u00df\u0087\u00cf\u00a6\u001c\"`_fH\u00ac\u008co*0\u00ea.QE\u00fa\u009a`\u0010\u00c2\u00bc\u009f\u008a\u00df10\u00c0\u00dc4\u0002O\u0098D\u00dd\u00d4\u00cc \u0080\u00dcP/bU\u00ccg\u00d2v\u00e7\u00ef\u000e)\u008d9Q\u00f6\u009f\u001b\u00ccP\u00f5\u00fa\u00c9\u00ba\u00e5{\u00d1\u001c%B\"\u00ce@\u001f\u00e7-\u00f9\u0093]\u009b=Gx-1\u00d91R\u00171lX(\u00f9 \u009d!\u00a3\u0085\u0003\u00ff\u008bpu6Mm\u0004\u00b2m\u001cK3\u0090\u00f5\u00denJ\u00d1\u00efv\u00fe\u008d/\u00dcy\u00d6\b\u00e5\u00b3\u00bdB1Ac\u001c\u00de\u001a\u00e4/^\u0088\u001d\u0019\u00fb\u00e4y\u00ccS\\\u0084\u0092\u0091\u008a\u00cdAx\u00d8\t\u00bf]a\u00fb\u0087\u00c4:\u0010\u0003'$\u00a1\u00ec\\\u0092U<\u0085\u00ac\u00f0\\u\u000e\u0084y\u00dcw\u0094-";
                    var12_6 = "\r\u0013$\u000f\u0087\u00a7,\u0011Df\u00caK;:\u001ao\u00e3k\u0013?\u00c9$:\u008e\u00e9I\u008b\u000b?\u00f2\u0011\u00f7\u0084\u00a8-\u00f7W<]}\u00d8n\u0015x\u00a0goz8\u009c\u00d3\u0019m\u00b2@8#\u00c0\u009fD\u00c3_\u000e\u0091\u0086\u00bd\u00d0M\u0091Z\u00c47\u0004i\u00b8\u00c1\u00c1\u00f6z\u00a0\u00a2\u000f}n\u00d9\u00cd\u00df\u001e&\u0095\\\u00f8\b\u00d0\u00f0\u00eb\u00b4\u00bf?\u00b3P\u00c3H\u008f\u00950\u00b6\u0018\u00a5\u00d3\u009fUa\u00ce\u0012\u00bf\u00ef\u00c7\u0018\u00ff\u00a7\u0010\u00ec\u00cf\u0017\u00160\u00cb\u0001\u00f9]\u00b8\u00fc)\u0094G2\u001e\u00aeS\u00ed.Hy\u0089\"\u0095\u00d6C\u00ce\u00f4\u009f=u-6m\u008f6\u00ab\u0003\u001a\u00d9O\u0080\u00a3\u008a> $\t\u0096\u00cf\u008f\u0003\u0019\u00a4\u0014l\u0019M\u00d3\u001dy\u00b1\u00c5^\b\u00dd*\u00fcJ#\u00d3\u00b4D\u00e4+:@\u001c>WZ\u00e8\u00ddo\u00f6\u0084d\u0090\u00e7O\u0082\u00e2{\u00fc\u00e7\u00d6\u0088\u00a0D<\u00cd\u00f0H|\u0090\u00cc\\\u0087\u001a\u00fd\u009a\f\u00cf\u00a8S\u0092L\u00baDO\u00a6 }_h\u00ebr\u00e7\u00f7\u00db\b\"7\u00a7\u00bbD7\u0012y\u0091$\u00f3I\u0005\u00d7R\u00d0\u00c9t\u0089\u00d0\u00ae7c\u00d9'\u00faVXq\u00a4n\u001f\u001d\u00b9\u00fb\u00aa\u001eh\u00b0\u00a7\u00a8,\\\u00e0/\u00ef\u0088\"\u0010\u008eU|\u00f4\u00f8\u00f6\u00de\u00abt\u00aad[srh\u0012xa\u009f\u00f9\u00e2\u00d8Y\u000f\u00eb\u00ca\u0098%\\YV\u00e5I@I\u00f2\u00da\u00a7\u008f\u00e03b\u00e9\buv\u00bc1L(\u0088\u00cd\u0099\t\u009c\u00ba$\u0080\u001ee\u00d6&\u0013\u00b6r\u00d0SC\u00c9\u0098\u00a9\u0012\u00f6\u00e3Du\u0000\u00d6\u00e1\u00e6u\u00feVQDffgJ\u0084\u009c\u00b5\u0016\u00b4\u0082\u00b6EN\u00de#\u000e\u008a\u00f2\u00c6k\u00c4\u000fP\u00d6\u007fd3M\u001b\u00f4\u00bc\u0093\u00b3}\u00af\u008b\u000b\u00ef\u00cb+\u00eb%\u008d\u00acF\u0012\u00e7\u00af\u0010\u00cfob\u00a7\u001d\u00aa\u0019\u00d8\u00bbw\u000f\u00dc}J\u0095\u00f5#\u00db\u00ce\u00c7zC\u00b2\u00cem3\u00e1j\u008a\u008b\u009ex95\u0013R\u00c3\u00d0i?\u001c\u00ca\u00b3K\u009f\u00dfn\u0084\u00b1'\u00fe\u000b\u00c5NG\u00d4\u00cdSR&Zp\u0013\u00fd\u00afG\u00ba\u00a5\u00aeLS\u00c7I\u0095\u00cb'\u0090;k\u00e1\u00f4\u0084\u0000]\u0004R\u001d\u0000\\\u00a0\u008c\u00e0\u00c3\u00f6\u0096\u00f0\u000b\u00d0\u00d0\u00d0\u00ba\b%\u0087T+\u00e0\u00fe\u0012o\u0093\u00f3\u00b9\u00c81\u008bY:\u00c7b\u0014,\u00cc6I\u00b8-i\u00fc};]\u008c\u00d1|p\u00e7FZ0\u00df\u0087\u00cf\u00a6\u001c\"`_fH\u00ac\u008co*0\u00ea.QE\u00fa\u009a`\u0010\u00c2\u00bc\u009f\u008a\u00df10\u00c0\u00dc4\u0002O\u0098D\u00dd\u00d4\u00cc \u0080\u00dcP/bU\u00ccg\u00d2v\u00e7\u00ef\u000e)\u008d9Q\u00f6\u009f\u001b\u00ccP\u00f5\u00fa\u00c9\u00ba\u00e5{\u00d1\u001c%B\"\u00ce@\u001f\u00e7-\u00f9\u0093]\u009b=Gx-1\u00d91R\u00171lX(\u00f9 \u009d!\u00a3\u0085\u0003\u00ff\u008bpu6Mm\u0004\u00b2m\u001cK3\u0090\u00f5\u00denJ\u00d1\u00efv\u00fe\u008d/\u00dcy\u00d6\b\u00e5\u00b3\u00bdB1Ac\u001c\u00de\u001a\u00e4/^\u0088\u001d\u0019\u00fb\u00e4y\u00ccS\\\u0084\u0092\u0091\u008a\u00cdAx\u00d8\t\u00bf]a\u00fb\u0087\u00c4:\u0010\u0003'$\u00a1\u00ec\\\u0092U<\u0085\u00ac\u00f0\\u\u000e\u0084y\u00dcw\u0094-".length();
                    var9_7 = 0;
                    while (true) {
                        var14_9 = var11_5.substring(var9_7, var9_7 += 8).getBytes("ISO-8859-1");
                        v3 = var13_3;
                        v4 = var10_4++;
                        v5 = ((long)var14_9[0] & 255L) << 56 | ((long)var14_9[1] & 255L) << 48 | ((long)var14_9[2] & 255L) << 40 | ((long)var14_9[3] & 255L) << 32 | ((long)var14_9[4] & 255L) << 24 | ((long)var14_9[5] & 255L) << 16 | ((long)var14_9[6] & 255L) << 8 | (long)var14_9[7] & 255L;
                        v6 = -1;
                        break block10;
                        break;
                    }
lbl26:
                    // 1 sources

                    while (true) {
                        v3[v4] = v7;
                        if (var9_7 < var12_6) ** continue;
                        var11_5 = "\u00f9\u00c6\u0012dka\u00c7u.\u0093\u00b1)\u00f6\u00e33M";
                        var12_6 = "\u00f9\u00c6\u0012dka\u00c7u.\u0093\u00b1)\u00f6\u00e33M".length();
                        var9_7 = 0;
                        while (true) {
                            var14_9 = var11_5.substring(var9_7, var9_7 += 8).getBytes("ISO-8859-1");
                            v3 = var13_3;
                            v4 = var10_4++;
                            v5 = ((long)var14_9[0] & 255L) << 56 | ((long)var14_9[1] & 255L) << 48 | ((long)var14_9[2] & 255L) << 40 | ((long)var14_9[3] & 255L) << 32 | ((long)var14_9[4] & 255L) << 24 | ((long)var14_9[5] & 255L) << 16 | ((long)var14_9[6] & 255L) << 8 | (long)var14_9[7] & 255L;
                            v6 = 0;
                            break block10;
                            break;
                        }
                        break;
                    }
lbl39:
                    // 1 sources

                    while (true) {
                        v3[v4] = v7;
                        if (var9_7 < var12_6) ** continue;
                        break block11;
                        break;
                    }
                }
                var15_10 = v5;
                var17_8 = var7_1.doFinal(new byte[]{(byte)(var15_10 >>> 56), (byte)(var15_10 >>> 48), (byte)(var15_10 >>> 40), (byte)(var15_10 >>> 32), (byte)(var15_10 >>> 24), (byte)(var15_10 >>> 16), (byte)(var15_10 >>> 8), (byte)var15_10});
                v7 = ((long)var17_8[0] & 255L) << 56 | ((long)var17_8[1] & 255L) << 48 | ((long)var17_8[2] & 255L) << 40 | ((long)var17_8[3] & 255L) << 32 | ((long)var17_8[4] & 255L) << 24 | ((long)var17_8[5] & 255L) << 16 | ((long)var17_8[6] & 255L) << 8 | (long)var17_8[7] & 255L;
                switch (v6) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl52:
                    // 1 sources

                    ** continue;
                }
            }
            dq.XmczP = var13_3;
            dq.pGfGW = new Integer[98];
            var0_11 = Cipher.getInstance("DES/CBC/NoPadding");
            v8 = SecretKeyFactory.getInstance("DES");
            v9 = new byte[8];
            v10 = v9;
            v9[0] = (byte)(var5 >>> 56);
            for (var1_12 = 1; var1_12 < 8; ++var1_12) {
                v10 = v10;
                v10[var1_12] = (byte)(var5 << var1_12 * 8 >>> 56);
            }
            break block12;
lbl66:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_11.init(2, (Key)v8.generateSecret(new DESKeySpec(v10)), new IvParameterSpec(new byte[8]));
        var2_13 = 2175719190397083330L;
        var4_14 = var0_11.doFinal(new byte[]{(byte)(var2_13 >>> 56), (byte)(var2_13 >>> 48), (byte)(var2_13 >>> 40), (byte)(var2_13 >>> 32), (byte)(var2_13 >>> 24), (byte)(var2_13 >>> 16), (byte)(var2_13 >>> 8), (byte)var2_13});
        ** while (true)
        dq.irQyF = ((long)var4_14[0] & 255L) << 56 | ((long)var4_14[1] & 255L) << 48 | ((long)var4_14[2] & 255L) << 40 | ((long)var4_14[3] & 255L) << 32 | ((long)var4_14[4] & 255L) << 24 | ((long)var4_14[5] & 255L) << 16 | ((long)var4_14[6] & 255L) << 8 | (long)var4_14[7] & 255L;
    }

    @Override
    public void aaj() {
        super.aaj();
        this.DJvpl.clear();
        this.pvnDE = true;
    }

    private Pair<mG, mG> ahN(BlockEntity blockEntity) {
        block11: {
            Pair pair;
            block10: {
                Pair<cG, cG> pair2;
                iS[] iSArray;
                block8: {
                    Item item;
                    block9: {
                        long l2 = oXnOA ^ 0x2BB48D5F3A32L;
                        item = blockEntity.getCachedState().getBlock().asItem();
                        iSArray = dh.afl();
                        try {
                            try {
                                pair2 = this;
                                if (iSArray != null) break block8;
                                if (pair2.ahO(item)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw dq.ahX(matchException);
                        }
                    }
                    pair2 = this.bZIEf.get(item);
                }
                Pair pair3 = (Pair)pair2;
                try {
                    try {
                        pair = pair3;
                        if (iSArray != null) break block10;
                        if (pair == null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw dq.ahX(matchException);
                    }
                    pair = new Pair((Object)((cG)pair3.getFirst()).Wf(), (Object)((cG)pair3.getSecond()).Wf());
                }
                catch (MatchException matchException) {
                    throw dq.ahX(matchException);
                }
            }
            return pair;
        }
        return null;
    }

    private boolean ahO(Item item) {
        boolean bl2;
        block10: {
            block13: {
                block11: {
                    iS[] iSArray;
                    block12: {
                        long l2 = oXnOA ^ 0x12FBD6DA0ABBL;
                        boolean bl3 = jc.FFgfM.contains(item);
                        iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = this.YLsuJ.WW(item);
                                        if (iSArray != null) break block10;
                                        if (bl2) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw dq.ahX(matchException);
                                    }
                                    bl2 = bl3;
                                    if (iSArray != null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw dq.ahX(matchException);
                                }
                                if (!bl2) break block13;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                            bl2 = this.YLsuJ.WW(Items.SHULKER_BOX);
                        }
                        catch (MatchException matchException) {
                            throw dq.ahX(matchException);
                        }
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (!bl2) break block13;
                    }
                    catch (MatchException matchException) {
                        throw dq.ahX(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException ahX(MatchException matchException) {
        return matchException;
    }

    private static CallSite aia(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dq" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void ahS(Item item, cG cG2, cG cG3) {
        this.bZIEf.put(item, (Pair<cG, cG>)Pair.of((Object)cG2, (Object)cG3));
        this.ahT(item, cG2, cG3);
    }

    private void ahT(Item item, cG cG2, cG cG3) {
        cG2.Vf(() -> this.ahO(item));
        cG3.Vf(() -> this.ahO(item));
    }

    private static int ahY(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x285C;
        if (pGfGW[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = XmczP[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])CSXAw.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CSXAw.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dq", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dq.pGfGW[n3] = n4;
        }
        return pGfGW[n3];
    }

    private List<BlockEntity> ahR() {
        long l2 = oXnOA ^ 0x54BA3655E50BL;
        ArrayList<BlockEntity> arrayList = new ArrayList<BlockEntity>();
        iS[] iSArray = dh.afl();
        Iterator<WorldChunk> iterator = ja.byG().iterator();
        block6: while (true) {
            boolean bl2 = iterator.hasNext();
            block7: while (bl2) {
                WorldChunk worldChunk = iterator.next();
                for (BlockEntity blockEntity : ja.byD(worldChunk)) {
                    block10: {
                        boolean bl3;
                        block11: {
                            block9: {
                                Item item = blockEntity.getCachedState().getBlock().asItem();
                                bl2 = this.bZIEf.containsKey(item);
                                if (iSArray != null) continue block7;
                                try {
                                    if (iSArray != null) break block9;
                                    if (!bl2) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dq.ahX(matchException);
                                }
                                bl3 = this.ahO(item);
                            }
                            try {
                                try {
                                    if (iSArray != null) break block10;
                                    if (bl3) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw dq.ahX(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                        }
                        bl3 = arrayList.add(blockEntity);
                    }
                    if (iSArray == null) continue;
                }
                if (iSArray == null) continue block6;
            }
            break;
        }
        return arrayList;
    }

    private static int ahZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dq.ahY(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    @hG
    public void ahQ(go.sX sX2) {
        block33: {
            Vec3d vec3d;
            float f2;
            iS[] iSArray;
            block31: {
                block32: {
                    boolean bl2;
                    block27: {
                        long l2 = oXnOA ^ 0xBAFD0CCA27L;
                        iSArray = dh.afl();
                        try {
                            if (!this.bab()) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dq.ahX(matchException);
                        }
                        Vec3d vec3d2 = rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate();
                        MMuss.startBatch();
                        try {
                            for (BlockEntity blockEntity : this.DJvpl) {
                                block29: {
                                    Pair<mG, mG> pair;
                                    block30: {
                                        block28: {
                                            bl2 = jJ.bIC(blockEntity);
                                            if (iSArray != null) break block27;
                                            try {
                                                block36: {
                                                    if (bl2) break block28;
                                                    break block36;
                                                    catch (MatchException matchException) {
                                                        throw dq.ahX(matchException);
                                                    }
                                                }
                                                if (iSArray == null) continue;
                                            }
                                            catch (MatchException matchException) {
                                                throw dq.ahX(matchException);
                                            }
                                        }
                                        pair = this.ahN(blockEntity);
                                        if (iSArray != null) break block29;
                                        try {
                                            block37: {
                                                if (pair != null) break block30;
                                                break block37;
                                                catch (MatchException matchException) {
                                                    throw dq.ahX(matchException);
                                                }
                                            }
                                            if (iSArray == null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw dq.ahX(matchException);
                                        }
                                    }
                                    MMuss.bUS(kH.bTJ(sX2.bbh(), new Box(blockEntity.getPos()).offset(vec3d2), this.rlmtC.WF(), false).dtN((mG)pair.getFirst()).dtO((mG)pair.getSecond()).dtS());
                                }
                                if (iSArray == null) continue;
                            }
                            MMuss.endBatch();
                        }
                        catch (Throwable throwable) {
                            MMuss.endBatch();
                            throw throwable;
                        }
                        bl2 = this.wzGtS.WF();
                    }
                    if (!bl2) {
                        return;
                    }
                    Vec3d vec3d3 = rD.dlmvG.getCameraEntity().getLerpedPos(sX2.bbi());
                    float f3 = rD.dlmvG.getCameraEntity().getEyeHeight(rD.dlmvG.getCameraEntity().getPose());
                    boolean bl3 = rD.dlmvG.options.getPerspective().isFirstPerson();
                    f2 = this.pveEv.VB();
                    float f4 = (float)(-Math.toRadians(rD.dlmvG.getCameraEntity().getPitch()));
                    float f5 = (float)(-Math.toRadians(rD.dlmvG.getCameraEntity().getYaw()));
                    vec3d = new Vec3d(0.0, 0.0, 75.0).rotateX(f4).rotateY(f5).add(vec3d3.add(0.0, (double)f3, 0.0));
                    try {
                        if (iSArray != null) break block31;
                        if (bl3) break block32;
                    }
                    catch (MatchException matchException) {
                        throw dq.ahX(matchException);
                    }
                    vec3d = vec3d3.add(0.0, (double)f3, 0.0);
                }
                dJxyG.startBatch();
            }
            try {
                for (BlockEntity blockEntity : this.DJvpl) {
                    block34: {
                        Pair<mG, mG> pair;
                        block35: {
                            block38: {
                                pair = this.ahN(blockEntity);
                                if (iSArray != null) break block33;
                                if (iSArray != null) break block34;
                                break block38;
                                catch (MatchException matchException) {
                                    throw dq.ahX(matchException);
                                }
                            }
                            try {
                                block39: {
                                    if (pair != null) break block35;
                                    break block39;
                                    catch (MatchException matchException) {
                                        throw dq.ahX(matchException);
                                    }
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                        }
                        dJxyG.bUv(kF.bTn(sX2.bbh(), vec3d, blockEntity.getPos().toCenterPos(), (mG)pair.getFirst()).dts(f2).dtt());
                    }
                    if (iSArray == null) continue;
                    break;
                }
            }
            finally {
                dJxyG.endBatch();
            }
        }
    }

    @hG
    public void ahP(gH.th th2) {
        block13: {
            dq dq2;
            block14: {
                boolean bl2;
                block12: {
                    iS[] iSArray;
                    block10: {
                        block11: {
                            long l2 = oXnOA ^ 0x4D319D13DF2DL;
                            iSArray = dh.afl();
                            try {
                                bl2 = this.bab();
                                if (iSArray != null) break block10;
                                if (bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                            return;
                        }
                        bl2 = this.laGjl.cpC(irQyF);
                    }
                    try {
                        try {
                            try {
                                if (iSArray != null) break block12;
                                if (!bl2) break block13;
                            }
                            catch (MatchException matchException) {
                                throw dq.ahX(matchException);
                            }
                            dq2 = this;
                            if (iSArray != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw dq.ahX(matchException);
                        }
                        bl2 = dq2.pvnDE;
                    }
                    catch (MatchException matchException) {
                        throw dq.ahX(matchException);
                    }
                }
                try {
                    if (!bl2) break block13;
                    CompletableFuture.supplyAsync(this::ahR, this.balhj).thenAcceptAsync(list -> {
                        this.DJvpl.clear();
                        this.DJvpl.addAll((Collection<BlockEntity>)list);
                        this.pvnDE = true;
                    }, (Executor)Util.getMainWorkerExecutor());
                    dq2 = this;
                }
                catch (MatchException matchException) {
                    throw dq.ahX(matchException);
                }
            }
            dq2.laGjl.cpB();
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dq.class, "ahZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

