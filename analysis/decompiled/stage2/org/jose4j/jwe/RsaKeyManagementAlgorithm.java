package org.jose4j.jwe;

import java.security.Key;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.spec.MGF1ParameterSpec;
import javax.crypto.spec.OAEPParameterSpec;
import javax.crypto.spec.SecretKeySpec;
import javax.crypto.spec.PSource.PSpecified;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwk.JsonWebKey;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class RsaKeyManagementAlgorithm extends WrappingKeyManagementAlgorithm implements KeyManagementAlgorithm {
   @Override
   public boolean isAvailable() {
      try {
         return CipherUtil.getCipher(this.getJavaAlgorithm(), null) != null;
      } catch (JoseException var2) {
         return false;
      }
   }

   public RsaKeyManagementAlgorithm(String var1, String var2) {
      super(var1, var2);
      this.setKeyType("RSA");
      this.setKeyPersuasion(KeyPersuasion.ASYMMETRIC);
   }

   @Override
   public void validateEncryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      PublicKey var3 = KeyValidationSupport.castKey(var1, PublicKey.class);
      KeyValidationSupport.checkRsaKeySize(var3);
   }

   @Override
   public void validateDecryptionKey(Key var1, ContentEncryptionAlgorithm var2) throws InvalidKeyException {
      PrivateKey var3 = KeyValidationSupport.castKey(var1, PrivateKey.class);
      KeyValidationSupport.checkRsaKeySize(var3);
   }

   public static class Rsa1_5 extends RsaKeyManagementAlgorithm implements KeyManagementAlgorithm {
      @Override
      public Key manageForDecrypt(CryptoPrimitive var1, byte[] var2, ContentEncryptionKeyDescriptor var3, Headers var4, ProviderContext var5) throws JoseException {
         String var6 = var3.getContentEncryptionKeyAlgorithm();
         int var7 = var3.getContentEncryptionKeyByteLength();
         SecretKeySpec var9 = new SecretKeySpec(ByteUtil.randomBytes(var7), var6);

         Object var8;
         try {
            var8 = this.unwrap(var1, var2, var5, var3);
            if (var8.getEncoded().length != var7) {
               var8 = var9;
            }
         } catch (Exception var12) {
            if (this.log.isDebugEnabled()) {
               String var11 = ExceptionHelp.toStringWithCausesAndAbbreviatedStack(var12, JsonWebEncryption.class);
               this.log.debug("Key unwrap/decrypt failed. Substituting a randomly generated CEK and proceeding. {}", var11);
            }

            var8 = var9;
         }

         return (Key)var8;
      }

      public Rsa1_5() {
         super("RSA/ECB/PKCS1Padding", "RSA1_5");
      }
   }

   public static class RsaOaep extends RsaKeyManagementAlgorithm implements KeyManagementAlgorithm {
      public RsaOaep() {
         super("RSA/ECB/OAEPWithSHA-1AndMGF1Padding", "RSA-OAEP");
      }
   }

   public static class RsaOaep256 extends RsaKeyManagementAlgorithm implements KeyManagementAlgorithm {
      @Override
      public boolean isAvailable() {
         try {
            JsonWebKey var1 = JsonWebKey.Factory.newJwk(
               "{\"kty\":\"RSA\",\"n\":\"sXchDaQebHnPiGvyDOAT4saGEUetSyo9MKLOoWFsueri23bOdgWp4Dy1WlUzewbgBHod5pcM9H95GQRV3JDXboIRROSBigeC5yjU1hGzHHyXss8UDprecbAYxknTcQkhslANGRUZmdTOQ5qTRsLAt6BTYuyvVRdhS8exSZEy_c4gs_7svlJJQ4H9_NxsiIoLwAEk7-Q3UXERGYw_75IDrGA84-lA_-Ct4eTlXHBIY2EaV7t7LjJaynVJCpkv4LKjTTAumiGUIuQhrNhZLuF_RJLqHpM2kgWFLU7-VTdL1VbC2tejvcI2BlMkEpk1BzBZI0KQB0GaDWFLN-aEAw3vRw\",\"e\":\"AQAB\"}"
            );
            ContentEncryptionKeyDescriptor var2 = new ContentEncryptionKeyDescriptor(16, "AES");
            ContentEncryptionKeys var3 = this.manageForEncrypt(var1.getKey(), var2, null, null, new ProviderContext());
            return var3 != null;
         } catch (JoseException var4) {
            this.log.debug(this.getAlgorithmIdentifier() + " is not available due to " + ExceptionHelp.toStringWithCauses(var4));
            return false;
         }
      }

      public RsaOaep256() {
         super("RSA/ECB/OAEPWithSHA-256AndMGF1Padding", "RSA-OAEP-256");
         this.setAlgorithmParameterSpec(new OAEPParameterSpec("SHA-256", "MGF1", MGF1ParameterSpec.SHA256, PSpecified.DEFAULT));
      }
   }
}
