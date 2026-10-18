/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.AbstractCollection;
import java.util.PriorityQueue;
import sixtwo.gb;
import sixtwo.mr;
import sixtwo.mt$uN;

public class mt<T> {
    private final boolean iTYQP;
    private final PriorityQueue<mt$uN<T>> BvHPi = new PriorityQueue((mt$uN, mt$uN2) -> Integer.compare(mt$uN2.cjmFK, mt$uN.cjmFK));
    private int lHMhG = 0;
    private static final long CaFDo = gb.aYR(8874880994607976844L, 4296825732768018460L, MethodHandles.lookup().lookupClass()).a(5159262980888L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mt(boolean bl) {
        this.iTYQP = bl;
    }

    public T cmd() {
        block34: {
            Object object;
            block33: {
                int[] nArray;
                block29: {
                    boolean bl;
                    block32: {
                        block28: {
                            long l = CaFDo ^ 0x4E091289CCFL;
                            nArray = mr.clW();
                            while (!this.BvHPi.isEmpty()) {
                                block30: {
                                    try {
                                        mt$uN<T> mt$uN;
                                        block31: {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            object = this.BvHPi;
                                                                            if (nArray != null) break block28;
                                                                            object = ((PriorityQueue)object).peek();
                                                                            if (nArray != null) break block29;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw mt.cmh(matchException);
                                                                        }
                                                                        if (object == null) break;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw mt.cmh(matchException);
                                                                    }
                                                                    mt$uN = this.BvHPi.peek();
                                                                    if (nArray != null) break block30;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw mt.cmh(matchException);
                                                                }
                                                                if (mt$uN.dkmea <= this.lHMhG) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw mt.cmh(matchException);
                                                            }
                                                            bl = this.iTYQP;
                                                            if (nArray != null) break block32;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw mt.cmh(matchException);
                                                        }
                                                        if (!bl) break;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw mt.cmh(matchException);
                                                    }
                                                    bl = this.BvHPi.peek().xOoyO.bag();
                                                    if (nArray != null) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw mt.cmh(matchException);
                                                }
                                                if (bl) break;
                                            }
                                            catch (MatchException matchException) {
                                                throw mt.cmh(matchException);
                                            }
                                        }
                                        mt$uN = this.BvHPi.poll();
                                    }
                                    catch (MatchException matchException) {
                                        throw mt.cmh(matchException);
                                    }
                                }
                                if (nArray == null) continue;
                            }
                            object = this.BvHPi;
                        }
                        try {
                            if (nArray != null) break block29;
                            bl = ((AbstractCollection)object).isEmpty();
                        }
                        catch (MatchException matchException) {
                            throw mt.cmh(matchException);
                        }
                    }
                    try {
                        if (bl) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw mt.cmh(matchException);
                    }
                    object = this.BvHPi.peek();
                }
                try {
                    try {
                        if (nArray != null) break block33;
                        if (object == null) break block34;
                    }
                    catch (MatchException matchException) {
                        throw mt.cmh(matchException);
                    }
                    object = this.BvHPi.peek().YHzBD;
                }
                catch (MatchException matchException) {
                    throw mt.cmh(matchException);
                }
            }
            return (T)object;
        }
        return null;
    }

    private static MatchException cmh(MatchException matchException) {
        return matchException;
    }

    public void cmc(mt$uN<T> mt$uN) {
        this.BvHPi.removeIf(mt$uN2 -> mt$uN2.xOoyO.equals(mt$uN.xOoyO));
        mt$uN.dkmea += this.lHMhG;
        this.BvHPi.add(mt$uN);
    }

    public void cme() {
        this.BvHPi.clear();
    }

    public void cmb(int n) {
        this.lHMhG += n;
    }
}
