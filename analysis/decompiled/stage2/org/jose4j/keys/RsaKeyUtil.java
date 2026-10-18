package org.jose4j.keys;

import java.math.BigInteger;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.interfaces.RSAPrivateKey;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.RSAPrivateCrtKeySpec;
import java.security.spec.RSAPrivateKeySpec;
import java.security.spec.RSAPublicKeySpec;
import org.jose4j.lang.JoseException;

public class RsaKeyUtil extends KeyPairUtil {
   public static final String RSA = "RSA";

   public RSAPrivateKey privateKey(BigInteger var1, BigInteger var2) throws JoseException {
      RSAPrivateKeySpec var3 = new RSAPrivateKeySpec(var1, var2);
      return this.getRsaPrivateKey(var3);
   }

   public RSAPrivateKey privateKey(
      BigInteger var1, BigInteger var2, BigInteger var3, BigInteger var4, BigInteger var5, BigInteger var6, BigInteger var7, BigInteger var8
   ) throws JoseException {
      RSAPrivateCrtKeySpec var9 = new RSAPrivateCrtKeySpec(var1, var2, var3, var4, var5, var6, var7, var8);
      return this.getRsaPrivateKey(var9);
   }

   public RSAPrivateKey getRsaPrivateKey(RSAPrivateKeySpec var1) throws JoseException {
      try {
         PrivateKey var2 = this.getKeyFactory().generatePrivate(var1);
         return (RSAPrivateKey)var2;
      } catch (InvalidKeySpecException var3) {
         throw new JoseException("Invalid key spec: " + var3, var3);
      }
   }

   public RSAPublicKey publicKey(BigInteger var1, BigInteger var2) throws JoseException {
      RSAPublicKeySpec var3 = new RSAPublicKeySpec(var1, var2);

      try {
         PublicKey var4 = this.getKeyFactory().generatePublic(var3);
         return (RSAPublicKey)var4;
      } catch (InvalidKeySpecException var5) {
         throw new JoseException("Invalid key spec: " + var5, var5);
      }
   }

   public RsaKeyUtil(String var1, SecureRandom var2) {
      super(var1, var2);
   }

   public RsaKeyUtil() {
      this(null, null);
   }

   @Override
   String getAlgorithm() {
      return "RSA";
   }

   public KeyPair generateKeyPair(int var1) throws JoseException {
      KeyPairGenerator var2 = this.getKeyPairGenerator();
      if (this.secureRandom == null) {
         var2.initialize(var1);
      } else {
         var2.initialize(var1, this.secureRandom);
      }

      return var2.generateKeyPair();
   }
}
