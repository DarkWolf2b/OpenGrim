/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.Hand
 *  net.minecraft.util.hit.BlockHitResult
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
import net.minecraft.util.Hand;
import net.minecraft.util.hit.BlockHitResult;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.oS;
import sixtwo.oT;
import sixtwo.oz;

public class oT$vo {
    private Hand PQOGG;
    private boolean biIdo;
    private oS iVleL;
    private boolean JbSJu;
    private BlockHitResult dARNZ;
    private boolean qbYSv;
    private oz BzuXr;
    private boolean KKKuN;
    private boolean LMIxH;
    private static final long SYSqh;
    private static final String[] vDRMz;
    private static final String[] GQlOv;
    private static final Map cNPgK;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    oT$vo() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                oT$vo.SYSqh = gb.aYR(2924280231983816464L, -6437644767887385089L, MethodHandles.lookup().lookupClass()).a(190874295948585L);
                oT$vo.cNPgK = new HashMap<K, V>(13);
                var0 = oT$vo.SYSqh ^ 60380632147314L;
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
                var9_3 = new String[5];
                var7_4 = 0;
                var6_5 = "\u001c\u00c8b\u00e45\u0086\u0000\u00b0\u00d9\u00be\u0083V\u00ca\u0097M(\u00a3L\u0095\u0085\u00d8;\u00af\u00e5,\u00f8\u00d0\u00fd\u0013j9]P0S\u00a3\u00f7\u00da\u00c0\u00b3&S\u00d54\u00a2x~0\u00b3\u00bdk\u00ed\u001c\u00b4\u0086!\u00dcW\u00b2\u00da\u00bd>\u00bf\u00d1\u00f5\u00af\u00a3G\u001a\u0090a\u00ae\u00e5\u00cc*\u00c6\u00ed\u0016O\u0013-K`m\u00ba> 9\u00cd\u00d9\ry\u00d0!<\u00e6:>\u008aD\f\u0098O\u009a\u00bd\u00f99\u00c3\u00e3\u00158\u00b8\u00bf0\u00f3CH5k\\\u00c4(y\u00e3]\u00dbn\u00f6!3\u008b\u008fXp\u008f\u00db\u00f4\u0005\u0098\u00b6\u0080\f<\u00f4Bsk\u008c\u00d2.\n\u00a0\u0001Tk\u00b3#\u0010\u00e6,\u00ce}";
                var8_6 = "\u001c\u00c8b\u00e45\u0086\u0000\u00b0\u00d9\u00be\u0083V\u00ca\u0097M(\u00a3L\u0095\u0085\u00d8;\u00af\u00e5,\u00f8\u00d0\u00fd\u0013j9]P0S\u00a3\u00f7\u00da\u00c0\u00b3&S\u00d54\u00a2x~0\u00b3\u00bdk\u00ed\u001c\u00b4\u0086!\u00dcW\u00b2\u00da\u00bd>\u00bf\u00d1\u00f5\u00af\u00a3G\u001a\u0090a\u00ae\u00e5\u00cc*\u00c6\u00ed\u0016O\u0013-K`m\u00ba> 9\u00cd\u00d9\ry\u00d0!<\u00e6:>\u008aD\f\u0098O\u009a\u00bd\u00f99\u00c3\u00e3\u00158\u00b8\u00bf0\u00f3CH5k\\\u00c4(y\u00e3]\u00dbn\u00f6!3\u008b\u008fXp\u008f\u00db\u00f4\u0005\u0098\u00b6\u0080\f<\u00f4Bsk\u008c\u00d2.\n\u00a0\u0001Tk\u00b3#\u0010\u00e6,\u00ce}".length();
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
                    var9_3[var7_4++] = oT$vo.dwQ(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00a4\u0014\u001f\u008a\u009a\u00c6>\u00f5\u0082\u008a5U\u00cb\u00f8(\u0018\u00cf\u000b\u00f4\u00a4?\u001b\u00c7H\u00e1\u009fp\u00ba\u00d0\u00bb\u00fc\u0001 \u001d\u0094\u0019IB\u008c\u00a0(\u009a[\u00e4\u00c35\u00bb\u00ab\u00e6\u0098\u00f9\u0018\u0093\u00c72\\^\u0001\u0000\u00fbX\u00f0C\u000bZ\u0002\u00ce\u009a=go\u00d35Ad0\u00e7\u0019<[\u00f7";
                    var8_6 = "\u00a4\u0014\u001f\u008a\u009a\u00c6>\u00f5\u0082\u008a5U\u00cb\u00f8(\u0018\u00cf\u000b\u00f4\u00a4?\u001b\u00c7H\u00e1\u009fp\u00ba\u00d0\u00bb\u00fc\u0001 \u001d\u0094\u0019IB\u008c\u00a0(\u009a[\u00e4\u00c35\u00bb\u00ab\u00e6\u0098\u00f9\u0018\u0093\u00c72\\^\u0001\u0000\u00fbX\u00f0C\u000bZ\u0002\u00ce\u009a=go\u00d35Ad0\u00e7\u0019<[\u00f7".length();
                    var5_7 = 40;
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
                    var9_3[var7_4++] = oT$vo.dwQ(var10_9).intern();
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
        oT$vo.vDRMz = var9_3;
        oT$vo.GQlOv = new String[5];
    }

    public String toString() {
        String string;
        long l2 = SYSqh ^ 0x6E4685DD5540L;
        String[] stringArray = oT.cKT();
        boolean bl2 = this.LMIxH;
        String string2 = String.valueOf(this.BzuXr);
        String string3 = String.valueOf(this.dARNZ);
        String string4 = String.valueOf((Object)this.iVleL);
        String string5 = String.valueOf(this.PQOGG);
        try {
            string = (String)((Object)oT$vo.dwT("t", (int)209, (long)(0xAF5BDDBE518647FL ^ l2))) + string5 + (String)((Object)oT$vo.dwT("t", (int)1394, (long)(0x226EF78F7B6361DDL ^ l2))) + string4 + (String)((Object)oT$vo.dwT("t", (int)6117, (long)(0x48893F51379A7349L ^ l2))) + string3 + (String)((Object)oT$vo.dwT("t", (int)16340, (long)(0x60033998E722DB7FL ^ l2))) + string2 + (String)((Object)oT$vo.dwT("t", (int)25297, (long)(0x1D542486373A867CL ^ l2))) + bl2 + ")";
            if (stringArray != null) {
                iS.bwK("jiHN4");
            }
        }
        catch (MatchException matchException) {
            throw oT$vo.dwP(matchException);
        }
        return string;
    }

    public oT$vo dwM(oz oz2) {
        this.BzuXr = oz2;
        this.qbYSv = true;
        return this;
    }

    public oT dwO() {
        long l2 = SYSqh ^ 0x2E70DAC7A98DL;
        oS oS2 = this.iVleL;
        if (!this.biIdo) {
            oS2 = oT.cKH();
        }
        BlockHitResult blockHitResult = this.dARNZ;
        if (!this.JbSJu) {
            blockHitResult = oT.cKI();
        }
        oz oz2 = this.BzuXr;
        if (!this.qbYSv) {
            oz2 = oT.cKJ();
        }
        boolean bl2 = this.LMIxH;
        if (!this.KKKuN) {
            bl2 = oT.cKK();
        }
        return new oT(this.PQOGG, oS2, blockHitResult, oz2, bl2);
    }

    private static CallSite dwT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/oT$vo" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public oT$vo dwK(oS oS2) {
        this.iVleL = oS2;
        this.biIdo = true;
        return this;
    }

    private static String dwQ(byte[] byArray) {
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

    private static MatchException dwP(MatchException matchException) {
        return matchException;
    }

    private static Object dwS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = oT$vo.dwR(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public oT$vo dwL(BlockHitResult blockHitResult) {
        this.dARNZ = blockHitResult;
        this.JbSJu = true;
        return this;
    }

    private static String dwR(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x136;
        if (GQlOv[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])cNPgK.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cNPgK.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/oT$vo", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = vDRMz[n3].getBytes("ISO-8859-1");
            oT$vo.GQlOv[n3] = oT$vo.dwQ(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return GQlOv[n3];
    }

    public oT$vo dwJ(Hand hand) {
        this.PQOGG = hand;
        return this;
    }

    public oT$vo dwN(boolean bl2) {
        this.LMIxH = bl2;
        this.KKKuN = true;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(oT$vo.class, "dwS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

