package org.jose4j.jwe;

import java.security.Key;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidKeyException;

public class AesKeyWrapManagementAlgorithm extends WrappingKeyManagementAlgorithm {
   int keyByteLength;

   @Override
   public boolean isAvailable() {
      int var1 = this.getKeyByteLength();
      String var2 = this.getJavaAlgorithm();

      try {
         Cipher.getInstance(var2);
         return CipherStrengthSupport.isAvailable(var2, var1);
      } catch (NoSuchPaddingException | NoSuchAlgorithmException var4) {
         this.log.debug("{} for {} is not available ({}).", new Object[]{var2, this.getAlgorithmIdentifier(), ExceptionHelp.toStringWithCauses(var4)});
         return false;
      }
   }

   int getKeyByteLength() {
      return this.keyByteLength;
   }

   public AesKeyWrapManagementAlgorithm(String var1, int var2) {
      super("AESWrap", var1);
      this.setKeyType("oct");
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.keyByteLength = var2;
   }

   void validateKey(Key var1) throws InvalidKeyException {
      KeyValidationSupport.validateAesWrappingKey(var1, this.getAlgorithmIdentifier(), this.getKeyByteLength());
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   AesKeyWrapManagementAlgorithm setUseGeneralProviderContext() {
      this.useSuppliedKeyProviderContext = false;
      return this;
   }

   public static class Aes128 extends AesKeyWrapManagementAlgorithm {
      public Aes128() {
         super("A128KW", 16);
      }
   }

   public static class Aes192 extends AesKeyWrapManagementAlgorithm {
      public Aes192() {
         super("A192KW", 24);
      }
   }

   public static class Aes256 extends AesKeyWrapManagementAlgorithm {
      public Aes256() {
         super("A256KW", 32);
      }
   }
}
