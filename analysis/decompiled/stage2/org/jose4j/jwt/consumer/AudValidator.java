package org.jose4j.jwt.consumer;

import java.util.List;
import java.util.Set;
import org.jose4j.jwt.JwtClaims;
import org.jose4j.jwt.MalformedClaimException;

public class AudValidator implements ErrorCodeValidator {
   private static final ErrorCodeValidator.Error MISSING_AUD = new ErrorCodeValidator.Error(7, "No Audience (aud) claim present.");
   private Set<String> acceptableAudiences;
   private boolean requireAudience;

   public AudValidator(Set<String> var1, boolean var2) {
      this.acceptableAudiences = var1;
      this.requireAudience = var2;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      JwtClaims var2 = var1.getJwtClaims();
      if (!var2.hasAudience()) {
         return this.requireAudience ? MISSING_AUD : null;
      } else {
         List var3 = var2.getAudience();
         boolean var4 = false;

         for (String var6 : var3) {
            if (this.acceptableAudiences.contains(var6)) {
               var4 = true;
            }
         }

         if (!var4) {
            StringBuilder var7 = new StringBuilder();
            var7.append("Audience (aud) claim ").append(var3);
            if (this.acceptableAudiences.isEmpty()) {
               var7.append(" present in the JWT but no expected audience value(s) were provided to the JWT Consumer.");
            } else {
               var7.append(" doesn't contain an acceptable identifier.");
            }

            var7.append(" Expected ");
            if (this.acceptableAudiences.size() == 1) {
               var7.append(this.acceptableAudiences.iterator().next());
            } else {
               var7.append("one of ").append(this.acceptableAudiences);
            }

            var7.append(" as an aud value.");
            return new ErrorCodeValidator.Error(8, var7.toString());
         } else {
            return null;
         }
      }
   }
}
