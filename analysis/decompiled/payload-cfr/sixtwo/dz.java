/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_243
 *  net.minecraft.class_4587
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 *  org.joml.Vector3fc
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
import net.minecraft.class_1044;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import org.joml.Vector3fc;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.eP;
import sixtwo.fr;
import sixtwo.gM;
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
import sixtwo.kG;
import sixtwo.kK;
import sixtwo.kM;
import sixtwo.kS;
import sixtwo.lG;
import sixtwo.lh;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.rh;
import sixtwo.rj;
import sixtwo.rk;

public class dz
extends gg
implements lG {
    private final cG zblzB;
    private final ct rPpMG;
    private final cu daQhQ;
    private final cu elvSh;
    private final cu VIkzT;
    private final cu APstA;
    private final cC cYGLG;
    private final cJ zfESg;
    private final cJ fGOOi;
    private final cJ slRcN;
    private final cC SfkMU;
    private final cJ ewNLk;
    private final rk IffVm;
    private final rk ckqFG;
    private final rh tYcox;
    private final mG bDGta;
    private final kS cHVCf;
    private final kS MRndq;
    private class_1309 Eupjj;
    private class_1309 hGhYF;
    private static final long Adunk;
    private static final String[] JpRcV;
    private static final String[] pePKy;
    private static final Map pUqGF;
    private static final long[] WUmyw;
    private static final Integer[] GoBNX;
    private static final Map fgwQj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dz() {
        long l = Adunk ^ 0x65FEA30BB235L;
        super(gf.aZL((int)dz.ajS("u", (int)12184, (long)(0x556F42F84BBD38F6L ^ l)), false, gh.nOCvV));
        this.zblzB = new cG(this, mr.clS(new int[]{(int)dz.ajS("u", (int)11821, (long)(0x8F8A00ADA17B957L ^ l)), (int)dz.ajS("u", (int)14545, (long)(0x6FB942DED40C2FC0L ^ l)), (int)dz.ajS("u", (int)20722, (long)(0x7B4078EE1267C7E7L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)24417, (long)(0x70B0B50866E2C824L ^ l))})).Uf(rD.dlM().bjG().bis());
        this.rPpMG = new ct(this, mr.clS(new int[]{(int)dz.ajS("u", (int)19057, (long)(0x41573379FDF6DD1CL ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)21414, (long)(0x28B52B7B696DC4C1L ^ l)), (int)dz.ajS("u", (int)19155, (long)(0x1D7290D9732A5D94L ^ l))}));
        int[] nArray = new int[dz.ajS("u", (int)20245, (long)(0x36C185B114EC585EL ^ l))];
        nArray[0] = (int)dz.ajS("u", (int)17412, (long)(0x5F1B894B81A1D379L ^ l));
        nArray[1] = (int)dz.ajS("u", (int)11266, (long)(0x31153FE83E93BB60L ^ l));
        nArray[2] = (int)dz.ajS("u", (int)14357, (long)(0x360EC805F7AA2F74L ^ l));
        nArray[3] = (int)dz.ajS("u", (int)8118, (long)(0x2217F911396E88F2L ^ l));
        nArray[4] = (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l));
        nArray[5] = (int)dz.ajS("u", (int)29286, (long)(0x2C2D928E4504E514L ^ l));
        this.daQhQ = new cu(this.rPpMG, mr.clS(nArray));
        this.elvSh = new cu(this.rPpMG, mr.clS(new int[]{(int)dz.ajS("u", (int)30008, (long)(0x11AB1385F5C56252L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)8109, (long)(0x1B4AFF09956B88BBL ^ l)), (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l))}));
        int[] nArray2 = new int[dz.ajS("u", (int)10572, (long)(0x118EFBE17DCDBE18L ^ l))];
        nArray2[0] = (int)dz.ajS("u", (int)14835, (long)(0x55B553375E3E2E86L ^ l));
        nArray2[1] = (int)dz.ajS("u", (int)11801, (long)(0x7693897AF16395FL ^ l));
        nArray2[2] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray2[3] = (int)dz.ajS("u", (int)28409, (long)(0x3A244A7E8C2FF9A8L ^ l));
        nArray2[4] = (int)dz.ajS("u", (int)23735, (long)(0x615AA83B4C3BCBE4L ^ l));
        nArray2[5] = (int)dz.ajS("u", (int)24551, (long)(0x2497A2F3FD3148BFL ^ l));
        this.VIkzT = new cu(this.rPpMG, mr.clS(nArray2));
        int[] nArray3 = new int[dz.ajS("u", (int)23872, (long)(0x569DD15E68DD4A2BL ^ l))];
        nArray3[0] = (int)dz.ajS("u", (int)17412, (long)(0x5F1B894B81A1D379L ^ l));
        nArray3[1] = (int)dz.ajS("u", (int)14357, (long)(0x360EC805F7AA2F74L ^ l));
        nArray3[2] = (int)dz.ajS("u", (int)19261, (long)(0x2CCBBB33D250DC2FL ^ l));
        nArray3[3] = (int)dz.ajS("u", (int)24551, (long)(0x2497A2F3FD3148BFL ^ l));
        nArray3[4] = (int)dz.ajS("u", (int)15675, (long)(0x2C111CDC9D182A60L ^ l));
        nArray3[5] = (int)dz.ajS("u", (int)26043, (long)(0x12B0A4A2D19F2D4L ^ l));
        nArray3[dz.ajS("u", (int)10572, (long)(0x118EFBE17DCDBE18L ^ l))] = (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l));
        nArray3[dz.ajS("u", (int)7579, (long)(0x4C888EB3D9820AFEL ^ l))] = (int)dz.ajS("u", (int)24551, (long)(0x2497A2F3FD3148BFL ^ l));
        this.APstA = new cu(this.rPpMG, mr.clS(nArray3));
        this.cYGLG = new cC(this, mr.clS(new int[]{(int)dz.ajS("u", (int)30008, (long)(0x11AB1385F5C56252L ^ l)), (int)dz.ajS("u", (int)13840, (long)(0x6FB0896AA312168L ^ l)), (int)dz.ajS("u", (int)29286, (long)(0x2C2D928E4504E514L ^ l)), (int)dz.ajS("u", (int)29286, (long)(0x2C2D928E4504E514L ^ l)), (int)dz.ajS("u", (int)21414, (long)(0x28B52B7B696DC4C1L ^ l))})).Vy(1.0).Vw(1.0).Vx(20.0).VA(10.0);
        this.zfESg = new cJ(this, mr.clS(new int[]{(int)dz.ajS("u", (int)15956, (long)(0x52ADA08CD2932937L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)30585, (long)(0x1E16DAD121E0E024L ^ l))})).WE(true);
        int[] nArray4 = new int[dz.ajS("u", (int)30312, (long)(0x1E5014F43AF1E17BL ^ l))];
        nArray4[0] = (int)dz.ajS("u", (int)32440, (long)(0x29B2F57FC2AA69C6L ^ l));
        nArray4[1] = (int)dz.ajS("u", (int)29764, (long)(0x12DCBDDACA256330L ^ l));
        nArray4[2] = (int)dz.ajS("u", (int)23479, (long)(0x782ED5EED7304CFAL ^ l));
        nArray4[3] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray4[4] = (int)dz.ajS("u", (int)14357, (long)(0x360EC805F7AA2F74L ^ l));
        nArray4[5] = (int)dz.ajS("u", (int)29286, (long)(0x2C2D928E4504E514L ^ l));
        nArray4[dz.ajS("u", (int)10572, (long)(0x118EFBE17DCDBE18L ^ l))] = (int)dz.ajS("u", (int)9376, (long)(0x775272D32AB7B3FCL ^ l));
        nArray4[dz.ajS("u", (int)1455, (long)(0x47EE6661378312DEL ^ l))] = (int)dz.ajS("u", (int)16306, (long)(0x2168232F2F45A8E0L ^ l));
        nArray4[dz.ajS("u", (int)10647, (long)(0x1578E6958C183ED8L ^ l))] = (int)dz.ajS("u", (int)30280, (long)(0x36D08DC11C28E101L ^ l));
        nArray4[dz.ajS("u", (int)29309, (long)(0x73BC6F54D7C3E537L ^ l))] = (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l));
        nArray4[dz.ajS("u", (int)10995, (long)(0x79EDE49992A0BD85L ^ l))] = (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l));
        nArray4[dz.ajS("u", (int)29855, (long)(0x1968DDF653F163D7L ^ l))] = (int)dz.ajS("u", (int)24551, (long)(0x2497A2F3FD3148BFL ^ l));
        this.fGOOi = new cJ(this, mr.clS(nArray4)).WE(false);
        this.slRcN = new cJ(this, mr.clS(new int[]{(int)dz.ajS("u", (int)1244, (long)(0x40D3675F1FF79385L ^ l)), (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l)), (int)dz.ajS("u", (int)19829, (long)(0x4DA0E920450E5A1DL ^ l))})).WE(true);
        int[] nArray5 = new int[dz.ajS("u", (int)1937, (long)(0x27346D09EB0590CFL ^ l))];
        nArray5[0] = (int)dz.ajS("u", (int)32338, (long)(0x16272B3C3DA1E934L ^ l));
        nArray5[1] = (int)dz.ajS("u", (int)28595, (long)(0x4E54D2697DAD78F0L ^ l));
        nArray5[2] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray5[3] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray5[4] = (int)dz.ajS("u", (int)20247, (long)(0x55DCF0CAFDB05800L ^ l));
        nArray5[5] = (int)dz.ajS("u", (int)30639, (long)(0x643BF8D4F43CE0D3L ^ l));
        nArray5[dz.ajS("u", (int)10572, (long)(0x118EFBE17DCDBE18L ^ l))] = (int)dz.ajS("u", (int)6634, (long)(0x744D9BA2B9E40EA8L ^ l));
        nArray5[dz.ajS("u", (int)1455, (long)(0x47EE6661378312DEL ^ l))] = (int)dz.ajS("u", (int)20247, (long)(0x55DCF0CAFDB05800L ^ l));
        nArray5[dz.ajS("u", (int)10647, (long)(0x1578E6958C183ED8L ^ l))] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray5[dz.ajS("u", (int)10741, (long)(0x17D92764DE1D3E82L ^ l))] = (int)dz.ajS("u", (int)26412, (long)(0x1CE32DCD495FF040L ^ l));
        nArray5[dz.ajS("u", (int)10995, (long)(0x79EDE49992A0BD85L ^ l))] = (int)dz.ajS("u", (int)9448, (long)(0x1B69FC72F639B3A4L ^ l));
        nArray5[dz.ajS("u", (int)5978, (long)(0x19407E234F2C002AL ^ l))] = (int)dz.ajS("u", (int)15675, (long)(0x2C111CDC9D182A60L ^ l));
        this.SfkMU = new cC(this, mr.clS(nArray5)).Vy(1.0).Vw(1.0).Vx(5.0).VA(5.0);
        int[] nArray6 = new int[dz.ajS("u", (int)32618, (long)(0x26BDAED5F9AF682AL ^ l))];
        nArray6[0] = (int)dz.ajS("u", (int)13577, (long)(0x30A6A938F3332270L ^ l));
        nArray6[1] = (int)dz.ajS("u", (int)26412, (long)(0x1CE32DCD495FF040L ^ l));
        nArray6[2] = (int)dz.ajS("u", (int)14357, (long)(0x360EC805F7AA2F74L ^ l));
        nArray6[3] = (int)dz.ajS("u", (int)15675, (long)(0x2C111CDC9D182A60L ^ l));
        nArray6[4] = (int)dz.ajS("u", (int)30639, (long)(0x643BF8D4F43CE0D3L ^ l));
        nArray6[5] = (int)dz.ajS("u", (int)23781, (long)(0x62C2DB2FDB6FCB8CL ^ l));
        nArray6[dz.ajS("u", (int)10572, (long)(0x118EFBE17DCDBE18L ^ l))] = (int)dz.ajS("u", (int)9448, (long)(0x1B69FC72F639B3A4L ^ l));
        nArray6[dz.ajS("u", (int)1455, (long)(0x47EE6661378312DEL ^ l))] = (int)dz.ajS("u", (int)30989, (long)(0x14B1308EF41DEE5BL ^ l));
        nArray6[dz.ajS("u", (int)10647, (long)(0x1578E6958C183ED8L ^ l))] = (int)dz.ajS("u", (int)20247, (long)(0x55DCF0CAFDB05800L ^ l));
        nArray6[dz.ajS("u", (int)10741, (long)(0x17D92764DE1D3E82L ^ l))] = (int)dz.ajS("u", (int)30280, (long)(0x36D08DC11C28E101L ^ l));
        nArray6[dz.ajS("u", (int)10995, (long)(0x79EDE49992A0BD85L ^ l))] = (int)dz.ajS("u", (int)15675, (long)(0x2C111CDC9D182A60L ^ l));
        nArray6[dz.ajS("u", (int)5978, (long)(0x19407E234F2C002AL ^ l))] = (int)dz.ajS("u", (int)30989, (long)(0x14B1308EF41DEE5BL ^ l));
        nArray6[dz.ajS("u", (int)1937, (long)(0x27346D09EB0590CFL ^ l))] = (int)dz.ajS("u", (int)7564, (long)(0x7326D9B864B70AE8L ^ l));
        nArray6[dz.ajS("u", (int)12633, (long)(0x140165A7BD6BA609L ^ l))] = (int)dz.ajS("u", (int)9448, (long)(0x1B69FC72F639B3A4L ^ l));
        this.ewNLk = new cJ(this, mr.clS(nArray6)).WE(false);
        this.IffVm = new rk((int)dz.ajS("u", (int)29433, (long)(0x71D2577A52B065EDL ^ l))).dhs(rj.kcXTJ);
        this.ckqFG = new rk((int)dz.ajS("u", (int)21414, (long)(0x28B52B7B696DC4C1L ^ l))).dhs(rj.UPXqT);
        this.tYcox = new rh();
        this.bDGta = mG.cnP(255.0f, 71.0f, 71.0f);
        this.cHVCf = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(false).dup();
        this.MRndq = kS.bVE().duk(lh.aApMr).duo(true).dul(false).dun(false).dup();
        this.SfkMU.Vf(this.slRcN::WF);
        this.rPpMG.Vd(() -> {
            block5: {
                dz dz2;
                block4: {
                    long l = Adunk ^ 0x369790FB8AF5L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            dz2 = this;
                            if (iSArray != null) break block4;
                            if (dz2.hGhYF == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        dz2 = this;
                    }
                    catch (MatchException matchException) {
                        throw dz.ajL(matchException);
                    }
                }
                dz2.IffVm.dhg();
            }
        });
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    dz.Adunk = gb.aYR(-4098443830742309537L, 5431813002705193194L, MethodHandles.lookup().lookupClass()).a(102446768989144L);
                    dz.pUqGF = new HashMap<K, V>(13);
                    var11 = dz.Adunk ^ 14380502407250L;
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
                    var17_5 = "\u00d8\u0088\b\u0085w\u0094\u00ab\u00d0}\u009d\u00eco\u00e2\u00f5g\u008a\u0010\u0096\u0011u\u00a7'\u00e2\u00d5t\u0013\u00cb\u00f3xo`a\u00aa\u0010\u00b8\u009c\u00cb\u0080m\u00b1\u00e9\u0099\u001c\u009f[\u00c2\u00daN\u00a5a";
                    var19_6 = "\u00d8\u0088\b\u0085w\u0094\u00ab\u00d0}\u009d\u00eco\u00e2\u00f5g\u008a\u0010\u0096\u0011u\u00a7'\u00e2\u00d5t\u0013\u00cb\u00f3xo`a\u00aa\u0010\u00b8\u009c\u00cb\u0080m\u00b1\u00e9\u0099\u001c\u009f[\u00c2\u00daN\u00a5a".length();
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
                        var20_3[var18_4++] = dz.ajM(var21_9).intern();
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
                dz.JpRcV = var20_3;
                dz.pePKy = new String[3];
                dz.fgwQj = new HashMap<K, V>(13);
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
                var6_12 = new long[72];
                var3_13 = 0;
                var4_14 = "^\u0001xdc\u00fd\t\u0003\u00dce+\u00136M\u0096\u0089d0.\u000b\u001e1\u00c4c&\u00d0\u0010\u0081\u00d9\u0019\u00f8\u00fc\u00909\u00few'\u00ad\u00a2\u00fd\u00fbpQ\u00bdTZ-9\u00d7y\u0080\u0084Z@'F\u009fn\u00eb\u009c\u001f\u001c\u00e71\n\u00bf\u00e5\u00d1\u00dc\u00a9\u00aa\u0006\u00eai\u0090\u0084\u001a@S\u00fc\u0019z\u00b9\u00c0%\u00c2\u0013\u0013'dO\u00a4c9\u008bp\u008du bf\u00f8\u00ad\u00a1C\u00ca\u00a1ZWY\u00e6\u00e9\u00bd\u0097\u00ff\fj\u009c\u001c\u00c4\u00d6i\u0017\u0018\u0095\u00fc\u00df$4 \u00a8\u00a9G\u001d\u00e9\u00c5\u000b\u00df=_\u00ac\u0019g\f\rgK/\u001c`\u0014\u009b\u00fd\u000e^i&\u000b\u001f\u00c3/\u00d7_\u001a\u00cb\u0097\u00bez\u00ba\u00fa\u009a\u00a0E\u00b6wv\u00dfn\u00b5\u0018\n\u0094\t(\u00f1\u00b2re\u00ee\u00bf\u00a4\fbBE!\u00ec\u0006\u00e1y\u00ee\u0099t\u00c3\u00ee\u00aa\u00c0C\u0092\u008b4I\u008f\u00d7,\u00c3\u008d\u00cb}J\u00cf\u00a9\u00edO\u00ac\u00b8\u00858\u00ab\u00f9\u008c\u00e2&lE\u00f5\u0002\u00d1R\u00d9\u00cc\u001d\u00f9\u000f\u00ea\u00e8N\u00fa\u00a7n\u00b1\u00ed:e\u009f\u0084=S\u0094\u009e\n\u007fPe\u00cf'' 3u\u008b\u0080\u0003\u0099\u00b2Vn\u0091F\u00b8@\u00bd:\u00d2pI\u001f\u008c 6\u001e\"3\u0011\u00dc\u0080\u0015\u00a9\u0001\u00ee`\u001ef0\u008e\u00f5\u00c1\u00e6D\u00f7}\u00e1\u00e2\u0004\u00d1\u00f4\u001e5\u00d7\b\u00ea\u0016\u00df\u008d\u00188\u00d7h\u00f2T\u0019\u000f0/\b\u0004\u009e\u00c5z\u00f3\r\u00ecyCd(1P~\u0007W <`y\u00f9!\u00a8\u0011\u0001Zy\u001a\u00ae\u00e5\u00aeua0\u00e3\u00ed3\u00a1\u0096\u0096|5\u00f5*\u00ff\nO\u00d1\u00cd\u00a7\u0080A\u0010h\u0001\u00bbZ\u00f5\u00ef\u0096\u008a\u00b9\u0094\u007fN\u0085\u00b9t\u0087h\u00d1O\u0088q\u00dff\u0010\u0097\u00dc\u0098\u00e9!\u00ae$\tf8\u00d5\"\u00e2\u00c2\u00952\u009cJ\u00e4\u00fe\u008c\u0089&\u00f3\u000bs\u00f7~\u00c0\u0006$Dnd\u00c7\u0098E\u009f\u00a6\u00e7\u00f6;\u00c5;rN:[S\u00e8\u00de\u00bcE\u00d1tF\u00b0&\u00f5V\u00ae\u0007\u00c1.\u00107\u00cfZC1\u00d6\u00f2\u00e2i\u00a9\u0094\u0006\u0015N\u00ff\u00cd\u00d9{l\u00e1\u00df\u00cc\u00cc\u00a6\u008e\u00c6*\u0007\u0093\u000ewi}\u008c\u001d\u00b2\u0004\u0018\u0084\u009b\u0095Z]+\u00ee\u00cd\u00ab\u00e0\u00f1\u0007\u001eRr,\u001d X\f\u00ea\u00fbl\u009d'5\u0083\u00e9hn\u008d$b\u00fb\u0083\u00b7\u000bWa\u0007\u0094_G\u00b1\u0016";
                var5_15 = "^\u0001xdc\u00fd\t\u0003\u00dce+\u00136M\u0096\u0089d0.\u000b\u001e1\u00c4c&\u00d0\u0010\u0081\u00d9\u0019\u00f8\u00fc\u00909\u00few'\u00ad\u00a2\u00fd\u00fbpQ\u00bdTZ-9\u00d7y\u0080\u0084Z@'F\u009fn\u00eb\u009c\u001f\u001c\u00e71\n\u00bf\u00e5\u00d1\u00dc\u00a9\u00aa\u0006\u00eai\u0090\u0084\u001a@S\u00fc\u0019z\u00b9\u00c0%\u00c2\u0013\u0013'dO\u00a4c9\u008bp\u008du bf\u00f8\u00ad\u00a1C\u00ca\u00a1ZWY\u00e6\u00e9\u00bd\u0097\u00ff\fj\u009c\u001c\u00c4\u00d6i\u0017\u0018\u0095\u00fc\u00df$4 \u00a8\u00a9G\u001d\u00e9\u00c5\u000b\u00df=_\u00ac\u0019g\f\rgK/\u001c`\u0014\u009b\u00fd\u000e^i&\u000b\u001f\u00c3/\u00d7_\u001a\u00cb\u0097\u00bez\u00ba\u00fa\u009a\u00a0E\u00b6wv\u00dfn\u00b5\u0018\n\u0094\t(\u00f1\u00b2re\u00ee\u00bf\u00a4\fbBE!\u00ec\u0006\u00e1y\u00ee\u0099t\u00c3\u00ee\u00aa\u00c0C\u0092\u008b4I\u008f\u00d7,\u00c3\u008d\u00cb}J\u00cf\u00a9\u00edO\u00ac\u00b8\u00858\u00ab\u00f9\u008c\u00e2&lE\u00f5\u0002\u00d1R\u00d9\u00cc\u001d\u00f9\u000f\u00ea\u00e8N\u00fa\u00a7n\u00b1\u00ed:e\u009f\u0084=S\u0094\u009e\n\u007fPe\u00cf'' 3u\u008b\u0080\u0003\u0099\u00b2Vn\u0091F\u00b8@\u00bd:\u00d2pI\u001f\u008c 6\u001e\"3\u0011\u00dc\u0080\u0015\u00a9\u0001\u00ee`\u001ef0\u008e\u00f5\u00c1\u00e6D\u00f7}\u00e1\u00e2\u0004\u00d1\u00f4\u001e5\u00d7\b\u00ea\u0016\u00df\u008d\u00188\u00d7h\u00f2T\u0019\u000f0/\b\u0004\u009e\u00c5z\u00f3\r\u00ecyCd(1P~\u0007W <`y\u00f9!\u00a8\u0011\u0001Zy\u001a\u00ae\u00e5\u00aeua0\u00e3\u00ed3\u00a1\u0096\u0096|5\u00f5*\u00ff\nO\u00d1\u00cd\u00a7\u0080A\u0010h\u0001\u00bbZ\u00f5\u00ef\u0096\u008a\u00b9\u0094\u007fN\u0085\u00b9t\u0087h\u00d1O\u0088q\u00dff\u0010\u0097\u00dc\u0098\u00e9!\u00ae$\tf8\u00d5\"\u00e2\u00c2\u00952\u009cJ\u00e4\u00fe\u008c\u0089&\u00f3\u000bs\u00f7~\u00c0\u0006$Dnd\u00c7\u0098E\u009f\u00a6\u00e7\u00f6;\u00c5;rN:[S\u00e8\u00de\u00bcE\u00d1tF\u00b0&\u00f5V\u00ae\u0007\u00c1.\u00107\u00cfZC1\u00d6\u00f2\u00e2i\u00a9\u0094\u0006\u0015N\u00ff\u00cd\u00d9{l\u00e1\u00df\u00cc\u00cc\u00a6\u008e\u00c6*\u0007\u0093\u000ewi}\u008c\u001d\u00b2\u0004\u0018\u0084\u009b\u0095Z]+\u00ee\u00cd\u00ab\u00e0\u00f1\u0007\u001eRr,\u001d X\f\u00ea\u00fbl\u009d'5\u0083\u00e9hn\u008d$b\u00fb\u0083\u00b7\u000bWa\u0007\u0094_G\u00b1\u0016".length();
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
                    var4_14 = "\u00f6\u00b4\u0098,\u0010\u0090\u00e5\f8\u00a1|9\t\u00a0\u0089%";
                    var5_15 = "\u00f6\u00b4\u0098,\u0010\u0090\u00e5\f8\u00a1|9\t\u00a0\u0089%".length();
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
        dz.WUmyw = var6_12;
        dz.GoBNX = new Integer[72];
    }

    private float ajI() {
        boolean bl;
        rk rk2;
        block2: {
            block3: {
                long l = Adunk ^ 0x77598B16B6EDL;
                iS[] iSArray = dh.afl();
                try {
                    rk2 = this.ckqFG;
                    bl = this.Eupjj.field_6235;
                    if (iSArray != null) break block2;
                    if (bl <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        rk2.dhc(bl);
        return this.ckqFG.dhj();
    }

    @hG
    public void ajA(gM gM2) {
        this.IffVm.dhg();
        this.Eupjj = null;
    }

    private static CallSite ajS(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private void ajE(class_4587 var1_1, float var2_2) {
        block36: {
            block43: {
                block35: {
                    block34: {
                        block32: {
                            block33: {
                                block30: {
                                    block31: {
                                        var3_3 = dz.Adunk ^ 126514257951231L;
                                        var5_4 = dh.afl();
                                        v0 = this.IffVm;
                                        v1 /* !! */  = dz.ajS("u", (int)20989, (long)(4868915645385969014L ^ var3_3));
                                        if (var5_4 != null) break block30;
                                        try {
                                            block40: {
                                                v0.dhq((int)v1 /* !! */ );
                                                v0 = this.IffVm;
                                                if (this.hGhYF == null) break block31;
                                                break block40;
                                                catch (MatchException v2) {
                                                    throw dz.ajL(v2);
                                                }
                                            }
                                            v1 /* !! */  = (CallSite)true;
                                            break block30;
                                        }
                                        catch (MatchException v3) {
                                            throw dz.ajL(v3);
                                        }
                                    }
                                    v1 /* !! */  = (CallSite)false;
                                }
                                v0.dhc((boolean)v1 /* !! */ );
                                v4 = this.IffVm.dhj();
                                if (var5_4 != null) break block32;
                                try {
                                    block41: {
                                        if (v4 != 0.0f) break block33;
                                        break block41;
                                        catch (MatchException v5) {
                                            throw dz.ajL(v5);
                                        }
                                    }
                                    return;
                                }
                                catch (MatchException v6) {
                                    throw dz.ajL(v6);
                                }
                            }
                            v4 = this.ajI();
                        }
                        var6_5 = v4;
                        try {
                            v7 = this.ewNLk.WF() != false ? var6_5 : 0.0f;
                        }
                        catch (MatchException v8) {
                            throw dz.ajL(v8);
                        }
                        var7_6 = v7;
                        this.ajJ((int)dz.ajS("u", (int)23441, (long)(3352154106234799947L ^ var3_3)), var6_5);
                        var8_7 = 0.3f;
                        var9_8 = 1.0f;
                        var10_9 = ob.cBv((String)dz.ajP("z", (int)22338, (long)(1434805466413739578L ^ var3_3)));
                        v9 = dz.XSRvt;
                        v10 = var10_9;
                        v11 = this;
                        if (var5_4 != null) break block34;
                        try {
                            block42: {
                                if (!v11.fGOOi.WF()) break block35;
                                break block42;
                                catch (MatchException v12) {
                                    throw dz.ajL(v12);
                                }
                            }
                            v11 = this;
                        }
                        catch (MatchException v13) {
                            throw dz.ajL(v13);
                        }
                    }
                    v14 = v11.cHVCf;
                    break block43;
                }
                v14 = dz.XSRvt.defaultState();
            }
            v9.startBatch(v10, v14);
            try {
                var11_10 = this.Eupjj.method_30950(var2_2);
                var12_11 = this.Eupjj.method_17681() * 1.5f;
                for (var13_12 = 0; var13_12 < dz.ajS("u", (int)27020, (long)(1373146183176533305L ^ var3_3)); ++var13_12) {
                    block38: {
                        block39: {
                            block37: {
                                block45: {
                                    block44: {
                                        if (var5_4 != null) break block36;
                                        v15 = (float)var13_12 / 45.0f;
                                        if (var5_4 != null) break block37;
                                        break block44;
                                        catch (MatchException v16) {
                                            throw dz.ajL(v16);
                                        }
                                    }
                                    if ((int)v15 % 2 != 0) ** GOTO lbl95
                                    break block45;
                                    catch (MatchException v17) {
                                        throw dz.ajL(v17);
                                    }
                                }
                                try {
                                    block46: {
                                        if (var5_4 == null) continue;
                                        break block46;
                                        catch (MatchException v18) {
                                            throw dz.ajL(v18);
                                        }
                                    }
                                    v15 = this.tYcox.dfH();
                                }
                                catch (MatchException v19) {
                                    throw dz.ajL(v19);
                                }
                            }
                            var14_13 = v15;
                            var15_14 = this.IffVm.dhj();
                            var16_15 = Math.max(0.5f, 0.7f - 0.2f * this.ckqFG.dhj() + 0.2f - 0.2f * var15_14);
                            var17_16 = (float)(Math.sin(Math.toRadians((float)var13_12 + var14_13 * 1.0f)) * (double)var12_11 * (double)var16_15);
                            var18_17 = (float)((double)(this.Eupjj.method_17682() / 2.0f) + (double)(this.Eupjj.method_17682() / 2.0f) * Math.sin(Math.toRadians(var14_13)));
                            var19_18 = (float)(Math.cos(Math.toRadians((float)var13_12 + var14_13 * 1.0f)) * (double)var12_11 * (double)var16_15);
                            var1_1.method_22903();
                            jI.bIs(var1_1, var11_10);
                            var1_1.method_46416(var17_16, var18_17, var19_18);
                            jI.bIu(var1_1);
                            var20_19 = jk.bDn(var13_12 * 3, this.zblzB.Wf(), (int)dz.ajS("u", (int)10995, (long)(8785945042407421519L ^ var3_3)));
                            var21_20 = var20_19.coc(this.bDGta, var7_6);
                            if (var5_4 != null) break block38;
                            try {
                                block47: {
                                    if (!this.slRcN.WF()) break block39;
                                    break block47;
                                    catch (MatchException v20) {
                                        throw dz.ajL(v20);
                                    }
                                }
                                dz.XSRvt.bUH(kG.bTv(var1_1, -var9_8 / 2.0f, -var9_8 / 2.0f, -var8_7 / 2.0f, var9_8, var9_8).dtF(var21_20.cob(var15_14 * ((float)this.SfkMU.VC() / 100.0f))).dtG());
                            }
                            catch (MatchException v21) {
                                throw dz.ajL(v21);
                            }
                        }
                        dz.XSRvt.bUH(kG.bTv(var1_1, -var8_7 / 2.0f, -var8_7 / 2.0f, -var8_7 / 2.0f, var8_7, var8_7).dtF(var21_20.cob(var15_14)).dtG());
                    }
                    var1_1.method_22909();
                    if (var5_4 == null) continue;
                    break;
                }
            }
            finally {
                dz.XSRvt.endBatch();
            }
        }
    }

    private void ajJ(int n, float f) {
        float f2;
        long l = Adunk ^ 0x4048EE0117L;
        float f3 = 10.0f + this.cYGLG.VB();
        try {
            f2 = this.ewNLk.WF() ? 1.0f + 0.5f * f : 1.0f;
        }
        catch (MatchException matchException) {
            throw dz.ajL(matchException);
        }
        float f4 = f2;
        float f5 = f3 * f4;
        this.tYcox.dfF(this.tYcox.dfH() + f5, n);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void ajD() {
        class_1309 class_13092;
        iS[] iSArray;
        block13: {
            class_1297 class_12972;
            block12: {
                block11: {
                    long l = Adunk ^ 0x28BF5CA36228L;
                    iSArray = dh.afl();
                    if (!this.zfESg.WF()) return;
                    class_12972 = rD.dlmvG.field_1692;
                    try {
                        class_13092 = this.hGhYF;
                        if (iSArray != null) break block11;
                        if (class_13092 != null) return;
                    }
                    catch (MatchException matchException) {
                        throw dz.ajL(matchException);
                    }
                    class_13092 = class_12972;
                }
                try {
                    if (iSArray != null) break block12;
                    if (class_13092 == null) return;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                class_13092 = class_12972;
            }
            try {
                try {
                    if (iSArray != null) break block13;
                    if (!(class_13092 instanceof class_1309)) return;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                class_13092 = class_12972;
            }
            catch (MatchException matchException) {
                throw dz.ajL(matchException);
            }
        }
        class_1309 class_13093 = class_13092;
        try {
            if (iSArray != null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dz.ajL(matchException);
        }
        this.hGhYF = class_13093;
    }

    /*
     * Exception decompiling
     */
    @hG
    public void ajB(go.sX var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [4[TRYBLOCK]], but top level block is 9[SWITCH]
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
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private void ajF(class_4587 class_45872, float f) {
        block34: {
            kS kS2;
            class_1044 class_10442;
            kM kM2;
            float f2;
            iS[] iSArray;
            long l;
            block44: {
                block33: {
                    dz dz2;
                    block32: {
                        float f3;
                        float f4;
                        block30: {
                            block31: {
                                Object object;
                                rk rk2;
                                block28: {
                                    block29: {
                                        l = Adunk ^ 0x99A59FCDE15L;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = dz.ajS("u", (int)4416, (long)(0x1011A4862D926A37L ^ l));
                                        if (iSArray != null) break block28;
                                        try {
                                            block41: {
                                                rk2.dhq((int)object);
                                                rk2 = this.IffVm;
                                                if (this.hGhYF == null) break block29;
                                                break block41;
                                                catch (MatchException matchException) {
                                                    throw dz.ajL(matchException);
                                                }
                                            }
                                            object = true;
                                            break block28;
                                        }
                                        catch (MatchException matchException) {
                                            throw dz.ajL(matchException);
                                        }
                                    }
                                    object = false;
                                }
                                rk2.dhc((boolean)object);
                                f4 = this.IffVm.dhj();
                                if (iSArray != null) break block30;
                                try {
                                    block42: {
                                        if (f4 != 0.0f) break block31;
                                        break block42;
                                        catch (MatchException matchException) {
                                            throw dz.ajL(matchException);
                                        }
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            f4 = this.ajI();
                        }
                        float f5 = f4;
                        try {
                            f3 = this.ewNLk.WF() ? f5 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        f2 = f3;
                        this.ajJ((int)dz.ajS("u", (int)18896, (long)(0x2EE0F583678D32A5L ^ l)), f5);
                        class_1044 class_10443 = ob.cBv((String)((Object)dz.ajP("z", (int)28705, (long)(0x401C4386C91A2EB0L ^ l))));
                        kM2 = XSRvt;
                        class_10442 = class_10443;
                        dz2 = this;
                        if (iSArray != null) break block32;
                        try {
                            block43: {
                                if (!dz2.fGOOi.WF()) break block33;
                                break block43;
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            dz2 = this;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                    }
                    kS2 = dz2.cHVCf;
                    break block44;
                }
                kS2 = XSRvt.defaultState();
            }
            kM2.startBatch(class_10442, kS2);
            try {
                class_243 class_2432 = this.Eupjj.method_30950(f);
                float f6 = this.Eupjj.method_17681() * 1.5f;
                int n = 2;
                int n2 = 0;
                Object object = 0;
                for (int i = 0; i < dz.ajS("u", (int)7001, (long)(0x5D2E3826342C6002L ^ l)); i += n) {
                    block39: {
                        mG mG2;
                        float f7;
                        float f8;
                        block40: {
                            float f9;
                            block38: {
                                block37: {
                                    int n3;
                                    block35: {
                                        block36: {
                                            f8 = 0.2f + 0.005f * (float)n2;
                                            f9 = 1.0f + 0.005f * (float)n2;
                                            if (iSArray != null) break block34;
                                            try {
                                                block45: {
                                                    n3 = object;
                                                    if (iSArray != null) break block35;
                                                    break block45;
                                                    catch (MatchException matchException) {
                                                        throw dz.ajL(matchException);
                                                    }
                                                }
                                                if (n3 <= 0) break block36;
                                            }
                                            catch (MatchException matchException) {
                                                throw dz.ajL(matchException);
                                            }
                                            object -= n;
                                            if (iSArray == null) continue;
                                        }
                                        n3 = n2 += n;
                                    }
                                    try {
                                        if (iSArray != null) break block37;
                                        if (n3 <= dz.ajS("u", (int)22141, (long)(0x7E2F70D88B7F2D2EL ^ l))) break block38;
                                    }
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                    object = dz.ajS("u", (int)173, (long)(0x478442ECD04EFBEDL ^ l));
                                    n3 = n2 = 0;
                                }
                                if (iSArray == null) continue;
                            }
                            float f10 = this.tYcox.dfH();
                            f7 = this.IffVm.dhj();
                            float f11 = Math.max(0.5f, 1.2f - 0.5f * f7);
                            float f12 = (float)(Math.sin(Math.toRadians((float)i + f10 * 1.0f)) * (double)f6 * (double)f11);
                            float f13 = (float)((double)(this.Eupjj.method_17682() / 1.5f) + (double)(this.Eupjj.method_17682() / 3.0f) * Math.sin(Math.toRadians((float)i / 2.0f + f10 / 5.0f)));
                            float f14 = (float)(Math.cos(Math.toRadians((float)i + f10 * 1.0f)) * (double)f6 * (double)f11);
                            class_45872.method_22903();
                            jI.bIs(class_45872, class_2432);
                            class_45872.method_46416(f12, f13, f14);
                            jI.bIu(class_45872);
                            mG mG3 = jk.bDn(i * 3, this.zblzB.Wf(), (int)dz.ajS("u", (int)12144, (long)(0x7DFB722230B8D40FL ^ l)));
                            mG2 = mG3.coc(this.bDGta, f2);
                            if (iSArray != null) break block39;
                            try {
                                block46: {
                                    if (!this.slRcN.WF()) break block40;
                                    break block46;
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                }
                                XSRvt.bUH(kG.bTv(class_45872, -f9 / 2.0f, -f9 / 2.0f, -f8 / 2.0f, f9, f9).dtF(mG2.cob(f7 * ((float)this.SfkMU.VC() / 100.0f))).dtG());
                            }
                            catch (MatchException matchException) {
                                throw dz.ajL(matchException);
                            }
                        }
                        XSRvt.bUH(kG.bTv(class_45872, -f8 / 2.0f, -f8 / 2.0f, -f8 / 2.0f, f8, f8).dtF(mG2.cob(f7)).dtG());
                    }
                    class_45872.method_22909();
                    if (iSArray == null) continue;
                    break;
                }
            }
            finally {
                XSRvt.endBatch();
            }
        }
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private void ajG(class_4587 class_45872, float f) {
        block30: {
            kS kS2;
            class_1044 class_10442;
            kM kM2;
            float f2;
            float f3;
            float f4;
            iS[] iSArray;
            long l;
            block34: {
                block28: {
                    dz dz2;
                    block27: {
                        float f5;
                        float f6;
                        block25: {
                            block26: {
                                Object object;
                                rk rk2;
                                block23: {
                                    block24: {
                                        l = Adunk ^ 0x3D4D538BE5F8L;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = dz.ajS("u", (int)29433, (long)(0x71D20FC9A2303220L ^ l));
                                        if (iSArray != null) break block23;
                                        try {
                                            block31: {
                                                rk2.dhq((int)object);
                                                rk2 = this.IffVm;
                                                if (this.hGhYF == null) break block24;
                                                break block31;
                                                catch (MatchException matchException) {
                                                    throw dz.ajL(matchException);
                                                }
                                            }
                                            object = true;
                                            break block23;
                                        }
                                        catch (MatchException matchException) {
                                            throw dz.ajL(matchException);
                                        }
                                    }
                                    object = false;
                                }
                                rk2.dhc((boolean)object);
                                f6 = this.IffVm.dhj();
                                if (iSArray != null) break block25;
                                try {
                                    block32: {
                                        if (f6 != 0.0f) break block26;
                                        break block32;
                                        catch (MatchException matchException) {
                                            throw dz.ajL(matchException);
                                        }
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            f6 = this.ajI();
                        }
                        float f7 = f6;
                        try {
                            f5 = this.ewNLk.WF() ? f7 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        f4 = f5;
                        this.ajJ((int)dz.ajS("u", (int)26563, (long)(0xF60D524FA86A754L ^ l)), f7);
                        f3 = 15.0f;
                        f2 = 3.0f;
                        class_1044 class_10443 = ob.cBv((String)((Object)dz.ajP("z", (int)22932, (long)(0x50495E071A5BCE9L ^ l))));
                        kM2 = XSRvt;
                        class_10442 = class_10443;
                        dz2 = this;
                        if (iSArray != null) break block27;
                        try {
                            block33: {
                                if (!dz2.fGOOi.WF()) break block28;
                                break block33;
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            dz2 = this;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                    }
                    kS2 = dz2.cHVCf;
                    break block34;
                }
                kS2 = XSRvt.defaultState();
            }
            kM2.startBatch(class_10442, kS2);
            try {
                class_243 class_2432 = this.Eupjj.method_30950(f);
                float f8 = this.Eupjj.method_17681() * 1.2f;
                mG mG2 = this.zblzB.Wf();
                mG mG3 = mG2.coc(this.bDGta, f4);
                int n = 0;
                block19: while (true) {
                    int n2 = n;
                    block20: while (n2 < 3 && iSArray == null) {
                        int n3 = 0;
                        while ((float)n3 <= f3) {
                            block29: {
                                float f9 = this.tYcox.dfH();
                                double d = Math.toRadians((((float)n3 / 1.5f + f9) * this.cYGLG.VB() + (float)(n * dz.ajS("u", (int)28266, (long)(0x641511DB6AFDAEE9L ^ l)))) % (this.cYGLG.VB() * 360.0f));
                                double d2 = Math.sin(Math.toRadians(f9 * 2.5f + (float)(n3 * (n + 1))) * (double)f2) / 2.0;
                                float f10 = (float)n3 / f3;
                                float f11 = this.IffVm.dhj();
                                class_45872.method_22903();
                                jI.bIs(class_45872, class_2432);
                                class_45872.method_22904(Math.cos(d) * (double)f8, 1.0 + d2, Math.sin(d) * (double)f8);
                                jI.bIu(class_45872);
                                float f12 = Math.max(0.24f * f10, 0.2f);
                                try {
                                    if (iSArray != null) break block29;
                                    n2 = this.slRcN.WF() ? 1 : 0;
                                    if (iSArray != null) continue block20;
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                                if (n2 != 0) {
                                    float f13 = 2.4f;
                                    float f14 = f12 * f13;
                                    XSRvt.bUH(kG.bTv(class_45872, -f14, -f14, -0.001f, f14 * 2.0f, f14 * 2.0f).dtF(mG3.cob(f11 * ((float)this.SfkMU.VC() / 100.0f))).dtG());
                                }
                                XSRvt.bUH(kG.bTv(class_45872, -f12, -f12, 0.0, f12 * 2.0f, f12 * 2.0f).dtF(mG3.cob(f11)).dtG());
                                class_45872.method_22909();
                                ++n3;
                            }
                            if (iSArray == null) continue;
                        }
                        ++n;
                        if (iSArray == null) continue block19;
                    }
                    break block30;
                    break;
                }
                {
                    break block30;
                    break;
                }
            }
            finally {
                XSRvt.endBatch();
            }
        }
    }

    private static CallSite ajP(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void ajH(class_4587 class_45872, float f) {
        float f2;
        float f3;
        float f4;
        float f5;
        float f6;
        mG mG2;
        float f7;
        float f8;
        class_243 class_2432;
        iS[] iSArray;
        long l;
        block33: {
            kS kS2;
            kK kK2;
            block36: {
                block32: {
                    dz dz2;
                    block31: {
                        float f9;
                        float f10;
                        block29: {
                            block30: {
                                Object object;
                                rk rk2;
                                block27: {
                                    block28: {
                                        l = Adunk ^ 0x5467DB828A4EL;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = dz.ajS("u", (int)29433, (long)(0x71D266E32A395D96L ^ l));
                                        if (iSArray != null) break block27;
                                        try {
                                            block34: {
                                                rk2.dhq((int)object);
                                                rk2 = this.IffVm;
                                                if (this.hGhYF == null) break block28;
                                                break block34;
                                                catch (MatchException matchException) {
                                                    throw dz.ajL(matchException);
                                                }
                                            }
                                            object = true;
                                            break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw dz.ajL(matchException);
                                        }
                                    }
                                    object = false;
                                }
                                rk2.dhc((boolean)object);
                                f10 = this.IffVm.dhj();
                                if (iSArray != null) break block29;
                                try {
                                    if (f10 != 0.0f) break block30;
                                    return;
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            f10 = this.ajI();
                        }
                        float f11 = f10;
                        try {
                            f9 = this.ewNLk.WF() ? f11 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        float f12 = f9;
                        this.ajJ((int)dz.ajS("u", (int)23441, (long)(0x2E851911909BF4FAL ^ l)), f11);
                        class_2432 = this.Eupjj.method_30950(f);
                        f8 = this.Eupjj.method_17681() * 1.5f;
                        f7 = 0.1f;
                        mG mG3 = this.zblzB.Wf();
                        mG2 = mG3.coc(this.bDGta, f12);
                        kK2 = AswNN;
                        dz2 = this;
                        if (iSArray != null) break block31;
                        try {
                            block35: {
                                if (!dz2.fGOOi.WF()) break block32;
                                break block35;
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            dz2 = this;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                    }
                    kS2 = dz2.MRndq;
                    break block36;
                }
                kS2 = AswNN.defaultState();
            }
            kK2.startBatch(kS2);
            try {
                for (int i = 0; i < dz.ajS("u", (int)27020, (long)(0x130E425A160E4688L ^ l)); i += 20) {
                    float f13 = this.IffVm.dhj();
                    f6 = this.tYcox.dfH();
                    f5 = 1.2f - 0.5f * f13;
                    f4 = (float)(Math.sin(Math.toRadians((float)i + f6 * 0.3f)) * (double)f8 * (double)f5);
                    f3 = (float)((double)0.1f + (double)this.Eupjj.method_17682() * Math.abs(Math.sin(i)));
                    f2 = (float)(Math.cos(Math.toRadians((float)i + f6 * 0.3f)) * (double)f8 * (double)f5);
                    class_45872.method_22903();
                    jI.bIs(class_45872, class_2432);
                    class_45872.method_46416(f4, f3, f2);
                    class_243 class_2433 = this.Eupjj.method_30950(f).method_1031((double)f4, 1.0, (double)f2);
                    class_243 class_2434 = this.Eupjj.method_73189().method_1031(0.0, (double)this.Eupjj.method_17682() / 2.0, 0.0);
                    Vector3f vector3f = class_2434.method_1020(class_2433).method_1029().method_46409();
                    Vector3f vector3f2 = new Vector3f(0.0f, 1.0f, 0.0f);
                    Quaternionf quaternionf = new Quaternionf().rotationTo((Vector3fc)vector3f2, (Vector3fc)vector3f);
                    try {
                        class_45872.method_22907((Quaternionfc)quaternionf);
                        AswNN.bUp(kE.bTf(class_45872, 0.0, 0.0, 0.0, f7).dti(mG2.cob(f13)).dtj());
                        class_45872.method_22909();
                        if (iSArray == null) {
                            if (iSArray == null) continue;
                            break;
                        }
                        break block33;
                    }
                    catch (MatchException matchException) {
                        throw dz.ajL(matchException);
                    }
                }
                AswNN.endBatch();
            }
            catch (Throwable throwable) {
                AswNN.endBatch();
                throw throwable;
            }
        }
        if (!this.slRcN.WF()) return;
        class_1044 class_10442 = ob.cBv((String)((Object)dz.ajP("z", (int)22338, (long)(0x13E9548FFD84DD8BL ^ l))));
        XSRvt.startBatch(class_10442);
        f7 = 1.0f;
        try {
            for (int i = 0; i < dz.ajS("u", (int)27020, (long)(0x130E425A160E4688L ^ l)); i += 20) {
                f6 = this.IffVm.dhj();
                f5 = this.tYcox.dfH();
                f4 = 1.2f - 0.5f * f6;
                f3 = (float)(Math.sin(Math.toRadians((float)i + f5 * 0.3f)) * (double)f8 * (double)f4);
                f2 = (float)((double)0.1f + (double)this.Eupjj.method_17682() * Math.abs(Math.sin(i)));
                float f14 = (float)(Math.cos(Math.toRadians((float)i + f5 * 0.3f)) * (double)f8 * (double)f4);
                try {
                    class_45872.method_22903();
                    jI.bIs(class_45872, class_2432);
                    class_45872.method_46416(f3, f2, f14);
                    jI.bIq(class_45872);
                    XSRvt.bUH(kG.bTv(class_45872, -f7 / 2.0f, -f7 / 2.0f, 0.0, f7, f7).dtF(mG2.cob(0.1f * this.SfkMU.VB() * this.IffVm.dhj())).dtG());
                    class_45872.method_22909();
                    if (iSArray != null) return;
                    if (iSArray == null) continue;
                    return;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                    return;
                }
            }
        }
        finally {
            XSRvt.endBatch();
        }
    }

    private static String ajM(byte[] byArray) {
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

    private static String ajN(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x606B;
        if (pePKy[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])pUqGF.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    pUqGF.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dz", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = JpRcV[n2].getBytes("ISO-8859-1");
            dz.pePKy[n2] = dz.ajM(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return pePKy[n2];
    }

    private static Object ajO(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = dz.ajN(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int ajQ(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x458A;
        if (GoBNX[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = WUmyw[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])fgwQj.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fgwQj.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dz", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dz.GoBNX[n2] = n3;
        }
        return GoBNX[n2];
    }

    private static MatchException ajL(MatchException matchException) {
        return matchException;
    }

    private static int ajR(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = dz.ajQ(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private void ajC() {
        block17: {
            eP eP2;
            block16: {
                eP eP3;
                gg gg2;
                iS[] iSArray;
                block14: {
                    block15: {
                        long l = Adunk ^ 0x3101B9880A81L;
                        fr fr2 = rD.dlJ().aZx(fr.class);
                        iSArray = dh.afl();
                        try {
                            try {
                                gg2 = fr2;
                                if (iSArray != null) break block14;
                                if (!gg2.bag()) break block15;
                            }
                            catch (MatchException matchException) {
                                throw dz.ajL(matchException);
                            }
                            gg2 = fr2;
                            if (iSArray != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        eP3 = ((fr)gg2).aOQ();
                        try {
                            if (eP3 != null) {
                                this.hGhYF = eP3;
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                    }
                    gg2 = rD.dlJ().aZx(eP.class);
                }
                eP3 = (eP)gg2;
                try {
                    try {
                        eP2 = eP3;
                        if (iSArray != null) break block16;
                        if (!eP2.bag()) break block17;
                    }
                    catch (MatchException matchException) {
                        throw dz.ajL(matchException);
                    }
                    eP2 = eP3;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
            }
            class_1309 class_13092 = eP2.aBS();
            try {
                if (class_13092 != null) {
                    this.hGhYF = class_13092;
                }
            }
            catch (MatchException matchException) {
                throw dz.ajL(matchException);
            }
        }
    }

    @Override
    public void YO() {
        super.YO();
        this.IffVm.dhg();
        this.Eupjj = null;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dz.class, "ajR", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(dz.class, "ajO", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
