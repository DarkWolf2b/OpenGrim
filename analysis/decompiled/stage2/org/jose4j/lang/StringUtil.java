package org.jose4j.lang;

import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;

public class StringUtil {
   public static final String UTF_8 = "UTF-8";
   public static final String US_ASCII = "US-ASCII";

   public static byte[] getBytesAscii(String var0) {
      return getBytesUnchecked(var0, "US-ASCII");
   }

   public static byte[] getBytesUnchecked(String var0, String var1) {
      try {
         return var0 == null ? null : var0.getBytes(var1);
      } catch (UnsupportedEncodingException var3) {
         throw newISE(var1);
      }
   }

   public static String newStringUtf8(byte[] var0) {
      return newString(var0, "UTF-8");
   }

   public static byte[] getBytesUtf8(String var0) {
      return getBytesUnchecked(var0, "UTF-8");
   }

   public static String newStringUsAscii(byte[] var0) {
      return newString(var0, "US-ASCII");
   }

   public StringUtil() {
   }

   public static byte[] getBytes(String var0, Charset var1) {
      return var0 == null ? null : var0.getBytes(var1);
   }

   public static String newString(byte[] var0, String var1) {
      try {
         return var0 == null ? null : new String(var0, var1);
      } catch (UnsupportedEncodingException var3) {
         throw newISE(var1);
      }
   }

   public static String newString(byte[] var0, Charset var1) {
      return var0 == null ? null : new String(var0, var1);
   }

   private static IllegalStateException newISE(String var0) {
      return new IllegalStateException("Unknown or unsupported character set name: " + var0);
   }
}
