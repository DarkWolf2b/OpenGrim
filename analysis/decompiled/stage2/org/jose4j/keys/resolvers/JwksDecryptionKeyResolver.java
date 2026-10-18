package org.jose4j.keys.resolvers;

import java.security.Key;
import java.util.List;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.jwk.DecryptionJwkSelector;
import org.jose4j.jwk.JsonWebKey;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UnresolvableKeyException;

public class JwksDecryptionKeyResolver implements DecryptionKeyResolver {
   private final List<JsonWebKey> jsonWebKeys;
   private final DecryptionJwkSelector selector = new DecryptionJwkSelector();
   boolean disambiguateWithAttemptDecrypt;

   public JwksDecryptionKeyResolver(List<JsonWebKey> var1) {
      this.jsonWebKeys = var1;
   }

   @Override
   public Key resolveKey(JsonWebEncryption var1, List<JsonWebStructure> var2) throws UnresolvableKeyException {
      JsonWebKey var3;
      try {
         List var4 = this.selector.selectList(var1, this.jsonWebKeys);
         if (var4.isEmpty()) {
            var3 = null;
         } else if (var4.size() != 1 && this.disambiguateWithAttemptDecrypt) {
            var3 = this.selector.attemptDecryptDisambiguate(var1, var4);
            if (var3 == null) {
               StringBuilder var8 = new StringBuilder();
               var8.append("Unable to find a suitable key for JWE w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
               var8.append(" using attempted decryption to disambiguate from filtered candidate JWKs ").append(this.jsonWebKeys);
               throw new UnresolvableKeyException(var8.toString());
            }
         } else {
            var3 = (JsonWebKey)var4.get(0);
         }
      } catch (JoseException var6) {
         StringBuilder var5 = new StringBuilder();
         var5.append("Unable to find a suitable key for JWE w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var5.append(" due to an unexpected exception (").append(var6).append(") selecting from keys: ").append(this.jsonWebKeys);
         throw new UnresolvableKeyException(var5.toString(), var6);
      }

      if (var3 == null) {
         StringBuilder var7 = new StringBuilder();
         var7.append("Unable to find a suitable key for JWE w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var7.append(" from JWKs ").append(this.jsonWebKeys);
         throw new UnresolvableKeyException(var7.toString());
      } else {
         return (Key)(var3 instanceof PublicJsonWebKey ? ((PublicJsonWebKey)var3).getPrivateKey() : var3.getKey());
      }
   }

   public void setDisambiguateWithAttemptDecrypt(boolean var1) {
      this.disambiguateWithAttemptDecrypt = var1;
   }
}
