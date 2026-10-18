package org.jose4j.keys.resolvers;

import java.io.IOException;
import java.security.Key;
import java.util.List;
import org.jose4j.jwk.HttpsJwks;
import org.jose4j.jwk.JsonWebKey;
import org.jose4j.jwk.VerificationJwkSelector;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UnresolvableKeyException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class HttpsJwksVerificationKeyResolver implements VerificationKeyResolver {
   private static final Logger log = LoggerFactory.getLogger(HttpsJwksVerificationKeyResolver.class);
   private VerificationJwkSelector verificationJwkSelector = new VerificationJwkSelector();
   private HttpsJwks httpsJkws;
   private boolean disambiguateWithVerifySignature;

   public HttpsJwksVerificationKeyResolver(HttpsJwks var1) {
      this.httpsJkws = var1;
   }

   @Override
   public Key resolveKey(JsonWebSignature var1, List<JsonWebStructure> var2) throws UnresolvableKeyException {
      JsonWebKey var3;
      List var4;
      try {
         var4 = this.httpsJkws.getJsonWebKeys();
         var3 = this.select(var1, var4);
         if (var3 == null) {
            log.debug(
               "Refreshing JWKs from {} as no suitable verification key for JWS w/ header {} was found in {}",
               new Object[]{this.httpsJkws.getLocation(), var1.getHeaders().getFullHeaderAsJsonString(), var4}
            );
            this.httpsJkws.refresh();
            var4 = this.httpsJkws.getJsonWebKeys();
            var3 = this.select(var1, var4);
         }
      } catch (IOException | JoseException var7) {
         StringBuilder var6 = new StringBuilder();
         var6.append("Unable to find a suitable verification key for JWS w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var6.append(" due to an unexpected exception (")
            .append(var7)
            .append(") while obtaining or using keys from JWKS endpoint at ")
            .append(this.httpsJkws.getLocation());
         throw new UnresolvableKeyException(var6.toString(), var7);
      }

      if (var3 == null) {
         StringBuilder var5 = new StringBuilder();
         var5.append("Unable to find a suitable verification key for JWS w/ header ").append(var1.getHeaders().getFullHeaderAsJsonString());
         var5.append(" from JWKs ").append(var4).append(" obtained from ").append(this.httpsJkws.getLocation());
         throw new UnresolvableKeyException(var5.toString());
      } else {
         return var3.getKey();
      }
   }

   protected JsonWebKey select(JsonWebSignature var1, List<JsonWebKey> var2) throws JoseException {
      return this.disambiguateWithVerifySignature
         ? this.verificationJwkSelector.selectWithVerifySignatureDisambiguate(var1, var2)
         : this.verificationJwkSelector.select(var1, var2);
   }

   public void setDisambiguateWithVerifySignature(boolean var1) {
      this.disambiguateWithVerifySignature = var1;
   }
}
