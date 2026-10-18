package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class mr implements CharSequence {
   int[] Tvxiq;
   int[] eWCtB;
   private static int[] yqymz;
   private static final long WDIYB = gb.aYR(1540176203986889456L, 7187542815839585990L, MethodHandles.lookup().lookupClass()).a(213819981038823L);
   private static final long[] MbAby;
   private static final Integer[] JUGhB;
   private static final Map oDfAg = new HashMap(13);

   public mr(int[] var1, int[] var2) {
      this.Tvxiq = var2;
      this.eWCtB = var1;
   }

   public mr(int[] var1) {
      long var2 = WDIYB ^ 46589511257364L;
      super();
      int var4 = var1.length;
      int[] var5 = new int[Math.min(var4, cma<"t">(19456, 6643356298221846213L ^ var2))];
      ThreadLocalRandom var6 = ThreadLocalRandom.current();
      int var7 = 0;

      try {
         while (var7 < var5.length) {
            var5[var7] = var6.nextInt(cma<"t">(15436, 3593640970965978760L ^ var2));
            var7++;
         }
      } catch (MatchException var8) {
         throw clX(var8);
      }

      int[] var9 = new int[var1.length];
      System.arraycopy(var1, 0, var9, 0, var1.length);
      clU(var9, var5, 0, var9.length);
      this.Tvxiq = var5;
      this.eWCtB = var9;
   }

   public mr(byte[] var1) {
      long var2 = WDIYB ^ 84539489815606L;
      int[] var10000 = clW();
      super();
      int[] var4 = var10000;
      int var5 = var1.length;
      int[] var6 = new int[Math.min(var5, cma<"t">(19456, 6643257943655170023L ^ var2))];
      ThreadLocalRandom var7 = ThreadLocalRandom.current();
      int var8 = 0;

      while (true) {
         if (var8 < var6.length) {
            try {
               var10000 = var6;
               if (var4 != null) {
                  break;
               }

               var6[var8] = var7.nextInt(cma<"t">(15436, 3593674385492397994L ^ var2));
               var8++;
               if (var4 == null) {
                  continue;
               }
            } catch (MatchException var11) {
               throw clX(var11);
            }
         }

         var10000 = new int[var1.length];
         break;
      }

      int[] var12 = var10000;
      int var9 = 0;

      while (true) {
         if (var9 < var1.length) {
            try {
               var12[var9] = var1[var9];
               var9++;
               if (var4 != null) {
                  break;
               }

               if (var4 == null) {
                  continue;
               }
            } catch (MatchException var10) {
               throw clX(var10);
            }
         }

         clU(var12, var6, 0, var12.length);
         this.Tvxiq = var6;
         this.eWCtB = var12;
         break;
      }
   }

   public mr(String var1) {
      long var2 = WDIYB ^ 117665992066344L;
      int[] var10000 = clW();
      super();
      int[] var4 = var10000;
      int var5 = var1.length();
      int[] var6 = new int[Math.min(var5, cma<"t">(7115, 1390196314930422064L ^ var2))];
      ThreadLocalRandom var7 = ThreadLocalRandom.current();
      int var8 = 0;

      while (true) {
         if (var8 < var6.length) {
            try {
               var10000 = var6;
               if (var4 != null) {
                  break;
               }

               var6[var8] = (char)var7.nextInt(cma<"t">(25582, 5434559813682518292L ^ var2));
               var8++;
               if (var4 == null) {
                  continue;
               }
            } catch (MatchException var9) {
               throw clX(var9);
            }
         }

         var10000 = mZ.csh(var1);
         break;
      }

      int[] var10 = var10000;
      clU(var10, var6, 0, var10.length);
      this.Tvxiq = var6;
      this.eWCtB = var10;
   }

   static {
      long var0 = WDIYB ^ 47991927834077L;
      clV(null);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[4];
      int var5 = 0;
      String var6 = "Àz\u009d{\u000bsG\"\u008e\r\u0088@d\u0090>D";
      int var7 = "Àz\u009d{\u000bsG\"\u008e\r\u0088@d\u0090>D".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     MbAby = var8;
                     JUGhB = new Integer[4];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "S¡\u008e\u0012¡æ\u008dà\u0088\u009d\u0093Å=ÌyÊ";
                  var7 = "S¡\u008e\u0012¡æ\u008dà\u0088\u009d\u0093Å=ÌyÊ".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   @Override
   public int length() {
      return this.eWCtB.length;
   }

   @Override
   public String toString() {
      int[] var1 = Arrays.copyOf(this.eWCtB, this.eWCtB.length);

      String var2;
      try {
         clU(var1, this.Tvxiq, 0, var1.length);
         var2 = mZ.cse(var1);
      } finally {
         Arrays.fill(var1, 0);
      }

      return var2;
   }

   @Override
   public char charAt(int var1) {
      return (char)(this.eWCtB[var1] ^ this.Tvxiq[var1 % this.Tvxiq.length]);
   }

   @Override
   public CharSequence subSequence(int var1, int var2) {
      long var3 = WDIYB ^ 46485082114875L;
      int var6 = var2 - var1;
      int[] var7 = new int[var6];
      int[] var8 = new int[var6];
      int[] var10000 = clW();
      System.arraycopy(this.eWCtB, var1, var7, 0, var6);
      int[] var5 = var10000;
      int var9 = 0;

      while (var9 < var6) {
         var8[var9] = this.Tvxiq[(var1 + var9) % this.Tvxiq.length];
         var9++;
         if (var5 != null) {
            break;
         }
      }

      return new mr(var7, var8);
   }

   private static CallSite cma(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("clZ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static int[] clW() {
      return yqymz;
   }

   public static mr clS(int[] var0) {
      return new mr(var0);
   }

   public static mr clQ(String var0) {
      return new mr(var0);
   }

   public static void clV(int[] var0) {
      yqymz = var0;
   }

   public int[] clT() {
      long var1 = WDIYB ^ 18743223507939L;
      int[] var10000 = clW();
      int[] var4 = new int[this.length()];
      int[] var3 = var10000;
      int var5 = 0;

      while (true) {
         if (var5 < var4.length) {
            try {
               var10000 = var4;
               if (var3 != null) {
                  break;
               }

               var4[var5] = this.charAt(var5);
               var5++;
               if (var3 == null) {
                  continue;
               }
            } catch (MatchException var6) {
               throw clX(var6);
            }
         }

         var10000 = var4;
         break;
      }

      return var10000;
   }

   private static int clY(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 30680;
      if (JUGhB[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = MbAby[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])oDfAg.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               oDfAg.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         JUGhB[var3] = var15;
      }

      return JUGhB[var3];
   }

   private static void clU(int[] var0, int[] var1, int var2, int var3) {
      long var4 = WDIYB ^ 111832794773002L;
      int var6 = var2;

      try {
         while (var6 < var2 + var3) {
            var0[var6] = (char)(var0[var6] ^ var1[var6 % var1.length]);
            var6++;
         }
      } catch (MatchException var7) {
         throw clX(var7);
      }
   }

   private static int clZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = clY(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException clX(MatchException var0) {
      return var0;
   }

   public static mr clR(byte[] var0) {
      return new mr(var0);
   }
}
