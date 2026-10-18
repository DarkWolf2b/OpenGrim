/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
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
import sixtwo.iO;
import sixtwo.rp;

public class iM
extends iO
implements rp {
    private String zovQt;
    private static final long troaK = gb.aYR(-5817641879075806236L, 6860356179802339588L, MethodHandles.lookup().lookupClass()).a(41264538323482L);
    private static final String[] OvjhM;
    private static final String[] rBQyn;
    private static final Map zrqsg;
    private static final long[] kAULI;
    private static final Integer[] rPbaq;
    private static final Map Ixfyl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        zrqsg = new HashMap(13);
        long l2 = troaK ^ 0x7459D35720A2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "y\u00c8\u00e3\u0094U\u00eaX\u00dea \u0092J\u008d\u0088Ubm\u00f1\u0006\f\u00ed\u00a6\u0082\u00f80\u001f\u00ddk]\u0096Qv\u00ab\u00ad\u0083(9,S\u00f6\"\u00ed3 \u00b3\u00bf\u0005{\u001f\u00ff\u00e3\u0006\u00e9\u00aa:\u00a7\u00aa\u00fb\u00d4\u00fd\u00ad\u009ap}\u00c0.\u00145\u0019H&\u00ae]\u0010\u00c6\u0015\u0088\u0083\u00eb\u00b6gt\u0082K]#\u00c6JSv";
        int n3 = "y\u00c8\u00e3\u0094U\u00eaX\u00dea \u0092J\u008d\u0088Ubm\u00f1\u0006\f\u00ed\u00a6\u0082\u00f80\u001f\u00ddk]\u0096Qv\u00ab\u00ad\u0083(9,S\u00f6\"\u00ed3 \u00b3\u00bf\u0005{\u001f\u00ff\u00e3\u0006\u00e9\u00aa:\u00a7\u00aa\u00fb\u00d4\u00fd\u00ad\u009ap}\u00c0.\u00145\u0019H&\u00ae]\u0010\u00c6\u0015\u0088\u0083\u00eb\u00b6gt\u0082K]#\u00c6JSv".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = iM.btA(byArray3).intern();
            if ((n5 += n4) >= n3) break;
            n4 = string.charAt(n5);
        }
        OvjhM = stringArray;
        rBQyn = new String[3];
        Ixfyl = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[3];
        int n7 = 0;
        String string2 = "/\u00bd\u0003\u0096\u00bf\u00cc\u00b0M\u00b6\u00b2\u007f~\u001c\u0016w\u00e7\u00a7\u00d0:\u00e3J\u0002`|";
        int n8 = "/\u00bd\u0003\u0096\u00bf\u00cc\u00b0M\u00b6\u00b2\u007f~\u001c\u0016w\u00e7\u00a7\u00d0:\u00e3J\u0002`|".length();
        int n9 = 0;
        do {
            byte[] byArray6 = string2.substring(n9, n9 += 8).getBytes("ISO-8859-1");
            int n10 = n7++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n10] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n9 < n8);
        kAULI = lArray;
        rPbaq = new Integer[3];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public boolean equals(Object object) {
        String string;
        String string2;
        String[] stringArray;
        block34: {
            String string3;
            block35: {
                iM iM2;
                iM iM3;
                block33: {
                    boolean bl2;
                    block31: {
                        block32: {
                            Object object2;
                            block29: {
                                block30: {
                                    block27: {
                                        block28: {
                                            long l2 = troaK ^ 0x5B9C1FA57EC3L;
                                            stringArray = iO.buz();
                                            try {
                                                try {
                                                    object2 = object;
                                                    if (stringArray != null) break block27;
                                                    if (object2 != this) break block28;
                                                    return true;
                                                }
                                                catch (MatchException matchException) {
                                                    throw iM.btz(matchException);
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw iM.btz(matchException);
                                            }
                                        }
                                        object2 = object;
                                    }
                                    try {
                                        try {
                                            if (stringArray != null) break block29;
                                            if (object2 instanceof iM) break block30;
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw iM.btz(matchException);
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw iM.btz(matchException);
                                    }
                                }
                                object2 = object;
                            }
                            iM3 = (iM)object2;
                            try {
                                try {
                                    bl2 = iM3.bty(this);
                                    if (stringArray != null) break block31;
                                    if (bl2) break block32;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw iM.btz(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw iM.btz(matchException);
                            }
                        }
                        try {
                            iM2 = this;
                            if (stringArray != null) break block33;
                            bl2 = super.equals(object);
                        }
                        catch (MatchException matchException) {
                            throw iM.btz(matchException);
                        }
                    }
                    try {
                        if (!bl2) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw iM.btz(matchException);
                    }
                    iM2 = this;
                }
                string3 = iM2.btw();
                string2 = iM3.btw();
                try {
                    try {
                        try {
                            string = string3;
                            if (stringArray != null) break block34;
                            if (string != null) break block35;
                        }
                        catch (MatchException matchException) {
                            throw iM.btz(matchException);
                        }
                        if (string2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw iM.btz(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw iM.btz(matchException);
                }
            }
            string = string3;
        }
        try {
            try {
                boolean bl3 = string.equals(string2);
                if (stringArray != null) return bl3;
                if (bl3) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw iM.btz(matchException);
            }
        }
        catch (MatchException matchException) {
            throw iM.btz(matchException);
        }
    }

    @Override
    public String toString() {
        long l2 = troaK ^ 0x116229E38A48L;
        return iM.btD("h", (int)2051, (long)(0x1B57868493012ADDL ^ l2));
    }

    @Override
    public int hashCode() {
        Object object;
        int n2;
        int n3;
        block6: {
            String string;
            block4: {
                String string2;
                block5: {
                    long l2 = troaK ^ 0x2AEEA52AFF4FL;
                    CallSite callSite = iM.btG("k", (int)29686, (long)(0x16C7AC9B288388D8L ^ l2));
                    String[] stringArray = iO.buz();
                    n3 = super.hashCode();
                    string2 = this.btw();
                    try {
                        try {
                            n2 = n3 * iM.btG("k", (int)3735, (long)(0x2C956A009BCC75BAL ^ l2));
                            string = string2;
                            if (stringArray != null) break block4;
                            if (string != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw iM.btz(matchException);
                        }
                        object = iM.btG("k", (int)1567, (long)(0x5F34719F4292FD30L ^ l2));
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw iM.btz(matchException);
                    }
                }
                string = string2;
            }
            object = string.hashCode();
        }
        n3 = n2 + object;
        return n3;
    }

    public String btw() {
        return this.zovQt;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = troaK ^ 0x9E116EA6AC7L;
        super.fromJson(jsonObject);
        this.zovQt = this.readString(jsonObject, (String)((Object)iM.btD("h", (int)6734, (long)(0x7AF347E3A3B1D81EL ^ l2))));
    }

    @Override
    public JsonObject toJson() {
        long l2 = troaK ^ 0x17EA52AA944CL;
        JsonObject jsonObject = super.toJson();
        try {
            if (this.zovQt != null) {
                jsonObject.addProperty((String)((Object)iM.btD("h", (int)22263, (long)(0x61954C7F25866A2EL ^ l2))), this.zovQt);
            }
        }
        catch (MatchException matchException) {
            throw iM.btz(matchException);
        }
        return jsonObject;
    }

    private static MatchException btz(MatchException matchException) {
        return matchException;
    }

    @Override
    protected boolean bty(Object object) {
        return object instanceof iM;
    }

    private static String btA(byte[] byArray) {
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

    private static CallSite btD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public iM btx(String string) {
        this.zovQt = string;
        return this;
    }

    private static Object btC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = iM.btB(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String btB(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2F73;
        if (rBQyn[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])zrqsg.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    zrqsg.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iM", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OvjhM[n3].getBytes("ISO-8859-1");
            iM.rBQyn[n3] = iM.btA(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return rBQyn[n3];
    }

    private static int btF(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = iM.btE(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite btG(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int btE(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x384;
        if (rPbaq[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = kAULI[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Ixfyl.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Ixfyl.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iM", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iM.rPbaq[n3] = n4;
        }
        return rPbaq[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iM.class, "btC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(iM.class, "btF", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

