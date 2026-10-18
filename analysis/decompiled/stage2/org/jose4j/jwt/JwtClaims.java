package org.jose4j.jwt;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.Map.Entry;
import org.jose4j.base64url.Base64Url;
import org.jose4j.json.JsonUtil;
import org.jose4j.jwt.consumer.ErrorCodeValidator;
import org.jose4j.jwt.consumer.InvalidJwtException;
import org.jose4j.jwt.consumer.JwtContext;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.JoseException;

public class JwtClaims {
   private Map<String, Object> claimsMap;
   private String rawJson;

   public JwtClaims() {
      this.claimsMap = new LinkedHashMap<>();
   }

   private JwtClaims(String var1, JwtContext var2) throws InvalidJwtException {
      this.rawJson = var1;

      try {
         Map var3 = JsonUtil.parseJson(var1);
         this.claimsMap = new LinkedHashMap<>(var3);
      } catch (JoseException var6) {
         String var4 = "Unable to parse what was expected to be the JWT Claim Set JSON: \"" + var1 + "\"";
         ErrorCodeValidator.Error var5 = new ErrorCodeValidator.Error(16, "Invalid JSON.");
         throw new InvalidJwtException(var4, var5, var6, var2);
      }
   }

   public static JwtClaims parse(String var0, JwtContext var1) throws InvalidJwtException {
      return new JwtClaims(var0, var1);
   }

   public static JwtClaims parse(String var0) throws InvalidJwtException {
      return new JwtClaims(var0, null);
   }

   public String getIssuer() throws MalformedClaimException {
      return this.getClaimValue("iss", String.class);
   }

   public void setIssuer(String var1) {
      this.claimsMap.put("iss", var1);
   }

   public String getSubject() throws MalformedClaimException {
      return this.getClaimValue("sub", String.class);
   }

   public void setSubject(String var1) {
      this.claimsMap.put("sub", var1);
   }

   public void setAudience(String var1) {
      this.claimsMap.put("aud", var1);
   }

   public void setAudience(String... var1) {
      this.setAudience(Arrays.asList(var1));
   }

   public void setAudience(List<String> var1) {
      if (var1.size() == 1) {
         this.setAudience((String)var1.get(0));
      } else {
         this.claimsMap.put("aud", var1);
      }
   }

   public boolean hasAudience() {
      return this.hasClaim("aud");
   }

   public List<String> getAudience() throws MalformedClaimException {
      Object var1 = this.claimsMap.get("aud");
      if (var1 instanceof String) {
         return Collections.singletonList((String)var1);
      } else if (!(var1 instanceof List) && var1 != null) {
         throw new MalformedClaimException("The value of the 'aud' claim is not an array of strings or a single string value.");
      } else {
         List var2 = (List)var1;
         String var3 = "aud";
         return this.toStringList(var2, var3);
      }
   }

   private List<String> toStringList(List var1, String var2) throws MalformedClaimException {
      if (var1 == null) {
         return Collections.emptyList();
      } else {
         ArrayList var3 = new ArrayList();

         for (Object var5 : var1) {
            try {
               var3.add((String)var5);
            } catch (ClassCastException var7) {
               throw new MalformedClaimException(
                  "The array value of the '" + var2 + "' claim contains non string values " + this.classCastMsg(var7, var5), var7
               );
            }
         }

         return var3;
      }
   }

   public NumericDate getExpirationTime() throws MalformedClaimException {
      return this.getNumericDateClaimValue("exp");
   }

   public void setExpirationTime(NumericDate var1) {
      this.setNumericDateClaim("exp", var1);
   }

   public void setExpirationTimeMinutesInTheFuture(float var1) {
      this.setExpirationTime(this.offsetFromNow(var1));
   }

   private NumericDate offsetFromNow(float var1) {
      NumericDate var2 = NumericDate.now();
      float var3 = var1 * 60.0F;
      var2.addSeconds((long)var3);
      return var2;
   }

   public NumericDate getNotBefore() throws MalformedClaimException {
      return this.getNumericDateClaimValue("nbf");
   }

   public void setNotBefore(NumericDate var1) {
      this.setNumericDateClaim("nbf", var1);
   }

   public void setNotBeforeMinutesInThePast(float var1) {
      this.setNotBefore(this.offsetFromNow(-1.0F * var1));
   }

   public NumericDate getIssuedAt() throws MalformedClaimException {
      return this.getNumericDateClaimValue("iat");
   }

   public void setIssuedAt(NumericDate var1) {
      this.setNumericDateClaim("iat", var1);
   }

   public void setIssuedAtToNow() {
      this.setIssuedAt(NumericDate.now());
   }

   public String getJwtId() throws MalformedClaimException {
      return this.getClaimValue("jti", String.class);
   }

   public void setJwtId(String var1) {
      this.claimsMap.put("jti", var1);
   }

   public void setGeneratedJwtId(int var1) {
      byte[] var2 = ByteUtil.randomBytes(var1);
      String var3 = Base64Url.encode(var2);
      this.setJwtId(var3);
   }

   public void setGeneratedJwtId() {
      this.setGeneratedJwtId(16);
   }

   public void unsetClaim(String var1) {
      this.claimsMap.remove(var1);
   }

   public <T> T getClaimValue(String var1, Class<T> var2) throws MalformedClaimException {
      Object var3 = this.claimsMap.get(var1);

      try {
         return (T)var2.cast(var3);
      } catch (ClassCastException var5) {
         throw new MalformedClaimException("The value of the '" + var1 + "' claim is not the expected type " + this.classCastMsg(var5, var3), var5);
      }
   }

   public Object getClaimValue(String var1) {
      return this.claimsMap.get(var1);
   }

   public boolean hasClaim(String var1) {
      return this.getClaimValue(var1) != null;
   }

   private String classCastMsg(ClassCastException var1, Object var2) {
      return "(" + var2 + " - " + var1.getMessage() + ")";
   }

   public NumericDate getNumericDateClaimValue(String var1) throws MalformedClaimException {
      Number var2 = this.getClaimValue(var1, Number.class);
      if (var2 instanceof BigInteger) {
         throw new MalformedClaimException(var2 + " is unreasonable for a NumericDate");
      } else {
         return var2 != null ? NumericDate.fromSeconds(var2.longValue()) : null;
      }
   }

   public String getStringClaimValue(String var1) throws MalformedClaimException {
      return this.getClaimValue(var1, String.class);
   }

   public String getClaimValueAsString(String var1) {
      Object var2 = this.getClaimValue(var1);
      return var2 != null ? var2.toString() : null;
   }

   public List<String> getStringListClaimValue(String var1) throws MalformedClaimException {
      List var2 = this.getClaimValue(var1, List.class);
      return this.toStringList(var2, var1);
   }

   public void setNumericDateClaim(String var1, NumericDate var2) {
      this.claimsMap.put(var1, var2 != null ? var2.getValue() : null);
   }

   public void setStringClaim(String var1, String var2) {
      this.claimsMap.put(var1, var2);
   }

   public void setStringListClaim(String var1, List<String> var2) {
      this.claimsMap.put(var1, var2);
   }

   public void setStringListClaim(String var1, String... var2) {
      this.claimsMap.put(var1, Arrays.asList(var2));
   }

   public void setClaim(String var1, Object var2) {
      this.claimsMap.put(var1, var2);
   }

   public boolean isClaimValueOfType(String var1, Class var2) {
      try {
         return this.getClaimValue(var1, var2) != null;
      } catch (MalformedClaimException var4) {
         return false;
      }
   }

   public boolean isClaimValueString(String var1) {
      return this.isClaimValueOfType(var1, String.class);
   }

   public boolean isClaimValueStringList(String var1) {
      try {
         return this.hasClaim(var1) && this.getStringListClaimValue(var1) != null;
      } catch (MalformedClaimException var3) {
         return false;
      }
   }

   public Map<String, List<Object>> flattenClaims() {
      return this.flattenClaims(null);
   }

   public Map<String, List<Object>> flattenClaims(Set<String> var1) {
      var1 = var1 == null ? Collections.emptySet() : var1;
      LinkedHashMap var2 = new LinkedHashMap();

      for (Entry var4 : this.claimsMap.entrySet()) {
         String var5 = (String)var4.getKey();
         if (!var1.contains(var5)) {
            this.dfs(null, var5, var4.getValue(), var2);
         }
      }

      return var2;
   }

   private void dfs(String var1, String var2, Object var3, Map<String, List<Object>> var4) {
      String var5 = (var1 == null ? "" : var1 + ".") + var2;
      if (var3 instanceof List) {
         ArrayList var6 = new ArrayList();

         for (Object var8 : (List)var3) {
            if (var8 instanceof Map) {
               Map var9 = (Map)var8;

               for (Entry var11 : var9.entrySet()) {
                  this.dfs(var5, var11.getKey().toString(), var11.getValue(), var4);
               }
            } else {
               var6.add(var8);
            }
         }

         var4.put(var5, var6);
      } else if (var3 instanceof Map) {
         Map var12 = (Map)var3;

         for (Entry var14 : var12.entrySet()) {
            this.dfs(var5, var14.getKey().toString(), var14.getValue(), var4);
         }
      } else {
         var4.put(var5, Collections.singletonList(var3));
      }
   }

   public Map<String, Object> getClaimsMap(Set<String> var1) {
      var1 = var1 != null ? var1 : Collections.emptySet();
      LinkedHashMap var2 = new LinkedHashMap<>(this.claimsMap);

      for (String var4 : var1) {
         var2.remove(var4);
      }

      return var2;
   }

   public Map<String, Object> getClaimsMap() {
      return this.getClaimsMap(null);
   }

   public Collection<String> getClaimNames(Set<String> var1) {
      return this.getClaimsMap(var1).keySet();
   }

   public Collection<String> getClaimNames() {
      return this.getClaimNames(null);
   }

   public String toJson() {
      return JsonUtil.toJson(this.claimsMap);
   }

   public String getRawJson() {
      return this.rawJson;
   }

   @Override
   public String toString() {
      return "JWT Claims Set:" + this.claimsMap;
   }
}
