/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.opengl.GlStateManager
 *  com.mojang.blaze3d.pipeline.RenderPipeline
 *  com.mojang.blaze3d.systems.RenderSystem
 *  com.mojang.blaze3d.textures.GpuTexture
 *  com.mojang.blaze3d.vertex.VertexFormat
 *  net.minecraft.class_10867
 *  net.minecraft.class_10868
 *  net.minecraft.class_5944
 *  org.joml.Matrix4f
 *  org.lwjgl.opengl.GL11
 *  org.lwjgl.opengl.GL20
 *  org.lwjgl.opengl.GL30
 *  org.lwjgl.system.CustomBuffer
 *  org.lwjgl.system.MemoryStack
 *  org.lwjgl.system.MemoryUtil
 */
package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;
import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.GpuTexture;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Constructor;
import java.nio.Buffer;
import java.nio.ByteBuffer;
import java.nio.FloatBuffer;
import java.nio.IntBuffer;
import java.security.Key;
import java.util.Collections;
import java.util.HashMap;
import java.util.IdentityHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10867;
import net.minecraft.class_10868;
import net.minecraft.class_5944;
import org.joml.Matrix4f;
import org.lwjgl.opengl.GL11;
import org.lwjgl.opengl.GL20;
import org.lwjgl.opengl.GL30;
import org.lwjgl.system.CustomBuffer;
import org.lwjgl.system.MemoryStack;
import org.lwjgl.system.MemoryUtil;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lR$uE;
import sixtwo.lR$uF;
import sixtwo.lS;
import sixtwo.lU;
import sixtwo.lV;
import sixtwo.lW;

public final class lR
implements lU {
    private static final Constructor<class_5944> JlBvN;
    private final Set<class_5944> hyzPD = Collections.newSetFromMap(new IdentityHashMap());
    private int APeps = -1;
    private int jQsIC = -1;
    private static String[] xWJpb;
    private static final long PtOYq;
    private static final String[] gJQGB;
    private static final String[] SQTYL;
    private static final Map HvppV;
    private static final long[] NaCxN;
    private static final Integer[] kvEby;
    private static final Map YWftv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public void unbindProgram() {
        GL20.glUseProgram((int)0);
    }

    @Override
    public void copyDepthTexture(GpuTexture gpuTexture, GpuTexture gpuTexture2, int n, int n2) {
        this.copyTextureToTexture(gpuTexture, gpuTexture2, 0, 0, 0, 0, 0, n, n2);
    }

    /*
     * WARNING - void declaration
     */
    @Override
    public lW createProgram(VertexFormat vertexFormat, lV ... lVArray) {
        int n;
        block11: {
            Object object;
            int n2;
            block10: {
                String[] stringArray;
                long l;
                block9: {
                    void object2;
                    l = PtOYq ^ 0x45CD27896DE1L;
                    n = GlStateManager.glCreateProgram();
                    List list = vertexFormat.getElementAttributeNames();
                    boolean i = false;
                    stringArray = lR.ciF();
                    while (object2 < list.size()) {
                        GlStateManager._glBindAttribLocation((int)n, (int)object2, (CharSequence)((CharSequence)list.get((int)object2)));
                        ++object2;
                        if (stringArray != null) continue;
                    }
                    for (lV lV2 : lVArray) {
                        try {
                            GlStateManager.glAttachShader((int)n, (int)lR.ciA((lV)lV2).id);
                            if (stringArray != null) {
                                if (stringArray != null) continue;
                                break;
                            }
                            break block9;
                        }
                        catch (RuntimeException runtimeException) {
                            throw lR.ciG(runtimeException);
                        }
                    }
                    GlStateManager.glLinkProgram((int)n);
                }
                try {
                    try {
                        n2 = GlStateManager.glGetProgrami((int)n, (int)lR.ciN("s", (int)24650, (long)(0x54201D31B3EC2582L ^ l)));
                        object = 1;
                        if (stringArray == null) break block10;
                        if (n2 == object) break block11;
                    }
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                    n2 = n;
                    object = lR.ciN("s", (int)15240, (long)(0x4DEC875CA3EF7E46L ^ l));
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            String string = GlStateManager.glGetProgramInfoLog((int)n2, (int)object);
            GlStateManager.glDeleteProgram((int)n);
            throw new RuntimeException(string);
        }
        return new lR$uF(n);
    }

    @Override
    public int uniformLocation(lW lW2, String string) {
        return GlStateManager._glGetUniformLocation((int)lR.ciB((lW)lW2).id, (CharSequence)string);
    }

    @Override
    public void setLineSmoothing(boolean bl) {
        block8: {
            Object object;
            block6: {
                long l = PtOYq ^ 0xEB85670E6CL;
                String[] stringArray = lR.ciF();
                try {
                    block7: {
                        try {
                            try {
                                object = bl;
                                if (stringArray == null) break block6;
                                if (object == 0) break block7;
                            }
                            catch (RuntimeException runtimeException) {
                                throw lR.ciG(runtimeException);
                            }
                            GL11.glEnable((int)lR.ciN("s", (int)25942, (long)(0x25C417F615244303L ^ l)));
                            GL11.glHint((int)lR.ciN("s", (int)15851, (long)(0x4B9887C7D49A9BBCL ^ l)), (int)lR.ciN("s", (int)23628, (long)(0x4FA87576AF4AFA04L ^ l)));
                            if (stringArray != null) break block8;
                        }
                        catch (RuntimeException runtimeException) {
                            throw lR.ciG(runtimeException);
                        }
                    }
                    object = lR.ciN("s", (int)2523, (long)(0x503D7AA6F24B2F95L ^ l));
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            GL11.glDisable((int)object);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public void generateMipmaps(GpuTexture gpuTexture) {
        GpuTexture gpuTexture2;
        String[] stringArray;
        long l;
        block15: {
            int n;
            block14: {
                block16: {
                    GpuTexture gpuTexture3;
                    block13: {
                        l = PtOYq ^ 0x7140581D760BL;
                        stringArray = lR.ciF();
                        try {
                            gpuTexture3 = gpuTexture;
                            if (stringArray == null) break block13;
                            if (gpuTexture3 == null) return;
                        }
                        catch (RuntimeException runtimeException) {
                            throw lR.ciG(runtimeException);
                        }
                        gpuTexture3 = gpuTexture;
                    }
                    n = gpuTexture3.getMipLevels();
                    if (stringArray == null) break block14;
                    if (n <= 1) return;
                    break block16;
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                }
                try {
                    block17: {
                        gpuTexture2 = gpuTexture;
                        if (stringArray == null) break block15;
                        break block17;
                        catch (RuntimeException runtimeException) {
                            throw lR.ciG(runtimeException);
                        }
                    }
                    n = gpuTexture2 instanceof class_10868;
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            if (n == 0) return;
            gpuTexture2 = gpuTexture;
        }
        class_10868 class_108682 = (class_10868)gpuTexture2;
        try {
            if (stringArray == null) {
                return;
            }
        }
        catch (RuntimeException runtimeException) {
            throw lR.ciG(runtimeException);
        }
        RenderSystem.assertOnRenderThread();
        int n = GL11.glGetInteger((int)lR.ciN("s", (int)27106, (long)(0x667E8264872737D7L ^ l)));
        try {
            GL11.glBindTexture((int)lR.ciN("s", (int)13685, (long)(0x76CA14AA5BFC6B53L ^ l)), (int)class_108682.method_68427());
            GL30.glGenerateMipmap((int)lR.ciN("s", (int)19553, (long)(0x27AEBBC85494124FL ^ l)));
            GL11.glBindTexture((int)lR.ciN("s", (int)19553, (long)(0x27AEBBC85494124FL ^ l)), (int)n);
            return;
        }
        catch (Throwable throwable) {
            GL11.glBindTexture((int)lR.ciN("s", (int)19553, (long)(0x27AEBBC85494124FL ^ l)), (int)n);
            throw throwable;
        }
    }

    @Override
    public int nativeTextureId(GpuTexture gpuTexture) {
        int n;
        block6: {
            block5: {
                GpuTexture gpuTexture2;
                block4: {
                    long l = PtOYq ^ 0x2BFF6CD7511AL;
                    String[] stringArray = lR.ciF();
                    try {
                        try {
                            gpuTexture2 = gpuTexture;
                            if (stringArray == null) break block4;
                            if (!(gpuTexture2 instanceof class_10868)) break block5;
                        }
                        catch (RuntimeException runtimeException) {
                            throw lR.ciG(runtimeException);
                        }
                        gpuTexture2 = gpuTexture;
                    }
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                }
                class_10868 class_108682 = (class_10868)gpuTexture2;
                n = class_108682.method_68427();
                break block6;
            }
            n = -1;
        }
        return n;
    }

    @Override
    public void bindProgram(lW lW2) {
        GL20.glUseProgram((int)lR.ciB((lW)lW2).id);
    }

    @Override
    public void clearColorBuffer() {
        long l = PtOYq ^ 0x702014CBB715L;
        GL11.glClear((int)lR.ciN("s", (int)11845, (long)(0x103E9FE4787AB170L ^ l)));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        lR.PtOYq = gb.aYR(-2049911285825158433L, 8345879564128413148L, MethodHandles.lookup().lookupClass()).a(16376725623122L);
                        lR.HvppV = new HashMap<K, V>(13);
                        var11 = lR.PtOYq ^ 132436637206836L;
                        lR.ciE(new String[3]);
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
                        var20_3 = new String[6];
                        var18_4 = 0;
                        var17_5 = "g\u00fe\u00bcC\u008b\u00b2mz\u00d2\u00b6<\n=zA\r4R7\u00af4\u00f4\u0080\u00840\u0081\u009d\u009dk>7f\u009b\u00bcFB\u0002\u00d7\u008aj~:\u00e9\u00a6\u00df_\u0088\u0093k_\u000b\u0014\u00d3\u00cd\nh\u00ae\u008e\u00a8\u00c3I\u00a6\\\u00010\u00b3\u0003<\u009a%\u008c\u00a1C\u0007C\"2\u001d\u0002Q\u008c\u00ee\u00d1R\u001cQ;&\u0019Q2\u0080\u00c8\u0093l\u00f0\u00a5K\u00ed\u0089d\u00cb\u0017\u00e9\u00bc\u00d3N\u00bb|\u0014\u00a1\u00a7(H\u00c0\u0090\u0015\u00a1\u00aa\u00caW\u00c4\u00ea[\u00fa\u00daC\u00efT\u00d5\u00ff\u00f9Q\u00eb\u00f9\u0019\u00ab^9K>\u0090\u0006\u00b3\u00e6+\u00f6\u00c2\u00fb\u00a0\u009f\u008c\u00c3\u00e0z\u0089\u0004\u00c5!\u00ad\n\u0000Y\u00c1=\u00d8v\u00fa&]nd\u00d3\u00b234\u001b\u0081v\u00a2pQ\u0005\u008e\u00b4\u00dbH{\u00efL\u00a6\u00c0\u00ff?`\u00c6@\u0088\u00ad\u001ei~\u00ff\u000fC\u00d7=\u00a1\u00c9\u009f:\u00bb\u00ffoO\u0007\u009b\u0010\u000e\u00c3,W,\u00ed\u00e6\u00a9\\\t\u0083Q\u00d4\u00d7R\u00ad&\u0088\u001a\u00d0b\u008d\u00db\u00e2q\b\u000f*\u0085f\u00a7&\u00b2n\u0082\u00cb\u00cf\n\u00a9\u00c1\u00cb";
                        var19_6 = "g\u00fe\u00bcC\u008b\u00b2mz\u00d2\u00b6<\n=zA\r4R7\u00af4\u00f4\u0080\u00840\u0081\u009d\u009dk>7f\u009b\u00bcFB\u0002\u00d7\u008aj~:\u00e9\u00a6\u00df_\u0088\u0093k_\u000b\u0014\u00d3\u00cd\nh\u00ae\u008e\u00a8\u00c3I\u00a6\\\u00010\u00b3\u0003<\u009a%\u008c\u00a1C\u0007C\"2\u001d\u0002Q\u008c\u00ee\u00d1R\u001cQ;&\u0019Q2\u0080\u00c8\u0093l\u00f0\u00a5K\u00ed\u0089d\u00cb\u0017\u00e9\u00bc\u00d3N\u00bb|\u0014\u00a1\u00a7(H\u00c0\u0090\u0015\u00a1\u00aa\u00caW\u00c4\u00ea[\u00fa\u00daC\u00efT\u00d5\u00ff\u00f9Q\u00eb\u00f9\u0019\u00ab^9K>\u0090\u0006\u00b3\u00e6+\u00f6\u00c2\u00fb\u00a0\u009f\u008c\u00c3\u00e0z\u0089\u0004\u00c5!\u00ad\n\u0000Y\u00c1=\u00d8v\u00fa&]nd\u00d3\u00b234\u001b\u0081v\u00a2pQ\u0005\u008e\u00b4\u00dbH{\u00efL\u00a6\u00c0\u00ff?`\u00c6@\u0088\u00ad\u001ei~\u00ff\u000fC\u00d7=\u00a1\u00c9\u009f:\u00bb\u00ffoO\u0007\u009b\u0010\u000e\u00c3,W,\u00ed\u00e6\u00a9\\\t\u0083Q\u00d4\u00d7R\u00ad&\u0088\u001a\u00d0b\u008d\u00db\u00e2q\b\u000f*\u0085f\u00a7&\u00b2n\u0082\u00cb\u00cf\n\u00a9\u00c1\u00cb".length();
                        var16_7 = 64;
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
                            var20_3[var18_4++] = lR.ciH(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "0m-\u00cc\u00f3\u0004\u0080\u00fe\u00a7\u00f6\u00e9\u00a3\u00bfp86_\u00bb\u00fc\u00d2ZH_0{\u0091\u00bc\u0092\u0090\u00e7\u0010\u00bdN\u0099\u00f2\u00cc\u00b7L\u0018\u00d0VJx\u001d\u00eb\u00f6gQ@Z4\u00d9\u009e\u00d47P\u00e8\u00f0\u00b2EV\u00d2\u00f5U\u00aa@_Zd\u008c5Hq\u0091b\u00d7\"TL\u00aa\u0010\u0091\u00db\u0013.\u00c5\u00c9am\u00e3\u001e\u00db\u00f7\u00a0\u00e2+\u0006";
                            var19_6 = "0m-\u00cc\u00f3\u0004\u0080\u00fe\u00a7\u00f6\u00e9\u00a3\u00bfp86_\u00bb\u00fc\u00d2ZH_0{\u0091\u00bc\u0092\u0090\u00e7\u0010\u00bdN\u0099\u00f2\u00cc\u00b7L\u0018\u00d0VJx\u001d\u00eb\u00f6gQ@Z4\u00d9\u009e\u00d47P\u00e8\u00f0\u00b2EV\u00d2\u00f5U\u00aa@_Zd\u008c5Hq\u0091b\u00d7\"TL\u00aa\u0010\u0091\u00db\u0013.\u00c5\u00c9am\u00e3\u001e\u00db\u00f7\u00a0\u00e2+\u0006".length();
                            var16_7 = 80;
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
                            var20_3[var18_4++] = lR.ciH(var21_9).intern();
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
                lR.gJQGB = var20_3;
                lR.SQTYL = new String[6];
                lR.YWftv = new HashMap<K, V>(13);
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
                var6_12 = new long[29];
                var3_13 = 0;
                var4_14 = "|T)\u007f\u00be\u00f3\u00c1l\u00023\u0011\u0010,4)\u00d2G=\u001a\u0002\u00a4Z\u00a3\u00a1\u001b\u00f0e\u0003\u009c\u0006\u00f8\u0094\u00fa\"\u00d7{\u0094}\bH\u00b3\"(h\u00b8\u00f7\u009di$\u00cc\u00f2\u00e1\\\u0099\u00dc@w\u000b\u0097\u00fd\u009f\"0!\u00f2\u00df\u0000\u0001\u0099\u00cf\u0081sgR\u00a7\u00f7\u009b\u0089\u00f9X\u00b9\u0005w\u008f\u008e\u00d7\u007f\u00da\u00b32\u009d\u0083pXR\u008b/(\u00f4\u009b\u00db\u001a\u009c \u0098\u00a1)~\u0003ew\u00e23`\u007fq\u00cf1\u00c8\u00c0\u00aa_\u00c8\u00a7\u00ec!,\u00e1G\u00a7\u00875\b\u00c6\u00cc\u0080}:\u0082<\u00e6P2\u00c8\fT-,`\u00c8\u00dd\u009a\u00f4\u00a7\u00a0\\ELoQv}\u000b\u00c6\u00c4u\u0015\u00a5\u00eela\u00a2\u00cbX\u0011e\r\u00eb\u00c9\u0096\u00ad[z\u00c2!\u0082\u0012t\u00af\u00e5\u00df\u0084\u00c7$\u008fG \u00ff\u00eenZw\u000f\u009d0\u00d1}\u0002\u009e\u00c8\u0096\u00d5w]\u0093n";
                var5_15 = "|T)\u007f\u00be\u00f3\u00c1l\u00023\u0011\u0010,4)\u00d2G=\u001a\u0002\u00a4Z\u00a3\u00a1\u001b\u00f0e\u0003\u009c\u0006\u00f8\u0094\u00fa\"\u00d7{\u0094}\bH\u00b3\"(h\u00b8\u00f7\u009di$\u00cc\u00f2\u00e1\\\u0099\u00dc@w\u000b\u0097\u00fd\u009f\"0!\u00f2\u00df\u0000\u0001\u0099\u00cf\u0081sgR\u00a7\u00f7\u009b\u0089\u00f9X\u00b9\u0005w\u008f\u008e\u00d7\u007f\u00da\u00b32\u009d\u0083pXR\u008b/(\u00f4\u009b\u00db\u001a\u009c \u0098\u00a1)~\u0003ew\u00e23`\u007fq\u00cf1\u00c8\u00c0\u00aa_\u00c8\u00a7\u00ec!,\u00e1G\u00a7\u00875\b\u00c6\u00cc\u0080}:\u0082<\u00e6P2\u00c8\fT-,`\u00c8\u00dd\u009a\u00f4\u00a7\u00a0\\ELoQv}\u000b\u00c6\u00c4u\u0015\u00a5\u00eela\u00a2\u00cbX\u0011e\r\u00eb\u00c9\u0096\u00ad[z\u00c2!\u0082\u0012t\u00af\u00e5\u00df\u0084\u00c7$\u008fG \u00ff\u00eenZw\u000f\u009d0\u00d1}\u0002\u009e\u00c8\u0096\u00d5w]\u0093n".length();
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
                    var4_14 = ")\u00c1\u00ad#Z\u00db\u008aO\u00ce\u00f9^\u00c0\u00a9\u00ca\u009f\u009f";
                    var5_15 = ")\u00c1\u00ad#Z\u00db\u008aO\u00ce\u00f9^\u00c0\u00a9\u00ca\u009f\u009f".length();
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
        lR.NaCxN = var6_12;
        lR.kvEby = new Integer[29];
        lR.JlBvN = lR.ciC();
    }

    @Override
    public String name() {
        long l = PtOYq ^ 0x7CD5094B3B7BL;
        return lR.ciK("l", (int)26462, (long)(0x6F182D086D154C46L ^ l));
    }

    private static String ciI(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1740;
        if (SQTYL[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])HvppV.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HvppV.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lR", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = gJQGB[n2].getBytes("ISO-8859-1");
            lR.SQTYL[n2] = lR.ciH(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return SQTYL[n2];
    }

    private static int ciM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = lR.ciL(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int ciL(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2F0F;
        if (kvEby[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = NaCxN[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])YWftv.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YWftv.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lR", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lR.kvEby[n2] = n3;
        }
        return kvEby[n2];
    }

    private static String ciH(byte[] byArray) {
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

    private static Constructor<class_5944> ciC() {
        try {
            Constructor<class_5944> constructor = class_5944.class.getDeclaredConstructor(Integer.TYPE, String.class);
            constructor.setAccessible(true);
            return constructor;
        }
        catch (ReflectiveOperationException reflectiveOperationException) {
            throw new ExceptionInInitializerError(reflectiveOperationException);
        }
    }

    private static Object ciJ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = lR.ciI(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @Override
    public void setUniform(int n, float f, float f2, float f3, float f4) {
        GL20.glUniform4f((int)n, (float)f, (float)f2, (float)f3, (float)f4);
    }

    @Override
    public void setUniform(int n, float f) {
        GL20.glUniform1f((int)n, (float)f);
    }

    @Override
    public void setUniform(int n, FloatBuffer floatBuffer) {
        GL20.glUniform1fv((int)n, (FloatBuffer)floatBuffer);
    }

    @Override
    public void setUniform(int n, int n2) {
        GL20.glUniform1i((int)n, (int)n2);
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void setUniform(int var1_1, Matrix4f var2_2) {
        block11: {
            block9: {
                var3_3 = lR.PtOYq ^ 97856181461357L;
                var6_4 = MemoryStack.stackPush();
                var5_5 = lR.ciF();
                try {
                    var7_6 = var6_4.mallocFloat((int)lR.ciN("s", (int)28447, (long)(6787557031859365464L ^ var3_3)));
                    var2_2.get(var7_6);
                    GL20.glUniformMatrix4fv((int)var1_1, (boolean)false, (FloatBuffer)var7_6);
                    v0 = var6_4;
                    if (var5_5 == null) break block9;
                }
                catch (Throwable var7_7) {
                    block10: {
                        try {
                            v1 = var6_4;
                            if (var5_5 != null) {
                                if (v1 == null) break block10;
                            }
                            ** GOTO lbl22
                        }
                        catch (Throwable v2) {
                            throw lR.ciG(v2);
                        }
                        try {
                            v1 = var6_4;
lbl22:
                            // 2 sources

                            v1.close();
                        }
                        catch (Throwable var8_8) {
                            var7_7.addSuppressed(var8_8);
                        }
                    }
                    throw var7_7;
                }
                if (v0 == null) break block11;
                v0 = var6_4;
            }
            v0.close();
        }
    }

    /*
     * Exception decompiling
     */
    @Override
    public void setUniform(int var1_1, float[] var2_2) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [6[CASE]], but top level block is 4[TRYBLOCK]
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

    @Override
    public void setUniform(int n, float f, float f2) {
        GL20.glUniform2f((int)n, (float)f, (float)f2);
    }

    @Override
    public void setUniform(int n, float f, float f2, float f3) {
        GL20.glUniform3f((int)n, (float)f, (float)f2, (float)f3);
    }

    @Override
    public void readPixel(int n, int n2, ByteBuffer byteBuffer) {
        long l = PtOYq ^ 0x418ADF745670L;
        GL11.glReadPixels((int)n, (int)n2, (int)1, (int)1, (int)lR.ciN("s", (int)10346, (long)(0x5C7ABEBD4444D63DL ^ l)), (int)lR.ciN("s", (int)21743, (long)(0x6198420A04E42AADL ^ l)), (ByteBuffer)byteBuffer);
    }

    @Override
    public void disableScissor() {
        GlStateManager._disableScissorTest();
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    public void copyTextureToTexture(GpuTexture var1_1, GpuTexture var2_2, int var3_3, int var4_4, int var5_5, int var6_6, int var7_7, int var8_8, int var9_9) {
        block38: {
            block39: {
                block36: {
                    block37: {
                        block35: {
                            block34: {
                                block33: {
                                    block32: {
                                        block31: {
                                            block29: {
                                                block30: {
                                                    var10_10 = lR.PtOYq ^ 97715003078023L;
                                                    v0 = lR.ciF();
                                                    GlStateManager._disableScissorTest();
                                                    RenderSystem.assertOnRenderThread();
                                                    var12_11 = v0;
                                                    v1 = this.APeps;
                                                    v2 = -1;
                                                    if (var12_11 == null) break block29;
                                                    try {
                                                        block42: {
                                                            if (v1 != v2) break block30;
                                                            break block42;
                                                            catch (RuntimeException v3) {
                                                                throw lR.ciG(v3);
                                                            }
                                                        }
                                                        this.APeps = GL30.glGenFramebuffers();
                                                    }
                                                    catch (RuntimeException v4) {
                                                        throw lR.ciG(v4);
                                                    }
                                                }
                                                try {
                                                    v1 = this.jQsIC;
                                                    if (var12_11 == null) break block31;
                                                    v2 = -1;
                                                }
                                                catch (RuntimeException v5) {
                                                    throw lR.ciG(v5);
                                                }
                                            }
                                            try {
                                                if (v1 == v2) {
                                                    this.jQsIC = GL30.glGenFramebuffers();
                                                }
                                            }
                                            catch (RuntimeException v6) {
                                                throw lR.ciG(v6);
                                            }
                                            try {
                                                v7 = var1_1;
                                                if (var12_11 == null) break block32;
                                                v1 = v7 instanceof class_10868;
                                            }
                                            catch (RuntimeException v8) {
                                                throw lR.ciG(v8);
                                            }
                                        }
                                        if (v1 == 0) break block34;
                                        v7 = var1_1;
                                    }
                                    var13_12 = (class_10868)v7;
                                    v9 = var2_2;
                                    if (var12_11 == null) break block33;
                                    try {
                                        block43: {
                                            if (!(v9 instanceof class_10868)) break block34;
                                            break block43;
                                            catch (RuntimeException v10) {
                                                throw lR.ciG(v10);
                                            }
                                        }
                                        v9 = var2_2;
                                    }
                                    catch (RuntimeException v11) {
                                        throw lR.ciG(v11);
                                    }
                                }
                                var14_13 = (class_10868)v9;
                                try {
                                    if (var12_11 != null) break block35;
                                    iS.bwK("Mv4EL");
                                }
                                catch (RuntimeException v12) {
                                    throw lR.ciG(v12);
                                }
                            }
                            throw new IllegalArgumentException((String)lR.ciK("l", (int)26007, (long)(130368503769940084L ^ var10_10)));
                        }
                        var15_14 = var1_1.getFormat().hasDepthAspect();
                        try {
                            v13 /* !! */  = var15_14;
                            if (var12_11 == null) break block36;
                            if (v13 /* !! */  == 0) break block37;
                        }
                        catch (RuntimeException v14) {
                            throw lR.ciG(v14);
                        }
                        v13 /* !! */  = lR.ciN("s", (int)7481, (long)(5394255276610486422L ^ var10_10));
                        break block36;
                    }
                    v13 /* !! */  = lR.ciN("s", (int)22058, (long)(3429538059245046672L ^ var10_10));
                }
                var16_15 = v13 /* !! */ ;
                try {
                    v15 /* !! */  = var15_14;
                    if (var12_11 == null) break block38;
                    if (v15 /* !! */  == 0) break block39;
                }
                catch (RuntimeException v16) {
                    throw lR.ciG(v16);
                }
                v15 /* !! */  = lR.ciN("s", (int)26409, (long)(7868486432715307650L ^ var10_10));
                break block38;
            }
            v15 /* !! */  = lR.ciN("s", (int)21825, (long)(8346287016865351926L ^ var10_10));
        }
        var17_16 = v15 /* !! */ ;
        var18_17 = GL11.glGetInteger((int)lR.ciN("s", (int)22698, (long)(4042731091236603164L ^ var10_10)));
        var19_18 = GL11.glGetInteger((int)lR.ciN("s", (int)28161, (long)(2277547815541535674L ^ var10_10)));
        try {
            block41: {
                block40: {
                    block44: {
                        GL30.glBindFramebuffer((int)lR.ciN("s", (int)13477, (long)(6124717797344323863L ^ var10_10)), (int)this.APeps);
                        GL30.glBindFramebuffer((int)lR.ciN("s", (int)14645, (long)(5305756324959200392L ^ var10_10)), (int)this.jQsIC);
                        GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)31375, (long)(284518169528559401L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)var13_12.method_68427(), (int)var3_3);
                        GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)28342, (long)(7166796641889973023L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)var14_13.method_68427(), (int)var3_3);
                        v17 /* !! */  = var15_14;
                        if (var12_11 == null) break block40;
                        if (v17 /* !! */  == 0) ** GOTO lbl121
                        break block44;
                        catch (RuntimeException v18) {
                            throw lR.ciG(v18);
                        }
                    }
                    try {
                        block45: {
                            GL11.glReadBuffer((int)0);
                            GL11.glDrawBuffer((int)0);
                            if (var12_11 != null) break block41;
                            break block45;
                            catch (RuntimeException v19) {
                                throw lR.ciG(v19);
                            }
                        }
                        GL11.glReadBuffer((int)lR.ciN("s", (int)14045, (long)(373400023064259429L ^ var10_10)));
                        v17 /* !! */  = (int)lR.ciN("s", (int)14045, (long)(373400023064259429L ^ var10_10));
                    }
                    catch (RuntimeException v20) {
                        throw lR.ciG(v20);
                    }
                }
                GL11.glDrawBuffer((int)v17 /* !! */ );
            }
            GL30.glBlitFramebuffer((int)var6_6, (int)var7_7, (int)(var6_6 + var8_8), (int)(var7_7 + var9_9), (int)var4_4, (int)var5_5, (int)(var4_4 + var8_8), (int)(var5_5 + var9_9), (int)var17_16, (int)lR.ciN("s", (int)5042, (long)(8882597424993373726L ^ var10_10)));
            GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)31375, (long)(284518169528559401L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)0, (int)0);
        }
        catch (Throwable var20_19) {
            GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)31375, (long)(284518169528559401L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)0, (int)0);
            GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)28342, (long)(7166796641889973023L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)0, (int)0);
            GL30.glBindFramebuffer((int)lR.ciN("s", (int)31375, (long)(284518169528559401L ^ var10_10)), (int)var18_17);
            GL30.glBindFramebuffer((int)lR.ciN("s", (int)28342, (long)(7166796641889973023L ^ var10_10)), (int)var19_18);
            throw var20_19;
        }
        GL30.glFramebufferTexture2D((int)lR.ciN("s", (int)28342, (long)(7166796641889973023L ^ var10_10)), (int)var16_15, (int)lR.ciN("s", (int)19553, (long)(2859383715795390915L ^ var10_10)), (int)0, (int)0);
        GL30.glBindFramebuffer((int)lR.ciN("s", (int)31375, (long)(284518169528559401L ^ var10_10)), (int)var18_17);
        GL30.glBindFramebuffer((int)lR.ciN("s", (int)28342, (long)(7166796641889973023L ^ var10_10)), (int)var19_18);
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    public lV createShader(byte[] var1_1, lS var2_2) {
        block24: {
            block23: {
                block21: {
                    block20: {
                        var3_3 = lR.PtOYq ^ 63279615730538L;
                        var6_4 = GlStateManager.glCreateShader((int)lR.ciz(var2_2));
                        var7_5 /* !! */  = MemoryStack.stackPush();
                        var5_6 = lR.ciF();
                        try {
                            var8_7 = MemoryUtil.memAlloc((int)(var1_1.length + 1));
                            try {
                                var8_7.put(var1_1).put((byte)0).flip();
                                var9_9 = var7_5 /* !! */ .mallocPointer(1);
                                var9_9.put(0, MemoryUtil.memAddress((ByteBuffer)var8_7));
                                var10_11 = var7_5 /* !! */ .ints(var1_1.length);
                                GL20.nglShaderSource((int)var6_4, (int)1, (long)MemoryUtil.memAddress((CustomBuffer)var9_9), (long)MemoryUtil.memAddress((IntBuffer)var10_11));
                            }
                            finally {
                                MemoryUtil.memSet((long)MemoryUtil.memAddress((ByteBuffer)var8_7), (int)0, (long)var8_7.capacity());
                                MemoryUtil.memFree((Buffer)var8_7);
                            }
                        }
                        catch (Throwable var8_8) {
                            block22: {
                                try {
                                    v0 = var7_5 /* !! */ ;
                                    if (var5_6 != null) {
                                        if (v0 == null) break block22;
                                    }
                                    ** GOTO lbl31
                                }
                                catch (Throwable v1) {
                                    throw lR.ciG(v1);
                                }
                                try {
                                    v0 = var7_5 /* !! */ ;
lbl31:
                                    // 2 sources

                                    v0.close();
                                }
                                catch (Throwable var9_10) {
                                    var8_8.addSuppressed(var9_10);
                                }
                            }
                            throw var8_8;
                        }
                        try {
                            v2 = var7_5 /* !! */ ;
                            if (var5_6 == null) break block20;
                            if (v2 == null) break block21;
                        }
                        catch (Throwable v3) {
                            throw lR.ciG(v3);
                        }
                        v2 = var7_5 /* !! */ ;
                    }
                    v2.close();
                }
                try {
                    try {
                        GlStateManager.glCompileShader((int)var6_4);
                        v4 = GlStateManager.glGetShaderi((int)var6_4, (int)lR.ciN("s", (int)22433, (long)(4476770428319145197L ^ var3_3)));
                        v5 /* !! */  = 1;
                        if (var5_6 == null) break block23;
                        if (v4 == v5 /* !! */ ) break block24;
                    }
                    catch (Throwable v6) {
                        throw lR.ciG(v6);
                    }
                    v4 = var6_4;
                    v5 /* !! */  = (int)lR.ciN("s", (int)7210, (long)(6735759847205853043L ^ var3_3));
                }
                catch (Throwable v7) {
                    throw lR.ciG(v7);
                }
            }
            var7_5 /* !! */  = GlStateManager.glGetShaderInfoLog((int)v4, (int)v5 /* !! */ );
            GlStateManager.glDeleteShader((int)var6_4);
            throw new RuntimeException((String)var7_5 /* !! */ );
        }
        try {
            v8 = new lR$uE(var6_4);
            if (iS.bwL() == null) {
                lR.ciE(new String[3]);
            }
        }
        catch (Throwable v9) {
            throw lR.ciG(v9);
        }
        return v8;
    }

    private static CallSite ciK(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lR" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Throwable ciG(Throwable throwable) {
        return throwable;
    }

    private static lR$uE ciA(lV lV2) {
        long l;
        block5: {
            lV lV3;
            block4: {
                l = PtOYq ^ 0x4013BE0A6F05L;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        lV3 = lV2;
                        if (stringArray == null) break block4;
                        if (!(lV3 instanceof lR$uE)) break block5;
                    }
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                    lV3 = lV2;
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            lR$uE lR$uE = (lR$uE)lV3;
            return lR$uE;
        }
        throw new IllegalArgumentException((String)((Object)lR.ciK("l", (int)5312, (long)(0x18EE273AA86EEBA7L ^ l))));
    }

    private static lR$uF ciB(lW lW2) {
        long l;
        block5: {
            lW lW3;
            block4: {
                l = PtOYq ^ 0x4506C4FE1AFFL;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        lW3 = lW2;
                        if (stringArray == null) break block4;
                        if (!(lW3 instanceof lR$uF)) break block5;
                    }
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                    lW3 = lW2;
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            lR$uF lR$uF = (lR$uF)lW3;
            return lR$uF;
        }
        throw new IllegalArgumentException((String)((Object)lR.ciK("l", (int)7379, (long)(0x5BD8AEDB39BA1649L ^ l))));
    }

    private static CallSite ciN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lR" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static String[] ciF() {
        return xWJpb;
    }

    public static void ciE(String[] stringArray) {
        xWJpb = stringArray;
    }

    /*
     * Exception decompiling
     */
    private static int ciz(lS var0) {
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

    private static class_5944 ciD(int n, String string) {
        long l = PtOYq ^ 0x3FEF1064E551L;
        try {
            return JlBvN.newInstance(n, string);
        }
        catch (ReflectiveOperationException reflectiveOperationException) {
            throw new RuntimeException((String)((Object)lR.ciK("l", (int)29965, (long)(0x2697CCE8D8BF803BL ^ l))), reflectiveOperationException);
        }
    }

    public class_10867 cix(RenderPipeline renderPipeline, lW lW2, Map<RenderPipeline, class_10867> map) {
        block3: {
            class_10867 class_108672;
            block2: {
                long l = PtOYq ^ 0x72E922730A74L;
                class_10867 class_108673 = map.get(renderPipeline);
                String[] stringArray = lR.ciF();
                try {
                    class_108672 = class_108673;
                    if (stringArray == null) break block2;
                    if (class_108672 == null) break block3;
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
                class_108672 = class_108673;
            }
            return class_108672;
        }
        class_5944 class_59442 = lR.ciD(lR.ciB((lW)lW2).id, renderPipeline.getLocation().toString());
        this.hyzPD.add(class_59442);
        class_59442.method_62900(renderPipeline.getUniforms(), renderPipeline.getSamplers());
        class_10867 class_108674 = new class_10867(renderPipeline, class_59442);
        map.put(renderPipeline, class_108674);
        return class_108674;
    }

    public void ciy(Object object) {
        block8: {
            Object object2;
            block7: {
                long l = PtOYq ^ 0x37CB58D282A9L;
                String[] stringArray = lR.ciF();
                try {
                    try {
                        object2 = object;
                        if (stringArray == null) break block7;
                        if (!(object2 instanceof class_5944)) break block8;
                    }
                    catch (RuntimeException runtimeException) {
                        throw lR.ciG(runtimeException);
                    }
                    object2 = object;
                }
                catch (RuntimeException runtimeException) {
                    throw lR.ciG(runtimeException);
                }
            }
            class_5944 class_59442 = (class_5944)object2;
            try {
                if (!this.hyzPD.remove(class_59442)) {
                    class_59442.close();
                }
            }
            catch (RuntimeException runtimeException) {
                throw lR.ciG(runtimeException);
            }
        }
    }

    @Override
    public void clearColor(float f, float f2, float f3, float f4) {
        GL11.glClearColor((float)f, (float)f2, (float)f3, (float)f4);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lR.class, "ciJ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(lR.class, "ciM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
