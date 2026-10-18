package org.jose4j.jwt.consumer;

import org.jose4j.jwt.MalformedClaimException;

public class ErrorCodeValidatorAdapter implements ErrorCodeValidator {
   private Validator validator;

   public ErrorCodeValidatorAdapter(Validator var1) {
      this.validator = var1;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      String var2 = this.validator.validate(var1);
      return var2 == null ? null : new ErrorCodeValidator.Error(17, var2);
   }
}
