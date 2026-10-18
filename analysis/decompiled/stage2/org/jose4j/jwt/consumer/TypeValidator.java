package org.jose4j.jwt.consumer;

import java.util.Locale;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.UncheckedJoseException;

public class TypeValidator implements ErrorCodeValidator {
   private static final String APPLICATION_PRIMARY_TYPE = "application";
   private TypeValidator.SimpleMediaType expectedType;
   private boolean requireType;

   public TypeValidator(boolean var1, String var2) {
      try {
         this.expectedType = this.toMediaType(var2);
         if (this.expectedType.getSubType().equals("*")) {
            throw new UncheckedJoseException("cannot use wildcard in subtype of expected type");
         }
      } catch (TypeValidator.MediaTypeParseException var4) {
         throw new UncheckedJoseException("The given expected type '" + var2 + "' isn't a valid media type in this context.", var4);
      }

      this.requireType = var1;
   }

   @Override
   public ErrorCodeValidator.Error validate(JwtContext var1) {
      JsonWebStructure var2 = var1.getJoseObjects().get(0);
      String var3 = var2.getHeader("typ");
      return this.validate(var3);
   }

   ErrorCodeValidator.Error validate(String var1) {
      if (var1 == null) {
         return this.requireType ? new ErrorCodeValidator.Error(21, "No typ header parameter present in the innermost JWS/JWE") : null;
      } else {
         if (this.expectedType != null) {
            try {
               TypeValidator.SimpleMediaType var2 = this.toMediaType(var1);
               if (!this.expectedType.match(var2) || var2.getSubType().equals("*")) {
                  StringBuilder var3 = new StringBuilder();
                  var3.append("Invalid typ header parameter value '").append(var1).append("'. Expecting '");
                  var3.append(this.expectedType).append("'");
                  if (this.expectedType.getPrimaryType().equals("application")) {
                     var3.append(" or just '").append(this.expectedType.getSubType()).append("'");
                  }

                  var3.append(".");
                  return new ErrorCodeValidator.Error(22, var3.toString());
               }
            } catch (TypeValidator.MediaTypeParseException var4) {
               return new ErrorCodeValidator.Error(22, "typ header parameter value '" + var1 + "' not parsable as a media type " + var4);
            }
         }

         return null;
      }
   }

   private TypeValidator.SimpleMediaType toMediaType(String var1) throws TypeValidator.MediaTypeParseException {
      return var1.contains("/") ? new TypeValidator.SimpleMediaType(var1) : new TypeValidator.SimpleMediaType("application", var1);
   }

   static class MediaTypeParseException extends Exception {
      MediaTypeParseException(String var1) {
         super(var1);
      }
   }

   static class SimpleMediaType {
      private String primaryType;
      private String subType;

      SimpleMediaType(String var1) throws TypeValidator.MediaTypeParseException {
         this.parse(var1);
      }

      SimpleMediaType(String var1, String var2) throws TypeValidator.MediaTypeParseException {
         this.primaryType = var1.toLowerCase(Locale.ENGLISH);
         checkToken(this.primaryType);
         this.subType = var2.toLowerCase(Locale.ENGLISH);
         checkToken(this.subType);
      }

      private void parse(String var1) throws TypeValidator.MediaTypeParseException {
         int var2 = var1.indexOf(47);
         if (var2 < 0) {
            throw new TypeValidator.MediaTypeParseException("Cannot find sub type.");
         } else {
            int var3 = var1.indexOf(59);
            if (var3 < 0) {
               this.primaryType = var1.substring(0, var2).trim().toLowerCase(Locale.ENGLISH);
               this.subType = var1.substring(var2 + 1).trim().toLowerCase(Locale.ENGLISH);
            } else {
               if (var2 >= var3) {
                  throw new TypeValidator.MediaTypeParseException("Cannot find sub type.");
               }

               this.primaryType = var1.substring(0, var2).trim().toLowerCase(Locale.ENGLISH);
               this.subType = var1.substring(var2 + 1, var3).trim().toLowerCase(Locale.ENGLISH);
            }

            checkToken(this.primaryType);
            checkToken(this.subType);
         }
      }

      String getPrimaryType() {
         return this.primaryType;
      }

      String getSubType() {
         return this.subType;
      }

      @Override
      public String toString() {
         return this.getBaseType();
      }

      String getBaseType() {
         return this.primaryType + "/" + this.subType;
      }

      boolean match(TypeValidator.SimpleMediaType var1) {
         return this.primaryType.equals(var1.getPrimaryType())
            && (this.subType.equals(var1.getSubType()) || this.subType.equals("*") || var1.getSubType().equals("*"));
      }

      private static boolean isLegitTokenChar(char var0) {
         return var0 > ' ' && var0 <= '~' && "()<>@,;:/[]?=\\\"".indexOf(var0) < 0;
      }

      private static void checkToken(String var0) throws TypeValidator.MediaTypeParseException {
         if (var0 != null && var0.length() != 0) {
            for (int var1 = 0; var1 < var0.length(); var1++) {
               char var2 = var0.charAt(var1);
               if (!isLegitTokenChar(var2)) {
                  throw new TypeValidator.MediaTypeParseException("Invalid token char " + var2);
               }
            }
         } else {
            throw new TypeValidator.MediaTypeParseException("cannot have empty part");
         }
      }
   }
}
