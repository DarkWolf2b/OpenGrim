package org.jose4j.keys.resolvers;

import java.security.Key;
import java.util.List;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UnresolvableKeyException;

public class EmbeddedJwkVerificationKeyResolver implements VerificationKeyResolver {
   private PublicJsonWebKey jwk;

   public EmbeddedJwkVerificationKeyResolver() {
   }

   @Override
   public Key resolveKey(JsonWebSignature var1, List<JsonWebStructure> var2) throws UnresolvableKeyException {
      try {
         this.jwk = var1.getJwkHeader();
      } catch (JoseException var4) {
         throw new UnresolvableKeyException("Problem processing jwk from JWS header (" + var4.getMessage() + ")", var4);
      }

      if (this.jwk == null) {
         throw new UnresolvableKeyException("No jwk in JWS header");
      } else {
         return this.jwk.getKey();
      }
   }

   public PublicJsonWebKey getJwk() {
      return this.jwk;
   }
}
