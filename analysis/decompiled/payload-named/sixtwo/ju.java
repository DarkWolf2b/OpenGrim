/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.render.DiffuseLighting$Type
 *  net.minecraft.client.render.OutlineVertexConsumerProvider
 *  net.minecraft.client.render.OverlayTexture
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.render.TexturedRenderLayers
 *  net.minecraft.client.render.VertexConsumerProvider
 *  net.minecraft.client.render.VertexConsumerProvider$Immediate
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.command.OrderedRenderCommandQueueImpl
 *  net.minecraft.client.render.command.RenderDispatcher
 *  net.minecraft.client.render.item.ItemRenderState
 *  net.minecraft.client.render.item.KeyedItemRenderState
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemDisplayContext
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.HeldItemContext
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.world.World
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
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
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.DiffuseLighting;
import net.minecraft.client.render.OutlineVertexConsumerProvider;
import net.minecraft.client.render.OverlayTexture;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.TexturedRenderLayers;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.command.OrderedRenderCommandQueueImpl;
import net.minecraft.client.render.command.RenderDispatcher;
import net.minecraft.client.render.item.ItemRenderState;
import net.minecraft.client.render.item.KeyedItemRenderState;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemDisplayContext;
import net.minecraft.item.ItemStack;
import net.minecraft.util.HeldItemContext;
import net.minecraft.util.math.MathHelper;
import net.minecraft.world.World;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4fc;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.jE;
import sixtwo.jI;
import sixtwo.jO;
import sixtwo.ju$tT;
import sixtwo.jx;
import sixtwo.kD;
import sixtwo.kJ;
import sixtwo.kd;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ln;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.rD;

public final class ju
implements lA {
    private static final float vMVWK = -10850.0f;
    private static final float wSuGG = 16.0f;
    private static @Nullable jx EZsoO;
    private static String XBcvw;
    private static final long SIlUv;
    private static final long[] WageH;
    private static final Integer[] jOCMz;
    private static final Map VSGjo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ju.SIlUv = gb.aYR(-1711104809145699340L, 5991162868861888221L, MethodHandles.lookup().lookupClass()).a(17282826408841L);
                ju.VSGjo = new HashMap<K, V>(13);
                ju.bGm("Ie0B1b");
                var0 = ju.SIlUv ^ 44549190952295L;
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
                var8_3 = new long[6];
                var5_4 = 0;
                var6_5 = "\u00c1n{\u00f7\u008bO\u00f4)\u00cd\u0001\u00d8\u00e7o\u001f\u00ecD\u00d1\u0088\u00cb\u0089^\u00d0\u00ba(*D\u00e9\u00ed\u001e\u000b\u0080\u00e9";
                var7_6 = "\u00c1n{\u00f7\u008bO\u00f4)\u00cd\u0001\u00d8\u00e7o\u001f\u00ecD\u00d1\u0088\u00cb\u0089^\u00d0\u00ba(*D\u00e9\u00ed\u001e\u000b\u0080\u00e9".length();
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
                    var6_5 = "H\u00ea\u00c6\u00de7u\u00e8\u00f5\u00bb\u00de\u00b7P\u00b5\u0005\u008b\u00eb";
                    var7_6 = "H\u00ea\u00c6\u00de7u\u00e8\u00f5\u00bb\u00de\u00b7P\u00b5\u0005\u008b\u00eb".length();
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
        ju.WageH = var8_3;
        ju.jOCMz = new Integer[6];
    }

    public static void bFO(@Nullable Matrix3x2fc matrix3x2fc, @Nullable LivingEntity livingEntity, @Nullable World world, ItemStack itemStack, float f2, float f3, float f4, ju$tT ju$tT) {
        long l2 = SIlUv ^ 0x6F730F3C8F8L;
        try {
            if (itemStack.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        KeyedItemRenderState keyedItemRenderState = ju.bFW(livingEntity, world, itemStack);
        ju.bFX(keyedItemRenderState, matrix3x2fc, f2, f3, f4, ju$tT);
    }

    public static String bGn() {
        return XBcvw;
    }

    public static void bFT(@Nullable Matrix3x2fc matrix3x2fc, ItemStack itemStack, float f2, float f3, @Nullable String string, ju$tT ju$tT) {
        long l2 = SIlUv ^ 0x37AE1C990D04L;
        try {
            if (itemStack.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        Matrix3x2fStack matrix3x2fStack = jI.bIn(matrix3x2fc);
        matrix3x2fStack.translate(f2, f3);
        ju.bGf(matrix3x2fStack, itemStack);
        ju.bGg(matrix3x2fStack, itemStack);
        ju.bGh(matrix3x2fStack, itemStack, string, ju$tT);
    }

    public static void bFU(@Nullable Matrix3x2fc matrix3x2fc, ItemStack itemStack, int n2, int n3, int n4, @Nullable String string, ju$tT ju$tT) {
        long l2 = SIlUv ^ 0x1BEC0091E786L;
        try {
            if (itemStack.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        Matrix3x2fStack matrix3x2fStack = jI.bIn(matrix3x2fc);
        matrix3x2fStack.translate((float)n2, (float)n3);
        matrix3x2fStack.scale((float)n4 / 16.0f, (float)n4 / 16.0f);
        ju.bGf(matrix3x2fStack, itemStack);
        ju.bGg(matrix3x2fStack, itemStack);
        ju.bGh(matrix3x2fStack, itemStack, string, ju$tT);
    }

    /*
     * Unable to fully structure code
     */
    private static boolean bFZ(KeyedItemRenderState var0) {
        block13: {
            block12: {
                block10: {
                    block11: {
                        var1_1 = ju.SIlUv ^ 6556693632666L;
                        var3_2 = ju.bGn();
                        try {
                            v0 = var0.isSideLit();
                            if (var3_2 == null) break block10;
                            if (v0) break block11;
                        }
                        catch (MatchException v1) {
                            throw ju.bGo(v1);
                        }
                        v0 = true;
                        break block10;
                    }
                    v0 = false;
                }
                var4_3 = v0;
                try {
                    try {
                        if (var3_2 == null) break block12;
                        if (var4_3) {
                        }
                        ** GOTO lbl31
                    }
                    catch (MatchException v2) {
                        throw ju.bGo(v2);
                    }
                    rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ITEMS_FLAT);
                }
                catch (MatchException v3) {
                    throw ju.bGo(v3);
                }
            }
            try {
                if (var3_2 != null) break block13;
lbl31:
                // 2 sources

                rD.dlmvG.gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ITEMS_3D);
            }
            catch (MatchException v4) {
                throw ju.bGo(v4);
            }
        }
        return var4_3;
    }

    private static void bGl(Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> object2ObjectLinkedOpenHashMap, RenderLayer renderLayer) {
        object2ObjectLinkedOpenHashMap.put((Object)renderLayer, (Object)new BufferAllocator(renderLayer.getExpectedBufferSize()));
    }

    private static int bGq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ju.bGp(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static void bGm(String string) {
        XBcvw = string;
    }

    public static void bFP(lC lC2, ItemStack itemStack, float f2, float f3, @Nullable String string, ju$tT ju$tT) {
        ju.bFT((Matrix3x2fc)lC2.cfc(), itemStack, f2, f3, string, ju$tT);
    }

    private static void bFX(KeyedItemRenderState keyedItemRenderState, @Nullable Matrix3x2fc matrix3x2fc, float f2, float f3, float f4, ju$tT ju$tT) {
        ju.bFY(keyedItemRenderState, matrix3x2fc, f2, f3, f4, ju$tT);
    }

    private static void bFY(KeyedItemRenderState keyedItemRenderState, @Nullable Matrix3x2fc matrix3x2fc, float f2, float f3, float f4, ju$tT ju$tT) {
        long l2 = SIlUv ^ 0x658210FC7110L;
        MatrixStack matrixStack = ju.bGc(matrix3x2fc);
        jx jx2 = ju.bGj();
        matrixStack.push();
        ju.bGb(matrixStack, f2, f3, f4);
        boolean bl2 = ju.bFZ(keyedItemRenderState);
        try {
            ju.bGd(keyedItemRenderState, matrixStack, jx2.submitNodeStorage());
            if (ju$tT == ju$tT.yDoOO) {
                ju.bFV();
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        try {
            if (bl2) {
                ju.bGa();
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        matrixStack.pop();
    }

    private static void bGe(jx jx2) {
        jx2.featureRenderDispatcher().render();
        jx2.bufferSource().draw();
        jx2.crumblingBufferSource().draw();
        jx2.outlineBufferSource().draw();
    }

    public static void bFR(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, ItemStack itemStack, int n2, int n3, int n4, @Nullable String string) {
        ju.bFS(matrix3x2fc, lC2, itemStack, n2, n3, n4, string, ju$tT.yDoOO);
    }

    private static void bGg(Matrix3x2fStack matrix3x2fStack, ItemStack itemStack) {
        float f2;
        float f3;
        long l2;
        block9: {
            block10: {
                float f4;
                String string;
                block8: {
                    ClientPlayerEntity clientPlayerEntity;
                    block6: {
                        block7: {
                            l2 = SIlUv ^ 0x46855FC6812BL;
                            string = ju.bGn();
                            try {
                                try {
                                    clientPlayerEntity = rD.dlmvG.player;
                                    if (string == null) break block6;
                                    if (clientPlayerEntity != null) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw ju.bGo(matchException);
                                }
                                f4 = 0.0f;
                                break block8;
                            }
                            catch (MatchException matchException) {
                                throw ju.bGo(matchException);
                            }
                        }
                        clientPlayerEntity = rD.dlmvG.player;
                    }
                    f4 = clientPlayerEntity.getItemCooldownManager().getCooldownProgress(itemStack, rD.dlmvG.getRenderTickCounter().getTickProgress(true));
                }
                f3 = f4;
                try {
                    float f5 = f3 - 0.0f;
                    f2 = f5 == 0.0f ? 0 : (f5 < 0.0f ? -1 : 1);
                    if (string == null) break block9;
                    if (f2 > 0) break block10;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                return;
            }
            f2 = MathHelper.floor((float)(16.0f * (1.0f - f3)));
        }
        float f6 = f2;
        float f7 = f6 + MathHelper.ceil((float)(16.0f * f3));
        ju.bGi(matrix3x2fStack, 0.0f, f6, 16.0f, f7 - f6, mG.cnQ((int)ju.bGr("v", (int)27453, (long)(0x4C2C01B3E7EA1EDFL ^ l2))));
    }

    private static void bGi(Matrix3x2fStack matrix3x2fStack, float f2, float f3, float f4, float f5, mG mG2) {
        ntCFX.bMM(jO.bJI(matrix3x2fStack, f2, f3, f4, f5).dqh(kd.AhlXN).dqk(mG2).dqz());
    }

    private static int bGp(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x236A;
        if (jOCMz[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = WageH[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])VSGjo.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VSGjo.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ju", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ju.jOCMz[n3] = n4;
        }
        return jOCMz[n3];
    }

    private static void bGb(MatrixStack matrixStack, float f2, float f3, float f4) {
        matrixStack.translate(f2 + f4 / 2.0f, f3 + f4 / 2.0f, -10850.0f);
        matrixStack.scale(f4, -f4, f4);
    }

    private static Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator> bGk() {
        Object2ObjectLinkedOpenHashMap object2ObjectLinkedOpenHashMap = new Object2ObjectLinkedOpenHashMap();
        ju.bGl((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap, TexturedRenderLayers.getEntityCutout());
        ju.bGl((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap, TexturedRenderLayers.getBlockTranslucentCull());
        ju.bGl((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap, TexturedRenderLayers.getItemTranslucentCull());
        jE.bHu((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap);
        ju.bGl((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap, RenderLayers.waterMask());
        return object2ObjectLinkedOpenHashMap;
    }

    private static void bGf(Matrix3x2fStack matrix3x2fStack, ItemStack itemStack) {
        block4: {
            long l2;
            block5: {
                l2 = SIlUv ^ 0x495B539C9875L;
                String string = ju.bGn();
                try {
                    try {
                        if (string == null) break block4;
                        if (itemStack.isItemBarVisible()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ju.bGo(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
            }
            ju.bGi(matrix3x2fStack, 2.0f, 13.0f, 13.0f, 2.0f, mG.cnQ((int)ju.bGr("v", (int)9573, (long)(0x261411F8E35A49DEL ^ l2))));
            ju.bGi(matrix3x2fStack, 2.0f, 13.0f, itemStack.getItemBarStep(), 1.0f, mG.cnQ(ju.bGr("v", (int)695, (long)(0x3BC46F3DECE2EE0FL ^ l2)) | itemStack.getItemBarColor()));
        }
    }

    public static void bFQ(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, ItemStack itemStack, int n2, int n3, int n4) {
        ju.bFR(matrix3x2fc, lC2, itemStack, n2, n3, n4, null);
    }

    private static void bGa() {
        MinecraftClient.getInstance().gameRenderer.getDiffuseLighting().setShaderLights(DiffuseLighting.Type.ITEMS_3D);
    }

    private static void bGd(KeyedItemRenderState keyedItemRenderState, MatrixStack matrixStack, OrderedRenderCommandQueueImpl orderedRenderCommandQueueImpl) {
        long l2 = SIlUv ^ 0x39A9B8DD83C1L;
        keyedItemRenderState.render(matrixStack, (OrderedRenderCommandQueue)orderedRenderCommandQueueImpl, (int)ju.bGr("v", (int)17821, (long)(0x7F4E7EC0F1CDB290L ^ l2)), OverlayTexture.DEFAULT_UV, 0);
    }

    private static void bGh(Matrix3x2fStack matrix3x2fStack, ItemStack itemStack, @Nullable String string, ju$tT ju$tT) {
        block12: {
            float f2;
            float f3;
            lq lq2;
            String string2;
            block13: {
                String string3;
                String string4;
                block10: {
                    block11: {
                        block9: {
                            block8: {
                                long l2 = SIlUv ^ 0x6077AB984464L;
                                string4 = ju.bGn();
                                try {
                                    try {
                                        if (itemStack.getCount() != 1) break block8;
                                        string3 = string;
                                        if (string4 == null) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw ju.bGo(matchException);
                                    }
                                    if (string3 != null) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw ju.bGo(matchException);
                                }
                                return;
                            }
                            string3 = string;
                        }
                        try {
                            if (string4 == null) break block10;
                            if (string3 == null) break block11;
                        }
                        catch (MatchException matchException) {
                            throw ju.bGo(matchException);
                        }
                        string3 = string;
                        break block10;
                    }
                    string3 = String.valueOf(itemStack.getCount());
                }
                string2 = string3;
                lq2 = lE.WTzbi.bYM(8.0f);
                f3 = 17.0f - lq2.cao(string2);
                f2 = 17.0f - lq2.cat();
                try {
                    if (string4 == null) break block12;
                    if (ju$tT != ju$tT.IHKNQ) break block13;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                kJ kJ2 = ju.bGj().textBatch();
                kJ2.bUc(lq2);
                kJ2.bUd(kD.bST(matrix3x2fStack, f3, f2, 0.0, lq2.caw(), mZ.csh(string2)).dsX(mG.hoGuU).dsY());
                return;
            }
            ln.bZG(lq2.cav(), string2, lq2.caw(), mG.hoGuU, jI.bIl((Matrix3x2fc)matrix3x2fStack), f3, f2, 0.0f);
        }
    }

    private static MatrixStack bGc(@Nullable Matrix3x2fc matrix3x2fc) {
        long l2 = SIlUv ^ 0x4E36A64A0E54L;
        MatrixStack matrixStack = new MatrixStack();
        try {
            if (matrix3x2fc != null) {
                matrixStack.multiplyPositionMatrix((Matrix4fc)jI.bIl(matrix3x2fc));
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        return matrixStack;
    }

    private static MatchException bGo(MatchException matchException) {
        return matchException;
    }

    private static CallSite bGr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ju" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void bFN(@Nullable Matrix3x2fc matrix3x2fc, @Nullable LivingEntity livingEntity, @Nullable World world, ItemStack itemStack, float f2, float f3, float f4) {
        ju.bFO(matrix3x2fc, livingEntity, world, itemStack, f2, f3, f4, ju$tT.yDoOO);
    }

    public static void bFS(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, ItemStack itemStack, int n2, int n3, int n4, @Nullable String string, ju$tT ju$tT) {
        ju.bFU(matrix3x2fc, itemStack, n2, n3, n4, string, ju$tT);
    }

    private static KeyedItemRenderState bFW(@Nullable LivingEntity livingEntity, @Nullable World world, ItemStack itemStack) {
        KeyedItemRenderState keyedItemRenderState = new KeyedItemRenderState();
        rD.dlmvG.getItemModelManager().clearAndUpdate((ItemRenderState)keyedItemRenderState, itemStack, ItemDisplayContext.GUI, world, (HeldItemContext)livingEntity, 0);
        return keyedItemRenderState;
    }

    private static jx bGj() {
        jx jx2;
        block2: {
            block3: {
                long l2 = SIlUv ^ 0x2F2CEBD1D234L;
                String string = ju.bGn();
                try {
                    jx2 = EZsoO;
                    if (string == null) break block2;
                    if (jx2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                OrderedRenderCommandQueueImpl orderedRenderCommandQueueImpl = new OrderedRenderCommandQueueImpl();
                VertexConsumerProvider.Immediate immediate = VertexConsumerProvider.immediate(ju.bGk(), (BufferAllocator)new BufferAllocator((int)ju.bGr("v", (int)2265, (long)(0x3C967E1C3CD9AE22L ^ l2))));
                OutlineVertexConsumerProvider outlineVertexConsumerProvider = new OutlineVertexConsumerProvider();
                VertexConsumerProvider.Immediate immediate2 = VertexConsumerProvider.immediate((BufferAllocator)new BufferAllocator((int)ju.bGr("v", (int)3415, (long)(0x286CFCD0C200ABABL ^ l2))));
                EZsoO = new jx(orderedRenderCommandQueueImpl, immediate, outlineVertexConsumerProvider, immediate2, new RenderDispatcher(orderedRenderCommandQueueImpl, rD.dlmvG.getBlockRenderManager(), immediate, rD.dlmvG.getAtlasManager(), outlineVertexConsumerProvider, immediate2, rD.dlmvG.textRenderer), new kJ());
            }
            jx2 = EZsoO;
        }
        return jx2;
    }

    public static void bFV() {
        jx jx2;
        block2: {
            jx jx3;
            block3: {
                long l2 = SIlUv ^ 0xE5CD039BAE1L;
                jx3 = EZsoO;
                String string = ju.bGn();
                try {
                    jx2 = jx3;
                    if (string == null) break block2;
                    if (jx2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                return;
            }
            ju.bGe(jx3);
            jx2 = jx3;
        }
        jx2.textBatch().endBatch();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ju.class, "bGq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

