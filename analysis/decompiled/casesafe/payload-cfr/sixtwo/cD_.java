/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.Arrays;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jb;
import sixtwo.mr;

public class cD
extends cB {
    private int taKVz;
    private static final long IeCUk = gb.aYR(-2040694330958669505L, -7978183789279250067L, MethodHandles.lookup().lookupClass()).a(28033197927207L);
    private static final long mKlzi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cD(mr mr2) {
        long l = IeCUk ^ 0x11F064C2F402L;
        super(mr2);
        this.taKVz = (int)mKlzi;
    }

    public cD(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = IeCUk ^ 0x2A4C297974F3L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = -6281860261272569937L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                mKlzi = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    @Override
    public void SS(JsonElement jsonElement) {
        this.VO(jsonElement.getAsInt());
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.taKVz);
    }

    private static MatchException VQ(MatchException matchException) {
        return matchException;
    }

    public String VN() {
        return jb.byM(this.taKVz);
    }

    public int VP() {
        return this.taKVz;
    }

    public cD VO(int n) {
        cD cD2;
        block4: {
            block5: {
                long l = IeCUk ^ 0x84B540A01ACL;
                boolean bl = cB.Vt();
                try {
                    try {
                        cD2 = this;
                        if (!bl) break block4;
                        if (cD2.taKVz != n) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cD.VQ(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cD.VQ(matchException);
                }
            }
            this.taKVz = n;
            this.Vk();
            cD2 = this;
        }
        return cD2;
    }
}
