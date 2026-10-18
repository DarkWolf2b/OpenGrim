package org.jose4j.jwe;

import java.security.Key;
import org.jose4j.base64url.Base64Url;
import org.jose4j.jwa.AlgorithmConstraints;
import org.jose4j.jwa.AlgorithmFactory;
import org.jose4j.jwa.AlgorithmFactoryFactory;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwx.CompactSerializer;
import org.jose4j.jwx.Headers;
import org.jose4j.jwx.JsonWebStructure;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidAlgorithmException;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.StringUtil;
import org.jose4j.zip.CompressionAlgorithm;

public class JsonWebEncryption extends JsonWebStructure {
   public static final short COMPACT_SERIALIZATION_PARTS = 5;
   private static final AlgorithmConstraints DEFAULT_BLOCKED = new AlgorithmConstraints(
      AlgorithmConstraints.ConstraintType.BLOCK, "RSA1_5", "PBES2-HS256+A128KW", "PBES2-HS384+A192KW", "PBES2-HS512+A256KW"
   );
   private Base64Url base64url = new Base64Url();
   private String plaintextCharEncoding = "UTF-8";
   private byte[] plaintext;
   byte[] encryptedKey;
   byte[] iv;
   byte[] ciphertext;
   byte[] contentEncryptionKey;
   private AlgorithmConstraints contentEncryptionAlgorithmConstraints = AlgorithmConstraints.NO_CONSTRAINTS;
   private CryptoPrimitive decryptingPrimitive;

   public byte[] getEncryptedKey() {
      return this.encryptedKey;
   }

   public void setEncodedIv(String var1) {
      this.setIv(this.base64url.base64UrlDecode(var1));
   }

   public void setPlaintext(String var1) {
      this.plaintext = StringUtil.getBytesUnchecked(var1, this.plaintextCharEncoding);
   }

   public void setPlaintext(byte[] var1) {
      this.plaintext = var1;
   }

   public byte[] getPlaintextBytes() throws JoseException {
      if (this.plaintext == null) {
         this.decrypt();
      }

      return this.plaintext;
   }

   public String getPlaintextString() throws JoseException {
      return StringUtil.newString(this.getPlaintextBytes(), this.plaintextCharEncoding);
   }

   public JsonWebEncryption() {
      this.setAlgorithmConstraints(DEFAULT_BLOCKED);
   }

   byte[] compress(Headers var1, byte[] var2) throws InvalidAlgorithmException {
      String var3 = var1.getStringHeaderValue("zip");
      if (var3 != null) {
         AlgorithmFactoryFactory var4 = AlgorithmFactoryFactory.getInstance();
         AlgorithmFactory var5 = var4.getCompressionAlgorithmFactory();
         CompressionAlgorithm var6 = (CompressionAlgorithm)var5.getAlgorithm(var3);
         var2 = var6.compress(var2);
      }

      return var2;
   }

   @Override
   public String getPayload() throws JoseException {
      return this.getPlaintextString();
   }

   byte[] decompress(Headers var1, byte[] var2) throws JoseException {
      String var3 = var1.getStringHeaderValue("zip");
      if (var3 != null) {
         AlgorithmFactoryFactory var4 = AlgorithmFactoryFactory.getInstance();
         AlgorithmFactory var5 = var4.getCompressionAlgorithmFactory();
         CompressionAlgorithm var6 = (CompressionAlgorithm)var5.getAlgorithm(var3);
         var2 = var6.decompress(var2);
      }

      return var2;
   }

   public KeyManagementAlgorithm getAlgorithm() throws InvalidAlgorithmException {
      return this.getKeyManagementModeAlgorithm();
   }

   private void decrypt() throws JoseException {
      KeyManagementAlgorithm var1 = this.getKeyManagementModeAlgorithm();
      ContentEncryptionAlgorithm var2 = this.getContentEncryptionAlgorithm();
      ContentEncryptionKeyDescriptor var3 = var2.getContentEncryptionKeyDescriptor();
      this.checkCrit();
      CryptoPrimitive var4 = this.decryptingPrimitive == null ? this.createDecryptingPrimitive() : this.decryptingPrimitive;
      Key var5 = var1.manageForDecrypt(var4, this.getEncryptedKey(), var3, this.getHeaders(), this.getProviderCtx());
      ContentEncryptionParts var6 = new ContentEncryptionParts(this.iv, this.ciphertext, this.getIntegrity());
      byte[] var7 = this.getEncodedHeaderAsciiBytesForAdditionalAuthenticatedData();
      byte[] var8 = var5.getEncoded();
      this.checkCek(var2, var3, var8);
      byte[] var9 = var2.decrypt(var6, var7, var8, this.getHeaders(), this.getProviderCtx());
      var9 = this.decompress(this.getHeaders(), var9);
      this.setPlaintext(var9);
   }

   byte[] getEncodedHeaderAsciiBytesForAdditionalAuthenticatedData() {
      String var1 = this.getEncodedHeader();
      return StringUtil.getBytesAscii(var1);
   }

   public void setCompressionAlgorithmHeaderParameter(String var1) {
      this.setHeader("zip", var1);
   }

   public String getCompressionAlgorithmHeaderParameter() {
      return this.getHeader("zip");
   }

   public void setContentEncryptionAlgorithmConstraints(AlgorithmConstraints var1) {
      this.contentEncryptionAlgorithmConstraints = var1;
   }

   private CryptoPrimitive createDecryptingPrimitive() throws JoseException {
      KeyManagementAlgorithm var1 = this.getKeyManagementModeAlgorithm();
      Key var2 = this.getKey();
      if (this.isDoKeyValidation()) {
         ContentEncryptionAlgorithm var3 = this.getContentEncryptionAlgorithm();
         var1.validateDecryptionKey(var2, var3);
      }

      return var1.prepareForDecrypt(var2, this.headers, this.getProviderCtx());
   }

   @Override
   public String getCompactSerialization() throws JoseException {
      KeyManagementAlgorithm var1 = this.getKeyManagementModeAlgorithm();
      ContentEncryptionAlgorithm var2 = this.getContentEncryptionAlgorithm();
      ContentEncryptionKeyDescriptor var3 = var2.getContentEncryptionKeyDescriptor();
      Key var4 = this.getKey();
      if (this.isDoKeyValidation()) {
         var1.validateEncryptionKey(this.getKey(), var2);
      }

      ContentEncryptionKeys var5 = var1.manageForEncrypt(var4, var3, this.getHeaders(), this.contentEncryptionKey, this.getProviderCtx());
      this.setContentEncryptionKey(var5.getContentEncryptionKey());
      this.encryptedKey = var5.getEncryptedKey();
      byte[] var6 = this.getEncodedHeaderAsciiBytesForAdditionalAuthenticatedData();
      byte[] var7 = var5.getContentEncryptionKey();
      byte[] var8 = this.plaintext;
      if (var8 == null) {
         throw new NullPointerException("The plaintext payload for the JWE has not been set.");
      } else {
         var8 = this.compress(this.getHeaders(), var8);
         this.checkCek(var2, var3, var7);
         ContentEncryptionParts var9 = var2.encrypt(var8, var6, var7, this.getHeaders(), this.getIv(), this.getProviderCtx());
         this.setIv(var9.getIv());
         this.ciphertext = var9.getCiphertext();
         String var10 = this.base64url.base64UrlEncode(var9.getIv());
         String var11 = this.base64url.base64UrlEncode(var9.getCiphertext());
         String var12 = this.base64url.base64UrlEncode(var9.getAuthenticationTag());
         byte[] var13 = var5.getEncryptedKey();
         String var14 = this.base64url.base64UrlEncode(var13);
         return CompactSerializer.serialize(this.getEncodedHeader(), var14, var10, var11, var12);
      }
   }

   public void setContentEncryptionKey(byte[] var1) {
      this.contentEncryptionKey = var1;
   }

   public void setPlainTextCharEncoding(String var1) {
      this.plaintextCharEncoding = var1;
   }

   public CryptoPrimitive prepareDecryptingPrimitive() throws JoseException {
      this.decryptingPrimitive = this.createDecryptingPrimitive();
      return this.decryptingPrimitive;
   }

   public void enableDefaultCompression() {
      this.setCompressionAlgorithmHeaderParameter("DEF");
   }

   public byte[] getContentEncryptionKey() {
      return this.contentEncryptionKey;
   }

   public void setEncryptionMethodHeaderParameter(String var1) {
      this.setHeader("enc", var1);
   }

   public ContentEncryptionAlgorithm getContentEncryptionAlgorithm() throws InvalidAlgorithmException {
      String var1 = this.getEncryptionMethodHeaderParameter();
      if (var1 == null) {
         throw new InvalidAlgorithmException("Content encryption header (enc) not set.");
      } else {
         this.contentEncryptionAlgorithmConstraints.checkConstraint(var1);
         AlgorithmFactoryFactory var2 = AlgorithmFactoryFactory.getInstance();
         AlgorithmFactory var3 = var2.getJweContentEncryptionAlgorithmFactory();
         return (ContentEncryptionAlgorithm)var3.getAlgorithm(var1);
      }
   }

   public String getEncryptionMethodHeaderParameter() {
      return this.getHeader("enc");
   }

   public KeyManagementAlgorithm getAlgorithmNoConstraintCheck() throws InvalidAlgorithmException {
      return this.getKeyManagementModeAlgorithm(false);
   }

   public void setEncodedContentEncryptionKey(String var1) {
      this.setContentEncryptionKey(Base64Url.decode(var1));
   }

   KeyManagementAlgorithm getKeyManagementModeAlgorithm(boolean var1) throws InvalidAlgorithmException {
      String var2 = this.getAlgorithmHeaderValue();
      if (var2 == null) {
         throw new InvalidAlgorithmException("Encryption key management algorithm header (alg) not set.");
      } else {
         if (var1) {
            this.getAlgorithmConstraints().checkConstraint(var2);
         }

         AlgorithmFactoryFactory var3 = AlgorithmFactoryFactory.getInstance();
         AlgorithmFactory var4 = var3.getJweKeyManagementAlgorithmFactory();
         return (KeyManagementAlgorithm)var4.getAlgorithm(var2);
      }
   }

   public KeyManagementAlgorithm getKeyManagementModeAlgorithm() throws InvalidAlgorithmException {
      return this.getKeyManagementModeAlgorithm(true);
   }

   @Override
   protected void setCompactSerializationParts(String[] var1) throws JoseException {
      if (var1.length != 5) {
         throw new JoseException("A JWE Compact Serialization must have exactly 5 parts separated by period ('.') characters");
      } else {
         this.setEncodedHeader(var1[0]);
         this.encryptedKey = this.base64url.base64UrlDecode(var1[1]);
         this.setEncodedIv(var1[2]);
         String var2 = var1[3];
         this.checkNotEmptyPart(var2, "Encoded JWE Ciphertext");
         this.ciphertext = this.base64url.base64UrlDecode(var2);
         String var3 = var1[4];
         this.checkNotEmptyPart(var3, "Encoded JWE Authentication Tag");
         byte[] var4 = this.base64url.base64UrlDecode(var3);
         this.setIntegrity(var4);
      }
   }

   public void setIv(byte[] var1) {
      this.iv = var1;
   }

   private void checkCek(ContentEncryptionAlgorithm var1, ContentEncryptionKeyDescriptor var2, byte[] var3) throws InvalidKeyException {
      int var4 = var2.getContentEncryptionKeyByteLength();
      if (var3.length != var4) {
         throw new InvalidKeyException(
            ByteUtil.bitLength(var3)
               + " bit content encryption key is not the correct size for the "
               + var1.getAlgorithmIdentifier()
               + " content encryption algorithm ("
               + ByteUtil.bitLength(var4)
               + ")."
         );
      }
   }

   @Override
   public void setPayload(String var1) {
      this.setPlaintext(var1);
   }

   public byte[] getIv() {
      return this.iv;
   }
}
