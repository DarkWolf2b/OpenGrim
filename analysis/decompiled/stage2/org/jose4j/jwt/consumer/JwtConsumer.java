package org.jose4j.jwt.consumer;

import java.security.Key;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmConstraints;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwt.JwtClaims;
import org.jose4j.jwt.MalformedClaimException;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.keys.resolvers.DecryptionKeyResolver;
import org.jose4j.keys.resolvers.VerificationKeyResolver;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;

public class JwtConsumer {
   private VerificationKeyResolver verificationKeyResolver;
   private DecryptionKeyResolver decryptionKeyResolver;
   private List<ErrorCodeValidator> validators;
   private AlgorithmConstraints jwsAlgorithmConstraints;
   private AlgorithmConstraints jweAlgorithmConstraints;
   private AlgorithmConstraints jweContentEncryptionAlgorithmConstraints;
   private boolean requireSignature = true;
   private boolean requireEncryption;
   private boolean requireIntegrity;
   private boolean liberalContentTypeHandling;
   private boolean skipSignatureVerification;
   private boolean relaxVerificationKeyValidation;
   private boolean skipVerificationKeyResolutionOnNone;
   private boolean relaxDecryptionKeyValidation;
   private ProviderContext jwsProviderContext;
   private ProviderContext jweProviderContext;
   private JwsCustomizer jwsCustomizer;
   private JweCustomizer jweCustomizer;

   JwtConsumer() {
   }

   void setJwsAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jwsAlgorithmConstraints = var1;
   }

   void setJweAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jweAlgorithmConstraints = var1;
   }

   void setJweContentEncryptionAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jweContentEncryptionAlgorithmConstraints = var1;
   }

   void setVerificationKeyResolver(VerificationKeyResolver var1) {
      this.verificationKeyResolver = var1;
   }

   void setDecryptionKeyResolver(DecryptionKeyResolver var1) {
      this.decryptionKeyResolver = var1;
   }

   void setValidators(List<ErrorCodeValidator> var1) {
      this.validators = var1;
   }

   void setRequireSignature(boolean var1) {
      this.requireSignature = var1;
   }

   void setRequireEncryption(boolean var1) {
      this.requireEncryption = var1;
   }

   void setRequireIntegrity(boolean var1) {
      this.requireIntegrity = var1;
   }

   void setLiberalContentTypeHandling(boolean var1) {
      this.liberalContentTypeHandling = var1;
   }

   void setSkipSignatureVerification(boolean var1) {
      this.skipSignatureVerification = var1;
   }

   void setRelaxVerificationKeyValidation(boolean var1) {
      this.relaxVerificationKeyValidation = var1;
   }

   public void setSkipVerificationKeyResolutionOnNone(boolean var1) {
      this.skipVerificationKeyResolutionOnNone = var1;
   }

   void setRelaxDecryptionKeyValidation(boolean var1) {
      this.relaxDecryptionKeyValidation = var1;
   }

   void setJwsProviderContext(ProviderContext var1) {
      this.jwsProviderContext = var1;
   }

   void setJweProviderContext(ProviderContext var1) {
      this.jweProviderContext = var1;
   }

   void setJwsCustomizer(JwsCustomizer var1) {
      this.jwsCustomizer = var1;
   }

   void setJweCustomizer(JweCustomizer var1) {
      this.jweCustomizer = var1;
   }

   public JwtClaims processToClaims(String var1) throws InvalidJwtException {
      return this.process(var1).getJwtClaims();
   }

   public void processContext(JwtContext var1) throws InvalidJwtException {
      boolean var2 = false;
      boolean var3 = false;
      boolean var4 = false;
      ArrayList var5 = new ArrayList<>(var1.getJoseObjects());

      for (int var6 = var5.size() - 1; var6 >= 0; var6--) {
         List var7 = var5.subList(var6 + 1, var5.size());
         List var8 = Collections.unmodifiableList(var7);
         JsonWebStructure var9 = (JsonWebStructure)var5.get(var6);

         try {
            if (var9 instanceof JsonWebSignature) {
               JsonWebSignature var10 = (JsonWebSignature)var9;
               boolean var21 = "none".equals(var10.getAlgorithmHeaderValue());
               if (!this.skipSignatureVerification) {
                  if (this.jwsProviderContext != null) {
                     var10.setProviderContext(this.jwsProviderContext);
                  }

                  if (this.relaxVerificationKeyValidation) {
                     var10.setDoKeyValidation(false);
                  }

                  if (this.jwsAlgorithmConstraints != null) {
                     var10.setAlgorithmConstraints(this.jwsAlgorithmConstraints);
                  }

                  if (!var21 || !this.skipVerificationKeyResolutionOnNone) {
                     Key var23 = this.verificationKeyResolver.resolveKey(var10, var8);
                     var10.setKey(var23);
                  }

                  if (this.jwsCustomizer != null) {
                     this.jwsCustomizer.customize(var10, var8);
                  }

                  if (!var10.verifySignature()) {
                     throw new InvalidJwtSignatureException(var10, var1);
                  }
               }

               if (!var21) {
                  var2 = true;
               }
            } else {
               JsonWebEncryption var19 = (JsonWebEncryption)var9;
               if (this.jweAlgorithmConstraints != null) {
                  this.jweAlgorithmConstraints.checkConstraint(var19.getAlgorithmHeaderValue());
               }

               if (this.jweContentEncryptionAlgorithmConstraints != null) {
                  this.jweContentEncryptionAlgorithmConstraints.checkConstraint(var19.getEncryptionMethodHeaderParameter());
               }

               var3 = true;
               var4 = var19.getKeyManagementModeAlgorithm().getKeyPersuasion() == KeyPersuasion.SYMMETRIC;
            }
         } catch (JoseException var13) {
            StringBuilder var20 = new StringBuilder();
            var20.append("Unable to process");
            if (!var7.isEmpty()) {
               var20.append(" nested");
            }

            var20.append(" JOSE object (cause: ").append(var13).append("): ").append(var9);
            ErrorCodeValidator.Error var22 = new ErrorCodeValidator.Error(17, var20.toString());
            throw new InvalidJwtException("JWT processing failed.", var22, var13, var1);
         } catch (InvalidJwtException var14) {
            throw var14;
         } catch (Exception var15) {
            StringBuilder var11 = new StringBuilder();
            var11.append("Unexpected exception encountered while processing");
            if (!var7.isEmpty()) {
               var11.append(" nested");
            }

            var11.append(" JOSE object (").append(var15).append("): ").append(var9);
            ErrorCodeValidator.Error var12 = new ErrorCodeValidator.Error(17, var11.toString());
            throw new InvalidJwtException("JWT processing failed.", var12, var15, var1);
         }
      }

      if (this.requireSignature && !var2) {
         List var18 = Collections.singletonList(new ErrorCodeValidator.Error(10, "Missing signature."));
         throw new InvalidJwtException("The JWT has no signature but the JWT Consumer is configured to require one: " + var1.getJwt(), var18, var1);
      } else if (this.requireEncryption && !var3) {
         List var17 = Collections.singletonList(new ErrorCodeValidator.Error(19, "No encryption."));
         throw new InvalidJwtException("The JWT has no encryption but the JWT Consumer is configured to require it: " + var1.getJwt(), var17, var1);
      } else if (this.requireIntegrity && !var2 && !var4) {
         List var16 = Collections.singletonList(new ErrorCodeValidator.Error(20, "Missing Integrity Protection"));
         throw new InvalidJwtException(
            "The JWT has no integrity protection (signature/MAC or symmetric AEAD encryption) but the JWT Consumer is configured to require it: "
               + var1.getJwt(),
            var16,
            var1
         );
      } else {
         this.validate(var1);
      }
   }

   public JwtContext process(String var1) throws InvalidJwtException {
      String var2 = var1;
      JwtClaims var3 = null;
      LinkedList var4 = new LinkedList();
      JwtContext var5 = new JwtContext(var1, null, Collections.unmodifiableList(var4));

      while (var3 == null) {
         try {
            JsonWebStructure var6 = JsonWebStructure.fromCompactSerialization(var2);
            String var7;
            if (var6 instanceof JsonWebSignature) {
               JsonWebSignature var8 = (JsonWebSignature)var6;
               var7 = var8.getUnverifiedPayload();
            } else {
               JsonWebEncryption var16 = (JsonWebEncryption)var6;
               if (this.jweProviderContext != null) {
                  var16.setProviderContext(this.jweProviderContext);
               }

               if (this.relaxDecryptionKeyValidation) {
                  var16.setDoKeyValidation(false);
               }

               if (this.jweContentEncryptionAlgorithmConstraints != null) {
                  var16.setContentEncryptionAlgorithmConstraints(this.jweContentEncryptionAlgorithmConstraints);
               }

               List var9 = Collections.unmodifiableList(var4);
               Key var10 = this.decryptionKeyResolver.resolveKey(var16, var9);
               var16.setKey(var10);
               if (this.jweAlgorithmConstraints != null) {
                  var16.setAlgorithmConstraints(this.jweAlgorithmConstraints);
               }

               if (this.jweCustomizer != null) {
                  this.jweCustomizer.customize(var16, var9);
               }

               var7 = var16.getPayload();
            }

            if (this.isNestedJwt(var6)) {
               var2 = var7;
            } else {
               try {
                  var3 = JwtClaims.parse(var7, var5);
                  var5.setJwtClaims(var3);
               } catch (InvalidJwtException var12) {
                  if (!this.liberalContentTypeHandling) {
                     throw var12;
                  }

                  try {
                     JsonWebStructure.fromCompactSerialization(var1);
                     var2 = var7;
                  } catch (JoseException var11) {
                     throw var12;
                  }
               }
            }

            var4.addFirst(var6);
         } catch (JoseException var13) {
            throw this.newInvalidJwtException("Unable to process", var4, var2, var5, var13);
         } catch (InvalidJwtException var14) {
            throw var14;
         } catch (Exception var15) {
            throw this.newInvalidJwtException("Unexpected exception encountered while processing", var4, var2, var5, var15);
         }
      }

      this.processContext(var5);
      return var5;
   }

   InvalidJwtException newInvalidJwtException(String var1, LinkedList<JsonWebStructure> var2, String var3, JwtContext var4, Exception var5) {
      StringBuilder var6 = new StringBuilder();
      var6.append(var1);
      if (!var2.isEmpty()) {
         var6.append(" nested (outer object header ");
         var6.append(((JsonWebStructure)var2.getFirst()).getHeaders().getFullHeaderAsJsonString());
         var6.append(")");
      }

      var6.append(" JOSE object (cause: ").append(var5).append("): ").append(var3);
      ErrorCodeValidator.Error var7 = new ErrorCodeValidator.Error(17, var6.toString());
      return new InvalidJwtException("JWT processing failed.", var7, var5, var4);
   }

   void validate(JwtContext var1) throws InvalidJwtException {
      ArrayList var2 = new ArrayList();

      for (ErrorCodeValidator var4 : this.validators) {
         ErrorCodeValidator.Error var5;
         try {
            var5 = var4.validate(var1);
         } catch (MalformedClaimException var8) {
            var5 = new ErrorCodeValidator.Error(18, var8.getMessage());
         } catch (Exception var9) {
            String var7 = "Unexpected exception thrown from validator "
               + var4.getClass().getName()
               + ": "
               + ExceptionHelp.toStringWithCausesAndAbbreviatedStack(var9, this.getClass());
            var5 = new ErrorCodeValidator.Error(17, var7);
         }

         if (var5 != null) {
            var2.add(var5);
         }
      }

      if (!var2.isEmpty()) {
         String var10 = "JWT (claims->" + var1.getJwtClaims().getRawJson() + ") rejected due to invalid claims or other invalid content.";
         throw new InvalidJwtException(var10, var2, var1);
      }
   }

   private boolean isNestedJwt(JsonWebStructure var1) {
      String var2 = var1.getContentTypeHeaderValue();
      return var2 != null && (var2.equalsIgnoreCase("jwt") || var2.equalsIgnoreCase("application/jwt"));
   }
}
