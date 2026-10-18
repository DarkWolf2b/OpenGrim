/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.texture.AbstractTexture;
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
        boolean bl2;
        block2: {
            block3: {
                long l2 = laEVD ^ 0x210BEFD3ADB3L;
                String[] stringArray = lw.cbS();
                try {
                    ly ly2 = this;
                    bl2 = this.IwNbv;
                    if (stringArray == null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        ly2.IwNbv = bl2;
    }

    public void ccs() {
        this.CGOfu = -1;
    }

    public boolean ccp() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = laEVD ^ 0x75AA03D83CF8L;
                String[] stringArray = lw.cbS();
                try {
                    bl2 = this.WKvNO;
                    if (stringArray == null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    public void cco() {
        block8: {
            ly ly2;
            block9: {
                long l2 = laEVD ^ 0x98D338EAAD0L;
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
        long l2 = laEVD ^ 0x4F3B0C40FC47L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 7475676854500482455L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                iIKTk = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
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
                long l2 = laEVD ^ 0x41766A7EA0C7L;
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

    public void ccr(int n2) {
        this.CGOfu = n2;
    }

    public void ccz() {
        this.jtMYw = 0;
        this.iPvCR = 1;
        this.dbpqd = System.nanoTime();
    }

    public void ccm() {
        this.jtMYw = (this.jtMYw + 1) % this.xhcgK.cBR().cpg();
    }

    public ly ccD(int n2) {
        this.jtMYw = n2;
        return this;
    }

    public AbstractTexture ccA() {
        return this.xhcgK.cBR().cpk().get(0).dvA();
    }

    public ly ccI(boolean bl2) {
        this.IwNbv = bl2;
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
        int n2;
        block4: {
            block5: {
                long l2 = laEVD ^ 0x7842155B5285L;
                String[] stringArray = lw.cbS();
                try {
                    try {
                        n2 = this.jtMYw;
                        if (stringArray == null) break block4;
                        if (n2 != this.xhcgK.cBR().cpg() - 1) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    n2 = 1;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public ly ccG(long l2) {
        this.dbpqd = l2;
        return this;
    }

    public ly ccH(int n2) {
        this.iPvCR = n2;
        return this;
    }

    public boolean ccx() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = laEVD ^ 0x3A3FA221EAC0L;
                String[] stringArray = lw.cbS();
                try {
                    bl2 = this.jtMYw;
                    if (stringArray == null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    public ly ccF(boolean bl2) {
        this.WKvNO = bl2;
        return this;
    }

    public ly ccB(od od2) {
        this.xhcgK = od2;
        return this;
    }

    private void cck() {
        block16: {
            long l2;
            long l3;
            long l4;
            block15: {
                int n2;
                String[] stringArray;
                block13: {
                    block14: {
                        block12: {
                            od od2;
                            block11: {
                                long l5 = laEVD ^ 0x2A2F614AC073L;
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
                                n2 = od2.cBR().cpk().isEmpty();
                                if (stringArray == null) break block13;
                                if (n2 == 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw ly.ccJ(matchException);
                            }
                        }
                        return;
                    }
                    n2 = this.xhcgK.cBR().cpj();
                }
                if (n2 <= 0) {
                    return;
                }
                long l6 = System.nanoTime();
                l4 = iIKTk / (long)Math.max(1, this.xhcgK.cBR().cpj());
                long l7 = l6 - this.dbpqd;
                try {
                    try {
                        l3 = l7;
                        l2 = l4;
                        if (stringArray == null) break block15;
                        if (l3 < l2) break block16;
                    }
                    catch (MatchException matchException) {
                        throw ly.ccJ(matchException);
                    }
                    l3 = l7;
                    l2 = l4;
                }
                catch (MatchException matchException) {
                    throw ly.ccJ(matchException);
                }
            }
            long l8 = l3 / l2;
            this.ccl(l8);
            this.dbpqd += l8 * l4;
        }
    }

    public void ccw() {
        this.IwNbv = true;
        this.cco();
    }

    public ly ccE(int n2) {
        this.CGOfu = n2;
        return this;
    }
}

