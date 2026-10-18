/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.buffers.GpuBuffer
 */
package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lr;
import sixtwo.lt;

final class lr$uz {
    private final List<GpuBuffer> Sbaal = new ArrayList<GpuBuffer>();
    private final List<Long> sdjYE = new ArrayList<Long>();
    private int kMYMJ;
    private static final long dLfMu = gb.aYR(3010032469631690283L, 1947573880745350377L, MethodHandles.lookup().lookupClass()).a(244103868321636L);
    private static final long YxrRn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private lr$uz() {
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = dLfMu ^ 0x4C69B5DF3788L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = 4930290248145794784L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                YxrRn = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private void dvr() {
        this.kMYMJ = 0;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private GpuBuffer dvq(int var1_1, String var2_2) {
        block24: {
            block27: {
                block25: {
                    block23: {
                        var3_3 = lr$uz.dLfMu ^ 105718848989103L;
                        var5_4 = lt.cbc();
                        try {
                            v0 = this;
                            if (var5_4 != null) break block23;
                            if (v0.kMYMJ >= this.Sbaal.size()) {
                            }
                            ** GOTO lbl18
                        }
                        catch (MatchException v1) {
                            throw lr$uz.dvt(v1);
                        }
                        var6_5 = lr.caD(lr$uz.dvs(0L, var1_1), var2_2);
                        try {
                            this.Sbaal.add(var6_5);
                            this.sdjYE.add(var6_5.size());
                            if (var5_4 == null) break block24;
lbl18:
                            // 2 sources

                            v0 = this.Sbaal.get(this.kMYMJ);
                        }
                        catch (MatchException v2) {
                            throw lr$uz.dvt(v2);
                        }
                    }
                    var6_5 = (GpuBuffer)v0;
                    var7_6 = this.sdjYE.get(this.kMYMJ);
                    try {
                        block26: {
                            try {
                                try {
                                    try {
                                        try {
                                            v3 /* !! */  = var6_5;
                                            if (var5_4 != null) break block25;
                                            if (v3 /* !! */  == null) break block26;
                                        }
                                        catch (MatchException v4) {
                                            throw lr$uz.dvt(v4);
                                        }
                                        v3 /* !! */  = var6_5;
                                        if (var5_4 != null) break block25;
                                    }
                                    catch (MatchException v5) {
                                        throw lr$uz.dvt(v5);
                                    }
                                    if (v3 /* !! */ .isClosed()) break block26;
                                }
                                catch (MatchException v6) {
                                    throw lr$uz.dvt(v6);
                                }
                                if (var7_6 >= (long)var1_1) break block24;
                            }
                            catch (MatchException v7) {
                                throw lr$uz.dvt(v7);
                            }
                        }
                        v3 /* !! */  = var6_5;
                    }
                    catch (MatchException v8) {
                        throw lr$uz.dvt(v8);
                    }
                }
                try {
                    try {
                        try {
                            try {
                                if (var5_4 != null) break block24;
                                if (v3 /* !! */  == null) break block27;
                            }
                            catch (MatchException v9) {
                                throw lr$uz.dvt(v9);
                            }
                            v3 /* !! */  = var6_5;
                            if (var5_4 != null) break block24;
                        }
                        catch (MatchException v10) {
                            throw lr$uz.dvt(v10);
                        }
                        if (v3 /* !! */ .isClosed()) break block27;
                    }
                    catch (MatchException v11) {
                        throw lr$uz.dvt(v11);
                    }
                    var6_5.close();
                }
                catch (MatchException v12) {
                    throw lr$uz.dvt(v12);
                }
            }
            var6_5 = lr.caD(lr$uz.dvs(var7_6, var1_1), var2_2);
            this.Sbaal.set(this.kMYMJ, var6_5);
            v3 /* !! */  = this.sdjYE.set(this.kMYMJ, var6_5.size());
        }
        return this.Sbaal.get(this.kMYMJ++);
    }

    private static long dvs(long l2, int n2) {
        long l3;
        long l4;
        block6: {
            long l5;
            block4: {
                block5: {
                    long l6 = dLfMu ^ 0x568D6B39392L;
                    iS[] iSArray = lt.cbc();
                    try {
                        try {
                            l4 = n2;
                            long l7 = l2 - 0L;
                            l5 = l7 == 0L ? 0 : (l7 < 0L ? -1 : 1);
                            if (iSArray != null) break block4;
                            if (l5 <= 0) break block5;
                        }
                        catch (MatchException matchException) {
                            throw lr$uz.dvt(matchException);
                        }
                        l3 = l2 * YxrRn;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw lr$uz.dvt(matchException);
                    }
                }
                l5 = n2;
            }
            l3 = l5;
        }
        return Math.max(l4, l3);
    }

    private static MatchException dvt(MatchException matchException) {
        return matchException;
    }
}

