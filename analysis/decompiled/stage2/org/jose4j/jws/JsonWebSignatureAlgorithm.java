package org.jose4j.jws;

import java.security.Key;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.Algorithm;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public interface JsonWebSignatureAlgorithm extends Algorithm {
   void validateSigningKey(Key var1) throws InvalidKeyException;

   CryptoPrimitive prepareForSign(Key var1, ProviderContext var2) throws JoseException;

   byte[] sign(CryptoPrimitive var1, byte[] var2) throws JoseException;

   void validateVerificationKey(Key var1) throws InvalidKeyException;

   boolean verifySignature(byte[] var1, Key var2, byte[] var3, ProviderContext var4) throws JoseException;
}
