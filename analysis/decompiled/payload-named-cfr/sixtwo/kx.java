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
import sixtwo.cJ;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.kr;
import sixtwo.ku;
import sixtwo.mr;

public class kx
extends kr {
    private final cJ AwWpm;
    private static final long wgOUI;
    private static final long[] aCLXk;
    private static final Integer[] DscPi;
    private static final Map FqygG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static CallSite bSc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kx" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @Override
    public boolean bQX() {
        return this.AwWpm.WF();
    }

    private static int bSa(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6189;
        if (DscPi[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = aCLXk[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FqygG.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FqygG.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kx", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kx.DscPi[n3] = n4;
        }
        return DscPi[n3];
    }

    private static int bSb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = kx.bSa(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public kx(gg gg2, ku ku2) {
        long l2 = wgOUI ^ 0x2882252A24DBL;
        super(gg2, ku2, false);
        int[] nArray = new int[kx.bSc("z", (int)5925, (long)(0x568E5C67B3DF0653L ^ l2))];
        nArray[0] = (int)kx.bSc("z", (int)21529, (long)(0x70C4AF341162C576L ^ l2));
        nArray[1] = (int)kx.bSc("z", (int)18627, (long)(0x2AA26F3368ED9B0L ^ l2));
        nArray[2] = (int)kx.bSc("z", (int)4671, (long)(0x503B9E16B967034DL ^ l2));
        nArray[3] = (int)kx.bSc("z", (int)12280, (long)(0x143BC201E8ABE92L ^ l2));
        nArray[4] = (int)kx.bSc("z", (int)22857, (long)(0x67DD97D99F8AC832L ^ l2));
        nArray[5] = (int)kx.bSc("z", (int)25978, (long)(0x331C516A1AF3F40AL ^ l2));
        nArray[kx.bSc("z", (int)30162, (long)(0x3D28E6C7AFA9E4B1L ^ l2))] = (int)kx.bSc("z", (int)22704, (long)(0x77E75D0EE388C9DBL ^ l2));
        nArray[kx.bSc("z", (int)29176, (long)(0x7C0AF6A7C782609FL ^ l2))] = (int)kx.bSc("z", (int)4010, (long)(0x3652DEC748279EC4L ^ l2));
        nArray[kx.bSc("z", (int)18527, (long)(0x691FC98A6F71D939L ^ l2))] = (int)kx.bSc("z", (int)18104, (long)(0x794F6AF724F257DCL ^ l2));
        nArray[kx.bSc("z", (int)29435, (long)(0x2F67B6BB1CE86399L ^ l2))] = (int)kx.bSc("z", (int)20384, (long)(0x1C2EC8ED06E45EC0L ^ l2));
        nArray[kx.bSc("z", (int)3581, (long)(0x5EC8154C2B811C90L ^ l2))] = (int)kx.bSc("z", (int)19285, (long)(0x1961DAAFCF945A39L ^ l2));
        nArray[kx.bSc("z", (int)20669, (long)(0x70740606AAECC1CCL ^ l2))] = (int)kx.bSc("z", (int)29088, (long)(0x47ECD5FB189060D5L ^ l2));
        nArray[kx.bSc("z", (int)13108, (long)(0x5D613B7E4D6FA25CL ^ l2))] = (int)kx.bSc("z", (int)12216, (long)(0x58A80C67F1F43ECCL ^ l2));
        nArray[kx.bSc("z", (int)13894, (long)(0x3C8263415733272FL ^ l2))] = (int)kx.bSc("z", (int)15410, (long)(0x5B0F642971D42D45L ^ l2));
        nArray[kx.bSc("z", (int)5402, (long)(0x37857F4CD335047BL ^ l2))] = (int)kx.bSc("z", (int)20969, (long)(0x302353C485A3408CL ^ l2));
        this.AwWpm = new cJ(gg2, mr.clS(nArray));
        this.bQO(gg2);
        this.WRPii.Vf(this.AwWpm::WF);
        this.vgDNV.Vf(this.AwWpm::WF);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                kx.wgOUI = gb.aYR(-8848240246949541778L, 697613170944507932L, MethodHandles.lookup().lookupClass()).a(139670070571909L);
                kx.FqygG = new HashMap<K, V>(13);
                var0 = kx.wgOUI ^ 121985736836861L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[25];
                var5_4 = 0;
                var6_5 = "i\u00bb\u00a7)\f\u00ef\u0082\u0088\u00cb9|\u00e9=;\u00e7\u00c02m\tM\u00f6\u00b8\u0098\u00f4R\u00a1z\u00c6\u007f\u0097\u00dd\u001f@^\u00a0\u00cc\u00b1,ZE\u001c\"\u001d;\u00d3\u00e7\u00a2\u00a9\u00d71<\u00af\u00a7\u00e5\u00be\t\u0080\u00d7w:\u00b3=\u0094`\u0093\u0004\u00ddz\u0005uop\u00e4\u00fd.\u00be\u00ec4-\u00ad|\\\u0002y\u001aU\u00c6\u00bf\u00a9\u00bb\u00ed&//,\u00bd\u00ad\u00b9\u00c1\u00af\u00bb\u00b1\u0012+[\u00df\u00d5\u008c\u0090\u0085\u00b7\u0087\u00f5\u0097'\u00ad\u00a7\ry\u00fd\r\u008bw\u0002:\u00aa\u00ac\u0093mE\r:\u00d2b\u00b0\u00b0\u00ac\u00862;\u0087\u0082\u00d5\u00a3b\u00ecz\f\u009f\u00d6k>\f@V\u00a8IT\u00e5\u009d\u00eaE\u0019a\u00dd\u00a5\u00c0\u0018\u001c\u00bd\u00a9\u00e1\u00ab\u00eaS\u00a4f\u009d\u00ef\u00a6x\u009c\u00fd\u00a2";
                var7_6 = "i\u00bb\u00a7)\f\u00ef\u0082\u0088\u00cb9|\u00e9=;\u00e7\u00c02m\tM\u00f6\u00b8\u0098\u00f4R\u00a1z\u00c6\u007f\u0097\u00dd\u001f@^\u00a0\u00cc\u00b1,ZE\u001c\"\u001d;\u00d3\u00e7\u00a2\u00a9\u00d71<\u00af\u00a7\u00e5\u00be\t\u0080\u00d7w:\u00b3=\u0094`\u0093\u0004\u00ddz\u0005uop\u00e4\u00fd.\u00be\u00ec4-\u00ad|\\\u0002y\u001aU\u00c6\u00bf\u00a9\u00bb\u00ed&//,\u00bd\u00ad\u00b9\u00c1\u00af\u00bb\u00b1\u0012+[\u00df\u00d5\u008c\u0090\u0085\u00b7\u0087\u00f5\u0097'\u00ad\u00a7\ry\u00fd\r\u008bw\u0002:\u00aa\u00ac\u0093mE\r:\u00d2b\u00b0\u00b0\u00ac\u00862;\u0087\u0082\u00d5\u00a3b\u00ecz\f\u009f\u00d6k>\f@V\u00a8IT\u00e5\u009d\u00eaE\u0019a\u00dd\u00a5\u00c0\u0018\u001c\u00bd\u00a9\u00e1\u00ab\u00eaS\u00a4f\u009d\u00ef\u00a6x\u009c\u00fd\u00a2".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u008b\u00d0m\u0010\u000b%\u00d3\u00de4\u0088\u00af\u00fe\u001d\u00fa\u001ap";
                    var7_6 = "\u008b\u00d0m\u0010\u000b%\u00d3\u00de4\u0088\u00af\u00fe\u001d\u00fa\u001ap".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        kx.aCLXk = var8_3;
        kx.DscPi = new Integer[25];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kx.class, "bSb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

