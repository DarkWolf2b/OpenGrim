/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.block.BlockState
 *  net.minecraft.block.Blocks
 *  net.minecraft.client.network.ClientPlayerEntity
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.BuiltBuffer
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Direction
 *  net.minecraft.util.math.Direction$Type
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 */
package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.ToIntFunction;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.BlockState;
import net.minecraft.block.Blocks;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.dj$sB;
import sixtwo.dj$sC;
import sixtwo.dj$sD;
import sixtwo.dj$sE;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jJ;
import sixtwo.kH;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class dj
extends gg
implements lG {
    private final ct jybpu;
    private final cu lvORN;
    private final cu qEqID;
    private final cC LEzwX;
    private final cC uQNEX;
    private final cJ ZnfqN;
    private final cC TYsOV;
    private final cJ ObAdu;
    private final cJ AMAdS;
    private final cJ vupnD;
    private final cJ NUWIx;
    private final cJ iKDmr;
    private final cJ oBPYh;
    private final cG JMRnw;
    private final cG QfgSU;
    private final cG vJCDp;
    private final cG JaDoR;
    private final Map<dj$sE, rk> Dpuot;
    private List<dj$sE> soBDJ;
    private static final Comparator<BlockPos> cMEtP;
    private static final long UFHNj;
    private static final String[] vaAsg;
    private static final String[] NFauy;
    private static final Map XZCIf;
    private static final long[] CvhLh;
    private static final Integer[] gUpUM;
    private static final Map HQhKx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dj() {
        long l2 = UFHNj ^ 0x40B2B24547D3L;
        super(gf.aZL((int)147, false, gh.nOCvV));
        this.jybpu = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101})).SO(0);
        this.lvORN = new cu(this.jybpu, mr.clS(new int[]{(int)66, (int)111, (int)120, (int)101, (int)115}));
        this.qEqID = new cu(this.jybpu, mr.clS(new int[]{(int)70, (int)97, (int)100, (int)101}));
        this.LEzwX = new cC(this, mr.clS(new int[]{(int)82, (int)97, (int)110, (int)103, (int)101})).Vy(0.5).Vw(3.0).Vx(25.0).VA(5.0).Vz((String)((Object)" blocks"));
        int[] nArray = new int[7];
        nArray[0] = (int)82;
        nArray[1] = (int)97;
        nArray[2] = (int)110;
        nArray[3] = (int)103;
        nArray[4] = (int)101;
        nArray[5] = (int)32;
        nArray[6] = (int)89;
        this.uQNEX = new cC(this, mr.clS(nArray)).Vy(0.5).Vw(0.0).Vx(16.0).VA(3.0).Vz((String)((Object)" blocks"));
        int[] nArray2 = new int[7];
        nArray2[0] = (int)79;
        nArray2[1] = (int)117;
        nArray2[2] = (int)116;
        nArray2[3] = (int)108;
        nArray2[4] = (int)105;
        nArray2[5] = (int)110;
        nArray2[6] = (int)101;
        this.ZnfqN = new cJ(this, mr.clS(nArray2)).WE(true);
        this.TYsOV = new cC(this, mr.clS(new int[]{(int)83, (int)105, (int)122, (int)101})).Vy(0.01).Vw(-1.0).Vx(1.0).VA(1.0);
        int[] nArray3 = new int[11];
        nArray3[0] = (int)73;
        nArray3[1] = (int)103;
        nArray3[2] = (int)110;
        nArray3[3] = (int)111;
        nArray3[4] = (int)114;
        nArray3[5] = (int)101;
        nArray3[6] = (int)32;
        nArray3[7] = (int)83;
        nArray3[8] = (int)101;
        nArray3[9] = (int)108;
        nArray3[10] = (int)102;
        this.ObAdu = new cJ(this, mr.clS(nArray3)).WE(false);
        int[] nArray4 = new int[8];
        nArray4[0] = (int)79;
        nArray4[1] = (int)98;
        nArray4[2] = (int)115;
        nArray4[3] = (int)105;
        nArray4[4] = (int)100;
        nArray4[5] = (int)105;
        nArray4[6] = (int)97;
        nArray4[7] = (int)110;
        this.AMAdS = new cJ(this, mr.clS(nArray4)).WE(true);
        int[] nArray5 = new int[16];
        nArray5[0] = (int)79;
        nArray5[1] = (int)98;
        nArray5[2] = (int)115;
        nArray5[3] = (int)105;
        nArray5[4] = (int)100;
        nArray5[5] = (int)105;
        nArray5[6] = (int)97;
        nArray5[7] = (int)110;
        nArray5[8] = (int)45;
        nArray5[9] = (int)66;
        nArray5[10] = (int)101;
        nArray5[11] = (int)100;
        nArray5[12] = (int)114;
        nArray5[13] = (int)111;
        nArray5[14] = (int)99;
        nArray5[15] = (int)107;
        this.vupnD = new cJ(this, mr.clS(nArray5)).WE(true);
        int[] nArray6 = new int[6];
        nArray6[0] = (int)68;
        nArray6[1] = (int)111;
        nArray6[2] = (int)117;
        nArray6[3] = (int)98;
        nArray6[4] = (int)108;
        nArray6[5] = (int)101;
        this.NUWIx = new cJ(this, mr.clS(nArray6)).WE(false);
        this.iKDmr = new cJ(this, mr.clS(new int[]{(int)81, (int)117, (int)97, (int)100})).WE(false);
        this.oBPYh = new cJ(this, mr.clS(new int[]{(int)86, (int)111, (int)105, (int)100})).WE(false);
        int[] nArray7 = new int[14];
        nArray7[0] = (int)79;
        nArray7[1] = (int)98;
        nArray7[2] = (int)115;
        nArray7[3] = (int)105;
        nArray7[4] = (int)100;
        nArray7[5] = (int)105;
        nArray7[6] = (int)97;
        nArray7[7] = (int)110;
        nArray7[8] = (int)32;
        nArray7[9] = (int)67;
        nArray7[10] = (int)111;
        nArray7[11] = (int)108;
        nArray7[12] = (int)111;
        nArray7[13] = (int)114;
        this.JMRnw = (cG)new cG(this, mr.clS(nArray7)).Uf(mG.cnR(255.0f, 0.0f, 0.0f, 80.0f)).Vf(this.AMAdS::WF);
        int[] nArray8 = new int[22];
        nArray8[0] = (int)79;
        nArray8[1] = (int)98;
        nArray8[2] = (int)115;
        nArray8[3] = (int)105;
        nArray8[4] = (int)100;
        nArray8[5] = (int)105;
        nArray8[6] = (int)97;
        nArray8[7] = (int)110;
        nArray8[8] = (int)45;
        nArray8[9] = (int)66;
        nArray8[10] = (int)101;
        nArray8[11] = (int)100;
        nArray8[12] = (int)114;
        nArray8[13] = (int)111;
        nArray8[14] = (int)99;
        nArray8[15] = (int)107;
        nArray8[16] = (int)32;
        nArray8[17] = (int)67;
        nArray8[18] = (int)111;
        nArray8[19] = (int)108;
        nArray8[20] = (int)111;
        nArray8[21] = (int)114;
        this.QfgSU = (cG)new cG(this, mr.clS(nArray8)).Uf(mG.cnR(255.0f, 255.0f, 0.0f, 80.0f)).Vf(this.vupnD::WF);
        int[] nArray9 = new int[13];
        nArray9[0] = (int)66;
        nArray9[1] = (int)101;
        nArray9[2] = (int)100;
        nArray9[3] = (int)114;
        nArray9[4] = (int)111;
        nArray9[5] = (int)99;
        nArray9[6] = (int)107;
        nArray9[7] = (int)32;
        nArray9[8] = (int)67;
        nArray9[9] = (int)111;
        nArray9[10] = (int)108;
        nArray9[11] = (int)111;
        nArray9[12] = (int)114;
        this.vJCDp = new cG(this, mr.clS(nArray9)).Uf(mG.cnR(0.0f, 255.0f, 0.0f, 80.0f));
        int[] nArray10 = new int[10];
        nArray10[0] = (int)86;
        nArray10[1] = (int)111;
        nArray10[2] = (int)105;
        nArray10[3] = (int)100;
        nArray10[4] = (int)32;
        nArray10[5] = (int)67;
        nArray10[6] = (int)111;
        nArray10[7] = (int)108;
        nArray10[8] = (int)111;
        nArray10[9] = (int)114;
        this.JaDoR = (cG)new cG(this, mr.clS(nArray10)).Uf(mG.cnR(255.0f, 0.0f, 0.0f, 140.0f)).Vf(this.oBPYh::WF);
        this.Dpuot = new HashMap<dj$sE, rk>();
        this.soBDJ = new ArrayList<dj$sE>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    dj.UFHNj = gb.aYR(-443646992908327867L, 3685075153996180774L, MethodHandles.lookup().lookupClass()).a(36593284610269L);
                    dj.XZCIf = new HashMap<K, V>(13);
                    var11 = dj.UFHNj ^ 27466238224920L;
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
                    var17_5 = "\u00e8\u00d2m\u00c7\u00b3o{\u001f\u00f5\u00b8\u00ed\u007f\u00c8\u001dn\u001e\u0010z\u00f4\u00e8\u0014\u00e9.a\u001c\u00fb\u0087\u00d3B\u00ac\u00dbi\u00d5";
                    var19_6 = "\u00e8\u00d2m\u00c7\u00b3o{\u001f\u00f5\u00b8\u00ed\u007f\u00c8\u001dn\u001e\u0010z\u00f4\u00e8\u0014\u00e9.a\u001c\u00fb\u0087\u00d3B\u00ac\u00dbi\u00d5".length();
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
                        var20_3[var18_4++] = dj.ago(var21_9).intern();
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
                dj.vaAsg = var20_3;
                dj.NFauy = new String[2];
                dj.HQhKx = new HashMap<K, V>(13);
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
                var4_14 = "\u00dbd\u0087\u00c6\u00e9\u0092\u00ef\u00c4mr\u008bO\u0003f\u00e3\u008fs\u00c6\u008c\u00ef\u00ad\u0099\u0092\u00f4\u009c;,\u0000\u009czG1\u008b\u0097\u00d6A\u0088\u00a8\u00eaH\u0085\u00a7\u00e5d\u00d3j\u0088\u00ac\u00c5\u007f2\u00d6\u00b4\u00faY\u00ed\u0084\u0086\u00d2\u00984\u0086\u0018\u009dR\u00d8Hk\u00bb|\u0092.\u00a7\u00afY$(`\u00e0\u00b0\u00df2t\u0081#@x\u00ba\u00c1d\u00fa!X\u00a9\u00cc\u008e\u0097\u00a5S\u00c5\b#\u00b9\u00d8\u009a\u0097\u00f1\u00ff\u008f\u00e0\u008f\u00ae\u00a4.\u00c6\u001e\u00ba\u007fn1j\u00dcK\u0013\u000f\u0004\u00d7EIY#A\u00e8\u00ec\u0094X6\u0004PNu\u001d\u0007\r\u00815mx\u00d9\u00c4\u0010\u00c5\u00e7$\u00d8\u0099m\u0015N4W\u009c\u0002z\u00b0\u000f\u00eba\u00f6\u00aa]\u00f9_\u00abB\u0004\bTc\u00cf\u0096\u0090+Q\u00cc\u00e4\u007f\u0019\u00f7r\u0013*\u00fa\u00f5r?\u000f6\u0089#l\f\u0018\u00a1\u0087\u001d%\u00e7\u009d\u0012|O\u00ac\u00baR\u00efo\u00a0\n\u00a8r\u00b5\u008d\u00d5K\u00b1\u0096m\u0098\u008d\u00c9a\u0017\u001d\u0093\u00c0d\u00c3\u00fe4\u0098\u001e\u00bc\u0015\u00f3\u00c1\u0090\u008e\u0000@\u009c\u0080\u00c9\u001a\u00051\u00c3\u00da\u001et\u0004 \u009b\u00dbC\u009f\u0007\u00e7\u00b2\u00aa\u00e1\u00f3\u00e4x\u00e1\u00b6\u00b8<\u0007_\u00c9\u00f5\u0005\u0001f\u00c9PxN\u0001vN\u00a8f\u00c8'\u00c2\u0092u\u00b1\\\u00aa\u00e9Ug\u00b8i\u00ac>\u009eR\u001eX\u00d6\u00f3z\u00bcJ\u0000T\u00ab\u00bb1\u00b9\u00e7\u00bbf\u00a1\u00d8\u00da7\u00ef\u0088\u00c4w\u00ec\u00f0F\u00e8\u00bb\u00e4\u00f7\u0003\u0011u\u0089]K\u0004\u00b2>2\u0007\u001c\u00b3K\u00d6J\u0000r\u00bf^\u0010t\u00a8\u0002\u00ef\b\u009fB\u00fc\u0095\u0090V\u00ac\u00b9\u00efv\u00c7\u00cfNlp2|\u00c7\u001b\u00db!\u00e7|\u00f6\u0011\u0012gu\u00e2\u0085\u0095k\u0086\u00fb\u0016-\u00f9\u0004\u0081=\u00834\u008a\u0084\u00a7%\u00e8q\u009egX\u00cbq\u00d2\u0010\u00a47u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-\u00e7\u0080\u00a6)\u00ef\u00e0\u009a2\u00c5\u00c1\u00bb\u00dc\u008e\u00b6\u00b7O9\u00e5\u00f5\u00f8\u00b1\u000f\u00a4&\u0004K\u00e0\u00f0\u00e2\u00a0H\u0088\u0016\u00a1F\u00ccf\u00d4h\u00c6\u0003>|\u00c7QL]\u00a0\u001e\u00fbac3\u00c0&\u00ff\u0018L\u00a4B*\u00eeV\u00ecs\u00c6o[\u0017\u00ab8\u000f\u00af\u00d1\\8\u0001\b\\\u00cf\u00b2\u00b5\u00880/\u0086?\u00151\u00f6i\u00f5\u00c6_\u00de\u00b6\u00d8j\u00a5\u008b\u00c3\u00a8^\u00e2\u00ca\u00af\u00fd\u0019\u00ae\u00f0\u0014>\u000f\u0002\r\u0093#\u009e\u00ec3\u008e\u0015oyP\u0091\u00e2\u00fc\u00b6\u0013ZA\u008e\u008b\u00eb\u00af\u0096;\u00ef\u00f8\u0014\u0011\u0005H\u0093\u0098\u00b8\u00b6\u00b8\u00c2\u00ed\u00ff5T\u0084\u00ab^\u0085\u001f\u00c9\u00f5M\u0089\u00ff\u0098\u00f0\u00e1\u00ef\u00f6\n\\\u0092\u00ffcQV\u0011\u0094\u00a7\u00c1\u00c6\u0083\u00f4\u00abv\u007f\u00d1l\u00a2\u00cf\u0081\u00ceE:\u0090\u00bdJ\u008b\u007f\u00f0e\u001a\u009a^\u0094J\u0093P\u007f\u0000\u00fd\u00ac\u00caf:W\u00cd\u00cd9b\u00a9;G\u00db\u00de\u00f4\u00a5=";
                var5_15 = "\u00dbd\u0087\u00c6\u00e9\u0092\u00ef\u00c4mr\u008bO\u0003f\u00e3\u008fs\u00c6\u008c\u00ef\u00ad\u0099\u0092\u00f4\u009c;,\u0000\u009czG1\u008b\u0097\u00d6A\u0088\u00a8\u00eaH\u0085\u00a7\u00e5d\u00d3j\u0088\u00ac\u00c5\u007f2\u00d6\u00b4\u00faY\u00ed\u0084\u0086\u00d2\u00984\u0086\u0018\u009dR\u00d8Hk\u00bb|\u0092.\u00a7\u00afY$(`\u00e0\u00b0\u00df2t\u0081#@x\u00ba\u00c1d\u00fa!X\u00a9\u00cc\u008e\u0097\u00a5S\u00c5\b#\u00b9\u00d8\u009a\u0097\u00f1\u00ff\u008f\u00e0\u008f\u00ae\u00a4.\u00c6\u001e\u00ba\u007fn1j\u00dcK\u0013\u000f\u0004\u00d7EIY#A\u00e8\u00ec\u0094X6\u0004PNu\u001d\u0007\r\u00815mx\u00d9\u00c4\u0010\u00c5\u00e7$\u00d8\u0099m\u0015N4W\u009c\u0002z\u00b0\u000f\u00eba\u00f6\u00aa]\u00f9_\u00abB\u0004\bTc\u00cf\u0096\u0090+Q\u00cc\u00e4\u007f\u0019\u00f7r\u0013*\u00fa\u00f5r?\u000f6\u0089#l\f\u0018\u00a1\u0087\u001d%\u00e7\u009d\u0012|O\u00ac\u00baR\u00efo\u00a0\n\u00a8r\u00b5\u008d\u00d5K\u00b1\u0096m\u0098\u008d\u00c9a\u0017\u001d\u0093\u00c0d\u00c3\u00fe4\u0098\u001e\u00bc\u0015\u00f3\u00c1\u0090\u008e\u0000@\u009c\u0080\u00c9\u001a\u00051\u00c3\u00da\u001et\u0004 \u009b\u00dbC\u009f\u0007\u00e7\u00b2\u00aa\u00e1\u00f3\u00e4x\u00e1\u00b6\u00b8<\u0007_\u00c9\u00f5\u0005\u0001f\u00c9PxN\u0001vN\u00a8f\u00c8'\u00c2\u0092u\u00b1\\\u00aa\u00e9Ug\u00b8i\u00ac>\u009eR\u001eX\u00d6\u00f3z\u00bcJ\u0000T\u00ab\u00bb1\u00b9\u00e7\u00bbf\u00a1\u00d8\u00da7\u00ef\u0088\u00c4w\u00ec\u00f0F\u00e8\u00bb\u00e4\u00f7\u0003\u0011u\u0089]K\u0004\u00b2>2\u0007\u001c\u00b3K\u00d6J\u0000r\u00bf^\u0010t\u00a8\u0002\u00ef\b\u009fB\u00fc\u0095\u0090V\u00ac\u00b9\u00efv\u00c7\u00cfNlp2|\u00c7\u001b\u00db!\u00e7|\u00f6\u0011\u0012gu\u00e2\u0085\u0095k\u0086\u00fb\u0016-\u00f9\u0004\u0081=\u00834\u008a\u0084\u00a7%\u00e8q\u009egX\u00cbq\u00d2\u0010\u00a47u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-\u00e7\u0080\u00a6)\u00ef\u00e0\u009a2\u00c5\u00c1\u00bb\u00dc\u008e\u00b6\u00b7O9\u00e5\u00f5\u00f8\u00b1\u000f\u00a4&\u0004K\u00e0\u00f0\u00e2\u00a0H\u0088\u0016\u00a1F\u00ccf\u00d4h\u00c6\u0003>|\u00c7QL]\u00a0\u001e\u00fbac3\u00c0&\u00ff\u0018L\u00a4B*\u00eeV\u00ecs\u00c6o[\u0017\u00ab8\u000f\u00af\u00d1\\8\u0001\b\\\u00cf\u00b2\u00b5\u00880/\u0086?\u00151\u00f6i\u00f5\u00c6_\u00de\u00b6\u00d8j\u00a5\u008b\u00c3\u00a8^\u00e2\u00ca\u00af\u00fd\u0019\u00ae\u00f0\u0014>\u000f\u0002\r\u0093#\u009e\u00ec3\u008e\u0015oyP\u0091\u00e2\u00fc\u00b6\u0013ZA\u008e\u008b\u00eb\u00af\u0096;\u00ef\u00f8\u0014\u0011\u0005H\u0093\u0098\u00b8\u00b6\u00b8\u00c2\u00ed\u00ff5T\u0084\u00ab^\u0085\u001f\u00c9\u00f5M\u0089\u00ff\u0098\u00f0\u00e1\u00ef\u00f6\n\\\u0092\u00ffcQV\u0011\u0094\u00a7\u00c1\u00c6\u0083\u00f4\u00abv\u007f\u00d1l\u00a2\u00cf\u0081\u00ceE:\u0090\u00bdJ\u008b\u007f\u00f0e\u001a\u009a^\u0094J\u0093P\u007f\u0000\u00fd\u00ac\u00caf:W\u00cd\u00cd9b\u00a9;G\u00db\u00de\u00f4\u00a5=".length();
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
                    var4_14 = "\u001f\u00f0;\u0010U\u00fb\u00ea\u009e\f\u0013\u0096\u001e\u008cF\u00d1\n";
                    var5_15 = "\u001f\u00f0;\u0010U\u00fb\u00ea\u009e\f\u0013\u0096\u001e\u008cF\u00d1\n".length();
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
        dj.CvhLh = var6_12;
        dj.gUpUM = new Integer[85];
        dj.cMEtP = Comparator.comparingInt((ToIntFunction<BlockPos>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, agm(net.minecraft.util.math.BlockPos ), (Lnet/minecraft/util/math/BlockPos;)I)()).thenComparingInt((ToIntFunction<BlockPos>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, getY(), (Lnet/minecraft/util/math/BlockPos;)I)()).thenComparingInt((ToIntFunction<BlockPos>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)I, getZ(), (Lnet/minecraft/util/math/BlockPos;)I)());
    }

    private static String agp(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4F7F;
        if (NFauy[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])XZCIf.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XZCIf.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dj", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = vaAsg[n3].getBytes("ISO-8859-1");
            dj.NFauy[n3] = dj.ago(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return NFauy[n3];
    }

    /*
     * Unable to fully structure code
     */
    private void age(MatrixStack var1_1, Vec3d var2_2, List<dj$sB> var3_3) {
        block37: {
            block34: {
                var4_4 = dj.UFHNj ^ 113673690013170L;
                var7_5 = var1_1.peek().getPositionMatrix();
                var6_6 = dh.afl();
                var8_7 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * var3_3.size() * dj.agu("w", (int)29385, (long)(1785810570950721940L ^ var4_4)));
                try {
                    var9_8 = new BufferBuilder(var8_7, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_COLOR);
                    var10_11 = var3_3.iterator();
                    while (var10_11.hasNext()) {
                        var11_14 = var10_11.next();
                        var12_17 = var11_14.hole().toBox(this.TYsOV.VI()).offset(var2_2);
                        var13_20 = this.agl(var11_14.hole().safety());
                        var14_21 = var11_14.fadeFactor();
                        var15_22 = var13_20.cob(var14_21);
                        var16_23 = var15_22.coa(0.0f);
                        try {
                            this.agg(var9_8, var7_5, var12_17.minX, var12_17.minY, var12_17.minZ, var12_17.maxX, var12_17.maxY, var12_17.minZ, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.maxX, var12_17.minY, var12_17.minZ, var12_17.maxX, var12_17.maxY, var12_17.maxZ, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.maxX, var12_17.minY, var12_17.maxZ, var12_17.minX, var12_17.maxY, var12_17.maxZ, var15_22, var16_23);
                            this.agg(var9_8, var7_5, var12_17.minX, var12_17.minY, var12_17.maxZ, var12_17.minX, var12_17.maxY, var12_17.minZ, var15_22, var16_23);
                            if (var6_6 == null) {
                                if (var6_6 == null) continue;
                                break;
                            }
                            ** GOTO lbl68
                        }
                        catch (Throwable v0) {
                            throw dj.agn(v0);
                        }
                    }
                    var10_11 = var9_8.end();
                    try {
                        lF.cfW(kR.oXKXV, (BuiltBuffer)var10_11);
                        if (var6_6 != null) break block34;
                    }
                    catch (Throwable var11_15) {
                        block36: {
                            try {
                                v1 = var10_11;
                                if (var6_6 == null) {
                                    if (v1 == null) break block36;
                                }
                                ** GOTO lbl41
                            }
                            catch (Throwable v2) {
                                throw dj.agn(v2);
                            }
                            try {
                                v1 = var10_11;
lbl41:
                                // 2 sources

                                v1.close();
                            }
                            catch (Throwable var12_18) {
                                var11_15.addSuppressed(var12_18);
                            }
                        }
                        throw var11_15;
                    }
                    try {
                        if (var10_11 != null) {
                            var10_11.close();
                        }
                    }
                    catch (Throwable v3) {
                        throw dj.agn(v3);
                    }
                }
                catch (Throwable var9_9) {
                    try {
                        var8_7.close();
                    }
                    catch (Throwable var10_12) {
                        var9_9.addSuppressed(var10_12);
                    }
                    throw var9_9;
                }
                var8_7.close();
            }
            var8_7 = new BufferAllocator(VertexFormats.POSITION_COLOR.getVertexSize() * var3_3.size() * dj.agu("w", (int)23746, (long)(1045516226155605993L ^ var4_4)));
            try {
                var9_8 = new BufferBuilder(var8_7, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_COLOR);
                var10_11 = var3_3.iterator();
lbl68:
                // 3 sources

                while (var10_11.hasNext()) {
                    var11_14 = (dj$sB)var10_11.next();
                    var12_17 = var11_14.hole().toBox(this.TYsOV.VI()).offset(var2_2);
                    var13_20 = this.agl(var11_14.hole().safety()).coa(170.0f).cob(var11_14.fadeFactor());
                    this.agf(var9_8, var7_5, var12_17, var13_20);
                    if (var6_6 == null) continue;
                }
                var10_11 = var9_8.end();
                try {
                    lF.cfW(kR.oXKXV, (BuiltBuffer)var10_11);
                    if (var6_6 != null) break block37;
                }
                catch (Throwable var11_16) {
                    block38: {
                        try {
                            v4 = var10_11;
                            if (var6_6 == null) {
                                if (v4 == null) break block38;
                            }
                            ** GOTO lbl89
                        }
                        catch (Throwable v5) {
                            throw dj.agn(v5);
                        }
                        try {
                            v4 = var10_11;
lbl89:
                            // 2 sources

                            v4.close();
                        }
                        catch (Throwable var12_19) {
                            var11_16.addSuppressed(var12_19);
                        }
                    }
                    throw var11_16;
                }
                try {
                    if (var10_11 != null) {
                        var10_11.close();
                    }
                }
                catch (Throwable v6) {
                    throw dj.agn(v6);
                }
            }
            finally {
                var8_7.close();
            }
        }
    }

    private boolean agh(BlockPos blockPos) {
        return rD.dlmvG.world.getBlockState(blockPos).isAir();
    }

    private static Object agq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dj.agp(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int agt(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dj.ags(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Exception decompiling
     */
    private mG agl(dj$sD var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
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

    private double agk() {
        return this.LEzwX.VI() * this.LEzwX.VI();
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE aga(BlockPos blockPos, Direction direction) {
        Object object2;
        boolean bl2;
        iS[] iSArray;
        BlockPos blockPos2;
        block32: {
            block33: {
                block31: {
                    block30: {
                        long l2 = UFHNj ^ 0x1663760CE703L;
                        blockPos2 = blockPos.offset(direction);
                        iSArray = dh.afl();
                        try {
                            try {
                                bl2 = this.agh(blockPos2);
                                if (iSArray != null) break block30;
                                if (!bl2) return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            bl2 = this.agh(blockPos2.up());
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    try {
                        try {
                            if (iSArray != null) break block31;
                            if (!bl2) return null;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        bl2 = this.agh(blockPos2.up(2));
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                try {
                    try {
                        if (iSArray != null) break block32;
                        if (bl2) break block33;
                        return null;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            bl2 = this.agi(blockPos2.down());
        }
        try {
            if (!bl2) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        ArrayList<BlockPos> arrayList = new ArrayList<BlockPos>();
        arrayList.add(blockPos.down());
        arrayList.add(blockPos2.down());
        for (Object object2 : Direction.Type.HORIZONTAL) {
            block37: {
                BlockPos blockPos3;
                Direction direction2;
                Direction direction3;
                block34: {
                    block35: {
                        boolean bl3;
                        block36: {
                            try {
                                direction3 = object2;
                                direction2 = direction;
                                if (iSArray != null) break block34;
                                if (direction3 == direction2) break block35;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            blockPos3 = blockPos.offset((Direction)object2);
                            try {
                                try {
                                    bl3 = this.agi(blockPos3);
                                    if (iSArray != null) break block35;
                                    if (bl3) break block36;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl3 = arrayList.add(blockPos3);
                    }
                    direction3 = object2;
                    direction2 = direction.getOpposite();
                }
                if (direction3 != direction2) {
                    boolean bl4;
                    block38: {
                        blockPos3 = blockPos2.offset((Direction)object2);
                        try {
                            try {
                                bl4 = this.agi(blockPos3);
                                if (iSArray != null) break block37;
                                if (bl4) break block38;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    bl4 = arrayList.add(blockPos3);
                }
            }
            if (iSArray == null) continue;
        }
        dj$sD dj$sD = this.agc(arrayList);
        try {
            if (dj$sD == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        object2 = new ArrayList<BlockPos>(List.of(blockPos, blockPos2));
        object2.sort(cMEtP);
        return new dj$sE(List.copyOf(object2), dj$sD, dj$sC.XksfN);
    }

    private void agg(BufferBuilder bufferBuilder, Matrix4f matrix4f, double d2, double d3, double d4, double d5, double d6, double d7, mG mG2, mG mG3) {
        bufferBuilder.vertex((Matrix4fc)matrix4f, (float)d2, (float)d3, (float)d4).color(mG2.coh());
        bufferBuilder.vertex((Matrix4fc)matrix4f, (float)d2, (float)d6, (float)d4).color(mG3.coh());
        bufferBuilder.vertex((Matrix4fc)matrix4f, (float)d5, (float)d6, (float)d7).color(mG3.coh());
        bufferBuilder.vertex((Matrix4fc)matrix4f, (float)d5, (float)d3, (float)d7).color(mG2.coh());
    }

    /*
     * Unable to fully structure code
     */
    private void agd(MatrixStack var1_1, dj$sE var2_2, Vec3d var3_3, float var4_4) {
        block14: {
            block13: {
                block11: {
                    block12: {
                        var5_5 = dj.UFHNj ^ 15588909691351L;
                        var8_6 = var2_2.toBox(this.TYsOV.VI()).offset(var3_3);
                        var7_7 = dh.afl();
                        var9_8 = this.agl(var2_2.safety());
                        var10_9 = var9_8.cob(var4_4);
                        var11_10 = var9_8.coa(Math.max(var9_8.cou(), 100.0f)).cob(var4_4);
                        try {
                            v0 = dj.MMuss;
                            v1 = var1_1;
                            v2 = var8_6;
                            v3 = var10_9.cnW();
                            if (var7_7 != null) break block11;
                            if (v3) break block12;
                        }
                        catch (MatchException v4) {
                            throw dj.agn(v4);
                        }
                        v3 = true;
                        break block11;
                    }
                    v3 = false;
                }
                try {
                    try {
                        try {
                            v5 = kH.bTJ(v1, v2, v3, false);
                            v6 = this.ZnfqN.WF();
                            if (var7_7 != null) break block13;
                            if (v6) {
                            }
                            ** GOTO lbl-1000
                        }
                        catch (MatchException v7) {
                            throw dj.agn(v7);
                        }
                        v8 = var11_10;
                        if (var7_7 != null) break block14;
                    }
                    catch (MatchException v9) {
                        throw dj.agn(v9);
                    }
                    v6 = v8.cnW();
                }
                catch (MatchException v10) {
                    throw dj.agn(v10);
                }
            }
            if (!v6) {
                v8 = var11_10;
            } else lbl-1000:
            // 2 sources

            {
                v8 = mG.UhgnI;
            }
        }
        v0.bUS(v5.dtN(v8).dtO(var10_9).dtS());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE agb(BlockPos blockPos) {
        dj dj2;
        List<BlockPos> list;
        List<BlockPos> list2;
        block38: {
            List<BlockPos> list3;
            iS[] iSArray;
            block37: {
                long l2 = UFHNj ^ 0x13F5832D7A09L;
                iSArray = dh.afl();
                try {
                    if (!this.iKDmr.WF()) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
                list2 = List.of(blockPos, blockPos.east(), blockPos.south(), blockPos.south().east());
                for (BlockPos blockPos2 : list2) {
                    boolean bl2;
                    block35: {
                        block36: {
                            block34: {
                                block33: {
                                    try {
                                        try {
                                            bl2 = this.agh(blockPos2);
                                            if (iSArray != null) break block33;
                                            if (!bl2) return null;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        bl2 = this.agh(blockPos2.up());
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block34;
                                        if (!bl2) return null;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl2 = this.agh(blockPos2.up(2));
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block35;
                                    if (bl2) break block36;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl2 = this.agi(blockPos2.down());
                    }
                    try {
                        if (!bl2) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    if (iSArray == null) continue;
                }
                list = new ArrayList();
                for (BlockPos blockPos3 : list2) {
                    try {
                        list3 = list;
                        if (iSArray == null) {
                            list3.add(blockPos3.down());
                            if (iSArray == null) continue;
                            break;
                        }
                        break block37;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                list3 = List.of(blockPos.north(), blockPos.east().north(), blockPos.west(), blockPos.south().west(), blockPos.south().south(), blockPos.south().east().south(), blockPos.east().east(), blockPos.south().east().east());
            }
            List<BlockPos> list4 = list3;
            for (BlockPos blockPos4 : list4) {
                block39: {
                    boolean bl3;
                    block40: {
                        try {
                            try {
                                try {
                                    dj2 = this;
                                    if (iSArray != null) break block38;
                                    bl3 = dj2.agi(blockPos4);
                                    if (iSArray != null) break block39;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (bl3) break block40;
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    bl3 = list.add(blockPos4);
                }
                if (iSArray == null) continue;
            }
            dj2 = this;
        }
        dj$sD dj$sD = dj2.agc(list);
        try {
            if (dj$sD == null) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        dj$sE dj$sE = new dj$sE(list2, dj$sD, dj$sC.vzSwM);
        return dj$sE;
    }

    /*
     * Unable to fully structure code
     */
    private dj$sD agc(List<BlockPos> var1_1) {
        block28: {
            block29: {
                block23: {
                    var2_2 = dj.UFHNj ^ 13877631328698L;
                    var5_3 = false;
                    var4_4 = dh.afl();
                    var6_5 = false;
                    for (BlockPos var8_7 : var1_1) {
                        block27: {
                            block26: {
                                block24: {
                                    block25: {
                                        try {
                                            try {
                                                try {
                                                    v0 = this.agi(var8_7);
                                                    if (var4_4 != null) break block23;
                                                    if (var4_4 != null) break block24;
                                                }
                                                catch (MatchException v1) {
                                                    throw dj.agn(v1);
                                                }
                                                if (v0) break block25;
                                            }
                                            catch (MatchException v2) {
                                                throw dj.agn(v2);
                                            }
                                            return null;
                                        }
                                        catch (MatchException v3) {
                                            throw dj.agn(v3);
                                        }
                                    }
                                    v4 = this.agj(var8_7);
                                }
                                try {
                                    if (var4_4 != null) break block26;
                                    if (v4) {
                                    }
                                    ** GOTO lbl35
                                }
                                catch (MatchException v5) {
                                    throw dj.agn(v5);
                                }
                                var5_3 = true;
                                try {
                                    if (var4_4 == null) break block27;
lbl35:
                                    // 2 sources

                                    v4 = true;
                                }
                                catch (MatchException v6) {
                                    throw dj.agn(v6);
                                }
                            }
                            var6_5 = v4;
                        }
                        if (var4_4 == null) continue;
                    }
                    v0 = var5_3;
                }
                try {
                    try {
                        try {
                            try {
                                if (var4_4 != null) break block28;
                                if (!v0) break block29;
                            }
                            catch (MatchException v7) {
                                throw dj.agn(v7);
                            }
                            v0 = var6_5;
                            if (var4_4 != null) break block28;
                        }
                        catch (MatchException v8) {
                            throw dj.agn(v8);
                        }
                        if (v0) break block29;
                    }
                    catch (MatchException v9) {
                        throw dj.agn(v9);
                    }
                    return dj$sD.zrNsv;
                }
                catch (MatchException v10) {
                    throw dj.agn(v10);
                }
            }
            v0 = var5_3;
        }
        try {
            if (v0) {
                return dj$sD.XoavU;
            }
        }
        catch (MatchException v11) {
            throw dj.agn(v11);
        }
        return dj$sD.WBAxv;
    }

    private boolean agj(BlockPos blockPos) {
        return rD.dlmvG.world.getBlockState(blockPos).isOf(Blocks.BEDROCK);
    }

    private static /* synthetic */ int agm(BlockPos blockPos) {
        return blockPos.getX();
    }

    private static String ago(byte[] byArray) {
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
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private dj$sE afZ(BlockPos blockPos) {
        dj dj2;
        int n2;
        ArrayList<Direction> arrayList;
        block45: {
            iS[] iSArray;
            block43: {
                block44: {
                    ArrayList<BlockPos> arrayList2;
                    block40: {
                        boolean bl2;
                        block39: {
                            block38: {
                                block37: {
                                    dj$sE dj$sE;
                                    long l2 = UFHNj ^ 0x5E70E958F067L;
                                    dj$sE dj$sE2 = this.agb(blockPos);
                                    iSArray = dh.afl();
                                    try {
                                        dj$sE = dj$sE2;
                                        if (iSArray != null) return dj$sE;
                                        if (dj$sE == null) break block37;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    dj$sE = dj$sE2;
                                    return dj$sE;
                                }
                                try {
                                    try {
                                        bl2 = this.agh(blockPos);
                                        if (iSArray != null) break block38;
                                        if (!bl2) return null;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl2 = this.agh(blockPos.up());
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block39;
                                    if (!bl2) return null;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                bl2 = this.agh(blockPos.up(2));
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        try {
                            if (!bl2) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        arrayList = new ArrayList<Direction>();
                        arrayList2 = new ArrayList<BlockPos>();
                        try {
                            arrayList2.add(blockPos.down());
                            if (!this.agi(blockPos.down())) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        for (Direction direction : Direction.Type.HORIZONTAL) {
                            block41: {
                                block42: {
                                    BlockPos blockPos2 = blockPos.offset(direction);
                                    try {
                                        try {
                                            try {
                                                n2 = this.agi(blockPos2) ? 1 : 0;
                                                if (iSArray != null) break block40;
                                                if (iSArray != null) break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            if (n2 == 0) break block42;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        arrayList2.add(blockPos2);
                                        if (iSArray == null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                }
                                arrayList.add(direction);
                            }
                            if (iSArray == null) continue;
                        }
                        n2 = arrayList.isEmpty();
                    }
                    try {
                        if (iSArray != null) break block43;
                        if (n2 == 0) break block44;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj$sD dj$sD = this.agc(arrayList2);
                    try {
                        if (dj$sD == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj$sE dj$sE = new dj$sE(List.of(blockPos), dj$sD, dj$sC.iiJny);
                    return dj$sE;
                }
                n2 = arrayList.size();
            }
            try {
                try {
                    try {
                        if (iSArray != null) break block45;
                        if (n2 != 1) return null;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    dj2 = this;
                    if (iSArray != null) return dj2.aga(blockPos, (Direction)arrayList.get(0));
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
                n2 = dj2.NUWIx.WF() ? 1 : 0;
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
        }
        try {
            if (n2 == 0) {
                return null;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        dj2 = this;
        return dj2.aga(blockPos, (Direction)arrayList.get(0));
    }

    private boolean agi(BlockPos blockPos) {
        boolean bl2;
        block18: {
            block20: {
                block19: {
                    long l2 = UFHNj ^ 0x331C8330B87BL;
                    BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        bl2 = blockState.isOf(Blocks.BEDROCK);
                                                        if (iSArray != null) break block18;
                                                        if (bl2) break block19;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dj.agn(matchException);
                                                    }
                                                    bl2 = blockState.isOf(Blocks.OBSIDIAN);
                                                    if (iSArray != null) break block18;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dj.agn(matchException);
                                                }
                                                if (bl2) break block19;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            bl2 = blockState.isOf(Blocks.CRYING_OBSIDIAN);
                                            if (iSArray != null) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (bl2) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    bl2 = blockState.isOf(Blocks.ENDER_CHEST);
                                    if (iSArray != null) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (bl2) break block19;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                            bl2 = blockState.isOf(Blocks.RESPAWN_ANCHOR);
                            if (iSArray != null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        if (!bl2) break block20;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                bl2 = true;
                break block18;
            }
            bl2 = false;
        }
        return bl2;
    }

    private void agf(BufferBuilder bufferBuilder, Matrix4f matrix4f, Box box, mG mG2) {
        long l2 = UFHNj ^ 0x22A55A80B882L;
        int n2 = mG2.cob(0.35f).coh();
        try {
            bufferBuilder.vertex((Matrix4fc)matrix4f, (float)box.minX, (float)box.minY, (float)box.minZ).color(n2);
            bufferBuilder.vertex((Matrix4fc)matrix4f, (float)box.maxX, (float)box.minY, (float)box.minZ).color(n2);
            bufferBuilder.vertex((Matrix4fc)matrix4f, (float)box.maxX, (float)box.minY, (float)box.maxZ).color(n2);
            bufferBuilder.vertex((Matrix4fc)matrix4f, (float)box.minX, (float)box.minY, (float)box.maxZ).color(n2);
            if (!this.ZnfqN.WF()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dj.agn(matchException);
        }
        float f2 = (float)box.minX;
        float f3 = (float)box.minY;
        float f4 = (float)box.minZ;
        float f5 = (float)box.maxX;
        float f6 = (float)box.maxZ;
        float f7 = Math.min(0.04f, Math.min(f5 - f2, f6 - f4) * 0.5f);
        int n3 = mG2.coh();
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f4).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f4).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f6 - f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f6 - f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f6).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f6).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2 + f7, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2 + f7, f3, f6 - f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f2, f3, f6 - f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5 - f7, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f4 + f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5, f3, f6 - f7).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f5 - f7, f3, f6 - f7).color(n3);
    }

    private static int ags(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2AA9;
        if (gUpUM[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = CvhLh[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HQhKx.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HQhKx.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dj", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dj.gUpUM[n3] = n4;
        }
        return gUpUM[n3];
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void afU(MatrixStack matrixStack, Vec3d vec3d, List<dj$sB> list) {
        long l2 = UFHNj ^ 0x57895CEA73AFL;
        iS[] iSArray = dh.afl();
        MMuss.startBatch();
        iS[] iSArray2 = iSArray;
        try {
            for (dj$sB dj$sB : list) {
                try {
                    this.agd(matrixStack, dj$sB.hole(), vec3d, dj$sB.fadeFactor());
                    if (iSArray2 != null) return;
                    if (iSArray2 == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                    return;
                }
            }
        }
        finally {
            MMuss.endBatch();
        }
    }

    @hG
    public void afR(gH.th th2) {
        block4: {
            dj dj2;
            block5: {
                long l2 = UFHNj ^ 0x712C21A919F7L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        dj2 = this;
                        if (iSArray != null) break block4;
                        if (dj2.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    this.soBDJ.clear();
                    this.Dpuot.clear();
                    return;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            dj2 = this;
        }
        dj2.soBDJ = this.afY();
    }

    private static Throwable agn(Throwable throwable) {
        return throwable;
    }

    private static CallSite agr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void afW() {
        long l2 = UFHNj ^ 0x2D1959938863L;
        Iterator<dj$sE> iterator = this.soBDJ.iterator();
        iS[] iSArray = dh.afl();
        while (iterator.hasNext()) {
            dj$sE dj$sE = iterator.next();
            try {
                if (this.Dpuot.containsKey(dj$sE) && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
            rk rk2 = new rk((int)dj.agu("w", (int)15599, (long)(0x70CCB875034DA40L ^ l2))).dhs(rj.UPXqT);
            rk2.dhg();
            this.Dpuot.put(dj$sE, rk2);
            if (iSArray == null) continue;
        }
    }

    private List<dj$sB> afT() {
        long l2 = UFHNj ^ 0x6C5EC7026477L;
        ArrayList<dj$sB> arrayList = new ArrayList<dj$sB>();
        iS[] iSArray = dh.afl();
        Iterator<Map.Entry<dj$sE, rk>> iterator = this.Dpuot.entrySet().iterator();
        while (iterator.hasNext()) {
            block20: {
                boolean bl2;
                float f2;
                dj$sE dj$sE;
                block21: {
                    block19: {
                        block17: {
                            float f3;
                            block18: {
                                float f4;
                                rk rk2;
                                Map.Entry<dj$sE, rk> entry = iterator.next();
                                dj$sE = entry.getKey();
                                rk rk3 = entry.getValue();
                                boolean bl3 = this.afX(dj$sE);
                                try {
                                    rk2 = rk3;
                                    f4 = bl3 ? 1.0f : 0.0f;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                f2 = rk2.dhd(f4);
                                try {
                                    try {
                                        try {
                                            try {
                                                bl2 = bl3;
                                                if (iSArray != null) break block17;
                                                if (bl2) break block18;
                                            }
                                            catch (MatchException matchException) {
                                                throw dj.agn(matchException);
                                            }
                                            float f5 = f2 - 0.0f;
                                            bl2 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                                            if (iSArray != null) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (bl2) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    iterator.remove();
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            bl2 = (f3 = f2 - 0.0f) == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (iSArray != null) break block19;
                            if (!bl2) continue;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        bl2 = jJ.bIA(dj$sE.center());
                    }
                    try {
                        try {
                            if (iSArray != null) break block20;
                            if (bl2) break block21;
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                bl2 = arrayList.add(new dj$sB(dj$sE, f2));
            }
            if (iSArray == null) continue;
        }
        return arrayList;
    }

    private void afV(MatrixStack matrixStack, Vec3d vec3d, List<dj$sB> list) {
        this.age(matrixStack, vec3d, list);
    }

    private List<dj$sE> afY() {
        BlockPos blockPos;
        int n2;
        int n3;
        int n4;
        int n5;
        int n6;
        BlockPos blockPos2;
        iS[] iSArray;
        ArrayList<dj$sE> arrayList;
        block42: {
            block43: {
                block36: {
                    long l2 = UFHNj ^ 0x70C074A93B9L;
                    arrayList = new ArrayList<dj$sE>();
                    HashSet<BlockPos> hashSet = new HashSet<BlockPos>();
                    iSArray = dh.afl();
                    blockPos2 = rD.dlmvG.player.getBlockPos();
                    n6 = MathHelper.ceil((double)this.LEzwX.VI());
                    int n7 = MathHelper.ceil((double)this.uQNEX.VI());
                    n5 = blockPos2.getY() - n7;
                    block28: while (true) {
                        int n8 = n5;
                        block29: while (n8 <= blockPos2.getY() + n7) {
                            n4 = -n6;
                            if (iSArray != null) break block36;
                            n3 = n4;
                            block30: while (true) {
                                int n9 = n3;
                                block31: while (n9 <= n6) {
                                    n8 = -n6;
                                    if (iSArray != null) continue block29;
                                    n2 = n8;
                                    while (n2 <= n6) {
                                        block37: {
                                            block38: {
                                                dj$sE dj$sE;
                                                block40: {
                                                    block39: {
                                                        blockPos = new BlockPos(blockPos2.getX() + n3, n5, blockPos2.getZ() + n2);
                                                        try {
                                                            if (iSArray != null) break block37;
                                                            n9 = hashSet.contains(blockPos) ? 1 : 0;
                                                            if (iSArray != null) continue block31;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dj.agn(matchException);
                                                        }
                                                        try {
                                                            try {
                                                                if (n9 != 0) break block38;
                                                                if (!(blockPos.toCenterPos().squaredDistanceTo(rD.dlmvG.player.getEntityPos()) > this.agk())) break block39;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dj.agn(matchException);
                                                            }
                                                            if (iSArray == null) break block38;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dj.agn(matchException);
                                                        }
                                                    }
                                                    dj$sE = this.afZ(blockPos);
                                                    try {
                                                        block41: {
                                                            try {
                                                                try {
                                                                    if (iSArray != null) break block40;
                                                                    if (dj$sE != null) break block41;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw dj.agn(matchException);
                                                                }
                                                                if (iSArray == null) break block38;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dj.agn(matchException);
                                                            }
                                                        }
                                                        arrayList.add(dj$sE);
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dj.agn(matchException);
                                                    }
                                                }
                                                hashSet.addAll(dj$sE.cells());
                                            }
                                            ++n2;
                                        }
                                        if (iSArray == null) continue;
                                    }
                                    ++n3;
                                    if (iSArray == null) continue block30;
                                }
                                break;
                            }
                            ++n5;
                            if (iSArray == null) continue block28;
                        }
                        break;
                    }
                    n4 = this.oBPYh.WF() ? 1 : 0;
                }
                try {
                    try {
                        if (iSArray != null) break block42;
                        if (n4 != 0) break block43;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    return arrayList;
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            n5 = rD.dlmvG.world.getBottomY();
            n4 = -n6;
        }
        n3 = n4;
        block33: while (true) {
            int n10 = n3;
            block34: while (n10 <= n6) {
                for (n2 = -n6; n2 <= n6; ++n2) {
                    boolean bl2;
                    block44: {
                        blockPos = new BlockPos(blockPos2.getX() + n3, n5, blockPos2.getZ() + n2);
                        double d2 = blockPos.toCenterPos().squaredDistanceTo(rD.dlmvG.player.getEntityPos()) - this.agk();
                        n10 = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                        if (iSArray != null) continue block34;
                        try {
                            block45: {
                                try {
                                    try {
                                        if (iSArray != null) break block44;
                                        if (n10 <= 0) break block45;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            bl2 = rD.dlmvG.world.getBlockState(blockPos).isOf(Blocks.BEDROCK);
                        }
                        catch (MatchException matchException) {
                            throw dj.agn(matchException);
                        }
                    }
                    try {
                        block46: {
                            try {
                                try {
                                    if (iSArray != null) continue;
                                    if (!bl2) break block46;
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw dj.agn(matchException);
                            }
                        }
                        bl2 = arrayList.add(new dj$sE(List.of(blockPos), dj$sD.btXid, dj$sC.WdDaI));
                        continue;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                }
                ++n3;
                if (iSArray == null) continue block33;
            }
            break;
        }
        return arrayList;
    }

    /*
     * Exception decompiling
     */
    private boolean afX(dj$sE var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [8[TRYBLOCK]], but top level block is 20[SWITCH]
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

    private static CallSite agu(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void afS(go.sX sX2) {
        dj dj2;
        List<dj$sB> list;
        Vec3d vec3d;
        MatrixStack matrixStack;
        block24: {
            boolean bl2;
            block22: {
                iS[] iSArray;
                block23: {
                    block25: {
                        block20: {
                            ClientPlayerEntity clientPlayerEntity;
                            block21: {
                                long l2 = UFHNj ^ 0x70D1467A33A0L;
                                iSArray = dh.afl();
                                try {
                                    try {
                                        try {
                                            if (!this.bab()) break block20;
                                            clientPlayerEntity = rD.dlmvG.player;
                                            if (iSArray != null) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw dj.agn(matchException);
                                        }
                                        if (clientPlayerEntity == null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw dj.agn(matchException);
                                    }
                                    clientPlayerEntity = rD.dlmvG.getCameraEntity();
                                }
                                catch (MatchException matchException) {
                                    throw dj.agn(matchException);
                                }
                            }
                            if (clientPlayerEntity != null) break block25;
                        }
                        return;
                    }
                    try {
                        this.afW();
                        if (this.Dpuot.isEmpty()) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    matrixStack = sX2.bbh();
                    vec3d = rD.dlmvG.gameRenderer.getCamera().getCameraPos().negate();
                    list = this.afT();
                    try {
                        bl2 = list.isEmpty();
                        if (iSArray != null) break block22;
                        if (!bl2) break block23;
                    }
                    catch (MatchException matchException) {
                        throw dj.agn(matchException);
                    }
                    return;
                }
                try {
                    dj2 = this;
                    if (iSArray != null) break block24;
                    bl2 = dj2.lvORN.SZ();
                }
                catch (MatchException matchException) {
                    throw dj.agn(matchException);
                }
            }
            try {
                if (bl2) {
                    this.afU(matrixStack, vec3d, list);
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dj.agn(matchException);
            }
            dj2 = this;
        }
        dj2.afV(matrixStack, vec3d, list);
    }

    @Override
    public void YO() {
        super.YO();
        this.soBDJ.clear();
        this.Dpuot.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dj.class, "agq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(dj.class, "agt", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

