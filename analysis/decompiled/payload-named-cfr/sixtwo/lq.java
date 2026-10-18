/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.lj;

public class lq {
    protected lj OrHio;
    protected float wykpY;
    private static int ktKdQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lq(lj lj2, float f2) {
        this.OrHio = lj2;
        this.wykpY = f2;
    }

    static {
        if (lq.caz() == 0) {
            lq.cax(105);
        }
    }

    public float cap(int[] nArray) {
        return this.OrHio.bYD(nArray, this.wykpY);
    }

    public float cat() {
        return this.OrHio.bYG(this.wykpY);
    }

    public float cas(int[] nArray) {
        return this.OrHio.bYK(nArray, this.wykpY);
    }

    public static void cax(int n2) {
        ktKdQ = n2;
    }

    private static MatchException caA(MatchException matchException) {
        return matchException;
    }

    public float caw() {
        return this.wykpY;
    }

    public static int cay() {
        return ktKdQ;
    }

    public float cau(int n2) {
        return this.OrHio.bYF(n2, this.wykpY);
    }

    public float car(String string) {
        return this.OrHio.bYJ(string, this.wykpY);
    }

    public lj cav() {
        return this.OrHio;
    }

    public float cao(String string) {
        return this.OrHio.bYC(string, this.wykpY);
    }

    public static int caz() {
        int n2 = lq.cay();
        try {
            if (n2 == 0) {
                return 82;
            }
        }
        catch (MatchException matchException) {
            throw lq.caA(matchException);
        }
        return 0;
    }

    public float caq(int n2) {
        return this.OrHio.bYE(n2, this.wykpY);
    }
}

