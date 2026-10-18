package org.jose4j.base64url;

import org.jose4j.lang.StringUtil;

public class Base64Url {
   private org.jose4j.base64url.internal.apache.commons.codec.binary.Base64 base64urlCodec = new org.jose4j.base64url.internal.apache.commons.codec.binary.Base64(
      -1, null, true
   );

   public String base64UrlEncode(String var1, String var2) {
      byte[] var3 = StringUtil.getBytesUnchecked(var1, var2);
      return this.base64UrlEncode(var3);
   }

   public String base64UrlEncode(byte[] var1) {
      return this.base64urlCodec.encodeToString(var1);
   }

   public byte[] base64UrlDecode(String var1) {
      return this.base64urlCodec.decode(var1);
   }

   public static String decodeToUtf8String(String var0) {
      return getOne().base64UrlDecodeToString(var0, "UTF-8");
   }

   public static String decodeToString(String var0, String var1) {
      return getOne().base64UrlDecodeToString(var0, var1);
   }

   public Base64Url() {
   }

   public static byte[] decode(String var0) {
      return getOne().base64UrlDecode(var0);
   }

   public static String encode(String var0, String var1) {
      return getOne().base64UrlEncode(var0, var1);
   }

   public static String encode(byte[] var0) {
      return getOne().base64UrlEncode(var0);
   }

   public String base64UrlEncodeUtf8ByteRepresentation(String var1) {
      return this.base64UrlEncode(var1, "UTF-8");
   }

   public String base64UrlDecodeToString(String var1, String var2) {
      byte[] var3 = this.base64UrlDecode(var1);
      return StringUtil.newString(var3, var2);
   }

   public static String encodeUtf8ByteRepresentation(String var0) {
      return getOne().base64UrlEncodeUtf8ByteRepresentation(var0);
   }

   public String base64UrlDecodeToUtf8String(String var1) {
      return this.base64UrlDecodeToString(var1, "UTF-8");
   }

   private static Base64Url getOne() {
      return new Base64Url();
   }
}
