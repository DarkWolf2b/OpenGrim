/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.buffers.GpuBufferSlice
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_276
 *  net.minecraft.class_9801
 */
package sixtwo;

import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.systems.RenderSystem;
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
import java.util.OptionalDouble;
import java.util.OptionalInt;
import java.util.function.Consumer;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;
import net.minecraft.class_9801;
import sixtwo.gb;
import sixtwo.jG;
import sixtwo.jo;
import sixtwo.lB;
import sixtwo.lC;
import sixtwo.lD;
import sixtwo.lI;
import sixtwo.lr;

public final class lF {
    private static final ThreadLocal<lB> ReACR;
    private static final long uvZFB;
    private static final String[] maWGS;
    private static final String[] iimvN;
    private static final Map LJNca;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                lF.uvZFB = gb.aYR(-7082319368593597064L, 4003172569416304658L, MethodHandles.lookup().lookupClass()).a(22140624023131L);
                lF.LJNca = new HashMap<K, V>(13);
                var0 = lF.uvZFB ^ 57732277940055L;
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
                var9_3 = new String[9];
                var7_4 = 0;
                var6_5 = "\u00d0\u00c3zi\u0082\u00ff\u009e\u00c7w-y42\u00e3x\u0016S\u008aS\b\u00f7xe\u00be\u00d9\u00fb:\u00e8\u0007\u00ee\u001c\u00be\u0018\u00cb\u00a2\u00e9\u008fr0\u00aaz\u0012v\u008c\u0005\u0099\u00ef\u00ba6\u0086\u0097|\u00be\u00f0T\u001a\u00e10~\u00fa\u001e\u00c9\u00e9\u0014\u00d4\u00ccW\u000enp\u00ef\u00c7\u00b6+\u00d37s\u00da,\u0086\u0019\u00afC\u00e8.q\u0007K\u0013\u0007\u00c4\u00ec\u00e0\u0090>\u0002\u00139\r\u00b9\u0091\u00cb\u00e3\u0013{\u00b3(\u001f6S\u00920\u0094Q\u0096*l\u00a3\u008dT*\u00b4M\u00f5\u00d9\u00d3\u00f3\u00e3(5y\u00a9Fy.yo\u00c5\u00ee\u0013\u00c3\u00bd\u00f0\u00e2\u00da]\u0011\u0010E\r\r\u00eb\u000b\u0019\u00f6\u0000\rt\u001d\u009a\u0091\u0002E6(N\u00e2 Q\u0090O\u00c20\u0090\u00e2 m\u00f0O\u00b9\u00d5\u00cc\u00f3\u00a6\u0080\u001b\u00b0\u00044#\u00b4v{\u00b85\u0081\u00da\\\u00cf\u0085\u00ba@\u00del\u008d(\u001b\u00fd\u001c3\u009fw\u00eeL\u008a\u00ce\t[\u00db\u0085\u00f4\u00b6@\u001eXJ\u00eb\u00ba\u0007\f\u00ffT\u0015p\u008c\u0019\u009c\u0017YPd0\u00cd\u00e8\u00c5z";
                var8_6 = "\u00d0\u00c3zi\u0082\u00ff\u009e\u00c7w-y42\u00e3x\u0016S\u008aS\b\u00f7xe\u00be\u00d9\u00fb:\u00e8\u0007\u00ee\u001c\u00be\u0018\u00cb\u00a2\u00e9\u008fr0\u00aaz\u0012v\u008c\u0005\u0099\u00ef\u00ba6\u0086\u0097|\u00be\u00f0T\u001a\u00e10~\u00fa\u001e\u00c9\u00e9\u0014\u00d4\u00ccW\u000enp\u00ef\u00c7\u00b6+\u00d37s\u00da,\u0086\u0019\u00afC\u00e8.q\u0007K\u0013\u0007\u00c4\u00ec\u00e0\u0090>\u0002\u00139\r\u00b9\u0091\u00cb\u00e3\u0013{\u00b3(\u001f6S\u00920\u0094Q\u0096*l\u00a3\u008dT*\u00b4M\u00f5\u00d9\u00d3\u00f3\u00e3(5y\u00a9Fy.yo\u00c5\u00ee\u0013\u00c3\u00bd\u00f0\u00e2\u00da]\u0011\u0010E\r\r\u00eb\u000b\u0019\u00f6\u0000\rt\u001d\u009a\u0091\u0002E6(N\u00e2 Q\u0090O\u00c20\u0090\u00e2 m\u00f0O\u00b9\u00d5\u00cc\u00f3\u00a6\u0080\u001b\u00b0\u00044#\u00b4v{\u00b85\u0081\u00da\\\u00cf\u0085\u00ba@\u00del\u008d(\u001b\u00fd\u001c3\u009fw\u00eeL\u008a\u00ce\t[\u00db\u0085\u00f4\u00b6@\u001eXJ\u00eb\u00ba\u0007\f\u00ffT\u0015p\u008c\u0019\u009c\u0017YPd0\u00cd\u00e8\u00c5z".length();
                var5_7 = 32;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lF.cgi(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "k\u00e6\u001d\u00cf_\u00dc\u008f*\u00d1\u00f2\u00fd\u001f\u008eK&\u00ff\u001fs\u00e3\u00d3\u0005\u00aa\u00df\u00b6j\u00f4\u0095\u00bb\u00bf\u00c2\u0087\u0099\u00d3j\\d\u00a1\u00b38V8\u009a\u0081\u00c01\u00a4\u00cd\u00fc\u00cb}_\u008fd\u00d2\u00c6\u0090\u0012\u00d4\u00c4\u0099x\u0097\u00fa\u00f9\u00cc\u0083g\u0082\u00a0\u00c3\u009cV\b\u00ae\u0085\u0007\u0006y\u001ds\u00d5\u00bcZ\u0093\u000f\u00ae\f\u0093\u0003\u00d1|\u00f0\u00f0W<\u00eb\u00e1";
                    var8_6 = "k\u00e6\u001d\u00cf_\u00dc\u008f*\u00d1\u00f2\u00fd\u001f\u008eK&\u00ff\u001fs\u00e3\u00d3\u0005\u00aa\u00df\u00b6j\u00f4\u0095\u00bb\u00bf\u00c2\u0087\u0099\u00d3j\\d\u00a1\u00b38V8\u009a\u0081\u00c01\u00a4\u00cd\u00fc\u00cb}_\u008fd\u00d2\u00c6\u0090\u0012\u00d4\u00c4\u0099x\u0097\u00fa\u00f9\u00cc\u0083g\u0082\u00a0\u00c3\u009cV\b\u00ae\u0085\u0007\u0006y\u001ds\u00d5\u00bcZ\u0093\u000f\u00ae\f\u0093\u0003\u00d1|\u00f0\u00f0W<\u00eb\u00e1".length();
                    var5_7 = 40;
                    var4_8 = -1;
lbl34:
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
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lF.cgi(var10_9).intern();
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
lbl51:
                // 1 sources

                ** continue;
            }
        }
        lF.maWGS = var9_3;
        lF.iimvN = new String[9];
        lF.ReACR = ThreadLocal.withInitial((Supplier<lB>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cgg(), ()Lsixtwo/lB;)());
    }

    public static void cfW(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfQ(renderPipeline, class_98012, null);
    }

    public static void cfA(lI lI2) {
        lI2.execute();
    }

    public static void cfB(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfN(lB.xCeuB, renderPipeline, class_98012, 4, consumer);
    }

    private static void cfN(lB lB2, RenderPipeline renderPipeline, class_9801 class_98012, int n, Consumer<RenderPass> consumer) {
        lF.cfA(new lD(lB2, renderPipeline, class_98012, n, consumer));
    }

    public static void cfC(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfN(lB.xCeuB, renderPipeline, class_98012, 4, null);
    }

    public static void cfD(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfN(lB.rMraa, renderPipeline, class_98012, 4, consumer);
    }

    public static void cfF(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfN(lB.dlmOV, renderPipeline, class_98012, 4, consumer);
    }

    private static /* synthetic */ String cge() {
        long l = uvZFB ^ 0x19694E479C83L;
        return lF.cgl("o", (int)25041, (long)(0x654BAC986963A34L ^ l));
    }

    public static void cfP(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfS(lB.xCeuB, renderPipeline, class_98012, consumer);
    }

    private static /* synthetic */ String cgd() {
        long l = uvZFB ^ 0x12FF32663A8CL;
        return lF.cgl("o", (int)17195, (long)(0x1693A6C2CA2E3EC4L ^ l));
    }

    private static /* synthetic */ lB cgg() {
        return lB.xCeuB;
    }

    public static void cfR(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfS(lB.dlmOV, renderPipeline, class_98012, consumer);
    }

    public static void cfQ(RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfS(lB.rMraa, renderPipeline, class_98012, consumer);
    }

    private static void cgb(RenderPass renderPass, GpuBufferSlice gpuBufferSlice) {
        long l = uvZFB ^ 0x2D5A19ACFA89L;
        RenderSystem.bindDefaultUniforms((RenderPass)renderPass);
        renderPass.setUniform((String)((Object)lF.cgl("o", (int)22806, (long)(0x41570B593D93E4FAL ^ l))), gpuBufferSlice);
    }

    public static void cfV(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfP(renderPipeline, class_98012, null);
    }

    public static void cfI(class_276 class_2762, lB lB2, RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfU(class_2762, lB2, renderPipeline, class_98012, null);
    }

    private static /* synthetic */ String cgf() {
        long l = uvZFB ^ 0x41A5773EA53BL;
        return lF.cgl("o", (int)24737, (long)(0x335B19F3EC9082FBL ^ l));
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    static void cfO(lB var0, RenderPipeline var1_1, class_9801 var2_2, int var3_3, Consumer<RenderPass> var4_4) {
        block27: {
            block23: {
                block24: {
                    var5_5 = lF.uvZFB ^ 39303848405384L;
                    var8_6 = jo.bEp(var1_1);
                    var1_1 = jo.bEr(var1_1);
                    var7_7 = lC.cfk();
                    try {
                        if (var1_1 == null) {
                            return;
                        }
                    }
                    catch (Throwable v0) {
                        throw lF.cgh(v0);
                    }
                    var9_8 = var8_6.method_71639();
                    try {
                        v1 = var9_8;
                        if (var7_7 != null) break block23;
                        if (v1 != null) break block24;
                    }
                    catch (Throwable v2) {
                        throw lF.cgh(v2);
                    }
                    return;
                }
                v1 = var8_6.method_71640();
            }
            var10_9 = v1;
            var11_10 = lr.caC(var2_2.method_60818(), (String)lF.cgl("o", (int)17505, (long)(9025044213999807117L ^ var5_5)));
            var12_11 = var2_2.method_60822();
            var13_12 = var12_11.comp_752();
            var14_13 = var13_12.method_31973(var3_3);
            var15_14 = RenderSystem.getSequentialBuffer((VertexFormat.class_5596)VertexFormat.class_5596.field_27382).method_68274(var14_13);
            var16_15 = lF.cga(var0);
            var17_16 = lF.ReACR.get();
            lF.ReACR.set(var0);
            try {
                block25: {
                    var18_17 = RenderSystem.getDevice().createCommandEncoder().createRenderPass((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cge(), ()Ljava/lang/String;)(), var9_8, OptionalInt.empty(), var10_9, OptionalDouble.empty());
                    try {
                        block26: {
                            var18_17.setPipeline(var1_1);
                            lF.cgb(var18_17, var16_15);
                            jG.bHS(var18_17);
                            if (var7_7 != null) break block25;
                            try {
                                block29: {
                                    if (var4_4 == null) break block26;
                                    break block29;
                                    catch (Throwable v3) {
                                        throw lF.cgh(v3);
                                    }
                                }
                                var4_4.accept(var18_17);
                            }
                            catch (Throwable v4) {
                                throw lF.cgh(v4);
                            }
                        }
                        var18_17.setVertexBuffer(0, var11_10);
                        var18_17.setIndexBuffer(var15_14, RenderSystem.getSequentialBuffer((VertexFormat.class_5596)VertexFormat.class_5596.field_27382).method_31924());
                        var18_17.drawIndexed(0, 0, var14_13, 1);
                    }
                    catch (Throwable var19_18) {
                        block28: {
                            try {
                                v5 = var18_17;
                                if (var7_7 == null) {
                                    if (v5 == null) break block28;
                                }
                                ** GOTO lbl65
                            }
                            catch (Throwable v6) {
                                throw lF.cgh(v6);
                            }
                            try {
                                v5 = var18_17;
lbl65:
                                // 2 sources

                                v5.close();
                            }
                            catch (Throwable var20_19) {
                                var19_18.addSuppressed(var20_19);
                            }
                        }
                        throw var19_18;
                    }
                }
                if (var7_7 != null) break block27;
                try {
                    block30: {
                        if (var18_17 == null) break block27;
                        break block30;
                        catch (Throwable v7) {
                            throw lF.cgh(v7);
                        }
                    }
                    var18_17.close();
                }
                catch (Throwable v8) {
                    throw lF.cgh(v8);
                }
            }
            finally {
                lF.ReACR.set(var17_16);
            }
        }
    }

    /*
     * Exception decompiling
     */
    private static GpuBufferSlice cga(lB var0) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
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
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    static void cfT(lB var0, RenderPipeline var1_1, class_9801 var2_2, Consumer<RenderPass> var3_3) {
        block27: {
            block23: {
                block24: {
                    var4_4 = lF.uvZFB ^ 93648500158517L;
                    var7_5 = jo.bEp(var1_1);
                    var6_6 = lC.cfk();
                    var1_1 = jo.bEr(var1_1);
                    try {
                        if (var1_1 == null) {
                            return;
                        }
                    }
                    catch (Throwable v0) {
                        throw lF.cgh(v0);
                    }
                    var8_7 = var7_5.method_71639();
                    try {
                        v1 = var8_7;
                        if (var6_6 != null) break block23;
                        if (v1 != null) break block24;
                    }
                    catch (Throwable v2) {
                        throw lF.cgh(v2);
                    }
                    return;
                }
                v1 = var7_5.method_71640();
            }
            var9_8 = v1;
            var10_9 = var2_2.method_60822();
            var11_10 = var10_9.comp_752();
            var12_11 = var10_9.comp_750();
            var13_12 = var11_10.method_31973(var12_11);
            var14_13 = lr.caC(var2_2.method_60818(), (String)lF.cgl("o", (int)31842, (long)(417481556563774256L ^ var4_4)));
            var15_14 = RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var11_10).method_68274(var13_12);
            var16_15 = lF.cga(var0);
            var17_16 = lF.ReACR.get();
            lF.ReACR.set(var0);
            try {
                block25: {
                    var18_17 = RenderSystem.getDevice().createCommandEncoder().createRenderPass((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cgd(), ()Ljava/lang/String;)(), var8_7, OptionalInt.empty(), var9_8, OptionalDouble.empty());
                    try {
                        block26: {
                            var18_17.setPipeline(var1_1);
                            lF.cgb(var18_17, var16_15);
                            jG.bHS(var18_17);
                            if (var6_6 != null) break block25;
                            try {
                                block29: {
                                    if (var3_3 == null) break block26;
                                    break block29;
                                    catch (Throwable v3) {
                                        throw lF.cgh(v3);
                                    }
                                }
                                var3_3.accept(var18_17);
                            }
                            catch (Throwable v4) {
                                throw lF.cgh(v4);
                            }
                        }
                        var18_17.setVertexBuffer(0, var14_13);
                        var18_17.setIndexBuffer(var15_14, RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var11_10).method_31924());
                        var18_17.drawIndexed(0, 0, var13_12, 1);
                    }
                    catch (Throwable var19_18) {
                        block28: {
                            try {
                                v5 = var18_17;
                                if (var6_6 == null) {
                                    if (v5 == null) break block28;
                                }
                                ** GOTO lbl66
                            }
                            catch (Throwable v6) {
                                throw lF.cgh(v6);
                            }
                            try {
                                v5 = var18_17;
lbl66:
                                // 2 sources

                                v5.close();
                            }
                            catch (Throwable var20_19) {
                                var19_18.addSuppressed(var20_19);
                            }
                        }
                        throw var19_18;
                    }
                }
                if (var6_6 != null) break block27;
                try {
                    block30: {
                        if (var18_17 == null) break block27;
                        break block30;
                        catch (Throwable v7) {
                            throw lF.cgh(v7);
                        }
                    }
                    var18_17.close();
                }
                catch (Throwable v8) {
                    throw lF.cgh(v8);
                }
            }
            finally {
                lF.ReACR.set(var17_16);
            }
        }
    }

    private static void cfS(lB lB2, RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfA(new lD(lB2, renderPipeline, class_98012, consumer));
    }

    private static /* synthetic */ String cgc() {
        long l = uvZFB ^ 0xF0C04671073L;
        return lF.cgl("o", (int)24449, (long)(0x66250BF4C5DA8890L ^ l));
    }

    public static void cfE(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfN(lB.rMraa, renderPipeline, class_98012, 4, null);
    }

    /*
     * Unable to fully structure code
     */
    public static void cfJ(class_276 var0, RenderPipeline var1_1, class_9801 var2_2, Consumer<RenderPass> var3_3) {
        block30: {
            block29: {
                block27: {
                    block25: {
                        block26: {
                            block36: {
                                block35: {
                                    block34: {
                                        block23: {
                                            block24: {
                                                block32: {
                                                    var4_4 = lF.uvZFB ^ 6890379483479L;
                                                    var6_5 = lC.cfk();
                                                    if (var1_1 == null) break block32;
                                                    try {
                                                        block33: {
                                                            v0 = var0;
                                                            if (var6_5 != null) break block23;
                                                            break block33;
                                                            catch (Throwable v1) {
                                                                throw lF.cgh(v1);
                                                            }
                                                        }
                                                        if (v0 != null) break block24;
                                                    }
                                                    catch (Throwable v2) {
                                                        throw lF.cgh(v2);
                                                    }
                                                }
                                                return;
                                            }
                                            var0 = jo.bEq(var1_1, var0);
                                            v3 = jo.bEr(var1_1);
                                            if (var6_5 != null) break block34;
                                            var1_1 = v3;
                                            v0 = var0;
                                        }
                                        if (v0 == null) break block35;
                                        v3 = var1_1;
                                    }
                                    if (v3 != null) break block36;
                                }
                                return;
                            }
                            var7_6 = var0.method_71639();
                            try {
                                v4 = var7_6;
                                if (var6_5 != null) break block25;
                                if (v4 != null) break block26;
                            }
                            catch (Throwable v5) {
                                throw lF.cgh(v5);
                            }
                            return;
                        }
                        v4 = var0.method_71640();
                    }
                    var8_7 = v4;
                    var9_8 = var2_2.method_60822();
                    var10_9 = var9_8.comp_752();
                    var11_10 = var10_9.method_31973(var9_8.comp_750());
                    var12_11 = lr.caC(var2_2.method_60818(), (String)lF.cgl("o", (int)10485, (long)(5398242504242951880L ^ var4_4)));
                    var13_12 = RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var10_9).method_68274(var11_10);
                    var14_13 = RenderSystem.getDevice().createCommandEncoder().createRenderPass((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cgf(), ()Ljava/lang/String;)(), var7_6, OptionalInt.empty(), var8_7, OptionalDouble.empty());
                    try {
                        block28: {
                            var14_13.setPipeline(var1_1);
                            if (var6_5 != null) break block27;
                            try {
                                block37: {
                                    if (var3_3 == null) break block28;
                                    break block37;
                                    catch (Throwable v6) {
                                        throw lF.cgh(v6);
                                    }
                                }
                                var3_3.accept(var14_13);
                            }
                            catch (Throwable v7) {
                                throw lF.cgh(v7);
                            }
                        }
                        var14_13.setVertexBuffer(0, var12_11);
                        var14_13.setIndexBuffer(var13_12, RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var10_9).method_31924());
                        var14_13.drawIndexed(0, 0, var11_10, 1);
                    }
                    catch (Throwable var15_14) {
                        block31: {
                            try {
                                v8 = var14_13;
                                if (var6_5 == null) {
                                    if (v8 == null) break block31;
                                }
                                ** GOTO lbl80
                            }
                            catch (Throwable v9) {
                                throw lF.cgh(v9);
                            }
                            try {
                                v8 = var14_13;
lbl80:
                                // 2 sources

                                v8.close();
                            }
                            catch (Throwable var16_15) {
                                var15_14.addSuppressed(var16_15);
                            }
                        }
                        throw var15_14;
                    }
                }
                try {
                    v10 = var14_13;
                    if (var6_5 != null) break block29;
                    if (v10 == null) break block30;
                }
                catch (Throwable v11) {
                    throw lF.cgh(v11);
                }
                v10 = var14_13;
            }
            v10.close();
        }
    }

    private static String cgj(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7AD2;
        if (iimvN[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])LJNca.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LJNca.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lF", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = maWGS[n2].getBytes("ISO-8859-1");
            lF.iimvN[n2] = lF.cgi(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return iimvN[n2];
    }

    private static Object cgk(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = lF.cgj(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public static void cfL(RenderPipeline renderPipeline, class_9801 class_98012, int n, Consumer<RenderPass> consumer) {
        lF.cfN(lB.rMraa, renderPipeline, class_98012, n, consumer);
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    private static void cfU(class_276 var0, lB var1_1, RenderPipeline var2_2, class_9801 var3_3, Consumer<RenderPass> var4_4) {
        block30: {
            block26: {
                block27: {
                    block24: {
                        block25: {
                            block32: {
                                var5_5 = lF.uvZFB ^ 2494535929377L;
                                var2_2 = jo.bEr(var2_2);
                                var7_6 = lC.cfk();
                                if (var2_2 == null) break block32;
                                try {
                                    block33: {
                                        v0 = var0;
                                        if (var7_6 != null) break block24;
                                        break block33;
                                        catch (Throwable v1) {
                                            throw lF.cgh(v1);
                                        }
                                    }
                                    if (v0 != null) break block25;
                                }
                                catch (Throwable v2) {
                                    throw lF.cgh(v2);
                                }
                            }
                            return;
                        }
                        v0 = var0;
                    }
                    var8_7 = v0.method_71639();
                    try {
                        v3 = var8_7;
                        if (var7_6 != null) break block26;
                        if (v3 != null) break block27;
                    }
                    catch (Throwable v4) {
                        throw lF.cgh(v4);
                    }
                    return;
                }
                v3 = var0.method_71640();
            }
            var9_8 = v3;
            var10_9 = var3_3.method_60822();
            var11_10 = var10_9.comp_752();
            var12_11 = var10_9.comp_750();
            var13_12 = var11_10.method_31973(var12_11);
            var14_13 = lr.caC(var3_3.method_60818(), (String)lF.cgl("o", (int)4092, (long)(1688240817862624957L ^ var5_5)));
            var15_14 = RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var11_10).method_68274(var13_12);
            var16_15 = lF.cga(var1_1);
            var17_16 = lF.ReACR.get();
            lF.ReACR.set(var1_1);
            try {
                block28: {
                    var18_17 = RenderSystem.getDevice().createCommandEncoder().createRenderPass((Supplier<String>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, cgc(), ()Ljava/lang/String;)(), var8_7, OptionalInt.empty(), var9_8, OptionalDouble.empty());
                    try {
                        block29: {
                            var18_17.setPipeline(var2_2);
                            lF.cgb(var18_17, var16_15);
                            jG.bHS(var18_17);
                            if (var7_6 != null) break block28;
                            try {
                                block34: {
                                    if (var4_4 == null) break block29;
                                    break block34;
                                    catch (Throwable v5) {
                                        throw lF.cgh(v5);
                                    }
                                }
                                var4_4.accept(var18_17);
                            }
                            catch (Throwable v6) {
                                throw lF.cgh(v6);
                            }
                        }
                        var18_17.setVertexBuffer(0, var14_13);
                        var18_17.setIndexBuffer(var15_14, RenderSystem.getSequentialBuffer((VertexFormat.class_5596)var11_10).method_31924());
                        var18_17.drawIndexed(0, 0, var13_12, 1);
                    }
                    catch (Throwable var19_18) {
                        block31: {
                            try {
                                v7 = var18_17;
                                if (var7_6 == null) {
                                    if (v7 == null) break block31;
                                }
                                ** GOTO lbl77
                            }
                            catch (Throwable v8) {
                                throw lF.cgh(v8);
                            }
                            try {
                                v7 = var18_17;
lbl77:
                                // 2 sources

                                v7.close();
                            }
                            catch (Throwable var20_19) {
                                var19_18.addSuppressed(var20_19);
                            }
                        }
                        throw var19_18;
                    }
                }
                if (var7_6 != null) break block30;
                try {
                    block35: {
                        if (var18_17 == null) break block30;
                        break block35;
                        catch (Throwable v9) {
                            throw lF.cgh(v9);
                        }
                    }
                    var18_17.close();
                }
                catch (Throwable v10) {
                    throw lF.cgh(v10);
                }
            }
            finally {
                lF.ReACR.set(var17_16);
            }
        }
    }

    private static Throwable cgh(Throwable throwable) {
        return throwable;
    }

    public static void cfG(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfN(lB.dlmOV, renderPipeline, class_98012, 4, null);
    }

    public static void cfH(class_276 class_2762, lB lB2, RenderPipeline renderPipeline, class_9801 class_98012, Consumer<RenderPass> consumer) {
        lF.cfU(class_2762, lB2, renderPipeline, class_98012, consumer);
    }

    public static void cfM(RenderPipeline renderPipeline, class_9801 class_98012, int n, Consumer<RenderPass> consumer) {
        lF.cfN(lB.dlmOV, renderPipeline, class_98012, n, consumer);
    }

    private static CallSite cgl(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lF" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cgi(byte[] byArray) {
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

    public static void cfK(RenderPipeline renderPipeline, class_9801 class_98012, int n, Consumer<RenderPass> consumer) {
        lF.cfN(lB.xCeuB, renderPipeline, class_98012, n, consumer);
    }

    public static void cfX(RenderPipeline renderPipeline, class_9801 class_98012) {
        lF.cfR(renderPipeline, class_98012, null);
    }

    public static void cfZ() {
        lr.caB();
    }

    public static lB cfY() {
        return ReACR.get();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lF.class, "cgk", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
