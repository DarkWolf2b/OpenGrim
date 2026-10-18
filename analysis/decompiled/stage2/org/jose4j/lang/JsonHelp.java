package org.jose4j.lang;

import java.util.List;
import java.util.Map;
import org.jose4j.jwt.IntDate;

public class JsonHelp {
   public static String getStringChecked(Map<String, Object> var0, String var1) throws JoseException {
      Object var2 = var0.get(var1);

      try {
         return (String)var2;
      } catch (ClassCastException var4) {
         throw new JoseException("'" + var1 + "' parameter was " + jsonTypeName(var2) + " type but is required to be a String.");
      }
   }

   public static String jsonTypeName(Object var0) {
      String var1;
      if (var0 instanceof Number) {
         var1 = "Number";
      } else if (var0 instanceof Boolean) {
         var1 = "Boolean";
      } else if (var0 instanceof List) {
         var1 = "Array";
      } else if (var0 instanceof Map) {
         var1 = "Object";
      } else if (var0 instanceof String) {
         var1 = "String";
      } else {
         var1 = "unknown";
      }

      return var1;
   }

   public JsonHelp() {
   }

   public static Long getLong(Map<String, ?> var0, String var1) {
      Object var2 = var0.get(var1);
      return var2 != null ? ((Number)var2).longValue() : null;
   }

   public static List<String> getStringArray(Map<String, Object> var0, String var1) {
      Object var2 = var0.get(var1);
      return (List<String>)var2;
   }

   public static String getString(Map<String, Object> var0, String var1) {
      Object var2 = var0.get(var1);
      return (String)var2;
   }

   public static IntDate getIntDate(Map<String, Object> var0, String var1) {
      long var2 = getLong(var0, var1);
      return IntDate.fromSeconds(var2);
   }
}
