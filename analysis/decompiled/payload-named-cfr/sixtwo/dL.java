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
import sixtwo.cJ;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hh;
import sixtwo.mr;

public class dL
extends gg {
    private final cJ lXvtl;
    private static long MvRUw;
    private static long[] xmVgM;
    private static Integer[] OKemK;
    private static Map VTfqp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static native void _05bd19a8cf8c644a334ebd019e2b6fa0();

    public dL() {
        long l2 = MvRUw ^ 0x6A42F373C21L;
        super(gf.aZL((int)dL.anu("x", (int)28507, (long)(0x6FB4503277083FBCL ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dL.anu("x", (int)20466, (long)(0x4BAC0017BD921F1DL ^ l2))];
        nArray[0] = (int)dL.anu("x", (int)20184, (long)(0x154A167F118A1E34L ^ l2));
        nArray[1] = (int)dL.anu("x", (int)13794, (long)(0x3C684DA48FC36518L ^ l2));
        nArray[2] = (int)dL.anu("x", (int)3555, (long)(0x265DA335AE075D0BL ^ l2));
        nArray[3] = (int)dL.anu("x", (int)14813, (long)(0x1439D0B21C356926L ^ l2));
        nArray[4] = (int)dL.anu("x", (int)15435, (long)(0x27B38DD08C64ECAEL ^ l2));
        nArray[5] = (int)dL.anu("x", (int)10514, (long)(0x7EB02FDCB452F9E5L ^ l2));
        nArray[dL.anu("x", (int)16117, (long)(0x39A4A54BF9CC6E15L ^ l2))] = (int)dL.anu("x", (int)5072, (long)(0x371CCEDD15B7C320L ^ l2));
        nArray[dL.anu("x", (int)28536, (long)(0x2BB79303089DBF95L ^ l2))] = (int)dL.anu("x", (int)12662, (long)(0x21566880CBECE190L ^ l2));
        nArray[dL.anu("x", (int)11547, (long)(0x4F4341D8ADCEFDEDL ^ l2))] = (int)dL.anu("x", (int)21783, (long)(0x58C5CCDF564105E3L ^ l2));
        nArray[dL.anu("x", (int)10867, (long)(0x62BB4731F27F7A8BL ^ l2))] = (int)dL.anu("x", (int)9703, (long)(0x32ADE3F815077519L ^ l2));
        nArray[dL.anu("x", (int)20304, (long)(0x7CD927C1FBC09FBEL ^ l2))] = (int)dL.anu("x", (int)12743, (long)(0xF995A6C9ABE6124L ^ l2));
        nArray[dL.anu("x", (int)9432, (long)(0x1731E957980743AL ^ l2))] = (int)dL.anu("x", (int)29313, (long)(0x3865C493B428227EL ^ l2));
        nArray[dL.anu("x", (int)17543, (long)(0xC34B7D8D16946DL ^ l2))] = (int)dL.anu("x", (int)258, (long)(0x5C54BE246F9651EBL ^ l2));
        nArray[dL.anu("x", (int)18225, (long)(0x24DDF6A21FB617C8L ^ l2))] = (int)dL.anu("x", (int)17213, (long)(0x67594D276B3313DCL ^ l2));
        nArray[dL.anu("x", (int)25412, (long)(0xEFC33374DDB33A0L ^ l2))] = (int)dL.anu("x", (int)9081, (long)(0x3A7B2FB50A1BF392L ^ l2));
        nArray[dL.anu("x", (int)28410, (long)(0x144B99799B8FBE0BL ^ l2))] = (int)dL.anu("x", (int)21138, (long)(0x1954419251F7026EL ^ l2));
        nArray[dL.anu("x", (int)4015, (long)(0x3997D2CB3C865F52L ^ l2))] = (int)dL.anu("x", (int)10449, (long)(0x6746AA871C047824L ^ l2));
        this.lXvtl = new cJ(this, mr.clS(nArray)).WE(true);
    }

    static {
        Loader.doInit(dL.class);
        dL._05bd19a8cf8c644a334ebd019e2b6fa0();
    }

    private static native CallSite anu(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void anq(hh var1);

    private static native int ant(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native int ans(int var0, long var1);

    private static native MatchException anr(MatchException var0);
}

