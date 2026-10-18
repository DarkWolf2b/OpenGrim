package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.buffers.GpuBufferSlice;
import com.mojang.blaze3d.buffers.Std140Builder;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.nio.ByteBuffer;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_10366;
import net.minecraft.class_241;
import org.joml.Matrix4f;
import org.lwjgl.system.MemoryStack;

public class rm {
   public static boolean YaBsy;
   private static double HRPnj;
   private static class_241 fJbvu;
   private static final Matrix4f LBUTr;
   private static GpuBuffer iBPYr;
   private static GpuBufferSlice eLWOo;
   private static iS[] XFAew;
   private static final long LAGIc = gb.aYR(3384494939162841150L, 8667744679039511672L, MethodHandles.lookup().lookupClass()).a(192452429815908L);
   private static final String pxuqz;
   private static final long DMPeE;

   static {
      iS[] var10000 = new iS[3];
      long var5 = LAGIc ^ 106319497711962L;
      diu(var10000);
      Cipher var7;
      Cipher var10 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal(",\u0092\u0095+9ºKÖGâ0D\u0087§Ä¬".getBytes("ISO-8859-1"));
      String var13 = dix(var9).intern();
      byte var10001 = -1;
      pxuqz = var13;
      Cipher var0;
      Cipher var11 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var11.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = -1771248824631046976L;
      byte[] var4 = var0.doFinal(
         new byte[]{
            (byte)(var2 >>> 56),
            (byte)(var2 >>> 48),
            (byte)(var2 >>> 40),
            (byte)(var2 >>> 32),
            (byte)(var2 >>> 24),
            (byte)(var2 >>> 16),
            (byte)(var2 >>> 8),
            (byte)var2
         }
      );
      long var15 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      DMPeE = var15;
      YaBsy = false;
      HRPnj = 2.0;
      fJbvu = class_241.field_1340;
      LBUTr = new Matrix4f();
   }

   public static class_241 dir(double param0, double param2, double param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rm.LAGIc J
      // 03: ldc2_w 39578923935403
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0c: dload 0
      // 0d: dload 4
      // 0f: ddiv
      // 10: d2i
      // 11: istore 9
      // 13: astore 8
      // 15: dload 0
      // 16: dload 4
      // 18: ddiv
      // 19: iload 9
      // 1b: i2d
      // 1c: dcmpl
      // 1d: aload 8
      // 1f: ifnull 3a
      // 22: ifle 38
      // 25: goto 2c
      // 28: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2b: athrow
      // 2c: iload 9
      // 2e: bipush 1
      // 2f: iadd
      // 30: i2d
      // 31: goto 3b
      // 34: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 37: athrow
      // 38: iload 9
      // 3a: i2d
      // 3b: dstore 10
      // 3d: dload 2
      // 3e: dload 4
      // 40: ddiv
      // 41: d2i
      // 42: istore 12
      // 44: dload 2
      // 45: dload 4
      // 47: ddiv
      // 48: iload 12
      // 4a: i2d
      // 4b: dcmpl
      // 4c: aload 8
      // 4e: ifnull 69
      // 51: ifle 67
      // 54: goto 5b
      // 57: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5a: athrow
      // 5b: iload 12
      // 5d: bipush 1
      // 5e: iadd
      // 5f: i2d
      // 60: goto 6a
      // 63: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 66: athrow
      // 67: iload 12
      // 69: i2d
      // 6a: dstore 13
      // 6c: new net/minecraft/class_241
      // 6f: dup
      // 70: dload 10
      // 72: d2f
      // 73: dload 13
      // 75: d2f
      // 76: invokespecial net/minecraft/class_241.<init> (FF)V
      // 79: areturn
   }

   public static class_241 dis() {
      class_241 var0 = diq();
      float var1 = (float)(rD.dlmvG.field_1729.method_1603() * var0.field_1343 / rD.dlmvG.method_22683().method_4480());
      float var2 = (float)(rD.dlmvG.field_1729.method_1604() * var0.field_1342 / rD.dlmvG.method_22683().method_4507());
      return new class_241(var1, var2);
   }

   public static iS[] div() {
      return XFAew;
   }

   public static void dim() {
      Matrix4f var0 = new Matrix4f()
         .setOrtho(
            0.0F,
            rD.dlmvG.method_22683().method_4489() / rD.dlmvG.method_22683().method_4495(),
            rD.dlmvG.method_22683().method_4506() / rD.dlmvG.method_22683().method_4495(),
            0.0F,
            1000.0F,
            21000.0F
         );
      dii(var0, class_10366.field_54954);
      YaBsy = false;
      din();
   }

   public static class_241 diq() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rm.LAGIc J
      // 03: ldc2_w 1385200725819
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 11: astore 3
      // 12: astore 2
      // 13: aload 3
      // 14: invokevirtual net/minecraft/class_1041.method_4489 ()I
      // 17: i2d
      // 18: getstatic sixtwo/rm.HRPnj D
      // 1b: ddiv
      // 1c: d2i
      // 1d: istore 4
      // 1f: aload 3
      // 20: invokevirtual net/minecraft/class_1041.method_4489 ()I
      // 23: i2d
      // 24: getstatic sixtwo/rm.HRPnj D
      // 27: ddiv
      // 28: iload 4
      // 2a: i2d
      // 2b: dcmpl
      // 2c: aload 2
      // 2d: ifnull 48
      // 30: ifle 46
      // 33: goto 3a
      // 36: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 39: athrow
      // 3a: iload 4
      // 3c: bipush 1
      // 3d: iadd
      // 3e: i2d
      // 3f: goto 49
      // 42: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 45: athrow
      // 46: iload 4
      // 48: i2d
      // 49: dstore 5
      // 4b: aload 3
      // 4c: invokevirtual net/minecraft/class_1041.method_4506 ()I
      // 4f: i2d
      // 50: getstatic sixtwo/rm.HRPnj D
      // 53: ddiv
      // 54: d2i
      // 55: istore 7
      // 57: aload 3
      // 58: invokevirtual net/minecraft/class_1041.method_4506 ()I
      // 5b: i2d
      // 5c: getstatic sixtwo/rm.HRPnj D
      // 5f: ddiv
      // 60: iload 7
      // 62: i2d
      // 63: dcmpl
      // 64: aload 2
      // 65: ifnull 80
      // 68: ifle 7e
      // 6b: goto 72
      // 6e: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 71: athrow
      // 72: iload 7
      // 74: bipush 1
      // 75: iadd
      // 76: i2d
      // 77: goto 81
      // 7a: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7d: athrow
      // 7e: iload 7
      // 80: i2d
      // 81: dstore 8
      // 83: new net/minecraft/class_241
      // 86: dup
      // 87: dload 5
      // 89: d2f
      // 8a: dload 8
      // 8c: d2f
      // 8d: invokespecial net/minecraft/class_241.<init> (FF)V
      // 90: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 93: ifnonnull a4
      // 96: bipush 5
      // 97: anewarray 245
      // 9a: invokestatic sixtwo/rm.diu ([Lsixtwo/iS;)V
      // 9d: goto a4
      // a0: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a3: athrow
      // a4: areturn
   }

   private static Throwable diw(Throwable var0) {
      return var0;
   }

   public static Matrix4f dij() {
      return LBUTr;
   }

   public static void dil(double var0) {
      Matrix4f var2 = new Matrix4f()
         .setOrtho(0.0F, (float)(rD.dlmvG.method_22683().method_4489() / var0), (float)(rD.dlmvG.method_22683().method_4506() / var0), 0.0F, 1000.0F, 21000.0F);
      dii(var2, class_10366.field_54954);
      YaBsy = true;
      HRPnj = var0;
      din();
   }

   public static void diu(iS[] var0) {
      XFAew = var0;
   }

   private static String dix(byte[] var0) {
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

   private static void dih() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rm.LAGIc J
      // 03: ldc2_w 136853723146698
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rm.iBPYr Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 0f: aload 2
      // 10: ifnull 3f
      // 13: ifnonnull 4a
      // 16: goto 1d
      // 19: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1c: athrow
      // 1d: invokestatic com/mojang/blaze3d/systems/RenderSystem.getDevice ()Lcom/mojang/blaze3d/systems/GpuDevice;
      // 20: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/rm.dit ()Ljava/lang/String;, ()Ljava/lang/String; ]
      // 25: getstatic sixtwo/rm.DMPeE J
      // 28: l2i
      // 29: getstatic com/mojang/blaze3d/systems/RenderSystem.PROJECTION_MATRIX_UBO_SIZE I
      // 2c: i2l
      // 2d: invokeinterface com/mojang/blaze3d/systems/GpuDevice.createBuffer (Ljava/util/function/Supplier;IJ)Lcom/mojang/blaze3d/buffers/GpuBuffer; 5
      // 32: putstatic sixtwo/rm.iBPYr Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 35: getstatic sixtwo/rm.iBPYr Lcom/mojang/blaze3d/buffers/GpuBuffer;
      // 38: goto 3f
      // 3b: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: lconst_0
      // 40: getstatic com/mojang/blaze3d/systems/RenderSystem.PROJECTION_MATRIX_UBO_SIZE I
      // 43: i2l
      // 44: invokevirtual com/mojang/blaze3d/buffers/GpuBuffer.slice (JJ)Lcom/mojang/blaze3d/buffers/GpuBufferSlice;
      // 47: putstatic sixtwo/rm.eLWOo Lcom/mojang/blaze3d/buffers/GpuBufferSlice;
      // 4a: return
   }

   public static Number dio() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rm.LAGIc J
      // 03: ldc2_w 45373346369673
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 12: ifnonnull 1e
      // 15: bipush 2
      // 16: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 19: areturn
      // 1a: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: getstatic sixtwo/rm.YaBsy Z
      // 21: aload 2
      // 22: ifnull 42
      // 25: ifeq 39
      // 28: goto 2f
      // 2b: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2e: athrow
      // 2f: getstatic sixtwo/rm.HRPnj D
      // 32: goto 43
      // 35: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38: athrow
      // 39: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3c: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 3f: invokevirtual net/minecraft/class_1041.method_4495 ()I
      // 42: i2d
      // 43: invokestatic java/lang/Double.valueOf (D)Ljava/lang/Double;
      // 46: areturn
   }

   public static class_241 dip() {
      return fJbvu;
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private static void dii(Matrix4f var0, class_10366 var1) {
      long var2 = LAGIc ^ 8833120912066L;
      iS[] var10000 = div();
      dih();
      iS[] var4 = var10000;
      LBUTr.set(var0);
      MemoryStack var5 = MemoryStack.stackPush();

      try {
         ByteBuffer var6 = Std140Builder.onStack(var5, RenderSystem.PROJECTION_MATRIX_UBO_SIZE).putMat4f(var0).get();
         RenderSystem.getDevice().createCommandEncoder().writeToBuffer(iBPYr.slice(), var6);
      } catch (Throwable var11) {
         label36: {
            try {
               var13 = var5;
               if (var4 == null) {
                  break label36;
               }

               if (var5 == null) {
                  throw var11;
               }
            } catch (Throwable var10) {
               throw diw(var10);
            }

            try {
               var13 = var5;
            } catch (Throwable var9) {
               var11.addSuppressed(var9);
               throw var11;
            }
         }

         try {
            var13.close();
         } catch (Throwable var8) {
            var11.addSuppressed(var8);
         }

         throw var11;
      }

      if (var4 != null) {
         try {
            if (var5 != null) {
               var5.close();
            }
         } catch (Throwable var12) {
            throw diw(var12);
         }

         RenderSystem.setProjectionMatrix(eLWOo, var1);
      }
   }

   private static void din() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rm.LAGIc J
      // 03: ldc2_w 53612525017336
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/rm.div ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rm.YaBsy Z
      // 0f: ifne 3b
      // 12: new net/minecraft/class_241
      // 15: dup
      // 16: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 19: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 1c: invokevirtual net/minecraft/class_1041.method_4489 ()I
      // 1f: i2f
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: invokevirtual net/minecraft/class_310.method_22683 ()Lnet/minecraft/class_1041;
      // 26: invokevirtual net/minecraft/class_1041.method_4506 ()I
      // 29: i2f
      // 2a: invokespecial net/minecraft/class_241.<init> (FF)V
      // 2d: putstatic sixtwo/rm.fJbvu Lnet/minecraft/class_241;
      // 30: aload 2
      // 31: ifnonnull 48
      // 34: goto 3b
      // 37: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: invokestatic sixtwo/rm.diq ()Lnet/minecraft/class_241;
      // 3e: putstatic sixtwo/rm.fJbvu Lnet/minecraft/class_241;
      // 41: goto 48
      // 44: invokestatic sixtwo/rm.diw (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 47: athrow
      // 48: return
   }

   public static void dik() {
      dil(2.0);
   }
}
