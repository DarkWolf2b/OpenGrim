/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_437
 *  net.minecraft.class_465
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_437;
import net.minecraft.class_465;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.dh;
import sixtwo.do$sG;
import sixtwo.gH;
import sixtwo.gJ;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class do
extends gg
implements lG {
    private final cF LHfSj;
    private final cC ylItw;
    private final cC UCwZL;
    private final cG HnmDa;
    private final cG OTssl;
    private final List<do$sG> Gfvqi;
    private float YXgYB;
    private final rk lgSYH;
    private static final long LNOpt;
    private static final String eLTLf;
    private static final long[] kSkhp;
    private static final Integer[] YQLde;
    private static final Map GjXic;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public do() {
        long l = LNOpt ^ 0x2D57D4D21ECAL;
        super(gf.aZL((int)do.ahq("c", (int)22666, (long)(0x3234CB0A8D91F168L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[do.ahq("c", (int)16539, (long)(0x1D2DA9516EB46961L ^ l))];
        nArray[0] = (int)do.ahq("c", (int)25228, (long)(0x752907D32769CB6FL ^ l));
        nArray[1] = (int)do.ahq("c", (int)14677, (long)(0x3506532597EA10ABL ^ l));
        nArray[2] = (int)do.ahq("c", (int)5979, (long)(0x636A9759B6803EB1L ^ l));
        nArray[3] = (int)do.ahq("c", (int)22941, (long)(0x566C1E3D7B75F043L ^ l));
        nArray[4] = (int)do.ahq("c", (int)29815, (long)(0x2BF2922E5B7DDD98L ^ l));
        nArray[5] = (int)do.ahq("c", (int)20671, (long)(0x7989E7050374F94CL ^ l));
        nArray[do.ahq("c", (int)30231, (long)(0x1EF386D043355FFCL ^ l))] = (int)do.ahq("c", (int)19087, (long)(0x7FF0317CA9AEE368L ^ l));
        nArray[do.ahq("c", (int)6776, (long)(0x7522E3B6E2C5B390L ^ l))] = (int)do.ahq("c", (int)18817, (long)(0x1EB9713A063FE061L ^ l));
        this.LHfSj = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        this.ylItw = new cC(this, mr.clS(new int[]{(int)do.ahq("c", (int)20413, (long)(0x1AB895C217D3E64CL ^ l)), (int)do.ahq("c", (int)20671, (long)(0x7989E7050374F94CL ^ l)), (int)do.ahq("c", (int)22012, (long)(0x291764CE58097C23L ^ l)), (int)do.ahq("c", (int)30324, (long)(0x1BA1EF8288A55FACL ^ l))})).Vy(0.1).Vw(1.0).Vx(10.0).VA(3.0);
        int[] nArray2 = new int[do.ahq("c", (int)28790, (long)(0x47F717F8CC7DD998L ^ l))];
        nArray2[0] = (int)do.ahq("c", (int)25950, (long)(0x648843F091A1CC82L ^ l));
        nArray2[1] = (int)do.ahq("c", (int)27869, (long)(0x57AD8E6BAC8B452DL ^ l));
        nArray2[2] = (int)do.ahq("c", (int)3357, (long)(0x119EA8A99DDEA4F9L ^ l));
        nArray2[3] = (int)do.ahq("c", (int)20671, (long)(0x7989E7050374F94CL ^ l));
        nArray2[4] = (int)do.ahq("c", (int)16465, (long)(0x992B76F5698E987L ^ l));
        nArray2[5] = (int)do.ahq("c", (int)8895, (long)(0x370817FAE68C0B62L ^ l));
        this.UCwZL = new cC(this, mr.clS(nArray2)).Vy(0.5).Vw(20.0).Vx(100.0).VA(50.0);
        this.HnmDa = new cG(this, mr.clS(new int[]{(int)do.ahq("c", (int)25840, (long)(0x575563B0CFAACD0FL ^ l)), (int)do.ahq("c", (int)14690, (long)(0x70BC744E1631109EL ^ l)), (int)do.ahq("c", (int)11948, (long)(0x73FCFCF0DDEA075EL ^ l)), (int)do.ahq("c", (int)9141, (long)(0x699C4DF383208A54L ^ l)), (int)do.ahq("c", (int)24671, (long)(0x1C853ED9061CC984L ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[do.ahq("c", (int)12053, (long)(0x63AC9D58C05206EEL ^ l))];
        nArray3[0] = (int)do.ahq("c", (int)18926, (long)(0xD5087A7D463E007L ^ l));
        nArray3[1] = (int)do.ahq("c", (int)29214, (long)(0x177E53A54E3CDBE9L ^ l));
        nArray3[2] = (int)do.ahq("c", (int)20671, (long)(0x7989E7050374F94CL ^ l));
        nArray3[3] = (int)do.ahq("c", (int)30324, (long)(0x1BA1EF8288A55FACL ^ l));
        nArray3[4] = (int)do.ahq("c", (int)20798, (long)(0x53A3880B4C4078DBL ^ l));
        nArray3[5] = (int)do.ahq("c", (int)10040, (long)(0x2B5271B008C20ECDL ^ l));
        nArray3[do.ahq("c", (int)28790, (long)(0x47F717F8CC7DD998L ^ l))] = (int)do.ahq("c", (int)18489, (long)(0x6E78173DADFCE1C4L ^ l));
        nArray3[do.ahq("c", (int)8001, (long)(0x18F4E47AEA2636A7L ^ l))] = (int)do.ahq("c", (int)31615, (long)(0x6A12B4F806BF52A8L ^ l));
        nArray3[do.ahq("c", (int)19643, (long)(0x318405DC670AE542L ^ l))] = (int)do.ahq("c", (int)9141, (long)(0x699C4DF383208A54L ^ l));
        nArray3[do.ahq("c", (int)31653, (long)(0x67449DB871AD249L ^ l))] = (int)do.ahq("c", (int)13484, (long)(0x6F35E76EB3FE1D54L ^ l));
        nArray3[do.ahq("c", (int)30670, (long)(0x5C862D240F76DE14L ^ l))] = (int)do.ahq("c", (int)9141, (long)(0x699C4DF383208A54L ^ l));
        nArray3[do.ahq("c", (int)31404, (long)(0x1A60A7DEB771D375L ^ l))] = (int)do.ahq("c", (int)29214, (long)(0x177E53A54E3CDBE9L ^ l));
        this.OTssl = new cG(this, mr.clS(nArray3)).Uf(jk.jEkxo);
        this.Gfvqi = new ArrayList<do$sG>();
        this.lgSYH = new rk((int)do.ahq("c", (int)11367, (long)(0x2573F7E3827858AL ^ l))).dhs(rj.XzDkv);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    do.LNOpt = gb.aYR(-6227257557269339647L, 3723473440923874246L, MethodHandles.lookup().lookupClass()).a(268850252280759L);
                    var11 = do.LNOpt ^ 98232728530769L;
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
                var15_3 = var13_1.doFinal("V.\u008a\u00f2D&X\u00c0".getBytes("ISO-8859-1"));
                ** while (true)
                do.eLTLf = do.ahn(var15_3).intern();
                do.GjXic = new HashMap<K, V>(13);
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
                var6_6 = new long[42];
                var3_7 = 0;
                var4_8 = "]\fsl\u0092g\u0084\u00cc\u009b\u009f\u0082O\u00f8+t\u00d3\u00a0B\u0095\u00de\u0004j\u00ec\u00a3E\u00fe<lG'\u00b1l\u00ec\u0092^c\u00a5\u00f5\u00f2\u0084U*[\f\u00ea\u00d1m\u00e0\u0098\u00eb\u00a7\u00f0\u0088\u0084\u00a2M\u00a0`\u009e[+b\u0019\u00e9\u00ec\u00ef\u00bc_\u00e2\u00d7\u00b5\u00e9k\fj\u00e3ki?:\u000b\u00a8\u0089\u0099_\u00b5\u0098\u00ba%\u00abD\u0090\u00df\u00b0M$\u00baY\u0082\u0006\u00a8>\u0015x\u00fcoE1\u0087\u00a2\u00fe*\u00ee\u00ea\u00a9\u00ed\u00dap\u00ad\u00d1Z9[\u00e4EC\u00c4\u0084L5\u00b5\u0005\u00da\u00d4!\u00fe.Qkr#\u008f\u008a/\u00c4\u00a8$a\u0002\u008a\u00b4\u00c3\u00b0\u00c3\u0089\u008c\u00f4l7\u00f8p\u00e3\u001d\u0005\u008c\u001f\u00b0\u00e3V\u00a2\u00ee\u009b\u00cap\u00e8B\u00bf\u0084\t\u00cc\u00f2\u00e7?\u009a*y\u00cc\u0097\u0080J\u0001\u00fd\u00daw\u00c0\u0011\u00efP$o\u00eck\u00ee\u0095mQ\u0019\u0095b\u00a9~\u00ef\u00d2\u00c3\u00ce1\u00bcF-B\b\u00cf\u00f7\u0015\u00b4\u00fd\b\u0015\u00ec\u00d16\u0014\u00bd\u009f1e\u00fe\u00b0\u0080s\u00b2\u00fd$\u0083\r\u00e9AH\u00eb\u00fc\u0015\u00b8xGv\u00e0\"V\temY\u00fc\u00ec\r/\u00a2P%.\u00f4\u00a7S\u0090\u00a30\u00ad\u00e6\u00a8mW\u00cdv>Bt^\u0010V\u00c1\u00a4\u00a8\\\u00a4W\u00db\u0099e\u00bc\u008a5\u00da\u0084\u008bi9\u0004\u00dc?O\u00d7;\u00bev\u00c9\u00a7\u00a1\u00fc01";
                var5_9 = "]\fsl\u0092g\u0084\u00cc\u009b\u009f\u0082O\u00f8+t\u00d3\u00a0B\u0095\u00de\u0004j\u00ec\u00a3E\u00fe<lG'\u00b1l\u00ec\u0092^c\u00a5\u00f5\u00f2\u0084U*[\f\u00ea\u00d1m\u00e0\u0098\u00eb\u00a7\u00f0\u0088\u0084\u00a2M\u00a0`\u009e[+b\u0019\u00e9\u00ec\u00ef\u00bc_\u00e2\u00d7\u00b5\u00e9k\fj\u00e3ki?:\u000b\u00a8\u0089\u0099_\u00b5\u0098\u00ba%\u00abD\u0090\u00df\u00b0M$\u00baY\u0082\u0006\u00a8>\u0015x\u00fcoE1\u0087\u00a2\u00fe*\u00ee\u00ea\u00a9\u00ed\u00dap\u00ad\u00d1Z9[\u00e4EC\u00c4\u0084L5\u00b5\u0005\u00da\u00d4!\u00fe.Qkr#\u008f\u008a/\u00c4\u00a8$a\u0002\u008a\u00b4\u00c3\u00b0\u00c3\u0089\u008c\u00f4l7\u00f8p\u00e3\u001d\u0005\u008c\u001f\u00b0\u00e3V\u00a2\u00ee\u009b\u00cap\u00e8B\u00bf\u0084\t\u00cc\u00f2\u00e7?\u009a*y\u00cc\u0097\u0080J\u0001\u00fd\u00daw\u00c0\u0011\u00efP$o\u00eck\u00ee\u0095mQ\u0019\u0095b\u00a9~\u00ef\u00d2\u00c3\u00ce1\u00bcF-B\b\u00cf\u00f7\u0015\u00b4\u00fd\b\u0015\u00ec\u00d16\u0014\u00bd\u009f1e\u00fe\u00b0\u0080s\u00b2\u00fd$\u0083\r\u00e9AH\u00eb\u00fc\u0015\u00b8xGv\u00e0\"V\temY\u00fc\u00ec\r/\u00a2P%.\u00f4\u00a7S\u0090\u00a30\u00ad\u00e6\u00a8mW\u00cdv>Bt^\u0010V\u00c1\u00a4\u00a8\\\u00a4W\u00db\u0099e\u00bc\u008a5\u00da\u0084\u008bi9\u0004\u00dc?O\u00d7;\u00bev\u00c9\u00a7\u00a1\u00fc01".length();
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
                    var4_8 = "\u0014\u00fa\u00b2f\u00d9\u00eb\u0084\u00da:\u0097\u001bS*\u00e5\u00e1P";
                    var5_9 = "\u0014\u00fa\u00b2f\u00d9\u00eb\u0084\u00da:\u0097\u001bS*\u00e5\u00e1P".length();
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
        do.kSkhp = var6_6;
        do.YQLde = new Integer[42];
    }

    private static /* synthetic */ boolean ahl(class_1297 class_12972, do$sG do$sG) {
        boolean bl;
        long l = LNOpt ^ 0x688FAA09E1CFL;
        try {
            bl = do$sG.ZaYMC == class_12972;
        }
        catch (MatchException matchException) {
            throw do.ahm(matchException);
        }
        return bl;
    }

    private static CallSite ahq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/do" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ahn(byte[] byArray) {
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

    private static MatchException ahm(MatchException matchException) {
        return matchException;
    }

    private static int ahp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = do.aho(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @hG
    public void ahj(gk gk2) {
        block16: {
            long l = LNOpt ^ 0x232EC8DF6A7EL;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw do.ahm(matchException);
            }
            lC lC2 = gk2.baT();
            class_241 class_2412 = rm.diq();
            float f = class_2412.field_1343 / 2.0f;
            float f2 = class_2412.field_1342 / 2.0f;
            float f3 = lC2.cfh();
            float f4 = this.ylItw.VB();
            float f5 = this.UCwZL.VB();
            float f6 = this.lgSYH.dhd(this.YXgYB);
            Iterator<do$sG> iterator = this.Gfvqi.iterator();
            XSRvt.startBatch(ob.cBv(eLTLf));
            while (iterator.hasNext()) {
                mG mG2;
                do$sG do$sG;
                block17: {
                    block18: {
                        boolean bl;
                        block19: {
                            class_1657 class_16572;
                            block20: {
                                do$sG = iterator.next();
                                mG2 = this.HnmDa.Wf();
                                class_1297 class_12972 = do$sG.ZaYMC;
                                try {
                                    try {
                                        if (iSArray != null) break block16;
                                        if (iSArray != null) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw do.ahm(matchException);
                                    }
                                    if (!(class_12972 instanceof class_1657)) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw do.ahm(matchException);
                                }
                                class_16572 = (class_1657)class_12972;
                                try {
                                    try {
                                        bl = rD.dml().aLp(class_16572);
                                        if (iSArray != null) break block19;
                                        if (!bl) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw do.ahm(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw do.ahm(matchException);
                                }
                            }
                            bl = rD.dmc().ddy(class_16572);
                        }
                        if (bl) {
                            mG2 = this.OTssl.Wf();
                        }
                    }
                    lC2.ceV();
                }
                float f7 = this.ahk(do$sG.ZaYMC, f3) - rD.dlmvG.field_1724.method_36454();
                lC2.cfb(f, f2, f7);
                float f8 = f4 * 5.0f;
                float f9 = f2 - f5 - f6;
                try {
                    do$sG.doM(lC2, f, f9, f8, mG2);
                    lC2.ceW();
                    if (do$sG.doN()) {
                        iterator.remove();
                    }
                }
                catch (MatchException matchException) {
                    throw do.ahm(matchException);
                }
                if (iSArray == null) continue;
            }
            XSRvt.endBatch();
        }
    }

    @hG
    public void ahi(gJ gJ2) {
        block8: {
            block6: {
                long l = LNOpt ^ 0x682FF6E46D15L;
                class_437 class_4372 = gJ2.bcd();
                iS[] iSArray = dh.afl();
                boolean bl = class_4372 instanceof class_465;
                try {
                    block7: {
                        try {
                            try {
                                if (iSArray != null) break block6;
                                if (!bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw do.ahm(matchException);
                            }
                            this.YXgYB = (float)(do.ahq("c", (int)15311, (long)(0x606CB860DF2EE1E4L ^ l)) + (Integer)rD.dlmvG.field_1690.method_42474().method_41753() * do.ahq("c", (int)3999, (long)(0x581E85607D12D5B6L ^ l)));
                            this.lgSYH.dhs(rj.XzDkv);
                            if (iSArray == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw do.ahm(matchException);
                        }
                    }
                    this.YXgYB = 0.0f;
                }
                catch (MatchException matchException) {
                    throw do.ahm(matchException);
                }
            }
            this.lgSYH.dhs(rj.AYqck);
        }
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @hG
    public void ahh(gH.th var1_1) {
        var2_2 = do.LNOpt ^ 66215545365277L;
        var4_3 = dh.afl();
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException v0) {
            throw do.ahm(v0);
        }
        var5_4 = new HashSet<class_1297>();
        var6_5 = rD.dlmvG.field_1687.method_18112().iterator();
        while (var6_5.hasNext()) {
            block37: {
                block38: {
                    block35: {
                        block36: {
                            block34: {
                                var7_6 /* !! */  = (class_1297)var6_5.next();
                                try {
                                    try {
                                        v1 /* !! */  = var7_6 /* !! */ ;
                                        if (var4_3 == null) {
                                            if (v1 /* !! */  != rD.dlmvG.field_1724) break block34;
                                        }
                                        ** GOTO lbl97
                                    }
                                    catch (MatchException v2) {
                                        throw do.ahm(v2);
                                    }
                                    if (var4_3 == null) continue;
                                }
                                catch (MatchException v3) {
                                    throw do.ahm(v3);
                                }
                            }
                            try {
                                try {
                                    v4 = this.LHfSj.VX(var7_6 /* !! */ );
                                    if (var4_3 != null) break block35;
                                    if (v4) break block36;
                                }
                                catch (MatchException v5) {
                                    throw do.ahm(v5);
                                }
                                if (var4_3 == null) continue;
                            }
                            catch (MatchException v6) {
                                throw do.ahm(v6);
                            }
                        }
                        v4 = var7_6 /* !! */  instanceof class_1657;
                    }
                    try {
                        if (var4_3 != null) break block37;
                        if (!v4) break block38;
                    }
                    catch (MatchException v7) {
                        throw do.ahm(v7);
                    }
                    var8_7 = (class_1657)var7_6 /* !! */ ;
                    try {
                        try {
                            v4 = rD.dml().aLp(var8_7);
                            if (var4_3 != null) break block37;
                            if (!v4) break block38;
                        }
                        catch (MatchException v8) {
                            throw do.ahm(v8);
                        }
                        if (var4_3 == null) continue;
                    }
                    catch (MatchException v9) {
                        throw do.ahm(v9);
                    }
                }
                v4 = var5_4.add(var7_6 /* !! */ );
            }
            if (var4_3 == null) continue;
        }
        var6_5 = var5_4.iterator();
        while (var6_5.hasNext()) {
            block39: {
                var7_6 /* !! */  = (class_1297)var6_5.next();
                try {
                    try {
                        try {
                            v10 = this.Gfvqi.stream().noneMatch((Predicate<do$sG>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, ahl(net.minecraft.class_1297 sixtwo.do$sG ), (Lsixtwo/do$sG;)Z)((class_1297)var7_6 /* !! */ ));
                            if (var4_3 == null) {
                                if (var4_3 != null) break block39;
                            }
                            ** GOTO lbl91
                        }
                        catch (MatchException v11) {
                            throw do.ahm(v11);
                        }
                        if (!v10) break block39;
                    }
                    catch (MatchException v12) {
                        throw do.ahm(v12);
                    }
                    this.Gfvqi.add(new do$sG(var7_6 /* !! */ ));
                }
                catch (MatchException v13) {
                    throw do.ahm(v13);
                }
            }
            if (var4_3 == null) continue;
        }
        var6_5 = this.Gfvqi.iterator();
        do {
            block40: {
                v10 = var6_5.hasNext();
lbl91:
                // 2 sources

                try {
                    if (!v10) break;
                    v1 /* !! */  = var6_5.next();
                }
                catch (MatchException v14) {
                    throw do.ahm(v14);
                }
lbl97:
                // 2 sources

                var7_6 /* !! */  = (do$sG)v1 /* !! */ ;
                try {
                    try {
                        if (var4_3 != null) break block40;
                        if (var5_4.contains(var7_6 /* !! */ .ZaYMC)) continue;
                    }
                    catch (MatchException v15) {
                        throw do.ahm(v15);
                    }
                    var7_6 /* !! */ .hkzUL = true;
                }
                catch (MatchException v16) {
                    throw do.ahm(v16);
                }
            }
            var7_6 /* !! */ .zzzOY.dhs(rj.AYqck);
        } while (var4_3 == null);
    }

    private static int aho(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x13E1;
        if (YQLde[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = kSkhp[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])GjXic.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GjXic.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/do", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            do.YQLde[n2] = n3;
        }
        return YQLde[n2];
    }

    private float ahk(class_1297 class_12972, float f) {
        class_243 class_2432 = rD.dlmvG.field_1724.method_30950(f);
        class_243 class_2433 = class_12972.method_30950(f);
        double d = class_2433.field_1352 - class_2432.field_1352;
        double d2 = class_2433.field_1350 - class_2432.field_1350;
        return (float)(-(Math.atan2(d, d2) * 57.29577951308232));
    }

    @Override
    public void YO() {
        super.YO();
        this.Gfvqi.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(do.class, "ahp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
