/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import sixtwo.cM;
import sixtwo.cO;
import sixtwo.mZ;

public class cN {
    public static Queue<cO> YyPjC = new ConcurrentLinkedQueue<cO>();
    private static int LtlqA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        cN.XR(0);
    }

    public static void XI(String string) {
        YyPjC.add(new cO(mZ.csh(string), cM.WCwDP));
    }

    public static void XF(int[] nArray) {
        YyPjC.add(new cO(nArray, cM.MENWL));
    }

    public static void XK(int[] nArray) {
        YyPjC.add(new cO(nArray, cM.dzTse));
    }

    public static void XH(int[] nArray) {
        YyPjC.add(new cO(nArray, cM.WCwDP));
    }

    public static void XM(String string, String string2) {
        YyPjC.add(new cO(mZ.csh(string), mZ.csh(string2), cM.MENWL));
    }

    public static void XN(int[] nArray, int[] nArray2) {
        YyPjC.add(new cO(nArray, nArray2, cM.WCwDP));
    }

    public static void XO(String string, String string2) {
        YyPjC.add(new cO(mZ.csh(string), mZ.csh(string2), cM.WCwDP));
    }

    public static void XL(int[] nArray, int[] nArray2) {
        YyPjC.add(new cO(nArray, nArray2, cM.MENWL));
    }

    public static void XP(int[] nArray, int[] nArray2) {
        YyPjC.add(new cO(nArray, nArray2, cM.dzTse));
    }

    private static MatchException XU(MatchException matchException) {
        return matchException;
    }

    public static void XQ(String string, String string2) {
        YyPjC.add(new cO(mZ.csh(string), mZ.csh(string2), cM.dzTse));
    }

    public static void XJ(String string) {
        YyPjC.add(new cO(mZ.csh(string), cM.dzTse));
    }

    public static void XG(String string) {
        YyPjC.add(new cO(mZ.csh(string), cM.MENWL));
    }

    public static void XR(int n2) {
        LtlqA = n2;
    }

    public static int XS() {
        return LtlqA;
    }

    public static int XT() {
        int n2 = cN.XS();
        try {
            if (n2 == 0) {
                return 67;
            }
        }
        catch (MatchException matchException) {
            throw cN.XU(matchException);
        }
        return 0;
    }
}

