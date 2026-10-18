package org.jose4j.jwe.kdf;

import java.io.ByteArrayOutputStream;
import java.security.MessageDigest;
import org.jose4j.lang.ByteUtil;
import org.jose4j.lang.HashUtil;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

public class ConcatKeyDerivationFunction implements ConcatenationKeyDerivationFunctionWithSha256 {
   private static final Logger log = LoggerFactory.getLogger(ConcatKeyDerivationFunction.class);
   private int digestLength;
   private MessageDigest messageDigest;

   public ConcatKeyDerivationFunction(String var1) {
      this.messageDigest = HashUtil.getMessageDigest(var1);
      this.init();
   }

   public ConcatKeyDerivationFunction(String var1, String var2) {
      this.messageDigest = HashUtil.getMessageDigest(var1, var2);
      this.init();
   }

   private void init() {
      this.digestLength = ByteUtil.bitLength(this.messageDigest.getDigestLength());
      if (this.traceLog()) {
         log.trace("Hash Algorithm: {} with hashlen: {} bits", this.messageDigest.getAlgorithm(), this.digestLength);
      }
   }

   @Override
   public byte[] kdf(byte[] var1, int var2, byte[] var3) {
      long var4 = this.getReps(var2);
      if (this.traceLog()) {
         log.trace("reps: {}", String.valueOf(var4));
         log.trace("otherInfo: {}", ByteUtil.toDebugString(var3));
      }

      ByteArrayOutputStream var6 = new ByteArrayOutputStream();

      for (int var7 = 1; var7 <= var4; var7++) {
         byte[] var8 = ByteUtil.getBytes(var7);
         if (this.traceLog()) {
            log.trace("rep {} hashing ", var7);
            log.trace(" counter: {}", ByteUtil.toDebugString(var8));
            log.trace(" z: {}", ByteUtil.toDebugString(var1));
            log.trace(" otherInfo: {}", ByteUtil.toDebugString(var3));
         }

         this.messageDigest.update(var8);
         this.messageDigest.update(var1);
         this.messageDigest.update(var3);
         byte[] var9 = this.messageDigest.digest();
         if (this.traceLog()) {
            log.trace(" k({}): {}", var7, ByteUtil.toDebugString(var9));
         }

         var6.write(var9, 0, var9.length);
      }

      int var10 = ByteUtil.byteLength(var2);
      byte[] var11 = var6.toByteArray();
      if (this.traceLog()) {
         log.trace("derived key material: {}", ByteUtil.toDebugString(var11));
      }

      if (var11.length != var10) {
         byte[] var12 = ByteUtil.subArray(var11, 0, var10);
         if (this.traceLog()) {
            log.trace("first {} bits of derived key material: {}", var2, ByteUtil.toDebugString(var12));
         }

         var11 = var12;
      }

      if (this.traceLog()) {
         log.trace("final derived key material: {}", ByteUtil.toDebugString(var11));
      }

      return var11;
   }

   public byte[] kdf(byte[] var1, int var2, byte[] var3, byte[] var4, byte[] var5, byte[] var6, byte[] var7) {
      if (this.traceLog()) {
         StringBuilder var8 = new StringBuilder();
         var8.append("KDF:").append("\n");
         var8.append("  z: ").append(ByteUtil.toDebugString(var1)).append("\n");
         var8.append("  keydatalen: ").append(var2);
         var8.append("  algorithmId: ").append(ByteUtil.toDebugString(var3)).append("\n");
         var8.append("  partyUInfo: ").append(ByteUtil.toDebugString(var4)).append("\n");
         var8.append("  partyVInfo: ").append(ByteUtil.toDebugString(var5)).append("\n");
         var8.append("  suppPubInfo: ").append(ByteUtil.toDebugString(var6)).append("\n");
         var8.append("  suppPrivInfo: ").append(ByteUtil.toDebugString(var7));
         log.trace(var8.toString());
      }

      byte[] var9 = ByteUtil.concat(var3, var4, var5, var6, var7);
      return this.kdf(var1, var2, var9);
   }

   private boolean traceLog() {
      return false;
   }

   long getReps(int var1) {
      double var2 = (float)var1 / this.digestLength;
      var2 = Math.ceil(var2);
      return (int)var2;
   }
}
