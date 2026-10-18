package org.jose4j.keys.resolvers;

import java.security.Key;
import java.security.PublicKey;
import java.security.cert.X509Certificate;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.keys.X509Util;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;
import org.jose4j.lang.UnresolvableKeyException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class X509VerificationKeyResolver implements VerificationKeyResolver {
   private static final Logger log = LoggerFactory.getLogger(X509VerificationKeyResolver.class);
   private Map<String, X509Certificate> x5tMap = new LinkedHashMap<>();
   private Map<String, X509Certificate> x5tS256Map = new LinkedHashMap<>();
   private boolean tryAllOnNoThumbHeader;

   public X509VerificationKeyResolver(List<X509Certificate> var1) {
      for (X509Certificate var3 : var1) {
         try {
            String var4 = X509Util.x5t(var3);
            this.x5tMap.put(var4, var3);
            String var5 = X509Util.x5tS256(var3);
            this.x5tS256Map.put(var5, var3);
         } catch (UncheckedJoseException var6) {
            log.warn("Unable to get certificate thumbprint.", var6);
         }
      }
   }

   public X509VerificationKeyResolver(X509Certificate... var1) {
      this(Arrays.asList(var1));
   }

   public void setTryAllOnNoThumbHeader(boolean var1) {
      this.tryAllOnNoThumbHeader = var1;
   }

   @Override
   public Key resolveKey(JsonWebSignature var1, List<JsonWebStructure> var2) throws UnresolvableKeyException {
      String var3 = var1.getX509CertSha1ThumbprintHeaderValue();
      String var4 = var1.getX509CertSha256ThumbprintHeaderValue();
      if (var3 != null || var4 != null) {
         X509Certificate var5 = this.x5tMap.get(var3);
         if (var5 == null) {
            var5 = this.x5tS256Map.get(var4);
         }

         if (var5 == null) {
            StringBuilder var6 = new StringBuilder();
            var6.append("The X.509 Certificate Thumbprint header(s) in the JWS do not identify any of the provided Certificates -");
            if (var3 != null) {
               var6.append(" ").append("x5t").append("=").append(var3);
               var6.append(" vs. SHA-1 thumbs:").append(this.x5tMap.keySet());
            }

            if (var4 != null) {
               var6.append(" ").append("x5t#S256").append("=").append(var4);
               var6.append(" vs. SHA-256 thumbs:").append(this.x5tS256Map.keySet());
            }

            var6.append(".");
            throw new UnresolvableKeyException(var6.toString());
         } else {
            return var5.getPublicKey();
         }
      } else if (this.tryAllOnNoThumbHeader) {
         return this.attemptAll(var1);
      } else {
         throw new UnresolvableKeyException("Neither the x5t header nor the x5t#S256 header are present in the JWS.");
      }
   }

   private Key attemptAll(JsonWebSignature var1) throws UnresolvableKeyException {
      for (X509Certificate var3 : this.x5tMap.values()) {
         PublicKey var4 = var3.getPublicKey();
         var1.setKey(var4);

         try {
            if (var1.verifySignature()) {
               return var4;
            }
         } catch (JoseException var6) {
            log.debug("Verify signature didn't work: {}", ExceptionHelp.toStringWithCauses(var6));
         }
      }

      StringBuilder var7 = new StringBuilder();
      var7.append("Unable to verify the signature with any of the provided keys - SHA-1 thumbs of provided certificates: ");
      var7.append(this.x5tMap.keySet());
      var7.append(".");
      throw new UnresolvableKeyException(var7.toString());
   }
}
