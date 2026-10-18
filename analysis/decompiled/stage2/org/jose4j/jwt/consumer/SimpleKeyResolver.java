package org.jose4j.jwt.consumer;

import java.security.Key;
import java.util.List;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.keys.resolvers.DecryptionKeyResolver;
import org.jose4j.keys.resolvers.VerificationKeyResolver;

class SimpleKeyResolver implements VerificationKeyResolver, DecryptionKeyResolver {
   private Key key;

   SimpleKeyResolver(Key var1) {
      this.key = var1;
   }

   @Override
   public Key resolveKey(JsonWebEncryption var1, List<JsonWebStructure> var2) {
      return this.key;
   }

   @Override
   public Key resolveKey(JsonWebSignature var1, List<JsonWebStructure> var2) {
      return this.key;
   }
}
