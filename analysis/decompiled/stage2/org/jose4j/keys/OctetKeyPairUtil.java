package org.jose4j.keys;

import java.security.InvalidAlgorithmParameterException;
import java.security.Key;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.spec.NamedParameterSpec;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;

public abstract class OctetKeyPairUtil extends KeyPairUtil {
   public OctetKeyPairUtil(String var1, SecureRandom var2) {
      super(var1, var2);
   }

   public static OctetKeyPairUtil getOctetKeyPairUtil(String var0, String var1, SecureRandom var2) {
      if (var0.equals("Ed25519") || var0.equals("Ed448")) {
         return new EdDsaKeyUtil(var1, var2);
      } else {
         return !var0.equals("X25519") && !var0.equals("X448") ? null : new XDHKeyUtil(var1, var2);
      }
   }

   public abstract PublicKey publicKey(byte[] var1, String var2) throws JoseException;

   public abstract PrivateKey privateKey(byte[] var1, String var2) throws JoseException;

   public abstract byte[] rawPublicKey(Key var1);

   public abstract byte[] rawPrivateKey(PrivateKey var1);

   public KeyPair generateKeyPair(String var1) throws JoseException {
      KeyPairGenerator var2 = this.getKeyPairGenerator();
      NamedParameterSpec var3 = this.getNamedParameterSpec(var1);

      try {
         if (this.secureRandom == null) {
            var2.initialize(var3);
         } else {
            var2.initialize(var3, this.secureRandom);
         }

         return var2.generateKeyPair();
      } catch (InvalidAlgorithmParameterException var5) {
         throw new JoseException("Unable to create EdDSA key pair: " + var5, var5);
      }
   }

   NamedParameterSpec getNamedParameterSpec(String var1) throws JoseException {
      try {
         return new NamedParameterSpec(var1);
      } catch (NoClassDefFoundError var3) {
         throw new JoseException(var1 + " NamedParameterSpec not available. " + ExceptionHelp.toStringWithCauses(var3));
      }
   }
}
