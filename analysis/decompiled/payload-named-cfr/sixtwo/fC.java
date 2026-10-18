/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.network.packet.s2c.play.EntityVelocityUpdateS2CPacket;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.gL;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class fC
extends gg {
    private final cA oUOJc;
    private final cA hXcoz;
    private final cJ pltDm;
    private static long sLnpv;
    private static String[] LKrNn;
    private static String[] rFUaB;
    private static Map jqBCR;
    private static long[] rcPcu;
    private static Integer[] MZPLF;
    private static Map LCHwy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _fa31f22af70cbdf56e21b1052cda26bc();

    public fC() {
        long l2 = sLnpv ^ 0x60C0E6C8EB4EL;
        super(gf.aZL((int)fC.aSG("v", (int)28172, (long)(0x55641F371AD333B5L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fC.aSG("v", (int)6546, (long)(0x3456759CD16FC40AL ^ l2))];
        nArray[0] = (int)fC.aSG("v", (int)1782, (long)(0x3EB9F199339DB45L ^ l2));
        nArray[1] = (int)fC.aSG("v", (int)12200, (long)(0x2960C2E89C70F233L ^ l2));
        nArray[2] = (int)fC.aSG("v", (int)7429, (long)(0x65204D0281EE40B7L ^ l2));
        nArray[3] = (int)fC.aSG("v", (int)11531, (long)(0x5691E922594170A9L ^ l2));
        nArray[4] = (int)fC.aSG("v", (int)21038, (long)(0x408259CF95118F84L ^ l2));
        nArray[5] = (int)fC.aSG("v", (int)27316, (long)(0xBFC679D021371FL ^ l2));
        nArray[fC.aSG("v", (int)26390, (long)(0x2A3D8C39CFCABAAAL ^ l2))] = (int)fC.aSG("v", (int)30220, (long)(0x571214B24F7AABBBL ^ l2));
        nArray[fC.aSG("v", (int)11255, (long)(0x46445721C00C7654L ^ l2))] = (int)fC.aSG("v", (int)12723, (long)(0xE1E88B5E9EF6C1FL ^ l2));
        nArray[fC.aSG("v", (int)1405, (long)(0x62A0AEF4F42DD8EEL ^ l2))] = (int)fC.aSG("v", (int)16254, (long)(0x41289E12E54E62D3L ^ l2));
        nArray[fC.aSG("v", (int)12430, (long)(0x419AA446BDC36D3AL ^ l2))] = (int)fC.aSG("v", (int)4268, (long)(0x793FB3C94F6C4D12L ^ l2));
        this.oUOJc = new cA(this, mr.clS(nArray)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH((String)((Object)fC.aSD("p", (int)24777, (long)(0x7176B90D1D20ED8BL ^ l2))));
        int[] nArray2 = new int[fC.aSG("v", (int)31959, (long)(0x28FC3C3C2B05A146L ^ l2))];
        nArray2[0] = (int)fC.aSG("v", (int)8258, (long)(0xFBF480477AEFDD2L ^ l2));
        nArray2[1] = (int)fC.aSG("v", (int)2435, (long)(0x67C726A095A8D433L ^ l2));
        nArray2[2] = (int)fC.aSG("v", (int)24150, (long)(0x3F445227C3AD03C2L ^ l2));
        nArray2[3] = (int)fC.aSG("v", (int)2571, (long)(0x5B120DB6D4A057AFL ^ l2));
        nArray2[4] = (int)fC.aSG("v", (int)21076, (long)(0x3881CE2BE2100FCEL ^ l2));
        nArray2[5] = (int)fC.aSG("v", (int)18217, (long)(0x14C5911D33139A96L ^ l2));
        nArray2[fC.aSG("v", (int)19887, (long)(0x5B129CA7D99E103AL ^ l2))] = (int)fC.aSG("v", (int)21904, (long)(0x7DD210A4C90F0830L ^ l2));
        nArray2[fC.aSG("v", (int)7374, (long)(0x67285514686B417FL ^ l2))] = (int)fC.aSG("v", (int)7320, (long)(0x113A8D86F91FC130L ^ l2));
        this.hXcoz = new cA(this, mr.clS(nArray2)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH((String)((Object)fC.aSD("p", (int)26984, (long)(0x1B83A6411F9A642BL ^ l2))));
        int[] nArray3 = new int[fC.aSG("v", (int)2623, (long)(0xC4AFA5A86C7D784L ^ l2))];
        nArray3[0] = (int)fC.aSG("v", (int)27211, (long)(0x1363502EE4AA37D7L ^ l2));
        nArray3[1] = (int)fC.aSG("v", (int)21076, (long)(0x3881CE2BE2100FCEL ^ l2));
        nArray3[2] = (int)fC.aSG("v", (int)10697, (long)(0x41D663F2BF65F45BL ^ l2));
        nArray3[3] = (int)fC.aSG("v", (int)21904, (long)(0x7DD210A4C90F0830L ^ l2));
        nArray3[4] = (int)fC.aSG("v", (int)16585, (long)(0x4BD8B2CD4EDC1D56L ^ l2));
        nArray3[5] = (int)fC.aSG("v", (int)7320, (long)(0x113A8D86F91FC130L ^ l2));
        nArray3[fC.aSG("v", (int)19887, (long)(0x5B129CA7D99E103AL ^ l2))] = (int)fC.aSG("v", (int)22762, (long)(0x315FB44F40788545L ^ l2));
        nArray3[fC.aSG("v", (int)7374, (long)(0x67285514686B417FL ^ l2))] = (int)fC.aSG("v", (int)17606, (long)(0x23FE307DD5799963L ^ l2));
        nArray3[fC.aSG("v", (int)31959, (long)(0x28FC3C3C2B05A146L ^ l2))] = (int)fC.aSG("v", (int)6650, (long)(0x79E4178AC9F64453L ^ l2));
        nArray3[fC.aSG("v", (int)21085, (long)(0x720496DBAEBF8FE5L ^ l2))] = (int)fC.aSG("v", (int)5427, (long)(0x7B21858D5776C89DL ^ l2));
        nArray3[fC.aSG("v", (int)22229, (long)(0x41B92C3431A48B72L ^ l2))] = (int)fC.aSG("v", (int)2065, (long)(0x23EB036C14C055A7L ^ l2));
        nArray3[fC.aSG("v", (int)23876, (long)(0xB003B85EEB680E5L ^ l2))] = (int)fC.aSG("v", (int)1293, (long)(0x4FD20129B83358B7L ^ l2));
        nArray3[fC.aSG("v", (int)28418, (long)(0x1E047FE52047B29FL ^ l2))] = (int)fC.aSG("v", (int)7320, (long)(0x113A8D86F91FC130L ^ l2));
        nArray3[fC.aSG("v", (int)11054, (long)(0x5F5838B8D63A769BL ^ l2))] = (int)fC.aSG("v", (int)23115, (long)(0x5984A15B3A7E07D5L ^ l2));
        nArray3[fC.aSG("v", (int)23721, (long)(0x47F8EA6317D1810FL ^ l2))] = (int)fC.aSG("v", (int)21076, (long)(0x3881CE2BE2100FCEL ^ l2));
        nArray3[fC.aSG("v", (int)22186, (long)(0x37A9EB1330158B17L ^ l2))] = (int)fC.aSG("v", (int)24304, (long)(0x26C2AE2A8F5C8369L ^ l2));
        this.pltDm = new cJ(this, mr.clS(nArray3)).WE(false);
    }

    static {
        Loader.doInit(fC.class);
        fC._fa31f22af70cbdf56e21b1052cda26bc();
    }

    private static native int aSF(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite aSG(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native String aSA(byte[] var0);

    private static native String aSB(int var0, long var1);

    private static native CallSite aSD(MethodHandles.Lookup var0, String var1, MethodType var2);

    private native double aSx(double var1, double var3, int var5);

    @hG
    public native void aSw(gL.tk var1);

    private static native MatchException aSz(MatchException var0);

    private static native int aSE(int var0, long var1);

    private static native Object aSC(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private native void aSy(EntityVelocityUpdateS2CPacket var1, double var2, double var4, double var6);
}

