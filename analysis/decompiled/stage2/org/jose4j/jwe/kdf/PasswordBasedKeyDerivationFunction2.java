package org.jose4j.jwe.kdf;

import java.io.ByteArrayOutputStream;
import javax.crypto.Mac;
import org.jose4j.keys.HmacKey;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.JoseException;
import org.jose4j.lang.UncheckedJoseException;
import org.jose4j.mac.MacUtil;

public class PasswordBasedKeyDerivationFunction2 {
   private String hmacAlgorithm;

   public PasswordBasedKeyDerivationFunction2(String var1) {
      this.hmacAlgorithm = var1;
   }

   byte[] f(byte[] var1, int var2, int var3, Mac var4) {
      byte[] var6 = null;
      byte[] var7 = null;

      for (int var8 = 1; var8 <= var2; var8++) {
         byte[] var5;
         if (var8 == 1) {
            byte[] var9 = ByteUtil.concat(var1, ByteUtil.getBytes(var3));
            var5 = var4.doFinal(var9);
            var7 = var5;
         } else {
            var5 = var4.doFinal(var6);

            for (int var10 = 0; var10 < var5.length; var10++) {
               var7[var10] ^= var5[var10];
            }
         }

         var6 = var5;
      }

      return var7;
   }

   public byte[] derive(byte[] var1, byte[] var2, int var3, int var4) throws JoseException {
      return this.derive(var1, var2, var3, var4, null);
   }

   public byte[] derive(byte[] var1, byte[] var2, int var3, int var4, String var5) throws JoseException {
      Mac var6 = MacUtil.getInitializedMac(this.hmacAlgorithm, new HmacKey(var1), var5);
      int var7 = var6.getMacLength();
      long var8 = 4294967295L;
      if (var4 > var8) {
         throw new UncheckedJoseException("derived key too long " + var4);
      } else {
         int var10 = (int)Math.ceil((double)var4 / var7);
         int var11 = var4 - (var10 - 1) * var7;
         ByteArrayOutputStream var12 = new ByteArrayOutputStream();

         for (int var13 = 0; var13 < var10; var13++) {
            byte[] var14 = this.f(var2, var3, var13 + 1, var6);
            if (var13 == var10 - 1) {
               var14 = ByteUtil.subArray(var14, 0, var11);
            }

            var12.write(var14, 0, var14.length);
         }

         return var12.toByteArray();
      }
   }
}
