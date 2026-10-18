package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_287;
import net.minecraft.class_9799;

public abstract non-sealed class kQ<T> implements kP<T> {
   private final class_9799 vSpyE;
   protected class_287 WfBOj;
   private boolean FKQkw;
   private static int FmTZh;
   private static final long yTRZZ = gb.aYR(5115572367117417848L, -6167705444224521846L, MethodHandles.lookup().lookupClass()).a(62993390440604L);
   private static final String rAwAE;
   private static final long adoPO;

   public kQ() {
      long var1 = yTRZZ ^ 108764141085143L;
      super();
      this.vSpyE = new class_9799((int)adoPO);
   }

   static {
      long var5 = yTRZZ ^ 31566614487201L;
      bVm(0);
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var9 = var7.doFinal("├ä\u0096g\u0098v├Ş┬ó\u0085┬Ę┬Ą\u0018\u000b┬í├ĘTC\u009d├Ś\u0097├Ą\u0018├Ž┬Čb├ĺ+G\u0095├Ő#├ÇME├ľ├╣\u000f8\u008e├▓k".getBytes("ISO-8859-1"));
      String var12 = bVq(var9).intern();
      byte var10001 = -1;
      rAwAE = var12;
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var2 = 3327671005896126166L;
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
      long var14 = (var4[0] & 255L) << 56
         | (var4[1] & 255L) << 48
         | (var4[2] & 255L) << 40
         | (var4[3] & 255L) << 32
         | (var4[4] & 255L) << 24
         | (var4[5] & 255L) << 16
         | (var4[6] & 255L) << 8
         | var4[7] & 255L;
      var10001 = -1;
      adoPO = var14;
   }

   public static int bVo() {
      int var0 = bVn();

      try {
         return var0 == 0 ? 8 : 0;
      } catch (IllegalStateException var1) {
         throw bVp(var1);
      }
   }

   private static String bVq(byte[] var0) {
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

   protected final boolean bVk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kQ.yTRZZ J
      // 03: ldc2_w 93046921785351
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kQ.bVo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 26
      // 11: getfield sixtwo/kQ.FKQkw Z
      // 14: ifeq 34
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 25: athrow
      // 26: getfield sixtwo/kQ.WfBOj Lnet/minecraft/class_287;
      // 29: ifnull 34
      // 2c: bipush 1
      // 2d: goto 35
      // 30: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 33: athrow
      // 34: bipush 0
      // 35: ireturn
   }

   public void bVi(class_5596 var1, VertexFormat var2) {
      long var3 = yTRZZ ^ 121413816671899L;
      this.WfBOj = new class_287(this.vSpyE, var1, var2);
      int var10000 = bVn();
      this.FKQkw = true;
      int var5 = var10000;

      try {
         if (iS.bwL() == null) {
            bVm(++var5);
         }
      } catch (IllegalStateException var6) {
         throw bVp(var6);
      }
   }

   public static void bVm(int var0) {
      FmTZh = var0;
   }

   protected final void bVj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kQ.yTRZZ J
      // 03: ldc2_w 2117879997691
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kQ.bVo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 26
      // 11: getfield sixtwo/kQ.FKQkw Z
      // 14: ifeq 2c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 25: athrow
      // 26: getfield sixtwo/kQ.WfBOj Lnet/minecraft/class_287;
      // 29: ifnonnull 47
      // 2c: new java/lang/IllegalStateException
      // 2f: dup
      // 30: aload 0
      // 31: invokevirtual java/lang/Object.getClass ()Ljava/lang/Class;
      // 34: invokevirtual java/lang/Class.getSimpleName ()Ljava/lang/String;
      // 37: getstatic sixtwo/kQ.rAwAE Ljava/lang/String;
      // 3a: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 3f: invokespecial java/lang/IllegalStateException.<init> (Ljava/lang/String;)V
      // 42: athrow
      // 43: invokestatic sixtwo/kQ.bVp (Ljava/lang/IllegalStateException;)Ljava/lang/IllegalStateException;
      // 46: athrow
      // 47: return
   }

   private static IllegalStateException bVp(IllegalStateException var0) {
      return var0;
   }

   public static int bVn() {
      return FmTZh;
   }

   protected final void bVl() {
      this.FKQkw = false;
      this.WfBOj = null;
   }
}
