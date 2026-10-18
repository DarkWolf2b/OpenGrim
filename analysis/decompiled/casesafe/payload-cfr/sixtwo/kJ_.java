/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_290
 *  net.minecraft.class_4588
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_290;
import net.minecraft.class_4588;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jI;
import sixtwo.jL;
import sixtwo.kD;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lF;
import sixtwo.lh;
import sixtwo.lj;
import sixtwo.lq;
import sixtwo.mG;

public class kJ
extends kQ<kD> {
    private static final kS fxNIh;
    private static final float fWKWj = 0.05f;
    private static final float fFhwG = 0.5f;
    private static final float vXVit = 0.0f;
    private kS JjsUg;
    private lq liGel;
    private static boolean RSYgP;
    private static final long jOIHs;
    private static final String[] hwBvu;
    private static final String[] yvyFe;
    private static final Map gnXDz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kJ.jOIHs = gb.aYR(-3576148397043779238L, 6938331427060927409L, MethodHandles.lookup().lookupClass()).a(104542642239943L);
                kJ.gnXDz = new HashMap<K, V>(13);
                kJ.bUh(false);
                var0 = kJ.jOIHs ^ 40525954447845L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[13];
                var7_4 = 0;
                var6_5 = "\u0086\u00f1<<\u00c9S\u008f\u00eb\nKP<\u00a8M\u001el\u00a5g]`\u00acB\u00b4x\u00ee\n\u0002\u00e6~J\u0018\u00bf\u0084\t\u00cc\u00ce\u00c3\u0003V|\u0018\u0092$\u000e\u00ed\u00df$0d\u0002\u00a1x\u00ed\u00ee\u00bc8\u00a4\u00dd\u0007\u00b9\u00c6h\u00d6\u0097\u008b\u0018\u00b2b\"X\u00bf\u0093ZY\u00fd\u0006C\u00ba\u0082\u00aa2eY}<\u00dd\u00893\u00d3\u00bb\u0018\u00a7\u00ca[\u00a8\u00d5\u001d\u00a8\u00ea\u00a3\u00b6O\u00d1D\u001e>K\u00f4\u00c6M1\u00a0.\u00f2\u009f\u0010\t\u0085M\u0081G1\u0087^\u008f\u00dc\u009c\u00a3|\u00d7\u0089\u00f9\u0010\u00f7\u00c4\u0003\u000bnj\u00d9\u00bb\u00c8+X\u00fan={W \u00a7D_)\u0088\\2\u0012P6\u00cc\u0095\u0018aU\u00b5\u008f\u00ec@\u0080\u00df\u00e2A\u00c1\u00c3B\u00c3\u00a8gs\u0018\u0000\u0010\u00e4l1\u0002\u0083\u00a6\u00b4?\u0014j<pv\u000fEX\u0018\u00f8Q\u00a5\u00abJ |\u00dd\u00fc=:t\u00db5\u0013\u00f8t\b\u009aW\u008f\u000b\u009a\u00c2 M1\u00ddM\u00f2\u00b3\u00af\u00af\u0087\u00fd\u00a2#U\u0000\u00ad\u007f#\u009b\u008fb\u00ec\fH\u00cf3\u00df9b\u00ff|Qt\u00183\u00ac.\u0001\u0019\u00c2\u00e8\u00f0\u00c2d\u00d3\u001a\u008er,\u0097\u00a7\u00b1\u001d/\u001e\u00f1O\u009f";
                var8_6 = "\u0086\u00f1<<\u00c9S\u008f\u00eb\nKP<\u00a8M\u001el\u00a5g]`\u00acB\u00b4x\u00ee\n\u0002\u00e6~J\u0018\u00bf\u0084\t\u00cc\u00ce\u00c3\u0003V|\u0018\u0092$\u000e\u00ed\u00df$0d\u0002\u00a1x\u00ed\u00ee\u00bc8\u00a4\u00dd\u0007\u00b9\u00c6h\u00d6\u0097\u008b\u0018\u00b2b\"X\u00bf\u0093ZY\u00fd\u0006C\u00ba\u0082\u00aa2eY}<\u00dd\u00893\u00d3\u00bb\u0018\u00a7\u00ca[\u00a8\u00d5\u001d\u00a8\u00ea\u00a3\u00b6O\u00d1D\u001e>K\u00f4\u00c6M1\u00a0.\u00f2\u009f\u0010\t\u0085M\u0081G1\u0087^\u008f\u00dc\u009c\u00a3|\u00d7\u0089\u00f9\u0010\u00f7\u00c4\u0003\u000bnj\u00d9\u00bb\u00c8+X\u00fan={W \u00a7D_)\u0088\\2\u0012P6\u00cc\u0095\u0018aU\u00b5\u008f\u00ec@\u0080\u00df\u00e2A\u00c1\u00c3B\u00c3\u00a8gs\u0018\u0000\u0010\u00e4l1\u0002\u0083\u00a6\u00b4?\u0014j<pv\u000fEX\u0018\u00f8Q\u00a5\u00abJ |\u00dd\u00fc=:t\u00db5\u0013\u00f8t\b\u009aW\u008f\u000b\u009a\u00c2 M1\u00ddM\u00f2\u00b3\u00af\u00af\u0087\u00fd\u00a2#U\u0000\u00ad\u007f#\u009b\u008fb\u00ec\fH\u00cf3\u00df9b\u00ff|Qt\u00183\u00ac.\u0001\u0019\u00c2\u00e8\u00f0\u00c2d\u00d3\u001a\u008er,\u0097\u00a7\u00b1\u001d/\u001e\u00f1O\u009f".length();
                var5_7 = 40;
                var4_8 = -1;
lbl21:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kJ.bUl(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0088\u00c7\u00fc\u00c9\u001fW\u0093\u000b\u00efp\u001d\u0097\bA3\"\u0014\u008b\u008f\u00a0\u007fh\u00d6\u00d2m\u00921\u00f8\u00eb\u0087`\u0093\u0018\u00d0U\u0004s\u0098\u00cb-\u00d9\u00e2\u008eM\u000f\u00c6\u001b,\u000b\u00d1\u0086\u00d0/`\u009biG";
                    var8_6 = "\u0088\u00c7\u00fc\u00c9\u001fW\u0093\u000b\u00efp\u001d\u0097\bA3\"\u0014\u008b\u008f\u00a0\u007fh\u00d6\u00d2m\u00921\u00f8\u00eb\u0087`\u0093\u0018\u00d0U\u0004s\u0098\u00cb-\u00d9\u00e2\u008eM\u000f\u00c6\u001b,\u000b\u00d1\u0086\u00d0/`\u009biG".length();
                    var5_7 = 32;
                    var4_8 = -1;
lbl35:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = kJ.bUl(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
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
        kJ.hwBvu = var9_3;
        kJ.yvyFe = new String[13];
        kJ.fxNIh = kS.bVE().duk(lh.GpGUc).duo(false).dul(false).dun(false).dup();
    }

    @Override
    public void flush() {
        kJ kJ2;
        block4: {
            block5: {
                long l = jOIHs ^ 0x7100C47A51B7L;
                boolean bl = kJ.bUi();
                this.bVj();
                boolean bl2 = bl;
                try {
                    try {
                        kJ2 = this;
                        if (bl2) break block4;
                        if (kJ2.JjsUg != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kJ.bUk(matchException);
                    }
                    this.JjsUg = this.defaultState();
                }
                catch (MatchException matchException) {
                    throw kJ.bUk(matchException);
                }
            }
            this.bUf();
            kJ2 = this;
        }
        kJ2.bVi(VertexFormat.class_5596.field_27382, class_290.field_1575);
    }

    @Override
    public kS defaultState() {
        return fxNIh;
    }

    @Override
    public void endBatch() {
        block4: {
            kJ kJ2;
            block5: {
                long l = jOIHs ^ 0x4044CBB9720AL;
                boolean bl = kJ.bUi();
                try {
                    try {
                        kJ2 = this;
                        if (bl) break block4;
                        if (kJ2.bVk()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kJ.bUk(matchException);
                    }
                    this.liGel = null;
                    this.JjsUg = null;
                    return;
                }
                catch (MatchException matchException) {
                    throw kJ.bUk(matchException);
                }
            }
            this.bVj();
            this.bUf();
            this.bVl();
            this.liGel = null;
            kJ2 = this;
        }
        kJ2.JjsUg = null;
    }

    public static boolean bUj() {
        boolean bl = kJ.bUi();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw kJ.bUk(matchException);
        }
        return false;
    }

    public static boolean bUi() {
        return RSYgP;
    }

    public static void bUh(boolean bl) {
        RSYgP = bl;
    }

    public void bUc(lq lq2) {
        block19: {
            kJ kJ2;
            block20: {
                boolean bl;
                block17: {
                    block18: {
                        kJ kJ3;
                        block15: {
                            long l = jOIHs ^ 0x99867CB31BCL;
                            bl = kJ.bUi();
                            try {
                                if (lq2 == null) {
                                    return;
                                }
                            }
                            catch (MatchException matchException) {
                                throw kJ.bUk(matchException);
                            }
                            try {
                                block16: {
                                    try {
                                        try {
                                            try {
                                                kJ3 = this;
                                                if (bl) break block15;
                                                if (kJ3.WfBOj == null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw kJ.bUk(matchException);
                                            }
                                            kJ2 = this;
                                            if (bl) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw kJ.bUk(matchException);
                                        }
                                        if (kJ2.JjsUg != null) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw kJ.bUk(matchException);
                                    }
                                }
                                kJ3 = this;
                            }
                            catch (MatchException matchException) {
                                throw kJ.bUk(matchException);
                            }
                        }
                        kJ3.bUb(lq2, this.JjsUg);
                        return;
                    }
                    kJ2 = this;
                }
                try {
                    try {
                        if (bl) break block19;
                        if (kJ2.liGel != lq2) break block20;
                    }
                    catch (MatchException matchException) {
                        throw kJ.bUk(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kJ.bUk(matchException);
                }
            }
            this.flush();
            kJ2 = this;
        }
        kJ2.liGel = lq2;
    }

    public void bUa(lq lq2) {
        this.bUb(lq2, this.defaultState());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public void bUd(kD kD2) {
        Matrix4f matrix4f;
        block19: {
            kD kD3;
            block17: {
                block18: {
                    boolean bl;
                    block16: {
                        int[] nArray;
                        block15: {
                            long l = jOIHs ^ 0x4AEF0D1FBF24L;
                            boolean bl2 = kJ.bUi();
                            this.bVj();
                            bl = bl2;
                            try {
                                try {
                                    try {
                                        try {
                                            if (this.liGel == null) return;
                                            nArray = kD2.bTc();
                                            if (bl) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw kJ.bUk(matchException);
                                        }
                                        if (nArray == null) return;
                                    }
                                    catch (MatchException matchException) {
                                        throw kJ.bUk(matchException);
                                    }
                                    kD3 = kD2;
                                    if (bl) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw kJ.bUk(matchException);
                                }
                                nArray = kD3.bTc();
                            }
                            catch (MatchException matchException) {
                                throw kJ.bUk(matchException);
                            }
                        }
                        try {
                            if (nArray.length == 0) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw kJ.bUk(matchException);
                        }
                        kD3 = kD2;
                    }
                    try {
                        try {
                            if (bl) break block17;
                            if (kD3.bSX() == null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw kJ.bUk(matchException);
                        }
                        matrix4f = kD2.bSX();
                        break block19;
                    }
                    catch (MatchException matchException) {
                        throw kJ.bUk(matchException);
                    }
                }
                kD3 = kD2;
            }
            matrix4f = jI.bIl((Matrix3x2fc)kD3.bSW());
        }
        Matrix4f matrix4f2 = matrix4f;
        this.bUe(this.liGel, kD2.bTc(), kD2.bTb(), kD2.bTd(), matrix4f2, kD2.bSY(), kD2.bSZ(), kD2.bTa());
    }

    public void bUb(lq lq2, kS kS2) {
        kS kS3;
        block2: {
            block3: {
                long l = jOIHs ^ 0x58EBC45CD34EL;
                boolean bl = kJ.bUj();
                try {
                    kJ kJ2 = this;
                    kS3 = kS2;
                    if (!bl) break block2;
                    if (kS3 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw kJ.bUk(matchException);
                }
                kS3 = kS2;
                break block2;
            }
            kS3 = this.defaultState();
        }
        kJ2.JjsUg = kS3;
        this.liGel = lq2;
        this.bVi(VertexFormat.class_5596.field_27382, class_290.field_1575);
    }

    private void bUe(lq lq2, int[] nArray, float f, mG mG2, Matrix4f matrix4f, float f2, float f3, float f4) {
        this.bUc(lq2);
        lj lj2 = lq2.cav();
        lj2.bYt(matrix4f, (class_4588)this.WfBOj, nArray, f, 0.025f * f, 0.0f, f2, f3 + lj2.bYG(f), f4, mG2.coh());
    }

    private static /* synthetic */ void bUg(lj lj2, RenderPass renderPass) {
        long l = jOIHs ^ 0x542EABCDEC42L;
        renderPass.bindTexture((String)((Object)kJ.bUo("w", (int)7940, (long)(0x558C155C6F54305BL ^ l))), lj2.bYN().method_71659(), lj2.bYN().method_75484());
        jL.xOjEv.bJl();
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)18829, (long)(0x643B68A56CA5E6D4L ^ l))), lj2.bYO().dvj());
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)1008, (long)(0x2D0B0F5729E6ACA4L ^ l))), 0.05f);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)21454, (long)(0x2A8362AC18F0FC9BL ^ l))), 0.5f);
        jL.xOjEv.bJx((String)((Object)kJ.bUo("w", (int)20927, (long)(0x5780193EBCCA7EE7L ^ l))), 0);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)10314, (long)(0x6837213D31CA8717L ^ l))), 0.0f);
        jL.xOjEv.bJt((String)((Object)kJ.bUo("w", (int)19611, (long)(0x5193E04F8C2AE3C5L ^ l))), 0.0f, 0.0f, 0.0f, 0.0f);
        jL.xOjEv.bJu((String)((Object)kJ.bUo("w", (int)18884, (long)(0x6BD78C27F4646698L ^ l))), jF.bHw());
        jL.xOjEv.bJx((String)((Object)kJ.bUo("w", (int)11095, (long)(0x5ABE1BB3AA0D840DL ^ l))), 0);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)3815, (long)(0x6F71F7509D7221BCL ^ l))), 0.0f);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)11096, (long)(0x64C92E6212C30409L ^ l))), 1.0f);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)24094, (long)(0x7120406953E4F148L ^ l))), 0.0f);
        jL.xOjEv.bJq((String)((Object)kJ.bUo("w", (int)28742, (long)(0x7023F2ED1180DF11L ^ l))), 0.0f);
    }

    /*
     * Unable to fully structure code
     */
    private void bUf() {
        block30: {
            block26: {
                block23: {
                    block25: {
                        block24: {
                            block22: {
                                block21: {
                                    block20: {
                                        var1_1 = kJ.jOIHs ^ 19050840407136L;
                                        var3_2 = kJ.bUj();
                                        v0 = this;
                                        if (!var3_2) break block20;
                                        try {
                                            block28: {
                                                if (v0.WfBOj == null) ** GOTO lbl24
                                                break block28;
                                                catch (Throwable v1) {
                                                    throw kJ.bUk(v1);
                                                }
                                            }
                                            v0 = this;
                                        }
                                        catch (Throwable v2) {
                                            throw kJ.bUk(v2);
                                        }
                                    }
                                    if (v0.liGel == null) ** GOTO lbl24
                                    try {
                                        block29: {
                                            if (kR.dCUka != null) break block21;
                                            break block29;
                                            catch (Throwable v3) {
                                                throw kJ.bUk(v3);
                                            }
                                        }
                                        return;
                                    }
                                    catch (Throwable v4) {
                                        throw kJ.bUk(v4);
                                    }
                                }
                                var4_3 = this.WfBOj.method_60794();
                                try {
                                    v5 = var4_3;
                                    if (!var3_2) break block22;
                                    if (v5 != null) break block23;
                                    v5 = var4_3;
                                }
                                catch (Throwable var5_5) {
                                    block27: {
                                        try {
                                            v6 = var4_3;
                                            if (var3_2) {
                                                if (v6 == null) break block27;
                                            }
                                            ** GOTO lbl46
                                        }
                                        catch (Throwable v7) {
                                            throw kJ.bUk(v7);
                                        }
                                        try {
                                            v6 = var4_3;
lbl46:
                                            // 2 sources

                                            v6.close();
                                        }
                                        catch (Throwable var6_7) {
                                            var5_5.addSuppressed(var6_7);
                                        }
                                    }
                                    throw var5_5;
                                }
                            }
                            try {
                                if (!var3_2) break block24;
                                if (v5 == null) break block25;
                            }
                            catch (Throwable v8) {
                                throw kJ.bUk(v8);
                            }
                            v5 = var4_3;
                        }
                        v5.close();
                    }
                    return;
                }
                var5_4 = this.liGel.cav();
                var6_6 = kR.dCUka.bUZ(this.JjsUg);
                lF.cfP(var6_6, var4_3, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bUg(sixtwo.lj com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((lj)var5_4));
                v9 = var4_3;
                if (!var3_2) break block26;
                if (v9 == null) break block30;
                v9 = var4_3;
            }
            v9.close();
        }
    }

    private static CallSite bUo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kJ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bUl(byte[] byArray) {
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

    private static Throwable bUk(Throwable throwable) {
        return throwable;
    }

    private static Object bUn(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kJ.bUm(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bUm(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7BDF;
        if (yvyFe[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])gnXDz.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gnXDz.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kJ", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = hwBvu[n2].getBytes("ISO-8859-1");
            kJ.yvyFe[n2] = kJ.bUl(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return yvyFe[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kJ.class, "bUn", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
