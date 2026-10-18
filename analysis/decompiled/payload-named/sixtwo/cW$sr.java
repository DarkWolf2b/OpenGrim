/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.util.math.Vec3d;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rg;
import sixtwo.rj;
import sixtwo.rk;

class cW$sr {
    private final rg TgsVq;
    private final rk HxWES;
    private int hRZdA;
    private Vec3d AqODg;
    private boolean YMQFH;
    private boolean tIPuz;
    private static final long qQuCT = gb.aYR(509936826766451556L, 85579035793697715L, MethodHandles.lookup().lookupClass()).a(274841104533760L);
    private static final long[] yHRsF;
    private static final Integer[] wVrvT;
    private static final Map GdEsA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private cW$sr() {
        long l2 = qQuCT ^ 0x2C4E254DA875L;
        this.TgsVq = new rg((int)cW$sr.dnR("n", (int)21556, (long)(0xC4FBF42F4E1ECBDL ^ l2)));
        this.HxWES = new rk((int)cW$sr.dnR("n", (int)28298, (long)(0x29D17C7D5AECD602L ^ l2)));
        this.AqODg = Vec3d.ZERO;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        GdEsA = new HashMap(13);
        long l2 = qQuCT ^ 0x1D51F9C93795L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00e2\u00e5f2\u00b4\u001a\u0084#\u00bc\u00b8v\u00c9=\u009a\u00b96";
        int n3 = "\u00e2\u00e5f2\u00b4\u001a\u0084#\u00bc\u00b8v\u00c9=\u009a\u00b96".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        yHRsF = lArray;
        wVrvT = new Integer[2];
    }

    private static CallSite dnR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cW$sr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException dnO(MatchException matchException) {
        return matchException;
    }

    private static int dnQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cW$sr.dnP(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int dnP(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4192;
        if (wVrvT[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = yHRsF[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])GdEsA.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GdEsA.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cW$sr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cW$sr.wVrvT[n3] = n4;
        }
        return wVrvT[n3];
    }

    public void dnK() {
        this.tIPuz = true;
        this.HxWES.dhs(rj.AYqck);
    }

    public boolean dnN() {
        boolean bl2;
        block8: {
            block7: {
                iS[] iSArray;
                block6: {
                    long l2 = qQuCT ^ 0x383DD31A0165L;
                    iSArray = dh.afl();
                    try {
                        try {
                            bl2 = this.tIPuz;
                            if (iSArray != null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cW$sr.dnO(matchException);
                        }
                        float f2 = this.HxWES.dhj() - 0.0f;
                        bl2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw cW$sr.dnO(matchException);
                    }
                }
                try {
                    if (iSArray != null) break block8;
                    if (bl2) break block7;
                }
                catch (MatchException matchException) {
                    throw cW$sr.dnO(matchException);
                }
                bl2 = true;
                break block8;
            }
            bl2 = false;
        }
        return bl2;
    }

    public float dnM() {
        boolean bl2;
        rk rk2;
        block2: {
            block3: {
                long l2 = qQuCT ^ 0x38349ABFE9FFL;
                iS[] iSArray = dh.afl();
                try {
                    rk2 = this.HxWES;
                    bl2 = this.tIPuz;
                    if (iSArray != null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw cW$sr.dnO(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        rk2.dhc(bl2);
        return this.HxWES.dhj();
    }

    public Vec3d dnL() {
        cW$sr cW$sr;
        block4: {
            block5: {
                long l2 = qQuCT ^ 0x562F7B64B535L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        cW$sr = this;
                        if (iSArray != null) break block4;
                        if (cW$sr.YMQFH) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cW$sr.dnO(matchException);
                    }
                    this.TgsVq.dfE(this.AqODg);
                    this.YMQFH = true;
                    return this.AqODg;
                }
                catch (MatchException matchException) {
                    throw cW$sr.dnO(matchException);
                }
            }
            cW$sr = this;
        }
        return cW$sr.TgsVq.dfA(this.AqODg);
    }

    public void dnJ(int n2, Vec3d vec3d) {
        this.hRZdA = n2;
        this.AqODg = vec3d;
        this.tIPuz = false;
        this.HxWES.dhs(rj.XzDkv);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cW$sr.class, "dnQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

