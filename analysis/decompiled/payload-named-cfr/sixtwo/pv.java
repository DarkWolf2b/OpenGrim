/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.entity.projectile.thrown.EnderPearlEntity
 *  net.minecraft.item.Item
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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.item.Item;
import net.minecraft.item.Items;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.world.World;
import sixtwo.gL;
import sixtwo.gb;
import sixtwo.pB;
import sixtwo.pB$vz;
import sixtwo.pM;
import sixtwo.pv$vx;
import sixtwo.rD;

public class pv
extends pB {
    static Map<UUID, List<pv$vx>> ulHnJ;
    static Set<Integer> UDUQa;
    private static String lzgfS;
    private static final long ILcIQ;
    private static final String[] ldfzw;
    private static final String[] LSPqb;
    private static final Map HfBgG;
    private static final long eADIq;
    private static final long[] TMVjy;
    private static final Long[] GXKJH;
    private static final Map JYwOo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pv() {
        long l2 = ILcIQ ^ 0x2743AAF1B34BL;
        super((String)((Object)pv.cPW("g", (int)15351, (long)(0x335C12D99590BA19L ^ l2))), (String)((Object)pv.cPW("g", (int)21364, (long)(0x48679394EAB6D299L ^ l2))));
        this.position(pM.gvTMb);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block18: {
            block17: {
                block19: {
                    block16: {
                        block15: {
                            pv.ILcIQ = gb.aYR(2862271683564752160L, -6939398280777294265L, MethodHandles.lookup().lookupClass()).a(59230611963832L);
                            pv.HfBgG = new HashMap<K, V>(13);
                            var16 = pv.ILcIQ ^ 13262211686181L;
                            pv.cPQ(null);
                            var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                            v0 = SecretKeyFactory.getInstance("DES");
                            v1 = new byte[8];
                            v2 = v1;
                            v1[0] = (byte)(var16 >>> 56);
                            for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                                v2 = v2;
                                v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                            }
                            var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                            var25_3 = new String[4];
                            var23_4 = 0;
                            var22_5 = "\u0091\u00d7\u00ab\u0010?p\u0095=\u001c\u00d3\\L\u00a6\u0084B\u00fa<\\:lD\u00ff\u00b0X\u0010\u00a3\u00c7\u00d6\u009eHz\u0007`\u00ec?$$\u00f8d?\u00d6";
                            var24_6 = "\u0091\u00d7\u00ab\u0010?p\u0095=\u001c\u00d3\\L\u00a6\u0084B\u00fa<\\:lD\u00ff\u00b0X\u0010\u00a3\u00c7\u00d6\u009eHz\u0007`\u00ec?$$\u00f8d?\u00d6".length();
                            var21_7 = 24;
                            var20_8 = -1;
lbl21:
                            // 2 sources

                            while (true) {
                                v3 = ++var20_8;
                                v4 = var22_5.substring(v3, v3 + var21_7);
                                v5 = -1;
                                break block15;
                                break;
                            }
lbl26:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = pv.cPT(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                var22_5 = "\u00bf\u00a5\u00e9\u008aOg\u00da\u00f3\u0015\u00abv\u00aa\u00bf\u00e7\u00c9b \u0080\n\u00c2\u00f8j\u00d4\u00d8d\u00ee'\u0091bE\u00ea>\u0081\u00c9\u0017N\u0097\u00b8{q6Cs=\u0018\u00aa\u00ab]?";
                                var24_6 = "\u00bf\u00a5\u00e9\u008aOg\u00da\u00f3\u0015\u00abv\u00aa\u00bf\u00e7\u00c9b \u0080\n\u00c2\u00f8j\u00d4\u00d8d\u00ee'\u0091bE\u00ea>\u0081\u00c9\u0017N\u0097\u00b8{q6Cs=\u0018\u00aa\u00ab]?".length();
                                var21_7 = 16;
                                var20_8 = -1;
lbl35:
                                // 2 sources

                                while (true) {
                                    v6 = ++var20_8;
                                    v4 = var22_5.substring(v6, v6 + var21_7);
                                    v5 = 0;
                                    break block15;
                                    break;
                                }
                                break;
                            }
lbl40:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = pv.cPT(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                break block16;
                                break;
                            }
                        }
                        var26_9 = var18_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                    pv.ldfzw = var25_3;
                    pv.LSPqb = new String[4];
                    var11_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v7 = SecretKeyFactory.getInstance("DES");
                    v8 = new byte[8];
                    v9 = v8;
                    v8[0] = (byte)(var16 >>> 56);
                    for (var12_11 = 1; var12_11 < 8; ++var12_11) {
                        v9 = v9;
                        v9[var12_11] = (byte)(var16 << var12_11 * 8 >>> 56);
                    }
                    break block19;
lbl66:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var11_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var13_12 = -6135447453576717152L;
                var15_13 = var11_10.doFinal(new byte[]{(byte)(var13_12 >>> 56), (byte)(var13_12 >>> 48), (byte)(var13_12 >>> 40), (byte)(var13_12 >>> 32), (byte)(var13_12 >>> 24), (byte)(var13_12 >>> 16), (byte)(var13_12 >>> 8), (byte)var13_12});
                ** while (true)
                pv.eADIq = ((long)var15_13[0] & 255L) << 56 | ((long)var15_13[1] & 255L) << 48 | ((long)var15_13[2] & 255L) << 40 | ((long)var15_13[3] & 255L) << 32 | ((long)var15_13[4] & 255L) << 24 | ((long)var15_13[5] & 255L) << 16 | ((long)var15_13[6] & 255L) << 8 | (long)var15_13[7] & 255L;
                pv.JYwOo = new HashMap<K, V>(13);
                var0_14 = Cipher.getInstance("DES/CBC/NoPadding");
                v10 = SecretKeyFactory.getInstance("DES");
                v11 = new byte[8];
                v12 = v11;
                v11[0] = (byte)(var16 >>> 56);
                for (var1_15 = 1; var1_15 < 8; ++var1_15) {
                    v12 = v12;
                    v12[var1_15] = (byte)(var16 << var1_15 * 8 >>> 56);
                }
                var0_14.init(2, (Key)v10.generateSecret(new DESKeySpec(v12)), new IvParameterSpec(new byte[8]));
                var6_16 = new long[2];
                var3_17 = 0;
                var4_18 = "\u0015=q\u00ba\u00f5\u00bc\u007f\u00eaM\u0083@0l\u0017>n";
                var5_19 = "\u0015=q\u00ba\u00f5\u00bc\u007f\u00eaM\u0083@0l\u0017>n".length();
                var2_20 = 0;
                while (true) {
                    break block17;
                    break;
                }
lbl95:
                // 1 sources

                while (true) {
                    var6_16[v13] = ((long)var10_23[0] & 255L) << 56 | ((long)var10_23[1] & 255L) << 48 | ((long)var10_23[2] & 255L) << 40 | ((long)var10_23[3] & 255L) << 32 | ((long)var10_23[4] & 255L) << 24 | ((long)var10_23[5] & 255L) << 16 | ((long)var10_23[6] & 255L) << 8 | (long)var10_23[7] & 255L;
                    if (var2_20 < var5_19) ** continue;
                    break block18;
                    break;
                }
            }
            var7_21 = var4_18.substring(var2_20, var2_20 += 8).getBytes("ISO-8859-1");
            v13 = var3_17++;
            var8_22 = ((long)var7_21[0] & 255L) << 56 | ((long)var7_21[1] & 255L) << 48 | ((long)var7_21[2] & 255L) << 40 | ((long)var7_21[3] & 255L) << 32 | ((long)var7_21[4] & 255L) << 24 | ((long)var7_21[5] & 255L) << 16 | ((long)var7_21[6] & 255L) << 8 | (long)var7_21[7] & 255L;
            var10_23 = var0_14.doFinal(new byte[]{(byte)(var8_22 >>> 56), (byte)(var8_22 >>> 48), (byte)(var8_22 >>> 40), (byte)(var8_22 >>> 32), (byte)(var8_22 >>> 24), (byte)(var8_22 >>> 16), (byte)(var8_22 >>> 8), (byte)var8_22});
            ** while (true)
        }
        pv.TMVjy = var6_16;
        pv.GXKJH = new Long[2];
        pv.ulHnJ = new HashMap<UUID, List<pv$vx>>();
        pv.UDUQa = new HashSet<Integer>();
    }

    public static String cPR() {
        return lzgfS;
    }

    private static void cPL(List<pv$vx> list) {
        list.removeIf(pv$vx -> {
            long l2;
            block2: {
                block3: {
                    long l3 = ILcIQ ^ 0x70EE7040020DL;
                    String string = pv.cPR();
                    try {
                        long l4 = pv$vx.remainingMillis() - 0L;
                        l2 = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                        if (string != null) break block2;
                        if (l2 > 0) break block3;
                    }
                    catch (MatchException matchException) {
                        throw pv.cPS(matchException);
                    }
                    l2 = 1;
                    break block2;
                }
                l2 = 0;
            }
            return (boolean)l2;
        });
    }

    private String cPM(long l2) {
        long l3 = ILcIQ ^ 0x5E052891F72EL;
        return String.format(Locale.US, (String)((Object)pv.cPW("g", (int)17225, (long)(0xDEB4303CBE986C0L ^ l3))), Float.valueOf((float)Math.max(0L, l2) / 1000.0f));
    }

    private static long cPY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = pv.cPX(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    protected List<pB$vz> cNI(Entity entity, boolean bl2) {
        ArrayList<pB$vz> arrayList;
        List<pv$vx> list;
        String string;
        block28: {
            List<pv$vx> list2;
            boolean bl3;
            PlayerEntity playerEntity;
            block26: {
                block27: {
                    List<pv$vx> list3;
                    block25: {
                        Entity entity2;
                        block24: {
                            boolean bl4;
                            block22: {
                                block23: {
                                    long l2 = ILcIQ ^ 0x60F5CD00774BL;
                                    string = pv.cPR();
                                    try {
                                        try {
                                            bl4 = bl2;
                                            if (string != null) break block22;
                                            if (!bl4) break block23;
                                            return List.of(new pB$vz(Items.TOTEM_OF_UNDYING.getDefaultStack(), (String)((Object)pv.cPW("g", (int)15457, (long)(0x7B50E6F1CEA7F98EL ^ l2)))));
                                        }
                                        catch (MatchException matchException) {
                                            throw pv.cPS(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw pv.cPS(matchException);
                                    }
                                }
                                try {
                                    entity2 = entity;
                                    if (string != null) break block24;
                                    bl4 = entity2 instanceof PlayerEntity;
                                }
                                catch (MatchException matchException) {
                                    throw pv.cPS(matchException);
                                }
                            }
                            if (!bl4) return List.of();
                            entity2 = entity;
                        }
                        playerEntity = (PlayerEntity)entity2;
                        try {
                            if (string != null) {
                                return List.of();
                            }
                        }
                        catch (MatchException matchException) {
                            throw pv.cPS(matchException);
                        }
                        list = ulHnJ.get(playerEntity.getUuid());
                        try {
                            try {
                                try {
                                    list3 = list;
                                    if (string != null) return list3;
                                    if (list3 == null) break block25;
                                }
                                catch (MatchException matchException) {
                                    throw pv.cPS(matchException);
                                }
                                bl3 = list.isEmpty();
                                if (string != null) break block26;
                            }
                            catch (MatchException matchException) {
                                throw pv.cPS(matchException);
                            }
                            if (!bl3) break block27;
                        }
                        catch (MatchException matchException) {
                            throw pv.cPS(matchException);
                        }
                    }
                    list3 = List.of();
                    return list3;
                }
                try {
                    pv.cPL(list);
                    list2 = list;
                    if (string != null) return list2;
                    bl3 = list2.isEmpty();
                }
                catch (MatchException matchException) {
                    throw pv.cPS(matchException);
                }
            }
            try {
                if (!bl3) break block28;
                ulHnJ.remove(playerEntity.getUuid());
                list2 = List.of();
                return list2;
            }
            catch (MatchException matchException) {
                throw pv.cPS(matchException);
            }
        }
        ArrayList<pB$vz> arrayList2 = new ArrayList<pB$vz>();
        for (pv$vx pv$vx : list) {
            try {
                arrayList = arrayList2;
                if (string != null) return arrayList;
                arrayList.add(new pB$vz(pv$vx.item().getDefaultStack(), this.cPM(pv$vx.remainingMillis())));
                if (string == null) continue;
                break;
            }
            catch (MatchException matchException) {
                throw pv.cPS(matchException);
            }
        }
        arrayList = arrayList2;
        return arrayList;
    }

    private static CallSite cPW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pv" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException cPS(MatchException matchException) {
        return matchException;
    }

    private static String cPT(byte[] byArray) {
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

    private static Object cPV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = pv.cPU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public static void cPQ(String string) {
        lzgfS = string;
    }

    private static CallSite cPZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pv" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static long cPX(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x419B;
        if (GXKJH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = TMVjy[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JYwOo.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JYwOo.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pv", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            pv.GXKJH[n3] = l5;
        }
        return GXKJH[n3];
    }

    private static void cPK(UUID uUID2, Item item, long l2) {
        List list = ulHnJ.computeIfAbsent(uUID2, uUID -> new ArrayList());
        list.removeIf(pv$vx -> {
            boolean bl2;
            long l2 = ILcIQ ^ 0x3422ADD8488FL;
            try {
                bl2 = pv$vx.item() == item;
            }
            catch (MatchException matchException) {
                throw pv.cPS(matchException);
            }
            return bl2;
        });
        list.add(new pv$vx(item, System.currentTimeMillis(), l2));
    }

    private static String cPU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4ED9;
        if (LSPqb[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])HfBgG.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HfBgG.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pv", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ldfzw[n3].getBytes("ISO-8859-1");
            pv.LSPqb[n3] = pv.cPT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return LSPqb[n3];
    }

    public static void cPJ() {
        ulHnJ.clear();
        UDUQa.clear();
    }

    public static void cPI() {
        block14: {
            boolean bl2;
            long l2 = ILcIQ ^ 0xB6CD4B31063L;
            String string = pv.cPR();
            try {
                if (rD.dlmvG.world == null) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw pv.cPS(matchException);
            }
            HashSet<Integer> hashSet = new HashSet<Integer>();
            for (Entity entity : rD.dlmvG.world.getEntities()) {
                block16: {
                    Entity entity2;
                    block13: {
                        try {
                            try {
                                entity2 = entity;
                                if (string != null) break block13;
                                bl2 = entity2 instanceof EnderPearlEntity;
                                if (string != null) break block14;
                            }
                            catch (MatchException matchException) {
                                throw pv.cPS(matchException);
                            }
                            if (!bl2) continue;
                        }
                        catch (MatchException matchException) {
                            throw pv.cPS(matchException);
                        }
                        entity2 = entity;
                    }
                    EnderPearlEntity enderPearlEntity = (EnderPearlEntity)entity2;
                    int n2 = enderPearlEntity.getId();
                    hashSet.add(n2);
                    if (UDUQa.add(n2)) {
                        Entity entity3;
                        block15: {
                            Entity entity4 = enderPearlEntity.getOwner();
                            try {
                                try {
                                    entity3 = entity4;
                                    if (string != null) break block15;
                                    if (!(entity3 instanceof PlayerEntity)) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw pv.cPS(matchException);
                                }
                                entity3 = entity4;
                            }
                            catch (MatchException matchException) {
                                throw pv.cPS(matchException);
                            }
                        }
                        PlayerEntity playerEntity = (PlayerEntity)entity3;
                        CallSite callSite = pv.cPZ("y", (int)21606, (long)(0x63BADB99C3D879E0L ^ l2));
                        pv.cPK(playerEntity.getUuid(), Items.ENDER_PEARL, (long)callSite);
                    }
                }
                if (string == null) continue;
            }
            bl2 = UDUQa.retainAll(hashSet);
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static void cPH(gL.tk tk2) {
        Entity entity;
        long l2;
        block20: {
            EntityStatusS2CPacket entityStatusS2CPacket;
            String string;
            block18: {
                EntityStatusS2CPacket entityStatusS2CPacket2;
                block19: {
                    Packet<?> packet;
                    block17: {
                        block16: {
                            l2 = ILcIQ ^ 0x99A4ADF1B0L;
                            string = pv.cPR();
                            try {
                                try {
                                    if (tk2 != null && rD.dlmvG.world != null) break block16;
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw pv.cPS(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw pv.cPS(matchException);
                            }
                        }
                        Packet<?> packet2 = tk2.bcf();
                        try {
                            try {
                                packet = packet2;
                                if (string != null) break block17;
                                if (!(packet instanceof EntityStatusS2CPacket)) return;
                            }
                            catch (MatchException matchException) {
                                throw pv.cPS(matchException);
                            }
                            packet = packet2;
                        }
                        catch (MatchException matchException) {
                            throw pv.cPS(matchException);
                        }
                    }
                    entityStatusS2CPacket2 = (EntityStatusS2CPacket)packet;
                    try {
                        try {
                            entityStatusS2CPacket = entityStatusS2CPacket2;
                            if (string != null) break block18;
                            if (entityStatusS2CPacket.getStatus() == (int)eADIq) break block19;
                            return;
                        }
                        catch (MatchException matchException) {
                            throw pv.cPS(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw pv.cPS(matchException);
                    }
                }
                entityStatusS2CPacket = entityStatusS2CPacket2;
            }
            Entity entity2 = entityStatusS2CPacket.getEntity((World)rD.dlmvG.world);
            try {
                try {
                    entity = entity2;
                    if (string != null) break block20;
                    if (!(entity instanceof PlayerEntity)) return;
                }
                catch (MatchException matchException) {
                    throw pv.cPS(matchException);
                }
                entity = entity2;
            }
            catch (MatchException matchException) {
                throw pv.cPS(matchException);
            }
        }
        PlayerEntity playerEntity = (PlayerEntity)entity;
        CallSite callSite = pv.cPZ("y", (int)21181, (long)(0x2D1A345766D31EE9L ^ l2));
        pv.cPK(playerEntity.getUuid(), Items.TOTEM_OF_UNDYING, (long)callSite);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pv.class, "cPV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(pv.class, "cPY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

