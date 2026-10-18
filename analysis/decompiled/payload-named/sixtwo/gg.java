/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
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
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.MinecraftClient;
import sixtwo.gb;
import sixtwo.gc;
import sixtwo.gf;
import sixtwo.gh;
import sixtwo.hF;
import sixtwo.iS;
import sixtwo.mZ;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public abstract class gg
extends iS {
    protected int XWrfQ;
    protected int[] RcFWc;
    protected int[] lRvVv;
    protected gc GfFkt;
    protected boolean RliRe;
    protected boolean tZRhp;
    protected boolean dktTQ;
    protected boolean EDndy;
    protected gh utKrA;
    protected rk vGSNX;
    protected rk bKydN;
    protected ri GYAAa;
    private static String[] rWBfw;
    private static final long sxSiM;
    private static final String jdjGT;
    private static final long[] KVEqq;
    private static final Integer[] LTRAw;
    private static final Map BXJbv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gg(gf gf2) {
        long l2 = sxSiM ^ 0x7E0CC9D7680L;
        this.GfFkt = new gc();
        this.vGSNX = new rk((int)gg.baF("s", (int)12464, (long)(0x1226F0CDF9239F0FL ^ l2))).dhs(rj.UPXqT);
        this.bKydN = new rk((int)gg.baF("s", (int)30186, (long)(0x59EBD302A4925A54L ^ l2))).dhs(rj.MBpuQ);
        this.GYAAa = new ri((int)gg.baF("s", (int)30186, (long)(0x59EBD302A4925A54L ^ l2)));
        gf2 = Objects.requireNonNull(gf2, jdjGT);
        this.XWrfQ = gf2.aZM();
        this.RliRe = gf2.aZN();
        this.tZRhp = gf2.aZR();
        this.dktTQ = gf2.aZT();
        String[] stringArray = gg.baA();
        try {
            this.EDndy = gf2.aZV();
            this.utKrA = gf2.aZO();
            this.GfFkt.aZj(gf2.aZP());
            if (iS.bwL() == null) {
                gg.baz(new String[1]);
            }
        }
        catch (MatchException matchException) {
            throw gg.baB(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        sxSiM = gb.aYR(-4690808252542375339L, -5296510176118890153L, MethodHandles.lookup().lookupClass()).a(83809520359028L);
        long l2 = sxSiM ^ 0x68D8589376B3L;
        gg.baz(null);
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
        byte[] byArray3 = cipher.doFinal("\u00e3\u008a\u00bb\u000b\u00e6\u0083E\u0092".getBytes("ISO-8859-1"));
        jdjGT = gg.baC(byArray3).intern();
        BXJbv = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "/\u00bbV=\u0084\u00e5\u00b0\u00ff\u0019T\u0099\u00c6\u008b.\u00e6s";
        int n3 = "/\u00bbV=\u0084\u00e5\u00b0\u00ff\u0019T\u0099\u00c6\u008b.\u00e6s".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        KVEqq = lArray;
        LTRAw = new Integer[2];
    }

    public static void baz(String[] stringArray) {
        rWBfw = stringArray;
    }

    private static int baD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x60C6;
        if (LTRAw[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = KVEqq[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])BXJbv.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BXJbv.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/gg", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            gg.LTRAw[n3] = n4;
        }
        return LTRAw[n3];
    }

    public gg bau(boolean bl2) {
        this.EDndy = bl2;
        return this;
    }

    public gg bav(gh gh2) {
        this.utKrA = gh2;
        return this;
    }

    public gc baf() {
        return this.GfFkt;
    }

    private static CallSite baF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/gg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public void baa(boolean bl2) {
        block18: {
            gg gg2;
            block16: {
                boolean bl3;
                String[] stringArray;
                block14: {
                    block15: {
                        block12: {
                            block13: {
                                long l2 = sxSiM ^ 0x7ABD8E847BD9L;
                                stringArray = gg.baA();
                                try {
                                    bl3 = mZ.css();
                                    if (stringArray != null) break block12;
                                    if (bl3) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw gg.baB(matchException);
                                }
                                return;
                            }
                            bl3 = this.RliRe;
                        }
                        try {
                            try {
                                if (stringArray != null) break block14;
                                if (bl3 != bl2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw gg.baB(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                    }
                    try {
                        this.RliRe = bl2;
                        gg2 = this;
                        if (stringArray != null) break block16;
                        bl3 = gg2.RliRe;
                    }
                    catch (MatchException matchException) {
                        throw gg.baB(matchException);
                    }
                }
                try {
                    block17: {
                        try {
                            if (!bl3) break block17;
                            this.aaj();
                            if (stringArray == null) break block18;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                    }
                    gg2 = this;
                }
                catch (MatchException matchException) {
                    throw gg.baB(matchException);
                }
            }
            gg2.YO();
        }
    }

    public rk bal() {
        return this.vGSNX;
    }

    public rk bam() {
        return this.bKydN;
    }

    public ri ban() {
        return this.GYAAa;
    }

    public gg baq(int[] nArray) {
        this.lRvVv = nArray;
        return this;
    }

    public gg bas(boolean bl2) {
        this.tZRhp = bl2;
        return this;
    }

    private static MatchException baB(MatchException matchException) {
        return matchException;
    }

    public gg bap(int[] nArray) {
        this.RcFWc = nArray;
        return this;
    }

    public gg baw(rk rk2) {
        this.vGSNX = rk2;
        return this;
    }

    public boolean bai() {
        return this.dktTQ;
    }

    public static String[] baA() {
        return rWBfw;
    }

    public void aZZ() {
        block12: {
            gg gg2;
            block10: {
                boolean bl2;
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = sxSiM ^ 0x47173E679F8CL;
                        stringArray = gg.baA();
                        try {
                            gg gg3 = this;
                            bl2 = this.RliRe;
                            if (stringArray != null) break block8;
                            if (bl2) break block9;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                        bl2 = true;
                        break block8;
                    }
                    bl2 = false;
                }
                try {
                    block11: {
                        try {
                            try {
                                gg3.RliRe = bl2;
                                gg2 = this;
                                if (stringArray != null) break block10;
                                if (!gg2.RliRe) break block11;
                            }
                            catch (MatchException matchException) {
                                throw gg.baB(matchException);
                            }
                            rD.dmd().daT();
                            this.aaj();
                            if (stringArray == null) break block12;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                    }
                    rD.dmd().daU();
                    gg2 = this;
                }
                catch (MatchException matchException) {
                    throw gg.baB(matchException);
                }
            }
            gg2.YO();
        }
    }

    public int bac() {
        return this.XWrfQ;
    }

    public int[] bad() {
        return this.RcFWc;
    }

    public int[] bae() {
        return this.lRvVv;
    }

    public boolean bah() {
        return this.tZRhp;
    }

    public boolean baj() {
        return this.EDndy;
    }

    public void aaj() {
        hF.bdI(this);
    }

    public gg bao(int n2) {
        this.XWrfQ = n2;
        return this;
    }

    public gg bar(gc gc2) {
        this.GfFkt = gc2;
        return this;
    }

    public gh bak() {
        return this.utKrA;
    }

    protected boolean bab() {
        boolean bl2;
        block18: {
            block15: {
                MinecraftClient minecraftClient;
                block17: {
                    String[] stringArray;
                    block16: {
                        block14: {
                            long l2 = sxSiM ^ 0x11E5104FB7E2L;
                            stringArray = gg.baA();
                            try {
                                try {
                                    minecraftClient = rD.dlmvG;
                                    if (stringArray != null) break block14;
                                    if (minecraftClient.player == null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw gg.baB(matchException);
                                }
                                minecraftClient = rD.dlmvG;
                            }
                            catch (MatchException matchException) {
                                throw gg.baB(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray != null) break block16;
                                if (minecraftClient.world == null) break block15;
                            }
                            catch (MatchException matchException) {
                                throw gg.baB(matchException);
                            }
                            minecraftClient = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray != null) break block17;
                            if (minecraftClient.interactionManager == null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw gg.baB(matchException);
                        }
                        minecraftClient = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw gg.baB(matchException);
                    }
                }
                try {
                    if (minecraftClient.getNetworkHandler() == null) break block15;
                    bl2 = true;
                    break block18;
                }
                catch (MatchException matchException) {
                    throw gg.baB(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static int baE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = gg.baD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public gg bax(rk rk2) {
        this.bKydN = rk2;
        return this;
    }

    public gg bay(ri ri2) {
        this.GYAAa = ri2;
        return this;
    }

    private static String baC(byte[] byArray) {
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

    public gg bat(boolean bl2) {
        this.dktTQ = bl2;
        return this;
    }

    public boolean bag() {
        return this.RliRe;
    }

    public void YO() {
        hF.bdM(this);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(gg.class, "baE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

