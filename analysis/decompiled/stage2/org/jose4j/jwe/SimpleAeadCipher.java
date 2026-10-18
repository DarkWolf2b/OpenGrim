package org.jose4j.jwe;

import java.security.InvalidAlgorithmParameterException;
import java.security.InvalidKeyException;
import java.security.Key;
import javax.crypto.BadPaddingException;
import javax.crypto.Cipher;
import javax.crypto.IllegalBlockSizeException;
import javax.crypto.spec.GCMParameterSpec;
import org.jose4j.keys.AesKey;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.ExceptionHelp;
import org.jose4j.lang.JoseException;
import org.slf4j.Logger;

public class SimpleAeadCipher {
   public static final String GCM_TRANSFORMATION_NAME = "AES/GCM/NoPadding";
   private String algorithm;
   private int tagByteLength;

   public boolean isAvailable(Logger var1, int var2, int var3, String var4) {
      boolean var5 = false;
      if (CipherStrengthSupport.isAvailable(this.algorithm, var2)) {
         byte[] var6 = new byte[]{112, 108, 97, 105, 110, 116, 101, 120, 116};
         byte[] var7 = new byte[]{97, 97, 100};
         byte[] var8 = ByteUtil.randomBytes(var2);
         byte[] var9 = ByteUtil.randomBytes(var3);

         try {
            this.encrypt(new AesKey(var8), var9, var6, var7, null);
            var5 = true;
         } catch (Throwable var11) {
            var1.debug("{} is not available ({}).", var4, ExceptionHelp.toStringWithCauses(var11));
         }
      }

      return var5;
   }

   public SimpleAeadCipher(String var1, int var2) {
      this.algorithm = var1;
      this.tagByteLength = var2;
   }

   public byte[] decrypt(Key var1, byte[] var2, byte[] var3, byte[] var4, byte[] var5, String var6) throws JoseException {
      Cipher var7 = this.getInitialisedCipher(var1, var2, 2, var6);
      return this.decrypt(var3, var4, var5, var7);
   }

   public byte[] decrypt(byte[] var1, byte[] var2, byte[] var3, Cipher var4) throws JoseException {
      this.updateAad(var4, var3);

      try {
         return var4.doFinal(ByteUtil.concat(var1, var2));
      } catch (BadPaddingException | IllegalBlockSizeException var6) {
         throw new JoseException(var6.toString(), var6);
      }
   }

   public SimpleAeadCipher.CipherOutput encrypt(Key var1, byte[] var2, byte[] var3, byte[] var4, String var5) throws JoseException {
      Cipher var6 = this.getInitialisedCipher(var1, var2, 1, var5);
      this.updateAad(var6, var4);

      byte[] var7;
      try {
         var7 = var6.doFinal(var3);
      } catch (BadPaddingException | IllegalBlockSizeException var10) {
         throw new JoseException(var10.toString(), var10);
      }

      SimpleAeadCipher.CipherOutput var8 = new SimpleAeadCipher.CipherOutput();
      int var9 = var7.length - this.tagByteLength;
      var8.ciphertext = ByteUtil.subArray(var7, 0, var9);
      var8.tag = ByteUtil.subArray(var7, var9, this.tagByteLength);
      return var8;
   }

   public Cipher getInitialisedCipher(Key var1, byte[] var2, int var3, String var4) throws JoseException {
      Cipher var5 = CipherUtil.getCipher(this.algorithm, var4);

      try {
         GCMParameterSpec var6 = new GCMParameterSpec(ByteUtil.bitLength(this.tagByteLength), var2);
         var5.init(var3, var1, var6);
         return var5;
      } catch (InvalidKeyException var7) {
         throw new JoseException("Invalid key for " + this.algorithm, var7);
      } catch (InvalidAlgorithmParameterException var8) {
         throw new JoseException(var8.toString(), var8);
      }
   }

   private void updateAad(Cipher var1, byte[] var2) {
      if (var2 != null && var2.length > 0) {
         var1.updateAAD(var2);
      }
   }

   public static class CipherOutput {
      private byte[] ciphertext;
      private byte[] tag;

      public byte[] getCiphertext() {
         return this.ciphertext;
      }

      public CipherOutput() {
      }

      public byte[] getTag() {
         return this.tag;
      }
   }
}
