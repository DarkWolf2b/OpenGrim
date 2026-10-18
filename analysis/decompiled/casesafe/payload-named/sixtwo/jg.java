/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.Blocks
 *  net.minecraft.client.network.ClientPlayNetworkHandler
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.network.PlayerListEntry
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.EquipmentSlot
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Items
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket$PositionAndOnGround
 *  net.minecraft.util.ActionResult
 *  net.minecraft.util.ActionResult$Success
 *  net.minecraft.util.ActionResult$SwingSource
 *  net.minecraft.util.Hand
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.BlockPos$Mutable
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.BlockView
 *  net.minecraft.world.GameMode
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
 *  net.minecraft.world.World
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.security.Key;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.EquipmentSlot;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket;
import net.minecraft.util.ActionResult;
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.BlockView;
import net.minecraft.world.GameMode;
import net.minecraft.world.RaycastContext;
import net.minecraft.world.World;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.pf;
import sixtwo.rD;

public class jg {
    public static final String gaLzx;
    public static final Set<EntityType<? extends Entity>> hZYeV;
    public static final Set<EntityType<? extends Entity>> fbEDU;
    public static final Set<EntityType<? extends Entity>> skTlu;
    private static final String[] okfwP;
    private static int aIWFT;
    private static final long CcOBc;
    private static final long[] xEBCE;
    private static final Integer[] bSsdq;
    private static final Map KBkDM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block22: {
            block21: {
                block20: {
                    block19: {
                        jg.CcOBc = gb.aYR(-4077821107154291975L, -7390323926547277616L, MethodHandles.lookup().lookupClass()).a(133219813590623L);
                        var20 = jg.CcOBc ^ 116231379233606L;
                        if (jg.bCa() != 0) {
                            jg.bBY(14);
                        }
                        var12_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var13_2 = 1; var13_2 < 8; ++var13_2) {
                            v2 = v2;
                            v2[var13_2] = (byte)(var20 << var13_2 * 8 >>> 56);
                        }
                        var12_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var11_3 = new String[5];
                        var17_4 = 0;
                        var16_5 = "&\u0080\"\u0088\t\u009f\u008b\u00a9\b\u00a0>\u00fbK\u008e^D8\b2\u0091P\u001f\u001b\u00c2\u00de\u001c";
                        var18_6 = "&\u0080\"\u0088\t\u009f\u008b\u00a9\b\u00a0>\u00fbK\u008e^D8\b2\u0091P\u001f\u001b\u00c2\u00de\u001c".length();
                        var15_7 = 8;
                        var14_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var14_8;
                            v4 = var16_5.substring(v3, v3 + var15_7);
                            v5 = -1;
                            break block19;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = jg.bCc(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            var16_5 = "\u00eb\u00ee:\u00df\u00cd9m\u00dcAzi,+\u009a\u0099\u001b\u0093\u00b7U-Q<\u00fc\u0016\bX\u00f5t\u00bcE\u00a8\u009a!";
                            var18_6 = "\u00eb\u00ee:\u00df\u00cd9m\u00dcAzi,+\u009a\u0099\u001b\u0093\u00b7U-Q<\u00fc\u0016\bX\u00f5t\u00bcE\u00a8\u009a!".length();
                            var15_7 = 24;
                            var14_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var14_8;
                                v4 = var16_5.substring(v6, v6 + var15_7);
                                v5 = 0;
                                break block19;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var11_3[var17_4++] = jg.bCc(var19_9).intern();
                            if ((var14_8 += var15_7) < var18_6) {
                                var15_7 = var16_5.charAt(var14_8);
                                ** continue;
                            }
                            break block20;
                            break;
                        }
                    }
                    var19_9 = var12_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                jg.gaLzx = var11_3[3];
                jg.KBkDM = new HashMap<K, V>(13);
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
                var6_12 = new long[26];
                var3_13 = 0;
                var4_14 = "\u0011\u0083\u00ad\u00e2\u009c_c5\u00c0|q/\f\u00a6\u00f9\u0005\u00a1\u0086\u00a0\u00eeU\u00a4\u00bb\u00a8\u0098\u008e\u0001\u00cf\u00ca\u0019\u0081\u0088t\u001ek\rD.\f\u00e8v\u008c\u0081\u00e8\u00a5U\u009c\u00d4\u00d7Q^p<\u00b6Ww2/\u007fOW\u00d80~J.\u00cbD3x\u0092\u0010\u00f8\u009ez\u00e6\u009bO\t\u00c7\u0005\u00ce\u00c0\u00f7\u00d1\u00b6\u0083\u00c4q\u00f9\u001bYl\u009d\u00a6\u0095e\f\u00c6\u00a0d!\u00c3\u00a9\u0014\u00de\u008f3\u00f4\u0005\\V\u0005\u00d9\u00ac\u00f3\u00f4n\u0084\u0097+\u00b0a0\u00ec\u00e7rc=\u00cb\u0090-z\u0002E\u00cb\u00d8\u001c\u00cc\u0096\u00c8\u0011\u0090\u0094.\u001b\u00e4z\u00a2nZ5dV](\u00db\u00dc\u0089\u0018U\u00bf\nd\u0092\n\u00f5$e\u00dd\u0098\u00a1\u00e4\u00feX5V\u00c0\u00fc\u00a9~\u0007`2\u0082\u00993\u007f*\u00f8\u00e9\u0012";
                var5_15 = "\u0011\u0083\u00ad\u00e2\u009c_c5\u00c0|q/\f\u00a6\u00f9\u0005\u00a1\u0086\u00a0\u00eeU\u00a4\u00bb\u00a8\u0098\u008e\u0001\u00cf\u00ca\u0019\u0081\u0088t\u001ek\rD.\f\u00e8v\u008c\u0081\u00e8\u00a5U\u009c\u00d4\u00d7Q^p<\u00b6Ww2/\u007fOW\u00d80~J.\u00cbD3x\u0092\u0010\u00f8\u009ez\u00e6\u009bO\t\u00c7\u0005\u00ce\u00c0\u00f7\u00d1\u00b6\u0083\u00c4q\u00f9\u001bYl\u009d\u00a6\u0095e\f\u00c6\u00a0d!\u00c3\u00a9\u0014\u00de\u008f3\u00f4\u0005\\V\u0005\u00d9\u00ac\u00f3\u00f4n\u0084\u0097+\u00b0a0\u00ec\u00e7rc=\u00cb\u0090-z\u0002E\u00cb\u00d8\u001c\u00cc\u0096\u00c8\u0011\u0090\u0094.\u001b\u00e4z\u00a2nZ5dV](\u00db\u00dc\u0089\u0018U\u00bf\nd\u0092\n\u00f5$e\u00dd\u0098\u00a1\u00e4\u00feX5V\u00c0\u00fc\u00a9~\u0007`2\u0082\u00993\u007f*\u00f8\u00e9\u0012".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block21;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "r\u0007\u00af\u00d2\u00fb\u0097\u001b\u001f\u001c\u00d2\u00c2\u00e1\u00f8\u0097\u00af\u00d7";
                    var5_15 = "r\u0007\u00af\u00d2\u00fb\u0097\u001b\u001f\u001c\u00d2\u00c2\u00e1\u00f8\u0097\u00af\u00d7".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block21;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block22;
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
        jg.xEBCE = var6_12;
        jg.bSsdq = new Integer[26];
        jg.hZYeV = jg.bBS();
        jg.fbEDU = jg.bBU();
        jg.skTlu = jg.bBT();
        v15 = new String[jg.bCf("i", (int)6484, (long)(4565298335807544230L ^ var20))];
        v15[0] = "N";
        v15[1] = var11_3[0];
        v15[2] = "E";
        v15[3] = var11_3[4];
        v15[4] = "S";
        v15[5] = var11_3[2];
        v15[jg.bCf("i", (int)9041, (long)(6702167822508499371L ^ var20))] = "W";
        v15[jg.bCf("i", (int)22629, (long)(5563684398666701465L ^ var20))] = var11_3[1];
        jg.okfwP = v15;
    }

    public static double bBI(Entity entity) {
        return jg.bBJ(rD.dlmvG.player.getEyePos(), entity.getBoundingBox());
    }

    private static CallSite bCf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static Vec3d bBE(Vec3d vec3d, float f2, float f3) {
        Vec3d vec3d2;
        double d2;
        block6: {
            double d3;
            block7: {
                long l2 = CcOBc ^ 0x11AED5655CDAL;
                d3 = vec3d.lengthSquared();
                String[] stringArray = jf.bBe();
                try {
                    try {
                        double d4 = d3 - 1.0E-7;
                        d2 = d4 == 0.0 ? (int)0 : (d4 < 0.0 ? (int)-1 : 1);
                        if (stringArray == null) break block6;
                        if (d2 >= 0) break block7;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return Vec3d.ZERO;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            double d5 = d3 - 1.0;
            d2 = d5 == 0.0 ? (int)0 : (d5 > 0.0 ? (int)1 : -1);
        }
        try {
            vec3d2 = d2 > 0 ? vec3d.normalize() : vec3d;
        }
        catch (MatchException matchException) {
            throw jg.bCb(matchException);
        }
        Vec3d vec3d3 = vec3d2.multiply((double)f2);
        float f4 = MathHelper.sin((double)(f3 * ((float)Math.PI / 180)));
        float f5 = MathHelper.cos((double)(f3 * ((float)Math.PI / 180)));
        return new Vec3d(vec3d3.x * (double)f5 - vec3d3.z * (double)f4, vec3d3.y, vec3d3.z * (double)f5 + vec3d3.x * (double)f4);
    }

    public static int bBx(PlayerEntity playerEntity) {
        PlayerListEntry playerListEntry;
        block10: {
            PlayerListEntry playerListEntry2;
            block11: {
                ClientPlayNetworkHandler clientPlayNetworkHandler;
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = CcOBc ^ 0x40F858592182L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                clientPlayNetworkHandler = rD.dlmvG.getNetworkHandler();
                                if (stringArray == null) break block8;
                                if (clientPlayNetworkHandler != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return 0;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    clientPlayNetworkHandler = rD.dlmvG.getNetworkHandler();
                }
                playerListEntry2 = clientPlayNetworkHandler.getPlayerListEntry(playerEntity.getUuid());
                try {
                    try {
                        playerListEntry = playerListEntry2;
                        if (stringArray == null) break block10;
                        if (playerListEntry != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return 0;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            playerListEntry = playerListEntry2;
        }
        return playerListEntry.getLatency();
    }

    public static double bBJ(Vec3d vec3d, Box box) {
        Vec3d vec3d2 = jg.bBK(vec3d, box);
        return jg.bBH(vec3d2, vec3d);
    }

    public static boolean bBL(Entity entity, Entity entity2) {
        double d2;
        block2: {
            block3: {
                long l2 = CcOBc ^ 0x71BE319B3927L;
                Vec3d vec3d = entity.getRotationVector(0.0f, entity.getHeadYaw());
                Vec3d vec3d2 = entity2.getEntityPos().relativize(entity.getEntityPos());
                vec3d2 = new Vec3d(vec3d2.x, 0.0, vec3d2.z).normalize();
                String[] stringArray = jf.bBe();
                try {
                    double d3 = vec3d2.dotProduct(vec3d) - 0.0;
                    d2 = d3 == 0.0 ? (int)0 : (d3 < 0.0 ? (int)-1 : 1);
                    if (stringArray == null) break block2;
                    if (d2 >= 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d2 = 1.0;
                break block2;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    public static boolean bBR(ActionResult actionResult) {
        boolean bl2;
        block8: {
            block7: {
                ActionResult actionResult2;
                block6: {
                    long l2 = CcOBc ^ 0x3B8506D6A578L;
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            actionResult2 = actionResult;
                            if (stringArray == null) break block6;
                            if (!(actionResult2 instanceof ActionResult.Success)) break block7;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        actionResult2 = actionResult;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                ActionResult.Success success = (ActionResult.Success)actionResult2;
                try {
                    if (success.swingSource() != ActionResult.SwingSource.CLIENT) break block7;
                    bl2 = true;
                    break block8;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static int bCe(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jg.bCd(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static int bCa() {
        int n2 = jg.bBZ();
        try {
            if (n2 == 0) {
                return 51;
            }
        }
        catch (MatchException matchException) {
            throw jg.bCb(matchException);
        }
        return 0;
    }

    private static int bCd(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x303B;
        if (bSsdq[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = xEBCE[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KBkDM.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KBkDM.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jg", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jg.bSsdq[n3] = n4;
        }
        return bSsdq[n3];
    }

    @Deprecated
    public static void bBr() {
        double d2 = (double)MathHelper.floor((double)rD.dlmvG.player.getX()) + 0.5;
        double d3 = (double)MathHelper.floor((double)rD.dlmvG.player.getZ()) + 0.5;
        rD.dlmvG.player.setPosition(d2, rD.dlmvG.player.getY(), d3);
        rD.dlmvG.player.networkHandler.sendPacket((Packet)new PlayerMoveC2SPacket.PositionAndOnGround(rD.dlmvG.player.getX(), rD.dlmvG.player.getY(), rD.dlmvG.player.getZ(), rD.dlmvG.player.isOnGround(), rD.dlmvG.player.horizontalCollision));
    }

    public static boolean bBP(LivingEntity livingEntity) {
        ClientPlayerEntity clientPlayerEntity;
        LivingEntity livingEntity2;
        block10: {
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = CcOBc ^ 0x3806B136A761L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                livingEntity2 = livingEntity;
                                if (stringArray == null) break block8;
                                if (jg.bBQ(livingEntity2)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    livingEntity2 = livingEntity;
                }
                try {
                    try {
                        clientPlayerEntity = rD.dlmvG.player;
                        if (stringArray == null) break block10;
                        if (livingEntity2 != clientPlayerEntity) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            livingEntity2 = livingEntity;
            clientPlayerEntity = rD.dlmvG.player;
        }
        return jg.bBL((Entity)livingEntity2, (Entity)clientPlayerEntity);
    }

    public static Vec3d bBK(Vec3d vec3d, Box box) {
        double d2 = MathHelper.clamp((double)vec3d.x, (double)box.minX, (double)box.maxX);
        double d3 = MathHelper.clamp((double)vec3d.y, (double)box.minY, (double)box.maxY);
        double d4 = MathHelper.clamp((double)vec3d.z, (double)box.minZ, (double)box.maxZ);
        return new Vec3d(d2, d3, d4);
    }

    public static int bBZ() {
        return aIWFT;
    }

    public static boolean bBM(LivingEntity livingEntity) {
        return jg.bBN(livingEntity, 0.0);
    }

    public static boolean bBG(Vec3d vec3d, float f2) {
        double d2;
        block2: {
            block3: {
                long l2 = CcOBc ^ 0x1BFA0A0B3405L;
                String[] stringArray = jf.bBe();
                try {
                    double d3 = jg.bBH(rD.dlmvG.player.getEyePos(), vec3d) - (double)f2;
                    d2 = d3 == 0.0 ? (int)0 : (d3 < 0.0 ? (int)-1 : 1);
                    if (stringArray == null) break block2;
                    if (d2 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d2 = 1.0;
                break block2;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private static Exception bCb(Exception exception) {
        return exception;
    }

    public static Set<EntityType<? extends Entity>> bBU() {
        long l2 = CcOBc ^ 0x5536162D0301L;
        Set<EntityType<? extends Entity>> set = jg.bBS();
        EntityType[] entityTypeArray = new EntityType[jg.bCf("i", (int)8041, (long)(0x2EFA7F0CDC6535C8L ^ l2))];
        entityTypeArray[0] = EntityType.TNT;
        entityTypeArray[1] = EntityType.AREA_EFFECT_CLOUD;
        entityTypeArray[2] = EntityType.INTERACTION;
        entityTypeArray[3] = EntityType.LEASH_KNOT;
        entityTypeArray[4] = EntityType.LIGHTNING_BOLT;
        entityTypeArray[5] = EntityType.PAINTING;
        entityTypeArray[jg.bCf("i", (int)24349, (long)(0x31804D4DF2C9F5B0L ^ l2))] = EntityType.ARMOR_STAND;
        entityTypeArray[jg.bCf("i", (int)22629, (long)(0x4D3611FB8CD672DEL ^ l2))] = EntityType.FALLING_BLOCK;
        entityTypeArray[jg.bCf("i", (int)6776, (long)(0x233A5A59BCC8B0D6L ^ l2))] = EntityType.ITEM_DISPLAY;
        entityTypeArray[jg.bCf("i", (int)31974, (long)(0x11CB3A166B5AD651L ^ l2))] = EntityType.BLOCK_DISPLAY;
        entityTypeArray[jg.bCf("i", (int)26754, (long)(0x49383BB5AFA84228L ^ l2))] = EntityType.TEXT_DISPLAY;
        entityTypeArray[jg.bCf("i", (int)30494, (long)(0x7A05E1D44D6ADDB6L ^ l2))] = EntityType.FISHING_BOBBER;
        entityTypeArray[jg.bCf("i", (int)16810, (long)(0x1A7FE9EC5906B1CL ^ l2))] = EntityType.LLAMA_SPIT;
        entityTypeArray[jg.bCf("i", (int)9548, (long)(0x7F2221B9C3CF0FFEL ^ l2))] = EntityType.WITHER_SKULL;
        entityTypeArray[jg.bCf("i", (int)31941, (long)(0x5BC64F1009355679L ^ l2))] = EntityType.FIREWORK_ROCKET;
        entityTypeArray[jg.bCf("i", (int)20955, (long)(0x428750170A297B65L ^ l2))] = EntityType.SHULKER_BULLET;
        entityTypeArray[jg.bCf("i", (int)27411, (long)(0x41B47A0D459AC1A9L ^ l2))] = EntityType.SPECTRAL_ARROW;
        entityTypeArray[jg.bCf("i", (int)25631, (long)(0x5186BA5E2D0CEA6L ^ l2))] = EntityType.ARROW;
        entityTypeArray[jg.bCf("i", (int)26487, (long)(0x127EAA4AD354DDBL ^ l2))] = EntityType.EYE_OF_ENDER;
        entityTypeArray[jg.bCf("i", (int)7506, (long)(0x703C9BB97AA837E2L ^ l2))] = EntityType.EXPERIENCE_ORB;
        entityTypeArray[jg.bCf("i", (int)31896, (long)(0x7477598E93525637L ^ l2))] = EntityType.EXPERIENCE_BOTTLE;
        entityTypeArray[jg.bCf("i", (int)18380, (long)(0x784F2EE258C76D78L ^ l2))] = EntityType.EVOKER_FANGS;
        entityTypeArray[jg.bCf("i", (int)32304, (long)(0x663E2568EE215488L ^ l2))] = EntityType.FIREBALL;
        entityTypeArray[jg.bCf("i", (int)11356, (long)(0x6C830121A14B86EFL ^ l2))] = EntityType.SMALL_FIREBALL;
        entityTypeArray[jg.bCf("i", (int)23713, (long)(0x28096FF0A520760AL ^ l2))] = EntityType.DRAGON_FIREBALL;
        entityTypeArray[jg.bCf("i", (int)22966, (long)(0x257071E7889B731FL ^ l2))] = EntityType.ITEM_FRAME;
        entityTypeArray[jg.bCf("i", (int)22845, (long)(0x4003B554F6B07382L ^ l2))] = EntityType.GLOW_ITEM_FRAME;
        Set<EntityType> set2 = Set.of(entityTypeArray);
        set.removeAll(set2);
        return set;
    }

    public static Box bBA(Entity entity) {
        Vec3d vec3d = entity.getLerpedPos(rD.dlmvG.getRenderTickCounter().getTickProgress(true));
        return jg.bBB(entity, vec3d);
    }

    public static float bBv(LivingEntity livingEntity, float f2) {
        return f2 / livingEntity.getMaxHealth() * 100.0f;
    }

    public static Box bBz(Entity entity) {
        Vec3d vec3d = entity.getEntityPos();
        return new Box(vec3d.x - (double)(entity.getWidth() / 2.0f), vec3d.y, vec3d.z - (double)(entity.getWidth() / 2.0f), vec3d.x + (double)(entity.getWidth() / 2.0f), vec3d.y + (double)entity.getHeight(), vec3d.z + (double)(entity.getWidth() / 2.0f));
    }

    public static double bBH(Vec3d vec3d, Vec3d vec3d2) {
        return vec3d.distanceTo(vec3d2);
    }

    public static Set<EntityType<? extends Entity>> bBS() {
        long l2 = CcOBc ^ 0x159125EE7B08L;
        LinkedHashSet<EntityType<? extends Entity>> linkedHashSet = new LinkedHashSet<EntityType<? extends Entity>>();
        for (Field field : EntityType.class.getDeclaredFields()) {
            if (field.getType() != EntityType.class) continue;
            field.setAccessible(true);
            try {
                Object object = field.get(null);
                try {
                    if (!(object instanceof EntityType)) continue;
                    linkedHashSet.add((EntityType<? extends Entity>)((EntityType)object));
                }
                catch (IllegalAccessException illegalAccessException) {
                    throw jg.bCb(illegalAccessException);
                }
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        return linkedHashSet;
    }

    public static boolean bBQ(LivingEntity livingEntity) {
        boolean bl2;
        block40: {
            block41: {
                Hand hand;
                Hand hand2;
                boolean bl3;
                String[] stringArray;
                block42: {
                    Hand hand3;
                    block43: {
                        boolean bl4;
                        block44: {
                            boolean bl5;
                            block38: {
                                block39: {
                                    block36: {
                                        block37: {
                                            block34: {
                                                block35: {
                                                    long l2 = CcOBc ^ 0x4EC3FCD85C20L;
                                                    bl5 = livingEntity.getMainHandStack().isOf(Items.SHIELD);
                                                    stringArray = jf.bBe();
                                                    bl3 = livingEntity.getOffHandStack().isOf(Items.SHIELD);
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    bl2 = bl5;
                                                                    if (stringArray == null) break block34;
                                                                    if (bl2) break block35;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jg.bCb(matchException);
                                                                }
                                                                bl2 = bl3;
                                                                if (stringArray == null) break block34;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw jg.bCb(matchException);
                                                            }
                                                            if (bl2) break block35;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jg.bCb(matchException);
                                                        }
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jg.bCb(matchException);
                                                    }
                                                }
                                                bl2 = livingEntity.isBlocking();
                                            }
                                            try {
                                                try {
                                                    if (stringArray == null) break block36;
                                                    if (!bl2) break block37;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                return true;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                        }
                                        bl2 = livingEntity.isUsingItem();
                                    }
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (stringArray == null) break block38;
                                                    if (!bl2) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                bl2 = livingEntity.getActiveItem().isOf(Items.SHIELD);
                                                if (stringArray == null) break block38;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            if (!bl2) break block39;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                }
                                bl2 = livingEntity.isUsingItem();
                            }
                            try {
                                if (stringArray == null) break block40;
                                if (!bl2) break block41;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            hand3 = livingEntity.getActiveHand();
                            try {
                                try {
                                    try {
                                        hand2 = hand3;
                                        hand = Hand.MAIN_HAND;
                                        if (stringArray == null) break block42;
                                        if (hand2 != hand) break block43;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    bl4 = bl5;
                                    if (stringArray == null) break block44;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                if (!bl4) break block43;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl4 = true;
                        }
                        return bl4;
                    }
                    hand2 = hand3;
                    hand = Hand.OFF_HAND;
                }
                try {
                    try {
                        try {
                            if (hand2 != hand) break block41;
                            bl2 = bl3;
                            if (stringArray == null) break block40;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        if (!bl2) break block41;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    public static boolean bBq() {
        return rD.dlmvG.world.getPlayers().parallelStream().filter(abstractClientPlayerEntity -> {
            boolean bl2;
            long l2 = CcOBc ^ 0x6C149F7D9C0EL;
            try {
                bl2 = rD.dlmvG.player != abstractClientPlayerEntity;
            }
            catch (MatchException matchException) {
                throw jg.bCb(matchException);
            }
            return bl2;
        }).filter(abstractClientPlayerEntity -> {
            double d2;
            block2: {
                block3: {
                    long l2 = CcOBc ^ 0x425E81272986L;
                    String[] stringArray = jf.bBe();
                    try {
                        double d3 = abstractClientPlayerEntity.squaredDistanceTo((Entity)rD.dlmvG.player) - 36.0;
                        d2 = d3 == 0.0 ? (int)0 : (d3 < 0.0 ? (int)-1 : (int)1);
                        if (stringArray == null) break block2;
                        if (d2 >= 0) break block3;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    d2 = 1.0;
                    break block2;
                }
                d2 = 0.0;
            }
            return (boolean)d2;
        }).anyMatch(LivingEntity::isDead);
    }

    public static boolean bBC(Entity entity) {
        int n2;
        block13: {
            Entity entity2;
            String[] stringArray;
            Entity entity3;
            long l2;
            block11: {
                block12: {
                    l2 = CcOBc ^ 0x10478013F6F8L;
                    entity3 = rD.dlmvG.getCameraEntity();
                    stringArray = jf.bBe();
                    try {
                        try {
                            entity2 = entity3;
                            if (stringArray == null) break block11;
                            if (entity2 != null) break block12;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                entity2 = entity;
            }
            Box box = entity2.getBoundingBox();
            Vec3d vec3d = entity3.getEyePos();
            List<Vec3d> list = pf.cNi(vec3d, box, (int)jg.bCf("i", (int)491, (long)(0x7E104B483B225EB2L ^ l2)));
            for (Vec3d vec3d2 : list) {
                try {
                    double d2 = vec3d.squaredDistanceTo(vec3d2) - (double)1.0E-5f;
                    n2 = d2 == 0.0 ? (int)0 : (d2 < 0.0 ? (int)-1 : 1);
                    if (stringArray == null) break block13;
                    if (n2 < 0) {
                        continue;
                    }
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                RaycastContext raycastContext = new RaycastContext(vec3d, vec3d2, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, entity3);
                BlockHitResult blockHitResult = rD.dlmvG.world.raycast(raycastContext);
                try {
                    if (blockHitResult.getType() == HitResult.Type.MISS) {
                        return false;
                    }
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                if (stringArray != null) continue;
            }
            n2 = 1;
        }
        return n2 != 0;
    }

    public static GameMode bBw(PlayerEntity playerEntity) {
        PlayerListEntry playerListEntry;
        block10: {
            PlayerListEntry playerListEntry2;
            block11: {
                ClientPlayNetworkHandler clientPlayNetworkHandler;
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = CcOBc ^ 0x401DCBDC5A30L;
                        stringArray = jf.bBe();
                        try {
                            try {
                                clientPlayNetworkHandler = rD.dlmvG.getNetworkHandler();
                                if (stringArray == null) break block8;
                                if (clientPlayNetworkHandler != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    clientPlayNetworkHandler = rD.dlmvG.getNetworkHandler();
                }
                playerListEntry2 = clientPlayNetworkHandler.getPlayerListEntry(playerEntity.getUuid());
                try {
                    try {
                        playerListEntry = playerListEntry2;
                        if (stringArray == null) break block10;
                        if (playerListEntry != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            playerListEntry = playerListEntry2;
        }
        return playerListEntry.getGameMode();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static double bBy(Entity entity) {
        long l2 = CcOBc ^ 0x19F668431784L;
        World world = entity.getEntityWorld();
        BlockPos blockPos = entity.getBlockPos();
        String[] stringArray = jf.bBe();
        for (int i2 = blockPos.getY(); i2 >= world.getBottomY(); --i2) {
            boolean bl2;
            BlockPos blockPos2;
            block27: {
                BlockState blockState;
                block28: {
                    block26: {
                        Block block;
                        block25: {
                            block24: {
                                block23: {
                                    blockPos2 = new BlockPos(blockPos.getX(), i2, blockPos.getZ());
                                    blockState = world.getBlockState(blockPos2);
                                    block = blockState.getBlock();
                                    try {
                                        try {
                                            bl2 = block.equals(Blocks.WATER);
                                            if (stringArray == null) break block23;
                                            if (bl2) return -1.0;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                        bl2 = block.equals(Blocks.LAVA);
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (stringArray == null) break block24;
                                        if (bl2) return -1.0;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    bl2 = block.equals(Blocks.SLIME_BLOCK);
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                            }
                            try {
                                try {
                                    if (stringArray == null) break block25;
                                    if (bl2) return -1.0;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                bl2 = block.equals(Blocks.HONEY_BLOCK);
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block26;
                                if (bl2) return -1.0;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl2 = block.equals(Blocks.COBWEB);
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block27;
                            if (!bl2) break block28;
                            return -1.0;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                bl2 = blockState.getCollisionShape((BlockView)world, blockPos2).isEmpty();
            }
            try {
                if (bl2) continue;
                return entity.getY() - (double)blockPos2.getY() - 1.0;
            }
            catch (MatchException matchException) {
                throw jg.bCb(matchException);
            }
        }
        return -1.0;
    }

    public static Box bBB(Entity entity, Vec3d vec3d) {
        return new Box(vec3d.x - (double)(entity.getWidth() / 2.0f), vec3d.y, vec3d.z - (double)(entity.getWidth() / 2.0f), vec3d.x + (double)(entity.getWidth() / 2.0f), vec3d.y + (double)entity.getHeight(), vec3d.z + (double)(entity.getWidth() / 2.0f));
    }

    public static boolean bBD(PlayerEntity playerEntity) {
        boolean bl2;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l2 = CcOBc ^ 0x4BB63BDD1F87L;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    bl2 = playerEntity.getEquippedStack(EquipmentSlot.FEET).isEmpty();
                                    if (stringArray == null) break block14;
                                    if (!bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                                bl2 = playerEntity.getEquippedStack(EquipmentSlot.LEGS).isEmpty();
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (!bl2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            bl2 = playerEntity.getEquippedStack(EquipmentSlot.CHEST).isEmpty();
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (!bl2) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                        bl2 = playerEntity.getEquippedStack(EquipmentSlot.HEAD).isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (!bl2) break block15;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                bl2 = true;
                break block18;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static String bBO(float f2) {
        float f3;
        block2: {
            float f4;
            long l2;
            block3: {
                l2 = CcOBc ^ 0x381761DCEEF2L;
                f4 = (f2 + 180.0f) % 360.0f;
                String[] stringArray = jf.bBe();
                try {
                    float f5 = f4 - 0.0f;
                    f3 = f5 == 0.0f ? (int)0 : (f5 < 0.0f ? (int)-1 : 1);
                    if (stringArray == null) break block2;
                    if (f3 >= 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                f4 += 360.0f;
            }
            f3 = (int)Math.floor((f4 + 22.5f) / 45.0f) & jg.bCf("i", (int)22629, (long)(0x4D367CDAFB279F2DL ^ l2));
        }
        float f6 = f3;
        return okfwP[f6];
    }

    public static boolean bBs(LivingEntity livingEntity) {
        int n2;
        block11: {
            long l2 = CcOBc ^ 0x76B66E7CD193L;
            Box box = livingEntity.getBoundingBox();
            BlockPos.Mutable mutable = new BlockPos.Mutable();
            String[] stringArray = jf.bBe();
            int n3 = MathHelper.floor((double)box.minX);
            block6: while (true) {
                int n4 = n3;
                block7: while (n4 <= MathHelper.floor((double)box.maxX)) {
                    n2 = MathHelper.floor((double)box.minY);
                    if (stringArray == null) break block11;
                    int n5 = n2;
                    block8: while (true) {
                        int n6 = n5;
                        block9: while (n6 <= MathHelper.floor((double)box.maxY)) {
                            n4 = MathHelper.floor((double)box.minZ);
                            if (stringArray == null) continue block7;
                            int n7 = n4;
                            while (n7 <= MathHelper.floor((double)box.maxZ)) {
                                block12: {
                                    block13: {
                                        boolean bl2;
                                        block14: {
                                            try {
                                                mutable.set(n3, n5, n7);
                                                if (stringArray == null) break block12;
                                                n6 = box.contains((BlockPos)mutable) ? 1 : 0;
                                                if (stringArray == null) continue block9;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            try {
                                                try {
                                                    if (n6 == 0) break block13;
                                                    bl2 = livingEntity.getEntityWorld().getBlockState((BlockPos)mutable).isOf(Blocks.COBWEB);
                                                    if (stringArray == null) break block14;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jg.bCb(matchException);
                                                }
                                                if (!bl2) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            bl2 = true;
                                        }
                                        return bl2;
                                    }
                                    ++n7;
                                }
                                if (stringArray != null) continue;
                            }
                            ++n5;
                            if (stringArray != null) continue block8;
                        }
                        break;
                    }
                    ++n3;
                    if (stringArray != null) continue block6;
                }
                break;
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public static boolean bBV() {
        int n2;
        block22: {
            block23: {
                String[] stringArray;
                long l2;
                block20: {
                    block21: {
                        block18: {
                            block19: {
                                ClientPlayerEntity clientPlayerEntity;
                                block16: {
                                    block17: {
                                        l2 = CcOBc ^ 0x62BB89257B9EL;
                                        stringArray = jf.bBe();
                                        try {
                                            try {
                                                clientPlayerEntity = rD.dlmvG.player;
                                                if (stringArray == null) break block16;
                                                if (clientPlayerEntity.getVehicle() == null) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw jg.bCb(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw jg.bCb(matchException);
                                        }
                                    }
                                    clientPlayerEntity = rD.dlmvG.player;
                                }
                                try {
                                    try {
                                        n2 = clientPlayerEntity.isTouchingWater();
                                        if (stringArray == null) break block18;
                                        if (n2 == 0) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw jg.bCb(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw jg.bCb(matchException);
                                }
                            }
                            n2 = rD.dlmvG.player.getAbilities().creativeMode;
                        }
                        try {
                            try {
                                if (stringArray == null) break block20;
                                if (n2 == 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw jg.bCb(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw jg.bCb(matchException);
                        }
                    }
                    n2 = rD.dlmvG.player.getHungerManager().getFoodLevel();
                }
                try {
                    try {
                        if (stringArray == null) break block22;
                        if (n2 < jg.bCf("i", (int)20644, (long)(0x51D7598F5DCD028AL ^ l2))) break block23;
                    }
                    catch (MatchException matchException) {
                        throw jg.bCb(matchException);
                    }
                    n2 = 1;
                    break block22;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    public static boolean bBF(Vec3d vec3d) {
        double d2;
        block2: {
            block3: {
                long l2 = CcOBc ^ 0x52A6E1C9FD26L;
                String[] stringArray = jf.bBe();
                try {
                    double d3 = jg.bBH(rD.dlmvG.player.getEyePos(), vec3d) - rD.dlmvG.player.getBlockInteractionRange();
                    d2 = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                    if (stringArray == null) break block2;
                    if (d2 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                d2 = 1.0;
                break block2;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    public static boolean bBt(LivingEntity livingEntity, float f2) {
        float f3;
        block2: {
            block3: {
                long l2 = CcOBc ^ 0x104DAD686C57L;
                String[] stringArray = jf.bBe();
                try {
                    float f4 = livingEntity.getHealth() - f2 - 0.0f;
                    f3 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                    if (stringArray == null) break block2;
                    if (f3 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jg.bCb(matchException);
                }
                f3 = 1.0f;
                break block2;
            }
            f3 = 0.0f;
        }
        return (boolean)f3;
    }

    public static boolean bBN(LivingEntity livingEntity, double d2) {
        Box box = rD.dlmvG.player.getBoundingBox().expand(d2, 0.0, d2);
        return livingEntity.getBoundingBox().intersects(box);
    }

    public static void bBY(int n2) {
        aIWFT = n2;
    }

    public static Set<EntityType<? extends Entity>> bBT() {
        long l2 = CcOBc ^ 0x104C128FE47BL;
        LinkedHashSet<EntityType<? extends Entity>> linkedHashSet = new LinkedHashSet<EntityType<? extends Entity>>();
        for (Field field : EntityType.class.getDeclaredFields()) {
            if (field.getType() != EntityType.class) continue;
            field.setAccessible(true);
            try {
                Type type;
                ParameterizedType parameterizedType;
                Type[] typeArray;
                Type type2;
                Object object = field.get(null);
                if (!(object instanceof EntityType) || !((type2 = field.getGenericType()) instanceof ParameterizedType) || (typeArray = (parameterizedType = (ParameterizedType)type2).getActualTypeArguments()).length != 1 || !((type = typeArray[0]) instanceof Class)) continue;
                Class clazz = (Class)type;
                try {
                    if (!LivingEntity.class.isAssignableFrom(clazz)) continue;
                    linkedHashSet.add((EntityType<? extends Entity>)((EntityType)object));
                }
                catch (IllegalAccessException illegalAccessException) {
                    throw jg.bCb(illegalAccessException);
                }
            }
            catch (IllegalAccessException illegalAccessException) {
                // empty catch block
            }
        }
        linkedHashSet.remove(EntityType.ARMOR_STAND);
        return linkedHashSet;
    }

    public static float bBu(float f2) {
        return f2 / rD.dlmvG.player.getMaxHealth() * 100.0f;
    }

    private static String bCc(byte[] byArray) {
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

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jg.class, "bCe", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

