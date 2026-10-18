package org.jose4j.jwk;

import java.math.BigInteger;
import java.security.interfaces.RSAPrivateCrtKey;
import java.security.interfaces.RSAPrivateKey;
import java.security.interfaces.RSAPublicKey;
import java.util.HashMap;
import java.util.Map;
import org.jose4j.keys.RsaKeyUtil;
import org.jose4j.lang.JoseException;

public class RsaJsonWebKey extends PublicJsonWebKey {
   public static final String MODULUS_MEMBER_NAME = "n";
   public static final String EXPONENT_MEMBER_NAME = "e";
   public static final String PRIVATE_EXPONENT_MEMBER_NAME = "d";
   public static final String FIRST_PRIME_FACTOR_MEMBER_NAME = "p";
   public static final String SECOND_PRIME_FACTOR_MEMBER_NAME = "q";
   public static final String FIRST_FACTOR_CRT_EXPONENT_MEMBER_NAME = "dp";
   public static final String SECOND_FACTOR_CRT_EXPONENT_MEMBER_NAME = "dq";
   public static final String FIRST_CRT_COEFFICIENT_MEMBER_NAME = "qi";
   public static final String OTHER_PRIMES_INFO_MEMBER_NAME = "oth";
   public static final String PRIME_FACTOR_OTHER_MEMBER_NAME = "r";
   public static final String FACTOR_CRT_EXPONENT_OTHER_MEMBER_NAME = "d";
   public static final String FACTOR_CRT_COEFFICIENT = "t";
   public static final String KEY_TYPE = "RSA";

   public RSAPublicKey getRSAPublicKey() {
      return this.getRsaPublicKey();
   }

   public RSAPrivateKey getRsaPrivateKey() {
      return (RSAPrivateKey)this.privateKey;
   }

   public RSAPublicKey getRsaPublicKey() {
      return (RSAPublicKey)this.key;
   }

   public RsaJsonWebKey(RSAPublicKey var1) {
      super(var1);
   }

   public RsaJsonWebKey(Map<String, Object> var1) throws JoseException {
      this(var1, null);
   }

   public RsaJsonWebKey(Map<String, Object> var1, String var2) throws JoseException {
      super(var1, var2);
      BigInteger var3 = this.getBigIntFromBase64UrlEncodedParam(var1, "n", true);
      BigInteger var4 = this.getBigIntFromBase64UrlEncodedParam(var1, "e", true);
      RsaKeyUtil var5 = new RsaKeyUtil(var2, null);
      this.key = var5.publicKey(var3, var4);
      this.checkForBareKeyCertMismatch();
      if (var1.containsKey("d")) {
         BigInteger var6 = this.getBigIntFromBase64UrlEncodedParam(var1, "d", false);
         if (var1.containsKey("p")) {
            BigInteger var7 = this.getBigIntFromBase64UrlEncodedParam(var1, "p", false);
            BigInteger var8 = this.getBigIntFromBase64UrlEncodedParam(var1, "q", false);
            BigInteger var9 = this.getBigIntFromBase64UrlEncodedParam(var1, "dp", false);
            BigInteger var10 = this.getBigIntFromBase64UrlEncodedParam(var1, "dq", false);
            BigInteger var11 = this.getBigIntFromBase64UrlEncodedParam(var1, "qi", false);
            this.privateKey = var5.privateKey(var3, var4, var6, var7, var8, var9, var10, var11);
         } else {
            this.privateKey = var5.privateKey(var3, var6);
         }
      }

      this.removeFromOtherParams(new String[]{"n", "e", "d", "p", "q", "dp", "dq", "qi"});
   }

   @Override
   protected String produceThumbprintHashInput() {
      String var1 = "{\"e\":\"%s\",\"kty\":\"RSA\",\"n\":\"%s\"}";
      HashMap var2 = new HashMap();
      this.fillPublicTypeSpecificParams(var2);
      return String.format(var1, var2.get("e"), var2.get("n"));
   }

   @Override
   protected void fillPublicTypeSpecificParams(Map<String, Object> var1) {
      RSAPublicKey var2 = this.getRsaPublicKey();
      this.putBigIntAsBase64UrlEncodedParam(var1, "n", var2.getModulus());
      this.putBigIntAsBase64UrlEncodedParam(var1, "e", var2.getPublicExponent());
   }

   @Override
   protected void fillPrivateTypeSpecificParams(Map<String, Object> var1) {
      RSAPrivateKey var2 = this.getRsaPrivateKey();
      if (var2 != null) {
         this.putBigIntAsBase64UrlEncodedParam(var1, "d", var2.getPrivateExponent());
         if (var2 instanceof RSAPrivateCrtKey) {
            RSAPrivateCrtKey var3 = (RSAPrivateCrtKey)var2;
            this.putBigIntAsBase64UrlEncodedParam(var1, "p", var3.getPrimeP());
            this.putBigIntAsBase64UrlEncodedParam(var1, "q", var3.getPrimeQ());
            this.putBigIntAsBase64UrlEncodedParam(var1, "dp", var3.getPrimeExponentP());
            this.putBigIntAsBase64UrlEncodedParam(var1, "dq", var3.getPrimeExponentQ());
            this.putBigIntAsBase64UrlEncodedParam(var1, "qi", var3.getCrtCoefficient());
         }
      }
   }

   @Override
   public String getKeyType() {
      return "RSA";
   }
}
