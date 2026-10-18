package org.jose4j.json;

import java.util.Map;
import org.jose4j.lang.JoseException;

/** @deprecated */
public class JsonHeaderUtil {
   public JsonHeaderUtil() {
   }

   /** @deprecated */
   public static Map<String, Object> parseJson(String var0) throws JoseException {
      return JsonUtil.parseJson(var0);
   }

   /** @deprecated */
   public static String toJson(Map<String, ?> var0) {
      return JsonUtil.toJson(var0);
   }
}
