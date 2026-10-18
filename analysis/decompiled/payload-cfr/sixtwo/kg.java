/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1044;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jO;
import sixtwo.jO$tZ;
import sixtwo.jP;
import sixtwo.kd;
import sixtwo.kf;
import sixtwo.kg$ue;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lF;
import sixtwo.lJ;
import sixtwo.lN;
import sixtwo.la;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mG;

public class kg
implements lA,
lJ<kg> {
    private final lC DefNT;
    private final kd LxPkh;
    private final float KFtMh;
    private final float UGftP;
    private final float lKsUl;
    private final float eHPWe;
    private kf slzIe;
    private ld aHnxw;
    private mG xIknw;
    private la aNPKC;
    private class_1044 gEcsA;
    private float DeOtF;
    private float KfgfI;
    private float txGdU;
    private float tfPBr;
    private float KeWGi;
    private float jzZGr;
    private float nMccj;
    private float XPiOH;
    private boolean zCNEN;
    private boolean AWfNt;
    private float QpnEL;
    private float ddWOd;
    private float JxAXL;
    private float vjsav;
    private float MRKmz;
    private float pRDcN;
    private float JVdZg;
    private float LkPhO;
    private float JOxbl;
    private float grPFu;
    private float Myblt;
    private float icfCV;
    private float NKhaE;
    private float tkEVM;
    private float koBfv;
    private mG bUTfh;
    private mG OcxDq;
    private kg$ue Zheqi;
    private static final long yDeom = gb.aYR(-9079208359225598629L, -850822177590378140L, MethodHandles.lookup().lookupClass()).a(14424794711991L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kg(lC lC2, kd kd2, float f, float f2, float f3, float f4) {
        kd kd3;
        iS[] iSArray;
        block5: {
            block6: {
                long l = yDeom ^ 0x58565D97875DL;
                iS[] iSArray2 = kd.bOg();
                this.slzIe = kf.viqyh;
                this.aHnxw = ld.NONE;
                this.xIknw = mG.hoGuU;
                iSArray = iSArray2;
                try {
                    this.DeOtF = 0.75f;
                    this.KfgfI = 0.75f;
                    this.txGdU = 1.0f;
                    this.tfPBr = 7.0f;
                    this.KeWGi = 0.0f;
                    this.jzZGr = 0.0f;
                    this.nMccj = 0.0f;
                    this.XPiOH = (float)Math.PI * 2;
                    this.QpnEL = 0.0f;
                    this.ddWOd = 0.0f;
                    this.JxAXL = 0.5f;
                    this.vjsav = 0.0f;
                    this.MRKmz = 0.0f;
                    this.pRDcN = 1.0f;
                    this.JVdZg = 1.0f;
                    this.LkPhO = 0.0f;
                    this.JOxbl = 100.0f;
                    this.grPFu = 100.0f;
                    this.Myblt = 100.0f;
                    this.icfCV = 0.0f;
                    this.NKhaE = 80.0f;
                    this.tkEVM = -45.0f;
                    this.koBfv = 1.5f;
                    this.bUTfh = mG.hoGuU;
                    this.OcxDq = mG.UhgnI;
                    this.Zheqi = kg$ue.ubqbG;
                    this.DefNT = lC2;
                    kg kg2 = this;
                    kd3 = kd2;
                    if (iSArray == null) break block5;
                    if (kd3 != null) break block6;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                kd3 = kd.AhlXN;
                break block5;
            }
            kd3 = kd2;
        }
        try {
            kg2.LxPkh = kd3;
            this.KFtMh = f;
            this.UGftP = f2;
            this.lKsUl = f3;
            this.eHPWe = f4;
            if (iSArray == null) {
                iS.bwK("FxruEc");
            }
        }
        catch (MatchException matchException) {
            throw kg.bPh(matchException);
        }
    }

    public kg(lC lC2, kd kd2, lc lc2) {
        this(lC2, kd2, lc2.bXF(), lc2.bXG(), lc2.bXH(), lc2.bXI());
    }

    /*
     * Exception decompiling
     */
    @Override
    public void execute() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 4[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
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

    public kg bOR(float f) {
        this.icfCV = f;
        return this;
    }

    public kg bON(float f) {
        this.LkPhO = f;
        return this;
    }

    public kg bOX() {
        this.Zheqi = kg$ue.ubqbG;
        lF.cfA(this);
        return this;
    }

    public kg bOQ(float f) {
        this.Myblt = f;
        return this;
    }

    public kg bPc() {
        this.Zheqi = kg$ue.KXgXu;
        lF.cfA(this);
        return this;
    }

    public kg bOW(mG mG2) {
        mG mG3;
        block2: {
            block3: {
                long l = yDeom ^ 0x6B579844FAC4L;
                iS[] iSArray = kd.bOg();
                try {
                    kg kg2 = this;
                    mG3 = mG2;
                    if (iSArray == null) break block2;
                    if (mG3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                mG3 = mG.UhgnI;
                break block2;
            }
            mG3 = mG2;
        }
        kg2.OcxDq = mG3;
        return this;
    }

    public kg bOU(float f) {
        this.koBfv = f;
        return this;
    }

    public kg bOu(ld ld2) {
        ld ld3;
        block2: {
            block3: {
                long l = yDeom ^ 0x3B72DCB1E620L;
                iS[] iSArray = kd.bOg();
                try {
                    kg kg2 = this;
                    ld3 = ld2;
                    if (iSArray == null) break block2;
                    if (ld3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                ld3 = ld.NONE;
                break block2;
            }
            ld3 = ld2;
        }
        kg2.aHnxw = ld3;
        return this;
    }

    public kg bOY() {
        this.bOZ();
        this.bOX();
        return this;
    }

    public kg bOE(float f) {
        this.tfPBr = f;
        return this;
    }

    public kg bOO(float f) {
        this.JOxbl = f;
        return this;
    }

    public kg bOv(mG mG2) {
        mG mG3;
        block2: {
            block3: {
                long l = yDeom ^ 0xA50458DEC28L;
                iS[] iSArray = kd.bOg();
                try {
                    kg kg2 = this;
                    mG3 = mG2;
                    if (iSArray == null) break block2;
                    if (mG3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                mG3 = mG.hoGuU;
                break block2;
            }
            mG3 = mG2;
        }
        kg2.xIknw = mG3;
        return this;
    }

    public kg bOA(float f) {
        this.slzIe = kf.nvgmg;
        this.txGdU = f;
        return this;
    }

    public kg bOV(mG mG2) {
        mG mG3;
        block2: {
            block3: {
                long l = yDeom ^ 0x53E0C112FF59L;
                iS[] iSArray = kd.bOg();
                try {
                    kg kg2 = this;
                    mG3 = mG2;
                    if (iSArray == null) break block2;
                    if (mG3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                mG3 = mG.hoGuU;
                break block2;
            }
            mG3 = mG2;
        }
        kg2.bUTfh = mG3;
        return this;
    }

    public kg bOP(float f) {
        this.grPFu = f;
        return this;
    }

    public kg bOw(la la2) {
        this.aNPKC = la2;
        this.gEcsA = null;
        return this;
    }

    @Override
    public lN batchKey() {
        return lN.immediate();
    }

    public kg bPb() {
        this.Zheqi = kg$ue.risei;
        lF.cfA(this);
        return this;
    }

    public kg bOC(float f) {
        this.DeOtF = f;
        return this;
    }

    public kg bOG(float f) {
        this.jzZGr = f;
        return this;
    }

    public kg bOH(float f) {
        this.nMccj = f;
        return this;
    }

    public kg bOI(float f) {
        this.XPiOH = f;
        return this;
    }

    public kg bOF(float f) {
        this.KeWGi = f;
        return this;
    }

    public kg bOK(float f) {
        this.AWfNt = true;
        this.QpnEL = f;
        return this;
    }

    public kg bOx(class_1044 class_10442) {
        this.gEcsA = class_10442;
        this.aNPKC = null;
        return this;
    }

    public kg bOy(float f, float f2, float f3, float f4) {
        this.vjsav = f;
        this.MRKmz = f2;
        this.pRDcN = f3;
        this.JVdZg = f4;
        return this;
    }

    public kg bOL(float f) {
        this.ddWOd = f;
        return this;
    }

    private jP bPg() {
        return jP.bKA(this.DefNT.cfc(), this.KFtMh, this.UGftP, this.lKsUl, this.eHPWe).dqK(this.LxPkh).dqL(this.slzIe).dqM(this.aHnxw).dqN(this.xIknw).dqO(this.KfgfI).dqP(this.txGdU).dqQ(this.tfPBr * 0.1f).dqR(this.KeWGi).dqS(this.jzZGr).dqT(this.nMccj).dqU(this.XPiOH).dqV(this.zCNEN).dqW(this.LkPhO).dqX(this.JOxbl).dqY(this.grPFu).dqZ(this.Myblt).dra(this.icfCV).drb(this.NKhaE).drc(this.tkEVM).drd(this.koBfv).dre(this.bUTfh).drf(this.OcxDq).drg();
    }

    public kg bOZ() {
        this.bPb();
        return this;
    }

    public kg bPa() {
        this.bPc();
        return this;
    }

    private jO bPf(mG mG2, float f) {
        return this.bPe(mG2, f).dqz();
    }

    private jO$tZ bPe(mG mG2, float f) {
        kg kg2;
        jO$tZ jO$tZ;
        block7: {
            block8: {
                long l = yDeom ^ 0x8B8D31F4B8BL;
                jO$tZ = jO.bJI(this.DefNT.cfc(), this.KFtMh, this.UGftP, this.lKsUl, this.eHPWe).dqh(this.LxPkh).dqi(this.slzIe).dqj(this.aHnxw).dqk(mG2).dqo(f).dqp(this.KfgfI).dqq(this.txGdU).dqr(this.tfPBr);
                iS[] iSArray = kd.bOg();
                try {
                    try {
                        kg2 = this;
                        if (iSArray == null) break block7;
                        if (kg2.aNPKC == null) break block8;
                    }
                    catch (MatchException matchException) {
                        throw kg.bPh(matchException);
                    }
                    jO$tZ.dql(this.aNPKC);
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
            }
            kg2 = this;
        }
        try {
            if (kg2.gEcsA != null) {
                jO$tZ.dqm(this.gEcsA);
            }
        }
        catch (MatchException matchException) {
            throw kg.bPh(matchException);
        }
        return jO$tZ;
    }

    public kg bOB(float f) {
        this.txGdU = f;
        return this;
    }

    public kg bOJ(boolean bl) {
        this.zCNEN = bl;
        return this;
    }

    public kg bOM(float f) {
        this.JxAXL = f;
        return this;
    }

    public kg bOD(float f) {
        this.KfgfI = f;
        return this;
    }

    public kg bOS(float f) {
        this.NKhaE = f;
        return this;
    }

    private static MatchException bPh(MatchException matchException) {
        return matchException;
    }

    public kg bOz(kf kf2) {
        kf kf3;
        block2: {
            block3: {
                long l = yDeom ^ 0x50A9AABCDD15L;
                iS[] iSArray = kd.bOg();
                try {
                    kg kg2 = this;
                    kf3 = kf2;
                    if (iSArray == null) break block2;
                    if (kf3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kg.bPh(matchException);
                }
                kf3 = kf.viqyh;
                break block2;
            }
            kf3 = kf2;
        }
        kg2.slzIe = kf3;
        return this;
    }

    public kg bOT(float f) {
        this.tkEVM = f;
        return this;
    }

    private jO bPd(float f) {
        return this.bPe(this.xIknw, f).dqn(this.AWfNt).dqs(this.QpnEL).dqt(this.ddWOd).dqu(this.JxAXL).dqv(this.vjsav).dqw(this.MRKmz).dqx(this.pRDcN).dqy(this.JVdZg).dqz();
    }
}
