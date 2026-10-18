package org.jose4j.jws;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.security.Key;
import org.jose4j.jwa.AlgorithmConstraints;
import org.jose4j.jwa.AlgorithmFactory;
import org.jose4j.jwa.AlgorithmFactoryFactory;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.CompactSerializer;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.IntegrityException;
import org.jose4j.lang.InvalidAlgorithmException;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.StringUtil;

public class JsonWebSignature extends JsonWebStructure {
   public static final short COMPACT_SERIALIZATION_PARTS = 3;
   private byte[] payloadBytes;
   private String payloadCharEncoding = "UTF-8";
   private String encodedPayload;
   private Boolean validSignature;
   private CryptoPrimitive signingPrimitive;

   public void setPayloadBytes(byte[] var1) {
      this.payloadBytes = var1;
   }

   public KeyPersuasion getKeyPersuasion() throws InvalidAlgorithmException {
      return this.getAlgorithmNoConstraintCheck().getKeyPersuasion();
   }

   public String getEncodedPayload() {
      return this.encodedPayload != null ? this.encodedPayload : this.base64url.base64UrlEncode(this.payloadBytes);
   }

   public void setEncodedPayload(String var1) {
      this.encodedPayload = var1;
      this.payloadBytes = this.base64url.base64UrlDecode(var1);
   }

   protected void setSignature(byte[] var1) {
      this.setIntegrity(var1);
   }

   public byte[] getPayloadBytes() throws JoseException {
      if (!this.verifySignature()) {
         throw new IntegrityException("JWS signature is invalid.");
      } else {
         return this.payloadBytes;
      }
   }

   private String getStringPayload() {
      return StringUtil.newString(this.payloadBytes, this.payloadCharEncoding);
   }

   public JsonWebSignature() {
      if (!Boolean.getBoolean("org.jose4j.jws.default-allow-none")) {
         this.setAlgorithmConstraints(AlgorithmConstraints.DISALLOW_NONE);
      }
   }

   protected byte[] getSignature() {
      return this.getIntegrity();
   }

   public void sign() throws JoseException {
      CryptoPrimitive var1 = this.signingPrimitive == null ? this.createSigningPrimitive() : this.signingPrimitive;
      byte[] var2 = this.getSigningInputBytes();
      byte[] var3 = this.getAlgorithm().sign(var1, var2);
      this.setSignature(var3);
   }

   @Override
   public String getPayload() throws JoseException {
      if (!Boolean.getBoolean("org.jose4j.jws.getPayload-skip-verify") && !this.verifySignature()) {
         throw new IntegrityException("JWS signature is invalid.");
      } else {
         return this.getStringPayload();
      }
   }

   private JsonWebSignatureAlgorithm getAlgorithm(boolean var1) throws InvalidAlgorithmException {
      String var2 = this.getAlgorithmHeaderValue();
      if (var2 == null) {
         throw new InvalidAlgorithmException("Signature algorithm header (alg) not set.");
      } else {
         if (var1) {
            this.getAlgorithmConstraints().checkConstraint(var2);
         }

         AlgorithmFactoryFactory var3 = AlgorithmFactoryFactory.getInstance();
         AlgorithmFactory var4 = var3.getJwsAlgorithmFactory();
         return (JsonWebSignatureAlgorithm)var4.getAlgorithm(var2);
      }
   }

   public JsonWebSignatureAlgorithm getAlgorithm() throws InvalidAlgorithmException {
      return this.getAlgorithm(true);
   }

   public String getDetachedContentCompactSerialization() throws JoseException {
      this.sign();
      return CompactSerializer.serialize(this.getEncodedHeader(), "", this.getEncodedSignature());
   }

   @Override
   public String getCompactSerialization() throws JoseException {
      this.sign();
      String var1;
      if (this.isRfc7797UnencodedPayload()) {
         var1 = this.getStringPayload();
         if (var1.contains(".")) {
            throw new JoseException(
               "per https://tools.ietf.org/html/rfc7797#section-5.2 when using the JWS Compact Serialization, unencoded non-detached payloads using period ('.') characters would cause parsing errors; such payloads MUST NOT be used with the JWS Compact Serialization."
            );
         }
      } else {
         var1 = this.getEncodedPayload();
      }

      return CompactSerializer.serialize(this.getEncodedHeader(), var1, this.getEncodedSignature());
   }

   public byte[] getUnverifiedPayloadBytes() {
      return this.payloadBytes;
   }

   protected boolean isRfc7797UnencodedPayload() {
      Object var1 = this.headers.getObjectHeaderValue("b64");
      return var1 != null && var1 instanceof Boolean && !(Boolean)var1;
   }

   private byte[] getSigningInputBytes() throws JoseException {
      if (!this.isRfc7797UnencodedPayload()) {
         String var3 = CompactSerializer.serialize(this.getEncodedHeader(), this.getEncodedPayload());
         return StringUtil.getBytesAscii(var3);
      } else {
         try {
            ByteArrayOutputStream var1 = new ByteArrayOutputStream();
            var1.write(StringUtil.getBytesAscii(this.getEncodedHeader()));
            var1.write(46);
            var1.write(this.payloadBytes);
            return var1.toByteArray();
         } catch (IOException var2) {
            throw new JoseException("This should never happen from a ByteArrayOutputStream", var2);
         }
      }
   }

   public void setPayloadCharEncoding(String var1) {
      this.payloadCharEncoding = var1;
   }

   private CryptoPrimitive createSigningPrimitive() throws JoseException {
      JsonWebSignatureAlgorithm var1 = this.getAlgorithm();
      Key var2 = this.getKey();
      if (this.isDoKeyValidation()) {
         var1.validateSigningKey(var2);
      }

      return var1.prepareForSign(var2, this.getProviderCtx());
   }

   public CryptoPrimitive prepareSigningPrimitive() throws JoseException {
      this.signingPrimitive = this.createSigningPrimitive();
      return this.signingPrimitive;
   }

   public String getUnverifiedPayload() {
      return this.getStringPayload();
   }

   public String getPayloadCharEncoding() {
      return this.payloadCharEncoding;
   }

   public String getEncodedSignature() {
      return this.base64url.base64UrlEncode(this.getSignature());
   }

   @Override
   protected boolean isSupportedCriticalHeader(String var1) {
      return "b64".equals(var1);
   }

   public JsonWebSignatureAlgorithm getAlgorithmNoConstraintCheck() throws InvalidAlgorithmException {
      return this.getAlgorithm(false);
   }

   @Override
   protected void setCompactSerializationParts(String[] var1) throws JoseException {
      if (var1.length != 3) {
         throw new JoseException("A JWS Compact Serialization must have exactly 3 parts separated by period ('.') characters");
      } else {
         this.setEncodedHeader(var1[0]);
         if (this.isRfc7797UnencodedPayload()) {
            this.setPayload(var1[1]);
         } else {
            this.setEncodedPayload(var1[1]);
         }

         this.setSignature(this.base64url.base64UrlDecode(var1[2]));
      }
   }

   public boolean verifySignature() throws JoseException {
      JsonWebSignatureAlgorithm var1 = this.getAlgorithm();
      Key var2 = this.getKey();
      if (this.isDoKeyValidation()) {
         var1.validateVerificationKey(var2);
      }

      if (this.validSignature == null) {
         this.checkCrit();
         byte[] var3 = this.getSignature();
         byte[] var4 = this.getSigningInputBytes();
         this.validSignature = var1.verifySignature(var3, var2, var4, this.getProviderCtx());
      }

      return this.validSignature;
   }

   @Override
   public void setPayload(String var1) {
      this.payloadBytes = StringUtil.getBytesUnchecked(var1, this.payloadCharEncoding);
      this.encodedPayload = null;
   }

   @Override
   protected void onNewKey() {
      this.validSignature = null;
   }

   public String getKeyType() throws InvalidAlgorithmException {
      return this.getAlgorithmNoConstraintCheck().getKeyType();
   }
}
