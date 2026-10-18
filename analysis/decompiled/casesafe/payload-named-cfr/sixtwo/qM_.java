/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.List;
import native.Loader;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.mx;
import sixtwo.qL;

public class qM {
    private final Deque<mx> BZgpv;
    private final Deque<mx> AAdkc;
    private static long LyBHa;
    private static String tkinN;
    private static long wahZJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qM() {
        long l2 = LyBHa ^ 0xF5D93FCB1CEL;
        this.BZgpv = new ArrayDeque<mx>();
        boolean bl2 = qL.dcb();
        try {
            this.AAdkc = new ArrayDeque<mx>(List.of(new mx(mG.QHTxQ), new mx(mG.Cgzkn), new mx(mG.rxCUH), new mx(mG.NiWiU), new mx(mG.vuAhq), new mx(mG.NwQaf), new mx(mG.yHyOB), new mx(mG.JTHGB), new mx(mG.ibYER)));
            this.dch();
            if (!bl2) {
                iS.bwK("YNDGdb");
            }
        }
        catch (MatchException matchException) {
            throw qM.dcp(matchException);
        }
    }

    static {
        Loader.doInit(qM.class);
        qM._b86d1041d15c34f233d5332ca752ee9b();
    }

    private static native /* synthetic */ boolean dco(mG var0, mx var1);

    private static native String dcq(byte[] var0);

    private static native /* synthetic */ boolean dcn(int var0, mx var1);

    public native void dcg(Deque<Integer> var1);

    public native void dce(mG var1);

    public native Deque<Integer> dci();

    public native Deque<mx> dcj();

    public native void dch();

    private static native MatchException dcp(MatchException var0);

    public native void dcf(int var1);

    public native Deque<mx> dck();

    private static native /* synthetic */ Integer dcl(mx var0);

    private static native void _b86d1041d15c34f233d5332ca752ee9b();

    private static native /* synthetic */ mx dcm(Integer var0);
}

