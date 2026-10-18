package org.jose4j.lang;

import java.security.SecureRandom;

/** @deprecated */
public class DefaultByteGenerator implements ByteGenerator {
   private final SecureRandom random = new SecureRandom();

   public DefaultByteGenerator() {
   }

   /** @deprecated */
   @Override
   public byte[] randomBytes(int var1) {
      byte[] var2 = new byte[var1];
      this.random.nextBytes(var2);
      return var2;
   }
}
