package org.jose4j.keys;

import java.math.BigInteger;
import java.security.InvalidAlgorithmParameterException;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.interfaces.ECPrivateKey;
import java.security.interfaces.ECPublicKey;
import java.security.spec.ECParameterSpec;
import java.security.spec.ECPoint;
import java.security.spec.ECPrivateKeySpec;
import java.security.spec.ECPublicKeySpec;
import java.security.spec.InvalidKeySpecException;
import org.jose4j.lang.JoseException;

public class EcKeyUtil extends KeyPairUtil {
   public static final String EC = "EC";

   public ECPrivateKey privateKey(BigInteger var1, ECParameterSpec var2) throws JoseException {
      ECPrivateKeySpec var3 = new ECPrivateKeySpec(var1, var2);

      try {
         PrivateKey var4 = this.getKeyFactory().generatePrivate(var3);
         return (ECPrivateKey)var4;
      } catch (InvalidKeySpecException var5) {
         throw new JoseException("Invalid key spec: " + var5, var5);
      }
   }

   public ECPublicKey publicKey(BigInteger var1, BigInteger var2, ECParameterSpec var3) throws JoseException {
      ECPoint var4 = new ECPoint(var1, var2);
      ECPublicKeySpec var5 = new ECPublicKeySpec(var4, var3);

      try {
         PublicKey var6 = this.getKeyFactory().generatePublic(var5);
         return (ECPublicKey)var6;
      } catch (InvalidKeySpecException var7) {
         throw new JoseException("Invalid key spec: " + var7, var7);
      }
   }

   public EcKeyUtil(String var1, SecureRandom var2) {
      super(var1, var2);
   }

   public EcKeyUtil() {
      this(null, null);
   }

   @Override
   String getAlgorithm() {
      return "EC";
   }

   public KeyPair generateKeyPair(ECParameterSpec var1) throws JoseException {
      KeyPairGenerator var2 = this.getKeyPairGenerator();

      try {
         if (this.secureRandom == null) {
            var2.initialize(var1);
         } else {
            var2.initialize(var1, this.secureRandom);
         }

         return var2.generateKeyPair();
      } catch (InvalidAlgorithmParameterException var4) {
         throw new JoseException("Unable to create EC key pair. " + var4.getMessage(), var4);
      }
   }
}
