/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 *  net.minecraft.util.math.Vec2f
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
import net.minecraft.util.math.Vec2f;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.io;
import sixtwo.mr;
import sixtwo.rj;

public class cL
extends cB {
    private Vec2f lWTUx = Vec2f.ZERO;
    private Vec2f rciMJ = new Vec2f(1.0f, 1.0f);
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
        return this.Xn(new Vec2f(io2.bly(), io2.blz()));
    }

    @Override
    public void SS(JsonElement jsonElement) {
        cL cL2;
        block14: {
            Vec2f vec2f;
            Vec2f vec2f2;
            block15: {
                JsonElement jsonElement2;
                boolean bl2;
                long l2;
                block12: {
                    block13: {
                        l2 = JrqPd ^ 0x50DC054ED821L;
                        bl2 = cB.Vt();
                        try {
                            try {
                                jsonElement2 = jsonElement;
                                if (!bl2) break block12;
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
                vec2f2 = this.Xs(jsonObject, (String)((Object)cL.Xz("v", (int)16954, (long)(0x755B6E0A77223147L ^ l2))), this.lWTUx);
                vec2f = this.Xs(jsonObject, (String)((Object)cL.Xz("v", (int)29979, (long)(0x1381C08243578667L ^ l2))), this.rciMJ);
                try {
                    try {
                        try {
                            try {
                                cL2 = this;
                                if (!bl2) break block14;
                                if (!cL2.lWTUx.equals(vec2f2)) break block15;
                            }
                            catch (MatchException matchException) {
                                throw cL.Xv(matchException);
                            }
                            cL2 = this;
                            if (!bl2) break block14;
                        }
                        catch (MatchException matchException) {
                            throw cL.Xv(matchException);
                        }
                        if (!cL2.rciMJ.equals(vec2f)) break block15;
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
            this.lWTUx = vec2f2;
            this.rciMJ = vec2f;
            cL2 = this;
        }
        cL2.Vk();
    }

    public Vec2f Xu() {
        return this.rciMJ;
    }

    public Vec2f Xt() {
        return this.lWTUx;
    }

    @Override
    public void SR(Map<String, Object> map) {
        long l2 = JrqPd ^ 0x3A58F2C458DL;
        HashMap<CallSite, Map<String, Object>> hashMap = new HashMap<CallSite, Map<String, Object>>();
        hashMap.put(cL.Xz("v", (int)14478, (long)(0x8E8ED383359D65DL ^ l2)), this.Xr(this.lWTUx));
        hashMap.put(cL.Xz("v", (int)11079, (long)(0x4BEC1FA87DA4595L ^ l2)), this.Xr(this.rciMJ));
        map.put(Arrays.toString(this.NwlSF), hashMap);
    }

    public cL Xl(float f2, float f3) {
        return this.Xn(new Vec2f(f2, f3));
    }

    public cL Xk(float f2, float f3) {
        return this.Xm(new Vec2f(f2, f3));
    }

    public cL Xm(Vec2f vec2f) {
        block4: {
            block5: {
                long l2 = JrqPd ^ 0x6B7AE3BE38E1L;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        if (!bl2) break block4;
                        if (!vec2f.equals(this.lWTUx)) break block5;
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
            this.lWTUx = vec2f;
            this.Vk();
        }
        return this;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private Vec2f Xs(JsonObject jsonObject, String string, Vec2f vec2f) {
        float f2;
        float f3;
        block34: {
            float f4;
            block30: {
                String string2;
                JsonObject jsonObject2;
                block29: {
                    float f5;
                    JsonObject jsonObject3;
                    boolean bl2;
                    block33: {
                        float f6;
                        block28: {
                            String string3;
                            JsonObject jsonObject4;
                            block27: {
                                float f7;
                                block32: {
                                    block26: {
                                        Vec2f vec2f2;
                                        block25: {
                                            float f8;
                                            block31: {
                                                block24: {
                                                    Vec2f vec2f3;
                                                    block23: {
                                                        String string4;
                                                        JsonObject jsonObject5;
                                                        block22: {
                                                            boolean bl3;
                                                            block21: {
                                                                long l2 = JrqPd ^ 0x3741895BB4B9L;
                                                                bl2 = cB.Vt();
                                                                try {
                                                                    try {
                                                                        try {
                                                                            bl3 = jsonObject.has(string);
                                                                            if (!bl2) break block21;
                                                                            if (!bl3) return vec2f;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cL.Xv(matchException);
                                                                        }
                                                                        jsonObject5 = jsonObject;
                                                                        string4 = string;
                                                                        if (!bl2) break block22;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cL.Xv(matchException);
                                                                    }
                                                                    bl3 = jsonObject5.get(string4).isJsonObject();
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cL.Xv(matchException);
                                                                }
                                                            }
                                                            try {
                                                                if (!bl3) {
                                                                    return vec2f;
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
                                                            vec2f3 = vec2f;
                                                            if (!bl2) break block23;
                                                            if (vec2f3 == null) break block24;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cL.Xv(matchException);
                                                        }
                                                        vec2f3 = vec2f;
                                                    }
                                                    f8 = vec2f3.x;
                                                    break block31;
                                                }
                                                f8 = 0.0f;
                                            }
                                            f6 = f8;
                                            try {
                                                vec2f2 = vec2f;
                                                if (!bl2) break block25;
                                                if (vec2f2 == null) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw cL.Xv(matchException);
                                            }
                                            vec2f2 = vec2f;
                                        }
                                        f7 = vec2f2.y;
                                        break block32;
                                    }
                                    f7 = 0.0f;
                                }
                                f4 = f7;
                                try {
                                    try {
                                        jsonObject4 = jsonObject3;
                                        string3 = "x";
                                        if (!bl2) break block27;
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
                            f5 = jsonObject4.get(string3).getAsFloat();
                            break block33;
                        }
                        f5 = f6;
                    }
                    f3 = f5;
                    try {
                        try {
                            jsonObject2 = jsonObject3;
                            string2 = "y";
                            if (!bl2) break block29;
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
                f2 = jsonObject2.get(string2).getAsFloat();
                break block34;
            }
            f2 = f4;
        }
        float f9 = f2;
        return new Vec2f(f3, f9);
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
        return rj.dgc(this.lWTUx.x, 1.0f - this.lWTUx.y, this.rciMJ.x, 1.0f - this.rciMJ.y);
    }

    private static String Xw(byte[] byArray) {
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

    public cL Xn(Vec2f vec2f) {
        block4: {
            block5: {
                long l2 = JrqPd ^ 0x1BADAB84F3DEL;
                boolean bl2 = cB.Vu();
                try {
                    try {
                        if (bl2) break block4;
                        if (!vec2f.equals(this.rciMJ)) break block5;
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
            this.rciMJ = vec2f;
            this.Vk();
        }
        return this;
    }

    private static Object Xy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cL.Xx(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cL Xo(io io2) {
        return this.Xm(new Vec2f(io2.bly(), io2.blz()));
    }

    private static MatchException Xv(MatchException matchException) {
        return matchException;
    }

    private static String Xx(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5BD7;
        if (fPPzo[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])HDgaN.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HDgaN.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cL", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = BwAAb[n3].getBytes("ISO-8859-1");
            cL.fPPzo[n3] = cL.Xw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return fPPzo[n3];
    }

    private Map<String, Object> Xr(Vec2f vec2f) {
        HashMap<String, Object> hashMap;
        block4: {
            long l2 = JrqPd ^ 0x639611E515D9L;
            hashMap = new HashMap<String, Object>();
            boolean bl2 = cB.Vu();
            try {
                Object object;
                try {
                    object = vec2f;
                    if (bl2 || object == null) break block4;
                }
                catch (MatchException matchException) {
                    throw cL.Xv(matchException);
                }
                hashMap.put("x", Float.valueOf(vec2f.x));
                object = hashMap.put("y", Float.valueOf(vec2f.y));
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

