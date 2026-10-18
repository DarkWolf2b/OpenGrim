/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.math.Vec3d;
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
    private LivingEntity Eupjj;
    private LivingEntity hGhYF;
    private static final long Adunk;
    private static final String[] JpRcV;
    private static final String[] pePKy;
    private static final Map pUqGF;
    private static final long[] WUmyw;
    private static final Integer[] GoBNX;
    private static final Map fgwQj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dz() {
        long l2 = Adunk ^ 0x65FEA30BB235L;
        super(gf.aZL((int)83, false, gh.nOCvV));
        this.zblzB = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114})).Uf(rD.dlM().bjG().bis());
        this.rPpMG = new ct(this, mr.clS(new int[]{(int)77, (int)111, (int)100, (int)101}));
        int[] nArray = new int[6];
        nArray[0] = (int)67;
        nArray[1] = (int)105;
        nArray[2] = (int)114;
        nArray[3] = (int)99;
        nArray[4] = (int)108;
        nArray[5] = (int)101;
        this.daQhQ = new cu(this.rPpMG, mr.clS(nArray));
        this.elvSh = new cu(this.rPpMG, mr.clS(new int[]{(int)83, (int)111, (int)117, (int)108}));
        int[] nArray2 = new int[6];
        nArray2[0] = (int)71;
        nArray2[1] = (int)104;
        nArray2[2] = (int)111;
        nArray2[3] = (int)115;
        nArray2[4] = (int)116;
        nArray2[5] = (int)115;
        this.VIkzT = new cu(this.rPpMG, mr.clS(nArray2));
        int[] nArray3 = new int[8];
        nArray3[0] = (int)67;
        nArray3[1] = (int)114;
        nArray3[2] = (int)121;
        nArray3[3] = (int)115;
        nArray3[4] = (int)116;
        nArray3[5] = (int)97;
        nArray3[6] = (int)108;
        nArray3[7] = (int)115;
        this.APstA = new cu(this.rPpMG, mr.clS(nArray3));
        this.cYGLG = new cC(this, mr.clS(new int[]{(int)83, (int)112, (int)101, (int)101, (int)100})).Vy(1.0).Vw(1.0).Vx(20.0).VA(10.0);
        this.zfESg = new cJ(this, mr.clS(new int[]{(int)76, (int)111, (int)111, (int)107})).WE(true);
        int[] nArray4 = new int[12];
        nArray4[0] = (int)73;
        nArray4[1] = (int)103;
        nArray4[2] = (int)110;
        nArray4[3] = (int)111;
        nArray4[4] = (int)114;
        nArray4[5] = (int)101;
        nArray4[6] = (int)32;
        nArray4[7] = (int)87;
        nArray4[8] = (int)97;
        nArray4[9] = (int)108;
        nArray4[10] = (int)108;
        nArray4[11] = (int)115;
        this.fGOOi = new cJ(this, mr.clS(nArray4)).WE(false);
        this.slRcN = new cJ(this, mr.clS(new int[]{(int)66, (int)108, (int)111, (int)111, (int)109})).WE(true);
        int[] nArray5 = new int[12];
        nArray5[0] = (int)66;
        nArray5[1] = (int)108;
        nArray5[2] = (int)111;
        nArray5[3] = (int)111;
        nArray5[4] = (int)109;
        nArray5[5] = (int)32;
        nArray5[6] = (int)65;
        nArray5[7] = (int)109;
        nArray5[8] = (int)111;
        nArray5[9] = (int)117;
        nArray5[10] = (int)110;
        nArray5[11] = (int)116;
        this.SfkMU = new cC(this, mr.clS(nArray5)).Vy(1.0).Vw(1.0).Vx(5.0).VA(5.0);
        int[] nArray6 = new int[14];
        nArray6[0] = (int)72;
        nArray6[1] = (int)117;
        nArray6[2] = (int)114;
        nArray6[3] = (int)116;
        nArray6[4] = (int)32;
        nArray6[5] = (int)65;
        nArray6[6] = (int)110;
        nArray6[7] = (int)105;
        nArray6[8] = (int)109;
        nArray6[9] = (int)97;
        nArray6[10] = (int)116;
        nArray6[11] = (int)105;
        nArray6[12] = (int)111;
        nArray6[13] = (int)110;
        this.ewNLk = new cJ(this, mr.clS(nArray6)).WE(false);
        this.IffVm = new rk((int)300).dhs(rj.kcXTJ);
        this.ckqFG = new rk((int)100).dhs(rj.UPXqT);
        this.tYcox = new rh();
        this.bDGta = mG.cnP(255.0f, 71.0f, 71.0f);
        this.cHVCf = kS.bVE().duk(lh.aApMr).duo(false).dul(false).dun(false).dup();
        this.MRndq = kS.bVE().duk(lh.aApMr).duo(true).dul(false).dun(false).dup();
        this.SfkMU.Vf(this.slRcN::WF);
        this.rPpMG.Vd(() -> {
            block5: {
                dz dz2;
                block4: {
                    long l2 = Adunk ^ 0x369790FB8AF5L;
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
        boolean bl2;
        rk rk2;
        block2: {
            block3: {
                long l2 = Adunk ^ 0x77598B16B6EDL;
                iS[] iSArray = dh.afl();
                try {
                    rk2 = this.ckqFG;
                    bl2 = this.Eupjj.hurtTime;
                    if (iSArray != null) break block2;
                    if (bl2 <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        rk2.dhc(bl2);
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
    private void ajE(MatrixStack var1_1, float var2_2) {
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
                                        v1 /* !! */  = 700;
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
                var11_10 = this.Eupjj.getLerpedPos(var2_2);
                var12_11 = this.Eupjj.getWidth() * 1.5f;
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
                            var18_17 = (float)((double)(this.Eupjj.getHeight() / 2.0f) + (double)(this.Eupjj.getHeight() / 2.0f) * Math.sin(Math.toRadians(var14_13)));
                            var19_18 = (float)(Math.cos(Math.toRadians((float)var13_12 + var14_13 * 1.0f)) * (double)var12_11 * (double)var16_15);
                            var1_1.push();
                            jI.bIs(var1_1, var11_10);
                            var1_1.translate(var17_16, var18_17, var19_18);
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
                    var1_1.pop();
                    if (var5_4 == null) continue;
                    break;
                }
            }
            finally {
                dz.XSRvt.endBatch();
            }
        }
    }

    private void ajJ(int n2, float f2) {
        float f3;
        long l2 = Adunk ^ 0x4048EE0117L;
        float f4 = 10.0f + this.cYGLG.VB();
        try {
            f3 = this.ewNLk.WF() ? 1.0f + 0.5f * f2 : 1.0f;
        }
        catch (MatchException matchException) {
            throw dz.ajL(matchException);
        }
        float f5 = f3;
        float f6 = f4 * f5;
        this.tYcox.dfF(this.tYcox.dfH() + f6, n2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void ajD() {
        LivingEntity livingEntity;
        iS[] iSArray;
        block13: {
            Entity entity;
            block12: {
                block11: {
                    long l2 = Adunk ^ 0x28BF5CA36228L;
                    iSArray = dh.afl();
                    if (!this.zfESg.WF()) return;
                    entity = rD.dlmvG.targetedEntity;
                    try {
                        livingEntity = this.hGhYF;
                        if (iSArray != null) break block11;
                        if (livingEntity != null) return;
                    }
                    catch (MatchException matchException) {
                        throw dz.ajL(matchException);
                    }
                    livingEntity = entity;
                }
                try {
                    if (iSArray != null) break block12;
                    if (livingEntity == null) return;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                livingEntity = entity;
            }
            try {
                try {
                    if (iSArray != null) break block13;
                    if (!(livingEntity instanceof LivingEntity)) return;
                }
                catch (MatchException matchException) {
                    throw dz.ajL(matchException);
                }
                livingEntity = entity;
            }
            catch (MatchException matchException) {
                throw dz.ajL(matchException);
            }
        }
        LivingEntity livingEntity2 = livingEntity;
        try {
            if (iSArray != null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dz.ajL(matchException);
        }
        this.hGhYF = livingEntity2;
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private void ajF(MatrixStack matrixStack, float f2) {
        block34: {
            kS kS2;
            AbstractTexture abstractTexture;
            kM kM2;
            float f3;
            iS[] iSArray;
            long l2;
            block44: {
                block33: {
                    dz dz2;
                    block32: {
                        float f4;
                        float f5;
                        block30: {
                            block31: {
                                Object object;
                                rk rk2;
                                block28: {
                                    block29: {
                                        l2 = Adunk ^ 0x99A59FCDE15L;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = 300;
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
                                f5 = this.IffVm.dhj();
                                if (iSArray != null) break block30;
                                try {
                                    block42: {
                                        if (f5 != 0.0f) break block31;
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
                            f5 = this.ajI();
                        }
                        float f6 = f5;
                        try {
                            f4 = this.ewNLk.WF() ? f6 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        f3 = f4;
                        this.ajJ((int)dz.ajS("u", (int)18896, (long)(0x2EE0F583678D32A5L ^ l2)), f6);
                        AbstractTexture abstractTexture2 = ob.cBv((String)((Object)dz.ajP("z", (int)28705, (long)(0x401C4386C91A2EB0L ^ l2))));
                        kM2 = XSRvt;
                        abstractTexture = abstractTexture2;
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
            kM2.startBatch(abstractTexture, kS2);
            try {
                Vec3d vec3d = this.Eupjj.getLerpedPos(f2);
                float f7 = this.Eupjj.getWidth() * 1.5f;
                int n2 = 2;
                int n3 = 0;
                Object object = 0;
                for (int i2 = 0; i2 < dz.ajS("u", (int)7001, (long)(0x5D2E3826342C6002L ^ l2)); i2 += n2) {
                    block39: {
                        mG mG2;
                        float f8;
                        float f9;
                        block40: {
                            float f10;
                            block38: {
                                block37: {
                                    int n4;
                                    block35: {
                                        block36: {
                                            f9 = 0.2f + 0.005f * (float)n3;
                                            f10 = 1.0f + 0.005f * (float)n3;
                                            if (iSArray != null) break block34;
                                            try {
                                                block45: {
                                                    n4 = object;
                                                    if (iSArray != null) break block35;
                                                    break block45;
                                                    catch (MatchException matchException) {
                                                        throw dz.ajL(matchException);
                                                    }
                                                }
                                                if (n4 <= 0) break block36;
                                            }
                                            catch (MatchException matchException) {
                                                throw dz.ajL(matchException);
                                            }
                                            object -= n2;
                                            if (iSArray == null) continue;
                                        }
                                        n4 = n3 += n2;
                                    }
                                    try {
                                        if (iSArray != null) break block37;
                                        if (n4 <= dz.ajS("u", (int)22141, (long)(0x7E2F70D88B7F2D2EL ^ l2))) break block38;
                                    }
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                    object = dz.ajS("u", (int)173, (long)(0x478442ECD04EFBEDL ^ l2));
                                    n4 = n3 = 0;
                                }
                                if (iSArray == null) continue;
                            }
                            float f11 = this.tYcox.dfH();
                            f8 = this.IffVm.dhj();
                            float f12 = Math.max(0.5f, 1.2f - 0.5f * f8);
                            float f13 = (float)(Math.sin(Math.toRadians((float)i2 + f11 * 1.0f)) * (double)f7 * (double)f12);
                            float f14 = (float)((double)(this.Eupjj.getHeight() / 1.5f) + (double)(this.Eupjj.getHeight() / 3.0f) * Math.sin(Math.toRadians((float)i2 / 2.0f + f11 / 5.0f)));
                            float f15 = (float)(Math.cos(Math.toRadians((float)i2 + f11 * 1.0f)) * (double)f7 * (double)f12);
                            matrixStack.push();
                            jI.bIs(matrixStack, vec3d);
                            matrixStack.translate(f13, f14, f15);
                            jI.bIu(matrixStack);
                            mG mG3 = jk.bDn(i2 * 3, this.zblzB.Wf(), (int)dz.ajS("u", (int)12144, (long)(0x7DFB722230B8D40FL ^ l2)));
                            mG2 = mG3.coc(this.bDGta, f3);
                            if (iSArray != null) break block39;
                            try {
                                block46: {
                                    if (!this.slRcN.WF()) break block40;
                                    break block46;
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                }
                                XSRvt.bUH(kG.bTv(matrixStack, -f10 / 2.0f, -f10 / 2.0f, -f9 / 2.0f, f10, f10).dtF(mG2.cob(f8 * ((float)this.SfkMU.VC() / 100.0f))).dtG());
                            }
                            catch (MatchException matchException) {
                                throw dz.ajL(matchException);
                            }
                        }
                        XSRvt.bUH(kG.bTv(matrixStack, -f9 / 2.0f, -f9 / 2.0f, -f9 / 2.0f, f9, f9).dtF(mG2.cob(f8)).dtG());
                    }
                    matrixStack.pop();
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
    private void ajG(MatrixStack matrixStack, float f2) {
        block30: {
            kS kS2;
            AbstractTexture abstractTexture;
            kM kM2;
            float f3;
            float f4;
            float f5;
            iS[] iSArray;
            long l2;
            block34: {
                block28: {
                    dz dz2;
                    block27: {
                        float f6;
                        float f7;
                        block25: {
                            block26: {
                                Object object;
                                rk rk2;
                                block23: {
                                    block24: {
                                        l2 = Adunk ^ 0x3D4D538BE5F8L;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = 300;
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
                                f7 = this.IffVm.dhj();
                                if (iSArray != null) break block25;
                                try {
                                    block32: {
                                        if (f7 != 0.0f) break block26;
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
                            f7 = this.ajI();
                        }
                        float f8 = f7;
                        try {
                            f6 = this.ewNLk.WF() ? f8 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        f5 = f6;
                        this.ajJ((int)dz.ajS("u", (int)26563, (long)(0xF60D524FA86A754L ^ l2)), f8);
                        f4 = 15.0f;
                        f3 = 3.0f;
                        AbstractTexture abstractTexture2 = ob.cBv((String)((Object)dz.ajP("z", (int)22932, (long)(0x50495E071A5BCE9L ^ l2))));
                        kM2 = XSRvt;
                        abstractTexture = abstractTexture2;
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
            kM2.startBatch(abstractTexture, kS2);
            try {
                Vec3d vec3d = this.Eupjj.getLerpedPos(f2);
                float f9 = this.Eupjj.getWidth() * 1.2f;
                mG mG2 = this.zblzB.Wf();
                mG mG3 = mG2.coc(this.bDGta, f5);
                int n2 = 0;
                block19: while (true) {
                    int n3 = n2;
                    block20: while (n3 < 3 && iSArray == null) {
                        int n4 = 0;
                        while ((float)n4 <= f4) {
                            block29: {
                                float f10 = this.tYcox.dfH();
                                double d2 = Math.toRadians((((float)n4 / 1.5f + f10) * this.cYGLG.VB() + (float)(n2 * dz.ajS("u", (int)28266, (long)(0x641511DB6AFDAEE9L ^ l2)))) % (this.cYGLG.VB() * 360.0f));
                                double d3 = Math.sin(Math.toRadians(f10 * 2.5f + (float)(n4 * (n2 + 1))) * (double)f3) / 2.0;
                                float f11 = (float)n4 / f4;
                                float f12 = this.IffVm.dhj();
                                matrixStack.push();
                                jI.bIs(matrixStack, vec3d);
                                matrixStack.translate(Math.cos(d2) * (double)f9, 1.0 + d3, Math.sin(d2) * (double)f9);
                                jI.bIu(matrixStack);
                                float f13 = Math.max(0.24f * f11, 0.2f);
                                try {
                                    if (iSArray != null) break block29;
                                    n3 = this.slRcN.WF() ? '\u0001' : '\u0000';
                                    if (iSArray != null) continue block20;
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                                if (n3 != 0) {
                                    float f14 = 2.4f;
                                    float f15 = f13 * f14;
                                    XSRvt.bUH(kG.bTv(matrixStack, -f15, -f15, -0.001f, f15 * 2.0f, f15 * 2.0f).dtF(mG3.cob(f12 * ((float)this.SfkMU.VC() / 100.0f))).dtG());
                                }
                                XSRvt.bUH(kG.bTv(matrixStack, -f13, -f13, 0.0, f13 * 2.0f, f13 * 2.0f).dtF(mG3.cob(f12)).dtG());
                                matrixStack.pop();
                                ++n4;
                            }
                            if (iSArray == null) continue;
                        }
                        ++n2;
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
    private void ajH(MatrixStack matrixStack, float f2) {
        float f3;
        float f4;
        float f5;
        float f6;
        float f7;
        mG mG2;
        float f8;
        float f9;
        Vec3d vec3d;
        iS[] iSArray;
        long l2;
        block33: {
            kS kS2;
            kK kK2;
            block36: {
                block32: {
                    dz dz2;
                    block31: {
                        float f10;
                        float f11;
                        block29: {
                            block30: {
                                Object object;
                                rk rk2;
                                block27: {
                                    block28: {
                                        l2 = Adunk ^ 0x5467DB828A4EL;
                                        iS[] iSArray2 = dh.afl();
                                        this.IffVm.dhs(rj.kcXTJ);
                                        iSArray = iSArray2;
                                        rk2 = this.IffVm;
                                        object = 300;
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
                                f11 = this.IffVm.dhj();
                                if (iSArray != null) break block29;
                                try {
                                    if (f11 != 0.0f) break block30;
                                    return;
                                    catch (MatchException matchException) {
                                        throw dz.ajL(matchException);
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw dz.ajL(matchException);
                                }
                            }
                            f11 = this.ajI();
                        }
                        float f12 = f11;
                        try {
                            f10 = this.ewNLk.WF() ? f12 : 0.0f;
                        }
                        catch (MatchException matchException) {
                            throw dz.ajL(matchException);
                        }
                        float f13 = f10;
                        this.ajJ((int)dz.ajS("u", (int)23441, (long)(0x2E851911909BF4FAL ^ l2)), f12);
                        vec3d = this.Eupjj.getLerpedPos(f2);
                        f9 = this.Eupjj.getWidth() * 1.5f;
                        f8 = 0.1f;
                        mG mG3 = this.zblzB.Wf();
                        mG2 = mG3.coc(this.bDGta, f13);
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
                for (int i2 = 0; i2 < dz.ajS("u", (int)27020, (long)(0x130E425A160E4688L ^ l2)); i2 += 20) {
                    float f14 = this.IffVm.dhj();
                    f7 = this.tYcox.dfH();
                    f6 = 1.2f - 0.5f * f14;
                    f5 = (float)(Math.sin(Math.toRadians((float)i2 + f7 * 0.3f)) * (double)f9 * (double)f6);
                    f4 = (float)((double)0.1f + (double)this.Eupjj.getHeight() * Math.abs(Math.sin(i2)));
                    f3 = (float)(Math.cos(Math.toRadians((float)i2 + f7 * 0.3f)) * (double)f9 * (double)f6);
                    matrixStack.push();
                    jI.bIs(matrixStack, vec3d);
                    matrixStack.translate(f5, f4, f3);
                    Vec3d vec3d2 = this.Eupjj.getLerpedPos(f2).add((double)f5, 1.0, (double)f3);
                    Vec3d vec3d3 = this.Eupjj.getEntityPos().add(0.0, (double)this.Eupjj.getHeight() / 2.0, 0.0);
                    Vector3f vector3f = vec3d3.subtract(vec3d2).normalize().toVector3f();
                    Vector3f vector3f2 = new Vector3f(0.0f, 1.0f, 0.0f);
                    Quaternionf quaternionf = new Quaternionf().rotationTo((Vector3fc)vector3f2, (Vector3fc)vector3f);
                    try {
                        matrixStack.multiply((Quaternionfc)quaternionf);
                        AswNN.bUp(kE.bTf(matrixStack, 0.0, 0.0, 0.0, f8).dti(mG2.cob(f14)).dtj());
                        matrixStack.pop();
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
        AbstractTexture abstractTexture = ob.cBv((String)((Object)dz.ajP("z", (int)22338, (long)(0x13E9548FFD84DD8BL ^ l2))));
        XSRvt.startBatch(abstractTexture);
        f8 = 1.0f;
        try {
            for (int i3 = 0; i3 < dz.ajS("u", (int)27020, (long)(0x130E425A160E4688L ^ l2)); i3 += 20) {
                f7 = this.IffVm.dhj();
                f6 = this.tYcox.dfH();
                f5 = 1.2f - 0.5f * f7;
                f4 = (float)(Math.sin(Math.toRadians((float)i3 + f6 * 0.3f)) * (double)f9 * (double)f5);
                f3 = (float)((double)0.1f + (double)this.Eupjj.getHeight() * Math.abs(Math.sin(i3)));
                float f15 = (float)(Math.cos(Math.toRadians((float)i3 + f6 * 0.3f)) * (double)f9 * (double)f5);
                try {
                    matrixStack.push();
                    jI.bIs(matrixStack, vec3d);
                    matrixStack.translate(f4, f3, f15);
                    jI.bIq(matrixStack);
                    XSRvt.bUH(kG.bTv(matrixStack, -f8 / 2.0f, -f8 / 2.0f, 0.0, f8, f8).dtF(mG2.cob(0.1f * this.SfkMU.VB() * this.IffVm.dhj())).dtG());
                    matrixStack.pop();
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

    private static String ajN(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x606B;
        if (pePKy[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])pUqGF.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    pUqGF.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dz", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = JpRcV[n3].getBytes("ISO-8859-1");
            dz.pePKy[n3] = dz.ajM(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return pePKy[n3];
    }

    private static Object ajO(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dz.ajN(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int ajQ(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x458A;
        if (GoBNX[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = WUmyw[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])fgwQj.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fgwQj.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dz.GoBNX[n3] = n4;
        }
        return GoBNX[n3];
    }

    private static MatchException ajL(MatchException matchException) {
        return matchException;
    }

    private static int ajR(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dz.ajQ(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
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
                        long l2 = Adunk ^ 0x3101B9880A81L;
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
            LivingEntity livingEntity = eP2.aBS();
            try {
                if (livingEntity != null) {
                    this.hGhYF = livingEntity;
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

