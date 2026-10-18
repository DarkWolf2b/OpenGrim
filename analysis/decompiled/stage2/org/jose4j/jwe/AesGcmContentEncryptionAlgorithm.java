package org.jose4j.jwe;

import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwx.Headers;
import org.jose4j.keys.AesKey;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.JoseException;

public class AesGcmContentEncryptionAlgorithm extends AlgorithmInfo implements ContentEncryptionAlgorithm {
   private static final int IV_BYTE_LENGTH = 12;
   private static final int TAG_BYTE_LENGTH = 16;
   private ContentEncryptionKeyDescriptor contentEncryptionKeyDescriptor;
   private SimpleAeadCipher simpleAeadCipher;

   @Override
   public boolean isAvailable() {
      int var1 = this.getContentEncryptionKeyDescriptor().getContentEncryptionKeyByteLength();
      return this.simpleAeadCipher.isAvailable(this.log, var1, 12, this.getAlgorithmIdentifier());
   }

   public AesGcmContentEncryptionAlgorithm(String var1, int var2) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm("AES/GCM/NoPadding");
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("AES");
      this.contentEncryptionKeyDescriptor = new ContentEncryptionKeyDescriptor(ByteUtil.byteLength(var2), "AES");
      this.simpleAeadCipher = new SimpleAeadCipher(this.getJavaAlgorithm(), 16);
   }

   @Override
   public byte[] decrypt(ContentEncryptionParts var1, byte[] var2, byte[] var3, Headers var4, ProviderContext var5) throws JoseException {
      byte[] var6 = var1.getIv();
      AesKey var7 = new AesKey(var3);
      byte[] var8 = var1.getCiphertext();
      byte[] var9 = var1.getAuthenticationTag();
      String var10 = ContentEncryptionHelp.getCipherProvider(var4, var5);
      return this.simpleAeadCipher.decrypt(var7, var6, var8, var9, var2, var10);
   }

   public ContentEncryptionParts encrypt(byte[] var1, byte[] var2, byte[] var3, byte[] var4, String var5) throws JoseException {
      AesKey var6 = new AesKey(var3);
      SimpleAeadCipher.CipherOutput var7 = this.simpleAeadCipher.encrypt(var6, var4, var1, var2, var5);
      return new ContentEncryptionParts(var4, var7.getCiphertext(), var7.getTag());
   }

   @Override
   public ContentEncryptionParts encrypt(byte[] var1, byte[] var2, byte[] var3, Headers var4, byte[] var5, ProviderContext var6) throws JoseException {
      byte[] var7 = InitializationVectorHelp.iv(12, var5, var6.getSecureRandom());
      String var8 = ContentEncryptionHelp.getCipherProvider(var4, var6);
      return this.encrypt(var1, var2, var3, var7, var8);
   }

   @Override
   public ContentEncryptionKeyDescriptor getContentEncryptionKeyDescriptor() {
      return this.contentEncryptionKeyDescriptor;
   }

   public static class Aes128Gcm extends AesGcmContentEncryptionAlgorithm {
      public Aes128Gcm() {
         super("A128GCM", 128);
      }
   }

   public static class Aes192Gcm extends AesGcmContentEncryptionAlgorithm {
      public Aes192Gcm() {
         super("A192GCM", 192);
      }
   }

   public static class Aes256Gcm extends AesGcmContentEncryptionAlgorithm {
      public Aes256Gcm() {
         super("A256GCM", 256);
      }
   }
}
