package org.jose4j.lang;

import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;

public class HashUtil {
   public static final String SHA_256 = "SHA-256";

   public static MessageDigest getMessageDigest(String var0) {
      return getMessageDigest(var0, null);
   }

   public static MessageDigest getMessageDigest(String var0, String var1) {
      try {
         return var1 == null ? MessageDigest.getInstance(var0) : MessageDigest.getInstance(var0, var1);
      } catch (NoSuchAlgorithmException var3) {
         throw new UncheckedJoseException("Unable to get MessageDigest instance with " + var0);
      } catch (NoSuchProviderException var4) {
         throw new UncheckedJoseException("Unable to get a MessageDigest implementation of algorithm name: " + var0 + " using provider " + var1, var4);
      }
   }

   public HashUtil() {
   }
}
