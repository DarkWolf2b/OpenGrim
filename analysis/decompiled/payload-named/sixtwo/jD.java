/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  net.minecraft.client.render.RenderLayers
 *  net.minecraft.client.render.VertexConsumer
 *  net.minecraft.client.render.VertexConsumerProvider$Immediate
 *  net.minecraft.client.render.command.OrderedRenderCommandQueue
 *  net.minecraft.client.render.entity.model.ShieldEntityModel
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemDisplayContext
 *  net.minecraft.util.Identifier
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.RenderLayers;
import net.minecraft.client.render.VertexConsumer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.model.ShieldEntityModel;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemDisplayContext;
import net.minecraft.util.Identifier;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.jspecify.annotations.Nullable;
import sixtwo.cY;
import sixtwo.gb;
import sixtwo.jC;
import sixtwo.jD$tV;
import sixtwo.ki;
import sixtwo.kn;
import sixtwo.mG;
import sixtwo.rD;

public final class jD {
    private static final Identifier rPixL;
    private static final List<jD$tV> zbxcJ;
    private static @Nullable PlayerEntity KGTBV;
    private static @Nullable ItemDisplayContext euveQ;
    private static @Nullable jC OHnhj;
    private static final long BioyZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        BioyZ = gb.aYR(5961469359657005583L, -2655715135983645903L, MethodHandles.lookup().lookupClass()).a(145425912808576L);
        long l2 = BioyZ ^ 0x2B4736FE3E37L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u0088\u00a13\u0010\u0000\u008b\u0013\u00a9\u00beZ!\u008c8\u00a77\u00f6e\u00eb\u00d5Z*\\L>\u0013\u00d8\u00b1\u00ceY\u00f4t\u00bb\u00a7\u008d\u00a5\u00f5h\u00c2)~;\u007fQ\u00e1\u00aaz\u0085\u00d8'g[\u001d3Ba\u008f".getBytes("ISO-8859-1"));
                String string = jD.bHt(byArray3).intern();
                rPixL = Identifier.ofVanilla((String)string);
                zbxcJ = new ArrayList<jD$tV>();
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static MatchException bHs(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static @Nullable PlayerEntity bHn() {
        ItemDisplayContext itemDisplayContext;
        block15: {
            ItemDisplayContext itemDisplayContext2;
            int n2;
            block13: {
                block14: {
                    long l2 = BioyZ ^ 0x132400CA4300L;
                    n2 = jC.bHb();
                    try {
                        if (rD.dlmvG.player == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    itemDisplayContext2 = euveQ;
                    try {
                        try {
                            itemDisplayContext = itemDisplayContext2;
                            if (n2 == 0) break block13;
                            if (itemDisplayContext != null) break block14;
                            return KGTBV;
                        }
                        catch (MatchException matchException) {
                            throw jD.bHs(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                }
                itemDisplayContext = itemDisplayContext2;
            }
            try {
                try {
                    if (n2 == 0) break block15;
                    if (itemDisplayContext.isFirstPerson()) return rD.dlmvG.player;
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
                itemDisplayContext = itemDisplayContext2;
            }
            catch (MatchException matchException) {
                throw jD.bHs(matchException);
            }
        }
        try {
            if (itemDisplayContext != ItemDisplayContext.GUI) return KGTBV;
            return rD.dlmvG.player;
        }
        catch (MatchException matchException) {
            throw jD.bHs(matchException);
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    private static void bHo(ShieldEntityModel shieldEntityModel, MatrixStack matrixStack, Matrix4f matrix4f, int n2, int n3) {
        jC jC2 = jD.bHp();
        VertexConsumerProvider.Immediate immediate = jC2.bGU();
        RenderSystem.getModelViewStack().pushMatrix().identity().mul((Matrix4fc)matrix4f);
        matrixStack.push();
        try {
            VertexConsumer vertexConsumer = immediate.getBuffer(RenderLayers.entityTranslucent((Identifier)rPixL));
            shieldEntityModel.render(matrixStack, vertexConsumer, n2, n3, mG.hoGuU.coh());
        }
        finally {
            try {
                jC2.bGY();
            }
            finally {
                matrixStack.pop();
                RenderSystem.getModelViewStack().popMatrix();
            }
        }
    }

    private static String bHt(byte[] byArray) {
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

    private static jC bHp() {
        jC jC2;
        block4: {
            block5: {
                long l2 = BioyZ ^ 0x773041F689B1L;
                int n2 = jC.bHb();
                try {
                    try {
                        jC2 = OHnhj;
                        if (n2 == 0) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    OHnhj = new jC();
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
            }
            jC2 = OHnhj;
        }
        return jC2;
    }

    public static void bHh(@Nullable PlayerEntity playerEntity) {
        KGTBV = playerEntity;
    }

    public static void bHl() {
        long l2 = BioyZ ^ 0x79036C82CBC2L;
        int n2 = jC.bHc();
        try {
            if (zbxcJ.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw jD.bHs(matchException);
        }
        ArrayList<jD$tV> arrayList = new ArrayList<jD$tV>(zbxcJ);
        zbxcJ.clear();
        for (jD$tV jD$tV : arrayList) {
            ki.bPj(() -> jD.bHo(jD$tV.model(), jD$tV.poseStack(), jD$tV.modelViewMatrix(), jD$tV.lightCoords(), jD$tV.overlayCoords()), jD$tV.color(), jD$tV.color(), 0, 4, 2.5f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f);
            if (n2 == 0) continue;
        }
    }

    public static void bHm() {
        zbxcJ.clear();
    }

    public static void bHj() {
        euveQ = null;
    }

    public static void bHi(@Nullable ItemDisplayContext itemDisplayContext) {
        euveQ = itemDisplayContext;
    }

    public static void bHk(ShieldEntityModel shieldEntityModel, MatrixStack matrixStack, OrderedRenderCommandQueue orderedRenderCommandQueue, int n2, int n3, cY cY2) {
        block7: {
            mG mG2;
            block8: {
                long l2 = BioyZ ^ 0x6B7061D76D42L;
                int n4 = jC.bHc();
                try {
                    if (kn.bQp()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
                PlayerEntity playerEntity = jD.bHn();
                mG2 = cY2.aaK(playerEntity);
                try {
                    try {
                        if (n4 != 0) break block7;
                        if (!mG2.cnW()) break block8;
                    }
                    catch (MatchException matchException) {
                        throw jD.bHs(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw jD.bHs(matchException);
                }
            }
            orderedRenderCommandQueue.submitCustom(matrixStack, RenderLayers.entityTranslucent((Identifier)rPixL), (entry, vertexConsumer) -> {
                MatrixStack matrixStack = new MatrixStack();
                matrixStack.peek().copy(entry);
                Matrix4f matrix4f = new Matrix4f((Matrix4fc)RenderSystem.getModelViewMatrix());
                zbxcJ.add(new jD$tV(shieldEntityModel, matrixStack, matrix4f, n2, n3, mG2));
            });
        }
    }
}

