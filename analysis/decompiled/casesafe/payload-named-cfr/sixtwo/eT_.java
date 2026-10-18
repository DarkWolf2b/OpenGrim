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
import sixtwo.cC;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.mr;

public class eT
extends gg {
    private final cC JIjdU;
    private final ct wSXQh;
    private final cu uAaOS;
    private final cu mRyFn;
    private final cC YtRvz;
    private static long cHXms;
    private static String QSxPs;
    private static long[] nzopz;
    private static Integer[] NCEJm;
    private static Map AISwg;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public eT() {
        long l2 = cHXms ^ 0x10D95DC40C7L;
        super(gf.aZL((int)eT.aDB("k", (int)7370, (long)(0x61800EFDBB7C6EECL ^ l2)), false, gh.xwjCw));
        int[] nArray = new int[eT.aDB("k", (int)472, (long)(0x1C90A0603AF473D0L ^ l2))];
        nArray[0] = (int)eT.aDB("k", (int)14929, (long)(0x7620137BA978C84FL ^ l2));
        nArray[1] = (int)eT.aDB("k", (int)9181, (long)(0xE147253905651F9L ^ l2));
        nArray[2] = (int)eT.aDB("k", (int)12479, (long)(0x5C4D629F553CC2B2L ^ l2));
        nArray[3] = (int)eT.aDB("k", (int)30531, (long)(0x4AA152322AE2855EL ^ l2));
        nArray[4] = (int)eT.aDB("k", (int)9166, (long)(0x31082F51193BD1C5L ^ l2));
        nArray[5] = (int)eT.aDB("k", (int)7199, (long)(0x2F36278EB4DCEE0FL ^ l2));
        nArray[eT.aDB("k", (int)21154, (long)(0x14EA77162CB4A080L ^ l2))] = (int)eT.aDB("k", (int)19567, (long)(0x2989B6916486BE65L ^ l2));
        nArray[eT.aDB("k", (int)30159, (long)(0x71FF9272A04A07E1L ^ l2))] = (int)eT.aDB("k", (int)20848, (long)(0x5B3206182E40A35CL ^ l2));
        nArray[eT.aDB("k", (int)4671, (long)(0x675970ACF039E01AL ^ l2))] = (int)eT.aDB("k", (int)17610, (long)(0x2B4DA36EE0CB36CCL ^ l2));
        nArray[eT.aDB("k", (int)21494, (long)(0x68F76EBD679A21CDL ^ l2))] = (int)eT.aDB("k", (int)19232, (long)(0x5D37528479FFB900L ^ l2));
        nArray[eT.aDB("k", (int)9162, (long)(0x3AF083D076B851EDL ^ l2))] = (int)eT.aDB("k", (int)24303, (long)(0x220F36B89C512CC0L ^ l2));
        nArray[eT.aDB("k", (int)27846, (long)(0x2AFE69A446B51ECFL ^ l2))] = (int)eT.aDB("k", (int)14637, (long)(0x103EE6840B46CB3FL ^ l2));
        nArray[eT.aDB("k", (int)3622, (long)(0x35D0C53C5567C37L ^ l2))] = (int)eT.aDB("k", (int)12307, (long)(0x6683789FE4E0421FL ^ l2));
        nArray[eT.aDB("k", (int)21470, (long)(0x6661D61474C3A1CBL ^ l2))] = (int)eT.aDB("k", (int)18559, (long)(0x6CC13FA7DFE6BA64L ^ l2));
        nArray[eT.aDB("k", (int)7046, (long)(0x1A0FF9908132E995L ^ l2))] = (int)eT.aDB("k", (int)29857, (long)(0x309B010D34BC068CL ^ l2));
        nArray[eT.aDB("k", (int)3114, (long)(0x631CC3CFDF9C7E3CL ^ l2))] = (int)eT.aDB("k", (int)3575, (long)(0x756FB3E871AAFFF8L ^ l2));
        nArray[eT.aDB("k", (int)8346, (long)(0x7E6C96EA39DC5294L ^ l2))] = (int)eT.aDB("k", (int)8103, (long)(0x2F8C890CB3346DA0L ^ l2));
        this.JIjdU = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(QSxPs);
        int[] nArray2 = new int[eT.aDB("k", (int)21791, (long)(0x2F2A502A22B3A700L ^ l2))];
        nArray2[0] = (int)eT.aDB("k", (int)17232, (long)(0x5890E69D7DACB17BL ^ l2));
        nArray2[1] = (int)eT.aDB("k", (int)20848, (long)(0x5B3206182E40A35CL ^ l2));
        nArray2[2] = (int)eT.aDB("k", (int)24303, (long)(0x220F36B89C512CC0L ^ l2));
        nArray2[3] = (int)eT.aDB("k", (int)12058, (long)(0x4E34701F56085D06L ^ l2));
        nArray2[4] = (int)eT.aDB("k", (int)31541, (long)(0x545892F975A8922L ^ l2));
        nArray2[5] = (int)eT.aDB("k", (int)17610, (long)(0x2B4DA36EE0CB36CCL ^ l2));
        nArray2[eT.aDB("k", (int)5989, (long)(0x3F6840FF5E6B655FL ^ l2))] = (int)eT.aDB("k", (int)8635, (long)(0x74044A2D1C40D393L ^ l2));
        nArray2[eT.aDB("k", (int)4115, (long)(0x68102DF7BF50E22AL ^ l2))] = (int)eT.aDB("k", (int)9125, (long)(0x4700379FD83C51A0L ^ l2));
        nArray2[eT.aDB("k", (int)10300, (long)(0x3396F202BF2BDA3EL ^ l2))] = (int)eT.aDB("k", (int)20052, (long)(0x5F53380DD5FBBC50L ^ l2));
        nArray2[eT.aDB("k", (int)15533, (long)(0x2A00BE72B9854EB7L ^ l2))] = (int)eT.aDB("k", (int)32303, (long)(0x7A97A9E1FAA58C0CL ^ l2));
        this.wSXQh = new ct(this, mr.clS(nArray2));
        int[] nArray3 = new int[eT.aDB("k", (int)4115, (long)(0x68102DF7BF50E22AL ^ l2))];
        nArray3[0] = (int)eT.aDB("k", (int)23224, (long)(0x7DBDD310D67CA8ACL ^ l2));
        nArray3[1] = (int)eT.aDB("k", (int)18559, (long)(0x6CC13FA7DFE6BA64L ^ l2));
        nArray3[2] = (int)eT.aDB("k", (int)29857, (long)(0x309B010D34BC068CL ^ l2));
        nArray3[3] = (int)eT.aDB("k", (int)24303, (long)(0x220F36B89C512CC0L ^ l2));
        nArray3[4] = (int)eT.aDB("k", (int)20848, (long)(0x5B3206182E40A35CL ^ l2));
        nArray3[5] = (int)eT.aDB("k", (int)20848, (long)(0x5B3206182E40A35CL ^ l2));
        nArray3[eT.aDB("k", (int)5989, (long)(0x3F6840FF5E6B655FL ^ l2))] = (int)eT.aDB("k", (int)18559, (long)(0x6CC13FA7DFE6BA64L ^ l2));
        this.uAaOS = new cu(this.wSXQh, mr.clS(nArray3));
        int[] nArray4 = new int[eT.aDB("k", (int)4115, (long)(0x68102DF7BF50E22AL ^ l2))];
        nArray4[0] = (int)eT.aDB("k", (int)13227, (long)(0x20F022B6B6E9C1AAL ^ l2));
        nArray4[1] = (int)eT.aDB("k", (int)20848, (long)(0x5B3206182E40A35CL ^ l2));
        nArray4[2] = (int)eT.aDB("k", (int)18559, (long)(0x6CC13FA7DFE6BA64L ^ l2));
        nArray4[3] = (int)eT.aDB("k", (int)25198, (long)(0x2ECD77EB29101076L ^ l2));
        nArray4[4] = (int)eT.aDB("k", (int)18559, (long)(0x6CC13FA7DFE6BA64L ^ l2));
        nArray4[5] = (int)eT.aDB("k", (int)29857, (long)(0x309B010D34BC068CL ^ l2));
        nArray4[eT.aDB("k", (int)5989, (long)(0x3F6840FF5E6B655FL ^ l2))] = (int)eT.aDB("k", (int)25198, (long)(0x2ECD77EB29101076L ^ l2));
        this.mRyFn = new cu(this.wSXQh, mr.clS(nArray4));
        int[] nArray5 = new int[eT.aDB("k", (int)13724, (long)(0x43DBC6367C8E47A4L ^ l2))];
        nArray5[0] = (int)eT.aDB("k", (int)8039, (long)(0x5443C429CECE6D46L ^ l2));
        nArray5[1] = (int)eT.aDB("k", (int)24303, (long)(0x220F36B89C512CC0L ^ l2));
        nArray5[2] = (int)eT.aDB("k", (int)25198, (long)(0x2ECD77EB29101076L ^ l2));
        nArray5[3] = (int)eT.aDB("k", (int)17610, (long)(0x2B4DA36EE0CB36CCL ^ l2));
        nArray5[4] = (int)eT.aDB("k", (int)12922, (long)(0x10AD69C807ABC053L ^ l2));
        nArray5[5] = (int)eT.aDB("k", (int)32303, (long)(0x7A97A9E1FAA58C0CL ^ l2));
        nArray5[eT.aDB("k", (int)5989, (long)(0x3F6840FF5E6B655FL ^ l2))] = (int)eT.aDB("k", (int)11286, (long)(0x1656EDD9FDB9DE16L ^ l2));
        nArray5[eT.aDB("k", (int)4115, (long)(0x68102DF7BF50E22AL ^ l2))] = (int)eT.aDB("k", (int)17610, (long)(0x2B4DA36EE0CB36CCL ^ l2));
        nArray5[eT.aDB("k", (int)10300, (long)(0x3396F202BF2BDA3EL ^ l2))] = (int)eT.aDB("k", (int)2042, (long)(0x5F4599A446B1F5E3L ^ l2));
        nArray5[eT.aDB("k", (int)15533, (long)(0x2A00BE72B9854EB7L ^ l2))] = (int)eT.aDB("k", (int)24303, (long)(0x220F36B89C512CC0L ^ l2));
        nArray5[eT.aDB("k", (int)21791, (long)(0x2F2A502A22B3A700L ^ l2))] = (int)eT.aDB("k", (int)12058, (long)(0x4E34701F56085D06L ^ l2));
        nArray5[eT.aDB("k", (int)15402, (long)(0x13957F7E006D4E29L ^ l2))] = (int)eT.aDB("k", (int)18286, (long)(0x41CA03322C2C3544L ^ l2));
        this.YtRvz = new cC(this, mr.clS(nArray5)).VA(10.0).Vw(1.0).Vx(50.0).Vy(1.0);
        this.YtRvz.Vf(this.mRyFn::SZ);
    }

    static {
        Loader.doInit(eT.class);
        eT._250bbcb8ea6c376711219c4c5a94a71d();
    }

    private static native void _250bbcb8ea6c376711219c4c5a94a71d();

    private static native CallSite aDB(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void aDu(gH.th var1);

    private native boolean aDv(PlayerEntity var1);

    private static native int aDz(int var0, long var1);

    private static native String aDy(byte[] var0);

    private static native MatchException aDx(MatchException var0);

    private static native int aDA(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public native boolean aDw(PlayerEntity var1);
}

