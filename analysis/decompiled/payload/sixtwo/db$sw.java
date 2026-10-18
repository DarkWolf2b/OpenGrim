package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_243;

public class db$sw {
   class_243 AUTLH;
   mT QWqhb;
   boolean PaBdV;
   rk pvrxH;
   private static final long SbMHh = gb.aYR(-6341233503068354144L, 3941715898052231776L, MethodHandles.lookup().lookupClass()).a(15977905994038L);
   private static final long yqWBV;

   public db$sw(class_243 var1) {
      long var2 = SbMHh ^ 131669107519027L;
      super();
      this.PaBdV = false;
      this.pvrxH = new rk((int)yqWBV).dhs(rj.XzDkv);
      this.AUTLH = var1;
      this.QWqhb = mT.cpz();
   }

   static {
      long var0 = SbMHh ^ 37582751935246L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -2372792555177154564L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      yqWBV = var7;
   }
}
