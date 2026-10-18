/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;

public class eE
extends gg {
    private final cJ iQpCa;
    private final cA OTTMg;
    private static long ooppM;
    private static long[] EWJat;
    private static Integer[] chvgy;
    private static Map iJToP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eE() {
        long l2 = ooppM ^ 0x2FAF5A8B812DL;
        super(gf.aZL((int)eE.awD("z", (int)5208, (long)(0x52A164E5FA421957L ^ l2)), false, gh.xgeEn));
        int[] nArray = new int[eE.awD("z", (int)6168, (long)(0x1BAB17F215B51501L ^ l2))];
        nArray[0] = (int)eE.awD("z", (int)27184, (long)(0x18CC6BA40F41671EL ^ l2));
        nArray[1] = (int)eE.awD("z", (int)13399, (long)(0x71FFE62AC081B956L ^ l2));
        nArray[2] = (int)eE.awD("z", (int)9791, (long)(0x744A88E31110AB1AL ^ l2));
        nArray[3] = (int)eE.awD("z", (int)31704, (long)(0x4B3FBDEAE943F6D4L ^ l2));
        nArray[4] = (int)eE.awD("z", (int)13966, (long)(0x4B1188A50DCD3B83L ^ l2));
        nArray[5] = (int)eE.awD("z", (int)16817, (long)(0x13C6C8E46D32CCBBL ^ l2));
        nArray[eE.awD("z", (int)15540, (long)(0x49944C46AFD43192L ^ l2))] = (int)eE.awD("z", (int)19263, (long)(0x2BD7864B6887C612L ^ l2));
        nArray[eE.awD("z", (int)21767, (long)(0x341CD841A3925826L ^ l2))] = (int)eE.awD("z", (int)14924, (long)(0x59FEE506C9C3B756L ^ l2));
        nArray[eE.awD("z", (int)14363, (long)(0x9CCF8D305A6B530L ^ l2))] = (int)eE.awD("z", (int)24673, (long)(0x251A59570FBE6D7AL ^ l2));
        nArray[eE.awD("z", (int)2224, (long)(0x4F18A48A865085B0L ^ l2))] = (int)eE.awD("z", (int)14924, (long)(0x59FEE506C9C3B756L ^ l2));
        nArray[eE.awD("z", (int)30560, (long)(0x5DADBDECC3017A7DL ^ l2))] = (int)eE.awD("z", (int)1705, (long)(0x19095DF460788BACL ^ l2));
        nArray[eE.awD("z", (int)15454, (long)(0x3B8B7E42C6133148L ^ l2))] = (int)eE.awD("z", (int)6014, (long)(0x3C941C336B7A9A6BL ^ l2));
        nArray[eE.awD("z", (int)16624, (long)(0x76921F323EA24DF6L ^ l2))] = (int)eE.awD("z", (int)26646, (long)(0x731B98857B3E6531L ^ l2));
        nArray[eE.awD("z", (int)6181, (long)(0x6A1E136C6B711526L ^ l2))] = (int)eE.awD("z", (int)32618, (long)(0x5CC1D8A71D76F279L ^ l2));
        nArray[eE.awD("z", (int)25272, (long)(0x584E2390C729EFAFL ^ l2))] = (int)eE.awD("z", (int)11353, (long)(0x5326CA2872A0A148L ^ l2));
        nArray[eE.awD("z", (int)22181, (long)(0x32E05BF6BA235B8AL ^ l2))] = (int)eE.awD("z", (int)27295, (long)(0x39384C2294DFE798L ^ l2));
        nArray[eE.awD("z", (int)18966, (long)(0xD3D7A50FEBC73EL ^ l2))] = (int)eE.awD("z", (int)16848, (long)(0x46FCCD4D8597CCDEL ^ l2));
        this.iQpCa = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[eE.awD("z", (int)1646, (long)(0x5C3D5A5991BA8B71L ^ l2))];
        nArray2[0] = (int)eE.awD("z", (int)15530, (long)(0x482E581CCF0CB1A1L ^ l2));
        nArray2[1] = (int)eE.awD("z", (int)32464, (long)(0x6B6D3EC8D6D8F3F0L ^ l2));
        nArray2[2] = (int)eE.awD("z", (int)1639, (long)(0x6E1E24BE79A8B63L ^ l2));
        nArray2[3] = (int)eE.awD("z", (int)27295, (long)(0x39384C2294DFE798L ^ l2));
        nArray2[4] = (int)eE.awD("z", (int)14924, (long)(0x59FEE506C9C3B756L ^ l2));
        nArray2[5] = (int)eE.awD("z", (int)19337, (long)(0x2F95F03E4413C6A5L ^ l2));
        nArray2[eE.awD("z", (int)23303, (long)(0x13BB8D8225B65613L ^ l2))] = (int)eE.awD("z", (int)13487, (long)(0x7E633E9AA53439BDL ^ l2));
        nArray2[eE.awD("z", (int)4374, (long)(0x21638C88584A1C32L ^ l2))] = (int)eE.awD("z", (int)11353, (long)(0x5326CA2872A0A148L ^ l2));
        nArray2[eE.awD("z", (int)22480, (long)(0x4A92C50FC311DAF9L ^ l2))] = (int)eE.awD("z", (int)10234, (long)(0x2B737A839A532AE2L ^ l2));
        nArray2[eE.awD("z", (int)1669, (long)(0x4FBDBBF47150B8CL ^ l2))] = (int)eE.awD("z", (int)13985, (long)(0x6D17237739843BA3L ^ l2));
        nArray2[eE.awD("z", (int)23123, (long)(0x46E7C09E9D6B574DL ^ l2))] = (int)eE.awD("z", (int)23724, (long)(0x67803DF33BFAD1B0L ^ l2));
        nArray2[eE.awD("z", (int)6713, (long)(0x75117D044E679729L ^ l2))] = (int)eE.awD("z", (int)22097, (long)(0x7D2C43171C5B5B7BL ^ l2));
        nArray2[eE.awD("z", (int)18248, (long)(0x3C77199F301DCA40L ^ l2))] = (int)eE.awD("z", (int)27295, (long)(0x39384C2294DFE798L ^ l2));
        this.OTTMg = new cA(this, mr.clS(nArray2)).UG(0.001).UE(0.001).UF(0.1).UI(0.001, 0.001);
    }

    static {
        Loader.doInit(eE.class);
        eE._c35a7cb99f43a6344ba13bf140372f4b();
    }

    private static native void _c35a7cb99f43a6344ba13bf140372f4b();

    private static native int awB(int var0, long var1);

    private static native CallSite awD(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native MatchException awA(MatchException var0);

    public native boolean awz();

    private static native int awC(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}

