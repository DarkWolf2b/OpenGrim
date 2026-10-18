/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.awt.image.BufferedImage;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.lv;
import sixtwo.lw;
import sixtwo.lx$uB;
import sixtwo.mI$uP;

public class lx
extends az {
    private final List<lx$uB> CVfuu;
    private mI$uP oIxEE;
    private ld EsFbZ;
    private boolean nmGBT;
    private int NGBqu;
    private long tjpvs;
    private static final long pvdUF = gb.aYR(8239756785891625524L, -4189039151916817371L, MethodHandles.lookup().lookupClass()).a(34404396481828L);
    private static final long HUSfJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lx ccf(ld ld2) {
        this.EsFbZ = ld2;
        return this;
    }

    public lx(String string) {
        int n;
        lw lw2;
        String[] stringArray;
        block5: {
            int n2;
            block6: {
                long l = pvdUF ^ 0x74DBAB277356L;
                String[] stringArray2 = lw.cbS();
                stringArray = stringArray2;
                this.CVfuu = new ArrayList<lx$uB>();
                this.oIxEE = mI$uP.SYfjl;
                this.EsFbZ = ld.NONE;
                this.nmGBT = true;
                this.NGBqu = 0;
                this.tjpvs = System.currentTimeMillis();
                lw2 = new lw();
                int n3 = lw2.cbB(string);
                try {
                    n2 = n3;
                    if (stringArray == null) break block5;
                    if (n2 == 0) break block6;
                }
                catch (MatchException matchException) {
                    throw lx.ccj(matchException);
                }
                return;
            }
            n2 = n = 0;
        }
        while (n < lw2.cbt()) {
            block7: {
                int n4;
                int n5;
                BufferedImage bufferedImage;
                block8: {
                    bufferedImage = lw2.cbx(n);
                    n5 = lw2.cbs(n);
                    try {
                        n4 = n5;
                        if (stringArray == null) break block7;
                        if (n4 > 0) break block8;
                    }
                    catch (MatchException matchException) {
                        throw lx.ccj(matchException);
                    }
                    n5 = (int)HUSfJ;
                }
                n4 = this.CVfuu.add(new lx$uB(new lv(bufferedImage), n5)) ? 1 : 0;
            }
            ++n;
            if (stringArray != null) continue;
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = pvdUF ^ 0x6A8BAA301A0AL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -6043150605921148885L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                HUSfJ = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    public lx cce(mI$uP mI$uP) {
        this.oIxEE = mI$uP;
        return this;
    }

    private void ccc() {
        block12: {
            int n;
            block13: {
                block14: {
                    lx lx2;
                    block15: {
                        int n2;
                        String[] stringArray;
                        block10: {
                            block11: {
                                long l = pvdUF ^ 0x150717F14315L;
                                stringArray = lw.cbS();
                                try {
                                    n2 = this.CVfuu.isEmpty();
                                    if (stringArray == null) break block10;
                                    if (n2 == 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw lx.ccj(matchException);
                                }
                                return;
                            }
                            n2 = this.NGBqu + 1;
                        }
                        n = n2;
                        try {
                            try {
                                try {
                                    if (stringArray == null) break block12;
                                    if (n < this.CVfuu.size()) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw lx.ccj(matchException);
                                }
                                lx2 = this;
                                if (stringArray == null) break block14;
                            }
                            catch (MatchException matchException) {
                                throw lx.ccj(matchException);
                            }
                            if (lx2.oIxEE != mI$uP.SYfjl) break block15;
                        }
                        catch (MatchException matchException) {
                            throw lx.ccj(matchException);
                        }
                        n = 0;
                        if (stringArray != null) break block13;
                    }
                    n = this.CVfuu.size() - 1;
                    lx2 = this;
                }
                lx2.nmGBT = false;
            }
            this.NGBqu = n;
        }
    }

    @Override
    protected void bV(lC lC2) {
        block14: {
            lx$uB lx$uB;
            block15: {
                lx lx2;
                String[] stringArray;
                block13: {
                    boolean bl;
                    block11: {
                        block12: {
                            long l = pvdUF ^ 0x54BB27AC0FC5L;
                            stringArray = lw.cbS();
                            try {
                                bl = this.CVfuu.isEmpty();
                                if (stringArray == null) break block11;
                                if (!bl) break block12;
                            }
                            catch (MatchException matchException) {
                                throw lx.ccj(matchException);
                            }
                            return;
                        }
                        try {
                            lx2 = this;
                            if (stringArray == null) break block13;
                            bl = lx2.nmGBT;
                        }
                        catch (MatchException matchException) {
                            throw lx.ccj(matchException);
                        }
                    }
                    try {
                        if (bl) {
                            this.ccb();
                        }
                    }
                    catch (MatchException matchException) {
                        throw lx.ccj(matchException);
                    }
                    lx2 = this;
                }
                lx$uB = lx2.ccd();
                try {
                    try {
                        if (stringArray == null) break block14;
                        if (lx$uB != null) break block15;
                    }
                    catch (MatchException matchException) {
                        throw lx.ccj(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw lx.ccj(matchException);
                }
            }
            lC2.cee(lx$uB.location, this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, this.EsFbZ);
        }
    }

    private static MatchException ccj(MatchException matchException) {
        return matchException;
    }

    public lx ccg(boolean bl) {
        this.nmGBT = bl;
        return this;
    }

    public lx cch(int n) {
        this.NGBqu = n;
        return this;
    }

    public lx cci(long l) {
        this.tjpvs = l;
        return this;
    }

    private void ccb() {
        block11: {
            long l;
            block10: {
                long l2 = pvdUF ^ 0x10F65DE00F31L;
                String[] stringArray = lw.cbS();
                try {
                    if (this.CVfuu.isEmpty()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw lx.ccj(matchException);
                }
                l = System.currentTimeMillis();
                lx$uB lx$uB = this.ccd();
                try {
                    if (lx$uB == null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw lx.ccj(matchException);
                }
                long l3 = l - this.tjpvs;
                try {
                    try {
                        if (stringArray == null) break block10;
                        if (l3 < (long)lx$uB.delay()) break block11;
                    }
                    catch (MatchException matchException) {
                        throw lx.ccj(matchException);
                    }
                    this.ccc();
                }
                catch (MatchException matchException) {
                    throw lx.ccj(matchException);
                }
            }
            this.tjpvs = l;
        }
    }

    private lx$uB ccd() {
        Object object;
        block16: {
            block17: {
                block14: {
                    lx lx2;
                    int n;
                    String[] stringArray;
                    block12: {
                        block13: {
                            long l = pvdUF ^ 0x189BBFCAB594L;
                            stringArray = lw.cbS();
                            try {
                                try {
                                    n = this.CVfuu.isEmpty();
                                    if (stringArray == null) break block12;
                                    if (n == 0) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw lx.ccj(matchException);
                                }
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw lx.ccj(matchException);
                            }
                        }
                        try {
                            lx2 = this;
                            if (stringArray == null) break block14;
                            n = lx2.NGBqu;
                        }
                        catch (MatchException matchException) {
                            throw lx.ccj(matchException);
                        }
                    }
                    try {
                        block15: {
                            try {
                                try {
                                    if (n < 0) break block15;
                                    object = this;
                                    if (stringArray == null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw lx.ccj(matchException);
                                }
                                if (((lx)object).NGBqu < this.CVfuu.size()) break block17;
                            }
                            catch (MatchException matchException) {
                                throw lx.ccj(matchException);
                            }
                        }
                        lx2 = this;
                    }
                    catch (MatchException matchException) {
                        throw lx.ccj(matchException);
                    }
                }
                lx2.NGBqu = 0;
            }
            object = this.CVfuu.get(this.NGBqu);
        }
        return (lx$uB)object;
    }
}
