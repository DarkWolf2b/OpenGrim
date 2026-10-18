/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.lC;
import sixtwo.lw;
import sixtwo.mG;
import sixtwo.mI$uR;
import sixtwo.od;

public class ly
extends az {
    private od xhcgK;
    private mG HWpZc = mG.hoGuU;
    private int jtMYw = 0;
    private int CGOfu = -1;
    private boolean WKvNO = false;
    private long dbpqd;
    private int iPvCR = 1;
    private boolean IwNbv = false;
    private static final long laEVD = gb.aYR(5765214969812948101L, 4642015618544650956L, MethodHandles.lookup().lookupClass()).a(161237231622214L);
    private static final long iIKTk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean cct() {
        return this.IwNbv;
    }

    public void ccu() {
        boolean bl;
        block2: {
            block3: {
                long l = laEVD ^ 0x210BEFD3ADB3L;
                String[] stringArray = lw.cbS();
                try {
                    ly ly2 = this;
                    bl = this.IwNbv;
                    if (stringArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        ly2.IwNbv = bl;
    }

    public void ccs() {
        this.CGOfu = -1;
    }

    public boolean ccp() {
        boolean bl;
        block2: {
            block3: {
                long l = laEVD ^ 0x75AA03D83CF8L;
                String[] stringArray = lw.cbS();
                try {
                    bl = this.WKvNO;
                    if (stringArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    public void cco() {
        block8: {
            ly ly2;
            block9: {
                long l = laEVD ^ 0x98D338EAAD0L;
                String[] stringArray = lw.cbS();
                try {
                    try {
                        try {
                            try {
                                ly2 = this;
                                if (stringArray == null) break block8;
                                if (ly2.CGOfu < 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ly.ccJ(matchException);
                            }
                            ly2 = this;
                            if (stringArray == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ly.ccJ(matchException);
                        }
                        if (ly2.jtMYw != this.CGOfu) break block9;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    this.WKvNO = false;
                    return;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            this.dbpqd = System.nanoTime();
            ly2 = this;
        }
        ly2.WKvNO = true;
    }

    public ly ccC(mG mG2) {
        this.HWpZc = mG2;
        return this;
    }

    public ly(od od2) {
        this.xhcgK = od2;
        this.BcpIo = od2.cBR().cph() / 2.0f;
        this.WjISQ = od2.cBR().cpi() / 2.0f;
        this.dbpqd = System.nanoTime();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = laEVD ^ 0x4F3B0C40FC47L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 7475676854500482455L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                iIKTk = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    /*
     * Exception decompiling
     */
    private void ccl(long var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Extractable last case doesn't follow previous, and can't clone.
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.examineSwitchContiguity(SwitchReplacer.java:611)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.op3rewriters.SwitchReplacer.replaceRawSwitches(SwitchReplacer.java:94)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:517)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public void ccq() {
        this.WKvNO = false;
    }

    @Override
    protected void bV(lC lC2) {
        Object object;
        block7: {
            block8: {
                long l = laEVD ^ 0x41766A7EA0C7L;
                String[] stringArray = lw.cbS();
                try {
                    try {
                        object = this;
                        if (stringArray == null) break block7;
                        if (!((ly)object).WKvNO) break block8;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    this.cck();
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            object = this.xhcgK.cBR().cpk().get(this.jtMYw);
        }
        mI$uR mI$uR = (mI$uR)object;
        try {
            if (mI$uR.dvA() != null) {
                lC2.cdW(mI$uR.dvA(), this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, this.HWpZc);
            }
        }
        catch (MatchException matchException) {
            throw ly.ccJ(matchException);
        }
    }

    public void ccr(int n) {
        this.CGOfu = n;
    }

    public void ccz() {
        this.jtMYw = 0;
        this.iPvCR = 1;
        this.dbpqd = System.nanoTime();
    }

    public void ccm() {
        this.jtMYw = (this.jtMYw + 1) % this.xhcgK.cBR().cpg();
    }

    public ly ccD(int n) {
        this.jtMYw = n;
        return this;
    }

    public class_1044 ccA() {
        return this.xhcgK.cBR().cpk().get(0).dvA();
    }

    public ly ccI(boolean bl) {
        this.IwNbv = bl;
        return this;
    }

    private static MatchException ccJ(MatchException matchException) {
        return matchException;
    }

    public void ccn() {
        this.jtMYw = (this.jtMYw - 1 + this.xhcgK.cBR().cpg()) % this.xhcgK.cBR().cpg();
    }

    public void ccv() {
        this.IwNbv = false;
        this.cco();
    }

    public boolean ccy() {
        int n;
        block4: {
            block5: {
                long l = laEVD ^ 0x7842155B5285L;
                String[] stringArray = lw.cbS();
                try {
                    try {
                        n = this.jtMYw;
                        if (stringArray == null) break block4;
                        if (n != this.xhcgK.cBR().cpg() - 1) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    n = 1;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            n = 0;
        }
        return n != 0;
    }

    public ly ccG(long l) {
        this.dbpqd = l;
        return this;
    }

    public ly ccH(int n) {
        this.iPvCR = n;
        return this;
    }

    public boolean ccx() {
        boolean bl;
        block2: {
            block3: {
                long l = laEVD ^ 0x3A3FA221EAC0L;
                String[] stringArray = lw.cbS();
                try {
                    bl = this.jtMYw;
                    if (stringArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    public ly ccF(boolean bl) {
        this.WKvNO = bl;
        return this;
    }

    public ly ccB(od od2) {
        this.xhcgK = od2;
        return this;
    }

    private void cck() {
        block16: {
            long l;
            long l2;
            long l3;
            block15: {
                int n;
                String[] stringArray;
                block13: {
                    block14: {
                        block12: {
                            od od2;
                            block11: {
                                long l4 = laEVD ^ 0x2A2F614AC073L;
                                stringArray = lw.cbS();
                                try {
                                    try {
                                        od2 = this.xhcgK;
                                        if (stringArray == null) break block11;
                                        if (od2 == null) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw ly.ccJ(matchException);
                                    }
                                    od2 = this.xhcgK;
                                }
                                catch (MatchException matchException) {
                                    throw ly.ccJ(matchException);
                                }
                            }
                            try {
                                n = od2.cBR().cpk().isEmpty();
                                if (stringArray == null) break block13;
                                if (n == 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw ly.ccJ(matchException);
                            }
                        }
                        return;
                    }
                    n = this.xhcgK.cBR().cpj();
                }
                if (n <= 0) {
                    return;
                }
                long l5 = System.nanoTime();
                l3 = iIKTk / (long)Math.max(1, this.xhcgK.cBR().cpj());
                long l6 = l5 - this.dbpqd;
                try {
                    try {
                        l2 = l6;
                        l = l3;
                        if (stringArray == null) break block15;
                        if (l2 < l) break block16;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    l2 = l6;
                    l = l3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            long l7 = l2 / l;
            this.ccl(l7);
            this.dbpqd += l7 * l3;
        }
    }

    public void ccw() {
        this.IwNbv = true;
        this.cco();
    }

    public ly ccE(int n) {
        this.CGOfu = n;
        return this;
    }
}
