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
import java.util.Objects;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kP;
import sixtwo.lK;
import sixtwo.lN;

public final class lM<T>
implements lK {
    private final kP<T> cerwd;
    private final lN FfavT;
    private final Consumer<kP<T>> yArrX;
    private final T WHRmz;
    private static final long QfUmj;
    private static final String[] xkIVR;
    private static final String[] GCnfJ;
    private static final Map LEvMt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public lN batchKey() {
        return this.FfavT;
    }

    public lM(kP<T> kP2, lN lN2, Consumer<kP<T>> consumer, T t) {
        long l2 = QfUmj ^ 0x74588EF2CC53L;
        this.cerwd = Objects.requireNonNull(kP2, (String)((Object)lM.cgF("t", (int)17782, (long)(0x67D1AB4A083E9C1DL ^ l2))));
        this.FfavT = Objects.requireNonNull(lN2, (String)((Object)lM.cgF("t", (int)22304, (long)(0x546928070A0C0E4AL ^ l2))));
        this.yArrX = Objects.requireNonNull(consumer, (String)((Object)lM.cgF("t", (int)12239, (long)(0x3F3233A8B3EC76A7L ^ l2))));
        boolean bl2 = lN.b();
        try {
            this.WHRmz = Objects.requireNonNull(t, (String)((Object)lM.cgF("t", (int)31912, (long)(0x5D6BFFCF4C5EA5C1L ^ l2))));
            if (bl2) {
                iS.bwK("WqMgDc");
            }
        }
        catch (MatchException matchException) {
            throw lM.cgB(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                lM.QfUmj = gb.aYR(5826815846149890854L, -1201297134104340984L, MethodHandles.lookup().lookupClass()).a(271762146876068L);
                lM.LEvMt = new HashMap<K, V>(13);
                var0 = lM.QfUmj ^ 100615210249597L;
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
                var9_3 = new String[4];
                var7_4 = 0;
                var6_5 = "\u00a3\u00ca\u0098\u00c1\u00ee\u00ac\u00cak\u008f\u00af\u00c9\u009c\u0081\u00ee\u00f1\u00cfDi\u00d1\u00aey\u0015\u0096\u00f6\u0010\u008dD\u00e9\u00d9\u000e\u0089~\u00b2\u00f5;6\u00ec\u00aao \u0083";
                var8_6 = "\u00a3\u00ca\u0098\u00c1\u00ee\u00ac\u00cak\u008f\u00af\u00c9\u009c\u0081\u00ee\u00f1\u00cfDi\u00d1\u00aey\u0015\u0096\u00f6\u0010\u008dD\u00e9\u00d9\u000e\u0089~\u00b2\u00f5;6\u00ec\u00aao \u0083".length();
                var5_7 = 24;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lM.cgC(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "Q\u00c9\u00c9\u00e8{ W\u00b2w\u00b5\u00e6\u00924\u00d8j\u0083n+\u00eb\u0093\u0097\u00e5\u00c0\u00ba\u0086\u00b1K\u0090\u000fc}\u00b9\u0018\u00d1!\u00e9\u009c\u001c4y\u00d1\u00c1\u0013\u00f7@\u0000)\u0010\u0006P\u00fde\u00af\u00a6\u0014W\u0012";
                    var8_6 = "Q\u00c9\u00c9\u00e8{ W\u00b2w\u00b5\u00e6\u00924\u00d8j\u0083n+\u00eb\u0093\u0097\u00e5\u00c0\u00ba\u0086\u00b1K\u0090\u000fc}\u00b9\u0018\u00d1!\u00e9\u009c\u001c4y\u00d1\u00c1\u0013\u00f7@\u0000)\u0010\u0006P\u00fde\u00af\u00a6\u0014W\u0012".length();
                    var5_7 = 32;
                    var4_8 = -1;
lbl34:
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
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = lM.cgC(var10_9).intern();
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
lbl51:
                // 1 sources

                ** continue;
            }
        }
        lM.xkIVR = var9_3;
        lM.GCnfJ = new String[4];
    }

    @Override
    public void endBatch() {
        this.cerwd.endBatch();
    }

    private static String cgD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5409;
        if (GCnfJ[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])LEvMt.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LEvMt.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lM", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = xkIVR[n3].getBytes("ISO-8859-1");
            lM.GCnfJ[n3] = lM.cgC(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return GCnfJ[n3];
    }

    private static CallSite cgF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cgC(byte[] byArray) {
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

    private static MatchException cgB(MatchException matchException) {
        return matchException;
    }

    private static Object cgE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = lM.cgD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @Override
    public void beginBatch() {
        this.yArrX.accept(this.cerwd);
    }

    @Override
    public void renderIntoBatch() {
        this.cerwd.render(this.WHRmz);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lM.class, "cgE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

