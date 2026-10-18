/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec2f
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
import net.minecraft.util.math.Vec2f;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.jO;
import sixtwo.jQ;
import sixtwo.mG;

public class jQ$ub {
    private Matrix3x2fStack jUlYD;
    private Vec2f aBdrz;
    private Vec2f jyGVB;
    private Vec2f KEhXG;
    private Vec2f XiiWF;
    private boolean xhAIf;
    private mG nAKto;
    private boolean gKWoY;
    private float zacIX;
    private boolean crNIb;
    private float RYmQU;
    private static final long KDywn;
    private static final String[] EhNUi;
    private static final String[] sFHyX;
    private static final Map YgyYc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jQ$ub() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jQ$ub.KDywn = gb.aYR(-8288943320250390552L, -1596514271136119552L, MethodHandles.lookup().lookupClass()).a(210490629004726L);
                jQ$ub.YgyYc = new HashMap<K, V>(13);
                var0 = jQ$ub.KDywn ^ 99102793713177L;
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
                var6_5 = "+j\u001b;pC,\u00dc\u00f1\u00f5b\u00cd\u00fc\u00c6?\u00f9p\u00fe]\u00ae\u00f7\u00cf\u00a9lP\u00c4\u0007\u00f3\u00ac#,0\u00b7\u00f0!|<B/4\u000b\u001a\u00ca\u000f\u00aa\u00ac+&\u00e9\u0096'\u00c1XvKN1\u0089\u008d\u00c4G\u00d1\u0088\u001bJ\u008bt\u008cM\u00cc&B\u0098R\u00a91\n^\u008c\u00b9oT\u00ab\u00b4\u009d2L\u00b7\u0084\u00d6\u001eX\u0016J7\u00c8\u00a0\u00adG&\u00c6\u0095\u00a8aI\u0010\u00cb\u0083\u00f5\u0016\u001b\u0000&|\u00c2\u00a9\u00e8\u00b5\u00fb\u00ec\u0013<\u0010\u0089\u00f2\u00c7\u00f1\u00a2\u00ff\u00fe\u00e0H@\u0000\u00e3\u00ae\u009e\u00f0<(\u00fe\u0099\u00f6Ta$\u0000\u0010\u0006R\u00a1\u009c\"\u00bat\u00c1\u00fc#\u0090\u00b3\u009e\u008a^\u00dc\u00d17\u00cb\u00ed\u00a2\u0018.my\u00d0\u00eax\u0000\u00b1\u0019\u00e6(\u00f96c)\u0013\u0091I\u00c4\u00f9\u0092\u00c0\u008e\u0092q\u0095\u0099\u00b0\u00fd\u00f3=\u0086meddQ\u00ddl\u00cc\u007f&\u00ce\u00c6q\u00a0\u00f3_\u00f3?b";
                var8_6 = "+j\u001b;pC,\u00dc\u00f1\u00f5b\u00cd\u00fc\u00c6?\u00f9p\u00fe]\u00ae\u00f7\u00cf\u00a9lP\u00c4\u0007\u00f3\u00ac#,0\u00b7\u00f0!|<B/4\u000b\u001a\u00ca\u000f\u00aa\u00ac+&\u00e9\u0096'\u00c1XvKN1\u0089\u008d\u00c4G\u00d1\u0088\u001bJ\u008bt\u008cM\u00cc&B\u0098R\u00a91\n^\u008c\u00b9oT\u00ab\u00b4\u009d2L\u00b7\u0084\u00d6\u001eX\u0016J7\u00c8\u00a0\u00adG&\u00c6\u0095\u00a8aI\u0010\u00cb\u0083\u00f5\u0016\u001b\u0000&|\u00c2\u00a9\u00e8\u00b5\u00fb\u00ec\u0013<\u0010\u0089\u00f2\u00c7\u00f1\u00a2\u00ff\u00fe\u00e0H@\u0000\u00e3\u00ae\u009e\u00f0<(\u00fe\u0099\u00f6Ta$\u0000\u0010\u0006R\u00a1\u009c\"\u00bat\u00c1\u00fc#\u0090\u00b3\u009e\u008a^\u00dc\u00d17\u00cb\u00ed\u00a2\u0018.my\u00d0\u00eax\u0000\u00b1\u0019\u00e6(\u00f96c)\u0013\u0091I\u00c4\u00f9\u0092\u00c0\u008e\u0092q\u0095\u0099\u00b0\u00fd\u00f3=\u0086meddQ\u00ddl\u00cc\u007f&\u00ce\u00c6q\u00a0\u00f3_\u00f3?b".length();
                var5_7 = 24;
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
                    var9_3[var7_4++] = jQ$ub.drw(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00de\u00eb(\u009c\u00f5[\u00144\u00c6<.^\u00b6\u00dcO\u0007\u00f3|\u0098D\u0091\u009d\u00de!\u00ea\u0085,\u00e4\u00f0\u00ae\u0085\u001c\u0010l\u0003\u0091{\u0002\u00a6\u00c5\u0015\u001c*^T\u00a0!\u00a4#";
                    var8_6 = "\u00de\u00eb(\u009c\u00f5[\u00144\u00c6<.^\u00b6\u00dcO\u0007\u00f3|\u0098D\u0091\u009d\u00de!\u00ea\u0085,\u00e4\u00f0\u00ae\u0085\u001c\u0010l\u0003\u0091{\u0002\u00a6\u00c5\u0015\u001c*^T\u00a0!\u00a4#".length();
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
                    var9_3[var7_4++] = jQ$ub.drw(var10_9).intern();
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
        jQ$ub.EhNUi = var9_3;
        jQ$ub.sFHyX = new String[8];
    }

    public String toString() {
        long l2 = KDywn ^ 0x65F5C198CB81L;
        float f2 = this.RYmQU;
        float f3 = this.zacIX;
        String string = String.valueOf(this.nAKto);
        String string2 = String.valueOf(this.XiiWF);
        String string3 = String.valueOf(this.KEhXG);
        String string4 = String.valueOf(this.jyGVB);
        String string5 = String.valueOf(this.aBdrz);
        String string6 = String.valueOf(this.jUlYD);
        return (String)((Object)jQ$ub.drz("a", (int)12840, (long)(0x28CC42607A5D682DL ^ l2))) + string6 + (String)((Object)jQ$ub.drz("a", (int)12887, (long)(0x652D9976EAC3E851L ^ l2))) + string5 + (String)((Object)jQ$ub.drz("a", (int)25888, (long)(0x478AFC8C68CC3F27L ^ l2))) + string4 + (String)((Object)jQ$ub.drz("a", (int)15780, (long)(0x823828ED85D67A7L ^ l2))) + string3 + (String)((Object)jQ$ub.drz("a", (int)3700, (long)(0x73D1508165075470L ^ l2))) + string2 + (String)((Object)jQ$ub.drz("a", (int)16753, (long)(0x5AE30CF249AD1B73L ^ l2))) + string + (String)((Object)jQ$ub.drz("a", (int)27083, (long)(0x5AD78124871933CAL ^ l2))) + f3 + (String)((Object)jQ$ub.drz("a", (int)6273, (long)(0x18D5835062B9C281L ^ l2))) + f2 + ")";
    }

    public jQ$ub drr(mG mG2) {
        this.nAKto = mG2;
        this.xhAIf = true;
        return this;
    }

    private static String drw(byte[] byArray) {
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

    public jQ$ub drs(float f2) {
        this.zacIX = f2;
        this.gKWoY = true;
        return this;
    }

    private static MatchException drv(MatchException matchException) {
        return matchException;
    }

    public jQ$ub drn(Vec2f vec2f) {
        this.aBdrz = vec2f;
        return this;
    }

    public jQ$ub dro(Vec2f vec2f) {
        this.jyGVB = vec2f;
        return this;
    }

    public jQ$ub drp(Vec2f vec2f) {
        this.KEhXG = vec2f;
        return this;
    }

    public jQ$ub drq(Vec2f vec2f) {
        this.XiiWF = vec2f;
        return this;
    }

    public jQ$ub drm(Matrix3x2fStack matrix3x2fStack) {
        this.jUlYD = matrix3x2fStack;
        return this;
    }

    public jQ dru() {
        jQ$ub jQ$ub;
        float f2;
        mG mG2;
        block7: {
            block8: {
                jQ$ub jQ$ub2;
                String string;
                block5: {
                    block6: {
                        long l2 = KDywn ^ 0x37852B56FF5DL;
                        mG2 = this.nAKto;
                        string = jO.bKy();
                        try {
                            jQ$ub2 = this;
                            if (string == null) break block5;
                            if (jQ$ub2.xhAIf) break block6;
                        }
                        catch (MatchException matchException) {
                            throw jQ$ub.drv(matchException);
                        }
                        mG2 = jQ.bLA();
                    }
                    jQ$ub2 = this;
                }
                f2 = jQ$ub2.zacIX;
                try {
                    jQ$ub = this;
                    if (string == null) break block7;
                    if (jQ$ub.gKWoY) break block8;
                }
                catch (MatchException matchException) {
                    throw jQ$ub.drv(matchException);
                }
                f2 = jQ.bLB();
            }
            jQ$ub = this;
        }
        float f3 = jQ$ub.RYmQU;
        if (!this.crNIb) {
            f3 = jQ.bLC();
        }
        return new jQ(this.jUlYD, this.aBdrz, this.jyGVB, this.KEhXG, this.XiiWF, mG2, f2, f3);
    }

    public jQ$ub drt(float f2) {
        this.RYmQU = f2;
        this.crNIb = true;
        return this;
    }

    private static CallSite drz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jQ$ub" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String drx(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5039;
        if (sFHyX[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])YgyYc.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YgyYc.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jQ$ub", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = EhNUi[n3].getBytes("ISO-8859-1");
            jQ$ub.sFHyX[n3] = jQ$ub.drw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return sFHyX[n3];
    }

    private static Object dry(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jQ$ub.drx(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jQ$ub.class, "dry", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

