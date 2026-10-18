package org.jose4j.jwe;

import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import javax.crypto.Cipher;
import javax.crypto.NoSuchPaddingException;
import org.jose4j.lang.JoseException;

public class CipherUtil {
   static Cipher getCipher(String var0, String var1) throws JoseException {
      try {
         return var1 == null ? Cipher.getInstance(var0) : Cipher.getInstance(var0, var1);
      } catch (NoSuchPaddingException | NoSuchAlgorithmException var3) {
         throw new JoseException(var3.toString(), var3);
      } catch (NoSuchProviderException var4) {
         throw new JoseException("Unable to get a Cipher implementation of " + var0 + " using provider " + var1, var4);
      }
   }

   public CipherUtil() {
   }
}
