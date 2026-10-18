package org.jose4j.jws;

import java.security.InvalidAlgorithmParameterException;
import java.security.Key;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.Signature;
import java.security.SignatureException;
import java.security.spec.AlgorithmParameterSpec;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public abstract class BaseSignatureAlgorithm extends AlgorithmInfo implements JsonWebSignatureAlgorithm {
   private final Logger log = LoggerFactory.getLogger(this.getClass());
   private AlgorithmParameterSpec algorithmParameterSpec;

   @Override
   public boolean isAvailable() {
      try {
         Signature var1 = this.getSignature(new ProviderContext());
         return var1 != null;
      } catch (Exception var2) {
         this.log
            .debug(
               this.getAlgorithmIdentifier()
                  + " via "
                  + this.getJavaAlgorithm()
                  + " is NOT available from the underlying JCE ("
                  + ExceptionHelp.toStringWithCauses(var2)
                  + ")."
            );
         return false;
      }
   }

   public abstract void validatePublicKey(PublicKey var1) throws InvalidKeyException;

   @Override
   public void validateSigningKey(Key var1) throws InvalidKeyException {
      this.checkForNullKey(var1);

      try {
         this.validatePrivateKey((PrivateKey)var1);
      } catch (ClassCastException var3) {
         throw new InvalidKeyException(
            this.getBadKeyMessage(var1)
               + "(not a private key or is the wrong type of key) for "
               + this.getJavaAlgorithm()
               + " / "
               + this.getAlgorithmIdentifier()
               + " "
               + var3
         );
      }
   }

   @Override
   public CryptoPrimitive prepareForSign(Key var1, ProviderContext var2) throws JoseException {
      Signature var3 = this.getSignature(var2);
      this.initForSign(var3, var1, var2);
      return new CryptoPrimitive(var3);
   }

   private void initForVerify(Signature var1, Key var2) throws InvalidKeyException {
      try {
         PublicKey var3 = (PublicKey)var2;
         var1.initVerify(var3);
      } catch (java.security.InvalidKeyException var4) {
         throw new InvalidKeyException(this.getBadKeyMessage(var2) + "for " + this.getJavaAlgorithm(), var4);
      }
   }

   private void initForSign(Signature var1, Key var2, ProviderContext var3) throws InvalidKeyException {
      try {
         PrivateKey var4 = (PrivateKey)var2;
         SecureRandom var5 = var3.getSecureRandom();
         if (var5 == null) {
            var1.initSign(var4);
         } else {
            var1.initSign(var4, var5);
         }
      } catch (java.security.InvalidKeyException var6) {
         throw new InvalidKeyException(this.getBadKeyMessage(var2) + "for " + this.getJavaAlgorithm(), var6);
      }
   }

   private void checkForNullKey(Key var1) throws InvalidKeyException {
      if (var1 == null) {
         throw new InvalidKeyException("Key cannot be null");
      }
   }

   public abstract void validatePrivateKey(PrivateKey var1) throws InvalidKeyException;

   private String getBadKeyMessage(Key var1) {
      String var2 = var1 == null ? "key is null" : "algorithm=" + var1.getAlgorithm();
      return "The given key (" + var2 + ") is not valid ";
   }

   public BaseSignatureAlgorithm(String var1, String var2, String var3) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm(var2);
      this.setKeyPersuasion(KeyPersuasion.ASYMMETRIC);
      this.setKeyType(var3);
   }

   private Signature getSignature(ProviderContext var1) throws JoseException {
      ProviderContext.Context var2 = var1.getSuppliedKeyProviderContext();
      String var3 = var2.getSignatureProvider();
      String var4 = this.getJavaAlgorithm();
      ProviderContext.SignatureAlgorithmOverride var5 = var2.getSignatureAlgorithmOverride();
      if (var5 != null && var5.getAlgorithmName() != null) {
         var4 = var5.getAlgorithmName();
      }

      try {
         Signature var6 = var3 == null ? Signature.getInstance(var4) : Signature.getInstance(var4, var3);
         AlgorithmParameterSpec var7 = this.algorithmParameterSpec;
         if (var5 != null) {
            var7 = var5.getAlgorithmParameterSpec();
         }

         if (var7 != null) {
            try {
               var6.setParameter(var7);
            } catch (UnsupportedOperationException var9) {
               if (this.log.isDebugEnabled()) {
                  this.log
                     .debug(
                        "Unable to set algorithm parameter spec on Signature (java algorithm name: "
                           + var4
                           + ") so ignoring the UnsupportedOperationException and relying on the default parameters.",
                        var9
                     );
               }
            }
         }

         return var6;
      } catch (NoSuchAlgorithmException var10) {
         throw new JoseException("Unable to get an implementation of algorithm name: " + var4, var10);
      } catch (InvalidAlgorithmParameterException var11) {
         throw new JoseException("Invalid algorithm parameter (" + this.algorithmParameterSpec + ") for: " + var4, var11);
      } catch (NoSuchProviderException var12) {
         throw new JoseException("Unable to get an implementation of " + var4 + " for provider " + var3, var12);
      }
   }

   @Override
   public byte[] sign(CryptoPrimitive var1, byte[] var2) throws JoseException {
      Signature var3 = var1.getSignature();

      try {
         var3.update(var2);
         return var3.sign();
      } catch (SignatureException var5) {
         throw new JoseException("Problem creating signature.", var5);
      }
   }

   @Override
   public void validateVerificationKey(Key var1) throws InvalidKeyException {
      this.checkForNullKey(var1);

      try {
         this.validatePublicKey((PublicKey)var1);
      } catch (ClassCastException var3) {
         throw new InvalidKeyException(
            this.getBadKeyMessage(var1)
               + "(not a public key or is the wrong type of key) for "
               + this.getJavaAlgorithm()
               + "/"
               + this.getAlgorithmIdentifier()
               + " "
               + var3
         );
      }
   }

   protected void setAlgorithmParameterSpec(AlgorithmParameterSpec var1) {
      this.algorithmParameterSpec = var1;
   }

   @Override
   public boolean verifySignature(byte[] var1, Key var2, byte[] var3, ProviderContext var4) throws JoseException {
      Signature var5 = this.getSignature(var4);
      this.initForVerify(var5, var2);

      try {
         var5.update(var3);
         return var5.verify(var1);
      } catch (SignatureException var7) {
         if (this.log.isDebugEnabled()) {
            this.log.debug("Problem verifying " + this.getAlgorithmIdentifier() + " signature: " + ExceptionHelp.toStringWithCauses(var7));
         }

         return false;
      }
   }
}
