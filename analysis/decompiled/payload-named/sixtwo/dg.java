/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.projectile.thrown.EnderPearlEntity
 *  net.minecraft.entity.projectile.thrown.ThrownItemEntity
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
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.thrown.EnderPearlEntity;
import net.minecraft.entity.projectile.thrown.ThrownItemEntity;
import sixtwo.cJ;
import sixtwo.dg$sx;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hp;
import sixtwo.iS;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.md;
import sixtwo.me;
import sixtwo.mf;
import sixtwo.mh;
import sixtwo.mr;
import sixtwo.rD;

public class dg
extends gg
implements lA {
    private final cJ VOBNu;
    private final List<dg$sx> ChEiM;
    private static final long QfGak;
    private static final long[] pNdJj;
    private static final Integer[] NNFnv;
    private static final Map QMwqx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dg() {
        long l2 = QfGak ^ 0x266698A23B45L;
        super(gf.aZL((int)dg.aeo("z", (int)29149, (long)(0x2F6E49B39D38DA28L ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dg.aeo("z", (int)1356, (long)(0x6A0C49BE3B41AEA0L ^ l2))];
        nArray[0] = (int)dg.aeo("z", (int)21504, (long)(0x3ACA8C5B8A06FFF7L ^ l2));
        nArray[1] = (int)dg.aeo("z", (int)23021, (long)(0x4E85F52936917206L ^ l2));
        nArray[2] = (int)dg.aeo("z", (int)17377, (long)(0x6C7F36BCA729E808L ^ l2));
        nArray[3] = (int)dg.aeo("z", (int)22501, (long)(0x1D41616E5910FC13L ^ l2));
        nArray[4] = (int)dg.aeo("z", (int)11125, (long)(0x608C35B7C70B808FL ^ l2));
        nArray[5] = (int)dg.aeo("z", (int)27438, (long)(0x2D4DB1610E99C0C1L ^ l2));
        nArray[dg.aeo("z", (int)27732, (long)(0x4D06112AE7CAC7A7L ^ l2))] = (int)dg.aeo("z", (int)28113, (long)(0x4C76EDA762CE4628L ^ l2));
        nArray[dg.aeo("z", (int)31181, (long)(0x7A52CDBED939523FL ^ l2))] = (int)dg.aeo("z", (int)10691, (long)(0x49EEC10A64930238L ^ l2));
        nArray[dg.aeo("z", (int)5111, (long)(0x21AD5C50FFA1381FL ^ l2))] = (int)dg.aeo("z", (int)5581, (long)(0x65B96B1C46C83E3CL ^ l2));
        nArray[dg.aeo("z", (int)27347, (long)(0x7774CAA46280C13DL ^ l2))] = (int)dg.aeo("z", (int)14648, (long)(0x2FE270C000C092D2L ^ l2));
        nArray[dg.aeo("z", (int)4687, (long)(0x617C6B296E1A39BBL ^ l2))] = (int)dg.aeo("z", (int)22568, (long)(0x4F96B005A8C8F3D5L ^ l2));
        nArray[dg.aeo("z", (int)19702, (long)(0x52B8347D60846708L ^ l2))] = (int)dg.aeo("z", (int)19349, (long)(0x5E1DC1BEA3ADE06DL ^ l2));
        nArray[dg.aeo("z", (int)17175, (long)(0x40237D060FB3E8EBL ^ l2))] = (int)dg.aeo("z", (int)21808, (long)(0x7FBE74A943B0FED1L ^ l2));
        nArray[dg.aeo("z", (int)6381, (long)(0x592B4B19904DB300L ^ l2))] = (int)dg.aeo("z", (int)25637, (long)(0x15EA302E859ACFDAL ^ l2));
        this.VOBNu = new cJ(this, mr.clS(nArray)).WE(false);
        this.ChEiM = new ArrayList<dg$sx>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dg.QfGak = gb.aYR(-1772309155934898947L, -944120009877253470L, MethodHandles.lookup().lookupClass()).a(165083780033864L);
                dg.QMwqx = new HashMap<K, V>(13);
                var0 = dg.QfGak ^ 91724781611417L;
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
                var6_5 = "\b\u000f\u00daw\u00177\u009e\u00aa$bR\u0016\u00f4\u008ex\u00e3w\u00c2h\u00e6\u00a67\u00b4\u00caE\u0093\u0011\u009f\u00f6\u00bf\u00f1\b\u0013\u00a7\u00d0\u00f3\u00e3i\u0085\u001b\u00d4\u008f\u0086\u00f8\u00b8N\u00db\u00f9\u00a0\u0098N\u0081A\u00a7DK\u00a6\u00a3\u00fc\u00d9$\u00d4?\u0091]{\u00c4z\u00b1f^\u0096nV\u0011\u00b89\u0097h\u00cb\u0018\u00a1\u00ea\u00fbZfNMW\u00f4\u0011\u00c6:^I\u00a4\u009a\u00fa\u00a9\u0080\u00bct?2\u00f9\u00c4L\u008b\u0086$\u001e\u0082m\u00f3\u00e4s^\u0004\u00d4\u00d8\u00a6Q\u009f\u00de\u008d\u00029\u00d1\u0083\u0081\u00fd\u00e5-\u0098\u00daCd\"`>\u00fa\u0002\u00c2\u008bA\u00c9\u00d3P\u00b2\u008d\u00c2\u00f6\u0089\u0019\u000e\u0085<^\u0011/\u00dd\u00c7`\u00fc.\u008b3\u00ce\u00c5\u001e\u0002\u00e6@\u008a\u0010\u00b5Q\u0018!\u00ff\u00b8A\u008b%";
                var7_6 = "\b\u000f\u00daw\u00177\u009e\u00aa$bR\u0016\u00f4\u008ex\u00e3w\u00c2h\u00e6\u00a67\u00b4\u00caE\u0093\u0011\u009f\u00f6\u00bf\u00f1\b\u0013\u00a7\u00d0\u00f3\u00e3i\u0085\u001b\u00d4\u008f\u0086\u00f8\u00b8N\u00db\u00f9\u00a0\u0098N\u0081A\u00a7DK\u00a6\u00a3\u00fc\u00d9$\u00d4?\u0091]{\u00c4z\u00b1f^\u0096nV\u0011\u00b89\u0097h\u00cb\u0018\u00a1\u00ea\u00fbZfNMW\u00f4\u0011\u00c6:^I\u00a4\u009a\u00fa\u00a9\u0080\u00bct?2\u00f9\u00c4L\u008b\u0086$\u001e\u0082m\u00f3\u00e4s^\u0004\u00d4\u00d8\u00a6Q\u009f\u00de\u008d\u00029\u00d1\u0083\u0081\u00fd\u00e5-\u0098\u00daCd\"`>\u00fa\u0002\u00c2\u008bA\u00c9\u00d3P\u00b2\u008d\u00c2\u00f6\u0089\u0019\u000e\u0085<^\u0011/\u00dd\u00c7`\u00fc.\u008b3\u00ce\u00c5\u001e\u0002\u00e6@\u008a\u0010\u00b5Q\u0018!\u00ff\u00b8A\u008b%".length();
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
                    var6_5 = "\b/\u00d0\u0094\f\u00c6~\u000b\u0091i\u0098\u007f\u00e8C\fc";
                    var7_6 = "\b/\u00d0\u0094\f\u00c6~\u000b\u0091i\u0098\u007f\u00e8C\fc".length();
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
        dg.pNdJj = var8_3;
        dg.NNFnv = new Integer[25];
    }

    @hG
    public void aeg(gk gk2) {
        long l2 = QfGak ^ 0x2B1A3F950105L;
        iS[] iSArray = dh.afl();
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dg.ael(matchException);
        }
        lC lC2 = gk2.baT();
        for (dg$sx dg$sx : this.ChEiM) {
            dg$sx.doo(lC2, this.VOBNu.WF());
            if (iSArray == null) continue;
        }
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @hG
    public void aei(go.sX var1_1) {
        block39: {
            block40: {
                var2_2 = dg.QfGak ^ 135643104794914L;
                var4_3 = dh.afl();
                try {
                    v0 = this.bab();
                    if (var4_3 != null) break block39;
                    if (v0) break block40;
                }
                catch (MatchException v1) {
                    throw dg.ael(v1);
                }
                return;
            }
            v0 = this.ChEiM.removeIf((Predicate<dg$sx>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, dop(), (Lsixtwo/dg$sx;)Z)());
        }
        var5_4 = new HashSet<Integer>();
        var6_5 = rD.dlmvG.world.getEntities().iterator();
        while (var6_5.hasNext()) {
            block42: {
                block41: {
                    var7_6 /* !! */  = (Entity)var6_5.next();
                    try {
                        try {
                            v2 = var7_6 /* !! */ ;
                            if (var4_3 != null) break block41;
                            v3 = v2 instanceof EnderPearlEntity;
                            if (var4_3 == null) {
                            }
                            ** GOTO lbl42
                        }
                        catch (MatchException v4) {
                            throw dg.ael(v4);
                        }
                        if (!v3) break block42;
                    }
                    catch (MatchException v5) {
                        throw dg.ael(v5);
                    }
                    v2 = var7_6 /* !! */ ;
                }
                var8_7 = (EnderPearlEntity)v2;
                var5_4.add(var8_7.getId());
            }
            if (var4_3 == null) continue;
        }
        var6_5 = this.ChEiM.iterator();
        do {
            block43: {
                v3 = var6_5.hasNext();
lbl42:
                // 2 sources

                if (!v3) break;
                var7_6 /* !! */  = (dg$sx)var6_5.next();
                try {
                    try {
                        try {
                            if (var4_3 != null) break block43;
                            v6 = var5_4.contains(var7_6 /* !! */ .SDjuQ);
                            if (var4_3 == null) {
                            }
                            ** GOTO lbl69
                        }
                        catch (MatchException v7) {
                            throw dg.ael(v7);
                        }
                        if (v6) continue;
                    }
                    catch (MatchException v8) {
                        throw dg.ael(v8);
                    }
                    var7_6 /* !! */ .iAudN.dhd(0.0f);
                }
                catch (MatchException v9) {
                    throw dg.ael(v9);
                }
            }
            var7_6 /* !! */ .sDPfY = true;
        } while (var4_3 == null);
        var6_5 = rD.dlmvG.world.getEntities().iterator();
        do {
            block47: {
                block45: {
                    block44: {
                        v6 = var6_5.hasNext();
lbl69:
                        // 2 sources

                        if (!v6) break;
                        var7_6 /* !! */  = (Entity)var6_5.next();
                        try {
                            try {
                                v10 /* !! */  = var7_6 /* !! */ ;
                                if (var4_3 != null) break block44;
                                if (!(v10 /* !! */  instanceof EnderPearlEntity)) continue;
                            }
                            catch (MatchException v11) {
                                throw dg.ael(v11);
                            }
                            v10 /* !! */  = var7_6 /* !! */ ;
                        }
                        catch (MatchException v12) {
                            throw dg.ael(v12);
                        }
                    }
                    var8_7 = (EnderPearlEntity)v10 /* !! */ ;
                    var9_8 = var8_7.getId();
                    var10_9 = 0;
                    for (Object var12_11 : this.ChEiM) {
                        block46: {
                            try {
                                try {
                                    try {
                                        v13 = var12_11.SDjuQ;
                                        if (var4_3 != null) break block45;
                                        if (var4_3 != null) break block46;
                                    }
                                    catch (MatchException v14) {
                                        throw dg.ael(v14);
                                    }
                                    if (v13 == var9_8) {
                                    }
                                    ** GOTO lbl110
                                }
                                catch (MatchException v15) {
                                    throw dg.ael(v15);
                                }
                                v16 = true;
                            }
                            catch (MatchException v17) {
                                throw dg.ael(v17);
                            }
                        }
                        var10_9 = v16;
                        try {
                            if (var4_3 == null) break;
lbl110:
                            // 2 sources

                            if (var4_3 == null) continue;
                            break;
                        }
                        catch (MatchException v18) {
                            throw dg.ael(v18);
                        }
                    }
                    v13 = var10_9;
                }
                if (v13 != 0) continue;
                var11_10 = var8_7.getVelocity();
                var12_11 = me.cjZ(mh.ckg((ThrownItemEntity)var8_7).ckD(md.HIkeq).ckF(var8_7.hasNoGravity()).ckx(var11_10).cky((int)dg.aeo("z", (int)12849, (long)(8365883779221846950L ^ var2_2))).ckz(-128.0));
                try {
                    block48: {
                        try {
                            try {
                                try {
                                    v19 = var12_11;
                                    if (var4_3 != null) break block47;
                                    if (v19.termination() == mf.juSGK) break block48;
                                }
                                catch (MatchException v20) {
                                    throw dg.ael(v20);
                                }
                                v19 = var12_11;
                                if (var4_3 != null) break block47;
                            }
                            catch (MatchException v21) {
                                throw dg.ael(v21);
                            }
                            if (v19.termination() != mf.RlLKW) continue;
                        }
                        catch (MatchException v22) {
                            throw dg.ael(v22);
                        }
                    }
                    v19 = var12_11;
                }
                catch (MatchException v23) {
                    throw dg.ael(v23);
                }
            }
            var13_12 = Math.max(v19.simulatedSteps() - 1, 0);
            this.ChEiM.add(new dg$sx(var12_11.finalPosition(), var9_8, var13_12));
        } while (var4_3 == null);
    }

    private static MatchException ael(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void aeh(hp var1_1) {
        block16: {
            block15: {
                var2_2 = dg.QfGak ^ 122055599375115L;
                var4_3 = dh.afl();
                try {
                    if (!this.bab()) {
                        return;
                    }
                }
                catch (MatchException v0) {
                    throw dg.ael(v0);
                }
                var6_4 = var1_1.bcX();
                try {
                    try {
                        v1 = var6_4;
                        if (var4_3 != null) break block15;
                        if (!(v1 instanceof EnderPearlEntity)) break block16;
                    }
                    catch (MatchException v2) {
                        throw dg.ael(v2);
                    }
                    v1 = var6_4;
                }
                catch (MatchException v3) {
                    throw dg.ael(v3);
                }
            }
            var5_6 = (EnderPearlEntity)v1;
            var6_5 = var5_6.getId();
            for (dg$sx var8_8 : this.ChEiM) {
                block17: {
                    try {
                        try {
                            v4 = var8_8;
                            if (var4_3 != null) break block17;
                            if (v4.SDjuQ == var6_5) {
                            }
                            ** GOTO lbl45
                        }
                        catch (MatchException v5) {
                            throw dg.ael(v5);
                        }
                        var8_8.iAudN.dhd(0.0f);
                        v4 = var8_8;
                    }
                    catch (MatchException v6) {
                        throw dg.ael(v6);
                    }
                }
                try {
                    v4.sDPfY = true;
                    if (var4_3 == null) break;
lbl45:
                    // 2 sources

                    if (var4_3 == null) continue;
                    break;
                }
                catch (MatchException v7) {
                    throw dg.ael(v7);
                }
            }
        }
    }

    private static CallSite aeo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cJ aej() {
        return this.VOBNu;
    }

    public List<dg$sx> aek() {
        return this.ChEiM;
    }

    private static int aen(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dg.aem(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int aem(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1B4;
        if (NNFnv[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = pNdJj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])QMwqx.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    QMwqx.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dg", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dg.NNFnv[n3] = n4;
        }
        return NNFnv[n3];
    }

    @Override
    public void YO() {
        super.YO();
        this.ChEiM.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dg.class, "aen", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

