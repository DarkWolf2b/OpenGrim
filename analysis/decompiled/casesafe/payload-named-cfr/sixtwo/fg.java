/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cJ;
import sixtwo.gA;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class fg
extends gg {
    private final cD vJxZS;
    private final cC bkcAZ;
    private final cJ VEiCg;
    private PlayerEntity jhTSv;
    private static int[] rThNx;
    private static long pUjym;
    private static String[] OHbUD;
    private static String[] sgzRQ;
    private static Map dwOGE;
    private static long[] ITvOw;
    private static Integer[] pvmGK;
    private static Map oOvPJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fg() {
        long l2 = pUjym ^ 0x28EA1AAFBAA0L;
        super(gf.aZL((int)fg.aJe("x", (int)12954, (long)(0x1C82023EA984EC32L ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[fg.aJe("x", (int)11788, (long)(0x40DCC3A9EDE370A8L ^ l2))];
        nArray[0] = (int)fg.aJe("x", (int)5187, (long)(0x5FB7D33858294ADFL ^ l2));
        nArray[1] = (int)fg.aJe("x", (int)22270, (long)(0x214926991B4886AL ^ l2));
        nArray[2] = (int)fg.aJe("x", (int)17141, (long)(0x2D30CE2492411C6CL ^ l2));
        nArray[3] = (int)fg.aJe("x", (int)10669, (long)(0x11D226EEA714771CL ^ l2));
        nArray[4] = (int)fg.aJe("x", (int)10185, (long)(0x4573E147C03795AL ^ l2));
        nArray[5] = (int)fg.aJe("x", (int)32081, (long)(0x1DFE92CA205F23F2L ^ l2));
        nArray[fg.aJe("x", (int)14556, (long)(0x154D5A01F7FA6679L ^ l2))] = (int)fg.aJe("x", (int)23538, (long)(0x6D0E3BAA347C8571L ^ l2));
        nArray[fg.aJe("x", (int)23993, (long)(0x16D5B35F17C3032CL ^ l2))] = (int)fg.aJe("x", (int)30831, (long)(0x56491907B9ABA6EBL ^ l2));
        nArray[fg.aJe("x", (int)22164, (long)(0x7A68F13DE2648829L ^ l2))] = (int)fg.aJe("x", (int)8055, (long)(0x77401F774D8CC1FDL ^ l2));
        nArray[fg.aJe("x", (int)13321, (long)(0x322F8809318B6ABDL ^ l2))] = (int)fg.aJe("x", (int)9620, (long)(0x3C5D7D9B31247B22L ^ l2));
        nArray[fg.aJe("x", (int)25225, (long)(0x596B00DC7051BC20L ^ l2))] = (int)fg.aJe("x", (int)8049, (long)(0x23D0B0A1265DC1DFL ^ l2));
        nArray[fg.aJe("x", (int)14214, (long)(0x1D5D211A7602E92CL ^ l2))] = (int)fg.aJe("x", (int)6906, (long)(0x7AA2BBF821CEC46AL ^ l2));
        this.vJxZS = new cD(this, mr.clS(nArray)).VO((int)fg.aJe("x", (int)5118, (long)(0x5B1C1E40D3734D5FL ^ l2)));
        int[] nArray2 = new int[fg.aJe("x", (int)11799, (long)(0x4785938074270B7L ^ l2))];
        nArray2[0] = (int)fg.aJe("x", (int)32341, (long)(0x58402FF6C371A0E5L ^ l2));
        nArray2[1] = (int)fg.aJe("x", (int)10434, (long)(0x4944E4F88DDBF677L ^ l2));
        nArray2[2] = (int)fg.aJe("x", (int)9431, (long)(0x2EE4CFCC8B62FA45L ^ l2));
        nArray2[3] = (int)fg.aJe("x", (int)10434, (long)(0x4944E4F88DDBF677L ^ l2));
        nArray2[4] = (int)fg.aJe("x", (int)28021, (long)(0x33C34C27173133F2L ^ l2));
        nArray2[5] = (int)fg.aJe("x", (int)26683, (long)(0x24A223D83B44B6BEL ^ l2));
        nArray2[fg.aJe("x", (int)3633, (long)(0x6F3DC188D347D0BEL ^ l2))] = (int)fg.aJe("x", (int)27407, (long)(0x2FD9A85B78835ADL ^ l2));
        nArray2[fg.aJe("x", (int)1328, (long)(0x1227E54C3235B82L ^ l2))] = (int)fg.aJe("x", (int)32534, (long)(0x28B0B14180932196L ^ l2));
        nArray2[fg.aJe("x", (int)26819, (long)(0x4C4070F83C19366FL ^ l2))] = (int)fg.aJe("x", (int)4046, (long)(0x71AA4D479630D159L ^ l2));
        nArray2[fg.aJe("x", (int)5649, (long)(0x3BA17B9B3FB8C89CL ^ l2))] = (int)fg.aJe("x", (int)8145, (long)(0x6AF091AF789D417EL ^ l2));
        nArray2[fg.aJe("x", (int)13552, (long)(0x1B6A7CA8BC546A71L ^ l2))] = (int)fg.aJe("x", (int)5871, (long)(0x22352D0B610E4853L ^ l2));
        nArray2[fg.aJe("x", (int)10721, (long)(0x50662BF9FB3E774CL ^ l2))] = (int)fg.aJe("x", (int)10434, (long)(0x4944E4F88DDBF677L ^ l2));
        this.bkcAZ = new cC(this, mr.clS(nArray2)).Vy(0.1).Vw(3.0).Vx(10.0).VA(5.0).Vz((String)((Object)fg.aJb("a", (int)11457, (long)(0x740FABD062C39119L ^ l2))));
        int[] nArray3 = new int[fg.aJe("x", (int)15065, (long)(0x17C0E582273D647FL ^ l2))];
        nArray3[0] = (int)fg.aJe("x", (int)15274, (long)(0x4F934168CC336514L ^ l2));
        nArray3[1] = (int)fg.aJe("x", (int)10434, (long)(0x4944E4F88DDBF677L ^ l2));
        nArray3[2] = (int)fg.aJe("x", (int)21897, (long)(0x2609430523090B01L ^ l2));
        nArray3[3] = (int)fg.aJe("x", (int)10434, (long)(0x4944E4F88DDBF677L ^ l2));
        nArray3[4] = (int)fg.aJe("x", (int)28021, (long)(0x33C34C27173133F2L ^ l2));
        nArray3[5] = (int)fg.aJe("x", (int)21150, (long)(0x5222A6CD25170C00L ^ l2));
        nArray3[fg.aJe("x", (int)3633, (long)(0x6F3DC188D347D0BEL ^ l2))] = (int)fg.aJe("x", (int)27407, (long)(0x2FD9A85B78835ADL ^ l2));
        nArray3[fg.aJe("x", (int)1328, (long)(0x1227E54C3235B82L ^ l2))] = (int)fg.aJe("x", (int)13211, (long)(0x600BBA6D3C9D6D04L ^ l2));
        nArray3[fg.aJe("x", (int)26819, (long)(0x4C4070F83C19366FL ^ l2))] = (int)fg.aJe("x", (int)8520, (long)(0x2FAAACCE25E87FCAL ^ l2));
        nArray3[fg.aJe("x", (int)5649, (long)(0x3BA17B9B3FB8C89CL ^ l2))] = (int)fg.aJe("x", (int)17286, (long)(0x7269EF824EDE9D1EL ^ l2));
        nArray3[fg.aJe("x", (int)13552, (long)(0x1B6A7CA8BC546A71L ^ l2))] = (int)fg.aJe("x", (int)4289, (long)(0x4FF935BEA900CE72L ^ l2));
        nArray3[fg.aJe("x", (int)10721, (long)(0x50662BF9FB3E774CL ^ l2))] = (int)fg.aJe("x", (int)26580, (long)(0x56E1754B1E99395AL ^ l2));
        nArray3[fg.aJe("x", (int)11799, (long)(0x4785938074270B7L ^ l2))] = (int)fg.aJe("x", (int)15373, (long)(0x42A3AFC9741F6284L ^ l2));
        nArray3[fg.aJe("x", (int)12071, (long)(0x30B4E5C1F31571B6L ^ l2))] = (int)fg.aJe("x", (int)1189, (long)(0x5E7CB84ADCBDDA0EL ^ l2));
        nArray3[fg.aJe("x", (int)6358, (long)(0x6FF431E98D4DC65DL ^ l2))] = (int)fg.aJe("x", (int)27407, (long)(0x2FD9A85B78835ADL ^ l2));
        nArray3[fg.aJe("x", (int)23675, (long)(0x30B0884D1E9B82F7L ^ l2))] = (int)fg.aJe("x", (int)27549, (long)(0xBC6C2D244863506L ^ l2));
        nArray3[fg.aJe("x", (int)25510, (long)(0x4D687E36C1823D30L ^ l2))] = (int)fg.aJe("x", (int)31018, (long)(0x1B7AC80E11FF27B0L ^ l2));
        nArray3[fg.aJe("x", (int)17135, (long)(0x11ED135DB1609C69L ^ l2))] = (int)fg.aJe("x", (int)21897, (long)(0x2609430523090B01L ^ l2));
        nArray3[fg.aJe("x", (int)29945, (long)(0x2FDBB836619DAA5EL ^ l2))] = (int)fg.aJe("x", (int)21897, (long)(0x2609430523090B01L ^ l2));
        nArray3[fg.aJe("x", (int)5595, (long)(0x45CDFFF728F14B6CL ^ l2))] = (int)fg.aJe("x", (int)18307, (long)(0x65644CED976A991EL ^ l2));
        this.VEiCg = new cJ(this, mr.clS(nArray3)).WE(false);
    }

    static {
        Loader.doInit(fg.class);
        fg._c2d16b45399409694f8093f4da338ef6();
    }

    public native PlayerEntity aIU();

    @hG
    public native void aIS(gA var1);

    private static native int aJc(int var0, long var1);

    public native boolean aIT(Entity var1);

    private static native String aIY(byte[] var0);

    private static native MatchException aIX(MatchException var0);

    private static native String aIZ(int var0, long var1);

    private static native Object aJa(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int aJd(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public static native void aIV(int[] var0);

    private static native CallSite aJe(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native CallSite aJb(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native void _c2d16b45399409694f8093f4da338ef6();

    public static native int[] aIW();
}

