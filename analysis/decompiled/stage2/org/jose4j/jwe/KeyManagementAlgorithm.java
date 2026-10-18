package org.jose4j.jwe;

import java.security.Key;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.Algorithm;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.Headers;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public interface KeyManagementAlgorithm extends Algorithm {
   Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException;

   CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException;

   ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException;

   void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException;

   void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException;
}
