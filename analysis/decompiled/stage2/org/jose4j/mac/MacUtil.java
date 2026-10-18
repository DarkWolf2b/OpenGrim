package org.jose4j.mac;

import java.security.Key;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import javax.crypto.Mac;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;

public class MacUtil {
   public static final String HMAC_SHA256 = "HmacSHA256";
   public static final String HMAC_SHA384 = "HmacSHA384";
   public static final String HMAC_SHA512 = "HmacSHA512";

   public MacUtil() {
   }

   public static Mac getInitializedMac(String var0, Key var1) throws JoseException {
      return getInitializedMac(var0, var1, null);
   }

   public static Mac getInitializedMac(String var0, Key var1, String var2) throws JoseException {
      Mac var3 = getMac(var0, var2);
      initMacWithKey(var3, var1);
      return var3;
   }

   public static Mac getMac(String var0) throws JoseException {
      return getMac(var0, null);
   }

   public static Mac getMac(String var0, String var1) throws JoseException {
      try {
         return var1 == null ? Mac.getInstance(var0) : Mac.getInstance(var0, var1);
      } catch (NoSuchAlgorithmException var3) {
         throw new JoseException("Unable to get a MAC implementation of algorithm name: " + var0, var3);
      } catch (NoSuchProviderException var4) {
         throw new JoseException("Unable to get a MAC implementation of algorithm name: " + var0 + " using provider " + var1, var4);
      }
   }

   public static void initMacWithKey(Mac var0, Key var1) throws InvalidKeyException {
      try {
         var0.init(var1);
      } catch (java.security.InvalidKeyException var3) {
         throw new InvalidKeyException("Key is not valid for " + var0.getAlgorithm() + " - " + var3, var3);
      }
   }
}
