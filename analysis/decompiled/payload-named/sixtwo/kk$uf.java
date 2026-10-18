package sixtwo;

import java.lang.invoke.MethodHandles;
import java.nio.FloatBuffer;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.lwjgl.BufferUtils;

final class kk$uf {
   private final FloatBuffer GXqLx;
   private float jHEXt;
   private static final long TyrgK = gb.aYR(6024773056861076645L, -5695886300698941545L, MethodHandles.lookup().lookupClass()).a(96712415341831L);
   private static final long JZshQ;

   private FloatBuffer dsw(float var1) {
      long var2 = TyrgK ^ 69851662071461L;
      String var4 = kk.bPU();

      try {
         if (var4 == null) {
            return this.GXqLx;
         }

         if (this.jHEXt == var1) {
            return this.GXqLx;
         }
      } catch (MatchException var7) {
         throw dsx(var7);
      }

      this.GXqLx.clear();
      int var5 = 0;

      label33: {
         while (var5 <= var1) {
            try {
               this.GXqLx.put(kk.bPP((float)var5, var1 / 2.0F));
               var5++;
               if (var4 == null) {
                  break label33;
               }

               if (var4 == null) {
                  break;
               }
            } catch (MatchException var6) {
               throw dsx(var6);
            }
         }

         this.GXqLx.flip();
      }

      this.jHEXt = var1;
      return this.GXqLx;
   }

   private static MatchException dsx(MatchException var0) {
      return var0;
   }

   private kk$uf() {
      long var1 = TyrgK ^ 127781458006587L;
      super();
      this.GXqLx = BufferUtils.createFloatBuffer((int)JZshQ);
      this.jHEXt = -1.0F;
   }

   static {
      long var0 = TyrgK ^ 108716193259179L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 1883827088198019100L;
      byte[] var6 = var2.doFinal(
         new byte[]{
            (byte)(var4 >>> 56),
            (byte)(var4 >>> 48),
            (byte)(var4 >>> 40),
            (byte)(var4 >>> 32),
            (byte)(var4 >>> 24),
            (byte)(var4 >>> 16),
            (byte)(var4 >>> 8),
            (byte)var4
         }
      );
      long var7 = (var6[0] & 255L) << 56
         | (var6[1] & 255L) << 48
         | (var6[2] & 255L) << 40
         | (var6[3] & 255L) << 32
         | (var6[4] & 255L) << 24
         | (var6[5] & 255L) << 16
         | (var6[6] & 255L) << 8
         | var6[7] & 255L;
      byte var10001 = -1;
      JZshQ = var7;
   }
}
