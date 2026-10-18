package org.jose4j.jwe;

import java.security.SecureRandom;
import org.jose4j.lang.ByteUtil;

public class InitializationVectorHelp {
   public InitializationVectorHelp() {
   }

   static byte[] iv(int var0, byte[] var1, SecureRandom var2) {
      return var1 == null ? ByteUtil.randomBytes(var0, var2) : var1;
   }
}
