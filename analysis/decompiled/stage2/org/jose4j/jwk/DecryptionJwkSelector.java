package org.jose4j.jwk;

import java.security.Key;
import java.util.Collection;
import java.util.List;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class DecryptionJwkSelector {
   private static final Logger log = LoggerFactory.getLogger(DecryptionJwkSelector.class);

   public DecryptionJwkSelector() {
   }

   public JsonWebKey select(JsonWebEncryption var1, Collection<JsonWebKey> var2) throws JoseException {
      List var3 = this.selectList(var1, var2);
      return var3.isEmpty() ? null : (JsonWebKey)var3.get(0);
   }

   public List<JsonWebKey> selectList(JsonWebEncryption var1, Collection<JsonWebKey> var2) throws JoseException {
      SimpleJwkFilter var3 = SelectorSupport.filterForInboundEncrypted(var1);
      return var3.filter(var2);
   }

   public JsonWebKey attemptDecryptDisambiguate(JsonWebEncryption var1, List<JsonWebKey> var2) {
      for (JsonWebKey var4 : var2) {
         Object var5;
         if (var4 instanceof PublicJsonWebKey) {
            PublicJsonWebKey var6 = (PublicJsonWebKey)var4;
            var5 = var6.getPrivateKey();
         } else {
            var5 = var4.getKey();
         }

         if (var5 != null) {
            var1.setKey((Key)var5);

            try {
               byte[] var8 = var1.getPlaintextBytes();
               if (var8 != null) {
                  return var4;
               }
            } catch (JoseException var7) {
               log.debug(
                  "Not using key (kid={}) b/c attempt to decrypt failed trying to disambiguate ({}).", var4.getKeyId(), ExceptionHelp.toStringWithCauses(var7)
               );
            }
         }
      }

      return null;
   }
}
