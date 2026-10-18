package org.jose4j.jwk;

import java.security.Key;
import java.util.Map;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.base64url.Base64Url;
import org.jose4j.lang.JoseException;

public class OctetSequenceJsonWebKey extends JsonWebKey {
   public static final String KEY_TYPE = "oct";
   public static final String KEY_VALUE_MEMBER_NAME = "k";
   private byte[] octetSequence;

   public byte[] getOctetSequence() {
      return this.octetSequence;
   }

   public OctetSequenceJsonWebKey(Key var1) {
      super(var1);
      this.octetSequence = var1.getEncoded();
   }

   public OctetSequenceJsonWebKey(Map<String, Object> var1) throws JoseException {
      super(var1);
      Base64Url var2 = new Base64Url();
      String var3 = getStringRequired(var1, "k");
      this.octetSequence = var2.base64UrlDecode(var3);
      String var4 = "AES";
      this.key = new SecretKeySpec(this.octetSequence, var4);
      this.removeFromOtherParams(new String[]{"k"});
   }

   private String getEncoded() {
      return Base64Url.encode(this.octetSequence);
   }

   @Override
   protected String produceThumbprintHashInput() {
      String var1 = "{\"k\":\"%s\",\"kty\":\"oct\"}";
      String var2 = this.getEncoded();
      return String.format(var1, var2);
   }

   @Override
   protected void fillTypeSpecificParams(Map<String, Object> var1, JsonWebKey.OutputControlLevel var2) {
      if (JsonWebKey.OutputControlLevel.INCLUDE_SYMMETRIC.compareTo(var2) >= 0) {
         var1.put("k", this.getEncoded());
      }
   }

   @Override
   public String getKeyType() {
      return "oct";
   }
}
