/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.ItemInHandRendererAccessor
 *  net.minecraft.class_1268
 *  net.minecraft.class_1306
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_1839
 *  net.minecraft.class_4587
 *  net.minecraft.class_746
 *  org.joml.Quaternionf
 *  org.joml.Quaternionfc
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
import mixin.accessors.ItemInHandRendererAccessor;
import net.minecraft.class_1268;
import net.minecraft.class_1306;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_1839;
import net.minecraft.class_4587;
import net.minecraft.class_746;
import org.joml.Quaternionf;
import org.joml.Quaternionfc;
import sixtwo.c;
import sixtwo.cI;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gm;
import sixtwo.hG;
import sixtwo.hc;
import sixtwo.iS;
import sixtwo.im;
import sixtwo.in;
import sixtwo.mr;
import sixtwo.rD;

public class cQ
extends gg {
    private final cI YVeeN;
    private static final long dIDwx;
    private static final long[] ATwKC;
    private static final Integer[] uEcFa;
    private static final Map IPLYZ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cQ() {
        long l = dIDwx ^ 0x689A551143B8L;
        super(gf.aZL((int)cQ.YN("u", (int)16928, (long)(0x757548786D564EF9L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cQ.YN("u", (int)11156, (long)(0x63BD5DEA3E43274EL ^ l))];
        nArray[0] = (int)cQ.YN("u", (int)20607, (long)(0x76EE04B0775C5CA2L ^ l));
        nArray[1] = (int)cQ.YN("u", (int)12924, (long)(0x1433CDCA61CEBEABL ^ l));
        nArray[2] = (int)cQ.YN("u", (int)24586, (long)(0x178241765DD4ECC0L ^ l));
        nArray[3] = (int)cQ.YN("u", (int)20205, (long)(0x1041BE06F2A04232L ^ l));
        nArray[4] = (int)cQ.YN("u", (int)872, (long)(0x403B7CB240698FBBL ^ l));
        nArray[5] = (int)cQ.YN("u", (int)25926, (long)(0x1FA8B7ADF82CE990L ^ l));
        nArray[cQ.YN("u", (int)14732, (long)(0x550F60743011B554L ^ l))] = (int)cQ.YN("u", (int)28751, (long)(0x3E2CE97816ADFC9EL ^ l));
        nArray[cQ.YN("u", (int)918, (long)(0x7D98EFAAC580F46L ^ l))] = (int)cQ.YN("u", (int)10433, (long)(0x3CC52D7C98442414L ^ l));
        nArray[cQ.YN("u", (int)3932, (long)(0x47784FC1C7758393L ^ l))] = (int)cQ.YN("u", (int)11984, (long)(0x2453DDA71A5221EL ^ l));
        nArray[cQ.YN("u", (int)15172, (long)(0xFF44B7CA4B3B790L ^ l))] = (int)cQ.YN("u", (int)23119, (long)(0xF86D7FF8A73D694L ^ l));
        nArray[cQ.YN("u", (int)18632, (long)(0x583DE21D5B32C414L ^ l))] = (int)cQ.YN("u", (int)18130, (long)(0x3C8B53234634CA0CL ^ l));
        nArray[cQ.YN("u", (int)12233, (long)(0x6114991D7907A305L ^ l))] = (int)cQ.YN("u", (int)10433, (long)(0x3CC52D7C98442414L ^ l));
        nArray[cQ.YN("u", (int)27013, (long)(0x45DF8CD4ABA5654EL ^ l))] = (int)cQ.YN("u", (int)3354, (long)(0x1AC60F8130DC81C8L ^ l));
        nArray[cQ.YN("u", (int)5925, (long)(0x386F71562A799BE8L ^ l))] = (int)cQ.YN("u", (int)25414, (long)(0x50F9AD1220906F8FL ^ l));
        this.YVeeN = new cI(this, mr.clS(nArray)).Wx(c::z);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cQ.dIDwx = gb.aYR(-8313343678422209238L, 1666382798646072226L, MethodHandles.lookup().lookupClass()).a(48702971064512L);
                cQ.IPLYZ = new HashMap<K, V>(13);
                var0 = cQ.dIDwx ^ 132742873231512L;
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
                var8_3 = new long[23];
                var5_4 = 0;
                var6_5 = "\u00c8u\u00e7\u00e8\u0000\u0099x\u00f5\u00f9\u00ca\u00a2\u00adQ,\u00fd~\u00ca9\u001c_\u0019p\u008coc\u00e0\u00f5@\u00e4\u009d\u00a5&\u00afW+\u000bn\u00d6v\u0018\u0000F\u00be\u00e8[\u000b\u00da\u00cb\u008aZ\u0092\u008a#\u00d87\u00c3L\u00c9\u00e7\u008b\u0099\u00d5F\u0013\u00d3\t\u00dc\u00a8\u008f\u00ab\u00feML\u00c7\u00a8\u0012z\u00d0\u00da\u00d1\u00a0\u00f5\u00e1\u00c6a\u00ff\u00c7#c\u00b0\u001dmp\u00f1\u00af\u001f\u001a\u0082\u00feq\u00b1\u0003\u00d9g;\u00fe\u0099#\u00e0\u00f4t\b\u00d3\u00a8\u00f0vK\f\u0086\u001e\u00a2c\u00a3\u008bf`9\u00e7\u0018n\u00ba\u00e6'>\u00f7\u00ca\u00c4\u009aD\u00ebfB\\\n\u0093\u00ecZ\u009961\u0095\u00cf\u0087\u00d2\u0013\u0097\u0093[xM\u00c7fS8[\u0084C\u00ee";
                var7_6 = "\u00c8u\u00e7\u00e8\u0000\u0099x\u00f5\u00f9\u00ca\u00a2\u00adQ,\u00fd~\u00ca9\u001c_\u0019p\u008coc\u00e0\u00f5@\u00e4\u009d\u00a5&\u00afW+\u000bn\u00d6v\u0018\u0000F\u00be\u00e8[\u000b\u00da\u00cb\u008aZ\u0092\u008a#\u00d87\u00c3L\u00c9\u00e7\u008b\u0099\u00d5F\u0013\u00d3\t\u00dc\u00a8\u008f\u00ab\u00feML\u00c7\u00a8\u0012z\u00d0\u00da\u00d1\u00a0\u00f5\u00e1\u00c6a\u00ff\u00c7#c\u00b0\u001dmp\u00f1\u00af\u001f\u001a\u0082\u00feq\u00b1\u0003\u00d9g;\u00fe\u0099#\u00e0\u00f4t\b\u00d3\u00a8\u00f0vK\f\u0086\u001e\u00a2c\u00a3\u008bf`9\u00e7\u0018n\u00ba\u00e6'>\u00f7\u00ca\u00c4\u009aD\u00ebfB\\\n\u0093\u00ecZ\u009961\u0095\u00cf\u0087\u00d2\u0013\u0097\u0093[xM\u00c7fS8[\u0084C\u00ee".length();
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
                    var6_5 = "j\u0016\u00ce\u00afS\u00e8r\u00e3\u00e2\u001a\u00cb\u00f5\u00c9\u00ccl*";
                    var7_6 = "j\u0016\u00ce\u00afS\u00e8r\u00e3\u00e2\u001a\u00cb\u00f5\u00c9\u00ccl*".length();
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
        cQ.ATwKC = var8_3;
        cQ.uEcFa = new Integer[23];
    }

    public boolean YI() {
        boolean bl;
        block8: {
            block6: {
                in in2;
                iS[] iSArray;
                block7: {
                    long l = dIDwx ^ 0x756FC762A02BL;
                    in in3 = rD.dlU().bmd();
                    iSArray = dh.afl();
                    try {
                        try {
                            if (!this.RliRe) break block6;
                            in2 = in3;
                            if (iSArray != null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        if (in2 == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                    in2 = in3;
                }
                try {
                    bl = in2.bkZ();
                    if (iSArray != null) break block8;
                    if (!bl) break block6;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
                bl = true;
                break block8;
            }
            bl = false;
        }
        return bl;
    }

    @hG
    public void YF(hc hc2) {
        block22: {
            ItemInHandRendererAccessor itemInHandRendererAccessor;
            block23: {
                int n;
                ItemInHandRendererAccessor itemInHandRendererAccessor2;
                block21: {
                    iS[] iSArray;
                    block19: {
                        in in2;
                        block20: {
                            long l = dIDwx ^ 0x5F329976123EL;
                            iSArray = dh.afl();
                            try {
                                if (!this.bab()) {
                                    return;
                                }
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            in2 = rD.dlU().bmd();
                            itemInHandRendererAccessor2 = (ItemInHandRendererAccessor)rD.dlmvG.method_1561().method_43336();
                            try {
                                try {
                                    try {
                                        try {
                                            n = in2.bkX();
                                            if (iSArray != null) break block19;
                                            if (n == 0) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        float f = itemInHandRendererAccessor2.getEquippedProgressMainHand() - 1.0f;
                                        n = f == 0.0f ? 0 : (f < 0.0f ? -1 : 1);
                                        if (iSArray != null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    if (n > 0) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                                itemInHandRendererAccessor2.setEquippedProgressMainHand(1.0f);
                                itemInHandRendererAccessor2.setItemStackMainHand(rD.dlmvG.field_1724.method_6047());
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                        }
                        n = in2.bkY();
                    }
                    try {
                        try {
                            try {
                                if (iSArray != null) break block21;
                                if (n == 0) break block22;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            itemInHandRendererAccessor = itemInHandRendererAccessor2;
                            if (iSArray != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        float f = itemInHandRendererAccessor.getEquippedProgressOffHand() - 1.0f;
                        n = f == 0.0f ? 0 : (f < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                try {
                    if (n > 0) break block22;
                    itemInHandRendererAccessor2.setEquippedProgressOffHand(1.0f);
                    itemInHandRendererAccessor = itemInHandRendererAccessor2;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
            }
            itemInHandRendererAccessor.setItemStackOffHand(rD.dlmvG.field_1724.method_6079());
        }
    }

    public cI YJ() {
        return this.YVeeN;
    }

    private static int YM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cQ.YL(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public boolean YH(class_1799 class_17992) {
        boolean bl;
        block30: {
            block25: {
                class_1839 class_18392;
                class_1839 class_18393;
                block29: {
                    class_1792 class_17922;
                    class_1792 class_17923;
                    class_1839 class_18394;
                    iS[] iSArray;
                    block28: {
                        class_1792 class_17924;
                        block27: {
                            block26: {
                                block24: {
                                    long l = dIDwx ^ 0x6F07B1A8BA5EL;
                                    class_17924 = class_17992.method_7909();
                                    iSArray = dh.afl();
                                    class_18394 = class_17992.method_7976();
                                    try {
                                        try {
                                            class_17923 = class_17924;
                                            class_17922 = class_1802.field_8162;
                                            if (iSArray != null) break block24;
                                            if (class_17923 == class_17922) break block25;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        class_17923 = class_17924;
                                        class_17922 = class_1802.field_8204;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block26;
                                        if (class_17923 == class_17922) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    class_17923 = class_17924;
                                    class_17922 = class_1802.field_8399;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                            }
                            try {
                                try {
                                    if (iSArray != null) break block27;
                                    if (class_17923 == class_17922) break block25;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                                class_17923 = class_17924;
                                class_17922 = class_1802.field_8102;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                        }
                        try {
                            try {
                                if (iSArray != null) break block28;
                                if (class_17923 == class_17922) break block25;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            class_17923 = class_17924;
                            class_17922 = class_1802.field_8547;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                    }
                    try {
                        try {
                            try {
                                if (class_17923 == class_17922) break block25;
                                class_18393 = class_18394;
                                class_18392 = class_1839.field_8946;
                                if (iSArray != null) break block29;
                            }
                            catch (MatchException matchException) {
                                throw cQ.YK(matchException);
                            }
                            if (class_18393 == class_18392) break block25;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        class_18393 = class_18394;
                        class_18392 = class_1839.field_8950;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                try {
                    if (class_18393 == class_18392) break block25;
                    bl = true;
                    break block30;
                }
                catch (MatchException matchException) {
                    throw cQ.YK(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    @hG
    public void YG(gm gm2) {
        block20: {
            int n;
            gm gm3;
            class_4587 class_45872;
            block27: {
                block22: {
                    class_1306 class_13062;
                    iS[] iSArray;
                    block26: {
                        class_746 class_7462;
                        block24: {
                            block25: {
                                block23: {
                                    block21: {
                                        long l = dIDwx ^ 0x19F8AD372AFDL;
                                        iSArray = dh.afl();
                                        try {
                                            try {
                                                try {
                                                    if (!this.YH(gm2.bbd())) break block20;
                                                    class_7462 = rD.dlmvG.field_1724;
                                                    if (iSArray != null) break block21;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cQ.YK(matchException);
                                                }
                                                if (class_7462 == null) break block22;
                                            }
                                            catch (MatchException matchException) {
                                                throw cQ.YK(matchException);
                                            }
                                            class_7462 = rD.dlmvG.field_1724;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                    }
                                    try {
                                        try {
                                            if (iSArray != null) break block23;
                                            if (!class_7462.method_6115()) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw cQ.YK(matchException);
                                        }
                                        class_7462 = rD.dlmvG.field_1724;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block24;
                                        if (class_7462.method_6058() != class_1268.field_5808) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw cQ.YK(matchException);
                                    }
                                    class_13062 = rD.dlmvG.field_1724.method_6068();
                                    break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cQ.YK(matchException);
                                }
                            }
                            class_7462 = rD.dlmvG.field_1724;
                        }
                        class_13062 = class_7462.method_6068().method_5928();
                    }
                    class_45872 = class_13062;
                    try {
                        try {
                            gm3 = gm2;
                            if (iSArray != null) break block27;
                            if (gm3.bbb() != class_45872) break block22;
                        }
                        catch (MatchException matchException) {
                            throw cQ.YK(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw cQ.YK(matchException);
                    }
                }
                gm3 = gm2;
            }
            class_45872 = gm3.bbf();
            float f = gm2.bbc();
            im im2 = rD.dlU().blR(f);
            try {
                n = gm2.bbb() == class_1306.field_6183 ? 1 : -1;
            }
            catch (MatchException matchException) {
                throw cQ.YK(matchException);
            }
            int n2 = n;
            float f2 = im2.bky() * (float)n2;
            float f3 = im2.bkB() * (float)n2;
            float f4 = im2.bkF() * (float)n2;
            float f5 = im2.bkG() * (float)n2;
            class_45872.method_46416(f2, im2.bkz(), im2.bkA());
            class_45872.method_46416(f3, im2.bkC(), im2.bkD());
            class_45872.method_22907((Quaternionfc)new Quaternionf().rotationXYZ((float)Math.toRadians(im2.bkE()), (float)Math.toRadians(f4), (float)Math.toRadians(f5)));
            class_45872.method_46416(-f2, -im2.bkz(), -im2.bkA());
            gm2.bdX(true);
        }
    }

    private static int YL(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7718;
        if (uEcFa[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = ATwKC[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])IPLYZ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IPLYZ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cQ", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cQ.uEcFa[n2] = n3;
        }
        return uEcFa[n2];
    }

    private static CallSite YN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cQ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException YK(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cQ.class, "YM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
