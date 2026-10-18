package org.jose4j.jwt;

import java.util.Date;

/** @deprecated */
public class IntDate {
   private long value;
   private static final long CONVERSION = 1000L;

   private IntDate(long var1) {
      this.value = var1;
   }

   public static IntDate now() {
      return fromMillis(System.currentTimeMillis());
   }

   public static IntDate fromSeconds(long var0) {
      return new IntDate(var0);
   }

   public static IntDate fromMillis(long var0) {
      return fromSeconds(var0 / 1000L);
   }

   public void addSeconds(long var1) {
      this.value += var1;
   }

   public void addSeconds(int var1) {
      this.addSeconds((long)var1);
   }

   public long getValue() {
      return this.value;
   }

   public long getValueInMillis() {
      return this.getValue() * 1000L;
   }

   public boolean before(IntDate var1) {
      return this.value < var1.getValue();
   }

   public boolean after(IntDate var1) {
      return this.value > var1.getValue();
   }

   @Override
   public String toString() {
      StringBuilder var1 = new StringBuilder();
      var1.append("IntDate");
      var1.append("{").append(this.getValue()).append(" --> ");
      var1.append(new Date(this.getValueInMillis()));
      var1.append('}');
      return var1.toString();
   }

   @Override
   public boolean equals(Object var1) {
      return this == var1 || var1 instanceof IntDate && this.value == ((IntDate)var1).value;
   }

   @Override
   public int hashCode() {
      return (int)(this.value ^ this.value >>> 32);
   }
}
