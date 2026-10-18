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
        long l = troaK ^ 0x7459D35720A2L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[3];
        int n = 0;
        String string = "y\u00c8\u00e3\u0094U\u00eaX\u00dea \u0092J\u008d\u0088Ubm\u00f1\u0006\f\u00ed\u00a6\u0082\u00f80\u001f\u00ddk]\u0096Qv\u00ab\u00ad\u0083(9,S\u00f6\"\u00ed3 \u00b3\u00bf\u0005{\u001f\u00ff\u00e3\u0006\u00e9\u00aa:\u00a7\u00aa\u00fb\u00d4\u00fd\u00ad\u009ap}\u00c0.\u00145\u0019H&\u00ae]\u0010\u00c6\u0015\u0088\u0083\u00eb\u00b6gt\u0082K]#\u00c6JSv";
        int n2 = "y\u00c8\u00e3\u0094U\u00eaX\u00dea \u0092J\u008d\u0088Ubm\u00f1\u0006\f\u00ed\u00a6\u0082\u00f80\u001f\u00ddk]\u0096Qv\u00ab\u00ad\u0083(9,S\u00f6\"\u00ed3 \u00b3\u00bf\u0005{\u001f\u00ff\u00e3\u0006\u00e9\u00aa:\u00a7\u00aa\u00fb\u00d4\u00fd\u00ad\u009ap}\u00c0.\u00145\u0019H&\u00ae]\u0010\u00c6\u0015\u0088\u0083\u00eb\u00b6gt\u0082K]#\u00c6JSv".length();
        int n3 = 24;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = iM.btA(byArray3).intern();
            if ((n4 += n3) >= n2) break;
            n3 = string.charAt(n4);
        }
        OvjhM = stringArray;
        rBQyn = new String[3];
        Ixfyl = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray5 = byArray5;
            byArray5[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[3];
        int n6 = 0;
        String string2 = "/\u00bd\u0003\u0096\u00bf\u00cc\u00b0M\u00b6\u00b2\u007f~\u001c\u0016w\u00e7\u00a7\u00d0:\u00e3J\u0002`|";
        int n7 = "/\u00bd\u0003\u0096\u00bf\u00cc\u00b0M\u00b6\u00b2\u007f~\u001c\u0016w\u00e7\u00a7\u00d0:\u00e3J\u0002`|".length();
        int n8 = 0;
        do {
            byte[] byArray6 = string2.substring(n8, n8 += 8).getBytes("ISO-8859-1");
            int n9 = n6++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n9] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n8 < n7);
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
                    boolean bl;
                    block31: {
                        block32: {
                            Object object2;
                            block29: {
                                block30: {
                                    block27: {
                                        block28: {
                                            long l = troaK ^ 0x5B9C1FA57EC3L;
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
                                    bl = iM3.bty(this);
                                    if (stringArray != null) break block31;
                                    if (bl) break block32;
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
                            bl = super.equals(object);
                        }
                        catch (MatchException matchException) {
                            throw iM.btz(matchException);
                        }
                    }
                    try {
                        if (!bl) {
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
                boolean bl = string.equals(string2);
                if (stringArray != null) return bl;
                if (bl) return true;
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
        long l = troaK ^ 0x116229E38A48L;
        return iM.btD("h", (int)2051, (long)(0x1B57868493012ADDL ^ l));
    }

    @Override
    public int hashCode() {
        Object object;
        int n;
        int n2;
        block6: {
            String string;
            block4: {
                String string2;
                block5: {
                    long l = troaK ^ 0x2AEEA52AFF4FL;
                    CallSite callSite = iM.btG("k", (int)29686, (long)(0x16C7AC9B288388D8L ^ l));
                    String[] stringArray = iO.buz();
                    n2 = super.hashCode();
                    string2 = this.btw();
                    try {
                        try {
                            n = n2 * iM.btG("k", (int)3735, (long)(0x2C956A009BCC75BAL ^ l));
                            string = string2;
                            if (stringArray != null) break block4;
                            if (string != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw iM.btz(matchException);
                        }
                        object = iM.btG("k", (int)1567, (long)(0x5F34719F4292FD30L ^ l));
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
        n2 = n + object;
        return n2;
    }

    public String btw() {
        return this.zovQt;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l = troaK ^ 0x9E116EA6AC7L;
        super.fromJson(jsonObject);
        this.zovQt = this.readString(jsonObject, (String)((Object)iM.btD("h", (int)6734, (long)(0x7AF347E3A3B1D81EL ^ l))));
    }

    @Override
    public JsonObject toJson() {
        long l = troaK ^ 0x17EA52AA944CL;
        JsonObject jsonObject = super.toJson();
        try {
            if (this.zovQt != null) {
                jsonObject.addProperty((String)((Object)iM.btD("h", (int)22263, (long)(0x61954C7F25866A2EL ^ l))), this.zovQt);
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
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = iM.btB(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String btB(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2F73;
        if (rBQyn[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])zrqsg.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    zrqsg.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iM", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OvjhM[n2].getBytes("ISO-8859-1");
            iM.rBQyn[n2] = iM.btA(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return rBQyn[n2];
    }

    private static int btF(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = iM.btE(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
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

    private static int btE(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x384;
        if (rPbaq[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = kAULI[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Ixfyl.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Ixfyl.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iM.rPbaq[n2] = n3;
        }
        return rPbaq[n2];
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
