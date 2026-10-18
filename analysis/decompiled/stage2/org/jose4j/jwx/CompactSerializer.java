package org.jose4j.jwx;

public class CompactSerializer {
   private static final String PERIOD_SEPARATOR = ".";
   private static final String PERIOD_SEPARATOR_REGEX = "\\.";
   private static final String EMPTY_STRING = "";

   public CompactSerializer() {
   }

   public static String serialize(String... var0) {
      StringBuilder var1 = new StringBuilder();

      for (int var2 = 0; var2 < var0.length; var2++) {
         String var3 = var0[var2] == null ? "" : var0[var2];
         var1.append(var3);
         if (var2 != var0.length - 1) {
            var1.append(".");
         }
      }

      return var1.toString();
   }

   public static String[] deserialize(String var0) {
      String[] var1 = var0.split("\\.");
      if (var0.endsWith(".")) {
         String[] var2 = new String[var1.length + 1];
         System.arraycopy(var1, 0, var2, 0, var1.length);
         var2[var1.length] = "";
         var1 = var2;
      }

      return var1;
   }
}
