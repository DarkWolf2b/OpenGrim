package org.jose4j.jwt;

import java.text.DateFormat;
import java.util.Date;
import org.jose4j.lang.Maths;

public class NumericDate {
   private long value;
   private static final long CONVERSION = 1000L;

   private NumericDate(long var1) {
      this.setValue(var1);
   }

   public static NumericDate now() {
      return fromMilliseconds(System.currentTimeMillis());
   }

   public static NumericDate fromSeconds(long var0) {
      return new NumericDate(var0);
   }

   public static NumericDate fromMilliseconds(long var0) {
      return fromSeconds(var0 / 1000L);
   }

   public void addSeconds(long var1) {
      this.setValue(Maths.add(this.value, var1));
   }

   public long getValue() {
      return this.value;
   }

   public void setValue(long var1) {
      this.value = var1;
   }

   public long getValueInMillis() {
      long var1 = this.getValue();
      long var3 = var1 * 1000L;
      if (!this.canConvertToMillis()) {
         throw new ArithmeticException("converting " + var1 + " seconds to milliseconds (x1000) resulted in long integer overflow (" + var3 + ")");
      } else {
         return var3;
      }
   }

   private boolean canConvertToMillis() {
      long var1 = this.getValue();
      long var3 = var1 * 1000L;
      return (var1 <= 0L || var3 >= var1) && (var1 >= 0L || var3 <= var1) && (var1 != 0L || var3 == 0L);
   }

   public boolean isBefore(NumericDate var1) {
      return this.value < var1.getValue();
   }

   public boolean isOnOrAfter(NumericDate var1) {
      return !this.isBefore(var1);
   }

   public boolean isAfter(NumericDate var1) {
      return this.value > var1.getValue();
   }

   @Override
   public String toString() {
      StringBuilder var1 = new StringBuilder();
      var1.append("NumericDate").append("{").append(this.getValue());
      if (this.canConvertToMillis()) {
         DateFormat var2 = DateFormat.getDateTimeInstance(2, 1);
         Date var3 = new Date(this.getValueInMillis());
         var1.append(" -> ").append(var2.format(var3));
      }

      var1.append('}');
      return var1.toString();
   }

   @Override
   public boolean equals(Object var1) {
      return this == var1 || var1 instanceof NumericDate && this.value == ((NumericDate)var1).value;
   }

   @Override
   public int hashCode() {
      return (int)(this.value ^ this.value >>> 32);
   }
}
