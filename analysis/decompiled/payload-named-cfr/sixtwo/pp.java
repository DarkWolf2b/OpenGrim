/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
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
import net.minecraft.entity.LivingEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import sixtwo.gb;
import sixtwo.pM;
import sixtwo.pq;

public class pp
extends pq {
    private static final long TVxtH = gb.aYR(-5612678668592712320L, -347010295936002012L, MethodHandles.lookup().lookupClass()).a(208286298517581L);
    private static final String[] qdpgR;
    private static final String[] MIfPO;
    private static final Map lrwnI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pp() {
        long l2 = TVxtH ^ 0x6247E26A6827L;
        super((String)((Object)pp.cOH("z", (int)3145, (long)(0xE78E8C15441B533L ^ l2))), (String)((Object)pp.cOH("z", (int)13716, (long)(0x7DE9B6B7B0B50CEFL ^ l2))), pM.ODjfB);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        lrwnI = new HashMap(13);
        long l2 = TVxtH ^ 0x33D337BED8C7L;
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
        String string = "h7\u00b0\u007f\u00dcZ\u00a7\u000fc)\u008a\u00cds\u008bg\"\b\u00df6\u00a1\u008cz\u0006H\u0018\b\u00e02\u00a5\u00e8h\u00b9^\u00f9\u008b=\u00a6\u009eT\u00ae\u0098\u0086\u001d\u00c3\u00e3O\u0085\u00ac2 d\u00dd\u00e0\u00e0\u00f6\u000b\u00c0\u0087\u00dd\u00ff\u00fc\u001d\u00ea<\u00a4\u0088\u00ff\u0083\u00e3\f\u0095\u00f1+x\u00c8\u00ddx\u00b8F`\u0087\u001f";
        int n3 = "h7\u00b0\u007f\u00dcZ\u00a7\u000fc)\u008a\u00cds\u008bg\"\b\u00df6\u00a1\u008cz\u0006H\u0018\b\u00e02\u00a5\u00e8h\u00b9^\u00f9\u008b=\u00a6\u009eT\u00ae\u0098\u0086\u001d\u00c3\u00e3O\u0085\u00ac2 d\u00dd\u00e0\u00e0\u00f6\u000b\u00c0\u0087\u00dd\u00ff\u00fc\u001d\u00ea<\u00a4\u0088\u00ff\u0083\u00e3\f\u0095\u00f1+x\u00c8\u00ddx\u00b8F`\u0087\u001f".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = pp.cOE(byArray3).intern();
            if ((n5 += n4) >= n3) {
                qdpgR = stringArray;
                MIfPO = new String[3];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    @Override
    protected String cOl() {
        long l2 = TVxtH ^ 0x39CA2C877F85L;
        return pp.cOH("z", (int)8993, (long)(0x3D287B888CE78DFAL ^ l2));
    }

    @Override
    protected ItemStack cOk(LivingEntity livingEntity) {
        return livingEntity.getMainHandStack();
    }

    @Override
    protected ItemStack cOm() {
        return Items.NETHERITE_SWORD.getDefaultStack();
    }

    private static Object cOG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = pp.cOF(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite cOH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pp" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cOE(byte[] byArray) {
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

    private static String cOF(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5B60;
        if (MIfPO[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])lrwnI.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    lrwnI.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pp", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = qdpgR[n3].getBytes("ISO-8859-1");
            pp.MIfPO[n3] = pp.cOE(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return MIfPO[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pp.class, "cOG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

