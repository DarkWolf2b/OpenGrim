/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
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
import net.minecraft.class_1297;
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
        long l = ZRAwl ^ 0x6E279E324CC9L;
        super(gf.aZL((int)dy.ajz("i", (int)26208, (long)(0x158EDEA373F7DA16L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[dy.ajz("i", (int)4540, (long)(0x4FC0085828522DC3L ^ l))];
        nArray[0] = (int)dy.ajz("i", (int)14389, (long)(0x3A297FB42D9A8454L ^ l));
        nArray[1] = (int)dy.ajz("i", (int)789, (long)(0x42E1F09D0EC93F7AL ^ l));
        nArray[2] = (int)dy.ajz("i", (int)6020, (long)(0x362BDFFF64292BE6L ^ l));
        nArray[3] = (int)dy.ajz("i", (int)22722, (long)(0x76F528FA4483E4ABL ^ l));
        nArray[4] = (int)dy.ajz("i", (int)3568, (long)(0x67A085662D63B19BL ^ l));
        nArray[5] = (int)dy.ajz("i", (int)30218, (long)(0xF03E8D98515CA73L ^ l));
        nArray[dy.ajz("i", (int)12400, (long)(0x69E9D6EE2A470C1DL ^ l))] = (int)dy.ajz("i", (int)4906, (long)(0x3F6168C453382F4CL ^ l));
        nArray[dy.ajz("i", (int)32315, (long)(0x5FE1C0768ED44247L ^ l))] = (int)dy.ajz("i", (int)1736, (long)(0x502261CF24953AABL ^ l));
        this.fCwUr = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM);
        int[] nArray2 = new int[dy.ajz("i", (int)9621, (long)(0x7C17ED6D145319EFL ^ l))];
        nArray2[0] = (int)dy.ajz("i", (int)26704, (long)(0x66362991ABF95435L ^ l));
        nArray2[1] = (int)dy.ajz("i", (int)13687, (long)(0x6CF332A2452E891BL ^ l));
        nArray2[2] = (int)dy.ajz("i", (int)16781, (long)(0x1015260B82B07DE3L ^ l));
        nArray2[3] = (int)dy.ajz("i", (int)27985, (long)(0x28CD329CA562D12CL ^ l));
        nArray2[4] = (int)dy.ajz("i", (int)13921, (long)(0x48FB5093A2688A05L ^ l));
        nArray2[5] = (int)dy.ajz("i", (int)2678, (long)(0x60C46F5582D4B61EL ^ l));
        nArray2[dy.ajz("i", (int)24344, (long)(0x33931261CBE9E363L ^ l))] = (int)dy.ajz("i", (int)29146, (long)(0x3152A12A16664DB0L ^ l));
        nArray2[dy.ajz("i", (int)25093, (long)(0x161A277C26715E7BL ^ l))] = (int)dy.ajz("i", (int)7621, (long)(0x20E97714C97CA1BDL ^ l));
        nArray2[dy.ajz("i", (int)18103, (long)(0x52E982EFFDBBFAD0L ^ l))] = (int)dy.ajz("i", (int)23212, (long)(0x3E80259DB3FFE6CCL ^ l));
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

    public boolean ajv(class_1297 class_12972) {
        boolean bl;
        block9: {
            block8: {
                iS[] iSArray;
                block7: {
                    boolean bl2;
                    block6: {
                        long l = ZRAwl ^ 0xF9ACE4D062DL;
                        iSArray = dh.afl();
                        try {
                            bl2 = this.fCwUr.VX(class_12972);
                            if (iSArray != null) break block6;
                            if (bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw dy.ajw(matchException);
                        }
                        bl2 = false;
                    }
                    return bl2;
                }
                try {
                    try {
                        if (class_12972 == rD.dlmvG.field_1724) break block8;
                        bl = this.wHVjK.WF();
                        if (iSArray != null) break block9;
                    }
                    catch (MatchException matchException) {
                        throw dy.ajw(matchException);
                    }
                    if (bl) break block8;
                }
                catch (MatchException matchException) {
                    throw dy.ajw(matchException);
                }
                bl = true;
                break block9;
            }
            bl = false;
        }
        return bl;
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

    private static int ajx(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7C25;
        if (iDsnQ[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = XlcMB[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])fUxYh.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fUxYh.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dy.iDsnQ[n2] = n3;
        }
        return iDsnQ[n2];
    }

    private static int ajy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = dy.ajx(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
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
