package org.jose4j.jwk;

import java.io.Serializable;
import java.security.Key;
import java.security.MessageDigest;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.interfaces.ECPublicKey;
import java.security.interfaces.RSAPublicKey;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import org.jose4j.base64url.Base64Url;
import org.jose4j.json.JsonUtil;
import org.jose4j.lang.HashUtil;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.JsonHelp;
import org.jose4j.lang.StringUtil;

public abstract class JsonWebKey implements Serializable {
   public static final String KEY_TYPE_PARAMETER = "kty";
   public static final String USE_PARAMETER = "use";
   public static final String KEY_ID_PARAMETER = "kid";
   public static final String ALGORITHM_PARAMETER = "alg";
   public static final String KEY_OPERATIONS = "key_ops";
   private String use;
   private String keyId;
   private String algorithm;
   private List<String> keyOps;
   protected Map<String, Object> otherParameters = new LinkedHashMap<>();
   protected Key key;

   public void setAlgorithm(String var1) {
      this.algorithm = var1;
   }

   public void setOtherParameter(String var1, Object var2) {
      this.otherParameters.put(var1, var2);
   }

   protected void putIfNotNull(String var1, Object var2, Map<String, Object> var3) {
      if (var2 != null) {
         var3.put(var1, var2);
      }
   }

   protected static String getStringRequired(Map<String, Object> var0, String var1) throws JoseException {
      return getString(var0, var1, true);
   }

   protected JsonWebKey(Key var1) {
      this.key = var1;
   }

   protected JsonWebKey(Map<String, Object> var1) throws JoseException {
      this.otherParameters.putAll(var1);
      this.removeFromOtherParams("kty", "use", "kid", "alg", "key_ops");
      this.setUse(getString(var1, "use"));
      this.setKeyId(getString(var1, "kid"));
      this.setAlgorithm(getString(var1, "alg"));
      if (var1.containsKey("key_ops")) {
         this.keyOps = JsonHelp.getStringArray(var1, "key_ops");
      }
   }

   @Override
   public String toString() {
      return this.getClass().getName() + this.toParams(JsonWebKey.OutputControlLevel.PUBLIC_ONLY);
   }

   public Key getKey() {
      return this.key;
   }

   public PublicKey getPublicKey() {
      try {
         return (PublicKey)this.key;
      } catch (Exception var2) {
         return null;
      }
   }

   protected static String getString(Map<String, Object> var0, String var1, boolean var2) throws JoseException {
      String var3 = getString(var0, var1);
      if (var3 == null && var2) {
         throw new JoseException("Missing required '" + var1 + "' parameter.");
      } else {
         return var3;
      }
   }

   protected static String getString(Map<String, Object> var0, String var1) throws JoseException {
      return JsonHelp.getStringChecked(var0, var1);
   }

   public String getAlgorithm() {
      return this.algorithm;
   }

   public String toJson() {
      return this.toJson(JsonWebKey.OutputControlLevel.INCLUDE_SYMMETRIC);
   }

   public String toJson(JsonWebKey.OutputControlLevel var1) {
      Map var2 = this.toParams(var1);
      return JsonUtil.toJson(var2);
   }

   public String calculateBase64urlEncodedThumbprint(String var1) {
      byte[] var2 = this.calculateThumbprint(var1);
      return Base64Url.encode(var2);
   }

   protected abstract String produceThumbprintHashInput();

   public String calculateThumbprintUri(String var1) {
      if (!var1.equals("SHA-256")) {
         throw new UnsupportedOperationException("Only SHA-256 algorithm supported at this time for Thumbprint URIs");
      } else {
         return "urn:ietf:params:oauth:jwk-thumbprint:sha-256:" + this.calculateBase64urlEncodedThumbprint(var1);
      }
   }

   public <T> T getOtherParameterValue(String var1, Class<T> var2) {
      Object var3 = this.otherParameters.get(var1);
      return (T)var2.cast(var3);
   }

   protected void removeFromOtherParams(String... var1) {
      for (String var5 : var1) {
         this.otherParameters.remove(var5);
      }
   }

   protected abstract void fillTypeSpecificParams(Map<String, Object> var1, JsonWebKey.OutputControlLevel var2);

   public byte[] calculateThumbprint(String var1) {
      MessageDigest var2 = HashUtil.getMessageDigest(var1);
      String var3 = this.produceThumbprintHashInput();
      byte[] var4 = StringUtil.getBytesUtf8(var3);
      return var2.digest(var4);
   }

   public Map<String, Object> toParams(JsonWebKey.OutputControlLevel var1) {
      LinkedHashMap var2 = new LinkedHashMap();
      var2.put("kty", this.getKeyType());
      this.putIfNotNull("kid", this.getKeyId(), var2);
      this.putIfNotNull("use", this.getUse(), var2);
      this.putIfNotNull("key_ops", this.keyOps, var2);
      this.putIfNotNull("alg", this.getAlgorithm(), var2);
      this.fillTypeSpecificParams(var2, var1);
      var2.putAll(this.otherParameters);
      return var2;
   }

   public String getKeyId() {
      return this.keyId;
   }

   public void setKeyId(String var1) {
      this.keyId = var1;
   }

   public List<String> getKeyOps() {
      return this.keyOps;
   }

   public void setUse(String var1) {
      this.use = var1;
   }

   public String getUse() {
      return this.use;
   }

   public abstract String getKeyType();

   public void setKeyOps(List<String> var1) {
      this.keyOps = var1;
   }

   public static class Factory {
      public Factory() {
      }

      public static JsonWebKey newJwk(String var0) throws JoseException {
         Map var1 = JsonUtil.parseJson(var0);
         return newJwk(var1);
      }

      public static JsonWebKey newJwk(Key var0) throws JoseException {
         if (RSAPublicKey.class.isInstance(var0)) {
            return new RsaJsonWebKey((RSAPublicKey)var0);
         } else if (ECPublicKey.class.isInstance(var0)) {
            return new EllipticCurveJsonWebKey((ECPublicKey)var0);
         } else if (PublicKey.class.isInstance(var0)) {
            if (OctetKeyPairJsonWebKey.isApplicable(var0)) {
               return new OctetKeyPairJsonWebKey((PublicKey)var0);
            } else {
               throw new JoseException("Unsupported or unknown public key (alg=" + var0.getAlgorithm() + ") " + var0);
            }
         } else if (PrivateKey.class.isInstance(var0)) {
            throw new JoseException("A JsonWebKey instance needs to be created from a public or symmetric key.");
         } else {
            return new OctetSequenceJsonWebKey(var0);
         }
      }

      public static JsonWebKey newJwk(Map<String, Object> var0) throws JoseException {
         String var1 = JsonWebKey.getStringRequired(var0, "kty");
         switch (var1) {
            case "RSA":
               return new RsaJsonWebKey(var0);
            case "EC":
               return new EllipticCurveJsonWebKey(var0);
            case "OKP":
               return new OctetKeyPairJsonWebKey(var0);
            case "oct":
               return new OctetSequenceJsonWebKey(var0);
            default:
               throw new JoseException("Unknown key type algorithm: '" + var1 + "'");
         }
      }
   }

   public static enum OutputControlLevel {
      INCLUDE_PRIVATE,
      INCLUDE_SYMMETRIC,
      PUBLIC_ONLY;

      private OutputControlLevel() {
      }
   }
}
