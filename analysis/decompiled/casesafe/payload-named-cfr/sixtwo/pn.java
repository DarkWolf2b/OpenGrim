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

public class pn
extends pq {
    private static final long Ajtzr = gb.aYR(1945348633629805470L, -8133451634876201658L, MethodHandles.lookup().lookupClass()).a(143666877033378L);
    private static final String[] gthwR;
    private static final String[] mejEi;
    private static final Map bLAZh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pn() {
        long l2 = Ajtzr ^ 0x431A2692DA00L;
        super((String)((Object)pn.cOq("w", (int)31554, (long)(0x21BEE47F9DC63EE2L ^ l2))), (String)((Object)pn.cOq("w", (int)26720, (long)(0x72C9F4C4D3A82DC3L ^ l2))), pM.DXMaR);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        bLAZh = new HashMap(13);
        long l2 = Ajtzr ^ 0x7598255DDA4BL;
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
        String string = "\u00e4\u0006m\u00fc)\u00c6R\u00b5[\u0095\u009a\u00af\u0010\u00a7\u00b9\u00d9\u009b\u008e\u00d4\u0081\u0082\u00eb\u008e\u00cc\u009d6\u001c\u00c7\u0000}+Ti\u00a8\u00e4\u001c\u00bf\u00b6U\u00d7\u0018\u00ca\u00ce\u00b7\u00c54`;\u0014\u00d0q\u001a\u00a0\u0082/\u0015! kB)\u00e4\u00b3\tt \u0086\u00fe\u00dd\u00b4\u00c3`\u00b6\u00b6N\u00bc\u00e1\u00b3\u00b4AB\u00b2\u0084\u00fc\u0089\u0098\u0013\u00a4/k+\u00e1~.\u00e1\u00b8\u00a3L";
        int n3 = "\u00e4\u0006m\u00fc)\u00c6R\u00b5[\u0095\u009a\u00af\u0010\u00a7\u00b9\u00d9\u009b\u008e\u00d4\u0081\u0082\u00eb\u008e\u00cc\u009d6\u001c\u00c7\u0000}+Ti\u00a8\u00e4\u001c\u00bf\u00b6U\u00d7\u0018\u00ca\u00ce\u00b7\u00c54`;\u0014\u00d0q\u001a\u00a0\u0082/\u0015! kB)\u00e4\u00b3\tt \u0086\u00fe\u00dd\u00b4\u00c3`\u00b6\u00b6N\u00bc\u00e1\u00b3\u00b4AB\u00b2\u0084\u00fc\u0089\u0098\u0013\u00a4/k+\u00e1~.\u00e1\u00b8\u00a3L".length();
        int n4 = 40;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = pn.cOn(byArray3).intern();
            if ((n5 += n4) >= n3) {
                gthwR = stringArray;
                mejEi = new String[3];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    @Override
    protected String cOl() {
        long l2 = Ajtzr ^ 0x50A44CA7EC9CL;
        return pn.cOq("w", (int)5327, (long)(0x45F24B419EFCE7F1L ^ l2));
    }

    @Override
    protected ItemStack cOk(LivingEntity livingEntity) {
        return livingEntity.getOffHandStack();
    }

    @Override
    protected ItemStack cOm() {
        return Items.TOTEM_OF_UNDYING.getDefaultStack();
    }

    private static String cOn(byte[] byArray) {
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

    private static String cOo(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x687;
        if (mejEi[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])bLAZh.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bLAZh.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pn", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = gthwR[n3].getBytes("ISO-8859-1");
            pn.mejEi[n3] = pn.cOn(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return mejEi[n3];
    }

    private static CallSite cOq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pn" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object cOp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = pn.cOo(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pn.class, "cOp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

