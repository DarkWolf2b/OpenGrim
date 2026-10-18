package org.jose4j.jws;

import java.io.IOException;
import java.math.BigInteger;
import java.security.Key;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.interfaces.ECKey;
import java.security.spec.ECParameterSpec;
import java.security.spec.EllipticCurve;
import org.jose4j.jca.ProviderContext;
import org.jose4j.jwa.CryptoPrimitive;
import org.jose4j.jwk.PublicJsonWebKey;
import org.jose4j.keys.BigEndianBigInteger;
import org.jose4j.keys.EllipticCurves;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.InvalidKeyException;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class EcdsaUsingShaAlgorithm extends BaseSignatureAlgorithm implements JsonWebSignatureAlgorithm {
   private final String curveName;
   private final int signatureByteLength;

   @Override
   public void validatePublicKey(PublicKey var1) throws InvalidKeyException {
      this.validateKeySpec(var1);
   }

   @Override
   public void validatePrivateKey(PrivateKey var1) throws InvalidKeyException {
      this.validateKeySpec(var1);
   }

   private void validateKeySpec(Key var1) throws InvalidKeyException {
      if (var1 instanceof ECKey) {
         ECKey var2 = (ECKey)var1;
         ECParameterSpec var3 = var2.getParams();
         EllipticCurve var4 = var3.getCurve();
         String var5 = EllipticCurves.getName(var4);
         if (!this.getCurveName().equals(var5)) {
            throw new InvalidKeyException(
               this.getAlgorithmIdentifier() + "/" + this.getJavaAlgorithm() + " expects a key using " + this.getCurveName() + " but was " + var5
            );
         }
      }
   }

   public EcdsaUsingShaAlgorithm(String var1, String var2, String var3, int var4) {
      super(var1, var2, "EC");
      this.curveName = var3;
      this.signatureByteLength = var4;
   }

   @Override
   public byte[] sign(CryptoPrimitive var1, byte[] var2) throws JoseException {
      byte[] var3 = super.sign(var1, var2);

      try {
         return convertDerToConcatenated(var3, this.signatureByteLength);
      } catch (IOException var5) {
         throw new JoseException("Unable to convert DER encoding to R and S as a concatenated byte array.", var5);
      }
   }

   public static byte[] convertDerToConcatenated(byte[] var0, int var1) throws IOException {
      if (var0.length >= 8 && var0[0] == 48) {
         byte var2;
         if (var0[1] > 0) {
            var2 = 2;
         } else {
            if (var0[1] != -127) {
               throw new IOException("Invalid format of ECDSA signature");
            }

            var2 = 3;
         }

         byte var3 = var0[var2 + 1];
         int var4 = var3;

         while (var4 > 0 && var0[var2 + 2 + var3 - var4] == 0) {
            var4--;
         }

         byte var5 = var0[var2 + 2 + var3 + 1];
         int var6 = var5;

         while (var6 > 0 && var0[var2 + 2 + var3 + 2 + var5 - var6] == 0) {
            var6--;
         }

         int var7 = Math.max(var4, var6);
         var7 = Math.max(var7, var1 / 2);
         if ((var0[var2 - 1] & 255) == var0.length - var2 && (var0[var2 - 1] & 255) == 2 + var3 + 2 + var5 && var0[var2] == 2 && var0[var2 + 2 + var3] == 2) {
            byte[] var8 = new byte[2 * var7];
            System.arraycopy(var0, var2 + 2 + var3 - var4, var8, var7 - var4, var4);
            System.arraycopy(var0, var2 + 2 + var3 + 2 + var5 - var6, var8, 2 * var7 - var6, var6);
            return var8;
         } else {
            throw new IOException("Invalid format of ECDSA signature");
         }
      } else {
         throw new IOException("Invalid format of ECDSA signature");
      }
   }

   public static byte[] convertConcatenatedToDer(byte[] var0) throws IOException {
      int var1 = var0.length / 2;
      int var2 = var1;

      while (var2 > 1 && var0[var1 - var2] == 0) {
         var2--;
      }

      int var3 = var2;
      if (var0[var1 - var2] < 0) {
         var3 = var2 + 1;
      }

      int var4 = var1;

      while (var4 > 1 && var0[2 * var1 - var4] == 0) {
         var4--;
      }

      int var5 = var4;
      if (var0[2 * var1 - var4] < 0) {
         var5 = var4 + 1;
      }

      int var6 = 2 + var3 + 2 + var5;
      if (var6 > 255) {
         throw new IOException("Invalid format of ECDSA signature");
      } else {
         int var7;
         byte[] var8;
         if (var6 < 128) {
            var8 = new byte[4 + var3 + 2 + var5];
            var7 = 1;
         } else {
            var8 = new byte[5 + var3 + 2 + var5];
            var8[1] = -127;
            var7 = 2;
         }

         var8[0] = 48;
         var8[var7++] = (byte)var6;
         var8[var7++] = 2;
         var8[var7++] = (byte)var3;
         System.arraycopy(var0, var1 - var2, var8, var7 + var3 - var2, var2);
         var7 += var3;
         var8[var7++] = 2;
         var8[var7++] = (byte)var5;
         System.arraycopy(var0, 2 * var1 - var4, var8, var7 + var5 - var4, var4);
         return var8;
      }
   }

   @Override
   public boolean verifySignature(byte[] var1, Key var2, byte[] var3, ProviderContext var4) throws JoseException {
      if (var1.length > this.signatureByteLength) {
         return false;
      } else {
         byte[] var5 = ByteUtil.leftHalf(var1);
         BigInteger var6 = BigEndianBigInteger.fromBytes(var5);
         byte[] var7 = ByteUtil.rightHalf(var1);
         BigInteger var8 = BigEndianBigInteger.fromBytes(var7);
         ECParameterSpec var9 = EllipticCurves.getSpec(this.curveName);
         BigInteger var10 = var9.getOrder();
         if (!var6.mod(var10).equals(BigInteger.ZERO) && !var8.mod(var10).equals(BigInteger.ZERO)) {
            byte[] var11;
            try {
               var11 = convertConcatenatedToDer(var1);
            } catch (IOException var13) {
               throw new JoseException("Unable to convert R and S as a concatenated byte array to DER encoding.", var13);
            }

            return super.verifySignature(var11, var2, var3, var4);
         } else {
            return false;
         }
      }
   }

   public String getCurveName() {
      return this.curveName;
   }

   public static class EcdsaP256UsingSha256 extends EcdsaUsingShaAlgorithm {
      public EcdsaP256UsingSha256() {
         super("ES256", "SHA256withECDSA", "P-256", 64);
      }
   }

   public static class EcdsaP384UsingSha384 extends EcdsaUsingShaAlgorithm {
      public EcdsaP384UsingSha384() {
         super("ES384", "SHA384withECDSA", "P-384", 96);
      }
   }

   public static class EcdsaP521UsingSha512 extends EcdsaUsingShaAlgorithm {
      public EcdsaP521UsingSha512() {
         super("ES512", "SHA512withECDSA", "P-521", 132);
      }
   }

   public static class EcdsaSECP256K1UsingSha256 extends EcdsaUsingShaAlgorithm {
      Logger log = LoggerFactory.getLogger(this.getClass());

      @Override
      public boolean isAvailable() {
         if (super.isAvailable()) {
            try {
               PublicJsonWebKey var1 = PublicJsonWebKey.Factory.newPublicJwk(
                  "{\"kty\":\"EC\",\"x\":\"gi0g9DzM2SvjVV7iD_upIU0urmZRjpoIc4Efu8563y8\",\"y\":\"Y5K6GofrdlWNLlfT8-AEyJyVZ3yJJcGgkGroHQCAhmk\",\"crv\":\"secp256k1\",\"d\":\"Vd99BKh6pxt3mXSDJzHuVrCq52xBXAKVahbuFb6dqBc\"}"
               );
               CryptoPrimitive var2 = this.prepareForSign(var1.getPrivateKey(), new ProviderContext());
               byte[] var3 = this.sign(var2, new byte[]{2, 6});
               return var3 != null;
            } catch (JoseException var4) {
               this.log.debug(this.getAlgorithmIdentifier() + " is not available due to " + ExceptionHelp.toStringWithCauses(var4));
               return false;
            }
         } else {
            return false;
         }
      }

      public EcdsaSECP256K1UsingSha256() {
         super("ES256K", "SHA256withECDSA", "secp256k1", 64);
      }
   }
}
