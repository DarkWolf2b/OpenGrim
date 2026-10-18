package org.jose4j.keys;

import java.math.BigInteger;
import java.security.Key;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.interfaces.XECPrivateKey;
import java.security.interfaces.XECPublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.NamedParameterSpec;
import java.security.spec.XECPrivateKeySpec;
import java.security.spec.XECPublicKeySpec;
import java.util.Arrays;
import java.util.Optional;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.JoseException;

public class XDHKeyUtil extends OctetKeyPairUtil {
   public static final String X25519 = "X25519";
   public static final String X448 = "X448";
   private static final BigInteger P_X25519 = new BigInteger("57896044618658097711785492504343953926634992332820282019728792003956564819949");
   private static final BigInteger P_X448 = new BigInteger(
      "726838724295606890549323807888004534353641360687318060281490199180612328166730772686396383698676545930088884461843637361053498018365439"
   );

   public XDHKeyUtil() {
      this(null, null);
   }

   public XDHKeyUtil(String var1, SecureRandom var2) {
      super(var1, var2);
   }

   @Override
   public byte[] rawPublicKey(Key var1) {
      XECPublicKey var2 = (XECPublicKey)var1;
      BigInteger var3 = var2.getU();
      String var4 = ((NamedParameterSpec)var2.getParams()).getName();
      boolean var5 = "X25519".equals(var4);
      BigInteger var6 = var5 ? P_X25519 : P_X448;
      var3 = var3.mod(var6);
      byte[] var7 = ByteUtil.reverse(var3.toByteArray());
      int var8 = var5 ? 32 : 57;
      if (var7.length != var8) {
         var7 = Arrays.copyOf(var7, var8);
      }

      return var7;
   }

   @Override
   public byte[] rawPrivateKey(PrivateKey var1) {
      XECPrivateKey var2 = (XECPrivateKey)var1;
      Optional var3 = var2.getScalar();
      return var3.orElse(ByteUtil.EMPTY_BYTES);
   }

   public XECPublicKey publicKey(byte[] var1, String var2) throws JoseException {
      NamedParameterSpec var3 = this.getNamedParameterSpec(var2);
      byte[] var4 = ByteUtil.reverse(var1);
      int var5 = "X25519".equals(var2) ? 255 : 448;
      int var6 = var5 % 8;
      if (var6 != 0) {
         int var7 = (1 << var6) - 1;
         var4[0] = (byte)(var4[0] & var7);
      }

      BigInteger var11 = new BigInteger(1, var4);
      XECPublicKeySpec var8 = new XECPublicKeySpec(var3, var11);

      try {
         PublicKey var9 = this.getKeyFactory().generatePublic(var8);
         return (XECPublicKey)var9;
      } catch (InvalidKeySpecException var10) {
         throw new JoseException("Invalid key spec: " + var10, var10);
      }
   }

   public XECPrivateKey privateKey(byte[] var1, String var2) throws JoseException {
      NamedParameterSpec var3 = this.getNamedParameterSpec(var2);
      XECPrivateKeySpec var4 = new XECPrivateKeySpec(var3, var1);

      try {
         PrivateKey var5 = this.getKeyFactory().generatePrivate(var4);
         return (XECPrivateKey)var5;
      } catch (InvalidKeySpecException var6) {
         throw new JoseException("Invalid key spec: " + var6, var6);
      }
   }

   @Override
   String getAlgorithm() {
      return "XDH";
   }

   public static boolean isXECPublicKey(Key var0) {
      try {
         return var0 instanceof XECPublicKey;
      } catch (NoClassDefFoundError var2) {
         return false;
      }
   }

   public static boolean isXECPrivateKey(Key var0) {
      try {
         return var0 instanceof XECPrivateKey;
      } catch (NoClassDefFoundError var2) {
         return false;
      }
   }
}
