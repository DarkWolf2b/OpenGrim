/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.component.type.AttackRangeComponent
 *  net.minecraft.entity.Entity
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
import native.Loader;
import net.minecraft.component.type.AttackRangeComponent;
import net.minecraft.entity.Entity;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import sixtwo.cA;
import sixtwo.cK;
import sixtwo.gH;
import sixtwo.gY;
import sixtwo.gZ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.jc;
import sixtwo.mr;
import sixtwo.oI;
import sixtwo.ol;

public class eF
extends gg {
    private final cK TbGmd;
    private final cA jymCX;
    private final ol mRcox;
    private static long vfMSC;
    private static String feInP;
    private static long[] lSAMc;
    private static Integer[] yVnKv;
    private static Map zIGHB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native CallSite awT(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native /* synthetic */ boolean awO(ItemStack var0);

    public native cK awL();

    private native AttackRangeComponent awK(ItemStack var1);

    private static native int awR(int var0, long var1);

    @hG
    public native void awH(hw.tv var1);

    @hG
    public native void awF(gY var1);

    public native ol awN();

    @hG
    public native void awE(gH.th var1);

    public native cA awM();

    private static native int awS(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native MatchException awP(MatchException var0);

    private static native String awQ(byte[] var0);

    @hG
    public native void awG(gZ.tt var1);

    private native oI awJ();

    private native boolean awI(Entity var1);

    public eF() {
        long l2 = vfMSC ^ 0x57EC2B00C34BL;
        super(gf.aZL((int)eF.awT("m", (int)24691, (long)(0x287DCA5322AF29A2L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eF.awT("m", (int)19632, (long)(0x73F483357C548571L ^ l2))];
        nArray[0] = (int)eF.awT("m", (int)10745, (long)(0x28DD8610709CE030L ^ l2));
        nArray[1] = (int)eF.awT("m", (int)25380, (long)(0x1E080FEE15E22AFAL ^ l2));
        nArray[2] = (int)eF.awT("m", (int)4374, (long)(0x5514A4AEA76A58D3L ^ l2));
        nArray[3] = (int)eF.awT("m", (int)6138, (long)(0x662641FF5B92DE37L ^ l2));
        nArray[4] = (int)eF.awT("m", (int)22507, (long)(0xE8D09503B511E23L ^ l2));
        nArray[5] = (int)eF.awT("m", (int)7466, (long)(0x6828A93B9B73D4FDL ^ l2));
        nArray[eF.awT("m", (int)2045, (long)(0x1AB753FDADF4CE2FL ^ l2))] = (int)eF.awT("m", (int)17534, (long)(0x46934E8ABBBB0DB1L ^ l2));
        nArray[eF.awT("m", (int)27314, (long)(0x7F3C2759D2192379L ^ l2))] = (int)eF.awT("m", (int)2692, (long)(0x404EBA3F1570436BL ^ l2));
        nArray[eF.awT("m", (int)430, (long)(0x379F5DE093D54845L ^ l2))] = (int)eF.awT("m", (int)29954, (long)(0x18F010D27D663CD8L ^ l2));
        nArray[eF.awT("m", (int)18703, (long)(0x6914D32A320D80CBL ^ l2))] = (int)eF.awT("m", (int)2880, (long)(0x68A24F963FC2C28CL ^ l2));
        nArray[eF.awT("m", (int)24342, (long)(0x44A0E7A43EDA96F8L ^ l2))] = (int)eF.awT("m", (int)29421, (long)(0x78D26B6E47003B04L ^ l2));
        nArray[eF.awT("m", (int)6244, (long)(0x18A422CF0BA2D1A7L ^ l2))] = (int)eF.awT("m", (int)24747, (long)(0x5AA91A9A94452978L ^ l2));
        nArray[eF.awT("m", (int)16364, (long)(0x5606D61C823C762EL ^ l2))] = (int)eF.awT("m", (int)23941, (long)(0x3932871D8CE99455L ^ l2));
        Item[] itemArray = new Item[eF.awT("m", (int)11148, (long)(0x4708C15AECF7E24BL ^ l2))];
        itemArray[0] = Items.WOODEN_SWORD;
        itemArray[1] = Items.STONE_SWORD;
        itemArray[2] = Items.IRON_SWORD;
        itemArray[3] = Items.GOLDEN_SWORD;
        itemArray[4] = Items.DIAMOND_SWORD;
        itemArray[5] = Items.NETHERITE_SWORD;
        itemArray[eF.awT("m", (int)2626, (long)(0x633338BEE57C38CL ^ l2))] = Items.WOODEN_AXE;
        itemArray[eF.awT("m", (int)2219, (long)(0x111C2CCC6A9C4143L ^ l2))] = Items.STONE_AXE;
        itemArray[eF.awT("m", (int)16006, (long)(0xEC6E57AE0D57750L ^ l2))] = Items.IRON_AXE;
        itemArray[eF.awT("m", (int)27602, (long)(0x393AA25B4C122209L ^ l2))] = Items.GOLDEN_AXE;
        itemArray[eF.awT("m", (int)8559, (long)(0x7871109C6B5668AFL ^ l2))] = Items.DIAMOND_AXE;
        itemArray[eF.awT("m", (int)13197, (long)(0x718B0FDF2CA77A55L ^ l2))] = Items.NETHERITE_AXE;
        this.TbGmd = new cK(this, mr.clS(nArray)).WM(jc.WnbNG).WN(itemArray);
        int[] nArray2 = new int[eF.awT("m", (int)11148, (long)(0x4708C15AECF7E24BL ^ l2))];
        nArray2[0] = (int)eF.awT("m", (int)12250, (long)(0xE2F04C4CF556605L ^ l2));
        nArray2[1] = (int)eF.awT("m", (int)29421, (long)(0x78D26B6E47003B04L ^ l2));
        nArray2[2] = (int)eF.awT("m", (int)13701, (long)(0x36E0343F00EDFC6FL ^ l2));
        nArray2[3] = (int)eF.awT("m", (int)2355, (long)(0x761F2A5C086D40E7L ^ l2));
        nArray2[4] = (int)eF.awT("m", (int)22782, (long)(0xB92552F9259112BL ^ l2));
        nArray2[5] = (int)eF.awT("m", (int)11298, (long)(0x2EC39E3E883965FEL ^ l2));
        nArray2[eF.awT("m", (int)2626, (long)(0x633338BEE57C38CL ^ l2))] = (int)eF.awT("m", (int)1696, (long)(0x7295CDE4E3A7CF79L ^ l2));
        nArray2[eF.awT("m", (int)2219, (long)(0x111C2CCC6A9C4143L ^ l2))] = (int)eF.awT("m", (int)4486, (long)(0xBB458CE7589D85BL ^ l2));
        nArray2[eF.awT("m", (int)16006, (long)(0xEC6E57AE0D57750L ^ l2))] = (int)eF.awT("m", (int)29421, (long)(0x78D26B6E47003B04L ^ l2));
        nArray2[eF.awT("m", (int)27602, (long)(0x393AA25B4C122209L ^ l2))] = (int)eF.awT("m", (int)4374, (long)(0x5514A4AEA76A58D3L ^ l2));
        nArray2[eF.awT("m", (int)8559, (long)(0x7871109C6B5668AFL ^ l2))] = (int)eF.awT("m", (int)19741, (long)(0x5A3E09D0936684DBL ^ l2));
        nArray2[eF.awT("m", (int)13197, (long)(0x718B0FDF2CA77A55L ^ l2))] = (int)eF.awT("m", (int)19234, (long)(0x2E31A484671282E8L ^ l2));
        this.jymCX = new cA(this, mr.clS(nArray2)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(feInP);
        this.mRcox = new ol(this);
    }

    static {
        Loader.doInit(eF.class);
        eF._8f9f6c718a455f7122cb8b6addc832cb();
    }

    private static native void _8f9f6c718a455f7122cb8b6addc832cb();
}

