package org.jose4j.jwe;

import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.Mac;
import javax.crypto.spec.IvParameterSpec;
import org.jose4j.base64url.Base64Url;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwx.Headers;
import org.jose4j.keys.AesKey;
import org.jose4j.keys.HmacKey;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.IntegrityException;
import org.jose4j.lang.JoseException;
import org.jose4j.mac.MacUtil;

public class AesCbcHmacSha2ContentEncryptionAlgorithm extends AlgorithmInfo implements ContentEncryptionAlgorithm {
   public static final int IV_BYTE_LENGTH = 16;
   private final String hmacJavaAlgorithm;
   private final int tagTruncationLength;
   private final ContentEncryptionKeyDescriptor contentEncryptionKeyDescriptor;

   @Override
   public boolean isAvailable() {
      int var1 = this.getContentEncryptionKeyDescriptor().getContentEncryptionKeyByteLength();
      int var2 = var1 / 2;
      return CipherStrengthSupport.isAvailable(this.getJavaAlgorithm(), var2);
   }

   public AesCbcHmacSha2ContentEncryptionAlgorithm(String var1, int var2, String var3, int var4) {
      this.setAlgorithmIdentifier(var1);
      this.contentEncryptionKeyDescriptor = new ContentEncryptionKeyDescriptor(var2, "AES");
      this.hmacJavaAlgorithm = var3;
      this.tagTruncationLength = var4;
      this.setJavaAlgorithm("AES/CBC/PKCS5Padding");
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("AES");
   }

   @Override
   public byte[] decrypt(ContentEncryptionParts var1, byte[] var2, byte[] var3, Headers var4, ProviderContext var5) throws JoseException {
      String var6 = ContentEncryptionHelp.getCipherProvider(var4, var5);
      String var7 = ContentEncryptionHelp.getMacProvider(var4, var5);
      byte[] var8 = var1.getIv();
      byte[] var9 = var1.getCiphertext();
      byte[] var10 = var1.getAuthenticationTag();
      byte[] var11 = this.getAdditionalAuthenticatedDataLengthBytes(var2);
      byte[] var12 = ByteUtil.concat(var2, var8, var9, var11);
      HmacKey var13 = new HmacKey(ByteUtil.leftHalf(var3));
      Mac var14 = MacUtil.getInitializedMac(this.getHmacJavaAlgorithm(), var13, var7);
      byte[] var15 = var14.doFinal(var12);
      var15 = ByteUtil.subArray(var15, 0, this.getTagTruncationLength());
      boolean var16 = ByteUtil.secureEquals(var10, var15);
      if (!var16) {
         Base64Url var24 = new Base64Url();
         String var25 = var24.base64UrlEncode(var10);
         throw new IntegrityException("Authentication tag check failed. Message=" + var25);
      } else {
         AesKey var17 = new AesKey(ByteUtil.rightHalf(var3));
         Cipher var18 = CipherUtil.getCipher(this.getJavaAlgorithm(), var6);

         try {
            var18.init(2, var17, new IvParameterSpec(var8));
         } catch (InvalidKeyException var21) {
            throw new JoseException("Invalid key for " + this.getJavaAlgorithm(), var21);
         } catch (InvalidAlgorithmParameterException var22) {
            throw new JoseException(var22.toString(), var22);
         }

         try {
            return var18.doFinal(var9);
         } catch (BadPaddingException | IllegalBlockSizeException var20) {
            throw new JoseException(var20.toString(), var20);
         }
      }
   }

   @Override
   public ContentEncryptionParts encrypt(byte[] var1, byte[] var2, byte[] var3, Headers var4, byte[] var5, ProviderContext var6) throws JoseException {
      byte[] var7 = InitializationVectorHelp.iv(16, var5, var6.getSecureRandom());
      return this.encrypt(var1, var2, var3, var7, var4, var6);
   }

   ContentEncryptionParts encrypt(byte[] var1, byte[] var2, byte[] var3, byte[] var4, Headers var5, ProviderContext var6) throws JoseException {
      HmacKey var7 = new HmacKey(ByteUtil.leftHalf(var3));
      AesKey var8 = new AesKey(ByteUtil.rightHalf(var3));
      String var9 = ContentEncryptionHelp.getCipherProvider(var5, var6);
      Cipher var10 = CipherUtil.getCipher(this.getJavaAlgorithm(), var9);

      try {
         var10.init(1, var8, new IvParameterSpec(var4));
      } catch (InvalidKeyException var18) {
         throw new JoseException("Invalid key for " + this.getJavaAlgorithm(), var18);
      } catch (InvalidAlgorithmParameterException var19) {
         throw new JoseException(var19.toString(), var19);
      }

      byte[] var11;
      try {
         var11 = var10.doFinal(var1);
      } catch (BadPaddingException | IllegalBlockSizeException var17) {
         throw new JoseException(var17.toString(), var17);
      }

      String var12 = ContentEncryptionHelp.getMacProvider(var5, var6);
      Mac var13 = MacUtil.getInitializedMac(this.getHmacJavaAlgorithm(), var7, var12);
      byte[] var14 = this.getAdditionalAuthenticatedDataLengthBytes(var2);
      byte[] var15 = ByteUtil.concat(var2, var4, var11, var14);
      byte[] var16 = var13.doFinal(var15);
      var16 = ByteUtil.subArray(var16, 0, this.getTagTruncationLength());
      return new ContentEncryptionParts(var4, var11, var16);
   }

   private byte[] getAdditionalAuthenticatedDataLengthBytes(byte[] var1) {
      long var2 = ByteUtil.bitLength(var1);
      return ByteUtil.getBytes(var2);
   }

   public int getTagTruncationLength() {
      return this.tagTruncationLength;
   }

   public String getHmacJavaAlgorithm() {
      return this.hmacJavaAlgorithm;
   }

   @Override
   public ContentEncryptionKeyDescriptor getContentEncryptionKeyDescriptor() {
      return this.contentEncryptionKeyDescriptor;
   }

   public static class Aes128CbcHmacSha256 extends AesCbcHmacSha2ContentEncryptionAlgorithm implements ContentEncryptionAlgorithm {
      public Aes128CbcHmacSha256() {
         super("A128CBC-HS256", 32, "HmacSHA256", 16);
      }
   }

   public static class Aes192CbcHmacSha384 extends AesCbcHmacSha2ContentEncryptionAlgorithm implements ContentEncryptionAlgorithm {
      public Aes192CbcHmacSha384() {
         super("A192CBC-HS384", 48, "HmacSHA384", 24);
      }
   }

   public static class Aes256CbcHmacSha512 extends AesCbcHmacSha2ContentEncryptionAlgorithm implements ContentEncryptionAlgorithm {
      public Aes256CbcHmacSha512() {
         super("A256CBC-HS512", 64, "HmacSHA512", 32);
      }
   }
}
