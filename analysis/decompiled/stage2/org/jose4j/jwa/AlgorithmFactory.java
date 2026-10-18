package org.jose4j.jwa;

import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidAlgorithmException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class AlgorithmFactory<A extends Algorithm> {
   private final Logger log;
   private String parameterName;
   private final Map<String, A> algorithms = new LinkedHashMap<>();

   public boolean isAvailable(String var1) {
      return this.algorithms.containsKey(var1);
   }

   private boolean isAvailable(A var1) {
      try {
         return var1.isAvailable();
      } catch (Throwable var3) {
         this.log
            .debug("Unexpected problem checking for availability of " + var1.getAlgorithmIdentifier() + " algorithm: " + ExceptionHelp.toStringWithCauses(var3));
         return false;
      }
   }

   public void registerAlgorithm(A var1) {
      String var2 = var1.getAlgorithmIdentifier();
      if (this.isAvailable((A)var1)) {
         this.algorithms.put(var2, (A)var1);
         this.log.debug("{} registered for {} algorithm {}", new Object[]{var1, this.parameterName, var2});
      } else {
         this.log.debug("{} is unavailable so will not be registered for {} algorithms.", var2, this.parameterName);
      }
   }

   public AlgorithmFactory(String var1, Class<A> var2) {
      this.parameterName = var1;
      this.log = LoggerFactory.getLogger(this.getClass().getName() + "->" + var2.getSimpleName());
   }

   public A getAlgorithm(String var1) throws InvalidAlgorithmException {
      Algorithm var2 = this.algorithms.get(var1);
      if (var2 == null) {
         throw new InvalidAlgorithmException(
            var1 + " is an unknown, unsupported or unavailable " + this.parameterName + " algorithm (not one of " + this.getSupportedAlgorithms() + ")."
         );
      } else {
         return (A)var2;
      }
   }

   public void unregisterAlgorithm(String var1) {
      this.algorithms.remove(var1);
   }

   public Set<String> getSupportedAlgorithms() {
      return Collections.unmodifiableSet(this.algorithms.keySet());
   }
}
