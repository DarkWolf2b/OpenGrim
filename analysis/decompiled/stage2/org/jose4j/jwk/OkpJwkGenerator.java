package org.jose4j.jwk;

import java.security.KeyPair;
import java.security.SecureRandom;
import org.jose4j.keys.OctetKeyPairUtil;
import org.jose4j.lang.JoseException;

public class OkpJwkGenerator {
   public OkpJwkGenerator() {
   }

   public static OctetKeyPairJsonWebKey generateJwk(String var0) throws JoseException {
      return generateJwk(var0, null, null);
   }

   public static OctetKeyPairJsonWebKey generateJwk(String var0, String var1, SecureRandom var2) throws JoseException {
      OctetKeyPairUtil var3 = OctetKeyPairUtil.getOctetKeyPairUtil(var0, var1, var2);
      if (var3 == null) {
         throw new IllegalArgumentException("Cannot create OKP JWK. The subtype/crv \"" + var0 + "\" is unknown or unsupported.");
      } else {
         KeyPair var4 = var3.generateKeyPair(var0);
         OctetKeyPairJsonWebKey var5 = (OctetKeyPairJsonWebKey)PublicJsonWebKey.Factory.newPublicJwk(var4.getPublic());
         var5.setPrivateKey(var4.getPrivate());
         return var5;
      }
   }
}
