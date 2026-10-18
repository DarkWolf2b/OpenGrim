package org.jose4j.jwe;

import java.security.Key;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class DirectKeyManagementAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   @Override
   public boolean isAvailable() {
      return true;
   }

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      Key var6 = var1.getKey();
      if (var2.length != 0) {
         throw new InvalidKeyException(
            "An empty octet sequence is to be used as the JWE Encrypted Key value when utilizing direct encryption but this JWE has "
               + var2.length
               + " octets in the encrypted key part."
         );
      } else {
         return var6;
      }
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) {
      return new CryptoPrimitive(var1);
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      KeyValidationSupport.cekNotAllowed(var4, this.getAlgorithmIdentifier());
      byte[] var6 = var1.getEncoded();
      return new ContentEncryptionKeys(var6, ByteUtil.EMPTY_BYTES);
   }

   public DirectKeyManagementAlgorithm() {
      this.setAlgorithmIdentifier("dir");
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("oct");
   }

   private void validateKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      KeyValidationSupport.notNull(var1);
      if (var1.getEncoded() != null) {
         int var3 = var1.getEncoded().length;
         int var4 = var2.getContentEncryptionKeyDescriptor().getContentEncryptionKeyByteLength();
         if (var4 != var3) {
            throw new InvalidKeyException(
               "Invalid key for "
                  + this.getAlgorithmIdentifier()
                  + " with "
                  + var2.getAlgorithmIdentifier()
                  + ", expected a "
                  + ByteUtil.bitLength(var4)
                  + " bit key but a "
                  + ByteUtil.bitLength(var3)
                  + " bit key was provided."
            );
         }
      }
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1, var2);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1, var2);
   }
}
