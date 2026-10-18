package org.jose4j.base64url;

public class SimplePEMEncoder {
   public SimplePEMEncoder() {
   }

   public static String encode(byte[] var0) {
      return getCodec().encodeToString(var0);
   }

   public static byte[] decode(String var0) {
      return getCodec().decode(var0);
   }

   static org.jose4j.base64url.internal.apache.commons.codec.binary.Base64 getCodec() {
      return new org.jose4j.base64url.internal.apache.commons.codec.binary.Base64(64);
   }
}
