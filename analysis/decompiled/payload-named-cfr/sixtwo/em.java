/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.entity.ShulkerBoxBlockEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.block.entity.ShulkerBoxBlockEntity;
import sixtwo.cC;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hs;
import sixtwo.mr;

public class em
extends gg {
    private final ct hyrdo;
    private final cu Mbkzf;
    private final cu nszob;
    private final cC qbgVw;
    private final cC eXBkK;
    private static long IAnJC;
    private static long[] rXots;
    private static Integer[] cSAnF;
    private static Map rnwKn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public em() {
        long l2 = IAnJC ^ 0x195076520982L;
        super(gf.aZL((int)em.ato("y", (int)19517, (long)(0x72A2B323EF1C89A8L ^ l2)), false, gh.xgeEn).aZS(false));
        this.hyrdo = new ct(this, mr.clS(new int[]{(int)em.ato("y", (int)28196, (long)(0x3F19AF51348CAB9AL ^ l2)), (int)em.ato("y", (int)22554, (long)(0x3438F6955D911DAAL ^ l2)), (int)em.ato("y", (int)19119, (long)(0x6AB3DB9C90BB8F0FL ^ l2)), (int)em.ato("y", (int)16589, (long)(0x60E0C5631981854EL ^ l2))}));
        int[] nArray = new int[em.ato("y", (int)19265, (long)(0x542AA2AA6F350EEAL ^ l2))];
        nArray[0] = (int)em.ato("y", (int)13134, (long)(0x568ECF263C6676F9L ^ l2));
        nArray[1] = (int)em.ato("y", (int)721, (long)(0x37A1941FBC2EC777L ^ l2));
        nArray[2] = (int)em.ato("y", (int)24222, (long)(0x460D2259E3FC9B01L ^ l2));
        nArray[3] = (int)em.ato("y", (int)10850, (long)(0x6270825CB0716FC7L ^ l2));
        nArray[4] = (int)em.ato("y", (int)23766, (long)(0x47FEA54DE8B9994CL ^ l2));
        nArray[5] = (int)em.ato("y", (int)32577, (long)(0x578762F47B153AEFL ^ l2));
        nArray[em.ato("y", (int)4227, (long)(0x251762207477552AL ^ l2))] = (int)em.ato("y", (int)23665, (long)(0x41B40719805399F0L ^ l2));
        this.Mbkzf = new cu(this.hyrdo, mr.clS(nArray));
        int[] nArray2 = new int[em.ato("y", (int)28096, (long)(0x50649F050D14285DL ^ l2))];
        nArray2[0] = (int)em.ato("y", (int)2361, (long)(0x6F9B4A1F72FF4C8CL ^ l2));
        nArray2[1] = (int)em.ato("y", (int)18623, (long)(0x37977EB68C1D8D12L ^ l2));
        nArray2[2] = (int)em.ato("y", (int)2391, (long)(0x73971DFADFFE4CFBL ^ l2));
        nArray2[3] = (int)em.ato("y", (int)24183, (long)(0x7A8460681C1A9BCDL ^ l2));
        nArray2[4] = (int)em.ato("y", (int)10130, (long)(0x40947605BFCE6224L ^ l2));
        nArray2[5] = (int)em.ato("y", (int)30349, (long)(0x456AF7E0A16D3322L ^ l2));
        nArray2[em.ato("y", (int)30782, (long)(0x29782EC10708BDADL ^ l2))] = (int)em.ato("y", (int)18541, (long)(0x46E1618EC2B0DF5L ^ l2));
        nArray2[em.ato("y", (int)26128, (long)(0x6BA1459ABE8EA381L ^ l2))] = (int)em.ato("y", (int)17791, (long)(0x64A7DFC6D43880EDL ^ l2));
        nArray2[em.ato("y", (int)12034, (long)(0x60B05E045BAC6ABEL ^ l2))] = (int)em.ato("y", (int)32577, (long)(0x578762F47B153AEFL ^ l2));
        nArray2[em.ato("y", (int)30506, (long)(0x458F2EEFE69328EL ^ l2))] = (int)em.ato("y", (int)9173, (long)(0x6F032D771E03666AL ^ l2));
        nArray2[em.ato("y", (int)22644, (long)(0x311732A443E29DD3L ^ l2))] = (int)em.ato("y", (int)4289, (long)(0x65D8D04C3907D579L ^ l2));
        nArray2[em.ato("y", (int)7790, (long)(0x9921E2923D95BF8L ^ l2))] = (int)em.ato("y", (int)10903, (long)(0x4554C33E00DE6F13L ^ l2));
        this.nszob = new cu(this.hyrdo, mr.clS(nArray2)).SY();
        int[] nArray3 = new int[em.ato("y", (int)28244, (long)(0x6EAFF2358D572BFCL ^ l2))];
        nArray3[0] = (int)em.ato("y", (int)12400, (long)(0x3FC6705105875E0L ^ l2));
        nArray3[1] = (int)em.ato("y", (int)7398, (long)(0x4B58C415750C597AL ^ l2));
        nArray3[2] = (int)em.ato("y", (int)22780, (long)(0x3E6CEA4CF9B61D67L ^ l2));
        nArray3[3] = (int)em.ato("y", (int)20562, (long)(0x5913ADFD426595E0L ^ l2));
        nArray3[4] = (int)em.ato("y", (int)2599, (long)(0x66EBD728CE6C4F84L ^ l2));
        nArray3[5] = (int)em.ato("y", (int)13600, (long)(0x3E65B2F0F3EE7094L ^ l2));
        nArray3[em.ato("y", (int)30782, (long)(0x29782EC10708BDADL ^ l2))] = (int)em.ato("y", (int)4289, (long)(0x65D8D04C3907D579L ^ l2));
        nArray3[em.ato("y", (int)26128, (long)(0x6BA1459ABE8EA381L ^ l2))] = (int)em.ato("y", (int)2391, (long)(0x73971DFADFFE4CFBL ^ l2));
        nArray3[em.ato("y", (int)785, (long)(0x74BD65ECE304C691L ^ l2))] = (int)em.ato("y", (int)2716, (long)(0x5A256B68A290CF3DL ^ l2));
        nArray3[em.ato("y", (int)11916, (long)(0x3A210A9EE1CA6B18L ^ l2))] = (int)em.ato("y", (int)18487, (long)(0x583F5EC496E30D8CL ^ l2));
        nArray3[em.ato("y", (int)11535, (long)(0x44B7F98995E6E8BEL ^ l2))] = (int)em.ato("y", (int)13753, (long)(0x228C7F104D30F000L ^ l2));
        this.qbgVw = (cC)new cC(this, mr.clS(nArray3)).Vy(0.01).Vw(1.0).Vx(3.0).VA(1.6).Vf(this.Mbkzf::SZ);
        int[] nArray4 = new int[em.ato("y", (int)7508, (long)(0x19283F95258658E9L ^ l2))];
        nArray4[0] = (int)em.ato("y", (int)12775, (long)(0x636FB6CA499D7462L ^ l2));
        nArray4[1] = (int)em.ato("y", (int)4289, (long)(0x65D8D04C3907D579L ^ l2));
        nArray4[2] = (int)em.ato("y", (int)10903, (long)(0x4554C33E00DE6F13L ^ l2));
        nArray4[3] = (int)em.ato("y", (int)7348, (long)(0x4219B58D7755591EL ^ l2));
        nArray4[4] = (int)em.ato("y", (int)2391, (long)(0x73971DFADFFE4CFBL ^ l2));
        nArray4[5] = (int)em.ato("y", (int)24977, (long)(0x25240A9BEBBA433L ^ l2));
        nArray4[em.ato("y", (int)30782, (long)(0x29782EC10708BDADL ^ l2))] = (int)em.ato("y", (int)23665, (long)(0x41B40719805399F0L ^ l2));
        nArray4[em.ato("y", (int)26128, (long)(0x6BA1459ABE8EA381L ^ l2))] = (int)em.ato("y", (int)32577, (long)(0x578762F47B153AEFL ^ l2));
        nArray4[em.ato("y", (int)785, (long)(0x74BD65ECE304C691L ^ l2))] = (int)em.ato("y", (int)2599, (long)(0x66EBD728CE6C4F84L ^ l2));
        nArray4[em.ato("y", (int)11916, (long)(0x3A210A9EE1CA6B18L ^ l2))] = (int)em.ato("y", (int)31779, (long)(0x7E6075FD5C41B9BAL ^ l2));
        nArray4[em.ato("y", (int)11535, (long)(0x44B7F98995E6E8BEL ^ l2))] = (int)em.ato("y", (int)25140, (long)(0x84ABF80774327A3L ^ l2));
        nArray4[em.ato("y", (int)28244, (long)(0x6EAFF2358D572BFCL ^ l2))] = (int)em.ato("y", (int)25140, (long)(0x84ABF80774327A3L ^ l2));
        nArray4[em.ato("y", (int)12473, (long)(0x13BD2D2C37A8F527L ^ l2))] = (int)em.ato("y", (int)29060, (long)(0x551F99AF4573B406L ^ l2));
        nArray4[em.ato("y", (int)23443, (long)(0x4B49E214B7B91E20L ^ l2))] = (int)em.ato("y", (int)7348, (long)(0x4219B58D7755591EL ^ l2));
        this.eXBkK = (cC)new cC(this, mr.clS(nArray4)).Vy(0.01).Vw(0.1).Vx(3.0).VA(1.91).Vf(this.nszob::SZ);
    }

    static {
        Loader.doInit(em.class);
        em._8b967bade6a5815b769653759123e3a3();
    }

    private static native int atn(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite ato(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void atj(gH.th var1);

    private native boolean atk(ShulkerBoxBlockEntity var1);

    @hG
    public native void ati(hs var1);

    private static native MatchException atl(MatchException var0);

    private static native int atm(int var0, long var1);

    private static native void _8b967bade6a5815b769653759123e3a3();
}

