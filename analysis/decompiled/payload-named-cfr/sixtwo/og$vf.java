/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import sixtwo.cF;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.iV;
import sixtwo.iX;
import sixtwo.jg;
import sixtwo.of;
import sixtwo.og$vf$wk;
import sixtwo.rD;

public class og$vf {
    private cF XDFlX;
    private boolean hpPzD;
    private boolean bOwtv;
    private boolean EPMeP;
    private boolean uHUsD;
    private boolean vVVob;
    private boolean cicip;
    private float BAgaj;
    private static final long zomsO = gb.aYR(4230681213838096588L, -98128570689200713L, MethodHandles.lookup().lookupClass()).a(196662807366098L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    og$vf(cF cF2, boolean bl2, boolean bl3, boolean bl4, boolean bl5, boolean bl6, boolean bl7, float f2) {
        long l2 = zomsO ^ 0x5C958115C3D2L;
        this.XDFlX = cF2;
        this.hpPzD = bl2;
        this.bOwtv = bl3;
        this.EPMeP = bl4;
        this.uHUsD = bl5;
        this.vVVob = bl6;
        String[] stringArray = of.cCL();
        try {
            this.cicip = bl7;
            this.BAgaj = f2;
            if (iS.bwL() == null) {
                of.cCK(new String[5]);
            }
        }
        catch (MatchException matchException) {
            throw og$vf.dws(matchException);
        }
    }

    private static boolean dwl() {
        return false;
    }

    private boolean dwa(LivingEntity livingEntity) {
        boolean bl2;
        long l2 = zomsO ^ 0x456B291D297DL;
        try {
            bl2 = livingEntity == rD.dlmvG.player;
        }
        catch (MatchException matchException) {
            throw og$vf.dws(matchException);
        }
        return bl2;
    }

    private boolean dwg(LivingEntity livingEntity) {
        boolean bl2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = zomsO ^ 0x60CA5E13D0FCL;
                    stringArray = of.cCL();
                    try {
                        try {
                            bl2 = this.uHUsD;
                            if (stringArray == null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = iX.bxD((Entity)livingEntity);
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static boolean dwm() {
        return false;
    }

    private static boolean dwn() {
        return false;
    }

    private static boolean dwo() {
        return false;
    }

    private static boolean dwp() {
        return false;
    }

    private static boolean dwq() {
        return false;
    }

    private boolean dwi(LivingEntity livingEntity) {
        boolean bl2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = zomsO ^ 0x59F44574F6C8L;
                    stringArray = of.cCL();
                    try {
                        try {
                            bl2 = this.vVVob;
                            if (stringArray == null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = jg.bBP(livingEntity);
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException dws(MatchException matchException) {
        return matchException;
    }

    private boolean dwe(LivingEntity livingEntity) {
        boolean bl2;
        block13: {
            block11: {
                String[] stringArray;
                block12: {
                    LivingEntity livingEntity2;
                    block10: {
                        long l2 = zomsO ^ 0x4321EFEB8E9BL;
                        stringArray = of.cCL();
                        try {
                            try {
                                livingEntity2 = livingEntity;
                                if (stringArray == null) break block10;
                                if (!(livingEntity2 instanceof PlayerEntity)) break block11;
                            }
                            catch (MatchException matchException) {
                                throw og$vf.dws(matchException);
                            }
                            livingEntity2 = livingEntity;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                    }
                    PlayerEntity playerEntity = (PlayerEntity)livingEntity2;
                    try {
                        try {
                            bl2 = this.bOwtv;
                            if (stringArray == null) break block12;
                            if (!bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = rD.dmc().ddy(playerEntity);
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block13;
                    if (!bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    private boolean dwh(LivingEntity livingEntity) {
        boolean bl2;
        block13: {
            block11: {
                String[] stringArray;
                block12: {
                    LivingEntity livingEntity2;
                    block10: {
                        long l2 = zomsO ^ 0x12ADCB2E6E2EL;
                        stringArray = of.cCL();
                        try {
                            try {
                                livingEntity2 = livingEntity;
                                if (stringArray == null) break block10;
                                if (!(livingEntity2 instanceof PlayerEntity)) break block11;
                            }
                            catch (MatchException matchException) {
                                throw og$vf.dws(matchException);
                            }
                            livingEntity2 = livingEntity;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                    }
                    PlayerEntity playerEntity = (PlayerEntity)livingEntity2;
                    try {
                        try {
                            bl2 = this.EPMeP;
                            if (stringArray == null) break block12;
                            if (!bl2) break block11;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = jg.bBD(playerEntity);
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block13;
                    if (!bl2) break block11;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block13;
            }
            bl2 = false;
        }
        return bl2;
    }

    private boolean dwj(LivingEntity livingEntity) {
        double d2;
        block6: {
            block7: {
                String[] stringArray;
                block5: {
                    boolean bl2;
                    block4: {
                        long l2 = zomsO ^ 0x144D0B9F1CC7L;
                        stringArray = of.cCL();
                        try {
                            bl2 = this.cicip;
                            if (stringArray == null) break block4;
                            if (bl2) break block5;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = false;
                    }
                    return bl2;
                }
                Vec3d vec3d = rD.dlmvG.player.getEyePos();
                Vec3d vec3d2 = livingEntity.getEyePos().subtract(vec3d).normalize();
                Vec3d vec3d3 = iV.bxi(rD.dlmvG.player.getPitch(), rD.dlmvG.player.getYaw());
                double d3 = vec3d3.dotProduct(vec3d2);
                double d4 = Math.toDegrees(Math.acos(MathHelper.clamp((double)d3, (double)-1.0, (double)1.0)));
                try {
                    double d5 = d4 - (double)this.BAgaj / 2.0;
                    d2 = d5 == 0.0 ? 0 : (d5 > 0.0 ? 1 : -1);
                    if (stringArray == null) break block6;
                    if (d2 <= 0) break block7;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                d2 = 1.0;
                break block6;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private boolean dwb(LivingEntity livingEntity) {
        boolean bl2;
        block6: {
            block8: {
                block7: {
                    long l2 = zomsO ^ 0x2250BE60EEEFL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            try {
                                bl2 = livingEntity.isAlive();
                                if (stringArray == null) break block6;
                                if (!bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw og$vf.dws(matchException);
                            }
                            bl2 = livingEntity.isDead();
                            if (stringArray == null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                bl2 = true;
                break block6;
            }
            bl2 = false;
        }
        return bl2;
    }

    private boolean dwf(LivingEntity livingEntity) {
        boolean bl2;
        block8: {
            block7: {
                String[] stringArray;
                block6: {
                    long l2 = zomsO ^ 0x1909881119ECL;
                    stringArray = of.cCL();
                    try {
                        try {
                            bl2 = this.hpPzD;
                            if (stringArray == null) break block6;
                            if (bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        bl2 = jg.bBC((Entity)livingEntity);
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    private boolean dwc(LivingEntity livingEntity) {
        boolean bl2;
        block10: {
            block13: {
                block11: {
                    LivingEntity livingEntity2;
                    String[] stringArray;
                    block12: {
                        long l2 = zomsO ^ 0x15342DEA753BL;
                        stringArray = of.cCL();
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = livingEntity.isInvulnerable();
                                        if (stringArray == null) break block10;
                                        if (bl2) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw og$vf.dws(matchException);
                                    }
                                    livingEntity2 = livingEntity;
                                    if (stringArray == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw og$vf.dws(matchException);
                                }
                                if (!(livingEntity2 instanceof PlayerEntity)) break block13;
                            }
                            catch (MatchException matchException) {
                                throw og$vf.dws(matchException);
                            }
                            livingEntity2 = livingEntity;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                    }
                    PlayerEntity playerEntity = (PlayerEntity)livingEntity2;
                    try {
                        bl2 = playerEntity.getAbilities().invulnerable;
                        if (stringArray == null) break block10;
                        if (!bl2) break block13;
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    private boolean dwk(LivingEntity livingEntity) {
        cF cF2;
        block4: {
            block5: {
                long l2 = zomsO ^ 0x58D4A2C71442L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        cF2 = this.XDFlX;
                        if (stringArray == null) break block4;
                        if (cF2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
            }
            cF2 = this.XDFlX;
        }
        return cF2.VX((Entity)livingEntity);
    }

    public boolean dvZ(LivingEntity livingEntity) {
        boolean bl2;
        block58: {
            block59: {
                String[] stringArray;
                block56: {
                    block57: {
                        block54: {
                            block55: {
                                block52: {
                                    block53: {
                                        block50: {
                                            block51: {
                                                block48: {
                                                    block49: {
                                                        block46: {
                                                            block47: {
                                                                block44: {
                                                                    block45: {
                                                                        block42: {
                                                                            block43: {
                                                                                block40: {
                                                                                    block41: {
                                                                                        long l2 = zomsO ^ 0x32704D07616BL;
                                                                                        stringArray = of.cCL();
                                                                                        try {
                                                                                            try {
                                                                                                bl2 = this.dwa(livingEntity);
                                                                                                if (stringArray == null) break block40;
                                                                                                if (!bl2) break block41;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw og$vf.dws(matchException);
                                                                                            }
                                                                                            return false;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw og$vf.dws(matchException);
                                                                                        }
                                                                                    }
                                                                                    bl2 = this.dwb(livingEntity);
                                                                                }
                                                                                try {
                                                                                    try {
                                                                                        if (stringArray == null) break block42;
                                                                                        if (!bl2) break block43;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw og$vf.dws(matchException);
                                                                                    }
                                                                                    return false;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw og$vf.dws(matchException);
                                                                                }
                                                                            }
                                                                            bl2 = this.dwc(livingEntity);
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (stringArray == null) break block44;
                                                                                if (!bl2) break block45;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw og$vf.dws(matchException);
                                                                            }
                                                                            return false;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw og$vf.dws(matchException);
                                                                        }
                                                                    }
                                                                    bl2 = this.dwh(livingEntity);
                                                                }
                                                                try {
                                                                    try {
                                                                        if (stringArray == null) break block46;
                                                                        if (!bl2) break block47;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw og$vf.dws(matchException);
                                                                    }
                                                                    return false;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw og$vf.dws(matchException);
                                                                }
                                                            }
                                                            bl2 = this.dwd(livingEntity);
                                                        }
                                                        try {
                                                            try {
                                                                if (stringArray == null) break block48;
                                                                if (!bl2) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw og$vf.dws(matchException);
                                                            }
                                                            return false;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw og$vf.dws(matchException);
                                                        }
                                                    }
                                                    bl2 = this.dwe(livingEntity);
                                                }
                                                try {
                                                    try {
                                                        if (stringArray == null) break block50;
                                                        if (!bl2) break block51;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw og$vf.dws(matchException);
                                                    }
                                                    return false;
                                                }
                                                catch (MatchException matchException) {
                                                    throw og$vf.dws(matchException);
                                                }
                                            }
                                            bl2 = this.dwi(livingEntity);
                                        }
                                        try {
                                            try {
                                                if (stringArray == null) break block52;
                                                if (!bl2) break block53;
                                            }
                                            catch (MatchException matchException) {
                                                throw og$vf.dws(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw og$vf.dws(matchException);
                                        }
                                    }
                                    bl2 = this.dwg(livingEntity);
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block54;
                                        if (!bl2) break block55;
                                    }
                                    catch (MatchException matchException) {
                                        throw og$vf.dws(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw og$vf.dws(matchException);
                                }
                            }
                            bl2 = this.dwj(livingEntity);
                        }
                        try {
                            try {
                                if (stringArray == null) break block56;
                                if (!bl2) break block57;
                            }
                            catch (MatchException matchException) {
                                throw og$vf.dws(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                    }
                    bl2 = this.dwf(livingEntity);
                }
                try {
                    try {
                        if (stringArray == null) break block58;
                        if (!bl2) break block59;
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
            }
            bl2 = this.dwk(livingEntity);
        }
        return bl2;
    }

    private boolean dwd(LivingEntity livingEntity) {
        boolean bl2;
        block8: {
            block7: {
                LivingEntity livingEntity2;
                String[] stringArray;
                block6: {
                    long l2 = zomsO ^ 0x5D33D39F0F0AL;
                    stringArray = of.cCL();
                    try {
                        try {
                            livingEntity2 = livingEntity;
                            if (stringArray == null) break block6;
                            if (!(livingEntity2 instanceof PlayerEntity)) break block7;
                        }
                        catch (MatchException matchException) {
                            throw og$vf.dws(matchException);
                        }
                        livingEntity2 = livingEntity;
                    }
                    catch (MatchException matchException) {
                        throw og$vf.dws(matchException);
                    }
                }
                PlayerEntity playerEntity = (PlayerEntity)livingEntity2;
                try {
                    bl2 = rD.dml().aLp(playerEntity);
                    if (stringArray == null) break block8;
                    if (!bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw og$vf.dws(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static og$vf$wk dwr() {
        return new og$vf$wk();
    }
}

