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
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.mG;
import sixtwo.mr;

public class cG
extends cB {
    private mG HYLiK = mG.hoGuU;
    private mG mbUpG = mG.hoGuU;
    private boolean nfBAC = false;
    private boolean xPYck;
    private boolean CDdOA = false;
    private static boolean XqhhV;
    private static final long QtQoN;
    private static final String[] TatDI;
    private static final String[] zfSXE;
    private static final Map GtaeP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cG(mr mr2) {
        super(mr2);
    }

    public cG(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                cG.QtQoN = gb.aYR(-6159334118562630845L, -6107607831421606237L, MethodHandles.lookup().lookupClass()).a(54622285838946L);
                cG.GtaeP = new HashMap<K, V>(13);
                cG.Wm(false);
                var0 = cG.QtQoN ^ 77473402780386L;
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
                var6_5 = "\u000e\u00a5h\u00b4\u00d9e~\u00edm\u001c>\u0006\u00a4\u0085\u00a0\u00df&\t\u00e5L\u00f3Y^$\u0093{\u0015\u00d1\u0001fm\u00d0 \u00be\u00d3\u00c0o\u0097\u00bf\u0014N\u001bZDM\u00cb=/9\r\u00ab\u00dd/d\u00a5\u0017r\u008b\u009a\u00bdt>z\u00e7\u00ab\u0010MR\u00ee)\u0096zC\u009bK\u00ef\u0003\u00be\u00e8\u001dL\u00a8\u0018\u00ecA\u0090N\u00a8p\u0080,\u0001\u00eb\u0000\u00bb\u0003\u00fd\u00f8A\u00878\u00c3SJ\u0091}\u00b6 F\u00acO=\u009d\u00d0\u00b2\u00e4\u00e5 6\u00eeTcpe\u00a50\u00d96\u00b9\u00f7\u0083\u00c3\u00da\u00bc\u0086A\u0092aC\u0093\u0010\u00aa0\u00bbM<\u00e1C\u00c0\u0011[\u0010\u00f4Vy\u009e\u00ec";
                var8_6 = "\u000e\u00a5h\u00b4\u00d9e~\u00edm\u001c>\u0006\u00a4\u0085\u00a0\u00df&\t\u00e5L\u00f3Y^$\u0093{\u0015\u00d1\u0001fm\u00d0 \u00be\u00d3\u00c0o\u0097\u00bf\u0014N\u001bZDM\u00cb=/9\r\u00ab\u00dd/d\u00a5\u0017r\u008b\u009a\u00bdt>z\u00e7\u00ab\u0010MR\u00ee)\u0096zC\u009bK\u00ef\u0003\u00be\u00e8\u001dL\u00a8\u0018\u00ecA\u0090N\u00a8p\u0080,\u0001\u00eb\u0000\u00bb\u0003\u00fd\u00f8A\u00878\u00c3SJ\u0091}\u00b6 F\u00acO=\u009d\u00d0\u00b2\u00e4\u00e5 6\u00eeTcpe\u00a50\u00d96\u00b9\u00f7\u0083\u00c3\u00da\u00bc\u0086A\u0092aC\u0093\u0010\u00aa0\u00bbM<\u00e1C\u00c0\u0011[\u0010\u00f4Vy\u009e\u00ec".length();
                var5_7 = 32;
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
                    var9_3[var7_4++] = cG.Wq(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0092\u00eb\u00dezqb\u00ebQ\u00f3\u007f\u00d2\u00e6\u00ca\u0092\u0004* uD\u00dd1N\u00e6\u001c\t\u00d02\u00a6\u00aa\u00cf\u00a3\u00de\u00c1\u00e6\u0013\u00e3\u0094\u00ba\\\u0082b|\u00f0\u00e0\u0083\u001b\u00c2\u00f7\u00dd";
                    var8_6 = "\u0092\u00eb\u00dezqb\u00ebQ\u00f3\u007f\u00d2\u00e6\u00ca\u0092\u0004* uD\u00dd1N\u00e6\u001c\t\u00d02\u00a6\u00aa\u00cf\u00a3\u00de\u00c1\u00e6\u0013\u00e3\u0094\u00ba\\\u0082b|\u00f0\u00e0\u0083\u001b\u00c2\u00f7\u00dd".length();
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
                    var9_3[var7_4++] = cG.Wq(var10_9).intern();
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
        cG.TatDI = var9_3;
        cG.zfSXE = new String[8];
    }

    public mG Wf() {
        mG mG2;
        block6: {
            cG cG2;
            block4: {
                block5: {
                    long l2 = QtQoN ^ 0x5BC31A83EA96L;
                    boolean bl2 = cB.Vt();
                    try {
                        try {
                            cG2 = this;
                            if (!bl2) break block4;
                            if (!cG2.xPYck) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cG.Wp(matchException);
                        }
                        mG2 = jk.bDk();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                }
                cG2 = this;
            }
            mG2 = cG2.HYLiK;
        }
        return mG2;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        boolean bl2;
        JsonObject jsonObject;
        long l2;
        block25: {
            block26: {
                boolean bl3;
                block23: {
                    block24: {
                        block21: {
                            block22: {
                                JsonElement jsonElement2;
                                block19: {
                                    block20: {
                                        l2 = QtQoN ^ 0x6B0BE11795B0L;
                                        bl3 = cB.Vt();
                                        try {
                                            try {
                                                jsonElement2 = jsonElement;
                                                if (!bl3) break block19;
                                                if (jsonElement2.isJsonObject()) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw cG.Wp(matchException);
                                            }
                                            this.Uc(jsonElement.getAsInt());
                                            return;
                                        }
                                        catch (MatchException matchException) {
                                            throw cG.Wp(matchException);
                                        }
                                    }
                                    jsonElement2 = jsonElement;
                                }
                                jsonObject = jsonElement2.getAsJsonObject();
                                try {
                                    try {
                                        bl2 = jsonObject.has((String)((Object)cG.Wt("h", (int)15358, (long)(0x5CA2F983DAC742C5L ^ l2))));
                                        if (!bl3) break block21;
                                        if (!bl2) break block22;
                                    }
                                    catch (MatchException matchException) {
                                        throw cG.Wp(matchException);
                                    }
                                    this.Uc(jsonObject.get((String)((Object)cG.Wt("h", (int)9713, (long)(0x24DC5DAC7D17DCCBL ^ l2)))).getAsInt());
                                }
                                catch (MatchException matchException) {
                                    throw cG.Wp(matchException);
                                }
                            }
                            bl2 = jsonObject.has((String)((Object)cG.Wt("h", (int)15521, (long)(0x79B9E258C7D1459FL ^ l2))));
                        }
                        try {
                            try {
                                if (!bl3) break block23;
                                if (!bl2) break block24;
                            }
                            catch (MatchException matchException) {
                                throw cG.Wp(matchException);
                            }
                            this.Ud(jsonObject.get((String)((Object)cG.Wt("h", (int)21463, (long)(0x3D7C5E024CC82AEAL ^ l2)))).getAsInt());
                        }
                        catch (MatchException matchException) {
                            throw cG.Wp(matchException);
                        }
                    }
                    bl2 = jsonObject.has((String)((Object)cG.Wt("h", (int)17132, (long)(0x72771D219E913BD4L ^ l2))));
                }
                try {
                    try {
                        if (!bl3) break block25;
                        if (!bl2) break block26;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    this.Ug(jsonObject.get((String)((Object)cG.Wt("h", (int)23921, (long)(0x37C24DB6BDC5A448L ^ l2)))).getAsBoolean());
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            bl2 = jsonObject.has((String)((Object)cG.Wt("h", (int)18307, (long)(0x45B7B1E9974A3EBCL ^ l2))));
        }
        try {
            if (bl2) {
                this.Uh(jsonObject.get((String)((Object)cG.Wt("h", (int)6439, (long)(0x1F1C83FD97E601BL ^ l2)))).getAsBoolean());
            }
        }
        catch (MatchException matchException) {
            throw cG.Wp(matchException);
        }
    }

    @Override
    public void SR(Map<String, Object> map) {
        long l2 = QtQoN ^ 0x38726B75081CL;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)cG.Wt("h", (int)9713, (long)(0x24DC0ED5F7754167L ^ l2))), (Number)this.HYLiK.coh());
        jsonObject.addProperty((String)((Object)cG.Wt("h", (int)21463, (long)(0x3D7C0D7BC6AAB746L ^ l2))), (Number)this.mbUpG.coh());
        jsonObject.addProperty((String)((Object)cG.Wt("h", (int)23921, (long)(0x37C21ECF37A739E4L ^ l2))), Boolean.valueOf(this.nfBAC));
        jsonObject.addProperty((String)((Object)cG.Wt("h", (int)6439, (long)(0x1F19B46531CFDB7L ^ l2))), Boolean.valueOf(this.xPYck));
        map.put(Arrays.toString(this.NwlSF), jsonObject);
    }

    public cG Uh(boolean bl2) {
        cG cG2;
        block4: {
            block5: {
                long l2 = QtQoN ^ 0x3A60A0CE37D9L;
                boolean bl3 = cB.Vt();
                try {
                    try {
                        cG2 = this;
                        if (!bl3) break block4;
                        if (cG2.xPYck != bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.xPYck = bl2;
            this.Vk();
            cG2 = this;
        }
        return cG2;
    }

    public cG We() {
        this.CDdOA = true;
        return this;
    }

    public cG Ue(mG mG2) {
        block18: {
            block19: {
                int n2;
                int n3;
                boolean bl2;
                block17: {
                    mG mG3;
                    block15: {
                        block16: {
                            int n4;
                            block14: {
                                mG mG4;
                                block12: {
                                    block13: {
                                        long l2 = QtQoN ^ 0x59928802CB96L;
                                        bl2 = cB.Vt();
                                        try {
                                            try {
                                                mG4 = mG2;
                                                if (!bl2) break block12;
                                                if (mG4 != null) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw cG.Wp(matchException);
                                            }
                                            n4 = 0;
                                            break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw cG.Wp(matchException);
                                        }
                                    }
                                    mG4 = mG2;
                                }
                                n4 = mG4.coh();
                            }
                            n3 = n4;
                            try {
                                try {
                                    mG3 = this.mbUpG;
                                    if (!bl2) break block15;
                                    if (mG3 != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw cG.Wp(matchException);
                                }
                                n2 = 0;
                                break block17;
                            }
                            catch (MatchException matchException) {
                                throw cG.Wp(matchException);
                            }
                        }
                        mG3 = this.mbUpG;
                    }
                    n2 = mG3.coh();
                }
                int n5 = n2;
                try {
                    try {
                        if (!bl2) break block18;
                        if (n5 != n3) break block19;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.mbUpG = mG2;
            this.Vk();
        }
        return this;
    }

    public cG Uc(int n2) {
        block11: {
            block12: {
                int n3;
                boolean bl2;
                block10: {
                    mG mG2;
                    block8: {
                        block9: {
                            long l2 = QtQoN ^ 0x19A1F330FB8BL;
                            bl2 = cB.Vu();
                            try {
                                try {
                                    mG2 = this.HYLiK;
                                    if (bl2) break block8;
                                    if (mG2 != null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw cG.Wp(matchException);
                                }
                                n3 = 0;
                                break block10;
                            }
                            catch (MatchException matchException) {
                                throw cG.Wp(matchException);
                            }
                        }
                        mG2 = this.HYLiK;
                    }
                    n3 = mG2.coh();
                }
                int n4 = n3;
                try {
                    try {
                        if (bl2) break block11;
                        if (n4 != n2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.HYLiK = mG.cnQ(n2);
            this.Vk();
        }
        return this;
    }

    public cG Ub(boolean bl2) {
        this.CDdOA = bl2;
        return this;
    }

    public static boolean Wo() {
        boolean bl2 = cG.Wn();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw cG.Wp(matchException);
        }
        return false;
    }

    private static MatchException Wp(MatchException matchException) {
        return matchException;
    }

    private static Object Ws(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cG.Wr(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String Wr(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5192;
        if (zfSXE[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])GtaeP.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GtaeP.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cG", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = TatDI[n3].getBytes("ISO-8859-1");
            cG.zfSXE[n3] = cG.Wq(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return zfSXE[n3];
    }

    private static String Wq(byte[] byArray) {
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

    public static void Wm(boolean bl2) {
        XqhhV = bl2;
    }

    public boolean Wk() {
        return this.xPYck;
    }

    public boolean Wl() {
        return this.CDdOA;
    }

    public cG Ud(int n2) {
        block11: {
            block12: {
                int n3;
                boolean bl2;
                block10: {
                    mG mG2;
                    block8: {
                        block9: {
                            long l2 = QtQoN ^ 0x776DA32C2C50L;
                            bl2 = cB.Vu();
                            try {
                                try {
                                    mG2 = this.mbUpG;
                                    if (bl2) break block8;
                                    if (mG2 != null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw cG.Wp(matchException);
                                }
                                n3 = 0;
                                break block10;
                            }
                            catch (MatchException matchException) {
                                throw cG.Wp(matchException);
                            }
                        }
                        mG2 = this.mbUpG;
                    }
                    n3 = mG2.coh();
                }
                int n4 = n3;
                try {
                    try {
                        if (bl2) break block11;
                        if (n4 != n2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.mbUpG = mG.cnQ(n2);
            this.Vk();
        }
        return this;
    }

    public static boolean Wn() {
        return XqhhV;
    }

    public mG Wg() {
        return this.HYLiK;
    }

    public mG Wi() {
        return this.mbUpG;
    }

    private static CallSite Wt(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cG" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public boolean Wj() {
        return this.nfBAC;
    }

    public cG Ug(boolean bl2) {
        cG cG2;
        block4: {
            block5: {
                long l2 = QtQoN ^ 0x19EB9E4C6D92L;
                boolean bl3 = cB.Vu();
                try {
                    try {
                        cG2 = this;
                        if (bl3) break block4;
                        if (cG2.nfBAC != bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.nfBAC = bl2;
            this.Vk();
            cG2 = this;
        }
        return cG2;
    }

    public cG Uf(mG mG2) {
        block18: {
            block19: {
                int n2;
                int n3;
                boolean bl2;
                block17: {
                    mG mG3;
                    block15: {
                        block16: {
                            int n4;
                            block14: {
                                mG mG4;
                                block12: {
                                    block13: {
                                        long l2 = QtQoN ^ 0x1C3842387619L;
                                        bl2 = cB.Vt();
                                        try {
                                            try {
                                                mG4 = mG2;
                                                if (!bl2) break block12;
                                                if (mG4 != null) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw cG.Wp(matchException);
                                            }
                                            n4 = 0;
                                            break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw cG.Wp(matchException);
                                        }
                                    }
                                    mG4 = mG2;
                                }
                                n4 = mG4.coh();
                            }
                            n3 = n4;
                            try {
                                try {
                                    mG3 = this.HYLiK;
                                    if (!bl2) break block15;
                                    if (mG3 != null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw cG.Wp(matchException);
                                }
                                n2 = 0;
                                break block17;
                            }
                            catch (MatchException matchException) {
                                throw cG.Wp(matchException);
                            }
                        }
                        mG3 = this.HYLiK;
                    }
                    n2 = mG3.coh();
                }
                int n5 = n2;
                try {
                    try {
                        if (!bl2) break block18;
                        if (n5 != n3) break block19;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cG.Wp(matchException);
                }
            }
            this.HYLiK = mG2;
            this.Vk();
        }
        return this;
    }

    public int Wh() {
        int n2;
        block6: {
            cG cG2;
            block4: {
                block5: {
                    long l2 = QtQoN ^ 0x6E98AE6C83F5L;
                    boolean bl2 = cB.Vu();
                    try {
                        try {
                            cG2 = this;
                            if (bl2) break block4;
                            if (!cG2.xPYck) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cG.Wp(matchException);
                        }
                        n2 = jk.bDk().coh();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw cG.Wp(matchException);
                    }
                }
                cG2 = this;
            }
            n2 = cG2.HYLiK.coh();
        }
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cG.class, "Ws", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

