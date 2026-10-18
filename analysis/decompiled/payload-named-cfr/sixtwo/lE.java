/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  offline.bootstrap.Diagnostics
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
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.CompletionException;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import offline.bootstrap.Diagnostics;
import sixtwo.gb;
import sixtwo.lj;
import sixtwo.lo;
import sixtwo.lp;
import sixtwo.lt;
import sixtwo.lv;
import sixtwo.nV;
import sixtwo.rD;

public class lE {
    public static lj joxgd;
    public static lj WTzbi;
    public static lj SVnNc;
    public static lj ePKsc;
    public static lj WxpHL;
    private static String[] KNBTp;
    private static final long aPLuQ;
    private static final String[] Pevad;
    private static final String[] hnPxO;
    private static final Map gVXsZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                lE.aPLuQ = gb.aYR(3516518835491444451L, -1940516360138328761L, MethodHandles.lookup().lookupClass()).a(132598186151220L);
                lE.gVXsZ = new HashMap<K, V>(13);
                var0 = lE.aPLuQ ^ 59853210386710L;
                lE.cfu(null);
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[5];
                var7_4 = 0;
                var6_5 = "\u0019\u00c0y\u0007||\u00a9S\u00c4\u00908M\u0099\u00e6\u00c1\u00fc\"\u00ec\u0099,\u0096f\u00cd\n\u0010YF\u00ac\u00bd\u00c3\u00f2\u00bc\u00a6\u0019\u00a6\u0096N\u0092\u00ba\u001b\u00b9\u0010K\u00e6v\u00feL\u00edj\u0092\u00d6v\u00c0\u0018\u00dbx\u00a7\u00ba";
                var8_6 = "\u0019\u00c0y\u0007||\u00a9S\u00c4\u00908M\u0099\u00e6\u00c1\u00fc\"\u00ec\u0099,\u0096f\u00cd\n\u0010YF\u00ac\u00bd\u00c3\u00f2\u00bc\u00a6\u0019\u00a6\u0096N\u0092\u00ba\u001b\u00b9\u0010K\u00e6v\u00feL\u00edj\u0092\u00d6v\u00c0\u0018\u00dbx\u00a7\u00ba".length();
                var5_7 = 24;
                var4_8 = -1;
lbl21:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lE.cfw(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00ff\u00ff\u00fe}\u00ad\u00f6\u0097rh\u00ceo\u009f\u00a3\u00ba\u000b` \u0015b\u00a6W\u008f\"\u0098\u00ec\u0011\u0006l\u00ec\u00a3\u00a1\u00d8\u00cbe\u00db\u0083`\u00d8\u0084j\u00ef\u00eb>\u00cd\u0010 \u00c4\u00e3\u00e0";
                    var8_6 = "\u00ff\u00ff\u00fe}\u00ad\u00f6\u0097rh\u00ceo\u009f\u00a3\u00ba\u000b` \u0015b\u00a6W\u008f\"\u0098\u00ec\u0011\u0006l\u00ec\u00a3\u00a1\u00d8\u00cbe\u00db\u0083`\u00d8\u0084j\u00ef\u00eb>\u00cd\u0010 \u00c4\u00e3\u00e0".length();
                    var5_7 = 16;
                    var4_8 = -1;
lbl35:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lE.cfw(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
            switch (v5) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        lE.Pevad = var9_3;
        lE.hnPxO = new String[5];
    }

    public static void cfu(String[] stringArray) {
        KNBTp = stringArray;
    }

    private static String cfx(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4187;
        if (hnPxO[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])gVXsZ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gVXsZ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lE", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = Pevad[n3].getBytes("ISO-8859-1");
            lE.hnPxO[n3] = lE.cfw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return hnPxO[n3];
    }

    private static String cfw(byte[] byArray) {
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

    private static Object cfy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = lE.cfx(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public static String[] cfv() {
        return KNBTp;
    }

    private static CallSite cfz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lE" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CompletableFuture<lp> cfo(String string) {
        return new lo().bZY(string).bZX(string).bZZ();
    }

    public static CompletableFuture<Void> cfn() {
        long l2 = aPLuQ ^ 0x4546410F9118L;
        CompletableFuture<lp> completableFuture = lE.cfo((String)((Object)lE.cfz("v", (int)7357, (long)(0x3727A9EE0D1FCFF3L ^ l2))));
        CompletableFuture<lp> completableFuture2 = lE.cfo((String)((Object)lE.cfz("v", (int)989, (long)(0x451449873052D090L ^ l2))));
        CompletableFuture<lp> completableFuture3 = lE.cfo((String)((Object)lE.cfz("v", (int)20278, (long)(0x97BFFBDAAC1C79L ^ l2))));
        CompletableFuture<lp> completableFuture4 = lE.cfo((String)((Object)lE.cfz("v", (int)13395, (long)(0x7F88EA4FDB8E71FL ^ l2))));
        CompletableFuture<lp> completableFuture5 = lE.cfo((String)((Object)lE.cfz("v", (int)4009, (long)(0x601F0751E9525CE2L ^ l2))));
        return ((CompletableFuture)CompletableFuture.allOf(completableFuture, completableFuture2, completableFuture3, completableFuture4, completableFuture5).thenCompose(void_ -> rD.dlmvG.submit(() -> {
            joxgd = lE.cfp((lp)completableFuture.join());
            WTzbi = lE.cfp((lp)completableFuture2.join());
            SVnNc = lE.cfp((lp)completableFuture3.join());
            ePKsc = lE.cfp((lp)completableFuture4.join());
            WxpHL = lE.cfp((lp)completableFuture5.join());
        }))).exceptionally(throwable -> {
            Throwable throwable2 = nV.czP(0, throwable);
            Diagnostics.reportProtectedFailure((Throwable)throwable2);
            throw new CompletionException(throwable2);
        });
    }

    private static lj cfp(lp lp2) {
        lv lv2 = new lv(lp2.caj());
        rD.dlmvG.execute(() -> lv2.cbk(lt.caW(false)));
        return new lj(lv2, lp2.cak().bYk(), lp2.cak().bYl(), lp2.cal(), lp2.cam());
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lE.class, "cfy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

