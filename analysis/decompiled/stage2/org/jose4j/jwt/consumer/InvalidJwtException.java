package org.jose4j.jwt.consumer;

import java.util.Collections;
import java.util.List;

public class InvalidJwtException extends Exception {
   private List<ErrorCodeValidator.Error> details = Collections.emptyList();
   private JwtContext jwtContext;

   public InvalidJwtException(String var1, List<ErrorCodeValidator.Error> var2, JwtContext var3) {
      super(var1);
      this.details = var2;
      this.jwtContext = var3;
   }

   public InvalidJwtException(String var1, ErrorCodeValidator.Error var2, Throwable var3, JwtContext var4) {
      super(var1, var3);
      this.jwtContext = var4;
      this.details = Collections.singletonList(var2);
   }

   public boolean hasErrorCode(int var1) {
      for (ErrorCodeValidator.Error var3 : this.details) {
         if (var1 == var3.getErrorCode()) {
            return true;
         }
      }

      return false;
   }

   public boolean hasExpired() {
      return this.hasErrorCode(1);
   }

   public List<ErrorCodeValidator.Error> getErrorDetails() {
      return this.details;
   }

   public JwtContext getJwtContext() {
      return this.jwtContext;
   }

   @Override
   public String getMessage() {
      StringBuilder var1 = new StringBuilder();
      var1.append(super.getMessage());
      if (!this.details.isEmpty()) {
         var1.append(" Additional details: ");
         var1.append(this.details);
      }

      return var1.toString();
   }

   public String getOriginalMessage() {
      return super.getMessage();
   }
}
