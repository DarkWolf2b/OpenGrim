package org.jose4j.lang;

public class ExceptionHelp {
   public static String toStringWithCauses(Throwable var0) {
      StringBuilder var1 = new StringBuilder();
      var1.append(var0);

      while (var0.getCause() != null) {
         var0 = var0.getCause();
         var1.append("; caused by: ").append(var0);
      }

      return var1.toString();
   }

   public ExceptionHelp() {
   }

   public static String toStringWithCausesAndAbbreviatedStack(Throwable var0, Class var1) {
      StringBuilder var2 = new StringBuilder();

      for (boolean var3 = true; var0 != null; var3 = false) {
         if (!var3) {
            var2.append("; caused by: ");
         }

         var2.append(var0).append(" at ");

         for (StackTraceElement var7 : var0.getStackTrace()) {
            if (var7.getClassName().equals(var1.getName())) {
               var2.append("...omitted...");
               break;
            }

            var2.append(var7).append("; ");
         }

         var0 = var0.getCause();
      }

      return var2.toString();
   }
}
