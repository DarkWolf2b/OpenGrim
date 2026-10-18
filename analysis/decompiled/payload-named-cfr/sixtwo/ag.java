/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.render.entity.model.EntityModelLayers
 *  net.minecraft.client.render.entity.model.LoadedEntityModels
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.client.util.DefaultSkinHelper
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.Util
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.RotationAxis
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.function.Function;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.LoadedEntityModels;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.client.util.DefaultSkinHelper;
import net.minecraft.util.Identifier;
import net.minecraft.util.Util;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.RotationAxis;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.ag$rQ;
import sixtwo.ag$rR;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.jI;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mA;
import sixtwo.rD;

public class ag
extends az {
    private static final float sbZWT = 2.125f;
    private static final float qccLr = -0.53125f;
    private static final float RjGUj = 1.515625f;
    private static final float YhWDg = 0.28125f;
    private static final float Uofge = 0.515625f;
    private static final float vlFnX = 0.453125f;
    private String cKAzP;
    private PlayerEntityModel varoa;
    private PlayerEntityModel QSyUZ;
    private final ag$rR VSKnI;
    private boolean FiFgY;
    Function<String, ag$rQ> ZYZql = string -> {
        Identifier identifier;
        block16: {
            Identifier identifier2;
            block15: {
                String[] stringArray;
                block12: {
                    block13: {
                        ClientPlayerEntity clientPlayerEntity;
                        block14: {
                            long l2 = WkMeU ^ 0x72883CB37841L;
                            identifier = ag$rQ.cachedSkins.get(string);
                            stringArray = aj.oA();
                            try {
                                try {
                                    try {
                                        try {
                                            identifier2 = identifier;
                                            if (stringArray == null) break block12;
                                            if (identifier2 != null) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                        clientPlayerEntity = rD.dlmvG.player;
                                        if (stringArray == null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    if (clientPlayerEntity == null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                clientPlayerEntity = rD.dlmvG.player;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                        }
                        identifier = clientPlayerEntity.getSkin().body().texturePath();
                    }
                    identifier2 = identifier;
                }
                try {
                    try {
                        if (stringArray == null) break block15;
                        if (identifier2 != null) break block16;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    identifier2 = DefaultSkinHelper.getSteve().body().texturePath();
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            identifier = identifier2;
        }
        return new ag$rQ(identifier, true);
    };
    float EnbkJ = -5.0f;
    float Vinex = 30.0f;
    private static final long WkMeU = gb.aYR(-2652524297955319212L, -8454400431850127096L, MethodHandles.lookup().lookupClass()).a(258803647282649L);
    private static final long wxrIA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ag(String string2, ag$rR ag$rR) {
        this.cKAzP = string2;
        this.VSKnI = ag$rR;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = WkMeU ^ 0x6034D328BF48L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 8043091998414103728L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                wxrIA = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public lc nl(lC lC2, boolean bl2) {
        int n2;
        float f2;
        float f3;
        float f4;
        float f5;
        block44: {
            String[] stringArray;
            block43: {
                block42: {
                    block40: {
                        Matrix4f matrix4f;
                        float f6;
                        block38: {
                            block39: {
                                float f7;
                                Object object;
                                block36: {
                                    block37: {
                                        long l2 = WkMeU ^ 0x6F1029A0A61EL;
                                        stringArray = aj.oA();
                                        try {
                                            try {
                                                try {
                                                    if (lC2 == null) return this.td();
                                                    object = this;
                                                    if (stringArray == null) break block36;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ag.nF(matchException);
                                                }
                                                if (((az)object).tf()) break block37;
                                                return this.td();
                                            }
                                            catch (MatchException matchException) {
                                                throw ag.nF(matchException);
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                    }
                                    object = this.ZYZql.apply(this.cKAzP);
                                }
                                ag$rQ ag$rQ = (ag$rQ)object;
                                try {
                                    if (ag$rQ == null) {
                                        return this.td();
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                float f8 = this.WjISQ / 2.125f;
                                try {
                                    f7 = ag$rQ.slim() ? 0.453125f : 0.515625f;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                f6 = f7;
                                matrix4f = jI.bIl((Matrix3x2fc)lC2.cfc());
                                try {
                                    try {
                                        matrix4f.translate(this.MCnYt + this.BcpIo / 2.0f, this.pNyTQ + this.WjISQ, 0.0f);
                                        matrix4f.scale(f8, f8, f8);
                                        matrix4f.translate(0.0f, -0.0625f, 0.0f);
                                        if (stringArray == null) break block38;
                                        if (bl2) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    matrix4f.rotateAround((Quaternionfc)RotationAxis.POSITIVE_X.rotationDegrees(this.EnbkJ), 0.0f, -1.0625f, 0.0f);
                                    matrix4f.rotate((Quaternionfc)RotationAxis.POSITIVE_Y.rotationDegrees(this.Vinex));
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                            }
                            matrix4f.scale(1.0f, 1.0f, -1.0f);
                            matrix4f.translate(0.0f, -1.5f, 0.0f);
                        }
                        f5 = Float.POSITIVE_INFINITY;
                        f4 = Float.POSITIVE_INFINITY;
                        f3 = Float.NEGATIVE_INFINITY;
                        f2 = Float.NEGATIVE_INFINITY;
                        float[] fArray = new float[]{-f6, f6};
                        int n3 = fArray.length;
                        int n4 = 0;
                        block30: while (true) {
                            int n5 = n4;
                            block31: while (n5 < n3) {
                                float f9 = fArray[n4];
                                float[] fArray2 = new float[]{-0.53125f, 1.515625f};
                                int n6 = fArray2.length;
                                n2 = 0;
                                if (stringArray == null) break block40;
                                int n7 = n2;
                                while (n7 < n6) {
                                    block41: {
                                        float f10 = fArray2[n7];
                                        float[] fArray3 = new float[]{-0.28125f, 0.28125f};
                                        int n8 = fArray3.length;
                                        n5 = 0;
                                        if (stringArray == null) continue block31;
                                        for (int i2 = v768384; i2 < n8; ++i2) {
                                            float f11 = fArray3[i2];
                                            Vector3f vector3f = matrix4f.transformPosition(f9, f10, f11, new Vector3f());
                                            f5 = Math.min(f5, vector3f.x);
                                            f4 = Math.min(f4, vector3f.y);
                                            f3 = Math.max(f3, vector3f.x);
                                            f2 = Math.max(f2, vector3f.y);
                                            try {
                                                if (stringArray != null) {
                                                    if (stringArray != null) continue;
                                                    break;
                                                }
                                                break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw ag.nF(matchException);
                                            }
                                        }
                                        ++n7;
                                    }
                                    if (stringArray != null) continue;
                                }
                                ++n4;
                                if (stringArray != null) continue block30;
                            }
                            break;
                        }
                        n2 = Float.isFinite(f5);
                    }
                    try {
                        try {
                            if (stringArray == null) break block42;
                            if (n2 == 0) return this.td();
                        }
                        catch (MatchException matchException) {
                            throw ag.nF(matchException);
                        }
                        n2 = Float.isFinite(f4);
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                try {
                    try {
                        if (stringArray == null) break block43;
                        if (n2 == 0) return this.td();
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    n2 = Float.isFinite(f3);
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            try {
                try {
                    if (stringArray == null) break block44;
                    if (n2 == 0) return this.td();
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
                n2 = Float.isFinite(f2);
            }
            catch (MatchException matchException) {
                throw ag.nF(matchException);
            }
        }
        try {
            if (n2 != 0) return new lc(f5 - 1.0f, f4 - 1.0f, f3 - f5 + 2.0f, f2 - f4 + 2.0f);
            return this.td();
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
    }

    public PlayerEntityModel nr() {
        return this.QSyUZ;
    }

    public ag$rR ns() {
        return this.VSKnI;
    }

    public boolean nt() {
        return this.FiFgY;
    }

    private void nm(PlayerEntityModel playerEntityModel) {
        long l2 = WkMeU ^ 0x11EF879EB1C9L;
        if (this.VSKnI == ag$rR.VdGoA) {
            float f2 = (float)(Util.getMeasuringTimeMs() % wxrIA) / 1000.0f;
            float f3 = 0.8f;
            float f4 = f2 * f3 * (float)Math.PI;
            float f5 = 0.8f;
            float f6 = MathHelper.cos((double)f4) * f5;
            float f7 = MathHelper.cos((double)(f4 + (float)Math.PI)) * f5;
            float f8 = MathHelper.cos((double)(f4 + (float)Math.PI)) * f5;
            float f9 = MathHelper.cos((double)f4) * f5;
            playerEntityModel.rightArm.pitch = f6;
            playerEntityModel.rightLeg.pitch = f8;
            playerEntityModel.leftArm.pitch = f7;
            playerEntityModel.leftLeg.pitch = f9;
        }
    }

    @Override
    public void dl(double d2, double d3, mA mA2) {
        block4: {
            block5: {
                long l2 = WkMeU ^ 0x4DF2EA07BB13L;
                String[] stringArray = aj.oA();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (mA2 != mA.sCBUa) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    this.FiFgY = false;
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            super.dl(d2, d3, mA2);
        }
    }

    public String np() {
        return this.cKAzP;
    }

    public Function<String, ag$rQ> nu() {
        return this.ZYZql;
    }

    private void no() {
        block6: {
            PlayerEntityModel playerEntityModel;
            block5: {
                long l2 = WkMeU ^ 0x1BF6F4AD0C5FL;
                String[] stringArray = aj.oA();
                try {
                    try {
                        playerEntityModel = this.varoa;
                        if (stringArray == null) break block5;
                        if (playerEntityModel == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    playerEntityModel = this.QSyUZ;
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            if (playerEntityModel != null) {
                return;
            }
        }
        LoadedEntityModels loadedEntityModels = rD.dlmvG.getLoadedEntityModels();
        this.varoa = new PlayerEntityModel(loadedEntityModels.getModelPart(EntityModelLayers.PLAYER), false);
        this.QSyUZ = new PlayerEntityModel(loadedEntityModels.getModelPart(EntityModelLayers.PLAYER_SLIM), true);
    }

    private boolean nn() {
        boolean bl2;
        long l2 = WkMeU ^ 0x7520C011A6CFL;
        try {
            bl2 = this.VSKnI == ag$rR.cyZLf;
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
        return bl2;
    }

    public ag nk(float f2, float f3) {
        this.EnbkJ = f2;
        this.Vinex = f3;
        return this;
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block12: {
            block13: {
                boolean bl3;
                block10: {
                    long l2 = WkMeU ^ 0x3F41F7B25E6AL;
                    String[] stringArray = aj.oA();
                    try {
                        block11: {
                            try {
                                try {
                                    try {
                                        try {
                                            bl3 = this.nn();
                                            if (stringArray == null) break block10;
                                            if (!bl3) break block11;
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                        if (mA2 != mA.sCBUa) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    bl2 = this.tg(d2, d3);
                                    if (stringArray == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                if (bl2) break block13;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                        }
                        bl3 = super.dk(d2, d3, mA2);
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                return bl3;
            }
            this.FiFgY = true;
            bl2 = true;
        }
        return bl2;
    }

    public float nv() {
        return this.EnbkJ;
    }

    public float nw() {
        return this.Vinex;
    }

    public ag nx(String string) {
        this.cKAzP = string;
        return this;
    }

    public ag ny(PlayerEntityModel playerEntityModel) {
        this.varoa = playerEntityModel;
        return this;
    }

    public ag nz(PlayerEntityModel playerEntityModel) {
        this.QSyUZ = playerEntityModel;
        return this;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    protected void bV(lC lC2) {
        PlayerEntityModel playerEntityModel;
        ag$rQ ag$rQ;
        ag$rQ ag$rQ2;
        block9: {
            block10: {
                String[] stringArray;
                block8: {
                    long l2 = WkMeU ^ 0x62D43F1B8AAEL;
                    String[] stringArray2 = aj.oA();
                    this.no();
                    ag$rQ2 = this.ZYZql.apply(this.cKAzP);
                    stringArray = stringArray2;
                    try {
                        ag$rQ = ag$rQ2;
                        if (stringArray == null) break block8;
                        if (ag$rQ == null) return;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    ag$rQ = ag$rQ2;
                }
                try {
                    try {
                        if (stringArray == null) break block9;
                        if (ag$rQ.skin() != null) break block10;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            ag$rQ = ag$rQ2;
        }
        try {
            playerEntityModel = ag$rQ.slim() ? this.QSyUZ : this.varoa;
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
        PlayerEntityModel playerEntityModel2 = playerEntityModel;
        this.nm(playerEntityModel2);
        float f2 = this.WjISQ / 2.125f;
        lC2.cec(playerEntityModel2, ag$rQ2.skin(), this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ).bFo(f2).bFp(this.EnbkJ, this.Vinex).bFs();
    }

    @Override
    public boolean dB(double d2, double d3, mA mA2, double d4, double d5) {
        block12: {
            boolean bl2;
            block10: {
                long l2 = WkMeU ^ 0x179154326EA7L;
                String[] stringArray = aj.oA();
                try {
                    block11: {
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = this.nn();
                                        if (stringArray == null) break block10;
                                        if (!bl2) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    bl2 = this.FiFgY;
                                    if (stringArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                if (!bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                            if (mA2 == mA.sCBUa) break block12;
                        }
                        catch (MatchException matchException) {
                            throw ag.nF(matchException);
                        }
                    }
                    bl2 = super.dB(d2, d3, mA2, d4, d5);
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            return bl2;
        }
        this.Vinex = MathHelper.wrapDegrees((float)(this.Vinex + (float)d4 * 1.5f));
        this.EnbkJ = MathHelper.clamp((float)(this.EnbkJ + (float)d5 * 1.2f), (float)-60.0f, (float)60.0f);
        return true;
    }

    public PlayerEntityModel nq() {
        return this.varoa;
    }

    private static MatchException nF(MatchException matchException) {
        return matchException;
    }

    public ag nD(float f2) {
        this.Vinex = f2;
        return this;
    }

    public ag nA(boolean bl2) {
        this.FiFgY = bl2;
        return this;
    }

    public ag nC(float f2) {
        this.EnbkJ = f2;
        return this;
    }

    public ag nB(Function<String, ag$rQ> function) {
        this.ZYZql = function;
        return this;
    }
}

