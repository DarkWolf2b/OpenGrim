package org.jose4j.jws;

import java.security.Key;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Mac;
import javax.crypto.SecretKey;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.AlgorithmInfo;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.keys.KeyPersuasion;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.jose4j.mac.MacUtil;

public class HmacUsingShaAlgorithm extends AlgorithmInfo implements JsonWebSignatureAlgorithm {
   private int minimumKeyLength;

   @Override
   public boolean isAvailable() {
      try {
         Mac.getInstance(this.getJavaAlgorithm());
         return true;
      } catch (NoSuchAlgorithmException var2) {
         return false;
      }
   }

   @Override
   public void validateSigningKey(Key var1) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public CryptoPrimitive prepareForSign(Key var1, ProviderContext var2) throws JoseException {
      Mac var3 = this.getMacInstance(var1, var2);
      return new CryptoPrimitive(var3);
   }

   private Mac getMacInstance(Key var1, ProviderContext var2) throws JoseException {
      String var3 = var2.getSuppliedKeyProviderContext().getMacProvider();
      return MacUtil.getInitializedMac(this.getJavaAlgorithm(), var1, var3);
   }

   public HmacUsingShaAlgorithm(String var1, String var2, int var3) {
      this.setAlgorithmIdentifier(var1);
      this.setJavaAlgorithm(var2);
      this.setKeyPersuasion(KeyPersuasion.SYMMETRIC);
      this.setKeyType("oct");
      this.minimumKeyLength = var3;
   }

   @Override
   public byte[] sign(CryptoPrimitive var1, byte[] var2) throws JoseException {
      Mac var3 = var1.getMac();
      return var3.doFinal(var2);
   }

   void validateKey(Key var1) throws InvalidKeyException {
      if (var1 == null) {
         throw new InvalidKeyException("key is null");
      } else {
         if (var1.getEncoded() != null) {
            int var2 = ByteUtil.bitLength(var1.getEncoded());
            if (var2 < this.minimumKeyLength) {
               throw new InvalidKeyException(
                  "A key of the same size as the hash output (i.e. "
                     + this.minimumKeyLength
                     + " bits for "
                     + this.getAlgorithmIdentifier()
                     + ") or larger MUST be used with the HMAC SHA algorithms but this key is only "
                     + var2
                     + " bits"
               );
            }
         }
      }
   }

   @Override
   public void validateVerificationKey(Key var1) throws InvalidKeyException {
      this.validateKey(var1);
   }

   @Override
   public boolean verifySignature(byte[] var1, Key var2, byte[] var3, ProviderContext var4) throws JoseException {
      if (!(var2 instanceof SecretKey)) {
         throw new InvalidKeyException(var2.getClass() + " cannot be used for HMAC verification.");
      } else {
         Mac var5 = this.getMacInstance(var2, var4);
         byte[] var6 = var5.doFinal(var3);
         return ByteUtil.secureEquals(var1, var6);
      }
   }

   public static class HmacSha256 extends HmacUsingShaAlgorithm {
      public HmacSha256() {
         super("HS256", "HmacSHA256", 256);
      }
   }

   public static class HmacSha384 extends HmacUsingShaAlgorithm {
      public HmacSha384() {
         super("HS384", "HmacSHA384", 384);
      }
   }

   public static class HmacSha512 extends HmacUsingShaAlgorithm {
      public HmacSha512() {
         super("HS512", "HmacSHA512", 512);
      }
   }
}
