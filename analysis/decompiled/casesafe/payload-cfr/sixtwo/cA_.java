/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  org.apache.commons.lang3.tuple.MutablePair
 */
package sixtwo;

import com.google.gson.JsonElement;
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
import org.apache.commons.lang3.tuple.MutablePair;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mU;
import sixtwo.mr;

public class cA
extends cB {
    private double PTaqi = -1.7976931348623157E308;
    private double GOtZp = Double.MAX_VALUE;
    private double thjOL;
    private final MutablePair<Double, Double> wJgtl = MutablePair.of((Object)0.0, (Object)0.0);
    private String pSPRn = "";
    private static final long ohlej;
    private static final String[] hoqLM;
    private static final String[] xcUqQ;
    private static final Map wtWpm;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cA(mr mr2) {
        super(mr2);
    }

    public cA(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                cA.ohlej = gb.aYR(8502255672634985563L, -6050114685291028941L, MethodHandles.lookup().lookupClass()).a(40475717437278L);
                cA.wtWpm = new HashMap<K, V>(13);
                var0 = cA.ohlej ^ 79353097297229L;
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
                var6_5 = "\u00d4\u00af\u00a2\u0010\u0096\u00ab \u00e3\u00eb\u0016\u00c0cE\u00c1\u0097\u00e4\u0010FF\u009a\u0019:m\"<kwZ)B\\v\u0082";
                var8_6 = "\u00d4\u00af\u00a2\u0010\u0096\u00ab \u00e3\u00eb\u0016\u00c0cE\u00c1\u0097\u00e4\u0010FF\u009a\u0019:m\"<kwZ)B\\v\u0082".length();
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
                    var9_3[var7_4++] = cA.UZ(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00834\u00f79\u00bce\u0080]\u008c\u00c0\u00fb\u00f5'\u00f2\u0081\u00fa\u0010lm\u000e\u00da\u00a0UT\u00b3@\u00a0\u00b0+m\u00ab_\t";
                    var8_6 = "\u00834\u00f79\u00bce\u0080]\u008c\u00c0\u00fb\u00f5'\u00f2\u0081\u00fa\u0010lm\u000e\u00da\u00a0UT\u00b3@\u00a0\u00b0+m\u00ab_\t".length();
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
                    var9_3[var7_4++] = cA.UZ(var10_9).intern();
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
        cA.hoqLM = var9_3;
        cA.xcUqQ = new String[4];
    }

    public float UP(int n) {
        float f;
        long l = ohlej ^ 0x4D0425BDF478L;
        try {
            f = n == 0 ? ((Double)this.wJgtl.getLeft()).floatValue() : ((Double)this.wJgtl.getRight()).floatValue();
        }
        catch (MatchException matchException) {
            throw cA.UY(matchException);
        }
        return f;
    }

    public double UT() {
        return this.PTaqi;
    }

    private double US(double d) {
        double d2;
        block2: {
            double d3;
            block3: {
                long l = ohlej ^ 0x26FCCC042FD8L;
                double d4 = Math.min(this.PTaqi, this.GOtZp);
                boolean bl = cB.Vu();
                double d5 = Math.max(this.PTaqi, this.GOtZp);
                d3 = Math.max(d4, Math.min(d5, d));
                try {
                    d2 = this.thjOL;
                    if (bl) break block2;
                    if (!(d2 > 0.0)) break block3;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
                d3 = (double)Math.round(d3 / this.thjOL) * this.thjOL;
                d3 = Math.max(d4, Math.min(d5, d3));
            }
            d2 = d3;
        }
        return d2;
    }

    public cA UK(double d) {
        MutablePair<Double, Double> mutablePair;
        double d2;
        block4: {
            block5: {
                long l = ohlej ^ 0x7B13CEEBA3C7L;
                d2 = this.US(d);
                boolean bl = cB.Vu();
                try {
                    try {
                        mutablePair = this.wJgtl;
                        if (bl) break block4;
                        if (Double.compare((Double)mutablePair.left, d2) != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cA.UY(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
            }
            mutablePair = this.wJgtl;
        }
        mutablePair.setLeft((Object)d2);
        this.Vk();
        return this;
    }

    public double UV() {
        return this.thjOL;
    }

    public cA UI(double d, double d2) {
        return this.UJ((MutablePair<Double, Double>)MutablePair.of((Object)d, (Object)d2));
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void SS(JsonElement var1_1) {
        block30: {
            block32: {
                block31: {
                    block26: {
                        block29: {
                            block27: {
                                block28: {
                                    block21: {
                                        block25: {
                                            block24: {
                                                block22: {
                                                    block23: {
                                                        var2_2 = cA.ohlej ^ 59181236786858L;
                                                        var5_3 = (Double)this.wJgtl.left;
                                                        var7_4 = (Double)this.wJgtl.right;
                                                        var4_5 = cB.Vu();
                                                        try {
                                                            v0 = var1_1;
                                                            if (var4_5) break block21;
                                                            if (v0.isJsonArray()) {
                                                            }
                                                            ** GOTO lbl42
                                                        }
                                                        catch (MatchException v1) {
                                                            throw cA.UY(v1);
                                                        }
                                                        var9_6 = var1_1.getAsJsonArray();
                                                        try {
                                                            v2 = var9_6.isEmpty();
                                                            if (var4_5) break block22;
                                                            if (v2 != 0) break block23;
                                                        }
                                                        catch (MatchException v3) {
                                                            throw cA.UY(v3);
                                                        }
                                                        var5_3 = var9_6.get(0).getAsDouble();
                                                    }
                                                    try {
                                                        v4 = var9_6;
                                                        if (var4_5) break block24;
                                                        v2 = v4.size();
                                                    }
                                                    catch (MatchException v5) {
                                                        throw cA.UY(v5);
                                                    }
                                                }
                                                try {
                                                    if (v2 <= 1) break block25;
                                                    v4 = var9_6.get(1);
                                                }
                                                catch (MatchException v6) {
                                                    throw cA.UY(v6);
                                                }
                                            }
                                            var7_4 = v4.getAsDouble();
                                        }
                                        try {
                                            if (!var4_5) break block26;
lbl42:
                                            // 2 sources

                                            v0 = var1_1;
                                        }
                                        catch (MatchException v7) {
                                            throw cA.UY(v7);
                                        }
                                    }
                                    var9_6 = v0.getAsJsonObject();
                                    try {
                                        v8 = var9_6.has((String)cA.Vc("y", (int)19391, (long)(6637044885065389711L ^ var2_2)));
                                        if (var4_5) break block27;
                                        if (!v8) break block28;
                                    }
                                    catch (MatchException v9) {
                                        throw cA.UY(v9);
                                    }
                                    var5_3 = var9_6.get((String)cA.Vc("y", (int)30571, (long)(8083870684983945816L ^ var2_2))).getAsDouble();
                                }
                                try {
                                    v10 = var9_6;
                                    v11 = cA.Vc("y", (int)26735, (long)(7524066723178345822L ^ var2_2));
                                    if (var4_5) break block29;
                                    v8 = v10.has((String)v11);
                                }
                                catch (MatchException v12) {
                                    throw cA.UY(v12);
                                }
                            }
                            try {
                                if (!v8) break block26;
                                v10 = var9_6;
                                v11 = cA.Vc("y", (int)17767, (long)(2048034790780065877L ^ var2_2));
                            }
                            catch (MatchException v13) {
                                throw cA.UY(v13);
                            }
                        }
                        var7_4 = v10.get((String)v11).getAsDouble();
                    }
                    try {
                        try {
                            this.UJ((MutablePair<Double, Double>)new MutablePair((Object)var5_3, (Object)var7_4));
                            if (iS.bwL() != null) break block30;
                            if (!var4_5) break block31;
                        }
                        catch (MatchException v14) {
                            throw cA.UY(v14);
                        }
                        v15 = false;
                        break block32;
                    }
                    catch (MatchException v16) {
                        throw cA.UY(v16);
                    }
                }
                v15 = true;
            }
            cB.Vs(v15);
        }
    }

    public MutablePair<Double, Double> UW() {
        return this.wJgtl;
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), MutablePair.of((Object)((Double)this.wJgtl.left), (Object)((Double)this.wJgtl.right)));
    }

    public String UX() {
        return this.pSPRn;
    }

    private static String Va(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x359A;
        if (xcUqQ[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])wtWpm.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    wtWpm.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cA", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = hoqLM[n2].getBytes("ISO-8859-1");
            cA.xcUqQ[n2] = cA.UZ(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return xcUqQ[n2];
    }

    public boolean UM(double d) {
        double d2;
        block8: {
            block7: {
                boolean bl;
                block6: {
                    long l = ohlej ^ 0x2B22A7A5B90FL;
                    bl = cB.Vt();
                    try {
                        try {
                            double d3 = d - (Double)this.wJgtl.getLeft();
                            d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                            if (!bl) break block6;
                            if (d2 < 0) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cA.UY(matchException);
                        }
                        double d4 = d - (Double)this.wJgtl.getRight();
                        d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw cA.UY(matchException);
                    }
                }
                try {
                    if (!bl) break block8;
                    if (d2 > 0) break block7;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
                d2 = 1.0;
                break block8;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    public long UR(int n) {
        long l;
        long l2 = ohlej ^ 0x229F53190B6L;
        try {
            l = n == 0 ? ((Double)this.wJgtl.getLeft()).longValue() : ((Double)this.wJgtl.getRight()).longValue();
        }
        catch (MatchException matchException) {
            throw cA.UY(matchException);
        }
        return l;
    }

    private static CallSite Vc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cA" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public int UQ(int n) {
        int n2;
        block4: {
            block5: {
                long l = ohlej ^ 0x16929713EB21L;
                boolean bl = cB.Vu();
                try {
                    try {
                        n2 = n;
                        if (bl) break block4;
                        if (n2 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cA.UY(matchException);
                    }
                    n2 = ((Double)this.wJgtl.getLeft()).intValue();
                    break block4;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
            }
            n2 = ((Double)this.wJgtl.getRight()).intValue();
        }
        return n2;
    }

    public Number UO() {
        return ((Double)this.wJgtl.getLeft() + (Double)this.wJgtl.getRight()) / 2.0;
    }

    private static Object Vb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = cA.Va(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cA UL(double d) {
        MutablePair<Double, Double> mutablePair;
        double d2;
        block4: {
            block5: {
                long l = ohlej ^ 0x100175B68CE1L;
                d2 = this.US(d);
                boolean bl = cB.Vu();
                try {
                    try {
                        mutablePair = this.wJgtl;
                        if (bl) break block4;
                        if (Double.compare((Double)mutablePair.right, d2) != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cA.UY(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
            }
            mutablePair = this.wJgtl;
        }
        mutablePair.setRight((Object)d2);
        this.Vk();
        return this;
    }

    public double UU() {
        return this.GOtZp;
    }

    private static String UZ(byte[] byArray) {
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

    public Number UN() {
        return mU.cpR(this);
    }

    private static MatchException UY(MatchException matchException) {
        return matchException;
    }

    public cA UJ(MutablePair<Double, Double> mutablePair) {
        MutablePair<Double, Double> mutablePair2;
        double d;
        block8: {
            double d2;
            block9: {
                long l = ohlej ^ 0xD59378E675FL;
                d2 = this.US((Double)mutablePair.left);
                boolean bl = cB.Vu();
                d = this.US((Double)mutablePair.right);
                try {
                    try {
                        try {
                            try {
                                mutablePair2 = this.wJgtl;
                                if (bl) break block8;
                                if (Double.compare((Double)mutablePair2.left, d2) != 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw cA.UY(matchException);
                            }
                            mutablePair2 = this.wJgtl;
                            if (bl) break block8;
                        }
                        catch (MatchException matchException) {
                            throw cA.UY(matchException);
                        }
                        if (Double.compare((Double)mutablePair2.right, d) != 0) break block9;
                    }
                    catch (MatchException matchException) {
                        throw cA.UY(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
            }
            this.wJgtl.setLeft((Object)d2);
            mutablePair2 = this.wJgtl;
        }
        mutablePair2.setRight((Object)d);
        this.Vk();
        return this;
    }

    public cA UE(double d) {
        this.PTaqi = d;
        return this.UJ((MutablePair<Double, Double>)MutablePair.of((Object)((Double)this.wJgtl.left), (Object)((Double)this.wJgtl.right)));
    }

    public cA UG(double d) {
        this.thjOL = Math.max(0.0, d);
        return this.UJ((MutablePair<Double, Double>)MutablePair.of((Object)((Double)this.wJgtl.left), (Object)((Double)this.wJgtl.right)));
    }

    public cA UF(double d) {
        this.GOtZp = d;
        return this.UJ((MutablePair<Double, Double>)MutablePair.of((Object)((Double)this.wJgtl.left), (Object)((Double)this.wJgtl.right)));
    }

    public cA UH(String string) {
        String string2;
        block2: {
            block3: {
                long l = ohlej ^ 0x567BC1FA5F4FL;
                boolean bl = cB.Vu();
                try {
                    cA cA2 = this;
                    string2 = string;
                    if (bl) break block2;
                    if (string2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw cA.UY(matchException);
                }
                string2 = "";
                break block2;
            }
            string2 = string;
        }
        cA2.pSPRn = string2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cA.class, "Vb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
