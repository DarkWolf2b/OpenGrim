package org.jose4j.jwe;

import java.security.Key;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.Headers;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class EcdhKeyAgreementWithAesKeyWrapAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   private AesKeyWrapManagementAlgorithm keyWrap;
   private ContentEncryptionKeyDescriptor keyWrapKeyDescriptor;
   private EcdhKeyAgreementAlgorithm ecdh;

   @Override
   public boolean isAvailable() {
      return this.ecdh.isAvailable() && this.keyWrap.isAvailable();
   }

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      Key var6 = this.ecdh.manageForDecrypt(var1, ByteUtil.EMPTY_BYTES, this.keyWrapKeyDescriptor, var4, var5);
      CryptoPrimitive var7 = this.keyWrap.prepareForDecrypt(var6, var4, var5);
      return this.keyWrap.manageForDecrypt(var7, var2, var3, var4, var5);
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      return this.ecdh.prepareForDecrypt(var1, var2, var3);
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      ContentEncryptionKeys var6 = this.ecdh.manageForEncrypt(var1, this.keyWrapKeyDescriptor, var3, (byte[])null, var5);
      String var7 = this.keyWrapKeyDescriptor.getContentEncryptionKeyAlgorithm();
      SecretKeySpec var8 = new SecretKeySpec(var6.getContentEncryptionKey(), var7);
      return this.keyWrap.manageForEncrypt(var8, var2, var3, var4, var5);
   }

   public EcdhKeyAgreementWithAesKeyWrapAlgorithm(String var1, AesKeyWrapManagementAlgorithm var2) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm("N/A");
      this.setKeyType("EC");
      this.setKeyPersuasion(KeyPersuasion.ASYMMETRIC);
      this.keyWrap = var2;
      this.ecdh = new EcdhKeyAgreementAlgorithm("alg");
      this.keyWrapKeyDescriptor = new ContentEncryptionKeyDescriptor(var2.getKeyByteLength(), "AES");
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.ecdh.validateEncryptionKey(var1, var2);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      this.ecdh.validateDecryptionKey(var1, var2);
   }

   public static class EcdhKeyAgreementWithAes128KeyWrapAlgorithm extends EcdhKeyAgreementWithAesKeyWrapAlgorithm implements KeyManagementAlgorithm {
      public EcdhKeyAgreementWithAes128KeyWrapAlgorithm() {
         super("ECDH-ES+A128KW", new AesKeyWrapManagementAlgorithm.Aes128().setUseGeneralProviderContext());
      }
   }

   public static class EcdhKeyAgreementWithAes192KeyWrapAlgorithm extends EcdhKeyAgreementWithAesKeyWrapAlgorithm implements KeyManagementAlgorithm {
      public EcdhKeyAgreementWithAes192KeyWrapAlgorithm() {
         super("ECDH-ES+A192KW", new AesKeyWrapManagementAlgorithm.Aes192().setUseGeneralProviderContext());
      }
   }

   public static class EcdhKeyAgreementWithAes256KeyWrapAlgorithm extends EcdhKeyAgreementWithAesKeyWrapAlgorithm implements KeyManagementAlgorithm {
      public EcdhKeyAgreementWithAes256KeyWrapAlgorithm() {
         super("ECDH-ES+A256KW", new AesKeyWrapManagementAlgorithm.Aes256().setUseGeneralProviderContext());
      }
   }
}
