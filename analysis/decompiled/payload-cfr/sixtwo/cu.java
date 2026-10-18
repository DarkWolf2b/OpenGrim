/*
 * Decompiled with CFR 0.152.
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
import sixtwo.ct;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;
import sixtwo.rj;
import sixtwo.rk;

public class cu {
    private final ct QYQDk;
    private final int[] HgKwo;
    private boolean IopEl;
    private final rk cmFXh;
    private final rk AKmqA;
    private static iS[] UwQow;
    private static final long yWXbB;
    private static final long[] tBNbK;
    private static final Integer[] PBdyX;
    private static final Map Urdhw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cu(ct ct2, mr mr2) {
        long l = yWXbB ^ 0x241554E724DAL;
        iS[] iSArray = ct.SW();
        this.IopEl = true;
        this.cmFXh = new rk((int)cu.Tk("f", (int)22447, (long)(0x369D52FC4C100A75L ^ l))).dhs(rj.UPXqT);
        iS[] iSArray2 = iSArray;
        try {
            this.AKmqA = new rk((int)cu.Tk("f", (int)13717, (long)(0x754306BB0D92684EL ^ l))).dhs(rj.UPXqT);
            this.QYQDk = ct2;
            this.HgKwo = mr2.clT();
            ct2.SU().add(this);
            if (iSArray2 == null) {
                iS.bwK("O9qHhb");
            }
        }
        catch (MatchException matchException) {
            throw cu.Th(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        yWXbB = gb.aYR(-2390175784653023099L, 4531184877364118520L, MethodHandles.lookup().lookupClass()).a(15978060871461L);
        Urdhw = new HashMap(13);
        cu.Tf(new iS[4]);
        long l = yWXbB ^ 0x42F83394BBA1L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00f7\u00c5\u00c6=3Zn\u0080\u00e5\u00b4m\t\u00f8\u00c9\u0087J";
        int n2 = "\u00f7\u00c5\u00c6=3Zn\u0080\u00e5\u00b4m\t\u00f8\u00c9\u0087J".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        tBNbK = lArray;
        PBdyX = new Integer[2];
    }

    public int[] Tb() {
        return this.HgKwo;
    }

    private static int Tj(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cu.Ti(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite Tk(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cu" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void Tf(iS[] iSArray) {
        UwQow = iSArray;
    }

    public boolean Tc() {
        return this.IopEl;
    }

    public ct Ta() {
        return this.QYQDk;
    }

    public static iS[] Tg() {
        return UwQow;
    }

    private static int Ti(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x36DA;
        if (PBdyX[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = tBNbK[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Urdhw.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Urdhw.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cu", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cu.PBdyX[n2] = n3;
        }
        return PBdyX[n2];
    }

    private static MatchException Th(MatchException matchException) {
        return matchException;
    }

    public rk Te() {
        return this.AKmqA;
    }

    public rk Td() {
        return this.cmFXh;
    }

    public boolean SZ() {
        boolean bl;
        block4: {
            block5: {
                long l = yWXbB ^ 0x56820F34E64CL;
                iS[] iSArray = ct.SW();
                try {
                    try {
                        bl = this.IopEl;
                        if (iSArray == null) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cu.Th(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw cu.Th(matchException);
                }
            }
            bl = this.QYQDk.SP(this);
        }
        return bl;
    }

    public cu SY() {
        this.QYQDk.SN(this.QYQDk.SU().indexOf(this));
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cu.class, "Tj", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
