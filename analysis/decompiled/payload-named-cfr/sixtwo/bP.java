/*
 * Decompiled with CFR 0.152.
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
import sixtwo.bJ;
import sixtwo.bS;
import sixtwo.bU;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.la;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bP
extends bS {
    private static final long OrHSZ;
    private static final long[] FeWAQ;
    private static final Integer[] IwENq;
    private static final Map mTYzX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static CallSite NE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public bP(cv cv2) {
        long l2 = OrHSZ ^ 0x7C50F9391EA4L;
        int[] nArray = new int[bP.NE("y", (int)20142, (long)(0x4775CE005B916E97L ^ l2))];
        nArray[0] = (int)bP.NE("y", (int)8616, (long)(0x344321AD6CD98197L ^ l2));
        nArray[1] = (int)bP.NE("y", (int)15001, (long)(0x414EEE0D7E5F1ABCL ^ l2));
        nArray[2] = (int)bP.NE("y", (int)8464, (long)(0x22F57014EF1F0133L ^ l2));
        nArray[3] = (int)bP.NE("y", (int)11625, (long)(0x270F0498827C8D46L ^ l2));
        nArray[4] = (int)bP.NE("y", (int)21535, (long)(0x1A76EABAB7407405L ^ l2));
        nArray[5] = (int)bP.NE("y", (int)17893, (long)(0xF22B431BAEF65DBL ^ l2));
        nArray[bP.NE("y", (int)10558, (long)(0x155E17AC29B00921L ^ l2))] = (int)bP.NE("y", (int)4988, (long)(0x118A0D935AFE3346L ^ l2));
        nArray[bP.NE("y", (int)21728, (long)(0x182EDF404A2FF4F8L ^ l2))] = (int)bP.NE("y", (int)6192, (long)(0x775AFDC87311B805L ^ l2));
        nArray[bP.NE("y", (int)24181, (long)(0x32E91618FF967E49L ^ l2))] = (int)bP.NE("y", (int)24314, (long)(0x2F096C567E5A7ED1L ^ l2));
        nArray[bP.NE("y", (int)32117, (long)(0x488C926CCD88DD4DL ^ l2))] = (int)bP.NE("y", (int)23266, (long)(0x1E4CAE24E7B27AC2L ^ l2));
        nArray[bP.NE("y", (int)4159, (long)(0x3E65247840D0B013L ^ l2))] = (int)bP.NE("y", (int)11821, (long)(0x27BA901331C98E36L ^ l2));
        nArray[bP.NE("y", (int)13224, (long)(0x272DFCCCD48138EL ^ l2))] = (int)bP.NE("y", (int)23266, (long)(0x1E4CAE24E7B27AC2L ^ l2));
        nArray[bP.NE("y", (int)30058, (long)(0x625B9B37661BD558L ^ l2))] = (int)bP.NE("y", (int)4283, (long)(0x4F33357849233086L ^ l2));
        nArray[bP.NE("y", (int)30103, (long)(0x43E780C52B655A4L ^ l2))] = (int)bP.NE("y", (int)24178, (long)(0x7BEFB4EE94127E5FL ^ l2));
        super(cv2, mr.clS(nArray));
        this.TB();
        this.Tz();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bP.OrHSZ = gb.aYR(6415508564072682166L, 1219073124727057371L, MethodHandles.lookup().lookupClass()).a(63773572064124L);
                bP.mTYzX = new HashMap<K, V>(13);
                var0 = bP.OrHSZ ^ 108478420721736L;
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
                var8_3 = new long[38];
                var5_4 = 0;
                var6_5 = "\u00a1\u00dd\u0099\u0094\u000eb\u009a\u00ca \"\u00062\u009f\u009dj;\u00e5^\u0005bJCU\u00f3\u00db\u00fc\u00c1\u00cc\u0096\u008a\u00df\u001b\u0004\u00afHp\u00d4\u0085<i\u00b8n\u00c0\u00c3@gO\u00f4\u0019\u00c5\"W\u00ba\u0002.\u001ff\u008f\u00bd\u00e7\u0018\u00c9\r\u00e9Y`\u00f7R\u00b0\u00fc\u00b7\u0006\u00ef\u0083\u00c2\u00bfU\u0097%\u00d6R\u00ad\u00b1Q\u00dd\u00aa\u00ec~g\u0090\u00c6\f\u008f\u0094\u00eax\u00cdx\u001c\u00ce\f\u008a\u009c=x\u00c2\u0092\u00a6\u0094h\u008a\u00f0\u0080\u00fe\\q\u00df\u0005\\\u00c6\u0015M{zB\u00f3f\u00cc\u001c*\u00afQ`\u00f6/:\u001f\u0003\u000b\u00edi8P\u00eeEIO\u008c\u0003\u00f1~6\u008f\u00e4\u00c5\u00a5Vw\u0018\u0093\u001f\u0012l\u00a4\u00c5\u00b5l\u0014\u0007.Ie\u00b2\u00ba61\u00ac?\u00cf\u00eb\u00f3\u0006HW+1\u007f\u0000\u001e\u0017\u00db\\\u000f\u0084\u008a\fe\u00cd\u0019 Q\u00ab\u00c02p\u00cf\u00da\f\u00d0Iq\u00f6\u0007{~,\u0011\u008f\u00ec\u00df\u00d8\u00dd\u0010\u0086W\u00ab\u00ccf\u00dc\u00e3\u001c\u00a7\u00b4-]\u0095\u001e\u008f\u00c1\u0086\u00d9\u00f3\u008c3\u0098i\u00820}\u0018\u00f3\u001eBh\u00fa6\u008d\r\u00cbco?\u008a#\u009b\u0001\u00da\u00f4@l+Z\u0093\u00ec\u00f3qu\u00cd\u0007\u00f6K\u00f5\u00b1R\u00ad?\u00f0\u00a7";
                var7_6 = "\u00a1\u00dd\u0099\u0094\u000eb\u009a\u00ca \"\u00062\u009f\u009dj;\u00e5^\u0005bJCU\u00f3\u00db\u00fc\u00c1\u00cc\u0096\u008a\u00df\u001b\u0004\u00afHp\u00d4\u0085<i\u00b8n\u00c0\u00c3@gO\u00f4\u0019\u00c5\"W\u00ba\u0002.\u001ff\u008f\u00bd\u00e7\u0018\u00c9\r\u00e9Y`\u00f7R\u00b0\u00fc\u00b7\u0006\u00ef\u0083\u00c2\u00bfU\u0097%\u00d6R\u00ad\u00b1Q\u00dd\u00aa\u00ec~g\u0090\u00c6\f\u008f\u0094\u00eax\u00cdx\u001c\u00ce\f\u008a\u009c=x\u00c2\u0092\u00a6\u0094h\u008a\u00f0\u0080\u00fe\\q\u00df\u0005\\\u00c6\u0015M{zB\u00f3f\u00cc\u001c*\u00afQ`\u00f6/:\u001f\u0003\u000b\u00edi8P\u00eeEIO\u008c\u0003\u00f1~6\u008f\u00e4\u00c5\u00a5Vw\u0018\u0093\u001f\u0012l\u00a4\u00c5\u00b5l\u0014\u0007.Ie\u00b2\u00ba61\u00ac?\u00cf\u00eb\u00f3\u0006HW+1\u007f\u0000\u001e\u0017\u00db\\\u000f\u0084\u008a\fe\u00cd\u0019 Q\u00ab\u00c02p\u00cf\u00da\f\u00d0Iq\u00f6\u0007{~,\u0011\u008f\u00ec\u00df\u00d8\u00dd\u0010\u0086W\u00ab\u00ccf\u00dc\u00e3\u001c\u00a7\u00b4-]\u0095\u001e\u008f\u00c1\u0086\u00d9\u00f3\u008c3\u0098i\u00820}\u0018\u00f3\u001eBh\u00fa6\u008d\r\u00cbco?\u008a#\u009b\u0001\u00da\u00f4@l+Z\u0093\u00ec\u00f3qu\u00cd\u0007\u00f6K\u00f5\u00b1R\u00ad?\u00f0\u00a7".length();
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
                    var6_5 = "\u000f'\u00e7.\u00ae\u00af#\u0006<\u00db\u008c$\u00a5y\u00a78";
                    var7_6 = "\u000f'\u00e7.\u00ae\u00af#\u0006<\u00db\u008c$\u00a5y\u00a78".length();
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
        bP.FeWAQ = var8_3;
        bP.IwENq = new Integer[38];
    }

    @Override
    public boolean MH() {
        return true;
    }

    private static MatchException NB(MatchException matchException) {
        return matchException;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        long l2 = OrHSZ ^ 0x6CC389D53157L;
        bU bU2 = rD.dlK().RC();
        float f2 = bU2.RW();
        float f3 = bU2.RX();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        int[] nArray = new int[bP.NE("y", (int)31399, (long)(0x1B5FE27628C3756FL ^ l2))];
        nArray[0] = (int)bP.NE("y", (int)19527, (long)(0x1F3F5EF33204383L ^ l2));
        nArray[1] = (int)bP.NE("y", (int)31165, (long)(0x348797EA4B48766FL ^ l2));
        nArray[2] = (int)bP.NE("y", (int)17670, (long)(0x320C2A02A347CADDL ^ l2));
        nArray[3] = (int)bP.NE("y", (int)8976, (long)(0x63C953F4B2902CD2L ^ l2));
        nArray[4] = (int)bP.NE("y", (int)10748, (long)(0x23FC9015B0EA2628L ^ l2));
        nArray[5] = (int)bP.NE("y", (int)26194, (long)(0x397651B69878E995L ^ l2));
        nArray[bP.NE("y", (int)31224, (long)(0x7BFFA2CD741A763DL ^ l2))] = (int)bP.NE("y", (int)498, (long)(0x3828061B15A38E18L ^ l2));
        nArray[bP.NE("y", (int)30171, (long)(0x6E503CA8B7AB7A36L ^ l2))] = (int)bP.NE("y", (int)28416, (long)(0x602BE193448C60DAL ^ l2));
        nArray[bP.NE("y", (int)2348, (long)(0x29C0E0D698786FBL ^ l2))] = (int)bP.NE("y", (int)31712, (long)(0x1BCEF18F11BBF43DL ^ l2));
        nArray[bP.NE("y", (int)28097, (long)(0xCBF53D315856218L ^ l2))] = (int)bP.NE("y", (int)26229, (long)(0x2C479EACB8BD69B6L ^ l2));
        nArray[bP.NE("y", (int)4789, (long)(0x3A8C793EC9A01D64L ^ l2))] = (int)bP.NE("y", (int)23266, (long)(0x1E4CBEB7975E5531L ^ l2));
        int[] nArray2 = nArray;
        float f4 = 20.0f + lq2.cap(nArray2);
        float f5 = 15.0f;
        boolean bl2 = bJ.MN();
        this.fGWTH.NU(f4, f5);
        float f6 = f2 - 6.0f + 10.0f * this.dExGi.dhj();
        float f7 = f3 + 4.0f;
        la la2 = la.bWA(ii2.bjf(), ii2.bjf().coc(mG.hoGuU, 0.4f), ii2.bjf().coc(mG.hoGuU, 0.4f), ii2.bjf().coc(mG.hoGuU, 0.2f));
        try {
            lC2.cde(f6, f7, 7.0f, la2);
            lC2.ceA(lq2, nArray2, f2 + 25.0f - 10.0f * this.dExGi.dhj(), f3 + 5.0f, ii2.bjb());
            if (bl2) {
                iS.bwK("walN4b");
            }
        }
        catch (MatchException matchException) {
            throw bP.NB(matchException);
        }
    }

    private static int ND(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bP.NC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int NC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2D01;
        if (IwENq[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = FeWAQ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])mTYzX.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mTYzX.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bP", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bP.IwENq[n3] = n4;
        }
        return IwENq[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bP.class, "ND", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

