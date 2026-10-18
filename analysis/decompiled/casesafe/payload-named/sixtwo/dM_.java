/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.AbstractContainerScreenAccessor
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.client.gui.screen.ingame.HandledScreen
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.registry.entry.RegistryEntry
 *  net.minecraft.screen.slot.Slot
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.AbstractContainerScreenAccessor;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.client.gui.screen.ingame.HandledScreen;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.RegistryKey;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.screen.slot.Slot;
import sixtwo.av;
import sixtwo.bz;
import sixtwo.cD;
import sixtwo.cI;
import sixtwo.cN;
import sixtwo.ee;
import sixtwo.gA;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gN;
import sixtwo.gP;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gq;
import sixtwo.hG;
import sixtwo.iC;
import sixtwo.iu;
import sixtwo.iy;
import sixtwo.iz;
import sixtwo.jc;
import sixtwo.jd;
import sixtwo.jg;
import sixtwo.mA;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.nA;
import sixtwo.nB;
import sixtwo.nC;
import sixtwo.nD;
import sixtwo.nE;
import sixtwo.nG;
import sixtwo.nH;
import sixtwo.nJ;
import sixtwo.nK;
import sixtwo.nM;
import sixtwo.nO;
import sixtwo.nP;
import sixtwo.nR;
import sixtwo.nc;
import sixtwo.nf;
import sixtwo.ng;
import sixtwo.rD;

public class dM
extends gg
implements nG {
    private final cD pdLuI;
    private final cD kUpne;
    private final cI BbKhB;
    private final nO jrTfF;
    private final nR iDodN;
    private final nP kCRjC;
    private final nM dJbpX;
    private final nE oSkIt;
    private final nC aARvb;
    private final nD pDNOf;
    private final nB gwgQF;
    private final nA RGDyH;
    private final List<nH> OgFsa;
    private final mT aAIUc;
    private iz iYEBE;
    private boolean QvQJq;
    private static final long ZAxHu;
    private static final String[] lSera;
    private static final String[] ozwKJ;
    private static final Map LMRQV;
    private static final long[] uqVeJ;
    private static final Integer[] krXjr;
    private static final Map WxmoL;
    private static final long[] MhAnS;
    private static final Long[] JXJSU;
    private static final Map basew;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dM() {
        long l2 = ZAxHu ^ 0x79F25BD50A80L;
        super(gf.aZL((int)dM.aoj("u", (int)6852, (long)(0x119E387D0C15B4F9L ^ l2)), false, gh.qBzlZ));
        int[] nArray = new int[dM.aoj("u", (int)10747, (long)(0x6B9EA759EA2A07C1L ^ l2))];
        nArray[0] = (int)dM.aoj("u", (int)28363, (long)(0x39E51A89F5A0C0EDL ^ l2));
        nArray[1] = (int)dM.aoj("u", (int)4222, (long)(0x249F6487208DBE47L ^ l2));
        nArray[2] = (int)dM.aoj("u", (int)20684, (long)(0x5B476E6365CEFEFBL ^ l2));
        nArray[3] = (int)dM.aoj("u", (int)12627, (long)(0x7AC4008E59959F45L ^ l2));
        nArray[4] = (int)dM.aoj("u", (int)7086, (long)(0x4409AF9CC3C0B5BAL ^ l2));
        nArray[5] = (int)dM.aoj("u", (int)31873, (long)(0x611A81078942D2A0L ^ l2));
        nArray[dM.aoj("u", (int)2562, (long)(0x71D16EC7BDBA242BL ^ l2))] = (int)dM.aoj("u", (int)5051, (long)(0x7DD43B67B4C03D9BL ^ l2));
        nArray[dM.aoj("u", (int)4070, (long)(0x60D22DAA7662A1D4L ^ l2))] = (int)dM.aoj("u", (int)28253, (long)(0x639C52A7D120C073L ^ l2));
        nArray[dM.aoj("u", (int)31100, (long)(0x59F103452BB4D756L ^ l2))] = (int)dM.aoj("u", (int)932, (long)(0x36767D2ADC452D88L ^ l2));
        this.pdLuI = new cD(this, mr.clS(nArray)).VO((int)dM.aoj("u", (int)22296, (long)(0x3F67D41B08657926L ^ l2)));
        int[] nArray2 = new int[dM.aoj("u", (int)19855, (long)(0x70555C1357DBE3B0L ^ l2))];
        nArray2[0] = (int)dM.aoj("u", (int)8376, (long)(0x63DD5A00B1458E97L ^ l2));
        nArray2[1] = (int)dM.aoj("u", (int)12682, (long)(0x1402C009F7AD9FBFL ^ l2));
        nArray2[2] = (int)dM.aoj("u", (int)22987, (long)(0x40850AAA2E28F7DAL ^ l2));
        nArray2[3] = (int)dM.aoj("u", (int)15752, (long)(0x670FA0E4C68213B9L ^ l2));
        nArray2[4] = (int)dM.aoj("u", (int)12367, (long)(0x59628D97FD1C9E77L ^ l2));
        nArray2[5] = (int)dM.aoj("u", (int)25368, (long)(0x6ABDB1D4E31ACD0BL ^ l2));
        nArray2[dM.aoj("u", (int)16979, (long)(0xA00C0AEC1BDEC70L ^ l2))] = (int)dM.aoj("u", (int)27680, (long)(0x167FB9BE53A1421BL ^ l2));
        nArray2[dM.aoj("u", (int)31266, (long)(0x1026F2B090305407L ^ l2))] = (int)dM.aoj("u", (int)28253, (long)(0x639C52A7D120C073L ^ l2));
        nArray2[dM.aoj("u", (int)323, (long)(0x3D25CB74E0A4AF54L ^ l2))] = (int)dM.aoj("u", (int)15752, (long)(0x670FA0E4C68213B9L ^ l2));
        nArray2[dM.aoj("u", (int)23305, (long)(0x5F02D0239976F539L ^ l2))] = (int)dM.aoj("u", (int)25229, (long)(0x724D8CEA2E9BCCAAL ^ l2));
        nArray2[dM.aoj("u", (int)26205, (long)(0x62A871610D7484DL ^ l2))] = (int)dM.aoj("u", (int)28253, (long)(0x639C52A7D120C073L ^ l2));
        nArray2[dM.aoj("u", (int)32633, (long)(0x149D9D565FE75151L ^ l2))] = (int)dM.aoj("u", (int)30095, (long)(0x7A3256CB13FADBB3L ^ l2));
        this.kUpne = new cD(this, mr.clS(nArray2)).VO(mA.OGQHF.cmO());
        int[] nArray3 = new int[dM.aoj("u", (int)5019, (long)(0x478FF2B2D5783D8EL ^ l2))];
        nArray3[0] = (int)dM.aoj("u", (int)13534, (long)(0x699D52F560499AEAL ^ l2));
        nArray3[1] = (int)dM.aoj("u", (int)22987, (long)(0x40850AAA2E28F7DAL ^ l2));
        nArray3[2] = (int)dM.aoj("u", (int)8430, (long)(0x5667C6FE9D818EDDL ^ l2));
        nArray3[3] = (int)dM.aoj("u", (int)12627, (long)(0x7AC4008E59959F45L ^ l2));
        nArray3[4] = (int)dM.aoj("u", (int)15752, (long)(0x670FA0E4C68213B9L ^ l2));
        nArray3[5] = (int)dM.aoj("u", (int)31869, (long)(0x38550BBDC5BA524BL ^ l2));
        nArray3[dM.aoj("u", (int)16979, (long)(0xA00C0AEC1BDEC70L ^ l2))] = (int)dM.aoj("u", (int)1954, (long)(0x787A70D7C368A98FL ^ l2));
        nArray3[dM.aoj("u", (int)31266, (long)(0x1026F2B090305407L ^ l2))] = (int)dM.aoj("u", (int)16221, (long)(0x5499F8CD37E81179L ^ l2));
        nArray3[dM.aoj("u", (int)323, (long)(0x3D25CB74E0A4AF54L ^ l2))] = (int)dM.aoj("u", (int)6455, (long)(0x255C3CA4591BB725L ^ l2));
        nArray3[dM.aoj("u", (int)23305, (long)(0x5F02D0239976F539L ^ l2))] = (int)dM.aoj("u", (int)28253, (long)(0x639C52A7D120C073L ^ l2));
        nArray3[dM.aoj("u", (int)28550, (long)(0x4DA244FF4F7141A4L ^ l2))] = (int)dM.aoj("u", (int)12627, (long)(0x7AC4008E59959F45L ^ l2));
        this.BbKhB = new cI(this, mr.clS(nArray3)).Wx(bz::KE);
        this.jrTfF = new nO();
        this.iDodN = new nR();
        this.kCRjC = new nP();
        this.dJbpX = new nM();
        this.oSkIt = new nE();
        this.aARvb = new nC();
        this.pDNOf = new nD();
        this.gwgQF = new nB();
        this.RGDyH = new nA();
        this.OgFsa = List.of(this.gwgQF, this.aARvb, this.pDNOf, this.RGDyH, this.oSkIt);
        this.aAIUc = mT.cpz();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block26: {
            block25: {
                block24: {
                    block23: {
                        block22: {
                            block21: {
                                dM.ZAxHu = gb.aYR(-1308676650226876123L, 8082099855353200799L, MethodHandles.lookup().lookupClass()).a(119824913176558L);
                                dM.LMRQV = new HashMap<K, V>(13);
                                var22 = dM.ZAxHu ^ 92842748966078L;
                                var24_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                                v0 = SecretKeyFactory.getInstance("DES");
                                v1 = new byte[8];
                                v2 = v1;
                                v1[0] = (byte)(var22 >>> 56);
                                for (var25_2 = 1; var25_2 < 8; ++var25_2) {
                                    v2 = v2;
                                    v2[var25_2] = (byte)(var22 << var25_2 * 8 >>> 56);
                                }
                                var24_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                                var31_3 = new String[8];
                                var29_4 = 0;
                                var28_5 = "\u0001\u00fc\u00a7\u00f2K%\u00df_\u00a9\u008e\u0002\u00c0\u00ddv\u00d4\u00e7\u00f7\"\u001a\u00ac\u00cd\u00c4\u00c6zk&\u00ca@\u00be\u00e9l\u00e1~\u0011\u0018`\u00f7\u00ba\nTM\u009b'6>E\u009b\u00ecqYk\u00e9\u00fc\u00c0\u0087\u00d3(\u008a\u00b1\u00b5N\u0085q\u00e5\t3\u0017\u00cd_\u00eeM\u00b9}bRS\u00f0k;9\u00f70T22\u00a4\u0004\u00bb0\u00d9\u0015\u001b\\\u00c6\u00cc:\u00d5@\u00b1l\u00ea\u000fv\u00db\u00f81\t\u000b\u0096q\u001d\u008ad,\u00ce\u00d1\u007fLc\u0019\u00edJ\u0087G\u00e3\u0001\u00c3\u00c6\u00ef\u00d3t>\u009a\u00aaGw\u00ea\u00cb&\u00b4[gb/gT\u00b7\u008f\u00a8\u001a\u008f\u00f6\u00f6+x\u0085\u0086`\u00e6\t\u0089Shs1\u0098;\u0007\u00a7\u0081b6$p,\u00d2\u00d7\u00eb\u00f1\u00f3\u00cd\u00f1\u0083\u0002\u00dd\u009d\u00d0\u00cd\u0006s\u00ba\u00cb\fJ\u00a4\nh\u00c1\u0093\u0098}\u0088\u008eM\u00fc\u00f1\u00fe\u00cc\u0016\u0015\u00e4b\u0097\t\u0088\u0014\t\u008aP+Q\u0015<\u00c7\u00be\u00ed\u001e8\u0099z\u00fa5\u00a3)VdlI\u00e8\u0096\u00e4\u0012\u00be\u00c8\u00e3=\rr\u0096{c\u00b0Z\u00b9!\u00b8\u00aa\u00fa\u00a8c\u00bbc\u007f\u00ff\u00ec\u00c5x(\u00ff\u000f\u00ad\u00ba\u00a7j\u00d4\u001a\nlb~\u00b5\u00aeK\u00cd\\\u00ae\u00f2~\u008c\u00c4\u0081\u00f4\u00e3\u0080)\u001ay\u00d9\fP\u001f>\u00908?7\u00a8s@!@\u0004\u00ee\u0092+\u0099\u00b1\u00e7z\u001f\u0089\u00f8p\u00f9\u00f0\u00f7\u00bb\u00f5\u0010\u00c3}\u00c0qe\u00a4\u00cbh\u00a1\u0090\u00b0\u00c2o\u00d2B\u00ca4\u00b9\u0083\"\u00d0\u0083m\u00d9\r\u00f2\u0086\u00bb\u00dd\u00b2\u00c9gG\u00df\u00c4\u00e2\u00c8+mk\u00fb\u0011\u00f7\u0018";
                                var30_6 = "\u0001\u00fc\u00a7\u00f2K%\u00df_\u00a9\u008e\u0002\u00c0\u00ddv\u00d4\u00e7\u00f7\"\u001a\u00ac\u00cd\u00c4\u00c6zk&\u00ca@\u00be\u00e9l\u00e1~\u0011\u0018`\u00f7\u00ba\nTM\u009b'6>E\u009b\u00ecqYk\u00e9\u00fc\u00c0\u0087\u00d3(\u008a\u00b1\u00b5N\u0085q\u00e5\t3\u0017\u00cd_\u00eeM\u00b9}bRS\u00f0k;9\u00f70T22\u00a4\u0004\u00bb0\u00d9\u0015\u001b\\\u00c6\u00cc:\u00d5@\u00b1l\u00ea\u000fv\u00db\u00f81\t\u000b\u0096q\u001d\u008ad,\u00ce\u00d1\u007fLc\u0019\u00edJ\u0087G\u00e3\u0001\u00c3\u00c6\u00ef\u00d3t>\u009a\u00aaGw\u00ea\u00cb&\u00b4[gb/gT\u00b7\u008f\u00a8\u001a\u008f\u00f6\u00f6+x\u0085\u0086`\u00e6\t\u0089Shs1\u0098;\u0007\u00a7\u0081b6$p,\u00d2\u00d7\u00eb\u00f1\u00f3\u00cd\u00f1\u0083\u0002\u00dd\u009d\u00d0\u00cd\u0006s\u00ba\u00cb\fJ\u00a4\nh\u00c1\u0093\u0098}\u0088\u008eM\u00fc\u00f1\u00fe\u00cc\u0016\u0015\u00e4b\u0097\t\u0088\u0014\t\u008aP+Q\u0015<\u00c7\u00be\u00ed\u001e8\u0099z\u00fa5\u00a3)VdlI\u00e8\u0096\u00e4\u0012\u00be\u00c8\u00e3=\rr\u0096{c\u00b0Z\u00b9!\u00b8\u00aa\u00fa\u00a8c\u00bbc\u007f\u00ff\u00ec\u00c5x(\u00ff\u000f\u00ad\u00ba\u00a7j\u00d4\u001a\nlb~\u00b5\u00aeK\u00cd\\\u00ae\u00f2~\u008c\u00c4\u0081\u00f4\u00e3\u0080)\u001ay\u00d9\fP\u001f>\u00908?7\u00a8s@!@\u0004\u00ee\u0092+\u0099\u00b1\u00e7z\u001f\u0089\u00f8p\u00f9\u00f0\u00f7\u00bb\u00f5\u0010\u00c3}\u00c0qe\u00a4\u00cbh\u00a1\u0090\u00b0\u00c2o\u00d2B\u00ca4\u00b9\u0083\"\u00d0\u0083m\u00d9\r\u00f2\u0086\u00bb\u00dd\u00b2\u00c9gG\u00df\u00c4\u00e2\u00c8+mk\u00fb\u0011\u00f7\u0018".length();
                                var27_7 = 56;
                                var26_8 = -1;
lbl20:
                                // 2 sources

                                while (true) {
                                    v3 = ++var26_8;
                                    v4 = var28_5.substring(v3, v3 + var27_7);
                                    v5 = -1;
                                    break block21;
                                    break;
                                }
lbl25:
                                // 1 sources

                                while (true) {
                                    var31_3[var29_4++] = dM.aod(var32_9).intern();
                                    if ((var26_8 += var27_7) < var30_6) {
                                        var27_7 = var28_5.charAt(var26_8);
                                        ** continue;
                                    }
                                    var28_5 = "\u00fd\u0006\u00b0\u00aa\u00e5zSj\u00b1\u00bf\u0090\u00c5\u0091\u000b\u0017\u00b3\u00d3\u00f9\u00a9:N%\u0002\f\u00f3\u00b7.\u00d16\u00a5\u00c7M\u0080\u00fa\u0092\u00bd\u0007?\u0097\u0001?\u00ae\u00da\u000eh\u00fa\u0013iS\u00e5\u00fb\u0096\u00d4W\u008bc(\u009c\u00d1\u0083Fc\u00c4\u0099\u001cL\u0086O\f\u0003\u0085\u00f3,$-\u008e^M\u0090eeZ\u0090\u00aa\u0084\u0007\u0098t\u00a4\u008c\u00e5\u00bbY\u00e6\u0099K\u00ad";
                                    var30_6 = "\u00fd\u0006\u00b0\u00aa\u00e5zSj\u00b1\u00bf\u0090\u00c5\u0091\u000b\u0017\u00b3\u00d3\u00f9\u00a9:N%\u0002\f\u00f3\u00b7.\u00d16\u00a5\u00c7M\u0080\u00fa\u0092\u00bd\u0007?\u0097\u0001?\u00ae\u00da\u000eh\u00fa\u0013iS\u00e5\u00fb\u0096\u00d4W\u008bc(\u009c\u00d1\u0083Fc\u00c4\u0099\u001cL\u0086O\f\u0003\u0085\u00f3,$-\u008e^M\u0090eeZ\u0090\u00aa\u0084\u0007\u0098t\u00a4\u008c\u00e5\u00bbY\u00e6\u0099K\u00ad".length();
                                    var27_7 = 56;
                                    var26_8 = -1;
lbl34:
                                    // 2 sources

                                    while (true) {
                                        v6 = ++var26_8;
                                        v4 = var28_5.substring(v6, v6 + var27_7);
                                        v5 = 0;
                                        break block21;
                                        break;
                                    }
                                    break;
                                }
lbl39:
                                // 1 sources

                                while (true) {
                                    var31_3[var29_4++] = dM.aod(var32_9).intern();
                                    if ((var26_8 += var27_7) < var30_6) {
                                        var27_7 = var28_5.charAt(var26_8);
                                        ** continue;
                                    }
                                    break block22;
                                    break;
                                }
                            }
                            var32_9 = var24_1.doFinal(v4.getBytes("ISO-8859-1"));
                            switch (v5) {
                                default: {
                                    ** continue;
                                }
                                ** case 0:
lbl51:
                                // 1 sources

                                ** continue;
                            }
                        }
                        dM.lSera = var31_3;
                        dM.ozwKJ = new String[8];
                        dM.WxmoL = new HashMap<K, V>(13);
                        var11_10 = Cipher.getInstance("DES/CBC/NoPadding");
                        v7 = SecretKeyFactory.getInstance("DES");
                        v8 = new byte[8];
                        v9 = v8;
                        v8[0] = (byte)(var22 >>> 56);
                        for (var12_11 = 1; var12_11 < 8; ++var12_11) {
                            v9 = v9;
                            v9[var12_11] = (byte)(var22 << var12_11 * 8 >>> 56);
                        }
                        var11_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                        var17_12 = new long[40];
                        var14_13 = 0;
                        var15_14 = "F\u009f\u0092\u00eb\u0010z\u008d\u000f\f)\u00b2}\"\u0018E\u00fcB]\u00bf\u0091\u00a0\u00fe\u00adm\u00a0t\u00862\u00f0\u001fdz\u0013\u00a0A\u00bf\u00d8\u00ea@N\u00ab\u00c7'\u00f5\u009c\u0087\u0097\u00d9\u00a1\u001b\u000e\u00f0\u000e\u00c2M\u00aay\u00e7;q\u008a\u00eb\u00f4\u000fH\u00b6\u00ca$fzw\u00f5DB\u00a6\t\u00b6\u00f2\u0094xs\u00c5|F\u00b1\u00e6\u00ed}LBP\n\u00cc\u00b9\u00be\u00d9\u008eU\u00d7E\b\u00f6vEZ\u008bLd\u00d6\u00c9\u0097\u0095`\u00e2\u00a1\"\u0000\u001al\u0003\u0011\u0013y\u007f>\u00cd\u00fc\u0002\u00e7RP\u00d5\u000b\u00a15\u001d\u0083\u0017\u0003\u00db\u0087\u00ff\u0011\u0083\u00a6\b\t\u00ce?G\u00a5q\u00a3w\r\u00d8X\u00dc\u00cdI\u009d\u0014\u0000\u0010\u00e9\u00ce\u00cb\u00e9\u001c$\u00e8\u0098\u0011`\u00deC`\u00d5o\u0000\u0005\u00c1Hb\u00af\u00c1\u00c6J\u0096\u00ed\u00d5#\u00bc\u00e8\u00bf\u00dc*\u00bc\u00b3\u00e0\u00a3\u0011{grld\u00d8\u0087[\u001d\u00e8\u0097\u0002C\u00c1\u00945\u00a4\u00bb\u00dc\t8\u009dVN\u00da\u00be\u00f8\u00f0\u00f6\u00fe'k\u0087\u00dek\u00e1\u0094\u00ed2\u00c3\u0016^.O\u00a64dk\u00b6\u0018@$\u00ca\u0010~\u00bf@*\u001c\u00ef\u008d\u00e6\u0096\u00b9\u00c5\u0016\u00ec+: \u00efZ\u00c6\u0097\u00b2k\u0004\"\u00a4\u00c8\u0095/\u001e\u00e1\u007f\tROL:\u00d5\u00a5\u00bc\u00e4a\u0001\u00e8'\u0006\u0080\u00d7\u0014";
                        var16_15 = "F\u009f\u0092\u00eb\u0010z\u008d\u000f\f)\u00b2}\"\u0018E\u00fcB]\u00bf\u0091\u00a0\u00fe\u00adm\u00a0t\u00862\u00f0\u001fdz\u0013\u00a0A\u00bf\u00d8\u00ea@N\u00ab\u00c7'\u00f5\u009c\u0087\u0097\u00d9\u00a1\u001b\u000e\u00f0\u000e\u00c2M\u00aay\u00e7;q\u008a\u00eb\u00f4\u000fH\u00b6\u00ca$fzw\u00f5DB\u00a6\t\u00b6\u00f2\u0094xs\u00c5|F\u00b1\u00e6\u00ed}LBP\n\u00cc\u00b9\u00be\u00d9\u008eU\u00d7E\b\u00f6vEZ\u008bLd\u00d6\u00c9\u0097\u0095`\u00e2\u00a1\"\u0000\u001al\u0003\u0011\u0013y\u007f>\u00cd\u00fc\u0002\u00e7RP\u00d5\u000b\u00a15\u001d\u0083\u0017\u0003\u00db\u0087\u00ff\u0011\u0083\u00a6\b\t\u00ce?G\u00a5q\u00a3w\r\u00d8X\u00dc\u00cdI\u009d\u0014\u0000\u0010\u00e9\u00ce\u00cb\u00e9\u001c$\u00e8\u0098\u0011`\u00deC`\u00d5o\u0000\u0005\u00c1Hb\u00af\u00c1\u00c6J\u0096\u00ed\u00d5#\u00bc\u00e8\u00bf\u00dc*\u00bc\u00b3\u00e0\u00a3\u0011{grld\u00d8\u0087[\u001d\u00e8\u0097\u0002C\u00c1\u00945\u00a4\u00bb\u00dc\t8\u009dVN\u00da\u00be\u00f8\u00f0\u00f6\u00fe'k\u0087\u00dek\u00e1\u0094\u00ed2\u00c3\u0016^.O\u00a64dk\u00b6\u0018@$\u00ca\u0010~\u00bf@*\u001c\u00ef\u008d\u00e6\u0096\u00b9\u00c5\u0016\u00ec+: \u00efZ\u00c6\u0097\u00b2k\u0004\"\u00a4\u00c8\u0095/\u001e\u00e1\u007f\tROL:\u00d5\u00a5\u00bc\u00e4a\u0001\u00e8'\u0006\u0080\u00d7\u0014".length();
                        var13_16 = 0;
                        while (true) {
                            var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                            v10 = var17_12;
                            v11 = var14_13++;
                            v12 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                            v13 = -1;
                            break block23;
                            break;
                        }
lbl78:
                        // 1 sources

                        while (true) {
                            v10[v11] = v14;
                            if (var13_16 < var16_15) ** continue;
                            var15_14 = "\u00b7\u009cd\u00c42\u0018\u00d8B(\u00b1lj\u0004\u00c2\u008f\u00c2";
                            var16_15 = "\u00b7\u009cd\u00c42\u0018\u00d8B(\u00b1lj\u0004\u00c2\u008f\u00c2".length();
                            var13_16 = 0;
                            while (true) {
                                var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                                v10 = var17_12;
                                v11 = var14_13++;
                                v12 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                                v13 = 0;
                                break block23;
                                break;
                            }
                            break;
                        }
lbl91:
                        // 1 sources

                        while (true) {
                            v10[v11] = v14;
                            if (var13_16 < var16_15) ** continue;
                            break block24;
                            break;
                        }
                    }
                    var19_18 = v12;
                    var21_19 = var11_10.doFinal(new byte[]{(byte)(var19_18 >>> 56), (byte)(var19_18 >>> 48), (byte)(var19_18 >>> 40), (byte)(var19_18 >>> 32), (byte)(var19_18 >>> 24), (byte)(var19_18 >>> 16), (byte)(var19_18 >>> 8), (byte)var19_18});
                    v14 = ((long)var21_19[0] & 255L) << 56 | ((long)var21_19[1] & 255L) << 48 | ((long)var21_19[2] & 255L) << 40 | ((long)var21_19[3] & 255L) << 32 | ((long)var21_19[4] & 255L) << 24 | ((long)var21_19[5] & 255L) << 16 | ((long)var21_19[6] & 255L) << 8 | (long)var21_19[7] & 255L;
                    switch (v13) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl104:
                        // 1 sources

                        ** continue;
                    }
                }
                dM.uqVeJ = var17_12;
                dM.krXjr = new Integer[40];
                dM.basew = new HashMap<K, V>(13);
                var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
                v15 = SecretKeyFactory.getInstance("DES");
                v16 = new byte[8];
                v17 = v16;
                v16[0] = (byte)(var22 >>> 56);
                for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                    v17 = v17;
                    v17[var1_21] = (byte)(var22 << var1_21 * 8 >>> 56);
                }
                var0_20.init(2, (Key)v15.generateSecret(new DESKeySpec(v17)), new IvParameterSpec(new byte[8]));
                var6_22 = new long[2];
                var3_23 = 0;
                var4_24 = "6\u0089w\u007f\u00c1\u00b1\u0001'\u00d4\u00b2\u0016\u0007\u00e7\u00a0\u00c8\u00ac";
                var5_25 = "6\u0089w\u007f\u00c1\u00b1\u0001'\u00d4\u00b2\u0016\u0007\u00e7\u00a0\u00c8\u00ac".length();
                var2_26 = 0;
                while (true) {
                    break block25;
                    break;
                }
lbl126:
                // 1 sources

                while (true) {
                    var6_22[v18] = ((long)var10_29[0] & 255L) << 56 | ((long)var10_29[1] & 255L) << 48 | ((long)var10_29[2] & 255L) << 40 | ((long)var10_29[3] & 255L) << 32 | ((long)var10_29[4] & 255L) << 24 | ((long)var10_29[5] & 255L) << 16 | ((long)var10_29[6] & 255L) << 8 | (long)var10_29[7] & 255L;
                    if (var2_26 < var5_25) ** continue;
                    break block26;
                    break;
                }
            }
            var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
            v18 = var3_23++;
            var8_28 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
            var10_29 = var0_20.doFinal(new byte[]{(byte)(var8_28 >>> 56), (byte)(var8_28 >>> 48), (byte)(var8_28 >>> 40), (byte)(var8_28 >>> 32), (byte)(var8_28 >>> 24), (byte)(var8_28 >>> 16), (byte)(var8_28 >>> 8), (byte)var8_28});
            ** while (true)
        }
        dM.MhAnS = var6_22;
        dM.JXJSU = new Long[2];
    }

    @hG
    public void any(gM gM2) {
        block8: {
            dM dM2;
            block6: {
                long l2 = ZAxHu ^ 0xF7E444D12CL;
                int[] nArray = ee.arS();
                try {
                    block7: {
                        try {
                            try {
                                dM2 = this;
                                if (nArray != null) break block6;
                                if (!dM2.QvQJq) break block7;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            this.pauseSession();
                            if (nArray == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    dM2 = this;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            dM2.anD();
        }
    }

    private static CallSite aog(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public void aaj() {
        super.aaj();
        this.anD();
        rD.dlO().bpW();
    }

    @Override
    public void runMarketOpenCommand(iy iy2) {
        iy iy3;
        block2: {
            block3: {
                long l2 = ZAxHu ^ 0x33D5333A9A4CL;
                int[] nArray = ee.arS();
                try {
                    iy3 = iy2;
                    if (nArray != null) break block2;
                    if (iy3 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
                return;
            }
            iy3 = iy2;
        }
        jd.bAn(iy3.bon());
    }

    @Override
    public long updateFallbackTimeout() {
        long l2 = ZAxHu ^ 0x7529D73B628CL;
        int n2 = Math.max(0, jg.bBx((PlayerEntity)rD.dlmvG.player));
        long l3 = (long)n2 * dM.aom("q", (int)29691, (long)(0x599DE3A8DD62B971L ^ l2));
        return Math.max((long)dM.aom("q", (int)17688, (long)(0x289FDEF475030F93L ^ l2)), l3);
    }

    private static CallSite aoj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void anx(gN gN2) {
        rD.dlO().bpW();
    }

    @hG
    public void anz(gA gA2) {
        dM dM2;
        block55: {
            iy iy2;
            int n2;
            int[] nArray;
            long l2;
            block54: {
                Object object;
                block51: {
                    block53: {
                        block52: {
                            block48: {
                                block50: {
                                    block49: {
                                        block46: {
                                            block47: {
                                                block44: {
                                                    block45: {
                                                        block42: {
                                                            block43: {
                                                                l2 = ZAxHu ^ 0x7A2B7AAB4899L;
                                                                nArray = ee.arS();
                                                                try {
                                                                    n2 = this.bab();
                                                                    if (nArray != null) break block42;
                                                                    if (n2 != 0) break block43;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw dM.aoc(matchException);
                                                                }
                                                                return;
                                                            }
                                                            n2 = gA2.bbQ();
                                                        }
                                                        try {
                                                            try {
                                                                if (nArray != null) break block44;
                                                                if (n2 == 1) break block45;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dM.aoc(matchException);
                                                            }
                                                            return;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dM.aoc(matchException);
                                                        }
                                                    }
                                                    n2 = rD.dlmvG.currentScreen instanceof av;
                                                }
                                                try {
                                                    if (nArray != null) break block46;
                                                    if (n2 == 0) break block47;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dM.aoc(matchException);
                                                }
                                                return;
                                            }
                                            n2 = gA2.bbP();
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                object = dM.aoj("u", (int)27464, (long)(0x5AA25A4F6D23877AL ^ l2));
                                                                if (nArray != null) break block48;
                                                                if (n2 != object) break block49;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dM.aoc(matchException);
                                                            }
                                                            n2 = rD.dlmvG.currentScreen instanceof HandledScreen;
                                                            if (nArray != null) break block50;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw dM.aoc(matchException);
                                                        }
                                                        if (n2 == 0) break block49;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dM.aoc(matchException);
                                                    }
                                                    n2 = this.QvQJq ? 1 : 0;
                                                    if (nArray != null) break block50;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dM.aoc(matchException);
                                                }
                                                if (n2 == 0) break block49;
                                            }
                                            catch (MatchException matchException) {
                                                throw dM.aoc(matchException);
                                            }
                                            this.pauseAndNotify();
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw dM.aoc(matchException);
                                        }
                                    }
                                    n2 = gA2.bbP();
                                }
                                object = this.kUpne.VP();
                            }
                            try {
                                if (nArray != null) break block51;
                                if (n2 != object) break block52;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            Screen screen = rD.dlmvG.currentScreen;
                            try {
                                n2 = screen instanceof HandledScreen;
                                if (nArray != null) break block53;
                                if (n2 == 0) break block52;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            iy2 = (HandledScreen)screen;
                            try {
                                try {
                                    n2 = this.anK((HandledScreen<?>)iy2) ? 1 : 0;
                                    if (nArray != null) break block53;
                                    if (n2 == 0) break block52;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                                gA2.bdX(true);
                                return;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                        }
                        n2 = gA2.bbP();
                    }
                    try {
                        if (nArray != null) break block54;
                        object = this.pdLuI.VP();
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                }
                if (n2 != object) {
                    return;
                }
                try {
                    dM2 = this;
                    if (nArray != null) break block55;
                    n2 = dM2.QvQJq ? 1 : 0;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            if (n2 == 0) {
                block59: {
                    iy iy3;
                    dM dM3;
                    block58: {
                        block56: {
                            block57: {
                                iy2 = this.anJ();
                                try {
                                    try {
                                        if (nArray != null) break block56;
                                        if (iy2 != null) break block57;
                                    }
                                    catch (MatchException matchException) {
                                        throw dM.aoc(matchException);
                                    }
                                    cN.XI((String)((Object)dM.aog("x", (int)26575, (long)(0x1CC20F0052683C1FL ^ l2))));
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                            }
                            try {
                                dM3 = this;
                                iy3 = iy2;
                                if (nArray != null) break block58;
                                dM3.anC(iy3);
                                cN.XJ((String)((Object)dM.aog("x", (int)22685, (long)(0x3DF785208598348L ^ l2))));
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                        }
                        try {
                            if (rD.dlmvG.currentScreen instanceof HandledScreen) break block59;
                            dM3 = this;
                            iy3 = iy2;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    dM3.reopenMarket(iy3);
                }
                return;
            }
            dM2 = this;
        }
        dM2.pauseAndNotify();
    }

    private nK anE(iy iy2) {
        return nK.cxC(this, iy2, this.jrTfF, this.iDodN, this.kCRjC, this.dJbpX, this.iYEBE);
    }

    @hG
    public void anA(gL.tk tk2) {
        block10: {
            iy iy2;
            block11: {
                dM dM2;
                int[] nArray;
                block8: {
                    block9: {
                        long l2 = ZAxHu ^ 0x6B7E347F3A22L;
                        nArray = ee.arS();
                        try {
                            try {
                                dM2 = this;
                                if (nArray != null) break block8;
                                if (dM2.QvQJq) break block9;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    dM2 = this;
                }
                iy2 = dM2.anJ();
                try {
                    try {
                        if (nArray != null) break block10;
                        if (iy2 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            this.anH(this.anE(iy2), tk2);
        }
    }

    private void anH(nK nK2, gL.tk tk2) {
        long l2 = ZAxHu ^ 0x2D10BE155099L;
        Iterator<nH> iterator = this.OgFsa.iterator();
        int[] nArray = ee.arS();
        while (iterator.hasNext()) {
            nH nH2 = iterator.next();
            nJ nJ2 = nH2.cwv(nK2, tk2);
            try {
                if (nJ2.cxz()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dM.aoc(matchException);
            }
            if (nArray == null) continue;
        }
    }

    private void anD() {
        long l2 = ZAxHu ^ 0x31BC3F1BED3BL;
        int[] nArray = ee.arS();
        this.jrTfF.cyq();
        int[] nArray2 = nArray;
        this.iDodN.czb();
        for (nH nH2 : this.OgFsa) {
            nH2.cwq();
            if (nArray2 == null) continue;
        }
    }

    @hG
    public void anB(gP gP2) {
        block10: {
            iy iy2;
            block11: {
                dM dM2;
                int[] nArray;
                block8: {
                    block9: {
                        long l2 = ZAxHu ^ 0xF8B4954B87FL;
                        nArray = ee.arS();
                        try {
                            try {
                                dM2 = this;
                                if (nArray != null) break block8;
                                if (dM2.QvQJq) break block9;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    dM2 = this;
                }
                iy2 = dM2.anJ();
                try {
                    try {
                        if (nArray != null) break block10;
                        if (iy2 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            this.anI(this.anE(iy2), gP2);
        }
    }

    private static MatchException aoc(MatchException matchException) {
        return matchException;
    }

    private iy anJ() {
        iu iu2;
        block4: {
            iu iu3;
            block5: {
                long l2 = ZAxHu ^ 0x4788CE6B7291L;
                iu3 = rD.dlV().bnM();
                int[] nArray = ee.arS();
                try {
                    try {
                        iu2 = iu3;
                        if (nArray != null) break block4;
                        if (iu2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            iu2 = iu3.bmP().orElse(null);
        }
        return (iy)((Object)iu2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean anK(HandledScreen<?> handledScreen) {
        nf nf2;
        block35: {
            int[] nArray;
            block33: {
                ItemStack itemStack;
                long l2;
                block31: {
                    nc nc2;
                    ItemStack itemStack2;
                    block32: {
                        block30: {
                            Slot slot;
                            block28: {
                                Slot slot2;
                                block29: {
                                    block27: {
                                        l2 = ZAxHu ^ 0xC049D9DBE70L;
                                        AbstractContainerScreenAccessor abstractContainerScreenAccessor = (AbstractContainerScreenAccessor)handledScreen;
                                        slot2 = abstractContainerScreenAccessor.getHoveredSlot();
                                        nArray = ee.arS();
                                        try {
                                            slot = slot2;
                                            if (nArray != null) break block27;
                                            if (slot == null) return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw dM.aoc(matchException);
                                        }
                                        slot = slot2;
                                    }
                                    try {
                                        try {
                                            if (nArray != null) break block28;
                                            if (slot.hasStack()) break block29;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw dM.aoc(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw dM.aoc(matchException);
                                    }
                                }
                                slot = slot2;
                            }
                            itemStack2 = slot.getStack();
                            try {
                                boolean bl2 = itemStack2.isEmpty();
                                if (nArray != null) return bl2;
                                if (!bl2) break block30;
                                return false;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                        }
                        try {
                            if (this.anJ() == null) {
                                cN.XI((String)((Object)dM.aog("x", (int)9269, (long)(0x7A6122706BD4890AL ^ l2))));
                                return true;
                            }
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                        nf2 = new nf();
                        nf2.cud(itemStack2.getItem().getTranslationKey());
                        nc2 = new nc();
                        try {
                            try {
                                itemStack = itemStack2;
                                if (nArray != null) break block31;
                                if (!itemStack.contains(DataComponentTypes.CUSTOM_NAME)) break block32;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            nc2.csL(jc.bzE(itemStack2));
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    nc2.csM(false);
                    nc2.csN(false);
                    nf2.cue(nc2);
                    itemStack = itemStack2;
                }
                Iterator iterator = itemStack.getEnchantments().getEnchantmentEntries().iterator();
                block24: while (true) {
                    Iterator iterator2 = iterator;
                    while (iterator2.hasNext()) {
                        Integer n2;
                        Integer n3;
                        RegistryEntry registryEntry;
                        block34: {
                            iterator2 = iterator;
                            if (nArray != null) continue;
                            Map.Entry entry = (Map.Entry)iterator2.next();
                            registryEntry = (RegistryEntry)entry.getKey();
                            n3 = (Integer)entry.getValue();
                            try {
                                if (nArray != null) break block33;
                                if (registryEntry == null) continue block24;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            try {
                                n2 = n3;
                                if (nArray != null) break block34;
                                if (n2 == null) continue block24;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            n2 = n3;
                        }
                        try {
                            if (n2 <= 0 && nArray == null) continue block24;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                        registryEntry.getKey().ifPresent(registryKey -> nf2.ctY().add(new ng((RegistryKey<Enchantment>)registryKey, (int)n3, false)));
                        if (nArray != null) break block24;
                        continue block24;
                    }
                    break;
                }
                this.pauseAndNotify((String)((Object)dM.aog("x", (int)2663, (long)(0x23F5FC8AFF58A759L ^ l2))));
            }
            try {
                try {
                    if (nArray != null) return true;
                    if (rD.dlmvG.currentScreen == null) break block35;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
                rD.dlmvG.player.closeHandledScreen();
            }
            catch (MatchException matchException) {
                throw dM.aoc(matchException);
            }
        }
        bz.KE();
        bz.KH().KD(nf2);
        return true;
    }

    private void anC(iy iy2) {
        dM dM2;
        int[] nArray;
        block11: {
            block12: {
                long l2;
                block9: {
                    iC iC2;
                    String string;
                    block10: {
                        l2 = ZAxHu ^ 0x1D9DB58628FBL;
                        int[] nArray2 = ee.arS();
                        this.anD();
                        nArray = nArray2;
                        string = jd.bAk();
                        iC2 = rD.dlO().bqh();
                        try {
                            try {
                                if (nArray != null) break block9;
                                if (!iC2.bqK(string)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            cN.XI((String)((Object)dM.aog("x", (int)2202, (long)(0x41FE35C91B54B32BL ^ l2))));
                            return;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    this.iYEBE = iC2.bqI(string);
                }
                try {
                    try {
                        dM2 = this;
                        if (nArray != null) break block11;
                        if (dM2.iYEBE != null) break block12;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    cN.XI((String)((Object)dM.aog("x", (int)16040, (long)(0x70C0A29E0DF7051EL ^ l2))));
                    return;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            this.QvQJq = true;
            this.dJbpX.cxS(iy2);
            dM2 = this;
        }
        nK nK2 = dM2.anE(iy2);
        for (nH nH2 : this.OgFsa) {
            nH2.cwy(nK2);
            if (nArray == null) continue;
        }
    }

    private void anI(nK nK2, gP gP2) {
        long l2 = ZAxHu ^ 0x19716BFEF204L;
        Iterator<nH> iterator = this.OgFsa.iterator();
        int[] nArray = ee.arS();
        while (iterator.hasNext()) {
            nH nH2 = iterator.next();
            nJ nJ2 = nH2.cxc(nK2, gP2);
            try {
                if (nJ2.cxz()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dM.aoc(matchException);
            }
            if (nArray == null) continue;
        }
    }

    private void anG(nK nK2, gq gq2) {
        long l2 = ZAxHu ^ 0x5B25F5BC7A74L;
        Iterator<nH> iterator = this.OgFsa.iterator();
        int[] nArray = ee.arS();
        while (iterator.hasNext()) {
            nH nH2 = iterator.next();
            nJ nJ2 = nH2.cwp(nK2, gq2);
            try {
                if (nJ2.cxz()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dM.aoc(matchException);
            }
            if (nArray == null) continue;
        }
    }

    private void anF(nK nK2) {
        long l2 = ZAxHu ^ 0x4141D152C0A6L;
        Iterator<nH> iterator = this.OgFsa.iterator();
        int[] nArray = ee.arS();
        while (iterator.hasNext()) {
            nH nH2 = iterator.next();
            nJ nJ2 = nH2.cwm(nK2);
            try {
                if (nJ2.cxz()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dM.aoc(matchException);
            }
            if (nArray == null) continue;
        }
    }

    @hG
    public void anw(gq gq2) {
        block18: {
            iy iy2;
            block19: {
                dM dM2;
                int[] nArray;
                block17: {
                    boolean bl2;
                    block15: {
                        block16: {
                            block14: {
                                block13: {
                                    long l2 = ZAxHu ^ 0x1FD506DCB962L;
                                    nArray = ee.arS();
                                    try {
                                        try {
                                            bl2 = this.bab();
                                            if (nArray != null) break block13;
                                            if (!bl2) break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw dM.aoc(matchException);
                                        }
                                        bl2 = this.QvQJq;
                                    }
                                    catch (MatchException matchException) {
                                        throw dM.aoc(matchException);
                                    }
                                }
                                try {
                                    if (nArray != null) break block15;
                                    if (bl2) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                            }
                            return;
                        }
                        try {
                            dM2 = this;
                            if (nArray != null) break block17;
                            bl2 = dM2.pDNOf.cxv();
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    if (!bl2) {
                        return;
                    }
                    dM2 = this;
                }
                iy2 = dM2.anJ();
                try {
                    try {
                        if (nArray != null) break block18;
                        if (iy2 != null) break block19;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            this.anG(this.anE(iy2), gq2);
        }
    }

    @hG
    public void anv(gH.th th2) {
        block15: {
            iy iy2;
            block16: {
                dM dM2;
                int[] nArray;
                block14: {
                    block17: {
                        block13: {
                            boolean bl2;
                            block12: {
                                long l2 = ZAxHu ^ 0x3F27109E358AL;
                                nArray = ee.arS();
                                try {
                                    try {
                                        try {
                                            bl2 = this.bab();
                                            if (nArray != null) break block12;
                                            if (!bl2) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw dM.aoc(matchException);
                                        }
                                        dM2 = this;
                                        if (nArray != null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw dM.aoc(matchException);
                                    }
                                    bl2 = dM2.QvQJq;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                            }
                            if (bl2) break block17;
                        }
                        return;
                    }
                    dM2 = this;
                }
                iy2 = dM2.anJ();
                try {
                    try {
                        if (nArray != null) break block15;
                        if (iy2 != null) break block16;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
            }
            this.anF(this.anE(iy2));
        }
    }

    public nM anR() {
        return this.dJbpX;
    }

    public nB anV() {
        return this.gwgQF;
    }

    public cI anN() {
        return this.BbKhB;
    }

    private static String aod(byte[] byArray) {
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

    private static int aoi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dM.aoh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public mT anY() {
        return this.aAIUc;
    }

    public List<nH> anX() {
        return this.OgFsa;
    }

    public cD anL() {
        return this.pdLuI;
    }

    private static CallSite aom(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_2().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int aoh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7847;
        if (krXjr[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = uqVeJ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])WxmoL.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    WxmoL.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dM", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dM.krXjr[n3] = n4;
        }
        return krXjr[n3];
    }

    private static long aok(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x74F3;
        if (JXJSU[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = MhAnS[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])basew.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    basew.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dM", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            dM.JXJSU[n3] = l5;
        }
        return JXJSU[n3];
    }

    public nR anP() {
        return this.iDodN;
    }

    public boolean aoa() {
        return this.QvQJq;
    }

    public cD anM() {
        return this.kUpne;
    }

    public nP anQ() {
        return this.kCRjC;
    }

    public nE anS() {
        return this.oSkIt;
    }

    private static long aol(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = dM.aok(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    public nD anU() {
        return this.pDNOf;
    }

    private static String aoe(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4FBD;
        if (ozwKJ[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])LMRQV.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LMRQV.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dM", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = lSera[n3].getBytes("ISO-8859-1");
            dM.ozwKJ[n3] = dM.aod(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ozwKJ[n3];
    }

    public iz anZ() {
        return this.iYEBE;
    }

    private static Object aof(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dM.aoe(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public nA anW() {
        return this.RGDyH;
    }

    public nC anT() {
        return this.aARvb;
    }

    public nO anO() {
        return this.jrTfF;
    }

    @Override
    public void pauseAndNotify(String string) {
        Object object;
        block16: {
            long l2;
            block17: {
                Object object2;
                block14: {
                    dM dM2;
                    int[] nArray;
                    block12: {
                        block13: {
                            l2 = ZAxHu ^ 0x456877C3F3F9L;
                            nArray = ee.arS();
                            try {
                                try {
                                    dM2 = this;
                                    if (nArray != null) break block12;
                                    if (dM2.QvQJq) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                                return;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                        }
                        dM2 = this;
                    }
                    try {
                        block15: {
                            try {
                                try {
                                    try {
                                        dM2.pauseSession();
                                        object2 = string;
                                        if (nArray != null) break block14;
                                        if (object2 == null) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw dM.aoc(matchException);
                                    }
                                    object = string;
                                    if (nArray != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                                if (!((String)object).isBlank()) break block17;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                        }
                        object2 = dM.aog("x", (int)26618, (long)(0x69E4FEEC9070748L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                }
                cN.XJ((String)object2);
                return;
            }
            object = dM.aog("x", (int)5494, (long)(0x5A8821BF736E75C7L ^ l2));
        }
        cN.XQ((String)object, string);
    }

    @Override
    public void reopenMarket(iy iy2) {
        block8: {
            block9: {
                MinecraftClient minecraftClient;
                block10: {
                    long l2 = ZAxHu ^ 0x2ABDD66D27EEL;
                    int[] nArray = ee.arS();
                    try {
                        try {
                            try {
                                try {
                                    if (nArray != null) break block8;
                                    if (rD.dlmvG.player == null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw dM.aoc(matchException);
                                }
                                minecraftClient = rD.dlmvG;
                                if (nArray != null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            if (minecraftClient.currentScreen == null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                        minecraftClient = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                }
                minecraftClient.player.closeHandledScreen();
            }
            this.anD();
            this.jrTfF.cyH(true);
        }
    }

    @Override
    public void pauseSession() {
        block12: {
            block13: {
                dM dM2;
                int[] nArray;
                block10: {
                    block11: {
                        long l2 = ZAxHu ^ 0x620B1B59597BL;
                        nArray = ee.arS();
                        try {
                            try {
                                dM2 = this;
                                if (nArray != null) break block10;
                                if (dM2.QvQJq) break block11;
                            }
                            catch (MatchException matchException) {
                                throw dM.aoc(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw dM.aoc(matchException);
                        }
                    }
                    dM2 = this;
                }
                iy iy2 = dM2.anJ();
                try {
                    if (nArray != null) break block12;
                    if (iy2 == null) break block13;
                }
                catch (MatchException matchException) {
                    throw dM.aoc(matchException);
                }
                nK nK2 = this.anE(iy2);
                for (nH nH2 : this.OgFsa) {
                    try {
                        nH2.cwz(nK2);
                        if (nArray == null) {
                            if (nArray == null) continue;
                            break;
                        }
                        break block12;
                    }
                    catch (MatchException matchException) {
                        throw dM.aoc(matchException);
                    }
                }
                this.dJbpX.cxS(iy2);
            }
            this.QvQJq = false;
            this.anD();
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dM.class, "aof", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(dM.class, "aoi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_2() {
        try {
            return MethodHandles.lookup().findStatic(dM.class, "aol", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

