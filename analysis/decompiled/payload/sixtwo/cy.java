package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class cy extends cB {
   private int dVhKN;
   private String KGEbC;
   private String SKWJA;
   private static final long BJDNi = gb.aYR(697931624956062612L, -6996857525835252864L, MethodHandles.lookup().lookupClass()).a(133051153534346L);
   private static final String AckiN;
   private static final long ObnMN;

   public cy(mr var1) {
      long var2 = BJDNi ^ 121280647881866L;
      super(var1);
      this.SKWJA = AckiN;
      this.KGEbC = "";
      this.dVhKN = (int)ObnMN;
   }

   public cy(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   static {
      long var5 = BJDNi ^ 4860553003716L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("ËÂóh>¯\u0090ù«\u009b±\u0090\u0005o§Ú".getBytes("ISO-8859-1"));
      String var12 = Uv(var9).intern();
      byte var10001 = -1;
      AckiN = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -3224779342212499987L;
      byte[] var4 = var0.doFinal(
         new byte[]{
            (byte)(var2 >>> 56),
            (byte)(var2 >>> 48),
            (byte)(var2 >>> 40),
            (byte)(var2 >>> 32),
            (byte)(var2 >>> 24),
            (byte)(var2 >>> 16),
            (byte)(var2 >>> 8),
            (byte)var2
         }
      );
      long var14 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      ObnMN = var14;
   }

   public cy Uo(String var1) {
      long var2 = BJDNi ^ 36946509116368L;
      boolean var4 = cB.Vt();

      cy var10000;
      String var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (!var4) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw Uu(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = "";
      }

      var10000.SKWJA = var10001;
      return this;
   }

   private static MatchException Uu(MatchException var0) {
      return var0;
   }

   public String Ut() {
      return this.SKWJA;
   }

   public int[] Uq() {
      return mZ.csh(this.KGEbC);
   }

   private static String Uv(byte[] var0) {
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

   public int Ur() {
      return this.dVhKN;
   }

   public cy Un(int var1) {
      this.dVhKN = Math.max(0, var1);
      return this.Up(this.KGEbC);
   }

   public cy Up(String var1) {
      long var2 = BJDNi ^ 133054396587487L;
      boolean var4 = cB.Vu();

      String var10000;
      label61: {
         label60: {
            try {
               var10000 = var1;
               if (var4) {
                  break label61;
               }

               if (var1 == null) {
                  break label60;
               }
            } catch (MatchException var9) {
               throw Uu(var9);
            }

            var10000 = var1;
            break label61;
         }

         var10000 = "";
      }

      String var5 = var10000;

      label50: {
         label49: {
            try {
               var10 = var5.length();
               if (var4) {
                  break label50;
               }

               if (var10 <= this.dVhKN) {
                  break label49;
               }
            } catch (MatchException var8) {
               throw Uu(var8);
            }

            var5 = var5.substring(0, this.dVhKN);
         }

         try {
            if (var4) {
               return this;
            }

            var10 = Objects.equals(this.KGEbC, var5);
         } catch (MatchException var6) {
            throw Uu(var6);
         }
      }

      try {
         if (var10 != 0) {
            return this;
         }
      } catch (MatchException var7) {
         throw Uu(var7);
      }

      this.KGEbC = var5;
      this.Vk();
      return this;
   }

   public String Us() {
      return this.KGEbC;
   }

   @Override
   public void SS(JsonElement var1) {
      this.Up(var1.getAsString());
   }

   @Override
   public void SR(Map<String, Object> var1) {
      var1.put(Arrays.toString(this.NwlSF), this.KGEbC);
   }
}
