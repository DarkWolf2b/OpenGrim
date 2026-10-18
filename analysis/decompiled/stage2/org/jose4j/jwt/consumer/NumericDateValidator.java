package org.jose4j.jwt.consumer;

import org.jose4j.jwt.JwtClaims;
import org.jose4j.jwt.MalformedClaimException;
import org.jose4j.jwt.NumericDate;
import org.jose4j.lang.Maths;

public class NumericDateValidator implements ErrorCodeValidator {
   private static final ErrorCodeValidator.Error MISSING_EXP = new ErrorCodeValidator.Error(2, "No Expiration Time (exp) claim present.");
   private static final ErrorCodeValidator.Error MISSING_IAT = new ErrorCodeValidator.Error(3, "No Issued At (iat) claim present.");
   private static final ErrorCodeValidator.Error MISSING_NBF = new ErrorCodeValidator.Error(4, "No Not Before (nbf) claim present.");
   private boolean requireExp;
   private boolean requireIat;
   private boolean requireNbf;
   private NumericDate staticEvaluationTime;
   private int allowedClockSkewSeconds = 0;
   private int maxFutureValidityInMinutes = 0;
   private Integer iatAllowedSecondsInTheFuture;
   private Integer iatAllowedSecondsInThePast;

   public NumericDateValidator() {
   }

   public void setRequireExp(boolean var1) {
      this.requireExp = var1;
   }

   public void setRequireIat(boolean var1) {
      this.requireIat = var1;
   }

   public void setRequireNbf(boolean var1) {
      this.requireNbf = var1;
   }

   public void setEvaluationTime(NumericDate var1) {
      this.staticEvaluationTime = var1;
   }

   public void setAllowedClockSkewSeconds(int var1) {
      this.allowedClockSkewSeconds = var1;
   }

   public void setMaxFutureValidityInMinutes(int var1) {
      this.maxFutureValidityInMinutes = var1;
   }

   public void setIatAllowedSecondsInTheFuture(int var1) {
      this.iatAllowedSecondsInTheFuture = var1;
   }

   public void setIatAllowedSecondsInThePast(int var1) {
      this.iatAllowedSecondsInThePast = var1;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) throws MalformedClaimException {
      JwtClaims var2 = var1.getJwtClaims();
      NumericDate var3 = var2.getExpirationTime();
      NumericDate var4 = var2.getIssuedAt();
      NumericDate var5 = var2.getNotBefore();
      if (this.requireExp && var3 == null) {
         return MISSING_EXP;
      } else if (this.requireIat && var4 == null) {
         return MISSING_IAT;
      } else if (this.requireNbf && var5 == null) {
         return MISSING_NBF;
      } else {
         NumericDate var6 = this.staticEvaluationTime == null ? NumericDate.now() : this.staticEvaluationTime;
         if (var3 != null) {
            if (Maths.subtract(var6.getValue(), this.allowedClockSkewSeconds) >= var3.getValue()) {
               String var13 = "The JWT is no longer valid - the evaluation time "
                  + var6
                  + " is on or after the Expiration Time (exp="
                  + var3
                  + ") claim value"
                  + this.skewMessage();
               return new ErrorCodeValidator.Error(1, var13);
            }

            if (var4 != null && var3.isBefore(var4)) {
               return new ErrorCodeValidator.Error(
                  17, "The Expiration Time (exp=" + var3 + ") claim value cannot be before the Issued At (iat=" + var4 + ") claim value."
               );
            }

            if (var5 != null && var3.isBefore(var5)) {
               return new ErrorCodeValidator.Error(
                  17, "The Expiration Time (exp=" + var3 + ") claim value cannot be before the Not Before (nbf=" + var5 + ") claim value."
               );
            }

            if (this.maxFutureValidityInMinutes > 0) {
               long var7 = Maths.subtract(Maths.subtract(var3.getValue(), this.allowedClockSkewSeconds), var6.getValue());
               if (var7 > this.maxFutureValidityInMinutes * 60L) {
                  String var9 = "The Expiration Time (exp="
                     + var3
                     + ") claim value cannot be more than "
                     + this.maxFutureValidityInMinutes
                     + " minutes in the future relative to the evaluation time "
                     + var6
                     + this.skewMessage();
                  return new ErrorCodeValidator.Error(5, var9);
               }
            }
         }

         if (var5 != null && Maths.add(var6.getValue(), this.allowedClockSkewSeconds) < var5.getValue()) {
            String var12 = "The JWT is not yet valid as the evaluation time "
               + var6
               + " is before the Not Before (nbf="
               + var5
               + ") claim time"
               + this.skewMessage();
            return new ErrorCodeValidator.Error(6, var12);
         } else {
            if (var4 != null) {
               if (this.iatAllowedSecondsInTheFuture != null
                  && Maths.subtract(Maths.subtract(var4.getValue(), var6.getValue()), this.allowedClockSkewSeconds)
                     > this.iatAllowedSecondsInTheFuture.intValue()) {
                  String var11 = "iat " + var4 + " is more than " + this.iatAllowedSecondsInTheFuture + " second(s) ahead of now " + var6 + this.skewMessage();
                  return new ErrorCodeValidator.Error(23, var11);
               }

               if (this.iatAllowedSecondsInThePast != null
                  && Maths.subtract(Maths.subtract(var6.getValue(), var4.getValue()), this.allowedClockSkewSeconds)
                     > this.iatAllowedSecondsInThePast.intValue()) {
                  String var10 = "As of now "
                     + var6
                     + " iat "
                     + var4
                     + " is more than "
                     + this.iatAllowedSecondsInThePast
                     + " second(s) in the past"
                     + this.skewMessage();
                  return new ErrorCodeValidator.Error(24, var10);
               }
            }

            return null;
         }
      }
   }

   private String skewMessage() {
      return this.allowedClockSkewSeconds > 0
         ? " (even when providing " + this.allowedClockSkewSeconds + " seconds of leeway to account for clock skew)."
         : ".";
   }
}
