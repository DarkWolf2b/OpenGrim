/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.AbstractBannerBlock
 *  net.minecraft.block.AbstractSignBlock
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.ButtonBlock
 *  net.minecraft.block.DecoratedPotBlock
 *  net.minecraft.block.LeverBlock
 *  net.minecraft.block.entity.BannerBlockEntity
 *  net.minecraft.block.entity.BlockEntity
 *  net.minecraft.block.entity.SignBlockEntity
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.FallingBlockEntity
 *  net.minecraft.entity.decoration.AbstractDecorationEntity
 *  net.minecraft.entity.decoration.ArmorStandEntity
 *  net.minecraft.entity.vehicle.AbstractMinecartEntity
 *  net.minecraft.util.shape.VoxelShapes
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
import net.minecraft.block.AbstractBannerBlock;
import net.minecraft.block.AbstractSignBlock;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.block.ButtonBlock;
import net.minecraft.block.DecoratedPotBlock;
import net.minecraft.block.LeverBlock;
import net.minecraft.block.entity.BannerBlockEntity;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.block.entity.SignBlockEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.FallingBlockEntity;
import net.minecraft.entity.decoration.AbstractDecorationEntity;
import net.minecraft.entity.decoration.ArmorStandEntity;
import net.minecraft.entity.vehicle.AbstractMinecartEntity;
import net.minecraft.util.shape.VoxelShapes;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.ee;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gr;
import sixtwo.hG;
import sixtwo.he;
import sixtwo.hf;
import sixtwo.hl;
import sixtwo.hm;
import sixtwo.ja;
import sixtwo.mr;

public class dG
extends gg {
    private final cv gMmLp;
    private final cw DsCRe;
    private final cw gpExe;
    private final cw ZJUtT;
    private final cw tXJgP;
    private final cw IJUZj;
    private final cw WygqV;
    private final cw lejDU;
    private final cw LGsCc;
    private final cw TNPUn;
    private static final long nALOH;
    private static final long[] nmNyF;
    private static final Integer[] CelqF;
    private static final Map zJQww;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @hG
    public void als(hf hf2) {
        BlockEntity blockEntity = hf2.bcy();
        hf2.bdX(this.alw(blockEntity));
    }

    public dG() {
        long l2 = nALOH ^ 0x21A4A7522C1FL;
        super(gf.aZL((int)61, false, gh.qBzlZ));
        this.gMmLp = new cv(this, mr.clS(new int[]{(int)72, (int)105, (int)100, (int)101}));
        int[] nArray = new int[9];
        nArray[0] = (int)80;
        nArray[1] = (int)97;
        nArray[2] = (int)105;
        nArray[3] = (int)110;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)110;
        nArray[7] = (int)103;
        nArray[8] = (int)115;
        this.DsCRe = new cw(this.gMmLp, mr.clS(nArray)).Tz();
        this.gpExe = new cw(this.gMmLp, mr.clS(new int[]{(int)83, (int)105, (int)103, (int)110, (int)115})).Tz();
        int[] nArray2 = new int[7];
        nArray2[0] = (int)66;
        nArray2[1] = (int)117;
        nArray2[2] = (int)116;
        nArray2[3] = (int)116;
        nArray2[4] = (int)111;
        nArray2[5] = (int)110;
        nArray2[6] = (int)115;
        this.ZJUtT = new cw(this.gMmLp, mr.clS(nArray2));
        int[] nArray3 = new int[6];
        nArray3[0] = (int)76;
        nArray3[1] = (int)101;
        nArray3[2] = (int)118;
        nArray3[3] = (int)101;
        nArray3[4] = (int)114;
        nArray3[5] = (int)115;
        this.tXJgP = new cw(this.gMmLp, mr.clS(nArray3));
        int[] nArray4 = new int[7];
        nArray4[0] = (int)66;
        nArray4[1] = (int)97;
        nArray4[2] = (int)110;
        nArray4[3] = (int)110;
        nArray4[4] = (int)101;
        nArray4[5] = (int)114;
        nArray4[6] = (int)115;
        this.IJUZj = new cw(this.gMmLp, mr.clS(nArray4)).Tz();
        int[] nArray5 = new int[12];
        nArray5[0] = (int)65;
        nArray5[1] = (int)114;
        nArray5[2] = (int)109;
        nArray5[3] = (int)111;
        nArray5[4] = (int)114;
        nArray5[5] = (int)32;
        nArray5[6] = (int)83;
        nArray5[7] = (int)116;
        nArray5[8] = (int)97;
        nArray5[9] = (int)110;
        nArray5[10] = (int)100;
        nArray5[11] = (int)115;
        this.WygqV = new cw(this.gMmLp, mr.clS(nArray5)).Tz();
        int[] nArray6 = new int[9];
        nArray6[0] = (int)77;
        nArray6[1] = (int)105;
        nArray6[2] = (int)110;
        nArray6[3] = (int)101;
        nArray6[4] = (int)99;
        nArray6[5] = (int)97;
        nArray6[6] = (int)114;
        nArray6[7] = (int)116;
        nArray6[8] = (int)115;
        this.lejDU = new cw(this.gMmLp, mr.clS(nArray6)).Tz();
        int[] nArray7 = new int[14];
        nArray7[0] = (int)70;
        nArray7[1] = (int)97;
        nArray7[2] = (int)108;
        nArray7[3] = (int)108;
        nArray7[4] = (int)105;
        nArray7[5] = (int)110;
        nArray7[6] = (int)103;
        nArray7[7] = (int)32;
        nArray7[8] = (int)66;
        nArray7[9] = (int)108;
        nArray7[10] = (int)111;
        nArray7[11] = (int)99;
        nArray7[12] = (int)107;
        nArray7[13] = (int)115;
        this.LGsCc = new cw(this.gMmLp, mr.clS(nArray7)).Tz();
        int[] nArray8 = new int[15];
        nArray8[0] = (int)68;
        nArray8[1] = (int)101;
        nArray8[2] = (int)99;
        nArray8[3] = (int)111;
        nArray8[4] = (int)114;
        nArray8[5] = (int)97;
        nArray8[6] = (int)116;
        nArray8[7] = (int)105;
        nArray8[8] = (int)111;
        nArray8[9] = (int)110;
        nArray8[10] = (int)32;
        nArray8[11] = (int)80;
        nArray8[12] = (int)111;
        nArray8[13] = (int)116;
        nArray8[14] = (int)115;
        this.TNPUn = new cw(this.gMmLp, mr.clS(nArray8));
        this.gMmLp.Vd(ja::byJ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dG.nALOH = gb.aYR(-647804287976443572L, 5813691354337543833L, MethodHandles.lookup().lookupClass()).a(33225061346093L);
                dG.zJQww = new HashMap<K, V>(13);
                var0 = dG.nALOH ^ 10961117698119L;
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
                var8_3 = new long[62];
                var5_4 = 0;
                var6_5 = "\u00ae<k\u00f2L\u0001>\u009a6\u00ab\u00f3!\u001e6*%\u00a77\u00cd\u00e4\f\u0015\u00c3oZ\u00f9\u00d7\u0015\u00d1\u00fdv\u00dd\u00bcw\u00bcG\u008a\u00b1\u00a5&\u00aanv\u00a4\u0098\u008b\u001c\u00f5\u00a0\u009a\u0000 \u001e\u00e0LJ{)\u00e03\u0019\u0016\u00f0c^Q\\A\u00d3\u00a2d\u001c\u00f0'\u00cd\u00df\u0095\u001e\u001e\u008e\u00a6\u0007\u00ea\u0086[\u00f8\u0084\u00fb9\u0094\u00b6B\u00f6\u00fd}\u00afa\u001a\r\u00b9\u0095n\u00e2\nz\u001e\u00fd@\u00ff'/j\u00c0\u001b\u00e5wq,P\u00ef\u00b3\u00c3\u0096\u00d3\t+l\u00c9;\u00bbo\u00b5\u00ff2m\u0099\u00c6%\u0013A\u009c\u00a2_x\u00efn\u0000\u00a5\u00ff\u009a\u000f\u0098A\r\u00cf\u00d5\u00e0Y\u00941\u00c5r\u00c5\u000b\u00d4a\u0093\u00b2\u00b1\f\u0087\u009f\u0000\u00ac\u00a1\u00c9\u0090\u0015\u00b3\u00ba\u00d9\u0093N\u00ee\u00af\u00fapX\u009c\u0092xI\u00caB!\u008b6\u00e7\u00b9\u001a\u008a\r\u0004\u00d3\u00a3\u0080\u00cf\u0018\u00ccod\u00a9\u00bd|\u00f2\u0089\u001d\u008b\u00c4|\u008d\u00da\u001a\u00ac\u00fe^\u0003\u00054\u00b0_\u00fb\u00cfp\u00bf\u00b3\u00fe\u00ea\u00bfV\u0083+s\u00cd\u00ab\u00c5vB\u00d5\u00e7\u00ad\u00b1/\u00d9\u001e\u00b8\u0014\u00ea//\u009d\u0089\u009dX\u00df\u00aa\u00b0\u009b\u00fc\u00ac\u008b\u00db\u009bfg\f\u00f6\u00fa\u00cb\u0082\"\u00d8/:\u0016\r\u0003V }\u00fcR\u00fa\u00bd6\u00f4/#>\u00ce\u00beu\u00b8v\u00b8\u00bc\u00ae\u00a0e\u00fa5}F\u0096y\u00ee\n\u0004<~\u00a6E\u0005/e\u008b\u00e8\u0019Z\u00a8\u00cfm\u009d\u00f3\u00da\u0094\u008es\u00b5\u00f6\u00c4\u00d5I<\u00baH\u0016\u00e1>\u00ca\u00a4\u00a0z\u00d2\u00d6\u00db\u009c\u00e0UH\u00f4\u0006\u00bax\u00cb\u0012\u00be\u00b1\u00b9\u0002\u00f3\u0086\u0095N\u0090i\u00b3\u008fH0\u00bc\u00ee\u0082.\u00d2-\u0005?\u00cb\u00b0\u00caM\u001a\u0087\u001c\u00f5\u00ae\u0096\"+\u0015\u0011\u0011\u00e77\u00b7\u0086P\u00c6\u0005\u00a9&\u00e2\u009e\u00e93\u0088+4\u00f1a\u0089\u00e0\u00cemR\u0089\u00e9\u00faG6\u00e09\u00c4KtP\u00dbr~\u009f:\b\u00a13\u0090\u00c3\u0082\u00eet=>\u008d\u00bb\u0013\u00ba\rw\u00e0K\u00a5vf\u001e\u00a0\u0000\u001dw\u00eb\u00ad\\hz\u00cd\u009d\u00d97\u00cb\u00bfl";
                var7_6 = "\u00ae<k\u00f2L\u0001>\u009a6\u00ab\u00f3!\u001e6*%\u00a77\u00cd\u00e4\f\u0015\u00c3oZ\u00f9\u00d7\u0015\u00d1\u00fdv\u00dd\u00bcw\u00bcG\u008a\u00b1\u00a5&\u00aanv\u00a4\u0098\u008b\u001c\u00f5\u00a0\u009a\u0000 \u001e\u00e0LJ{)\u00e03\u0019\u0016\u00f0c^Q\\A\u00d3\u00a2d\u001c\u00f0'\u00cd\u00df\u0095\u001e\u001e\u008e\u00a6\u0007\u00ea\u0086[\u00f8\u0084\u00fb9\u0094\u00b6B\u00f6\u00fd}\u00afa\u001a\r\u00b9\u0095n\u00e2\nz\u001e\u00fd@\u00ff'/j\u00c0\u001b\u00e5wq,P\u00ef\u00b3\u00c3\u0096\u00d3\t+l\u00c9;\u00bbo\u00b5\u00ff2m\u0099\u00c6%\u0013A\u009c\u00a2_x\u00efn\u0000\u00a5\u00ff\u009a\u000f\u0098A\r\u00cf\u00d5\u00e0Y\u00941\u00c5r\u00c5\u000b\u00d4a\u0093\u00b2\u00b1\f\u0087\u009f\u0000\u00ac\u00a1\u00c9\u0090\u0015\u00b3\u00ba\u00d9\u0093N\u00ee\u00af\u00fapX\u009c\u0092xI\u00caB!\u008b6\u00e7\u00b9\u001a\u008a\r\u0004\u00d3\u00a3\u0080\u00cf\u0018\u00ccod\u00a9\u00bd|\u00f2\u0089\u001d\u008b\u00c4|\u008d\u00da\u001a\u00ac\u00fe^\u0003\u00054\u00b0_\u00fb\u00cfp\u00bf\u00b3\u00fe\u00ea\u00bfV\u0083+s\u00cd\u00ab\u00c5vB\u00d5\u00e7\u00ad\u00b1/\u00d9\u001e\u00b8\u0014\u00ea//\u009d\u0089\u009dX\u00df\u00aa\u00b0\u009b\u00fc\u00ac\u008b\u00db\u009bfg\f\u00f6\u00fa\u00cb\u0082\"\u00d8/:\u0016\r\u0003V }\u00fcR\u00fa\u00bd6\u00f4/#>\u00ce\u00beu\u00b8v\u00b8\u00bc\u00ae\u00a0e\u00fa5}F\u0096y\u00ee\n\u0004<~\u00a6E\u0005/e\u008b\u00e8\u0019Z\u00a8\u00cfm\u009d\u00f3\u00da\u0094\u008es\u00b5\u00f6\u00c4\u00d5I<\u00baH\u0016\u00e1>\u00ca\u00a4\u00a0z\u00d2\u00d6\u00db\u009c\u00e0UH\u00f4\u0006\u00bax\u00cb\u0012\u00be\u00b1\u00b9\u0002\u00f3\u0086\u0095N\u0090i\u00b3\u008fH0\u00bc\u00ee\u0082.\u00d2-\u0005?\u00cb\u00b0\u00caM\u001a\u0087\u001c\u00f5\u00ae\u0096\"+\u0015\u0011\u0011\u00e77\u00b7\u0086P\u00c6\u0005\u00a9&\u00e2\u009e\u00e93\u0088+4\u00f1a\u0089\u00e0\u00cemR\u0089\u00e9\u00faG6\u00e09\u00c4KtP\u00dbr~\u009f:\b\u00a13\u0090\u00c3\u0082\u00eet=>\u008d\u00bb\u0013\u00ba\rw\u00e0K\u00a5vf\u001e\u00a0\u0000\u001dw\u00eb\u00ad\\hz\u00cd\u009d\u00d97\u00cb\u00bfl".length();
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
                    var6_5 = "\u00b1>V\u001fZ#\u00f4\u00fe'H\u00f2\u00e9;\u00be;\u00dc";
                    var7_6 = "\u00b1>V\u001fZ#\u00f4\u00fe'H\u00f2\u00e9;\u00be;\u00dc".length();
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
        dG.nmNyF = var8_3;
        dG.CelqF = new Integer[62];
    }

    @hG
    public void alt(hl hl2) {
        Entity entity = hl2.bcM();
        hl2.bdX(this.alv(entity));
    }

    @Override
    public void aaj() {
        super.aaj();
        ja.byJ();
    }

    private static CallSite alB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dG" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void alr(gr gr2) {
        long l2 = nALOH ^ 0x415D8D023DC6L;
        try {
            if (this.alx(gr2.bbr())) {
                gr2.bdX(true);
            }
        }
        catch (MatchException matchException) {
            throw dG.aly(matchException);
        }
    }

    @hG
    public void alu(hm hm2) {
        block5: {
            block4: {
                long l2 = nALOH ^ 0x4F5AE2A6A1D4L;
                int[] nArray = ee.arS();
                try {
                    try {
                        if (nArray != null) break block4;
                        if (!this.alx(hm2.bcN())) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dG.aly(matchException);
                    }
                    hm2.bdX(true);
                }
                catch (MatchException matchException) {
                    throw dG.aly(matchException);
                }
            }
            hm2.bcS(VoxelShapes.empty());
        }
    }

    private static int alA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dG.alz(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private boolean alv(Entity entity) {
        boolean bl2;
        block38: {
            block39: {
                int[] nArray;
                block36: {
                    block37: {
                        block34: {
                            block35: {
                                block32: {
                                    block33: {
                                        long l2 = nALOH ^ 0x379D3F5FCC13L;
                                        nArray = ee.arS();
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        bl2 = this.DsCRe.TC();
                                                        if (nArray != null) break block32;
                                                        if (!bl2) break block33;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dG.aly(matchException);
                                                    }
                                                    bl2 = entity instanceof AbstractDecorationEntity;
                                                    if (nArray != null) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dG.aly(matchException);
                                                }
                                                if (!bl2) break block33;
                                            }
                                            catch (MatchException matchException) {
                                                throw dG.aly(matchException);
                                            }
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw dG.aly(matchException);
                                        }
                                    }
                                    bl2 = this.WygqV.TC();
                                }
                                try {
                                    try {
                                        try {
                                            try {
                                                if (nArray != null) break block34;
                                                if (!bl2) break block35;
                                            }
                                            catch (MatchException matchException) {
                                                throw dG.aly(matchException);
                                            }
                                            bl2 = entity instanceof ArmorStandEntity;
                                            if (nArray != null) break block34;
                                        }
                                        catch (MatchException matchException) {
                                            throw dG.aly(matchException);
                                        }
                                        if (!bl2) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw dG.aly(matchException);
                                    }
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw dG.aly(matchException);
                                }
                            }
                            bl2 = this.lejDU.TC();
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (nArray != null) break block36;
                                        if (!bl2) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw dG.aly(matchException);
                                    }
                                    bl2 = entity instanceof AbstractMinecartEntity;
                                    if (nArray != null) break block36;
                                }
                                catch (MatchException matchException) {
                                    throw dG.aly(matchException);
                                }
                                if (!bl2) break block37;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                    }
                    bl2 = this.LGsCc.TC();
                }
                try {
                    try {
                        try {
                            try {
                                if (nArray != null) break block38;
                                if (!bl2) break block39;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            bl2 = entity instanceof FallingBlockEntity;
                            if (nArray != null) break block38;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                        if (!bl2) break block39;
                    }
                    catch (MatchException matchException) {
                        throw dG.aly(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw dG.aly(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static int alz(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6CFC;
        if (CelqF[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = nmNyF[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])zJQww.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    zJQww.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dG", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dG.CelqF[n3] = n4;
        }
        return CelqF[n3];
    }

    public boolean alx(BlockState blockState) {
        boolean bl2;
        block48: {
            block49: {
                int[] nArray;
                Block block;
                block46: {
                    block47: {
                        block44: {
                            block45: {
                                block42: {
                                    block43: {
                                        block40: {
                                            block41: {
                                                long l2 = nALOH ^ 0xF655FCF715CL;
                                                block = blockState.getBlock();
                                                nArray = ee.arS();
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                bl2 = this.gpExe.TC();
                                                                if (nArray != null) break block40;
                                                                if (!bl2) break block41;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dG.aly(matchException);
                                                            }
                                                            bl2 = block instanceof AbstractSignBlock;
                                                            if (nArray != null) break block40;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dG.aly(matchException);
                                                        }
                                                        if (!bl2) break block41;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dG.aly(matchException);
                                                    }
                                                    return true;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dG.aly(matchException);
                                                }
                                            }
                                            bl2 = this.IJUZj.TC();
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        if (nArray != null) break block42;
                                                        if (!bl2) break block43;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dG.aly(matchException);
                                                    }
                                                    bl2 = block instanceof AbstractBannerBlock;
                                                    if (nArray != null) break block42;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dG.aly(matchException);
                                                }
                                                if (!bl2) break block43;
                                            }
                                            catch (MatchException matchException) {
                                                throw dG.aly(matchException);
                                            }
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw dG.aly(matchException);
                                        }
                                    }
                                    bl2 = this.tXJgP.TC();
                                }
                                try {
                                    try {
                                        try {
                                            try {
                                                if (nArray != null) break block44;
                                                if (!bl2) break block45;
                                            }
                                            catch (MatchException matchException) {
                                                throw dG.aly(matchException);
                                            }
                                            bl2 = block instanceof LeverBlock;
                                            if (nArray != null) break block44;
                                        }
                                        catch (MatchException matchException) {
                                            throw dG.aly(matchException);
                                        }
                                        if (!bl2) break block45;
                                    }
                                    catch (MatchException matchException) {
                                        throw dG.aly(matchException);
                                    }
                                    return true;
                                }
                                catch (MatchException matchException) {
                                    throw dG.aly(matchException);
                                }
                            }
                            bl2 = this.ZJUtT.TC();
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (nArray != null) break block46;
                                        if (!bl2) break block47;
                                    }
                                    catch (MatchException matchException) {
                                        throw dG.aly(matchException);
                                    }
                                    bl2 = block instanceof ButtonBlock;
                                    if (nArray != null) break block46;
                                }
                                catch (MatchException matchException) {
                                    throw dG.aly(matchException);
                                }
                                if (!bl2) break block47;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                    }
                    bl2 = this.TNPUn.TC();
                }
                try {
                    try {
                        try {
                            try {
                                if (nArray != null) break block48;
                                if (!bl2) break block49;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            bl2 = block instanceof DecoratedPotBlock;
                            if (nArray != null) break block48;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                        if (!bl2) break block49;
                    }
                    catch (MatchException matchException) {
                        throw dG.aly(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw dG.aly(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    @hG
    public void alq(he he2) {
        Entity entity = he2.bcx();
        he2.bdX(this.alv(entity));
    }

    private static MatchException aly(MatchException matchException) {
        return matchException;
    }

    private boolean alw(BlockEntity blockEntity) {
        boolean bl2;
        block18: {
            block19: {
                int[] nArray;
                block16: {
                    block17: {
                        long l2 = nALOH ^ 0x65E5CD393FA9L;
                        nArray = ee.arS();
                        try {
                            try {
                                try {
                                    try {
                                        bl2 = this.gpExe.TC();
                                        if (nArray != null) break block16;
                                        if (!bl2) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw dG.aly(matchException);
                                    }
                                    bl2 = blockEntity instanceof SignBlockEntity;
                                    if (nArray != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw dG.aly(matchException);
                                }
                                if (!bl2) break block17;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                    }
                    bl2 = this.IJUZj.TC();
                }
                try {
                    try {
                        try {
                            try {
                                if (nArray != null) break block18;
                                if (!bl2) break block19;
                            }
                            catch (MatchException matchException) {
                                throw dG.aly(matchException);
                            }
                            bl2 = blockEntity instanceof BannerBlockEntity;
                            if (nArray != null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw dG.aly(matchException);
                        }
                        if (!bl2) break block19;
                    }
                    catch (MatchException matchException) {
                        throw dG.aly(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw dG.aly(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public void YO() {
        super.YO();
        ja.byJ();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dG.class, "alA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

