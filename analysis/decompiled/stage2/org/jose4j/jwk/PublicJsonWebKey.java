package org.jose4j.jwk;

import java.math.BigInteger;
import java.security.Key;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import org.jose4j.json.JsonUtil;
import org.jose4j.keys.BigEndianBigInteger;
import org.jose4j.keys.X509Util;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.JsonHelp;

public abstract class PublicJsonWebKey extends JsonWebKey {
   public static final String X509_CERTIFICATE_CHAIN_PARAMETER = "x5c";
   public static final String X509_THUMBPRINT_PARAMETER = "x5t";
   public static final String X509_SHA256_THUMBPRINT_PARAMETER = "x5t#S256";
   public static final String X509_URL_PARAMETER = "x5u";
   protected boolean writeOutPrivateKeyToJson;
   protected PrivateKey privateKey;
   protected String jcaProvider;
   private List<X509Certificate> certificateChain;
   private String x5t;
   private String x5tS256;
   private String x5u;

   public X509Certificate getLeafCertificate() {
      return this.certificateChain != null && !this.certificateChain.isEmpty() ? this.certificateChain.get(0) : null;
   }

   public void setPrivateKey(PrivateKey var1) {
      this.privateKey = var1;
   }

   protected PublicJsonWebKey(PublicKey var1) {
      super(var1);
   }

   protected PublicJsonWebKey(Map<String, Object> var1) throws JoseException {
      this(var1, null);
   }

   protected PublicJsonWebKey(Map<String, Object> var1, String var2) throws JoseException {
      super(var1);
      this.jcaProvider = var2;
      if (var1.containsKey("x5c")) {
         List var3 = JsonHelp.getStringArray(var1, "x5c");
         this.certificateChain = new ArrayList<>(var3.size());
         X509Util var4 = X509Util.getX509Util(var2);

         for (String var6 : var3) {
            X509Certificate var7 = var4.fromBase64Der(var6);
            this.certificateChain.add(var7);
         }
      }

      this.x5t = getString(var1, "x5t");
      this.x5tS256 = getString(var1, "x5t#S256");
      this.x5u = getString(var1, "x5u");
      this.removeFromOtherParams(new String[]{"x5c", "x5t#S256", "x5t", "x5u"});
   }

   @Override
   public PublicKey getPublicKey() {
      return (PublicKey)this.key;
   }

   public List<X509Certificate> getCertificateChain() {
      return this.certificateChain;
   }

   public void setCertificateChain(X509Certificate... var1) {
      this.setCertificateChain(Arrays.asList(var1));
   }

   public void setCertificateChain(List<X509Certificate> var1) {
      this.checkForBareKeyCertMismatch();
      this.certificateChain = var1;
   }

   @Override
   protected void fillTypeSpecificParams(Map<String, Object> var1, JsonWebKey.OutputControlLevel var2) {
      this.fillPublicTypeSpecificParams(var1);
      if (this.certificateChain != null) {
         X509Util var3 = new X509Util();
         ArrayList var4 = new ArrayList(this.certificateChain.size());

         for (X509Certificate var6 : this.certificateChain) {
            String var7 = var3.toBase64(var6);
            var4.add(var7);
         }

         var1.put("x5c", var4);
      }

      this.putIfNotNull("x5t", this.x5t, var1);
      this.putIfNotNull("x5t#S256", this.x5tS256, var1);
      this.putIfNotNull("x5u", this.x5u, var1);
      if (this.writeOutPrivateKeyToJson || var2 == JsonWebKey.OutputControlLevel.INCLUDE_PRIVATE) {
         this.fillPrivateTypeSpecificParams(var1);
      }
   }

   public void setX509CertificateSha256Thumbprint(String var1) {
      this.x5tS256 = var1;
   }

   protected abstract void fillPublicTypeSpecificParams(Map<String, Object> var1);

   void checkForBareKeyCertMismatch() {
      X509Certificate var1 = this.getLeafCertificate();
      boolean var2 = var1 != null && !var1.getPublicKey().equals(this.getPublicKey());
      if (var2) {
         throw new IllegalArgumentException(
            "The key in the first certificate MUST match the bare public key represented by other members of the JWK. Public key = "
               + this.getPublicKey()
               + " cert = "
               + var1
         );
      }
   }

   public String getX509CertificateSha256Thumbprint(boolean var1) {
      String var2 = this.x5tS256;
      if (var2 == null && var1) {
         X509Certificate var3 = this.getLeafCertificate();
         if (var3 != null) {
            var2 = X509Util.x5tS256(var3);
         }
      }

      return var2;
   }

   public String getX509CertificateSha256Thumbprint() {
      return this.getX509CertificateSha256Thumbprint(false);
   }

   protected abstract void fillPrivateTypeSpecificParams(Map<String, Object> var1);

   public String getX509CertificateSha1Thumbprint() {
      return this.getX509CertificateSha1Thumbprint(false);
   }

   public String getX509CertificateSha1Thumbprint(boolean var1) {
      String var2 = this.x5t;
      if (var2 == null && var1) {
         X509Certificate var3 = this.getLeafCertificate();
         if (var3 != null) {
            var2 = X509Util.x5t(var3);
         }
      }

      return var2;
   }

   void putBigIntAsBase64UrlEncodedParam(Map<String, Object> var1, String var2, BigInteger var3, int var4) {
      String var5 = BigEndianBigInteger.toBase64Url(var3, var4);
      var1.put(var2, var5);
   }

   void putBigIntAsBase64UrlEncodedParam(Map<String, Object> var1, String var2, BigInteger var3) {
      String var4 = BigEndianBigInteger.toBase64Url(var3);
      var1.put(var2, var4);
   }

   public void setWriteOutPrivateKeyToJson(boolean var1) {
      this.writeOutPrivateKeyToJson = var1;
   }

   public void setX509CertificateSha1Thumbprint(String var1) {
      this.x5t = var1;
   }

   BigInteger getBigIntFromBase64UrlEncodedParam(Map<String, Object> var1, String var2, boolean var3) throws JoseException {
      String var4 = getString(var1, var2, var3);
      return BigEndianBigInteger.fromBase64Url(var4);
   }

   public PrivateKey getPrivateKey() {
      return this.privateKey;
   }

   public void setX509Url(String var1) {
      this.x5u = var1;
   }

   public String getX509Url() {
      return this.x5u;
   }

   public static class Factory {
      public static PublicJsonWebKey newPublicJwk(String var0) throws JoseException {
         return newPublicJwk(var0, null);
      }

      public static PublicJsonWebKey newPublicJwk(String var0, String var1) throws JoseException {
         Map var2 = JsonUtil.parseJson(var0);
         return newPublicJwk(var2, var1);
      }

      public static PublicJsonWebKey newPublicJwk(Map<String, Object> var0) throws JoseException {
         return newPublicJwk(var0, null);
      }

      public static PublicJsonWebKey newPublicJwk(Map<String, Object> var0, String var1) throws JoseException {
         String var2 = JsonWebKey.getStringRequired(var0, "kty");
         switch (var2) {
            case "RSA":
               return new RsaJsonWebKey(var0, var1);
            case "EC":
               return new EllipticCurveJsonWebKey(var0, var1);
            case "OKP":
               return new OctetKeyPairJsonWebKey(var0, var1);
            default:
               throw new JoseException("Unknown key type (for public keys): '" + var2 + "'");
         }
      }

      public static PublicJsonWebKey newPublicJwk(Key var0) throws JoseException {
         JsonWebKey var1 = JsonWebKey.Factory.newJwk(var0);
         return (PublicJsonWebKey)var1;
      }

      public Factory() {
      }
   }
}
