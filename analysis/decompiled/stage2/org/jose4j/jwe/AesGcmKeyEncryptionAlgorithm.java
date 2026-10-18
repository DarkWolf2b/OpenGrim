package org.jose4j.jwe;

import java.security.Key;
import java.security.SecureRandom;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.base64url.Base64Url;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class AesGcmKeyEncryptionAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   private static final int TAG_BYTE_LENGTH = 16;
   private static final int IV_BYTE_LENGTH = 12;
   private SimpleAeadCipher simpleAeadCipher;
   private int keyByteLength;

   @Override
   public boolean isAvailable() {
      return this.simpleAeadCipher.isAvailable(this.log, this.keyByteLength, 12, this.getAlgorithmIdentifier());
   }

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      Base64Url var6 = new Base64Url();
      String var7 = var4.getStringHeaderValue("tag");
      byte[] var8 = var6.base64UrlDecode(var7);
      Cipher var9 = var1.getCipher();
      byte[] var10 = this.simpleAeadCipher.decrypt(var2, var8, null, var9);
      return new SecretKeySpec(var10, var3.getContentEncryptionKeyAlgorithm());
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      Base64Url var4 = new Base64Url();
      String var5 = var2.getStringHeaderValue("iv");
      byte[] var6 = var4.base64UrlDecode(var5);
      String var7 = var3.getSuppliedKeyProviderContext().getCipherProvider();
      Cipher var8 = this.simpleAeadCipher.getInitialisedCipher(var1, var6, 2, var7);
      return new CryptoPrimitive(var8);
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      SecureRandom var6 = var5.getSecureRandom();
      byte[] var7 = var4 == null ? ByteUtil.randomBytes(var2.getContentEncryptionKeyByteLength(), var6) : var4;
      Base64Url var8 = new Base64Url();
      String var9 = var3.getStringHeaderValue("iv");
      byte[] var10;
      if (var9 == null) {
         var10 = ByteUtil.randomBytes(12, var6);
         var9 = var8.base64UrlEncode(var10);
         var3.setStringHeaderValue("iv", var9);
      } else {
         var10 = var8.base64UrlDecode(var9);
      }

      String var11 = var5.getSuppliedKeyProviderContext().getCipherProvider();
      SimpleAeadCipher.CipherOutput var12 = this.simpleAeadCipher.encrypt(var1, var10, var7, null, var11);
      byte[] var13 = var12.getCiphertext();
      byte[] var14 = var12.getTag();
      String var15 = var8.base64UrlEncode(var14);
      var3.setStringHeaderValue("tag", var15);
      return new ContentEncryptionKeys(var7, var13);
   }

   public AesGcmKeyEncryptionAlgorithm(String var1, int var2) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm("AES/GCM/NoPadding");
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("oct");
      this.simpleAeadCipher = new SimpleAeadCipher(this.getJavaAlgorithm(), 16);
      this.keyByteLength = var2;
   }

   void validateKey(Key var1) throws InvalidKeyException {
      KeyValidationSupport.validateAesWrappingKey(var1, this.getAlgorithmIdentifier(), this.keyByteLength);
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   public static class Aes128Gcm extends AesGcmKeyEncryptionAlgorithm {
      public Aes128Gcm() {
         super("A128GCMKW", ByteUtil.byteLength(128));
      }
   }

   public static class Aes192Gcm extends AesGcmKeyEncryptionAlgorithm {
      public Aes192Gcm() {
         super("A192GCMKW", ByteUtil.byteLength(192));
      }
   }

   public static class Aes256Gcm extends AesGcmKeyEncryptionAlgorithm {
      public Aes256Gcm() {
         super("A256GCMKW", ByteUtil.byteLength(256));
      }
   }
}
