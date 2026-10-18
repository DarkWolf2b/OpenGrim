/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.entity.model.EntityModelLayers
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 *  net.minecraft.entity.Entity$RemovalReason
 *  net.minecraft.util.Identifier
 *  org.joml.Vector3f
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
import java.util.concurrent.CopyOnWriteArrayList;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.entity.model.EntityModelLayers;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import net.minecraft.entity.Entity;
import net.minecraft.util.Identifier;
import org.joml.Vector3f;
import sixtwo.cT;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mT;
import sixtwo.rD;

class cT$so {
    private final AbstractClientPlayerEntity VwpaT;
    private final PlayerEntityModel ugYAv;
    private final Identifier UvTDM;
    private final mT hKtLW;
    final cT RqOGl;
    private static final long BAIKm = gb.aYR(-6992043895842856326L, -3835896092020489527L, MethodHandles.lookup().lookupClass()).a(133161837207714L);
    private static final long[] bZlSN;
    private static final Long[] OQynS;
    private static final Map qYOrT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cT$so(cT cT2, AbstractClientPlayerEntity abstractClientPlayerEntity, Identifier identifier) {
        this.RqOGl = cT2;
        this.hKtLW = mT.cpz();
        this.VwpaT = abstractClientPlayerEntity;
        this.ugYAv = new PlayerEntityModel(rD.dlmvG.getLoadedEntityModels().getModelPart(EntityModelLayers.PLAYER), true);
        this.ugYAv.getHead().scale(new Vector3f(-0.3f, -0.3f, -0.3f));
        this.UvTDM = identifier;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        qYOrT = new HashMap(13);
        long l2 = BAIKm ^ 0x24FD9749B256L;
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
        String string = "\u0081\u00d2\u00d2??R\u0010\u009b\u0088\u001c-U\u0014T\u00e6t";
        int n3 = "\u0081\u00d2\u00d2??R\u0010\u009b\u0088\u001c-U\u0014T\u00e6t".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        bZlSN = lArray;
        OQynS = new Long[2];
    }

    private static CallSite dnF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cT$so" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public AbstractClientPlayerEntity dny() {
        return this.VwpaT;
    }

    public PlayerEntityModel dnz() {
        return this.ugYAv;
    }

    public Identifier dnA() {
        return this.UvTDM;
    }

    private static MatchException dnC(MatchException matchException) {
        return matchException;
    }

    private static long dnD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x31F0;
        if (OQynS[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = bZlSN[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])qYOrT.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    qYOrT.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cT$so", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            cT$so.OQynS[n3] = l5;
        }
        return OQynS[n3];
    }

    private static long dnE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = cT$so.dnD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    public mT dnB() {
        return this.hKtLW;
    }

    public float dnx() {
        long l2 = BAIKm ^ 0x3FEEA2D85EDAL;
        long l3 = (long)this.RqOGl.CeLKq.VC() * cT$so.dnF("b", (int)13391, (long)(0x6F4A376321917BDL ^ l2));
        long l4 = this.hKtLW.cpF();
        long l5 = Math.max(0L, l3 - l4);
        return Math.min(1.0f, (float)l5 / (float)l3);
    }

    public void dnw(CopyOnWriteArrayList<cT$so> copyOnWriteArrayList) {
        block5: {
            block4: {
                long l2 = BAIKm ^ 0x5F85C16CF253L;
                iS[] iSArray = dh.afl();
                try {
                    boolean bl2;
                    try {
                        bl2 = this.hKtLW.cpC((long)this.RqOGl.CeLKq.VC() * cT$so.dnF("b", (int)12519, (long)(0x5B9AADF360153F9DL ^ l2)));
                        if (iSArray != null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cT$so.dnC(matchException);
                    }
                    bl2 = copyOnWriteArrayList.remove(this);
                }
                catch (MatchException matchException) {
                    throw cT$so.dnC(matchException);
                }
            }
            rD.dlmvG.world.removeEntity(this.VwpaT.getId(), Entity.RemovalReason.DISCARDED);
            this.VwpaT.setRemoved(Entity.RemovalReason.DISCARDED);
            this.VwpaT.onRemoved();
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cT$so.class, "dnE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

