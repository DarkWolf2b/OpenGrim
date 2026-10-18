/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.entity.model.EntityModel
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.LivingEntity
 *  org.spongepowered.asm.mixin.injection.callback.CallbackInfo
 */
package sixtwo;

import net.minecraft.client.render.entity.model.EntityModel;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.LivingEntity;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfo;
import sixtwo.hH;

public abstract class gp
extends hH {
    private MatrixStack CgSWX;
    private EntityModel<?> EGzUR;
    private LivingEntity EqBST;
    private float ecyKc;
    private int pCbjK;
    private CallbackInfo zAPsl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gp(MatrixStack matrixStack, EntityModel<?> entityModel, LivingEntity livingEntity, float f2, int n2, CallbackInfo callbackInfo) {
        this.CgSWX = matrixStack;
        this.EGzUR = entityModel;
        this.EqBST = livingEntity;
        this.ecyKc = f2;
        this.pCbjK = n2;
        this.zAPsl = callbackInfo;
    }

    public int bbn() {
        return this.pCbjK;
    }

    public LivingEntity bbl() {
        return this.EqBST;
    }

    public CallbackInfo bbo() {
        return this.zAPsl;
    }

    public MatrixStack bbj() {
        return this.CgSWX;
    }

    public EntityModel<?> bbk() {
        return this.EGzUR;
    }

    public float bbm() {
        return this.ecyKc;
    }

    public static class ta
    extends gp {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public ta(MatrixStack matrixStack, EntityModel<?> entityModel, LivingEntity livingEntity, float f2, int n2, CallbackInfo callbackInfo) {
            super(matrixStack, entityModel, livingEntity, f2, n2, callbackInfo);
        }
    }

    public static class sZ
    extends gp {
        private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

        public sZ(MatrixStack matrixStack, EntityModel<?> entityModel, LivingEntity livingEntity, float f2, int n2, CallbackInfo callbackInfo) {
            super(matrixStack, entityModel, livingEntity, f2, n2, callbackInfo);
        }
    }
}

