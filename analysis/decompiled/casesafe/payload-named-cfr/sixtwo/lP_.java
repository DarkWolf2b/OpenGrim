/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Function
 *  com.sun.jna.NativeLibrary
 *  com.sun.jna.Pointer
 *  com.sun.jna.platform.win32.User32
 *  com.sun.jna.platform.win32.WinDef$DWORD
 *  com.sun.jna.platform.win32.WinDef$HWND
 *  mixin.accessors.WindowAccessor
 *  org.lwjgl.glfw.GLFW
 *  org.lwjgl.opengl.GL
 *  org.lwjgl.opengl.GLCapabilities
 *  oshi.PlatformEnum
 */
package sixtwo;

import com.sun.jna.Function;
import com.sun.jna.NativeLibrary;
import com.sun.jna.Pointer;
import com.sun.jna.platform.win32.User32;
import com.sun.jna.platform.win32.WinDef;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WindowAccessor;
import org.lwjgl.glfw.GLFW;
import org.lwjgl.opengl.GL;
import org.lwjgl.opengl.GLCapabilities;
import oshi.PlatformEnum;
import sixtwo.gb;
import sixtwo.jm$tO;
import sixtwo.jm$tP;
import sixtwo.jm$tQ;
import sixtwo.jm$tS;
import sixtwo.lR;
import sixtwo.rD;
import sixtwo.rt;

public final class lP {
    private static final int KhWwj;
    private static final int HBHSs;
    private static final int iYpaF;
    private static final int qkiXH;
    private static final int qnDjA;
    private static final int hTEkI = 1;
    private long elAyx;
    private WinDef.HWND qTwYj;
    private GLCapabilities BSwIK;
    private boolean kwzfa;
    private int IUKmP;
    private static final long kNCTj;
    private static final String[] Jzazp;
    private static final String[] QsknF;
    private static final Map kkDgQ;
    private static final long[] KaxKL;
    private static final Integer[] Vgibd;
    private static final Map sFkGh;
    private static final long vCtRE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block17: {
            block16: {
                block15: {
                    block14: {
                        lP.kNCTj = gb.aYR(1296029901778457980L, 7696269203822812648L, MethodHandles.lookup().lookupClass()).a(60703086122575L);
                        lP.kkDgQ = new HashMap<K, V>(13);
                        var16 = lP.kNCTj ^ 56394850504256L;
                        var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var16 >>> 56);
                        for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                            v2 = v2;
                            v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                        }
                        var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var25_3 = new String[2];
                        var23_4 = 0;
                        var22_5 = "\u00bff\u0089\u00d5s\u00e2\u001ePO0t#\u00f4pW\u00d58F\u00f29$\u0001*\u0017p\u00f4\u00cc#V\u0000\u00bb)\u001eG\u00aa1\u00fe\u00efU\u0001@\u00db\u00b8\u00a5\u009dHfU\u0099\tU\u0013\u009f~\u00e4\u00abK\u00e2\u009e\u00fb\u00f7Y<\u00a9l \u0019\u00a5\u007f\u00df\u00d5\u00c1\u009c";
                        var24_6 = "\u00bff\u0089\u00d5s\u00e2\u001ePO0t#\u00f4pW\u00d58F\u00f29$\u0001*\u0017p\u00f4\u00cc#V\u0000\u00bb)\u001eG\u00aa1\u00fe\u00efU\u0001@\u00db\u00b8\u00a5\u009dHfU\u0099\tU\u0013\u009f~\u00e4\u00abK\u00e2\u009e\u00fb\u00f7Y<\u00a9l \u0019\u00a5\u007f\u00df\u00d5\u00c1\u009c".length();
                        var21_7 = 16;
                        var20_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            continue;
                            break;
                        }
lbl22:
                        // 1 sources

                        while (true) {
                            var25_3[var23_4++] = lP.chs(var26_9).intern();
                            if ((var20_8 += var21_7) < var24_6) {
                                var21_7 = var22_5.charAt(var20_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                        v3 = ++var20_8;
                        var26_9 = var18_1.doFinal(var22_5.substring(v3, v3 + var21_7).getBytes("ISO-8859-1"));
                        ** while (true)
                    }
                    lP.Jzazp = var25_3;
                    lP.QsknF = new String[2];
                    lP.sFkGh = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v4 = SecretKeyFactory.getInstance("DES");
                    v5 = new byte[8];
                    v6 = v5;
                    v5[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v6 = v6;
                        v6[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[12];
                    var8_13 = 0;
                    var9_14 = "\"_\u0012\u009e3B\u009f\f3\u000b\u00ca\u00959\u001c\u00b6\u00c2\u0003Ug\u00b8\u00bb\u00d05\u00de\u00f2\u00f4\u00d1b\u00a0\u00b4+)\u00f5g\u00af\u00f7\t\u00ff\u00c0I\u0013z\u0096\u0085\u000b\u00bc\"^\u0014'\u00a3\u009b\u001d\t\u009eg\u00e6\u00c8\u001em\u00d8\u00b0\u00b7H\u00aab\u001f\u00bcKZ&\u0005\u00d3\u009c\u00b3GG\u000b\u0098X";
                    var10_15 = "\"_\u0012\u009e3B\u009f\f3\u000b\u00ca\u00959\u001c\u00b6\u00c2\u0003Ug\u00b8\u00bb\u00d05\u00de\u00f2\u00f4\u00d1b\u00a0\u00b4+)\u00f5g\u00af\u00f7\t\u00ff\u00c0I\u0013z\u0096\u0085\u000b\u00bc\"^\u0014'\u00a3\u009b\u001d\t\u009eg\u00e6\u00c8\u001em\u00d8\u00b0\u00b7H\u00aab\u001f\u00bcKZ&\u0005\u00d3\u009c\u00b3GG\u000b\u0098X".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v7 = var11_12;
                        v8 = var8_13++;
                        v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v10 = -1;
                        break block15;
                        break;
                    }
lbl58:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u001b\u0086\u00c4\u00e4\b\u0089\u00ce\u008a\u0006\u0002\u0016\u00ae\u00c4\u00f4\u00b9Z";
                        var10_15 = "\u001b\u0086\u00c4\u00e4\b\u0089\u00ce\u008a\u0006\u0002\u0016\u00ae\u00c4\u00f4\u00b9Z".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v7 = var11_12;
                            v8 = var8_13++;
                            v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v10 = 0;
                            break block15;
                            break;
                        }
                        break;
                    }
lbl71:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        break block16;
                        break;
                    }
                }
                var13_18 = v9;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v11 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
                switch (v10) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl84:
                    // 1 sources

                    ** continue;
                }
            }
            lP.KaxKL = var11_12;
            lP.Vgibd = new Integer[12];
            lP.KhWwj = (int)lP.chy("q", (int)12769, (long)(var16 ^ 4904930010869667720L));
            lP.HBHSs = (int)lP.chy("q", (int)26804, (long)(var16 ^ 2817515029522140881L));
            lP.iYpaF = (int)lP.chy("q", (int)18392, (long)(var16 ^ 2103880364131082686L));
            lP.qkiXH = (int)lP.chy("q", (int)9822, (long)(var16 ^ 5445074071285268534L));
            lP.qnDjA = (int)lP.chy("q", (int)22360, (long)(var16 ^ 6780327527577383228L));
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v12 = SecretKeyFactory.getInstance("DES");
            v13 = new byte[8];
            v14 = v13;
            v13[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v14 = v14;
                v14[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block17;
lbl103:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
        var2_22 = 5060178470276032762L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        lP.vCtRE = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    private static String chs(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    private static Throwable chr(Throwable throwable) {
        return throwable;
    }

    public void cgZ(Runnable runnable) {
    }

    public boolean cgY() {
        boolean bl2;
        block10: {
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = kNCTj ^ 0x798D1FCA0CF0L;
                        stringArray = lR.ciF();
                        try {
                            try {
                                bl2 = this.cgW();
                                if (stringArray == null) break block8;
                                if (bl2) break block9;
                            }
                            catch (MatchException matchException) {
                                throw lP.chr(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                    }
                    bl2 = this.chj();
                }
                try {
                    try {
                        if (stringArray == null) break block10;
                        if (bl2) break block11;
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                    this.chl();
                    return false;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            this.che();
            bl2 = true;
        }
        return bl2;
    }

    public void chl() {
        block14: {
            lP lP2;
            block12: {
                String[] stringArray;
                block10: {
                    block11: {
                        long l2 = kNCTj ^ 0x441FD2916294L;
                        stringArray = lR.ciF();
                        try {
                            try {
                                lP2 = this;
                                if (stringArray == null) break block10;
                                if (lP2.kwzfa) break block11;
                            }
                            catch (MatchException matchException) {
                                throw lP.chr(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                    }
                    lP2 = this;
                }
                try {
                    block13: {
                        try {
                            try {
                                if (stringArray == null) break block12;
                                if (lP2.qTwYj == null) break block13;
                            }
                            catch (MatchException matchException) {
                                throw lP.chr(matchException);
                            }
                            User32.INSTANCE.ShowWindow(this.qTwYj, 0);
                            if (stringArray != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                    }
                    lP2 = this;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            GLFW.glfwHideWindow((long)lP2.elAyx);
        }
        this.kwzfa = false;
    }

    public boolean cgW() {
        long l2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l3 = kNCTj ^ 0x2DFB1A9AA7A6L;
                    stringArray = lR.ciF();
                    try {
                        try {
                            long l4 = this.elAyx - 0L;
                            l2 = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                            if (stringArray == null) break block6;
                            if (l2 == false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                        l2 = (long)GLFW.glfwWindowShouldClose((long)this.elAyx);
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (l2 != false) break block7;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
                l2 = 1;
                break block8;
            }
            l2 = 0;
        }
        return (boolean)l2;
    }

    public void chf(int n2, int n3) {
        int n4;
        long l2;
        block5: {
            block6: {
                l2 = kNCTj ^ 0x372BA00FB974L;
                String[] stringArray = lR.ciF();
                try {
                    n4 = this.cgW();
                    if (stringArray == null) break block5;
                    if (n4 != 0) break block6;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
                return;
            }
            this.IUKmP = this.chi();
            n4 = this.chg();
        }
        int n5 = n4;
        int n6 = this.chh();
        int n7 = n2 - this.IUKmP;
        int n8 = n3 - this.IUKmP;
        try {
            GLFW.glfwSetWindowPos((long)this.elAyx, (int)n7, (int)n8);
            GLFW.glfwSetWindowSize((long)this.elAyx, (int)n5, (int)n6);
            if (this.qTwYj != null) {
                User32.INSTANCE.SetWindowPos(this.qTwYj, new WinDef.HWND(Pointer.createConstant((long)vCtRE)), n7, n8, n5, n6, (int)lP.chy("q", (int)32109, (long)(0x1A535E01E449EC32L ^ l2)));
            }
        }
        catch (MatchException matchException) {
            throw lP.chr(matchException);
        }
    }

    public void cgX() {
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    public void cha(Runnable runnable) {
        long l2;
        block9: {
            block10: {
                long l3 = kNCTj ^ 0x4B886F97FCBCL;
                String[] stringArray = lR.ciF();
                l2 = this.elAyx;
                if (stringArray == null) break block9;
                try {
                    block12: {
                        if (l2 != 0L) break block10;
                        break block12;
                        catch (Throwable throwable) {
                            throw lP.chr(throwable);
                        }
                    }
                    return;
                }
                catch (Throwable throwable) {
                    throw lP.chr(throwable);
                }
            }
            l2 = GLFW.glfwGetCurrentContext();
        }
        long l4 = l2;
        GLCapabilities gLCapabilities = GL.getCapabilities();
        try {
            GLFW.glfwMakeContextCurrent((long)this.elAyx);
            GL.setCapabilities((GLCapabilities)this.BSwIK);
            runnable.run();
        }
        catch (Throwable throwable) {
        }
        finally {
            this.chq(l4, gLCapabilities);
            GLFW.glfwDestroyWindow((long)this.elAyx);
            this.elAyx = 0L;
            this.qTwYj = null;
            this.BSwIK = null;
            this.kwzfa = false;
            this.IUKmP = 0;
        }
    }

    private static CallSite chy(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    private boolean chj() {
        long l2;
        block16: {
            boolean bl2;
            block18: {
                String[] stringArray;
                long l3;
                long l4;
                block17: {
                    block15: {
                        l4 = kNCTj ^ 0x2D378B7B747BL;
                        l3 = this.chp();
                        stringArray = lR.ciF();
                        try {
                            try {
                                long l5 = l3 - 0L;
                                l2 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                                if (stringArray == null) break block15;
                                if (l2 == false) break block16;
                            }
                            catch (MatchException matchException) {
                                throw lP.chr(matchException);
                            }
                            l2 = GLFW.glfwGetWindowAttrib((long)l3, (int)lP.chy("q", (int)10092, (long)(0x6675967918817B3DL ^ l4)));
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (l2 != false) break block16;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                        l2 = GLFW.glfwGetWindowAttrib((long)l3, (int)lP.chy("q", (int)687, (long)(0x2D998D8D582BDEFBL ^ l4)));
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                }
                try {
                    try {
                        try {
                            bl2 = true;
                            if (stringArray == null) break block18;
                            if (l2 != bl2) break block16;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                        l2 = GLFW.glfwGetWindowAttrib((long)l3, (int)lP.chy("q", (int)16490, (long)(0x2C90427CCFFD1C3CL ^ l4)));
                        if (stringArray == null) return (boolean)l2;
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                    bl2 = true;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            if (l2 == bl2) {
                l2 = 1;
                return (boolean)l2;
            }
        }
        l2 = 0;
        return (boolean)l2;
    }

    private void che() {
        int n2 = this.chn();
        int n3 = this.cho();
        this.chf(n2, n3);
    }

    private void chq(long l2, GLCapabilities gLCapabilities) {
        block4: {
            block5: {
                long l3 = kNCTj ^ 0x7C325CD1A71L;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (l2 == 0L) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                    GLFW.glfwMakeContextCurrent((long)l2);
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            GL.setCapabilities((GLCapabilities)gLCapabilities);
        }
    }

    private void chb(WinDef.HWND hWND) {
    }

    private int cho() {
        int[] nArray = new int[1];
        int[] nArray2 = new int[1];
        GLFW.glfwGetWindowPos((long)this.chp(), (int[])nArray, (int[])nArray2);
        return nArray2[0];
    }

    private void chk() {
        block4: {
            lP lP2;
            block5: {
                long l2 = kNCTj ^ 0x39D9BE98BD63L;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        lP2 = this;
                        if (stringArray == null) break block4;
                        if (!lP2.kwzfa) break block5;
                    }
                    catch (MatchException matchException) {
                        throw lP.chr(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            this.chm();
            lP2 = this;
        }
        lP2.kwzfa = true;
    }

    private long chp() {
        return ((WindowAccessor)rD.dlmvG.getWindow()).getHandle();
    }

    private static String cht(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5CA3;
        if (QsknF[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])kkDgQ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kkDgQ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lP", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = Jzazp[n3].getBytes("ISO-8859-1");
            lP.QsknF[n3] = lP.chs(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return QsknF[n3];
    }

    private int chg() {
        return Math.max(1, rD.dlmvG.getWindow().getWidth() + this.IUKmP * 2);
    }

    private int chn() {
        int[] nArray = new int[1];
        int[] nArray2 = new int[1];
        GLFW.glfwGetWindowPos((long)this.chp(), (int[])nArray, (int[])nArray2);
        return nArray[0];
    }

    private void chd(WinDef.HWND hWND) {
        try {
            jm$tP jm$tP = new jm$tP();
            jm$tP.rBxXl = new WinDef.DWORD(1L);
            jm$tP.sYiMT = true;
            jm$tP.SXjPG = null;
            jm$tP.frouI = false;
            jm$tP.write();
            jm$tQ.nQOKr.DwmEnableBlurBehindWindow(hWND, jm$tP).intValue();
        }
        catch (Throwable throwable) {
            // empty catch block
        }
    }

    private int chi() {
        int n2;
        long l2 = kNCTj ^ 0x20C052FF917L;
        try {
            n2 = rt.dju() == PlatformEnum.WINDOWS ? 1 : 0;
        }
        catch (MatchException matchException) {
            throw lP.chr(matchException);
        }
        return n2;
    }

    private static int chw(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6BC;
        if (Vgibd[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = KaxKL[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])sFkGh.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    sFkGh.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lP", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lP.Vgibd[n3] = n4;
        }
        return Vgibd[n3];
    }

    private static int chx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = lP.chw(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private int chh() {
        return Math.max(1, rD.dlmvG.getWindow().getHeight() + this.IUKmP * 2);
    }

    private static Object chu(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = lP.cht(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Loose catch block
     */
    private boolean chc(WinDef.HWND hWND) {
        long l2 = kNCTj ^ 0x1ECF0256C739L;
        String[] stringArray = lR.ciF();
        try {
            int n2;
            block10: {
                block9: {
                    Integer n3;
                    block8: {
                        jm$tS jm$tS = new jm$tS();
                        jm$tS.aaeEj = (int)lP.chy("q", (int)11204, (long)(0x59BA7AF83E1A44DAL ^ l2));
                        jm$tS.oDYGJ = (int)lP.chy("q", (int)17984, (long)(0x79B3173DB4E82955L ^ l2));
                        jm$tS.ycxcQ = 0;
                        jm$tS.GOmgg = 0;
                        jm$tS.write();
                        jm$tO jm$tO = new jm$tO();
                        jm$tO.pqLqB = (int)lP.chy("q", (int)15228, (long)(0x1E1E5AA99F5B546BL ^ l2));
                        jm$tO.QEuUZ = jm$tS.getPointer();
                        jm$tO.zJceD = jm$tS.size();
                        jm$tO.write();
                        Function function = NativeLibrary.getInstance((String)((Object)lP.chv("i", (int)11842, (long)(0x1FC5DCBA4B279B49L ^ l2)))).getFunction((String)((Object)lP.chv("i", (int)26949, (long)(0x79D1A318FA05C4FL ^ l2))));
                        Integer n4 = (Integer)function.invoke(Integer.class, new Object[]{hWND, jm$tO});
                        try {
                            n3 = n4;
                            if (stringArray == null) break block8;
                            if (n3 == null) break block9;
                        }
                        catch (Throwable throwable) {
                            throw lP.chr(throwable);
                        }
                        n3 = n4;
                    }
                    n2 = n3;
                    if (stringArray == null) break block10;
                    try {
                        block11: {
                            if (n2 != 1) break block9;
                            break block11;
                            catch (Throwable throwable) {
                                throw lP.chr(throwable);
                            }
                        }
                        n2 = 1;
                        break block10;
                    }
                    catch (Throwable throwable) {
                        throw lP.chr(throwable);
                    }
                }
                n2 = 0;
            }
            return n2 != 0;
        }
        catch (Throwable throwable) {
            return false;
        }
    }

    private void chm() {
        block8: {
            lP lP2;
            block6: {
                long l2 = kNCTj ^ 0x3D379A13CFEL;
                String[] stringArray = lR.ciF();
                try {
                    block7: {
                        try {
                            try {
                                lP2 = this;
                                if (stringArray == null) break block6;
                                if (lP2.qTwYj == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw lP.chr(matchException);
                            }
                            User32.INSTANCE.ShowWindow(this.qTwYj, 4);
                            if (stringArray != null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw lP.chr(matchException);
                        }
                    }
                    lP2 = this;
                }
                catch (MatchException matchException) {
                    throw lP.chr(matchException);
                }
            }
            GLFW.glfwShowWindow((long)lP2.elAyx);
        }
    }

    private static CallSite chv(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lP.class, "chx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(lP.class, "chu", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

