package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;

record ko(Entity entity, float tickDelta, MatrixStack poseStack) implements lK {
   private static final lN BATCH_KEY;

   @Override
   public lN batchKey() {
      return BATCH_KEY;
   }

   static {
      long var4 = gb.aYR(5263654102084505159L, 4454810502454882351L, MethodHandles.lookup().lookupClass()).a(10635996994207L) ^ 23252547007203L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var4 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var4 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var3 = var1.doFinal("├ľ├á0├ľ┬Ą$M├Żt?&#├Ś├║├¬\u0006├őNR\u0002VE<├╝".getBytes("ISO-8859-1"));
      String var6 = a(var3).intern();
      byte var10001 = -1;
      String var0 = var6;
      BATCH_KEY = lN.of(var0, null, lB.rMraa);
   }

   private static String a(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   @Override
   public void execute() {
      this.renderIntoBatch();
   }

   @Override
   public void endBatch() {
      kn.bQv();
   }

   @Override
   public void beginBatch() {
   }

   @Override
   public void renderIntoBatch() {
      kn.bQu(this.entity, this.tickDelta, this.poseStack);
   }
}
