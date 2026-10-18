package org.jose4j.jwk;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jose4j.json.JsonUtil;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class JsonWebKeySet {
   private static final Logger log = LoggerFactory.getLogger(JsonWebKeySet.class);
   public static final String JWK_SET_MEMBER_NAME = "keys";
   private List<JsonWebKey> keys;

   public JsonWebKeySet(String var1) throws JoseException {
      Map var2 = JsonUtil.parseJson(var1);
      List var3 = (List)var2.get("keys");
      if (var3 == null) {
         throw new JoseException("The JSON JWKS content does not include the keys member.");
      } else {
         this.keys = new ArrayList<>(var3.size());

         for (Map var5 : var3) {
            try {
               JsonWebKey var6 = JsonWebKey.Factory.newJwk(var5);
               this.keys.add(var6);
            } catch (Exception var7) {
               log.debug(
                  "Ignoring an individual JWK in a JWKS due to a problem processing it ({}). JWK params: {} and the full JWKS content: {}.",
                  new Object[]{ExceptionHelp.toStringWithCauses(var7), var5, var1}
               );
            }
         }
      }
   }

   public JsonWebKeySet(JsonWebKey... var1) {
      this(Arrays.asList(var1));
   }

   public JsonWebKeySet(List<? extends JsonWebKey> var1) {
      this.keys = new ArrayList<>(var1.size());

      for (JsonWebKey var3 : var1) {
         this.keys.add(var3);
      }
   }

   public void addJsonWebKey(JsonWebKey var1) {
      this.keys.add(var1);
   }

   public List<JsonWebKey> getJsonWebKeys() {
      return this.keys;
   }

   public JsonWebKey findJsonWebKey(String var1, String var2, String var3, String var4) {
      List var5 = this.findJsonWebKeys(var1, var2, var3, var4);
      return var5.isEmpty() ? null : (JsonWebKey)var5.iterator().next();
   }

   public List<JsonWebKey> findJsonWebKeys(String var1, String var2, String var3, String var4) {
      ArrayList var5 = new ArrayList();

      for (JsonWebKey var7 : this.keys) {
         boolean var8 = true;
         if (var1 != null) {
            var8 = var1.equals(var7.getKeyId());
         }

         if (var3 != null) {
            var8 &= var3.equals(var7.getUse());
         }

         if (var2 != null) {
            var8 &= var2.equals(var7.getKeyType());
         }

         if (var4 != null) {
            var8 &= var4.equals(var7.getAlgorithm());
         }

         if (var8) {
            var5.add(var7);
         }
      }

      return var5;
   }

   public String toJson() {
      return this.toJson(JsonWebKey.OutputControlLevel.INCLUDE_SYMMETRIC);
   }

   public String toJson(JsonWebKey.OutputControlLevel var1) {
      ArrayList var2 = new ArrayList(this.keys.size());

      for (JsonWebKey var4 : this.keys) {
         Map var5 = var4.toParams(var1);
         var2.add(var5);
      }

      LinkedHashMap var6 = new LinkedHashMap();
      var6.put("keys", var2);
      return JsonUtil.toJson(var6);
   }
}
