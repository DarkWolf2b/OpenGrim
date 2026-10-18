/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Optional;
import java.util.function.Predicate;
import java.util.function.Supplier;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aR;
import sixtwo.aj;
import sixtwo.ay;
import sixtwo.az;
import sixtwo.bd;
import sixtwo.f;
import sixtwo.f$rF;
import sixtwo.g$rG;
import sixtwo.gb;
import sixtwo.h;
import sixtwo.i;
import sixtwo.iS;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.mA;

public class g {
    private static g HbRlZ;
    private final az vSqxH = new g$rG(this).sS(true);
    private az HrPEm;
    private az XTXbB;
    private Runnable jywVM = () -> {};
    private static int[] itovx;
    private static final long uaqcq;
    private static final long GMDRM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        uaqcq = gb.aYR(-2937396542381063339L, -4243365711051065170L, MethodHandles.lookup().lookupClass()).a(83042438305568L);
        long l = uaqcq ^ 0x4FE7467EEADCL;
        g.bz(new int[5]);
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 3746660340161907318L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                GMDRM = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public <T extends az> Optional<T> ba(Class<T> clazz) {
        List<T> list;
        block4: {
            List<T> list2;
            block5: {
                long l = uaqcq ^ 0x6A1DFE027C63L;
                list2 = this.aY(clazz);
                int[] nArray = g.bA();
                try {
                    try {
                        list = list2;
                        if (nArray == null) break block4;
                        if (!list.isEmpty()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    return Optional.empty();
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            list = list2.getFirst();
        }
        return Optional.of((az)((Object)list));
    }

    public <T extends az> void bb(Class<T> clazz) {
        long l = uaqcq ^ 0x742CB8213EL;
        Iterator<T> iterator = this.aY(clazz).iterator();
        int[] nArray = g.bA();
        while (iterator.hasNext()) {
            block14: {
                az az2;
                az az3;
                block13: {
                    boolean bl;
                    az az4;
                    block11: {
                        block12: {
                            block9: {
                                block10: {
                                    az4 = (az)iterator.next();
                                    try {
                                        bl = az4 instanceof aj;
                                        if (nArray == null) break block9;
                                        if (!bl) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw g.bB(matchException);
                                    }
                                    az3 = (aj)az4;
                                    ((aj)az3).oj(false);
                                }
                                bl = az4 instanceof bd;
                            }
                            try {
                                if (nArray == null) break block11;
                                if (!bl) break block12;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            az3 = (bd)az4;
                            ((bd)az3).Cg(false);
                        }
                        try {
                            az2 = az4;
                            if (nArray == null) break block13;
                            bl = az2 instanceof aR;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                    }
                    if (!bl) break block14;
                    az2 = az4;
                }
                az3 = (aR)az2;
                ((aR)az3).yg(false);
            }
            if (nArray != null) continue;
        }
    }

    private void be(f f2, az az2) {
        az az3;
        int n;
        int[] nArray;
        List<az> list;
        block15: {
            boolean bl;
            block16: {
                block14: {
                    long l = uaqcq ^ 0x4AEDE723469DL;
                    list = this.bg(az2);
                    int[] nArray2 = g.bA();
                    f2.aB(az2);
                    nArray = nArray2;
                    for (n = list.size() - 1; n >= 1; --n) {
                        try {
                            try {
                                bl = f2.az();
                                if (nArray == null || nArray == null) break block14;
                            }
                            catch (MatchException matchException) {
                                throw g.bB(matchException);
                            }
                            if (bl) break;
                        }
                        catch (MatchException matchException) {
                            throw g.bB(matchException);
                        }
                        az3 = list.get(n);
                        f2.aA(i.YdJtr);
                        f2.aC(az3);
                        az3.sy(f2);
                        if (nArray != null) continue;
                    }
                    bl = f2.az();
                }
                try {
                    try {
                        if (nArray == null) break block15;
                        if (bl) break block16;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException);
                    }
                    f2.aA(i.nKqnf);
                    f2.aC(az2);
                    az2.sz(f2);
                }
                catch (MatchException matchException) {
                    throw g.bB(matchException);
                }
            }
            bl = true;
        }
        for (n = (int)((v936) ? 1 : 0); n < list.size(); ++n) {
            Object object;
            block17: {
                try {
                    try {
                        object = f2;
                        if (nArray == null) break block17;
                        if (((f)object).az()) break;
                    }
                    catch (MatchException matchException) {
                        throw g.bB(matchException)