package org.jose4j.keys;

import java.security.KeyFactory;
import java.security.KeyPairGenerator;
import java.security.NoSuchAlgorithmException;
import java.security.NoSuchProviderException;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.Security;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.X509EncodedKeySpec;
import java.util.Set;
import org.jose4j.base64url.SimplePEMEncoder;
import org.jose4j.lang.JoseException;

abstract class KeyPairUtil {
   private static final String BEGIN_PUBLIC_KEY = "-----BEGIN PUBLIC KEY-----";
   private static final String END_PUBLIC_KEY = "-----END PUBLIC KEY-----";
   protected String provider;
   protected SecureRandom secureRandom;

   public boolean isAvailable() {
      Set var1 = Security.getAlgorithms("KeyFactory");
      Set var2 = Security.getAlgorithms("KeyPairGenerator");
      String var3 = this.getAlgorithm();
      return var2.contains(var3) && var1.contains(var3);
   }

   public PublicKey fromPemEncoded(String var1) throws JoseException, InvalidKeySpecException {
      int var2 = var1.indexOf("-----BEGIN PUBLIC KEY-----") + "-----BEGIN PUBLIC KEY-----".length();
      int var3 = var1.indexOf("-----END PUBLIC KEY-----");
      String var4 = var1.substring(var2, var3).trim();
      byte[] var5 = SimplePEMEncoder.decode(var4);
      X509EncodedKeySpec var6 = new X509EncodedKeySpec(var5);
      KeyFactory var7 = this.getKeyFactory();
      return var7.generatePublic(var6);
   }

   public static String pemEncode(PublicKey var0) {
      byte[] var1 = var0.getEncoded();
      return "-----BEGIN PUBLIC KEY-----\r\n" + SimplePEMEncoder.encode(var1) + "-----END PUBLIC KEY-----";
   }

   protected KeyPairUtil(String var1, SecureRandom var2) {
      this.provider = var1;
      this.secureRandom = var2;
   }

   abstract String getAlgorithm();

   protected KeyPairGenerator getKeyPairGenerator() throws JoseException {
      String var1 = this.getAlgorithm();

      try {
         return this.provider == null ? KeyPairGenerator.getInstance(var1) : KeyPairGenerator.getInstance(var1, this.provider);
      } catch (NoSuchAlgorithmException var3) {
         throw new JoseException("Couldn't find " + var1 + " KeyPairGenerator! " + var3, var3);
      } catch (NoSuchProviderException var4) {
         throw new JoseException("Cannot get KeyPairGenerator instance with provider " + this.provider, var4);
      }
   }

   protected KeyFactory getKeyFactory() throws JoseException {
      String var1 = this.getAlgorithm();

      try {
         return this.provider == null ? KeyFactory.getInstance(var1) : KeyFactory.getInstance(var1, this.provider);
      } catch (NoSuchAlgorithmException var3) {
         throw new JoseException("Couldn't find " + var1 + " KeyFactory! " + var3, var3);
      } catch (NoSuchProviderException var4) {
         throw new JoseException("Cannot get KeyFactory instance with provider " + this.provider, var4);
      }
   }
}
