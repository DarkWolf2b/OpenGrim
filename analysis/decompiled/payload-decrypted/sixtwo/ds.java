/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Box
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
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.fJ;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.jg;
import sixtwo.jg$tJ;
import sixtwo.jk;
import sixtwo.kH;
import sixtwo.lG;
import sixtwo.mr;
import sixtwo.rD;

public class ds
extends gg
implements lG {
    private final cF RIxRc;
    private final cJ NgLhx;
    private final cG VLjNm;
    private final cG BDwzq;
    private final cG zwpWs;
    private final cG MFFfX;
    private final ct Tkevx;
    private final cu Bcsfp;
    private final cu omxYT;
    private static final long zEUdL;
    private static final long[] TcimW;
    private static final Integer[] dnAGY;
    private static final Map GxymI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ds() {
        long l2 = zEUdL ^ 0x4179EFBD1BFCL;
        super(gf.aZL((int)80, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)101;
        nArray[7] = (int)115;
        this.RIxRc = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM).VT(EntityType.ITEM, EntityType.TNT_MINECART);
        int[] nArray2 = new int[6];
        nArray2[0] = (int)70;
        nArray2[1] = (int)105;
        nArray2[2] = (int)108;
        nArray2[3] = (int)108;
        nArray2[4] = (int)101;
        nArray2[5] = (int)100;
        this.NgLhx = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[13];
        nArray3[0] = (int)79;
        nArray3[1] = (int)117;
        nArray3[2] = (int)116;
        nArray3[3] = (int)108;
        nArray3[4] = (int)105;
        nArray3[5] = (int)110;
        nArray3[6] = (int)101;
        nArray3[7] = (int)32;
        nArray3[8] = (int)67;
        nArray3[9] = (int)111;
        nArray3[10] = (int)108;
        nArray3[11] = (int)111;
        nArray3[12] = (int)114;
        this.VLjNm = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis());
        int[] nArray4 = new int[10];
        nArray4[0] = (int)70;
        nArray4[1] = (int)105;
        nArray4[2] = (int)108;
        nArray4[3] = (int)108;
        nArray4[4] = (int)32;
        nArray4[5] = (int)67;
        nArray4[6] = (int)111;
        nArray4[7] = (int)108;
        nArray4[8] = (int)111;
        nArray4[9] = (int)114;
        this.BDwzq = new cG(this, mr.clS(nArray4)).Uf(rD.dlM().bjG().bis().cob(0.5f));
        int[] nArray5 = new int[20];
        nArray5[0] = (int)70;
        nArray5[1] = (int)114;
        nArray5[2] = (int)105;
        nArray5[3] = (int)101;
        nArray5[4] = (int)110;
        nArray5[5] = (int)100;
        nArray5[6] = (int)32;
        nArray5[7] = (int)79;
        nArray5[8] = (int)117;
        nArray5[9] = (int)116;
        nArray5[10] = (int)108;
        nArray5[11] = (int)105;
        nArray5[12] = (int)110;
        nArray5[13] = (int)101;
        nArray5[14] = (int)32;
        nArray5[15] = (int)67;
        nArray5[16] = (int)111;
        nArray5[17] = (int)108;
        nArray5[18] = (int)111;
        nArray5[19] = (int)114;
        this.zwpWs = new cG(this, mr.clS(nArray5)).Uf(jk.jEkxo);
        int[] nArray6 = new int[17];
        nArray6[0] = (int)70;
        nArray6[1] = (int)114;
        nArray6[2] = (int)105;
        nArray6[3] = (int)101;
        nArray6[4] = (int)110;
        nArray6[5] = (int)100;
        nArray6[6] = (int)32;
        nArray6[7] = (int)70;
        nArray6[8] = (int)105;
        nArray6[9] = (int)108;
        nArray6[10] = (int)108;
        nArray6[11] = (int)32;
        nArray6[12] = (int)67;
        nArray6[13] = (int)111;
        nArray6[14] = (int)108;
        nArray6[15] = (int)111;
        nArray6[16] = (int)114;
        this.MFFfX = new cG(this, mr.clS(nArray6)).Uf(jk.jEkxo.cob(0.5f));
        this.Tkevx = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101})).SO(1);
        this.Bcsfp = new cu(this.Tkevx, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101, (int)108}));
        int[] nArray7 = new int[6];
        nArray7[0] = (int)72;
        nArray7[1] = (int)105;
        nArray7[2] = (int)116;
        nArray7[3] = (int)98;
        nArray7[4] = (int)111;
        nArray7[5] = (int)120;
        this.omxYT = new cu(this.Tkevx, mr.clS(nArray7));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ds.zEUdL = gb.aYR(3713528879801623362L, -6358016118666169026L, MethodHandles.lookup().lookupClass()).a(130400000526636L);
                ds.GxymI = new HashMap<K, V>(13);
                var0 = ds.zEUdL ^ 77137010299908L;
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
                var8_3 = new long[61];
                var5_4 = 0;
                var6_5 = "\u00c1\u0088\u00f7\u00c8\u009b\fi\u000fU\u0089\u00b0\u0080X\u0081FM\f\u008b\u00dfH\u00bd\"\u00b4\u0013m\u0091\u00cc\u0097h\u00a0\u00fc\u0093\u00de\u0087\u00d3j\u009aY\u00d5\r,\u00ce\u00a1\\\u00f2\u00aa^\u0086Y\u00bb\u001a\u00f9L\u00d5\u00a2\u0019\u00ff\u000b%E\u0093\u0095\u00afd\u00f1\u0085\u00c0Jx\u00d6)\b)L\n\u00ce\u00ff\u00f6a\u00d1\u0086R\u0097\u0095P\u0084s\u00ad5\u00a3\u0002_\u00f1\u00afR\u00ff\u00e6\u001e\u00f0\u00c2\u00c2m>2\u00f5\n6\u0018\u00e7!$\u0095z\u00de\u00b6o\u0093\u00d3\u0015{\u0081ST\u0080\u00af\u0016\u00fc\u00bfpJR\u00af\u001b\u00f2\u00ae\u00bc\u00a9\u0094\u00f1\u00ce\u00d5\u00d1C\u0000= \u00cbC\u008e\u001cW\u0097\u00ad\u001e\u0091\u00ca\u0016\u00b5J\u00a4\u00bcP\u008f\u00e36\u00bb\u00c1\u008e\u00cd\u00f3\u00a3w\u009e\u00b3\u00ee\u00fd\t9\u0088\u0007\u0010\u00c65\u00cb\u00e8\u00bc\u000f\u001cOA\u00be\u00e8\u000e[z\u00f0\u0013\u0012K\u008bh\u00ff\u007f\u00a0\u00af8\u0094\u000b\u0006ux\u00a8\u00a3L\u00b3\u008d\u008d \u00e8\u009d\u008d\u00ed\u008e\u00d3\u00e4B\u0092\u00f2\u00c6\u00be\u0003\u00f8\u001312\u000b?\u00e0!\u00b3\u00a2\u0017\u00deg/\u00a9\u00e1,^r\u00bb\u00ba\u0099\u0093[\u008a\u00b4}\u0087\u001d\u00ba\u00e1x]\u0003/\u00ed5\u0091\u00f4\u00b2\u00c3*\u0003\u0013\u00b3\u00edls\u0095\u00d1w\u00a2e5D\u00ceEEP\u0083k\u00b9\u00aa\u0087\u0091\u00f1\u0014{\u00b9\u00e206\u00f8\u0012\u00ca\u001c\u00f7\u00a5\u00aa\u00c2~\u00eb%*\u00aeCH*kC\u001b{\u0002\u00d2z\u001cwB\u00fb\u00cf\u00ec\u00b4\u00eeg\u00de\u00a5\u000b\u00d1\u0011\u00c7\u00943\u00cc\u009a\u0092\u00b3\u0016\u00c1\u00f7\u008e\u00f4\u00ad\u00bf%Y$\u00e9\u00b5\u0000GrjtQw\u00c6,L\u0014\u00ba\u00cd9\u0095\u0001S\t\u00b7*\u00b7\u00cf]\u008e%\u00ed\u0090B-h]\u00d7Q\u0011U\u009a\u00b7AvQ8\u00b9\u001f\u00de8\f\u00a9b7\u00c8\u009d\u00ff(\u00e7\u00e9\u00d5\u00ebg\u00e39\u00d3\u00f2'\u00b5\u00a2i\u00db1fd\u00e1\u001f;F\u00d4\u000e\u00eco\r\u00b62e\u0006\u009c\u00eb\u00c1\u00f2\u009a=\u00bd\u009a<\u000bf4l\u0092/N\u009b\u00c9\u00ad\u00ad=\u00e9\u00dfR\u009f\u00ba(\u00e9\u00ab\u00e0";
                var7_6 = "\u00c1\u0088\u00f7\u00c8\u009b\fi\u000fU\u0089\u00b0\u0080X\u0081FM\f\u008b\u00dfH\u00bd\"\u00b4\u0013m\u0091\u00cc\u0097h\u00a0\u00fc\u0093\u00de\u0087\u00d3j\u009aY\u00d5\r,\u00ce\u00a1\\\u00f2\u00aa^\u0086Y\u00bb\u001a\u00f9L\u00d5\u00a2\u0019\u00ff\u000b%E\u0093\u0095\u00afd\u00f1\u0085\u00c0Jx\u00d6)\b)L\n\u00ce\u00ff\u00f6a\u00d1\u0086R\u0097\u0095P\u0084s\u00ad5\u00a3\u0002_\u00f1\u00afR\u00ff\u00e6\u001e\u00f0\u00c2\u00c2m>2\u00f5\n6\u0018\u00e7!$\u0095z\u00de\u00b6o\u0093\u00d3\u0015{\u0081ST\u0080\u00af\u0016\u00fc\u00bfpJR\u00af\u001b\u00f2\u00ae\u00bc\u00a9\u0094\u00f1\u00ce\u00d5\u00d1C\u0000= \u00cbC\u008e\u001cW\u0097\u00ad\u001e\u0091\u00ca\u0016\u00b5J\u00a4\u00bcP\u008f\u00e36\u00bb\u00c1\u008e\u00cd\u00f3\u00a3w\u009e\u00b3\u00ee\u00fd\t9\u0088\u0007\u0010\u00c65\u00cb\u00e8\u00bc\u000f\u001cOA\u00be\u00e8\u000e[z\u00f0\u0013\u0012K\u008bh\u00ff\u007f\u00a0\u00af8\u0094\u000b\u0006ux\u00a8\u00a3L\u00b3\u008d\u008d \u00e8\u009d\u008d\u00ed\u008e\u00d3\u00e4B\u0092\u00f2\u00c6\u00be\u0003\u00f8\u001312\u000b?\u00e0!\u00b3\u00a2\u0017\u00deg/\u00a9\u00e1,^r\u00bb\u00ba\u0099\u0093[\u008a\u00b4}\u0087\u001d\u00ba\u00e1x]\u0003/\u00ed5\u0091\u00f4\u00b2\u00c3*\u0003\u0013\u00b3\u00edls\u0095\u00d1w\u00a2e5D\u00ceEEP\u0083k\u00b9\u00aa\u0087\u0091\u00f1\u0014{\u00b9\u00e206\u00f8\u0012\u00ca\u001c\u00f7\u00a5\u00aa\u00c2~\u00eb%*\u00aeCH*kC\u001b{\u0002\u00d2z\u001cwB\u00fb\u00cf\u00ec\u00b4\u00eeg\u00de\u00a5\u000b\u00d1\u0011\u00c7\u00943\u00cc\u009a\u0092\u00b3\u0016\u00c1\u00f7\u008e\u00f4\u00ad\u00bf%Y$\u00e9\u00b5\u0000GrjtQw\u00c6,L\u0014\u00ba\u00cd9\u0095\u0001S\t\u00b7*\u00b7\u00cf]\u008e%\u00ed\u0090B-h]\u00d7Q\u0011U\u009a\u00b7AvQ8\u00b9\u001f\u00de8\f\u00a9b7\u00c8\u009d\u00ff(\u00e7\u00e9\u00d5\u00ebg\u00e39\u00d3\u00f2'\u00b5\u00a2i\u00db1fd\u00e1\u001f;F\u00d4\u000e\u00eco\r\u00b62e\u0006\u009c\u00eb\u00c1\u00f2\u009a=\u00bd\u009a<\u000bf4l\u0092/N\u009b\u00c9\u00ad\u00ad=\u00e9\u00dfR\u009f\u00ba(\u00e9\u00ab\u00e0".length();
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
                    var6_5 = "\u0003\u00a6\u00114w0+\u00ec,\u0006\u00d7\u000e\u009c\u00dc\u00f1\u00d0";
                    var7_6 = "\u0003\u00a6\u00114w0+\u00ec,\u0006\u00d7\u000e\u009c\u00dc\u00f1\u00d0".length();
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
        ds.TcimW = var8_3;
        ds.dnAGY = new Integer[61];
    }

    private static MatchException aih(MatchException matchException) {
        return matchException;
    }

    private static int aii(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2E19;
        if (dnAGY[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = TcimW[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])GxymI.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GxymI.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ds", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ds.dnAGY[n3] = n4;
        }
        return dnAGY[n3];
    }

    private static int aij(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ds.aii(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite aik(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ds" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    @hG
    public void aig(go.sX sX2) {
        block29: {
            long l2 = zEUdL ^ 0x3AEC18E865C3L;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw ds.aih(matchException);
            }
            MatrixStack matrixStack = sX2.bbh();
            fJ fJ2 = rD.dlJ().aZx(fJ.class);
            MMuss.startBatch();
            try {
                Vec3d vec3d = rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate();
                for (Entity entity : rD.dlmvG.world.getEntities()) {
                    block35: {
                        Box box;
                        block36: {
                            boolean bl2;
                            block33: {
                                block34: {
                                    block39: {
                                        boolean bl3;
                                        block31: {
                                            block32: {
                                                Entity entity2;
                                                block30: {
                                                    if (iSArray != null) break block29;
                                                    try {
                                                        block37: {
                                                            entity2 = entity;
                                                            if (iSArray != null) break block30;
                                                            break block37;
                                                            catch (MatchException matchException) {
                                                                throw ds.aih(matchException);
                                                            }
                                                        }
                                                        if (entity2 == rD.dlmvG.player) continue;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ds.aih(matchException);
                                                    }
                                                    entity2 = entity;
                                                }
                                                bl3 = jJ.bIB(entity2);
                                                if (iSArray != null) break block31;
                                                try {
                                                    block38: {
                                                        if (bl3) break block32;
                                                        break block38;
                                                        catch (MatchException matchException) {
                                                            throw ds.aih(matchException);
                                                        }
                                                    }
                                                    if (iSArray == null) continue;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ds.aih(matchException);
                                                }
                                            }
                                            bl3 = this.RIxRc.VX(entity);
                                        }
                                        try {
                                            if (!bl3 && iSArray == null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw ds.aih(matchException);
                                        }
                                        box = jg.bBA(entity);
                                        bl2 = this.Tkevx.SQ(1);
                                        if (iSArray != null) break block33;
                                        if (!bl2) break block34;
                                        break block39;
                                        catch (MatchException matchException) {
                                            throw ds.aih(matchException);
                                        }
                                    }
                                    try {
                                        block40: {
                                            bl2 = fJ2.bag();
                                            if (iSArray != null) break block33;
                                            break block40;
                                            catch (MatchException matchException) {
                                                throw ds.aih(matchException);
                                            }
                                        }
                                        if (!bl2) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw ds.aih(matchException);
                                    }
                                    float f2 = fJ2.aUP(entity);
                                    box = box.expand((double)f2);
                                }
                                box = box.offset(vec3d);
                                try {
                                    if (iSArray != null) break block35;
                                    bl2 = entity instanceof PlayerEntity;
                                }
                                catch (MatchException matchException) {
                                    throw ds.aih(matchException);
                                }
                            }
                            if (!bl2) break block36;
                            PlayerEntity playerEntity = (PlayerEntity)entity;
                            if (iSArray != null) break block35;
                            try {
                                block41: {
                                    if (!rD.dmc().ddy(playerEntity)) break block36;
                                    break block41;
                                    catch (MatchException matchException) {
                                        throw ds.aih(matchException);
                                    }
                                }
                                MMuss.bUS(kH.bTJ(matrixStack, box, this.NgLhx.WF(), false).dtN(this.zwpWs.Wf()).dtO(this.MFFfX.Wf()).dtS());
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw ds.aih(matchException);
                            }
                        }
                        MMuss.bUS(kH.bTJ(matrixStack, box, this.NgLhx.WF(), false).dtN(this.VLjNm.Wf()).dtO(this.BDwzq.Wf()).dtS());
                    }
                    if (iSArray == null) continue;
                    break;
                }
            }
            finally {
                MMuss.endBatch();
            }
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ds.class, "aij", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

