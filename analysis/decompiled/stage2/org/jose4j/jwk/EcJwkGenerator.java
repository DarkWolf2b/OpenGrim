package org.jose4j.jwk;

import java.security.KeyPair;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.spec.ECParameterSpec;
import org.jose4j.keys.EcKeyUtil;
import org.jose4j.lang.JoseException;

public class EcJwkGenerator {
   public EcJwkGenerator() {
   }

   public static EllipticCurveJsonWebKey generateJwk(ECParameterSpec var0) throws JoseException {
      return generateJwk(var0, null, null);
   }

   public static EllipticCurveJsonWebKey generateJwk(ECParameterSpec var0, String var1, SecureRandom var2) throws JoseException {
      EcKeyUtil var3 = new EcKeyUtil(var1, var2);
      KeyPair var4 = var3.generateKeyPair(var0);
      PublicKey var5 = var4.getPublic();
      EllipticCurveJsonWebKey var6 = (EllipticCurveJsonWebKey)PublicJsonWebKey.Factory.newPublicJwk(var5);
      var6.setPrivateKey(var4.getPrivate());
      return var6;
   }
}
