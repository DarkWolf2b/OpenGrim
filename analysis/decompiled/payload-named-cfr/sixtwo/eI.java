/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;
import sixtwo.ol;

public class eI
extends gg {
    private final cJ tOxMr;
    private final ct yTUFP;
    private final cu TEwfc;
    private final cu cKxMx;
    private final cJ ytGpS;
    private final cA Eppcp;
    private final ol otZOf;
    private boolean NLSbB;
    private PlayerEntity yWkAS;
    private static long HWETW;
    private static String GGWXd;
    private static long[] ESWVg;
    private static Integer[] gFMwa;
    private static Map CSkNc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public native PlayerEntity ayk();

    private native void ayb();

    @hG
    public native void axZ(gH.th var1);

    public native boolean ayj();

    private static native String aym(byte[] var0);

    private native void aya();

    @hG
    public native void axX(gM var1);

    @hG
    public native void axY(gL.tk var1);

    public native cJ ayg();

    private static native MatchException ayl(MatchException var0);

    private static native int ayn(int var0, long var1);

    public native cu aye();

    public native cJ ayc();

    public native cu ayf();

    public native cA ayh();

    public native ol ayi();

    private static native CallSite ayp(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native ct ayd();

    private static native int ayo(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public eI() {
        long l2 = HWETW ^ 0x5A3A77FC560EL;
        super(gf.aZL((int)eI.ayp("h", (int)3702, (long)(0x73EAD62A77E3908CL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eI.ayp("h", (int)22368, (long)(0x2B9C278622CC986L ^ l2))];
        nArray[0] = (int)eI.ayp("h", (int)27690, (long)(0x48D25E8D923A72E8L ^ l2));
        nArray[1] = (int)eI.ayp("h", (int)29178, (long)(0x2C828881C1656F20L ^ l2));
        nArray[2] = (int)eI.ayp("h", (int)31877, (long)(0x3D43AF873EA9E256L ^ l2));
        nArray[3] = (int)eI.ayp("h", (int)30663, (long)(0x78C4871828B1E92FL ^ l2));
        nArray[4] = (int)eI.ayp("h", (int)22477, (long)(0x51D6A6A4E21C492DL ^ l2));
        nArray[5] = (int)eI.ayp("h", (int)21293, (long)(0x7F3B291C28E14DBBL ^ l2));
        nArray[eI.ayp("h", (int)20624, (long)(0x637EB8D97744CE75L ^ l2))] = (int)eI.ayp("h", (int)29885, (long)(0x64D6F1FF85EA5AL ^ l2));
        nArray[eI.ayp("h", (int)7310, (long)(0x131549B94A020270L ^ l2))] = (int)eI.ayp("h", (int)5562, (long)(0x68C80219FAF28B49L ^ l2));
        nArray[eI.ayp("h", (int)17283, (long)(0x75A53DF70D6BDD7BL ^ l2))] = (int)eI.ayp("h", (int)26136, (long)(0x64A96148412E78EAL ^ l2));
        nArray[eI.ayp("h", (int)22667, (long)(0x2B0F67A1E8DD4666L ^ l2))] = (int)eI.ayp("h", (int)3355, (long)(0x5CA5CC41B39C93D2L ^ l2));
        nArray[eI.ayp("h", (int)1825, (long)(0x2A29A389EF3899FDL ^ l2))] = (int)eI.ayp("h", (int)12285, (long)(0x2A750D4521E1313CL ^ l2));
        nArray[eI.ayp("h", (int)1576, (long)(0x29B1A1E78DE698E7L ^ l2))] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        this.tOxMr = new cJ(this, mr.clS(nArray));
        int[] nArray2 = new int[eI.ayp("h", (int)23194, (long)(0x48422927F5BCC44CL ^ l2))];
        nArray2[0] = (int)eI.ayp("h", (int)2081, (long)(0xF36A2E1654396B1L ^ l2));
        nArray2[1] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray2[2] = (int)eI.ayp("h", (int)29906, (long)(0x3D4B5B31095A6A09L ^ l2));
        nArray2[3] = (int)eI.ayp("h", (int)9953, (long)(0xFCF66DEB60A383EL ^ l2));
        nArray2[4] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray2[5] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray2[eI.ayp("h", (int)20004, (long)(0x11F681AD381450DDL ^ l2))] = (int)eI.ayp("h", (int)14829, (long)(0x1AA84E0283F3A706L ^ l2));
        nArray2[eI.ayp("h", (int)8877, (long)(0x4C4149A254FB3C51L ^ l2))] = (int)eI.ayp("h", (int)2510, (long)(0x79E187A603C19700L ^ l2));
        nArray2[eI.ayp("h", (int)32729, (long)(0x318C4B00F1D3614EL ^ l2))] = (int)eI.ayp("h", (int)15488, (long)(0x7DBD9D5B48512211L ^ l2));
        nArray2[eI.ayp("h", (int)30022, (long)(0x125B295B648EEB80L ^ l2))] = (int)eI.ayp("h", (int)12686, (long)(0x180AF2D5FAF0AF67L ^ l2));
        nArray2[eI.ayp("h", (int)21197, (long)(0x7D8AA1DBDEC94C21L ^ l2))] = (int)eI.ayp("h", (int)15690, (long)(0x8D9A29BC561A39DL ^ l2));
        nArray2[eI.ayp("h", (int)27720, (long)(0x73F5A0582AE772B5L ^ l2))] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray2[eI.ayp("h", (int)15742, (long)(0x3A563FA9179BA3A7L ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray2[eI.ayp("h", (int)22045, (long)(0x18FB84C0D07EC8CCL ^ l2))] = (int)eI.ayp("h", (int)17766, (long)(0x1CF8E309628C5BBBL ^ l2));
        nArray2[eI.ayp("h", (int)10851, (long)(0x3C928B790F8734F0L ^ l2))] = (int)eI.ayp("h", (int)31397, (long)(0x6914644B1ECA6468L ^ l2));
        nArray2[eI.ayp("h", (int)29857, (long)(0x13B9CE35F07BEA6DL ^ l2))] = (int)eI.ayp("h", (int)29906, (long)(0x3D4B5B31095A6A09L ^ l2));
        nArray2[eI.ayp("h", (int)30452, (long)(0xF5853D58C37E831L ^ l2))] = (int)eI.ayp("h", (int)26744, (long)(0x1F4C9C49620CF6BCL ^ l2));
        nArray2[eI.ayp("h", (int)9019, (long)(0x246B666F70ADBDF1L ^ l2))] = (int)eI.ayp("h", (int)12686, (long)(0x180AF2D5FAF0AF67L ^ l2));
        nArray2[eI.ayp("h", (int)17495, (long)(0x77A67D2BD2A35AA0L ^ l2))] = (int)eI.ayp("h", (int)15690, (long)(0x8D9A29BC561A39DL ^ l2));
        this.yTUFP = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[eI.ayp("h", (int)18256, (long)(0xB8C78972B2CD99BL ^ l2))];
        nArray3[0] = (int)eI.ayp("h", (int)2081, (long)(0xF36A2E1654396B1L ^ l2));
        nArray3[1] = (int)eI.ayp("h", (int)18826, (long)(0x449A66FCE3FCD74DL ^ l2));
        nArray3[2] = (int)eI.ayp("h", (int)29491, (long)(0x7B818517DFE06DF3L ^ l2));
        nArray3[3] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray3[4] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray3[5] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray3[eI.ayp("h", (int)20004, (long)(0x11F681AD381450DDL ^ l2))] = (int)eI.ayp("h", (int)25916, (long)(0x1D57599238FBF4L ^ l2));
        nArray3[eI.ayp("h", (int)8877, (long)(0x4C4149A254FB3C51L ^ l2))] = (int)eI.ayp("h", (int)2107, (long)(0x37624C2DAFC316EFL ^ l2));
        nArray3[eI.ayp("h", (int)32729, (long)(0x318C4B00F1D3614EL ^ l2))] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray3[eI.ayp("h", (int)30022, (long)(0x125B295B648EEB80L ^ l2))] = (int)eI.ayp("h", (int)15488, (long)(0x7DBD9D5B48512211L ^ l2));
        nArray3[eI.ayp("h", (int)21197, (long)(0x7D8AA1DBDEC94C21L ^ l2))] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray3[eI.ayp("h", (int)27720, (long)(0x73F5A0582AE772B5L ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray3[eI.ayp("h", (int)15742, (long)(0x3A563FA9179BA3A7L ^ l2))] = (int)eI.ayp("h", (int)29995, (long)(0x281BDB43B82B6BCAL ^ l2));
        nArray3[eI.ayp("h", (int)18654, (long)(0x68F953A1846F561DL ^ l2))] = (int)eI.ayp("h", (int)26744, (long)(0x1F4C9C49620CF6BCL ^ l2));
        nArray3[eI.ayp("h", (int)26487, (long)(0x5C753A23D156F993L ^ l2))] = (int)eI.ayp("h", (int)1322, (long)(0x2F6AEB38986E1BFAL ^ l2));
        this.TEwfc = new cu(this.yTUFP, mr.clS(nArray3));
        int[] nArray4 = new int[eI.ayp("h", (int)18256, (long)(0xB8C78972B2CD99BL ^ l2))];
        nArray4[0] = (int)eI.ayp("h", (int)26664, (long)(0x3B0F706CE6C076DDL ^ l2));
        nArray4[1] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray4[2] = (int)eI.ayp("h", (int)19422, (long)(0x17083E747793D528L ^ l2));
        nArray4[3] = (int)eI.ayp("h", (int)9953, (long)(0xFCF66DEB60A383EL ^ l2));
        nArray4[4] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray4[5] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray4[eI.ayp("h", (int)20004, (long)(0x11F681AD381450DDL ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray4[eI.ayp("h", (int)8877, (long)(0x4C4149A254FB3C51L ^ l2))] = (int)eI.ayp("h", (int)9766, (long)(0x6028728BDF42B8F4L ^ l2));
        nArray4[eI.ayp("h", (int)32729, (long)(0x318C4B00F1D3614EL ^ l2))] = (int)eI.ayp("h", (int)15488, (long)(0x7DBD9D5B48512211L ^ l2));
        nArray4[eI.ayp("h", (int)30022, (long)(0x125B295B648EEB80L ^ l2))] = (int)eI.ayp("h", (int)14406, (long)(0x264648D48FE926B7L ^ l2));
        nArray4[eI.ayp("h", (int)21197, (long)(0x7D8AA1DBDEC94C21L ^ l2))] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray4[eI.ayp("h", (int)27720, (long)(0x73F5A0582AE772B5L ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray4[eI.ayp("h", (int)15742, (long)(0x3A563FA9179BA3A7L ^ l2))] = (int)eI.ayp("h", (int)31972, (long)(0x125BFC120697E276L ^ l2));
        nArray4[eI.ayp("h", (int)18654, (long)(0x68F953A1846F561DL ^ l2))] = (int)eI.ayp("h", (int)26744, (long)(0x1F4C9C49620CF6BCL ^ l2));
        nArray4[eI.ayp("h", (int)26487, (long)(0x5C753A23D156F993L ^ l2))] = (int)eI.ayp("h", (int)1322, (long)(0x2F6AEB38986E1BFAL ^ l2));
        this.cKxMx = new cu(this.yTUFP, mr.clS(nArray4));
        int[] nArray5 = new int[eI.ayp("h", (int)27720, (long)(0x73F5A0582AE772B5L ^ l2))];
        nArray5[0] = (int)eI.ayp("h", (int)17653, (long)(0x1BA2E20094395A01L ^ l2));
        nArray5[1] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray5[2] = (int)eI.ayp("h", (int)1322, (long)(0x2F6AEB38986E1BFAL ^ l2));
        nArray5[3] = (int)eI.ayp("h", (int)11301, (long)(0x23A9987985A632FBL ^ l2));
        nArray5[4] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray5[5] = (int)eI.ayp("h", (int)12686, (long)(0x180AF2D5FAF0AF67L ^ l2));
        nArray5[eI.ayp("h", (int)20004, (long)(0x11F681AD381450DDL ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray5[eI.ayp("h", (int)8877, (long)(0x4C4149A254FB3C51L ^ l2))] = (int)eI.ayp("h", (int)16491, (long)(0x30DF7A928F69DE94L ^ l2));
        nArray5[eI.ayp("h", (int)32729, (long)(0x318C4B00F1D3614EL ^ l2))] = (int)eI.ayp("h", (int)15488, (long)(0x7DBD9D5B48512211L ^ l2));
        nArray5[eI.ayp("h", (int)30022, (long)(0x125B295B648EEB80L ^ l2))] = (int)eI.ayp("h", (int)537, (long)(0x708FCF6D05941CFAL ^ l2));
        nArray5[eI.ayp("h", (int)21197, (long)(0x7D8AA1DBDEC94C21L ^ l2))] = (int)eI.ayp("h", (int)23435, (long)(0x113FACFBFAFC57BL ^ l2));
        this.ytGpS = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[eI.ayp("h", (int)15742, (long)(0x3A563FA9179BA3A7L ^ l2))];
        nArray6[0] = (int)eI.ayp("h", (int)21585, (long)(0x37A7B603BB10CAAAL ^ l2));
        nArray6[1] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray6[2] = (int)eI.ayp("h", (int)1322, (long)(0x2F6AEB38986E1BFAL ^ l2));
        nArray6[3] = (int)eI.ayp("h", (int)28884, (long)(0x1052075334E0EE0CL ^ l2));
        nArray6[4] = (int)eI.ayp("h", (int)19146, (long)(0xBA123BAC40D420L ^ l2));
        nArray6[5] = (int)eI.ayp("h", (int)12686, (long)(0x180AF2D5FAF0AF67L ^ l2));
        nArray6[eI.ayp("h", (int)20004, (long)(0x11F681AD381450DDL ^ l2))] = (int)eI.ayp("h", (int)14465, (long)(0x7D2697D3AF06266FL ^ l2));
        nArray6[eI.ayp("h", (int)8877, (long)(0x4C4149A254FB3C51L ^ l2))] = (int)eI.ayp("h", (int)31359, (long)(0x20272A2235A0E49DL ^ l2));
        nArray6[eI.ayp("h", (int)32729, (long)(0x318C4B00F1D3614EL ^ l2))] = (int)eI.ayp("h", (int)24576, (long)(0x7B2DA1F5DDD87E95L ^ l2));
        nArray6[eI.ayp("h", (int)30022, (long)(0x125B295B648EEB80L ^ l2))] = (int)eI.ayp("h", (int)1315, (long)(0x65D4A60D3C541BCCL ^ l2));
        nArray6[eI.ayp("h", (int)21197, (long)(0x7D8AA1DBDEC94C21L ^ l2))] = (int)eI.ayp("h", (int)15488, (long)(0x7DBD9D5B48512211L ^ l2));
        nArray6[eI.ayp("h", (int)27720, (long)(0x73F5A0582AE772B5L ^ l2))] = (int)eI.ayp("h", (int)31631, (long)(0x50C5C06D1714655AL ^ l2));
        this.Eppcp = new cA(this, mr.clS(nArray6)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(GGWXd);
        this.otZOf = new ol(this);
        this.yTUFP.Vf(this.tOxMr::WF);
        this.Eppcp.Vf(this.ytGpS::WF);
    }

    static {
        Loader.doInit(eI.class);
        eI._cdcae71d6367009ee05d59056e6b1245();
    }

    private static native void _cdcae71d6367009ee05d59056e6b1245();

    @Override
    public native void YO();
}

