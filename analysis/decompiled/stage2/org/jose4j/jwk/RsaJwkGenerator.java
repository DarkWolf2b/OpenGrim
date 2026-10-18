package org.jose4j.jwk;

import java.security.KeyPair;
import java.security.SecureRandom;
import org.jose4j.keys.RsaKeyUtil;
import org.jose4j.lang.JoseException;

public class RsaJwkGenerator {
   public RsaJwkGenerator() {
   }

   public static RsaJsonWebKey generateJwk(int var0) throws JoseException {
      return generateJwk(var0, null, null);
   }

   public static RsaJsonWebKey generateJwk(int var0, String var1, SecureRandom var2) throws JoseException {
      RsaKeyUtil var3 = new RsaKeyUtil(var1, var2);
      KeyPair var4 = var3.generateKeyPair(var0);
      RsaJsonWebKey var5 = (RsaJsonWebKey)PublicJsonWebKey.Factory.newPublicJwk(var4.getPublic());
      var5.setPrivateKey(var4.getPrivate());
      return var5;
   }
}
