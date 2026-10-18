package org.jose4j.jwt.consumer;

import org.jose4j.jwt.MalformedClaimException;

public class JtiValidator implements ErrorCodeValidator {
   private static final ErrorCodeValidator.Error MISSING_JTI = new ErrorCodeValidator.Error(13, "The JWT ID (jti) claim is not present.");
   private boolean requireJti;

   public JtiValidator(boolean var1) {
      this.requireJti = var1;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      String var2 = var1.getJwtClaims().getJwtId();
      return var2 == null && this.requireJti ? MISSING_JTI : null;
   }
}
