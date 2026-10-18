package org.jose4j.json;

import java.io.IOException;
import java.io.Writer;
import java.util.LinkedHashMap;
import java.util.Map;
import org.jose4j.json.internal.json_simple.JSONValue;
import org.jose4j.json.internal.json_simple.parser.ContainerFactory;
import org.jose4j.json.internal.json_simple.parser.JSONParser;
import org.jose4j.json.internal.json_simple.parser.ParseException;
import org.jose4j.lang.JoseException;

public class JsonUtil {
   private static final ContainerFactory CONTAINER_FACTORY = new JsonUtil$1();

   public JsonUtil() {
   }

   public static String toJson(Map<String, ?> var0) {
      return JSONValue.toJSONString(var0);
   }

   public static void writeJson(Map<String, ?> var0, Writer var1) throws IOException {
      JSONValue.writeJSONString(var0, var1);
   }

   public static Map<String, Object> parseJson(String var0) throws JoseException {
      try {
         JSONParser var1 = new JSONParser();
         Object var2 = var1.parse(var0, CONTAINER_FACTORY);
         if (var2 == null) {
            throw new JoseException("Parsing returned null");
         } else {
            return (Map<String, Object>)var2;
         }
      } catch (IllegalArgumentException | ParseException var3) {
         throw new JoseException("Parsing error: " + var3, var3);
      } catch (ClassCastException var4) {
         throw new JoseException("Expecting a JSON object at the root but " + var4, var4);
      }
   }

   static class DupeKeyDisallowingLinkedHashMap extends LinkedHashMap<String, Object> {
      DupeKeyDisallowingLinkedHashMap() {
      }

      public Object put(String var1, Object var2) {
         if (this.containsKey(var1)) {
            throw new IllegalArgumentException("An entry for '" + var1 + "' already exists. Names must be unique.");
         } else {
            return super.put(var1, var2);
         }
      }
   }
}
