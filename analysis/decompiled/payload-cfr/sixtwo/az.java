/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_241
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Iterator;
import net.minecraft.class_241;
import sixtwo.ay;
import sixtwo.f;
import sixtwo.g;
import sixtwo.gb;
import sixtwo.h;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jG;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mA;
import sixtwo.mu;
import sixtwo.rD;

public abstract class az
extends iS {
    private static long kRxcV;
    public static final Comparator<az> VjGAm;
    protected ii CtPwV;
    protected float MCnYt;
    protected float pNyTQ;
    protected float BcpIo;
    protected float WjISQ;
    protected int mXtVF;
    protected int eWYPl;
    protected az DjJTP;
    protected final mu<az> gJoaC;
    protected boolean tSjBL;
    protected boolean oTiGT;
    protected boolean VtZUv;
    protected boolean PGAcs;
    private final long tnbQU;
    private static String mqOlJ;
    private static final long smakX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected az(float f2, float f3, float f4, float f5) {
        long l = smakX ^ 0x2BB3E7DA6528L;
        this.CtPwV = rD.dlM();
        this.gJoaC = new mu();
        this.tSjBL = true;
        this.tnbQU = kRxcV++;
        String string = az.tE();
        try {
            this.MCnYt = f2;
            this.pNyTQ = f3;
            this.BcpIo = f4;
            this.WjISQ = f5;
            if (iS.bwL() == null) {
                az.tD("hV0mUc");
            }
        }
        catch (MatchException matchException) {
            throw az.tF(matchException);
        }
    }

    protected az() {
        this(0.0f, 0.0f, 0.0f, 0.0f);
    }

    static {
        smakX = gb.aYR(-7198668780647983144L, 6866809431512737463L, MethodHandles.lookup().lookupClass()).a(139834532818023L);
        VjGAm = Comparator.comparingInt(az2 -> az2.sN()).thenComparingInt(az::tt).thenComparingLong(az::tA);
        az.tD("lj13Ec");
    }

    public mu<az> tv() {
        return this.gJoaC;
    }

    public boolean ta(lc lc2) {
        return jf.bAW(lc2, this);
    }

    public az to(float f2) {
        this.WjISQ = f2;
        return this;
    }

    public float tb() {
        return this.pNyTQ + this.WjISQ;
    }

    public boolean tg(double d, double d2) {
        boolean bl;
        block8: {
            block7: {
                String string;
                block6: {
                    long l = smakX ^ 0x2ED5E1BA9913L;
                    string = az.tE();
                    try {
                        try {
                            bl = ay.sr();
                            if (string == null) break block6;
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        bl = jf.bAE(d, d2, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block8;
                    if (!bl) break block7;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                bl = true;
                break block8;
            }
            bl = false;
        }
        return bl;
    }

    public float dn() {
        return this.WjISQ;
    }

    public boolean th(double d, double d2, double d3, double d4, double d5, double d6) {
        boolean bl;
        block8: {
            block7: {
                String string;
                block6: {
                    long l = smakX ^ 0x4DF58CFBC3FDL;
                    string = az.tE();
                    try {
                        try {
                            bl = ay.sr();
                            if (string == null) break block6;
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        bl = jf.bAE(d, d2, d3, d4, d5, d6);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block8;
                    if (!bl) break block7;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                bl = true;
                break block8;
            }
            bl = false;
        }
        return bl;
    }

    public float tc() {
        return this.MCnYt + this.BcpIo;
    }

    public void sw() {
    }

    public boolean hc(double d, double d2) {
        return this.PGAcs;
    }

    public float ts() {
        return this.pNyTQ;
    }

    public az tl(float f2) {
        this.MCnYt = f2;
        return this;
    }

    public float tr() {
        return this.MCnYt;
    }

    public az tp(az az2) {
        this.DjJTP = az2;
        return this;
    }

    public az tn(float f2) {
        this.BcpIo = f2;
        return this;
    }

    /*
     * Exception decompiling
     */
    public void sz(f var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 8[SWITCH]
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

    public void dl(double d, double d2, mA mA2) {
    }

    public boolean ti(lC lC2) {
        boolean bl;
        block13: {
            block11: {
                String string;
                block12: {
                    block10: {
                        long l = smakX ^ 0x11AA75349030L;
                        string = az.tE();
                        try {
                            try {
                                bl = ay.sr();
                                if (string == null) break block10;
                                if (!bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                            bl = jG.bHZ(lC2);
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                    }
                    try {
                        try {
                            if (string == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        bl = jf.bAG(lC2, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block13;
                    if (!bl) break block11;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    public az tm(float f2) {
        this.pNyTQ = f2;
        return this;
    }

    public int tt() {
        return this.eWYPl;
    }

    public void sx() {
    }

    public boolean tz() {
        return this.PGAcs;
    }

    public boolean dm(int n, int n2, int n3) {
        return false;
    }

    public boolean dk(double d, double d2, mA mA2) {
        return false;
    }

    public az tk(ii ii2) {
        this.CtPwV = ii2;
        return this;
    }

    private void sv(lC lC2) {
        this.fX(lC2);
        this.bV(lC2);
    }

    public boolean tf() {
        int n;
        block18: {
            block15: {
                String string;
                block17: {
                    block16: {
                        block14: {
                            long l = smakX ^ 0xEFCABA86653L;
                            string = az.tE();
                            try {
                                try {
                                    n = Float.isFinite(this.BcpIo);
                                    if (string == null) break block14;
                                    if (n == 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw az.tF(matchException);
                                }
                                n = Float.isFinite(this.WjISQ);
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                        }
                        try {
                            try {
                                if (string == null) break block16;
                                if (n == 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                            float f2 = this.BcpIo - 0.0f;
                            n = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                    }
                    try {
                        try {
                            if (string == null) break block17;
                            if (n <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        float f3 = this.WjISQ - 0.0f;
                        n = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block18;
                    if (n <= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                n = 1;
                break block18;
            }
            n = 0;
        }
        return n != 0;
    }

    protected abstract void bV(lC var1);

    public boolean fC(double d, double d2, double d3) {
        return false;
    }

    public lc td() {
        return new lc(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
    }

    public boolean tw() {
        return this.tSjBL;
    }

    public class_241 te() {
        return new class_241(this.BcpIo, this.WjISQ);
    }

    public void sy(f f2) {
    }

    public boolean ty() {
        return this.VtZUv;
    }

    public boolean tx() {
        return this.oTiGT;
    }

    public void dY() {
    }

    public boolean dB(double d, double d2, mA mA2, double d3, double d4) {
        return false;
    }

    public void fX(lC lC2) {
    }

    public boolean eK(char c) {
        return false;
    }

    public void sB(h h2) {
    }

    public boolean tj(lC lC2, double d, double d2, double d3, double d4) {
        boolean bl;
        block13: {
            block11: {
                String string;
                block12: {
                    block10: {
                        long l = smakX ^ 0x73B9FAC30D10L;
                        string = az.tE();
                        try {
                            try {
                                bl = ay.sr();
                                if (string == null) break block10;
                                if (!bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                            bl = jG.bHZ(lC2);
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                    }
                    try {
                        try {
                            if (string == null) break block12;
                            if (!bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        bl = jf.bAG(lC2, d, d2, d3, d4);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block13;
                    if (!bl) break block11;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                bl = true;
                break block13;
            }
            bl = false;
        }
        return bl;
    }

    private lc sH(lc lc2, lc lc3) {
        float f2 = Math.max(lc2.bXF(), lc3.bXF());
        float f3 = Math.max(lc2.bXG(), lc3.bXG());
        float f4 = Math.min(lc2.bXz(), lc3.bXz());
        float f5 = Math.min(lc2.bXA(), lc3.bXA());
        return new lc(f2, f3, Math.max(0.0f, f4 - f2), Math.max(0.0f, f5 - f3));
    }

    public az sS(boolean bl) {
        this.VtZUv = bl;
        return this;
    }

    public az sM() {
        long l = smakX ^ 0x689B64A5C2DFL;
        az az2 = this;
        String string = az.tE();
        while (az2 != null) {
            block5: {
                az az3;
                block6: {
                    try {
                        try {
                            az3 = az2;
                            if (string == null) break block5;
                            if (!az3.nZ()) break block6;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        return az2;
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                az3 = az2 = az2.DjJTP;
            }
            if (string != null) continue;
        }
        return null;
    }

    public ii tq() {
        return this.CtPwV;
    }

    public static void tD(String string) {
        mqOlJ = string;
    }

    public boolean sE(double d, double d2) {
        boolean bl;
        block18: {
            block15: {
                String string;
                block17: {
                    block16: {
                        block14: {
                            long l = smakX ^ 0x4FBB3A4E0FB1L;
                            string = az.tE();
                            try {
                                try {
                                    bl = this.tSjBL;
                                    if (string == null) break block14;
                                    if (!bl) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw az.tF(matchException);
                                }
                                bl = this.VtZUv;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                        }
                        try {
                            try {
                                if (string == null) break block16;
                                if (bl) break block15;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                            bl = this.tf();
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                    }
                    try {
                        try {
                            if (string == null) break block17;
                            if (!bl) break block15;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                        bl = jf.bAE(d, d2, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                }
                try {
                    if (string == null) break block18;
                    if (!bl) break block15;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                bl = true;
                break block18;
            }
            bl = false;
        }
        return bl;
    }

    public int sN() {
        return this.mXtVF;
    }

    public az sP(int n) {
        this.eWYPl = n;
        return this;
    }

    public az tu() {
        return this.DjJTP;
    }

    public long tA() {
        return this.tnbQU;
    }

    public float kN() {
        return this.BcpIo;
    }

    public void sA(f f2) {
    }

    /*
     * Exception decompiling
     */
    public void sC(h var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 5[SWITCH]
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

    public az sR(boolean bl) {
        this.oTiGT = bl;
        return this;
    }

    protected az sG(double d, double d2, lc lc2) {
        az az2;
        block47: {
            block48: {
                String string;
                block44: {
                    lc lc3;
                    block39: {
                        az az3;
                        block43: {
                            boolean bl;
                            block42: {
                                lc lc4;
                                block40: {
                                    block41: {
                                        boolean bl2;
                                        block38: {
                                            lc lc5;
                                            block36: {
                                                block37: {
                                                    long l = smakX ^ 0x5A85FBE4BDB8L;
                                                    string = az.tE();
                                                    try {
                                                        if (!this.tSjBL) {
                                                            return null;
                                                        }
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw az.tF(matchException);
                                                    }
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    lc5 = lc2;
                                                                    if (string == null) break block36;
                                                                    if (lc5 == null) break block37;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw az.tF(matchException);
                                                                }
                                                                lc5 = lc2;
                                                                if (string == null) break block36;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw az.tF(matchException);
                                                            }
                                                            if (lc5.bXD(d, d2)) break block37;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw az.tF(matchException);
                                                        }
                                                        return null;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw az.tF(matchException);
                                                    }
                                                }
                                                lc5 = lc2;
                                            }
                                            lc3 = lc5;
                                            try {
                                                try {
                                                    bl2 = this.oTiGT;
                                                    if (string == null) break block38;
                                                    if (!bl2) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw az.tF(matchException);
                                                }
                                                bl2 = this.tf();
                                            }
                                            catch (MatchException matchException) {
                                                throw az.tF(matchException);
                                            }
                                        }
                                        try {
                                            try {
                                                try {
                                                    if (!bl2) break block39;
                                                    lc4 = lc3;
                                                    if (string == null) break block40;
                                                }
                                                catch (MatchException matchException) {
                                                    throw az.tF(matchException);
                                                }
                                                if (lc4 != null) break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw az.tF(matchException);
                                            }
                                            lc4 = this.td();
                                            break block40;
                                        }
                                        catch (MatchException matchException) {
                                            throw az.tF(matchException);
                                        }
                                    }
                                    lc4 = this.sH(lc3, this.td());
                                }
                                lc3 = lc4;
                                try {
                                    try {
                                        try {
                                            bl = lc3.bXD(d, d2);
                                            if (string == null) break block42;
                                            if (bl) break block39;
                                        }
                                        catch (MatchException matchException) {
                                            throw az.tF(matchException);
                                        }
                                        az3 = this;
                                        if (string == null) break block43;
                                    }
                                    catch (MatchException matchException) {
                                        throw az.tF(matchException);
                                    }
                                    bl = az3.sE(d, d2);
                                }
                                catch (MatchException matchException) {
                                    throw az.tF(matchException);
                                }
                            }
                            az3 = bl ? this : null;
                        }
                        return az3;
                    }
                    ArrayList<az> arrayList = new ArrayList<az>(this.gJoaC.cmj());
                    arrayList.sort(VjGAm.reversed());
                    for (az az4 : arrayList) {
                        block46: {
                            az az5;
                            block45: {
                                az az6 = az4.sG(d, d2, lc3);
                                try {
                                    try {
                                        az2 = az6;
                                        if (string == null) break block44;
                                        if (string == null) break block45;
                                    }
                                    catch (MatchException matchException) {
                                        throw az.tF(matchException);
                                    }
                                    if (az2 == null) break block46;
                                }
                                catch (MatchException matchException) {
                                    throw az.tF(matchException);
                                }
                                az5 = az6;
                            }
                            return az5;
                        }
                        if (string != null) continue;
                    }
                    az2 = this;
                }
                try {
                    try {
                        if (string == null) break block47;
                        if (!az2.sE(d, d2)) break block48;
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                    az2 = this;
                    break block47;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
            }
            az2 = null;
        }
        return az2;
    }

    public boolean oi() {
        return false;
    }

    public az sL() {
        az az2;
        block2: {
            long l = smakX ^ 0x6502A3E6CAAFL;
            az az3 = this;
            String string = az.tE();
            while (az3.DjJTP != null) {
                az2 = az3.DjJTP;
                if (string != null) {
                    az3 = az2;
                    if (string != null) continue;
                }
                break block2;
            }
            az2 = az3;
        }
        return az2;
    }

    public az sT(boolean bl) {
        this.PGAcs = bl;
        return this;
    }

    public static String tE() {
        return mqOlJ;
    }

    public void sD(h h2) {
    }

    public void sU() {
        block3: {
            g g2;
            block2: {
                long l = smakX ^ 0x710241FD0F09L;
                g g3 = g.aD();
                String string = az.tE();
                try {
                    g2 = g3;
                    if (string == null) break block2;
                    if (g2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                g2 = g3;
            }
            g2.aU(this);
        }
    }

    public az sI(az az2) {
        az az3;
        block20: {
            block21: {
                String string;
                block18: {
                    block19: {
                        az az4;
                        block16: {
                            long l = smakX ^ 0x732442AC1E9L;
                            string = az.tE();
                            try {
                                block17: {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        az4 = az2;
                                                        if (string == null) break block16;
                                                        if (az4 == null) break block17;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw az.tF(matchException);
                                                    }
                                                    az4 = az2;
                                                    if (string == null) break block16;
                                                }
                                                catch (MatchException matchException) {
                                                    throw az.tF(matchException);
                                                }
                                                if (az4 == this) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw az.tF(matchException);
                                            }
                                            az3 = this;
                                            if (string == null) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw az.tF(matchException);
                                        }
                                        if (!az3.gJoaC.contains(az2)) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw az.tF(matchException);
                                    }
                                }
                                az4 = this;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                        }
                        return az4;
                    }
                    az3 = az2.DjJTP;
                }
                try {
                    try {
                        if (string == null) break block20;
                        if (az3 == null) break block21;
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                    az2.DjJTP.gJoaC.remove(az2);
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
            }
            az2.DjJTP = this;
            this.gJoaC.add(az2);
            az3 = this;
        }
        return az3;
    }

    public void sV() {
        block3: {
            g g2;
            block2: {
                long l = smakX ^ 0x5E4C8A5034BAL;
                g g3 = g.aD();
                String string = az.tE();
                try {
                    g2 = g3;
                    if (string == null) break block2;
                    if (g2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
                g2 = g3;
            }
            g2.aW(this);
        }
    }

    public az sJ(az az2) {
        az az3;
        block10: {
            block11: {
                String string;
                block8: {
                    block9: {
                        long l = smakX ^ 0x495D129D4B3AL;
                        string = az.tE();
                        try {
                            try {
                                az3 = az2;
                                if (string == null) break block8;
                                if (az3 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw az.tF(matchException);
                            }
                            return this;
                        }
                        catch (MatchException matchException) {
                            throw az.tF(matchException);
                        }
                    }
                    az3 = this;
                }
                try {
                    try {
                        if (string == null) break block10;
                        if (!az3.gJoaC.remove(az2)) break block11;
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                    az2.DjJTP = null;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
            }
            az3 = this;
        }
        return az3;
    }

    public az sY(float f2, float f3, float f4, float f5) {
        this.MCnYt = f2;
        this.pNyTQ = f3;
        this.BcpIo = f4;
        this.WjISQ = f5;
        return this;
    }

    public void su(lC lC2) {
        az az2;
        block4: {
            block5: {
                long l = smakX ^ 0xFF01DA78A9BL;
                String string = az.tE();
                try {
                    try {
                        az2 = this;
                        if (string == null) break block4;
                        if (!az2.nZ()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw az.tF(matchException);
                    }
                    ay.sq(this, () -> this.sv(lC2));
                    return;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
            }
            az2 = this;
        }
        az2.sv(lC2);
    }

    public az sZ(lc lc2) {
        this.MCnYt = lc2.bXF();
        this.pNyTQ = lc2.bXG();
        this.BcpIo = lc2.bXH();
        this.WjISQ = lc2.bXI();
        return this;
    }

    public az sF(double d, double d2) {
        return this.sG(d, d2, null);
    }

    public az sK() {
        block4: {
            long l = smakX ^ 0x6D60CA1CAA8CL;
            Iterator<az> iterator = this.gJoaC.cmj().iterator();
            String string = az.tE();
            while (iterator.hasNext()) {
                az az2 = iterator.next();
                try {
                    az2.DjJTP = null;
                    if (string != null) {
                        if (string != null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw az.tF(matchException);
                }
            }
            this.gJoaC.clear();
        }
        return this;
    }

    public az sO(int n) {
        this.mXtVF = Math.max(0, n);
        return this;
    }

    public az sQ(boolean bl) {
        this.tSjBL = bl;
        return this;
    }

    protected boolean nZ() {
        return false;
    }

    public az sW(float f2, float f3) {
        this.MCnYt = f2;
        this.pNyTQ = f3;
        return this;
    }

    public az sX(float f2, float f3) {
        this.BcpIo = f2;
        this.WjISQ = f3;
        return this;
    }

    private static MatchException tF(MatchException matchException) {
        return matchException;
    }
}
