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
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.mZ;
import sixtwo.mr;

public class bH
extends cw {
    private int[] VCgDl;
    private String tWcbr;
    private static String[] sXJBa;
    private static final long iXCvb;
    private static final long[] HtTLR;
    private static final Integer[] veNlg;
    private static final Map KvEPM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bH(cv cv2, mr mr2) {
        long l = iXCvb ^ 0x2392BE261292L;
        super(cv2, mr2);
        this.VCgDl = new int[]{(int)bH.Mx("d", (int)189, (long)(0x11E418DEEACFC40EL ^ l))};
        this.tWcbr = "";
        this.Tz();
    }

    public bH(cv cv2, mr mr2, String string) {
        long l = iXCvb ^ 0x17CBF6E9A1B2L;
        super(cv2, mr2);
        this.VCgDl = new int[]{(int)bH.Mx("d", (int)3764, (long)(0x218061DBC006F926L ^ l))};
        this.tWcbr = "";
        this.tWcbr = string;
        this.Tz();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        iXCvb = gb.aYR(9088286829136546371L, -5680511453484505268L, MethodHandles.lookup().lookupClass()).a(279160009442563L);
        KvEPM = new HashMap(13);
        long l = iXCvb ^ 0x3EDA2EAF48FAL;
        bH.Ms(new String[3]);
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
        String string = "S\u0094\u009a\u00cbt\u0007\u00e4\u0084\u00a1\u008d\u00ad*|\u00b6j.";
        int n2 = "S\u0094\u009a\u00cbt\u0007\u00e4\u0084\u00a1\u008d\u00ad*|\u00b6j.".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        HtTLR = lArray;
        veNlg = new Integer[2];
    }

    public static String[] Mt() {
        return sXJBa;
    }

    public void Mo(String string) {
        block4: {
            bH bH2;
            block5: {
                long l = iXCvb ^ 0x1E2688016078L;
                String[] stringArray = bH.Mt();
                try {
                    try {
                        bH2 = this;
                        if (stringArray == null) break block4;
                        if (bH2.TC()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bH.Mu(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw bH.Mu(matchException);
                }
            }
            bH2 = this;
        }
        bH2.VCgDl = mZ.csh(string);
    }

    public void Mp(int[] nArray) {
        block4: {
            bH bH2;
            block5: {
                long l = iXCvb ^ 0x7C7E1BB41F8EL;
                String[] stringArray = bH.Mt();
                try {
                    try {
                        bH2 = this;
                        if (stringArray == null) break block4;
                        if (bH2.TC()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bH.Mu(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw bH.Mu(matchException);
                }
            }
            bH2 = this;
        }
        bH2.VCgDl = nArray;
    }

    public int[] Mq() {
        return this.VCgDl;
    }

    public String Mr() {
        return this.tWcbr;
    }

    private static int Mw(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bH.Mv(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static void Ms(String[] stringArray) {
        sXJBa = stringArray;
    }

    private static CallSite Mx(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bH" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Mv(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6078;
        if (veNlg[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = HtTLR[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KvEPM.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KvEPM.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bH", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bH.veNlg[n2] = n3;
        }
        return veNlg[n2];
    }

    private static MatchException Mu(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bH.class, "Mw", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
