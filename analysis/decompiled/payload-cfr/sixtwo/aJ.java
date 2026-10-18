/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aB;
import sixtwo.aC;
import sixtwo.aD;
import sixtwo.aE;
import sixtwo.aG;
import sixtwo.aH;
import sixtwo.aI;
import sixtwo.an;
import sixtwo.az;
import sixtwo.bg;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.lv;
import sixtwo.lx;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.ob;
import sixtwo.oe;
import sixtwo.rD;
import sixtwo.ry;

public class aJ
extends az {
    private final List<aH> DIrGH;
    private final Map<aH, aE> Sbssq;
    private aE AyCAC;
    private aE npWSx;
    private aH HNIDe;
    private final az ngAwC;
    private static String[] erCia;
    private static final long iklvp;
    private static final String[] ElbCl;
    private static final String[] QZoSV;
    private static final Map OMsXa;
    private static final long[] IfUGU;
    private static final Integer[] KkXjw;
    private static final Map ADQrN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    public aJ() {
        block20: {
            block21: {
                block19: {
                    var1_1 = aJ.iklvp ^ 61194989653667L;
                    super();
                    this.DIrGH = new ArrayList<aH>();
                    this.Sbssq = new LinkedHashMap<aH, aE>();
                    var4_2 = 18.0f;
                    var3_3 = aJ.wv();
                    var5_4 = 7.5f;
                    var6_5 = 60.0f;
                    for (Object var10_11 : aI.values()) {
                        block17: {
                            block18: {
                                var11_12 = new aH(this, (aI)var10_11);
                                var11_12.sY(var5_4, var6_5, 80.0f, var4_2);
                                this.DIrGH.add((aH)var11_12);
                                var6_5 += var4_2 + 5.0f;
                                try {
                                    v0 = var10_11;
                                    v1 = aI.fhJit;
                                    if (var3_3 != null) break block17;
                                    if (v0 != v1) break block18;
                                }
                                catch (MatchException v2) {
                                    throw aJ.ww(v2);
                                }
                                var6_5 += 15.0f;
                            }
                            v0 = var10_11;
                            v1 = aI.mMivt;
                        }
                        try {
                            if (v0 != v1) continue;
                            var11_12.vT((aG)LambdaMetafactory.metafactory(null, null, null, (Lsixtwo/aH;)V, wt(sixtwo.aH ), (Lsixtwo/aH;)V)());
                        }
                        catch (MatchException v3) {
                            throw aJ.ww(v3);
                        }
                    }
                    var7_6 /* !! */  = aE.vB(aC.class, (Supplier<aC>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, <init>(), ()Lsixtwo/aC;)());
                    var8_8 = aE.vB(aB.class, (Supplier<aB>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, <init>(), ()Lsixtwo/aB;)());
                    var9_10 = aE.vB(aD.class, (Supplier<aD>)LambdaMetafactory.metafactory(null, null, null, ()Ljava/lang/Object;, <init>(), ()Lsixtwo/aD;)());
                    this.Sbssq.put(this.DIrGH.get(0), (aE)var7_6 /* !! */ );
                    this.Sbssq.put(this.DIrGH.get(1), (aE)var7_6 /* !! */ );
                    this.Sbssq.put(this.DIrGH.get(2), (aE)var7_6 /* !! */ );
                    this.Sbssq.put(this.DIrGH.get(3), (aE)var7_6 /* !! */ );
                    this.Sbssq.put(this.DIrGH.get(4), (aE)var7_6 /* !! */ );
                    this.Sbssq.put(this.DIrGH.get(5), var8_8);
                    this.Sbssq.put(this.DIrGH.get((int)aJ.wD("m", (int)2626, (long)(947685505520427208L ^ var1_1))), var9_10);
                    this.Sbssq.put(this.DIrGH.get((int)aJ.wD("m", (int)2931, (long)(6400124867359105530L ^ var1_1))), null);
                    this.we();
                    var10_11 = ry.dkB().dkL();
                    var11_12 = aJ.wA("j", (int)10815, (long)(3363332735267940035L ^ var1_1));
                    try {
                        v4 = var10_11.endsWith((String)aJ.wA("j", (int)4015, (long)(1510636583022166869L ^ var1_1)));
                        if (var3_3 != null) break block19;
                        if (v4) {
                        }
                        ** GOTO lbl73
                    }
                    catch (MatchException v5) {
                        throw aJ.ww(v5);
                    }
                    var12_13 = new lx((String)var10_11 + (String)var11_12);
                    try {
                        try {
                            var12_13.ccf(ld.all(4.0f));
                            this.ngAwC = var12_13;
                            if (var3_3 == null) break block20;
lbl73:
                            // 2 sources

                            this.ngAwC = new an();
                            v6 = var10_11;
                            v7 = aJ.wA("j", (int)16613, (long)(5539823902444112922L ^ var1_1));
                            if (var3_3 != null) break block21;
                        }
                        catch (MatchException v8) {
                            throw aJ.ww(v8);
                        }
                        v4 = v6.contains((CharSequence)v7);
                    }
                    catch (MatchException v9) {
                        throw aJ.ww(v9);
                    }
                }
                if (!v4) ** GOTO lbl93
                var12_13 = (an)this.ngAwC;
                try {
                    var12_13.ph(ob.cBv((String)aJ.wA("j", (int)20788, (long)(1699405721817898444L ^ var1_1))));
                    var12_13.pi(ld.all(4.0f));
                    if (var3_3 == null) break block20;
lbl93:
                    // 2 sources

                    v6 = var10_11;
                    v7 = var11_12;
                }
                catch (MatchException v10) {
                    throw aJ.ww(v10);
                }
            }
            oe.cCd((String)v6 + (String)v7).thenAccept((Consumer)(Consumer<lv>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, ws(sixtwo.lv ), (Lsixtwo/lv;)V)((aJ)this));
        }
        try {
            this.ngAwC.sX(20.0f, 20.0f);
            if (iS.bwL() == null) {
                aJ.wu(new String[5]);
            }
        }
        catch (MatchException v11) {
            throw aJ.ww(v11);
        }
        this.Sbssq.remove(this.DIrGH.remove(6));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        aJ.iklvp = gb.aYR(-8049947572768292019L, 7048069767684806331L, MethodHandles.lookup().lookupClass()).a(245925426125427L);
                        aJ.OMsXa = new HashMap<K, V>(13);
                        var11 = aJ.iklvp ^ 139714416130577L;
                        aJ.wu(null);
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[8];
                        var18_4 = 0;
                        var17_5 = "8\u00aby\u00ed\u0014W\u001em\u00c1\b\u0098\u00c2\u008a\u00c9\u00af\u0089\u0092\u00a7\u00ee\u00d2x\u00a9\u007fi\u00cao\f\u00d5\u00f4\u00c8\u00b9\u00ab\u0010\u00ba\u008ef\u00b1KH\u0002\u0090\u00e1\u00edv\u00cf\\\u00a8\u00d3+ \u00f1N9K\u00e1\u00db\u00c1&\u00b2Y\u00fb\u00a7\u0088)h}Vp\u00dd\b\u00c2\u00a4A\u008bo\u00d8\u00f0B@cy\u00a4 \u000f&3$\u00b5wK\u00be\u00ea\u00e5f\u00f7\u0016\u0088\u00fb&\f\f\u007f\u00c3\u00b8\u00125\u00aeE\u008e\u00fcqXo\u00ddC\u0010\u00a4\u00c1\u0001d7\u00bb@\u00cc\u00f0jMt\u0086?\u00c2O\u0010^\\CP\u00a7\u0003q\u00cc+\u00a7\u0004f\u00c2a\u00f3\u00f9";
                        var19_6 = "8\u00aby\u00ed\u0014W\u001em\u00c1\b\u0098\u00c2\u008a\u00c9\u00af\u0089\u0092\u00a7\u00ee\u00d2x\u00a9\u007fi\u00cao\f\u00d5\u00f4\u00c8\u00b9\u00ab\u0010\u00ba\u008ef\u00b1KH\u0002\u0090\u00e1\u00edv\u00cf\\\u00a8\u00d3+ \u00f1N9K\u00e1\u00db\u00c1&\u00b2Y\u00fb\u00a7\u0088)h}Vp\u00dd\b\u00c2\u00a4A\u008bo\u00d8\u00f0B@cy\u00a4 \u000f&3$\u00b5wK\u00be\u00ea\u00e5f\u00f7\u0016\u0088\u00fb&\f\f\u007f\u00c3\u00b8\u00125\u00aeE\u008e\u00fcqXo\u00ddC\u0010\u00a4\u00c1\u0001d7\u00bb@\u00cc\u00f0jMt\u0086?\u00c2O\u0010^\\CP\u00a7\u0003q\u00cc+\u00a7\u0004f\u00c2a\u00f3\u00f9".length();
                        var16_7 = 32;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = aJ.wx(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = ",\u0096\u001c\u009e\u00c6H\u0004G\\\u000e\u0092\u00d2g\u00d4\u008e\u0095\u009b\u0004\u000f\u00ea\u00cd+\u0007\u001e\u00b2\u00b1\u007f\u00c6I\u00f9\u00dbw\u0018\u00aaN=`Q\u00e5\u00a8.\u00e3\u00de/\u0005\u00d4~\u00be\u008e\u00f5\u00df\u001f\u00a9\u008a`mX";
                            var19_6 = ",\u0096\u001c\u009e\u00c6H\u0004G\\\u000e\u0092\u00d2g\u00d4\u008e\u0095\u009b\u0004\u000f\u00ea\u00cd+\u0007\u001e\u00b2\u00b1\u007f\u00c6I\u00f9\u00dbw\u0018\u00aaN=`Q\u00e5\u00a8.\u00e3\u00de/\u0005\u00d4~\u00be\u008e\u00f5\u00df\u001f\u00a9\u008a`mX".length();
                            var16_7 = 32;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = aJ.wx(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                aJ.ElbCl = var20_3;
                aJ.QZoSV = new String[8];
                aJ.ADQrN = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[19];
                var3_13 = 0;
                var4_14 = "\u0000\u00cf\u00a6\u009au\u00deRM\u0092\u009c)\u00d86\u00de\u00eb\u00a0'A\u00c2\u00bf\u00debA\u00b7\u0007\u00c2\u0097v\u00b1\u00e4\u00e5y\u00e3)n\u00fb\u00c8 \u00ae\u0002h\u00b1\u00ad\u001f&\u00f5\u00c3\u00e2\u00ed\u00ceR\u00cdQ<_\u001bZ\u00e8B3n\u00f1\u001a\u0082\u0091B\u001e\u008clS\u00b3\n\u00c1\u00dekBq\u00b3\u009cq\u00a2\u001a\u00fc\u009b8\u00a0C\u0010\u00b1\u00e7\u00d6\u00ad\u00c0\u00ff\u008d\u0013'\u00c1\u0090\u00057Wx\u00ae/3o\u008e\u000eK\u00b4X\u00b0\u0004\u009f\u0087.\u0088Y\u0013\u00e8\u008c{$M\u00d2\u00b8\u00d1R\u0001[N7;\u0001\u00da";
                var5_15 = "\u0000\u00cf\u00a6\u009au\u00deRM\u0092\u009c)\u00d86\u00de\u00eb\u00a0'A\u00c2\u00bf\u00debA\u00b7\u0007\u00c2\u0097v\u00b1\u00e4\u00e5y\u00e3)n\u00fb\u00c8 \u00ae\u0002h\u00b1\u00ad\u001f&\u00f5\u00c3\u00e2\u00ed\u00ceR\u00cdQ<_\u001bZ\u00e8B3n\u00f1\u001a\u0082\u0091B\u001e\u008clS\u00b3\n\u00c1\u00dekBq\u00b3\u009cq\u00a2\u001a\u00fc\u009b8\u00a0C\u0010\u00b1\u00e7\u00d6\u00ad\u00c0\u00ff\u008d\u0013'\u00c1\u0090\u00057Wx\u00ae/3o\u008e\u000eK\u00b4X\u00b0\u0004\u009f\u0087.\u0088Y\u0013\u00e8\u008c{$M\u00d2\u00b8\u00d1R\u0001[N7;\u0001\u00da".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "D\u009eyZn\u00d0&(\u00e4@\u0012\u00a7xK\u00ee\u00fb";
                    var5_15 = "D\u009eyZn\u00d0&(\u00e4@\u0012\u00a7xK\u00ee\u00fb".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl105:
                // 1 sources

                ** continue;
            }
        }
        aJ.IfUGU = var6_12;
        aJ.KkXjw = new Integer[19];
    }

    private static /* synthetic */ void wt(aH aH2) {
        bl.Ev();
        bl.Ex().Es();
    }

    public void wi(aE aE2) {
        block11: {
            long l = iklvp ^ 0x26F3875EDD35L;
            aH aH2 = null;
            Iterator<Map.Entry<aH, aE>> iterator = this.Sbssq.entrySet().iterator();
            String[] stringArray = aJ.wv();
            while (iterator.hasNext()) {
                az az2;
                block9: {
                    Map.Entry<aH, aE> entry = iterator.next();
                    try {
                        try {
                            az2 = entry.getValue();
                            if (stringArray != null) break block9;
                            if (az2 != aE2) continue;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                        az2 = entry.getKey();
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                }
                aH2 = (aH)az2;
                break;
            }
            try {
                block10: {
                    try {
                        if (aH2 == null) break block10;
                        this.wf(aH2);
                        if (stringArray == null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                }
                this.wh(aE2);
            }
            catch (MatchException matchException) {
                throw aJ.ww(matchException);
            }
        }
    }

    public az wr() {
        return this.ngAwC;
    }

    private /* synthetic */ void ws(lv lv2) {
        an an2 = (an)this.ngAwC;
        an2.ph(lv2);
        an2.pi(ld.all(4.0f));
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        boolean bl2;
        block5: {
            long l = iklvp ^ 0x45EF3F5BAC8FL;
            Iterator<aH> iterator = this.DIrGH.iterator();
            String[] stringArray = aJ.wv();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl3;
                    block6: {
                        aH aH2 = iterator.next();
                        try {
                            try {
                                bl2 = aH2.dk(d, d2, mA2);
                                if (stringArray != null) break block5;
                                if (stringArray != null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw aJ.ww(matchException);
                            }
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                        bl3 = true;
                    }
                    return bl3;
                }
                if (stringArray == null) continue;
            }
            bl2 = super.dk(d, d2, mA2);
        }
        return bl2;
    }

    @Override
    protected void bV(lC lC2) {
        long l = iklvp ^ 0x187AF7F2784BL;
        float f2 = bl.Ex().sj().dhj();
        mG mG2 = this.CtPwV.bjb().coa(255.0f * f2);
        lc lc2 = new lc(this.MCnYt + 5.0f, this.pNyTQ + 7.5f, 30.0f, 30.0f);
        lC2.cdU(rD.dmm(), lc2, mG.hoGuU.cob(f2));
        lq lq2 = lE.WTzbi.bYM(9.0f);
        lq lq3 = lE.WTzbi.bYM(6.0f);
        float f3 = lc2.bXz() + 5.0f;
        float f4 = lc2.bXG() + 7.5f;
        int[] nArray = new int[aJ.wD("m", (int)5093, (long)(0x5F4C233208514F8DL ^ l))];
        nArray[0] = (int)aJ.wD("m", (int)3053, (long)(0x60C452B769A3D78DL ^ l));
        nArray[1] = (int)aJ.wD("m", (int)29100, (long)(0x46CDEC666BB7ADC2L ^ l));
        nArray[2] = (int)aJ.wD("m", (int)7440, (long)(0x58B56E98FA51C160L ^ l));
        nArray[3] = (int)aJ.wD("m", (int)7759, (long)(0x1A91C5A6CFBCC23DL ^ l));
        nArray[4] = (int)aJ.wD("m", (int)27812, (long)(0x55713330F31D30C3L ^ l));
        nArray[5] = (int)aJ.wD("m", (int)3364, (long)(0x3A0200C61E94D148L ^ l));
        nArray[aJ.wD("m", (int)17691, (long)(0x3B46399A9A381972L ^ l))] = (int)aJ.wD("m", (int)1528, (long)(0x3F565286CA9B5997L ^ l));
        nArray[aJ.wD("m", (int)2622, (long)(0x1910F7D8D69ED653L ^ l))] = (int)aJ.wD("m", (int)25934, (long)(0x45AF229955E3B92AL ^ l));
        nArray[aJ.wD("m", (int)18741, (long)(0x7D80A44561CE155FL ^ l))] = (int)aJ.wD("m", (int)16046, (long)(0x1F9294A45895E2DDL ^ l));
        nArray[aJ.wD("m", (int)23643, (long)(0x77E4BDC991E70030L ^ l))] = (int)aJ.wD("m", (int)20025, (long)(0x58EE9996EBB9125FL ^ l));
        nArray[aJ.wD("m", (int)30270, (long)(0x6F04B9CD0D7FAA5DL ^ l))] = (int)aJ.wD("m", (int)19531, (long)(0x35A1F18E632D102EL ^ l));
        lC2.ceA(lq2, nArray, f3, f4, mG2);
        lC2.cez(lq3, (String)((Object)aJ.wA("j", (int)20182, (long)(0x58C85F29A32874C7L ^ l))), f3, f4 + lq2.cat() + 4.5f, mG2.cob(0.5f));
        lc lc3 = bl.Ex().Ey();
        String[] stringArray = aJ.wv();
        float f5 = lc3.bXA() - this.ngAwC.dn() - 7.5f;
        this.ngAwC.sW(this.MCnYt + 7.5f, f5);
        this.ngAwC.su(lC2);
        lq lq4 = lE.WTzbi.bYM(7.0f);
        float f6 = 4.5f;
        float f7 = lq4.cat() * 2.0f + f6;
        float f8 = f5 + (this.ngAwC.dn() - f7) / 2.0f;
        float f9 = this.ngAwC.tc() + 5.0f;
        ry.dkB();
        lC2.cez(lq4, "matthew", f9, f8, mG2);
        ry.dkB();
        lC2.cez(lq4, (String)((Object)aJ.wA("j", (int)26278, (long)(0x6CE9F5B6B07F5CB5L ^ l))) + 1337, f9, f8 + lq4.cat() + f6, mG2.cob(0.5f));
        String[] stringArray2 = stringArray;
        lq lq5 = lE.WTzbi.bYM(5.0f);
        lC2.cez(lq5, (String)((Object)aJ.wA("j", (int)27395, (long)(0x597161A25085D116L ^ l))), this.MCnYt + 12.5f, this.pNyTQ + 52.5f, mG2.cob(0.5f));
        lC2.cez(lq5, (String)((Object)aJ.wA("j", (int)7455, (long)(0x4EC7910A5A2CA709L ^ l))), this.MCnYt + 12.5f, this.pNyTQ + 52.5f + 130.0f, mG2.cob(0.5f));
        for (aH aH2 : this.DIrGH) {
            float f10 = aH2.tr();
            float f11 = aH2.ts();
            aH2.sW(this.MCnYt + f10, this.pNyTQ + f11);
            aH2.su(lC2);
            aH2.sW(f10, f11);
            if (stringArray2 == null) continue;
            iS.bwK("c9lwn");
            break;
        }
    }

    public aE wo() {
        return this.AyCAC;
    }

    private static String wx(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    private static String wy(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x82B;
        if (QZoSV[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])OMsXa.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    OMsXa.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aJ", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ElbCl[n2].getBytes("ISO-8859-1");
            aJ.QZoSV[n2] = aJ.wx(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return QZoSV[n2];
    }

    private static Object wz(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = aJ.wy(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static MatchException ww(MatchException matchException) {
        return matchException;
    }

    private static int wC(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = aJ.wB(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite wA(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aJ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite wD(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aJ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int wB(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6E5E;
        if (KkXjw[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = IfUGU[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ADQrN.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ADQrN.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aJ", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            aJ.KkXjw[n2] = n3;
        }
        return KkXjw[n2];
    }

    public void we() {
        this.HNIDe = this.DIrGH.get(0);
        this.HNIDe.vP().dhe(1.0f);
        this.npWSx = this.Sbssq.get(this.HNIDe);
        this.wl(this.npWSx);
    }

    public List<aH> wm() {
        return this.DIrGH;
    }

    public Map<aH, aE> wn() {
        return this.Sbssq;
    }

    public static String[] wv() {
        return erCia;
    }

    public void wk() {
        block9: {
            aE aE2;
            block10: {
                String[] stringArray;
                block8: {
                    long l = iklvp ^ 0x5BC240C9FADEL;
                    stringArray = aJ.wv();
                    try {
                        try {
                            aE2 = this.AyCAC;
                            if (stringArray != null) break block8;
                            if (aE2 == null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                        aE2 = this.AyCAC;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                }
                try {
                    try {
                        if (stringArray != null) break block10;
                        if (aE2 == this.npWSx) break block9;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                    aE2 = this.npWSx;
                }
                catch (MatchException matchException) {
                    throw aJ.ww(matchException);
                }
            }
            aE aE3 = aE2;
            this.wh(this.AyCAC);
            this.AyCAC = aE3;
        }
    }

    public static void wu(String[] stringArray) {
        erCia = stringArray;
    }

    /*
     * Exception decompiling
     */
    public void wj(bg var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 4[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public aH wq() {
        return this.HNIDe;
    }

    public void wf(aH aH2) {
        block16: {
            aH aH3;
            block17: {
                aJ aJ2;
                String[] stringArray;
                block14: {
                    block15: {
                        block12: {
                            block13: {
                                long l = iklvp ^ 0x3FEBC15F86FCL;
                                stringArray = aJ.wv();
                                try {
                                    try {
                                        aJ2 = this;
                                        if (stringArray != null) break block12;
                                        if (aJ2.HNIDe != aH2) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw aJ.ww(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw aJ.ww(matchException);
                                }
                            }
                            aJ2 = this;
                        }
                        try {
                            try {
                                if (stringArray != null) break block14;
                                if (aJ2.npWSx == null) break block15;
                            }
                            catch (MatchException matchException) {
                                throw aJ.ww(matchException);
                            }
                            this.AyCAC = this.npWSx;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                    }
                    aJ2 = this;
                }
                try {
                    try {
                        aH3 = aJ2.HNIDe;
                        if (stringArray != null) break block16;
                        if (aH3 == null) break block17;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                    this.HNIDe.vW(false);
                }
                catch (MatchException matchException) {
                    throw aJ.ww(matchException);
                }
            }
            aH3 = aH2.vW(true);
        }
        this.HNIDe = aH2;
        this.npWSx = this.Sbssq.get(this.HNIDe);
        this.wl(this.npWSx);
    }

    public void wh(aE aE2) {
        aJ aJ2;
        block6: {
            block7: {
                long l = iklvp ^ 0x38440B13DB97L;
                String[] stringArray = aJ.wv();
                try {
                    try {
                        try {
                            aJ2 = this;
                            if (stringArray != null) break block6;
                            if (aJ2.npWSx == null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                        if (aE2 == this.npWSx) break block7;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                    this.AyCAC = this.npWSx;
                }
                catch (MatchException matchException) {
                    throw aJ.ww(matchException);
                }
            }
            this.npWSx = aE2;
            bl.Ex().EC().oQ().dhg();
            aJ2 = this;
        }
        aJ2.wl(this.npWSx);
    }

    public aE wp() {
        return this.npWSx;
    }

    /*
     * Exception decompiling
     */
    private void wl(aE var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [2[TRYBLOCK]], but top level block is 5[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public void wg(aH aH2) {
        block10: {
            aH aH3;
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l = iklvp ^ 0x127D5A9FD66AL;
                        stringArray = aJ.wv();
                        try {
                            try {
                                aH3 = this.HNIDe;
                                if (stringArray != null) break block8;
                                if (aH3 != aH2) break block9;
                            }
                            catch (MatchException matchException) {
                                throw aJ.ww(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw aJ.ww(matchException);
                        }
                    }
                    aH3 = this.HNIDe;
                }
                try {
                    try {
                        if (stringArray != null) break block10;
                        if (aH3 == null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw aJ.ww(matchException);
                    }
                    this.HNIDe.vW(false);
                }
                catch (MatchException matchException) {
                    throw aJ.ww(matchException);
                }
            }
            aH3 = aH2.vW(true);
        }
        this.HNIDe = aH2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(aJ.class, "wz", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(aJ.class, "wC", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
