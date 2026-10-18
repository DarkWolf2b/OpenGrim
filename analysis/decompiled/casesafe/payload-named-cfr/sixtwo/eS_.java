/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gZ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mT;
import sixtwo.mW;
import sixtwo.mr;
import sixtwo.ol;

public class eS
extends gg {
    private final ct ZPhzU;
    private final cu eQeWA;
    private final cu ZDYKK;
    private final cJ dVnxZ;
    private final cC FXDzg;
    private final cA GEHFQ;
    private final cC irxdG;
    private final ol cVZni;
    private final mT Dwgkb;
    private final mW VYWYG;
    private boolean cRMrD;
    private boolean EiuGH;
    private int UKQaD;
    private static long muwCI;
    private static String[] tZjZX;
    private static String[] zfqcZ;
    private static Map SCZFK;
    private static long[] QoRIe;
    private static Integer[] rRLeM;
    private static Map eJHIG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eS() {
        long l2 = muwCI ^ 0x784DDB922777L;
        super(gf.aZL((int)eS.aDt("e", (int)444, (long)(0x2FD2CD7B2E69A2FCL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eS.aDt("e", (int)12132, (long)(0x5BA70FDC915C0C07L ^ l2))];
        nArray[0] = (int)eS.aDt("e", (int)13058, (long)(0x5DB4EF9B7B1D9049L ^ l2));
        nArray[1] = (int)eS.aDt("e", (int)32604, (long)(0x363406985DAFDC22L ^ l2));
        nArray[2] = (int)eS.aDt("e", (int)14700, (long)(0x42EDF24215FD9A37L ^ l2));
        nArray[3] = (int)eS.aDt("e", (int)4394, (long)(0x45E7AA1858DDB245L ^ l2));
        nArray[4] = (int)eS.aDt("e", (int)9999, (long)(0x1F8FA138B6100463L ^ l2));
        nArray[5] = (int)eS.aDt("e", (int)17388, (long)(0x388626C0739EE0A1L ^ l2));
        nArray[eS.aDt("e", (int)25963, (long)(0xAAB9BE6DF534609L ^ l2))] = (int)eS.aDt("e", (int)17022, (long)(0x9AF2E78086E122L ^ l2));
        this.ZPhzU = new ct(this, mr.clS(nArray)).SO(0);
        this.eQeWA = new cu(this.ZPhzU, mr.clS(new int[]{(int)eS.aDt("e", (int)10863, (long)(0x8C48E26636A0920L ^ l2)), (int)eS.aDt("e", (int)1500, (long)(0x3BB41E4EC88A692L ^ l2)), (int)eS.aDt("e", (int)7170, (long)(0x412B8F3CF82ABF58L ^ l2)), (int)eS.aDt("e", (int)19628, (long)(0x38D82408FF66EFD1L ^ l2))}));
        int[] nArray2 = new int[eS.aDt("e", (int)14974, (long)(0x1C92E9F0617A9934L ^ l2))];
        nArray2[0] = (int)eS.aDt("e", (int)18084, (long)(0x682C35CAB2ACE5F6L ^ l2));
        nArray2[1] = (int)eS.aDt("e", (int)18469, (long)(0x53AE418A75F26B70L ^ l2));
        nArray2[2] = (int)eS.aDt("e", (int)19360, (long)(0x1F450A460685E8C6L ^ l2));
        nArray2[3] = (int)eS.aDt("e", (int)5756, (long)(0x57AC45FCCB08B50BL ^ l2));
        nArray2[4] = (int)eS.aDt("e", (int)14634, (long)(0x30C990AE1DB89A75L ^ l2));
        nArray2[5] = (int)eS.aDt("e", (int)14634, (long)(0x30C990AE1DB89A75L ^ l2));
        nArray2[eS.aDt("e", (int)7483, (long)(0x458920E1FA3F3E40L ^ l2))] = (int)eS.aDt("e", (int)19271, (long)(0x2731345F0E6EE801L ^ l2));
        nArray2[eS.aDt("e", (int)2959, (long)(0x3F331C05891B28FAL ^ l2))] = (int)eS.aDt("e", (int)14224, (long)(0x410F2233141614DCL ^ l2));
        nArray2[eS.aDt("e", (int)12991, (long)(0x5F155B18BDDF11FAL ^ l2))] = (int)eS.aDt("e", (int)30865, (long)(0x1D31219D98C5DBFCL ^ l2));
        this.ZDYKK = new cu(this.ZPhzU, mr.clS(nArray2));
        int[] nArray3 = new int[eS.aDt("e", (int)10606, (long)(0x4B74559335B58A09L ^ l2))];
        nArray3[0] = (int)eS.aDt("e", (int)20977, (long)(0x7F34829D2F3BF291L ^ l2));
        nArray3[1] = (int)eS.aDt("e", (int)22387, (long)(0x7884572DF8F5741DL ^ l2));
        nArray3[2] = (int)eS.aDt("e", (int)21251, (long)(0xB6BAFB6A22A7040L ^ l2));
        nArray3[3] = (int)eS.aDt("e", (int)16624, (long)(0x7A0F9EF96DB6E380L ^ l2));
        nArray3[4] = (int)eS.aDt("e", (int)9999, (long)(0x1F8FA138B6100463L ^ l2));
        nArray3[5] = (int)eS.aDt("e", (int)24025, (long)(0x7E499EE52CFAFE80L ^ l2));
        nArray3[eS.aDt("e", (int)7483, (long)(0x458920E1FA3F3E40L ^ l2))] = (int)eS.aDt("e", (int)8957, (long)(0x74BADEEDA5D881BCL ^ l2));
        nArray3[eS.aDt("e", (int)2959, (long)(0x3F331C05891B28FAL ^ l2))] = (int)eS.aDt("e", (int)5756, (long)(0x57AC45FCCB08B50BL ^ l2));
        nArray3[eS.aDt("e", (int)26065, (long)(0x5B2D915998324695L ^ l2))] = (int)eS.aDt("e", (int)17022, (long)(0x9AF2E78086E122L ^ l2));
        nArray3[eS.aDt("e", (int)16545, (long)(0x6D1258E4E67EE3D2L ^ l2))] = (int)eS.aDt("e", (int)31829, (long)(0xBC6F89432C45F29L ^ l2));
        nArray3[eS.aDt("e", (int)7880, (long)(0x7239B46694353DADL ^ l2))] = (int)eS.aDt("e", (int)3531, (long)(0x578342F74484AEB2L ^ l2));
        nArray3[eS.aDt("e", (int)29979, (long)(0x1911A44B4AE4D663L ^ l2))] = (int)eS.aDt("e", (int)17022, (long)(0x9AF2E78086E122L ^ l2));
        this.dVnxZ = new cJ(this, mr.clS(nArray3)).WE(false);
        int[] nArray4 = new int[eS.aDt("e", (int)26159, (long)(0x5E474EEF017E4566L ^ l2))];
        nArray4[0] = (int)eS.aDt("e", (int)2824, (long)(0x2891FD51197DA840L ^ l2));
        nArray4[1] = (int)eS.aDt("e", (int)27383, (long)(0x2FC7D110460F4985L ^ l2));
        nArray4[2] = (int)eS.aDt("e", (int)16624, (long)(0x7A0F9EF96DB6E380L ^ l2));
        nArray4[3] = (int)eS.aDt("e", (int)8957, (long)(0x74BADEEDA5D881BCL ^ l2));
        nArray4[4] = (int)eS.aDt("e", (int)1722, (long)(0x6344787F7232A5C5L ^ l2));
        nArray4[5] = (int)eS.aDt("e", (int)21251, (long)(0xB6BAFB6A22A7040L ^ l2));
        nArray4[eS.aDt("e", (int)7483, (long)(0x458920E1FA3F3E40L ^ l2))] = (int)eS.aDt("e", (int)20141, (long)(0x22BF1C110EC4EDFAL ^ l2));
        nArray4[eS.aDt("e", (int)2959, (long)(0x3F331C05891B28FAL ^ l2))] = (int)eS.aDt("e", (int)2530, (long)(0x5DE8C3468FE32ABAL ^ l2));
        nArray4[eS.aDt("e", (int)26065, (long)(0x5B2D915998324695L ^ l2))] = (int)eS.aDt("e", (int)8957, (long)(0x74BADEEDA5D881BCL ^ l2));
        nArray4[eS.aDt("e", (int)16545, (long)(0x6D1258E4E67EE3D2L ^ l2))] = (int)eS.aDt("e", (int)25714, (long)(0x6F9C64FDE799472CL ^ l2));
        nArray4[eS.aDt("e", (int)23224, (long)(0x5404E18D44F979CEL ^ l2))] = (int)eS.aDt("e", (int)27383, (long)(0x2FC7D110460F4985L ^ l2));
        nArray4[eS.aDt("e", (int)13989, (long)(0x601DD2E33AA795E7L ^ l2))] = (int)eS.aDt("e", (int)18584, (long)(0x2C6654C8844EEBF9L ^ l2));
        nArray4[eS.aDt("e", (int)16197, (long)(0x63152EA946849C18L ^ l2))] = (int)eS.aDt("e", (int)14634, (long)(0x30C990AE1DB89A75L ^ l2));
        nArray4[eS.aDt("e", (int)16917, (long)(0x3B96BAEAE106E141L ^ l2))] = (int)eS.aDt("e", (int)21251, (long)(0xB6BAFB6A22A7040L ^ l2));
        nArray4[eS.aDt("e", (int)28591, (long)(0x57DF173309284CDEL ^ l2))] = (int)eS.aDt("e", (int)16624, (long)(0x7A0F9EF96DB6E380L ^ l2));
        nArray4[eS.aDt("e", (int)18711, (long)(0x175C28E5C42FEA44L ^ l2))] = (int)eS.aDt("e", (int)7969, (long)(0x600B90AD4472BC77L ^ l2));
        nArray4[eS.aDt("e", (int)2903, (long)(0x29649CD57208A810L ^ l2))] = (int)eS.aDt("e", (int)24025, (long)(0x7E499EE52CFAFE80L ^ l2));
        this.FXDzg = new cC(this, mr.clS(nArray4)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz((String)((Object)eS.aDq("p", (int)23673, (long)(0x763B4BA8445519BAL ^ l2))));
        int[] nArray5 = new int[eS.aDt("e", (int)16197, (long)(0x63152EA946849C18L ^ l2))];
        nArray5[0] = (int)eS.aDt("e", (int)16118, (long)(0x576F87DA1DA11D82L ^ l2));
        nArray5[1] = (int)eS.aDt("e", (int)24025, (long)(0x7E499EE52CFAFE80L ^ l2));
        nArray5[2] = (int)eS.aDt("e", (int)14634, (long)(0x30C990AE1DB89A75L ^ l2));
        nArray5[3] = (int)eS.aDt("e", (int)1500, (long)(0x3BB41E4EC88A692L ^ l2));
        nArray5[4] = (int)eS.aDt("e", (int)17022, (long)(0x9AF2E78086E122L ^ l2));
        nArray5[5] = (int)eS.aDt("e", (int)16624, (long)(0x7A0F9EF96DB6E380L ^ l2));
        nArray5[eS.aDt("e", (int)7483, (long)(0x458920E1FA3F3E40L ^ l2))] = (int)eS.aDt("e", (int)8957, (long)(0x74BADEEDA5D881BCL ^ l2));
        nArray5[eS.aDt("e", (int)2959, (long)(0x3F331C05891B28FAL ^ l2))] = (int)eS.aDt("e", (int)17099, (long)(0x75CFADB53DFDE19AL ^ l2));
        nArray5[eS.aDt("e", (int)26065, (long)(0x5B2D915998324695L ^ l2))] = (int)eS.aDt("e", (int)24025, (long)(0x7E499EE52CFAFE80L ^ l2));
        nArray5[eS.aDt("e", (int)16545, (long)(0x6D1258E4E67EE3D2L ^ l2))] = (int)eS.aDt("e", (int)2530, (long)(0x5DE8C3468FE32ABAL ^ l2));
        nArray5[eS.aDt("e", (int)23224, (long)(0x5404E18D44F979CEL ^ l2))] = (int)eS.aDt("e", (int)21251, (long)(0xB6BAFB6A22A7040L ^ l2));
        nArray5[eS.aDt("e", (int)13989, (long)(0x601DD2E33AA795E7L ^ l2))] = (int)eS.aDt("e", (int)11868, (long)(0x3E3AE2156FF0D26L ^ l2));
        this.GEHFQ = new cA(this, mr.clS(nArray5)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH((String)((Object)eS.aDq("p", (int)17278, (long)(0x4E05D901D15C06BCL ^ l2))));
        int[] nArray6 = new int[eS.aDt("e", (int)7483, (long)(0x458920E1FA3F3E40L ^ l2))];
        nArray6[0] = (int)eS.aDt("e", (int)12152, (long)(0x3DA1A5FB13D48C1CL ^ l2));
        nArray6[1] = (int)eS.aDt("e", (int)7892, (long)(0x5CD98BDB49163D84L ^ l2));
        nArray6[2] = (int)eS.aDt("e", (int)21251, (long)(0xB6BAFB6A22A7040L ^ l2));
        nArray6[3] = (int)eS.aDt("e", (int)16624, (long)(0x7A0F9EF96DB6E380L ^ l2));
        nArray6[4] = (int)eS.aDt("e", (int)7969, (long)(0x600B90AD4472BC77L ^ l2));
        nArray6[5] = (int)eS.aDt("e", (int)24025, (long)(0x7E499EE52CFAFE80L ^ l2));
        this.irxdG = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz("%");
        this.cVZni = new ol(this);
        this.Dwgkb = mT.cpz();
        this.VYWYG = new mW();
        this.UKQaD = -1;
    }

    static {
        Loader.doInit(eS.class);
        eS._6c3f9fef805ed141ce14c78ae08c1661();
    }

    private static native void _6c3f9fef805ed141ce14c78ae08c1661();

    private static native CallSite aDt(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native cC aDf();

    public native ol aDg();

    public native mT aDh();

    public native mW aDi();

    private native void aCT();

    private native boolean aCU(PlayerEntity var1);

    public native ct aCZ();

    public native boolean aDj();

    public native boolean aDk();

    private native void aCV();

    public native cu aDa();

    public native cA aDe();

    public native int aDl();

    private static native MatchException aDm(MatchException var0);

    @hG
    public native void aCP(gH.th var1);

    private native void aCS();

    private native boolean aCQ(PlayerEntity var1);

    private static native CallSite aDq(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aCN(gM var1);

    public native boolean aCW(LivingEntity var1);

    public native boolean aCX();

    public native boolean aCY();

    public native cJ aDc();

    @hG
    public native void aCO(gZ.tt var1);

    private native void aCR(PlayerEntity var1);

    public native cu aDb();

    public native cC aDd();

    private static native Object aDp(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aDo(int var0, long var1);

    private static native int aDr(int var0, long var1);

    private static native int aDs(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native String aDn(byte[] var0);

    @Override
    public native void YO();
}

