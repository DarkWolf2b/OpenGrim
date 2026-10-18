/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 *  net.minecraft.class_241
 */
package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_241;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.io;
import sixtwo.mr;
import sixtwo.rj;

public class cL
extends cB {
    private class_241 lWTUx = class_241.field_1340;
    private class_241 rciMJ = new class_241(1.0f, 1.0f);
    private static final long JrqPd;
    private static final String[] BwAAb;
    private static final String[] fPPzo;
    private static final Map HDgaN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cL(iS iS2, mr mr2) {
        super(mr2);
        this.Vg(iS2);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                cL.JrqPd = gb.aYR(-953890712074032818L, -7957121300344467127L, MethodHandles.lookup().lookupClass()).a(150848065840668L);
                cL.HDgaN = new HashMap<K, V>(13);
                var0 = cL.JrqPd ^ 41818288140684L;
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
                var6_5 = "\u0093\u00b6\u00c6O\t\u0098\u0085\u00d8\u00a9\u0092\t\u009d\u0000\u00dao\u0017\u0010\u00e9\u00f3\u00b2GK\u00bfD`\u00b31\u00cb\u00f9\u00e8\u00161O";
                var8_6 = "\u0093\u00b6\u00c6O\t\u0098\u0085\u00d8\u00a9\u0092\t\u009d\u0000\u00dao\u0017\u0010\u00e9\u00f3\u00b2GK\u00bfD`\u00b31\u00cb\u00f9\u00e8\u00161O".length();
                var5_7 = 16;
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
                    var9_3[var7_4++] = cL.Xw(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0098aq<O\u009d\u001cQ\u00b8\u0081\u0095\u0087\u00f8\u0012\u00ae\u00d9\u0010h\u00ae\u00b1i;\u00ab\u0083\u00f5r\u00c3\u00f3XV\u007f\u00ae<";
                    var8_6 = "\u0098aq<O\u009d\u001cQ\u00b8\u0081\u0095\u0087\u00f8\u0012\u00ae\u00d9\u0010h\u00ae\u00b1i;\u00ab\u0083\u00f5r\u00c3\u00f3XV\u007f\u00ae<".length();
                    var5_7 = 16;
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
                    var9_3[var7_4++] = cL.Xw(var10_9).intern();
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
        cL.BwAAb = var9_3;
        cL.fPPzo = new String[4];
    }

    public cL Xp(io io2) {
        return this.Xn(new class_241(io2.bly(), io2.blz()));
    }

    @Override
    public void SS(JsonElement jsonElement) {
        cL cL2;
        block14: {
            class_241 class_2412;
            class_241 class_2413;
            block15: {
                JsonElement jsonElement2;
                boolean bl;
                long l;
                block12: {
                    block13: {
                        l = JrqPd ^ 0x50DC054ED821L;
                        bl = cB.Vt();
                        try {
                            try {
                                jsonElement2 = jsonElement;
                                if (!bl) break block12;
                                if (jsonElement2.isJsonObject()) break block13;
                            }
                            catch (MatchException matchException) {
                                throw cL.Xv(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw cL.Xv(matchException);
                        }
                    }
                    jsonElement2 = jsonElement;
                }
                JsonObject jsonObject = jsonElement2.getAsJsonObject();
                class_2413 = this.Xs(jsonObject, (String)((Object)cL.Xz("v", (int)16954, (long)(0x755B6E0A77223147L ^ l))), this.lWTUx);
                class_2412 = this.Xs(jsonObject, (String)((Object)cL.Xz("v", (int)29979, (long)(0x1381C08243578667L ^ l))), this.rciMJ);
                try {
                    try {
                        try {
                            try {
                                cL2 = this;
                                if (!bl) break block14;
                                if (!cL2.lWTUx.method_1016(class_2413)) break block15;
                            }
                            catch (MatchException matchException) {
                                throw cL.Xv(matchException);
                            }
                            cL2 = this;
                            if (!bl) break block14;
                        }
                        catch (MatchException matchException) {
                            throw cL.Xv(matchException);
                        }
                        if (!cL2.rciMJ.method_1016(class_2412)) break block15;
                    }
                    catch (MatchException matchException) {
                        throw cL.Xv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw cL.Xv(matchException);
                }
            }
            this.lWTUx = class_2413;
            this.rciMJ = class_2412;
            cL2 = this;
        }
        cL2.Vk();
    }

    public class_241 Xu() {
        return this.rciMJ;
    }

    public class_241 Xt() {
        return this.lWTUx;
    }

    @Override
    public void SR(Map<String, Object> map) {
        long l = JrqPd ^ 0x3A58F2C458DL;
        HashMap<CallSite, Map<String, Object>> hashMap = new HashMap<CallSite, Map<String, Object>>();
        hashMap.put(cL.Xz("v", (int)14478, (long)(0x8E8ED383359D65DL ^ l)), this.Xr(this.lWTUx));
        hashMap.put(cL.Xz("v", (int)11079, (long)(0x4BEC1FA87DA4595L ^ l)), this.Xr(this.rciMJ));
        map.put(Arrays.toString(this.NwlSF), hashMap);
    }

    public cL Xl(float f, float f2) {
        return this.Xn(new class_241(f, f2));
    }

    public cL Xk(float f, float f2) {
        return this.Xm(new class_241(f, f2));
    }

    public cL Xm(class_241 class_2412) {
        block4: {
            block5: {
                long l = JrqPd ^ 0x6B7AE3BE38E1L;
                boolean bl = cB.Vt();
                try {
                    try {
                        if (!bl) break block4;
                        if (!class_2412.method_1016(this.lWTUx)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cL.Xv(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cL.Xv(matchException);
                }
            }
            this.lWTUx = class_2412;
            this.Vk();
        }
        return this;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private class_241 Xs(JsonObject jsonObject, String string, class_241 class_2412) {
        float f;
        float f2;
        block34: {
            float f3;
            block30: {
                String string2;
                JsonObject jsonObject2;
                block29: {
                    float f4;
                    JsonObject jsonObject3;
                    boolean bl;
                    block33: {
                        float f5;
                        block28: {
                            String string3;
                            JsonObject jsonObject4;
                            block27: {
                                float f6;
                                block32: {
                                    block26: {
                                        class_241 class_2413;
                                        block25: {
                                            float f7;
                                            block31: {
                                                block24: {
                                                    class_241 class_2414;
                                                    block23: {
                                                        String string4;
                                                        JsonObject jsonObject5;
                                                        block22: {
                                                            boolean bl2;
                                                            block21: {
                                                                long l = JrqPd ^ 0x3741895BB4B9L;
                                                                bl = cB.Vt();
                                                                try {
                                                                    try {
                                                                        try {
                                                                            bl2 = jsonObject.has(string);
                                                                            if (!bl) break block21;
                                                                            if (!bl2) return class_2412;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cL.Xv(matchException);
                                                                        }
                                                                        jsonObject5 = jsonObject;
                                                                        string4 = string;
                                                                        if (!bl) break block22;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cL.Xv(matchException);
                                                                    }
                                                                    bl2 = jsonObject5.get(string4).isJsonObject();
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cL.Xv(matchException);
                                                                }
                                                            }
                                                            try {
                                                                if (!bl2) {
                                                                    return class_2412;
                                                                }
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cL.Xv(matchException);
                                                            }
                                                            jsonObject5 = jsonObject;
                                                            string4 = string;
                                                        }
                                                        jsonObject3 = jsonObject5.getAsJsonObject(string4);
                                                        try {
                                                            class_2414 = class_2412;
                                                            if (!bl) break block23;
                                                            if (class_2414 == null) break block24;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cL.Xv(matchException);
                                                        }
                                                        class_2414 = class_2412;
                                                    }
                                                    f7 = class_2414.field_1343;
                                                    break block31;
                                                }
                                                f7 = 0.0f;
                                            }
                                            f5 = f7;
                                            try {
                                                class_2413 = class_2412;
                                                if (!bl) break block25;
                                                if (class_2413 == null) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw cL.Xv(matchException);
                                            }
                                            class_2413 = class_2412;
                                        }
                                        f6 = class_2413.field_1342;
                                        break block32;
                                    }
                                    f6 = 0.0f;
                                }
                                f3 = f6;
                                try {
                                    try {
                                        jsonObject4 = jsonObject3;
                                        string3 = "x";
                                        if (!bl) break block27;
                                        if (!jsonObject4.has(string3)) break block28;
                                    }
                                    catch (MatchException matchException) {
                                        throw cL.Xv(matchException);
                                    }
                                    jsonObject4 = jsonObject3;
                                    string3 = "x";
                                }
                                catch (MatchException matchException) {
                                    throw cL.Xv(matchException);
                                }
                            }
                            f4 = jsonObject4.get(string3).getAsFloat();
                            break block33;
                        }
                        f4 = f5;
                    }
                    f2 = f4;
                    try {
                        try {
                            jsonObject2 = jsonObject3;
                            string2 = "y";
                            if (!bl) break block29;
                            if (!jsonObject2.has(string2)) break block30;
                        }
                        catch (MatchException matchException) {
                            throw cL.Xv(matchException);
                        }
                        jsonObject2 = jsonObject3;
                        string2 = "y";
                    }
                    catch (MatchException matchException) {
                        throw cL.Xv(matchException);
                    }
                }
                f = jsonObject2.get(string2).getAsFloat();
                break block34;
            }
            f = f3;
        }
        float f8 = f;
        return new class_241(f2, f8);
    }

    private static CallSite Xz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cL" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public rj Xq() {
        return rj.dgc(this.lWTUx.field_1343, 1.0f - this.lWTUx.field_1342, this.rciMJ.field_1343, 1.0f - this.rciMJ.field_1342);
    }

    private static String Xw(byte[] byArray) {
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

    public cL Xn(class_241 class_2412) {
        block4: {
            block5: {
                long l = JrqPd ^ 0x1BADAB84F3DEL;
                boolean bl = cB.Vu();
                try {
                    try {
                        if (bl) break block4;
                        if (!class_2412.method_1016(this.rciMJ)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cL.Xv(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cL.Xv(matchException);
                }
            }
            this.rciMJ = class_2412;
            this.Vk();
        }
        return this;
    }

    private static Object Xy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cL.Xx(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cL Xo(io io2) {
        return this.Xm(new class_241(io2.bly(), io2.blz()));
    }

    private static MatchException Xv(MatchException matchException) {
        return matchException;
    }

    private static String Xx(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5BD7;
        if (fPPzo[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])HDgaN.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HDgaN.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cL", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = BwAAb[n2].getBytes("ISO-8859-1");
            cL.fPPzo[n2] = cL.Xw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return fPPzo[n2];
    }

    private Map<String, Object> Xr(class_241 class_2412) {
        HashMap<String, Object> hashMap;
        block4: {
            long l = JrqPd ^ 0x639611E515D9L;
            hashMap = new HashMap<String, Object>();
            boolean bl = cB.Vu();
            try {
                Object object;
                try {
                    object = class_2412;
                    if (bl || object == null) break block4;
                }
                catch (MatchException matchException) {
                    throw cL.Xv(matchException);
                }
                hashMap.put("x", Float.valueOf(class_2412.field_1343));
                object = hashMap.put("y", Float.valueOf(class_2412.field_1342));
            }
            catch (MatchException matchException) {
                throw cL.Xv(matchException);
            }
        }
        return hashMap;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cL.class, "Xy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
