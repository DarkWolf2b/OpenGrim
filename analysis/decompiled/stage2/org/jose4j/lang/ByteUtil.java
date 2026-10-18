package org.jose4j.lang;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.security.SecureRandom;
import java.util.Arrays;
import org.jose4j.base64url.Base64Url;

public class ByteUtil {
   public static final byte[] EMPTY_BYTES = new byte[0];
   private static final int MAX_BYTE_LENGTH = 268435455;

   public static boolean secureEquals(byte[] var0, byte[] var1) {
      var0 = var0 == null ? EMPTY_BYTES : var0;
      var1 = var1 == null ? EMPTY_BYTES : var1;
      int var2 = Math.min(var0.length, var1.length);
      int var3 = Math.max(var0.length, var1.length);
      int var4 = 0;

      for (int var5 = 0; var5 < var2; var5++) {
         var4 |= var0[var5] ^ var1[var5];
      }

      return var4 == 0 && var2 == var3;
   }

   public static String toDebugString(byte[] var0) {
      Base64Url var1 = new Base64Url();
      String var2 = var1.base64UrlEncode(var0);
      int[] var3 = convertSignedTwosCompToUnsigned(var0);
      return Arrays.toString(var3) + "(" + var3.length + "bytes/" + bitLength(var3.length) + "bits) | base64url encoded: " + var2;
   }

   public static byte[] subArray(byte[] var0, int var1, int var2) {
      byte[] var3 = new byte[var2];
      System.arraycopy(var0, var1, var3, 0, var3.length);
      return var3;
   }

   public ByteUtil() {
   }

   public static byte[] reverse(byte[] var0) {
      if (var0 == null) {
         return null;
      } else {
         byte[] var1 = new byte[var0.length];

         for (int var2 = 0; var2 < var0.length; var2++) {
            var1[var1.length - 1 - var2] = var0[var2];
         }

         return var1;
      }
   }

   public static byte getByte(int var0) {
      byte[] var1 = getBytes(var0);
      if (var1[0] == 0 && var1[1] == 0 && var1[2] == 0) {
         return var1[3];
      } else {
         throw new IllegalArgumentException("Integer value (" + var0 + ") too large to stuff into one byte.");
      }
   }

   public static int getInt(byte var0) {
      return var0 >= 0 ? var0 : 256 - ~(var0 - 1);
   }

   public static byte[] getBytes(long var0) {
      ByteBuffer var2 = ByteBuffer.allocate(8);
      var2.putLong(var0);
      return var2.array();
   }

   public static byte[] getBytes(int var0) {
      ByteBuffer var1 = ByteBuffer.allocate(4);
      var1.putInt(var0);
      return var1.array();
   }

   public static byte[] concat(byte[]... var0) {
      try {
         ByteArrayOutputStream var1 = new ByteArrayOutputStream();

         for (byte[] var5 : var0) {
            var1.write(var5);
         }

         return var1.toByteArray();
      } catch (IOException var6) {
         throw new IllegalStateException("IOEx from ByteArrayOutputStream?!", var6);
      }
   }

   public static int bitLength(byte[] var0) {
      return bitLength(var0.length);
   }

   public static int bitLength(int var0) {
      if (var0 <= 268435455 && var0 >= 0) {
         return var0 * 8;
      } else {
         throw new UncheckedJoseException("Invalid byte length (" + var0 + ") for converting to bit length");
      }
   }

   public static int byteLength(int var0) {
      return var0 / 8;
   }

   public static byte[] randomBytes(int var0) {
      return randomBytes(var0, null);
   }

   public static byte[] randomBytes(int var0, SecureRandom var1) {
      var1 = var1 == null ? new SecureRandom() : var1;
      byte[] var2 = new byte[var0];
      var1.nextBytes(var2);
      return var2;
   }

   public static int[] convertSignedTwosCompToUnsigned(byte[] var0) {
      int[] var1 = new int[var0.length];

      for (int var2 = 0; var2 < var0.length; var2++) {
         var1[var2] = getInt(var0[var2]);
      }

      return var1;
   }

   public static byte[] convertUnsignedToSignedTwosComp(int[] var0) {
      byte[] var1 = new byte[var0.length];

      for (int var2 = 0; var2 < var0.length; var2++) {
         var1[var2] = getByte(var0[var2]);
      }

      return var1;
   }

   public static byte[] rightHalf(byte[] var0) {
      int var1 = var0.length / 2;
      return subArray(var0, var1, var1);
   }

   public static byte[] leftHalf(byte[] var0) {
      return subArray(var0, 0, var0.length / 2);
   }
}
