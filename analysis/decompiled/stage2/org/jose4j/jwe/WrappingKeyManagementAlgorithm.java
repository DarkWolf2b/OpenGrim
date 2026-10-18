package org.jose4j.jwe;

import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.Key;
import java.security.NoSuchAlgorithmException;
import java.security.spec.AlgorithmParameterSpec;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.spec.SecretKeySpec;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.Headers;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.IntegrityException;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public abstract class WrappingKeyManagementAlgorithm extends AlgorithmInfo implements KeyManagementAlgorithm {
   protected final Logger log = LoggerFactory.getLogger(this.getClass());
   private AlgorithmParameterSpec algorithmParameterSpec;
   protected boolean useSuppliedKeyProviderContext = true;

   @Override
   public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
      try {
         return this.unwrap(var1, var2, var5, var3);
      } catch (Exception var7) {
         throw new IntegrityException(this.getAlgorithmIdentifier() + " key unwrap/decrypt failed.", var7);
      }
   }

   @Override
   public CryptoPrimitive prepareForDecrypt(Key var1, Headers var2, ProviderContext var3) throws JoseException {
      ProviderContext.Context var4 = this.chooseContext(var3);
      String var5 = var4.getCipherProvider();
      Cipher var6 = CipherUtil.getCipher(this.getJavaAlgorithm(), var5);
      int var7 = var4.getKeyDecipherModeOverride() == ProviderContext.KeyDecipherMode.DECRYPT ? 2 : 4;

      try {
         this.initCipher(var6, var7, var1);
      } catch (InvalidKeyException var9) {
         throw new org.jose4j.lang.InvalidKeyException("Unable to initialize cipher (" + var6.getAlgorithm() + ") for key unwrap/decrypt - " + var9, var9);
      } catch (InvalidAlgorithmParameterException var10) {
         throw new JoseException("Unable to initialize cipher (" + var6.getAlgorithm() + ") for key unwrap/decrypt - " + var10, var10);
      }

      return new CryptoPrimitive(var6);
   }

   @Override
   public ContentEncryptionKeys manageForEncrypt(Key var1, ContentEncryptionKeyDescriptor var2, Headers var3, byte[] var4, ProviderContext var5) throws JoseException {
      byte[] var6 = var4 == null ? ByteUtil.randomBytes(var2.getContentEncryptionKeyByteLength()) : var4;
      return this.manageForEnc(var1, var2, var6, var5);
   }

   private ProviderContext.Context chooseContext(ProviderContext var1) {
      return this.useSuppliedKeyProviderContext ? var1.getSuppliedKeyProviderContext() : var1.getGeneralProviderContext();
   }

   protected ContentEncryptionKeys manageForEnc(Key var1, ContentEncryptionKeyDescriptor var2, byte[] var3, ProviderContext var4) throws JoseException {
      ProviderContext.Context var5 = this.chooseContext(var4);
      String var6 = var5.getCipherProvider();
      Cipher var7 = CipherUtil.getCipher(this.getJavaAlgorithm(), var6);

      try {
         this.initCipher(var7, 3, var1);
         String var8 = var2.getContentEncryptionKeyAlgorithm();
         byte[] var9 = var7.wrap(new SecretKeySpec(var3, var8));
         return new ContentEncryptionKeys(var3, var9);
      } catch (InvalidKeyException var10) {
         throw new org.jose4j.lang.InvalidKeyException("Unable to encrypt (" + var7.getAlgorithm() + ") the Content Encryption Key: " + var10, var10);
      } catch (InvalidAlgorithmParameterException | IllegalBlockSizeException var11) {
         throw new JoseException("Unable to encrypt (" + var7.getAlgorithm() + ") the Content Encryption Key: " + var11, var11);
      }
   }

   public WrappingKeyManagementAlgorithm(String var1, String var2) {
      this.setJavaAlgorithm(var1);
      this.setAlgorithmIdentifier(var2);
   }

   protected Key unwrap(CryptoPrimitive var1, byte[] var2, ProviderContext var3, ContentEncryptionKeyDescriptor var4) throws NoSuchAlgorithmException, InvalidKeyException, IllegalBlockSizeException, BadPaddingException {
      ProviderContext.Context var5 = this.chooseContext(var3);
      Cipher var6 = var1.getCipher();
      String var7 = var4.getContentEncryptionKeyAlgorithm();
      if (var5.getKeyDecipherModeOverride() == ProviderContext.KeyDecipherMode.DECRYPT) {
         byte[] var8 = var6.doFinal(var2);
         return new SecretKeySpec(var8, var7);
      } else {
         return var6.unwrap(var2, var7, 3);
      }
   }

   void initCipher(Cipher var1, int var2, Key var3) throws InvalidAlgorithmParameterException, InvalidKeyException {
      if (this.algorithmParameterSpec == null) {
         var1.init(var2, var3);
      } else {
         var1.init(var2, var3, this.algorithmParameterSpec);
      }
   }

   public void setAlgorithmParameterSpec(AlgorithmParameterSpec var1) {
      this.algorithmParameterSpec = var1;
   }
}
