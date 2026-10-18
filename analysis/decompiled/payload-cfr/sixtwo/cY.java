/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_1937
 *  net.minecraft.class_2663
 *  net.minecraft.class_2767
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
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_1937;
import net.minecraft.class_2663;
import net.minecraft.class_2767;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.dh;
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
import sixtwo.iS;
import sixtwo.jD;
import sixtwo.jk;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.on;
import sixtwo.rD;

public class cY
extends gg {
    private final on ReCrR;
    cJ BDssA;
    cJ SnGMi;
    cG VBZRj;
    cG iZEwm;
    cG ykbJL;
    private static final long jEhYF;
    private static final String qnaeb;
    private static final long[] bBsDb;
    private static final Integer[] IzHcV;
    private static final Map nwtEu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cY() {
        long l = jEhYF ^ 0x2B993789BF7DL;
        super(gf.aZL((int)cY.aaV("r", (int)13891, (long)(0x39EBF2003BA45D08L ^ l)), false, gh.nOCvV));
        this.ReCrR = new on();
        int[] nArray = new int[cY.aaV("r", (int)18851, (long)(0x5DFD998BAD4622F4L ^ l))];
        nArray[0] = (int)cY.aaV("r", (int)12463, (long)(0x4FDB4B8678C9DBE7L ^ l));
        nArray[1] = (int)cY.aaV("r", (int)4546, (long)(0x191613B233DE7A94L ^ l));
        nArray[2] = (int)cY.aaV("r", (int)14470, (long)(0x3D65331007A353DFL ^ l));
        nArray[3] = (int)cY.aaV("r", (int)19707, (long)(0x15ADFEBF4BEA787L ^ l));
        nArray[4] = (int)cY.aaV("r", (int)2937, (long)(0x64B1F60DF991E01CL ^ l));
        nArray[5] = (int)cY.aaV("r", (int)14407, (long)(0x4C7AD48415E0D31FL ^ l));
        nArray[cY.aaV("r", (int)21379, (long)(0x4B3DD731ADC938E4L ^ l))] = (int)cY.aaV("r", (int)31348, (long)(0x2A4EBC4E80589105L ^ l));
        nArray[cY.aaV("r", (int)28601, (long)(0xFCFD7F4C19004ECL ^ l))] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray[cY.aaV("r", (int)6504, (long)(0x7DD96AE5755CF20EL ^ l))] = (int)cY.aaV("r", (int)25917, (long)(0x302A389323518E42L ^ l));
        this.BDssA = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[cY.aaV("r", (int)916, (long)(0x66161FE9491BE8C9L ^ l))];
        nArray2[0] = (int)cY.aaV("r", (int)10653, (long)(0x2862A4BF725942EDL ^ l));
        nArray2[1] = (int)cY.aaV("r", (int)32307, (long)(0x6D43E64FEAC41541L ^ l));
        nArray2[2] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray2[3] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray2[4] = (int)cY.aaV("r", (int)9592, (long)(0x2E4EBE72571ACE11L ^ l));
        nArray2[5] = (int)cY.aaV("r", (int)19426, (long)(0x1C6E686E3D3E2080L ^ l));
        nArray2[cY.aaV("r", (int)24451, (long)(0x401C491BC2034DDL ^ l))] = (int)cY.aaV("r", (int)14093, (long)(0xAD5EDAD674D5C6CL ^ l));
        nArray2[cY.aaV("r", (int)20775, (long)(0x37A82595B7F53A7CL ^ l))] = (int)cY.aaV("r", (int)19826, (long)(0x4E6C0497E68CA60BL ^ l));
        nArray2[cY.aaV("r", (int)12470, (long)(0x175312BF866ADBC8L ^ l))] = (int)cY.aaV("r", (int)25143, (long)(0x6306EA48E11895DL ^ l));
        nArray2[cY.aaV("r", (int)3918, (long)(0x73B538AEE6F1E411L ^ l))] = (int)cY.aaV("r", (int)27161, (long)(0x238B38C71837017DL ^ l));
        nArray2[cY.aaV("r", (int)14383, (long)(0x4238E39D74EB5347L ^ l))] = (int)cY.aaV("r", (int)692, (long)(0x69E60219A4F669CCL ^ l));
        nArray2[cY.aaV("r", (int)2774, (long)(0x70E382B36CF46187L ^ l))] = (int)cY.aaV("r", (int)32390, (long)(0x5390AA1F4F1115E6L ^ l));
        nArray2[cY.aaV("r", (int)29328, (long)(0x24132A5E91C319C0L ^ l))] = (int)cY.aaV("r", (int)21951, (long)(0x2E85CE8A00B73EF3L ^ l));
        nArray2[cY.aaV("r", (int)7839, (long)(0x2B62E65A6711F5C5L ^ l))] = (int)cY.aaV("r", (int)26956, (long)(0x5F96B28223FE0227L ^ l));
        nArray2[cY.aaV("r", (int)14397, (long)(0x114B5C07352DD340L ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray2[cY.aaV("r", (int)11233, (long)(0x31F64523B5840ABL ^ l))] = (int)cY.aaV("r", (int)27161, (long)(0x238B38C71837017DL ^ l));
        this.SnGMi = new cJ(this, mr.clS(nArray2));
        int[] nArray3 = new int[cY.aaV("r", (int)27412, (long)(0x2CD5122023A08059L ^ l))];
        nArray3[0] = (int)cY.aaV("r", (int)31719, (long)(0x2C9324008B9084L ^ l));
        nArray3[1] = (int)cY.aaV("r", (int)27161, (long)(0x238B38C71837017DL ^ l));
        nArray3[2] = (int)cY.aaV("r", (int)20758, (long)(0x2441A5E93F11BA45L ^ l));
        nArray3[3] = (int)cY.aaV("r", (int)28221, (long)(0x5B64B8B81F080547L ^ l));
        nArray3[4] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray3[5] = (int)cY.aaV("r", (int)30832, (long)(0x444DA2B2CCCC1322L ^ l));
        nArray3[cY.aaV("r", (int)24451, (long)(0x401C491BC2034DDL ^ l))] = (int)cY.aaV("r", (int)16396, (long)(0xFFBF6784F802B62L ^ l));
        nArray3[cY.aaV("r", (int)20775, (long)(0x37A82595B7F53A7CL ^ l))] = (int)cY.aaV("r", (int)19426, (long)(0x1C6E686E3D3E2080L ^ l));
        nArray3[cY.aaV("r", (int)12470, (long)(0x175312BF866ADBC8L ^ l))] = (int)cY.aaV("r", (int)5671, (long)(0x3077C35ECBF4FD6EL ^ l));
        nArray3[cY.aaV("r", (int)3918, (long)(0x73B538AEE6F1E411L ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray3[cY.aaV("r", (int)7892, (long)(0xF9D5C9ABDCEF5BBL ^ l))] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray3[cY.aaV("r", (int)17747, (long)(0x45895AAFD0372E3EL ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray3[cY.aaV("r", (int)9150, (long)(0x542ED2DB41A1C8CAL ^ l))] = (int)cY.aaV("r", (int)19826, (long)(0x4E6C0497E68CA60BL ^ l));
        this.VBZRj = new cG(this, mr.clS(nArray3)).Uf(mG.rxCUH);
        int[] nArray4 = new int[cY.aaV("r", (int)17747, (long)(0x45895AAFD0372E3EL ^ l))];
        nArray4[0] = (int)cY.aaV("r", (int)31205, (long)(0x1731A6617CCE929EL ^ l));
        nArray4[1] = (int)cY.aaV("r", (int)23208, (long)(0x43C13C83FFE1B1DFL ^ l));
        nArray4[2] = (int)cY.aaV("r", (int)26956, (long)(0x5F96B28223FE0227L ^ l));
        nArray4[3] = (int)cY.aaV("r", (int)27161, (long)(0x238B38C71837017DL ^ l));
        nArray4[4] = (int)cY.aaV("r", (int)7098, (long)(0x132CE6B5C02E70D6L ^ l));
        nArray4[5] = (int)cY.aaV("r", (int)19426, (long)(0x1C6E686E3D3E2080L ^ l));
        nArray4[cY.aaV("r", (int)24451, (long)(0x401C491BC2034DDL ^ l))] = (int)cY.aaV("r", (int)5671, (long)(0x3077C35ECBF4FD6EL ^ l));
        nArray4[cY.aaV("r", (int)20775, (long)(0x37A82595B7F53A7CL ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray4[cY.aaV("r", (int)12470, (long)(0x175312BF866ADBC8L ^ l))] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray4[cY.aaV("r", (int)3918, (long)(0x73B538AEE6F1E411L ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray4[cY.aaV("r", (int)7892, (long)(0xF9D5C9ABDCEF5BBL ^ l))] = (int)cY.aaV("r", (int)19826, (long)(0x4E6C0497E68CA60BL ^ l));
        this.iZEwm = new cG(this, mr.clS(nArray4)).Uf(mG.rxCUH);
        int[] nArray5 = new int[cY.aaV("r", (int)20350, (long)(0x59D363C64EBBA40DL ^ l))];
        nArray5[0] = (int)cY.aaV("r", (int)13300, (long)(0x74BC961DECC2D8BBL ^ l));
        nArray5[1] = (int)cY.aaV("r", (int)26956, (long)(0x5F96B28223FE0227L ^ l));
        nArray5[2] = (int)cY.aaV("r", (int)23208, (long)(0x43C13C83FFE1B1DFL ^ l));
        nArray5[3] = (int)cY.aaV("r", (int)20758, (long)(0x2441A5E93F11BA45L ^ l));
        nArray5[4] = (int)cY.aaV("r", (int)28518, (long)(0x20AD7495ECD68432L ^ l));
        nArray5[5] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray5[cY.aaV("r", (int)24451, (long)(0x401C491BC2034DDL ^ l))] = (int)cY.aaV("r", (int)30832, (long)(0x444DA2B2CCCC1322L ^ l));
        nArray5[cY.aaV("r", (int)20775, (long)(0x37A82595B7F53A7CL ^ l))] = (int)cY.aaV("r", (int)22426, (long)(0x55F0877E4CEBCEFL ^ l));
        nArray5[cY.aaV("r", (int)12470, (long)(0x175312BF866ADBC8L ^ l))] = (int)cY.aaV("r", (int)19426, (long)(0x1C6E686E3D3E2080L ^ l));
        nArray5[cY.aaV("r", (int)3918, (long)(0x73B538AEE6F1E411L ^ l))] = (int)cY.aaV("r", (int)5671, (long)(0x3077C35ECBF4FD6EL ^ l));
        nArray5[cY.aaV("r", (int)7892, (long)(0xF9D5C9ABDCEF5BBL ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray5[cY.aaV("r", (int)17747, (long)(0x45895AAFD0372E3EL ^ l))] = (int)cY.aaV("r", (int)3734, (long)(0x3B3DC688EC4EE5CAL ^ l));
        nArray5[cY.aaV("r", (int)9150, (long)(0x542ED2DB41A1C8CAL ^ l))] = (int)cY.aaV("r", (int)5608, (long)(0x47CC197F3C797E9EL ^ l));
        nArray5[cY.aaV("r", (int)27412, (long)(0x2CD5122023A08059L ^ l))] = (int)cY.aaV("r", (int)19826, (long)(0x4E6C0497E68CA60BL ^ l));
        this.ykbJL = new cG(this, mr.clS(nArray5)).Uf(mG.vuAhq);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    cY.jEhYF = gb.aYR(6307880368235759829L, -8201853478232182540L, MethodHandles.lookup().lookupClass()).a(257204623582375L);
                    var11 = cY.jEhYF ^ 21789502550078L;
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
                var15_3 = var13_1.doFinal("\u00d3\u001e\u0087s\r\u008e}H\u00ca\u00d9\u00a0\"-\u00e8\u00d6=".getBytes("ISO-8859-1"));
                ** while (true)
                cY.qnaeb = cY.aaS(var15_3).intern();
                cY.nwtEu = new HashMap<K, V>(13);
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
                var6_6 = new long[55];
                var3_7 = 0;
                var4_8 = "\u0004\u00bb\u0001X\u00ad\u00a2r1;31\u00f5\u008f\u0096\u00d0\u00a6\u0086G\u00ad\u00fd\u0088\u0084O\u00c7\u00bes\u009d\u00e9G\u001dJO\u00cc. n\"\u00c2mfQ\u00965\u00c0m\u00d2\u00e5\u00a1tl\u00fdr\u008a`e\u00f3\u0001\u00e5\u0084\u00ef\u0098\u008c\u00dd\u000e^\u0001Pg',]\u008c\u00ad\u00baL\u0091\u00f4\u00de\u0004\u00c1?\u00a4\u00bd\u0085\f\u00d8ZW\u00b38\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f\u00dd*}\\\u00fc\u0001\u0088\u00e0*/\u00be1\u00fcg\u0001\u0081\u00c3\u00b4Y\u00edh\u0018W\"\u00ff{T\u00fd\u0094 \u00ecDM\u008fNtq\u001b\u00af\u0017\u00d0\u008f \u00dc\u000b\u0019\"\u009b\u008a\u00d3@\u00b6\u0005\u000e\u00fe0@-\u00b9z\u00f0\u00ea\t\u00f2\u00d2}\u00ff\u001a~\u00af\u0081\u0095\rZ\u0007|E\u0095\u00fa\u00c4\u009d\u0003=\u00cd\u00d6_\u008dT\u00aa2`Z\u0013\u001dB{v/j\u0015gEkY\b\u00b4\u0015\u00c5x\u00d7]\u009f\u00f5\u0017a\u00a4\u001dI\u00b5\u0017\u00f4\u0014\u00e9\u00b1>\u00ee\r\u00badC\u0083\u00f4t3+\u00c2\u00a7\u00bf\u001a4G\u00bc\u0095\u0095\u00ebi1lwY\u00b1\u00e5Su\u008c\u00ef\u008d\u0005\u00dcjpvI!\u0015\u00ef\u00df\u00bf\u00a9\u0005\u0082^\u00a6\u00d7\u00d0\u00bdIX\u0095\u00df\u00f2\u001b\u00b0|\u008e\u00e7\u00b4\u00c0\u0098\u00e6\u00a9\u00ad.\u00a8\u00c1p\u00a7\u008c\u00b2)=\bt~\u00b3\u009d\u0096<[\u00e1\u00e7M#0\u00f7\u00de=\u00e7L)\u001d\u00ff@\u00d7<\u00ce\u008b\u00f5\t9\u0093\u00b7\u0002IV\u00a8\u00c3\u009c\u008c\u00e3!\u001cc\u00d0*V\"\u00f2\u00d2\u0013\u0015\u00a4NTx9\u00e6\u00dd\u00dc\u00f1W\u0088\u00fe\u0013\u0005L\u00baJi\u007f.\u00c5\u00c4\rp\u00eaf\u00a5\u001c\u0098\u00ba?\u00e9\u00f7$\u00feZ\u00aa\u00ac\u00f9\u0019\u00b1\u00b4\u0005\u009e\u00af%\u00a68d\u008b\u00acSU\u00b8\u00ca%)\u00a1]\u00fa]\u00f8#\u0084\u00aeJX\u0081\u009f\u001e\f\u008e\u00d3";
                var5_9 = "\u0004\u00bb\u0001X\u00ad\u00a2r1;31\u00f5\u008f\u0096\u00d0\u00a6\u0086G\u00ad\u00fd\u0088\u0084O\u00c7\u00bes\u009d\u00e9G\u001dJO\u00cc. n\"\u00c2mfQ\u00965\u00c0m\u00d2\u00e5\u00a1tl\u00fdr\u008a`e\u00f3\u0001\u00e5\u0084\u00ef\u0098\u008c\u00dd\u000e^\u0001Pg',]\u008c\u00ad\u00baL\u0091\u00f4\u00de\u0004\u00c1?\u00a4\u00bd\u0085\f\u00d8ZW\u00b38\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f\u00dd*}\\\u00fc\u0001\u0088\u00e0*/\u00be1\u00fcg\u0001\u0081\u00c3\u00b4Y\u00edh\u0018W\"\u00ff{T\u00fd\u0094 \u00ecDM\u008fNtq\u001b\u00af\u0017\u00d0\u008f \u00dc\u000b\u0019\"\u009b\u008a\u00d3@\u00b6\u0005\u000e\u00fe0@-\u00b9z\u00f0\u00ea\t\u00f2\u00d2}\u00ff\u001a~\u00af\u0081\u0095\rZ\u0007|E\u0095\u00fa\u00c4\u009d\u0003=\u00cd\u00d6_\u008dT\u00aa2`Z\u0013\u001dB{v/j\u0015gEkY\b\u00b4\u0015\u00c5x\u00d7]\u009f\u00f5\u0017a\u00a4\u001dI\u00b5\u0017\u00f4\u0014\u00e9\u00b1>\u00ee\r\u00badC\u0083\u00f4t3+\u00c2\u00a7\u00bf\u001a4G\u00bc\u0095\u0095\u00ebi1lwY\u00b1\u00e5Su\u008c\u00ef\u008d\u0005\u00dcjpvI!\u0015\u00ef\u00df\u00bf\u00a9\u0005\u0082^\u00a6\u00d7\u00d0\u00bdIX\u0095\u00df\u00f2\u001b\u00b0|\u008e\u00e7\u00b4\u00c0\u0098\u00e6\u00a9\u00ad.\u00a8\u00c1p\u00a7\u008c\u00b2)=\bt~\u00b3\u009d\u0096<[\u00e1\u00e7M#0\u00f7\u00de=\u00e7L)\u001d\u00ff@\u00d7<\u00ce\u008b\u00f5\t9\u0093\u00b7\u0002IV\u00a8\u00c3\u009c\u008c\u00e3!\u001cc\u00d0*V\"\u00f2\u00d2\u0013\u0015\u00a4NTx9\u00e6\u00dd\u00dc\u00f1W\u0088\u00fe\u0013\u0005L\u00baJi\u007f.\u00c5\u00c4\rp\u00eaf\u00a5\u001c\u0098\u00ba?\u00e9\u00f7$\u00feZ\u00aa\u00ac\u00f9\u0019\u00b1\u00b4\u0005\u009e\u00af%\u00a68d\u008b\u00acSU\u00b8\u00ca%)\u00a1]\u00fa]\u00f8#\u0084\u00aeJX\u0081\u009f\u001e\f\u008e\u00d3".length();
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
                    var4_8 = "D:\u00c9\u00cbd\u0006}\u00d61\u00ac\u00b9?\u000ey\u001ak";
                    var5_9 = "D:\u00c9\u00cbd\u0006}\u00d61\u00ac\u00b9?\u000ey\u001ak".length();
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
        cY.bBsDb = var6_6;
        cY.IzHcV = new Integer[55];
    }

    @hG
    public void aaO(gM gM2) {
        this.ReCrR.cFG();
    }

    private static CallSite aaV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public mG aaK(class_1657 class_16572) {
        float f;
        boolean bl;
        block25: {
            boolean bl2;
            block26: {
                mG mG2;
                block28: {
                    block27: {
                        iS[] iSArray;
                        block23: {
                            block24: {
                                boolean bl3;
                                block21: {
                                    block22: {
                                        long l = jEhYF ^ 0x77CC059367B7L;
                                        iSArray = dh.afl();
                                        try {
                                            block20: {
                                                try {
                                                    try {
                                                        try {
                                                            if (class_16572 == null) break block20;
                                                            bl3 = this.BDssA.WF();
                                                            if (iSArray != null) break block21;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cY.aaR(matchException);
                                                        }
                                                        if (!bl3) break block22;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cY.aaR(matchException);
                                                    }
                                                    if (class_16572 == rD.dlmvG.field_1724) break block22;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cY.aaR(matchException);
                                                }
                                            }
                                            return mG.UhgnI;
                                        }
                                        catch (MatchException matchException) {
                                            throw cY.aaR(matchException);
                                        }
                                    }
                                    bl3 = this.ReCrR.cFA(class_16572);
                                }
                                bl2 = bl3;
                                boolean bl4 = this.ReCrR.cFC(class_16572);
                                try {
                                    try {
                                        bl = bl4;
                                        if (iSArray != null) break block23;
                                        if (!bl) break block24;
                                    }
                                    catch (MatchException matchException) {
                                        throw cY.aaR(matchException);
                                    }
                                    return this.iZEwm.Wf();
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                            }
                            bl = this.SnGMi.WF();
                        }
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block25;
                                    if (bl) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                if (!bl2) break block27;
                            }
                            catch (MatchException matchException) {
                                throw cY.aaR(matchException);
                            }
                            mG2 = this.ykbJL.Wf();
                            break block28;
                        }
                        catch (MatchException matchException) {
                            throw cY.aaR(matchException);
                        }
                    }
                    mG2 = this.VBZRj.Wf();
                }
                return mG2;
            }
            bl = bl2;
        }
        try {
            f = bl ? this.ReCrR.cFB(class_16572) : 0.0f;
        }
        catch (MatchException matchException) {
            throw cY.aaR(matchException);
        }
        float f2 = f;
        return jk.bDu(this.VBZRj.Wf(), this.ykbJL.Wf(), f2);
    }

    @hG
    public void aaL(gH.ti ti2) {
        this.ReCrR.cFv();
    }

    private static MatchException aaR(MatchException matchException) {
        return matchException;
    }

    @hG
    public void aaM(hw.tv tv2) {
        block5: {
            class_1297 class_12972;
            block4: {
                long l = jEhYF ^ 0x6CC227AE0832L;
                class_1297 class_12973 = tv2.bdm();
                iS[] iSArray = dh.afl();
                try {
                    try {
                        class_12972 = class_12973;
                        if (iSArray != null) break block4;
                        if (!(class_12972 instanceof class_1657)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cY.aaR(matchException);
                    }
                    class_12972 = class_12973;
                }
                catch (MatchException matchException) {
                    throw cY.aaR(matchException);
                }
            }
            class_1657 class_16572 = (class_1657)class_12972;
            this.ReCrR.cFz(class_16572);
        }
    }

    @hG
    public void aaN(gL.tk tk2) {
        block22: {
            class_1297 class_12972;
            block21: {
                boolean bl;
                class_1297 class_12973;
                block17: {
                    iS[] iSArray;
                    block18: {
                        block20: {
                            class_1297 class_12974;
                            class_2663 class_26632;
                            block19: {
                                long l = jEhYF ^ 0x465B8E160B28L;
                                iSArray = dh.afl();
                                try {
                                    if (rD.dlmvG.field_1687 == null) {
                                        return;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                class_12973 = tk2.bcf();
                                try {
                                    bl = class_12973 instanceof class_2663;
                                    if (iSArray != null) break block17;
                                    if (!bl) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                class_26632 = (class_2663)class_12973;
                                class_12973 = class_26632.method_11469((class_1937)rD.dlmvG.field_1687);
                                try {
                                    try {
                                        class_12974 = class_12973;
                                        if (iSArray != null) break block19;
                                        if (!(class_12974 instanceof class_1657)) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw cY.aaR(matchException);
                                    }
                                    class_12974 = class_12973;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                            }
                            class_1657 class_16572 = (class_1657)class_12974;
                            this.ReCrR.cFy(class_16572, class_26632.method_11470());
                        }
                        return;
                    }
                    class_12973 = tk2.bcf();
                    try {
                        class_12972 = class_12973;
                        if (iSArray != null) break block21;
                        bl = class_12972 instanceof class_2767;
                    }
                    catch (MatchException matchException) {
                        throw cY.aaR(matchException);
                    }
                }
                if (!bl) break block22;
                class_12972 = class_12973;
            }
            class_2767 class_27672 = (class_2767)class_12972;
            try {
                if (class_27672.method_11894().method_55840().contains(qnaeb)) {
                    this.ReCrR.cFw(class_27672.method_11890(), class_27672.method_11889(), class_27672.method_11893());
                }
            }
            catch (MatchException matchException) {
                throw cY.aaR(matchException);
            }
        }
    }

    private static int aaU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cY.aaT(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int aaT(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5F8;
        if (IzHcV[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = bBsDb[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])nwtEu.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nwtEu.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cY", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cY.IzHcV[n2] = n3;
        }
        return IzHcV[n2];
    }

    @hG
    public void aaP(go.sX sX2) {
        jD.bHl();
    }

    private static String aaS(byte[] byArray) {
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

    @hG(priority=mw.LOWEST)
    public void aaQ(go.sY sY2) {
        jD.bHl();
    }

    @Override
    public void YO() {
        super.YO();
        this.ReCrR.cFG();
        jD.bHm();
        jD.bHj();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cY.class, "aaU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
