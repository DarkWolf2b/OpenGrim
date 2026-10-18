/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_408
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_408;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.jb;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class ci
extends co {
    private static final float MDikl = 15.0f;
    private static final float Olteo = 3.0f;
    private static final float qewTL = 8.0f;
    private static final float zaNoi = 3.0f;
    private final ct QkEJO;
    private final cu DqZAf;
    private final cu tYfcn;
    private final cu eELlU;
    private final cJ epVui;
    private final cJ wpjqC;
    private final cG UTgfC;
    private final cJ syfIm;
    private final cG qVQHv;
    private final cG ENHuR;
    private final cC GPuoI;
    private final rk TcJaU;
    private static final long IhJAo;
    private static final long[] TlWnl;
    private static final Integer[] FeBkO;
    private static final Map HJhZk;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ci() {
        long l = IhJAo ^ 0x10D1E70C28CEL;
        int[] nArray = new int[ci.QA("h", (int)25242, (long)(0x7418F8CC0C8CED2CL ^ l))];
        nArray[0] = (int)ci.QA("h", (int)8715, (long)(0x5C074FF6A40FAD9AL ^ l));
        nArray[1] = (int)ci.QA("h", (int)8812, (long)(0x10EE60767D5E2DCFL ^ l));
        nArray[2] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        nArray[3] = (int)ci.QA("h", (int)9808, (long)(0x1DF2227C7A70A9F2L ^ l));
        nArray[4] = (int)ci.QA("h", (int)5803, (long)(0x43FA23DE2A29937L ^ l));
        nArray[5] = (int)ci.QA("h", (int)27165, (long)(0x5FBCECCFF6F56589L ^ l));
        nArray[ci.QA("h", (int)6808, (long)(0xFC341576BCB1531L ^ l))] = (int)ci.QA("h", (int)15101, (long)(0x1CB4C290F45B550L ^ l));
        nArray[ci.QA("h", (int)16237, (long)(0x1E48286F06AF30E7L ^ l))] = (int)ci.QA("h", (int)18152, (long)(0x195F344B4B9BC97BL ^ l));
        nArray[ci.QA("h", (int)7330, (long)(0x4C835ABDF849937BL ^ l))] = (int)ci.QA("h", (int)30440, (long)(0x4F98EB96DF59F955L ^ l));
        super(nArray, lf.edgju);
        this.QkEJO = new ct(this, mr.clS(new int[]{(int)ci.QA("h", (int)16618, (long)(0x156FAF60839CF71L ^ l)), (int)ci.QA("h", (int)8543, (long)(0x3187969249E5AEC8L ^ l)), (int)ci.QA("h", (int)14204, (long)(0x304704CC6C0738EEL ^ l)), (int)ci.QA("h", (int)3552, (long)(0x4C9E335C61AA0263L ^ l))}));
        int[] nArray2 = new int[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))];
        nArray2[0] = (int)ci.QA("h", (int)27682, (long)(0x2875F74FA2F0E382L ^ l));
        nArray2[1] = (int)ci.QA("h", (int)4573, (long)(0x52B6E24608A89E6EL ^ l));
        nArray2[2] = (int)ci.QA("h", (int)32354, (long)(0x4B8AC8C6C565F1EDL ^ l));
        nArray2[3] = (int)ci.QA("h", (int)12248, (long)(0x1C57008634D6204EL ^ l));
        nArray2[4] = (int)ci.QA("h", (int)14609, (long)(0xC969ED586E83693L ^ l));
        nArray2[5] = (int)ci.QA("h", (int)20241, (long)(0x6A1DFC2D90BDC0CAL ^ l));
        nArray2[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        this.DqZAf = new cu(this.QkEJO, mr.clS(nArray2));
        int[] nArray3 = new int[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))];
        nArray3[0] = (int)ci.QA("h", (int)32040, (long)(0x57904D2C079BF2A5L ^ l));
        nArray3[1] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray3[2] = (int)ci.QA("h", (int)7759, (long)(0x6D80914B285491EBL ^ l));
        nArray3[3] = (int)ci.QA("h", (int)17749, (long)(0x78F3DFBAEA514AE0L ^ l));
        nArray3[4] = (int)ci.QA("h", (int)13398, (long)(0x11AEFEA23C193BC3L ^ l));
        nArray3[5] = (int)ci.QA("h", (int)6737, (long)(0x5A858305CC8B95D7L ^ l));
        this.tYfcn = new cu(this.QkEJO, mr.clS(nArray3));
        this.eELlU = new cu(this.QkEJO, mr.clS(new int[]{(int)ci.QA("h", (int)1268, (long)(0x4E6DA20FD8408B6CL ^ l)), (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l)), (int)ci.QA("h", (int)14609, (long)(0xC969ED586E83693L ^ l)), (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l))}));
        int[] nArray4 = new int[ci.QA("h", (int)22248, (long)(0x58081AA6FBFDD972L ^ l))];
        nArray4[0] = (int)ci.QA("h", (int)7351, (long)(0x4E3D55BF58F1300L ^ l));
        nArray4[1] = (int)ci.QA("h", (int)9335, (long)(0x15DEAE814454ABF2L ^ l));
        nArray4[2] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray4[3] = (int)ci.QA("h", (int)9600, (long)(0x20A3FCCDD883AA30L ^ l));
        nArray4[4] = (int)ci.QA("h", (int)9111, (long)(0x4BD5F4F812E42C1CL ^ l));
        nArray4[5] = (int)ci.QA("h", (int)20335, (long)(0x71DE32C0E96D40EBL ^ l));
        nArray4[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray4[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))] = (int)ci.QA("h", (int)26646, (long)(0x68A0F1E4A429E7A4L ^ l));
        nArray4[ci.QA("h", (int)14259, (long)(0x109FFF0407613802L ^ l))] = (int)ci.QA("h", (int)24855, (long)(0x29865269001EEBCL ^ l));
        nArray4[ci.QA("h", (int)13009, (long)(0xFAA716F96323D4EL ^ l))] = (int)ci.QA("h", (int)17749, (long)(0x78F3DFBAEA514AE0L ^ l));
        nArray4[ci.QA("h", (int)25128, (long)(0x2D46E6949A396DA1L ^ l))] = (int)ci.QA("h", (int)10489, (long)(0x7B7ED942A6DA2769L ^ l));
        nArray4[ci.QA("h", (int)6618, (long)(0x5FA722985B88166EL ^ l))] = (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l));
        this.epVui = new cJ(this, mr.clS(nArray4)).WE(false);
        int[] nArray5 = new int[ci.QA("h", (int)21675, (long)(0x1B133743CD75DB25L ^ l))];
        nArray5[0] = (int)ci.QA("h", (int)8761, (long)(0x5AFE83498C432D86L ^ l));
        nArray5[1] = (int)ci.QA("h", (int)17749, (long)(0x78F3DFBAEA514AE0L ^ l));
        nArray5[2] = (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l));
        nArray5[3] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray5[4] = (int)ci.QA("h", (int)14771, (long)(0x518107331453B60FL ^ l));
        nArray5[5] = (int)ci.QA("h", (int)1284, (long)(0x7808CC0CB19E0ABFL ^ l));
        nArray5[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)28718, (long)(0x40D328F965637F97L ^ l));
        nArray5[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray5[ci.QA("h", (int)14259, (long)(0x109FFF0407613802L ^ l))] = (int)ci.QA("h", (int)10489, (long)(0x7B7ED942A6DA2769L ^ l));
        nArray5[ci.QA("h", (int)13009, (long)(0xFAA716F96323D4EL ^ l))] = (int)ci.QA("h", (int)25845, (long)(0x6E59326694236B53L ^ l));
        this.wpjqC = new cJ(this, mr.clS(nArray5)).WE(true);
        this.UTgfC = new cG(this, mr.clS(new int[]{(int)ci.QA("h", (int)18554, (long)(0x6CF3F87237A3C7E4L ^ l)), (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l)), (int)ci.QA("h", (int)14609, (long)(0xC969ED586E83693L ^ l)), (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l)), (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray6 = new int[ci.QA("h", (int)14259, (long)(0x109FFF0407613802L ^ l))];
        nArray6[0] = (int)ci.QA("h", (int)13262, (long)(0x3F532448B0BABC4FL ^ l));
        nArray6[1] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        nArray6[2] = (int)ci.QA("h", (int)20241, (long)(0x6A1DFC2D90BDC0CAL ^ l));
        nArray6[3] = (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l));
        nArray6[4] = (int)ci.QA("h", (int)17749, (long)(0x78F3DFBAEA514AE0L ^ l));
        nArray6[5] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray6[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)10489, (long)(0x7B7ED942A6DA2769L ^ l));
        nArray6[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))] = (int)ci.QA("h", (int)3552, (long)(0x4C9E335C61AA0263L ^ l));
        this.syfIm = new cJ(this, mr.clS(nArray6)).WE(true);
        int[] nArray7 = new int[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))];
        nArray7[0] = (int)ci.QA("h", (int)2708, (long)(0x428574A2B6ED8513L ^ l));
        nArray7[1] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray7[2] = (int)ci.QA("h", (int)14609, (long)(0xC969ED586E83693L ^ l));
        nArray7[3] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray7[4] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        nArray7[5] = (int)ci.QA("h", (int)14771, (long)(0x518107331453B60FL ^ l));
        nArray7[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)21262, (long)(0x52AEE9C36EEADCA4L ^ l));
        this.qVQHv = new cG(this, mr.clS(nArray7)).Uf(mG.cnR(100.0f, 180.0f, 255.0f, 255.0f));
        int[] nArray8 = new int[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))];
        nArray8[0] = (int)ci.QA("h", (int)2708, (long)(0x428574A2B6ED8513L ^ l));
        nArray8[1] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray8[2] = (int)ci.QA("h", (int)14609, (long)(0xC969ED586E83693L ^ l));
        nArray8[3] = (int)ci.QA("h", (int)19455, (long)(0x72627AC9D04BC425L ^ l));
        nArray8[4] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        nArray8[5] = (int)ci.QA("h", (int)14771, (long)(0x518107331453B60FL ^ l));
        nArray8[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)15430, (long)(0x5615D36FEBF3B3FEL ^ l));
        this.ENHuR = new cG(this, mr.clS(nArray8)).Uf(mG.cnR(180.0f, 100.0f, 255.0f, 255.0f));
        int[] nArray9 = new int[ci.QA("h", (int)7499, (long)(0x31B516E5E42D12E3L ^ l))];
        nArray9[0] = (int)ci.QA("h", (int)4777, (long)(0x330C9FD6EE4D9D07L ^ l));
        nArray9[1] = (int)ci.QA("h", (int)22345, (long)(0xB377B1C0B6E58E6L ^ l));
        nArray9[2] = (int)ci.QA("h", (int)20241, (long)(0x6A1DFC2D90BDC0CAL ^ l));
        nArray9[3] = (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l));
        nArray9[4] = (int)ci.QA("h", (int)17749, (long)(0x78F3DFBAEA514AE0L ^ l));
        nArray9[5] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray9[ci.QA("h", (int)13901, (long)(0x5F523E2A24A4B9E8L ^ l))] = (int)ci.QA("h", (int)10489, (long)(0x7B7ED942A6DA2769L ^ l));
        nArray9[ci.QA("h", (int)27406, (long)(0x1F4113616256486L ^ l))] = (int)ci.QA("h", (int)3552, (long)(0x4C9E335C61AA0263L ^ l));
        nArray9[ci.QA("h", (int)14259, (long)(0x109FFF0407613802L ^ l))] = (int)ci.QA("h", (int)14771, (long)(0x518107331453B60FL ^ l));
        nArray9[ci.QA("h", (int)13009, (long)(0xFAA716F96323D4EL ^ l))] = (int)ci.QA("h", (int)24841, (long)(0x11E8BB87158F6EA5L ^ l));
        nArray9[ci.QA("h", (int)21675, (long)(0x1B133743CD75DB25L ^ l))] = (int)ci.QA("h", (int)30070, (long)(0x65F2910C219B7AD7L ^ l));
        nArray9[ci.QA("h", (int)30284, (long)(0x1DB2FFEF9A6F79D5L ^ l))] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray9[ci.QA("h", (int)9995, (long)(0x4D6D15C18AA228B1L ^ l))] = (int)ci.QA("h", (int)30447, (long)(0x5C39A778E49F948L ^ l));
        nArray9[ci.QA("h", (int)5626, (long)(0x5EBAB43B44D01A7AL ^ l))] = (int)ci.QA("h", (int)13921, (long)(0x1118CA6CC64439EDL ^ l));
        this.GPuoI = new cC(this, mr.clS(nArray9)).Vy(0.01).Vw(0.4).Vx(5.0).VA(3.0);
        boolean bl = ca.OY();
        this.TcJaU = new rk((int)ci.QA("h", (int)25481, (long)(0xE4B6008738EC37L ^ l))).dhs(rj.UPXqT);
        this.UTgfC.Vf(() -> {
            boolean bl;
            block2: {
                block3: {
                    long l = IhJAo ^ 0x16F643CE1126L;
                    boolean bl2 = ca.OX();
                    try {
                        bl = this.syfIm.WF();
                        if (bl2) break block2;
                        if (bl) break block3;
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                    bl = true;
                    break block2;
                }
                bl = false;
            }
            return bl;
        });
        this.qVQHv.Vf(this.syfIm::WF);
        this.ENHuR.Vf(this.syfIm::WF);
        boolean bl2 = bl;
        try {
            this.GPuoI.Vf(this.syfIm::WF);
            if (!bl2) {
                iS.bwK("bczaub");
            }
        }
        catch (MatchException matchException) {
            throw ci.Qx(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ci.IhJAo = gb.aYR(4432288059598134742L, 1953894325070625443L, MethodHandles.lookup().lookupClass()).a(267042737944234L);
                ci.HJhZk = new HashMap<K, V>(13);
                var0 = ci.IhJAo ^ 38972505750341L;
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
                var8_3 = new long[67];
                var5_4 = 0;
                var6_5 = "\u0080p\r\u00d5d\u00bb\u0018A\u00b6i\u00a4\u00c3@\u00e4\u001f\u008aL\u0094\u00f0\u001bW(\u001c\u00faOt\u0099\u00faLs\u00a3S\u00d2\u00802k\u00cd\u00aak\u0002H\u009e\b\u0090\u0083\u00a1 b\u00c0dk\u009bH\u0083\u00e9\u00aa\u0017\u00a8j\u000f\u0016\u00bd\u00d7\u00c6\u00b4\u0016G\t\u001fh\u00eb\u001c`\u0001\u001ay\u008d\u00a0\u0083\u00cb(\u00f8O\u00e9\u00b2\u0013-f,\u00e9\u00e0\u0081\u00d8\u0091\u0092\u009bY.]\u008a{\u007fs\u0016\u00ab\u0010\u00c3\u000fV\u00bb\u00e7\u0093\u0098%N\u009d\u0081\u00dd\u001b\u0085\u00e2\u00a7\u0092\u00ee\u00af\u00e6]\u00fe|,0$\u00d2[\u00aa\u0094uv\u00f1\u00b4\u00c2\u00ef\u00b4\u0083B\u00f4\u0013M\u008dI\u00d5\u00f2\u00ecE\u00a4v\u0096\u0086\u009d0v\u00d5\u008c\u0010%\u0007Q' K\u00afo\u009e\u001c==V\u00e3\u00c7A3\u001en\u007f]\u0016\u00c5\u00f2\u008e\f\u0096\u00d9\u00c5\u00b2\u00d9\u00e9{\u00a9\u00bd'\u00fblAqk\u0007gt\u0093\u00ff\u00dc\u00d7O\u00bd\u00d2\u00d8v\u0016\u00b4\u008bP\u00c0wM\u0006w\u00a4\u00fbp\u00c2\u00bc\u00b4\u00d6\u00e1\u00cf\u00ab\u00e4g#\u008dh\u0090\u00c1v\u00ff\u00d4\u00c6\u00d9q\u00a0s\u00ff\u0097\u0091\u00d2\u008b`]\u00f2\u00d8\u00f1n\u00af\u0002\u0007N\u00e3\u00ca1 \u00e7\u00d13)\u009eU\u0006\u0000B\u00d6\u00d5\u00bbk\u00fa&P\u00eb\u0012\u00af\u00e7\u00960'\u0081\u00e4\u0080I\u00fdN\u0013\u0003\u008c\u00b3\u0091Kdi\u009e/\u00e3\u00f8e\u0007Zc\u00e6\u0086\u00ec\u00b3BO}\u00c3\u0092\u00dao\u0081\u00bf\u008a\u00c8\u009d\u0012\u00fd\u00b5\u00fc\u00ediF\u0000\u0096\u0097\u000f\u00c3u\u00a5&\u0086u\u00cdic\u001bKpb4\u009b\u0015\u00a0\u00aan\u00ca\u008c\u00c5Y[i\u00dcp\u0091\u0084\u0091\u00c1q\u00cc\u00b9?\u001f\u00ff|\u00c8\u00d3Q\u0013\u00a6[\u00bai\u00b6\u00fb\u00de\u000f\u009bi\u00a5&\u008d#\u0085\u00c8*\u00e8\u00e2\u0003M\u00bd\u00d0m\u0083\u00dd\u00bc\u000f\u00e2\u001d\f\n\u00c25\u00fc\u00ab\u0019<\u00b51>\u00c5\u00e4\u001e=\u00db\u0015\u00a8%\u00ba\u00fa\u00aa\u0004H'\n\u0081!\u00b0R\u00b8\u00bc\u00d1\u00f2bN\u0000\u000f\u00e5:\\\u00e9\u00f9\u009d\u00c0\u0006\u00ed.\u009c\u00ee\u000f\u00ea\u00f9\u00b1\u00c6\td\u00c8EO\u0019)(\u00f0\u00e1\u00ba\u001b\u00f7\u00b7\u00caxO\u0094\u0099]\u00b0\u00bc\u00a6\u00de\u00cc\u0017)\u0019Xl\u0097pr\u00e2\u00f9\u00f7s\u00e07$\u00a3U\u00c4\u00ac\u00b0?\u00fa%\u00e2\u00a2I";
                var7_6 = "\u0080p\r\u00d5d\u00bb\u0018A\u00b6i\u00a4\u00c3@\u00e4\u001f\u008aL\u0094\u00f0\u001bW(\u001c\u00faOt\u0099\u00faLs\u00a3S\u00d2\u00802k\u00cd\u00aak\u0002H\u009e\b\u0090\u0083\u00a1 b\u00c0dk\u009bH\u0083\u00e9\u00aa\u0017\u00a8j\u000f\u0016\u00bd\u00d7\u00c6\u00b4\u0016G\t\u001fh\u00eb\u001c`\u0001\u001ay\u008d\u00a0\u0083\u00cb(\u00f8O\u00e9\u00b2\u0013-f,\u00e9\u00e0\u0081\u00d8\u0091\u0092\u009bY.]\u008a{\u007fs\u0016\u00ab\u0010\u00c3\u000fV\u00bb\u00e7\u0093\u0098%N\u009d\u0081\u00dd\u001b\u0085\u00e2\u00a7\u0092\u00ee\u00af\u00e6]\u00fe|,0$\u00d2[\u00aa\u0094uv\u00f1\u00b4\u00c2\u00ef\u00b4\u0083B\u00f4\u0013M\u008dI\u00d5\u00f2\u00ecE\u00a4v\u0096\u0086\u009d0v\u00d5\u008c\u0010%\u0007Q' K\u00afo\u009e\u001c==V\u00e3\u00c7A3\u001en\u007f]\u0016\u00c5\u00f2\u008e\f\u0096\u00d9\u00c5\u00b2\u00d9\u00e9{\u00a9\u00bd'\u00fblAqk\u0007gt\u0093\u00ff\u00dc\u00d7O\u00bd\u00d2\u00d8v\u0016\u00b4\u008bP\u00c0wM\u0006w\u00a4\u00fbp\u00c2\u00bc\u00b4\u00d6\u00e1\u00cf\u00ab\u00e4g#\u008dh\u0090\u00c1v\u00ff\u00d4\u00c6\u00d9q\u00a0s\u00ff\u0097\u0091\u00d2\u008b`]\u00f2\u00d8\u00f1n\u00af\u0002\u0007N\u00e3\u00ca1 \u00e7\u00d13)\u009eU\u0006\u0000B\u00d6\u00d5\u00bbk\u00fa&P\u00eb\u0012\u00af\u00e7\u00960'\u0081\u00e4\u0080I\u00fdN\u0013\u0003\u008c\u00b3\u0091Kdi\u009e/\u00e3\u00f8e\u0007Zc\u00e6\u0086\u00ec\u00b3BO}\u00c3\u0092\u00dao\u0081\u00bf\u008a\u00c8\u009d\u0012\u00fd\u00b5\u00fc\u00ediF\u0000\u0096\u0097\u000f\u00c3u\u00a5&\u0086u\u00cdic\u001bKpb4\u009b\u0015\u00a0\u00aan\u00ca\u008c\u00c5Y[i\u00dcp\u0091\u0084\u0091\u00c1q\u00cc\u00b9?\u001f\u00ff|\u00c8\u00d3Q\u0013\u00a6[\u00bai\u00b6\u00fb\u00de\u000f\u009bi\u00a5&\u008d#\u0085\u00c8*\u00e8\u00e2\u0003M\u00bd\u00d0m\u0083\u00dd\u00bc\u000f\u00e2\u001d\f\n\u00c25\u00fc\u00ab\u0019<\u00b51>\u00c5\u00e4\u001e=\u00db\u0015\u00a8%\u00ba\u00fa\u00aa\u0004H'\n\u0081!\u00b0R\u00b8\u00bc\u00d1\u00f2bN\u0000\u000f\u00e5:\\\u00e9\u00f9\u009d\u00c0\u0006\u00ed.\u009c\u00ee\u000f\u00ea\u00f9\u00b1\u00c6\td\u00c8EO\u0019)(\u00f0\u00e1\u00ba\u001b\u00f7\u00b7\u00caxO\u0094\u0099]\u00b0\u00bc\u00a6\u00de\u00cc\u0017)\u0019Xl\u0097pr\u00e2\u00f9\u00f7s\u00e07$\u00a3U\u00c4\u00ac\u00b0?\u00fa%\u00e2\u00a2I".length();
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
                    var6_5 = "u$\u00f2Mr\u0015\u00f5\u00cd\u0092]\u00e3\u00abp\u00d6`\u00fb";
                    var7_6 = "u$\u00f2Mr\u0015\u00f5\u00cd\u0092]\u00e3\u00abp\u00d6`\u00fb".length();
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
        ci.TlWnl = var8_3;
        ci.FeBkO = new Integer[67];
    }

    /*
     * Exception decompiling
     */
    @Override
    protected void NV(lC var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 12[SWITCH]
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
     * Exception decompiling
     */
    @Override
    public void LX(lC var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 6[SWITCH]
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

    @Override
    public boolean Om() {
        boolean bl;
        block13: {
            boolean bl2;
            block12: {
                boolean bl3;
                block11: {
                    long l = IhJAo ^ 0x63EEAF3D5A20L;
                    bl2 = ca.OX();
                    try {
                        bl3 = rD.dlmvG.field_1755 instanceof class_408;
                        if (bl2) break block11;
                        if (!bl3) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                    bl3 = true;
                }
                return bl3;
            }
            for (gg gg2 : rD.dlJ().aZz().values()) {
                block15: {
                    boolean bl4;
                    block16: {
                        block14: {
                            try {
                                try {
                                    try {
                                        bl = gg2.bai();
                                        if (bl2) break block13;
                                        if (bl2) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw ci.Qx(matchException);
                                    }
                                    if (bl) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw ci.Qx(matchException);
                                }
                                bl4 = gg2.bag();
                            }
                            catch (MatchException matchException) {
                                throw ci.Qx(matchException);
                            }
                        }
                        try {
                            if (bl2) break block16;
                            if (!bl4) break block15;
                        }
                        catch (MatchException matchException) {
                            throw ci.Qx(matchException);
                        }
                        bl4 = true;
                    }
                    return bl4;
                }
                if (!bl2) continue;
            }
            bl = false;
        }
        return bl;
    }

    private static CallSite QA(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ci" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private List<gg> Qt(lq lq2, boolean bl) {
        return rD.dlJ().aZz().values().stream().filter(gg2 -> {
            boolean bl;
            block8: {
                block7: {
                    boolean bl2;
                    block6: {
                        long l = IhJAo ^ 0x2869E5821AA6L;
                        bl2 = ca.OX();
                        try {
                            try {
                                bl = gg2.bai();
                                if (bl2) break block6;
                                if (bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ci.Qx(matchException);
                            }
                            float f = gg2.bam().dhj() - 0.0f;
                            bl = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw ci.Qx(matchException);
                        }
                    }
                    try {
                        if (bl2) break block8;
                        if (!bl) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                    bl = true;
                    break block8;
                }
                bl = false;
            }
            return bl;
        }).sorted(Comparator.comparingDouble(gg2 -> {
            double d;
            long l = IhJAo ^ 0x70CB0505B5DCL;
            float f = this.Qs(lq2, (gg)gg2);
            try {
                d = bl ? (double)f : (double)(-f);
            }
            catch (MatchException matchException) {
                throw ci.Qx(matchException);
            }
            return d;
        })).toList();
    }

    private static MatchException Qx(MatchException matchException) {
        return matchException;
    }

    private float Qs(lq lq2, gg gg2) {
        float f;
        float f2;
        block11: {
            int n;
            block12: {
                boolean bl;
                block10: {
                    float f3;
                    long l = IhJAo ^ 0x2797AEF2B6ACL;
                    f2 = lq2.cap(gg2.bad());
                    bl = ca.OX();
                    try {
                        f3 = this.wpjqC.WF() ? 0.0f : 11.0f;
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                    f = f3;
                    try {
                        try {
                            n = this.epVui.WF();
                            if (bl) break block10;
                            if (n == 0) break block11;
                        }
                        catch (MatchException matchException) {
                            throw ci.Qx(matchException);
                        }
                        n = gg2.baf().aZf();
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                }
                try {
                    try {
                        if (bl) break block12;
                        if (n != 0) break block11;
                    }
                    catch (MatchException matchException) {
                        throw ci.Qx(matchException);
                    }
                    n = gg2.baf().aZh();
                }
                catch (MatchException matchException) {
                    throw ci.Qx(matchException);
                }
            }
            String string = jb.byM(n);
            return f + f2 + 5.0f + 2.0f + 5.0f + lq2.cao(string) + 14.0f;
        }
        return f + f2 + 14.0f;
    }

    private static int Qy(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x518B;
        if (FeBkO[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = TlWnl[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HJhZk.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HJhZk.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ci", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ci.FeBkO[n2] = n3;
        }
        return FeBkO[n2];
    }

    private static int Qz(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ci.Qy(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ci.class, "Qz", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
