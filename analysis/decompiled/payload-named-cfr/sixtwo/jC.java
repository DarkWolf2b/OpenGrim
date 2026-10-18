/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap
 *  net.minecraft.client.render.OutlineVertexConsumerProvider
 *  net.minecraft.client.render.RenderLayer
 *  net.minecraft.client.render.VertexConsumerProvider
 *  net.minecraft.client.render.VertexConsumerProvider$Immediate
 *  net.minecraft.client.render.command.OrderedRenderCommandQueueImpl
 *  net.minecraft.client.render.command.RenderDispatcher
 *  net.minecraft.client.util.BufferAllocator
 */
package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.SequencedMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.OutlineVertexConsumerProvider;
import net.minecraft.client.render.RenderLayer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.render.command.OrderedRenderCommandQueueImpl;
import net.minecraft.client.render.command.RenderDispatcher;
import net.minecraft.client.util.BufferAllocator;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jE;
import sixtwo.rD;

public final class jC {
    private final OrderedRenderCommandQueueImpl lADha;
    private final VertexConsumerProvider.Immediate mHZnS;
    private final OutlineVertexConsumerProvider pLFTe;
    private final VertexConsumerProvider.Immediate vhDNR;
    private final RenderDispatcher DidxG;
    private static int HavuN;
    private static final long eCiTv;
    private static final long[] rIGBZ;
    private static final Integer[] prVKV;
    private static final Map XyFfc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static int bHc() {
        int n2 = jC.bHb();
        try {
            if (n2 == 0) {
                return 74;
            }
        }
        catch (MatchException matchException) {
            throw jC.bHd(matchException);
        }
        return 0;
    }

    public jC() {
        long l2 = eCiTv ^ 0x498D4D7D563CL;
        int n2 = jC.bHc();
        this.lADha = new OrderedRenderCommandQueueImpl();
        int n3 = n2;
        try {
            this.mHZnS = jC.bGZ();
            this.pLFTe = new OutlineVertexConsumerProvider();
            this.vhDNR = VertexConsumerProvider.immediate((BufferAllocator)new BufferAllocator((int)jC.bHg("y", (int)32665, (long)(0x3E4AACA9D5558AL ^ l2))));
            this.DidxG = new RenderDispatcher(this.lADha, rD.dlmvG.getBlockRenderManager(), this.mHZnS, rD.dlmvG.getAtlasManager(), this.pLFTe, this.vhDNR, rD.dlmvG.textRenderer);
            if (n3 != 0) {
                iS.bwK("NVTpf");
            }
        }
        catch (MatchException matchException) {
            throw jC.bHd(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        eCiTv = gb.aYR(-4632865524948931423L, 4039314851654012638L, MethodHandles.lookup().lookupClass()).a(170019180082689L);
        XyFfc = new HashMap(13);
        jC.bHa(59);
        long l2 = eCiTv ^ 0x1E75CAB00972L;
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
        String string = "N\u00dfk\u0084[\u00c4E\u00ac\u0010S\u0089\u00dd\u0011\u00f0\u00bb\u00c0";
        int n3 = "N\u00dfk\u0084[\u00c4E\u00ac\u0010S\u0089\u00dd\u0011\u00f0\u00bb\u00c0".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        rIGBZ = lArray;
        prVKV = new Integer[2];
    }

    public OrderedRenderCommandQueueImpl bGT() {
        return this.lADha;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     */
    public void bGY() {
        int n2 = jC.bHb();
        try {
            try {
                this.DidxG.render();
            }
            finally {
                this.DidxG.endLayeredCustoms();
            }
        }
        finally {
            try {
                this.mHZnS.draw();
            }
            finally {
                try {
                    this.vhDNR.draw();
                }
                finally {
                    this.pLFTe.draw();
                }
            }
        }
        try {
            if (iS.bwL() == null) {
                jC.bHa(++n2);
            }
        }
        catch (MatchException matchException) {
            throw jC.bHd(matchException);
        }
    }

    public RenderDispatcher bGX() {
        return this.DidxG;
    }

    public VertexConsumerProvider.Immediate bGU() {
        return this.mHZnS;
    }

    private static CallSite bHg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static VertexConsumerProvider.Immediate bGZ() {
        long l2 = eCiTv ^ 0x41FAD44A6381L;
        Object2ObjectLinkedOpenHashMap object2ObjectLinkedOpenHashMap = new Object2ObjectLinkedOpenHashMap();
        jE.bHu((Object2ObjectLinkedOpenHashMap<RenderLayer, BufferAllocator>)object2ObjectLinkedOpenHashMap);
        return VertexConsumerProvider.immediate((SequencedMap)object2ObjectLinkedOpenHashMap, (BufferAllocator)new BufferAllocator((int)jC.bHg("y", (int)422, (long)(0x69037F8A5561E09L ^ l2))));
    }

    private static int bHe(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4CE3;
        if (prVKV[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = rIGBZ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])XyFfc.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XyFfc.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jC", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jC.prVKV[n3] = n4;
        }
        return prVKV[n3];
    }

    public VertexConsumerProvider.Immediate bGW() {
        return this.vhDNR;
    }

    public static int bHb() {
        return HavuN;
    }

    public static void bHa(int n2) {
        HavuN = n2;
    }

    private static MatchException bHd(MatchException matchException) {
        return matchException;
    }

    public OutlineVertexConsumerProvider bGV() {
        return this.pLFTe;
    }

    private static int bHf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jC.bHe(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jC.class, "bHf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

