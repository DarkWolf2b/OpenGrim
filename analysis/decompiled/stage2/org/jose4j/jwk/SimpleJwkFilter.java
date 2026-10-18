package org.jose4j.jwk;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class SimpleJwkFilter {
   public static boolean OMITTED_OKAY = true;
   public static boolean VALUE_REQUIRED = false;
   private static final String[] EMPTY = new String[2];
   private SimpleJwkFilter.Criteria kid;
   private SimpleJwkFilter.MultiValueCriteria kty;
   private SimpleJwkFilter.Criteria use;
   private SimpleJwkFilter.Criteria alg;
   private SimpleJwkFilter.Criteria x5t;
   private SimpleJwkFilter.Criteria x5tS256;
   private boolean allowThumbsFallbackDeriveFromX5c;
   private SimpleJwkFilter.MultiValueCriteria keyOps;
   private SimpleJwkFilter.MultiValueCriteria crv;

   public SimpleJwkFilter() {
   }

   public void setKid(String var1, boolean var2) {
      this.kid = new SimpleJwkFilter.Criteria(var1, var2);
   }

   public void setKty(String var1) {
      this.kty = new SimpleJwkFilter.MultiValueCriteria(new String[]{var1}, false);
   }

   public void setKtys(String[] var1, boolean var2) {
      this.kty = new SimpleJwkFilter.MultiValueCriteria(var1, var2);
   }

   public void setUse(String var1, boolean var2) {
      this.use = new SimpleJwkFilter.Criteria(var1, var2);
   }

   public void setKeyOperations(String[] var1, boolean var2) {
      this.keyOps = new SimpleJwkFilter.MultiValueCriteria(var1, var2);
   }

   public void setAlg(String var1, boolean var2) {
      this.alg = new SimpleJwkFilter.Criteria(var1, var2);
   }

   public void setX5t(String var1, boolean var2) {
      this.x5t = new SimpleJwkFilter.Criteria(var1, var2);
   }

   public void setX5tS256(String var1, boolean var2) {
      this.x5tS256 = new SimpleJwkFilter.Criteria(var1, var2);
   }

   public void setAllowFallbackDeriveFromX5cForX5Thumbs(boolean var1) {
      this.allowThumbsFallbackDeriveFromX5c = var1;
   }

   public void setCrv(String var1, boolean var2) {
      this.crv = new SimpleJwkFilter.MultiValueCriteria(new String[]{var1}, var2);
   }

   public void setCrvs(String[] var1, boolean var2) {
      this.crv = new SimpleJwkFilter.MultiValueCriteria(var1, var2);
   }

   public List<JsonWebKey> filter(Collection<JsonWebKey> var1) {
      ArrayList var2 = new ArrayList();

      for (JsonWebKey var4 : var1) {
         boolean var5 = this.isMatch(this.kid, var4.getKeyId());
         var5 &= this.kty == null || this.kty.meetsCriteria(var4.getKeyType());
         var5 &= this.isMatch(this.use, var4.getUse());
         var5 &= this.isMatch(this.alg, var4.getAlgorithm());
         String[] var6 = this.getThumbs(var4, this.allowThumbsFallbackDeriveFromX5c);
         var5 &= this.isMatch(this.x5t, var6[0]);
         var5 &= this.isMatch(this.x5tS256, var6[1]);
         var5 &= this.crv == null || this.crv.meetsCriteria(this.getCrv(var4));
         var5 &= this.keyOps == null || this.keyOps.meetsCriteria(var4.getKeyOps());
         if (var5) {
            var2.add(var4);
         }
      }

      return var2;
   }

   boolean isMatch(SimpleJwkFilter.Criteria var1, String var2) {
      return var1 == null || var1.meetsCriteria(var2);
   }

   String getCrv(JsonWebKey var1) {
      if (var1 instanceof EllipticCurveJsonWebKey) {
         return ((EllipticCurveJsonWebKey)var1).getCurveName();
      } else {
         return var1 instanceof OctetKeyPairJsonWebKey ? ((OctetKeyPairJsonWebKey)var1).getSubtype() : null;
      }
   }

   String[] getThumbs(JsonWebKey var1, boolean var2) {
      if (this.x5t == null && this.x5tS256 == null) {
         return EMPTY;
      } else if (var1 instanceof PublicJsonWebKey) {
         PublicJsonWebKey var3 = (PublicJsonWebKey)var1;
         String var4 = var3.getX509CertificateSha1Thumbprint(var2);
         String var5 = var3.getX509CertificateSha256Thumbprint(var2);
         return new String[]{var4, var5};
      } else {
         return EMPTY;
      }
   }

   private static class Criteria {
      String value;
      boolean noValueOk;

      private Criteria(String var1, boolean var2) {
         this.value = var1;
         this.noValueOk = var2;
      }

      public boolean meetsCriteria(String var1) {
         return var1 == null ? this.noValueOk : var1.equals(this.value);
      }
   }

   private static class MultiValueCriteria {
      String[] values;
      boolean noValueOk;

      private MultiValueCriteria(String[] var1, boolean var2) {
         this.values = var1;
         this.noValueOk = var2;
      }

      public boolean meetsCriteria(String var1) {
         return this.meetsCriteria(Collections.singletonList(var1));
      }

      public boolean meetsCriteria(List<String> var1) {
         if (var1 == null) {
            return this.noValueOk;
         } else {
            for (String var5 : this.values) {
               if (var1.contains(var5)) {
                  return true;
               }
            }

            return false;
         }
      }
   }
}
