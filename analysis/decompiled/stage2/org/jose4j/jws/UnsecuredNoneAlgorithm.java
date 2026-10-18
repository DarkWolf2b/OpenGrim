package org.jose4j.jws;

import java.security.Key;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class UnsecuredNoneAlgorithm extends AlgorithmInfo implements JsonWebSignatureAlgorithm {
   private static final String CANNOT_HAVE_KEY_MESSAGE = "JWS Plaintext (alg=none) must not use a key.";

   @Override
   public boolean isAvailable() {
      return true;
   }

   @Override
   public void validateSigningKey(Key var1) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public CryptoPrimitive prepareForSign(Key var1, ProviderContext var2) throws JoseException {
      this.validateKey(var1);
      return null;
   }

   public UnsecuredNoneAlgorithm() {
      this.setAlgorithmIdentifier("none");
      this.setKeyPersuasion(KeyPersuasion.NONE);
   }

   @Override
   public byte[] sign(CryptoPrimitive var1, byte[] var2) {
      return ByteUtil.EMPTY_BYTES;
   }

   private void validateKey(Key var1) throws InvalidKeyException {
      if (var1 != null) {
         throw new InvalidKeyException("JWS Plaintext (alg=none) must not use a key.");
      }
   }

   @Override
   public void validateVerificationKey(Key var1) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public boolean verifySignature(byte[] var1, Key var2, byte[] var3, ProviderContext var4) throws JoseException {
      this.validateKey(var2);
      return var1.length == 0;
   }
}
