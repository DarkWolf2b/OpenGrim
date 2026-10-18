package org.jose4j.jwt.consumer;

import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import org.jose4j.jwt.MalformedClaimException;

public class IssValidator implements ErrorCodeValidator {
   private Set<String> expectedIssuers;
   private boolean requireIssuer;

   public IssValidator(String var1, boolean var2) {
      if (var1 != null) {
         this.expectedIssuers = Collections.singleton(var1);
      }

      this.requireIssuer = var2;
   }

   public IssValidator(boolean var1, String... var2) {
      this.requireIssuer = var1;
      if (var2 != null && var2.length > 0) {
         this.expectedIssuers = new HashSet<>();
         Collections.addAll(this.expectedIssuers, var2);
      }
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      String var2 = var1.getJwtClaims().getIssuer();
      if (var2 == null) {
         return this.requireIssuer ? new ErrorCodeValidator.Error(11, "No Issuer (iss) claim present.") : null;
      } else {
         return this.expectedIssuers != null && !this.expectedIssuers.contains(var2)
            ? new ErrorCodeValidator.Error(12, "Issuer (iss) claim value (" + var2 + ") doesn't match expected value of " + this.expectedValue())
            : null;
      }
   }

   private String expectedValue() {
      return this.expectedIssuers.size() == 1 ? this.expectedIssuers.iterator().next() : "one of " + this.expectedIssuers;
   }
}
