package org.jose4j.jwx;

import java.util.LinkedHashMap;
import java.util.Map;
import org.jose4j.base64url.Base64Url;
import org.jose4j.json.JsonUtil;
import org.jose4j.jwk.JsonWebKey;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.JsonHelp;

public class Headers {
   protected Base64Url base64url = new Base64Url();
   private Map<String, Object> headerMap = new LinkedHashMap<>();
   private String header;
   private String encodedHeader;

   public void setJwkHeaderValue(String var1, JsonWebKey var2) {
      Map var3 = var2.toParams(JsonWebKey.OutputControlLevel.PUBLIC_ONLY);
      this.setObjectHeaderValue(var1, var3);
   }

   public String getEncodedHeader() {
      if (this.encodedHeader == null) {
         String var1 = this.getFullHeaderAsJsonString();
         this.encodedHeader = this.base64url.base64UrlEncodeUtf8ByteRepresentation(var1);
      }

      return this.encodedHeader;
   }

   void setEncodedHeader(String var1) throws JoseException {
      this.encodedHeader = var1;
      this.header = this.base64url.base64UrlDecodeToUtf8String(this.encodedHeader);
      this.headerMap = JsonUtil.parseJson(this.header);
   }

   public Long getLongHeaderValue(String var1) {
      return JsonHelp.getLong(this.headerMap, var1);
   }

   @Deprecated
   public JsonWebKey getJwkHeaderValue(String var1) throws JoseException {
      return this.getPublicJwkHeaderValue(var1, null);
   }

   public Headers() {
   }

   public String getStringHeaderValue(String var1) {
      return JsonHelp.getString(this.headerMap, var1);
   }

   public String getFullHeaderAsJsonString() {
      if (this.header == null) {
         this.header = JsonUtil.toJson(this.headerMap);
      }

      return this.header;
   }

   public void setObjectHeaderValue(String var1, Object var2) {
      this.headerMap.put(var1, var2);
      this.header = null;
      this.encodedHeader = null;
   }

   public void setStringHeaderValue(String var1, String var2) {
      this.setObjectHeaderValue(var1, var2);
   }

   public Object getObjectHeaderValue(String var1) {
      return this.headerMap.get(var1);
   }

   public PublicJsonWebKey getPublicJwkHeaderValue(String var1, String var2) throws JoseException {
      Object var3 = this.getObjectHeaderValue(var1);
      Map var4 = (Map)var3;
      if (var4 != null) {
         PublicJsonWebKey var5 = PublicJsonWebKey.Factory.newPublicJwk(var4, var2);
         if (var5.getPrivateKey() != null) {
            throw new JoseException(var1 + " header contains a private key, which it most definitely should not.");
         } else {
            return var5;
         }
      } else {
         return null;
      }
   }

   public void setFullHeaderAsJsonString(String var1) throws JoseException {
      this.encodedHeader = null;
      this.header = var1;
      this.headerMap = JsonUtil.parseJson(var1);
   }
}
