package org.jose4j.jwk;

import java.util.Collection;
import java.util.List;
import org.jose4j.jws.EcdsaUsingShaAlgorithm;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jws.JsonWebSignatureAlgorithm;
import org.jose4j.lang.JoseException;

public class VerificationJwkSelector {
   private static final String[] EDDSA_CRVS = new String[]{"Ed25519", "Ed448"};

   public VerificationJwkSelector() {
   }

   public JsonWebKey select(JsonWebSignature var1, Collection<JsonWebKey> var2) throws JoseException {
      List var3 = this.selectList(var1, var2);
      return var3.isEmpty() ? null : (JsonWebKey)var3.get(0);
   }

   public List<JsonWebKey> selectList(JsonWebSignature var1, Collection<JsonWebKey> var2) throws JoseException {
      SimpleJwkFilter var3 = SelectorSupport.filterForInboundSigned(var1);
      List var4 = var3.filter(var2);
      if (this.hasMoreThanOne(var4)) {
         var3.setAlg(var1.getAlgorithmHeaderValue(), SimpleJwkFilter.OMITTED_OKAY);
         var4 = var3.filter(var4);
      }

      if (this.hasMoreThanOne(var4)) {
         String var5 = var1.getKeyType();
         if ("EC".equals(var5)) {
            JsonWebSignatureAlgorithm var6 = var1.getAlgorithmNoConstraintCheck();
            EcdsaUsingShaAlgorithm var7 = (EcdsaUsingShaAlgorithm)var6;
            var3.setCrv(var7.getCurveName(), SimpleJwkFilter.OMITTED_OKAY);
            var4 = var3.filter(var4);
         } else if ("OKP".equals(var5)) {
            var3.setCrvs(EDDSA_CRVS, SimpleJwkFilter.OMITTED_OKAY);
            var4 = var3.filter(var4);
         }
      }

      return var4;
   }

   public JsonWebKey selectWithVerifySignatureDisambiguate(JsonWebSignature var1, Collection<JsonWebKey> var2) throws JoseException {
      List var3 = this.selectList(var1, var2);
      if (var3.isEmpty()) {
         return null;
      } else if (var3.size() == 1) {
         return (JsonWebKey)var3.get(0);
      } else {
         for (JsonWebKey var5 : var3) {
            var1.setKey(var5.getKey());
            if (var1.verifySignature()) {
               return var5;
            }
         }

         return null;
      }
   }

   private boolean hasMoreThanOne(List<JsonWebKey> var1) {
      return var1.size() > 1;
   }
}
