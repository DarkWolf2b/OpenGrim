package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_243;

class dh$sz {
   class_243 vxPfu;
   class_243 euQyK;
   class_243 AbOcV;
   class_243 zgdiH;
   class_243 aoOwi;
   class_243 FoYEg;
   long JoZky;
   float uTzzU;
   boolean WWClU;
   mT jYAnc;
   rk JiVPB;
   private static final long lQGTL = gb.aYR(-1412005196320346377L, 1304572542534617863L, MethodHandles.lookup().lookupClass()).a(151037727181724L);
   private static final long IWwlL;

   public dh$sz(class_243 var1, class_243 var2, class_243 var3, class_243 var4, long var5, float var7) {
      long var8 = lQGTL ^ 20426769738683L;
      super();
      this.WWClU = false;
      this.jYAnc = mT.cpz();
      this.JiVPB = new rk((int)IWwlL).dhs(rj.UPXqT);
      this.vxPfu = var1;
      this.euQyK = var2;
      this.aoOwi = var3.method_1021(0.04F);
      this.FoYEg = var4.method_1021(0.04F);
      this.JoZky = var5;
      this.uTzzU = var7;
      this.zgdiH = var2;
      this.AbOcV = var1;
   }

   static {
      long var0 = lQGTL ^ 8739580545398L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = 1077618560853009042L;
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
      IWwlL = var7;
   }

   void doB() {
      this.AbOcV = this.vxPfu;
      this.zgdiH = this.euQyK;
      this.vxPfu = this.vxPfu.method_1019(this.aoOwi);
      this.euQyK = this.euQyK.method_1019(this.FoYEg);
      this.aoOwi = this.aoOwi.method_1021(0.98);
      this.FoYEg = this.FoYEg.method_1021(0.98);
   }
}
