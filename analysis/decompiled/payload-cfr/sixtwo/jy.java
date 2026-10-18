/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1799
 *  org.joml.Matrix3x2f
 *  org.joml.Matrix3x2fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;
import org.joml.Matrix3x2f;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ju;
import sixtwo.ju$tT;
import sixtwo.lB;
import sixtwo.lF;
import sixtwo.lJ;
import sixtwo.lK;
import sixtwo.lN;

abstract class jy<T extends jy<T>>
implements lK,
lJ<T> {
    private static final lN wyYmy;
    protected final Matrix3x2fc wvKbm;
    protected final class_1799 qeMTM;
    protected final float svsZw;
    protected final float zXQoo;
    protected ju$tT qxFcM;
    private static final long NBNQu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public lN batchKey() {
        lN lN2;
        long l = NBNQu ^ 0x5B003FCE214BL;
        try {
            lN2 = this.qxFcM == ju$tT.IHKNQ ? wyYmy : lN.immediate();
        }
        catch (MatchException matchException) {
            throw jy.bGB(matchException);
        }
        return lN2;
    }

    protected jy(@Nullable Matrix3x2fc matrix3x2fc, class_1799 class_17992, float f, float f2, ju$tT ju$tT) {
        ju$tT ju$tT2;
        String string;
        block7: {
            block8: {
                Matrix3x2f matrix3x2f;
                long l = NBNQu ^ 0x51FA0333682FL;
                String string2 = ju.bGn();
                string = string2;
                try {
                    jy jy2 = this;
                    matrix3x2f = matrix3x2fc == null ? null : new Matrix3x2f(matrix3x2fc);
                }
                catch (MatchException matchException) {
                    throw jy.bGB(matchException);
                }
                try {
                    jy2.wvKbm = matrix3x2f;
                    this.qeMTM = class_17992.method_7972();
                    this.svsZw = f;
                    this.zXQoo = f2;
                    jy jy3 = this;
                    ju$tT2 = ju$tT;
                    if (string == null) break block7;
                    if (ju$tT2 != null) break block8;
                }
                catch (MatchException matchException) {
                    throw jy.bGB(matchException);
                }
                ju$tT2 = ju$tT.yDoOO;
                break block7;
            }
            ju$tT2 = ju$tT;
        }
        try {
            jy3.qxFcM = ju$tT2;
            if (string == null) {
                iS.bwK("d1G9Kc");
            }
        }
        catch (MatchException matchException) {
            throw jy.bGB(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        NBNQu = gb.aYR(7289900486859939433L, 933198282271656753L, MethodHandles.lookup().lookupClass()).a(110455426521662L);
        long l = NBNQu ^ 0x41533ADDB5F5L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("S\u0001U\u0090\u0085\u0011k\u00a6Zb\u008c\u008aF\u00b3'\r4\u00daSis\u009f\u00b8\u00c5".getBytes("ISO-8859-1"));
                String string = jy.bGC(byArray3).intern();
                wyYmy = lN.of(string, null, lB.xCeuB, (Object)ju$tT.IHKNQ);
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public void execute() {
        this.renderIntoBatch();
    }

    @Override
    public void endBatch() {
        long l = NBNQu ^ 0x7E4222B92DD5L;
        try {
            if (this.qxFcM == ju$tT.IHKNQ) {
                ju.bFV();
            }
        }
        catch (MatchException matchException) {
            throw jy.bGB(matchException);
        }
    }

    public T bGx() {
        return this.bGy(ju$tT.yDoOO);
    }

    public T bGy(ju$tT ju$tT) {
        ju$tT ju$tT2;
        block2: {
            block3: {
                long l = NBNQu ^ 0x2A03C1A13BB4L;
                String string = ju.bGn();
                try {
                    jy jy2 = this;
                    ju$tT2 = ju$tT;
                    if (string == null) break block2;
                    if (ju$tT2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw jy.bGB(matchException);
                }
                ju$tT2 = ju$tT.yDoOO;
                break block2;
            }
            ju$tT2 = ju$tT;
        }
        jy2.qxFcM = ju$tT2;
        return this.bGA();
    }

    private static MatchException bGB(MatchException matchException) {
        return matchException;
    }

    private T bGA() {
        return (T)this;
    }

    private static String bGC(byte[] byArray) {
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

    @Override
    public void beginBatch() {
    }

    public T bGw() {
        return this.bGy(ju$tT.IHKNQ);
    }

    public T bGv() {
        jy<T> jy2;
        block4: {
            block5: {
                long l = NBNQu ^ 0x33DDEBE4B103L;
                String string = ju.bGn();
                try {
                    try {
                        jy2 = this;
                        if (string == null) break block4;
                        if (jy2.qeMTM.method_7960()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jy.bGB(matchException);
                    }
                    lF.cfA(this);
                }
                catch (MatchException matchException) {
                    throw jy.bGB(matchException);
                }
            }
            jy2 = this.bGA();
        }
        return (T)jy2;
    }
}
