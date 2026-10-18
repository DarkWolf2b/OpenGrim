/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.ItemInHandRendererAccessor
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.item.consume.UseAction
 *  net.minecraft.util.Arm
 *  net.minecraft.util.Hand
 *  org.joml.Quaternionf
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
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.ItemInHandRendererAccessor;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.item.consume.UseAction;
import net.minecraft.util.Arm;
import net.minecraft.util.Hand;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import sixtwo.c;
import sixtwo.cI;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gm;
import sixtwo.hG;
import sixtwo.hc;
import sixtwo.iS;
import sixtwo.im;
import sixtwo.in;
import sixtwo.mr;
import sixtwo.rD;

public class cQ
extends gg {
    private final cI YVeeN;
    private static final long dIDwx;
    private static final long[] ATwKC;
    private static final Integer[] uEcFa;
    private static final Map IPLYZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cQ() {
        long l2 = dIDwx ^ 0x689A551143B8L;
        super(gf.aZL((int)94, false, gh.nOCvV));
        int[] nArray = new int[14];
        nArray[0] = (int)69;
        nArray[1] = (int)100;
        nArray[2] = (int)105;
        nArray[3] = (int)116;
        nArray[4] = (int)32;
        nArray[5] = (int)65;
        nArray[6] = (int)110;
        nArray[7] = (int)105;
        nArray[8] = (int)109;
        nArray[9] = (int)97;
        nArray[10] = (int)116;
        nArray[11] = (int)105;
        nArray[12] = (int)111;
        nArray[13] = (int)110;
        this.YVeeN = new cI(this, mr.clS(nArray)).Wx(c::z);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cQ.dIDwx = gb.aYR(-8313343678422209238L, 1666382798646072226L, MethodHandles.lookup().lookupClass()).a(48702971064512L);
                cQ.IPLYZ = new HashMap<K, V>(13);
                var0 = cQ.dIDwx ^ 132742873231512L;
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
                var8_3 = new long[23];
                var5_4 = 0;
                var6_5 = "\u00c8u\u00e7\u00e8\u0000\u0099x\u00f5\u00f9\u00ca\u00a2\u00adQ,\u00fd~\u00ca9\u001c_\u0019p\u008coc\u00e0\u00f5@\u00e4\u009d\u00a5&\u00afW+\u000bn\u00d6v\u0018\u0000F\u00be\u00e8[\u000b\u00da\u00cb\u008aZ\u0092\u008a#\u00d87\u00c3L\u00c9\u00e7\u008b\u0099\u00d5F\u0013\u00d3\t\u00dc\u00a8\u008f\u00ab\u00feML\u00c7\u00a8\u0012z\u00d0\u00da\u00d1\u00a0\u00f5\u00e1\u00c6a\u00ff\u00c7#c\u00b0\u001dmp\u00f1\u00af\u001f\u001a\u0082\u00feq\u00b1\u0003\u00d9g;\u00fe\u0099#\u00e0\u00f4t\b\u00d3\u00a8\u00f0vK\f\u0086\u001e\u00a2c\u00a3\u008bf`9\u00e7\u0018n\u00ba\u00e6'>\u00f7\u00ca\u00c4\u009aD\u00ebfB\\\n\u0093\u00ecZ\u009961\u0095\u00cf\u0087\u00d2\u0013\u0097\u0093[xM\u00c7fS8[\u0084C\u00ee";
                var7_6 = "\u00c8u\u00e7\u00e8\u0000\u0099x\u00f5\u00f9\u00ca\u00a2\u00adQ,\u00fd~\u00ca9\u001c_\u0019p\u008coc\u00e0\u00f5@\u00e4\u009d\u00a5&\u00afW+\u000bn\u00d6v\u0018\u0000F\u00be\u00e8[\u000b\u00da\u00cb\u008aZ\u0092\u008a#\u00d87\u00c3L\u00c9\u00e7\u008b\u0099\u00d5F\u0013\u00d3\t\u00dc\u00a8\u008f\u00ab\u00feML\u00c7\u00a8\u0012z\u00d0\u00da\u00d1\u00a0\u00f5\u00e1\u00c6a\u00ff\u00c7#c\u00b0\u001dmp\u00f1\u00af\u001f\u001a\u0082\u00feq\u00b1\u0003\u00d9g;\u00fe\u0099#\u00e0\u00f4t\b\u00d3\u00a8\u00f0vK\f\u0086\u001e\u00a2c\u00a3\u008bf`9\u00e7\u0018n\u00ba\u00e6'>\u00f7\u00ca\u00c4\u009aD\u00ebfB\\\n\u0093\u00ecZ\u009961\u0095\u00cf\u0087\u00d2\u0013\u0097\u0093[xM\u00c7fS8[\u0084C\u00ee".length();
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
                    var6_5 = "j\u0016\u00ce\u00afS\u00e8r\u00e3\u00e2\u001a\u00cb\u00f5\u00c9\u00ccl*";
                    var7_6 = "j\u0016\u00ce\u00afS\u00e8r\u00e3\u00e2\u001a\u00cb\u00f5\u00c9\u00ccl*".length();
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
        cQ.ATwKC = var8_3;
        cQ.uEcFa = new Integer[23];
    }

    public boolean YI() {
        boolean bl2;
        block8: {
            block6: {
                in in2;
                iS[] iSArray;
                block7: {
                    long l2 = dIDwx ^ 0x756FC762A02BL;
                    in in3 = rD.dlU().bmd();
                    iSArray = dh.afl();
                    try {
                        try {
                            if (!this.RliRe) break block6;
                            in2 = in3;
                            if (iSArray != null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        if (in2 == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                    in2 = in3;
                }
                try {
                    bl2 = in2.bkZ();
                    if (iSArray != null) break block8;
                    if (!bl2) break block6;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    @hG
    public void YF(hc hc2) {
        block22: {
            ItemInHandRendererAccessor itemInHandRendererAccessor;
            block23: {
                int n2;
                ItemInHandRendererAccessor itemInHandRendererAccessor2;
                block21: {
                    iS[] iSArray;
                    block19: {
                        in in2;
                        block20: {
                            long l2 = dIDwx ^ 0x5F329976123EL;
                            iSArray = dh.afl();
                            try {
                                if (!this.bab()) {
                                    return;
                                }
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            in2 = rD.dlU().bmd();
                            itemInHandRendererAccessor2 = (ItemInHandRendererAccessor)rD.dlmvG.getEntityRenderDispatcher().getHeldItemRenderer();
                            try {
                                try {
                                    try {
                                        try {
                                            n2 = in2.bkX();
                                            if (iSArray != null) break block19;
                                            if (n2 == 0) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        float f2 = itemInHandRendererAccessor2.getEquippedProgressMainHand() - 1.0f;
                                        n2 = f2 == 0.0f ? 0 : (f2 < 0.0f ? -1 : 1);
                                        if (iSArray != null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    if (n2 > 0) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                                itemInHandRendererAccessor2.setEquippedProgressMainHand(1.0f);
                                itemInHandRendererAccessor2.setItemStackMainHand(rD.dlmvG.player.getMainHandStack());
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                        }
                        n2 = in2.bkY();
                    }
                    try {
                        try {
                            try {
                                if (iSArray != null) break block21;
                                if (n2 == 0) break block22;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            itemInHandRendererAccessor = itemInHandRendererAccessor2;
                            if (iSArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        float f3 = itemInHandRendererAccessor.getEquippedProgressOffHand() - 1.0f;
                        n2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                try {
                    if (n2 > 0) break block22;
                    itemInHandRendererAccessor2.setEquippedProgressOffHand(1.0f);
                    itemInHandRendererAccessor = itemInHandRendererAccessor2;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
            }
            itemInHandRendererAccessor.setItemStackOffHand(rD.dlmvG.player.getOffHandStack());
        }
    }

    public cI YJ() {
        return this.YVeeN;
    }

    private static int YM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cQ.YL(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public boolean YH(ItemStack itemStack) {
        boolean bl2;
        block30: {
            block25: {
                UseAction useAction;
                UseAction useAction2;
                block29: {
                    Item item;
                    Item item2;
                    UseAction useAction3;
                    iS[] iSArray;
                    block28: {
                        Item item3;
                        block27: {
                            block26: {
                                block24: {
                                    long l2 = dIDwx ^ 0x6F07B1A8BA5EL;
                                    item3 = itemStack.getItem();
                                    iSArray = dh.afl();
                                    useAction3 = itemStack.getUseAction();
                                    try {
                                        try {
                                            item2 = item3;
                                            item = Items.AIR;
                                            if (iSArray != null) break block24;
                                            if (item2 == item) break block25;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        item2 = item3;
                                        item = Items.FILLED_MAP;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block26;
                                        if (item2 == item) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    item2 = item3;
                                    item = Items.CROSSBOW;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block27;
                                    if (item2 == item) break block25;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                                item2 = item3;
                                item = Items.BOW;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                        }
                        try {
                            try {
                                if (iSArray != null) break block28;
                                if (item2 == item) break block25;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            item2 = item3;
                            item = Items.TRIDENT;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                    }
                    try {
                        try {
                            try {
                                if (item2 == item) break block25;
                                useAction2 = useAction3;
                                useAction = UseAction.DRINK;
                                if (iSArray != null) break block29;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            if (useAction2 == useAction) break block25;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        useAction2 = useAction3;
                        useAction = UseAction.EAT;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                try {
                    if (useAction2 == useAction) break block25;
                    bl2 = true;
                    break block30;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    @hG
    public void YG(gm gm2) {
        block20: {
            int n2;
            gm gm3;
            MatrixStack matrixStack;
            block27: {
                block22: {
                    Arm arm;
                    iS[] iSArray;
                    block26: {
                        ClientPlayerEntity clientPlayerEntity;
                        block24: {
                            block25: {
                                block23: {
                                    block21: {
                                        long l2 = dIDwx ^ 0x19F8AD372AFDL;
                                        iSArray = dh.afl();
                                        try {
                                            try {
                                                try {
                                                    if (!this.YH(gm2.bbd())) break block20;
                                                    clientPlayerEntity = rD.dlmvG.player;
                                                    if (iSArray != null) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cQ.YK(matchException);
                                                }
                                                if (clientPlayerEntity == null) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw cQ.YK(matchException);
                                            }
                                            clientPlayerEntity = rD.dlmvG.player;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                    }
                                    try {
                                        try {
                                            if (iSArray != null) break block23;
                                            if (!clientPlayerEntity.isUsingItem()) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        clientPlayerEntity = rD.dlmvG.player;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block24;
                                        if (clientPlayerEntity.getActiveHand() != Hand.MAIN_HAND) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    arm = rD.dlmvG.player.getMainArm();
                                    break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                            }
                            clientPlayerEntity = rD.dlmvG.player;
                        }
                        arm = clientPlayerEntity.getMainArm().getOpposite();
                    }
                    matrixStack = arm;
                    try {
                        try {
                            gm3 = gm2;
                            if (iSArray != null) break block27;
                            if (gm3.bbb() != matrixStack) break block22;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                gm3 = gm2;
            }
            matrixStack = gm3.bbf();
            float f2 = gm2.bbc();
            im im2 = rD.dlU().blR(f2);
            try {
                n2 = gm2.bbb() == Arm.RIGHT ? 1 : -1;
            }
            catch (MatchException matchException) {
                throw cQ.YK(matchException);
            }
            int n3 = n2;
            float f3 = im2.bky() * (float)n3;
            float f4 = im2.bkB() * (float)n3;
            float f5 = im2.bkF() * (float)n3;
            float f6 = im2.bkG() * (float)n3;
            matrixStack.translate(f3, im2.bkz(), im2.bkA());
            matrixStack.translate(f4, im2.bkC(), im2.bkD());
            matrixStack.multiply((Quaternionfc)new Quaternionf().rotationXYZ((float)Math.toRadians(im2.bkE()), (float)Math.toRadians(f5), (float)Math.toRadians(f6)));
            matrixStack.translate(-f3, -im2.bkz(), -im2.bkA());
            gm2.bdX(true);
        }
    }

    private static int YL(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7718;
        if (uEcFa[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ATwKC[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])IPLYZ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IPLYZ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cQ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cQ.uEcFa[n3] = n4;
        }
        return uEcFa[n3];
    }

    private static CallSite YN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cQ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException YK(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cQ.class, "YM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

