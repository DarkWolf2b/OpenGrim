package org.jose4j.jwa;

import java.security.Security;
import java.util.Set;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class AlgorithmAvailability {
   private static Logger log = LoggerFactory.getLogger(AlgorithmAvailability.class);

   public static boolean isAvailable(String var0, String var1) {
      Set var2 = Security.getAlgorithms(var0);

      for (String var4 : var2) {
         if (var4.equalsIgnoreCase(var1)) {
            return true;
         }
      }

      log.debug("{} is NOT available for {}. Algorithms available from underlying JCE: {}", new Object[]{var1, var0, var2});
      return false;
   }

   public AlgorithmAvailability() {
   }
}
