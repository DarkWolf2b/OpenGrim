package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1937;
import net.minecraft.class_243;
import net.minecraft.class_3857;
import net.minecraft.class_3959.class_242;
import net.minecraft.class_3959.class_3960;

public class mh {
   private final class_1937 foaYa;
   private final class_1297 QZsGX;
   private class_243 qwkOz;
   private class_243 gPhig;
   private int BYsgz;
   private double HzTbw;
   private double Owetf;
   private double xbQRr;
   private double nnkxA;
   private boolean gifiq;
   private boolean RGkqd;
   private class_3960 sFGuI;
   private class_242 ZbWwl;
   private boolean KfLbf;
   private mi JCjmz;
   private static final long UfnGN = gb.aYR(5815992448394471741L, -6440912917958466716L, MethodHandles.lookup().lookupClass()).a(70956652791312L);
   private static final long ckbBc;

   private mh(class_1937 var1, class_1297 var2, class_243 var3, class_243 var4) {
      long var5 = UfnGN ^ 55227734751862L;
      super();
      this.BYsgz = (int)ckbBc;
      this.HzTbw = -128.0;
      this.Owetf = 0.99;
      this.xbQRr = 0.8;
      this.nnkxA = 0.03;
      this.sFGuI = class_3960.field_17558;
      this.ZbWwl = class_242.field_1348;
      this.KfLbf = true;
      this.JCjmz = mi.CkcQW;
      this.foaYa = var1;
      this.QZsGX = var2;
      this.qwkOz = var3;
      this.gPhig = var4;
   }

   static {
      long var0 = UfnGN ^ 73747287428328L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var4 = -5405549512601882712L;
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
      ckbBc = var7;
   }

   public class_243 ckj() {
      return this.qwkOz;
   }

   public class_243 ckk() {
      return this.gPhig;
   }

   public boolean ckr() {
      return this.RGkqd;
   }

   public mh ckI(boolean var1) {
      this.KfLbf = var1;
      return this;
   }

   public mh ckE(boolean var1) {
      this.RGkqd = var1;
      return this;
   }

   public class_1937 ckh() {
      return this.foaYa;
   }

   public boolean cku() {
      return this.KfLbf;
   }

   public class_242 ckt() {
      return this.ZbWwl;
   }

   public class_3960 cks() {
      return this.sFGuI;
   }

   public mi ckv() {
      return this.JCjmz;
   }

   public mh ckJ(mi var1) {
      long var2 = UfnGN ^ 23930424275354L;
      int[] var4 = mk.cle();

      mh var10000;
      mi var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (var4 != null) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw ckK(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = mi.CkcQW;
      }

      var10000.JCjmz = var10001;
      return this;
   }

   public double cko() {
      return this.xbQRr;
   }

   public mh ckG(class_3960 var1) {
      this.sFGuI = var1;
      return this;
   }

   public mh ckH(class_242 var1) {
      this.ZbWwl = var1;
      return this;
   }

   public class_1297 cki() {
      return this.QZsGX;
   }

   public double ckm() {
      return this.HzTbw;
   }

   public double ckn() {
      return this.Owetf;
   }

   public mh ckw(class_243 var1) {
      this.qwkOz = var1;
      return this;
   }

   private static MatchException ckK(MatchException var0) {
      return var0;
   }

   public int ckl() {
      return this.BYsgz;
   }

   public double ckp() {
      return this.nnkxA;
   }

   public boolean ckq() {
      return this.gifiq;
   }

   public mh ckB(double var1) {
      this.xbQRr = var1;
      return this;
   }

   public mh cky(int var1) {
      this.BYsgz = Math.max(1, var1);
      return this;
   }

   public mh ckC(double var1) {
      this.nnkxA = var1;
      return this;
   }

   public static mh ckf(class_1937 var0, class_1297 var1, class_243 var2, class_243 var3) {
      return new mh(var0, var1, var2, var3);
   }

   public mh ckz(double var1) {
      this.HzTbw = var1;
      return this;
   }

   public mh ckA(double var1) {
      this.Owetf = var1;
      return this;
   }

   public static mh ckg(class_3857 var0) {
      return ckf(var0.method_73183(), var0, var0.method_73189(), var0.method_18798()).ckF(var0.method_5740());
   }

   public mh ckD(mj param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mh.UfnGN J
      // 03: ldc2_w 68390655324584
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/mk.cle ()[I
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnonnull 4b
      // 12: aload 1
      // 13: ifnonnull 23
      // 16: goto 1d
      // 19: invokestatic sixtwo/mh.ckK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: areturn
      // 1f: invokestatic sixtwo/mh.ckK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: aload 1
      // 25: invokevirtual sixtwo/mj.airDrag ()D
      // 28: putfield sixtwo/mh.Owetf D
      // 2b: aload 0
      // 2c: aload 1
      // 2d: invokevirtual sixtwo/mj.waterDrag ()D
      // 30: putfield sixtwo/mh.xbQRr D
      // 33: aload 0
      // 34: aload 1
      // 35: invokevirtual sixtwo/mj.gravity ()D
      // 38: putfield sixtwo/mh.nnkxA D
      // 3b: aload 0
      // 3c: aload 1
      // 3d: invokevirtual sixtwo/mj.noGravity ()Z
      // 40: putfield sixtwo/mh.gifiq Z
      // 43: aload 0
      // 44: aload 1
      // 45: invokevirtual sixtwo/mj.isArrow ()Z
      // 48: putfield sixtwo/mh.RGkqd Z
      // 4b: aload 0
      // 4c: areturn
   }

   public mh ckF(boolean var1) {
      this.gifiq = var1;
      return this;
   }

   public mh ckx(class_243 var1) {
      this.gPhig = var1;
      return this;
   }
}
