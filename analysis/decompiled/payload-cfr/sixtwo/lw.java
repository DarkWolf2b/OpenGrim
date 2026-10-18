/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.awt.AlphaComposite;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Rectangle;
import java.awt.image.BufferedImage;
import java.awt.image.DataBufferInt;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.net.URL;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lw$uA;

public class lw {
    public static final int zlgnw = 0;
    public static final int jVScm = 1;
    public static final int IGhFi;
    protected BufferedInputStream HYawK;
    protected int kCzBe;
    protected int yvHap;
    protected int HROeA;
    protected boolean EZnCM;
    protected int JwAHq;
    protected int NLTcE;
    protected int[] nUJgo;
    protected int[] ywgHj;
    protected int[] tgdGD;
    protected int QeHiv;
    protected int OcGcZ;
    protected int miitl;
    protected int OrQhv;
    protected boolean EJqxz;
    protected boolean nztLI;
    protected int XvFAo;
    protected int FxXIz;
    protected int TKEYU;
    protected int kfgBG;
    protected int Heeou;
    protected Rectangle AecSu;
    protected BufferedImage VCUiV;
    protected BufferedImage mEYhc;
    protected byte[] Raost;
    protected int dRLBH;
    protected int PXRra;
    protected int qfWPV;
    protected boolean QnUEw;
    protected int ZBGhF;
    protected int oXvuq;
    protected static final int iUbzi;
    protected short[] LACSj;
    protected byte[] MzFcm;
    protected byte[] WzUAy;
    protected byte[] TqXuX;
    protected ArrayList RAaDq;
    protected int iOjiE;
    private static String[] OhYyv;
    private static final long mhICS;
    private static final String[] lGcRA;
    private static final String[] XkSHt;
    private static final Map lxlTo;
    private static final long[] DLziM;
    private static final Integer[] PvmQO;
    private static final Map cLSYu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static Exception cbT(Exception exception) {
        return exception;
    }

    protected int cbF() {
        int n = 0;
        try {
            n = this.HYawK.read();
        }
        catch (IOException iOException) {
            this.kCzBe = 1;
        }
        return n;
    }

    public int cbv() {
        return this.NLTcE;
    }

    /*
     * Unable to fully structure code
     */
    protected int cbG() {
        block18: {
            block19: {
                block20: {
                    block22: {
                        var1_1 = lw.mhICS ^ 22466455307320L;
                        this.dRLBH = this.cbF();
                        var4_2 = 0;
                        var3_3 = lw.cbS();
                        try {
                            v0 = this.dRLBH;
                            if (var3_3 == null) break block18;
                            if (v0 <= 0) break block19;
                        }
                        catch (IOException v1) {
                            throw lw.cbT(v1);
                        }
                        try {
                            var5_4 = 0;
                            while (var4_2 < this.dRLBH) {
                                block21: {
                                    block24: {
                                        block23: {
                                            var5_4 = this.HYawK.read(this.Raost, var4_2, this.dRLBH - var4_2);
                                            v0 = var5_4;
                                            v2 = -1;
                                            if (var3_3 == null) break block20;
                                            if (var3_3 == null) break block21;
                                            break block23;
                                            catch (IOException v3) {
                                                throw lw.cbT(v3);
                                            }
                                        }
                                        if (v0 != v2) ** GOTO lbl37
                                        break block24;
                                        catch (IOException v4) {
                                            throw lw.cbT(v4);
                                        }
                                    }
                                    try {
                                        block25: {
                                            if (var3_3 != null) break block22;
                                            break block25;
                                            catch (IOException v5) {
                                                throw lw.cbT(v5);
                                            }
                                        }
                                        v6 = var4_2;
                                        v7 = var5_4;
                                    }
                                    catch (IOException v8) {
                                        throw lw.cbT(v8);
                                    }
                                }
                                var4_2 = v6 + v7;
                                if (var3_3 != null) continue;
                                break;
                            }
                        }
                        catch (IOException var5_5) {
                            // empty catch block
                        }
                    }
                    try {
                        v0 = var4_2;
                        if (var3_3 == null) break block18;
                        v2 = this.dRLBH;
                    }
                    catch (IOException v9) {
                        throw lw.cbT(v9);
                    }
                }
                try {
                    if (v0 < v2) {
                        this.kCzBe = 1;
                    }
                }
                catch (IOException v10) {
                    throw lw.cbT(v10);
                }
            }
            v0 = var4_2;
        }
        return v0;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    protected void cbw() {
        block49: {
            block50: {
                block54: {
                    block51: {
                        block52: {
                            block53: {
                                var1_1 = lw.mhICS ^ 38001354144847L;
                                var4_2 = ((DataBufferInt)this.VCUiV.getRaster().getDataBuffer()).getData();
                                var3_3 = lw.cbS();
                                try {
                                    try {
                                        try {
                                            v0 = this.qfWPV;
                                            if (var3_3 == null) break block49;
                                            if (v0 <= 0) break block50;
                                        }
                                        catch (MatchException v1) {
                                            throw lw.cbT(v1);
                                        }
                                        v2 = this;
                                        if (var3_3 == null) break block51;
                                    }
                                    catch (MatchException v3) {
                                        throw lw.cbT(v3);
                                    }
                                    if (v2.qfWPV != 3) break block52;
                                }
                                catch (MatchException v4) {
                                    throw lw.cbT(v4);
                                }
                                var5_4 = this.iOjiE - 2;
                                try {
                                    try {
                                        if (var3_3 == null) break block53;
                                        if (var5_4 > 0) {
                                        }
                                        ** GOTO lbl38
                                    }
                                    catch (MatchException v5) {
                                        throw lw.cbT(v5);
                                    }
                                    this.mEYhc = this.cbx(var5_4 - 1);
                                }
                                catch (MatchException v6) {
                                    throw lw.cbT(v6);
                                }
                            }
                            try {
                                if (var3_3 != null) break block52;
lbl38:
                                // 2 sources

                                this.mEYhc = null;
                            }
                            catch (MatchException v7) {
                                throw lw.cbT(v7);
                            }
                        }
                        v2 = this;
                    }
                    try {
                        try {
                            v8 = v2.mEYhc;
                            if (var3_3 == null) break block54;
                            if (v8 == null) break block50;
                        }
                        catch (MatchException v9) {
                            throw lw.cbT(v9);
                        }
                        v8 = this.mEYhc;
                    }
                    catch (MatchException v10) {
                        throw lw.cbT(v10);
                    }
                }
                var5_5 = ((DataBufferInt)v8.getRaster().getDataBuffer()).getData();
                try {
                    System.arraycopy(var5_5, 0, var4_2, 0, this.yvHap * this.HROeA);
                    v0 = this.qfWPV;
                    if (var3_3 == null) break block49;
                    if (v0 != 2) break block50;
                }
                catch (MatchException v11) {
                    throw lw.cbT(v11);
                }
                var6_6 = this.VCUiV.createGraphics();
                var7_8 = null;
                var7_8 = this.QnUEw != false ? new Color(0, 0, 0, 0) : new Color(this.miitl);
                var6_6.setColor(var7_8);
                var6_6.setComposite(AlphaComposite.Src);
                var6_6.fill(this.AecSu);
                var6_6.dispose();
            }
            v0 = 1;
        }
        var5_4 = v0;
        var6_7 /* !! */  = lw.cca("z", (int)1325, (long)(4284572087937691370L ^ var1_1));
        var7_9 = 0;
        var8_10 = 0;
        block41: while (true) {
            v12 = var8_10;
            block42: while (v12 < this.Heeou) {
                block55: {
                    block56: {
                        block59: {
                            block57: {
                                block58: {
                                    var9_11 = var8_10;
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        v13 = this.nztLI;
                                                        if (var3_3 == null) break block55;
                                                        if (v13 == 0) break block56;
                                                    }
                                                    catch (MatchException v14) {
                                                        throw lw.cbT(v14);
                                                    }
                                                    v15 = var7_9;
                                                    v16 /* !! */  = this.Heeou;
                                                    if (var3_3 == null) break block57;
                                                }
                                                catch (MatchException v17) {
                                                    throw lw.cbT(v17);
                                                }
                                                if (v15 < v16 /* !! */ ) break block58;
                                            }
                                            catch (MatchException v18) {
                                                throw lw.cbT(v18);
                                            }
                                            v19 = ++var5_4;
                                            if (var3_3 != null) {
                                            }
                                            break block59;
                                        }
                                        catch (MatchException v20) {
                                            throw lw.cbT(v20);
                                        }
                                    }
                                    catch (MatchException v21) {
                                        throw lw.cbT(v21);
                                    }
                                    {
                                        ** switch (v19)
                                    }
lbl-1000:
                                    // 1 sources

                                    {
                                        case 2: {
                                            var7_9 = 4;
                                            if (var3_3 != null) break;
                                        }
lbl118:
                                        // 2 sources

                                        case 3: {
                                            var7_9 = 2;
                                            var6_7 /* !! */  = (CallSite)4;
                                            if (var3_3 != null) break;
                                        }
lbl122:
                                        // 2 sources

                                        case 4: {
                                            var7_9 = 1;
                                            var6_7 /* !! */  = (CallSite)2;
                                        }
                                    }
                                }
                                var9_11 = var7_9;
                                v15 = var7_9;
                                v16 /* !! */  = (int)var6_7 /* !! */ ;
                            }
                            v19 = v15 + v16 /* !! */ ;
                        }
                        var7_9 = v19;
                    }
                    var9_11 += this.TKEYU;
                    try {
                        if (var3_3 == null) continue block41;
                        v13 = var9_11;
                    }
                    catch (MatchException v22) {
                        throw lw.cbT(v22);
                    }
                }
                if (v13 < this.HROeA) {
                    block60: {
                        block61: {
                            var10_12 = var9_11 * this.yvHap;
                            var11_13 = var10_12 + this.FxXIz;
                            var12_14 = var11_13 + this.kfgBG;
                            try {
                                v23 = var10_12 + this.yvHap;
                                v24 = var12_14;
                                if (var3_3 == null) break block60;
                                if (v23 >= v24) break block61;
                            }
                            catch (MatchException v25) {
                                throw lw.cbT(v25);
                            }
                            var12_14 = var10_12 + this.yvHap;
                        }
                        v23 = var8_10;
                        v24 = this.kfgBG;
                    }
                    var13_15 = v23 * v24;
                    while (var11_13 < var12_14) {
                        block62: {
                            var14_16 = this.TqXuX[var13_15++] & lw.cca("z", (int)19115, (long)(4599231352409727349L ^ var1_1));
                            var15_17 = this.tgdGD[var14_16];
                            try {
                                if (var3_3 == null) break block62;
                                v12 = var15_17;
                                if (var3_3 == null) continue block42;
                            }
                            catch (MatchException v26) {
                                throw lw.cbT(v26);
                            }
                            try {
                                if (v12 != 0) {
                                    var4_2[var11_13] = var15_17;
                                }
                            }
                            catch (MatchException v27) {
                                throw lw.cbT(v27);
                            }
                            ++var11_13;
                        }
                        if (var3_3 != null) continue;
                    }
                }
                ++var8_10;
                if (var3_3 != null) continue block41;
            }
            break;
        }
    }

    public Dimension cby() {
        return new Dimension(this.yvHap, this.HROeA);
    }

    protected void cbK() {
        block32: {
            block38: {
                lw lw2;
                block39: {
                    block36: {
                        lw lw3;
                        String[] stringArray;
                        block34: {
                            block35: {
                                block33: {
                                    boolean bl;
                                    block31: {
                                        block29: {
                                            block28: {
                                                block30: {
                                                    long l = mhICS ^ 0x401AF9F0FD7CL;
                                                    StringBuilder stringBuilder = new StringBuilder();
                                                    stringArray = lw.cbS();
                                                    for (int i = 0; i < lw.cca("z", (int)3240, (long)(0x2A3DF5AFEB4D6644L ^ l)); ++i) {
                                                        int n = this.cbF();
                                                        try {
                                                            stringBuilder.append((char)n);
                                                            if (stringArray != null) {
                                                                if (stringArray != null) continue;
                                                                break;
                                                            }
                                                            break block28;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw lw.cbT(matchException);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            bl = stringBuilder.toString().startsWith((String)((Object)lw.cbX("k", (int)14465, (long)(0x1351623E861FE54EL ^ l))));
                                                            if (stringArray == null) break block29;
                                                            if (bl) break block30;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw lw.cbT(matchException);
                                                        }
                                                        this.kCzBe = 1;
                                                        return;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw lw.cbT(matchException);
                                                    }
                                                }
                                                this.cbM();
                                            }
                                            bl = this.EZnCM;
                                        }
                                        try {
                                            try {
                                                try {
                                                    if (stringArray == null) break block31;
                                                    if (!bl) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw lw.cbT(matchException);
                                                }
                                                lw3 = this;
                                                if (stringArray == null) break block33;
                                            }
                                            catch (MatchException matchException) {
                                                throw lw.cbT(matchException);
                                            }
                                            bl = lw3.cbD();
                                        }
                                        catch (MatchException matchException) {
                                            throw lw.cbT(matchException);
                                        }
                                    }
                                    try {
                                        if (bl) break block32;
                                        this.nUJgo = this.cbH(this.JwAHq);
                                        lw3 = this;
                                    }
                                    catch (MatchException matchException) {
                                        throw lw.cbT(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block34;
                                        if (lw3.nUJgo != null) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw lw.cbT(matchException);
                                    }
                                    this.kCzBe = 1;
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw lw.cbT(matchException);
                                }
                            }
                            lw3 = this;
                        }
                        try {
                            block37: {
                                try {
                                    try {
                                        try {
                                            if (stringArray == null) break block36;
                                            if (lw3.QeHiv < 0) break block37;
                                        }
                                        catch (MatchException matchException) {
                                            throw lw.cbT(matchException);
                                        }
                                        lw2 = this;
                                        if (stringArray == null) break block38;
                                    }
                                    catch (MatchException matchException) {
                                        throw lw.cbT(matchException);
                                    }
                                    if (lw2.QeHiv < this.nUJgo.length) break block39;
                                }
                                catch (MatchException matchException) {
                                    throw lw.cbT(matchException);
                                }
                            }
                            lw3 = this;
                        }
                        catch (MatchException matchException) {
                            throw lw.cbT(matchException);
                        }
                    }
                    lw3.kCzBe = 1;
                    return;
                }
                lw2 = this;
            }
            lw2.OcGcZ = this.nUJgo[this.QeHiv];
        }
    }

    private static CallSite cbX(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    protected boolean cbD() {
        boolean bl;
        block2: {
            block3: {
                long l = mhICS ^ 0x6980DF3DE36L;
                String[] stringArray = lw.cbS();
                try {
                    bl = this.kCzBe;
                    if (stringArray == null) break block2;
                    if (!bl) break block3;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    /*
     * Exception decompiling
     */
    protected void cbC() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [66[DOLOOP]], but top level block is 26[TRYBLOCK]
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

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    protected int[] cbH(int var1_1) {
        block27: {
            block24: {
                block25: {
                    block26: {
                        block21: {
                            block23: {
                                var2_2 = lw.mhICS ^ 76933125859298L;
                                var5_3 = 3 * var1_1;
                                var6_4 = new byte[var5_3];
                                var4_5 = lw.cbS();
                                var7_6 = 0;
                                try {
                                    while (var7_6 < var5_3) {
                                        block22: {
                                            block29: {
                                                block28: {
                                                    var8_7 = this.HYawK.read(var6_4, var7_6, var5_3 - var7_6);
                                                    v0 /* !! */  = var8_7;
                                                    v1 = -1;
                                                    if (var4_5 == null) break block21;
                                                    if (var4_5 == null) break block22;
                                                    break block28;
                                                    catch (IOException v2) {
                                                        throw lw.cbT(v2);
                                                    }
                                                }
                                                if (v0 /* !! */  != v1) ** GOTO lbl30
                                                break block29;
                                                catch (IOException v3) {
                                                    throw lw.cbT(v3);
                                                }
                                            }
                                            try {
                                                block30: {
                                                    if (var4_5 != null) break block23;
                                                    break block30;
                                                    catch (IOException v4) {
                                                        throw lw.cbT(v4);
                                                    }
                                                }
                                                v5 = var7_6;
                                                v6 = var8_7;
                                            }
                                            catch (IOException v7) {
                                                throw lw.cbT(v7);
                                            }
                                        }
                                        var7_6 = v5 + v6;
                                        if (var4_5 != null) continue;
                                        break;
                                    }
                                }
                                catch (IOException var8_8) {
                                    var8_8.printStackTrace();
                                    this.kCzBe = 1;
                                }
                            }
                            v0 /* !! */  = var7_6;
                            v1 = var5_3;
                        }
                        try {
                            if (var4_5 == null) break block24;
                            if (v0 /* !! */  >= v1) break block25;
                        }
                        catch (IOException v8) {
                            throw lw.cbT(v8);
                        }
                        this.kCzBe = 1;
                        var8_9 = new int[Math.max((int)lw.cca("z", (int)9990, (long)(6380049031520835439L ^ var2_2)), var1_1)];
                        for (var9_11 = 0; var9_11 < var1_1; ++var9_11) {
                            var10_13 = (int)((float)var9_11 / (float)Math.max(1, var1_1 - 1) * 255.0f);
                            var11_15 = lw.cca("z", (int)28899, (long)(3949454177314537626L ^ var2_2)) | var10_13 << lw.cca("z", (int)20587, (long)(1727311525069201438L ^ var2_2)) | var10_13 << lw.cca("z", (int)1325, (long)(4284538335977928007L ^ var2_2)) | var10_13;
                            try {
                                v9 = var8_9;
                                if (var4_5 != null) {
                                    v9[var9_11] = var11_15;
                                    if (var4_5 != null) continue;
                                    break;
                                }
                                break block26;
                            }
                            catch (IOException v10) {
                                throw lw.cbT(v10);
                            }
                        }
                        v9 = var8_9;
                    }
                    return v9;
                }
                v0 /* !! */  = (int)lw.cca("z", (int)9990, (long)(6380049031520835439L ^ var2_2));
                v1 = var1_1;
            }
            var8_10 = Math.max(v0 /* !! */ , v1);
            var9_12 = new int[var8_10];
            var10_14 = 0;
            var11_16 = 0;
            while (var10_14 < var1_1) {
                var12_17 = var6_4[var11_16++] & lw.cca("z", (int)19115, (long)(4599204343549082328L ^ var2_2));
                var13_18 = var6_4[var11_16++] & lw.cca("z", (int)19115, (long)(4599204343549082328L ^ var2_2));
                var14_19 = var6_4[var11_16++] & lw.cca("z", (int)19115, (long)(4599204343549082328L ^ var2_2));
                try {
                    v11 = var9_12;
                    if (var4_5 != null) {
                        v11[var10_14++] = lw.cca("z", (int)2812, (long)(7604460908953729672L ^ var2_2)) | var12_17 << lw.cca("z", (int)21552, (long)(8467297619731227718L ^ var2_2)) | var13_18 << lw.cca("z", (int)1325, (long)(4284538335977928007L ^ var2_2)) | var14_19;
                        if (var4_5 != null) continue;
                        break;
                    }
                    break block27;
                }
                catch (IOException v12) {
                    throw lw.cbT(v12);
                }
            }
            v11 = var9_12;
        }
        return v11;
    }

    protected void cbL() {
        lw lw2;
        block48: {
            boolean bl;
            int n;
            block46: {
                String[] stringArray;
                block47: {
                    block44: {
                        block45: {
                            lw lw3;
                            block42: {
                                block43: {
                                    block40: {
                                        block41: {
                                            int n2;
                                            block39: {
                                                block38: {
                                                    block36: {
                                                        int n3;
                                                        int n4;
                                                        long l;
                                                        block34: {
                                                            block35: {
                                                                int n5;
                                                                block32: {
                                                                    block33: {
                                                                        l = mhICS ^ 0x6A26EA4FA98AL;
                                                                        this.FxXIz = this.cbO();
                                                                        this.TKEYU = this.cbO();
                                                                        this.kfgBG = this.cbO();
                                                                        this.Heeou = this.cbO();
                                                                        n4 = this.cbF();
                                                                        stringArray = lw.cbS();
                                                                        try {
                                                                            lw lw4 = this;
                                                                            n5 = n4 & lw.cca("z", (int)20898, (long)(0x2F8FBA4EAE2E6FACL ^ l));
                                                                            if (stringArray == null) break block32;
                                                                            if (n5 == 0) break block33;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw lw.cbT(matchException);
                                                                        }
                                                                        n5 = 1;
                                                                        break block32;
                                                                    }
                                                                    n5 = 0;
                                                                }
                                                                try {
                                                                    lw4.EJqxz = n5;
                                                                    lw lw5 = this;
                                                                    n3 = n4 & lw.cca("z", (int)11994, (long)(0x9D210FC455610D9L ^ l));
                                                                    if (stringArray == null) break block34;
                                                                    if (n3 == 0) break block35;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw lw.cbT(matchException);
                                                                }
                                                                n3 = 1;
                                                                break block34;
                                                            }
                                                            n3 = 0;
                                                        }
                                                        try {
                                                            block37: {
                                                                try {
                                                                    try {
                                                                        lw5.nztLI = n3;
                                                                        this.XvFAo = 2 << (n4 & lw.cca("z", (int)30996, (long)(0x220BD3608753C71EL ^ l)));
                                                                        n2 = this.EJqxz;
                                                                        if (stringArray == null) break block36;
                                                                        if (n2 == 0) break block37;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw lw.cbT(matchException);
                                                                    }
                                                                    this.ywgHj = this.cbH(this.XvFAo);
                                                                    this.tgdGD = this.ywgHj;
                                                                    if (stringArray != null) break block38;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw lw.cbT(matchException);
                                                                }
                                                            }
                                                            this.tgdGD = this.nUJgo;
                                                            n2 = this.QeHiv;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw lw.cbT(matchException);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            if (stringArray == null) break block39;
                                                            if (n2 != this.oXvuq) break block38;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw lw.cbT(matchException);
                                                        }
                                                        this.OcGcZ = 0;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw lw.cbT(matchException);
                                                    }
                                                }
                                                n2 = 0;
                                            }
                                            n = n2;
                                            try {
                                                lw3 = this;
                                                if (stringArray == null) break block40;
                                                if (!lw3.QnUEw) break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw lw.cbT(matchException);
                                            }
                                            n = this.tgdGD[this.oXvuq];
                                            this.tgdGD[this.oXvuq] = 0;
                                        }
                                        lw3 = this;
                                    }
                                    try {
                                        try {
                                            if (stringArray == null) break block42;
                                            if (lw3.tgdGD != null) break block43;
                                        }
                                        catch (MatchException matchException) {
                                            throw lw.cbT(matchException);
                                        }
                                        this.kCzBe = 1;
                                    }
                                    catch (MatchException matchException) {
                                        throw lw.cbT(matchException);
                                    }
                                }
                                lw3 = this;
                            }
                            try {
                                bl = lw3.cbD();
                                if (stringArray == null) break block44;
                                if (!bl) break block45;
                            }
                            catch (MatchException matchException) {
                                throw lw.cbT(matchException);
                            }
                            return;
                        }
                        this.cbC();
                        this.cbQ();
                        bl = this.cbD();
                    }
                    try {
                        if (stringArray == null) break block46;
                        if (!bl) break block47;
                    }
                    catch (MatchException matchException) {
                        throw lw.cbT(matchException);
                    }
                    return;
                }
                try {
                    ++this.iOjiE;
                    this.VCUiV = new BufferedImage(this.yvHap, this.HROeA, 3);
                    this.cbw();
                    this.RAaDq.add(new lw$uA(this.VCUiV, this.ZBGhF));
                    lw2 = this;
                    if (stringArray == null) break block48;
                    bl = lw2.QnUEw;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
            }
            try {
                if (bl) {
                    this.tgdGD[this.oXvuq] = n;
                }
            }
            catch (MatchException matchException) {
                throw lw.cbT(matchException);
            }
            lw2 = this;
        }
        try {
            lw2.cbP();
            if (iS.bwL() == null) {
                lw.cbR(new String[4]);
            }
        }
        catch (MatchException matchException) {
            throw lw.cbT(matchException);
        }
    }

    protected void cbJ() {
        int n;
        long l;
        block8: {
            block9: {
                String[] stringArray;
                int n2;
                block6: {
                    lw lw2;
                    block7: {
                        l = mhICS ^ 0x65A5CC86498BL;
                        this.cbF();
                        n2 = this.cbF();
                        this.PXRra = (n2 & lw.cca("z", (int)24688, (long)(0x2568D952F2583E71L ^ l))) >> 2;
                        stringArray = lw.cbS();
                        try {
                            try {
                                lw2 = this;
                                if (stringArray == null) break block6;
                                if (lw2.PXRra != 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw lw.cbT(matchException);
                            }
                            this.PXRra = 1;
                        }
                        catch (MatchException matchException) {
                            throw lw.cbT(matchException);
                        }
                    }
                    lw2 = this;
                }
                try {
                    n = n2 & 1;
                    if (stringArray == null) break block8;
                    if (n == 0) break block9;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
                n = 1;
                break block8;
            }
            n = 0;
        }
        lw2.QnUEw = n;
        this.ZBGhF = this.cbO() * lw.cca("z", (int)471, (long)(0x7A29DA24915A5FDFL ^ l));
        this.oXvuq = this.cbF();
        this.cbF();
    }

    private static CallSite cca(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    protected void cbE() {
        this.kCzBe = 0;
        this.iOjiE = 0;
        this.RAaDq = new ArrayList();
        this.nUJgo = null;
        this.ywgHj = null;
    }

    /*
     * Exception decompiling
     */
    protected void cbI() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [2[TRYBLOCK]], but top level block is 12[SWITCH]
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

    /*
     * Unable to fully structure code
     */
    public int cbz(BufferedInputStream var1_1) {
        block17: {
            block18: {
                block16: {
                    block23: {
                        block22: {
                            block21: {
                                block20: {
                                    block19: {
                                        var2_2 = lw.mhICS ^ 60017269951005L;
                                        var4_3 = lw.cbS();
                                        v0 = this;
                                        if (var4_3 == null) break block16;
                                        v0.cbE();
                                        if (var1_1 == null) ** GOTO lbl46
                                        break block19;
                                        catch (IOException v1) {
                                            throw lw.cbT(v1);
                                        }
                                    }
                                    this.HYawK = var1_1;
                                    this.cbK();
                                    if (var4_3 == null) break block17;
                                    break block20;
                                    catch (IOException v2) {
                                        throw lw.cbT(v2);
                                    }
                                }
                                if (this.cbD()) break block18;
                                break block21;
                                catch (IOException v3) {
                                    throw lw.cbT(v3);
                                }
                            }
                            this.cbI();
                            if (var4_3 == null) break block17;
                            break block22;
                            catch (IOException v4) {
                                throw lw.cbT(v4);
                            }
                        }
                        if (this.iOjiE >= 0) break block18;
                        break block23;
                        catch (IOException v5) {
                            throw lw.cbT(v5);
                        }
                    }
                    try {
                        block24: {
                            this.kCzBe = 1;
                            if (var4_3 != null) break block18;
                            break block24;
                            catch (IOException v6) {
                                throw lw.cbT(v6);
                            }
                        }
                        v0 = this;
                    }
                    catch (IOException v7) {
                        throw lw.cbT(v7);
                    }
                }
                v0.kCzBe = (int)lw.cca("z", (int)419, (long)(593756832435723307L ^ var2_2));
            }
            try {
                var1_1.close();
            }
            catch (IOException var5_4) {
                // empty catch block
            }
        }
        return this.kCzBe;
    }

    public BufferedImage cbu() {
        return this.cbx(0);
    }

    /*
     * Unable to fully structure code
     */
    public int cbA(InputStream var1_1) {
        block21: {
            block22: {
                block18: {
                    block26: {
                        block25: {
                            block19: {
                                block20: {
                                    block23: {
                                        var2_2 = lw.mhICS ^ 21849545874617L;
                                        var4_3 = lw.cbS();
                                        v0 = this;
                                        if (var4_3 == null) break block18;
                                        v0.cbE();
                                        if (var1_1 == null) ** GOTO lbl56
                                        break block23;
                                        catch (IOException v1) {
                                            throw lw.cbT(v1);
                                        }
                                    }
                                    try {
                                        block24: {
                                            v2 = var1_1 instanceof BufferedInputStream;
                                            if (var4_3 == null) break block19;
                                            break block24;
                                            catch (IOException v3) {
                                                throw lw.cbT(v3);
                                            }
                                        }
                                        if (v2) break block20;
                                    }
                                    catch (IOException v4) {
                                        throw lw.cbT(v4);
                                    }
                                    var1_1 = new BufferedInputStream(var1_1);
                                }
                                try {
                                    this.HYawK = (BufferedInputStream)var1_1;
                                    this.cbK();
                                    if (var4_3 == null) break block21;
                                    v2 = this.cbD();
                                }
                                catch (IOException v5) {
                                    throw lw.cbT(v5);
                                }
                            }
                            if (v2) break block22;
                            this.cbI();
                            if (var4_3 == null) break block21;
                            break block25;
                            catch (IOException v6) {
                                throw lw.cbT(v6);
                            }
                        }
                        if (this.iOjiE >= 0) break block22;
                        break block26;
                        catch (IOException v7) {
                            throw lw.cbT(v7);
                        }
                    }
                    try {
                        block27: {
                            this.kCzBe = 1;
                            if (var4_3 != null) break block22;
                            break block27;
                            catch (IOException v8) {
                                throw lw.cbT(v8);
                            }
                        }
                        v0 = this;
                    }
                    catch (IOException v9) {
                        throw lw.cbT(v9);
                    }
                }
                v0.kCzBe = (int)lw.cca("z", (int)19094, (long)(4784435782132613557L ^ var2_2));
            }
            try {
                var1_1.close();
            }
            catch (IOException var5_4) {
                // empty catch block
            }
        }
        return this.kCzBe;
    }

    protected void cbN() {
        long l = mhICS ^ 0x89B8A3A5B73L;
        String[] stringArray = lw.cbS();
        block2: while (true) {
            this.cbG();
            if (this.Raost[0] == 1) {
                int n = this.Raost[1] & lw.cca("z", (int)3754, (long)(0x3D39DBC76884C254L ^ l));
                int n2 = this.Raost[2] & lw.cca("z", (int)19115, (long)(0x3FD3EA9873340649L ^ l));
                this.NLTcE = n2 << lw.cca("z", (int)1325, (long)(0x3B75F1896F18C9D6L ^ l)) | n;
            }
            do {
                int n = this.dRLBH;
                if (stringArray != null) {
                    try {
                        if (n <= 0) continue;
                        n = this.cbD() ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw lw.cbT(matchException);
                    }
                }
                if (n == 0) continue block2;
            } while (stringArray == null);
            break;
        }
    }

    private static Object cbW(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = lw.cbV(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    protected void cbP() {
        this.qfWPV = this.PXRra;
        this.AecSu = new Rectangle(this.FxXIz, this.TKEYU, this.kfgBG, this.Heeou);
        this.mEYhc = this.VCUiV;
        this.miitl = this.OcGcZ;
        boolean bl = false;
        boolean bl2 = false;
        boolean bl3 = false;
        this.ywgHj = null;
    }

    private static String cbU(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    private static int cbZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = lw.cbY(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    protected void cbQ() {
        long l = mhICS ^ 0x32A5894E215EL;
        do {
            this.cbG();
        } while (this.dRLBH > 0 && !this.cbD());
    }

    public static void cbR(String[] stringArray) {
        OhYyv = stringArray;
    }

    protected int cbO() {
        long l = mhICS ^ 0x7C94FFBC609BL;
        return this.cbF() | this.cbF() << lw.cca("z", (int)22616, (long)(0x20B426FA74E42F44L ^ l));
    }

    protected void cbM() {
        int n;
        int n2;
        long l;
        block2: {
            block3: {
                l = mhICS ^ 0x471C0C2E02F4L;
                this.yvHap = this.cbO();
                this.HROeA = this.cbO();
                String[] stringArray = lw.cbS();
                n2 = this.cbF();
                try {
                    lw lw2 = this;
                    n = n2 & lw.cca("z", (int)25856, (long)(0x5361369E1607F075L ^ l));
                    if (stringArray == null) break block2;
                    if (n == 0) break block3;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
                n = 1;
                break block2;
            }
            n = 0;
        }
        lw2.EZnCM = n;
        this.JwAHq = 2 << (n2 & lw.cca("z", (int)31020, (long)(0x46A606A834C16C4AL ^ l)));
        this.QeHiv = this.cbF();
        this.OrQhv = this.cbF();
    }

    private static int cbY(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7172;
        if (PvmQO[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = DLziM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])cLSYu.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cLSYu.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lw", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lw.PvmQO[n2] = n3;
        }
        return PvmQO[n2];
    }

    private static String cbV(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4643;
        if (XkSHt[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])lxlTo.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    lxlTo.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lw", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = lGcRA[n2].getBytes("ISO-8859-1");
            lw.XkSHt[n2] = lw.cbU(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return XkSHt[n2];
    }

    public lw() {
        long l = mhICS ^ 0xD9414F4AF3AL;
        this.NLTcE = 1;
        this.Raost = new byte[lw.cca("z", (int)25423, (long)(0x165D19E7B9FF5BF9L ^ l))];
        this.dRLBH = 0;
        this.PXRra = 0;
        this.qfWPV = 0;
        this.QnUEw = false;
        this.ZBGhF = 0;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        lw.mhICS = gb.aYR(-2879237144925233431L, -5007989433139545023L, MethodHandles.lookup().lookupClass()).a(203719300113169L);
                        lw.lxlTo = new HashMap<K, V>(13);
                        var11 = lw.mhICS ^ 74284909392948L;
                        lw.cbR(new String[1]);
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[4];
                        var18_4 = 0;
                        var17_5 = "\u00ae\u00c4_X\u00bb\u00a7fT\u00a7\u00ae\u00b4\f\u00dch|^xe\u00fd\u00c0|\u00e2;{\u0010\u00d9\u0097\u008c\u0093y\u00ffb606\u00c9M\fYBv";
                        var19_6 = "\u00ae\u00c4_X\u00bb\u00a7fT\u00a7\u00ae\u00b4\f\u00dch|^xe\u00fd\u00c0|\u00e2;{\u0010\u00d9\u0097\u008c\u0093y\u00ffb606\u00c9M\fYBv".length();
                        var16_7 = 24;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = lw.cbU(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "}?K1\u009e\u00d7W\u0092+\u0085\u00c5t\u0089\u00bd\u00fbQ\u0018\u00de\u009c\u00ef\u00d21!\u00e4`b\u00b1~\u00f9\fl3\u0003\u00c8=\u00b8\u00b30,'\u00a6";
                            var19_6 = "}?K1\u009e\u00d7W\u0092+\u0085\u00c5t\u0089\u00bd\u00fbQ\u0018\u00de\u009c\u00ef\u00d21!\u00e4`b\u00b1~\u00f9\fl3\u0003\u00c8=\u00b8\u00b30,'\u00a6".length();
                            var16_7 = 16;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = lw.cbU(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                lw.lGcRA = var20_3;
                lw.XkSHt = new String[4];
                lw.cLSYu = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[26];
                var3_13 = 0;
                var4_14 = "\u00d8\u00c5\u00b4o\u0016\u001b\u00d8\u009f\u00c2\u00dffg\u008b\u00e9\u0007\u00be:P\u00cd\u00a8\u0016\u00cc\u00c9\u0002\u00c1C?\u00eak\u00ad\u00ac?\u00feq\u00c7^\u00c3L\u00bc\u00d2\u0012\u009dc\u008a\u00b1\u00d2\u00ed$\u00f0V|\u00d1\u0091r\u0019\u00fa|\u00b0z\u00c3\u00de\u0098\u0086^\u00ef\u00be'\u0087q\u0096q\u00fdl\u0091\u00e5\u0093r&\u00a9qc\u0001\u00f9h\u0010\u008f?\u00124\u00dd\u00869\u0082\u0083\u001dE\u00896F\u0097A\u008c\u00ca\u00dbs\u00a8H\u00a9%\u00cc\u00af\u00ae3v2\u00da\u008c|T\u00aa\u0087\u00cc\u000b%\u0098\u00f9\u00e1e\u0081\u0090A\u00ae\rZT\u00d4\u00cep&\u0006$3\u00cd\u0083\u00b4\u00bdU\u00e6\u00f2\u0085\t\u0005\u00a2\u00eb\u00d6S\u001f&\u001d\u00c1'X\u009d\u00c0lGX$\u008blK\u00a0\u00e9&\u009d\u00e8\u008c\u001d\u00d2\u0093oc\u00fc\u00ed*\u00f2]?\\\u00df\u00ca\u00ba";
                var5_15 = "\u00d8\u00c5\u00b4o\u0016\u001b\u00d8\u009f\u00c2\u00dffg\u008b\u00e9\u0007\u00be:P\u00cd\u00a8\u0016\u00cc\u00c9\u0002\u00c1C?\u00eak\u00ad\u00ac?\u00feq\u00c7^\u00c3L\u00bc\u00d2\u0012\u009dc\u008a\u00b1\u00d2\u00ed$\u00f0V|\u00d1\u0091r\u0019\u00fa|\u00b0z\u00c3\u00de\u0098\u0086^\u00ef\u00be'\u0087q\u0096q\u00fdl\u0091\u00e5\u0093r&\u00a9qc\u0001\u00f9h\u0010\u008f?\u00124\u00dd\u00869\u0082\u0083\u001dE\u00896F\u0097A\u008c\u00ca\u00dbs\u00a8H\u00a9%\u00cc\u00af\u00ae3v2\u00da\u008c|T\u00aa\u0087\u00cc\u000b%\u0098\u00f9\u00e1e\u0081\u0090A\u00ae\rZT\u00d4\u00cep&\u0006$3\u00cd\u0083\u00b4\u00bdU\u00e6\u00f2\u0085\t\u0005\u00a2\u00eb\u00d6S\u001f&\u001d\u00c1'X\u009d\u00c0lGX$\u008blK\u00a0\u00e9&\u009d\u00e8\u008c\u001d\u00d2\u0093oc\u00fc\u00ed*\u00f2]?\\\u00df\u00ca\u00ba".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "W\u00a6\u0097\u001fa\t\u00d5\u0007W\u00a5(\u008cp>\u00c3\u00f2";
                    var5_15 = "W\u00a6\u0097\u001fa\t\u00d5\u0007W\u00a5(\u008cp>\u00c3\u00f2".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl105:
                // 1 sources

                ** continue;
            }
        }
        lw.DLziM = var6_12;
        lw.PvmQO = new Integer[26];
        lw.IGhFi = (int)lw.cca("z", (int)12324, (long)(var11 ^ 3246645375524361110L));
        lw.iUbzi = (int)lw.cca("z", (int)2759, (long)(var11 ^ 5953016391568681329L));
    }

    /*
     * Unable to fully structure code
     */
    public int cbB(String var1_1) {
        var2_2 = lw.mhICS ^ 62855799805726L;
        this.kCzBe = 0;
        var4_3 = lw.cbS();
        try {
            block11: {
                block10: {
                    block9: {
                        var1_1 = var1_1.trim().toLowerCase();
                        v0 = var1_1.indexOf((String)lw.cbX("k", (int)110, (long)(3884287460767741890L ^ var2_2)));
                        if (var4_3 == null) break block9;
                        try {
                            block12: {
                                if (v0 >= 0) break block10;
                                break block12;
                                catch (IOException v1) {
                                    throw lw.cbT(v1);
                                }
                            }
                            v0 = var1_1.indexOf((String)lw.cbX("k", (int)8658, (long)(2327485378739410556L ^ var2_2)));
                        }
                        catch (IOException v2) {
                            throw lw.cbT(v2);
                        }
                    }
                    if (v0 <= 0) ** GOTO lbl26
                }
                var5_4 = new URL(var1_1);
                try {
                    this.HYawK = new BufferedInputStream(var5_4.openStream());
                    if (var4_3 != null) break block11;
lbl26:
                    // 2 sources

                    this.HYawK = new BufferedInputStream(new FileInputStream(var1_1));
                }
                catch (IOException v3) {
                    throw lw.cbT(v3);
                }
            }
            this.kCzBe = this.cbz(this.HYawK);
        }
        catch (IOException var5_5) {
            this.kCzBe = (int)lw.cca("z", (int)419, (long)(593768226674573608L ^ var2_2));
        }
        return this.kCzBe;
    }

    public BufferedImage cbx(int n) {
        BufferedImage bufferedImage;
        block4: {
            int n2;
            block3: {
                long l = mhICS ^ 0x44E407852942L;
                bufferedImage = null;
                String[] stringArray = lw.cbS();
                try {
                    n2 = n;
                    if (stringArray == null) break block3;
                    if (n2 < 0) break block4;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
                n2 = n;
            }
            if (n2 < this.iOjiE) {
                bufferedImage = ((lw$uA)this.RAaDq.get((int)n)).ccIdo;
            }
        }
        return bufferedImage;
    }

    public int cbt() {
        return this.iOjiE;
    }

    public int cbs(int n) {
        int n2;
        block8: {
            block9: {
                long l = mhICS ^ 0x3B86E67E7D6DL;
                this.ZBGhF = -1;
                String[] stringArray = lw.cbS();
                try {
                    try {
                        try {
                            try {
                                n2 = n;
                                if (stringArray == null) break block8;
                                if (n2 < 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw lw.cbT(matchException);
                            }
                            n2 = n;
                            if (stringArray == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw lw.cbT(matchException);
                        }
                        if (n2 >= this.iOjiE) break block9;
                    }
                    catch (MatchException matchException) {
                        throw lw.cbT(matchException);
                    }
                    this.ZBGhF = ((lw$uA)this.RAaDq.get((int)n)).jBbEt;
                }
                catch (MatchException matchException) {
                    throw lw.cbT(matchException);
                }
            }
            n2 = this.ZBGhF;
        }
        return n2;
    }

    public static String[] cbS() {
        return OhYyv;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lw.class, "cbW", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(lw.class, "cbZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
