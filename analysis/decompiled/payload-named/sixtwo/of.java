package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Comparator;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.LivingEntity;

public enum of {
   OGxYa,
   ahXwo,
   FraBu;

   private final Comparator<? super LivingEntity> hzeYm;
   private static String[] wgtAX;
   private static final long hyOKc = gb.aYR(7170161539386005253L, -3942045384269620819L, MethodHandles.lookup().lookupClass()).a(86355900667434L);

   private of(Comparator<? super LivingEntity> var3) {
      this.hzeYm = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var9 = hyOKc ^ 98687394019739L;
      if (cCL() == null) {
         cCK(new String[1]);
      }

      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var9 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var9 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var0 = new String[3];
      int var6 = 0;
      String var5 = "\u009bÏ\u0091§&Ñn\u009aoqé\u008eè-\u0003Ù\b\u0019,\u0080¾\u0011É\u008a©\b)ØuÄ\u0013Ý\ní";
      int var7 = "\u009bÏ\u0091§&Ñn\u009aoqé\u008eè-\u0003Ù\b\u0019,\u0080¾\u0011É\u008a©\b)ØuÄ\u0013Ý\ní".length();
      char var4 = 16;
      int var3 = -1;

      while (true) {
         byte[] var8 = var1.doFinal(var5.substring(++var3, var3 + var4).getBytes("ISO-8859-1"));
         String var13 = cCN(var8).intern();
         byte var10001 = -1;
         var0[var6++] = var13;
         if ((var3 += var4) >= var7) {
            OGxYa = new of((var0x, var1x) -> 0);
            ahXwo = new of(Comparator.comparingDouble(var0x -> var0x.distanceTo(rD.dlmvG.player)));
            FraBu = new of(Comparator.comparingDouble(LivingEntity::getHealth));
            return;
         }

         var4 = var5.charAt(var3);
      }
   }

   public static String[] cCL() {
      return wgtAX;
   }

   public static of cCF(ct var0) {
      long var1 = hyOKc ^ 80819044053698L;

      try {
         switch (var0.ST()) {
            case 0:
               return ahXwo;
            case 1:
               return FraBu;
         }
      } catch (MatchException var3) {
         throw cCM(var3);
      }

      return OGxYa;
   }

   public static void cCK(String[] var0) {
      wgtAX = var0;
   }

   public Comparator<? super LivingEntity> cCG() {
      return this.hzeYm;
   }

   private static String cCN(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static MatchException cCM(MatchException var0) {
      return var0;
   }
}
