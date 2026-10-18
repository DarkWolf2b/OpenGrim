package org.jose4j.jwx;

import java.security.Key;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.jose4j.base64url.Base64Url;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.Algorithm;
import org.jose4j.jwa.AlgorithmConstraints;
import org.jose4j.jwe.JsonWebEncryption;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.jws.JsonWebSignature;
import org.jose4j.keys.X509Util;
import org.jose4j.lang.InvalidAlgorithmException;
import org.jose4j.lang.JoseException;

public abstract class JsonWebStructure {
   protected Base64Url base64url = new Base64Url();
   protected Headers headers = new Headers();
   private byte[] integrity;
   private Key key;
   protected boolean doKeyValidation = true;
   protected String rawCompactSerialization;
   private AlgorithmConstraints algorithmConstraints = AlgorithmConstraints.NO_CONSTRAINTS;
   private Set<String> knownCriticalHeaders = Collections.emptySet();
   private static final ProviderContext DEFAULT_PROVIDER_CONTEXT = new ProviderContext();
   private ProviderContext providerCtx = DEFAULT_PROVIDER_CONTEXT;

   public void setKey(Key var1) {
      boolean var2 = var1 == null ? this.key == null : this.key != null && var1.equals(this.key);
      if (!var2) {
         this.onNewKey();
      }

      this.key = var1;
   }

   protected String getEncodedHeader() {
      return this.headers.getEncodedHeader();
   }

   public void setDoKeyValidation(boolean var1) {
      this.doKeyValidation = var1;
   }

   public void setProviderContext(ProviderContext var1) {
      this.providerCtx = var1;
   }

   protected void checkNotEmptyPart(String var1, String var2) throws JoseException {
      if (var1 == null || var1.length() == 0) {
         throw new JoseException("The " + var2 + " cannot be empty.");
      }
   }

   protected void setEncodedHeader(String var1) throws JoseException {
      this.checkNotEmptyPart(var1, "Encoded Header");
      this.headers.setEncodedHeader(var1);
   }

   public PublicJsonWebKey getJwkHeader() throws JoseException {
      return this.headers.getPublicJwkHeaderValue("jwk", null);
   }

   public boolean isDoKeyValidation() {
      return this.doKeyValidation;
   }

   public void setJwkHeader(PublicJsonWebKey var1) {
      this.headers.setJwkHeaderValue("jwk", var1);
   }

   protected ProviderContext getProviderCtx() {
      return this.providerCtx;
   }

   public Object getObjectHeader(String var1) {
      return this.headers.getObjectHeaderValue(var1);
   }

   protected byte[] getIntegrity() {
      return this.integrity;
   }

   protected void setIntegrity(byte[] var1) {
      this.integrity = var1;
   }

   public Headers getHeaders() {
      return this.headers;
   }

   public JsonWebStructure() {
   }

   @Override
   public String toString() {
      StringBuilder var1 = new StringBuilder();
      var1.append(this.getClass().getSimpleName()).append(this.getHeaders().getFullHeaderAsJsonString());
      if (this.rawCompactSerialization != null) {
         var1.append("->").append(this.rawCompactSerialization);
      }

      return var1.toString();
   }

   public Key getKey() {
      return this.key;
   }

   public abstract String getPayload() throws JoseException;

   public String getHeader(String var1) {
      return this.headers.getStringHeaderValue(var1);
   }

   public String getHeader() {
      return this.getHeaders().getFullHeaderAsJsonString();
   }

   public abstract Algorithm getAlgorithm() throws InvalidAlgorithmException;

   public void setAlgorithmConstraints(AlgorithmConstraints var1) {
      this.algorithmConstraints = var1;
   }

   protected AlgorithmConstraints getAlgorithmConstraints() {
      return this.algorithmConstraints;
   }

   public void setHeader(String var1, String var2) {
      this.headers.setStringHeaderValue(var1, var2);
   }

   public void setHeader(String var1, Object var2) {
      this.headers.setObjectHeaderValue(var1, var2);
   }

   public void setX509CertSha1ThumbprintHeaderValue(String var1) {
      this.setHeader("x5t", var1);
   }

   public void setX509CertSha1ThumbprintHeaderValue(X509Certificate var1) {
      String var2 = X509Util.x5t(var1);
      this.setX509CertSha1ThumbprintHeaderValue(var2);
   }

   public String getX509CertSha256ThumbprintHeaderValue() {
      return this.getHeader("x5t#S256");
   }

   public String getX509CertSha1ThumbprintHeaderValue() {
      return this.getHeader("x5t");
   }

   public void setX509CertSha256ThumbprintHeaderValue(String var1) {
      this.setHeader("x5t#S256", var1);
   }

   public void setX509CertSha256ThumbprintHeaderValue(X509Certificate var1) {
      String var2 = X509Util.x5tS256(var1);
      this.setX509CertSha256ThumbprintHeaderValue(var2);
   }

   public String getAlgorithmHeaderValue() {
      return this.getHeader("alg");
   }

   public abstract String getCompactSerialization() throws JoseException;

   public static JsonWebStructure fromCompactSerialization(String var0) throws JoseException {
      if (var0.startsWith("{")) {
         throw new JoseException("The JOSE Compact Serialization is period delimited series of base64url-encoded values, which cannot start with \"{\"");
      } else {
         String[] var2 = CompactSerializer.deserialize(var0);
         Object var1;
         if (var2.length == 5) {
            var1 = new JsonWebEncryption();
         } else {
            if (var2.length != 3) {
               throw new JoseException(
                  "Invalid JOSE Compact Serialization. Expecting either 3 or 5 parts for JWS or JWE respectively but was " + var2.length + "."
               );
            }

            var1 = new JsonWebSignature();
         }

         ((JsonWebStructure)var1).setCompactSerializationParts(var2);
         ((JsonWebStructure)var1).rawCompactSerialization = var0;
         return (JsonWebStructure)var1;
      }
   }

   public void setCompactSerialization(String var1) throws JoseException {
      String[] var2 = CompactSerializer.deserialize(var1);
      this.setCompactSerializationParts(var2);
      this.rawCompactSerialization = var1;
   }

   public String getContentTypeHeaderValue() {
      return this.getHeader("cty");
   }

   public void setCriticalHeaderNames(String... var1) {
      this.headers.setObjectHeaderValue("crit", var1);
   }

   public void setAlgorithmHeaderValue(String var1) {
      this.setHeader("alg", var1);
   }

   public String getKeyIdHeaderValue() {
      return this.getHeader("kid");
   }

   public void setKeyIdHeaderValue(String var1) {
      this.setHeader("kid", var1);
   }

   public void setKnownCriticalHeaders(String... var1) {
      this.knownCriticalHeaders = new HashSet<>(Arrays.asList(var1));
   }

   public void setContentTypeHeaderValue(String var1) {
      this.setHeader("cty", var1);
   }

   protected boolean isSupportedCriticalHeader(String var1) {
      return false;
   }

   public abstract Algorithm getAlgorithmNoConstraintCheck() throws InvalidAlgorithmException;

   public List<X509Certificate> getCertificateChainHeaderValue() throws JoseException {
      Object var1 = this.headers.getObjectHeaderValue("x5c");
      if (!(var1 instanceof List)) {
         return null;
      } else {
         List var2 = (List)var1;
         ArrayList var3 = new ArrayList(var2.size());
         X509Util var4 = new X509Util();

         for (Object var6 : var2) {
            var3.add(var4.fromBase64Der((String)var6));
         }

         return var3;
      }
   }

   public X509Certificate getLeafCertificateHeaderValue() throws JoseException {
      List var1 = this.getCertificateChainHeaderValue();
      return var1 != null && !var1.isEmpty() ? (X509Certificate)var1.get(0) : null;
   }

   protected abstract void setCompactSerializationParts(String[] var1) throws JoseException;

   public void setCertificateChainHeaderValue(X509Certificate... var1) {
      ArrayList var2 = new ArrayList();
      X509Util var3 = new X509Util();

      for (X509Certificate var7 : var1) {
         var2.add(var3.toBase64(var7));
      }

      this.headers.setObjectHeaderValue("x5c", var2);
   }

   protected void checkCrit() throws JoseException {
      Object var1 = this.headers.getObjectHeaderValue("crit");
      if (var1 != null) {
         List var2;
         if (var1 instanceof List) {
            var2 = (List)var1;
         } else {
            if (!(var1 instanceof String[])) {
               throw new JoseException("crit header value not an array (" + var1.getClass() + ").");
            }

            var2 = Arrays.asList((String[])var1);
         }

         for (String var4 : var2) {
            if (!this.knownCriticalHeaders.contains(var4) && !this.isSupportedCriticalHeader(var4)) {
               throw new JoseException("Unrecognized header '" + var4 + "' marked as critical.");
            }
         }
      }
   }

   public abstract void setPayload(String var1);

   protected void onNewKey() {
   }
}
