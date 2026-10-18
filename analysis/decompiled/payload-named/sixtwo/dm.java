/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jk;
import sixtwo.kE;
import sixtwo.lG;
import sixtwo.mr;
import sixtwo.rD;

public class dm
extends gg
implements lG {
    cC VCZOE;
    private static final long Ghvyo;
    private static final String jfMvl;
    private static final long[] WrUNj;
    private static final Integer[] FDPXW;
    private static final Map RdvpA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dm() {
        long l2 = Ghvyo ^ 0x3EB4DCEBEBB9L;
        super(gf.aZL((int)dm.agZ("l", (int)17221, (long)(0x1DF14795513839C8L ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dm.agZ("l", (int)12148, (long)(0x77D7E0751ACED5F8L ^ l2))];
        nArray[0] = (int)dm.agZ("l", (int)17211, (long)(0x203859A5C23B9B3L ^ l2));
        nArray[1] = (int)dm.agZ("l", (int)8857, (long)(0x56559D78DD975812L ^ l2));
        nArray[2] = (int)dm.agZ("l", (int)15883, (long)(0x4C3F0BCF82084481L ^ l2));
        nArray[3] = (int)dm.agZ("l", (int)7351, (long)(0x9D6245CDCA5E639L ^ l2));
        nArray[4] = (int)dm.agZ("l", (int)23689, (long)(0x5B0D5A3B92652600L ^ l2));
        nArray[5] = (int)dm.agZ("l", (int)19150, (long)(0x5FB687493CB03041L ^ l2));
        this.VCZOE = new cC(this, mr.clS(nArray)).Vy(0.1f).Vw(0.4f).Vx(1.6f).VA(1.2f).Vz(jfMvl);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    dm.Ghvyo = gb.aYR(-7113462162564744883L, -507166634579139577L, MethodHandles.lookup().lookupClass()).a(139596413189431L);
                    var11 = dm.Ghvyo ^ 93131619793499L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u0081\u0005\u00ffo\u0083;\u00e1\u0002".getBytes("ISO-8859-1"));
                ** while (true)
                dm.jfMvl = dm.agW(var15_3).intern();
                dm.RdvpA = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[8];
                var3_7 = 0;
                var4_8 = "P\u0089Y5\u0086\u00ed8\u00bc\u0096d\u00b7<\u0082\u00c08\u00e9Y\u00dd\u00e2f#!\u0014\u00d7\u009b\u00d9\u00bd\u00fb\u00a8c\u00c1\u00d9\u0086V/h\u00c4\u00e9$\u0013\u00a4,B\u00cd'\u00cb\u0088t";
                var5_9 = "P\u0089Y5\u0086\u00ed8\u00bc\u0096d\u00b7<\u0082\u00c08\u00e9Y\u00dd\u00e2f#!\u0014\u00d7\u009b\u00d9\u00bd\u00fb\u00a8c\u00c1\u00d9\u0086V/h\u00c4\u00e9$\u0013\u00a4,B\u00cd'\u00cb\u0088t".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u00f8\u0012\u0084:\u00ef]\u00f9\u00a63\u0018,\u001ai<E\u00b4";
                    var5_9 = "\u00f8\u0012\u0084:\u00ef]\u00f9\u00a63\u0018,\u001ai<E\u00b4".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        dm.WrUNj = var6_6;
        dm.FDPXW = new Integer[8];
    }

    private static String agW(byte[] byArray) {
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

    private static CallSite agZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dm" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int agX(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4D14;
        if (FDPXW[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = WrUNj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])RdvpA.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    RdvpA.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dm", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dm.FDPXW[n3] = n4;
        }
        return FDPXW[n3];
    }

    private static MatchException agV(MatchException matchException) {
        return matchException;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    @hG
    public void agU(go.sX sX2) {
        block13: {
            long l2 = Ghvyo ^ 0x725419D7F4A6L;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dm.agV(matchException);
            }
            MatrixStack matrixStack = sX2.bbh();
            AswNN.startBatch();
            try {
                for (AbstractClientPlayerEntity abstractClientPlayerEntity : rD.dlmvG.world.getPlayers()) {
                    block15: {
                        block14: {
                            block16: {
                                if (iSArray != null) break block13;
                                if (iSArray != null) break block14;
                                break block16;
                                catch (MatchException matchException) {
                                    throw dm.agV(matchException);
                                }
                            }
                            try {
                                block17: {
                                    if (!rD.dmc().ddy((PlayerEntity)abstractClientPlayerEntity)) break block15;
                                    break block17;
                                    catch (MatchException matchException) {
                                        throw dm.agV(matchException);
                                    }
                                }
                                matrixStack.push();
                            }
                            catch (MatchException matchException) {
                                throw dm.agV(matchException);
                            }
                        }
                        Vec3d vec3d = abstractClientPlayerEntity.getLerpedPos(sX2.bbi()).add(0.0, (double)(abstractClientPlayerEntity.getHeight() + this.VCZOE.VB()), 0.0);
                        jI.bIs(matrixStack, vec3d);
                        AswNN.bUp(kE.bTf(matrixStack, 0.0, 0.0, 0.0, 0.1f).dti(jk.jEkxo).dtj());
                        matrixStack.pop();
                    }
                    if (iSArray == null) continue;
                    break;
                }
            }
            finally {
                AswNN.endBatch();
            }
        }
    }

    private static int agY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dm.agX(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dm.class, "agY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

