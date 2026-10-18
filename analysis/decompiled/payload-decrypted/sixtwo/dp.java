/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.network.ClientPlayNetworkHandler
 *  net.minecraft.client.network.PlayerListEntry
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.network.ClientPlayNetworkHandler;
import net.minecraft.client.network.PlayerListEntry;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.cN;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hu;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jJ;
import sixtwo.jf;
import sixtwo.kt;
import sixtwo.ku;
import sixtwo.kv;
import sixtwo.kw;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lG;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.rD;

public class dp
extends gg
implements lA,
lG {
    private final cC klXSH;
    private final cJ WYPZN;
    private final ct VLWfc;
    private final cu SNclR;
    private final cu wjLCc;
    private final cG EscPj;
    private final cC ClxmS;
    private final cJ kUvkk;
    private final cD yDgej;
    private final List<AbstractClientPlayerEntity> FlxVs;
    private final List<AbstractClientPlayerEntity> mBTku;
    private final List<PlayerListEntry> KrDsH;
    private final Map<UUID, kt> JTVMZ;
    private final mT YUykz;
    private static final long kiuBc;
    private static final String[] cAXko;
    private static final String[] JGXnk;
    private static final Map GLQcs;
    private static final long[] RBCIZ;
    private static final Integer[] rpAoJ;
    private static final Map ZMhFd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dp() {
        long l2 = kiuBc ^ 0x2BF8D9084634L;
        super(gf.aZL((int)99, false, gh.nOCvV));
        int[] nArray = new int[13];
        nArray[0] = (int)82;
        nArray[1] = (int)101;
        nArray[2] = (int)102;
        nArray[3] = (int)114;
        nArray[4] = (int)101;
        nArray[5] = (int)115;
        nArray[6] = (int)104;
        nArray[7] = (int)32;
        nArray[8] = (int)84;
        nArray[9] = (int)105;
        nArray[10] = (int)109;
        nArray[11] = (int)101;
        nArray[12] = (int)114;
        this.klXSH = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(0.0).Vx(100.0).VA(5.0).Vz((String)((Object)" s"));
        int[] nArray2 = new int[18];
        nArray2[0] = (int)76;
        nArray2[1] = (int)111;
        nArray2[2] = (int)103;
        nArray2[3] = (int)105;
        nArray2[4] = (int)110;
        nArray2[5] = (int)32;
        nArray2[6] = (int)78;
        nArray2[7] = (int)111;
        nArray2[8] = (int)116;
        nArray2[9] = (int)105;
        nArray2[10] = (int)102;
        nArray2[11] = (int)105;
        nArray2[12] = (int)99;
        nArray2[13] = (int)97;
        nArray2[14] = (int)116;
        nArray2[15] = (int)105;
        nArray2[16] = (int)111;
        nArray2[17] = (int)110;
        this.WYPZN = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[20];
        nArray3[0] = (int)80;
        nArray3[1] = (int)111;
        nArray3[2] = (int)115;
        nArray3[3] = (int)105;
        nArray3[4] = (int)116;
        nArray3[5] = (int)105;
        nArray3[6] = (int)111;
        nArray3[7] = (int)110;
        nArray3[8] = (int)32;
        nArray3[9] = (int)82;
        nArray3[10] = (int)101;
        nArray3[11] = (int)110;
        nArray3[12] = (int)100;
        nArray3[13] = (int)101;
        nArray3[14] = (int)114;
        nArray3[15] = (int)32;
        nArray3[16] = (int)77;
        nArray3[17] = (int)111;
        nArray3[18] = (int)100;
        nArray3[19] = (int)101;
        this.VLWfc = new ct(this, mr.clS(nArray3));
        int[] nArray4 = new int[6];
        nArray4[0] = (int)83;
        nArray4[1] = (int)105;
        nArray4[2] = (int)109;
        nArray4[3] = (int)112;
        nArray4[4] = (int)108;
        nArray4[5] = (int)101;
        this.SNclR = new cu(this.VLWfc, mr.clS(nArray4));
        int[] nArray5 = new int[8];
        nArray5[0] = (int)84;
        nArray5[1] = (int)101;
        nArray5[2] = (int)120;
        nArray5[3] = (int)116;
        nArray5[4] = (int)117;
        nArray5[5] = (int)114;
        nArray5[6] = (int)101;
        nArray5[7] = (int)100;
        this.wjLCc = new cu(this.VLWfc, mr.clS(nArray5));
        int[] nArray6 = new int[14];
        nArray6[0] = (int)80;
        nArray6[1] = (int)111;
        nArray6[2] = (int)115;
        nArray6[3] = (int)105;
        nArray6[4] = (int)116;
        nArray6[5] = (int)105;
        nArray6[6] = (int)111;
        nArray6[7] = (int)110;
        nArray6[8] = (int)32;
        nArray6[9] = (int)67;
        nArray6[10] = (int)111;
        nArray6[11] = (int)108;
        nArray6[12] = (int)111;
        nArray6[13] = (int)114;
        this.EscPj = new cG(this, mr.clS(nArray6)).Uf(mG.hoGuU).Uh(false);
        int[] nArray7 = new int[6];
        nArray7[0] = (int)72;
        nArray7[1] = (int)101;
        nArray7[2] = (int)105;
        nArray7[3] = (int)103;
        nArray7[4] = (int)104;
        nArray7[5] = (int)116;
        this.ClxmS = new cC(this, mr.clS(nArray7)).Vy(0.1).Vw(0.1).Vx(3.0).VA(2.8).Vz((String)((Object)" blocks"));
        int[] nArray8 = new int[10];
        nArray8[0] = (int)66;
        nArray8[1] = (int)97;
        nArray8[2] = (int)99;
        nArray8[3] = (int)107;
        nArray8[4] = (int)103;
        nArray8[5] = (int)114;
        nArray8[6] = (int)111;
        nArray8[7] = (int)117;
        nArray8[8] = (int)110;
        nArray8[9] = (int)100;
        this.kUvkk = new cJ(this, mr.clS(nArray8)).WE(false);
        int[] nArray9 = new int[11];
        nArray9[0] = (int)67;
        nArray9[1] = (int)108;
        nArray9[2] = (int)101;
        nArray9[3] = (int)97;
        nArray9[4] = (int)114;
        nArray9[5] = (int)32;
        nArray9[6] = (int)83;
        nArray9[7] = (int)112;
        nArray9[8] = (int)111;
        nArray9[9] = (int)116;
        nArray9[10] = (int)115;
        this.yDgej = new cD(this, mr.clS(nArray9)).VO((int)-999);
        this.FlxVs = new ArrayList<AbstractClientPlayerEntity>();
        this.mBTku = new ArrayList<AbstractClientPlayerEntity>();
        this.KrDsH = new ArrayList<PlayerListEntry>();
        this.JTVMZ = new HashMap<UUID, kt>();
        this.YUykz = mT.cpz();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    dp.kiuBc = gb.aYR(2804131931845047427L, 8476271410885623961L, MethodHandles.lookup().lookupClass()).a(90035956049030L);
                    dp.GLQcs = new HashMap<K, V>(13);
                    var11 = dp.kiuBc ^ 34042933517339L;
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
                    var17_5 = "\u00b0+\u001a\u00fe^h9G]\u0081\u00c2Y\u00e6\u00cd\u0016t\u0010urr\u00de\u000fF\u0003z\u00b1\u000b\u00d4\u0016\u0003\u0019\u008dF";
                    var19_6 = "\u00b0+\u001a\u00fe^h9G]\u0081\u00c2Y\u00e6\u00cd\u0016t\u0010urr\u00de\u000fF\u0003z\u00b1\u000b\u00d4\u0016\u0003\u0019\u008dF".length();
                    var16_7 = 16;
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
                        var20_3[var18_4++] = dp.ahG(var21_9).intern();
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
                dp.cAXko = var20_3;
                dp.JGXnk = new String[2];
                dp.ZMhFd = new HashMap<K, V>(13);
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
                var6_12 = new long[85];
                var3_13 = 0;
                var4_14 = "\u0080T\u00dbF\u00f5\u0090\u00b7\u00f8lM\u0000\u0019d\u009d\u00e7\u00de;\\\u0094\u00fa!\u00d3$m\u00c8K\u0007?\u0012\u007fU\u00b9\u00b4\u0013\u00e4\u0095\u000b\u0090R'@\u00cf\u0017)h\u009aCS\u00ba>\u00b94\u0014\b\u0090\u0007nfu\u0085Dql\u00d9J\u0096\u00f53\u00af\u00e6\u0093\u0002\u00b6el\u0013N[\u0092\u00e9\u00c4\u000e\n\u00d6\u00bc\u00a6zM\u00cb\u00ac\u0004\u00e3\u009eR\u00cb\u00f5\u00ebeg\u00c7^\u0014\u0018\u00bce\u00e7By\u0004;\u0016\u001f\u00aa\u0096O\u008b\u00bd\u00ac\u0001j\u00e2\u00a8\u00e4\u00b2OS\u0015\u00b8\u0091\u00aa\u00c5\u00a6\u00d3>\u009d\u00b4L\u0088[\u00e9\u00b1\u00af\u00bao[\u00cf\u0002y\u007f$\u00da^\u00f6\u008e\u00afw\u00c06q\u00ef\u00fe\u0098\u0011%\u0094\u00a7\u009d\u00b7I\\\u0005\u0097Q\u0091K,\u0097\u00a2r\u00bbK\u0085\u0019\\\u00ec\u00de\u00df\u00c4\u0083\u00c2\u0095\u00e4L\u00cf\u00ec4\u0083mg\u00b5\"3\u0001\u00bdu@\u0090\u00a1\u00a0\u009f\u00be\u00a5\u00ce\u00db\u00e9\u0090\u009b\u00e9\u00e4\u00f1Vn\u001ed\u00ef}/f`\u001c\u009d\u001d\u009a1\u00ba\u00f9\u00e5\u00f56\u00aa\u00a1\u001cWi\u001br.\u00f8\u00dc8O\u00ab\u00a8xx\u00cf\u00b8 Q] \u008f\u009d\u0010\u0080\u009c\u0000\u00d7\u007f\u0014\u00b88\u000e\u00e3%\u00e9Ibf\u00f0r_N\u00f8]\u00d4\tD\u00e9\u0085\u00e6\u00fa\u00b3\u0087\u00c3\u00c1I\u00f5EO?\u00138\u001by\u0004\u00a6\u00ab o\u0007V\u00e4K\u008e\u0006\u0006\u009c\u00d0\u008f\u008e(\u0014\u00bb\u00e5W\u00b8\u00b3DV\u00ebK]TU\u00a7\u00ff[\u00d4\u00c1z\u009e\u0091\u009bd\u00ec\u00b9\u00ab\u009f#\u008a\u00a0\u00f9\u00d1\u00e7<\u00c0v\u0085:\u00d0{pd\u0002\u00eft\u00a7\u0086\u00c5\u00b4\u00ae%\u00fe\u00f8\u00b6\u001a\u00fd\u00cf\u00ce\u001c~\u0093\u009c\tl\u001bf\u00f1\u00d8:m'\u0007\u00f6\u001d\u00fe\u001c\u00e5Np\u00e7\u00ed\u0015\u00e0#\u00a3\u0083f\u0014\u009a;\"\u00d0?W\u00a1 /\u0083x\u00ed\u00ef\u00d6\u00d2*\u0019\u00dd\u000e\t\u00e3\u00ac \u00e0\u00e9Q\u00fd\u00b1\u00e0\u0005RP\u009f\u009b\u001b\u00c6U\u00125\u0096\u00f3 \u0015\u00a8\u00d0\u0001\u0015\u0013\u009f\u00c2\f@\u001c\u00cf\u00e6+\u00da2;\u0083\u0088@<K\u00e7{\u007fJL\u00e2b$\u00e5\bw\u0011\u00a1\u0093\u00c3\u00cc\u00ebk6\u00d3\u001d?\rGq\u00cc\u0091\u00f0\u00b4\b\u00f0e\u0012\u00d0{\u0083\u00c4)v\u0001\u00cc\u00ddvO\u000b\u00bf\u00ce\u00e8X0T\u0015T\u00df\u00aa\u0089\f\u001f\r\u0097\u00d6\u00e7\u00fa2\u00ed\u00e208Y\u00a8\u0083\u001c>\b\"D\u0000\"\u0086U\" @\u00e8\u0004\u0005\u00f1\u0014F(\u00c9\u000e\u00e7\u00cc<\u00ce\u0092\u00d1\u0096\u00ba>\u00be\u00b0J\u00fa/\u00edO\u0002\u00edI\u00aen\u001e-\u0017\u00c6m\u00a0\u008cXG\u00bd\u008c,[\u000f\u00f6{R3\u00a38\u00fe\u00c1\u00d9`\u00cd\t\u00da\u0099\u00c8\u00d3L\u0087\u00d5X7\u00c3\u00ae\u00f1\u000b\u00fe\u00bc\u0092\u008a\u00f9\u00a6\\\u0084\u008b\u00d8\u0016\u00ab\u00d7,\u0091\u007fT+\u00c6\u00e7\u00c4\u00bc\u0098\u0002\u0081\u001b\u00fc\u001e\u00ec\u00f9\u00b9\u008ank\u00e0\u008ct\u00f5";
                var5_15 = "\u0080T\u00dbF\u00f5\u0090\u00b7\u00f8lM\u0000\u0019d\u009d\u00e7\u00de;\\\u0094\u00fa!\u00d3$m\u00c8K\u0007?\u0012\u007fU\u00b9\u00b4\u0013\u00e4\u0095\u000b\u0090R'@\u00cf\u0017)h\u009aCS\u00ba>\u00b94\u0014\b\u0090\u0007nfu\u0085Dql\u00d9J\u0096\u00f53\u00af\u00e6\u0093\u0002\u00b6el\u0013N[\u0092\u00e9\u00c4\u000e\n\u00d6\u00bc\u00a6zM\u00cb\u00ac\u0004\u00e3\u009eR\u00cb\u00f5\u00ebeg\u00c7^\u0014\u0018\u00bce\u00e7By\u0004;\u0016\u001f\u00aa\u0096O\u008b\u00bd\u00ac\u0001j\u00e2\u00a8\u00e4\u00b2OS\u0015\u00b8\u0091\u00aa\u00c5\u00a6\u00d3>\u009d\u00b4L\u0088[\u00e9\u00b1\u00af\u00bao[\u00cf\u0002y\u007f$\u00da^\u00f6\u008e\u00afw\u00c06q\u00ef\u00fe\u0098\u0011%\u0094\u00a7\u009d\u00b7I\\\u0005\u0097Q\u0091K,\u0097\u00a2r\u00bbK\u0085\u0019\\\u00ec\u00de\u00df\u00c4\u0083\u00c2\u0095\u00e4L\u00cf\u00ec4\u0083mg\u00b5\"3\u0001\u00bdu@\u0090\u00a1\u00a0\u009f\u00be\u00a5\u00ce\u00db\u00e9\u0090\u009b\u00e9\u00e4\u00f1Vn\u001ed\u00ef}/f`\u001c\u009d\u001d\u009a1\u00ba\u00f9\u00e5\u00f56\u00aa\u00a1\u001cWi\u001br.\u00f8\u00dc8O\u00ab\u00a8xx\u00cf\u00b8 Q] \u008f\u009d\u0010\u0080\u009c\u0000\u00d7\u007f\u0014\u00b88\u000e\u00e3%\u00e9Ibf\u00f0r_N\u00f8]\u00d4\tD\u00e9\u0085\u00e6\u00fa\u00b3\u0087\u00c3\u00c1I\u00f5EO?\u00138\u001by\u0004\u00a6\u00ab o\u0007V\u00e4K\u008e\u0006\u0006\u009c\u00d0\u008f\u008e(\u0014\u00bb\u00e5W\u00b8\u00b3DV\u00ebK]TU\u00a7\u00ff[\u00d4\u00c1z\u009e\u0091\u009bd\u00ec\u00b9\u00ab\u009f#\u008a\u00a0\u00f9\u00d1\u00e7<\u00c0v\u0085:\u00d0{pd\u0002\u00eft\u00a7\u0086\u00c5\u00b4\u00ae%\u00fe\u00f8\u00b6\u001a\u00fd\u00cf\u00ce\u001c~\u0093\u009c\tl\u001bf\u00f1\u00d8:m'\u0007\u00f6\u001d\u00fe\u001c\u00e5Np\u00e7\u00ed\u0015\u00e0#\u00a3\u0083f\u0014\u009a;\"\u00d0?W\u00a1 /\u0083x\u00ed\u00ef\u00d6\u00d2*\u0019\u00dd\u000e\t\u00e3\u00ac \u00e0\u00e9Q\u00fd\u00b1\u00e0\u0005RP\u009f\u009b\u001b\u00c6U\u00125\u0096\u00f3 \u0015\u00a8\u00d0\u0001\u0015\u0013\u009f\u00c2\f@\u001c\u00cf\u00e6+\u00da2;\u0083\u0088@<K\u00e7{\u007fJL\u00e2b$\u00e5\bw\u0011\u00a1\u0093\u00c3\u00cc\u00ebk6\u00d3\u001d?\rGq\u00cc\u0091\u00f0\u00b4\b\u00f0e\u0012\u00d0{\u0083\u00c4)v\u0001\u00cc\u00ddvO\u000b\u00bf\u00ce\u00e8X0T\u0015T\u00df\u00aa\u0089\f\u001f\r\u0097\u00d6\u00e7\u00fa2\u00ed\u00e208Y\u00a8\u0083\u001c>\b\"D\u0000\"\u0086U\" @\u00e8\u0004\u0005\u00f1\u0014F(\u00c9\u000e\u00e7\u00cc<\u00ce\u0092\u00d1\u0096\u00ba>\u00be\u00b0J\u00fa/\u00edO\u0002\u00edI\u00aen\u001e-\u0017\u00c6m\u00a0\u008cXG\u00bd\u008c,[\u000f\u00f6{R3\u00a38\u00fe\u00c1\u00d9`\u00cd\t\u00da\u0099\u00c8\u00d3L\u0087\u00d5X7\u00c3\u00ae\u00f1\u000b\u00fe\u00bc\u0092\u008a\u00f9\u00a6\\\u0084\u008b\u00d8\u0016\u00ab\u00d7,\u0091\u007fT+\u00c6\u00e7\u00c4\u00bc\u0098\u0002\u0081\u001b\u00fc\u001e\u00ec\u00f9\u00b9\u008ank\u00e0\u008ct\u00f5".length();
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
                    var4_14 = "\u0099\u0083\u00dfY\u00818\u00cd*\u00b65{\u0083{\u001aww";
                    var5_15 = "\u0099\u0083\u00dfY\u00818\u00cd*\u00b65{\u0083{\u001aww".length();
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
        dp.RBCIZ = var6_12;
        dp.rpAoJ = new Integer[85];
    }

    @Override
    public void aaj() {
        block4: {
            block5: {
                long l2 = kiuBc ^ 0x67D5D46453F1L;
                iS[] iSArray = dh.afl();
                super.aaj();
                iS[] iSArray2 = iSArray;
                try {
                    try {
                        this.ahx();
                        if (iSArray2 != null) break block4;
                        if (rD.dlmvG.getNetworkHandler() == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                    this.KrDsH.addAll(rD.dlmvG.getNetworkHandler().getPlayerList());
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
            }
            this.FlxVs.clear();
            this.JTVMZ.clear();
        }
    }

    private static CallSite ahJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dp" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void ahx() {
        dp dp2;
        block4: {
            block5: {
                long l2 = kiuBc ^ 0x31827F0210CBL;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        dp2 = this;
                        if (iSArray != null) break block4;
                        if (dp2.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
            }
            dp2 = this;
        }
        dp2.mBTku.clear();
        Iterable iterable = rD.dlmvG.world.getEntities();
        StreamSupport.stream(iterable.spliterator(), false).filter(entity -> entity instanceof AbstractClientPlayerEntity).map(entity -> (AbstractClientPlayerEntity)entity).forEach(this.mBTku::add);
    }

    @hG
    public void ahs(hu hu2) {
        block15: {
            boolean bl2;
            AbstractClientPlayerEntity abstractClientPlayerEntity;
            Object object;
            long l2;
            block18: {
                iS[] iSArray;
                block16: {
                    block17: {
                        Entity entity;
                        block14: {
                            l2 = kiuBc ^ 0x621A4DCB6F77L;
                            iSArray = dh.afl();
                            try {
                                if (this.FlxVs.isEmpty()) {
                                    return;
                                }
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                            object = hu2.bdj();
                            try {
                                try {
                                    entity = object;
                                    if (iSArray != null) break block14;
                                    if (!(entity instanceof AbstractClientPlayerEntity)) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw dp.ahF(matchException);
                                }
                                entity = object;
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                        }
                        abstractClientPlayerEntity = (AbstractClientPlayerEntity)entity;
                        try {
                            bl2 = rD.dml().aLp((PlayerEntity)abstractClientPlayerEntity);
                            if (iSArray != null) break block16;
                            if (!bl2) break block17;
                        }
                        catch (MatchException matchException) {
                            throw dp.ahF(matchException);
                        }
                        return;
                    }
                    bl2 = this.FlxVs.contains(abstractClientPlayerEntity);
                }
                try {
                    try {
                        if (iSArray != null) break block18;
                        if (!bl2) break block15;
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                    this.FlxVs.remove(abstractClientPlayerEntity);
                    this.JTVMZ.remove(abstractClientPlayerEntity.getUuid());
                    bl2 = this.WYPZN.WF();
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
            }
            if (bl2) {
                object = abstractClientPlayerEntity.getGameProfile().name();
                int[][] nArrayArray = new int[3][];
                int[] nArray = new int[dp.ahM("c", (int)30404, (long)(0x34BAF829E9BA59AL ^ l2))];
                nArray[0] = (int)dp.ahM("c", (int)9164, (long)(0x18603C60414E70E0L ^ l2));
                nArray[1] = (int)dp.ahM("c", (int)8906, (long)(0x257E386D473771ECL ^ l2));
                nArray[2] = (int)dp.ahM("c", (int)29100, (long)(0x5D47B59757E322FFL ^ l2));
                nArray[3] = (int)dp.ahM("c", (int)28477, (long)(0x448645ABB8B9BC6CL ^ l2));
                nArray[4] = (int)dp.ahM("c", (int)944, (long)(0x1DF846FA720F50E8L ^ l2));
                nArray[5] = (int)dp.ahM("c", (int)5810, (long)(0x6B22DC285B97C5A9L ^ l2));
                nArray[dp.ahM("c", (int)23285, (long)(0x6BF829EC57C689BCL ^ l2))] = (int)dp.ahM("c", (int)7074, (long)(0x2E30B160EBDA48A3L ^ l2));
                nArrayArray[0] = nArray;
                nArrayArray[1] = mZ.csh((String)object);
                int[] nArray2 = new int[dp.ahM("c", (int)32267, (long)(0x5C5A4A7FC790AD13L ^ l2))];
                nArray2[0] = (int)dp.ahM("c", (int)7074, (long)(0x2E30B160EBDA48A3L ^ l2));
                nArray2[1] = (int)dp.ahM("c", (int)8906, (long)(0x257E386D473771ECL ^ l2));
                nArray2[2] = (int)dp.ahM("c", (int)19412, (long)(0x63D148D894FD18D1L ^ l2));
                nArray2[3] = (int)dp.ahM("c", (int)32032, (long)(0x4AFC8EC5F4122E0BL ^ l2));
                nArray2[4] = (int)dp.ahM("c", (int)32032, (long)(0x4AFC8EC5F4122E0BL ^ l2));
                nArray2[5] = (int)dp.ahM("c", (int)944, (long)(0x1DF846FA720F50E8L ^ l2));
                nArray2[dp.ahM("c", (int)23285, (long)(0x6BF829EC57C689BCL ^ l2))] = (int)dp.ahM("c", (int)32185, (long)(0x61C1F67730AA2E98L ^ l2));
                nArray2[dp.ahM("c", (int)30404, (long)(0x34BAF829E9BA59AL ^ l2))] = (int)dp.ahM("c", (int)7074, (long)(0x2E30B160EBDA48A3L ^ l2));
                nArray2[dp.ahM("c", (int)19582, (long)(0x4FD27D60DDA71F7EL ^ l2))] = (int)dp.ahM("c", (int)12928, (long)(0x74E3550B7FD96186L ^ l2));
                nArray2[dp.ahM("c", (int)15968, (long)(0x1E890D7F0BD76D43L ^ l2))] = (int)dp.ahM("c", (int)8865, (long)(0x7F02E1EEC03F71B2L ^ l2));
                nArray2[dp.ahM("c", (int)26193, (long)(0x11254124F1F3552L ^ l2))] = (int)dp.ahM("c", (int)17976, (long)(0x12BA54FFA0691501L ^ l2));
                nArrayArray[2] = nArray2;
                cN.XF(mZ.csf(nArrayArray));
            }
        }
    }

    @hG
    public void aht(gH.th th2) {
        block10: {
            block11: {
                ClientPlayNetworkHandler clientPlayNetworkHandler;
                iS[] iSArray;
                block9: {
                    long l2 = kiuBc ^ 0x370B0F9AA430L;
                    iSArray = dh.afl();
                    try {
                        if (!this.bab()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                    clientPlayNetworkHandler = rD.dlmvG.getNetworkHandler();
                    int n2 = this.klXSH.VC() * dp.ahM("c", (int)31105, (long)(0x4187152DDFFCE1E3L ^ l2));
                    try {
                        try {
                            if (clientPlayNetworkHandler != null && this.YUykz.cpD(n2)) break block9;
                        }
                        catch (MatchException matchException) {
                            throw dp.ahF(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                }
                Collection collection = clientPlayNetworkHandler.getPlayerList();
                try {
                    if (iSArray != null) break block10;
                    if (collection.size() == this.KrDsH.size()) break block11;
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
                Set set = collection.stream().map(playerListEntry -> playerListEntry.getProfile().id()).collect(Collectors.toSet());
                this.mBTku.stream().filter(abstractClientPlayerEntity -> {
                    boolean bl2;
                    block2: {
                        block3: {
                            long l2 = kiuBc ^ 0x1744ED124FFBL;
                            iS[] iSArray = dh.afl();
                            try {
                                bl2 = set.contains(abstractClientPlayerEntity.getUuid());
                                if (iSArray != null) break block2;
                                if (bl2) break block3;
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                            bl2 = true;
                            break block2;
                        }
                        bl2 = false;
                    }
                    return bl2;
                }).filter(abstractClientPlayerEntity -> {
                    boolean bl2;
                    block2: {
                        block3: {
                            long l2 = kiuBc ^ 0x2BCFB8E92ECEL;
                            iS[] iSArray = dh.afl();
                            try {
                                bl2 = rD.dml().aLp((PlayerEntity)abstractClientPlayerEntity);
                                if (iSArray != null) break block2;
                                if (bl2) break block3;
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                            bl2 = true;
                            break block2;
                        }
                        bl2 = false;
                    }
                    return bl2;
                }).forEach(abstractClientPlayerEntity -> {
                    this.FlxVs.add((AbstractClientPlayerEntity)abstractClientPlayerEntity);
                    this.JTVMZ.computeIfAbsent(abstractClientPlayerEntity.getUuid(), uUID -> new kt(ku.qnXgu)).bQZ(abstractClientPlayerEntity.getEntityPos(), (AbstractClientPlayerEntity)abstractClientPlayerEntity);
                });
                this.KrDsH.clear();
                this.KrDsH.addAll(collection);
                this.ahx();
            }
            this.YUykz.cpB();
        }
    }

    @hG
    public void ahv(gk gk2) {
        boolean bl2;
        iS[] iSArray;
        block12: {
            block13: {
                long l2 = kiuBc ^ 0x10CDE4CFE5D1L;
                iSArray = dh.afl();
                try {
                    bl2 = this.bab();
                    if (iSArray != null) break block12;
                    if (bl2) break block13;
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
                return;
            }
            bl2 = this.FlxVs.isEmpty();
        }
        if (bl2) {
            return;
        }
        lC lC2 = gk2.baT();
        lq lq2 = lE.WTzbi.bYM(9.0f);
        mG mG2 = rD.dlM().bjb();
        for (AbstractClientPlayerEntity abstractClientPlayerEntity : this.FlxVs) {
            block16: {
                float f2;
                float f3;
                String string;
                block17: {
                    Vec2f vec2f;
                    Vec2f vec2f2;
                    block14: {
                        block15: {
                            Vec3d vec3d = abstractClientPlayerEntity.getEntityPos();
                            vec2f2 = jI.bIw(new Vec3d(vec3d.x, vec3d.y + (double)this.ClxmS.VB(), vec3d.z));
                            try {
                                try {
                                    vec2f = vec2f2;
                                    if (iSArray != null) break block14;
                                    if (vec2f != null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw dp.ahF(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                        }
                        vec2f = vec2f2;
                    }
                    float f4 = vec2f.x;
                    float f5 = vec2f2.y;
                    string = abstractClientPlayerEntity.getGameProfile().name();
                    float f6 = lq2.cao(string);
                    float f7 = f6 + 8.0f;
                    float f8 = lq2.cat() + 4.0f;
                    f3 = f4 - f6 / 2.0f;
                    f2 = f5 + jf.bAH(lq2.cat(), f8);
                    try {
                        try {
                            if (iSArray != null) break block16;
                            if (!this.kUvkk.WF()) break block17;
                        }
                        catch (MatchException matchException) {
                            throw dp.ahF(matchException);
                        }
                        lC2.ccW(f4 - f7 / 2.0f, f5, f7, f8, 1.0f, 0.0f, ld.all(3.0f), 4.0f);
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                }
                lC2.cez(lq2, string, f3, f2, mG2);
            }
            if (iSArray == null) continue;
        }
    }

    @hG
    public void ahu(go.sX sX2) {
        float f2;
        kv kv2;
        mG mG2;
        kw kw2;
        boolean bl2;
        iS[] iSArray;
        block16: {
            block17: {
                long l2 = kiuBc ^ 0x6D5AF5AEAC8DL;
                iSArray = dh.afl();
                try {
                    bl2 = this.bab();
                    if (iSArray != null) break block16;
                    if (bl2) break block17;
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
                return;
            }
            bl2 = this.FlxVs.isEmpty();
        }
        if (bl2) {
            return;
        }
        MatrixStack matrixStack = sX2.bbh();
        try {
            kw2 = kw.bRK();
            mG2 = this.EscPj.Wf();
            kv2 = this.wjLCc.SZ() ? kv.CiCMa : kv.DESOY;
        }
        catch (MatchException matchException) {
            throw dp.ahF(matchException);
        }
        try {
            f2 = this.wjLCc.SZ() ? 0.5f : 0.0f;
        }
        catch (MatchException matchException) {
            throw dp.ahF(matchException);
        }
        kw kw3 = kw2.bRP(mG2, kv2, f2);
        for (AbstractClientPlayerEntity abstractClientPlayerEntity : this.FlxVs) {
            kt kt2;
            block20: {
                kt kt3;
                block21: {
                    Object object;
                    block18: {
                        block19: {
                            try {
                                try {
                                    object = abstractClientPlayerEntity;
                                    if (iSArray != null) break block18;
                                    if (jJ.bIB((Entity)object)) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw dp.ahF(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dp.ahF(matchException);
                            }
                        }
                        object = this.JTVMZ.get(abstractClientPlayerEntity.getUuid());
                    }
                    kt3 = (kt)object;
                    try {
                        try {
                            kt2 = kt3;
                            if (iSArray != null) break block20;
                            if (kt2 != null) break block21;
                        }
                        catch (MatchException matchException) {
                            throw dp.ahF(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw dp.ahF(matchException);
                    }
                }
                kt2 = kt3.bQV(kw3);
            }
            kt2.bQQ(matrixStack, sX2.bbi(), abstractClientPlayerEntity);
            if (iSArray == null) continue;
        }
    }

    @hG
    public void ahw(gA gA2) {
        int n2;
        int n3;
        block9: {
            block10: {
                iS[] iSArray;
                block7: {
                    block8: {
                        long l2 = kiuBc ^ 0x76875B039819L;
                        iSArray = dh.afl();
                        try {
                            n3 = this.bab();
                            if (iSArray != null) break block7;
                            if (n3 != 0) break block8;
                        }
                        catch (MatchException matchException) {
                            throw dp.ahF(matchException);
                        }
                        return;
                    }
                    n3 = gA2.bbQ();
                }
                try {
                    n2 = 1;
                    if (iSArray != null) break block9;
                    if (n3 == n2) break block10;
                }
                catch (MatchException matchException) {
                    throw dp.ahF(matchException);
                }
                return;
            }
            n3 = gA2.bbP();
            n2 = this.yDgej.VP();
        }
        try {
            if (n3 == n2) {
                this.FlxVs.clear();
                this.JTVMZ.clear();
            }
        }
        catch (MatchException matchException) {
            throw dp.ahF(matchException);
        }
    }

    private static CallSite ahM(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dp" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void ahr(gM gM2) {
        this.FlxVs.clear();
        this.JTVMZ.clear();
    }

    private static MatchException ahF(MatchException matchException) {
        return matchException;
    }

    private static String ahH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1494;
        if (JGXnk[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])GLQcs.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GLQcs.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dp", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = cAXko[n3].getBytes("ISO-8859-1");
            dp.JGXnk[n3] = dp.ahG(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return JGXnk[n3];
    }

    private static String ahG(byte[] byArray) {
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

    private static int ahK(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2007;
        if (rpAoJ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = RBCIZ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ZMhFd.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZMhFd.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dp", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dp.rpAoJ[n3] = n4;
        }
        return rpAoJ[n3];
    }

    private static int ahL(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dp.ahK(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static Object ahI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dp.ahH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dp.class, "ahI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(dp.class, "ahL", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

