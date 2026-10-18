package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

class ca$sl {
   private final String EVJUd;
   private final String sliuY;
   private final mG iIDDI;
   private final String BwIFl;
   private final rk VoBja;
   private static final long sJUal = gb.aYR(-8831232379099909450L, 2847733807376665301L, MethodHandles.lookup().lookupClass()).a(11043279932678L);
   private static final long dmABj;

   public ca$sl(String var1, String var2, mG var3, String var4) {
      long var5 = sJUal ^ 75239211062310L;
      super();
      this.VoBja = new rk((int)dmABj).dhs(rj.UPXqT);
      this.EVJUd = var1;
      this.sliuY = var2;
      this.iIDDI = var3;
      this.BwIFl = var4;
   }

   static {
      long var0 = sJUal ^ 33381289061262L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 2521043688639798750L;
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
      dmABj = var7;
   }
}
