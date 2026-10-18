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
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jN;
import sixtwo.jO;
import sixtwo.kd;
import sixtwo.la;
import sixtwo.ld;

public final class ke {
    public static final int yivTD = 0;
    public static final int QASfV = 1;
    public static final int eNDuK;
    private static final long KQukh;
    private static final String[] LalEw;
    private static final String[] XIgNj;
    private static final Map ChWut;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static String bOo(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1BF0;
        if (XIgNj[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])ChWut.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ChWut.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ke", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = LalEw[n2].getBytes("ISO-8859-1");
            ke.XIgNj[n2] = ke.bOn(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return XIgNj[n2];
    }

    private static ld bOk(jO jO2) {
        jO jO3;
        block4: {
            block5: {
                long l = KQukh ^ 0x2D8479825D26L;
                iS[] iSArray = kd.bOg();
                try {
                    try {
                        jO3 = jO2;
                        if (iSArray == null) break block4;
                        if (jO3.bKf() == kd.sQVlR) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ke.bOm(matchException);
                    }
                    return jO2.bKh();
                }
                catch (MatchException matchException) {
                    throw ke.bOm(matchException);
                }
            }
            jO3 = jO2;
        }
        ld ld2 = jO3.bKh();
        float f = jO2.bKp() / 2.0f;
        return new ld(ld2.topLeft() * f, ld2.topRight() * f, ld2.bottomLeft() * f, ld2.bottomRight() * f);
    }

    private static MatchException bOm(MatchException matchException) {
        return matchException;
    }

    private static String bOn(byte[] byArray) {
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

    private static Object bOp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ke.bOo(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite bOq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ke" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     * Enabled aggressive block sorting
     */
    static {
        ke.KQukh = gb.aYR(7911433099958198754L, -1101336953949428103L, MethodHandles.lookup().lookupClass()).a(252182616740566L);
        ke.ChWut = new HashMap<K, V>(13);
        var7 = ke.KQukh ^ 139525351352517L;
        var9_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
        v0 = SecretKeyFactory.getInstance("DES");
        v1 = new byte[8];
        v2 = v1;
        v1[0] = (byte)(var7 >>> 56);
        for (var10_2 = 1; var10_2 < 8; ++var10_2) {
            v2 = v2;
            v2[var10_2] = (byte)(var7 << var10_2 * 8 >>> 56);
        }
        var9_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
        var16_3 = new String[25];
        var14_4 = 0;
        var13_5 = "\u00ea\u0015\u00d0_\u00f7\u00f2\u00d5\u0007\u0006\u008f\u0094\u00c7\u00d5\u0088n=\u0093\u001f|\u00df\u00fb\u0010\u001dT\u0010r\u00c8\u00af\b\u00ff\u00c3}H\u0096\u00c8\u00b0}\u00b5,\u00dfU\u0018\u00bc\u00cb\u00bd\u00f3\u00a0T\u00a6\u00ca[\u0082\u000eF\u0099\u0092\u00cdC\u0099\u0017\u00f1\u00cb\u0005\u0083\u0017\u00ec\u0010\u00bd\u000fG!\u00ac\u009f+\u00d9\u00b5\u00b5\u00c5B\u0091 \u00f0\u00b1\u0018\u00d7z\u00cev\u00c1\u0003\u00d40n.\u00bd\u00f4\u00a9\u0006\u00e1\u008c\u00f8&C\u00ce%\u0002#\u009c 3_&\u00d2tWw\u00cb\u00c4\u00b6A\u000b\u000f\u00c3Fd\u009a\u00f47p\u001b\u00c0\u00c5\u00b7\u0085\u00e9\u0089\u0086\u00d3\u00c9\u00efK\u0018n\u0082h\u0003\u00fe\u00d67\u00e64\u000e\u00bf\u0082\u00a9\u008c\u008d\u0004\u00af\u0015\u0013\u0014aF\u00bf\u00d4 .1,\u0006o\u00b4\u0083\u00c3\u00ac\u008f\u0095\u00db\u00125\u00fc\u00b2\u00cf\u00d3\u00b8\u00d0\u00f2j\u00e7*\u00ef\u00faN\u00b4=j\u0098\u00f6 \u00db\u0084O\u00a1G\u0011&o\u009b>\u0081[U\u00d3(\u00c0\u00ff!\u0006,\u00b9\u00bc\u00d7>Rjm\b\u0099y\u007f\u00de \u00f3\u0082\u00b2$yy\u00dd\u00baT\u0006\u001d\u0094\u0080\u00b5\u00fa9*G\\V5\u00cf\u00da \u0088h5\u0010\u0018\u00fd\u0012b\u00188ke\u0002\u00d6\u0017\u00df\u00d8\u00f2\u0096AS\u00f3\u00b8\u00cc\u00eb\u00cf\u00c8;\u00dd\u0017\u001b1\u000f('U\u009dMH\u0099\u001a\u00b5H\u0092FH\u0088\u00d5\u00bf\u00c9\u009fQ|\u009e\u0001\u00c0\u00c5-j\u0096\"\u001e\u00dd\u0015l\u00ef#t\u00c8t\u00f3'\u00ee\u008b\u0018\u00c0GxO\u00d1\u00d6\u000e\u0086\u0088T\u00d2)\u00dc\u0012\u00c1\u00f6\u00cd\u00a8(\u00b6\u0019\\_\u008f\u0010\u00f0(\u00b0Qv\u00e7\u00d8yI\u008f\u00da\u00d4\u008b:\u0086\u00e6 \u001a%3\u0019=\u008d\u00c5EQk\u00cd\u00f6\u00df\\@\u00be;\u001d\u001az\u009f\u00a0\u0096\u00b8h\u00cc\u00bfe7\u00de#\u00dc\u0018\u00faC\u00b8h\u0002oO\u00a2\u0080+\u0001\u00d7%\u00d7-\u00c1* .s\u00153:^ \u0017v)\u00ad{\u00a7\u00d9\u0086KG&z\u00d6&\u0005\u00b5\u00b4\u0085\u007f]W\u00b2\u00b0\u00c6\u0089\"\u00c5/+\u00c0\u0019\u00f9\u0010\u008a\u00a6\u00f42@&\u00cfIXa\u00f5\u00b4-\u009cQl\u0018\u0016z\u00e74%\u00a1\u00e8\u00c6\u001e\u00e7h\u000e\u0090\u0018\u00b7\u001c\u0094\u00dc\u0092ygJ\u00be\u00e7\u0018\u0098l\u00d3+\u001d\u00f9\u00d4\u0017F\u00c9i\u000f\u00cb>-_@\u001f\u00b8o\u00c3P\u00db\u00f1 \u0083\u00be~gt\u00979Z\u00f1\u0087\u00f1\u00caR;\u00da\u0015\u00d7\u001b^\u00ca\u00816\u0010\u009e>\u00a0\u00a8\u000fC~\u00ef9\u0010e\u00ff\u001d\u00da\u00a6e7VW\u0092\u0007ZQ\u00e3\u00c0\u00cf\u0018Z\u00aa\u0095\u009aa\u00bf\u00cd\u00e6\u00e9\u00e8\u00e78\u00c4\u00d54\u0015-'\u00dae\u009a\u00f0\u00a2\u00b6";
        var15_6 = "\u00ea\u0015\u00d0_\u00f7\u00f2\u00d5\u0007\u0006\u008f\u0094\u00c7\u00d5\u0088n=\u0093\u001f|\u00df\u00fb\u0010\u001dT\u0010r\u00c8\u00af\b\u00ff\u00c3}H\u0096\u00c8\u00b0}\u00b5,\u00dfU\u0018\u00bc\u00cb\u00bd\u00f3\u00a0T\u00a6\u00ca[\u0082\u000eF\u0099\u0092\u00cdC\u0099\u0017\u00f1\u00cb\u0005\u0083\u0017\u00ec\u0010\u00bd\u000fG!\u00ac\u009f+\u00d9\u00b5\u00b5\u00c5B\u0091 \u00f0\u00b1\u0018\u00d7z\u00cev\u00c1\u0003\u00d40n.\u00bd\u00f4\u00a9\u0006\u00e1\u008c\u00f8&C\u00ce%\u0002#\u009c 3_&\u00d2tWw\u00cb\u00c4\u00b6A\u000b\u000f\u00c3Fd\u009a\u00f47p\u001b\u00c0\u00c5\u00b7\u0085\u00e9\u0089\u0086\u00d3\u00c9\u00efK\u0018n\u0082h\u0003\u00fe\u00d67\u00e64\u000e\u00bf\u0082\u00a9\u008c\u008d\u0004\u00af\u0015\u0013\u0014aF\u00bf\u00d4 .1,\u0006o\u00b4\u0083\u00c3\u00ac\u008f\u0095\u00db\u00125\u00fc\u00b2\u00cf\u00d3\u00b8\u00d0\u00f2j\u00e7*\u00ef\u00faN\u00b4=j\u0098\u00f6 \u00db\u0084O\u00a1G\u0011&o\u009b>\u0081[U\u00d3(\u00c0\u00ff!\u0006,\u00b9\u00bc\u00d7>Rjm\b\u0099y\u007f\u00de \u00f3\u0082\u00b2$yy\u00dd\u00baT\u0006\u001d\u0094\u0080\u00b5\u00fa9*G\\V5\u00cf\u00da \u0088h5\u0010\u0018\u00fd\u0012b\u00188ke\u0002\u00d6\u0017\u00df\u00d8\u00f2\u0096AS\u00f3\u00b8\u00cc\u00eb\u00cf\u00c8;\u00dd\u0017\u001b1\u000f('U\u009dMH\u0099\u001a\u00b5H\u0092FH\u0088\u00d5\u00bf\u00c9\u009fQ|\u009e\u0001\u00c0\u00c5-j\u0096\"\u001e\u00dd\u0015l\u00ef#t\u00c8t\u00f3'\u00ee\u008b\u0018\u00c0GxO\u00d1\u00d6\u000e\u0086\u0088T\u00d2)\u00dc\u0012\u00c1\u00f6\u00cd\u00a8(\u00b6\u0019\\_\u008f\u0010\u00f0(\u00b0Qv\u00e7\u00d8yI\u008f\u00da\u00d4\u008b:\u0086\u00e6 \u001a%3\u0019=\u008d\u00c5EQk\u00cd\u00f6\u00df\\@\u00be;\u001d\u001az\u009f\u00a0\u0096\u00b8h\u00cc\u00bfe7\u00de#\u00dc\u0018\u00faC\u00b8h\u0002oO\u00a2\u0080+\u0001\u00d7%\u00d7-\u00c1* .s\u00153:^ \u0017v)\u00ad{\u00a7\u00d9\u0086KG&z\u00d6&\u0005\u00b5\u00b4\u0085\u007f]W\u00b2\u00b0\u00c6\u0089\"\u00c5/+\u00c0\u0019\u00f9\u0010\u008a\u00a6\u00f42@&\u00cfIXa\u00f5\u00b4-\u009cQl\u0018\u0016z\u00e74%\u00a1\u00e8\u00c6\u001e\u00e7h\u000e\u0090\u0018\u00b7\u001c\u0094\u00dc\u0092ygJ\u00be\u00e7\u0018\u0098l\u00d3+\u001d\u00f9\u00d4\u0017F\u00c9i\u000f\u00cb>-_@\u001f\u00b8o\u00c3P\u00db\u00f1 \u0083\u00be~gt\u00979Z\u00f1\u0087\u00f1\u00caR;\u00da\u0015\u00d7\u001b^\u00ca\u00816\u0010\u009e>\u00a0\u00a8\u000fC~\u00ef9\u0010e\u00ff\u001d\u00da\u00a6e7VW\u0092\u0007ZQ\u00e3\u00c0\u00cf\u0018Z\u00aa\u0095\u009aa\u00bf\u00cd\u00e6\u00e9\u00e8\u00e78\u00c4\u00d54\u0015-'\u00dae\u009a\u00f0\u00a2\u00b6".length();
        var12_7 = 24;
        var11_8 = -1;
        block4: while (true) {
            v3 = ++var11_8;
            v4 = var13_5.substring(v3, v3 + var12_7);
            v5 = -1;
            if (true) ** GOTO lbl34
            block5: while (true) {
                var13_5 = "\u00dc\u0002\u009e\u0007\u00a9'-P\u00c7x\u00c3aa\u00d4\u00bc\u00f8/\u00ffZQ\u00bd\u00d3\u00c8|1\u008e\u00a2\u00ba~\u00b8\b\u00c5\u0018#\u00f0\u00b3\u00a0\u000fnX\u00c2\u00bc\u00c6\u0003p0\u001a/\u00dc-\u00d5\u00b5\u00a0E\u00f9\u0080\n";
                var15_6 = "\u00dc\u0002\u009e\u0007\u00a9'-P\u00c7x\u00c3aa\u00d4\u00bc\u00f8/\u00ffZQ\u00bd\u00d3\u00c8|1\u008e\u00a2\u00ba~\u00b8\b\u00c5\u0018#\u00f0\u00b3\u00a0\u000fnX\u00c2\u00bc\u00c6\u0003p0\u001a/\u00dc-\u00d5\u00b5\u00a0E\u00f9\u0080\n".length();
                var12_7 = 32;
                var11_8 = -1;
                while (true) {
                    v6 = ++var11_8;
                    v4 = var13_5.substring(v6, v6 + var12_7);
                    v5 = 0;
lbl34:
                    // 2 sources

                    var17_9 = var9_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            var16_3[var14_4++] = ke.bOn(var17_9).intern();
                            if ((var11_8 += var12_7) >= var15_6) continue block5;
                            var12_7 = var13_5.charAt(var11_8);
                            continue block4;
                        }
                        case 0: 
                    }
                    var16_3[var14_4++] = ke.bOn(var17_9).intern();
                    if ((var11_8 += var12_7) >= var15_6) break block4;
                    var12_7 = var13_5.charAt(var11_8);
                }
                break;
            }
            break;
        }
        ke.LalEw = var16_3;
        ke.XIgNj = new String[25];
        var2_10 = Cipher.getInstance("DES/CBC/NoPadding");
        v7 = SecretKeyFactory.getInstance("DES");
        v8 = new byte[8];
        v9 = v8;
        v8[0] = (byte)(var7 >>> 56);
        var3_11 = 1;
        while (true) {
            if (var3_11 >= 8) {
                var2_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var4_13 = 3058143713406364999L;
                var6_14 = var2_10.doFinal(new byte[]{(byte)(var4_13 >>> 56), (byte)(var4_13 >>> 48), (byte)(var4_13 >>> 40), (byte)(var4_13 >>> 32), (byte)(var4_13 >>> 24), (byte)(var4_13 >>> 16), (byte)(var4_13 >>> 8), (byte)var4_13});
                var0_12 = ((long)var6_14[0] & 255L) << 56 | ((long)var6_14[1] & 255L) << 48 | ((long)var6_14[2] & 255L) << 40 | ((long)var6_14[3] & 255L) << 32 | ((long)var6_14[4] & 255L) << 24 | ((long)var6_14[5] & 255L) << 16 | ((long)var6_14[6] & 255L) << 8 | (long)var6_14[7] & 255L;
                ke.eNDuK = (int)var0_12;
                return;
            }
            v9 = v9;
            v9[var3_11] = (byte)(var7 << var3_11 * 8 >>> 56);
            ++var3_11;
        }
    }

    public static void bOi(jN jN2, jO jO2, int n) {
        block12: {
            jN jN3;
            block11: {
                int n2;
                CallSite callSite;
                jN jN4;
                iS[] iSArray;
                long l;
                block9: {
                    block10: {
                        l = KQukh ^ 0x55E044CA7BFBL;
                        jN2.bJl();
                        jN2.bJx((String)((Object)ke.bOq("f", (int)24290, (long)(0x748ADF8135380514L ^ l))), jO2.bKf().bOd());
                        iS[] iSArray2 = kd.bOg();
                        jN2.bJx((String)((Object)ke.bOq("f", (int)1757, (long)(0x102CEC758E0D5D2FL ^ l))), jO2.bKg().bOr());
                        jN2.bJx((String)((Object)ke.bOq("f", (int)8529, (long)(0x40FF87FC19927ABCL ^ l))), n);
                        iSArray = iSArray2;
                        jN2.bJr((String)((Object)ke.bOq("f", (int)13896, (long)(0xDF13B22D460EDBCL ^ l))), jO2.bKd(), jO2.bKe());
                        ld ld2 = ke.bOk(jO2);
                        try {
                            jN2.bJt((String)((Object)ke.bOq("f", (int)27844, (long)(0x7CF1E4DEA5D03724L ^ l))), ld2.topLeft(), ld2.bottomLeft(), ld2.topRight(), ld2.bottomRight());
                            jN2.bJq((String)((Object)ke.bOq("f", (int)26498, (long)(0x7F067799CBE63C7BL ^ l))), jO2.bKm());
                            jN2.bJq((String)((Object)ke.bOq("f", (int)25324, (long)(0x62C6B2EC14B63908L ^ l))), jO2.bKn());
                            jN2.bJq((String)((Object)ke.bOq("f", (int)8038, (long)(0x6E2353749D6C487L ^ l))), jO2.bKo());
                            jN2.bJq((String)((Object)ke.bOq("f", (int)28917, (long)(0x1390D6293773AB1FL ^ l))), jO2.bKp());
                            jN2.bJu((String)((Object)ke.bOq("f", (int)16765, (long)(0x947715EBD6B9A8CL ^ l))), jF.bHw());
                            jN4 = jN2;
                            callSite = ke.bOq("f", (int)19513, (long)(0x45AF258241CE97DBL ^ l));
                            n2 = jO2.bKl();
                            if (iSArray == null) break block9;
                            if (n2 == 0) break block10;
                        }
                        catch (MatchException matchException) {
                            throw ke.bOm(matchException);
                        }
                        n2 = 1;
                        break block9;
                    }
                    n2 = 0;
                }
                try {
                    try {
                        jN4.bJx((String)((Object)callSite), n2);
                        jN2.bJq((String)((Object)ke.bOq("f", (int)565, (long)(0x7070675A704A59DAL ^ l))), jO2.bKq());
                        jN2.bJq((String)((Object)ke.bOq("f", (int)25017, (long)(0x71C0B7390F573A5CL ^ l))), jO2.bKr());
                        jN3 = jN2;
                        if (iSArray == null) break block11;
                        jN3.bJq((String)((Object)ke.bOq("f", (int)5722, (long)(0x72F765AF9F224DB6L ^ l))), jO2.bKs());
                        if (n != 1) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ke.bOm(matchException);
                    }
                    jN3 = jN2;
                }
                catch (MatchException matchException) {
                    throw ke.bOm(matchException);
                }
            }
            ke.bOl(jN3, jO2.bKj());
        }
        try {
            if (iS.bwL() == null) {
                kd.bOf(new iS[4]);
            }
        }
        catch (MatchException matchException) {
            throw ke.bOm(matchException);
        }
    }

    public static void bOj(jN jN2, jO jO2, float f, float f2) {
        long l = KQukh ^ 0x6E4B357937B7L;
        ke.bOi(jN2, jO2, 2);
        jN2.bJr((String)((Object)ke.bOq("f", (int)29997, (long)(0x6287506EE540E294L ^ l))), f, f2);
    }

    public static void bOl(jN jN2, la la2) {
        int n;
        iS[] iSArray;
        long l;
        block5: {
            int n2;
            block6: {
                l = KQukh ^ 0x341D88647624L;
                iS[] iSArray2 = kd.bOg();
                jN2.bJx((String)((Object)ke.bOq("f", (int)17111, (long)(0x7F68D668D96194EFL ^ l))), la2.bXd().bWw());
                iSArray = iSArray2;
                try {
                    try {
                        jN2.bJu((String)((Object)ke.bOq("f", (int)8693, (long)(0x3973B8FDA7BFF7DAL ^ l))), la2.bXe().con());
                        jN2.bJu((String)((Object)ke.bOq("f", (int)19477, (long)(0x746A42735D351A22L ^ l))), la2.bXg().con());
                        jN2.bJu((String)((Object)ke.bOq("f", (int)20692, (long)(0x774862365B2F86E0L ^ l))), la2.bXf().con());
                        jN2.bJu((String)((Object)ke.bOq("f", (int)14515, (long)(0x4766B592BFA2EE82L ^ l))), la2.bXh().con());
                        jN2.bJq((String)((Object)ke.bOq("f", (int)15179, (long)(0x783F4B38DC8E6D7DL ^ l))), la2.bXi());
                        n2 = la2.bWQ();
                        if (iSArray == null) break block5;
                        if (n2 != 0) break block6;
                    }
                    catch (MatchException matchException) {
                        throw ke.bOm(matchException);
                    }
                    jN2.bJx((String)((Object)ke.bOq("f", (int)24896, (long)(0x3491811C54A1376CL ^ l))), 0);
                    return;
                }
                catch (MatchException matchException) {
                    throw ke.bOm(matchException);
                }
            }
            jN2.bJx((String)((Object)ke.bOq("f", (int)751, (long)(0x14508BB3EA0FD4D3L ^ l))), la2.bWR());
            n2 = n = 0;
        }
        while (n < la2.bWR()) {
            jN2.bJu((String)((Object)ke.bOq("f", (int)27633, (long)(0x27132CDE01DBDD9L ^ l))) + n + "]", la2.bWS(n).con());
            jN2.bJq((String)((Object)ke.bOq("f", (int)1572, (long)(0x6592966A51E5501DL ^ l))) + n + "]", la2.bWT(n));
            ++n;
            if (iSArray != null) continue;
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ke.class, "bOp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
