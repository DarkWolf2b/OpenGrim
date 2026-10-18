/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.util.math.MatrixStack
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.util.math.MatrixStack;
import sixtwo.cG;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.iS;
import sixtwo.kt;
import sixtwo.ku;
import sixtwo.kw;
import sixtwo.mr;
import sixtwo.rD;

public class kr
extends kt {
    protected final ct WRPii;
    protected final cu RWGtc;
    protected final cu DnIfZ;
    protected final cu gvNCh;
    protected final cG vgDNV;
    private static final long iFJYp;
    private static final long[] GpFhj;
    private static final Integer[] hrnOB;
    private static final Map faEgt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected void bQO(gg gg2) {
        boolean bl2;
        block11: {
            block12: {
                gg gg3;
                boolean bl3;
                block9: {
                    block10: {
                        long l2 = iFJYp ^ 0x561BA7C9CB70L;
                        bl3 = kt.bRw();
                        try {
                            gg3 = gg2;
                            if (bl3) break block9;
                            if (gg3 != null) break block10;
                        }
                        catch (MatchException matchException) {
                            throw kr.bQR(matchException);
                        }
                        return;
                    }
                    gg3 = gg2;
                }
                try {
                    try {
                        bl2 = gg3.bwI().contains(this.WRPii);
                        if (bl3) break block11;
                        if (bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw kr.bQR(matchException);
                    }
                    this.WRPii.Vg(gg2);
                }
                catch (MatchException matchException) {
                    throw kr.bQR(matchException);
                }
            }
            bl2 = gg2.bwI().contains(this.vgDNV);
        }
        try {
            if (!bl2) {
                this.vgDNV.Vg(gg2);
            }
        }
        catch (MatchException matchException) {
            throw kr.bQR(matchException);
        }
    }

    private static MatchException bQR(MatchException matchException) {
        return matchException;
    }

    private static CallSite bQU(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Exception decompiling
     */
    protected kw bQP() {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 2[SWITCH]
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

    private static int bQS(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4C07;
        if (hrnOB[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = GpFhj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])faEgt.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    faEgt.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kr.hrnOB[n3] = n4;
        }
        return hrnOB[n3];
    }

    @Override
    public void bQQ(MatrixStack matrixStack, float f2, AbstractClientPlayerEntity abstractClientPlayerEntity) {
        this.bQV(this.bQP());
        super.bQQ(matrixStack, f2, abstractClientPlayerEntity);
    }

    private static int bQT(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = kr.bQS(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public kr(gg gg2, ku ku2) {
        this(gg2, ku2, true);
    }

    protected kr(gg gg2, ku ku2, boolean bl2) {
        gg gg3;
        long l2 = iFJYp ^ 0x7426A68B8614L;
        boolean bl3 = kt.bRw();
        super(ku2);
        boolean bl4 = bl3;
        try {
            gg3 = bl2 ? gg2 : null;
        }
        catch (MatchException matchException) {
            throw kr.bQR(matchException);
        }
        gg gg4 = gg3;
        try {
            int[] nArray = new int[kr.bQU("x", (int)26534, (long)(0x113E2A5460FFBD95L ^ l2))];
            nArray[0] = (int)kr.bQU("x", (int)16623, (long)(0x3FE6FE878CF09AEBL ^ l2));
            nArray[1] = (int)kr.bQU("x", (int)14330, (long)(0xE3B5D1CC0C1EDE9L ^ l2));
            nArray[2] = (int)kr.bQU("x", (int)13831, (long)(0x7639926D58796C33L ^ l2));
            nArray[3] = (int)kr.bQU("x", (int)31330, (long)(0x1346DB1D5408A043L ^ l2));
            nArray[4] = (int)kr.bQU("x", (int)27493, (long)(0xDC39F7607D0B14EL ^ l2));
            nArray[5] = (int)kr.bQU("x", (int)7069, (long)(0x11454B16328AC18BL ^ l2));
            nArray[kr.bQU("x", (int)20643, (long)(0x4918B7322D548AAEL ^ l2))] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray[kr.bQU("x", (int)18673, (long)(0x70642686EF3912C6L ^ l2))] = (int)kr.bQU("x", (int)17922, (long)(0x4E3CFD698AD91C12L ^ l2));
            nArray[kr.bQU("x", (int)30718, (long)(0x1FEEEC8B0813ADC8L ^ l2))] = (int)kr.bQU("x", (int)7364, (long)(0x4EE1DA17E2C446D8L ^ l2));
            nArray[kr.bQU("x", (int)199, (long)(0x4D606E3EF9DA5AF9L ^ l2))] = (int)kr.bQU("x", (int)31450, (long)(0x7427A0AF4C6720D9L ^ l2));
            nArray[kr.bQU("x", (int)9324, (long)(0xB097B5DB84CFE6AL ^ l2))] = (int)kr.bQU("x", (int)12561, (long)(0x7F683159DF94EB31L ^ l2));
            nArray[kr.bQU("x", (int)16151, (long)(0x46E0BB7EF8146530L ^ l2))] = (int)kr.bQU("x", (int)30832, (long)(0x1BB4CB44D0012277L ^ l2));
            nArray[kr.bQU("x", (int)1078, (long)(0x53D08C463169DE3EL ^ l2))] = (int)kr.bQU("x", (int)18540, (long)(0x108065123EA59260L ^ l2));
            nArray[kr.bQU("x", (int)10425, (long)(0x31B432AE9C9872A0L ^ l2))] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            nArray[kr.bQU("x", (int)1417, (long)(0x35BAB55EE6F15FADL ^ l2))] = (int)kr.bQU("x", (int)2905, (long)(0x4053D85E4BF35150L ^ l2));
            nArray[kr.bQU("x", (int)22944, (long)(0xDAEFC12C3EB03B8L ^ l2))] = (int)kr.bQU("x", (int)25462, (long)(0x10D10D14379FB943L ^ l2));
            nArray[kr.bQU("x", (int)9767, (long)(0x2876F1BE913B7C30L ^ l2))] = (int)kr.bQU("x", (int)29843, (long)(0x784EB990E54AE86L ^ l2));
            nArray[kr.bQU("x", (int)13765, (long)(0x4A225982F5C0EFE3L ^ l2))] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray[kr.bQU("x", (int)23209, (long)(0x2DC1B58B061C0092L ^ l2))] = (int)kr.bQU("x", (int)12421, (long)(0x2EC0F75BC7FCEAACL ^ l2));
            nArray[kr.bQU("x", (int)27483, (long)(0x4CE7417191C5B162L ^ l2))] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            this.WRPii = new ct(gg4, mr.clS(nArray));
            this.RWGtc = new cu(this.WRPii, mr.clS(new int[]{(int)kr.bQU("x", (int)30310, (long)(0x3BC35B6B72472C72L ^ l2)), (int)kr.bQU("x", (int)17499, (long)(0x7923FB94C4179E6AL ^ l2)), (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2)), (int)kr.bQU("x", (int)1232, (long)(0x35D0C0350167DED1L ^ l2))}));
            int[] nArray2 = new int[kr.bQU("x", (int)26765, (long)(0x238E18D7D2A6B2BFL ^ l2))];
            nArray2[0] = (int)kr.bQU("x", (int)7641, (long)(0x71C7326B31B147FAL ^ l2));
            nArray2[1] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            nArray2[2] = (int)kr.bQU("x", (int)18570, (long)(0x442A7AA17C749295L ^ l2));
            nArray2[3] = (int)kr.bQU("x", (int)8883, (long)(0x1DC6D6BD4333788BL ^ l2));
            nArray2[4] = (int)kr.bQU("x", (int)3746, (long)(0x4C003D0790AA5498L ^ l2));
            nArray2[5] = (int)kr.bQU("x", (int)211, (long)(0x7BD1A86EDF785AC9L ^ l2));
            nArray2[kr.bQU("x", (int)31770, (long)(0x6D84D47CC6F1262AL ^ l2))] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            nArray2[kr.bQU("x", (int)18082, (long)(0x3C6D88CDE8321CA9L ^ l2))] = (int)kr.bQU("x", (int)12421, (long)(0x2EC0F75BC7FCEAACL ^ l2));
            this.DnIfZ = new cu(this.WRPii, mr.clS(nArray2));
            int[] nArray3 = new int[kr.bQU("x", (int)278, (long)(0x227D6ED35BED5B04L ^ l2))];
            nArray3[0] = (int)kr.bQU("x", (int)21051, (long)(0x160B607E0936082AL ^ l2));
            nArray3[1] = (int)kr.bQU("x", (int)11367, (long)(0x1EE796A4B2E8765AL ^ l2));
            nArray3[2] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray3[3] = (int)kr.bQU("x", (int)15710, (long)(0x4DEF67DED624E75BL ^ l2));
            nArray3[4] = (int)kr.bQU("x", (int)25462, (long)(0x10D10D14379FB943L ^ l2));
            nArray3[5] = (int)kr.bQU("x", (int)23409, (long)(0x1208F4978D9B816AL ^ l2));
            nArray3[kr.bQU("x", (int)31770, (long)(0x6D84D47CC6F1262AL ^ l2))] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            nArray3[kr.bQU("x", (int)18082, (long)(0x3C6D88CDE8321CA9L ^ l2))] = (int)kr.bQU("x", (int)21245, (long)(0x14C8730711D708C1L ^ l2));
            nArray3[kr.bQU("x", (int)26765, (long)(0x238E18D7D2A6B2BFL ^ l2))] = (int)kr.bQU("x", (int)8883, (long)(0x1DC6D6BD4333788BL ^ l2));
            nArray3[kr.bQU("x", (int)16134, (long)(0x7D24B99903A1E539L ^ l2))] = (int)kr.bQU("x", (int)25692, (long)(0x732A3E82BF43E41L ^ l2));
            nArray3[kr.bQU("x", (int)21577, (long)(0x6F95F173A5F90E63L ^ l2))] = (int)kr.bQU("x", (int)211, (long)(0x7BD1A86EDF785AC9L ^ l2));
            nArray3[kr.bQU("x", (int)18281, (long)(0x27A8A043B07F9D6BL ^ l2))] = (int)kr.bQU("x", (int)18848, (long)(0x28C0406870C31385L ^ l2));
            nArray3[kr.bQU("x", (int)20693, (long)(0x39F4C3EBF9530ADAL ^ l2))] = (int)kr.bQU("x", (int)12421, (long)(0x2EC0F75BC7FCEAACL ^ l2));
            this.gvNCh = new cu(this.WRPii, mr.clS(nArray3));
            int[] nArray4 = new int[kr.bQU("x", (int)28771, (long)(0x20458CB1D00E2A69L ^ l2))];
            nArray4[0] = (int)kr.bQU("x", (int)32731, (long)(0x2274067057D5A5D5L ^ l2));
            nArray4[1] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray4[2] = (int)kr.bQU("x", (int)12221, (long)(0x1EEED9B61F0BF5BDL ^ l2));
            nArray4[3] = (int)kr.bQU("x", (int)7069, (long)(0x11454B16328AC18BL ^ l2));
            nArray4[4] = (int)kr.bQU("x", (int)8883, (long)(0x1DC6D6BD4333788BL ^ l2));
            nArray4[5] = (int)kr.bQU("x", (int)7069, (long)(0x11454B16328AC18BL ^ l2));
            nArray4[kr.bQU("x", (int)31770, (long)(0x6D84D47CC6F1262AL ^ l2))] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray4[kr.bQU("x", (int)18082, (long)(0x3C6D88CDE8321CA9L ^ l2))] = (int)kr.bQU("x", (int)30832, (long)(0x1BB4CB44D0012277L ^ l2));
            nArray4[kr.bQU("x", (int)26765, (long)(0x238E18D7D2A6B2BFL ^ l2))] = (int)kr.bQU("x", (int)25462, (long)(0x10D10D14379FB943L ^ l2));
            nArray4[kr.bQU("x", (int)16134, (long)(0x7D24B99903A1E539L ^ l2))] = (int)kr.bQU("x", (int)10189, (long)(0x20B621BFB1AD7DEFL ^ l2));
            nArray4[kr.bQU("x", (int)21577, (long)(0x6F95F173A5F90E63L ^ l2))] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray4[kr.bQU("x", (int)18281, (long)(0x27A8A043B07F9D6BL ^ l2))] = (int)kr.bQU("x", (int)11367, (long)(0x1EE796A4B2E8765AL ^ l2));
            nArray4[kr.bQU("x", (int)20693, (long)(0x39F4C3EBF9530ADAL ^ l2))] = (int)kr.bQU("x", (int)8609, (long)(0x48545732A089FBBFL ^ l2));
            nArray4[kr.bQU("x", (int)278, (long)(0x227D6ED35BED5B04L ^ l2))] = (int)kr.bQU("x", (int)211, (long)(0x7BD1A86EDF785AC9L ^ l2));
            this.vgDNV = new cG(gg4, mr.clS(nArray4)).Uf(rD.dlM().bjG().bis());
            if (bl4) {
                iS.bwK("J6fYLc");
            }
        }
        catch (MatchException matchException) {
            throw kr.bQR(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                kr.iFJYp = gb.aYR(6454543339173507659L, 276205769963652836L, MethodHandles.lookup().lookupClass()).a(147541755063085L);
                kr.faEgt = new HashMap<K, V>(13);
                var0 = kr.iFJYp ^ 124414492119251L;
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
                var8_3 = new long[59];
                var5_4 = 0;
                var6_5 = "\u0010\u00ad\u0098\u0015\u00d8\u001d\u0019\u008e\u0098v}\u009cG\u00b0c:\u00a5\u00c2\u001eB7\u008e\u0086%\u009c2\u00a9\u001bj\u0087T\f\u00b38\u00f2\u00d8(j\u0093\u0083]h&\u001dl \u008e\u00de[xs_\u0003\u00e4\u0017\u00ac\u00eb\u0089\u00d4\u00d4:\u00a4\u00a4\u00b3\u00aaXn\u0001\u00d5\u0090\u00fc^\u00c3'U:\u0005V\u00b1GI\u0097\u00bd)\u00e0~Mu\u0081\u0097\u00e0\u0014\u0015\u0010\u00ff&\u00a8t\u0099/\b\u00e1\u0014\u00108\u0000\u0094\u0097\\\u00e1>\u00a6\u001eS\u00b2\u0095P\u00d4\u00be\u00cbD\u00e5\u00fad\u00d3f\u00d8\u0084\u00eb\u008f\r=\u00bd\u00f9\u00ed{^GX\u00d1\u0089Vp\u00cdF\u00f8\u0010\u0011\u00f24\u00bd\u00c5\f\u0098\u00f1t\u00f69\u0082\u0019\u001e0\u00ce\u0091H'\u00e0\u009be\u00ce\u008c\u0095[\u0097\u00d7\u00e4\u0083&z\u00dfN>?x\u00c8\u0010\u00d9l\u0016\u0007\u0086c*f\u00f3Na\u00c3;{QM\u00ad\f\u00b3\u0098\u00dfe\u00f8\u009b~pY\u00d4\u00e0\u00fdk\u0007V\u00a3\u00c0\u00d0\u0085!\u00fd\u00c1}\u008f\u0018\u0090\u00f5\r\u00d0\u0098\u0014\u0087\u001d\u00cf\u00ef\u00d2\u00d1\u00b5\u00ab\u000b\u00192Nq\u001b\u00f5g[J~_\u001e\u00a2\u00d6\u000b\u0011\u009f\u00e3\u008aX\u0005\u00e9\u00c2W\u00d3\u0019l\u00f7\u00d4\u00e1\u009f\u0005W\u00df\u0093\u00dd\u00d4d\u00bd=\u00f6\u0015?\u00e5\u009d\u009ce\u00e1\u00c8\u00cadDO\u00d0+ \u00d5{O\u00f5\u000e\u00ef\u0089\u0011\u00f0\u00ca\u0093`\u00cc\u0000\u00f9H?Z\u00bf\\\u00d0|\u00f7\u00bb\u00f2\u009f\u00e0g|\u0090Pd\u000bB@Q\u0015\"\u00a4\u0084\u00ed\u00a3it\u00d8\u00d9\u00d3\u000fw\u0016\u0014h\u00db\u00a97\u00e9\u0010\u0015\u00f3\u00f1\u0017k\u0015\u00b3\u00cao`\u00c0\u000b\b\u009c\u00d1\u00fc\u00ea\u0080\u0082\u00f2M\u00a7\u001e\f\u00c7\u000f\u0012\u00ed\u00e70\u00c69MfF\u00af+\u009a\u00e6\u009d\u0017I\f\u0001\u00f0\u00f2\u00c6s\u001b\u0013\u00aa\u00d6I\u00f0\u00b2\u00bb\u00abI3\u00e5\u009c\u00bc%\u00dc\u0018\u00ee\u00f1JNTy\u00c2\u0092I\u00dc\u00d3H\u00a9\u0083H}\u00c7E1h\u0084\u000e5\u0090\u00c5\u0089QJ\u00baWv\u00ee\u009fh";
                var7_6 = "\u0010\u00ad\u0098\u0015\u00d8\u001d\u0019\u008e\u0098v}\u009cG\u00b0c:\u00a5\u00c2\u001eB7\u008e\u0086%\u009c2\u00a9\u001bj\u0087T\f\u00b38\u00f2\u00d8(j\u0093\u0083]h&\u001dl \u008e\u00de[xs_\u0003\u00e4\u0017\u00ac\u00eb\u0089\u00d4\u00d4:\u00a4\u00a4\u00b3\u00aaXn\u0001\u00d5\u0090\u00fc^\u00c3'U:\u0005V\u00b1GI\u0097\u00bd)\u00e0~Mu\u0081\u0097\u00e0\u0014\u0015\u0010\u00ff&\u00a8t\u0099/\b\u00e1\u0014\u00108\u0000\u0094\u0097\\\u00e1>\u00a6\u001eS\u00b2\u0095P\u00d4\u00be\u00cbD\u00e5\u00fad\u00d3f\u00d8\u0084\u00eb\u008f\r=\u00bd\u00f9\u00ed{^GX\u00d1\u0089Vp\u00cdF\u00f8\u0010\u0011\u00f24\u00bd\u00c5\f\u0098\u00f1t\u00f69\u0082\u0019\u001e0\u00ce\u0091H'\u00e0\u009be\u00ce\u008c\u0095[\u0097\u00d7\u00e4\u0083&z\u00dfN>?x\u00c8\u0010\u00d9l\u0016\u0007\u0086c*f\u00f3Na\u00c3;{QM\u00ad\f\u00b3\u0098\u00dfe\u00f8\u009b~pY\u00d4\u00e0\u00fdk\u0007V\u00a3\u00c0\u00d0\u0085!\u00fd\u00c1}\u008f\u0018\u0090\u00f5\r\u00d0\u0098\u0014\u0087\u001d\u00cf\u00ef\u00d2\u00d1\u00b5\u00ab\u000b\u00192Nq\u001b\u00f5g[J~_\u001e\u00a2\u00d6\u000b\u0011\u009f\u00e3\u008aX\u0005\u00e9\u00c2W\u00d3\u0019l\u00f7\u00d4\u00e1\u009f\u0005W\u00df\u0093\u00dd\u00d4d\u00bd=\u00f6\u0015?\u00e5\u009d\u009ce\u00e1\u00c8\u00cadDO\u00d0+ \u00d5{O\u00f5\u000e\u00ef\u0089\u0011\u00f0\u00ca\u0093`\u00cc\u0000\u00f9H?Z\u00bf\\\u00d0|\u00f7\u00bb\u00f2\u009f\u00e0g|\u0090Pd\u000bB@Q\u0015\"\u00a4\u0084\u00ed\u00a3it\u00d8\u00d9\u00d3\u000fw\u0016\u0014h\u00db\u00a97\u00e9\u0010\u0015\u00f3\u00f1\u0017k\u0015\u00b3\u00cao`\u00c0\u000b\b\u009c\u00d1\u00fc\u00ea\u0080\u0082\u00f2M\u00a7\u001e\f\u00c7\u000f\u0012\u00ed\u00e70\u00c69MfF\u00af+\u009a\u00e6\u009d\u0017I\f\u0001\u00f0\u00f2\u00c6s\u001b\u0013\u00aa\u00d6I\u00f0\u00b2\u00bb\u00abI3\u00e5\u009c\u00bc%\u00dc\u0018\u00ee\u00f1JNTy\u00c2\u0092I\u00dc\u00d3H\u00a9\u0083H}\u00c7E1h\u0084\u000e5\u0090\u00c5\u0089QJ\u00baWv\u00ee\u009fh".length();
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
                    var6_5 = "\u0005[}\u00b6,\u00ff*\u009d\u001f\u009b\u00c4\u0002\u0093v\u00a4\u00e8";
                    var7_6 = "\u0005[}\u00b6,\u00ff*\u009d\u001f\u009b\u00c4\u0002\u0093v\u00a4\u00e8".length();
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
        kr.GpFhj = var8_3;
        kr.hrnOB = new Integer[59];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kr.class, "bQT", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

