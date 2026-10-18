package org.jose4j.jwe.kdf;

import org.jose4j.base64url.Base64Url;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.StringUtil;

public class KdfUtil {
   private Base64Url base64Url = new Base64Url();
   private ConcatenationKeyDerivationFunctionWithSha256 kdf;

   byte[] prependDatalen(byte[] var1) {
      if (var1 == null) {
         var1 = ByteUtil.EMPTY_BYTES;
      }

      byte[] var2 = ByteUtil.getBytes(var1.length);
      return ByteUtil.concat(var2, var1);
   }

   public KdfUtil(String var1) {
      this.kdf = ConcatKeyDerivationFunctionFactory.make(var1);
   }

   public KdfUtil() {
      this(null);
   }

   byte[] getDatalenDataFormat(String var1) {
      byte[] var2 = this.base64Url.base64UrlDecode(var1);
      return this.prependDatalen(var2);
   }

   public byte[] kdf(byte[] var1, int var2, String var3, String var4, String var5) {
      byte[] var6 = this.prependDatalen(StringUtil.getBytesUtf8(var3));
      byte[] var7 = this.getDatalenDataFormat(var4);
      byte[] var8 = this.getDatalenDataFormat(var5);
      byte[] var9 = ByteUtil.getBytes(var2);
      byte[] var10 = ByteUtil.EMPTY_BYTES;
      byte[] var11 = ByteUtil.concat(var6, var7, var8, var9, var10);
      return this.kdf.kdf(var1, var2, var11);
   }
}
