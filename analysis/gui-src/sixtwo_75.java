/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.render.entity.state.EntityRenderState
 *  net.minecraft.client.render.entity.state.PlayerEntityRenderState
 *  net.minecraft.entity.PlayerLikeEntity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.entity.state.EntityRenderState;
import net.minecraft.client.render.entity.state.PlayerEntityRenderState;
import net.minecraft.entity.PlayerLikeEntity;
import sixtwo.bB;
import sixtwo.bC$si;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mS;
import sixtwo.mZ;
import sixtwo.pX;
import sixtwo.pY;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class bC {
    private final pY imthM;
    private final String neETJ;
    private final pX VRAiw;
    private pX ouKLq;
    private final rk XclRQ;
    private static final long ZpdFS = gb.aYR(-3195232151852259922L, 3105695006094609560L, MethodHandles.lookup().lookupClass()).a(190578593781542L);
    private static final long LMIZW;
    private static final long FEhqQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bC(pY pY2) {
        long l2 = ZpdFS ^ 0x54C86D9152E2L;
        this.XclRQ = new rk((int)LMIZW).dhs(rj.XzDkv);
        this.imthM = pY2;
        this.neETJ = pY2.label();
        this.VRAiw = new bC$si(pY2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = ZpdFS ^ 0x7A21A187C06AL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long l3 = 1611812430527484127L;
        byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
        LMIZW = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l4 = -7248963263439970520L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l4 >>> 56), (byte)(l4 >>> 48), (byte)(l4 >>> 40), (byte)(l4 >>> 32), (byte)(l4 >>> 24), (byte)(l4 >>> 16), (byte)(l4 >>> 8), (byte)l4});
                FEhqQ = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void Lu(lC lC2, float f2, float f3, boolean bl2, float f4) {
        ClientPlayerEntity clientPlayerEntity;
        int[] nArray;
        ClientPlayerEntity clientPlayerEntity2;
        block7: {
            long l2 = ZpdFS ^ 0x72E15F44FD3FL;
            clientPlayerEntity2 = rD.dlmvG.player;
            nArray = bB.b();
            try {
                try {
                    clientPlayerEntity = clientPlayerEntity2;
                    if (nArray != null) break block7;
                    if (!(clientPlayerEntity instanceof AbstractClientPlayerEntity)) return;
                }
                catch (MatchException matchException) {
                    throw bC.LC(matchException);
                }
                clientPlayerEntity = clientPlayerEntity2;
            }
            catch (MatchException matchException) {
                throw bC.LC(matchException);
            }
        }
        ClientPlayerEntity clientPlayerEntity3 = clientPlayerEntity;
        try {
            if (nArray != null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
        clientPlayerEntity2 = rD.dlmvG.getEntityRenderDispatcher().getPlayerRenderer((AbstractClientPlayerEntity)clientPlayerEntity3);
        PlayerEntityRenderState playerEntityRenderState = new PlayerEntityRenderState();
        clientPlayerEntity2.updateRenderState((PlayerLikeEntity)clientPlayerEntity3, playerEntityRenderState, lC2.cfh());
        this.Lw(playerEntityRenderState, bl2);
        ((mS)playerEntityRenderState).setEmoteInstance(this.Lr(bl2));
        float f5 = this.Lv(f4);
        float f6 = mZ.csl(14.5, 16.5, f4);
        lC2.ced((EntityRenderState)playerEntityRenderState, f2 - f5 * 0.5f, f3 - f5 * 0.5f, f5, f5).bFH(f6).bFJ(0.0f, 0.45f, 0.0f).bFM();
    }

    private float Lt(bB bB2) {
        float f2;
        float f3;
        block12: {
            float f4;
            float f5;
            block10: {
                float f6;
                block11: {
                    float f7;
                    float f8;
                    int[] nArray;
                    float f9;
                    float f10;
                    block8: {
                        float f11;
                        block9: {
                            long l2 = ZpdFS ^ 0x12B09B26E5FDL;
                            f10 = bB2.innerRadius();
                            f9 = bB2.outerRadius();
                            f11 = Math.abs((float)Math.toRadians(bB2.segmentEnd() - bB2.segmentStart()));
                            nArray = bB.b();
                            try {
                                try {
                                    f8 = f11;
                                    f7 = 6.282185f;
                                    if (nArray != null) break block8;
                                    if (!(f8 >= f7)) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                return (f10 + f9) * 0.5f;
                            }
                            catch (MatchException matchException) {
                                throw bC.LC(matchException);
                            }
                        }
                        f8 = f11;
                        f7 = 0.5f;
                    }
                    f6 = f8 * f7;
                    f3 = 0.6666667f * (f9 * f9 * f9 - f10 * f10 * f10) / (f9 * f9 - f10 * f10);
                    try {
                        try {
                            f5 = f6;
                            f4 = 0.0f;
                            if (nArray != null) break block10;
                            if (f5 != f4) break block11;
                        }
                        catch (MatchException matchException) {
                            throw bC.LC(matchException);
                        }
                        f2 = 1.0f;
                        break block12;
                    }
                    catch (MatchException matchException) {
                        throw bC.LC(matchException);
                    }
                }
                f5 = (float)Math.sin(f6);
                f4 = f6;
            }
            f2 = f5 / f4;
        }
        float f12 = f2;
        return f3 * f12;
    }

    private static MatchException LC(MatchException matchException) {
        return matchException;
    }

    public pX LA() {
        return this.ouKLq;
    }

    public rk LB() {
        return this.XclRQ;
    }

    public String Ly() {
        return this.neETJ;
    }

    public pY Lx() {
        return this.imthM;
    }

    public void Ls() {
        this.ouKLq = null;
    }

    public void Lq(lC lC2, bB bB2) {
        rj rj2;
        rk rk2;
        long l2 = ZpdFS ^ 0x30ECC3E61F1FL;
        int[] nArray = bB.b();
        try {
            rk2 = this.XclRQ;
            rj2 = bB2.selected() ? rj.XzDkv : rj.UPXqT;
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
        rk2.dhs(rj2);
        this.XclRQ.dhc(bB2.selected());
        ii ii2 = rD.dlM();
        float f2 = this.XclRQ.dhj();
        float f3 = (float)Math.toRadians(bB2.segmentMiddleAngle());
        float f4 = this.Lt(bB2) + 3.0f * f2;
        float f5 = bB2.centerX() + (float)Math.cos(f3) * f4;
        float f6 = bB2.centerY() + (float)Math.sin(f3) * f4;
        mG mG2 = ii2.bjb().cob(0.5f).coc(ii2.bjb(), f2);
        lq lq2 = lE.WTzbi.bYM(mZ.csl(5.5, 6.0, f2));
        float f7 = this.Lv(f2);
        float f8 = f6 - (f7 + lq2.cat()) * 0.5f;
        float f9 = f8 + f7 * 0.5f + 3.0f;
        float f10 = f8 + f7;
        this.Lu(lC2, f5, f9, bB2.selected(), f2);
        float f11 = f5 - lq2.cao(this.neETJ) * 0.5f;
        try {
            lC2.cez(lq2, this.neETJ, f11, f10, mG2);
            if (nArray != null) {
                iS.bwK("Kujvoc");
            }
        }
        catch (MatchException matchException) {
            throw bC.LC(matchException);
        }
    }

    private float Lv(float f2) {
        return mZ.csl(30.0, 34.0, f2);
    }

    public pX Lz() {
        return this.VRAiw;
    }

    public pX Lr(boolean bl2) {
        pX pX2;
        block17: {
            block18: {
                pX pX3;
                block21: {
                    pY pY2;
                    block19: {
                        block20: {
                            int[] nArray;
                            block15: {
                                long l2 = ZpdFS ^ 0x556EE4604B4L;
                                nArray = bB.b();
                                try {
                                    if (!bl2) {
                                        return this.VRAiw;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                try {
                                    bC bC2;
                                    block16: {
                                        try {
                                            try {
                                                try {
                                                    bC2 = this;
                                                    if (nArray != null) break block15;
                                                    if (bC2.ouKLq == null) break block16;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bC.LC(matchException);
                                                }
                                                pX2 = this.ouKLq;
                                                if (nArray != null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw bC.LC(matchException);
                                            }
                                            if (!pX2.finished()) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw bC.LC(matchException);
                                        }
                                    }
                                    bC2 = this;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                            }
                            try {
                                try {
                                    pY2 = this.imthM;
                                    if (nArray != null) break block19;
                                    if (pY2 != null) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw bC.LC(matchException);
                                }
                                pX3 = this.VRAiw;
                                break block21;
                            }
                            catch (MatchException matchException) {
                                throw bC.LC(matchException);
                            }
                        }
                        pY2 = this.imthM;
                    }
                    pX3 = pY2.createInstance();
                }
                bC2.ouKLq = pX3;
            }
            pX2 = this.ouKLq;
        }
        return pX2;
    }

    private void Lw(PlayerEntityRenderState playerEntityRenderState, boolean bl2) {
        float f2;
        block4: {
            block5: {
                long l2 = ZpdFS ^ 0x5A61B18CB559L;
                playerEntityRenderState.displayName = null;
                playerEntityRenderState.bodyYaw = 180.0f;
                playerEntityRenderState.relativeHeadYaw = 0.0f;
                playerEntityRenderState.pitch = 0.0f;
                playerEntityRenderState.limbSwingAmplitude = 0.0f;
                int[] nArray = bB.b();
                try {
                    try {
                        playerEntityRenderState.limbSwingAnimationProgress = 0.0f;
                        playerEntityRenderState.leaningPitch = 0.0f;
                        playerEntityRenderState.isInSneakingPose = false;
                        playerEntityRenderState.isGliding = false;
                        playerEntityRenderState.isSwimming = false;
                        playerEntityRenderState.hasVehicle = false;
                        playerEntityRenderState.glidingTicks = 0.0f;
                        playerEntityRenderState.applyFlyingRotation = false;
                        PlayerEntityRenderState playerEntityRenderState2 = playerEntityRenderState;
                        f2 = 0.0f;
                        if (nArray != null) break block4;
                        playerEntityRenderState2.flyingRotation = f2;
                        playerEntityRenderState.flipUpsideDown = false;
                        playerEntityRenderState2 = playerEntityRenderState;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bC.LC(matchException);
                    }
                    f2 = (float)(System.currentTimeMillis() % FEhqQ) / 50.0f;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw bC.LC(matchException);
                }
            }
            f2 = 0.0f;
        }
        playerEntityRenderState2.age = f2;
    }
}

