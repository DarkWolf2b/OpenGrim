package org.jose4j.lang;

import java.security.Provider;
import java.security.Security;

public class BouncyCastleProviderHelp {
   private static final String BC_PROVIDER_FQCN = "org.bouncycastle.jce.provider.BouncyCastleProvider";

   public BouncyCastleProviderHelp() {
   }

   public static boolean enableBouncyCastleProvider() {
      try {
         Class var0 = Class.forName("org.bouncycastle.jce.provider.BouncyCastleProvider");

         for (Provider var4 : Security.getProviders()) {
            if (var0.isInstance(var4)) {
               return true;
            }
         }

         Security.addProvider((Provider)var0.newInstance());
         return true;
      } catch (Exception var5) {
         return false;
      }
   }
}
