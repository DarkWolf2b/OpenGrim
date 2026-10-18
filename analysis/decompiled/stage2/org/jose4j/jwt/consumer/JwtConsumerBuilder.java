package org.jose4j.jwt.consumer;

import java.security.Key;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmConstraints;
import org.jose4j.jwt.NumericDate;
import org.jose4j.keys.resolvers.DecryptionKeyResolver;
import org.jose4j.keys.resolvers.VerificationKeyResolver;

public class JwtConsumerBuilder {
   private VerificationKeyResolver verificationKeyResolver = new SimpleKeyResolver(null);
   private DecryptionKeyResolver decryptionKeyResolver = new SimpleKeyResolver(null);
   private AlgorithmConstraints jwsAlgorithmConstraints;
   private AlgorithmConstraints jweAlgorithmConstraints;
   private AlgorithmConstraints jweContentEncryptionAlgorithmConstraints;
   private boolean skipDefaultAudienceValidation;
   private AudValidator audValidator;
   private IssValidator issValidator;
   private boolean requireSubject;
   private String expectedSubject;
   private boolean requireJti;
   private NumericDateValidator dateClaimsValidator = new NumericDateValidator();
   private TypeValidator typeValidator;
   private List<ErrorCodeValidator> customValidators = new ArrayList<>();
   private boolean requireSignature = true;
   private boolean requireEncryption;
   private boolean requireIntegrity;
   private boolean skipSignatureVerification = false;
   private boolean relaxVerificationKeyValidation;
   private boolean skipVerificationKeyResolutionOnNone;
   private boolean relaxDecryptionKeyValidation;
   private boolean skipAllValidators = false;
   private boolean skipAllDefaultValidators = false;
   private boolean liberalContentTypeHandling;
   private ProviderContext jwsProviderContext;
   private ProviderContext jweProviderContext;
   private JwsCustomizer jwsCustomizer;
   private JweCustomizer jweCustomizer;

   public JwtConsumerBuilder() {
   }

   public JwtConsumerBuilder setEnableRequireEncryption() {
      this.requireEncryption = true;
      return this;
   }

   public JwtConsumerBuilder setEnableRequireIntegrity() {
      this.requireIntegrity = true;
      return this;
   }

   public JwtConsumerBuilder setDisableRequireSignature() {
      this.requireSignature = false;
      return this;
   }

   public JwtConsumerBuilder setEnableLiberalContentTypeHandling() {
      this.liberalContentTypeHandling = true;
      return this;
   }

   public JwtConsumerBuilder setSkipSignatureVerification() {
      this.skipSignatureVerification = true;
      return this;
   }

   public JwtConsumerBuilder setSkipAllValidators() {
      this.skipAllValidators = true;
      return this;
   }

   public JwtConsumerBuilder setSkipAllDefaultValidators() {
      this.skipAllDefaultValidators = true;
      return this;
   }

   public JwtConsumerBuilder setJwsAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jwsAlgorithmConstraints = var1;
      return this;
   }

   public JwtConsumerBuilder setJweAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jweAlgorithmConstraints = var1;
      return this;
   }

   public JwtConsumerBuilder setJweContentEncryptionAlgorithmConstraints(AlgorithmConstraints var1) {
      this.jweContentEncryptionAlgorithmConstraints = var1;
      return this;
   }

   public JwtConsumerBuilder setJwsAlgorithmConstraints(AlgorithmConstraints.ConstraintType var1, String... var2) {
      this.jwsAlgorithmConstraints = new AlgorithmConstraints(var1, var2);
      return this;
   }

   public JwtConsumerBuilder setJweAlgorithmConstraints(AlgorithmConstraints.ConstraintType var1, String... var2) {
      this.jweAlgorithmConstraints = new AlgorithmConstraints(var1, var2);
      return this;
   }

   public JwtConsumerBuilder setJweContentEncryptionAlgorithmConstraints(AlgorithmConstraints.ConstraintType var1, String... var2) {
      this.jweContentEncryptionAlgorithmConstraints = new AlgorithmConstraints(var1, var2);
      return this;
   }

   public JwtConsumerBuilder setVerificationKey(Key var1) {
      return this.setVerificationKeyResolver(new SimpleKeyResolver(var1));
   }

   public JwtConsumerBuilder setVerificationKeyResolver(VerificationKeyResolver var1) {
      this.verificationKeyResolver = var1;
      return this;
   }

   public JwtConsumerBuilder setSkipVerificationKeyResolutionOnNone() {
      this.skipVerificationKeyResolutionOnNone = true;
      return this;
   }

   public JwtConsumerBuilder setDecryptionKey(Key var1) {
      return this.setDecryptionKeyResolver(new SimpleKeyResolver(var1));
   }

   public JwtConsumerBuilder setDecryptionKeyResolver(DecryptionKeyResolver var1) {
      this.decryptionKeyResolver = var1;
      return this;
   }

   public JwtConsumerBuilder setExpectedAudience(String... var1) {
      return this.setExpectedAudience(true, var1);
   }

   public JwtConsumerBuilder setExpectedAudience(boolean var1, String... var2) {
      HashSet var3 = new HashSet<>(Arrays.asList(var2));
      this.audValidator = new AudValidator(var3, var1);
      return this;
   }

   public JwtConsumerBuilder setSkipDefaultAudienceValidation() {
      this.skipDefaultAudienceValidation = true;
      return this;
   }

   public JwtConsumerBuilder setExpectedIssuers(boolean var1, String... var2) {
      this.issValidator = new IssValidator(var1, var2);
      return this;
   }

   public JwtConsumerBuilder setExpectedIssuer(boolean var1, String var2) {
      this.issValidator = new IssValidator(var2, var1);
      return this;
   }

   public JwtConsumerBuilder setExpectedIssuer(String var1) {
      return this.setExpectedIssuer(true, var1);
   }

   public JwtConsumerBuilder setRequireSubject() {
      this.requireSubject = true;
      return this;
   }

   public JwtConsumerBuilder setExpectedSubject(String var1) {
      this.expectedSubject = var1;
      return this.setRequireSubject();
   }

   public JwtConsumerBuilder setRequireJwtId() {
      this.requireJti = true;
      return this;
   }

   public JwtConsumerBuilder setRequireExpirationTime() {
      this.dateClaimsValidator.setRequireExp(true);
      return this;
   }

   public JwtConsumerBuilder setRequireIssuedAt() {
      this.dateClaimsValidator.setRequireIat(true);
      return this;
   }

   public JwtConsumerBuilder setIssuedAtRestrictions(int var1, int var2) {
      this.dateClaimsValidator.setIatAllowedSecondsInTheFuture(var1);
      this.dateClaimsValidator.setIatAllowedSecondsInThePast(var2);
      return this;
   }

   public JwtConsumerBuilder setRequireNotBefore() {
      this.dateClaimsValidator.setRequireNbf(true);
      return this;
   }

   public JwtConsumerBuilder setEvaluationTime(NumericDate var1) {
      this.dateClaimsValidator.setEvaluationTime(var1);
      return this;
   }

   public JwtConsumerBuilder setAllowedClockSkewInSeconds(int var1) {
      this.dateClaimsValidator.setAllowedClockSkewSeconds(var1);
      return this;
   }

   public JwtConsumerBuilder setMaxFutureValidityInMinutes(int var1) {
      this.dateClaimsValidator.setMaxFutureValidityInMinutes(var1);
      return this;
   }

   public JwtConsumerBuilder setRelaxVerificationKeyValidation() {
      this.relaxVerificationKeyValidation = true;
      return this;
   }

   public JwtConsumerBuilder setRelaxDecryptionKeyValidation() {
      this.relaxDecryptionKeyValidation = true;
      return this;
   }

   public JwtConsumerBuilder registerValidator(Validator var1) {
      this.customValidators.add(new ErrorCodeValidatorAdapter(var1));
      return this;
   }

   public JwtConsumerBuilder registerValidator(ErrorCodeValidator var1) {
      this.customValidators.add(var1);
      return this;
   }

   public JwtConsumerBuilder setJwsCustomizer(JwsCustomizer var1) {
      this.jwsCustomizer = var1;
      return this;
   }

   public JwtConsumerBuilder setJweCustomizer(JweCustomizer var1) {
      this.jweCustomizer = var1;
      return this;
   }

   public JwtConsumerBuilder setJwsProviderContext(ProviderContext var1) {
      this.jwsProviderContext = var1;
      return this;
   }

   public JwtConsumerBuilder setJweProviderContext(ProviderContext var1) {
      this.jweProviderContext = var1;
      return this;
   }

   public JwtConsumerBuilder setExpectedType(boolean var1, String var2) {
      this.typeValidator = new TypeValidator(var1, var2);
      return this;
   }

   public JwtConsumer build() {
      ArrayList var1 = new ArrayList();
      if (!this.skipAllValidators) {
         if (!this.skipAllDefaultValidators) {
            if (!this.skipDefaultAudienceValidation) {
               if (this.audValidator == null) {
                  this.audValidator = new AudValidator(Collections.emptySet(), false);
               }

               var1.add(this.audValidator);
            }

            if (this.issValidator == null) {
               this.issValidator = new IssValidator(null, false);
            }

            var1.add(this.issValidator);
            var1.add(this.dateClaimsValidator);
            SubValidator var2 = this.expectedSubject == null ? new SubValidator(this.requireSubject) : new SubValidator(this.expectedSubject);
            var1.add(var2);
            var1.add(new JtiValidator(this.requireJti));
            if (this.typeValidator != null) {
               var1.add(this.typeValidator);
            }
         }

         var1.addAll(this.customValidators);
      }

      JwtConsumer var3 = new JwtConsumer();
      var3.setValidators(var1);
      var3.setVerificationKeyResolver(this.verificationKeyResolver);
      var3.setDecryptionKeyResolver(this.decryptionKeyResolver);
      var3.setJwsAlgorithmConstraints(this.jwsAlgorithmConstraints);
      var3.setJweAlgorithmConstraints(this.jweAlgorithmConstraints);
      var3.setJweContentEncryptionAlgorithmConstraints(this.jweContentEncryptionAlgorithmConstraints);
      var3.setRequireSignature(this.requireSignature);
      var3.setRequireEncryption(this.requireEncryption);
      var3.setRequireIntegrity(this.requireIntegrity);
      var3.setLiberalContentTypeHandling(this.liberalContentTypeHandling);
      var3.setSkipSignatureVerification(this.skipSignatureVerification);
      var3.setSkipVerificationKeyResolutionOnNone(this.skipVerificationKeyResolutionOnNone);
      var3.setRelaxVerificationKeyValidation(this.relaxVerificationKeyValidation);
      var3.setRelaxDecryptionKeyValidation(this.relaxDecryptionKeyValidation);
      var3.setJwsCustomizer(this.jwsCustomizer);
      var3.setJweCustomizer(this.jweCustomizer);
      var3.setJwsProviderContext(this.jwsProviderContext);
      var3.setJweProviderContext(this.jweProviderContext);
      return var3;
   }
}
