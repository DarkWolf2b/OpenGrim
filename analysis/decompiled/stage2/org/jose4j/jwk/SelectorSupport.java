package org.jose4j.jwk;

import java.util.Map;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.JoseException;

class SelectorSupport {
   private static final String[] VERIFY_OPS = new String[]{KeyOperations.VERIFY};
   private static final String[] DECRYPT_OPS = new String[]{KeyOperations.DECRYPT, KeyOperations.DERIVE_KEY, KeyOperations.UNWRAP_KEY};

   SelectorSupport() {
   }

   public static SimpleJwkFilter filterForInboundSigned(JsonWebSignature var0) throws JoseException {
      SimpleJwkFilter var1 = commonFilterForInbound(var0);
      var1.setUse("sig", SimpleJwkFilter.OMITTED_OKAY);
      var1.setKeyOperations(VERIFY_OPS, SimpleJwkFilter.OMITTED_OKAY);
      return var1;
   }

   public static SimpleJwkFilter filterForInboundEncrypted(JsonWebEncryption var0) throws JoseException {
      SimpleJwkFilter var1 = commonFilterForInbound(var0);
      var1.setUse("enc", SimpleJwkFilter.OMITTED_OKAY);
      var1.setKeyOperations(DECRYPT_OPS, SimpleJwkFilter.OMITTED_OKAY);
      String var2 = var0.getAlgorithmNoConstraintCheck().getAlgorithmIdentifier();
      if (var2.startsWith("ECDH-ES")) {
         Object var3 = var0.getHeaders().getObjectHeaderValue("epk");
         if (var3 instanceof Map) {
            Map var4 = (Map)var3;
            Object var5 = var4.get("kty");
            if (var5 instanceof String) {
               var1.setKty((String)var5);
            }
         }
      }

      return var1;
   }

   private static SimpleJwkFilter commonFilterForInbound(JsonWebStructure var0) throws JoseException {
      SimpleJwkFilter var1 = new SimpleJwkFilter();
      String var2 = var0.getKeyIdHeaderValue();
      if (var2 != null) {
         var1.setKid(var2, SimpleJwkFilter.VALUE_REQUIRED);
      }

      String var3 = var0.getX509CertSha1ThumbprintHeaderValue();
      String var4 = var0.getX509CertSha256ThumbprintHeaderValue();
      var1.setAllowFallbackDeriveFromX5cForX5Thumbs(true);
      if (var3 != null) {
         var1.setX5t(var3, SimpleJwkFilter.OMITTED_OKAY);
      }

      if (var4 != null) {
         var1.setX5tS256(var4, SimpleJwkFilter.OMITTED_OKAY);
      }

      String var5 = var0.getAlgorithmNoConstraintCheck().getKeyType();
      var1.setKty(var5);
      return var1;
   }
}
