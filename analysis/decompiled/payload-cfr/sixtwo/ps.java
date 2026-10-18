/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_3532
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Locale;
import java.util.Map;
import java.util.WeakHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_3532;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cx;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jg;
import sixtwo.kW;
import sixtwo.kX;
import sixtwo.kd;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.la;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.pE;
import sixtwo.pM;
import sixtwo.pr;
import sixtwo.pt;
import sixtwo.py;
import sixtwo.rD;

public class ps
extends py
implements pE {
    private final cG YdMAz;
    private final cx yhAPl;
    private final cJ qSNJW;
    private final ct TFVHL;
    private final cu hxkaD;
    private final cu dvDHT;
    private final ct hyruU;
    private final cu jtfIJ;
    private final cu QYkdO;
    private final cC HSZnj;
    private final cC HWVIb;
    private final Map<class_1297, pt> xNjAY;
    private static final long sBiZg;
    private static final String[] icFkS;
    private static final String[] DEViU;
    private static final Map ppHRw;
    private static final long[] agHIE;
    private static final Integer[] lHgPv;
    private static final Map lOrqU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ps() {
        long l = sBiZg ^ 0x49916521535AL;
        super((String)((Object)ps.cPr("i", (int)27878, (long)(0xF1CE2E189D02FFFL ^ l))), (String)((Object)ps.cPr("i", (int)24677, (long)(0x6D5F2F4D8D6AA37EL ^ l))), 2.0);
        int[] nArray = new int[ps.cPu("n", (int)26646, (long)(0x259A61EE8118AFBEL ^ l))];
        nArray[0] = (int)ps.cPu("n", (int)28204, (long)(0x397BC3F22968A9AFL ^ l));
        nArray[1] = (int)ps.cPu("n", (int)2610, (long)(0x556E97A78F694D9FL ^ l));
        nArray[2] = (int)ps.cPu("n", (int)30302, (long)(0x6E770A40F047B1CCL ^ l));
        nArray[3] = (int)ps.cPu("n", (int)24359, (long)(0xB17C09618C118A3L ^ l));
        nArray[4] = (int)ps.cPu("n", (int)7497, (long)(0xC018D83171BDAEEL ^ l));
        nArray[5] = (int)ps.cPu("n", (int)12553, (long)(0x79B03473E9E4F697L ^ l));
        nArray[ps.cPu("n", (int)11752, (long)(0x1DF2D03AEED26A71L ^ l))] = (int)ps.cPu("n", (int)25408, (long)(0x6C6C94B5CD1D24F1L ^ l));
        nArray[ps.cPu("n", (int)5387, (long)(0x20B966D05EF35284L ^ l))] = (int)ps.cPu("n", (int)11398, (long)(0x3ED0D31442E2EB19L ^ l));
        this.YdMAz = new cG(this, mr.clS(nArray)).Uf(mG.hoGuU).Ue(rD.dlM().bjf()).Ug(true);
        int[] nArray2 = new int[ps.cPu("n", (int)18459, (long)(0x7B217F9452730F8DL ^ l))];
        nArray2[0] = (int)ps.cPu("n", (int)27516, (long)(0xB59D5B30CCEACC3L ^ l));
        nArray2[1] = (int)ps.cPu("n", (int)3932, (long)(0x790A96815C0C48FFL ^ l));
        nArray2[2] = (int)ps.cPu("n", (int)25266, (long)(0x333A67C9730AA533L ^ l));
        nArray2[3] = (int)ps.cPu("n", (int)8448, (long)(0xEDB310741D0E6AEL ^ l));
        nArray2[4] = (int)ps.cPu("n", (int)15154, (long)(0x1E46252553DCFCB9L ^ l));
        nArray2[5] = (int)ps.cPu("n", (int)22038, (long)(0x785D2CB482C71185L ^ l));
        nArray2[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)8322, (long)(0x3CCC35D4A8726702L ^ l));
        nArray2[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)15142, (long)(0x75D66133FEE8FC80L ^ l));
        nArray2[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
        nArray2[ps.cPu("n", (int)28562, (long)(0x2E9F55FAC032282CL ^ l))] = (int)ps.cPu("n", (int)29431, (long)(0x659FC6A56511B541L ^ l));
        this.yhAPl = new cx(this, mr.clS(nArray2)).TX(mG.QHTxQ.coa(120.0f)).TT(true);
        this.qSNJW = new cJ(this, mr.clS(new int[]{(int)ps.cPu("n", (int)5405, (long)(0x6E5B6FF056D5D2AFL ^ l)), (int)ps.cPu("n", (int)3932, (long)(0x790A96815C0C48FFL ^ l)), (int)ps.cPu("n", (int)26776, (long)(0x540C985D898D2F1EL ^ l)), (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l)), (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l))})).WE(true);
        int[] nArray3 = new int[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))];
        nArray3[0] = (int)ps.cPu("n", (int)6974, (long)(0x362E0E18DA2ADC85L ^ l));
        nArray3[1] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
        nArray3[2] = (int)ps.cPu("n", (int)22038, (long)(0x785D2CB482C71185L ^ l));
        nArray3[3] = (int)ps.cPu("n", (int)18038, (long)(0x6E6C5D89F7AB81BFL ^ l));
        nArray3[4] = (int)ps.cPu("n", (int)3932, (long)(0x790A96815C0C48FFL ^ l));
        nArray3[5] = (int)ps.cPu("n", (int)25259, (long)(0x63FFC9FA7108A518L ^ l));
        this.TFVHL = new ct(this, mr.clS(nArray3));
        int[] nArray4 = new int[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))];
        nArray4[0] = (int)ps.cPu("n", (int)25379, (long)(0x89A8462A75D249AL ^ l));
        nArray4[1] = (int)ps.cPu("n", (int)32216, (long)(0x7F4CE33B9BF03A51L ^ l));
        nArray4[2] = (int)ps.cPu("n", (int)16482, (long)(0x4473C8DB46AD87C3L ^ l));
        nArray4[3] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
        nArray4[4] = (int)ps.cPu("n", (int)3156, (long)(0x1A264347C0294B9EL ^ l));
        nArray4[5] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
        nArray4[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)25259, (long)(0x63FFC9FA7108A518L ^ l));
        nArray4[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        this.hxkaD = new cu(this.TFVHL, mr.clS(nArray4));
        int[] nArray5 = new int[ps.cPu("n", (int)23222, (long)(0x6B22129235D41D0EL ^ l))];
        nArray5[0] = (int)ps.cPu("n", (int)8086, (long)(0x6B67C03CBCEE5802L ^ l));
        nArray5[1] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        nArray5[2] = (int)ps.cPu("n", (int)22038, (long)(0x785D2CB482C71185L ^ l));
        nArray5[3] = (int)ps.cPu("n", (int)6352, (long)(0x79F92E0F1B00DF67L ^ l));
        nArray5[4] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        nArray5[5] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
        nArray5[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)25259, (long)(0x63FFC9FA7108A518L ^ l));
        nArray5[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)3932, (long)(0x790A96815C0C48FFL ^ l));
        nArray5[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))] = (int)ps.cPu("n", (int)15826, (long)(0x2BC59284687CFA77L ^ l));
        nArray5[ps.cPu("n", (int)29060, (long)(0x2843BF0F7066362EL ^ l))] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        this.dvDHT = new cu(this.TFVHL, mr.clS(nArray5));
        int[] nArray6 = new int[ps.cPu("n", (int)4142, (long)(0x2A1D8DE0554657B6L ^ l))];
        nArray6[0] = (int)ps.cPu("n", (int)2212, (long)(0xD2C83E4E176CF31L ^ l));
        nArray6[1] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
        nArray6[2] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
        nArray6[3] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
        nArray6[4] = (int)ps.cPu("n", (int)29431, (long)(0x659FC6A56511B541L ^ l));
        nArray6[5] = (int)ps.cPu("n", (int)30324, (long)(0x4C4FCB088BA6B1F3L ^ l));
        nArray6[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
        nArray6[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)15826, (long)(0x2BC59284687CFA77L ^ l));
        nArray6[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))] = (int)ps.cPu("n", (int)5771, (long)(0x588091F089C7D109L ^ l));
        nArray6[ps.cPu("n", (int)29060, (long)(0x2843BF0F7066362EL ^ l))] = (int)ps.cPu("n", (int)28474, (long)(0x57CA54CD9E1E288EL ^ l));
        nArray6[ps.cPu("n", (int)23222, (long)(0x6B22129235D41D0EL ^ l))] = (int)ps.cPu("n", (int)25259, (long)(0x63FFC9FA7108A518L ^ l));
        nArray6[ps.cPu("n", (int)968, (long)(0x5AAC27623E67C442L ^ l))] = (int)ps.cPu("n", (int)5670, (long)(0x4008D5F95C3D189L ^ l));
        nArray6[ps.cPu("n", (int)21613, (long)(0x1B468A39A36B93D1L ^ l))] = (int)ps.cPu("n", (int)3156, (long)(0x1A264347C0294B9EL ^ l));
        nArray6[ps.cPu("n", (int)17856, (long)(0x64FEA530E23E8248L ^ l))] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        this.hyruU = new ct(this, mr.clS(nArray6));
        int[] nArray7 = new int[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))];
        nArray7[0] = (int)ps.cPu("n", (int)16808, (long)(0x72FC2C1C3FDE0615L ^ l));
        nArray7[1] = (int)ps.cPu("n", (int)9232, (long)(0x56F0FB1F9F6063A0L ^ l));
        nArray7[2] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
        nArray7[3] = (int)ps.cPu("n", (int)3932, (long)(0x790A96815C0C48FFL ^ l));
        nArray7[4] = (int)ps.cPu("n", (int)22038, (long)(0x785D2CB482C71185L ^ l));
        nArray7[5] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        this.jtfIJ = new cu(this.hyruU, mr.clS(nArray7));
        int[] nArray8 = new int[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))];
        nArray8[0] = (int)ps.cPu("n", (int)16808, (long)(0x72FC2C1C3FDE0615L ^ l));
        nArray8[1] = (int)ps.cPu("n", (int)29657, (long)(0x5F35AA0BF604B445L ^ l));
        nArray8[2] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
        nArray8[3] = (int)ps.cPu("n", (int)30324, (long)(0x4C4FCB088BA6B1F3L ^ l));
        nArray8[4] = (int)ps.cPu("n", (int)22038, (long)(0x785D2CB482C71185L ^ l));
        nArray8[5] = (int)ps.cPu("n", (int)6352, (long)(0x79F92E0F1B00DF67L ^ l));
        nArray8[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)3156, (long)(0x1A264347C0294B9EL ^ l));
        nArray8[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
        this.QYkdO = new cu(this.hyruU, mr.clS(nArray8));
        int[] nArray9 = pr.cOX();
        try {
            int[] nArray10 = new int[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))];
            nArray10[0] = (int)ps.cPu("n", (int)9488, (long)(0x70BA2D9B995BE2B4L ^ l));
            nArray10[1] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
            nArray10[2] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
            nArray10[3] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
            nArray10[4] = (int)ps.cPu("n", (int)29431, (long)(0x659FC6A56511B541L ^ l));
            nArray10[5] = (int)ps.cPu("n", (int)30324, (long)(0x4C4FCB088BA6B1F3L ^ l));
            nArray10[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
            nArray10[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)15826, (long)(0x2BC59284687CFA77L ^ l));
            this.HSZnj = new cC(this, mr.clS(nArray10)).Vw(0.0).Vx(50.0).Vy(1.0).Vz("%").VA(10.0);
            int[] nArray11 = new int[ps.cPu("n", (int)27507, (long)(0x66A3812CFBAFACE4L ^ l))];
            nArray11[0] = (int)ps.cPu("n", (int)9488, (long)(0x70BA2D9B995BE2B4L ^ l));
            nArray11[1] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
            nArray11[2] = (int)ps.cPu("n", (int)19322, (long)(0x4C0C52A02E918CE1L ^ l));
            nArray11[3] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
            nArray11[4] = (int)ps.cPu("n", (int)29431, (long)(0x659FC6A56511B541L ^ l));
            nArray11[5] = (int)ps.cPu("n", (int)30324, (long)(0x4C4FCB088BA6B1F3L ^ l));
            nArray11[ps.cPu("n", (int)9932, (long)(0x29F11CEE4AD6140L ^ l))] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
            nArray11[ps.cPu("n", (int)349, (long)(0x42154EFC8BF946FDL ^ l))] = (int)ps.cPu("n", (int)15826, (long)(0x2BC59284687CFA77L ^ l));
            nArray11[ps.cPu("n", (int)30261, (long)(0x44199146149331B0L ^ l))] = (int)ps.cPu("n", (int)3120, (long)(0x1181FC10145E4BADL ^ l));
            nArray11[ps.cPu("n", (int)29060, (long)(0x2843BF0F7066362EL ^ l))] = (int)ps.cPu("n", (int)16808, (long)(0x72FC2C1C3FDE0615L ^ l));
            nArray11[ps.cPu("n", (int)23222, (long)(0x6B22129235D41D0EL ^ l))] = (int)ps.cPu("n", (int)22677, (long)(0x5FAD392FE7389F1BL ^ l));
            nArray11[ps.cPu("n", (int)10292, (long)(0x70F4FEFCCF3F6F9DL ^ l))] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
            nArray11[ps.cPu("n", (int)7203, (long)(0x59C01B31C7475BEFL ^ l))] = (int)ps.cPu("n", (int)9700, (long)(0xD39999FE9AF622CL ^ l));
            nArray11[ps.cPu("n", (int)24373, (long)(0x49AD03C8D3DE9897L ^ l))] = (int)ps.cPu("n", (int)25259, (long)(0x63FFC9FA7108A518L ^ l));
            nArray11[ps.cPu("n", (int)10990, (long)(0xC6FAAF95A986D63L ^ l))] = (int)ps.cPu("n", (int)29597, (long)(0x70A7558F65A7B428L ^ l));
            nArray11[ps.cPu("n", (int)11452, (long)(0x633F77DC8C036B77L ^ l))] = (int)ps.cPu("n", (int)22002, (long)(0x140B1B19A16A9248L ^ l));
            nArray11[ps.cPu("n", (int)24845, (long)(0x6CB5D678B5B0A697L ^ l))] = (int)ps.cPu("n", (int)16952, (long)(0x31DF6E920F060594L ^ l));
            nArray11[ps.cPu("n", (int)18298, (long)(0x1E4FFB0CB24200EAL ^ l))] = (int)ps.cPu("n", (int)4969, (long)(0x6461A34ED3C454F8L ^ l));
            nArray11[ps.cPu("n", (int)19615, (long)(0x202A2FD3799C8B34L ^ l))] = (int)ps.cPu("n", (int)4969, (long)(0x6461A34ED3C454F8L ^ l));
            this.HWVIb = new cC(this, mr.clS(nArray11)).Vw(20.0).Vy(1.0).Vx(100.0).Vz("%").VA(70.0);
            this.xNjAY = new WeakHashMap<class_1297, pt>();
            this.position(pM.DXMaR);
            this.TFVHL.Vf(this.qSNJW::WF);
            this.HWVIb.Vf(this.QYkdO::SZ);
            if (nArray9 != null) {
                iS.bwK("ji2nd");
            }
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    ps.sBiZg = gb.aYR(-7864155151665324352L, 4348451550296227746L, MethodHandles.lookup().lookupClass()).a(56669524836135L);
                    ps.ppHRw = new HashMap<K, V>(13);
                    var11 = ps.sBiZg ^ 19301603611271L;
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
                    var17_5 = "\u00d4\u0014\u00b2\u0011\u00d2\u00ed\u00e4\u0099\u0003\u0082}\u00ccR\u0014\u00f5.\t\u0018\u00beg\u00f1*\u00cdf\u00fe\u00a0\u00ee=#+8\u00fe\u0010yu)`P\u009f\u00fa\u00ed\u0005\u00c8\u00eeo'\\\u0006\b\u0018\u0097\u00a8\u00bb\u009d\u0084\u008du\u008a<r\u00da\u0017\u00cd\u00e2\u00e0E\u00a9\u00ff\u00adsu\u00a3\u0097\u00eb";
                    var19_6 = "\u00d4\u0014\u00b2\u0011\u00d2\u00ed\u00e4\u0099\u0003\u0082}\u00ccR\u0014\u00f5.\t\u0018\u00beg\u00f1*\u00cdf\u00fe\u00a0\u00ee=#+8\u00fe\u0010yu)`P\u009f\u00fa\u00ed\u0005\u00c8\u00eeo'\\\u0006\b\u0018\u0097\u00a8\u00bb\u009d\u0084\u008du\u008a<r\u00da\u0017\u00cd\u00e2\u00e0E\u00a9\u00ff\u00adsu\u00a3\u0097\u00eb".length();
                    var16_7 = 32;
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
                        var20_3[var18_4++] = ps.cPo(var21_9).intern();
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
                ps.icFkS = var20_3;
                ps.DEViU = new String[3];
                ps.lOrqU = new HashMap<K, V>(13);
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
                var6_12 = new long[69];
                var3_13 = 0;
                var4_14 = ",\u00f89\u00e3\u00d3\u00e8\u00fbA\u00ae\u00b14]\u001a\u0019cW^\u008a\u00ca\u00facz*\u00b3rm\b\u00e9\u00ab\u00f0\u00b4\u0082l\u00ce\u0096\u00baR\u00d3%6wLwc&Ny@}\u0011\u00d5oX\u0005\u0007\u0097L\u00c5xQa\u0094\u0012\u00147\u009b\u0013v\u008e6Zs\u00ed\u009f\u00f6\u0004\u00b4\u008e8\u00d6\u00fc<\u00f9b\u00dc\u00bc\u0006P\u00fa\u00d9\u00c3\u00dc\u008e\u0002\u008d\u00e0\u0097\n\u000b\u00ed\u00acw7lB\u00dd\u00c54\u0000\u0098H\u00b9e\u0005\u008d\u00bd\u00acba\u0088\u00af\u0088,\u00cf\u00b7\u00d4n\u00caQ;2\u00c2\u00ab.Rm\u00d2\u008e\u00ee\u00ce\u009c\u00d0\u00f6\u00f1\u00f10k\u00cdP\"\u0011v\u00b3\u00f1\u00a7n\u00e2\nV\u0011R\u00f6\u00b6\u0016\u0088\u0082\u00da\u00c6q\u0080_\u0000\u0088i\u00daq\u00d9\u0011(\u0007\u0017\u008al\u00c57\u0002G\u00f7\u00b8\u00a0\u00a6\u0082\u000e\n\u00a6\u008fDeR\u00acb\u00e1\u00d9\u00ea\u00c7\u00b1\u0086\u0001l.\u00feI\u00ee\u00db\u0095\u00f3\u00c7\u00f3@0\u00e73\u00c9\u00ce\u00022\r@L\f\u00ec\u00ae\u0006H\u0013\u008b@a\u00a0\u0086 kA\u00c9$\u0004~%e,\u00fb\u001aZ\u00e4MR\u00abh\u000e\u0099\u00e3I\u00c4m\u008e%[fo+H\u00c4\u00ed\u009bJ\u00bb\u00cd\u0087\u0082\u00e7Q\u00be\u00b9\u00a7Y\u0004\u00a3Q\u0095Q\u00d1\tC\u00af\u00a39\u001b\u00e0\u00118\u00c4P\u00d8\u00c7\u00e7\u00ad\u0094\u0005\u00b3>\u00a5\u00b4\u00fb\u00fd}\u00dch\u0010\u0088v1\u0090!\u00b9%X\u00b5\u0000\u00e8C\u00a1X\u00d1q\u0019\u0090W\u0013:}\u0007\u0007\u009a^k\u0084#\u0003!\u0003\u00fa\u00a8\u00cddI^\u00de\u009e\u00a7'u\u008b\u0088\u00bdm\u00d07L\u00bd?\u00f5g\n\u00bfP\u00ef\u00c8c\u0012\u00e2\u00d5\u00b1R\u0019\u00a4dD\u0098\u00a7\rG\u009bE}\u00f6\u00bc\u001a\u00bf\u00124\u0082\u0002E\u00d5'mT\u00d5j\u00b2\u00ec\u0015G|\u008fun[\u00dbB\u0001\u00ce;\u00f45\u00be\u000b\u009f:\u00dcs\u00aa\u00ee\u00ce\u00f5\u00ca\u00e4]\u00bd$-\u00del\u00c3\u00d1\u00fa\u009a$\u00e2\u00f4\u0087m\u00acf\u00abP\u00ca\u00e2\u00aa\u0015\u00fe\u0089\u0081-^\u00eb\u00b2\u00cc\u00c2/#;lA\u001d$\u00aa\u00c9\u00d9\u00dcn\u00c2\u00fc\u00de\u00f4I\u00e0\u00d5\u007f\u00c1\u0010\u0013\u00d8\u00b6\u00ae\u0099\u00b2R\u0019\u00dd\u0098\u00cf\u00b2\u0004F\u0000\u0084\u00a2\r\u00e1\u00f1D\u00f1!\u00e2-t\u00ab\u00b1\u00fbpAg\u00cc[\u0085+\u00af\u00026p\u00f4D\u0015\u0091\u00d1";
                var5_15 = ",\u00f89\u00e3\u00d3\u00e8\u00fbA\u00ae\u00b14]\u001a\u0019cW^\u008a\u00ca\u00facz*\u00b3rm\b\u00e9\u00ab\u00f0\u00b4\u0082l\u00ce\u0096\u00baR\u00d3%6wLwc&Ny@}\u0011\u00d5oX\u0005\u0007\u0097L\u00c5xQa\u0094\u0012\u00147\u009b\u0013v\u008e6Zs\u00ed\u009f\u00f6\u0004\u00b4\u008e8\u00d6\u00fc<\u00f9b\u00dc\u00bc\u0006P\u00fa\u00d9\u00c3\u00dc\u008e\u0002\u008d\u00e0\u0097\n\u000b\u00ed\u00acw7lB\u00dd\u00c54\u0000\u0098H\u00b9e\u0005\u008d\u00bd\u00acba\u0088\u00af\u0088,\u00cf\u00b7\u00d4n\u00caQ;2\u00c2\u00ab.Rm\u00d2\u008e\u00ee\u00ce\u009c\u00d0\u00f6\u00f1\u00f10k\u00cdP\"\u0011v\u00b3\u00f1\u00a7n\u00e2\nV\u0011R\u00f6\u00b6\u0016\u0088\u0082\u00da\u00c6q\u0080_\u0000\u0088i\u00daq\u00d9\u0011(\u0007\u0017\u008al\u00c57\u0002G\u00f7\u00b8\u00a0\u00a6\u0082\u000e\n\u00a6\u008fDeR\u00acb\u00e1\u00d9\u00ea\u00c7\u00b1\u0086\u0001l.\u00feI\u00ee\u00db\u0095\u00f3\u00c7\u00f3@0\u00e73\u00c9\u00ce\u00022\r@L\f\u00ec\u00ae\u0006H\u0013\u008b@a\u00a0\u0086 kA\u00c9$\u0004~%e,\u00fb\u001aZ\u00e4MR\u00abh\u000e\u0099\u00e3I\u00c4m\u008e%[fo+H\u00c4\u00ed\u009bJ\u00bb\u00cd\u0087\u0082\u00e7Q\u00be\u00b9\u00a7Y\u0004\u00a3Q\u0095Q\u00d1\tC\u00af\u00a39\u001b\u00e0\u00118\u00c4P\u00d8\u00c7\u00e7\u00ad\u0094\u0005\u00b3>\u00a5\u00b4\u00fb\u00fd}\u00dch\u0010\u0088v1\u0090!\u00b9%X\u00b5\u0000\u00e8C\u00a1X\u00d1q\u0019\u0090W\u0013:}\u0007\u0007\u009a^k\u0084#\u0003!\u0003\u00fa\u00a8\u00cddI^\u00de\u009e\u00a7'u\u008b\u0088\u00bdm\u00d07L\u00bd?\u00f5g\n\u00bfP\u00ef\u00c8c\u0012\u00e2\u00d5\u00b1R\u0019\u00a4dD\u0098\u00a7\rG\u009bE}\u00f6\u00bc\u001a\u00bf\u00124\u0082\u0002E\u00d5'mT\u00d5j\u00b2\u00ec\u0015G|\u008fun[\u00dbB\u0001\u00ce;\u00f45\u00be\u000b\u009f:\u00dcs\u00aa\u00ee\u00ce\u00f5\u00ca\u00e4]\u00bd$-\u00del\u00c3\u00d1\u00fa\u009a$\u00e2\u00f4\u0087m\u00acf\u00abP\u00ca\u00e2\u00aa\u0015\u00fe\u0089\u0081-^\u00eb\u00b2\u00cc\u00c2/#;lA\u001d$\u00aa\u00c9\u00d9\u00dcn\u00c2\u00fc\u00de\u00f4I\u00e0\u00d5\u007f\u00c1\u0010\u0013\u00d8\u00b6\u00ae\u0099\u00b2R\u0019\u00dd\u0098\u00cf\u00b2\u0004F\u0000\u0084\u00a2\r\u00e1\u00f1D\u00f1!\u00e2-t\u00ab\u00b1\u00fbpAg\u00cc[\u0085+\u00af\u00026p\u00f4D\u0015\u0091\u00d1".length();
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
                    var4_14 = "0@\u0001\u00a8:P\u00e4\u00f4Q\u0095\u00ca_\"u\u0099;";
                    var5_15 = "0@\u0001\u00a8:P\u00e4\u00f4Q\u0095\u00ca_\"u\u0099;".length();
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
        ps.agHIE = var6_12;
        ps.lHgPv = new Integer[69];
    }

    @Override
    public float thickness(lC lC2, lc lc2, class_1297 class_12972, boolean bl) {
        return 2.5f * this.cQJ(lc2, bl);
    }

    private pr cOZ(class_1297 class_12973, boolean bl, pr pr2) {
        Object object;
        block7: {
            block8: {
                long l = sBiZg ^ 0xCA5704123DFL;
                int[] nArray = pr.cOX();
                try {
                    block6: {
                        try {
                            try {
                                if (bl) break block6;
                                object = class_12973;
                                if (nArray != null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ps.cPn(matchException);
                            }
                            if (object != null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ps.cPn(matchException);
                        }
                    }
                    return pr2;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            object = this.xNjAY.computeIfAbsent(class_12973, class_12972 -> new pt(pr2));
        }
        pt pt2 = (pt)object;
        return pt2.cPv(pr2);
    }

    private void cPi(lC lC2, lc lc2, pr pr2, boolean bl, float f2, float f3) {
        float f4;
        float f5;
        mG mG2;
        lq lq2;
        String string;
        block3: {
            float f6;
            float f7;
            float f8;
            float f9;
            float f10;
            block2: {
                long l = sBiZg ^ 0x6B16FEC7E16L;
                string = this.cPk(pr2);
                lq2 = lE.SVnNc.bYM(this.cQI(5.0f, f2));
                mG2 = mG.hoGuU.cob(f3);
                f10 = lq2.cao(string);
                int[] nArray = pr.cOX();
                f9 = lq2.cat();
                f8 = pr2.cOV();
                f7 = this.cQI(1.5f, f2);
                if (!bl) break block2;
                f6 = lc2.bXA() - lc2.bXI() * f8;
                f5 = lc2.bXF() + (lc2.bXH() - f10) * 0.5f;
                f4 = f6 - f9 - f7;
                if (nArray == null) break block3;
            }
            f6 = lc2.bXF() + lc2.bXH() * f8;
            f5 = this.cPj(f6, f10, lc2.bXF(), lc2.bXz());
            f4 = lc2.bXG() - f9 - f7;
        }
        lC2.cez(lq2, string, f5, f4, mG2);
    }

    private String cPk(pr pr2) {
        ps ps2;
        block4: {
            block5: {
                long l = sBiZg ^ 0x7D4C92CFDBEL;
                int[] nArray = pr.cOX();
                try {
                    try {
                        ps2 = this;
                        if (nArray != null) break block4;
                        if (!ps2.dvDHT.SZ()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    return Math.round(pr2.cOU()) + "%";
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            ps2 = this;
        }
        return ps2.cPl(pr2.cOS());
    }

    private float cPh() {
        return this.HWVIb.VB() / 10.0f;
    }

    @Override
    public void drawBar(lC lC2, lc lc2, lc lc3, class_1297 class_12972, boolean bl) {
        block16: {
            ps ps2;
            float f2;
            float f3;
            float f4;
            pr pr2;
            block15: {
                int[] nArray;
                block18: {
                    float f5;
                    float f6;
                    block17: {
                        float f7;
                        block13: {
                            block14: {
                                long l = sBiZg ^ 0x34DFBFBF2211L;
                                pr2 = this.cOZ(class_12972, bl, this.cOY(class_12972, bl));
                                f6 = pr2.cOV();
                                f4 = this.cQM(bl);
                                nArray = pr.cOX();
                                f3 = this.cQJ(lc3, bl);
                                try {
                                    float f8 = lc2.bXI() - lc2.bXH();
                                    f7 = f8 == 0.0f ? 0 : (f8 > 0.0f ? 1 : -1);
                                    if (nArray != null) break block13;
                                    if (f7 <= 0) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw ps.cPn(matchException);
                                }
                                f7 = 1.0f;
                                break block13;
                            }
                            f7 = 0.0f;
                        }
                        f2 = f7;
                        this.cPa(lC2, lc2, f4);
                        if (f2 == false) break block17;
                        f5 = lc2.bXI() * f6;
                        this.cPb(lC2, lc2.bXF(), lc2.bXA() - f5, lc2.bXH(), f5, true, f6, f4);
                        if (nArray == null) break block18;
                    }
                    f5 = lc2.bXH() * f6;
                    this.cPb(lC2, lc2.bXF(), lc2.bXG(), f5, lc2.bXI(), false, f6, f4);
                }
                try {
                    try {
                        ps2 = this;
                        if (nArray != null) break block15;
                        if (!ps2.qSNJW.WF()) break block16;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    ps2 = this;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            ps2.cPi(lC2, lc2, pr2, (boolean)f2, f3, f4);
        }
        try {
            if (iS.bwL() == null) {
                pr.cOW(new int[3]);
            }
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
    }

    private float cPj(float f2, float f3, float f4, float f5) {
        float f6;
        float f7;
        float f8;
        block4: {
            block5: {
                long l = sBiZg ^ 0x4AA2D3A0CCL;
                f8 = f5 - f3;
                int[] nArray = pr.cOX();
                try {
                    try {
                        f7 = f8;
                        f6 = f4;
                        if (nArray != null) break block4;
                        if (!(f7 < f6)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    return f4 + (f5 - f4 - f3) * 0.5f;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            f7 = f2 - f3 * 0.5f;
            f6 = f4;
        }
        return class_3532.method_15363((float)f7, (float)f6, (float)f8);
    }

    private static Object cPq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ps.cPp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private void cPe(lC lC2, lc lc2, la la2) {
        lC2.ccT(this.cPf(), lc2).bOu(this.cPg(lc2)).bOE(this.cPh()).bOw(la2).bOX();
    }

    private static int cPt(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ps.cPs(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private void cPd(lC lC2, lc lc2, mG mG2) {
        lC2.ccT(this.cPf(), lc2).bOu(this.cPg(lc2)).bOE(this.cPh()).bOv(mG2).bOX();
    }

    private mG cPc(mG mG2, mG mG3, float f2) {
        return mG2.coc(mG3, class_3532.method_15363((float)f2, (float)0.0f, (float)1.0f));
    }

    private kd cPf() {
        kd kd2;
        long l = sBiZg ^ 0x3BE9AD7694A4L;
        try {
            kd2 = this.jtfIJ.SZ() ? kd.AhlXN : kd.sQVlR;
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
        return kd2;
    }

    private ld cPg(lc lc2) {
        float f2 = Math.max(0.0f, Math.min(lc2.bXH(), lc2.bXI()) * 0.5f);
        return ld.all(f2 * this.HSZnj.VB() / 100.0f);
    }

    private static CallSite cPr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ps" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private pr cOY(class_1297 class_12972, boolean bl) {
        class_1297 class_12973;
        int[] nArray;
        block9: {
            boolean bl2;
            block7: {
                block8: {
                    long l = sBiZg ^ 0x65C38A844F24L;
                    nArray = pr.cOX();
                    try {
                        bl2 = bl;
                        if (nArray != null) break block7;
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    float f2 = 15.6f;
                    float f3 = 20.0f;
                    float f4 = f2 / f3 * 100.0f;
                    return new pr(f2, f3, f4);
                }
                try {
                    class_12973 = class_12972;
                    if (nArray != null) break block9;
                    bl2 = class_12973 instanceof class_1309;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            if (!bl2) return new pr(0.0f, 1.0f, 0.0f);
            class_12973 = class_12972;
        }
        class_1309 class_13092 = (class_1309)class_12973;
        try {
            if (nArray != null) {
                return new pr(0.0f, 1.0f, 0.0f);
            }
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
        float f5 = Math.max(1.0f, class_13092.method_6063() + class_13092.method_6067());
        float f6 = class_3532.method_15363((float)(class_13092.method_6032() + class_13092.method_6067()), (float)0.0f, (float)f5);
        float f7 = jg.bBv(class_13092, f6);
        return new pr(f6, f5, f7);
    }

    private void cPb(lC lC2, float f2, float f3, float f4, float f5, boolean bl, float f6, float f7) {
        la la2;
        float f8;
        float f9;
        boolean bl2;
        mG mG2;
        mG mG3;
        block18: {
            block19: {
                int[] nArray;
                block20: {
                    block17: {
                        float f10;
                        block16: {
                            long l = sBiZg ^ 0x491B44D50871L;
                            nArray = pr.cOX();
                            try {
                                try {
                                    float f11 = f4 - 0.0f;
                                    f10 = f11 == 0.0f ? 0 : (f11 < 0.0f ? -1 : 1);
                                    if (nArray != null) break block16;
                                    if (f10 <= 0) break block17;
                                }
                                catch (MatchException matchException) {
                                    throw ps.cPn(matchException);
                                }
                                float f12 = f5 - 0.0f;
                                f10 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw ps.cPn(matchException);
                            }
                        }
                        if (f10 > 0) break block20;
                    }
                    return;
                }
                mG3 = this.YdMAz.Wg().cob(f7);
                mG2 = this.YdMAz.Wi().cob(f7);
                try {
                    try {
                        bl2 = this.YdMAz.Wj();
                        if (nArray != null) break block18;
                        if (bl2) break block19;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    this.cPd(lC2, new lc(f2, f3, f4, f5), this.YdMAz.Wf().cob(f7));
                    return;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            bl2 = bl;
        }
        try {
            f9 = bl2 ? 1.0f - f6 : 0.0f;
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
        float f13 = f9;
        try {
            f8 = bl ? 1.0f : f6;
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
        float f14 = f8;
        mG mG4 = this.cPc(mG3, mG2, f13);
        mG mG5 = this.cPc(mG3, mG2, f14);
        try {
            la2 = bl ? new kW(mG4, mG5) : new kX(mG4, mG5);
        }
        catch (MatchException matchException) {
            throw ps.cPn(matchException);
        }
        la la3 = la2;
        this.cPe(lC2, new lc(f2, f3, f4, f5), la3);
    }

    private String cPl(float f2) {
        long l;
        block5: {
            int n;
            block4: {
                l = sBiZg ^ 0x159733571842L;
                float f3 = Math.round(f2);
                int[] nArray = pr.cOX();
                try {
                    try {
                        float f4 = Math.abs(f2 - f3) - 0.05f;
                        n = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                        if (nArray != null) break block4;
                        if (n >= 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    n = (int)f3;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            return String.valueOf(n);
        }
        return String.format(Locale.US, (String)((Object)ps.cPr("i", (int)31604, (long)(0x2F9CAF6074397374L ^ l))), Float.valueOf(f2));
    }

    private static String cPo(byte[] byArray) {
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

    private static String cPp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x284;
        if (DEViU[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])ppHRw.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ppHRw.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ps", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = icFkS[n2].getBytes("ISO-8859-1");
            ps.DEViU[n2] = ps.cPo(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DEViU[n2];
    }

    private static int cPs(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x615;
        if (lHgPv[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = agHIE[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])lOrqU.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    lOrqU.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ps", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ps.lHgPv[n2] = n3;
        }
        return lHgPv[n2];
    }

    private void cPa(lC lC2, lc lc2, float f2) {
        ps ps2;
        block4: {
            block5: {
                long l = sBiZg ^ 0x549B7B53B481L;
                int[] nArray = pr.cOX();
                try {
                    try {
                        ps2 = this;
                        if (nArray != null) break block4;
                        if (ps2.yhAPl.TR()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ps.cPn(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw ps.cPn(matchException);
                }
            }
            ps2 = this;
        }
        ps2.cPd(lC2, lc2, this.yhAPl.Wf().cob(f2));
    }

    private static CallSite cPu(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ps" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException cPn(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ps.class, "cPq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ps.class, "cPt", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
