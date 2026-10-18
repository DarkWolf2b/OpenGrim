/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Pointer
 *  com.sun.jna.Structure
 *  com.sun.jna.Structure$ByReference
 */
package sixtwo;

import com.sun.jna.Pointer;
import com.sun.jna.Structure;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;

public final class jm$tO
extends Structure
implements Structure.ByReference {
    public int pqLqB;
    public Pointer QEuUZ;
    public int zJceD;
    private static final long vVATW = gb.aYR(8385221217247945627L, 4410544488706773396L, MethodHandles.lookup().lookupClass()).a(115177570977523L);
    private static final String[] MNsZG;
    private static final String[] gUsVY;
    private static final Map KCtum;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        KCtum = new HashMap(13);
        long l2 = vVATW ^ 0x1A32B45E2769L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "\u00e6\u00b9\u00d6\u00faI9'.\u0091\u00ac2\u00f0\u00f9\u00f3;\u008b\u0018\u00a9\u00d1\u00d4\u00cf\u00ed+S\u00fbPP\u0083\u00de\u00f0\u00e0(\u00f5\u00e1\u00db]\u00d9\u00bc\u00bf\u00fc\u00a1 \u0017r\u00b4j&\u00a2^Hn\u00ec\u00fe\u00e9Gs\u00b4L\u00c2\u00d0\u001e\u0019\u009e\u00be\u00daW\u008b\u00db\u000f\u0012\u00f2f\u00e5t";
        int n3 = "\u00e6\u00b9\u00d6\u00faI9'.\u0091\u00ac2\u00f0\u00f9\u00f3;\u008b\u0018\u00a9\u00d1\u00d4\u00cf\u00ed+S\u00fbPP\u0083\u00de\u00f0\u00e0(\u00f5\u00e1\u00db]\u00d9\u00bc\u00bf\u00fc\u00a1 \u0017r\u00b4j&\u00a2^Hn\u00ec\u00fe\u00e9Gs\u00b4L\u00c2\u00d0\u001e\u0019\u009e\u00be\u00daW\u008b\u00db\u000f\u0012\u00f2f\u00e5t".length();
        int n4 = 16;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = jm$tO.dpK(byArray3).intern();
            if ((n5 += n4) >= n3) {
                MNsZG = stringArray;
                gUsVY = new String[3];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    protected List<String> getFieldOrder() {
        long l2 = vVATW ^ 0x63C78492EF44L;
        return List.of(jm$tO.dpN("k", (int)19180, (long)(0x1304C1D4832E0400L ^ l2)), jm$tO.dpN("k", (int)23547, (long)(0x6DC7E9F52A211516L ^ l2)), jm$tO.dpN("k", (int)23067, (long)(0x3DBFF39337ED94F4L ^ l2)));
    }

    private static String dpK(byte[] byArray) {
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

    private static CallSite dpN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jm$tO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String dpL(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x302C;
        if (gUsVY[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])KCtum.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KCtum.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jm$tO", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = MNsZG[n3].getBytes("ISO-8859-1");
            jm$tO.gUsVY[n3] = jm$tO.dpK(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return gUsVY[n3];
    }

    private static Object dpM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jm$tO.dpL(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jm$tO.class, "dpM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

