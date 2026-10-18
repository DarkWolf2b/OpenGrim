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
        long l2 = IeCUk ^ 0x11F064C2F402L;
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
        long l2 = IeCUk ^ 0x2A4C297974F3L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l3 = -6281860261272569937L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                mKlzi = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
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

    public cD VO(int n2) {
        cD cD2;
        block4: {
            block5: {
                long l2 = IeCUk ^ 0x84B540A01ACL;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cD2 = this;
                        if (!bl2) break block4;
                        if (cD2.taKVz != n2) break block5;
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
            this.taKVz = n2;
            this.Vk();
            cD2 = this;
        }
        return cD2;
    }
}

