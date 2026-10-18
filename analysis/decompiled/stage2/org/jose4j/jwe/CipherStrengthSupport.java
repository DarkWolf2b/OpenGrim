package org.jose4j.jwe;

import java.security.NoSuchAlgorithmException;
import javax.crypto.Cipher;
import org.jose4j.lang.ByteUtil;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class CipherStrengthSupport {
   private static final Logger log = LoggerFactory.getLogger(CipherStrengthSupport.class);

   public static boolean isAvailable(String var0, int var1) {
      int var3 = ByteUtil.bitLength(var1);

      boolean var2;
      try {
         int var4 = Cipher.getMaxAllowedKeyLength(var0);
         var2 = var3 <= var4;
         if (!var2) {
            log.debug("max allowed key length for {} is {}", var0, var4);
         }
      } catch (NoSuchAlgorithmException var5) {
         log.debug("Unknown/unsupported algorithm, {} {}", var0, var5);
         var2 = false;
      }

      return var2;
   }

   public CipherStrengthSupport() {
   }
}
