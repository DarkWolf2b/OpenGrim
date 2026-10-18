/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.player.PlayerEntity
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
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.bJ;
import sixtwo.bS;
import sixtwo.bU;
import sixtwo.cv;
import sixtwo.fS;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bM
extends bS {
    private PlayerEntity BChTb;
    private static final long wgjAG;
    private static final long[] GvhUT;
    private static final Integer[] jriia;
    private static final Map xzNLw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bM(cv cv2) {
        long l2 = wgjAG ^ 0xA7E79451652L;
        int[] nArray = new int[bM.Ns("x", (int)31088, (long)(0x4F5DF32B6CC71FAEL ^ l2))];
        nArray[0] = (int)bM.Ns("x", (int)21757, (long)(0x7EA2D96F783C3228L ^ l2));
        nArray[1] = (int)bM.Ns("x", (int)26933, (long)(0x1FAF96D4BD6D0FFCL ^ l2));
        nArray[2] = (int)bM.Ns("x", (int)16993, (long)(0x693D39C625BE24A2L ^ l2));
        nArray[3] = (int)bM.Ns("x", (int)4673, (long)(0xE9D3790E194749EL ^ l2));
        nArray[4] = (int)bM.Ns("x", (int)15651, (long)(0x51DB779637695BEBL ^ l2));
        nArray[5] = (int)bM.Ns("x", (int)22638, (long)(0x2D04158C2618BEBDL ^ l2));
        nArray[bM.Ns("x", (int)17016, (long)(0x27DB96D46A30A4A4L ^ l2))] = (int)bM.Ns("x", (int)5820, (long)(0x2D13341D9C02F06BL ^ l2));
        nArray[bM.Ns("x", (int)20971, (long)(0x7B056C4C2C61373DL ^ l2))] = (int)bM.Ns("x", (int)13672, (long)(0x227DCCE10A8A53ADL ^ l2));
        nArray[bM.Ns("x", (int)20827, (long)(0x75FC05AD95DBB79CL ^ l2))] = (int)bM.Ns("x", (int)12381, (long)(0x48C6F1ACE6435692L ^ l2));
        nArray[bM.Ns("x", (int)9462, (long)(0x5E7DB30B90994236L ^ l2))] = (int)bM.Ns("x", (int)10684, (long)(0x38A6C565FE02CF66L ^ l2));
        nArray[bM.Ns("x", (int)4165, (long)(0x36E4E30A9154768BL ^ l2))] = (int)bM.Ns("x", (int)15895, (long)(0x244F866A761158CFL ^ l2));
        nArray[bM.Ns("x", (int)3247, (long)(0x25618FE98069EA4EL ^ l2))] = (int)bM.Ns("x", (int)15116, (long)(0x72A1CF77714DDDDCL ^ l2));
        nArray[bM.Ns("x", (int)22829, (long)(0x10ABDE99072FBFFCL ^ l2))] = (int)bM.Ns("x", (int)14690, (long)(0xFBCC0D9F5885F82L ^ l2));
        nArray[bM.Ns("x", (int)9901, (long)(0x7F4AAC9EED584060L ^ l2))] = (int)bM.Ns("x", (int)10972, (long)(0x66E9D790883B4C05L ^ l2));
        nArray[bM.Ns("x", (int)2578, (long)(0x569F644F939A6CDEL ^ l2))] = (int)bM.Ns("x", (int)27690, (long)(0x53494D3474BE8AE0L ^ l2));
        nArray[bM.Ns("x", (int)19653, (long)(0x2E4D62E5E946AA1EL ^ l2))] = (int)bM.Ns("x", (int)31899, (long)(0x3F408B59E33B1A4FL ^ l2));
        nArray[bM.Ns("x", (int)27843, (long)(0x446CA2E39E8F0A05L ^ l2))] = (int)bM.Ns("x", (int)12269, (long)(0x30A9E6E978DDC930L ^ l2));
        nArray[bM.Ns("x", (int)15841, (long)(0x7A5E797CF79CDB25L ^ l2))] = (int)bM.Ns("x", (int)31899, (long)(0x3F408B59E33B1A4FL ^ l2));
        nArray[bM.Ns("x", (int)27710, (long)(0x50288D0273918AECL ^ l2))] = (int)bM.Ns("x", (int)27259, (long)(0x79D8A8CD5C9E8CB0L ^ l2));
        nArray[bM.Ns("x", (int)27161, (long)(0x3CFBEA0A1F130CD8L ^ l2))] = (int)bM.Ns("x", (int)28505, (long)(0x55BE9B35035D099BL ^ l2));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bM.wgjAG = gb.aYR(492535554697354735L, -6085061503076846657L, MethodHandles.lookup().lookupClass()).a(174947226645567L);
                bM.xzNLw = new HashMap<K, V>(13);
                var0 = bM.wgjAG ^ 57906051530428L;
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
                var8_3 = new long[34];
                var5_4 = 0;
                var6_5 = "Q\u0018\u00d8W\u00f9b\u0002\u00f3\u00f7:m\u00b6\u00b79f\u00a5\u00d5G\u0002T\u00eb\u0013T\u0099\u008b\u0096Zw\u0089:\u000f\u00bb\u00e0\u00f2\u00cd\u000b\u00aa\u00e63!\u0095\u00a4{\u00a2\u001f\u00ac~\u0083\u001cS\u00ec\u00e3U\u0010z\u00ff2\u0012\u00cf\u0004\u00a8'[\u00af\u0098\u001d\u0002\u00db\u00d2x\u00c3/#:\u008d\u0090D\u0093\u00ba'\u0096\u00e9\u00ea\u0080\u00db\u00e9G1NsMD\u008cD\u00f3I\\\u00d5\u009eZ-\u00e1T\u0086v\u001bT\u00e5\u001dA\u00caE\u00e3\u00d8Wrh\u00e1=&&r\u009a]\u00d8;W)C\u00ea.<\u009d\u0090y\u009dj\u008alT\u0013W\u00e1\u00f4\u00e5\u00ce\u0084\u00ddM\u0094b&:U>\u0088\u0086\u00c7\u001b\u0002\u00f2\u008a\u001b\u000f\u00a3mj\u00d0\u00f9\u00c5\u00e9}BQ\u0003~\u00cf\u00c6\u00ff\u00ef|\u008b\u00ac\u008f\u00e1\u0085\u00a3\u00a0\u009a\u0016\u009f\u00bc\u00cf\u00ecO&\u000b\u0003\u00c8\u009b\u00db)\u00fb\u00e9\u00e8\u00ca\u0083\u0091U>\u00aen\u001a\u00e8\u00a7\u00b9\u001e:\u0080\u00bf{\u00df\u00ab`\u00cc\u00de\u00dd\u00f2\u008e\u00cd\u00ce7\u00b0J\u0010?\u001e\u00cdC\u0081n3\u00c5\u0092\u0086.*4\u00fb\u00ce\u00ee\u001d\u00f4\u000b8\u00fd";
                var7_6 = "Q\u0018\u00d8W\u00f9b\u0002\u00f3\u00f7:m\u00b6\u00b79f\u00a5\u00d5G\u0002T\u00eb\u0013T\u0099\u008b\u0096Zw\u0089:\u000f\u00bb\u00e0\u00f2\u00cd\u000b\u00aa\u00e63!\u0095\u00a4{\u00a2\u001f\u00ac~\u0083\u001cS\u00ec\u00e3U\u0010z\u00ff2\u0012\u00cf\u0004\u00a8'[\u00af\u0098\u001d\u0002\u00db\u00d2x\u00c3/#:\u008d\u0090D\u0093\u00ba'\u0096\u00e9\u00ea\u0080\u00db\u00e9G1NsMD\u008cD\u00f3I\\\u00d5\u009eZ-\u00e1T\u0086v\u001bT\u00e5\u001dA\u00caE\u00e3\u00d8Wrh\u00e1=&&r\u009a]\u00d8;W)C\u00ea.<\u009d\u0090y\u009dj\u008alT\u0013W\u00e1\u00f4\u00e5\u00ce\u0084\u00ddM\u0094b&:U>\u0088\u0086\u00c7\u001b\u0002\u00f2\u008a\u001b\u000f\u00a3mj\u00d0\u00f9\u00c5\u00e9}BQ\u0003~\u00cf\u00c6\u00ff\u00ef|\u008b\u00ac\u008f\u00e1\u0085\u00a3\u00a0\u009a\u0016\u009f\u00bc\u00cf\u00ecO&\u000b\u0003\u00c8\u009b\u00db)\u00fb\u00e9\u00e8\u00ca\u0083\u0091U>\u00aen\u001a\u00e8\u00a7\u00b9\u001e:\u0080\u00bf{\u00df\u00ab`\u00cc\u00de\u00dd\u00f2\u008e\u00cd\u00ce7\u00b0J\u0010?\u001e\u00cdC\u0081n3\u00c5\u0092\u0086.*4\u00fb\u00ce\u00ee\u001d\u00f4\u000b8\u00fd".length();
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
                    var6_5 = "ny\u00bc\u00fd\u00fa=|\u00ca\u00d1\u0014~|z\u00f6\u00e1R";
                    var7_6 = "ny\u00bc\u00fd\u00fa=|\u00ca\u00d1\u0014~|z\u00f6\u00e1R".length();
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
        bM.GvhUT = var8_3;
        bM.jriia = new Integer[34];
    }

    @Override
    public boolean MH() {
        boolean bl2;
        long l2 = wgjAG ^ 0x6BD3CFAF5BB1L;
        try {
            bl2 = this.No() != null;
        }
        catch (MatchException matchException) {
            throw bM.Np(matchException);
        }
        return bl2;
    }

    private PlayerEntity No() {
        block9: {
            PlayerEntity playerEntity;
            block10: {
                fg fg2;
                boolean bl2;
                fg fg3;
                block8: {
                    long l2 = wgjAG ^ 0x556E8D561763L;
                    fg3 = rD.dlJ().aZx(fg.class);
                    bl2 = bJ.MN();
                    try {
                        try {
                            fg2 = fg3;
                            if (bl2) break block8;
                            if (!fg2.bag()) break block9;
                        }
                        catch (MatchException matchException) {
                            throw bM.Np(matchException);
                        }
                        fg2 = fg3;
                    }
                    catch (MatchException matchException) {
                        throw bM.Np(matchException);
                    }
                }
                try {
                    try {
                        playerEntity = fg2.aIU();
                        if (bl2) break block10;
                        if (playerEntity == null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw bM.Np(matchException);
                    }
                    playerEntity = fg3.aIU();
                }
                catch (MatchException matchException) {
                    throw bM.Np(matchException);
                }
            }
            return playerEntity;
        }
        return null;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        Object object;
        float f2;
        String string;
        lq lq2;
        float f3;
        float f4;
        block12: {
            PlayerEntity playerEntity;
            mG mG2;
            float f5;
            float f6;
            block11: {
                PlayerEntity playerEntity2;
                boolean bl2;
                block9: {
                    block10: {
                        long l2 = wgjAG ^ 0x64D3E7B5617EL;
                        PlayerEntity playerEntity3 = this.No();
                        bl2 = bJ.MN();
                        try {
                            try {
                                playerEntity2 = playerEntity3;
                                if (bl2) break block9;
                                if (playerEntity2 == null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw bM.Np(matchException);
                            }
                            this.BChTb = playerEntity3;
                        }
                        catch (MatchException matchException) {
                            throw bM.Np(matchException);
                        }
                    }
                    playerEntity2 = this.BChTb;
                }
                if (playerEntity2 == null) {
                    return;
                }
                bU bU2 = rD.dlK().RC();
                f4 = bU2.RW();
                f3 = bU2.RX();
                lq2 = lE.WTzbi.bYM(7.0f);
                string = this.Nn();
                f2 = 10.0f;
                float f7 = 20.0f + f2 + lq2.cao(string);
                float f8 = 15.0f;
                this.fGWTH.NU(f7, f8);
                f6 = f4 - 6.0f + 10.0f * this.dExGi.dhj();
                f5 = f3 + jf.bAH(f2, f8);
                mG2 = mG.hoGuU.cob(255.0f * this.dExGi.dhj());
                PlayerEntity playerEntity4 = this.BChTb;
                try {
                    try {
                        playerEntity = playerEntity4;
                        if (bl2) break block11;
                        if (!(playerEntity instanceof AbstractClientPlayerEntity)) break block12;
                    }
                    catch (MatchException matchException) {
                        throw bM.Np(matchException);
                    }
                    playerEntity = playerEntity4;
                }
                catch (MatchException matchException) {
                    throw bM.Np(matchException);
                }
            }
            object = (AbstractClientPlayerEntity)playerEntity;
            lC2.ccZ((AbstractClientPlayerEntity)object, f6, f5, f2, ld.all(4.0f), mG2);
        }
        object = ii2.bjb();
        float f9 = f4 + 25.0f - 10.0f * this.dExGi.dhj() + f2;
        float f10 = f3 + 5.0f;
        lC2.cez(lq2, string, f9, f10, (mG)object);
    }

    private static MatchException Np(MatchException matchException) {
        return matchException;
    }

    private static CallSite Ns(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private String Nn() {
        long l2 = wgjAG ^ 0x1105649FF122L;
        String string = this.BChTb.getGameProfile().name();
        if (this.BChTb == rD.dlmvG.player) {
            string = rD.dlJ().aZx(fS.class).aWP(string);
        }
        return string;
    }

    private static int Nr(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bM.Nq(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int Nq(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3324;
        if (jriia[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = GvhUT[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xzNLw.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xzNLw.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bM", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bM.jriia[n3] = n4;
        }
        return jriia[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bM.class, "Nr", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

