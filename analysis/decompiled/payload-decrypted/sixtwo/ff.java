/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.network.packet.Packet
 *  net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket
 *  net.minecraft.network.packet.c2s.play.HandSwingC2SPacket
 *  net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket
 *  net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket
 *  net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket
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
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.network.packet.Packet;
import net.minecraft.network.packet.c2s.play.ClickSlotC2SPacket;
import net.minecraft.network.packet.c2s.play.HandSwingC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractBlockC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractEntityC2SPacket;
import net.minecraft.network.packet.c2s.play.PlayerInteractItemC2SPacket;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.cA;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.fg;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.jg;
import sixtwo.ku;
import sixtwo.kw;
import sixtwo.kx;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.of;
import sixtwo.oh;
import sixtwo.rD;

public class ff
extends gg {
    private final ct cehgg;
    private final cu dYwpF;
    private final cu NuoRm;
    private final cA qWnBv;
    private final cA FUqia;
    private final cJ bAadz;
    private final cC qyvvJ;
    private final cJ fFKwZ;
    private final cJ Bfvhw;
    private final kx AhpMu;
    private final Queue<Packet<?>> zkfXg;
    private final mT uiKAR;
    private Vec3d qBKIn;
    private boolean IydTB;
    private int lseaG;
    private Box Stryf;
    private boolean nlYuR;
    private static final long ikRrf;
    private static final String[] qVORx;
    private static final String[] snpFS;
    private static final Map mIJyD;
    private static final long[] HcwIb;
    private static final Integer[] maZct;
    private static final Map yGhuZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ff() {
        long l2 = ikRrf ^ 0x3DDDE8C8A930L;
        super(gf.aZL((int)18, false, gh.xwjCw).aZS(false));
        this.cehgg = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        int[] nArray = new int[6];
        nArray[0] = (int)78;
        nArray[1] = (int)111;
        nArray[2] = (int)114;
        nArray[3] = (int)109;
        nArray[4] = (int)97;
        nArray[5] = (int)108;
        this.dYwpF = new cu(this.cehgg, mr.clS(nArray));
        int[] nArray2 = new int[9];
        nArray2[0] = (int)76;
        nArray2[1] = (int)97;
        nArray2[2] = (int)103;
        nArray2[3] = (int)32;
        nArray2[4] = (int)82;
        nArray2[5] = (int)97;
        nArray2[6] = (int)110;
        nArray2[7] = (int)103;
        nArray2[8] = (int)101;
        this.NuoRm = new cu(this.cehgg, mr.clS(nArray2));
        int[] nArray3 = new int[15];
        nArray3[0] = (int)80;
        nArray3[1] = (int)97;
        nArray3[2] = (int)99;
        nArray3[3] = (int)107;
        nArray3[4] = (int)101;
        nArray3[5] = (int)116;
        nArray3[6] = (int)32;
        nArray3[7] = (int)73;
        nArray3[8] = (int)110;
        nArray3[9] = (int)116;
        nArray3[10] = (int)101;
        nArray3[11] = (int)114;
        nArray3[12] = (int)118;
        nArray3[13] = (int)97;
        nArray3[14] = (int)108;
        this.qWnBv = new cA(this, mr.clS(nArray3)).UG(5.0).UE(0.0).UF(2000.0).UI(100.0, 150.0).UH((String)((Object)" ms"));
        int[] nArray4 = new int[18];
        nArray4[0] = (int)76;
        nArray4[1] = (int)97;
        nArray4[2] = (int)103;
        nArray4[3] = (int)32;
        nArray4[4] = (int)82;
        nArray4[5] = (int)97;
        nArray4[6] = (int)110;
        nArray4[7] = (int)103;
        nArray4[8] = (int)101;
        nArray4[9] = (int)32;
        nArray4[10] = (int)68;
        nArray4[11] = (int)105;
        nArray4[12] = (int)115;
        nArray4[13] = (int)116;
        nArray4[14] = (int)97;
        nArray4[15] = (int)110;
        nArray4[16] = (int)99;
        nArray4[17] = (int)101;
        this.FUqia = new cA(this, mr.clS(nArray4)).UG(0.1).UE(1.0).UF(6.0).UI(1.0, 3.6).UH((String)((Object)" blocks"));
        int[] nArray5 = new int[18];
        nArray5[0] = (int)82;
        nArray5[1] = (int)101;
        nArray5[2] = (int)115;
        nArray5[3] = (int)101;
        nArray5[4] = (int)116;
        nArray5[5] = (int)32;
        nArray5[6] = (int)79;
        nArray5[7] = (int)110;
        nArray5[8] = (int)32;
        nArray5[9] = (int)75;
        nArray5[10] = (int)110;
        nArray5[11] = (int)111;
        nArray5[12] = (int)99;
        nArray5[13] = (int)107;
        nArray5[14] = (int)98;
        nArray5[15] = (int)97;
        nArray5[16] = (int)99;
        nArray5[17] = (int)107;
        this.bAadz = new cJ(this, mr.clS(nArray5)).WE(false);
        int[] nArray6 = new int[10];
        nArray6[0] = (int)82;
        nArray6[1] = (int)101;
        nArray6[2] = (int)115;
        nArray6[3] = (int)101;
        nArray6[4] = (int)116;
        nArray6[5] = (int)32;
        nArray6[6] = (int)84;
        nArray6[7] = (int)105;
        nArray6[8] = (int)109;
        nArray6[9] = (int)101;
        this.qyvvJ = new cC(this, mr.clS(nArray6)).Vy(5.0).Vw(0.0).Vx(1000.0).VA(100.0).Vz((String)((Object)" ms"));
        int[] nArray7 = new int[18];
        nArray7[0] = (int)82;
        nArray7[1] = (int)101;
        nArray7[2] = (int)115;
        nArray7[3] = (int)101;
        nArray7[4] = (int)116;
        nArray7[5] = (int)32;
        nArray7[6] = (int)79;
        nArray7[7] = (int)110;
        nArray7[8] = (int)32;
        nArray7[9] = (int)69;
        nArray7[10] = (int)120;
        nArray7[11] = (int)112;
        nArray7[12] = (int)108;
        nArray7[13] = (int)111;
        nArray7[14] = (int)115;
        nArray7[15] = (int)105;
        nArray7[16] = (int)111;
        nArray7[17] = (int)110;
        this.fFKwZ = new cJ(this, mr.clS(nArray7)).WE(true);
        int[] nArray8 = new int[22];
        nArray8[0] = (int)82;
        nArray8[1] = (int)101;
        nArray8[2] = (int)115;
        nArray8[3] = (int)101;
        nArray8[4] = (int)116;
        nArray8[5] = (int)32;
        nArray8[6] = (int)79;
        nArray8[7] = (int)110;
        nArray8[8] = (int)32;
        nArray8[9] = (int)72;
        nArray8[10] = (int)101;
        nArray8[11] = (int)97;
        nArray8[12] = (int)108;
        nArray8[13] = (int)116;
        nArray8[14] = (int)104;
        nArray8[15] = (int)32;
        nArray8[16] = (int)85;
        nArray8[17] = (int)112;
        nArray8[18] = (int)100;
        nArray8[19] = (int)97;
        nArray8[20] = (int)116;
        nArray8[21] = (int)101;
        this.Bfvhw = new cJ(this, mr.clS(nArray8)).WE(false);
        this.AhpMu = new kx(this, ku.qnXgu);
        this.zkfXg = new ConcurrentLinkedQueue();
        this.uiKAR = mT.cpz();
        this.qBKIn = Vec3d.ZERO;
        this.FUqia.Vf(this.NuoRm::SZ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    ff.ikRrf = gb.aYR(8458180115173624693L, 9118909756170962521L, MethodHandles.lookup().lookupClass()).a(27814350386545L);
                    ff.mIJyD = new HashMap<K, V>(13);
                    var11 = ff.ikRrf ^ 99109528719947L;
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
                    var20_3 = new String[3];
                    var18_4 = 0;
                    var17_5 = "\u009cqi\u00adn\u00c2w\u001f\u0003\u00f3\u009e\u00f34\u00e8\u00ad)\u0010\u007f,(\u00fb\u00fe\u00d8\u00b4\u00f0\u00e8\u000b\u00c3\u00a0\u00ad\u00ee<\u00ff\u0010\u00e4\u009b\u00d2\u00d3_\u008d\u00fd\u00ea(6\u00c5\u001e4~\u000f\u00b8";
                    var19_6 = "\u009cqi\u00adn\u00c2w\u001f\u0003\u00f3\u009e\u00f34\u00e8\u00ad)\u0010\u007f,(\u00fb\u00fe\u00d8\u00b4\u00f0\u00e8\u000b\u00c3\u00a0\u00ad\u00ee<\u00ff\u0010\u00e4\u009b\u00d2\u00d3_\u008d\u00fd\u00ea(6\u00c5\u001e4~\u000f\u00b8".length();
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
                        var20_3[var18_4++] = ff.aIL(var21_9).intern();
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
                ff.qVORx = var20_3;
                ff.snpFS = new String[3];
                ff.yGhuZ = new HashMap<K, V>(13);
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
                var6_12 = new long[82];
                var3_13 = 0;
                var4_14 = "\u00deH\u00c8\u00a6\u00ea_7|d\u00d9\u0086\u00e7\u00cb\u008b\u00da;*]`~\u00db\u007fmhb?&\u00ec\u00c7\u00c5\u0093\u0084\r\u00f59\u00be\u00c3\u00f3\u00ec\u00e2\u00a8\u00f1\u00a9NN\u00174q\u0091\u00b3v\u00f0\u00efks%\u0018\u0018\u0091~\u00eb*\b\u0010\u00aeb;\u0019\u00dd\u0085\u0080\u00c5\u009c\u008a\u001a\u00a6\u00919\u008a\u0094\u00e8Q\u00c1\u009e\u0088-\u008e\u008fv\u00e5z\u00f8G\u00b4\u0004\u001f\u00fd\u00dcl\u00e1V]\u00c3\u0004\u00ff`\u0088\u00b7\u00aa\u0080\u00ecO9\u008a\u00a4\u00ce'e\u008bCs\u0098N\u00a4\u00f9e\u0004'\u00d6\u00be*\u001f\u00c5\b\rg\u00e0\u00a2L\u00a8cC\f\u00de\u00e6\u0083\u0091\f\u00a7\u0003\u00dd'\u00d6\u00d78\u00ac}[\u00b7K\u00c3{9{\u0005\u00d83s|\u00a9\u00b8#[\u00b6$\u00ae\u00fb\u00c3\u0011L2L\u00e6`\u00aa\u00d2U5\u0083*b\u00e99\u0097\u0094\u00d6m7&\u00e5/\u00cd\u00ba\"[\u00af\u0004\u008d\u00ea=\u00b9\u00d9\u00c4\u00cd^\u00ec]r}\u00ce5\u00b3\u0092\u00b4\u001f\u00cc8\u001c4\u0013\u00bbaf\u00a1\u00b5\r\u00f8\u00c5}r\u0006\u00ffm\u00a6~\u00c2\u00e8\u00b8\u001fT\u00d2\u00dd\u00bf\u00a2\u0005u]a\u00a8R8\u0086\u008d8\u001d\u001c9\u008e_\u00fdvh\u00df\u00b7\u0080`\u0091\u00cdk\u00c6_\u0084\u009e\u00b4\u00e6Y\u00ae\u00a2\u00f9'\u009e\u00deW\u0087y\u00a8o\u00e6D\faJ\u00eb\u00d1_kM\u00f7]\u0091T\u00af\u0004\u001e\u00e1\r\u00f9\u0098\u00b3\u008c\u00ef\u001c/\u00fdG\u00ae\u00b8;\u0007\u00ddhL\u0081xH\u00bf\u00b4\u0013\u0088\u00c3L\u00bf\u00cdE\u0001|\"\u0002\u001a\u00d3\u00e5`\u00a3\u00da\u000b\u00cd/{\u0095j\u0001\u0013?:\u00e3c>\u00110\u008f.\u00ca\u00f5-\u0083|\u00dd@\u0080A\"HI\u0012;8\u009f^L\u00b6\u001e\u00a0\u0015DM\u00b2\u00aet\u0012t\u0089\u00c0\u00ca\u00bd\u00f7\u00c3uh\u00ec\u00a37\u00b4\u00eaX\u0000)\u00c4\u00cd\u00bb\u00d3*\u00dd\\\u00ab\f\u00fc\u0085\u00fd\u001a])s\u0083\u00d4!\u00e4\u00e7\u00ff\u00cck\u00ccDI\t\u00b1U\u00c2\u0018\u00f0\u0012x\u00d3v\u00c1\u001b\u00fd\u00f3`r\u00c8@v\u00e4~\u00ba\u0086\u00f1\f\u00f4\u00c2\u00a4zUr#\u0098\u00baE=\u00f9z\u00b5Ip\u0001\u00ccI\u00ae\u00d4\u00da\u00e3\u0088\u00cb\u00bf(\u0011\u00d2`\u0016.\u00ccpW=\u0005\u0018\u00a0Cz\u00a7{\u00f3b\u00cd\u00c6\u0093\u0005m0\u008f\u00ee\u00fb.\u00ca\u00b2\u00ba\u0088\u001e\u0091\u00c5\u00b5\bR1\u008a'\u00feC0\u00cbpIg2\u00b3\u0092\u007f\u008b\u00a0\u000f\u00e5TrJ\u008eD\u00d7\u00f4\u00deL\u00ca\u00efL\u00feg\u00c6\u00cf\u008c`&2\u00ac\u00aa\u00f3\u001fT\u00e5\u0013\u00a3\u00eel\u00f8>\u009dZ\u00caZ\u00e1\u00c2\u001b\u0090-\u00dc\u00eb\u00d5\u00de\u0017\u0002\u00bf\u00f6?\u0003R[U6\u00c4)\u00db\u00f3\u00e1{h\u00d1\u0096\t\u00ec\u00b8\u00ad\u000baf\u00da\u00104\u001d\u00117\u00bf\u00de\u00195x\u00b04\u0080\u00bb\u00c12\u008c";
                var5_15 = "\u00deH\u00c8\u00a6\u00ea_7|d\u00d9\u0086\u00e7\u00cb\u008b\u00da;*]`~\u00db\u007fmhb?&\u00ec\u00c7\u00c5\u0093\u0084\r\u00f59\u00be\u00c3\u00f3\u00ec\u00e2\u00a8\u00f1\u00a9NN\u00174q\u0091\u00b3v\u00f0\u00efks%\u0018\u0018\u0091~\u00eb*\b\u0010\u00aeb;\u0019\u00dd\u0085\u0080\u00c5\u009c\u008a\u001a\u00a6\u00919\u008a\u0094\u00e8Q\u00c1\u009e\u0088-\u008e\u008fv\u00e5z\u00f8G\u00b4\u0004\u001f\u00fd\u00dcl\u00e1V]\u00c3\u0004\u00ff`\u0088\u00b7\u00aa\u0080\u00ecO9\u008a\u00a4\u00ce'e\u008bCs\u0098N\u00a4\u00f9e\u0004'\u00d6\u00be*\u001f\u00c5\b\rg\u00e0\u00a2L\u00a8cC\f\u00de\u00e6\u0083\u0091\f\u00a7\u0003\u00dd'\u00d6\u00d78\u00ac}[\u00b7K\u00c3{9{\u0005\u00d83s|\u00a9\u00b8#[\u00b6$\u00ae\u00fb\u00c3\u0011L2L\u00e6`\u00aa\u00d2U5\u0083*b\u00e99\u0097\u0094\u00d6m7&\u00e5/\u00cd\u00ba\"[\u00af\u0004\u008d\u00ea=\u00b9\u00d9\u00c4\u00cd^\u00ec]r}\u00ce5\u00b3\u0092\u00b4\u001f\u00cc8\u001c4\u0013\u00bbaf\u00a1\u00b5\r\u00f8\u00c5}r\u0006\u00ffm\u00a6~\u00c2\u00e8\u00b8\u001fT\u00d2\u00dd\u00bf\u00a2\u0005u]a\u00a8R8\u0086\u008d8\u001d\u001c9\u008e_\u00fdvh\u00df\u00b7\u0080`\u0091\u00cdk\u00c6_\u0084\u009e\u00b4\u00e6Y\u00ae\u00a2\u00f9'\u009e\u00deW\u0087y\u00a8o\u00e6D\faJ\u00eb\u00d1_kM\u00f7]\u0091T\u00af\u0004\u001e\u00e1\r\u00f9\u0098\u00b3\u008c\u00ef\u001c/\u00fdG\u00ae\u00b8;\u0007\u00ddhL\u0081xH\u00bf\u00b4\u0013\u0088\u00c3L\u00bf\u00cdE\u0001|\"\u0002\u001a\u00d3\u00e5`\u00a3\u00da\u000b\u00cd/{\u0095j\u0001\u0013?:\u00e3c>\u00110\u008f.\u00ca\u00f5-\u0083|\u00dd@\u0080A\"HI\u0012;8\u009f^L\u00b6\u001e\u00a0\u0015DM\u00b2\u00aet\u0012t\u0089\u00c0\u00ca\u00bd\u00f7\u00c3uh\u00ec\u00a37\u00b4\u00eaX\u0000)\u00c4\u00cd\u00bb\u00d3*\u00dd\\\u00ab\f\u00fc\u0085\u00fd\u001a])s\u0083\u00d4!\u00e4\u00e7\u00ff\u00cck\u00ccDI\t\u00b1U\u00c2\u0018\u00f0\u0012x\u00d3v\u00c1\u001b\u00fd\u00f3`r\u00c8@v\u00e4~\u00ba\u0086\u00f1\f\u00f4\u00c2\u00a4zUr#\u0098\u00baE=\u00f9z\u00b5Ip\u0001\u00ccI\u00ae\u00d4\u00da\u00e3\u0088\u00cb\u00bf(\u0011\u00d2`\u0016.\u00ccpW=\u0005\u0018\u00a0Cz\u00a7{\u00f3b\u00cd\u00c6\u0093\u0005m0\u008f\u00ee\u00fb.\u00ca\u00b2\u00ba\u0088\u001e\u0091\u00c5\u00b5\bR1\u008a'\u00feC0\u00cbpIg2\u00b3\u0092\u007f\u008b\u00a0\u000f\u00e5TrJ\u008eD\u00d7\u00f4\u00deL\u00ca\u00efL\u00feg\u00c6\u00cf\u008c`&2\u00ac\u00aa\u00f3\u001fT\u00e5\u0013\u00a3\u00eel\u00f8>\u009dZ\u00caZ\u00e1\u00c2\u001b\u0090-\u00dc\u00eb\u00d5\u00de\u0017\u0002\u00bf\u00f6?\u0003R[U6\u00c4)\u00db\u00f3\u00e1{h\u00d1\u0096\t\u00ec\u00b8\u00ad\u000baf\u00da\u00104\u001d\u00117\u00bf\u00de\u00195x\u00b04\u0080\u00bb\u00c12\u008c".length();
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
                    var4_14 = "\u00b5\u00e6*\u009a\u0016\u00eftq\u00cb\u0089\u00f6\u00ce\u00cf-\u0002\u00b0";
                    var5_15 = "\u00b5\u00e6*\u009a\u0016\u00eftq\u00cb\u0089\u00f6\u00ce\u00cf-\u0002\u00b0".length();
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
        ff.HcwIb = var6_12;
        ff.maZct = new Integer[82];
    }

    @Override
    public void aaj() {
        super.aaj();
        this.zkfXg.clear();
        this.qBKIn = rD.dlmvG.player.getEntityPos();
        this.AhpMu.bQZ(this.qBKIn, (AbstractClientPlayerEntity)rD.dlmvG.player);
        this.lseaG = this.qWnBv.UN().intValue();
        this.uiKAR.cpB();
        this.Stryf = null;
        this.nlYuR = false;
    }

    @Override
    public void YO() {
        super.YO();
        this.aIp();
    }

    private static int aIQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ff.aIP(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public cC aIz() {
        return this.qyvvJ;
    }

    private static String aIL(byte[] byArray) {
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

    public ct aIt() {
        return this.cehgg;
    }

    public cu aIu() {
        return this.dYwpF;
    }

    public Box aII() {
        return this.Stryf;
    }

    public cu aIv() {
        return this.NuoRm;
    }

    @hG
    public void aIo(go.sX sX2) {
        float f2;
        block14: {
            ff ff2;
            block12: {
                block13: {
                    int n2;
                    block10: {
                        int[] nArray;
                        block11: {
                            block8: {
                                block9: {
                                    long l2 = ikRrf ^ 0x3D6C2B0D963DL;
                                    nArray = fg.aIW();
                                    try {
                                        n2 = this.bab();
                                        if (nArray != null) break block8;
                                        if (n2 != 0) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    return;
                                }
                                n2 = this.AhpMu.bQX();
                            }
                            try {
                                if (nArray != null) break block10;
                                if (n2 != 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            return;
                        }
                        try {
                            ff2 = this;
                            if (nArray != null) break block12;
                            n2 = ff2.lseaG;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    try {
                        if (n2 > 0) break block13;
                        f2 = 1.0f;
                        break block14;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                ff2 = this;
            }
            f2 = (float)Math.min(ff2.uiKAR.cpF(), (long)this.lseaG) / (float)this.lseaG;
        }
        float f3 = f2;
        kw kw2 = kw.bRK().bRO(f3, 1.0f, 0.5f, 0.0f);
        this.AhpMu.bQV(kw2).bQQ(sX2.bbh(), sX2.bbi(), (AbstractClientPlayerEntity)rD.dlmvG.player);
    }

    private static CallSite aIR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ff" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cA aIw() {
        return this.qWnBv;
    }

    public cJ aIy() {
        return this.bAadz;
    }

    public kx aIC() {
        return this.AhpMu;
    }

    public Vec3d aIF() {
        return this.qBKIn;
    }

    private void aIp() {
        block10: {
            int[] nArray;
            block8: {
                ff ff2;
                block9: {
                    long l2 = ikRrf ^ 0x31D8B43BB52AL;
                    nArray = fg.aIW();
                    try {
                        try {
                            ff2 = this;
                            if (nArray != null) break block8;
                            if (ff2.bab()) break block9;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                ff2 = this;
            }
            ff2.IydTB = true;
            while (!this.zkfXg.isEmpty()) {
                try {
                    rD.dlmvG.getNetworkHandler().sendPacket(this.zkfXg.poll());
                    if (nArray == null) {
                        if (nArray == null) continue;
                        break;
                    }
                    break block10;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            this.IydTB = false;
            this.uiKAR.cpB();
            this.qBKIn = rD.dlmvG.player.getEntityPos();
            this.AhpMu.bRb(this.qBKIn, (AbstractClientPlayerEntity)rD.dlmvG.player);
        }
    }

    private boolean aIq() {
        double d2;
        block23: {
            block24: {
                Box box;
                int[] nArray;
                LivingEntity livingEntity;
                block21: {
                    block22: {
                        ff ff2;
                        block20: {
                            boolean bl2;
                            block18: {
                                block19: {
                                    long l2 = ikRrf ^ 0x6AD3C4E22738L;
                                    livingEntity = this.aIr();
                                    nArray = fg.aIW();
                                    try {
                                        if (livingEntity == null) {
                                            return true;
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    double d3 = jg.bBJ(rD.dlmvG.player.getEyePos(), livingEntity.getBoundingBox());
                                    try {
                                        try {
                                            bl2 = this.FUqia.UM(d3);
                                            if (nArray != null) break block18;
                                            if (bl2) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw ff.aIK(matchException);
                                        }
                                        this.nlYuR = false;
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                }
                                try {
                                    ff2 = this;
                                    if (nArray != null) break block20;
                                    bl2 = ff2.nlYuR;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                            }
                            try {
                                if (bl2) {
                                    return true;
                                }
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            ff2 = this;
                        }
                        try {
                            try {
                                box = ff2.Stryf;
                                if (nArray != null) break block21;
                                if (box != null) break block22;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    box = this.Stryf;
                }
                double d4 = jg.bBJ(box.getCenter(), livingEntity.getBoundingBox());
                double d5 = jg.bBJ(rD.dlmvG.player.getBoundingBox().getCenter(), livingEntity.getBoundingBox());
                try {
                    d2 = d4 == d5 ? 0 : (d4 < d5 ? -1 : 1);
                    if (nArray != null) break block23;
                    if (d2 >= 0) break block24;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
                d2 = 1.0;
                break block23;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private static MatchException aIK(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void aIm(gL.tj var1_1) {
        block55: {
            block59: {
                block56: {
                    block57: {
                        block58: {
                            block53: {
                                block54: {
                                    block52: {
                                        block51: {
                                            block50: {
                                                block49: {
                                                    block47: {
                                                        block48: {
                                                            block45: {
                                                                block46: {
                                                                    var2_2 = ff.ikRrf ^ 61692911259975L;
                                                                    var4_3 = fg.aIW();
                                                                    try {
                                                                        if (!this.bab()) {
                                                                            return;
                                                                        }
                                                                    }
                                                                    catch (MatchException v0) {
                                                                        throw ff.aIK(v0);
                                                                    }
                                                                    try {
                                                                        try {
                                                                            v1 = var1_1;
                                                                            if (var4_3 != null) break block45;
                                                                            if (v1.dpm() == rD.dlmvG.getNetworkHandler().getConnection()) break block46;
                                                                        }
                                                                        catch (MatchException v2) {
                                                                            throw ff.aIK(v2);
                                                                        }
                                                                        return;
                                                                    }
                                                                    catch (MatchException v3) {
                                                                        throw ff.aIK(v3);
                                                                    }
                                                                }
                                                                v1 = var1_1;
                                                            }
                                                            var5_4 = v1.bcf();
                                                            try {
                                                                v4 = this.IydTB;
                                                                if (var4_3 != null) break block47;
                                                                if (!v4) break block48;
                                                            }
                                                            catch (MatchException v5) {
                                                                throw ff.aIK(v5);
                                                            }
                                                            return;
                                                        }
                                                        v4 = var5_4 instanceof PlayerInteractEntityC2SPacket;
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3 != null) break block49;
                                                            if (!v4) {
                                                            }
                                                            ** GOTO lbl94
                                                        }
                                                        catch (MatchException v6) {
                                                            throw ff.aIK(v6);
                                                        }
                                                        v4 = var5_4 instanceof HandSwingC2SPacket;
                                                    }
                                                    catch (MatchException v7) {
                                                        throw ff.aIK(v7);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (var4_3 != null) break block50;
                                                        if (!v4) {
                                                        }
                                                        ** GOTO lbl94
                                                    }
                                                    catch (MatchException v8) {
                                                        throw ff.aIK(v8);
                                                    }
                                                    v4 = var5_4 instanceof PlayerInteractBlockC2SPacket;
                                                }
                                                catch (MatchException v9) {
                                                    throw ff.aIK(v9);
                                                }
                                            }
                                            try {
                                                try {
                                                    if (var4_3 != null) break block51;
                                                    if (!v4) {
                                                    }
                                                    ** GOTO lbl94
                                                }
                                                catch (MatchException v10) {
                                                    throw ff.aIK(v10);
                                                }
                                                v4 = var5_4 instanceof PlayerInteractItemC2SPacket;
                                            }
                                            catch (MatchException v11) {
                                                throw ff.aIK(v11);
                                            }
                                        }
                                        try {
                                            try {
                                                if (var4_3 != null) break block52;
                                                if (!v4) {
                                                }
                                                ** GOTO lbl94
                                            }
                                            catch (MatchException v12) {
                                                throw ff.aIK(v12);
                                            }
                                            v4 = var5_4 instanceof ClickSlotC2SPacket;
                                        }
                                        catch (MatchException v13) {
                                            throw ff.aIK(v13);
                                        }
                                    }
                                    try {
                                        try {
                                            if (var4_3 != null) break block53;
                                            if (!v4) break block54;
                                        }
                                        catch (MatchException v14) {
                                            throw ff.aIK(v14);
                                        }
lbl94:
                                        // 5 sources

                                        this.aIp();
                                        return;
                                    }
                                    catch (MatchException v15) {
                                        throw ff.aIK(v15);
                                    }
                                }
                                v4 = this.NuoRm.SZ();
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            if (var4_3 != null) break block55;
                                            if (!v4) break block56;
                                        }
                                        catch (MatchException v16) {
                                            throw ff.aIK(v16);
                                        }
                                        v17 = this;
                                        if (var4_3 != null) break block57;
                                    }
                                    catch (MatchException v18) {
                                        throw ff.aIK(v18);
                                    }
                                    if (!v17.aIq()) break block58;
                                }
                                catch (MatchException v19) {
                                    throw ff.aIK(v19);
                                }
                                this.aIp();
                                this.aIs();
                                return;
                            }
                            catch (MatchException v20) {
                                throw ff.aIK(v20);
                            }
                        }
                        v17 = this;
                    }
                    try {
                        try {
                            if (var4_3 != null) break block59;
                            if (v17.Stryf != null) break block56;
                        }
                        catch (MatchException v21) {
                            throw ff.aIK(v21);
                        }
                        this.Stryf = rD.dlmvG.player.getBoundingBox();
                        this.qBKIn = rD.dlmvG.player.getEntityPos();
                        this.AhpMu.bQZ(this.qBKIn, (AbstractClientPlayerEntity)rD.dlmvG.player);
                    }
                    catch (MatchException v22) {
                        throw ff.aIK(v22);
                    }
                }
                v17 = this;
            }
            v4 = v17.zkfXg.add(var5_4);
        }
        var1_1.bdX(true);
    }

    /*
     * Exception decompiling
     */
    @hG
    public void aIl(gL.tk var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [2[TRYBLOCK]], but top level block is 12[SWITCH]
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public cA aIx() {
        return this.FUqia;
    }

    private static CallSite aIO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ff" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cJ aIA() {
        return this.fFKwZ;
    }

    public cJ aIB() {
        return this.Bfvhw;
    }

    public Queue<Packet<?>> aID() {
        return this.zkfXg;
    }

    public mT aIE() {
        return this.uiKAR;
    }

    public boolean aIG() {
        return this.IydTB;
    }

    private LivingEntity aIr() {
        return oh.cCY().cDb(this.FUqia).cDg(of.ahXwo).cDm();
    }

    private void aIs() {
        this.Stryf = null;
        this.nlYuR = false;
    }

    @hG
    public void aIn(gH.th th2) {
        block19: {
            block18: {
                ff ff2;
                boolean bl2;
                block16: {
                    int[] nArray;
                    block17: {
                        block14: {
                            block15: {
                                long l2 = ikRrf ^ 0xE79FB0A157CL;
                                nArray = fg.aIW();
                                try {
                                    bl2 = this.bab();
                                    if (nArray != null) break block14;
                                    if (bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                                return;
                            }
                            bl2 = this.NuoRm.SZ();
                        }
                        try {
                            try {
                                try {
                                    try {
                                        if (nArray != null) break block16;
                                        if (!bl2) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw ff.aIK(matchException);
                                    }
                                    bl2 = this.aIq();
                                    if (nArray != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw ff.aIK(matchException);
                                }
                                if (!bl2) break block17;
                            }
                            catch (MatchException matchException) {
                                throw ff.aIK(matchException);
                            }
                            this.aIp();
                            this.aIs();
                            this.lseaG = this.qWnBv.UN().intValue();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw ff.aIK(matchException);
                        }
                    }
                    try {
                        ff2 = this;
                        if (nArray != null) break block18;
                        bl2 = ff2.uiKAR.cpC(this.lseaG);
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                }
                try {
                    if (!bl2) break block19;
                    this.aIp();
                    this.aIs();
                    ff2 = this;
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            ff2.lseaG = this.qWnBv.UN().intValue();
        }
    }

    @hG
    public void aIj(gM gM2) {
        this.zkfXg.clear();
        this.baa(false);
    }

    @hG
    public void aIk(hw.tw tw2) {
        block7: {
            ff ff2;
            boolean bl2;
            block5: {
                int[] nArray;
                block6: {
                    long l2 = ikRrf ^ 0x67F02DB597F0L;
                    nArray = fg.aIW();
                    try {
                        bl2 = this.bab();
                        if (nArray != null) break block5;
                        if (bl2) break block6;
                    }
                    catch (MatchException matchException) {
                        throw ff.aIK(matchException);
                    }
                    return;
                }
                try {
                    ff2 = this;
                    if (nArray != null) break block7;
                    bl2 = ff2.NuoRm.SZ();
                }
                catch (MatchException matchException) {
                    throw ff.aIK(matchException);
                }
            }
            if (!bl2) {
                return;
            }
            ff2 = this;
        }
        ff2.nlYuR = true;
    }

    public int aIH() {
        return this.lseaG;
    }

    public boolean aIJ() {
        return this.nlYuR;
    }

    private static String aIM(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3BE0;
        if (snpFS[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])mIJyD.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mIJyD.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ff", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = qVORx[n3].getBytes("ISO-8859-1");
            ff.snpFS[n3] = ff.aIL(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return snpFS[n3];
    }

    private static Object aIN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ff.aIM(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int aIP(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1BF0;
        if (maZct[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = HcwIb[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])yGhuZ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    yGhuZ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ff", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ff.maZct[n3] = n4;
        }
        return maZct[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ff.class, "aIQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(ff.class, "aIN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

