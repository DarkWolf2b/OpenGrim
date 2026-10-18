package org.jose4j.jwt.consumer;

import org.jose4j.jwt.JwtClaims;
import org.jose4j.jwt.MalformedClaimException;

public class SubValidator implements ErrorCodeValidator {
   private static final ErrorCodeValidator.Error MISSING_SUB = new ErrorCodeValidator.Error(14, "No Subject (sub) claim is present.");
   private boolean requireSubject;
   private String expectedSubject;

   public SubValidator(boolean var1) {
      this.requireSubject = var1;
   }

   public SubValidator(String var1) {
      this(true);
      this.expectedSubject = var1;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      JwtClaims var2 = var1.getJwtClaims();
      String var3 = var2.getSubject();
      if (var3 == null && this.requireSubject) {
         return MISSING_SUB;
      } else if (this.expectedSubject != null && !this.expectedSubject.equals(var3)) {
         String var4 = "Subject (sub) claim value (" + var3 + ") doesn't match expected value of " + this.expectedSubject;
         return new ErrorCodeValidator.Error(15, var4);
      } else {
         return null;
      }
   }
}
