/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix4f
 */
package sixtwo;

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
import org.joml.Matrix3x2fStack;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.kD;
import sixtwo.mG;

public class kD$ul {
    private Matrix3x2fStack BIHOo;
    private Matrix4f osMsL;
    private float xhEex;
    private float FwSsf;
    private float khQQD;
    private float NUDCj;
    private int[] JPBMb;
    private mG AHAty;
    private static final long WBeUE;
    private static final String[] chOmO;
    private static final String[] nlKVM;
    private static final Map kHYmO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kD$ul dsU(float f2) {
        this.khQQD = f2;
        return this;
    }

    private static String dta(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x392B;
        if (nlKVM[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])kHYmO.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kHYmO.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kD$ul", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = chOmO[n3].getBytes("ISO-8859-1");
            kD$ul.nlKVM[n3] = kD$ul.dsZ(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return nlKVM[n3];
    }

    public kD$ul dsQ(Matrix3x2fStack matrix3x2fStack) {
        this.BIHOo = matrix3x2fStack;
        return this;
    }

    public kD$ul dsS(float f2) {
        this.xhEex = f2;
        return this;
    }

    public kD$ul dsV(float f2) {
        this.NUDCj = f2;
        return this;
    }

    public kD$ul dsR(Matrix4f matrix4f) {
        this.osMsL = matrix4f;
        return this;
    }

    public kD$ul dsW(int[] nArray) {
        this.JPBMb = nArray;
        return this;
    }

    private static String dsZ(byte[] byArray) {
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

    public kD$ul dsT(float f2) {
        this.FwSsf = f2;
        return this;
    }

    private static CallSite dtc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kD$ul" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object dtb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kD$ul.dta(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    kD$ul() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kD$ul.WBeUE = gb.aYR(-3793251232913130865L, 156478445699809695L, MethodHandles.lookup().lookupClass()).a(8175038757865L);
                kD$ul.kHYmO = new HashMap<K, V>(13);
                var0 = kD$ul.WBeUE ^ 77229404333602L;
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
                var6_5 = "Xb.\u009b\u00d5\u00aa\u00fc\u00b7+\u0092)\u00b2=\u00ca\u00fdt(A.\u0095k\u0097ic\u0010\u00cd\u00b8\u008fs\u00be+\u001b\u00cd0>\u00e2\u00f9W?\u00c5\u00ea\u0010\u0092\u00ee\u00e4\u00da\u009d\u00d7<\u0084\u000e\u00b4-\u008e\u00ab\u00c2\u00d3\u00f4`g7\u00fa\u00bd\u00c5*\u00c9\u00db\u001a:\u00bd\u0003#Q5\u00ae\u00d9\u00a8\u0013n\u00ed{\u00a7r\u0004\u00cc\u00d7\u00c7;w`\u00a9\u0087\u009a(]\u00e2~,\u00ba;}\u00c3C1\u00d0\u0011\u00f6 \u0088\u00a7I)'\u00d2\u009c\u0004\u0093\u0099v\u0097Ra\u000f\u00e3\u007f\u0003\u00cd\\V\f\u0003\u0082fs\u00fd\u00e5\u0016\u00af\u0006\u00e0\u0019\u00da\u00b8\u00a2\u00ee\u00a7\u00f5\u009a\u00b5\u00c2n\u008f5\u00aeb\u0010<)vCT\u00ab\u00fd\u00b0EN\u00f5[\u00bc\u00af\u009a\u0095\u0010\u009fp\u0019\f\u00b76\u00fa\u00b7\u00c0\nO\u00f6\u00cc\u008d\u00a0\u00fd";
                var8_6 = "Xb.\u009b\u00d5\u00aa\u00fc\u00b7+\u0092)\u00b2=\u00ca\u00fdt(A.\u0095k\u0097ic\u0010\u00cd\u00b8\u008fs\u00be+\u001b\u00cd0>\u00e2\u00f9W?\u00c5\u00ea\u0010\u0092\u00ee\u00e4\u00da\u009d\u00d7<\u0084\u000e\u00b4-\u008e\u00ab\u00c2\u00d3\u00f4`g7\u00fa\u00bd\u00c5*\u00c9\u00db\u001a:\u00bd\u0003#Q5\u00ae\u00d9\u00a8\u0013n\u00ed{\u00a7r\u0004\u00cc\u00d7\u00c7;w`\u00a9\u0087\u009a(]\u00e2~,\u00ba;}\u00c3C1\u00d0\u0011\u00f6 \u0088\u00a7I)'\u00d2\u009c\u0004\u0093\u0099v\u0097Ra\u000f\u00e3\u007f\u0003\u00cd\\V\f\u0003\u0082fs\u00fd\u00e5\u0016\u00af\u0006\u00e0\u0019\u00da\u00b8\u00a2\u00ee\u00a7\u00f5\u009a\u00b5\u00c2n\u008f5\u00aeb\u0010<)vCT\u00ab\u00fd\u00b0EN\u00f5[\u00bc\u00af\u009a\u0095\u0010\u009fp\u0019\f\u00b76\u00fa\u00b7\u00c0\nO\u00f6\u00cc\u008d\u00a0\u00fd".length();
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
                    var9_3[var7_4++] = kD$ul.dsZ(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0098|H\u00cc3|\u0005\u00cd\u00f7\u00c3\u00d0\u000b\u001f\u000f\u00ed\u00db>X\n\u00e8J\u00e3\n@`\u00f5\u00fc5\u00b1\u0017\u008c&\u0018\u0012\tu\u00c3\u0084\u00b7n=\u00cal\u00a7O\u00a7\u009e\u000b\b\u00a5\u009bzk)\u00d1D\u00e0";
                    var8_6 = "\u0098|H\u00cc3|\u0005\u00cd\u00f7\u00c3\u00d0\u000b\u001f\u000f\u00ed\u00db>X\n\u00e8J\u00e3\n@`\u00f5\u00fc5\u00b1\u0017\u008c&\u0018\u0012\tu\u00c3\u0084\u00b7n=\u00cal\u00a7O\u00a7\u009e\u000b\b\u00a5\u009bzk)\u00d1D\u00e0".length();
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
                    var9_3[var7_4++] = kD$ul.dsZ(var10_9).intern();
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
        kD$ul.chOmO = var9_3;
        kD$ul.nlKVM = new String[8];
    }

    public String toString() {
        long l2 = WBeUE ^ 0x26E333D3422AL;
        String string = String.valueOf(this.AHAty);
        String string2 = Arrays.toString(this.JPBMb);
        float f2 = this.NUDCj;
        float f3 = this.khQQD;
        float f4 = this.FwSsf;
        float f5 = this.xhEex;
        String string3 = String.valueOf(this.osMsL);
        String string4 = String.valueOf(this.BIHOo);
        return (String)((Object)kD$ul.dtc("l", (int)13492, (long)(0xD06474F2ADB3744L ^ l2))) + string4 + (String)((Object)kD$ul.dtc("l", (int)2338, (long)(0x5BB409A6ED958AD1L ^ l2))) + string3 + (String)((Object)kD$ul.dtc("l", (int)21057, (long)(0x2125FBCE6CAFD1B0L ^ l2))) + f5 + (String)((Object)kD$ul.dtc("l", (int)28030, (long)(0xD1094F4404AEE8CL ^ l2))) + f4 + (String)((Object)kD$ul.dtc("l", (int)407, (long)(0x5592C1A3D7C68261L ^ l2))) + f3 + (String)((Object)kD$ul.dtc("l", (int)2620, (long)(0x5BFEE78BAD0B09C8L ^ l2))) + f2 + (String)((Object)kD$ul.dtc("l", (int)3851, (long)(0x1F48D26CD7140CFCL ^ l2))) + string2 + (String)((Object)kD$ul.dtc("l", (int)5885, (long)(0x51F89E74A99B9508L ^ l2))) + string + ")";
    }

    public kD dsY() {
        return new kD(this.BIHOo, this.osMsL, this.xhEex, this.FwSsf, this.khQQD, this.NUDCj, this.JPBMb, this.AHAty);
    }

    public kD$ul dsX(mG mG2) {
        this.AHAty = mG2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kD$ul.class, "dtb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

