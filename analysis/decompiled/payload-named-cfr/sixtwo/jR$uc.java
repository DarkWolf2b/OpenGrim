/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix3x2fStack
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
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.jO;
import sixtwo.jR;
import sixtwo.mG;

public class jR$uc {
    private Matrix3x2fStack MnDqG;
    private float xlwkp;
    private float UNuPf;
    private float gUwlx;
    private float AAVcs;
    private float dIauD;
    private float rssKu;
    private float AnQCx;
    private float hhNPD;
    private boolean cwgvR;
    private mG qFbWj;
    private boolean KGMmK;
    private float udULP;
    private static final long sOzSQ;
    private static final String[] MCHMT;
    private static final String[] ohPkh;
    private static final Map juLjc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jR$uc() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jR$uc.sOzSQ = gb.aYR(4596910150742697019L, -2553292493622331109L, MethodHandles.lookup().lookupClass()).a(205466779026466L);
                jR$uc.juLjc = new HashMap<K, V>(13);
                var0 = jR$uc.sOzSQ ^ 57051395425030L;
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
                var9_3 = new String[11];
                var7_4 = 0;
                var6_5 = ",\u0017\u00e1\u00a0\u0016?\u00d9(\u00a2\u00af\u00d4\u000e\u007fT$0%c\u00c3\u0019\u0085\u00ec\u00ab\u00a5\u00d4\u00ea\u00fbSB\u00e9\u0002J(<P\u00e3!\u0084\u0099\u00cc,\u00c4\u00ba\u00da\u001a\u00acr\u0099#\u0083\u00cb\u00a6g\u00fd\u00b3\u00ef\u0002C\u00e4\u000f\u00d3r\u00eey\u00cf]\u0016\u000f,\u00e8\u00b2$3 \u00ff\u00c7\u00c6\u00cc\u00fa$Q2\u00afA\u0018\u00ef\u008c\u0007z\u00b6T\u008bS\",bf\u00d9\u00a6\u00cf\u00de9\u00dd\u00b8r\u00e3\u0010\"d>K\u0002{,hq\t\u00a8v\u001f\u008a\u00fc\u0099\u0010\u0090\u00df\u00dcs\u00c0'\u00a7\u00b5f\u00a5S\u000b\u00e1\u00f6?m \u00d4\u008e\u0097\u000f\u00f6\u00ba/M\u00dbC\u00b8\u00ca\u0094\u0092y\u00bagD\u00e4c\u00bc]\u00d2\u00f2\u0094\u00f4.\u009a\u00c1\u00ae,\u00c8P%\u00ab\u0004u2I\u0085\u00b0\u0084r-I\u00a8\u000bx$1X9E\u0082\u00f0\u00d8E\u00c6\u00cb}b\u000b\f\u0091\u00d6\tm\u008d\u001e\u00a7\u00cc\u00e2\u0003\fr\u00f6\u00ac\u0086\u00b6\u000fK\u0091\u009b\u00b7\u00e6AC\u00a3C\u00b7W{\u0086\u0095g@\u0083/6\u00d0\u00a3\u00c7iK\u00dd\u0087\u00a5\u0095\u00b6&\u0000\u001d)\u0018\u0098\u00e0s\u00d5\u00b2hz\u0018\u00cc\u00aa\u00e6\u00b6\u00de\u00d8\u009e\u00c86\u0003\u00ea\u00bd[+\u00e6\u00a9 \u00f0#\u00ca\u00aa\u00a5W\u009ce\u00a4\u0082\u001b'\u00c03\u0092\u00a9i\u00fb-Z'\u00cd3\u0088oL\u001dsV\u0088s\u001e";
                var8_6 = ",\u0017\u00e1\u00a0\u0016?\u00d9(\u00a2\u00af\u00d4\u000e\u007fT$0%c\u00c3\u0019\u0085\u00ec\u00ab\u00a5\u00d4\u00ea\u00fbSB\u00e9\u0002J(<P\u00e3!\u0084\u0099\u00cc,\u00c4\u00ba\u00da\u001a\u00acr\u0099#\u0083\u00cb\u00a6g\u00fd\u00b3\u00ef\u0002C\u00e4\u000f\u00d3r\u00eey\u00cf]\u0016\u000f,\u00e8\u00b2$3 \u00ff\u00c7\u00c6\u00cc\u00fa$Q2\u00afA\u0018\u00ef\u008c\u0007z\u00b6T\u008bS\",bf\u00d9\u00a6\u00cf\u00de9\u00dd\u00b8r\u00e3\u0010\"d>K\u0002{,hq\t\u00a8v\u001f\u008a\u00fc\u0099\u0010\u0090\u00df\u00dcs\u00c0'\u00a7\u00b5f\u00a5S\u000b\u00e1\u00f6?m \u00d4\u008e\u0097\u000f\u00f6\u00ba/M\u00dbC\u00b8\u00ca\u0094\u0092y\u00bagD\u00e4c\u00bc]\u00d2\u00f2\u0094\u00f4.\u009a\u00c1\u00ae,\u00c8P%\u00ab\u0004u2I\u0085\u00b0\u0084r-I\u00a8\u000bx$1X9E\u0082\u00f0\u00d8E\u00c6\u00cb}b\u000b\f\u0091\u00d6\tm\u008d\u001e\u00a7\u00cc\u00e2\u0003\fr\u00f6\u00ac\u0086\u00b6\u000fK\u0091\u009b\u00b7\u00e6AC\u00a3C\u00b7W{\u0086\u0095g@\u0083/6\u00d0\u00a3\u00c7iK\u00dd\u0087\u00a5\u0095\u00b6&\u0000\u001d)\u0018\u0098\u00e0s\u00d5\u00b2hz\u0018\u00cc\u00aa\u00e6\u00b6\u00de\u00d8\u009e\u00c86\u0003\u00ea\u00bd[+\u00e6\u00a9 \u00f0#\u00ca\u00aa\u00a5W\u009ce\u00a4\u0082\u001b'\u00c03\u0092\u00a9i\u00fb-Z'\u00cd3\u0088oL\u001dsV\u0088s\u001e".length();
                var5_7 = 32;
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
                    var9_3[var7_4++] = jR$uc.drN(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "s\u0016z\u008a\u008d\u001c\u0098\u00f1\u0003Ku:`\u00d9\u00af\u00e7z\u00c0\u0000\u0089!\u00e3\u0095\u00a5\u00e5\u00ef9\u0017\ny(\u00fa \u00fc\u0089\u00aa?\u00f7\u00af$\u00c4\u00b7\u00fbmu\u009dt\u00f3d\u00b4-\u0082Zd\u00ff\u0004\u00a5N\u00df\u00de\\\u00d0\u00deM\u00c3";
                    var8_6 = "s\u0016z\u008a\u008d\u001c\u0098\u00f1\u0003Ku:`\u00d9\u00af\u00e7z\u00c0\u0000\u0089!\u00e3\u0095\u00a5\u00e5\u00ef9\u0017\ny(\u00fa \u00fc\u0089\u00aa?\u00f7\u00af$\u00c4\u00b7\u00fbmu\u009dt\u00f3d\u00b4-\u0082Zd\u00ff\u0004\u00a5N\u00df\u00de\\\u00d0\u00deM\u00c3".length();
                    var5_7 = 32;
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
                    var9_3[var7_4++] = jR$uc.drN(var10_9).intern();
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
        jR$uc.MCHMT = var9_3;
        jR$uc.ohPkh = new String[11];
    }

    public String toString() {
        long l2 = sOzSQ ^ 0x4F9BDF31EF10L;
        float f2 = this.udULP;
        String string = String.valueOf(this.qFbWj);
        float f3 = this.hhNPD;
        float f4 = this.AnQCx;
        float f5 = this.rssKu;
        float f6 = this.dIauD;
        float f7 = this.AAVcs;
        float f8 = this.gUwlx;
        float f9 = this.UNuPf;
        float f10 = this.xlwkp;
        String string2 = String.valueOf(this.MnDqG);
        return (String)((Object)jR$uc.drQ("w", (int)28970, (long)(0x3008305EAAF618DFL ^ l2))) + string2 + (String)((Object)jR$uc.drQ("w", (int)216, (long)(0x4A1DB48FCD04E92FL ^ l2))) + f10 + (String)((Object)jR$uc.drQ("w", (int)11941, (long)(0x3B4832B1C4824755L ^ l2))) + f9 + (String)((Object)jR$uc.drQ("w", (int)169, (long)(0x3D609BEE42A4E952L ^ l2))) + f8 + (String)((Object)jR$uc.drQ("w", (int)14509, (long)(0x12DA06AFE65BD15CL ^ l2))) + f7 + (String)((Object)jR$uc.drQ("w", (int)29911, (long)(0xD86C3697D1D1D21L ^ l2))) + f6 + (String)((Object)jR$uc.drQ("w", (int)25664, (long)(0x7791A5F275D90DB3L ^ l2))) + f5 + (String)((Object)jR$uc.drQ("w", (int)17920, (long)(0x13F5B61FB042FFAL ^ l2))) + f4 + (String)((Object)jR$uc.drQ("w", (int)12830, (long)(0x521898E78542DBEAL ^ l2))) + f3 + (String)((Object)jR$uc.drQ("w", (int)28167, (long)(0x721B1CF1784007FEL ^ l2))) + string + (String)((Object)jR$uc.drQ("w", (int)23554, (long)(0x72F293A3064735F0L ^ l2))) + f2 + ")";
    }

    public jR$uc drF(float f2) {
        this.dIauD = f2;
        return this;
    }

    private static MatchException drM(MatchException matchException) {
        return matchException;
    }

    private static CallSite drQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jR$uc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String drN(byte[] byArray) {
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

    private static String drO(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5FF4;
        if (ohPkh[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])juLjc.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    juLjc.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jR$uc", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = MCHMT[n3].getBytes("ISO-8859-1");
            jR$uc.ohPkh[n3] = jR$uc.drN(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ohPkh[n3];
    }

    private static Object drP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jR$uc.drO(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public jR$uc drI(float f2) {
        this.hhNPD = f2;
        return this;
    }

    public jR drL() {
        jR$uc jR$uc;
        mG mG2;
        block3: {
            block4: {
                long l2 = sOzSQ ^ 0x1795207B4AC4L;
                mG2 = this.qFbWj;
                String string = jO.bKy();
                try {
                    jR$uc = this;
                    if (string == null) break block3;
                    if (jR$uc.cwgvR) break block4;
                }
                catch (MatchException matchException) {
                    throw jR$uc.drM(matchException);
                }
                mG2 = jR.bLN();
            }
            jR$uc = this;
        }
        float f2 = jR$uc.udULP;
        if (!this.KGMmK) {
            f2 = jR.bLO();
        }
        return new jR(this.MnDqG, this.xlwkp, this.UNuPf, this.gUwlx, this.AAVcs, this.dIauD, this.rssKu, this.AnQCx, this.hhNPD, mG2, f2);
    }

    public jR$uc drJ(mG mG2) {
        this.qFbWj = mG2;
        this.cwgvR = true;
        return this;
    }

    public jR$uc drH(float f2) {
        this.AnQCx = f2;
        return this;
    }

    public jR$uc drG(float f2) {
        this.rssKu = f2;
        return this;
    }

    public jR$uc drK(float f2) {
        this.udULP = f2;
        this.KGMmK = true;
        return this;
    }

    public jR$uc drD(float f2) {
        this.gUwlx = f2;
        return this;
    }

    public jR$uc drE(float f2) {
        this.AAVcs = f2;
        return this;
    }

    public jR$uc drA(Matrix3x2fStack matrix3x2fStack) {
        this.MnDqG = matrix3x2fStack;
        return this;
    }

    public jR$uc drB(float f2) {
        this.xlwkp = f2;
        return this;
    }

    public jR$uc drC(float f2) {
        this.UNuPf = f2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jR$uc.class, "drP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

