/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import sixtwo.gb;
import sixtwo.kn;
import sixtwo.lB;
import sixtwo.lK;
import sixtwo.lN;

record ko(Entity entity, float tickDelta, MatrixStack poseStack) implements lK
{
    private static final lN BATCH_KEY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    @Override
    public lN batchKey() {
        return BATCH_KEY;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = gb.aYR(5263654102084505159L, 4454810502454882351L, MethodHandles.lookup().lookupClass()).a(10635996994207L) ^ 0x1525E7CDF2E3L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        int n2 = 1;
        while (true) {
            if (n2 >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                byte[] byArray3 = cipher.doFinal("\u00d6\u00e00\u00d6\u00a4$M\u00fdt?&#\u00d7\u00fa\u00ea\u0006\u00cbNR\u0002VE<\u00fc".getBytes("ISO-8859-1"));
                String string = ko.a(byArray3).intern();
                BATCH_KEY = lN.of(string, null, lB.rMraa);
                return;
            }
            byArray2 = byArray2;
            byArray2[n2] = (byte)(l2 << n2 * 8 >>> 56);
            ++n2;
        }
    }

    private static String a(byte[] byArray) {
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

    @Override
    public void execute() {
        this.renderIntoBatch();
    }

    @Override
    public void endBatch() {
        kn.bQv();
    }

    @Override
    public void beginBatch() {
    }

    @Override
    public void renderIntoBatch() {
        kn.bQu(this.entity, this.tickDelta, this.poseStack);
    }
}

