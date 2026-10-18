/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderSystem
 *  net.minecraft.client.gl.SimpleFramebuffer
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import net.minecraft.client.gl.SimpleFramebuffer;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jm;
import sixtwo.lT;
import sixtwo.rD;

public final class jp
extends SimpleFramebuffer {
    public boolean LHtaR;
    private final boolean mYUfR;
    private static final long OhKWC = gb.aYR(1601633786730209997L, 7273737541638152616L, MethodHandles.lookup().lookupClass()).a(133707839667403L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public int bFm() {
        return lT.ciQ().nativeTextureId(this.getDepthAttachment());
    }

    /*
     * Unable to fully structure code
     */
    public void bFk() {
        block17: {
            block15: {
                block14: {
                    block13: {
                        var1_1 = jp.OhKWC ^ 63794959560617L;
                        var4_2 = this.getColorAttachment();
                        var3_3 = jm.bDZ();
                        try {
                            try {
                                if (var3_3 == null) break block13;
                                if (var4_2 != null) break block14;
                            }
                            catch (MatchException v0) {
                                throw jp.bFn(v0);
                            }
                            this.LHtaR = false;
                        }
                        catch (MatchException v1) {
                            throw jp.bFn(v1);
                        }
                    }
                    return;
                }
                try {
                    try {
                        v2 = this;
                        if (var3_3 == null) break block15;
                        if (v2.mYUfR) {
                        }
                        ** GOTO lbl40
                    }
                    catch (MatchException v3) {
                        throw jp.bFn(v3);
                    }
                    v2 = this;
                }
                catch (MatchException v4) {
                    throw jp.bFn(v4);
                }
            }
            try {
                block16: {
                    try {
                        if (v2.getDepthAttachment() == null) break block16;
                        RenderSystem.getDevice().createCommandEncoder().clearColorAndDepthTextures(var4_2, 0, this.getDepthAttachment(), 1.0);
                        if (var3_3 != null) break block17;
                    }
                    catch (MatchException v5) {
                        throw jp.bFn(v5);
                    }
                }
                RenderSystem.getDevice().createCommandEncoder().clearColorTexture(var4_2, 0);
            }
            catch (MatchException v6) {
                throw jp.bFn(v6);
            }
        }
        this.LHtaR = false;
    }

    /*
     * Unable to fully structure code
     */
    public void bFj() {
        block20: {
            block19: {
                block17: {
                    block18: {
                        block16: {
                            block15: {
                                var1_1 = jp.OhKWC ^ 26770202381173L;
                                var4_2 = rD.dlmvG.getFramebuffer();
                                var5_3 = var4_2.textureWidth;
                                var3_4 = jm.bDZ();
                                var6_5 = var4_2.textureHeight;
                                try {
                                    v0 = var5_3;
                                    if (var3_4 == null) break block15;
                                    if (v0 <= 0) break block16;
                                }
                                catch (MatchException v1) {
                                    throw jp.bFn(v1);
                                }
                                v0 = var6_5;
                            }
                            try {
                                if (var3_4 == null) break block17;
                                if (v0 > 0) break block18;
                            }
                            catch (MatchException v2) {
                                throw jp.bFn(v2);
                            }
                        }
                        return;
                    }
                    v0 = var5_3;
                }
                try {
                    try {
                        v3 = this.textureWidth;
                        if (var3_4 == null) break block19;
                        if (v0 == v3) {
                        }
                        ** GOTO lbl43
                    }
                    catch (MatchException v4) {
                        throw jp.bFn(v4);
                    }
                    v0 = var6_5;
                    v3 = this.textureHeight;
                }
                catch (MatchException v5) {
                    throw jp.bFn(v5);
                }
            }
            try {
                if (v0 == v3) break block20;
lbl43:
                // 2 sources

                this.resize(var5_3, var6_5);
                this.bFk();
            }
            catch (MatchException v6) {
                throw jp.bFn(v6);
            }
        }
        try {
            if (iS.bwL() == null) {
                jm.bDY(new iS[1]);
            }
        }
        catch (MatchException v7) {
            throw jp.bFn(v7);
        }
    }

    private static MatchException bFn(MatchException matchException) {
        return matchException;
    }

    public int bFl() {
        return lT.ciQ().nativeTextureId(this.getColorAttachment());
    }

    public jp(String string, boolean bl2) {
        long l2 = OhKWC ^ 0x645CBE577A3L;
        iS[] iSArray = jm.bDZ();
        super(string, rD.dlmvG.getWindow().getFramebufferWidth(), rD.dlmvG.getWindow().getFramebufferHeight(), bl2);
        iS[] iSArray2 = iSArray;
        try {
            this.mYUfR = bl2;
            this.bFj();
            this.bFk();
            if (iSArray2 == null) {
                iS.bwK("YUp1ac");
            }
        }
        catch (MatchException matchException) {
            throw jp.bFn(matchException);
        }
    }
}

