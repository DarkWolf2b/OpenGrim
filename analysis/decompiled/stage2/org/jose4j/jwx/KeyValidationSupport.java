package org.jose4j.jwx;

import java.security.Key;
import java.security.interfaces.RSAKey;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;

public class KeyValidationSupport {
   public static final int MIN_RSA_KEY_LENGTH = 2048;

   public KeyValidationSupport() {
   }

   public static void checkRsaKeySize(Key var0) throws InvalidKeyException {
      if (var0 == null) {
         throw new InvalidKeyException("The RSA key must not be null.");
      } else {
         if (var0 instanceof RSAKey) {
            RSAKey var1 = (RSAKey)var0;
            int var2 = var1.getModulus().bitLength();
            if (var2 < 2048) {
               throw new InvalidKeyException(
                  "An RSA key of size 2048 bits or larger MUST be used with the all JOSE RSA algorithms (given key was only " + var2 + " bits)."
               );
            }
         }
      }
   }

   public static <K extends Key> K castKey(Key var0, Class<K> var1) throws InvalidKeyException {
      notNull(var0);

      try {
         return (K)var1.cast(var0);
      } catch (ClassCastException var3) {
         throw new InvalidKeyException("Invalid key " + var3);
      }
   }

   public static void notNull(Key var0) throws InvalidKeyException {
      if (var0 == null) {
         throw new InvalidKeyException("The key must not be null.");
      }
   }

   public static void cekNotAllowed(byte[] var0, String var1) throws InvalidKeyException {
      if (var0 != null) {
         throw new InvalidKeyException("An explicit content encryption key cannot be used with " + var1);
      }
   }

   public static void validateAesWrappingKey(Key var0, String var1, int var2) throws InvalidKeyException {
      notNull(var0);
      String var3 = var0.getAlgorithm();
      if (!"AES".equals(var3)) {
         throw new InvalidKeyException("Invalid key for JWE " + var1 + ", expected an " + "AES" + " key but an " + var3 + " key was provided.");
      } else {
         if (var0.getEncoded() != null) {
            int var4 = var0.getEncoded().length;
            if (var4 != var2) {
               throw new InvalidKeyException(
                  "Invalid key for JWE "
                     + var1
                     + ", expected a "
                     + ByteUtil.bitLength(var2)
                     + " bit key but a "
                     + ByteUtil.bitLength(var4)
                     + " bit key was provided."
               );
            }
         }
      }
   }
}
