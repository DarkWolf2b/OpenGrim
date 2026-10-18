/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import sixtwo.cK;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gO;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.jc;
import sixtwo.mr;

public class dF
extends gg {
    private final ct iqrsx;
    private final cu SMlWc;
    private final cu QJtRA;
    private final cK UBzDb;
    private final ct FjyNN;
    private final cu nZWdG;
    private final cu MIMsQ;
    private final cu WOZWS;
    private int mnITY;
    private static long Qusuy;
    private static long[] gWobV;
    private static Integer[] ffcdF;
    private static Map AlKzG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _d241af5c431a4490cab37e1b7101e237();

    public dF() {
        long l2 = Qusuy ^ 0x2D8954E71EF2L;
        super(gf.aZL((int)dF.alp("b", (int)5188, (long)(0x5835E3E01A547059L ^ l2)), false, gh.qBzlZ));
        this.iqrsx = new ct(this, mr.clS(new int[]{(int)dF.alp("b", (int)18963, (long)(0x76B6B86415C2AE09L ^ l2)), (int)dF.alp("b", (int)23464, (long)(0x7B5F8E90EFFBBF87L ^ l2)), (int)dF.alp("b", (int)15305, (long)(0x2C5418B5FFB6DFE7L ^ l2)), (int)dF.alp("b", (int)28191, (long)(0x44CEDBB507A98A2DL ^ l2))}));
        int[] nArray = new int[dF.alp("b", (int)15348, (long)(0x128B99EBF9E1DFD8L ^ l2))];
        nArray[0] = (int)dF.alp("b", (int)16857, (long)(0x40A0F9D8881025CFL ^ l2));
        nArray[1] = (int)dF.alp("b", (int)3886, (long)(0x21BBC62C5FF7EB0DL ^ l2));
        nArray[2] = (int)dF.alp("b", (int)27926, (long)(0x26E1BA386FCD8919L ^ l2));
        nArray[3] = (int)dF.alp("b", (int)6790, (long)(0x5F53C8D3B5B97E96L ^ l2));
        nArray[4] = (int)dF.alp("b", (int)7382, (long)(0x5A719F42C1BE78D0L ^ l2));
        nArray[5] = (int)dF.alp("b", (int)22688, (long)(0x398AB579A21BBCADL ^ l2));
        nArray[dF.alp("b", (int)15433, (long)(0x89D4E96D1BFD87AL ^ l2))] = (int)dF.alp("b", (int)25476, (long)(0x5E1A5FD2ED0687B1L ^ l2));
        this.SMlWc = new cu(this.iqrsx, mr.clS(nArray));
        this.QJtRA = new cu(this.iqrsx, mr.clS(new int[]{(int)dF.alp("b", (int)13005, (long)(0x31CC015243AD6F5L ^ l2)), (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2)), (int)dF.alp("b", (int)25241, (long)(0x7D1719A943A006BCL ^ l2)), (int)dF.alp("b", (int)9480, (long)(0x4A4D6036E3DEC136L ^ l2)), (int)dF.alp("b", (int)25476, (long)(0x5E1A5FD2ED0687B1L ^ l2))}));
        int[] nArray2 = new int[dF.alp("b", (int)7718, (long)(0x353FEC64D44FA39L ^ l2))];
        nArray2[0] = (int)dF.alp("b", (int)21685, (long)(0x53D5C1A84EDB30B7L ^ l2));
        nArray2[1] = (int)dF.alp("b", (int)6574, (long)(0x445840CF0392FD9AL ^ l2));
        nArray2[2] = (int)dF.alp("b", (int)13258, (long)(0xDAC4024390BD7F6L ^ l2));
        nArray2[3] = (int)dF.alp("b", (int)31634, (long)(0x7E33F0B634A21F81L ^ l2));
        nArray2[4] = (int)dF.alp("b", (int)21064, (long)(0x19EF22AAAF4BB64CL ^ l2));
        nArray2[5] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        nArray2[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))] = (int)dF.alp("b", (int)5636, (long)(0x61CB6A3BBBC0F20CL ^ l2));
        nArray2[dF.alp("b", (int)32397, (long)(0x1C32102393239A94L ^ l2))] = (int)dF.alp("b", (int)16038, (long)(0x4FE53EA9E4BBDABDL ^ l2));
        nArray2[dF.alp("b", (int)21348, (long)(0x283382A8B850B755L ^ l2))] = (int)dF.alp("b", (int)10346, (long)(0x1BCA1EA6CFF6CC69L ^ l2));
        nArray2[dF.alp("b", (int)9480, (long)(0x69C06A4871244131L ^ l2))] = (int)dF.alp("b", (int)25476, (long)(0x5E1A5FD2ED0687B1L ^ l2));
        nArray2[dF.alp("b", (int)2811, (long)(0x4D8B5BEC62286EC6L ^ l2))] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        nArray2[dF.alp("b", (int)26908, (long)(0x37637D2864318D3DL ^ l2))] = (int)dF.alp("b", (int)27940, (long)(0x6C2E3D183C228909L ^ l2));
        nArray2[dF.alp("b", (int)2558, (long)(0x40CF58736D5EDC8L ^ l2))] = (int)dF.alp("b", (int)18173, (long)(0x1F012276B86422DAL ^ l2));
        Item[] itemArray = new Item[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))];
        itemArray[0] = Items.WOODEN_SWORD;
        itemArray[1] = Items.STONE_SWORD;
        itemArray[2] = Items.IRON_SWORD;
        itemArray[3] = Items.GOLDEN_SWORD;
        itemArray[4] = Items.DIAMOND_SWORD;
        itemArray[5] = Items.NETHERITE_SWORD;
        this.UBzDb = new cK(this, mr.clS(nArray2)).WM(jc.WnbNG).WN(itemArray);
        int[] nArray3 = new int[dF.alp("b", (int)30994, (long)(0x1FA0CA76DA5A1D25L ^ l2))];
        nArray3[0] = (int)dF.alp("b", (int)32108, (long)(0x570DD2041DD9995CL ^ l2));
        nArray3[1] = (int)dF.alp("b", (int)13258, (long)(0xDAC4024390BD7F6L ^ l2));
        nArray3[2] = (int)dF.alp("b", (int)31634, (long)(0x7E33F0B634A21F81L ^ l2));
        nArray3[3] = (int)dF.alp("b", (int)25758, (long)(0x4885AA1AE068009FL ^ l2));
        nArray3[4] = (int)dF.alp("b", (int)27285, (long)(0x797251180BED8E90L ^ l2));
        nArray3[5] = (int)dF.alp("b", (int)11892, (long)(0x647FBC2020014A56L ^ l2));
        nArray3[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))] = (int)dF.alp("b", (int)22388, (long)(0x33B0F499A742B378L ^ l2));
        nArray3[dF.alp("b", (int)32397, (long)(0x1C32102393239A94L ^ l2))] = (int)dF.alp("b", (int)31634, (long)(0x7E33F0B634A21F81L ^ l2));
        nArray3[dF.alp("b", (int)22707, (long)(0x27EF7BC5D14EBC93L ^ l2))] = (int)dF.alp("b", (int)11892, (long)(0x647FBC2020014A56L ^ l2));
        nArray3[dF.alp("b", (int)22028, (long)(0x72B9715D9BAB233L ^ l2))] = (int)dF.alp("b", (int)3754, (long)(0x315F7B95F22BEABBL ^ l2));
        nArray3[dF.alp("b", (int)21899, (long)(0x3205143C3A62B19EL ^ l2))] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        nArray3[dF.alp("b", (int)10301, (long)(0x192CB219ED6E4C19L ^ l2))] = (int)dF.alp("b", (int)19394, (long)(0x7F07D3B70467AFC8L ^ l2));
        nArray3[dF.alp("b", (int)5062, (long)(0x76092BB2D70877C8L ^ l2))] = (int)dF.alp("b", (int)13258, (long)(0xDAC4024390BD7F6L ^ l2));
        nArray3[dF.alp("b", (int)26623, (long)(0x4689EF37222383EBL ^ l2))] = (int)dF.alp("b", (int)14483, (long)(0x27E3DE8D0BEDDC98L ^ l2));
        nArray3[dF.alp("b", (int)5832, (long)(0x6A30BA0EE6E0F2E3L ^ l2))] = (int)dF.alp("b", (int)32217, (long)(0x2BF38613A63D19F3L ^ l2));
        nArray3[dF.alp("b", (int)1920, (long)(0x5B13B51ED15E39CL ^ l2))] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        this.FjyNN = new ct(this, mr.clS(nArray3));
        int[] nArray4 = new int[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))];
        nArray4[0] = (int)dF.alp("b", (int)3880, (long)(0x3C01E54143F2EB3AL ^ l2));
        nArray4[1] = (int)dF.alp("b", (int)31634, (long)(0x7E33F0B634A21F81L ^ l2));
        nArray4[2] = (int)dF.alp("b", (int)4608, (long)(0x7E04CBE120F77628L ^ l2));
        nArray4[3] = (int)dF.alp("b", (int)26928, (long)(0xB852385CAE40D28L ^ l2));
        nArray4[4] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        nArray4[5] = (int)dF.alp("b", (int)24607, (long)(0x6FE78AA2D36A8439L ^ l2));
        this.nZWdG = new cu(this.FjyNN, mr.clS(nArray4));
        int[] nArray5 = new int[dF.alp("b", (int)22707, (long)(0x27EF7BC5D14EBC93L ^ l2))];
        nArray5[0] = (int)dF.alp("b", (int)20375, (long)(0x326052B04F6BAB80L ^ l2));
        nArray5[1] = (int)dF.alp("b", (int)24607, (long)(0x6FE78AA2D36A8439L ^ l2));
        nArray5[2] = (int)dF.alp("b", (int)18173, (long)(0x1F012276B86422DAL ^ l2));
        nArray5[3] = (int)dF.alp("b", (int)22579, (long)(0x3698BE5FF7753C3AL ^ l2));
        nArray5[4] = (int)dF.alp("b", (int)5636, (long)(0x61CB6A3BBBC0F20CL ^ l2));
        nArray5[5] = (int)dF.alp("b", (int)22579, (long)(0x3698BE5FF7753C3AL ^ l2));
        nArray5[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))] = (int)dF.alp("b", (int)14483, (long)(0x27E3DE8D0BEDDC98L ^ l2));
        nArray5[dF.alp("b", (int)32397, (long)(0x1C32102393239A94L ^ l2))] = (int)dF.alp("b", (int)22688, (long)(0x398AB579A21BBCADL ^ l2));
        this.MIMsQ = new cu(this.FjyNN, mr.clS(nArray5));
        int[] nArray6 = new int[dF.alp("b", (int)21899, (long)(0x3205143C3A62B19EL ^ l2))];
        nArray6[0] = (int)dF.alp("b", (int)5045, (long)(0x1BBB24F31B08778FL ^ l2));
        nArray6[1] = (int)dF.alp("b", (int)23821, (long)(0x56F384F094D83936L ^ l2));
        nArray6[2] = (int)dF.alp("b", (int)13258, (long)(0xDAC4024390BD7F6L ^ l2));
        nArray6[3] = (int)dF.alp("b", (int)5636, (long)(0x61CB6A3BBBC0F20CL ^ l2));
        nArray6[4] = (int)dF.alp("b", (int)11892, (long)(0x647FBC2020014A56L ^ l2));
        nArray6[5] = (int)dF.alp("b", (int)21907, (long)(0x7FEFC770C38EB1BAL ^ l2));
        nArray6[dF.alp("b", (int)670, (long)(0x94772F0BEBCE69EL ^ l2))] = (int)dF.alp("b", (int)13258, (long)(0xDAC4024390BD7F6L ^ l2));
        nArray6[dF.alp("b", (int)32397, (long)(0x1C32102393239A94L ^ l2))] = (int)dF.alp("b", (int)31634, (long)(0x7E33F0B634A21F81L ^ l2));
        nArray6[dF.alp("b", (int)22707, (long)(0x27EF7BC5D14EBC93L ^ l2))] = (int)dF.alp("b", (int)32217, (long)(0x2BF38613A63D19F3L ^ l2));
        nArray6[dF.alp("b", (int)22028, (long)(0x72B9715D9BAB233L ^ l2))] = (int)dF.alp("b", (int)3685, (long)(0xDF10C7D2A606A7BL ^ l2));
        this.WOZWS = new cu(this.FjyNN, mr.clS(nArray6));
        this.mnITY = -1;
    }

    static {
        Loader.doInit(dF.class);
        dF._d241af5c431a4490cab37e1b7101e237();
    }

    private static native /* synthetic */ boolean all(ItemStack var0);

    private static native /* synthetic */ boolean alg(ItemStack var0);

    private static native CallSite alp(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void ald(gO.tm var1);

    @hG
    public native void ale(gH.th var1);

    private native int alf(Predicate<ItemStack> var1);

    private static native /* synthetic */ boolean alh(ItemStack var0);

    private static native /* synthetic */ boolean alj(ItemStack var0);

    private static native /* synthetic */ boolean alk(ItemStack var0);

    private static native int alo(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aln(int var0, long var1);

    private static native MatchException alm(MatchException var0);

    private static native /* synthetic */ boolean ali(ItemStack var0);

    @Override
    public native void YO();
}

