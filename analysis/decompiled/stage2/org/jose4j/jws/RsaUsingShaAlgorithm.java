package org.jose4j.jws;

import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.Security;
import java.security.spec.MGF1ParameterSpec;
import java.security.spec.PSSParameterSpec;
import java.util.Set;
import org.jose4j.jwx.KeyValidationSupport;
import org.jose4j.lang.InvalidKeyException;

public class RsaUsingShaAlgorithm extends BaseSignatureAlgorithm implements JsonWebSignatureAlgorithm {
   static final int TRAILER = 1;
   static final String MGF1 = "MGF1";
   public static final String RSASSA_PSS = "RSASSA-PSS";

   @Override
   public void validatePublicKey(PublicKey var1) throws InvalidKeyException {
      KeyValidationSupport.checkRsaKeySize(var1);
   }

   @Override
   public void validatePrivateKey(PrivateKey var1) throws InvalidKeyException {
      KeyValidationSupport.checkRsaKeySize(var1);
   }

   public RsaUsingShaAlgorithm(String var1, String var2) {
      super(var1, var2, "RSA");
   }

   static String choosePssAlgorithmName(String var0) {
      Set var1 = Security.getAlgorithms("Signature");
      boolean var2 = Boolean.getBoolean("org.jose4j.jws.use-legacy-rsapss-alg-names");
      return var1.contains("RSASSA-PSS") && !var2 ? "RSASSA-PSS" : var0;
   }

   public static class RsaPssSha256 extends RsaUsingShaAlgorithm {
      public RsaPssSha256() {
         super("PS256", choosePssAlgorithmName("SHA256withRSAandMGF1"));
         if (this.getJavaAlgorithm().equals("RSASSA-PSS")) {
            MGF1ParameterSpec var1 = MGF1ParameterSpec.SHA256;
            PSSParameterSpec var2 = new PSSParameterSpec(var1.getDigestAlgorithm(), "MGF1", var1, 32, 1);
            this.setAlgorithmParameterSpec(var2);
         }
      }
   }

   public static class RsaPssSha384 extends RsaUsingShaAlgorithm {
      public RsaPssSha384() {
         super("PS384", choosePssAlgorithmName("SHA384withRSAandMGF1"));
         if (this.getJavaAlgorithm().equals("RSASSA-PSS")) {
            MGF1ParameterSpec var1 = MGF1ParameterSpec.SHA384;
            PSSParameterSpec var2 = new PSSParameterSpec(var1.getDigestAlgorithm(), "MGF1", var1, 48, 1);
            this.setAlgorithmParameterSpec(var2);
         }
      }
   }

   public static class RsaPssSha512 extends RsaUsingShaAlgorithm {
      public RsaPssSha512() {
         super("PS512", choosePssAlgorithmName("SHA512withRSAandMGF1"));
         if (this.getJavaAlgorithm().equals("RSASSA-PSS")) {
            MGF1ParameterSpec var1 = MGF1ParameterSpec.SHA512;
            PSSParameterSpec var2 = new PSSParameterSpec(var1.getDigestAlgorithm(), "MGF1", var1, 64, 1);
            this.setAlgorithmParameterSpec(var2);
         }
      }
   }

   public static class RsaSha256 extends RsaUsingShaAlgorithm {
      public RsaSha256() {
         super("RS256", "SHA256withRSA");
      }
   }

   public static class RsaSha384 extends RsaUsingShaAlgorithm {
      public RsaSha384() {
         super("RS384", "SHA384withRSA");
      }
   }

   public static class RsaSha512 extends RsaUsingShaAlgorithm {
      public RsaSha512() {
         super("RS512", "SHA512withRSA");
      }
   }
}
