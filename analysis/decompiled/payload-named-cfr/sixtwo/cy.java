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
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mZ;
import sixtwo.mr;

public class cy
extends cB {
    private int dVhKN;
    private String KGEbC;
    private String SKWJA;
    private static final long BJDNi = gb.aYR(697931624956062612L, -6996857525835252864L, MethodHandles.lookup().lookupClass()).a(133051153534346L);
    private static final String AckiN;
    private static final long ObnMN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cy(mr mr2) {
        long l2 = BJDNi ^ 0x6E4DD9EF648AL;
        super(mr2);
        this.SKWJA = AckiN;
        this.KGEbC = "";
        this.dVhKN = (int)ObnMN;
    }

    public cy(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = BJDNi ^ 0x46BAF8902C4L;
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
        byte[] byArray3 = cipher.doFinal("\u00cb\u00c2\u00f3h>\u00af\u0090\u00f9\u00ab\u009b\u00b1\u0090\u0005o\u00a7\u00da".getBytes("ISO-8859-1"));
        AckiN = cy.Uv(byArray3).intern();
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
                long l3 = -3224779342212499987L;
                byte[] byArray6 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
                ObnMN = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
                return;
            }
            byArray5 = byArray5;
            byArray5[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    public cy Uo(String string) {
        String string2;
        block2: {
            block3: {
                long l2 = BJDNi ^ 0x219A478D33D0L;
                boolean bl2 = cB.Vt();
                try {
                    cy cy2 = this;
                    string2 = string;
                    if (!bl2) break block2;
                    if (string2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw cy.Uu(matchException);
                }
                string2 = "";
                break block2;
            }
            string2 = string;
        }
        cy2.SKWJA = string2;
        return this;
    }

    private static MatchException Uu(MatchException matchException) {
        return matchException;
    }

    public String Ut() {
        return this.SKWJA;
    }

    public int[] Uq() {
        return mZ.csh(this.KGEbC);
    }

    private static String Uv(byte[] byArray) {
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

    public int Ur() {
        return this.dVhKN;
    }

    public cy Un(int n2) {
        this.dVhKN = Math.max(0, n2);
        return this.Up(this.KGEbC);
    }

    public cy Up(String string) {
        cy cy2;
        block13: {
            int n2;
            String string2;
            block11: {
                boolean bl2;
                block12: {
                    String string3;
                    block9: {
                        block10: {
                            long l2 = BJDNi ^ 0x7903240B5DDFL;
                            bl2 = cB.Vu();
                            try {
                                string3 = string;
                                if (bl2) break block9;
                                if (string3 != null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw cy.Uu(matchException);
                            }
                            string3 = "";
                            break block9;
                        }
                        string3 = string;
                    }
                    string2 = string3;
                    try {
                        n2 = string2.length();
                        if (bl2) break block11;
                        if (n2 <= this.dVhKN) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cy.Uu(matchException);
                    }
                    string2 = string2.substring(0, this.dVhKN);
                }
                try {
                    cy2 = this;
                    if (bl2) break block13;
                    n2 = Objects.equals(cy2.KGEbC, string2) ? 1 : 0;
                }
                catch (MatchException matchException) {
                    throw cy.Uu(matchException);
                }
            }
            try {
                if (n2 != 0) {
                    return this;
                }
            }
            catch (MatchException matchException) {
                throw cy.Uu(matchException);
            }
            this.KGEbC = string2;
            this.Vk();
            cy2 = this;
        }
        return cy2;
    }

    public String Us() {
        return this.KGEbC;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        this.Up(jsonElement.getAsString());
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.KGEbC);
    }
}

