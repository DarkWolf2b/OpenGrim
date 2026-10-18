package org.jose4j.jwe.kdf;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

class ConcatKeyDerivationFunctionFactory {
   private static final Logger log = LoggerFactory.getLogger(ConcatKeyDerivationFunctionFactory.class);
   private static Class<ConcatenationKeyDerivationFunctionWithSha256> customKdfClass;

   ConcatKeyDerivationFunctionFactory() {
   }

   static {
      String var0 = System.getProperty("org.jose4j.jwe.kdf.ConcatenationKeyDerivationFunctionWithSha256");
      if (var0 != null) {
         try {
            customKdfClass = (Class<ConcatenationKeyDerivationFunctionWithSha256>)Class.forName(var0);
            ConcatenationKeyDerivationFunctionWithSha256 var1 = customKdfClass.newInstance();
            byte[] var2 = new byte[]{124, -81, 43, 14, -71, -72, -84, 75, 115, 73, -52, -39, 74, -58, 77, -83};
            var1.kdf(var2, 512, new byte[8]);
            log.debug("Using custom ConcatenationKeyDerivationFunctionWithSha256 implementation: " + var1.getClass());
         } catch (Throwable var3) {
            customKdfClass = null;
            log.debug("Using jose4j's concatenation key derivation function implementation because of problems with " + var0, var3);
         }
      }
   }

   static ConcatenationKeyDerivationFunctionWithSha256 make(String var0) {
      if (customKdfClass != null) {
         try {
            return customKdfClass.newInstance();
         } catch (Exception var2) {
            log.debug("Unable to create new instance of " + customKdfClass, var2);
         }
      }

      return new ConcatKeyDerivationFunction("SHA-256", var0);
   }
}
