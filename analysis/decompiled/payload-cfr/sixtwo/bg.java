/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aC;
import sixtwo.aE;
import sixtwo.aw;
import sixtwo.az;
import sixtwo.bd;
import sixtwo.bh;
import sixtwo.bl;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.jF;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class bg
extends az {
    private final rk yScCM;
    private final rk CUqhT;
    private final rk Mgsdz;
    private final rk fSVRe;
    private final rk DAnVX;
    private final ri UjiHh;
    private final gg leLdq;
    private bh MPosk;
    private boolean OfuUM;
    private boolean wAIFj;
    private static int BIqnm;
    private static final long CEakp;
    private static final long[] tfkIz;
    private static final Integer[] figLz;
    private static final Map aaqZK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bg(gg gg2) {
        long l = CEakp ^ 0x7ECF36AE8632L;
        this.yScCM = new rk((int)bg.Di("b", (int)10421, (long)(0x4F4B818F43028D54L ^ l))).dhs(rj.UPXqT);
        this.CUqhT = new rk((int)bg.Di("b", (int)27352, (long)(0x1954B17DF5B5CF3AL ^ l))).dhs(rj.UPXqT);
        this.Mgsdz = new rk((int)bg.Di("b", (int)27352, (long)(0x1954B17DF5B5CF3AL ^ l))).dhs(rj.UPXqT);
        this.fSVRe = new rk((int)bg.Di("b", (int)12257, (long)(0x37718A3A4CFF8A01L ^ l))).dhs(rj.UPXqT);
        this.DAnVX = new rk((int)bg.Di("b", (int)29257, (long)(0x71DF45F5814F57AAL ^ l))).dhs(rj.UPXqT);
        this.UjiHh = new ri((int)bg.Di("b", (int)23869, (long)(0x2710EB64C97A78DAL ^ l)), mG.hoGuU);
        this.leLdq = gg2;
        this.BcpIo = 175.0f;
        this.WjISQ = 28.0f;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bg.CEakp = gb.aYR(1510145277589715049L, -9149368666420411358L, MethodHandles.lookup().lookupClass()).a(12342236566515L);
                bg.aaqZK = new HashMap<K, V>(13);
                var0 = bg.CEakp ^ 90933238133144L;
                bg.Dc(0);
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[5];
                var5_4 = 0;
                var6_5 = "\u008f5\u0095\u00a6;P\u00fcr;\u00a5`\u00b2\u00b6\u00a0\u00f0\u009a\u00e2r8H\u009b\u00ac\u00af\u0092";
                var7_6 = "\u008f5\u0095\u00a6;P\u00fcr;\u00a5`\u00b2\u00b6\u00a0\u00f0\u009a\u00e2r8H\u009b\u00ac\u00af\u0092".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u00f9\u00f3XT\u0011e\u0012i\u00ef\u008a\u008a\u0001@\u0089!\u00ee";
                    var7_6 = "\u00f9\u00f3XT\u0011e\u0012i\u00ef\u008a\u008a\u0001@\u0089!\u00ee".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl53:
                // 1 sources

                ** continue;
            }
        }
        bg.tfkIz = var8_3;
        bg.figLz = new Integer[5];
    }

    public rk CR() {
        return this.yScCM;
    }

    private boolean CN(bg bg2) {
        return bl.Ex().manager().aY(bd.class).stream().anyMatch(bd2 -> {
            boolean bl;
            long l = CEakp ^ 0x163652EB9610L;
            try {
                bl = bd2.BS() == bg2;
            }
            catch (MatchException matchException) {
                throw bg.Df(matchException);
            }
            return bl;
        });
    }

    /*
     * Exception decompiling
     */
    @Override
    public boolean dk(double var1_1, double var3_2, mA var5_3) {
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

    @Override
    protected void bV(lC lC2) {
        bg bg2;
        float f2;
        float f3;
        block52: {
            float f4;
            mG mG2;
            block50: {
                int n;
                block51: {
                    block48: {
                        float f5;
                        block49: {
                            float f6;
                            rk rk2;
                            block47: {
                                block45: {
                                    block46: {
                                        boolean bl2;
                                        block44: {
                                            mG mG3;
                                            ri ri2;
                                            block41: {
                                                bg bg3;
                                                block42: {
                                                    block43: {
                                                        boolean bl3;
                                                        block39: {
                                                            block40: {
                                                                boolean bl4;
                                                                rk rk3;
                                                                block37: {
                                                                    block38: {
                                                                        block35: {
                                                                            boolean bl5;
                                                                            block36: {
                                                                                long l = CEakp ^ 0x5C1B2F3981DFL;
                                                                                int n2 = bg.Dd();
                                                                                this.Mgsdz.dhs(rj.JbGQS);
                                                                                this.Mgsdz.dhc(this.leLdq.bag());
                                                                                n = n2;
                                                                                bl5 = this.ti(lC2);
                                                                                try {
                                                                                    if (n != 0) break block35;
                                                                                    if (!bl5) break block36;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw bg.Df(matchException);
                                                                                }
                                                                                aC aC2 = aE.vA(aC.class);
                                                                                try {
                                                                                    try {
                                                                                        if (n != 0) break block35;
                                                                                        if (aC2 == null) break block36;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw bg.Df(matchException);
                                                                                    }
                                                                                    aC2.ul(this);
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw bg.Df(matchException);
                                                                                }
                                                                            }
                                                                            this.CUqhT.dhc(bl5);
                                                                            this.DAnVX.dhc(this.OfuUM);
                                                                        }
                                                                        try {
                                                                            rk3 = this.yScCM;
                                                                            bl4 = this.CN(this);
                                                                            if (n != 0) break block37;
                                                                            if (bl4) break block38;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw bg.Df(matchException);
                                                                        }
                                                                        bl4 = true;
                                                                        break block37;
                                                                    }
                                                                    bl4 = false;
                                                                }
                                                                rk3.dhc(bl4);
                                                                f3 = 7.0f;
                                                                f2 = Math.min(1.0f, this.yScCM.dhj());
                                                                mG2 = this.CtPwV.bje().coa(204.0f).cob(f2);
                                                                try {
                                                                    try {
                                                                        ri2 = this.UjiHh;
                                                                        bl3 = this.OfuUM;
                                                                        if (n != 0) break block39;
                                                                        if (!bl3) break block40;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw bg.Df(matchException);
                                                                    }
                                                                    mG3 = jk.mPXGi;
                                                                    break block41;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw bg.Df(matchException);
                                                                }
                                                            }
                                                            try {
                                                                bg3 = this;
                                                                if (n != 0) break block42;
                                                                bl3 = bg3.leLdq.bag();
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bg.Df(matchException);
                                                            }
                                                        }
                                                        try {
                                                            if (!bl3) break block43;
                                                            mG3 = this.CtPwV.bjf();
                                                            break block41;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bg.Df(matchException);
                                                        }
                                                    }
                                                    bg3 = this;
                                                }
                                                mG3 = bg3.CtPwV.bjb();
                                            }
                                            try {
                                                try {
                                                    ri2.dfT(mG3);
                                                    rk2 = this.fSVRe;
                                                    bl2 = this.OfuUM;
                                                    if (n != 0) break block44;
                                                    if (!bl2) break block45;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bg.Df(matchException);
                                                }
                                                bl2 = this.wAIFj;
                                            }
                                            catch (MatchException matchException) {
                                                throw bg.Df(matchException);
                                            }
                                        }
                                        try {
                                            if (!bl2) break block46;
                                            f6 = 1.0f;
                                            break block47;
                                        }
                                        catch (MatchException matchException) {
                                            throw bg.Df(matchException);
                                        }
                                    }
                                    f6 = -1.0f;
                                    break block47;
                                }
                                f6 = 0.0f;
                            }
                            try {
                                try {
                                    rk2.dhd(f6);
                                    float f7 = this.DAnVX.dhj() - 1.0f;
                                    f4 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
                                    if (n != 0) break block48;
                                    if (f4 != false) break block49;
                                }
                                catch (MatchException matchException) {
                                    throw bg.Df(matchException);
                                }
                                this.OfuUM = false;
                            }
                            catch (MatchException matchException) {
                                throw bg.Df(matchException);
                            }
                        }
                        f4 = (f5 = this.fSVRe.dhj() - 1.0f) == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                    }
                    try {
                        try {
                            if (n != 0) break block50;
                            if (f4 != false) break block51;
                        }
                        catch (MatchException matchException) {
                            throw bg.Df(matchException);
                        }
                        this.wAIFj = false;
                    }
                    catch (MatchException matchException) {
                        throw bg.Df(matchException);
                    }
                }
                try {
                    bg2 = this;
                    if (n != 0) break block52;
                    float f8 = bg2.fSVRe.dhj() - -1.0f;
                    f4 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw bg.Df(matchException);
                }
            }
            try {
                if (f4 == false) {
                    this.wAIFj = true;
                }
            }
            catch (MatchException matchException) {
                throw bg.Df(matchException);
            }
            lC2.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 5.0f, ld.M, mG2);
            bg2 = this;
        }
        mG mG4 = bg2.UjiHh.dfU().coa(255.0f * f2).cob(jF.bHw()[3] * 0.75f + 0.25f * this.Mgsdz.dhj() + 0.25f * this.CUqhT.dhj());
        lq lq2 = lE.WTzbi.bYM(7.0f);
        float f9 = this.MCnYt + f3 + this.fSVRe.dhj();
        float f10 = this.pNyTQ + 8.0f;
        lC2.ceA(lq2, this.leLdq.bad(), f9, f10, mG4);
        mG mG5 = this.CtPwV.bjb().coa(255.0f * f2).cob(0.5f * f2);
        lq lq3 = lE.joxgd.bYM(6.0f);
        float f11 = this.MCnYt + f3;
        float f12 = this.pNyTQ + 16.0f;
        lC2.ceI(lq3, this.leLdq.bae(), f11, f12, mG5, 0.7f, 0.99f, this.BcpIo - f3 * 2.0f);
    }

    public rk CS() {
        return this.CUqhT;
    }

    public void CO(double d, double d2) {
        this.MPosk = new bh((float)d, (float)d2, 6.0f, this.leLdq);
        aw.route(this.MPosk);
    }

    public gg CX() {
        return this.leLdq;
    }

    public bh CY() {
        return this.MPosk;
    }

    public boolean CZ() {
        return this.OfuUM;
    }

    public static int Dd() {
        return BIqnm;
    }

    public static int De() {
        int n = bg.Dd();
        try {
            if (n == 0) {
                return 76;
            }
        }
        catch (MatchException matchException) {
            throw bg.Df(matchException);
        }
        return 0;
    }

    public static void Dc(int n) {
        BIqnm = n;
    }

    private static CallSite Di(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Df(MatchException matchException) {
        return matchException;
    }

    public boolean Da() {
        return this.wAIFj;
    }

    public void CP() {
        this.CQ(null);
    }

    public void CQ(cB cB2) {
        block14: {
            bg bg2;
            block11: {
                long l = CEakp ^ 0x661D4E217520L;
                lc lc2 = bl.Ex().Ey();
                List<bd> list = bl.Ex().manager().aY(bd.class);
                float f2 = lc2.bXF() + lc2.bXH() + 10.0f;
                int n = bg.Dd();
                float f3 = lc2.bXG();
                for (bd bd2 : list) {
                    block12: {
                        block13: {
                            try {
                                try {
                                    try {
                                        bg2 = bd2.BS();
                                        if (n != 0) break block11;
                                        if (bg2 != this) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw bg.Df(matchException);
                                    }
                                    if (cB2 == null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw bg.Df(matchException);
                                }
                                bd2.BQ(cB2);
                            }
                            catch (MatchException matchException) {
                                throw bg.Df(matchException);
                            }
                        }
                        bd2.Cg(true);
                        return;
                    }
                    if (n == 0) continue;
                }
                for (bd bd2 : list) {
                    try {
                        bd2.Cg(false);
                        if (n == 0) {
                            if (n == 0) continue;
                            break;
                        }
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw bg.Df(matchException);
                    }
                }
                bl.Ex().Eq(new bd(this, f2, f3, cB2));
                bg2 = this;
            }
            bg2.yScCM.dhg();
        }
    }

    private static int Dh(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bg.Dg(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public rk CT() {
        return this.Mgsdz;
    }

    public rk CU() {
        return this.fSVRe;
    }

    public rk CV() {
        return this.DAnVX;
    }

    private static int Dg(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1032;
        if (figLz[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = tfkIz[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])aaqZK.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    aaqZK.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bg", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bg.figLz[n2] = n3;
        }
        return figLz[n2];
    }

    public ri CW() {
        return this.UjiHh;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bg.class, "Dh", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
