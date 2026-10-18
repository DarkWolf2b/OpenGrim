package org.jose4j.jws;

import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.interfaces.EdECPrivateKey;
import java.security.interfaces.EdECPublicKey;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.lang.InvalidKeyException;

public class EdDsaAlgorithm extends BaseSignatureAlgorithm {
   @Override
   public void validatePublicKey(PublicKey var1) throws InvalidKeyException {
      KeyValidationSupport.castKey(var1, EdECPublicKey.class);
   }

   @Override
   public void validatePrivateKey(PrivateKey var1) throws InvalidKeyException {
      KeyValidationSupport.castKey(var1, EdECPrivateKey.class);
   }

   public EdDsaAlgorithm() {
      super("EdDSA", "EdDSA", "OKP");
   }
}
