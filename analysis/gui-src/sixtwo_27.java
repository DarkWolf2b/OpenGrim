/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Optional;
import java.util.function.Predicate;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aR;
import sixtwo.aj;
import sixtwo.ay;
import sixtwo.az;
import sixtwo.bd;
import sixtwo.f;
import sixtwo.f$rF;
import sixtwo.g$rG;
import sixtwo.gb;
import sixtwo.h;
import sixtwo.i;
import sixtwo.iS;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.mA;

public class g {
    private static g HbRlZ;
    private final az vSqxH = new g$rG(this).sS(true);
    private az HrPEm;
    private az XTXbB;
    private Runnable jywVM = () -> {};
    private static int[] itovx;
    private static final long uaqcq;
    private static final long GMDRM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        uaqcq = gb.aYR(-2937396542381063339L, -4243365711051065170L, MethodHandles.lookup().lookupClass()).a(83042438305568L);
        long l2 = uaqcq ^ 0x4FE7467EEADCL;
        g.bz(new int[5]);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 3746660340161907318L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                GMDRM = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public <T extends az> Optional<T> ba(Class<T> clazz) {
        List<T> list;
        block4: {
            List<T> list2;
            block5: {
                long l2 = uaqcq ^ 0x6A1DFE027C63L;
                list2 = this.aY(clazz);
                int[] nArray = g.bA();
                try {
                    try {
                        list = list2;
                        if (nArray == null) break block4;
                        if (!list.isEmpty()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    return Optional.empty();
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            list = list2.getFirst();
        }
        return Optional.of((az)((Object)list));
    }

    public <T extends az> void bb(Class<T> clazz) {
        long l2 = uaqcq ^ 0x742CB8213EL;
        Iterator<T> iterator = this.aY(clazz).iterator();
        int[] nArray = g.bA();
        while (iterator.hasNext()) {
            block14: {
                az az2;
                az az3;
                block13: {
                    boolean bl2;
                    az az4;
                    block11: {
                        block12: {
                            block9: {
                                block10: {
                                    az4 = (az)iterator.next();
                                    try {
                                        bl2 = az4 instanceof aj;
                                        if (nArray == null) break block9;
                                        if (!bl2) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                    az3 = (aj)az4;
                                    ((aj)az3).oj(false);
                                }
                                bl2 = az4 instanceof bd;
                            }
                            try {
                                if (nArray == null) break block11;
                                if (!bl2) break block12;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            az3 = (bd)az4;
                            ((bd)az3).Cg(false);
                        }
                        try {
                            az2 = az4;
                            if (nArray == null) break block13;
                            bl2 = az2 instanceof aR;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    if (!bl2) break block14;
                    az2 = az4;
                }
                az3 = (aR)az2;
                ((aR)az3).yg(false);
            }
            if (nArray != null) continue;
        }
    }

    private void be(f f2, az az2) {
        az az3;
        int n2;
        int[] nArray;
        List<az> list;
        block15: {
            boolean bl2;
            block16: {
                block14: {
                    long l2 = uaqcq ^ 0x4AEDE723469DL;
                    list = this.bg(az2);
                    int[] nArray2 = g.bA();
                    f2.aB(az2);
                    nArray = nArray2;
                    for (n2 = list.size() - 1; n2 >= 1; --n2) {
                        try {
                            try {
                                bl2 = f2.az();
                                if (nArray == null || nArray == null) break block14;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            if (bl2) break;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        az3 = list.get(n2);
                        f2.aA(i.YdJtr);
                        f2.aC(az3);
                        az3.sy(f2);
                        if (nArray != null) continue;
                    }
                    bl2 = f2.az();
                }
                try {
                    try {
                        if (nArray == null) break block15;
                        if (bl2) break block16;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    f2.aA(i.nKqnf);
                    f2.aC(az2);
                    az2.sz(f2);
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            bl2 = true;
        }
        for (n2 = (int)((v22341) ? 1 : 0); n2 < list.size(); ++n2) {
            Object object;
            block17: {
                try {
                    try {
                        object = f2;
                        if (nArray == null) break block17;
                        if (((f)object).az()) break;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    object = list.get(n2);
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            az3 = (az)object;
            f2.aA(i.pEktq);
            f2.aC(az3);
            az3.sA(f2);
            if (nArray != null) continue;
        }
    }

    private boolean bi(f f2, az az2) {
        boolean bl2;
        block18: {
            long l2 = uaqcq ^ 0x3BD9680DD743L;
            int[] nArray = g.bA();
            try {
                if (f2.ap() != f$rF.feLzE) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw g.bB(matchException);
            }
            List<az> list = this.bp();
            for (int i2 = list.size() - 1; i2 >= 0; --i2) {
                boolean bl3;
                block22: {
                    az az3;
                    block21: {
                        block19: {
                            block20: {
                                az3 = list.get(i2);
                                try {
                                    try {
                                        try {
                                            bl2 = this.bl(az3, az2);
                                            if (nArray == null) break block18;
                                            if (nArray == null) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw g.bB(matchException);
                                        }
                                        if (!bl2) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                            }
                            bl3 = az3.ty();
                        }
                        try {
                            try {
                                if (nArray == null) break block21;
                                if (bl3) continue;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            bl3 = az3.hc(f2.aq(), f2.ar());
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray == null) break block22;
                            if (!bl3) continue;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        az3.dk(f2.aq(), f2.ar(), f2.as());
                        f2.ao();
                        bl3 = true;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                return bl3;
            }
            bl2 = false;
        }
        return bl2;
    }

    public Runnable bv() {
        return this.jywVM;
    }

    private void bo(lC lC2) {
        long l2 = uaqcq ^ 0x449D8A903EB1L;
        Iterator<az> iterator = new ArrayList<az>(this.vSqxH.tv().cmj()).iterator();
        int[] nArray = g.bA();
        while (iterator.hasNext()) {
            boolean bl2;
            az az2;
            block6: {
                boolean bl3;
                block7: {
                    az2 = iterator.next();
                    bl3 = az2.oi();
                    try {
                        bl2 = az2 instanceof k;
                        if (nArray == null) break block6;
                        if (!bl2) break block7;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    k k2 = (k)az2;
                    bl3 = k2.bW(lC2);
                }
                bl2 = bl3;
            }
            try {
                if (bl2) {
                    this.aJ(az2);
                }
            }
            catch (MatchException matchException) {
                throw g.bB(matchException);
            }
            if (nArray != null) continue;
        }
    }

    private List<az> bp() {
        ArrayList<az> arrayList = new ArrayList<az>(this.vSqxH.tv().cmj());
        arrayList.sort(az.VjGAm);
        return arrayList;
    }

    public az bt() {
        return this.HrPEm;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private boolean bc(f f2) {
        long l2 = uaqcq ^ 0x52E55F3FF99EL;
        g g2 = HbRlZ;
        int[] nArray = g.bA();
        HbRlZ = this;
        try {
            az az2;
            az az3;
            block42: {
                block43: {
                    block49: {
                        block41: {
                            az az4;
                            block40: {
                                block37: {
                                    block38: {
                                        boolean bl2;
                                        block39: {
                                            block46: {
                                                block34: {
                                                    g g3;
                                                    block35: {
                                                        block36: {
                                                            block44: {
                                                                az az5;
                                                                block33: {
                                                                    g g4 = this;
                                                                    if (nArray != null) {
                                                                        block32: {
                                                                            try {
                                                                                if (g4.XTXbB == null) break block32;
                                                                                az5 = this.XTXbB;
                                                                                break block33;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw g.bB(matchException);
                                                                            }
                                                                        }
                                                                        g4 = this;
                                                                    }
                                                                    az5 = g4.aM(f2.aq(), f2.ar());
                                                                }
                                                                az3 = az5;
                                                                az4 = this.XTXbB;
                                                                if (nArray == null) break block34;
                                                                if (az4 != null) break block36;
                                                                break block44;
                                                                catch (MatchException matchException) {
                                                                    throw g.bB(matchException);
                                                                }
                                                            }
                                                            try {
                                                                block45: {
                                                                    g3 = this;
                                                                    if (nArray == null) break block35;
                                                                    break block45;
                                                                    catch (MatchException matchException) {
                                                                        throw g.bB(matchException);
                                                                    }
                                                                }
                                                                if (!g3.bi(f2, az3)) break block36;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw g.bB(matchException);
                                                            }
                                                            boolean bl3 = true;
                                                            return bl3;
                                                        }
                                                        g3 = this;
                                                    }
                                                    az4 = g3.XTXbB;
                                                }
                                                if (nArray == null) break block37;
                                                if (az4 != null) break block38;
                                                break block46;
                                                catch (MatchException matchException) {
                                                    throw g.bB(matchException);
                                                }
                                            }
                                            try {
                                                block47: {
                                                    bl2 = this.bj(f2, az3);
                                                    if (nArray == null) break block39;
                                                    break block47;
                                                    catch (MatchException matchException) {
                                                        throw g.bB(matchException);
                                                    }
                                                }
                                                if (!bl2) break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw g.bB(matchException);
                                            }
                                            bl2 = true;
                                        }
                                        boolean bl4 = bl2;
                                        return bl4;
                                    }
                                    az4 = az3;
                                }
                                if (nArray == null) break block40;
                                try {
                                    block48: {
                                        if (az4 != null) break block41;
                                        break block48;
                                        catch (MatchException matchException) {
                                            throw g.bB(matchException);
                                        }
                                    }
                                    az4 = this.bh(f2.aq(), f2.ar());
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                            }
                            az3 = az4;
                        }
                        if (f2.ap() != f$rF.CjcqV) break block43;
                        az2 = this.XTXbB;
                        if (nArray == null) break block42;
                        break block49;
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    try {
                        block50: {
                            if (az2 != null) break block43;
                            break block50;
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                        }
                        this.bn(az3);
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                az2 = az3;
            }
            if (az2 == null) {
                boolean bl5 = false;
                return bl5;
            }
            this.be(f2, az3);
            boolean bl6 = f2.az();
            return bl6;
        }
        finally {
            HbRlZ = g2;
        }
    }

    private <T extends az> void br(az az2, Class<T> clazz, List<T> list) {
        int[] nArray;
        block6: {
            az az3;
            Class<T> clazz2;
            block5: {
                long l2 = uaqcq ^ 0x3DF5E657B9C7L;
                nArray = g.bA();
                try {
                    try {
                        clazz2 = clazz;
                        az3 = az2;
                        if (nArray == null) break block5;
                        if (!clazz2.isInstance(az3)) break block6;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    clazz2 = clazz;
                    az3 = az2;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            az az4 = (az)clazz2.cast(az3);
            list.add(az4);
        }
        for (az az5 : az2.tv().cmj()) {
            this.br(az5, clazz, list);
            if (nArray != null) continue;
        }
    }

    private <T extends az> void bq(az az2, Class<T> clazz, Predicate<T> predicate, List<T> list) {
        az az3;
        int[] nArray;
        block11: {
            block10: {
                az az4;
                Class<T> clazz2;
                block9: {
                    long l2 = uaqcq ^ 0x16AE3FBE9F59L;
                    nArray = g.bA();
                    try {
                        try {
                            clazz2 = clazz;
                            az4 = az2;
                            if (nArray == null) break block9;
                            if (!clazz2.isInstance(az4)) break block10;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        clazz2 = clazz;
                        az4 = az2;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                az3 = (az)clazz2.cast(az4);
                if (nArray != null) {
                    az az5 = az3;
                    try {
                        if (predicate.test(az5)) {
                            list.add(az5);
                        }
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                break block11;
            }
            az3 = az2;
        }
        for (az az6 : az3.tv().cmj()) {
            this.bq(az6, clazz, predicate, list);
            if (nArray != null) continue;
        }
    }

    public az bs() {
        return this.vSqxH;
    }

    /*
     * Exception decompiling
     */
    private boolean bd(h var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [13[WHILELOOP]], but top level block is 6[TRYBLOCK]
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private az bh(double d2, double d3) {
        long l2 = uaqcq ^ 0x7F71B8998750L;
        List<az> list = this.bp();
        int[] nArray = g.bA();
        int n2 = list.size() - 1;
        while (n2 >= 0) {
            block9: {
                block10: {
                    az az2;
                    block11: {
                        az az3 = list.get(n2);
                        try {
                            try {
                                try {
                                    try {
                                        if (nArray == null) break block9;
                                        if (az3.ty()) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                    az2 = az3;
                                    if (nArray == null) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                                if (!az2.hc(d2, d3)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            az2 = az3;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    return az2;
                }
                --n2;
            }
            if (nArray != null) continue;
        }
        return null;
    }

    private List<az> bg(az az2) {
        ArrayList<az> arrayList;
        block2: {
            long l2 = uaqcq ^ 0x1B6431B03634L;
            ArrayList<az> arrayList2 = new ArrayList<az>();
            int[] nArray = g.bA();
            for (az az3 = az2; az3 != null; az3 = az3.tu()) {
                arrayList = arrayList2;
                if (nArray != null) {
                    arrayList.add(az3);
                    if (nArray != null) continue;
                }
                break block2;
            }
            arrayList = arrayList2;
        }
        return arrayList;
    }

    private void bf(h h2, az az2) {
        az az3;
        int n2;
        int[] nArray;
        List<az> list;
        block15: {
            boolean bl2;
            block16: {
                block14: {
                    long l2 = uaqcq ^ 0x6A4ABC0DD38L;
                    list = this.bg(az2);
                    nArray = g.bA();
                    h2.bP(az2);
                    for (n2 = list.size() - 1; n2 >= 1; --n2) {
                        try {
                            try {
                                bl2 = h2.bN();
                                if (nArray == null || nArray == null) break block14;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            if (bl2) break;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        az3 = list.get(n2);
                        h2.bO(i.YdJtr);
                        h2.bQ(az3);
                        az3.sB(h2);
                        if (nArray != null) continue;
                    }
                    bl2 = h2.bN();
                }
                try {
                    try {
                        if (nArray == null) break block15;
                        if (bl2) break block16;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    h2.bO(i.nKqnf);
                    h2.bQ(az2);
                    az2.sC(h2);
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            bl2 = true;
        }
        for (n2 = (int)((v24542) ? 1 : 0); n2 < list.size(); ++n2) {
            Object object;
            block17: {
                try {
                    try {
                        object = h2;
                        if (nArray == null) break block17;
                        if (((h)object).bN()) break;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    object = list.get(n2);
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            az3 = (az)object;
            h2.bO(i.pEktq);
            h2.bQ(az3);
            az3.sD(h2);
            if (nArray != null) continue;
        }
    }

    public az bu() {
        return this.XTXbB;
    }

    private void bn(az az2) {
        block17: {
            az az3;
            block16: {
                int[] nArray;
                block14: {
                    block15: {
                        block12: {
                            block13: {
                                long l2 = uaqcq ^ 0xFE5B756DBBBL;
                                nArray = g.bA();
                                try {
                                    try {
                                        az3 = this.HrPEm;
                                        if (nArray == null) break block12;
                                        if (az3 != az2) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                            }
                            az3 = this.HrPEm;
                        }
                        try {
                            try {
                                if (nArray == null) break block14;
                                if (az3 == null) break block15;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            this.HrPEm.sx();
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    az3 = this.HrPEm = az2;
                }
                try {
                    try {
                        if (nArray == null) break block16;
                        if (az3 == null) break block17;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    az3 = this.HrPEm;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            az3.sw();
        }
    }

    public static void bz(int[] nArray) {
        itovx = nArray;
    }

    private static MatchException bB(MatchException matchException) {
        return matchException;
    }

    private boolean bj(f f2, az az2) {
        boolean bl2;
        block20: {
            long l2 = uaqcq ^ 0x47407270024L;
            int[] nArray = g.bA();
            try {
                if (f2.ap() != f$rF.feLzE) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw g.bB(matchException);
            }
            List<aj> list = this.aY(aj.class);
            for (int i2 = list.size() - 1; i2 >= 0; --i2) {
                boolean bl3;
                block25: {
                    block23: {
                        aj aj2;
                        block24: {
                            block21: {
                                aj2 = list.get(i2);
                                try {
                                    block22: {
                                        try {
                                            try {
                                                try {
                                                    bl2 = this.bk(aj2);
                                                    if (nArray == null) break block20;
                                                    if (nArray == null) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw g.bB(matchException);
                                                }
                                                if (bl2) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw g.bB(matchException);
                                            }
                                            if (nArray != null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw g.bB(matchException);
                                        }
                                    }
                                    bl3 = this.bl(aj2, az2);
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                            }
                            try {
                                try {
                                    if (nArray == null) break block23;
                                    if (!bl3) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw g.bB(matchException);
                                }
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                        }
                        bl3 = aj2.dk(f2.aq(), f2.ar(), f2.as());
                    }
                    try {
                        try {
                            if (nArray == null) break block25;
                            if (!bl3) continue;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        f2.ao();
                        bl3 = true;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                return bl3;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static int[] bA() {
        return itovx;
    }

    private boolean bk(aj aj2) {
        int n2;
        block10: {
            block9: {
                int[] nArray;
                block8: {
                    long l2 = uaqcq ^ 0x4425B48A95EBL;
                    nArray = g.bA();
                    try {
                        try {
                            n2 = aj2.tz();
                            if (nArray == null) break block8;
                            if (n2 != 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        n2 = aj2.tt();
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                try {
                    try {
                        if (nArray == null) break block10;
                        if (n2 != (int)GMDRM) break block9;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    n2 = 1;
                    break block10;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    private void bm(double d2, double d3) {
        g g2;
        block4: {
            block5: {
                long l2 = uaqcq ^ 0x7FBF8AA2F4DAL;
                int[] nArray = g.bA();
                try {
                    try {
                        g2 = this;
                        if (nArray == null) break block4;
                        if (g2.XTXbB == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            g2 = this;
        }
        g2.bn(this.aM(d2, d3));
    }

    private boolean bl(az az2, az az3) {
        long l2 = uaqcq ^ 0x32EE0BC710A1L;
        az az4 = az3;
        int[] nArray = g.bA();
        while (az4 != null) {
            block5: {
                az az5;
                block6: {
                    try {
                        try {
                            az5 = az4;
                            if (nArray == null) break block5;
                            if (az5 != az2) break block6;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                az5 = az4 = az4.tu();
            }
            if (nArray != null) continue;
        }
        return false;
    }

    public <T extends az> List<T> aY(Class<T> clazz) {
        ArrayList<az> arrayList = new ArrayList<az>();
        this.br(this.vSqxH, clazz, arrayList);
        arrayList.sort(az.VjGAm);
        return arrayList;
    }

    public <T extends az> Optional<T> aZ(Class<T> clazz, Predicate<T> predicate) {
        long l2 = uaqcq ^ 0x633BB68A7C72L;
        List<T> list = this.aY(clazz);
        int n2 = list.size() - 1;
        int[] nArray = g.bA();
        while (n2 >= 0) {
            block5: {
                block6: {
                    az az2 = (az)list.get(n2);
                    try {
                        try {
                            if (nArray == null) break block5;
                            if (!predicate.test(az2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        return Optional.of(az2);
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                }
                --n2;
            }
            if (nArray != null) continue;
        }
        return Optional.empty();
    }

    public <T extends az> T aX(Class<T> clazz, Supplier<T> supplier) {
        Optional<az> optional;
        block4: {
            block5: {
                long l2 = uaqcq ^ 0x4002A9F134FCL;
                Optional<az> optional2 = this.aZ(clazz, az2 -> true);
                int[] nArray = g.bA();
                try {
                    try {
                        optional = optional2;
                        if (nArray == null) break block4;
                        if (!optional.isPresent()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    return (T)this.aF(optional2.get());
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            optional = supplier.get();
        }
        az az3 = (az)((Object)optional);
        return (T)this.aF(az3);
    }

    public static g aD() {
        return HbRlZ;
    }

    public void aU(az az2) {
        long l2 = uaqcq ^ 0x693572EB991AL;
        try {
            if (az2 != null) {
                this.XTXbB = az2;
            }
        }
        catch (MatchException matchException) {
            throw g.bB(matchException);
        }
    }

    public void aW(az az2) {
        block5: {
            block4: {
                long l2 = uaqcq ^ 0x540F070BD280L;
                int[] nArray = g.bA();
                try {
                    g g2;
                    try {
                        g2 = this;
                        if (nArray == null) break block4;
                        if (g2.XTXbB != az2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    g2 = this;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            g2.XTXbB = null;
        }
    }

    public <T extends az> T aF(T t) {
        return this.aG(t, this.aI());
    }

    public boolean aO(double d2, double d3, mA mA2) {
        boolean bl2;
        long l2 = uaqcq ^ 0x7DAD1A8F0520L;
        boolean bl3 = this.bc(f.ak(d2, d3, mA2));
        int[] nArray = g.bA();
        try {
            this.XTXbB = null;
            this.bm(d2, d3);
            bl2 = bl3;
            if (iS.bwL() == null) {
                g.bz(new int[2]);
            }
        }
        catch (MatchException matchException) {
            throw g.bB(matchException);
        }
        return bl2;
    }

    public g aV(Runnable runnable) {
        Runnable runnable2;
        block2: {
            block3: {
                long l2 = uaqcq ^ 0x79CCCCBC76AL;
                int[] nArray = g.bA();
                try {
                    g g2 = this;
                    runnable2 = runnable;
                    if (nArray == null) break block2;
                    if (runnable2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
                runnable2 = () -> {};
                break block2;
            }
            runnable2 = runnable;
        }
        g2.jywVM = runnable2;
        return this;
    }

    public <T extends az> T aE(T t) {
        return this.aG(t, this.aH());
    }

    public boolean aN(double d2, double d3, mA mA2) {
        return this.bc(f.aj(d2, d3, mA2));
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    public void aL(lC lC2) {
        block33: {
            long l2 = uaqcq ^ 0x79B103510FC1L;
            g g2 = HbRlZ;
            HbRlZ = this;
            int[] nArray = g.bA();
            try {
                Object object;
                block32: {
                    az az2;
                    block31: {
                        block30: {
                            az az3;
                            block29: {
                                az az4;
                                block27: {
                                    block28: {
                                        this.bo(lC2);
                                        this.bm(lC2.cff(), lC2.cfg());
                                        az4 = this.HrPEm;
                                        if (nArray == null) break block27;
                                        try {
                                            block37: {
                                                if (az4 != null) break block28;
                                                break block37;
                                                catch (MatchException matchException) {
                                                    throw g.bB(matchException);
                                                }
                                            }
                                            az3 = null;
                                            break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw g.bB(matchException);
                                        }
                                    }
                                    az4 = this.HrPEm;
                                }
                                az3 = az4.sM();
                            }
                            az2 = az3;
                            object = az2;
                            if (nArray == null) break block30;
                            try {
                                block38: {
                                    if (object != null) break block31;
                                    break block38;
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                }
                                object = this.HrPEm;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                        }
                        try {
                            if (nArray == null) break block32;
                            if (object == null) break block31;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        object = ay.eGcjO;
                        break block32;
                    }
                    object = az2;
                }
                ay.so(object);
                try {
                    int n2 = 0;
                    for (az az5 : this.bp()) {
                        block34: {
                            block35: {
                                int n3;
                                block36: {
                                    int n4;
                                    block41: {
                                        block40: {
                                            block39: {
                                                n4 = az5.sN();
                                                if (nArray == null) break block33;
                                                if (nArray == null) break block34;
                                                break block39;
                                                catch (MatchException matchException) {
                                                    throw g.bB(matchException);
                                                }
                                            }
                                            if (n4 <= 0) break block35;
                                            break block40;
                                            catch (MatchException matchException) {
                                                throw g.bB(matchException);
                                            }
                                        }
                                        n3 = n4;
                                        if (nArray == null) break block36;
                                        break block41;
                                        catch (MatchException matchException) {
                                            throw g.bB(matchException);
                                        }
                                    }
                                    try {
                                        block42: {
                                            if (n3 == n2) break block35;
                                            break block42;
                                            catch (MatchException matchException) {
                                                throw g.bB(matchException);
                                            }
                                        }
                                        this.jywVM.run();
                                        n3 = n4;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                }
                                n2 = n3;
                            }
                            az5.su(lC2);
                        }
                        if (nArray != null) continue;
                        iS.bwK("OrCL5");
                        break;
                    }
                }
                finally {
                    ay.sp();
                }
            }
            finally {
                HbRlZ = g2;
            }
        }
    }

    public boolean aQ(double d2, double d3, double d4) {
        return this.bc(f.am(d2, d3, d4));
    }

    public boolean aT(char c2) {
        return this.bd(h.bD(c2));
    }

    public boolean aP(double d2, double d3, mA mA2, double d4, double d5) {
        return this.bc(f.al(d2, d3, mA2, d4, d5));
    }

    public boolean aS(int n2, int n3, int n4) {
        return this.bd(h.bC(n2, n3, n4));
    }

    public int aH() {
        int n2;
        block2: {
            long l2 = uaqcq ^ 0x2DEDFB543A5BL;
            int n3 = 0;
            int[] nArray = g.bA();
            for (az az2 : this.vSqxH.tv().cmj()) {
                n2 = Math.max(n3, az2.sN());
                if (nArray != null) {
                    n3 = n2;
                    if (nArray != null) continue;
                }
                break block2;
            }
            n2 = n3;
        }
        return n2;
    }

    public <T extends az> T aG(T t, int n2) {
        T t2;
        block4: {
            block5: {
                long l2 = uaqcq ^ 0x133BCED9745FL;
                int[] nArray = g.bA();
                try {
                    try {
                        t2 = t;
                        if (nArray == null) break block4;
                        if (t2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            t.sO(n2);
            this.vSqxH.sI(t);
            t2 = t;
        }
        return t2;
    }

    public int aI() {
        return this.aH() + 1;
    }

    public void aJ(az az2) {
        this.vSqxH.sJ(az2);
    }

    public void aK() {
        this.vSqxH.sK();
        this.HrPEm = null;
        this.XTXbB = null;
    }

    public az aM(double d2, double d3) {
        return this.vSqxH.sF(d2, d3);
    }

    public boolean aR(double d2, double d3) {
        return this.bc(f.an(d2, d3));
    }
}

