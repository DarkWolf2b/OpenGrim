package org.jose4j.jwt.consumer;

import org.jose4j.jwt.MalformedClaimException;

public interface ErrorCodeValidator {
   ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException;

   public static class Error {
      private int errorCode;
      private String errorMessage;

      public Error(int var1, String var2) {
         this.errorCode = var1;
         this.errorMessage = var2;
      }

      public int getErrorCode() {
         return this.errorCode;
      }

      public String getErrorMessage() {
         return this.errorMessage;
      }

      @Override
      public String toString() {
         return "[" + this.errorCode + "] " + this.errorMessage;
      }
   }
}
