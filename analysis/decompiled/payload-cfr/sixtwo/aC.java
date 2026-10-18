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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.Y;
import sixtwo.aF;
import sixtwo.al;
import sixtwo.bd;
import sixtwo.bg;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.iS;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rj;

public class aC
extends aF {
    private final List<bg> yfSFR;
    private gh mvWDQ;
    private bg nEhCf;
    private final Y YZFGi;
    private static final long jNpun;
    private static final long[] QSCCk;
    private static final Integer[] jbUMH;
    private static final Map AHrLJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aC() {
        Object object;
        Object object2;
        long l;
        block4: {
            l = jNpun ^ 0x51B7C367FEB9L;
            iS[] iSArray = lc.bXK();
            super(new int[]{(int)aC.uq("r", (int)18453, (long)(0x549A515C77DF9ACEL ^ l)), (int)aC.uq("r", (int)17575, (long)(0x7127F1780EE71678L ^ l)), (int)aC.uq("r", (int)5631, (long)(0x26044D3C4DE24721L ^ l)), (int)aC.uq("r", (int)19949, (long)(0x6D02069390BA9F31L ^ l))});
            iS[] iSArray2 = iSArray;
            this.yfSFR = new ArrayList<bg>();
            this.mvWDQ = null;
            object2 = rD.dlJ().aZz().values().iterator();
            while (object2.hasNext()) {
                gg gg2 = object2.next();
                bg bg2 = new bg(gg2);
                try {
                    object = this.yfSFR;
                    if (iSArray2 != null) {
                        object.add(bg2);
                        if (iSArray2 != null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw aC.un(matchException);
                }
            }
            object = this.yfSFR.get(0);
        }
        this.nEhCf = object2 = object;
        this.YZFGi = new Y().kf(lE.joxgd.bYM(7.0f)).ko(mG.hoGuU.cob(0.5f)).kg(((bg)object2).CX().bae()).ki(5.0f).kj((int)aC.uq("r", (int)23903, (long)(0xE1AC9DCA9A48F82L ^ l))).kk(rj.UPXqT);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                aC.jNpun = gb.aYR(-8194529757589197398L, 694691784488164671L, MethodHandles.lookup().lookupClass()).a(208218874951726L);
                aC.AHrLJ = new HashMap<K, V>(13);
                var0 = aC.jNpun ^ 121802149965389L;
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
                var8_3 = new long[5];
                var5_4 = 0;
                var6_5 = "\u009ee\u0080\u0081V\u0082\u000e\u0086\u0000\u00a6\u0091\u0081\u00f5V\u00be\u00c5\u0005\u0089\u00e0\f\u008cb\u00dfE";
                var7_6 = "\u009ee\u0080\u0081V\u0082\u000e\u0086\u0000\u00a6\u0091\u0081\u00f5V\u00be\u00c5\u0005\u0089\u00e0\f\u008cb\u00dfE".length();
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
                    var6_5 = "\u009e\u00d2\u008eTU\u00d8\u008eN\u00e4\u00bf\u0005\u0017\u0092\f\u000b\u0090";
                    var7_6 = "\u009e\u00d2\u008eTU\u00d8\u008eN\u00e4\u00bf\u0005\u0017\u0092\f\u000b\u0090".length();
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
        aC.QSCCk = var8_3;
        aC.jbUMH = new Integer[5];
    }

    private static int up(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = aC.uo(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public bg ui() {
        return this.nEhCf;
    }

    @Override
    public void dY() {
        long l = jNpun ^ 0x69848956A398L;
        super.dY();
        iS[] iSArray = lc.bXK();
        this.LGwHI.clear();
        this.YYZes = this.mvWDQ.baG().clT();
        iS[] iSArray2 = iSArray;
        List<gg> list = rD.dlJ().aZw(gg2 -> {
            boolean bl;
            long l = jNpun ^ 0x6798E4A6422EL;
            try {
                bl = gg2.bak() == this.mvWDQ;
            }
            catch (MatchException matchException) {
                throw aC.un(matchException);
            }
            return bl;
        });
        for (bg bg2 : this.yfSFR) {
            block5: {
                try {
                    boolean bl;
                    try {
                        bl = list.contains(bg2.CX());
                        if (iSArray2 == null || !bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw aC.un(matchException);
                    }
                    bg2.CR().dhg();
                    bl = this.LGwHI.add(bg2);
                }
                catch (MatchException matchException) {
                    throw aC.un(matchException);
                }
            }
            if (iSArray2 != null) continue;
        }
    }

    public gh uh() {
        return this.mvWDQ;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void tP(lC var1_1, float var2_2, al var3_3) {
        block9: {
            block8: {
                var4_4 = aC.jNpun ^ 108538886129632L;
                var7_5 = lE.joxgd.bYM(7.0f);
                var6_6 = lc.bXK();
                var8_7 = bl.Ex().manager().aY(bd.class);
                try {
                    try {
                        if (var6_6 == null) break block8;
                        if (var8_7.isEmpty()) {
                        }
                        ** GOTO lbl20
                    }
                    catch (MatchException v0) {
                        throw aC.un(v0);
                    }
                    this.YZFGi.ku(this.nEhCf.CX().bae());
                }
                catch (MatchException v1) {
                    throw aC.un(v1);
                }
            }
            try {
                if (var6_6 != null) break block9;
lbl20:
                // 2 sources

                this.YZFGi.ku(var8_7.getLast().BS().CX().bae());
            }
            catch (MatchException v2) {
                throw aC.un(v2);
            }
        }
        this.YZFGi.sW(var2_2, var3_3.ts() + jf.bAH(var7_5.cat(), var3_3.dn()));
        this.YZFGi.su(var1_1);
    }

    @Override
    protected int tR() {
        return 2;
    }

    public aC ul(bg bg2) {
        this.nEhCf = bg2;
        return this;
    }

    public aC uk(gh gh2) {
        this.mvWDQ = gh2;
        return this;
    }

    private static MatchException un(MatchException matchException) {
        return matchException;
    }

    public List<bg> ug() {
        return this.yfSFR;
    }

    private static int uo(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x14E3;
        if (jbUMH[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = QSCCk[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])AHrLJ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    AHrLJ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aC", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            aC.jbUMH[n2] = n3;
        }
        return jbUMH[n2];
    }

    private static CallSite uq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aC" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public Y uj() {
        return this.YZFGi;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(aC.class, "up", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
