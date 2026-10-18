package org.jose4j.keys;

import java.math.BigInteger;
import java.security.Key;
import java.security.PrivateKey;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.security.interfaces.EdECPrivateKey;
import java.security.interfaces.EdECPublicKey;
import java.security.spec.EdECPoint;
import java.security.spec.EdECPrivateKeySpec;
import java.security.spec.EdECPublicKeySpec;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.NamedParameterSpec;
import java.util.Arrays;
import java.util.Optional;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.JoseException;

public class EdDsaKeyUtil extends OctetKeyPairUtil {
   public static final String ED25519 = "Ed25519";
   public static final String ED448 = "Ed448";
   private static final byte BYTE_01111111 = 127;
   private static final byte BYTE_10000000 = -128;
   private static final byte BYTE_00000000 = 0;

   public EdDsaKeyUtil() {
      this(null, null);
   }

   public EdDsaKeyUtil(String var1, SecureRandom var2) {
      super(var1, var2);
   }

   @Override
   String getAlgorithm() {
      return "EDDSA";
   }

   @Override
   public byte[] rawPublicKey(Key var1) {
      EdECPublicKey var2 = (EdECPublicKey)var1;
      EdECPoint var3 = var2.getPoint();
      BigInteger var4 = var3.getY();
      byte[] var5 = var4.toByteArray();
      byte[] var6 = ByteUtil.reverse(var5);
      int var7 = var2.getParams().getName().equals("Ed25519") ? 32 : 57;
      if (var6.length != var7) {
         var6 = Arrays.copyOf(var6, var7);
      }

      int var8 = var3.isXOdd() ? -128 : 0;
      var6[var6.length - 1] = (byte)(var6[var6.length - 1] | var8);
      return var6;
   }

   @Override
   public byte[] rawPrivateKey(PrivateKey var1) {
      EdECPrivateKey var2 = (EdECPrivateKey)var1;
      Optional var3 = var2.getBytes();
      return var3.orElse(ByteUtil.EMPTY_BYTES);
   }

   public EdECPublicKey publicKey(byte[] var1, String var2) throws JoseException {
      var1 = (byte[])var1.clone();
      byte var3 = var1[var1.length - 1];
      var1[var1.length - 1] = (byte)(var1[var1.length - 1] & 127);
      boolean var4 = (var3 & -128) != 0;
      var1 = ByteUtil.reverse(var1);
      BigInteger var5 = BigEndianBigInteger.fromBytes(var1);
      NamedParameterSpec var6 = this.getNamedParameterSpec(var2);
      EdECPoint var7 = new EdECPoint(var4, var5);
      EdECPublicKeySpec var8 = new EdECPublicKeySpec(var6, var7);

      try {
         PublicKey var9 = this.getKeyFactory().generatePublic(var8);
         return (EdECPublicKey)var9;
      } catch (InvalidKeySpecException var10) {
         throw new JoseException("Invalid key spec: " + var10, var10);
      }
   }

   public EdECPrivateKey privateKey(byte[] var1, String var2) throws JoseException {
      NamedParameterSpec var3 = this.getNamedParameterSpec(var2);
      EdECPrivateKeySpec var4 = new EdECPrivateKeySpec(var3, var1);

      try {
         PrivateKey var5 = this.getKeyFactory().generatePrivate(var4);
         return (EdECPrivateKey)var5;
      } catch (InvalidKeySpecException var6) {
         throw new JoseException("Invalid key spec: " + var6, var6);
      }
   }

   public static boolean isEdECPublicKey(Key var0) {
      try {
         return var0 instanceof EdECPublicKey;
      } catch (NoClassDefFoundError var2) {
         return false;
      }
   }

   public static boolean isEdECPrivateKey(Key var0) {
      try {
         return var0 instanceof EdECPrivateKey;
      } catch (NoClassDefFoundError var2) {
         return false;
      }
   }
}
