/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  mixin.accessors.LivingEntityAccessor
 *  mixin.accessors.ModelPartAccessor
 *  net.minecraft.class_1297
 *  net.minecraft.class_1297$class_5529
 *  net.minecraft.class_1309
 *  net.minecraft.class_1937
 *  net.minecraft.class_243
 *  net.minecraft.class_2596
 *  net.minecraft.class_2663
 *  net.minecraft.class_2739
 *  net.minecraft.class_276
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_2945$class_7834
 *  net.minecraft.class_4587
 *  net.minecraft.class_583
 *  net.minecraft.class_630
 *  net.minecraft.class_897
 *  net.minecraft.class_922
 *  net.minecraft.class_9799
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Vector3f
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.LivingEntityAccessor;
import mixin.accessors.ModelPartAccessor;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1937;
import net.minecraft.class_243;
import net.minecraft.class_2596;
import net.minecraft.class_2663;
import net.minecraft.class_2739;
import net.minecraft.class_276;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_2945;
import net.minecraft.class_4587;
import net.minecraft.class_583;
import net.minecraft.class_630;
import net.minecraft.class_897;
import net.minecraft.class_922;
import net.minecraft.class_9799;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Vector3f;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.cZ$su;
import sixtwo.dh;
import sixtwo.gL;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hp;
import sixtwo.iS;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.kl;
import sixtwo.kl$ug;
import sixtwo.lB;
import sixtwo.lF;
import sixtwo.mU;
import sixtwo.mr;
import sixtwo.rD;

public class cZ
extends gg {
    private final cG pRslV;
    private final cG STwyB;
    private final cJ pxIjY;
    private final cC RvFwK;
    private final cC LMxtE;
    private final cC szQUj;
    private final cC BzSYi;
    private final cC ZbKTw;
    private final List<cZ$su> TIWnG;
    private final Set<UUID> eWrHR;
    private final kl$ug UUyNm;
    private static final long LBZya;
    private static final String ZBgUJ;
    private static final long[] KkEHl;
    private static final Integer[] mtFzz;
    private static final Map YqPEO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cZ() {
        long l = LBZya ^ 0x2596EFD5D5BL;
        super(gf.aZL((int)cZ.abr("a", (int)23734, (long)(0x194485F87ECDF355L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cZ.abr("a", (int)20987, (long)(0x6C14B0AA7A47FE1EL ^ l))];
        nArray[0] = (int)cZ.abr("a", (int)31407, (long)(0x108A6A9902FD55DL ^ l));
        nArray[1] = (int)cZ.abr("a", (int)17757, (long)(0x2D5D64F0B8BCEA94L ^ l));
        nArray[2] = (int)cZ.abr("a", (int)19960, (long)(0x753AD6A0DBE4E220L ^ l));
        nArray[3] = (int)cZ.abr("a", (int)25693, (long)(0x659C847A9C48CBA4L ^ l));
        nArray[4] = (int)cZ.abr("a", (int)24999, (long)(0x24A18D2BF76CE76L ^ l));
        nArray[5] = (int)cZ.abr("a", (int)25065, (long)(0x20A214C137F9CE22L ^ l));
        nArray[cZ.abr("a", (int)31911, (long)(0x50DDF9795E99D36DL ^ l))] = (int)cZ.abr("a", (int)8114, (long)(0x632208AC72DF3065L ^ l));
        this.pRslV = new cG(this, mr.clS(nArray)).Uf(rD.dlM().bjf());
        this.STwyB = new cG(this, mr.clS(new int[]{(int)cZ.abr("a", (int)11483, (long)(0x2957D2756E04030FL ^ l)), (int)cZ.abr("a", (int)21473, (long)(0x5C69F3A50EB9FC12L ^ l)), (int)cZ.abr("a", (int)17552, (long)(0x74924C96781AEB5FL ^ l)), (int)cZ.abr("a", (int)26996, (long)(0x5EEE8C0CACFCC684L ^ l))})).Uf(rD.dlM().bjf()).We();
        int[] nArray2 = new int[cZ.abr("a", (int)14476, (long)(0x7BF200F203B11740L ^ l))];
        nArray2[0] = (int)cZ.abr("a", (int)18407, (long)(0x31BEFFBF768DE822L ^ l));
        nArray2[1] = (int)cZ.abr("a", (int)26565, (long)(0x4E443DF2237F4823L ^ l));
        nArray2[2] = (int)cZ.abr("a", (int)18953, (long)(0xBF0FACACE03E5DFL ^ l));
        nArray2[3] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray2[4] = (int)cZ.abr("a", (int)27817, (long)(0x2F0FDECBC7A1435DL ^ l));
        nArray2[5] = (int)cZ.abr("a", (int)8356, (long)(0x686FEDBFCE8C8F40L ^ l));
        nArray2[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))] = (int)cZ.abr("a", (int)7376, (long)(0x6DECC35378483338L ^ l));
        nArray2[cZ.abr("a", (int)12106, (long)(0x99CDCEEAFF9808DL ^ l))] = (int)cZ.abr("a", (int)16560, (long)(0x1023C72BC1146F47L ^ l));
        nArray2[cZ.abr("a", (int)17250, (long)(0x6C07142A12CBEC82L ^ l))] = (int)cZ.abr("a", (int)21982, (long)(0x2BBC6FB1878D7A0EL ^ l));
        nArray2[cZ.abr("a", (int)20010, (long)(0x57FE616B77E761C3L ^ l))] = (int)cZ.abr("a", (int)19896, (long)(0x27533C8A2BFEE259L ^ l));
        nArray2[cZ.abr("a", (int)7996, (long)(0x68F3B3B828DF30C0L ^ l))] = (int)cZ.abr("a", (int)19896, (long)(0x27533C8A2BFEE259L ^ l));
        nArray2[cZ.abr("a", (int)18046, (long)(0x34D920767647E9BDL ^ l))] = (int)cZ.abr("a", (int)12487, (long)(0x525E9907A5399F38L ^ l));
        this.pxIjY = new cJ(this, mr.clS(nArray2));
        int[] nArray3 = new int[cZ.abr("a", (int)28683, (long)(0x336AAD34E18D5FE4L ^ l))];
        nArray3[0] = (int)cZ.abr("a", (int)23350, (long)(0x5CF8F38A94BCF4CCL ^ l));
        nArray3[1] = (int)cZ.abr("a", (int)21982, (long)(0x2BBC6FB1878D7A0EL ^ l));
        nArray3[2] = (int)cZ.abr("a", (int)25065, (long)(0x20A214C137F9CE22L ^ l));
        nArray3[3] = (int)cZ.abr("a", (int)24896, (long)(0x5E67F33B09AACEB1L ^ l));
        nArray3[4] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray3[5] = (int)cZ.abr("a", (int)29617, (long)(0x6712486B09F15C77L ^ l));
        nArray3[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))] = (int)cZ.abr("a", (int)19896, (long)(0x27533C8A2BFEE259L ^ l));
        nArray3[cZ.abr("a", (int)12106, (long)(0x99CDCEEAFF9808DL ^ l))] = (int)cZ.abr("a", (int)12982, (long)(0x20E700A01CFD9D7EL ^ l));
        nArray3[cZ.abr("a", (int)22520, (long)(0x483CCFF6BA7AF81AL ^ l))] = (int)cZ.abr("a", (int)21847, (long)(0x3AABA5E1D06FFAACL ^ l));
        nArray3[cZ.abr("a", (int)26763, (long)(0x4D909326A75C474BL ^ l))] = (int)cZ.abr("a", (int)5731, (long)(0x291F0FC9300F3988L ^ l));
        nArray3[cZ.abr("a", (int)32737, (long)(0x793917221702D00BL ^ l))] = (int)cZ.abr("a", (int)15817, (long)(0x4E8D17C26539921AL ^ l));
        nArray3[cZ.abr("a", (int)8632, (long)(0x18DDB68B5EDC0E5FL ^ l))] = (int)cZ.abr("a", (int)18469, (long)(0x1D22A6D4B8C6E7F0L ^ l));
        nArray3[cZ.abr("a", (int)5156, (long)(0x200ED35991933BE0L ^ l))] = (int)cZ.abr("a", (int)5006, (long)(0x42AF5B0864B13C4CL ^ l));
        nArray3[cZ.abr("a", (int)21073, (long)(0x99047B68E8E7D88L ^ l))] = (int)cZ.abr("a", (int)28170, (long)(0x460384F9EA5FC1FCL ^ l));
        this.RvFwK = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(100.0).Vx(3000.0).VA(1500.0);
        int[] nArray4 = new int[cZ.abr("a", (int)22520, (long)(0x483CCFF6BA7AF81AL ^ l))];
        nArray4[0] = (int)cZ.abr("a", (int)11674, (long)(0x34920D90142B0248L ^ l));
        nArray4[1] = (int)cZ.abr("a", (int)21620, (long)(0x37935E0F5D1B7B99L ^ l));
        nArray4[2] = (int)cZ.abr("a", (int)25065, (long)(0x20A214C137F9CE22L ^ l));
        nArray4[3] = (int)cZ.abr("a", (int)21982, (long)(0x2BBC6FB1878D7A0EL ^ l));
        nArray4[4] = (int)cZ.abr("a", (int)28170, (long)(0x460384F9EA5FC1FCL ^ l));
        nArray4[5] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray4[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))] = (int)cZ.abr("a", (int)15817, (long)(0x4E8D17C26539921AL ^ l));
        nArray4[cZ.abr("a", (int)12106, (long)(0x99CDCEEAFF9808DL ^ l))] = (int)cZ.abr("a", (int)5006, (long)(0x42AF5B0864B13C4CL ^ l));
        this.LMxtE = new cC(this, mr.clS(nArray4)).Vy(0.1).Vw(0.5).Vx(5.0).VA(2.5).Vz(ZBgUJ);
        int[] nArray5 = new int[cZ.abr("a", (int)32737, (long)(0x793917221702D00BL ^ l))];
        nArray5[0] = (int)cZ.abr("a", (int)6952, (long)(0x3FD28E1E30CC34C6L ^ l));
        nArray5[1] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray5[2] = (int)cZ.abr("a", (int)9493, (long)(0x1AA68D9FBE808AD8L ^ l));
        nArray5[3] = (int)cZ.abr("a", (int)29039, (long)(0x2525AA34B868DEA1L ^ l));
        nArray5[4] = (int)cZ.abr("a", (int)12982, (long)(0x20E700A01CFD9D7EL ^ l));
        nArray5[5] = (int)cZ.abr("a", (int)25065, (long)(0x20A214C137F9CE22L ^ l));
        nArray5[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))] = (int)cZ.abr("a", (int)9493, (long)(0x1AA68D9FBE808AD8L ^ l));
        nArray5[cZ.abr("a", (int)12106, (long)(0x99CDCEEAFF9808DL ^ l))] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray5[cZ.abr("a", (int)22520, (long)(0x483CCFF6BA7AF81AL ^ l))] = (int)cZ.abr("a", (int)15817, (long)(0x4E8D17C26539921AL ^ l));
        nArray5[cZ.abr("a", (int)26763, (long)(0x4D909326A75C474BL ^ l))] = (int)cZ.abr("a", (int)5006, (long)(0x42AF5B0864B13C4CL ^ l));
        this.szQUj = new cC(this, mr.clS(nArray5)).Vy(0.01).Vw(0.0).Vx(1.0).VA(1.0);
        int[] nArray6 = new int[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))];
        nArray6[0] = (int)cZ.abr("a", (int)23710, (long)(0x5E19C37A02E4F366L ^ l));
        nArray6[1] = (int)cZ.abr("a", (int)21982, (long)(0x2BBC6FB1878D7A0EL ^ l));
        nArray6[2] = (int)cZ.abr("a", (int)16999, (long)(0x21D199C527AEEDA6L ^ l));
        nArray6[3] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray6[4] = (int)cZ.abr("a", (int)21620, (long)(0x37935E0F5D1B7B99L ^ l));
        nArray6[5] = (int)cZ.abr("a", (int)9493, (long)(0x1AA68D9FBE808AD8L ^ l));
        this.BzSYi = new cC(this, mr.clS(nArray6)).Vy(0.01).Vw(0.02).Vx(0.5).VA(0.08);
        int[] nArray7 = new int[cZ.abr("a", (int)8632, (long)(0x18DDB68B5EDC0E5FL ^ l))];
        nArray7[0] = (int)cZ.abr("a", (int)25189, (long)(0x6F202D4784C44D98L ^ l));
        nArray7[1] = (int)cZ.abr("a", (int)19896, (long)(0x27533C8A2BFEE259L ^ l));
        nArray7[2] = (int)cZ.abr("a", (int)15817, (long)(0x4E8D17C26539921AL ^ l));
        nArray7[3] = (int)cZ.abr("a", (int)28758, (long)(0x220213DA098DDF8CL ^ l));
        nArray7[4] = (int)cZ.abr("a", (int)21847, (long)(0x3AABA5E1D06FFAACL ^ l));
        nArray7[5] = (int)cZ.abr("a", (int)13405, (long)(0x4DB7637A0F21BA3L ^ l));
        nArray7[cZ.abr("a", (int)11786, (long)(0x6512D9A5043781FFL ^ l))] = (int)cZ.abr("a", (int)21982, (long)(0x2BBC6FB1878D7A0EL ^ l));
        nArray7[cZ.abr("a", (int)12106, (long)(0x99CDCEEAFF9808DL ^ l))] = (int)cZ.abr("a", (int)16999, (long)(0x21D199C527AEEDA6L ^ l));
        nArray7[cZ.abr("a", (int)22520, (long)(0x483CCFF6BA7AF81AL ^ l))] = (int)cZ.abr("a", (int)11795, (long)(0x2C53719712FD01FFL ^ l));
        nArray7[cZ.abr("a", (int)26763, (long)(0x4D909326A75C474BL ^ l))] = (int)cZ.abr("a", (int)21620, (long)(0x37935E0F5D1B7B99L ^ l));
        nArray7[cZ.abr("a", (int)32737, (long)(0x793917221702D00BL ^ l))] = (int)cZ.abr("a", (int)9493, (long)(0x1AA68D9FBE808AD8L ^ l));
        this.ZbKTw = new cC(this, mr.clS(nArray7)).Vy(0.01).Vw(0.0).Vx(0.75).VA(0.5);
        this.TIWnG = new CopyOnWriteArrayList<cZ$su>();
        this.eWrHR = ConcurrentHashMap.newKeySet();
        this.UUyNm = new kl$ug();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    cZ.LBZya = gb.aYR(-1712787328904431570L, 8501604932543542635L, MethodHandles.lookup().lookupClass()).a(192440276857214L);
                    var11 = cZ.LBZya ^ 12502690815119L;
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
                var15_3 = var13_1.doFinal("\u00b1o\u00c4S\u00edx\u00e8Y".getBytes("ISO-8859-1"));
                ** while (true)
                cZ.ZBgUJ = cZ.abo(var15_3).intern();
                cZ.YqPEO = new HashMap<K, V>(13);
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
                var6_6 = new long[59];
                var3_7 = 0;
                var4_8 = "\u0087\u009f\u00d9\u00ee\u0012!\u0014P\u00de\u00975\t\u00b2\u0085P\u00be\u001eN=[\u00e6\u00af\u00be\u001d3Y\u00fbL)\u00da\u00e9v\u00f7\u00fb\u00d0>`\u00cd|\u00be-O\u00c6\u00ff\u00dc\u008b\u00e7@R\u0007\u00f9\u00f3\u00df\u0091`\u0081\u001b\u0004\u001ah\u0018o\u00c1\u00cc\u00ae\u008fl\u00ea\u00f4\u00c2PfB\u0099e\u00a4q\bU\"Wn\u00c2\u00e8\u0004\u00a7\u0092\f\u00ce#w'\u00f7D\u00e71\u00bc\u00ffh1\u001b\u00fef\u00c8$\tG\u001c\u00a0\u00b0\u00a7\u00a2\u00f6L\u00e2\u00a0\nU\u00b2*\u001c\u00dfS\u0094\u0016Y\u00a8\u001fJD1&\u00bd\u00da\u001db\u00f5S{\u00f8+\u009e\u0002\u00d8\u0084\b\u00d7\u00d7g\u001d\u008c:c\u0017\u00f7\u00f2\u00e2\u00c07H7\u00a8\u0093\u00c8\u00b3\u00de\u00ebF:\u00d3\u00a2\u00b6u\u00b8I\u00fe(\u008eo\u00e3\u00e9\u008cO\u00ac\u0018T\u00bd\u00bf\u00db\u00a29\u00ee\u00fd\u0084D\f\r1\u00f6\u00bf\u0082$R\u00ea\u00b2\u0014\u00b0\u00ba\u0090\u00ff\u0007\u00e4A%\u00ae\u00c8\u00d6\u00e2\u0084\u00a8\u00e0r/\u0017N\u00b3\u00b9\u00a6\u00e2\u0013\u0096\u00b7\u00dct\u0093GG\u00fe\u008eH\u00c7\u00ad\u008eL\u0002fg\u00a6\u0086\u0094\u00fa\u00dbB\u008c\u00b3\u00ad(\u00aaq\u00fd\u0016*\u00e1G\u00a1\u00ff}8\u00bf\u0080\u00884_I\u00ff[\fF\u0000\f\u00e8\u0016\u00f3&\u00fd\u0014\u0088v\u001f\u0015\u00b6L\u00a9\u001dw\u00db-\u00ad\u00deiBx\u00b5\u00dd\u0000\u00f9\u00ed\u00d8\u000e\u00cbK'\u0018\u0013G\u00ed\u00002/\u001dI\u00f0\u00a1\u0086l\u00ab\u009e\u00de\u00dd\u008f\u00e9.zFN\u00a78\u00f26o\u001b\u00c3X\u00ee\u0099\u00e5\u00f9\u00cc T\u00e5\u00bdQi\u00cf\u00dc\u0085X6\u00c4\u00da\u00ef\u0018\u00bc\u0014\u0085\u00f35\u0010\u00e29\u00b0\u001c\u0083z\u00df\u0015c\u000e\u009d#W\u00fe\u0003\u0010\u00c9AI\u00fbVB\u00d7,\u00e4x\u001b\u00c7\u00d9H\u0093\u00d2\u0000\u00ffR\u00d4\u00e4#(\u00ad\u0099)\u0095\u0085P\u00a8\u008e\u00f2\u0086\u00ac\u00af\u0018 \u0085Y\u00cca5\u00eb\u00e2\u00b0L>!\u00e8\u00a7Q\u00f3$g\u00db\u00d0\u009a\u0006\u00ad|^\u00f0g\u00da*\u00f5n\u00de\u00a7r\u0005";
                var5_9 = "\u0087\u009f\u00d9\u00ee\u0012!\u0014P\u00de\u00975\t\u00b2\u0085P\u00be\u001eN=[\u00e6\u00af\u00be\u001d3Y\u00fbL)\u00da\u00e9v\u00f7\u00fb\u00d0>`\u00cd|\u00be-O\u00c6\u00ff\u00dc\u008b\u00e7@R\u0007\u00f9\u00f3\u00df\u0091`\u0081\u001b\u0004\u001ah\u0018o\u00c1\u00cc\u00ae\u008fl\u00ea\u00f4\u00c2PfB\u0099e\u00a4q\bU\"Wn\u00c2\u00e8\u0004\u00a7\u0092\f\u00ce#w'\u00f7D\u00e71\u00bc\u00ffh1\u001b\u00fef\u00c8$\tG\u001c\u00a0\u00b0\u00a7\u00a2\u00f6L\u00e2\u00a0\nU\u00b2*\u001c\u00dfS\u0094\u0016Y\u00a8\u001fJD1&\u00bd\u00da\u001db\u00f5S{\u00f8+\u009e\u0002\u00d8\u0084\b\u00d7\u00d7g\u001d\u008c:c\u0017\u00f7\u00f2\u00e2\u00c07H7\u00a8\u0093\u00c8\u00b3\u00de\u00ebF:\u00d3\u00a2\u00b6u\u00b8I\u00fe(\u008eo\u00e3\u00e9\u008cO\u00ac\u0018T\u00bd\u00bf\u00db\u00a29\u00ee\u00fd\u0084D\f\r1\u00f6\u00bf\u0082$R\u00ea\u00b2\u0014\u00b0\u00ba\u0090\u00ff\u0007\u00e4A%\u00ae\u00c8\u00d6\u00e2\u0084\u00a8\u00e0r/\u0017N\u00b3\u00b9\u00a6\u00e2\u0013\u0096\u00b7\u00dct\u0093GG\u00fe\u008eH\u00c7\u00ad\u008eL\u0002fg\u00a6\u0086\u0094\u00fa\u00dbB\u008c\u00b3\u00ad(\u00aaq\u00fd\u0016*\u00e1G\u00a1\u00ff}8\u00bf\u0080\u00884_I\u00ff[\fF\u0000\f\u00e8\u0016\u00f3&\u00fd\u0014\u0088v\u001f\u0015\u00b6L\u00a9\u001dw\u00db-\u00ad\u00deiBx\u00b5\u00dd\u0000\u00f9\u00ed\u00d8\u000e\u00cbK'\u0018\u0013G\u00ed\u00002/\u001dI\u00f0\u00a1\u0086l\u00ab\u009e\u00de\u00dd\u008f\u00e9.zFN\u00a78\u00f26o\u001b\u00c3X\u00ee\u0099\u00e5\u00f9\u00cc T\u00e5\u00bdQi\u00cf\u00dc\u0085X6\u00c4\u00da\u00ef\u0018\u00bc\u0014\u0085\u00f35\u0010\u00e29\u00b0\u001c\u0083z\u00df\u0015c\u000e\u009d#W\u00fe\u0003\u0010\u00c9AI\u00fbVB\u00d7,\u00e4x\u001b\u00c7\u00d9H\u0093\u00d2\u0000\u00ffR\u00d4\u00e4#(\u00ad\u0099)\u0095\u0085P\u00a8\u008e\u00f2\u0086\u00ac\u00af\u0018 \u0085Y\u00cca5\u00eb\u00e2\u00b0L>!\u00e8\u00a7Q\u00f3$g\u00db\u00d0\u009a\u0006\u00ad|^\u00f0g\u00da*\u00f5n\u00de\u00a7r\u0005".length();
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
                    var4_8 = "\u00a3,\u00dfi\u001b\u00a5\u00af{\u001e\u0082\u0087 .r=\u0094";
                    var5_9 = "\u00a3,\u00dfi\u001b\u00a5\u00af{\u001e\u0082\u0087 .r=\u0094".length();
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
        cZ.KkEHl = var6_6;
        cZ.mtFzz = new Integer[59];
    }

    /*
     * Unable to fully structure code
     */
    private static float[] abi(float var0, float var1_1, float var2_2, float var3_3, float var4_4, float var5_5) {
        block25: {
            block29: {
                block28: {
                    block27: {
                        block26: {
                            block24: {
                                var6_6 = cZ.LBZya ^ 131677401040341L;
                                var9_7 = var3_3 - var0;
                                var10_8 = var4_4 - var1_1;
                                var11_9 = var5_5 - var2_2;
                                var12_10 = var9_7 * var10_8;
                                var13_11 = var9_7 * var11_9;
                                var14_12 = var10_8 * var11_9;
                                var15_13 = 2.0f * (var12_10 + var13_11 + var14_12);
                                var16_14 = cZ.abk(0.0f, var15_13);
                                var8_15 = dh.afl();
                                var17_16 = 0.4f;
                                try {
                                    v0 = var16_14 == var12_10 ? 0 : (var16_14 < var12_10 ? -1 : 1);
                                    if (var8_15 != null) break block24;
                                    if (v0 < 0) {
                                    }
                                    ** GOTO lbl25
                                }
                                catch (MatchException v1) {
                                    throw cZ.abn(v1);
                                }
                                var18_17 = cZ.abk(var0, var3_3);
                                var19_18 = cZ.abk(var1_1, var4_4);
                                var20_19 = var2_2 + cZ.abk(0.0f, var17_16);
                                try {
                                    if (var8_15 == null) break block25;
lbl25:
                                    // 2 sources

                                    v0 = (cfr_temp_0 = var16_14 - var12_10 * 2.0f) == 0.0f ? 0 : (cfr_temp_0 < 0.0f ? -1 : 1);
                                }
                                catch (MatchException v2) {
                                    throw cZ.abn(v2);
                                }
                            }
                            try {
                                if (var8_15 != null) break block26;
                                if (v0 < 0) {
                                }
                                ** GOTO lbl42
                            }
                            catch (MatchException v3) {
                                throw cZ.abn(v3);
                            }
                            var18_17 = cZ.abk(var0, var3_3);
                            var19_18 = cZ.abk(var1_1, var4_4);
                            var20_19 = var5_5 - cZ.abk(0.0f, var17_16);
                            try {
                                if (var8_15 == null) break block25;
lbl42:
                                // 2 sources

                                v0 = (cfr_temp_1 = var16_14 - (var12_10 * 2.0f + var13_11)) == 0.0f ? 0 : (cfr_temp_1 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException v4) {
                                throw cZ.abn(v4);
                            }
                        }
                        try {
                            if (var8_15 != null) break block27;
                            if (v0 < 0) {
                            }
                            ** GOTO lbl59
                        }
                        catch (MatchException v5) {
                            throw cZ.abn(v5);
                        }
                        var18_17 = cZ.abk(var0, var3_3);
                        var19_18 = var1_1 + cZ.abk(0.0f, var17_16);
                        var20_19 = cZ.abk(var2_2, var5_5);
                        try {
                            if (var8_15 == null) break block25;
lbl59:
                            // 2 sources

                            v0 = (cfr_temp_2 = var16_14 - (var12_10 * 2.0f + var13_11 * 2.0f)) == 0.0f ? 0 : (cfr_temp_2 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException v6) {
                            throw cZ.abn(v6);
                        }
                    }
                    try {
                        if (var8_15 != null) break block28;
                        if (v0 < 0) {
                        }
                        ** GOTO lbl77
                    }
                    catch (MatchException v7) {
                        throw cZ.abn(v7);
                    }
                    var18_17 = cZ.abk(var0, var3_3);
                    var19_18 = var4_4 - cZ.abk(0.0f, var17_16);
                    var20_19 = cZ.abk(var2_2, var5_5);
                    try {
                        try {
                            if (var8_15 == null) break block25;
lbl77:
                            // 2 sources

                            v8 = var16_14;
                            v9 = var12_10 * 2.0f + var13_11 * 2.0f + var14_12;
                            if (var8_15 != null) break block29;
                        }
                        catch (MatchException v10) {
                            throw cZ.abn(v10);
                        }
                        cfr_temp_3 = v8 - v9;
                        v0 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException v11) {
                        throw cZ.abn(v11);
                    }
                }
                if (v0 >= 0) ** GOTO lbl95
                var18_17 = var0 + cZ.abk(0.0f, var17_16);
                var19_18 = cZ.abk(var1_1, var4_4);
                var20_19 = cZ.abk(var2_2, var5_5);
                try {
                    if (var8_15 == null) break block25;
lbl95:
                    // 2 sources

                    v8 = var3_3;
                    v9 = cZ.abk(0.0f, var17_16);
                }
                catch (MatchException v12) {
                    throw cZ.abn(v12);
                }
            }
            var18_17 = v8 - v9;
            var19_18 = cZ.abk(var1_1, var4_4);
            var20_19 = cZ.abk(var2_2, var5_5);
        }
        return new float[]{var18_17, var19_18, var20_19};
    }

    /*
     * Unable to fully structure code
     */
    private static void abg(class_630 var0, Matrix4f var1_1, List<float[]> var2_2) {
        block53: {
            block52: {
                block51: {
                    block50: {
                        block48: {
                            block49: {
                                block46: {
                                    block47: {
                                        var3_3 = cZ.LBZya ^ 109930597342647L;
                                        var5_4 = dh.afl();
                                        try {
                                            try {
                                                v0 = var0;
                                                if (var5_4 != null) break block46;
                                                if (v0.field_3665) break block47;
                                            }
                                            catch (MatchException v1) {
                                                throw cZ.abn(v1);
                                            }
                                            return;
                                        }
                                        catch (MatchException v2) {
                                            throw cZ.abn(v2);
                                        }
                                    }
                                    v0 = var0;
                                }
                                var6_5 = v0.method_41921();
                                var7_6 = new Matrix4f((Matrix4fc)var1_1);
                                try {
                                    try {
                                        try {
                                            try {
                                                v3 = var7_6.translate(var6_5.comp_2997(), var6_5.comp_2998(), var6_5.comp_2999());
                                                if (var5_4 != null) break block48;
                                                if (var6_5.comp_3000() == 0.0f) {
                                                }
                                                ** GOTO lbl54
                                            }
                                            catch (MatchException v4) {
                                                throw cZ.abn(v4);
                                            }
                                            cfr_temp_0 = var6_5.comp_3001() - 0.0f;
                                            v5 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                            if (var5_4 != null) break block49;
                                        }
                                        catch (MatchException v6) {
                                            throw cZ.abn(v6);
                                        }
                                        if (v5 == false) {
                                        }
                                        ** GOTO lbl54
                                    }
                                    catch (MatchException v7) {
                                        throw cZ.abn(v7);
                                    }
                                    cfr_temp_1 = var6_5.comp_3002() - 0.0f;
                                    v5 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                }
                                catch (MatchException v8) {
                                    throw cZ.abn(v8);
                                }
                            }
                            try {
                                try {
                                    if (var5_4 != null) break block50;
                                    if (v5 == false) break block48;
                                }
                                catch (MatchException v9) {
                                    throw cZ.abn(v9);
                                }
lbl54:
                                // 3 sources

                                v3 = var7_6.rotateZYX(var6_5.comp_3002(), var6_5.comp_3001(), var6_5.comp_3000());
                            }
                            catch (MatchException v10) {
                                throw cZ.abn(v10);
                            }
                        }
                        v5 = (cfr_temp_2 = var6_5.comp_3003() - 1.0f) == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                    }
                    try {
                        try {
                            if (var5_4 != null) break block51;
                            if (v5 == false) {
                            }
                            ** GOTO lbl91
                        }
                        catch (MatchException v11) {
                            throw cZ.abn(v11);
                        }
                        cfr_temp_3 = var6_5.comp_3004() - 1.0f;
                        v5 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException v12) {
                        throw cZ.abn(v12);
                    }
                }
                try {
                    try {
                        if (var5_4 != null) break block52;
                        if (v5 == false) {
                        }
                        ** GOTO lbl91
                    }
                    catch (MatchException v13) {
                        throw cZ.abn(v13);
                    }
                    cfr_temp_4 = var6_5.comp_3005() - 1.0f;
                    v5 = cfr_temp_4 == 0.0f ? 0 : (cfr_temp_4 > 0.0f ? 1 : -1);
                }
                catch (MatchException v14) {
                    throw cZ.abn(v14);
                }
            }
            try {
                if (v5 == false) break block53;
lbl91:
                // 3 sources

                var7_6.scale(var6_5.comp_3003(), var6_5.comp_3004(), var6_5.comp_3005());
            }
            catch (MatchException v15) {
                throw cZ.abn(v15);
            }
        }
        var8_7 = ((ModelPartAccessor)var0).getCubes();
        var9_8 = new Vector3f();
        for (Object var11_10 : var8_7) {
            block56: {
                block54: {
                    block55: {
                        var12_11 = Math.abs(var11_10.field_3648 - var11_10.field_3645);
                        var13_13 = Math.abs(var11_10.field_3647 - var11_10.field_3644);
                        var14_14 = Math.abs(var11_10.field_3646 - var11_10.field_3643);
                        var15_15 = 2.0f * (var12_11 * var13_13 + var12_11 * var14_14 + var13_13 * var14_14);
                        try {
                            try {
                                v16 = var15_15;
                                if (var5_4 != null) break block54;
                                if (!(v16 < 0.001f)) break block55;
                            }
                            catch (MatchException v17) {
                                throw cZ.abn(v17);
                            }
                            if (var5_4 == null) continue;
                        }
                        catch (MatchException v18) {
                            throw cZ.abn(v18);
                        }
                    }
                    v16 = Infinityf;
                }
                var16_16 = v16;
                var17_17 = Infinityf;
                var18_18 = Infinityf;
                var19_19 = -Infinityf;
                var20_20 = -Infinityf;
                var21_21 = -Infinityf;
                for (var22_22 = 0; var22_22 < cZ.abr("a", (int)22520, (long)(5205226948937382134L ^ var3_3)); ++var22_22) {
                    block58: {
                        block57: {
                            try {
                                try {
                                    v19 = var22_22 & true;
                                    if (var5_4 != null) break block56;
                                    if (v19) break block57;
                                }
                                catch (MatchException v20) {
                                    throw cZ.abn(v20);
                                }
                                v21 = var11_10.field_3645;
                                break block58;
                            }
                            catch (MatchException v22) {
                                throw cZ.abn(v22);
                            }
                        }
                        v21 = var11_10.field_3648;
                    }
                    var23_23 = v21;
                    try {
                        v23 = (var22_22 & 2) == 0 ? var11_10.field_3644 : var11_10.field_3647;
                    }
                    catch (MatchException v24) {
                        throw cZ.abn(v24);
                    }
                    var24_24 = v23;
                    try {
                        v25 = (var22_22 & 4) == 0 ? var11_10.field_3643 : var11_10.field_3646;
                    }
                    catch (MatchException v26) {
                        throw cZ.abn(v26);
                    }
                    var25_25 = v25;
                    var9_8.set(var23_23, var24_24, var25_25);
                    var7_6.transformPosition(var9_8);
                    var16_16 = Math.min(var16_16, var9_8.x);
                    var17_17 = Math.min(var17_17, var9_8.y);
                    var18_18 = Math.min(var18_18, var9_8.z);
                    var19_19 = Math.max(var19_19, var9_8.x);
                    var20_20 = Math.max(var20_20, var9_8.y);
                    var21_21 = Math.max(var21_21, var9_8.z);
                    if (var5_4 == null) continue;
                }
                v27 = new float[cZ.abr("a", (int)12106, (long)(692636580970528865L ^ var3_3))];
                v27[0] = var16_16;
                v27[1] = var17_17;
                v27[2] = var18_18;
                v27[3] = var19_19;
                v27[4] = var20_20;
                v27[5] = var21_21;
                v27[cZ.abr("a", (int)11786, (long)(7283085889175978259L ^ var3_3))] = var15_15;
                v19 = var2_2.add(v27);
            }
            if (var5_4 == null) continue;
        }
        var10_9 = ((ModelPartAccessor)var0).getChildren();
        for (class_630 var12_12 : var10_9.values()) {
            cZ.abg(var12_12, var7_6, var2_2);
            if (var5_4 == null) continue;
        }
    }

    private static float abk(float f, float f2) {
        float f3;
        block4: {
            block5: {
                long l = LBZya ^ 0x218F769F7AA3L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        f3 = f2;
                        if (iSArray != null) break block4;
                        if (!(f3 <= f)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                    return f;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            f3 = (float)mU.cpP(f, f2);
        }
        return f3;
    }

    private static int abp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x534D;
        if (mtFzz[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = KkEHl[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])YqPEO.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YqPEO.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cZ", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cZ.mtFzz[n2] = n3;
        }
        return mtFzz[n2];
    }

    private static String abo(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    private static Throwable abn(Throwable throwable) {
        return throwable;
    }

    private void abc(class_4587 class_45872, float f) {
        block9: {
            block10: {
                boolean bl;
                class_276 class_2762;
                kl$ug kl$ug;
                cZ$su cZ$su;
                iS[] iSArray;
                class_276 class_2763;
                block7: {
                    block8: {
                        long l = LBZya ^ 0x339E06FE1E65L;
                        class_2763 = this.TIWnG.iterator();
                        iSArray = dh.afl();
                        while (class_2763.hasNext()) {
                            cZ$su = class_2763.next();
                            cZ$su.dnV();
                            if (iSArray == null) continue;
                        }
                        class_2763 = rD.dlmvG.method_1522();
                        try {
                            kl$ug = this.UUyNm;
                            class_2762 = class_2763;
                            bl = this.pxIjY.WF();
                            if (iSArray != null) break block7;
                            if (bl) break block8;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        bl = true;
                        break block7;
                    }
                    bl = false;
                }
                cZ$su = kl.bQa(kl$ug, class_2762, bl);
                boolean bl2 = this.abd((class_276)cZ$su, class_45872, f);
                try {
                    try {
                        if (iSArray != null) break block9;
                        if (!bl2) break block10;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                    kl.bQd(this.UUyNm, (class_276)cZ$su, class_2763, this.ZbKTw.VB(), this.STwyB.Wf());
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            this.abe();
        }
    }

    private void aaZ(class_2739 class_27392) {
        int n;
        class_1309 class_13092;
        iS[] iSArray;
        block21: {
            block22: {
                block20: {
                    class_1297 class_12972;
                    class_1297 class_12973;
                    block19: {
                        long l = LBZya ^ 0x7939511763E5L;
                        class_12973 = rD.dlmvG.field_1687.method_8469(class_27392.comp_1127());
                        iSArray = dh.afl();
                        try {
                            try {
                                class_12972 = class_12973;
                                if (iSArray != null) break block19;
                                if (!(class_12972 instanceof class_1309)) break block20;
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                            class_12972 = class_12973;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                    }
                    class_13092 = (class_1309)class_12972;
                    try {
                        n = class_12973.method_31481();
                        if (iSArray != null) break block21;
                        if (n == 0) break block22;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                }
                return;
            }
            n = LivingEntityAccessor.getDataHealthId().comp_2327();
        }
        int n2 = n;
        for (class_2945.class_7834 class_78342 : class_27392.comp_1128()) {
            block24: {
                block26: {
                    class_2945.class_7834 class_78343;
                    block25: {
                        Object object;
                        block23: {
                            try {
                                try {
                                    object = class_78342;
                                    if (iSArray != null) break block23;
                                    if (object.comp_1115() != n2) break block24;
                                }
                                catch (MatchException matchException) {
                                    throw cZ.abn(matchException);
                                }
                                object = class_78342.comp_1117();
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                        }
                        class_2945.class_7834 class_78344 = object;
                        try {
                            try {
                                class_78343 = class_78344;
                                if (iSArray != null) break block25;
                                if (!(class_78343 instanceof Float)) break block24;
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                            class_78343 = class_78344;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                    }
                    Float f = (Float)class_78343;
                    try {
                        try {
                            if (iSArray != null) break block26;
                            if (!(f.floatValue() <= 0.0f)) break block24;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        this.abb(class_13092);
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                }
                return;
            }
            if (iSArray == null) continue;
        }
    }

    private void aaY(class_2663 class_26632) {
        block14: {
            class_1297 class_12972;
            class_1297 class_12973;
            block13: {
                class_2663 class_26633;
                iS[] iSArray;
                block11: {
                    block12: {
                        long l = LBZya ^ 0x35B24322C4C3L;
                        iSArray = dh.afl();
                        try {
                            try {
                                class_26633 = class_26632;
                                if (iSArray != null) break block11;
                                if (class_26633.method_11470() == 3) break block12;
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                    }
                    class_26633 = class_26632;
                }
                class_12973 = class_26633.method_11469((class_1937)rD.dlmvG.field_1687);
                try {
                    try {
                        class_12972 = class_12973;
                        if (iSArray != null) break block13;
                        if (!(class_12972 instanceof class_1309)) break block14;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            class_1309 class_13092 = (class_1309)class_12972;
            try {
                if (!class_12973.method_31481()) {
                    this.abb(class_13092);
                }
            }
            catch (MatchException matchException) {
                throw cZ.abn(matchException);
            }
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void aba(hp hp2) {
        class_1309 class_13092;
        block15: {
            class_1297 class_12972;
            iS[] iSArray;
            block14: {
                long l = LBZya ^ 0x1CA03591B79L;
                iSArray = dh.afl();
                try {
                    if (!this.bab()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
                class_1297 class_12973 = hp2.bcX();
                try {
                    try {
                        class_12972 = class_12973;
                        if (iSArray != null) break block14;
                        if (!(class_12972 instanceof class_1309)) return;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            class_13092 = (class_1309)class_12972;
            try {
                if (iSArray != null) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cZ.abn(matchException);
            }
            try {
                try {
                    if (hp2.bcY() == class_1297.class_5529.field_26998 || class_13092.method_29504()) break block15;
                    return;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            catch (MatchException matchException) {
                throw cZ.abn(matchException);
            }
        }
        this.abb(class_13092);
    }

    private static /* synthetic */ void abm(RenderPass renderPass) {
        jL.uHvyh.bJl();
    }

    private static class_243 abj() {
        return new class_243((double)cZ.abk(-1.0f, 1.0f), (double)cZ.abk(-1.0f, 1.0f), (double)cZ.abk(-1.0f, 1.0f)).method_1029();
    }

    /*
     * Loose catch block
     */
    private static List<float[]> abf(class_1309 class_13092) {
        long l = LBZya ^ 0x794AA5972B2CL;
        ArrayList<float[]> arrayList = new ArrayList<float[]>();
        iS[] iSArray = dh.afl();
        try {
            class_922 class_9222;
            block11: {
                block9: {
                    class_897 class_8972;
                    block8: {
                        class_897 class_8973 = rD.dlmvG.method_1561().method_3953((class_1297)class_13092);
                        class_8972 = class_8973;
                        if (iSArray != null) break block8;
                        try {
                            block10: {
                                if (!(class_8972 instanceof class_922)) break block9;
                                break block10;
                                catch (Throwable throwable) {
                                    throw cZ.abn(throwable);
                                }
                            }
                            class_8972 = class_8973;
                        }
                        catch (Throwable throwable) {
                            throw cZ.abn(throwable);
                        }
                    }
                    class_9222 = (class_922)class_8972;
                    if (iSArray == null) break block11;
                }
                return arrayList;
            }
            class_583 class_5832 = class_9222.method_4038();
            class_630 class_6302 = class_5832.method_63512();
            cZ.abg(class_6302, new Matrix4f(), arrayList);
        }
        catch (Throwable throwable) {
            // empty catch block
        }
        return arrayList;
    }

    private static int abq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cZ.abp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite abr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static class_243 abh(class_243 class_2432, float f) {
        class_243 class_2433;
        block13: {
            class_243 class_2434;
            block14: {
                class_243 class_2435;
                iS[] iSArray;
                block11: {
                    class_243 class_2436;
                    block12: {
                        long l = LBZya ^ 0x21515A67AA76L;
                        iSArray = dh.afl();
                        try {
                            if (f <= 0.001f) {
                                return class_2432;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        class_2436 = new class_243((double)cZ.abk(-1.0f, 1.0f), (double)cZ.abk(-1.0f, 1.0f), (double)cZ.abk(-1.0f, 1.0f));
                        try {
                            try {
                                class_2435 = class_2436;
                                if (iSArray != null) break block11;
                                if (!(class_2435.method_1027() < 1.0E-6)) break block12;
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                            return class_2432;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                    }
                    class_2436 = class_2436.method_1029();
                    class_2435 = class_2432.method_1021(1.0 - (double)f).method_1019(class_2436.method_1021((double)f));
                }
                class_2434 = class_2435;
                try {
                    try {
                        class_2433 = class_2434;
                        if (iSArray != null) break block13;
                        if (!(class_2433.method_1027() < 1.0E-6)) break block14;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                    return class_2432;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
            }
            class_2433 = class_2434.method_1029();
        }
        return class_2433;
    }

    @hG
    public void aaX(gL.tk tk2) {
        block14: {
            class_2596<?> class_25962;
            block13: {
                boolean bl;
                class_2596<?> class_25963;
                block11: {
                    iS[] iSArray;
                    block12: {
                        long l = LBZya ^ 0x3B0C617EA035L;
                        iSArray = dh.afl();
                        try {
                            if (!this.bab()) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        class_25963 = tk2.bcf();
                        try {
                            bl = class_25963 instanceof class_2663;
                            if (iSArray != null) break block11;
                            if (!bl) break block12;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        class_2663 class_26632 = (class_2663)class_25963;
                        this.aaY(class_26632);
                        return;
                    }
                    class_25963 = tk2.bcf();
                    try {
                        class_25962 = class_25963;
                        if (iSArray != null) break block13;
                        bl = class_25962 instanceof class_2739;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                }
                if (!bl) break block14;
                class_25962 = class_25963;
            }
            class_2739 class_27392 = (class_2739)class_25962;
            this.aaZ(class_27392);
        }
    }

    @hG
    public void aaW(go.sX sX2) {
        cZ cZ2;
        block10: {
            block11: {
                block9: {
                    boolean bl;
                    block8: {
                        long l = LBZya ^ 0x5B8DF6B97B21L;
                        iS[] iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    bl = this.bab();
                                    if (iSArray != null) break block8;
                                    if (!bl) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw cZ.abn(matchException);
                                }
                                cZ2 = this;
                                if (iSArray != null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw cZ.abn(matchException);
                            }
                            bl = cZ2.TIWnG.isEmpty();
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                    }
                    if (!bl) break block11;
                }
                return;
            }
            cZ2 = this;
        }
        cZ2.abc(sX2.bbh(), sX2.bbi());
    }

    private void abb(class_1309 class_13092) {
        block2: {
            boolean bl;
            block3: {
                long l = LBZya ^ 0x5FD854EB50L;
                UUID uUID = class_13092.method_5667();
                iS[] iSArray = dh.afl();
                try {
                    bl = this.eWrHR.add(uUID);
                    if (iSArray != null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw cZ.abn(matchException);
                }
                return;
            }
            bl = this.TIWnG.add(new cZ$su(class_13092, this.RvFwK.VC(), this.BzSYi.VB(), Math.round(this.LMxtE.VB() * 1000.0f), this.pRslV.Wf(), this.szQUj.VB()));
        }
        kl.bQb(this.UUyNm);
    }

    /*
     * Unable to fully structure code
     */
    private boolean abd(class_276 var1_1, class_4587 var2_2, float var3_3) {
        block32: {
            block33: {
                var4_4 = cZ.LBZya ^ 23890657899583L;
                var7_5 = 0;
                var6_6 = dh.afl();
                for (cZ$su var9_8 : this.TIWnG) {
                    var7_5 += var9_8.FYVSB.size();
                    try {
                        if (var6_6 == null) {
                            if (var6_6 == null) continue;
                            break;
                        }
                        break block32;
                    }
                    catch (Throwable v0) {
                        throw cZ.abn(v0);
                    }
                }
                try {
                    v1 = var7_5;
                    if (var6_6 != null) break block33;
                    if (v1 > 0) break block32;
                }
                catch (Throwable v2) {
                    throw cZ.abn(v2);
                }
                v1 = 0;
            }
            return (boolean)v1;
        }
        var8_7 = rD.dlmvG.field_1773.method_19418();
        var9_9 = var7_5 * 4;
        var10_10 = new class_9799(class_290.field_1575.getVertexSize() * var9_9);
        try {
            block36: {
                block34: {
                    block35: {
                        var11_11 = new class_287(var10_10, VertexFormat.class_5596.field_27382, class_290.field_1575);
                        for (cZ$su var13_15 : this.TIWnG) {
                            var13_15.dnU(var11_11, var2_2, var8_7, var3_3);
                            if (var6_6 == null) continue;
                        }
                        var12_13 = var11_11.method_60794();
                        try {
                            if (var12_13 != null) break block34;
                            var13_16 = false;
                        }
                        catch (Throwable var13_18) {
                            block37: {
                                try {
                                    v3 = var12_13;
                                    if (var6_6 == null) {
                                        if (v3 == null) break block37;
                                    }
                                    ** GOTO lbl48
                                }
                                catch (Throwable v4) {
                                    throw cZ.abn(v4);
                                }
                                try {
                                    v3 = var12_13;
lbl48:
                                    // 2 sources

                                    v3.close();
                                }
                                catch (Throwable var14_19) {
                                    var13_18.addSuppressed(var14_19);
                                }
                            }
                            throw var13_18;
                        }
                        if (var6_6 != null) break block35;
                        try {
                            block38: {
                                if (var12_13 == null) break block35;
                                break block38;
                                catch (Throwable v5) {
                                    throw cZ.abn(v5);
                                }
                            }
                            var12_13.close();
                        }
                        catch (Throwable v6) {
                            throw cZ.abn(v6);
                        }
                    }
                    return var13_16;
                }
                try {
                    v7 = var1_1;
                    v8 = lB.rMraa;
                    v9 = this.pxIjY.WF() != false ? kR.bHqVE : kR.HUQWl;
                }
                catch (Throwable v10) {
                    throw cZ.abn(v10);
                }
                lF.cfH(v7, v8, v9, var12_13, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, abm(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)());
                var13_17 = true;
                if (var6_6 != null) break block36;
                try {
                    block39: {
                        if (var12_13 == null) break block36;
                        break block39;
                        catch (Throwable v11) {
                            throw cZ.abn(v11);
                        }
                    }
                    var12_13.close();
                }
                catch (Throwable v12) {
                    throw cZ.abn(v12);
                }
            }
            return var13_17;
        }
        finally {
            var10_10.close();
        }
    }

    private void abe() {
        this.TIWnG.removeIf(cZ$su -> {
            boolean bl;
            block4: {
                block5: {
                    long l = LBZya ^ 0x32C1D360D291L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            bl = cZ$su.nYGDp;
                            if (iSArray != null) break block4;
                            if (bl) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cZ.abn(matchException);
                        }
                        this.eWrHR.remove(cZ$su.Abjlp);
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw cZ.abn(matchException);
                    }
                }
                bl = false;
            }
            return bl;
        });
    }

    @Override
    public void YO() {
        super.YO();
        this.TIWnG.clear();
        this.eWrHR.clear();
        kl.bQb(this.UUyNm);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cZ.class, "abq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
