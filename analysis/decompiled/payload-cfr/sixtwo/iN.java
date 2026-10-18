/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonArray
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 *  com.google.gson.JsonParser
 */
package sixtwo;

import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParser;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iO;

public class iN {
    private final String dmpmN;
    private final JsonObject xDpWq;
    private static final long lBagP = gb.aYR(8966501344039546894L, -3130552171237775395L, MethodHandles.lookup().lookupClass()).a(238854674416724L);
    private static final String[] KWerv;
    private static final String[] oGkHR;
    private static final Map Fvbad;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static Exception btM(Exception exception) {
        return exception;
    }

    private static String btO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3AAA;
        if (oGkHR[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])Fvbad.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Fvbad.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iN", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = KWerv[n2].getBytes("ISO-8859-1");
            iN.oGkHR[n2] = iN.btN(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return oGkHR[n2];
    }

    /*
     * Loose catch block
     */
    private static JsonObject btJ(String string) {
        block9: {
            long l = lBagP ^ 0x62E53EE5D0D0L;
            String[] stringArray = iO.buz();
            try {
                JsonElement jsonElement;
                block10: {
                    JsonElement jsonElement2;
                    block8: {
                        jsonElement2 = JsonParser.parseString((String)string);
                        try {
                            jsonElement = jsonElement2;
                            if (stringArray != null) break block8;
                            if (jsonElement == null) break block9;
                        }
                        catch (Exception exception) {
                            throw iN.btM(exception);
                        }
                        jsonElement = jsonElement2;
                    }
                    if (stringArray != null) break block10;
                    try {
                        block11: {
                            if (!jsonElement.isJsonObject()) break block9;
                            break block11;
                            catch (Exception exception) {
                                throw iN.btM(exception);
                            }
                        }
                        jsonElement = jsonElement2;
                    }
                    catch (Exception exception) {
                        throw iN.btM(exception);
                    }
                }
                return jsonElement.getAsJsonObject();
            }
            catch (Exception exception) {
                // empty catch block
            }
        }
        return new JsonObject();
    }

    private static CallSite btQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iN" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public JsonObject btH() {
        return this.xDpWq.deepCopy();
    }

    private static Object btP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = iN.btO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public String btK() {
        return this.dmpmN;
    }

    public JsonObject btL() {
        return this.xDpWq;
    }

    private static String btN(byte[] byArray) {
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

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public Optional<JsonElement> btI(String string, int[] nArray) {
        JsonElement jsonElement;
        JsonElement jsonElement2;
        String[] stringArray;
        block35: {
            JsonElement jsonElement3;
            long l;
            block33: {
                JsonElement jsonElement4;
                block34: {
                    block32: {
                        block31: {
                            String string2;
                            block30: {
                                l = lBagP ^ 0x3877FB75BAE4L;
                                stringArray = iO.buz();
                                try {
                                    string2 = string;
                                    if (stringArray != null) break block30;
                                    if (string2 == null) return Optional.empty();
                                }
                                catch (MatchException matchException) {
                                    throw iN.btM(matchException);
                                }
                                string2 = string;
                            }
                            try {
                                try {
                                    if (!string2.isBlank() && nArray != null) break block31;
                                    return Optional.empty();
                                }
                                catch (MatchException matchException) {
                                    throw iN.btM(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw iN.btM(matchException);
                            }
                        }
                        jsonElement4 = this.xDpWq.get(string);
                        try {
                            jsonElement3 = jsonElement4;
                            if (stringArray != null) break block32;
                            if (jsonElement3 == null) return Optional.empty();
                        }
                        catch (MatchException matchException) {
                            throw iN.btM(matchException);
                        }
                        jsonElement3 = jsonElement4;
                    }
                    try {
                        try {
                            if (stringArray != null) break block33;
                            if (jsonElement3.isJsonObject()) break block34;
                            return Optional.empty();
                        }
                        catch (MatchException matchException) {
                            throw iN.btM(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw iN.btM(matchException);
                    }
                }
                jsonElement3 = jsonElement4;
            }
            JsonObject jsonObject = jsonElement3.getAsJsonObject();
            jsonElement2 = jsonObject.get((String)((Object)iN.btQ("n", (int)32752, (long)(0x4932A385620584DCL ^ l))));
            try {
                jsonElement = jsonElement2;
                if (stringArray != null) break block35;
                if (jsonElement == null) return Optional.empty();
            }
            catch (MatchException matchException) {
                throw iN.btM(matchException);
            }
            jsonElement = jsonElement2;
        }
        try {
            if (!jsonElement.isJsonArray()) {
                return Optional.empty();
            }
        }
        catch (MatchException matchException) {
            throw iN.btM(matchException);
        }
        String string3 = Arrays.toString(nArray);
        JsonArray jsonArray = jsonElement2.getAsJsonArray();
        for (JsonElement jsonElement5 : jsonArray) {
            Optional<Object> optional;
            JsonElement jsonElement6;
            block40: {
                JsonElement jsonElement7;
                block41: {
                    String string4;
                    JsonObject jsonObject;
                    block38: {
                        JsonObject jsonObject2;
                        block39: {
                            JsonElement jsonElement8;
                            block36: {
                                block37: {
                                    try {
                                        try {
                                            jsonElement8 = jsonElement5;
                                            if (stringArray != null) break block36;
                                            if (jsonElement8.isJsonObject()) break block37;
                                        }
                                        catch (MatchException matchException) {
                                            throw iN.btM(matchException);
                                        }
                                        if (stringArray == null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw iN.btM(matchException);
                                    }
                                }
                                jsonElement8 = jsonElement5;
                            }
                            jsonObject2 = jsonElement8.getAsJsonObject();
                            try {
                                try {
                                    jsonObject = jsonObject2;
                                    string4 = string3;
                                    if (stringArray != null) break block38;
                                    if (jsonObject.has(string4)) break block39;
                                }
                                catch (MatchException matchException) {
                                    throw iN.btM(matchException);
                                }
                                if (stringArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw iN.btM(matchException);
                            }
                        }
                        jsonObject = jsonObject2;
                        string4 = string3;
                    }
                    jsonElement7 = jsonObject.get(string4);
                    try {
                        try {
                            jsonElement6 = jsonElement7;
                            if (stringArray != null) break block40;
                            if (jsonElement6 != null) break block41;
                        }
                        catch (MatchException matchException) {
                            throw iN.btM(matchException);
                        }
                        optional = Optional.empty();
                        return optional;
                    }
                    catch (MatchException matchException) {
                        throw iN.btM(matchException);
                    }
                }
                jsonElement6 = jsonElement7.deepCopy();
            }
            optional = Optional.of(jsonElement6);
            return optional;
        }
        return Optional.empty();
    }

    public iN(String string) {
        Object object;
        block2: {
            block3: {
                long l = lBagP ^ 0x5EEBC230E57BL;
                String[] stringArray = iO.buz();
                String[] stringArray2 = stringArray;
                try {
                    iN iN2 = this;
                    object = string;
                    if (stringArray2 != null) break block2;
                    if (object != null) break block3;
                }
                catch (MatchException matchException) {
                    throw iN.btM(matchException);
                }
                object = iN.btQ("n", (int)1278, (long)(0x6CA9C3D4BECEA04CL ^ l));
                break block2;
            }
            object = string;
        }
        iN2.dmpmN = object;
        this.xDpWq = iN.btJ(this.dmpmN);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        Fvbad = new HashMap(13);
        long l = lBagP ^ 0xC270E97855FL;
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
        String[] stringArray = new String[2];
        int n = 0;
        String string = "l\u0094\u0086Z\u0001\u00f0\u00e8c\r\u00af\u0082\u00e4\u0090\u00a4\u0001\u00b3\u0010\u008d\u000e\u00c1`\u00d2\u00c4\u00e7\u0019\u00cf$\u00ee\u00af\u00c6\u00dd8t";
        int n2 = "l\u0094\u0086Z\u0001\u00f0\u00e8c\r\u00af\u0082\u00e4\u0090\u00a4\u0001\u00b3\u0010\u008d\u000e\u00c1`\u00d2\u00c4\u00e7\u0019\u00cf$\u00ee\u00af\u00c6\u00dd8t".length();
        int n3 = 16;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = iN.btN(byArray3).intern();
            if ((n4 += n3) >= n2) {
                KWerv = stringArray;
                oGkHR = new String[2];
                return;
            }
            n3 = string.charAt(n4);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iN.class, "btP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
