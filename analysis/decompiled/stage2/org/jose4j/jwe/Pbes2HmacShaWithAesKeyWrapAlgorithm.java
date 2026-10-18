package org.jose4j.jwe;

import java.security.Key;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.base64url.Base64Url;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwe.kdf.PasswordBasedKeyDerivationFunction2;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.StringUtil;

public class Pbes2HmacShaWithAesKeyWrapAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   private static final byte[] ZERO_BYTE = new byte[]{0};
   private AesKeyWrapManagementAlgorithm keyWrap;
   private ContentEncryptionKeyDescriptor keyWrapKeyDescriptor;
   private PasswordBasedKeyDerivationFunction2 pbkdf2;
   private long defaultIterationCount = 65536L;
   private int defaultSaltByteLength = 12;
   private long maxIterationCount = 2499999L;

   @Override
   public boolean isAvailable() {
      return this.keyWrap.isAvailable();
   }

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      Key var6 = var1.getKey();
      CryptoPrimitive var7 = this.keyWrap.prepareForDecrypt(var6, var4, var5);
      return this.keyWrap.manageForDecrypt(var7, var2, var3, var4, var5);
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      Long var4 = var2.getLongHeaderValue("p2c");
      if (var4 > this.maxIterationCount) {
         throw new JoseException(
            "PBES2 iteration count (p2c=" + var4 + ") cannot be more than " + this.maxIterationCount + " to avoid excessive resource utilization."
         );
      } else {
         String var5 = var2.getStringHeaderValue("p2s");
         Base64Url var6 = new Base64Url();
         byte[] var7 = var6.base64UrlDecode(var5);
         Key var8 = this.deriveKey(var1, var4, var7, var3);
         return new CryptoPrimitive(var8);
      }
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      Key var6 = this.deriveForEncrypt(var1, var3, var5);
      return this.keyWrap.manageForEncrypt(var6, var2, var3, var4, var5);
   }

   protected Key deriveForEncrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      Long var4 = var2.getLongHeaderValue("p2c");
      if (var4 == null) {
         var4 = this.defaultIterationCount;
         var2.setObjectHeaderValue("p2c", var4);
      }

      if (var4 < 1000L) {
         throw new JoseException("iteration count (p2c=" + var4 + ") cannot be less than 1000 (and should probably be considerably more)");
      } else {
         String var5 = var2.getStringHeaderValue("p2s");
         Base64Url var7 = new Base64Url();
         byte[] var6;
         if (var5 == null) {
            var6 = ByteUtil.randomBytes(this.defaultSaltByteLength, var3.getSecureRandom());
            var5 = var7.base64UrlEncode(var6);
            var2.setStringHeaderValue("p2s", var5);
         } else {
            var6 = var7.base64UrlDecode(var5);
         }

         if (var6.length < 8) {
            throw new JoseException("A p2s salt input value containing 8 or more octets MUST be used.");
         } else {
            return this.deriveKey(var1, var4, var6, var3);
         }
      }
   }

   public Pbes2HmacShaWithAesKeyWrapAlgorithm(String var1, String var2, AesKeyWrapManagementAlgorithm var3) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm("n/a");
      this.pbkdf2 = new PasswordBasedKeyDerivationFunction2(var2);
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("PBKDF2");
      this.keyWrap = var3;
      this.keyWrapKeyDescriptor = new ContentEncryptionKeyDescriptor(this.keyWrap.getKeyByteLength(), "AES");
   }

   public void validateKey(Key var1) throws InvalidKeyException {
      KeyValidationSupport.notNull(var1);
   }

   private Key deriveKey(Key var1, Long var2, byte[] var3, ProviderContext var4) throws JoseException {
      byte[] var5 = ByteUtil.concat(StringUtil.getBytesUtf8(this.getAlgorithmIdentifier()), ZERO_BYTE, var3);
      int var6 = this.keyWrapKeyDescriptor.getContentEncryptionKeyByteLength();
      String var7 = var4.getSuppliedKeyProviderContext().getMacProvider();
      byte[] var8 = this.pbkdf2.derive(var1.getEncoded(), var5, var2.intValue(), var6, var7);
      return new SecretKeySpec(var8, this.keyWrapKeyDescriptor.getContentEncryptionKeyAlgorithm());
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.validateKey(var1);
   }

   public long getMaxIterationCount() {
      return this.maxIterationCount;
   }

   public void setMaxIterationCount(long var1) {
      this.maxIterationCount = var1;
   }

   public long getDefaultIterationCount() {
      return this.defaultIterationCount;
   }

   public void setDefaultIterationCount(long var1) {
      this.defaultIterationCount = var1;
   }

   public int getDefaultSaltByteLength() {
      return this.defaultSaltByteLength;
   }

   public void setDefaultSaltByteLength(int var1) {
      this.defaultSaltByteLength = var1;
   }

   public static class HmacSha256Aes128 extends Pbes2HmacShaWithAesKeyWrapAlgorithm {
      public HmacSha256Aes128() {
         super("PBES2-HS256+A128KW", "HmacSHA256", new AesKeyWrapManagementAlgorithm.Aes128().setUseGeneralProviderContext());
      }
   }

   public static class HmacSha384Aes192 extends Pbes2HmacShaWithAesKeyWrapAlgorithm {
      public HmacSha384Aes192() {
         super("PBES2-HS384+A192KW", "HmacSHA384", new AesKeyWrapManagementAlgorithm.Aes192().setUseGeneralProviderContext());
      }
   }

   public static class HmacSha512Aes256 extends Pbes2HmacShaWithAesKeyWrapAlgorithm {
      public HmacSha512Aes256() {
         super("PBES2-HS512+A256KW", "HmacSHA512", new AesKeyWrapManagementAlgorithm.Aes256().setUseGeneralProviderContext());
      }
   }
}
