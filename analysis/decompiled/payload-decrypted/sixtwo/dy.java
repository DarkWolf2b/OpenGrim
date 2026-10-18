/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
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
import net.minecraft.entity.Entity;
import sixtwo.cF;
import sixtwo.cJ;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.iS;
import sixtwo.jg$tJ;
import sixtwo.mr;
import sixtwo.rD;

public class dy
extends gg {
    private final cF fCwUr;
    private final cJ wHVjK;
    private static final long ZRAwl;
    private static final long[] XlcMB;
    private static final Integer[] iDsnQ;
    private static final Map fUxYh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dy() {
        long l2 = ZRAwl ^ 0x6E279E324CC9L;
        super(gf.aZL((int)86, false, gh.nOCvV));
        int[] nArray = new int[8];
        nArray[0] = (int)69;
        nArray[1] = (int)110;
        nArray[2] = (int)116;
        nArray[3] = (int)105;
        nArray[4] = (int)116;
        nArray[5] = (int)105;
        nArray[6] = (int)101;
        nArray[7] = (int)115;
        this.fCwUr = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        int[] nArray2 = new int[9];
        nArray2[0] = (int)83;
        nArray2[1] = (int)101;
        nArray2[2] = (int)108;
        nArray2[3] = (int)102;
        nArray2[4] = (int)32;
        nArray2[5] = (int)71;
        nArray2[6] = (int)108;
        nArray2[7] = (int)111;
        nArray2[8] = (int)119;
        this.wHVjK = new cJ(this, mr.clS(nArray2)).WE(false);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dy.ZRAwl = gb.aYR(8184928328733181890L, -5121498493565386823L, MethodHandles.lookup().lookupClass()).a(214260309949996L);
                dy.fUxYh = new HashMap<K, V>(13);
                var0 = dy.ZRAwl ^ 34519164955064L;
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
                var6_5 = "\u00d2\u00b4 \u00ff\u00f2\u00cbOx\u00a4\u00aa(3\u0081\u00e0\u00c8F\u008f\u00c5\u00bco\u00fc)`\u0098\u0097>,\u009a\u00e69\u00d7\u00cb\u00f9&h\u00f4\u00dfd\u00bb'\u001d3!\u00ef\u00d6\u00a30\u00a2`2\u00f4\u008f\u0088\u008cT\u00b7\u00a9\u00fd\u00e9\u00ee}y\u001eM\u008a\u00bb|\u00ff\u00ca$\r\u00ff(-`\u00d2\t\u00a4\u00f7\u00ff2\u00a1\u00a8\u000b(\u00de\u0092\u00bbI\u0099\u008bo9b{A?t\u00af\u00e9\"4+x\u0087\u009eMD\u0016\u00cbJ\u001f\u000e\u00ed:\u00e9\u00fc\u00e9\u0086hDNxDk\u00a7r@\u00ab\u00b1\u00ca\u00e7\u0090\u00dc\u00ed\u0011v\u00e2\u00eb\u00bc)Z\u00b4\u0002\u00ffG\u00be\u0013\u001c\u0007\u0083\u00c6\u00bc\u00cel\u00c8Jo\u00af+\u0014*/w\u0013\u00daD\u00d6\u00858\u00ae\u00dd@|\u00044s\u00c5\u001a\u00ee4\u00bb\u00d8\u0010";
                var7_6 = "\u00d2\u00b4 \u00ff\u00f2\u00cbOx\u00a4\u00aa(3\u0081\u00e0\u00c8F\u008f\u00c5\u00bco\u00fc)`\u0098\u0097>,\u009a\u00e69\u00d7\u00cb\u00f9&h\u00f4\u00dfd\u00bb'\u001d3!\u00ef\u00d6\u00a30\u00a2`2\u00f4\u008f\u0088\u008cT\u00b7\u00a9\u00fd\u00e9\u00ee}y\u001eM\u008a\u00bb|\u00ff\u00ca$\r\u00ff(-`\u00d2\t\u00a4\u00f7\u00ff2\u00a1\u00a8\u000b(\u00de\u0092\u00bbI\u0099\u008bo9b{A?t\u00af\u00e9\"4+x\u0087\u009eMD\u0016\u00cbJ\u001f\u000e\u00ed:\u00e9\u00fc\u00e9\u0086hDNxDk\u00a7r@\u00ab\u00b1\u00ca\u00e7\u0090\u00dc\u00ed\u0011v\u00e2\u00eb\u00bc)Z\u00b4\u0002\u00ffG\u00be\u0013\u001c\u0007\u0083\u00c6\u00bc\u00cel\u00c8Jo\u00af+\u0014*/w\u0013\u00daD\u00d6\u00858\u00ae\u00dd@|\u00044s\u00c5\u001a\u00ee4\u00bb\u00d8\u0010".length();
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
                    var6_5 = "\u00ad`\u0085@S\u0006\u00e9~\u00e5\u009b\u00aa5\u00de,{\u000e";
                    var7_6 = "\u00ad`\u0085@S\u0006\u00e9~\u00e5\u009b\u00aa5\u00de,{\u000e".length();
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
        dy.XlcMB = var8_3;
        dy.iDsnQ = new Integer[25];
    }

    public boolean ajv(Entity entity) {
        boolean bl2;
        block9: {
            block8: {
                iS[] iSArray;
                block7: {
                    boolean bl3;
                    block6: {
                        long l2 = ZRAwl ^ 0xF9ACE4D062DL;
                        iSArray = dh.afl();
                        try {
                            bl3 = this.fCwUr.VX(entity);
                            if (iSArray != null) break block6;
                            if (bl3) break block7;
                        }
                        catch (MatchException matchException) {
                            throw dy.ajw(matchException);
                        }
                        bl3 = false;
                    }
                    return bl3;
                }
                try {
                    try {
                        if (entity == rD.dlmvG.player) break block8;
                        bl2 = this.wHVjK.WF();
                        if (iSArray != null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw dy.ajw(matchException);
                    }
                    if (bl2) break block8;
                }
                catch (MatchException matchException) {
                    throw dy.ajw(matchException);
                }
                bl2 = true;
                break block9;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite ajz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dy" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int ajx(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7C25;
        if (iDsnQ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = XlcMB[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])fUxYh.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fUxYh.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dy", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dy.iDsnQ[n3] = n4;
        }
        return iDsnQ[n3];
    }

    private static int ajy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dy.ajx(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException ajw(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dy.class, "ajy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

