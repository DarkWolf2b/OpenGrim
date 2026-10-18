/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
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
import sixtwo.cB;
import sixtwo.cG;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.mr;

public class cx
extends cG {
    private boolean rDHjA;
    private static final long ZzviL;
    private static final String[] klIkv;
    private static final String[] bkfAf;
    private static final Map LSeue;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cx(mr mr2) {
        super(mr2);
    }

    public cx(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                cx.ZzviL = gb.aYR(617550604232887679L, -5656378775418170534L, MethodHandles.lookup().lookupClass()).a(223291670411508L);
                cx.LSeue = new HashMap<K, V>(13);
                var0 = cx.ZzviL ^ 11499158449864L;
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
                var9_3 = new String[8];
                var7_4 = 0;
                var6_5 = "-\u001a\u00ab\u00a5\u009e$\u00a2=)(\u00dd\t{\u00a3[\u0089 HEr\u00c9\u00cc|\u0084\u00cfu\u00f8\u00cf\u0005\u0006\u00a7\u00e6\u0016NqU.\u00b0-D\u00f0\u00d2\u00a4??\u009c\u0019eO\u0018\u00e899Tu?dQy\u00c74m/G\u00abSN\u00ed=\u00beH\u00c0\u00f8\u00bb\u0010\u00fa\u00df<\u00de\u0011=y\u00f4!\u009fk\u00d2\u00fce/\u001e\u0010~\u00abs\u00d7\u00a0\u00a9\u00cf,=\u00ea\u00c9!u\u00f7\u00f5\u00a6\u0010B\u00be\u0013\u0097rW\u0088fU92<\u00d8]\u009d$";
                var8_6 = "-\u001a\u00ab\u00a5\u009e$\u00a2=)(\u00dd\t{\u00a3[\u0089 HEr\u00c9\u00cc|\u0084\u00cfu\u00f8\u00cf\u0005\u0006\u00a7\u00e6\u0016NqU.\u00b0-D\u00f0\u00d2\u00a4??\u009c\u0019eO\u0018\u00e899Tu?dQy\u00c74m/G\u00abSN\u00ed=\u00beH\u00c0\u00f8\u00bb\u0010\u00fa\u00df<\u00de\u0011=y\u00f4!\u009fk\u00d2\u00fce/\u001e\u0010~\u00abs\u00d7\u00a0\u00a9\u00cf,=\u00ea\u00c9!u\u00f7\u00f5\u00a6\u0010B\u00be\u0013\u0097rW\u0088fU92<\u00d8]\u009d$".length();
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
                    var9_3[var7_4++] = cx.Uj(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00b5p{\u00a4\r\u0017\u00e4\u000e\u008d\u00a3c\u008c\u00a2B\u00cd\u00db\u0010\u0093>\b\u008f\u0087\u008b@\u00fc\u0085\u00f0\u00fey9\u00e4\u009b\u00c7";
                    var8_6 = "\u00b5p{\u00a4\r\u0017\u00e4\u000e\u008d\u00a3c\u008c\u00a2B\u00cd\u00db\u0010\u0093>\b\u008f\u0087\u008b@\u00fc\u0085\u00f0\u00fey9\u00e4\u009b\u00c7".length();
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
                    var9_3[var7_4++] = cx.Uj(var10_9).intern();
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
        cx.klIkv = var9_3;
        cx.bkfAf = new String[8];
    }

    public cx TW(boolean bl) {
        super.Ub(bl);
        return this;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        block25: {
            boolean bl;
            JsonObject jsonObject;
            long l;
            block23: {
                JsonElement jsonElement2;
                boolean bl2;
                block22: {
                    boolean bl3;
                    block20: {
                        block21: {
                            l = ZzviL ^ 0x3E4580A0E334L;
                            bl2 = cB.Vt();
                            try {
                                try {
                                    try {
                                        try {
                                            bl3 = jsonElement.isJsonPrimitive();
                                            if (!bl2) break block20;
                                            if (!bl3) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw cx.Ui(matchException);
                                        }
                                        bl3 = jsonElement.getAsJsonPrimitive().isBoolean();
                                        if (!bl2) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw cx.Ui(matchException);
                                    }
                                    if (!bl3) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw cx.Ui(matchException);
                                }
                                this.TT(jsonElement.getAsBoolean());
                                return;
                            }
                            catch (MatchException matchException) {
                                throw cx.Ui(matchException);
                            }
                        }
                        try {
                            super.SS(jsonElement);
                            jsonElement2 = jsonElement;
                            if (!bl2) break block22;
                            bl3 = jsonElement2.isJsonObject();
                        }
                        catch (MatchException matchException) {
                            throw cx.Ui(matchException);
                        }
                    }
                    if (!bl3) {
                        return;
                    }
                    jsonElement2 = jsonElement;
                }
                jsonObject = jsonElement2.getAsJsonObject();
                try {
                    block24: {
                        try {
                            try {
                                bl = jsonObject.has((String)((Object)cx.Um("a", (int)4600, (long)(0x4BC49242453290FFL ^ l))));
                                if (!bl2) break block23;
                                if (!bl) break block24;
                            }
                            catch (MatchException matchException) {
                                throw cx.Ui(matchException);
                            }
                            this.TT(jsonObject.get((String)((Object)cx.Um("a", (int)8421, (long)(0x7EE909AB4BE1A1E7L ^ l)))).getAsBoolean());
                            if (bl2) break block25;
                        }
                        catch (MatchException matchException) {
                            throw cx.Ui(matchException);
                        }
                    }
                    bl = jsonObject.has((String)((Object)cx.Um("a", (int)28507, (long)(0x42C37265EF6A6E58L ^ l))));
                }
                catch (MatchException matchException) {
                    throw cx.Ui(matchException);
                }
            }
            try {
                if (bl) {
                    this.TT(jsonObject.get((String)((Object)cx.Um("a", (int)17028, (long)(0x279981BC176DC380L ^ l)))).getAsBoolean());
                }
            }
            catch (MatchException matchException) {
                throw cx.Ui(matchException);
            }
        }
    }

    @Override
    public void SR(Map<String, Object> map) {
        long l = ZzviL ^ 0x6D3C0AC27E98L;
        boolean bl = cB.Vu();
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)cx.Um("a", (int)8421, (long)(0x7EE95AD2C1833C4BL ^ l))), Boolean.valueOf(this.rDHjA));
        boolean bl2 = bl;
        try {
            jsonObject.addProperty((String)((Object)cx.Um("a", (int)20886, (long)(0xA7F06CBA9D34D3AL ^ l))), (Number)this.Wg().coh());
            jsonObject.addProperty((String)((Object)cx.Um("a", (int)27600, (long)(0xB40A53C2B977779L ^ l))), (Number)this.Wi().coh());
            jsonObject.addProperty((String)((Object)cx.Um("a", (int)29235, (long)(0x240AF28279F86E99L ^ l))), Boolean.valueOf(this.Wj()));
            jsonObject.addProperty((String)((Object)cx.Um("a", (int)29083, (long)(0x35EEA6B90E5BED36L ^ l))), Boolean.valueOf(this.Wk()));
            map.put(Arrays.toString(this.NwlSF), jsonObject);
            if (bl2) {
                iS.bwK("qfKgSb");
            }
        }
        catch (MatchException matchException) {
            throw cx.Ui(matchException);
        }
    }

    public cx TY(int n) {
        super.Uc(n);
        return this;
    }

    public cx TZ(mG mG2) {
        super.Ue(mG2);
        return this;
    }

    public cx Ua(int n) {
        super.Ud(n);
        return this;
    }

    private static CallSite Um(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cx" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String Uj(byte[] byArray) {
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

    private static String Uk(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x29AF;
        if (bkfAf[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])LSeue.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LSeue.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cx", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = klIkv[n2].getBytes("ISO-8859-1");
            cx.bkfAf[n2] = cx.Uj(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return bkfAf[n2];
    }

    public cx TV(boolean bl) {
        super.Ug(bl);
        return this;
    }

    private static Object Ul(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cx.Uk(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cx TS() {
        boolean bl;
        cx cx2;
        block2: {
            block3: {
                long l = ZzviL ^ 0x307A6292AA0CL;
                boolean bl2 = cB.Vu();
                try {
                    cx2 = this;
                    bl = this.rDHjA;
                    if (bl2) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw cx.Ui(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return cx2.TT(bl);
    }

    private static MatchException Ui(MatchException matchException) {
        return matchException;
    }

    public cx TX(mG mG2) {
        super.Uf(mG2);
        return this;
    }

    public boolean TR() {
        return this.rDHjA;
    }

    public cx TT(boolean bl) {
        cx cx2;
        block4: {
            block5: {
                long l = ZzviL ^ 0x4173E8FFC4EAL;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cx2 = this;
                        if (!bl2) break block4;
                        if (cx2.rDHjA != bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cx.Ui(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cx.Ui(matchException);
                }
            }
            this.rDHjA = bl;
            this.Vk();
            cx2 = this;
        }
        return cx2;
    }

    public cx TU(boolean bl) {
        super.Uh(bl);
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cx.class, "Ul", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
