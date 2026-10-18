package org.jose4j.lang;

public class Maths {
   public Maths() {
   }

   public static long add(long var0, long var2) {
      long var4 = var0 + var2;
      if (0L > ((var0 ^ var4) & (var2 ^ var4))) {
         throw new ArithmeticException("long overflow adding: " + var0 + " + " + var2 + " = " + var4);
      } else {
         return var4;
      }
   }

   public static long subtract(long var0, long var2) {
      long var4 = var0 - var2;
      if (0L > ((var0 ^ var2) & (var0 ^ var4))) {
         throw new ArithmeticException("long overflow subtracting: " + var0 + " - " + var2 + " = " + var4);
      } else {
         return var4;
      }
   }
}
