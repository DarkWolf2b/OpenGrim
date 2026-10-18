/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.pipeline.RenderPipeline$Builder
 *  com.mojang.blaze3d.pipeline.RenderPipeline$Snippet
 *  com.mojang.blaze3d.pipeline.RenderPipeline$UniformDescription
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  mixin.accessors.RenderPipelineBuilderAccessor
 *  net.minecraft.client.gl.Defines
 *  net.minecraft.client.gl.UniformType
 */
package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Iterator;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.RenderPipelineBuilderAccessor;
import net.minecraft.client.gl.Defines;
import net.minecraft.client.gl.UniformType;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jN;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.kT;
import sixtwo.kV;
import sixtwo.lh;

public final class kU {
    private final RenderPipeline.Builder rlOvj;
    private lh LDjgD = lh.GpGUc;
    private static final long nALnU = gb.aYR(-7963621086618303205L, -3003222976746946721L, MethodHandles.lookup().lookupClass()).a(139296445087519L);
    private static final String Xiiwp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kU(String string, RenderPipeline.Snippet ... snippetArray) {
        this.rlOvj = RenderPipeline.builder((RenderPipeline.Snippet[])snippetArray).withLocation(string);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = nALnU ^ 0x1A6DBE3E58B2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("l\u00ec\u00db\u0083\u00db\u00feH\u0019\u0098\u0091x\u0004\u0092\u00e1\u00ca&\u00be\u0099Y\u001f\u00b3PI\u00be".getBytes("ISO-8859-1"));
                Xiiwp = kU.bWk(byArray3).intern();
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public kU bWd(jN jN2) {
        kT.bVS(this.rlOvj, jN2);
        return this;
    }

    public kU bVY(VertexFormat vertexFormat, VertexFormat.DrawMode drawMode) {
        this.rlOvj.withVertexFormat(vertexFormat, drawMode);
        return this;
    }

    public static kU bVX(String string, RenderPipeline.Snippet ... snippetArray) {
        return new kU(string, snippetArray);
    }

    public RenderPipeline bWg() {
        RenderPipelineBuilderAccessor renderPipelineBuilderAccessor;
        block18: {
            block20: {
                RenderPipeline renderPipeline;
                jN jN2;
                block19: {
                    RenderPipeline renderPipeline2;
                    boolean bl2;
                    block17: {
                        block21: {
                            RenderPipelineBuilderAccessor renderPipelineBuilderAccessor2;
                            block16: {
                                boolean bl3;
                                block14: {
                                    block15: {
                                        long l2 = nALnU ^ 0x592640F52185L;
                                        jN2 = kT.bVR(this.rlOvj);
                                        bl2 = kR.bVy();
                                        if (jN2 == null) break block21;
                                        renderPipelineBuilderAccessor = (RenderPipelineBuilderAccessor)this.rlOvj;
                                        try {
                                            try {
                                                bl3 = renderPipelineBuilderAccessor.getVertexShader().isEmpty();
                                                if (bl2) break block14;
                                                if (!bl3) break block15;
                                            }
                                            catch (NumberFormatException numberFormatException) {
                                                throw kU.bWj(numberFormatException);
                                            }
                                            renderPipelineBuilderAccessor.setVertexShader(Optional.of(kT.dmDCF));
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw kU.bWj(numberFormatException);
                                        }
                                    }
                                    try {
                                        renderPipelineBuilderAccessor2 = renderPipelineBuilderAccessor;
                                        if (bl2) break block16;
                                        bl3 = renderPipelineBuilderAccessor2.getFragmentShader().isEmpty();
                                    }
                                    catch (NumberFormatException numberFormatException) {
                                        throw kU.bWj(numberFormatException);
                                    }
                                }
                                if (!bl3) break block21;
                                renderPipelineBuilderAccessor2 = renderPipelineBuilderAccessor;
                            }
                            renderPipelineBuilderAccessor2.setFragmentShader(Optional.of(kT.wNJTB));
                        }
                        renderPipelineBuilderAccessor = this.rlOvj.build();
                        kV.bWl((RenderPipeline)renderPipelineBuilderAccessor, this.LDjgD);
                        renderPipeline2 = this.bWh((RenderPipeline)renderPipelineBuilderAccessor);
                        try {
                            try {
                                if (bl2) break block17;
                                if (jN2 == null) break block18;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw kU.bWj(numberFormatException);
                            }
                            kT.bVU((RenderPipeline)renderPipelineBuilderAccessor, jN2);
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw kU.bWj(numberFormatException);
                        }
                    }
                    try {
                        renderPipeline = renderPipeline2;
                        if (bl2) break block19;
                        if (renderPipeline == null) break block20;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw kU.bWj(numberFormatException);
                    }
                    renderPipeline = renderPipeline2;
                }
                kT.bVU(renderPipeline, jN2);
            }
            kT.bVS(this.rlOvj, null);
        }
        return renderPipelineBuilderAccessor;
    }

    public kU bWf(String string) {
        this.rlOvj.withSampler(string);
        return this;
    }

    public kU bVZ(String string) {
        this.rlOvj.withVertexShader(string);
        return this;
    }

    /*
     * Unable to fully structure code
     */
    public kU bWc(kS var1_1) {
        block17: {
            block19: {
                block18: {
                    block16: {
                        block14: {
                            var2_2 = kU.nALnU ^ 4620781340103L;
                            this.LDjgD = var1_1.bVJ();
                            var4_3 = kR.bVx();
                            try {
                                block15: {
                                    try {
                                        try {
                                            if (!var4_3) break block14;
                                            if (var1_1.bVJ() == null) break block15;
                                        }
                                        catch (NumberFormatException v0) {
                                            throw kU.bWj(v0);
                                        }
                                        if (var1_1.bVJ() == lh.RpYeK) {
                                        }
                                        ** GOTO lbl26
                                    }
                                    catch (NumberFormatException v1) {
                                        throw kU.bWj(v1);
                                    }
                                }
                                this.rlOvj.withoutBlend();
                            }
                            catch (NumberFormatException v2) {
                                throw kU.bWj(v2);
                            }
                        }
                        try {
                            if (var4_3) break block16;
lbl26:
                            // 2 sources

                            this.rlOvj.withBlend(var1_1.bVJ().bXZ());
                        }
                        catch (NumberFormatException v3) {
                            throw kU.bWj(v3);
                        }
                    }
                    try {
                        try {
                            this.rlOvj.withDepthTestFunction(var1_1.bVK());
                            this.rlOvj.withDepthWrite(var1_1.bVL());
                            this.rlOvj.withCull(var1_1.bVM());
                            v4 = this;
                            if (iS.bwL() != null) break block17;
                            if (!var4_3) break block18;
                        }
                        catch (NumberFormatException v5) {
                            throw kU.bWj(v5);
                        }
                        v6 = false;
                        break block19;
                    }
                    catch (NumberFormatException v7) {
                        throw kU.bWj(v7);
                    }
                }
                v6 = true;
            }
            kR.bVw(v6);
        }
        return v4;
    }

    public kU bWa(String string) {
        this.rlOvj.withFragmentShader(string);
        return this;
    }

    public kU bWe(String string, UniformType uniformType) {
        this.rlOvj.withUniform(string, uniformType);
        return this;
    }

    public kU bWb(String string) {
        return this.bVZ(string).bWa(string);
    }

    private static String bWk(byte[] byArray) {
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

    private static NumberFormatException bWj(NumberFormatException numberFormatException) {
        return numberFormatException;
    }

    private void bWi(Defines defines, RenderPipeline.Builder builder) {
        Object object;
        boolean bl2;
        Iterator<Object> iterator;
        block9: {
            long l2 = nALnU ^ 0x192DD5C985F4L;
            iterator = defines.flags().iterator();
            bl2 = kR.bVy();
            while (iterator.hasNext()) {
                object = (String)iterator.next();
                try {
                    builder.withShaderDefine((String)object);
                    if (!bl2) {
                        if (!bl2) continue;
                        break;
                    }
                    break block9;
                }
                catch (NumberFormatException numberFormatException) {
                    throw kU.bWj(numberFormatException);
                }
            }
            iterator = defines.values().entrySet().iterator();
        }
        while (iterator.hasNext()) {
            object = (Map.Entry)iterator.next();
            String string = (String)object.getValue();
            try {
                builder.withShaderDefine((String)object.getKey(), Integer.parseInt(string));
            }
            catch (NumberFormatException numberFormatException) {
                try {
                    builder.withShaderDefine((String)object.getKey(), Float.parseFloat(string));
                }
                catch (NumberFormatException numberFormatException2) {
                    builder.withShaderDefine((String)object.getKey());
                }
            }
            if (!bl2) continue;
        }
    }

    /*
     * Unable to fully structure code
     */
    private RenderPipeline bWh(RenderPipeline var1_1) {
        block16: {
            var2_2 = kU.nALnU ^ 122960566294263L;
            var4_3 = kR.bVy();
            try {
                if (this.LDjgD != lh.GpGUc) {
                    return null;
                }
            }
            catch (NumberFormatException v0) {
                throw kU.bWj(v0);
            }
            var5_4 = RenderPipeline.builder((RenderPipeline.Snippet[])new RenderPipeline.Snippet[0]).withLocation(var1_1.getLocation().withSuffixedPath(kU.Xiiwp)).withVertexShader(var1_1.getVertexShader()).withFragmentShader(var1_1.getFragmentShader()).withBlend(lh.YrFUh.bXZ()).withDepthTestFunction(var1_1.getDepthTestFunction()).withDepthWrite(var1_1.isWriteDepth()).withPolygonMode(var1_1.getPolygonMode()).withCull(var1_1.isCull()).withVertexFormat(var1_1.getVertexFormat(), var1_1.getVertexFormatMode());
            this.bWi(var1_1.getShaderDefines(), var5_4);
            var6_5 = var1_1.getSamplers().iterator();
            while (var6_5.hasNext()) {
                var7_6 = (String)var6_5.next();
                try {
                    var5_4.withSampler(var7_6);
                    if (!var4_3) {
                        if (!var4_3) continue;
                        break;
                    }
                    break block16;
                }
                catch (NumberFormatException v1) {
                    throw kU.bWj(v1);
                }
            }
            var6_5 = var1_1.getUniforms().iterator();
        }
        while (var6_5.hasNext()) {
            block18: {
                block17: {
                    var7_6 = (RenderPipeline.UniformDescription)var6_5.next();
                    var8_7 = var7_6.textureFormat();
                    try {
                        try {
                            if (var4_3) break block17;
                            if (var8_7 == null) {
                            }
                            ** GOTO lbl44
                        }
                        catch (NumberFormatException v2) {
                            throw kU.bWj(v2);
                        }
                        var5_4.withUniform(var7_6.name(), var7_6.type());
                    }
                    catch (NumberFormatException v3) {
                        throw kU.bWj(v3);
                    }
                }
                try {
                    if (!var4_3) break block18;
lbl44:
                    // 2 sources

                    var5_4.withUniform(var7_6.name(), var7_6.type(), var8_7);
                }
                catch (NumberFormatException v4) {
                    throw kU.bWj(v4);
                }
            }
            if (!var4_3) continue;
        }
        var6_5 = var5_4.build();
        kV.bWl(var6_5, lh.YrFUh);
        kV.bWm(var1_1, var6_5);
        return var6_5;
    }
}

