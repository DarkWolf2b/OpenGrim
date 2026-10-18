/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Items
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket
 *  net.minecraft.world.World
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
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.world.World;
import sixtwo.cJ;
import sixtwo.gL;
import sixtwo.gb;
import sixtwo.mr;
import sixtwo.pB;
import sixtwo.pB$vz;
import sixtwo.pM;
import sixtwo.pq;
import sixtwo.rD;

public class pl
extends pB {
    static Map<UUID, Integer> HFuhg;
    private final cJ SyMsX;
    private static final long crCnC;
    private static final String[] jhrGn;
    private static final String[] rzDYw;
    private static final Map HVLJi;
    private static final long[] PYqlv;
    private static final Integer[] YHnsS;
    private static final Map uFXMW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pl() {
        long l2 = crCnC ^ 0x3BFF47ABA113L;
        super((String)((Object)pl.cNV("k", (int)15304, (long)(0x678EA30E8EF49074L ^ l2))), (String)((Object)pl.cNV("k", (int)20093, (long)(0x54F43D2FAD9BE5C0L ^ l2))));
        int[] nArray = new int[pl.cNY("m", (int)10811, (long)(0x39317102D712521BL ^ l2))];
        nArray[0] = (int)pl.cNY("m", (int)30440, (long)(0x4B529E51DE990EC3L ^ l2));
        nArray[1] = (int)pl.cNY("m", (int)5252, (long)(0x5308532F3830ECBBL ^ l2));
        nArray[2] = (int)pl.cNY("m", (int)24143, (long)(0x67DF22DA5C2AA665L ^ l2));
        nArray[3] = (int)pl.cNY("m", (int)5142, (long)(0x21BB303D20C7EC35L ^ l2));
        nArray[4] = (int)pl.cNY("m", (int)25954, (long)(0x770FE13EB2381D4CL ^ l2));
        nArray[5] = (int)pl.cNY("m", (int)11685, (long)(0x6B26F3BC0F66559BL ^ l2));
        nArray[pl.cNY("m", (int)26539, (long)(0x627E62A631409F97L ^ l2))] = (int)pl.cNY("m", (int)27767, (long)(0x2800015B86BE9451L ^ l2));
        nArray[pl.cNY("m", (int)24460, (long)(0x660DF8D926E127ABL ^ l2))] = (int)pl.cNY("m", (int)17597, (long)(0x60E089C4F49A3C98L ^ l2));
        nArray[pl.cNY("m", (int)20835, (long)(0x20C9F0D466BF294CL ^ l2))] = (int)pl.cNY("m", (int)32197, (long)(0x722260E76D6405E9L ^ l2));
        nArray[pl.cNY("m", (int)10679, (long)(0x7C0BD2080F33519AL ^ l2))] = (int)pl.cNY("m", (int)13979, (long)(0x9A167262F064EB3L ^ l2));
        nArray[pl.cNY("m", (int)28465, (long)(0x26F5123599551713L ^ l2))] = (int)pl.cNY("m", (int)1993, (long)(0x55F1632C73CB7FE0L ^ l2));
        nArray[pl.cNY("m", (int)11043, (long)(0x5AFB8BC58BB15302L ^ l2))] = (int)pl.cNY("m", (int)23373, (long)(0x7FB74AC4D2A1A369L ^ l2));
        this.SyMsX = new cJ(this, mr.clS(nArray)).WE(true);
        this.position(pM.ODjfB);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    pl.crCnC = gb.aYR(-3892106226960719213L, 9009668015465966453L, MethodHandles.lookup().lookupClass()).a(170534345023847L);
                    pl.HVLJi = new HashMap<K, V>(13);
                    var11 = pl.crCnC ^ 122990484646042L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u00f1H\u00ccl\fG\u0015\u00dcc\u0082GJYt\u00d9\u00f7\u008cu\u0099,\u00d3\u009f\u0003\u00bb\u0018\u0088B\u00dei\u0007\u0099U\u0086!\u008e\u00f9\u00cfj\u008f9\u00f8\u0098\u0082\u00ab}\u00b6\u00ef\u0090\u001f";
                    var19_6 = "\u00f1H\u00ccl\fG\u0015\u00dcc\u0082GJYt\u00d9\u00f7\u008cu\u0099,\u00d3\u009f\u0003\u00bb\u0018\u0088B\u00dei\u0007\u0099U\u0086!\u008e\u00f9\u00cfj\u008f9\u00f8\u0098\u0082\u00ab}\u00b6\u00ef\u0090\u001f".length();
                    var16_7 = 24;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = pl.cNS(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                pl.jhrGn = var20_3;
                pl.rzDYw = new String[2];
                pl.uFXMW = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[20];
                var3_13 = 0;
                var4_14 = "\u00ef\u0003\u00b4\u00f7\u0004\f\u0017\u00eb\u00dc(oAd \u00dac\u00f9\u00cez|\u0011\u00c6<\u00f5\u00e7\u00ba\u000f\u0000\u008f$\u0010\u0015\tTZ\u00b7\u0018\u00e6\u0007\u0088\u00ad?\u0085&\u00b8W=g=\u009c\u00faR`\u00b9ir:\f\u0095\u007f\u00af\u00fb\u00d2\u00fdP\u00b2,\u00dch\u00e3g\b\u0016\u00c0\u00ddo-\u008d;\u0006\u00fdFu\u00d2O\u00ec\u0093U\u00a4=\u0014\u00f6\u0003\u00e8\u00e3\u00d2\u0017*\u00ab\u0085\u001d\u0013[\u0085n\\\u00e1\u00b4\u008fBO\u0003\u00ed\u00f9\u008dI\u0006C8\u009a\u0010|\u00fe\u0099~\u00fa\u00da`j*\u00d6\u0095#\u00ec\u00d3kG\u001d\u009a\u00ce\u0085\u0091\u00e4%";
                var5_15 = "\u00ef\u0003\u00b4\u00f7\u0004\f\u0017\u00eb\u00dc(oAd \u00dac\u00f9\u00cez|\u0011\u00c6<\u00f5\u00e7\u00ba\u000f\u0000\u008f$\u0010\u0015\tTZ\u00b7\u0018\u00e6\u0007\u0088\u00ad?\u0085&\u00b8W=g=\u009c\u00faR`\u00b9ir:\f\u0095\u007f\u00af\u00fb\u00d2\u00fdP\u00b2,\u00dch\u00e3g\b\u0016\u00c0\u00ddo-\u008d;\u0006\u00fdFu\u00d2O\u00ec\u0093U\u00a4=\u0014\u00f6\u0003\u00e8\u00e3\u00d2\u0017*\u00ab\u0085\u001d\u0013[\u0085n\\\u00e1\u00b4\u008fBO\u0003\u00ed\u00f9\u008dI\u0006C8\u009a\u0010|\u00fe\u0099~\u00fa\u00da`j*\u00d6\u0095#\u00ec\u00d3kG\u001d\u009a\u00ce\u0085\u0091\u00e4%".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u0093J\u009c\u00cc!\u00b7\u00821\u0000\u00c3H\u0095e\u0013\r\u0093";
                    var5_15 = "\u0093J\u009c\u00cc!\u00b7\u00821\u0000\u00c3H\u0095e\u0013\r\u0093".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        pl.PYqlv = var6_12;
        pl.YHnsS = new Integer[20];
        pl.HFuhg = new HashMap<UUID, Integer>();
    }

    @Override
    protected List<pB$vz> cNI(Entity entity, boolean bl2) {
        long l2 = crCnC ^ 0x4470AE8E2F88L;
        int n2 = this.cNP(entity, bl2);
        try {
            if (n2 < 0) {
                return List.of();
            }
        }
        catch (MatchException matchException) {
            throw pl.cNR(matchException);
        }
        return List.of(new pB$vz(Items.TOTEM_OF_UNDYING.getDefaultStack(), this.cNQ(n2)));
    }

    public static void cNM(PlayerEntity playerEntity) {
        block4: {
            long l2 = crCnC ^ 0x24CFC98A5549L;
            String string = pq.cOM();
            try {
                Object object;
                try {
                    object = playerEntity;
                    if (string != null || object == null) break block4;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
                object = HFuhg.remove(playerEntity.getUuid());
            }
            catch (MatchException matchException) {
                throw pl.cNR(matchException);
            }
        }
    }

    private static String cNS(byte[] byArray) {
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

    private String cNQ(int n2) {
        return Integer.toString(Math.max(0, n2));
    }

    public static void cNL(Entity entity) {
        block5: {
            Entity entity2;
            block4: {
                long l2 = crCnC ^ 0x73C9AAF6292L;
                String string = pq.cOM();
                try {
                    try {
                        entity2 = entity;
                        if (string != null) break block4;
                        if (!(entity2 instanceof PlayerEntity)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                    entity2 = entity;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
            }
            PlayerEntity playerEntity = (PlayerEntity)entity2;
            pl.cNM(playerEntity);
        }
    }

    private static Object cNU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = pl.cNT(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private int cNP(Entity entity, boolean bl2) {
        int n2;
        int n3;
        block18: {
            String string;
            block17: {
                int n4;
                block15: {
                    block16: {
                        long l2 = crCnC ^ 0x214804048C21L;
                        string = pq.cOM();
                        try {
                            try {
                                n4 = bl2;
                                if (string != null) break block15;
                                if (n4 == 0) break block16;
                                return 2;
                            }
                            catch (MatchException matchException) {
                                throw pl.cNR(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw pl.cNR(matchException);
                        }
                    }
                    n4 = entity instanceof PlayerEntity;
                }
                try {
                    if (string != null) return n4;
                    if (n4 == 0) return -1;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
                PlayerEntity playerEntity = (PlayerEntity)entity;
                try {
                    if (string != null) {
                        return -1;
                    }
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
                n3 = pl.cNO(playerEntity);
                try {
                    try {
                        n2 = n3;
                        if (string != null) break block17;
                        if (n2 > 0) break block18;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                    n2 = this.SyMsX.WF() ? 1 : 0;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
            }
            try {
                if (string != null) return n2;
                if (n2 == 0) break block18;
                return -1;
            }
            catch (MatchException matchException) {
                throw pl.cNR(matchException);
            }
        }
        n2 = n3;
        return n2;
    }

    private static int cNO(PlayerEntity playerEntity) {
        return HFuhg.getOrDefault(playerEntity.getUuid(), 0);
    }

    private static MatchException cNR(MatchException matchException) {
        return matchException;
    }

    private static int cNW(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7D80;
        if (YHnsS[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = PYqlv[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uFXMW.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uFXMW.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pl", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pl.YHnsS[n3] = n4;
        }
        return YHnsS[n3];
    }

    private static CallSite cNY(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite cNV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cNT(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2E12;
        if (rzDYw[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])HVLJi.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HVLJi.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pl", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = jhrGn[n3].getBytes("ISO-8859-1");
            pl.rzDYw[n3] = pl.cNS(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return rzDYw[n3];
    }

    private static int cNX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = pl.cNW(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static void cNJ(gL.tk tk2) {
        Object object;
        byte by2;
        PlayerEntity playerEntity;
        block29: {
            Entity entity;
            EntityStatusS2CPacket entityStatusS2CPacket;
            String string;
            long l2;
            block28: {
                Packet<?> packet;
                block27: {
                    block26: {
                        l2 = crCnC ^ 0x179E6F7FBD4DL;
                        string = pq.cOM();
                        try {
                            try {
                                if (tk2 != null && rD.dlmvG.world != null) break block26;
                                return;
                            }
                            catch (MatchException matchException) {
                                throw pl.cNR(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw pl.cNR(matchException);
                        }
                    }
                    Packet<?> packet2 = tk2.bcf();
                    try {
                        try {
                            packet = packet2;
                            if (string != null) break block27;
                            if (!(packet instanceof EntityStatusS2CPacket)) return;
                        }
                        catch (MatchException matchException) {
                            throw pl.cNR(matchException);
                        }
                        packet = packet2;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                }
                entityStatusS2CPacket = (EntityStatusS2CPacket)packet;
                try {
                    if (string != null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
                Entity entity2 = entityStatusS2CPacket.getEntity((World)rD.dlmvG.world);
                try {
                    try {
                        entity = entity2;
                        if (string != null) break block28;
                        if (!(entity instanceof PlayerEntity)) return;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
            }
            playerEntity = (PlayerEntity)entity;
            try {
                if (string != null) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw pl.cNR(matchException);
            }
            byte by3 = entityStatusS2CPacket.getStatus();
            try {
                block30: {
                    try {
                        try {
                            by2 = by3;
                            object = pl.cNY("m", (int)13172, (long)(0x62E73DA64428D717L ^ l2));
                            if (string != null) break block29;
                            if (by2 != object) break block30;
                        }
                        catch (MatchException matchException) {
                            throw pl.cNR(matchException);
                        }
                        HFuhg.merge(playerEntity.getUuid(), 1, Integer::sum);
                        if (string == null) return;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                }
                by2 = by3;
                object = 3;
            }
            catch (MatchException matchException) {
                throw pl.cNR(matchException);
            }
        }
        try {
            if (by2 != object) return;
            pl.cNM(playerEntity);
            return;
        }
        catch (MatchException matchException) {
            throw pl.cNR(matchException);
        }
    }

    public static void cNN() {
        HFuhg.clear();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean cNK(PlayerEntity playerEntity) {
        block15: {
            PlayerEntity playerEntity2;
            String string;
            block14: {
                long l2 = crCnC ^ 0x65D3AA1ABE66L;
                string = pq.cOM();
                try {
                    playerEntity2 = playerEntity;
                    if (string != null) break block14;
                    if (playerEntity2 == null) return false;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
                playerEntity2 = playerEntity;
            }
            try {
                try {
                    int n2;
                    try {
                        try {
                            try {
                                try {
                                    n2 = playerEntity2.isAlive();
                                    if (string != null) return n2 != 0;
                                    if (n2 == 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw pl.cNR(matchException);
                                }
                                float f2 = playerEntity.getHealth() - 0.0f;
                                n2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                                if (string != null) return n2 != 0;
                            }
                            catch (MatchException matchException) {
                                throw pl.cNR(matchException);
                            }
                            if (n2 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw pl.cNR(matchException);
                        }
                        n2 = playerEntity.deathTime;
                        if (string != null) return n2 != 0;
                    }
                    catch (MatchException matchException) {
                        throw pl.cNR(matchException);
                    }
                    if (n2 > 0) break block15;
                    return false;
                }
                catch (MatchException matchException) {
                    throw pl.cNR(matchException);
                }
            }
            catch (MatchException matchException) {
                throw pl.cNR(matchException);
            }
        }
        pl.cNM(playerEntity);
        return 1 != 0;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pl.class, "cNX", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(pl.class, "cNU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

