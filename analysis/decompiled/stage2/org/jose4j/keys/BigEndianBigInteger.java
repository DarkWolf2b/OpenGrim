package org.jose4j.keys;

import java.math.BigInteger;
import org.jose4j.base64url.Base64Url;
import org.jose4j.lang.ByteUtil;

public class BigEndianBigInteger {
   public static BigInteger fromBase64Url(String var0) {
      Base64Url var1 = new Base64Url();
      byte[] var2 = var1.base64UrlDecode(var0);
      return fromBytes(var2);
   }

   public static String toBase64Url(BigInteger var0, int var1) {
      Base64Url var2 = new Base64Url();
      byte[] var3 = toByteArray(var0, var1);
      return var2.base64UrlEncode(var3);
   }

   public static String toBase64Url(BigInteger var0) {
      Base64Url var1 = new Base64Url();
      byte[] var2 = toByteArray(var0);
      return var1.base64UrlEncode(var2);
   }

   public BigEndianBigInteger() {
   }

   public static byte[] toByteArray(BigInteger var0) {
      if (var0.signum() < 0) {
         String var3 = "Cannot convert negative values to an unsigned magnitude byte array: " + var0;
         throw new IllegalArgumentException(var3);
      } else {
         byte[] var1 = var0.toByteArray();
         byte[] var2;
         if (var0.bitLength() % 8 == 0 && var1[0] == 0 && var1.length > 1) {
            var2 = ByteUtil.subArray(var1, 1, var1.length - 1);
         } else {
            var2 = var1;
         }

         return var2;
      }
   }

   public static byte[] toByteArray(BigInteger var0, int var1) {
      byte[] var2 = toByteArray(var0);
      if (var1 > var2.length) {
         var2 = ByteUtil.concat(new byte[var1 - var2.length], var2);
      }

      return var2;
   }

   public static BigInteger fromBytes(byte[] var0) {
      return new BigInteger(1, var0);
   }
}
