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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kY;
import sixtwo.kZ;
import sixtwo.la;
import sixtwo.mG;

public final class la$us {
    private final kY hIkuM;
    private final List<kZ> Wmiiq = new ArrayList<kZ>();
    private float oeGIt;
    private static final long rpPbR = gb.aYR(-8115858361901315235L, -2430594068427098782L, MethodHandles.lookup().lookupClass()).a(82141205509506L);
    private static final long[] WzIVs;
    private static final Integer[] yrHak;
    private static final Map Zlxdn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private la$us(kY kY2) {
        this.hIkuM = la.bWZ(kY2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        Zlxdn = new HashMap(13);
        long l2 = rpPbR ^ 0x7102C65E0E86L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "T:7\u001d2#g2\u00d7\u00ca\u00f9d\u008a\u00db*%";
        int n3 = "T:7\u001d2#g2\u00d7\u00ca\u00f9d\u008a\u00db*%".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        WzIVs = lArray;
        yrHak = new Integer[2];
    }

    public la$us dur(mG mG2) {
        return this.dus(mG2, mG2);
    }

    private static int duz(kZ kZ2, kZ kZ3) {
        return Float.compare(kZ2.offset(), kZ3.offset());
    }

    public la$us duu(kZ ... kZArray) {
        la$us la$us;
        block7: {
            block8: {
                long l2 = rpPbR ^ 0x2F5820564C61L;
                iS[] iSArray = la.bXl();
                try {
                    la$us = this;
                    if (iSArray == null) break block7;
                    la$us.Wmiiq.clear();
                    if (kZArray == null) break block8;
                }
                catch (MatchException matchException) {
                    throw la$us.duA(matchException);
                }
                kZ[] kZArray2 = kZArray;
                int n2 = kZArray2.length;
                int n3 = 0;
                while (n3 < n2) {
                    block9: {
                        block10: {
                            kZ kZ2 = kZArray2[n3];
                            try {
                                try {
                                    if (iSArray == null) break block9;
                                    if (kZ2 == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw la$us.duA(matchException);
                                }
                                this.Wmiiq.add(kZ2);
                            }
                            catch (MatchException matchException) {
                                throw la$us.duA(matchException);
                            }
                        }
                        ++n3;
                    }
                    if (iSArray != null) continue;
                }
            }
            la$us = this;
        }
        return la$us;
    }

    private static CallSite duD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/la$us" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int duB(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x340;
        if (yrHak[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = WzIVs[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Zlxdn.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Zlxdn.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/la$us", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            la$us.yrHak[n3] = n4;
        }
        return yrHak[n3];
    }

    private static MatchException duA(MatchException matchException) {
        return matchException;
    }

    private static int duC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = la$us.duB(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public la$us duv(float f2, mG mG2) {
        la$us la$us;
        block4: {
            block5: {
                long l2 = rpPbR ^ 0x6AC053AF3B9FL;
                iS[] iSArray = la.bXl();
                try {
                    try {
                        la$us = this;
                        if (iSArray == null) break block4;
                        if (la$us.Wmiiq.size() >= la$us.duD("e", (int)11510, (long)(0x42C6318449B11ACAL ^ l2))) break block5;
                    }
                    catch (MatchException matchException) {
                        throw la$us.duA(matchException);
                    }
                    this.Wmiiq.add(kZ.of(f2, mG2));
                }
                catch (MatchException matchException) {
                    throw la$us.duA(matchException);
                }
            }
            la$us = this;
        }
        return la$us;
    }

    public la duy() {
        long l2 = rpPbR ^ 0x3BD4FC8ECF8FL;
        iS[] iSArray = la.bXl();
        try {
            if (this.Wmiiq.isEmpty()) {
                return new la(this.hIkuM, new mG[]{mG.hoGuU, mG.hoGuU}, null, this.oeGIt);
            }
        }
        catch (MatchException matchException) {
            throw la$us.duA(matchException);
        }
        ArrayList<kZ> arrayList = new ArrayList<kZ>(this.Wmiiq);
        arrayList.sort(la$us::duz);
        int n2 = Math.min(arrayList.size(), (int)la$us.duD("e", (int)5884, (long)(0x7A9729A24A14D4D1L ^ l2)));
        mG[] mGArray = new mG[n2];
        float[] fArray = new float[n2];
        for (int i2 = 0; i2 < n2; ++i2) {
            kZ kZ2 = (kZ)arrayList.get(i2);
            mGArray[i2] = kZ2.color();
            fArray[i2] = kZ2.offset();
            if (iSArray != null) continue;
        }
        return new la(this.hIkuM, mGArray, fArray, this.oeGIt);
    }

    public la$us duw(float f2) {
        this.oeGIt = f2;
        return this;
    }

    public la$us dux(float f2) {
        return this.duw((float)Math.toRadians(f2));
    }

    public la$us dus(mG ... mGArray) {
        mG[] mGArray2 = la.bXa(mGArray);
        float[] fArray = la.bXb(null, mGArray2.length);
        return this.dut(mGArray2, fArray);
    }

    public la$us dut(mG[] mGArray, float[] fArray) {
        la$us la$us;
        block4: {
            long l2 = rpPbR ^ 0xBFC65C216ACL;
            mG[] mGArray2 = la.bXa(mGArray);
            float[] fArray2 = la.bXb(fArray, mGArray2.length);
            la.bXc(mGArray2, fArray2);
            iS[] iSArray = la.bXl();
            this.Wmiiq.clear();
            iS[] iSArray2 = iSArray;
            for (int i2 = 0; i2 < mGArray2.length; ++i2) {
                try {
                    la$us = this.duv(fArray2[i2], mGArray2[i2]);
                    if (iSArray2 != null) {
                        if (iSArray2 != null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw la$us.duA(matchException);
                }
            }
            la$us = this;
        }
        return la$us;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(la$us.class, "duC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

