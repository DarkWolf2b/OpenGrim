/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.Hand
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
import net.minecraft.util.Hand;
import sixtwo.cA;
import sixtwo.cD;
import sixtwo.dR$sI;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.ol;
import sixtwo.qL;

public class dR
extends gg {
    private final cD KnWWg;
    private final cD jdDxa;
    private final cD HOwTg;
    private final cA PiCte;
    private final mT klvjL;
    private final ol MEsln;
    private dR$sI eXNKU;
    private Runnable wSKUO;
    private static long jnLhl;
    private static String gcmeH;
    private static long[] UoJZc;
    private static Integer[] Hsjeq;
    private static Map YVFTe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _ae3be230d1224284befad7f70e5ec09a();

    private native void aps();

    public dR() {
        long l2 = jnLhl ^ 0x5A4595E97C8FL;
        super(gf.aZL((int)dR.apB("y", (int)23036, (long)(0x211E9DCBD0FB19BAL ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dR.apB("y", (int)18885, (long)(0x48B2F5F405DB89A2L ^ l2))];
        nArray[0] = (int)dR.apB("y", (int)6754, (long)(0x30A7BBD7A6955A3BL ^ l2));
        nArray[1] = (int)dR.apB("y", (int)14679, (long)(0x2DDF77DF0DA2F90DL ^ l2));
        nArray[2] = (int)dR.apB("y", (int)10290, (long)(0x76C8C9C8D4FA6862L ^ l2));
        nArray[3] = (int)dR.apB("y", (int)20499, (long)(0x2226B2FFCECF9047L ^ l2));
        nArray[4] = (int)dR.apB("y", (int)8753, (long)(0x45D65C01B228E26AL ^ l2));
        nArray[5] = (int)dR.apB("y", (int)136, (long)(0x7F965AB3B4CE40D6L ^ l2));
        nArray[dR.apB("y", (int)12156, (long)(0x36F13D9986CEF1CL ^ l2))] = (int)dR.apB("y", (int)18450, (long)(0x52342F76B92A884FL ^ l2));
        nArray[dR.apB("y", (int)14363, (long)(0x5107670AD9D17876L ^ l2))] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray[dR.apB("y", (int)22503, (long)(0x58FDB2C49BD317A5L ^ l2))] = (int)dR.apB("y", (int)6415, (long)(0x750FA2D03825D946L ^ l2));
        this.KnWWg = new cD(this, mr.clS(nArray)).VO((int)dR.apB("y", (int)18571, (long)(0x3BAAC055894408DDL ^ l2)));
        int[] nArray2 = new int[dR.apB("y", (int)31125, (long)(0xABBB6D277F0B9C7L ^ l2))];
        nArray2[0] = (int)dR.apB("y", (int)19751, (long)(0x17A3C91734658D60L ^ l2));
        nArray2[1] = (int)dR.apB("y", (int)21950, (long)(0x78729EFE458015EDL ^ l2));
        nArray2[2] = (int)dR.apB("y", (int)20823, (long)(0x45C8AD3E55899133L ^ l2));
        nArray2[3] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray2[4] = (int)dR.apB("y", (int)25215, (long)(0x3E65516C42B6A237L ^ l2));
        nArray2[5] = (int)dR.apB("y", (int)20316, (long)(0x290F86BEB7648F35L ^ l2));
        nArray2[dR.apB("y", (int)23287, (long)(0x2232E12CC9991A95L ^ l2))] = (int)dR.apB("y", (int)20823, (long)(0x45C8AD3E55899133L ^ l2));
        nArray2[dR.apB("y", (int)30419, (long)(0x2CD9410867123698L ^ l2))] = (int)dR.apB("y", (int)21193, (long)(0x6F5ECCFA3F6D9298L ^ l2));
        nArray2[dR.apB("y", (int)26507, (long)(0x5B1F695E436AA7D7L ^ l2))] = (int)dR.apB("y", (int)6127, (long)(0x22EC16F3BF3DD7ABL ^ l2));
        nArray2[dR.apB("y", (int)5835, (long)(0x6CE6BC3C8C31D681L ^ l2))] = (int)dR.apB("y", (int)21009, (long)(0x7AF40DCD493C1279L ^ l2));
        nArray2[dR.apB("y", (int)31253, (long)(0x45A301306852BA54L ^ l2))] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray2[dR.apB("y", (int)23762, (long)(0x74EFC1FB95469C92L ^ l2))] = (int)dR.apB("y", (int)14345, (long)(0x4D2A769E8D477866L ^ l2));
        this.jdDxa = new cD(this, mr.clS(nArray2)).VO((int)dR.apB("y", (int)15383, (long)(0x4241B0BEC8A47C40L ^ l2)));
        int[] nArray3 = new int[dR.apB("y", (int)3781, (long)(0x650CA528DBADCEAFL ^ l2))];
        nArray3[0] = (int)dR.apB("y", (int)13340, (long)(0xC0BD2FC0262F47DL ^ l2));
        nArray3[1] = (int)dR.apB("y", (int)14986, (long)(0x6EAE34786DD4FAE1L ^ l2));
        nArray3[2] = (int)dR.apB("y", (int)31014, (long)(0x4805BD30E5503963L ^ l2));
        nArray3[3] = (int)dR.apB("y", (int)22545, (long)(0x6D58CCE8357F1872L ^ l2));
        nArray3[4] = (int)dR.apB("y", (int)14986, (long)(0x6EAE34786DD4FAE1L ^ l2));
        nArray3[5] = (int)dR.apB("y", (int)1710, (long)(0x75791AB578EDC6E0L ^ l2));
        nArray3[dR.apB("y", (int)23287, (long)(0x2232E12CC9991A95L ^ l2))] = (int)dR.apB("y", (int)6127, (long)(0x22EC16F3BF3DD7ABL ^ l2));
        nArray3[dR.apB("y", (int)30419, (long)(0x2CD9410867123698L ^ l2))] = (int)dR.apB("y", (int)21009, (long)(0x7AF40DCD493C1279L ^ l2));
        nArray3[dR.apB("y", (int)26507, (long)(0x5B1F695E436AA7D7L ^ l2))] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray3[dR.apB("y", (int)5835, (long)(0x6CE6BC3C8C31D681L ^ l2))] = (int)dR.apB("y", (int)14345, (long)(0x4D2A769E8D477866L ^ l2));
        this.HOwTg = new cD(this, mr.clS(nArray3)).VO((int)dR.apB("y", (int)15383, (long)(0x4241B0BEC8A47C40L ^ l2)));
        int[] nArray4 = new int[dR.apB("y", (int)31367, (long)(0x3B643FA3932CBAEBL ^ l2))];
        nArray4[0] = (int)dR.apB("y", (int)15955, (long)(0x7A66BA88D5487E0CL ^ l2));
        nArray4[1] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray4[2] = (int)dR.apB("y", (int)9079, (long)(0x6297E874E6EF633AL ^ l2));
        nArray4[3] = (int)dR.apB("y", (int)17003, (long)(0x63D288FE1431820EL ^ l2));
        nArray4[4] = (int)dR.apB("y", (int)20823, (long)(0x45C8AD3E55899133L ^ l2));
        nArray4[5] = (int)dR.apB("y", (int)29973, (long)(0x15502D9E32B33573L ^ l2));
        nArray4[dR.apB("y", (int)23287, (long)(0x2232E12CC9991A95L ^ l2))] = (int)dR.apB("y", (int)6127, (long)(0x22EC16F3BF3DD7ABL ^ l2));
        nArray4[dR.apB("y", (int)30419, (long)(0x2CD9410867123698L ^ l2))] = (int)dR.apB("y", (int)3105, (long)(0x492874CC53AACC79L ^ l2));
        nArray4[dR.apB("y", (int)26507, (long)(0x5B1F695E436AA7D7L ^ l2))] = (int)dR.apB("y", (int)23621, (long)(0x4F05A81736661C0AL ^ l2));
        nArray4[dR.apB("y", (int)5835, (long)(0x6CE6BC3C8C31D681L ^ l2))] = (int)dR.apB("y", (int)29297, (long)(0x679C7B5533BB232L ^ l2));
        nArray4[dR.apB("y", (int)3781, (long)(0x650CA528DBADCEAFL ^ l2))] = (int)dR.apB("y", (int)13852, (long)(0x58F340EEF0417649L ^ l2));
        nArray4[dR.apB("y", (int)2795, (long)(0x5E723B4774A84AA7L ^ l2))] = (int)dR.apB("y", (int)14345, (long)(0x4D2A769E8D477866L ^ l2));
        this.PiCte = new cA(this, mr.clS(nArray4)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH);
        this.klvjL = mT.cpz();
        this.MEsln = new ol(this);
        this.eXNKU = dR$sI.qWbQG;
    }

    static {
        Loader.doInit(dR.class);
        dR._ae3be230d1224284befad7f70e5ec09a();
    }

    private native void app(int var1, Hand var2, qL var3, Item var4);

    private static native /* synthetic */ boolean apv(ItemStack var0);

    private static native /* synthetic */ boolean apu(ItemStack var0);

    @hG
    public native void apj(gA var1);

    private native void apq(Hand var1);

    private native void apo(Item var1, Predicate<ItemStack> var2);

    private static native /* synthetic */ boolean apw(ItemStack var0);

    private static native MatchException apx(MatchException var0);

    private native void apn(Item var1, Predicate<ItemStack> var2);

    private static native String apy(byte[] var0);

    private static native CallSite apB(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int apA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    @hG
    public native void apk(gH.th var1);

    private native boolean apl(ItemStack var1);

    private native ItemStack apm(Predicate<ItemStack> var1);

    private static native int apz(int var0, long var1);

    private native void apr();

    private native /* synthetic */ void apt(Item var1, Predicate var2);

    @Override
    public native void YO();
}

