package org.jose4j.jca;

import java.security.SecureRandom;
import java.security.spec.AlgorithmParameterSpec;

public class ProviderContext {
   private SecureRandom secureRandom;
   private ProviderContext.Context suppliedKeyProviderContext = new ProviderContext.Context();
   private ProviderContext.Context generalProviderContext = new ProviderContext.Context();

   public SecureRandom getSecureRandom() {
      return this.secureRandom;
   }

   public void setSecureRandom(SecureRandom var1) {
      this.secureRandom = var1;
   }

   public ProviderContext() {
   }

   public ProviderContext.Context getGeneralProviderContext() {
      return this.generalProviderContext;
   }

   public ProviderContext.Context getSuppliedKeyProviderContext() {
      return this.suppliedKeyProviderContext;
   }

   public class Context {
      private String generalProvider;
      private String keyPairGeneratorProvider;
      private String keyAgreementProvider;
      private String cipherProvider;
      private ProviderContext.KeyDecipherMode keyDecipherModeOverride;
      private String signatureProvider;
      private ProviderContext.SignatureAlgorithmOverride signatureAlgorithmOverride;
      private String macProvider;
      private String messageDigestProvider;
      private String keyFactoryProvider;

      public String getGeneralProvider() {
         return this.generalProvider;
      }

      public String getMacProvider() {
         return this.select(this.macProvider);
      }

      public void setMacProvider(String var1) {
         this.macProvider = var1;
      }

      public void setCipherProvider(String var1) {
         this.cipherProvider = var1;
      }

      public void setGeneralProvider(String var1) {
         this.generalProvider = var1;
      }

      public String getCipherProvider() {
         return this.select(this.cipherProvider);
      }

      public Context() {
      }

      private String select(String var1) {
         return var1 == null ? this.generalProvider : var1;
      }

      public ProviderContext.KeyDecipherMode getKeyDecipherModeOverride() {
         return this.keyDecipherModeOverride;
      }

      public void setKeyDecipherModeOverride(ProviderContext.KeyDecipherMode var1) {
         this.keyDecipherModeOverride = var1;
      }

      public String getKeyFactoryProvider() {
         return this.select(this.keyFactoryProvider);
      }

      public void setKeyFactoryProvider(String var1) {
         this.keyFactoryProvider = var1;
      }

      public void setSignatureProvider(String var1) {
         this.signatureProvider = var1;
      }

      public String getSignatureProvider() {
         return this.select(this.signatureProvider);
      }

      public String getKeyAgreementProvider() {
         return this.select(this.keyAgreementProvider);
      }

      public String getMessageDigestProvider() {
         return this.select(this.messageDigestProvider);
      }

      public void setKeyAgreementProvider(String var1) {
         this.keyAgreementProvider = var1;
      }

      public void setMessageDigestProvider(String var1) {
         this.messageDigestProvider = var1;
      }

      public void setSignatureAlgorithmOverride(ProviderContext.SignatureAlgorithmOverride var1) {
         this.signatureAlgorithmOverride = var1;
      }

      public void setKeyPairGeneratorProvider(String var1) {
         this.keyPairGeneratorProvider = var1;
      }

      public ProviderContext.SignatureAlgorithmOverride getSignatureAlgorithmOverride() {
         return this.signatureAlgorithmOverride;
      }

      public String getKeyPairGeneratorProvider() {
         return this.select(this.keyPairGeneratorProvider);
      }
   }

   public static enum KeyDecipherMode {
      UNWRAP,
      DECRYPT;

      private KeyDecipherMode() {
      }
   }

   public static class SignatureAlgorithmOverride {
      private String algorithmName;
      private AlgorithmParameterSpec AlgorithmParameterSpec;

      public SignatureAlgorithmOverride(String var1, AlgorithmParameterSpec var2) {
         this.algorithmName = var1;
         this.AlgorithmParameterSpec = var2;
      }

      public String getAlgorithmName() {
         return this.algorithmName;
      }

      public AlgorithmParameterSpec getAlgorithmParameterSpec() {
         return this.AlgorithmParameterSpec;
      }
   }
}
