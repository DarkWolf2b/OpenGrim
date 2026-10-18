/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.authlib.GameProfile
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  mixin.accessors.WalkAnimationStateAccessor
 *  net.minecraft.class_10034
 *  net.minecraft.class_10042
 *  net.minecraft.class_10055
 *  net.minecraft.class_1044
 *  net.minecraft.class_11890
 *  net.minecraft.class_12079$class_12081
 *  net.minecraft.class_12249
 *  net.minecraft.class_1268
 *  net.minecraft.class_1304
 *  net.minecraft.class_1802
 *  net.minecraft.class_243
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_2960
 *  net.minecraft.class_3532
 *  net.minecraft.class_3879
 *  net.minecraft.class_4050
 *  net.minecraft.class_4587
 *  net.minecraft.class_5602
 *  net.minecraft.class_563
 *  net.minecraft.class_572
 *  net.minecraft.class_591
 *  net.minecraft.class_630
 *  net.minecraft.class_742
 *  net.minecraft.class_745
 *  net.minecraft.class_7833
 *  net.minecraft.class_7920
 *  net.minecraft.class_922
 *  net.minecraft.class_9799
 *  net.minecraft.class_9801
 *  net.minecraft.class_9848
 *  net.minecraft.class_9950
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import com.mojang.authlib.GameProfile;
import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.class_10034;
import net.minecraft.class_10042;
import net.minecraft.class_10055;
import net.minecraft.class_1044;
import net.minecraft.class_11890;
import net.minecraft.class_12079;
import net.minecraft.class_12249;
import net.minecraft.class_1268;
import net.minecraft.class_1304;
import net.minecraft.class_1802;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_2960;
import net.minecraft.class_3532;
import net.minecraft.class_3879;
import net.minecraft.class_4050;
import net.minecraft.class_4587;
import net.minecraft.class_5602;
import net.minecraft.class_563;
import net.minecraft.class_572;
import net.minecraft.class_591;
import net.minecraft.class_630;
import net.minecraft.class_742;
import net.minecraft.class_745;
import net.minecraft.class_7833;
import net.minecraft.class_7920;
import net.minecraft.class_922;
import net.minecraft.class_9799;
import net.minecraft.class_9801;
import net.minecraft.class_9848;
import net.minecraft.class_9950;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.gb;
import sixtwo.jC;
import sixtwo.jL;
import sixtwo.ki;
import sixtwo.ks;
import sixtwo.ku;
import sixtwo.kv;
import sixtwo.kw;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rg;

public class kt {
    private final rg QrGyy;
    private final ku SAPZa;
    private class_243 OmUIx;
    private class_243 UScrC;
    private class_745 tLzLU;
    private class_591 TRGbg;
    private class_591 HRWqQ;
    private class_9950 LOuMD;
    private class_9950 OhmsV;
    private class_563 bAiqA;
    private class_563 Pdzhn;
    private class_7920 CRBkx;
    private ks SueiO;
    private kw KOcUS;
    private jC fKqfS;
    private static final class_2960 mCJQZ;
    private static boolean vuFhM;
    private static final long Iousr;
    private static final String[] wINKP;
    private static final String[] KQBfh;
    private static final Map koOhD;
    private static final long[] HgRhM;
    private static final Integer[] jmxFQ;
    private static final Map SwLAk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static boolean bRw() {
        return vuFhM;
    }

    public boolean bQX() {
        return true;
    }

    public void bRa(class_243 class_2432) {
        block15: {
            kt kt2;
            class_243 class_2433;
            block13: {
                boolean bl;
                block14: {
                    block11: {
                        block12: {
                            long l = Iousr ^ 0x767FBB9BE126L;
                            bl = kt.bRx();
                            try {
                                class_2433 = class_2432;
                                if (!bl) break block11;
                                if (class_2433 != null) break block12;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return;
                        }
                        class_2433 = this.UScrC;
                    }
                    try {
                        try {
                            if (!bl) break block13;
                            if (class_2433 != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                        this.bQY(class_2432);
                        return;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                }
                try {
                    kt2 = this;
                    if (!bl) break block15;
                    class_2433 = kt2.UScrC;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            try {
                if (class_2433.method_1025(class_2432) <= 1.0E-6) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw kt.bRy(matchException);
            }
            this.OmUIx = this.UScrC;
            kt2 = this;
        }
        kt2.UScrC = class_2432;
    }

    public void bQZ(class_243 class_2432, class_742 class_7422) {
        this.bQY(class_2432);
        this.bRr(class_7422);
    }

    public static boolean bRx() {
        boolean bl = kt.bRw();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw kt.bRy(matchException);
        }
        return false;
    }

    public kt bQV(kw kw2) {
        kw kw3;
        block2: {
            block3: {
                long l = Iousr ^ 0x4B4C5EF10D4L;
                boolean bl = kt.bRx();
                try {
                    kt kt2 = this;
                    kw3 = kw2;
                    if (!bl) break block2;
                    if (kw3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                kw3 = kw.bRK();
                break block2;
            }
            kw3 = kw2;
        }
        kt2.KOcUS = kw3;
        return this;
    }

    private void bRr(class_742 class_7422) {
        block4: {
            block5: {
                long l = Iousr ^ 0x7AF3DB3AEA83L;
                boolean bl = kt.bRx();
                try {
                    try {
                        if (!bl) break block4;
                        if (class_7422 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            this.SueiO = ks.capture(class_7422);
        }
    }

    private boolean bRd(class_742 class_7422, class_243 class_2432, float f) {
        double d;
        block12: {
            block13: {
                boolean bl;
                block10: {
                    block11: {
                        boolean bl2;
                        block8: {
                            block9: {
                                long l = Iousr ^ 0x6563CC4E4CB4L;
                                bl = kt.bRw();
                                try {
                                    try {
                                        try {
                                            bl2 = rD.dlmvG.field_1690.method_31044().method_31034();
                                            if (bl) break block8;
                                            if (!bl2) break block9;
                                        }
                                        catch (MatchException matchException) {
                                            throw kt.bRy(matchException);
                                        }
                                        double d2 = class_2432.method_1025(class_7422.method_73189()) - 1.0E-6;
                                        d = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                                        if (bl) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    if (d <= 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            bl2 = false;
                        }
                        return bl2;
                    }
                    double d3 = rD.dlmvG.field_1773.method_19418().method_71156().method_1025(class_7422.method_5836(f)) - 1.0E-6;
                    d = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                }
                try {
                    if (bl) break block12;
                    if (d > 0) break block13;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                d = 1.0;
                break block12;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    private void bRn(ks ks2, class_243 class_2432) {
        block33: {
            class_745 class_7452;
            block34: {
                boolean bl;
                block31: {
                    boolean bl2;
                    block30: {
                        block29: {
                            block27: {
                                class_4050 class_40502;
                                class_745 class_7453;
                                block26: {
                                    ks ks3;
                                    block24: {
                                        block25: {
                                            long l = Iousr ^ 0x7E993A4CBB45L;
                                            this.tLzLU.method_33574(class_2432);
                                            this.tLzLU.field_6014 = class_2432.field_1352;
                                            this.tLzLU.field_6036 = class_2432.field_1351;
                                            this.tLzLU.field_5969 = class_2432.field_1350;
                                            this.tLzLU.method_36456(ks2.yRot());
                                            this.tLzLU.method_36457(ks2.xRot());
                                            this.tLzLU.field_5982 = ks2.yRotO();
                                            this.tLzLU.field_6004 = ks2.xRotO();
                                            this.tLzLU.field_6283 = ks2.yBodyRot();
                                            this.tLzLU.field_6220 = ks2.yBodyRotO();
                                            this.tLzLU.field_6241 = ks2.yHeadRot();
                                            boolean bl3 = kt.bRx();
                                            this.tLzLU.field_6259 = ks2.yHeadRotO();
                                            this.tLzLU.field_6235 = ks2.hurtTime();
                                            this.tLzLU.field_6213 = ks2.deathTime();
                                            this.tLzLU.method_18380(ks2.pose());
                                            this.tLzLU.method_5660(ks2.shiftDown());
                                            this.tLzLU.method_5728(ks2.sprinting());
                                            this.tLzLU.method_24830(ks2.onGround());
                                            this.tLzLU.method_18799(ks2.deltaMovement());
                                            this.tLzLU.method_6122(class_1268.field_5808, ks2.mainHand().method_7972());
                                            this.tLzLU.method_6122(class_1268.field_5810, ks2.offHand().method_7972());
                                            this.tLzLU.method_5673(class_1304.field_6174, ks2.chestEquipment().method_7972());
                                            WalkAnimationStateAccessor walkAnimationStateAccessor = (WalkAnimationStateAccessor)this.tLzLU.field_42108;
                                            this.tLzLU.field_42108.method_48567(ks2.walkAnimationSpeed());
                                            bl2 = bl3;
                                            try {
                                                try {
                                                    walkAnimationStateAccessor.setPosition(ks2.walkAnimationPos());
                                                    class_7453 = this.tLzLU;
                                                    ks3 = ks2;
                                                    if (!bl2) break block24;
                                                    if (!ks3.fallFlying()) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw kt.bRy(matchException);
                                                }
                                                class_40502 = class_4050.field_18077;
                                                break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw kt.bRy(matchException);
                                            }
                                        }
                                        ks3 = ks2;
                                    }
                                    class_40502 = ks3.pose();
                                }
                                try {
                                    block28: {
                                        try {
                                            try {
                                                class_7453.method_18380(class_40502);
                                                bl = ks2.fallFlying();
                                                if (!bl2) break block27;
                                                if (!bl) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw kt.bRy(matchException);
                                            }
                                            this.tLzLU.method_23669();
                                            if (bl2) break block29;
                                        }
                                        catch (MatchException matchException) {
                                            throw kt.bRy(matchException);
                                        }
                                    }
                                    bl = this.tLzLU.method_6128();
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            try {
                                try {
                                    if (!bl2) break block30;
                                    if (!bl) break block29;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                                this.tLzLU.method_66281();
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                        }
                        bl = ks2.usingItem();
                    }
                    try {
                        try {
                            block32: {
                                try {
                                    try {
                                        if (!bl2) break block31;
                                        if (!bl) break block32;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    this.tLzLU.method_6019(ks2.usedItemHand());
                                    if (bl2) break block33;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            class_7452 = this.tLzLU;
                            if (!bl2) break block34;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                        bl = class_7452.method_6115();
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                }
                try {
                    if (!bl) break block33;
                    class_7452 = this.tLzLU;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            class_7452.method_6021();
        }
    }

    protected kw bQW() {
        return this.KOcUS;
    }

    private static Throwable bRy(Throwable throwable) {
        return throwable;
    }

    /*
     * Exception decompiling
     */
    public void bQQ(class_4587 var1_1, float var2_2, class_742 var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [11[TRYBLOCK]], but top level block is 15[SWITCH]
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

    public void bRb(class_243 class_2432, class_742 class_7422) {
        this.bRa(class_2432);
        this.bRr(class_7422);
    }

    public void bQY(class_243 class_2432) {
        block4: {
            block5: {
                long l = Iousr ^ 0x1B0F24432CDFL;
                boolean bl = kt.bRx();
                try {
                    try {
                        if (!bl) break block4;
                        if (class_2432 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            this.OmUIx = class_2432;
            this.UScrC = class_2432;
            this.QrGyy.dfE(class_2432);
        }
    }

    private static CallSite bRF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    private void bRm(class_7920 var1_1) {
        block51: {
            block50: {
                block49: {
                    block47: {
                        block48: {
                            block45: {
                                block46: {
                                    block43: {
                                        block44: {
                                            block41: {
                                                block42: {
                                                    block39: {
                                                        block40: {
                                                            block37: {
                                                                var2_2 = kt.Iousr ^ 72765211222205L;
                                                                var4_3 = kt.bRw();
                                                                try {
                                                                    block38: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    v0 = this;
                                                                                    if (var4_3) break block37;
                                                                                    if (v0.tLzLU == null) break block38;
                                                                                }
                                                                                catch (MatchException v1) {
                                                                                    throw kt.bRy(v1);
                                                                                }
                                                                                v2 = this;
                                                                                if (var4_3) break block39;
                                                                            }
                                                                            catch (MatchException v3) {
                                                                                throw kt.bRy(v3);
                                                                            }
                                                                            if (v2.tLzLU.method_73183() == rD.dlmvG.field_1687) break block40;
                                                                        }
                                                                        catch (MatchException v4) {
                                                                            throw kt.bRy(v4);
                                                                        }
                                                                    }
                                                                    v0 = this;
                                                                }
                                                                catch (MatchException v5) {
                                                                    throw kt.bRy(v5);
                                                                }
                                                            }
                                                            v0.tLzLU = new class_745(rD.dlmvG.field_1687, new GameProfile(UUID.randomUUID(), (String)kt.bRC("z", (int)4637, (long)(3260641129690218936L ^ var2_2))));
                                                        }
                                                        v2 = this;
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3) break block41;
                                                            if (v2.OhmsV != null) break block42;
                                                        }
                                                        catch (MatchException v6) {
                                                            throw kt.bRy(v6);
                                                        }
                                                        this.OhmsV = new class_9950(rD.dlmvG.method_31974().method_32072(class_5602.field_52980));
                                                    }
                                                    catch (MatchException v7) {
                                                        throw kt.bRy(v7);
                                                    }
                                                }
                                                v2 = this;
                                            }
                                            try {
                                                try {
                                                    if (var4_3) break block43;
                                                    if (v2.bAiqA != null) break block44;
                                                }
                                                catch (MatchException v8) {
                                                    throw kt.bRy(v8);
                                                }
                                                this.bAiqA = new class_563(rD.dlmvG.method_31974().method_32072(class_5602.field_27559));
                                            }
                                            catch (MatchException v9) {
                                                throw kt.bRy(v9);
                                            }
                                        }
                                        v2 = this;
                                    }
                                    try {
                                        try {
                                            if (var4_3) break block45;
                                            if (v2.LOuMD != null) break block46;
                                        }
                                        catch (MatchException v10) {
                                            throw kt.bRy(v10);
                                        }
                                        this.LOuMD = new class_9950(rD.dlmvG.method_31974().method_32072(class_5602.field_52980));
                                    }
                                    catch (MatchException v11) {
                                        throw kt.bRy(v11);
                                    }
                                }
                                v2 = this;
                            }
                            try {
                                try {
                                    if (var4_3) break block47;
                                    if (v2.Pdzhn != null) break block48;
                                }
                                catch (MatchException v12) {
                                    throw kt.bRy(v12);
                                }
                                this.Pdzhn = new class_563(rD.dlmvG.method_31974().method_32072(class_5602.field_27559));
                            }
                            catch (MatchException v13) {
                                throw kt.bRy(v13);
                            }
                        }
                        v2 = this;
                    }
                    try {
                        try {
                            if (var4_3) break block49;
                            if (v2.TRGbg != null) {
                            }
                            ** GOTO lbl110
                        }
                        catch (MatchException v14) {
                            throw kt.bRy(v14);
                        }
                        v2 = this;
                    }
                    catch (MatchException v15) {
                        throw kt.bRy(v15);
                    }
                }
                try {
                    try {
                        v16 = v2.CRBkx;
                        v17 = var1_1;
                        if (var4_3) break block50;
                        if (v16 == v17) break block51;
                    }
                    catch (MatchException v18) {
                        throw kt.bRy(v18);
                    }
lbl110:
                    // 2 sources

                    v16 = var1_1;
                    v17 = class_7920.field_41122;
                }
                catch (MatchException v19) {
                    throw kt.bRy(v19);
                }
            }
            try {
                v20 = v16 == v17;
            }
            catch (MatchException v21) {
                throw kt.bRy(v21);
            }
            var5_4 = v20;
            try {
                v22 = this;
                v23 = v24;
                v25 = v24;
                v26 = rD.dlmvG.method_31974();
                v27 = var5_4 != false ? class_5602.field_27581 : class_5602.field_27577;
            }
            catch (MatchException v28) {
                throw kt.bRy(v28);
            }
            v23(v26.method_32072(v27), var5_4);
            v22.TRGbg = v25;
            this.HRWqQ = new class_591(rD.dlmvG.method_31974().method_32072(var5_4 != false ? class_5602.field_27581 : class_5602.field_27577), var5_4);
            this.TRGbg.method_2838().method_41924(new Vector3f(-0.3f, -0.3f, -0.3f));
            this.HRWqQ.method_2838().method_41924(new Vector3f(-0.3f, -0.3f, -0.3f));
            this.CRBkx = var1_1;
        }
    }

    public class_243 bRc() {
        class_243 class_2432;
        block16: {
            block17: {
                kt kt2;
                boolean bl;
                block14: {
                    block15: {
                        block12: {
                            block13: {
                                long l = Iousr ^ 0x8FC7E8C8808L;
                                bl = kt.bRw();
                                try {
                                    try {
                                        kt2 = this;
                                        if (bl) break block12;
                                        if (kt2.UScrC != null) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw kt.bRy(matchException);
                                    }
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw kt.bRy(matchException);
                                }
                            }
                            kt2 = this;
                        }
                        try {
                            try {
                                if (bl) break block14;
                                if (!kt2.KOcUS.bRQ()) break block15;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return this.UScrC;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                    }
                    kt2 = this;
                }
                try {
                    try {
                        class_2432 = kt2.OmUIx;
                        if (bl) break block16;
                        if (class_2432 != null) break block17;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    this.bQY(this.UScrC);
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            class_2432 = this.QrGyy.dfA(this.UScrC);
        }
        return class_2432;
    }

    private void bRe(class_4587 class_45872, float f, ks ks2, class_2960 class_29602, class_2960 class_29603, mG mG2, float f2) {
        kt.bRf(() -> this.bRg(class_45872, f, ks2, class_29602, class_29603), kw.bRK().bRP(mG2, kv.DESOY, f2));
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     */
    private void bRg(class_4587 var1_1, float var2_2, ks var3_3, class_2960 var4_4, class_2960 var5_5) {
        block54: {
            block50: {
                block53: {
                    block51: {
                        block52: {
                            block64: {
                                block63: {
                                    block62: {
                                        block61: {
                                            block49: {
                                                block48: {
                                                    block46: {
                                                        block47: {
                                                            block44: {
                                                                block45: {
                                                                    var6_6 = kt.Iousr ^ 30311059220911L;
                                                                    var9_7 = this.tLzLU.method_73189().method_1020(rD.dlmvG.field_1773.method_19418().method_71156());
                                                                    var1_1.method_22903();
                                                                    var1_1.method_22904(var9_7.field_1352, var9_7.field_1351, var9_7.field_1350);
                                                                    var10_8 = class_3532.method_16439((float)var2_2, (float)this.tLzLU.field_6220, (float)this.tLzLU.field_6283);
                                                                    var1_1.method_22907((Quaternionfc)class_7833.field_40716.rotationDegrees(180.0f - var10_8));
                                                                    this.bRp(var1_1, var3_3, var2_2);
                                                                    this.bRo(var1_1);
                                                                    var11_9 = rD.dlmvG.method_1561().method_74405((class_742)this.tLzLU);
                                                                    v0 = kt.bRw();
                                                                    var12_10 = new class_10055();
                                                                    var11_9.method_62604((class_11890)this.tLzLU, var12_10, var2_2);
                                                                    var8_11 = v0;
                                                                    try {
                                                                        var12_10.field_53520 = var3_3.skin();
                                                                        var12_10.field_53411 = var3_3.fallFlying();
                                                                        v1 = var12_10;
                                                                        v2 = var3_3.fallFlying() != false ? 20.0f : 0.0f;
                                                                    }
                                                                    catch (MatchException v3) {
                                                                        throw kt.bRy(v3);
                                                                    }
                                                                    v1.field_53534 = v2;
                                                                    v4 = var12_10;
                                                                    v5 = false;
                                                                    if (var8_11) break block44;
                                                                    try {
                                                                        block58: {
                                                                            v4.field_53535 = v5;
                                                                            var12_10.field_53521 = 0.0f;
                                                                            var12_10.field_53418 = var3_3.chestEquipment().method_7972();
                                                                            v4 = var12_10;
                                                                            if (var3_3.skin().comp_1627() == null) break block45;
                                                                            break block58;
                                                                            catch (MatchException v6) {
                                                                                throw kt.bRy(v6);
                                                                            }
                                                                        }
                                                                        v5 = true;
                                                                        break block44;
                                                                    }
                                                                    catch (MatchException v7) {
                                                                        throw kt.bRy(v7);
                                                                    }
                                                                }
                                                                v5 = false;
                                                            }
                                                            v4.field_53532 = v5;
                                                            this.bRq(var12_10, var3_3);
                                                            var13_12 = (WalkAnimationStateAccessor)this.tLzLU.field_42108;
                                                            var12_10.field_53451 = this.tLzLU.field_42108.method_48566();
                                                            var12_10.field_53450 = var13_12.getPosition();
                                                            this.TRGbg.method_62110(var12_10);
                                                            this.TRGbg.field_3482.field_3665 = true;
                                                            this.TRGbg.field_3479.field_3665 = true;
                                                            this.TRGbg.field_3484.field_3665 = true;
                                                            this.TRGbg.field_3486.field_3665 = true;
                                                            this.TRGbg.field_3483.field_3665 = true;
                                                            this.TRGbg.field_3394.field_3665 = true;
                                                            this.HRWqQ.field_3482.field_3665 = true;
                                                            this.HRWqQ.field_3479.field_3665 = true;
                                                            this.HRWqQ.field_3484.field_3665 = true;
                                                            this.HRWqQ.field_3486.field_3665 = true;
                                                            this.HRWqQ.field_3483.field_3665 = true;
                                                            this.HRWqQ.field_3394.field_3665 = true;
                                                            var14_13 = class_922.method_23622((class_10042)var12_10, (float)0.0f);
                                                            var15_14 = var12_10.field_61820;
                                                            var16_15 = this.bRs(var12_10);
                                                            if (var5_5 == null) break block47;
                                                            try {
                                                                block59: {
                                                                    v8 = this.tLzLU.method_6118(class_1304.field_6174).method_31574(class_1802.field_8833);
                                                                    if (var8_11) break block46;
                                                                    break block59;
                                                                    catch (MatchException v9) {
                                                                        throw kt.bRy(v9);
                                                                    }
                                                                }
                                                                if (v8) break block47;
                                                            }
                                                            catch (MatchException v10) {
                                                                throw kt.bRy(v10);
                                                            }
                                                            v8 = true;
                                                            break block46;
                                                        }
                                                        v8 = false;
                                                    }
                                                    var17_16 = v8;
                                                    if (!this.tLzLU.method_6118(class_1304.field_6174).method_31574(class_1802.field_8833)) break block48;
                                                    try {
                                                        block60: {
                                                            if (var16_15 == null) break block48;
                                                            break block60;
                                                            catch (MatchException v11) {
                                                                throw kt.bRy(v11);
                                                            }
                                                        }
                                                        v12 = true;
                                                        break block49;
                                                    }
                                                    catch (MatchException v13) {
                                                        throw kt.bRy(v13);
                                                    }
                                                }
                                                v12 = false;
                                            }
                                            var18_17 = v12;
                                            v14 = this.KOcUS.bRR();
                                            if (var8_11) break block50;
                                            if (v14 == 0) ** GOTO lbl162
                                            break block61;
                                            catch (MatchException v15) {
                                                throw kt.bRy(v15);
                                            }
                                        }
                                        this.bRi(var1_1, (class_3879)this.TRGbg, (class_3879)this.HRWqQ, var4_4, var15_14, var14_13);
                                        v16 = var12_10.field_53333;
                                        if (var8_11) break block51;
                                        break block62;
                                        catch (MatchException v17) {
                                            throw kt.bRy(v17);
                                        }
                                    }
                                    if (v16) break block52;
                                    break block63;
                                    catch (MatchException v18) {
                                        throw kt.bRy(v18);
                                    }
                                }
                                v16 = var17_16;
                                if (var8_11) break block51;
                                break block64;
                                catch (MatchException v19) {
                                    throw kt.bRy(v19);
                                }
                            }
                            try {
                                block65: {
                                    if (!v16) break block52;
                                    break block65;
                                    catch (MatchException v20) {
                                        throw kt.bRy(v20);
                                    }
                                }
                                this.bRi(var1_1, (class_3879)this.OhmsV, (class_3879)this.LOuMD, var5_5, var15_14, var14_13);
                            }
                            catch (MatchException v21) {
                                throw kt.bRy(v21);
                            }
                        }
                        v16 = var12_10.field_53333;
                    }
                    try {
                        if (var8_11) break block53;
                        if (v16) break block54;
                    }
                    catch (MatchException v22) {
                        throw kt.bRy(v22);
                    }
                    v16 = var18_17;
                }
                if (!v16) break block54;
                try {
                    block66: {
                        var1_1.method_22903();
                        var1_1.method_46416(0.0f, 0.0f, 0.125f);
                        this.bAiqA.method_17079((class_10034)var12_10);
                        this.bRi(var1_1, (class_3879)this.bAiqA, (class_3879)this.Pdzhn, var16_15, var15_14, var14_13);
                        var1_1.method_22909();
                        if (!var8_11) break block54;
                        break block66;
                        catch (MatchException v23) {
                            throw kt.bRy(v23);
                        }
                    }
                    v14 = class_9848.method_61318((float)0.75f, (float)1.0f, (float)1.0f, (float)1.0f);
                }
                catch (MatchException v24) {
                    throw kt.bRy(v24);
                }
            }
            var19_18 = v14;
            var20_19 = this.bRh();
            var21_20 = var20_19.bGU();
            try {
                block57: {
                    block55: {
                        block56: {
                            block67: {
                                var22_21 = var21_20.method_73477(this.TRGbg.method_23500(var4_4));
                                this.TRGbg.method_62100(var1_1, var22_21, var15_14, var14_13, var19_18);
                                v25 = var12_10.field_53333;
                                if (var8_11) break block55;
                                if (v25) break block56;
                                break block67;
                                catch (MatchException v26) {
                                    throw kt.bRy(v26);
                                }
                            }
                            try {
                                block68: {
                                    v25 = var17_16;
                                    if (var8_11) break block55;
                                    break block68;
                                    catch (MatchException v27) {
                                        throw kt.bRy(v27);
                                    }
                                }
                                if (!v25) break block56;
                            }
                            catch (MatchException v28) {
                                throw kt.bRy(v28);
                            }
                            var23_22 = var21_20.method_73477(this.OhmsV.method_23500(var5_5));
                            this.OhmsV.method_62100(var1_1, var23_22, var15_14, var14_13, var19_18);
                        }
                        v25 = var12_10.field_53333;
                    }
                    try {
                        if (var8_11) break block57;
                        if (v25) break block54;
                    }
                    catch (MatchException v29) {
                        throw kt.bRy(v29);
                    }
                    v25 = var18_17;
                }
                if (v25) {
                    var1_1.method_22903();
                    var1_1.method_46416(0.0f, 0.0f, 0.125f);
                    this.bAiqA.method_17079((class_10034)var12_10);
                    var23_22 = var21_20.method_73477(class_12249.method_75966((class_2960)var16_15));
                    this.bAiqA.method_62100(var1_1, var23_22, var15_14, var14_13, var19_18);
                    var1_1.method_22909();
                }
            }
            finally {
                var20_19.bGY();
            }
        }
        var1_1.method_22909();
    }

    private void bRl(class_630 class_6302) {
        class_630 class_6303;
        boolean bl;
        block3: {
            block4: {
                long l = Iousr ^ 0x5B3FD397C6A1L;
                bl = kt.bRx();
                try {
                    class_6303 = class_6302;
                    if (!bl) break block3;
                    if (class_6303 != null) break block4;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                return;
            }
            class_6303 = class_6302;
        }
        for (class_630 class_6304 : class_6303.method_32088()) {
            class_6304.method_41923();
            if (bl) continue;
        }
    }

    private static Object bRB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kt.bRA(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private /* synthetic */ void bRt(class_1044 class_10442, RenderPass renderPass) {
        long l = Iousr ^ 0x13F70009E17EL;
        jL.qidnW.bJl();
        jL.qidnW.bJt((String)((Object)kt.bRC("z", (int)12980, (long)(0x68FE187DC020A0D5L ^ l))), 1.0f, 1.0f, 1.0f, 1.0f);
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)10720, (long)(0x4D24D09EEB84BB84L ^ l))), this.KOcUS.bRS());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)4711, (long)(0x27BC0AFF950B0000L ^ l))), this.KOcUS.bRT());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)24513, (long)(0x755F27AA70804DA2L ^ l))), this.KOcUS.bRU());
        jL.qidnW.bJq((String)((Object)kt.bRC("z", (int)2080, (long)(0x205645CEA6549A45L ^ l))), this.KOcUS.bRV());
        renderPass.bindTexture((String)((Object)kt.bRC("z", (int)20792, (long)(0x25BCA7A1B545C35AL ^ l))), class_10442.method_71659(), class_10442.method_75484());
    }

    private static String bRz(byte[] byArray) {
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

    private class_2960 bRs(class_10055 class_100552) {
        block5: {
            class_12079.class_12081 class_120812;
            block4: {
                long l = Iousr ^ 0x64D3381D5043L;
                boolean bl = kt.bRx();
                try {
                    try {
                        class_120812 = class_100552.field_53520.comp_1628();
                        if (!bl) break block4;
                        if (class_120812 == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    class_120812 = class_100552.field_53520.comp_1628();
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            return class_120812.comp_3627();
        }
        return mCJQZ;
    }

    private class_9801 bRj(class_9801 class_98012, class_9801 class_98013, class_9799 class_97992) {
        class_287 class_2872;
        block13: {
            float f;
            float f2;
            int n;
            boolean bl;
            int n2;
            ByteBuffer byteBuffer;
            ByteBuffer byteBuffer2;
            long l;
            block12: {
                int n3;
                block10: {
                    block11: {
                        l = Iousr ^ 0x29FC580E2DD5L;
                        byteBuffer2 = class_98012.method_60818().duplicate().order(ByteOrder.nativeOrder());
                        byteBuffer = class_98013.method_60818().duplicate().order(ByteOrder.nativeOrder());
                        n2 = class_98012.method_60822().comp_750();
                        bl = kt.bRw();
                        try {
                            try {
                                n3 = n2;
                                if (bl) break block10;
                                if (n3 == class_98013.method_60822().comp_750()) break block11;
                            }
                            catch (MatchException matchException) {
                                throw kt.bRy(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw kt.bRy(matchException);
                        }
                    }
                    n3 = class_290.field_1585.getVertexSize();
                }
                n = n3;
                f2 = Float.POSITIVE_INFINITY;
                float f3 = Float.NEGATIVE_INFINITY;
                for (int i = 0; i < n2; ++i) {
                    float f4 = byteBuffer.getFloat(i * n + 4);
                    f2 = Math.min(f2, f4);
                    f = Math.max(f3, f4);
                    if (!bl) {
                        f3 = f;
                        if (!bl) continue;
                    }
                    break block12;
                }
                f = Math.max(f3 - f2, 1.0E-4f);
            }
            float f5 = f;
            class_287 class_2873 = new class_287(class_97992, VertexFormat.class_5596.field_27382, class_290.field_1575);
            for (int i = 0; i < n2; ++i) {
                int n4 = i * n;
                float f6 = byteBuffer2.getFloat(n4);
                float f7 = byteBuffer2.getFloat(n4 + 4);
                float f8 = byteBuffer2.getFloat(n4 + kt.bRF("p", (int)32766, (long)(0xB4EC1894DA7983FL ^ l)));
                float f9 = byteBuffer2.getFloat(n4 + kt.bRF("p", (int)16515, (long)(0x2BD202995564A747L ^ l)));
                float f10 = byteBuffer2.getFloat(n4 + kt.bRF("p", (int)17469, (long)(0x3C4FA44F4A8CA3FAL ^ l)));
                float f11 = byteBuffer.getFloat(n4 + 4);
                float f12 = class_3532.method_15363((float)((f11 - f2) / f5), (float)0.0f, (float)1.0f);
                int n5 = class_3532.method_15375((float)(f12 * 255.0f));
                try {
                    class_2872 = class_2873;
                    if (!bl) {
                        class_2872.method_22912(f6, f7, f8).method_39415(class_9848.method_61324((int)kt.bRF("p", (int)12645, (long)(0x4B3D2B7482F6D6A6L ^ l)), (int)n5, (int)kt.bRF("p", (int)23632, (long)(0x4732C7F4DBE9BB95L ^ l)), (int)kt.bRF("p", (int)23632, (long)(0x4732C7F4DBE9BB95L ^ l)))).method_22913(f9, f10);
                        if (!bl) continue;
                        break;
                    }
                    break block13;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            class_2872 = class_2873;
        }
        return class_2872.method_60794();
    }

    /*
     * Unable to fully structure code
     */
    private void bRq(class_10055 var1_1, ks var2_2) {
        block24: {
            block23: {
                block19: {
                    block20: {
                        block21: {
                            block22: {
                                var3_3 = kt.Iousr ^ 64451904391225L;
                                var5_4 = kt.bRx();
                                try {
                                    if (!var2_2.chestEquipment().method_31574(class_1802.field_8833)) {
                                        return;
                                    }
                                }
                                catch (MatchException v0) {
                                    throw kt.bRy(v0);
                                }
                                var6_5 = 0.2617994f;
                                var7_6 = 0.0f;
                                var8_7 = -0.2617994f;
                                try {
                                    v1 = var2_2.fallFlying();
                                    if (!var5_4) break block19;
                                    if (v1) {
                                    }
                                    ** GOTO lbl54
                                }
                                catch (MatchException v2) {
                                    throw kt.bRy(v2);
                                }
                                var9_8 = 1.0f;
                                var10_9 = var2_2.deltaMovement();
                                try {
                                    try {
                                        try {
                                            try {
                                                if (!var5_4) break block20;
                                                if (!(var10_9.field_1351 < 0.0)) break block21;
                                            }
                                            catch (MatchException v3) {
                                                throw kt.bRy(v3);
                                            }
                                            v4 = var10_9;
                                            if (!var5_4) break block22;
                                        }
                                        catch (MatchException v5) {
                                            throw kt.bRy(v5);
                                        }
                                        if (!(v4.method_1027() > 1.0E-7)) break block21;
                                    }
                                    catch (MatchException v6) {
                                        throw kt.bRy(v6);
                                    }
                                    v4 = var10_9.method_1029();
                                }
                                catch (MatchException v7) {
                                    throw kt.bRy(v7);
                                }
                            }
                            var11_10 = v4;
                            var9_8 = 1.0f - (float)Math.pow(-var11_10.field_1351, 1.5);
                        }
                        var6_5 = var9_8 * 0.34906584f + (1.0f - var9_8) * var6_5;
                        var8_7 = var9_8 * -1.5707964f + (1.0f - var9_8) * var8_7;
                    }
                    try {
                        try {
                            if (var5_4) break block23;
lbl54:
                            // 2 sources

                            v8 = var1_1;
                            if (!var5_4) break block24;
                        }
                        catch (MatchException v9) {
                            throw kt.bRy(v9);
                        }
                        v1 = v8.field_53410;
                    }
                    catch (MatchException v10) {
                        throw kt.bRy(v10);
                    }
                }
                if (v1) {
                    var6_5 = 0.6981317f;
                    var7_6 = 0.08726646f;
                    var8_7 = -0.7853982f;
                }
            }
            var1_1.field_53415 = var6_5;
            var1_1.field_53416 = var7_6;
            v8 = var1_1;
        }
        v8.field_53417 = var8_7;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static void bRf(Runnable runnable, kw kw2) {
        kw kw3;
        block7: {
            long l = Iousr ^ 0x74856EAC4096L;
            boolean bl = kt.bRw();
            try {
                try {
                    if (runnable == null) return;
                    kw3 = kw2;
                    if (bl) break block7;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                if (kw3 == null) return;
            }
            catch (MatchException matchException) {
                throw kt.bRy(matchException);
            }
            kw3 = kw2;
        }
        try {
            if (kw3.bRW() == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw kt.bRy(matchException);
        }
        ki.bPi(runnable, kw2.bRW(), kw2.bRW(), 0, 4, 2.5f, 1.0f, 1.0f, kw2.bRY(), 1.0f, 1.0f);
    }

    /*
     * Exception decompiling
     */
    private void bRi(class_4587 var1_1, class_3879 var2_2, class_3879 var3_3, class_2960 var4_4, int var5_5, int var6_6) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Started 2 blocks at once
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.getStartingBlocks(Op04StructuredStatement.java:412)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:487)
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

    private jC bRh() {
        jC jC2;
        block4: {
            block5: {
                long l = Iousr ^ 0x6DE90A0CCFC9L;
                boolean bl = kt.bRw();
                try {
                    try {
                        jC2 = this.fKqfS;
                        if (bl) break block4;
                        if (jC2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    this.fKqfS = new jC();
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            jC2 = this.fKqfS;
        }
        return jC2;
    }

    private void bRp(class_4587 class_45872, ks ks2, float f) {
        double d;
        double d2;
        class_243 class_2432;
        class_243 class_2433;
        block10: {
            double d3;
            double d4;
            block11: {
                long l = Iousr ^ 0x101A7F2112ADL;
                boolean bl = kt.bRx();
                try {
                    if (!ks2.fallFlying()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                float f2 = class_3532.method_16439((float)f, (float)ks2.xRotO(), (float)ks2.xRot());
                class_45872.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(-90.0f - f2));
                class_2433 = ks2.deltaMovement();
                d4 = class_2433.method_37268();
                try {
                    if (d4 <= 1.0E-7) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
                float f3 = class_3532.method_16439((float)f, (float)ks2.yRotO(), (float)ks2.yRot());
                class_2432 = class_243.method_1030((float)f2, (float)f3);
                d3 = class_2432.method_37268();
                try {
                    try {
                        d2 = d3;
                        d = 1.0E-7;
                        if (!bl) break block10;
                        if (!(d2 <= d)) break block11;
                    }
                    catch (MatchException matchException) {
                        throw kt.bRy(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw kt.bRy(matchException);
                }
            }
            d2 = class_2433.field_1352 * class_2432.field_1352 + class_2433.field_1350 * class_2432.field_1350;
            d = Math.sqrt(d4 * d3);
        }
        double d5 = d2 / d;
        double d6 = class_2433.field_1352 * class_2432.field_1350 - class_2433.field_1350 * class_2432.field_1352;
        float f4 = (float)(Math.signum(d6) * Math.acos(class_3532.method_15350((double)d5, (double)-1.0, (double)1.0)));
        class_45872.method_22907((Quaternionfc)class_7833.field_40716.rotation(f4));
    }

    private void bRk(class_572<?> class_5722) {
        this.bRl(class_5722.field_3398);
        this.bRl(class_5722.field_3394);
        this.bRl(class_5722.field_3391);
        this.bRl(class_5722.field_3401);
        this.bRl(class_5722.field_27433);
        this.bRl(class_5722.field_3392);
        this.bRl(class_5722.field_3397);
    }

    public static void bRv(boolean bl) {
        vuFhM = bl;
    }

    private static CallSite bRC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void bRo(class_4587 class_45872) {
        class_45872.method_22905(-1.0f, -1.0f, 1.0f);
        class_45872.method_22905(0.9375f, 0.9375f, 0.9375f);
        class_45872.method_46416(0.0f, -1.501f, 0.0f);
    }

    private static String bRA(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x41E0;
        if (KQBfh[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])koOhD.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    koOhD.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kt", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wINKP[n2].getBytes("ISO-8859-1");
            kt.KQBfh[n2] = kt.bRz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return KQBfh[n2];
    }

    private static int bRE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = kt.bRD(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int bRD(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x78EA;
        if (jmxFQ[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = HgRhM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])SwLAk.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    SwLAk.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kt", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kt.jmxFQ[n2] = n3;
        }
        return jmxFQ[n2];
    }

    public kt(ku ku2) {
        long l = Iousr ^ 0x72E7172171DCL;
        this.QrGyy = new rg((int)kt.bRF("p", (int)965, (long)(0x619B34F82B7CB80EL ^ l)));
        this.KOcUS = kw.bRK();
        this.SAPZa = ku2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        kt.Iousr = gb.aYR(2155236003250911185L, 1916641638048172439L, MethodHandles.lookup().lookupClass()).a(273694774512790L);
                        var20 = kt.Iousr ^ 97099914627609L;
                        kt.koOhD = new HashMap<K, V>(13);
                        kt.bRv(false);
                        var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var20 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var18_3 = new String[8];
                        var16_4 = 0;
                        var15_5 = "\u008b\u00e6\u0012\u00d0\u00a42g\u0093\u0092\u000e\u0006\u00f8O\u0006l\u00e5,\u00a2+H\u00f5\u00d0h(5\u00a88\u00c1\u00dem\u0001\u00cc$*\u00ca&\u00c9\u00c1\u009c\u00a3\u0018\u00ec\u0095\u00f9\u00a3na\u0010\u00d5\u00c8R1d\u00a9Gqi\t\u00cf\u0094\u00a6\u00c6\u00e1t\u00e3 \u00d4\u0099\u0081\u009c\u00d8\u00b5H\u008c\u00da\u00ab#N\u0017E\u00ab\u0087L\u00b0w\n\u009e\u00e57\u0097\u001d\u00f7EKE_R\u008d \u009a0q-tm<\u00c4\u0091\u00a4Qn\u00ff\u00ce\u009a\u00f7\u00faM\u001d\u00a6\u00a9\u00c9R\u0011\u0017\u00ed$\u00af\u00fe\u00c40y \\\u00ac+d\u00a9\u0018Trq\u00a0\u00cc^\u001f\u00c5\u001a\u008eE\f\u00e4\u00e0I\u00f5\u00a7)f\u008a@\u00df\u00f4\u0011\u0002\u00cc\u0018\n\u00b5K\u00fe\u0002j\u00fe\u0017\u00fe7\u00c2ixo\u009c\u000f=\nS\u00ae\u00b9\t \u00e1";
                        var17_6 = "\u008b\u00e6\u0012\u00d0\u00a42g\u0093\u0092\u000e\u0006\u00f8O\u0006l\u00e5,\u00a2+H\u00f5\u00d0h(5\u00a88\u00c1\u00dem\u0001\u00cc$*\u00ca&\u00c9\u00c1\u009c\u00a3\u0018\u00ec\u0095\u00f9\u00a3na\u0010\u00d5\u00c8R1d\u00a9Gqi\t\u00cf\u0094\u00a6\u00c6\u00e1t\u00e3 \u00d4\u0099\u0081\u009c\u00d8\u00b5H\u008c\u00da\u00ab#N\u0017E\u00ab\u0087L\u00b0w\n\u009e\u00e57\u0097\u001d\u00f7EKE_R\u008d \u009a0q-tm<\u00c4\u0091\u00a4Qn\u00ff\u00ce\u009a\u00f7\u00faM\u001d\u00a6\u00a9\u00c9R\u0011\u0017\u00ed$\u00af\u00fe\u00c40y \\\u00ac+d\u00a9\u0018Trq\u00a0\u00cc^\u001f\u00c5\u001a\u008eE\f\u00e4\u00e0I\u00f5\u00a7)f\u008a@\u00df\u00f4\u0011\u0002\u00cc\u0018\n\u00b5K\u00fe\u0002j\u00fe\u0017\u00fe7\u00c2ixo\u009c\u000f=\nS\u00ae\u00b9\t \u00e1".length();
                        var14_7 = 40;
                        var13_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = kt.bRz(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "\u00cesM9\u00af\u0010\u0085\u0088\u00d9bL%\u00c0\u00ea>P\u000e-\u00d1\u0094\u00bc \u00aa\u00c83\u00bce%BQ\u00bb\u0011\u00fe~\u009bc'\u001baaX\u00c5\u00ac\u00cd\u0081rh\u00fd\u00af\u00ba\u0090\u00b7M:m\u0080\u00e5\u00aa\u00c2i\u00a0\u00cb\u0006J\u00fe\u008dkn\bN\u0083: s\u00e8\u00b3<=]\u008d4\u00b3\u00b1\u00dd\u00a2\u0092\u00ca\u00ffJ\u0086\u001d\u008c\u00a1jp\u00dbT\u0099@\u001f\u00ac\u00ad\u00c6\u00d9\u009e";
                            var17_6 = "\u00cesM9\u00af\u0010\u0085\u0088\u00d9bL%\u00c0\u00ea>P\u000e-\u00d1\u0094\u00bc \u00aa\u00c83\u00bce%BQ\u00bb\u0011\u00fe~\u009bc'\u001baaX\u00c5\u00ac\u00cd\u0081rh\u00fd\u00af\u00ba\u0090\u00b7M:m\u0080\u00e5\u00aa\u00c2i\u00a0\u00cb\u0006J\u00fe\u008dkn\bN\u0083: s\u00e8\u00b3<=]\u008d4\u00b3\u00b1\u00dd\u00a2\u0092\u00ca\u00ffJ\u0086\u001d\u008c\u00a1jp\u00dbT\u0099@\u001f\u00ac\u00ad\u00c6\u00d9\u009e".length();
                            var14_7 = 72;
                            var13_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var13_8;
                                v4 = var15_5.substring(v6, v6 + var14_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = kt.bRz(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var11_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                kt.wINKP = var18_3;
                kt.KQBfh = new String[8];
                kt.SwLAk = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var20 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var20 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[8];
                var3_13 = 0;
                var4_14 = "\u0098\u00b3\u00f6\u0007|\u0017\u00d4\u00ae\u0097\u00cdN\u00e1\u0089\u00ce\u00a9\u00a6)\u00ca\u00ca\u00c2\u00d96\u00ae4\u00b9O\u0096\u00f4\u00fd\u00eb\u00c6\u00f7\u00fc\u0091y\u008d\u00ff\u00a5\u0080\u0086@\u00cd\u00bb\u00a9\u0012T|\u00ed";
                var5_15 = "\u0098\u00b3\u00f6\u0007|\u0017\u00d4\u00ae\u0097\u00cdN\u00e1\u0089\u00ce\u00a9\u00a6)\u00ca\u00ca\u00c2\u00d96\u00ae4\u00b9O\u0096\u00f4\u00fd\u00eb\u00c6\u00f7\u00fc\u0091y\u008d\u00ff\u00a5\u0080\u0086@\u00cd\u00bb\u00a9\u0012T|\u00ed".length();
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
                    var4_14 = "\u00e0\u00ce\u0096U\u00148\u00188yn\u008c!X(\u0087N";
                    var5_15 = "\u00e0\u00ce\u0096U\u00148\u00188yn\u008c!X(\u0087N".length();
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
        kt.HgRhM = var6_12;
        kt.jmxFQ = new Integer[8];
        kt.mCJQZ = class_2960.method_60656((String)kt.bRC("z", (int)2355, (long)(6903492504471941172L ^ var20)));
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kt.class, "bRE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(kt.class, "bRB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
