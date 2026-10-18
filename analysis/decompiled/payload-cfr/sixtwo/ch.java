/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.ItemCooldownsAccessor
 *  net.minecraft.class_1792
 *  net.minecraft.class_2561
 *  net.minecraft.class_2960
 *  net.minecraft.class_408
 *  net.minecraft.class_7923
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
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.ItemCooldownsAccessor;
import net.minecraft.class_1792;
import net.minecraft.class_2561;
import net.minecraft.class_2960;
import net.minecraft.class_408;
import net.minecraft.class_7923;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jc;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.mP;
import sixtwo.mz;
import sixtwo.rD;
import sixtwo.rj;

public class ch
extends co {
    private final Map<String, mz<class_1792, mP>> snpNi;
    private static final long LVRos;
    private static final String[] AQbcv;
    private static final String[] ODNiP;
    private static final Map oNUTQ;
    private static final long[] eiaau;
    private static final Integer[] TxnZp;
    private static final Map PqIzN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ch() {
        long l = LVRos ^ 0x594FFFFDB810L;
        int[] nArray = new int[ch.Qr("q", (int)29172, (long)(0x6FE6C5C40025A4C4L ^ l))];
        nArray[0] = (int)ch.Qr("q", (int)188, (long)(0xDCE84F4459D5588L ^ l));
        nArray[1] = (int)ch.Qr("q", (int)27308, (long)(0xDE9CD66E0FC3F91L ^ l));
        nArray[2] = (int)ch.Qr("q", (int)29444, (long)(0x66C5A68697042638L ^ l));
        nArray[3] = (int)ch.Qr("q", (int)15374, (long)(0x705DB75AD5DFE93CL ^ l));
        nArray[4] = (int)ch.Qr("q", (int)3323, (long)(0x4EC36507462B59CAL ^ l));
        nArray[5] = (int)ch.Qr("q", (int)29444, (long)(0x66C5A68697042638L ^ l));
        nArray[ch.Qr("q", (int)3609, (long)(0x3CA54EA8A8F25B2AL ^ l))] = (int)ch.Qr("q", (int)20613, (long)(0x7B6FA0186C8105BEL ^ l));
        nArray[ch.Qr("q", (int)29213, (long)(0x3450544EB481A724L ^ l))] = (int)ch.Qr("q", (int)14204, (long)(0x2A126F9A60706244L ^ l));
        nArray[ch.Qr("q", (int)21791, (long)(0x3FB07ACFA3610029L ^ l))] = (int)ch.Qr("q", (int)17539, (long)(0x6E17E1FDB85D91BDL ^ l));
        super(nArray, lf.znKtW);
        this.snpNi = new TreeMap<String, mz<class_1792, mP>>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    ch.LVRos = gb.aYR(7741857583350899870L, -6443874923026755424L, MethodHandles.lookup().lookupClass()).a(107885206058094L);
                    ch.oNUTQ = new HashMap<K, V>(13);
                    var11 = ch.LVRos ^ 68197182066007L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u00a1\u00f8q\u008a\u0090z\u0080\u00ad\u00d7\u00fd\u00ae\u00dd_$\u00fe\u0097 \u0093\u00a1\u00a80B\u0081\u009d\u008a/\u00c4o\u00b3\u00ce\u007f\u00df\u00d3|\u00fd\u009f\u00e2\u00faI\u001cO\u00b1\u00eb\u00a0\u00c9\u00ec\u00eb\u00a9\u009d";
                    var19_6 = "\u00a1\u00f8q\u008a\u0090z\u0080\u00ad\u00d7\u00fd\u00ae\u00dd_$\u00fe\u0097 \u0093\u00a1\u00a80B\u0081\u009d\u008a/\u00c4o\u00b3\u00ce\u007f\u00df\u00d3|\u00fd\u009f\u00e2\u00faI\u001cO\u00b1\u00eb\u00a0\u00c9\u00ec\u00eb\u00a9\u009d".length();
                    var16_7 = 16;
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
                        var20_3[var18_4++] = ch.Ql(var21_9).intern();
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
                ch.AQbcv = var20_3;
                ch.ODNiP = new String[2];
                ch.PqIzN = new HashMap<K, V>(13);
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
                var6_12 = new long[15];
                var3_13 = 0;
                var4_14 = "\u0017\u00a9)\u00e8e\u00c2\u00e8j\u0084C\u00d0\u0013\u001akOg\u0018\u00b8\u00d9$\u0000N+\u0002{\u00b2\u00db\u00bfT\u0088) u\"?F\u001f\u00d3\u00c71\u0096H\u00fbs\u00e3b\u00e3\b\u0000\u00c7\u008f\u00cb\u0000I\u00e2\u00d8\u00f1\u009a\u0014\u00b9\u00a0B\u00d2\"\u00deGy8GD\u00f8\u008e0cC\u009ejx\u00a3\u0099\u007fe\u00ff\u0000\u007f\u00de/\u00d8\u00bdc\u00f4t\u008d7\b5\u00ae\u001dq\u009ao`\u00d0\u00ee";
                var5_15 = "\u0017\u00a9)\u00e8e\u00c2\u00e8j\u0084C\u00d0\u0013\u001akOg\u0018\u00b8\u00d9$\u0000N+\u0002{\u00b2\u00db\u00bfT\u0088) u\"?F\u001f\u00d3\u00c71\u0096H\u00fbs\u00e3b\u00e3\b\u0000\u00c7\u008f\u00cb\u0000I\u00e2\u00d8\u00f1\u009a\u0014\u00b9\u00a0B\u00d2\"\u00deGy8GD\u00f8\u008e0cC\u009ejx\u00a3\u0099\u007fe\u00ff\u0000\u007f\u00de/\u00d8\u00bdc\u00f4t\u008d7\b5\u00ae\u001dq\u009ao`\u00d0\u00ee".length();
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
                    var4_14 = "\u009d+\u00d0\u0004\u00c0\u0096\u00c2\u0086\u0015e\u00ae\u0016\u0003\u00bd\u00ec\u00b9";
                    var5_15 = "\u009d+\u00d0\u0004\u00c0\u0096\u00c2\u0086\u0015e\u00ae\u0016\u0003\u00bd\u00ec\u00b9".length();
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
        ch.eiaau = var6_12;
        ch.TxnZp = new Integer[15];
    }

    private static CallSite Qo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ch" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Qk(MatchException matchException) {
        return matchException;
    }

    private static String Ql(byte[] byArray) {
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

    private static String Qm(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5983;
        if (ODNiP[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])oNUTQ.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    oNUTQ.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ch", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = AQbcv[n2].getBytes("ISO-8859-1");
            ch.ODNiP[n2] = ch.Ql(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ODNiP[n2];
    }

    private static Object Qn(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ch.Qm(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int Qp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x49C3;
        if (TxnZp[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = eiaau[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])PqIzN.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PqIzN.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ch", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ch.TxnZp[n2] = n3;
        }
        return TxnZp[n2];
    }

    private static int Qq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ch.Qp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite Qr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ch" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    protected void NV(lC var1_1) {
        block22: {
            block19: {
                var2_2 = ch.LVRos ^ 72229586193725L;
                super.NV(var1_1);
                var5_3 = lE.joxgd.bYM(7.0f);
                var6_4 = rD.dlM();
                var7_5 = 22.0f;
                var8_6 = null;
                var4_7 = ca.OX();
                var9_8 = this.snpNi.values().iterator();
                while (var9_8.hasNext()) {
                    block17: {
                        block18: {
                            var10_9 = var9_8.next();
                            var11_10 = var10_9.right().getFadeAnimation();
                            try {
                                try {
                                    v0 = var11_10.dhj();
                                    v1 = 0.0f;
                                    if (var4_7) break block17;
                                    cfr_temp_0 = v0 - v1;
                                    v2 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                    if (!var4_7) {
                                    }
                                    ** GOTO lbl49
                                }
                                catch (MatchException v3) {
                                    throw ch.Qk(v3);
                                }
                                if (v2) break block18;
                            }
                            catch (MatchException v4) {
                                throw ch.Qk(v4);
                            }
                            var8_6 = var10_9;
                            if (!var4_7) continue;
                        }
                        v0 = -4.5f;
                        v1 = 4.5f * var11_10.dhj();
                    }
                    var12_11 = v0 + v1;
                    var13_13 = this.toIeR + 7.0f * var11_10.dhj();
                    var14_15 = this.QWaAn + var7_5 + var12_11 + jf.bAH(8.0f, 18.0f);
                    var15_16 = jF.bHw()[3];
                    jF.bHz(1.0f, 1.0f, 1.0f, var15_16 * var11_10.dhj());
                    var1_1.cdZ((class_1792)var10_9.left(), var13_13, var14_15, 0.5f).bGv();
                    jF.bHz(1.0f, 1.0f, 1.0f, var15_16);
                    var7_5 += 18.0f * var11_10.dhj();
                    if (!var4_7) continue;
                }
                var7_5 = 22.0f;
                ch.zXCXX.bUa(var5_3);
                var9_8 = this.snpNi.values().iterator();
                do lbl-1000:
                // 3 sources

                {
                    block20: {
                        block21: {
                            v2 = var9_8.hasNext();
lbl49:
                            // 2 sources

                            if (!v2) break;
                            var10_9 = var9_8.next();
                            var11_10 = var10_9.right().getFadeAnimation();
                            var12_12 = var10_9.right().getTimerAnimation();
                            try {
                                try {
                                    try {
                                        v5 = var11_10;
                                        if (var4_7) break block19;
                                        if (var4_7) break block20;
                                    }
                                    catch (MatchException v6) {
                                        throw ch.Qk(v6);
                                    }
                                    if (v5.dhj() != 0.0f) break block21;
                                }
                                catch (MatchException v7) {
                                    throw ch.Qk(v7);
                                }
                                if (!var4_7) ** GOTO lbl-1000
                            }
                            catch (MatchException v8) {
                                throw ch.Qk(v8);
                            }
                        }
                        v9 = var10_9.left();
                    }
                    var13_14 = ((class_1792)v9).method_7854();
                    var14_15 = -4.5f + 4.5f * var11_10.dhj();
                    var15_17 = var6_4.bjb().coa(255.0f * var11_10.dhj());
                    var16_18 = class_2561.method_43471((String)var13_14.method_7909().method_7876()).getString();
                    var17_19 = this.toIeR + 13.0f + 7.0f * var11_10.dhj();
                    var18_20 = this.QWaAn + var7_5 + var14_15 + jf.bAH(var5_3.cat(), 18.0f);
                    var1_1.cer(var5_3, var16_18, var17_19, var18_20, var15_17);
                    var19_21 = jc.bzh(var13_14.method_7909()) / ch.Qr("q", (int)17692, (long)(6183947686034564363L ^ var2_2));
                    var20_22 = var19_21 / ch.Qr("q", (int)24731, (long)(406102226665652353L ^ var2_2));
                    var21_23 = var19_21 % ch.Qr("q", (int)31819, (long)(3100143968948903001L ^ var2_2));
                    var22_24 = String.format((String)ch.Qo("a", (int)29186, (long)(4117778939314192981L ^ var2_2)), new Object[]{var20_22});
                    var23_25 = String.format((String)ch.Qo("a", (int)17271, (long)(4497665182782452513L ^ var2_2)), new Object[]{var20_22, var21_23});
                    var24_26 = var5_3.cao(var22_24);
                    var25_27 = var5_3.cao(var23_25);
                    var26_28 = this.toIeR + this.jTsqG - 7.0f * var11_10.dhj();
                    var1_1.cer(var5_3, var22_24, var26_28 - var25_27, var18_20, var15_17);
                    var12_12.kS(true, var15_17);
                    var12_12.kO(var21_23);
                    var12_12.sW(var26_28 - var25_27 + var24_26, var18_20);
                    var12_12.su(var1_1);
                    var7_5 += 18.0f * var11_10.dhj();
                } while (!var4_7);
                try {
                    try {
                        ch.zXCXX.endBatch();
                        v5 = var8_6;
                        if (var4_7) break block19;
                        if (v5 == null) break block22;
                    }
                    catch (MatchException v10) {
                        throw ch.Qk(v10);
                    }
                    v5 = var8_6.left();
                }
                catch (MatchException v11) {
                    throw ch.Qk(v11);
                }
            }
            var9_8 = class_2561.method_43471((String)((class_1792)v5).method_7876()).getString();
            this.snpNi.remove(var9_8, var8_6);
        }
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @Override
    public void LX(lC var1_1) {
        block39: {
            block37: {
                block38: {
                    var2_2 = ch.LVRos ^ 93504270639869L;
                    this.jTsqG = 92.0f;
                    var4_3 = ca.OX();
                    this.Xtjvx = 20.0f;
                    var5_4 = ((ItemCooldownsAccessor)rD.dlmvG.field_1724.method_7357()).getCooldowns();
                    var6_5 = var5_4.entrySet().iterator();
                    while (var6_5.hasNext()) {
                        block36: {
                            block33: {
                                block35: {
                                    block34: {
                                        block31: {
                                            block32: {
                                                block29: {
                                                    block30: {
                                                        var7_6 = var6_5.next();
                                                        var8_7 = (class_2960)var7_6.getKey();
                                                        var9_8 /* !! */  = var7_6.getValue();
                                                        var10_9 = class_7923.field_41178.method_17966((class_2960)var8_7).orElse(null);
                                                        try {
                                                            try {
                                                                try {
                                                                    v0 = var10_9;
                                                                    if (!var4_3) {
                                                                        if (var4_3) break block29;
                                                                    }
                                                                    ** GOTO lbl-1000
                                                                }
                                                                catch (MatchException v1) {
                                                                    throw ch.Qk(v1);
                                                                }
                                                                if (v0 != null) break block30;
                                                            }
                                                            catch (MatchException v2) {
                                                                throw ch.Qk(v2);
                                                            }
                                                            if (!var4_3) continue;
                                                        }
                                                        catch (MatchException v3) {
                                                            throw ch.Qk(v3);
                                                        }
                                                    }
                                                    v4 = var10_9;
                                                }
                                                var11_10 = class_2561.method_43471((String)v4.method_7876()).getString();
                                                try {
                                                    try {
                                                        v5 /* !! */  = var11_10;
                                                        if (var4_3) break block31;
                                                        if (!v5 /* !! */ .isBlank()) break block32;
                                                    }
                                                    catch (MatchException v6) {
                                                        throw ch.Qk(v6);
                                                    }
                                                    if (!var4_3) continue;
                                                }
                                                catch (MatchException v7) {
                                                    throw ch.Qk(v7);
                                                }
                                            }
                                            v5 /* !! */  = var9_8 /* !! */ ;
                                        }
                                        var12_11 = (mP)v5 /* !! */ ;
                                        try {
                                            v8 = this.snpNi;
                                            v9 = var11_10;
                                            if (var4_3) break block33;
                                            if (v8.containsKey(v9)) {
                                            }
                                            ** GOTO lbl79
                                        }
                                        catch (MatchException v10) {
                                            throw ch.Qk(v10);
                                        }
                                        this.snpNi.replace(var11_10, mz.of(var10_9, var12_11));
                                        var13_12 = var12_11.getFadeAnimation();
                                        try {
                                            try {
                                                v11 = var13_12;
                                                if (var4_3) break block34;
                                                if (v11.dhj() != 0.0f) break block35;
                                            }
                                            catch (MatchException v12) {
                                                throw ch.Qk(v12);
                                            }
                                            v11 = var13_12;
                                        }
                                        catch (MatchException v13) {
                                            throw ch.Qk(v13);
                                        }
                                    }
                                    v11.dhe(1.0f);
                                }
                                try {
                                    if (!var4_3) break block36;
lbl79:
                                    // 2 sources

                                    v8 = this.snpNi;
                                    v9 = var11_10;
                                }
                                catch (MatchException v14) {
                                    throw ch.Qk(v14);
                                }
                            }
                            v8.put(v9, mz.of(var10_9, var12_11));
                        }
                        if (!var4_3) continue;
                    }
                    try {
                        try {
                            v15 = this.snpNi;
                            if (var4_3) break block37;
                            if (v15.isEmpty()) break block38;
                        }
                        catch (MatchException v16) {
                            throw ch.Qk(v16);
                        }
                        this.Xtjvx += 5.0f;
                    }
                    catch (MatchException v17) {
                        throw ch.Qk(v17);
                    }
                }
                v15 = this.snpNi;
            }
            for (Object v0 : v15.values()) lbl-1000:
            // 2 sources

            {
                var7_6 = (mz)v0;
                var8_7 = ((mP)var7_6.right()).getFadeAnimation();
                var9_8 /* !! */  = (class_1792)var7_6.left();
                var10_9 = class_7923.field_41178.method_10221(var9_8 /* !! */ );
                try {
                    var8_7.dhc(var5_4.containsKey(var10_9));
                    var8_7.dhs(rj.XzDkv);
                    this.jTsqG = Math.max(lE.joxgd.bYM(7.0f).cao(class_2561.method_43471((String)var9_8 /* !! */ .method_7876()).getString()) + 60.0f, this.jTsqG);
                    this.Xtjvx += 18.0f * var8_7.dhj();
                    if (!var4_3) {
                        if (!var4_3) continue;
                        break;
                    }
                    break block39;
                }
                catch (MatchException v18) {
                    throw ch.Qk(v18);
                }
            }
            super.LX(var1_1);
        }
    }

    @Override
    public boolean Om() {
        boolean bl;
        block10: {
            block12: {
                block11: {
                    boolean bl2;
                    boolean bl3;
                    block8: {
                        block9: {
                            long l = LVRos ^ 0x423CD4538817L;
                            bl3 = ca.OY();
                            try {
                                bl2 = this.snpNi.isEmpty();
                                if (!bl3) break block8;
                                if (bl2) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ch.Qk(matchException);
                            }
                            bl2 = true;
                            break block8;
                        }
                        bl2 = false;
                    }
                    boolean bl4 = bl2;
                    boolean bl5 = rD.dlmvG.field_1755 instanceof class_408;
                    try {
                        try {
                            try {
                                bl = bl4;
                                if (!bl3) break block10;
                                if (bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ch.Qk(matchException);
                            }
                            bl = bl5;
                            if (!bl3) break block10;
                        }
                        catch (MatchException matchException) {
                            throw ch.Qk(matchException);
                        }
                        if (!bl) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ch.Qk(matchException);
                    }
                }
                bl = true;
                break block10;
            }
            bl = false;
        }
        return bl;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ch.class, "Qn", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ch.class, "Qq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
