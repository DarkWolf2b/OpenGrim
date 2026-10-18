package org.jose4j.keys.resolvers;

import java.security.Key;
import java.util.List;
import org.jose4j.jwk.JsonWebKey;
import org.jose4j.jwk.VerificationJwkSelector;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UnresolvableKeyException;

public class JwksVerificationKeyResolver implements VerificationKeyResolver {
   private List<JsonWebKey> jsonWebKeys;
   private VerificationJwkSelector selector = new VerificationJwkSelector();
   private boolean disambiguateWithVerifySignature;

   public JwksVerificationKeyResolver(List<JsonWebKey> var1) {
      this.jsonWebKeys = var1;
   }

   @Override
   public Key resolveKey(JsonWebSignature var1, List<JsonWebStructure> var2) throws UnresolvableKeyException {
      JsonWebKey var3;
      try {
         if (this.disambiguateWithVerifySignature) {
            var3 = this.selector.selectWithVerifySignatureDisambiguate(var1, this.jsonWebKeys);
         } else {
            var3 = this.selector.select(var1, this.jsonWebKeys);
         }
      } catch (JoseException var6) {
         StringBuilder var5 = new StringBuilder();
         var5.append("Unable to find a suitable verification key for JWS w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var5.append(" due to an unexpected exception (").append(var6).append(") selecting from keys: ").append(this.jsonWebKeys);
         throw new UnresolvableKeyException(var5.toString(), var6);
      }

      if (var3 == null) {
         StringBuilder var4 = new StringBuilder();
         var4.append("Unable to find a suitable verification key for JWS w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var4.append(" from JWKs ").append(this.jsonWebKeys);
         throw new UnresolvableKeyException(var4.toString());
      } else {
         return var3.getKey();
      }
   }

   public void setDisambiguateWithVerifySignature(boolean var1) {
      this.disambiguateWithVerifySignature = var1;
   }
}
