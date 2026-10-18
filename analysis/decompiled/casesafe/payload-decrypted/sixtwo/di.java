/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.model.ModelPart$Cuboid
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.entity.PlayerEntityRenderer
 *  net.minecraft.client.render.entity.model.EntityModelLayers
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.PlayerLikeEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.entity.player.PlayerSkinType
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Quaternionfc
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
import net.minecraft.client.model.ModelPart;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.entity.PlayerEntityRenderer;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.PlayerLikeEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.entity.player.PlayerSkinType;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Quaternionfc;
import sixtwo.aR;
import sixtwo.cE;
import sixtwo.cI;
import sixtwo.dh;
import sixtwo.di$sA;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gN;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jg;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mr;
import sixtwo.pF;
import sixtwo.pj;
import sixtwo.pl;
import sixtwo.po;
import sixtwo.pv;
import sixtwo.py;
import sixtwo.rD;

public class di
extends gg {
    cI TLppV;
    cE ewpSI;
    private PlayerEntityModel VPirC;
    private PlayerEntityModel pwusN;
    private static final long GXYJi;
    private static final long[] NvTrW;
    private static final Integer[] AuasL;
    private static final Map xMVly;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public di() {
        long l2 = GXYJi ^ 0x217E89B12AA8L;
        super(gf.aZL((int)158, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)100;
        nArray[2] = (int)105;
        nArray[3] = (int)116;
        nArray[4] = (int)32;
        nArray[5] = (int)69;
        nArray[6] = (int)83;
        nArray[7] = (int)80;
        this.TLppV = new cI(this, mr.clS(nArray)).Wx(aR::yc);
        int[] nArray2 = new int[12];
        nArray2[0] = (int)69;
        nArray2[1] = (int)83;
        nArray2[2] = (int)80;
        nArray2[3] = (int)32;
        nArray2[4] = (int)80;
        nArray2[5] = (int)114;
        nArray2[6] = (int)111;
        nArray2[7] = (int)102;
        nArray2[8] = (int)105;
        nArray2[9] = (int)108;
        nArray2[10] = (int)101;
        nArray2[11] = (int)115;
        this.ewpSI = (cE)new cE(this, mr.clS(nArray2)).Vf(() -> false);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                di.GXYJi = gb.aYR(-5591434420050671696L, 5569277507217008856L, MethodHandles.lookup().lookupClass()).a(117880245901184L);
                di.xMVly = new HashMap<K, V>(13);
                var0 = di.GXYJi ^ 98725604236388L;
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
                var8_3 = new long[29];
                var5_4 = 0;
                var6_5 = "\u000e\u00d3D\u00ddB\u00d0u\u009eH\u00c1\u000bh\"y\u0082\u0010\u00e5\u00ecq\u00e7>v\u00b3_\u0013\u00f07t\u00b0>\u00b8 \u009c\u00ba\u008d\u001a\u00d0s\u0086l\u00dd\u0018\u00fd\u0094\b\u00ef\u00de\u0091\u00d6\u00f8\\\u00cf\u0092 \u008e\u001d\u00a3Ev\u00af\u0086\u00b7\u00f7\u00b9\u00aa\u0088g\u0095\u00c2\u00c0\u00fc\u0002Xu\u00dae\u0002#%\n\u000b\u009e\u00f2Y\u009d\u00c8Q\u00cb\u00e536F\u009e\u00a0$\u00d6\u0000\u009e\u00ca.p \u00ee\u00c2\u00bc\u00b1@\u00c6\u00e2f\u001fpi\u0090\u00ddO\u00c9!\u0087\u00c6qS\u00b08t\u008dC\u00ffq\u0093\u007f\u00e8 \u0013B\u0017o\u00e8\n\u00b8\u00a6y\u00f5\u00cehkI\u00bc\u0006}n\u00a5\u00b0\u001b\u0080\u0013\u00c1\u0015Gc\u00e3u\u00a6\u00e7eE$\u00bb\u00a2%\u00b9\u0081\u0099W\u00c0,C\u00c2,\u00d1`\u00ac_\u0095\u00fa\u000f\u008c(#\u00b3\u0090\u00d5\u00f8\u00b0\u009e\u00a7q\u0098\u00c6\u0098|+\u00c8s\u00ee\u00ef4!\u001f\u00f2,\u0087Ai_\u00e4";
                var7_6 = "\u000e\u00d3D\u00ddB\u00d0u\u009eH\u00c1\u000bh\"y\u0082\u0010\u00e5\u00ecq\u00e7>v\u00b3_\u0013\u00f07t\u00b0>\u00b8 \u009c\u00ba\u008d\u001a\u00d0s\u0086l\u00dd\u0018\u00fd\u0094\b\u00ef\u00de\u0091\u00d6\u00f8\\\u00cf\u0092 \u008e\u001d\u00a3Ev\u00af\u0086\u00b7\u00f7\u00b9\u00aa\u0088g\u0095\u00c2\u00c0\u00fc\u0002Xu\u00dae\u0002#%\n\u000b\u009e\u00f2Y\u009d\u00c8Q\u00cb\u00e536F\u009e\u00a0$\u00d6\u0000\u009e\u00ca.p \u00ee\u00c2\u00bc\u00b1@\u00c6\u00e2f\u001fpi\u0090\u00ddO\u00c9!\u0087\u00c6qS\u00b08t\u008dC\u00ffq\u0093\u007f\u00e8 \u0013B\u0017o\u00e8\n\u00b8\u00a6y\u00f5\u00cehkI\u00bc\u0006}n\u00a5\u00b0\u001b\u0080\u0013\u00c1\u0015Gc\u00e3u\u00a6\u00e7eE$\u00bb\u00a2%\u00b9\u0081\u0099W\u00c0,C\u00c2,\u00d1`\u00ac_\u0095\u00fa\u000f\u008c(#\u00b3\u0090\u00d5\u00f8\u00b0\u009e\u00a7q\u0098\u00c6\u0098|+\u00c8s\u00ee\u00ef4!\u001f\u00f2,\u0087Ai_\u00e4".length();
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
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u0010\u00bc\u008ct\u00d6\u00c4q\u00c9w\u00b3\r\u00ae\u00b4=f\n";
                    var7_6 = "\u0010\u00bc\u008ct\u00d6\u00c4q\u00c9w\u00b3\r\u00ae\u00b4=f\n".length();
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
lbl39:
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
lbl52:
                // 1 sources

                ** continue;
            }
        }
        di.NvTrW = var8_3;
        di.AuasL = new Integer[29];
    }

    @hG
    public void afx(gL.tk tk2) {
        block5: {
            block4: {
                long l2 = GXYJi ^ 0x92F4C06E597L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        if (iSArray != null) break block4;
                        if (!this.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    pv.cPH(tk2);
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            pl.cNJ(tk2);
        }
    }

    @hG
    public void afy(gM gM2) {
        pv.cPJ();
        pl.cNN();
    }

    @hG
    public void afz(gN gN2) {
        pv.cPJ();
        pl.cNN();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void afA(gi gi2) {
        boolean bl2;
        block15: {
            PlayerEntity playerEntity;
            block16: {
                Entity entity;
                iS[] iSArray;
                block14: {
                    long l2 = GXYJi ^ 0x1B87C9C05374L;
                    iSArray = dh.afl();
                    try {
                        if (!this.bab()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    Entity entity2 = gi2.baL();
                    try {
                        try {
                            entity = entity2;
                            if (iSArray != null) break block14;
                            if (!(entity instanceof PlayerEntity)) return;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        entity = entity2;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                playerEntity = (PlayerEntity)entity;
                try {
                    if (playerEntity == rD.dlmvG.player) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                try {
                    bl2 = rD.dml().aLp(playerEntity);
                    if (iSArray != null) break block15;
                    if (!bl2) break block16;
                    return;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            bl2 = this.afK(playerEntity);
        }
        try {
            if (!bl2) return;
            gi2.bdX(true);
            return;
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    @hG
    public void afB(gk gk2) {
        iS[] iSArray;
        block19: {
            block20: {
                long l2 = GXYJi ^ 0x5C8F21FC31C5L;
                iSArray = dh.afl();
                try {
                    try {
                        if (iSArray != null) break block19;
                        if (this.bab()) break block20;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            pv.cPI();
        }
        lC lC2 = gk2.baT();
        float f2 = lC2.cfh();
        for (Entity entity : rD.dlmvG.world.getEntities()) {
            pF pF2;
            boolean bl2;
            PlayerEntity playerEntity;
            block22: {
                block23: {
                    Entity entity2;
                    block21: {
                        try {
                            entity2 = entity;
                            if (iSArray != null) break block21;
                            if (!(entity2 instanceof PlayerEntity)) continue;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        entity2 = entity;
                    }
                    playerEntity = (PlayerEntity)entity2;
                    try {
                        if (playerEntity == rD.dlmvG.player && iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    try {
                        try {
                            bl2 = rD.dml().aLp(playerEntity);
                            if (iSArray != null) break block22;
                            if (!bl2) break block23;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                bl2 = pl.cNK(playerEntity);
            }
            try {
                if (bl2 && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            lc lc2 = this.afC(playerEntity, f2);
            try {
                if (lc2 == null && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            try {
                pF2 = rD.dmc().ddy(playerEntity) ? pF.bnwqC : pF.JMCCO;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            pF pF3 = pF2;
            List<py> list = rD.dlS().cSP(pF3);
            pj.cNs(lC2, lc2, (Entity)playerEntity, list, false);
            if (iSArray == null) continue;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private lc afJ(PlayerEntity playerEntity, float f2) {
        float f3;
        float f4;
        float f5;
        float f6;
        float f7;
        block13: {
            long l2 = GXYJi ^ 0x4E8888FF40D2L;
            Vec3d vec3d = playerEntity.getLerpedPos(f2);
            Box box = jg.bBB((Entity)playerEntity, vec3d);
            Vec3d[] vec3dArray = new Vec3d[8];
            vec3dArray[0] = new Vec3d(box.minX, box.minY, box.minZ);
            vec3dArray[1] = new Vec3d(box.minX, box.maxY, box.minZ);
            vec3dArray[2] = new Vec3d(box.maxX, box.minY, box.minZ);
            vec3dArray[3] = new Vec3d(box.maxX, box.maxY, box.minZ);
            vec3dArray[4] = new Vec3d(box.minX, box.minY, box.maxZ);
            vec3dArray[5] = new Vec3d(box.minX, box.maxY, box.maxZ);
            vec3dArray[6] = new Vec3d(box.maxX, box.minY, box.maxZ);
            vec3dArray[7] = new Vec3d(box.maxX, box.maxY, box.maxZ);
            Vec3d[] vec3dArray2 = vec3dArray;
            f7 = Float.POSITIVE_INFINITY;
            f6 = Float.POSITIVE_INFINITY;
            float f8 = Float.NEGATIVE_INFINITY;
            float f9 = Float.NEGATIVE_INFINITY;
            Vec3d[] vec3dArray3 = vec3dArray2;
            iS[] iSArray = dh.afl();
            int n2 = vec3dArray3.length;
            int n3 = 0;
            while (n3 < n2) {
                block11: {
                    Vec2f vec2f;
                    block12: {
                        Vec3d vec3d2 = vec3dArray3[n3];
                        vec2f = jI.bIw(vec3d2);
                        try {
                            try {
                                if (iSArray != null) break block11;
                                if (vec2f != null) break block12;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                    }
                    f7 = Math.min(f7, vec2f.x);
                    f6 = Math.min(f6, vec2f.y);
                    f8 = Math.max(f8, vec2f.x);
                    f9 = Math.max(f9, vec2f.y);
                    ++n3;
                }
                if (iSArray == null) continue;
            }
            f5 = f8 - f7;
            f4 = f9 - f6;
            try {
                try {
                    float f10 = f5 - 1.0f;
                    f3 = f10 == 0.0f ? (char)'\u0000' : (f10 < 0.0f ? (char)'\uffffffff' : '\u0001');
                    if (iSArray != null) break block13;
                    if (f3 <= 0) return null;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                float f11 = f4 - 1.0f;
                f3 = f11 == 0.0f ? (char)'\u0000' : (f11 < 0.0f ? (char)'\uffffffff' : '\u0001');
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
        }
        try {
            if (f3 > 0) return new lc(f7, f6, f5, f4);
            return null;
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    private lc afF(PlayerEntityModel playerEntityModel, PlayerEntityRenderState playerEntityRenderState, LivingEntity livingEntity, float f2, Vec3d vec3d) {
        playerEntityModel.resetTransforms();
        MatrixStack matrixStack = new MatrixStack();
        Vec3d vec3d2 = livingEntity.getLerpedPos(f2).add(vec3d);
        float f3 = playerEntityRenderState.bodyYaw;
        matrixStack.translate(vec3d2.x, vec3d2.y, vec3d2.z);
        matrixStack.scale(playerEntityRenderState.baseScale, playerEntityRenderState.baseScale, playerEntityRenderState.baseScale);
        this.afG(matrixStack, playerEntityRenderState, f3);
        matrixStack.scale(-1.0f, -1.0f, 1.0f);
        matrixStack.scale(0.9375f, 0.9375f, 0.9375f);
        matrixStack.translate(0.0f, -1.501f, 0.0f);
        di$sA di$sA = new di$sA();
        playerEntityModel.getRootPart().forEachCuboid(matrixStack, (entry, string, n2, cuboid) -> this.afH(di$sA, entry.getPositionMatrix(), cuboid));
        return di$sA.doD();
    }

    private void afG(MatrixStack matrixStack, PlayerEntityRenderState playerEntityRenderState, float f2) {
        block26: {
            MatrixStack matrixStack2;
            block25: {
                float f3;
                int n2;
                iS[] iSArray;
                block23: {
                    block24: {
                        block19: {
                            block20: {
                                boolean bl2;
                                block21: {
                                    block22: {
                                        long l2 = GXYJi ^ 0x2B40F11B7E07L;
                                        iS[] iSArray2 = dh.afl();
                                        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(180.0f - f2));
                                        iSArray = iSArray2;
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        n2 = playerEntityRenderState.isGliding;
                                                        if (iSArray != null) break block19;
                                                        if (n2 == 0) break block20;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw di.afN(matchException);
                                                    }
                                                    bl2 = playerEntityRenderState.usingRiptide;
                                                    if (iSArray != null) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw di.afN(matchException);
                                                }
                                                if (bl2) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw di.afN(matchException);
                                            }
                                            matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(playerEntityRenderState.getGlidingProgress() * (-90.0f - playerEntityRenderState.pitch)));
                                        }
                                        catch (MatchException matchException) {
                                            throw di.afN(matchException);
                                        }
                                    }
                                    bl2 = playerEntityRenderState.applyFlyingRotation;
                                }
                                try {
                                    if (bl2) {
                                        matrixStack.multiply((Quaternionfc)RotationAxis.POSITIVE_Y.rotation(playerEntityRenderState.flyingRotation));
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                                return;
                            }
                            float f4 = playerEntityRenderState.leaningPitch - 0.0f;
                            n2 = f4 == 0.0f ? (char)'\u0000' : (f4 < 0.0f ? (char)'\uffffffff' : '\u0001');
                        }
                        try {
                            if (iSArray != null) break block23;
                            if (n2 > 0) break block24;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        return;
                    }
                    n2 = playerEntityRenderState.touchingWater ? '\u0001' : '\u0000';
                }
                try {
                    f3 = n2 != 0 ? -90.0f - playerEntityRenderState.pitch : -90.0f;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
                float f5 = f3;
                try {
                    try {
                        matrixStack2 = matrixStack;
                        if (iSArray != null) break block25;
                        matrixStack2.multiply((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(MathHelper.lerp((float)playerEntityRenderState.leaningPitch, (float)0.0f, (float)f5)));
                        if (!playerEntityRenderState.isSwimming) break block26;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    matrixStack2 = matrixStack;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            matrixStack2.translate(0.0f, -1.0f, 0.3f);
        }
    }

    private boolean afK(PlayerEntity playerEntity) {
        boolean bl2;
        block14: {
            pF pF2;
            long l2 = GXYJi ^ 0x32252CBC806BL;
            iS[] iSArray = dh.afl();
            try {
                pF2 = rD.dmc().ddy(playerEntity) ? pF.bnwqC : pF.JMCCO;
            }
            catch (MatchException matchException) {
                throw di.afN(matchException);
            }
            pF pF3 = pF2;
            for (py py2 : rD.dlS().cSP(pF3)) {
                block15: {
                    boolean bl3;
                    block18: {
                        block17: {
                            block16: {
                                py py3;
                                block13: {
                                    try {
                                        try {
                                            py3 = py2;
                                            if (iSArray != null) break block13;
                                            bl2 = py3 instanceof po;
                                            if (iSArray != null) break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw di.afN(matchException);
                                        }
                                        if (!bl2) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    py3 = py2;
                                }
                                po po2 = (po)py3;
                                try {
                                    try {
                                        bl3 = po2.active();
                                        if (iSArray != null) break block16;
                                        if (!bl3) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    bl3 = po2.cOt();
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                            }
                            try {
                                if (iSArray != null) break block18;
                                if (!bl3) break block17;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                            bl3 = true;
                            break block18;
                        }
                        bl3 = false;
                    }
                    return bl3;
                }
                if (iSArray == null) continue;
            }
            bl2 = false;
        }
        return bl2;
    }

    private void afH(di$sA di$sA, Matrix4f matrix4f, ModelPart.Cuboid cuboid) {
        this.afI(di$sA, matrix4f, cuboid.minX, cuboid.minY, cuboid.minZ);
        this.afI(di$sA, matrix4f, cuboid.minX, cuboid.minY, cuboid.maxZ);
        this.afI(di$sA, matrix4f, cuboid.minX, cuboid.maxY, cuboid.minZ);
        this.afI(di$sA, matrix4f, cuboid.minX, cuboid.maxY, cuboid.maxZ);
        this.afI(di$sA, matrix4f, cuboid.maxX, cuboid.minY, cuboid.minZ);
        this.afI(di$sA, matrix4f, cuboid.maxX, cuboid.minY, cuboid.maxZ);
        this.afI(di$sA, matrix4f, cuboid.maxX, cuboid.maxY, cuboid.minZ);
        this.afI(di$sA, matrix4f, cuboid.maxX, cuboid.maxY, cuboid.maxZ);
    }

    private void afI(di$sA di$sA, Matrix4f matrix4f, float f2, float f3, float f4) {
        long l2 = GXYJi ^ 0x712D18634309L;
        float f5 = f2 / 16.0f;
        float f6 = f3 / 16.0f;
        float f7 = f4 / 16.0f;
        Vec2f vec2f = jI.bIw(new Vec3d((double)(matrix4f.m30() + matrix4f.m00() * f5 + matrix4f.m10() * f6 + matrix4f.m20() * f7), (double)(matrix4f.m31() + matrix4f.m01() * f5 + matrix4f.m11() * f6 + matrix4f.m21() * f7), (double)(matrix4f.m32() + matrix4f.m02() * f5 + matrix4f.m12() * f6 + matrix4f.m22() * f7)));
        try {
            if (vec2f != null) {
                di$sA.doC(vec2f);
            }
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
    }

    private PlayerEntityModel afE(AbstractClientPlayerEntity abstractClientPlayerEntity) {
        PlayerEntityModel playerEntityModel;
        block15: {
            block16: {
                iS[] iSArray;
                block12: {
                    PlayerEntityModel playerEntityModel2;
                    block13: {
                        block14: {
                            boolean bl2;
                            long l2 = GXYJi ^ 0x58839B11813AL;
                            PlayerSkinType playerSkinType = abstractClientPlayerEntity.getSkin().model();
                            iSArray = dh.afl();
                            try {
                                bl2 = playerSkinType == PlayerSkinType.SLIM;
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                            boolean bl3 = bl2;
                            try {
                                try {
                                    try {
                                        if (!bl3) break block12;
                                        playerEntityModel2 = this.pwusN;
                                        if (iSArray != null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw di.afN(matchException);
                                    }
                                    if (playerEntityModel2 != null) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw di.afN(matchException);
                                }
                                this.pwusN = new PlayerEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER_SLIM), true);
                            }
                            catch (MatchException matchException) {
                                throw di.afN(matchException);
                            }
                        }
                        playerEntityModel2 = this.pwusN;
                    }
                    return playerEntityModel2;
                }
                try {
                    try {
                        playerEntityModel = this.VPirC;
                        if (iSArray != null) break block15;
                        if (playerEntityModel != null) break block16;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    this.VPirC = new PlayerEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER), false);
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            playerEntityModel = this.VPirC;
        }
        return playerEntityModel;
    }

    private lc afC(PlayerEntity playerEntity, float f2) {
        lc lc2;
        block10: {
            block9: {
                PlayerEntity playerEntity2;
                iS[] iSArray;
                block8: {
                    long l2 = GXYJi ^ 0x533367DD7F18L;
                    iSArray = dh.afl();
                    try {
                        try {
                            playerEntity2 = playerEntity;
                            if (iSArray != null) break block8;
                            if (!(playerEntity2 instanceof AbstractClientPlayerEntity)) break block9;
                        }
                        catch (MatchException matchException) {
                            throw di.afN(matchException);
                        }
                        playerEntity2 = playerEntity;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                }
                AbstractClientPlayerEntity abstractClientPlayerEntity = (AbstractClientPlayerEntity)playerEntity2;
                lc lc3 = this.afD(abstractClientPlayerEntity, f2);
                try {
                    try {
                        lc2 = lc3;
                        if (iSArray != null) break block10;
                        if (lc2 == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw di.afN(matchException);
                    }
                    return lc3;
                }
                catch (MatchException matchException) {
                    throw di.afN(matchException);
                }
            }
            lc2 = this.afJ(playerEntity, f2);
        }
        return lc2;
    }

    private lc afD(AbstractClientPlayerEntity abstractClientPlayerEntity, float f2) {
        long l2 = GXYJi ^ 0x739CDADAA31AL;
        PlayerEntityRenderer playerEntityRenderer = rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer(abstractClientPlayerEntity);
        PlayerEntityModel playerEntityModel = this.afE(abstractClientPlayerEntity);
        try {
            if (playerEntityModel == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw di.afN(matchException);
        }
        PlayerEntityRenderState playerEntityRenderState = new PlayerEntityRenderState();
        playerEntityRenderer.updateRenderState((PlayerLikeEntity)abstractClientPlayerEntity, playerEntityRenderState, f2);
        return this.afF(playerEntityModel, playerEntityRenderState, (LivingEntity)abstractClientPlayerEntity, f2, playerEntityRenderer.getPositionOffset(playerEntityRenderState));
    }

    private static MatchException afN(MatchException matchException) {
        return matchException;
    }

    private static CallSite afQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/di" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int afO(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x69B3;
        if (AuasL[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = NvTrW[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xMVly.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xMVly.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/di", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            di.AuasL[n3] = n4;
        }
        return AuasL[n3];
    }

    private static int afP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = di.afO(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(di.class, "afP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

