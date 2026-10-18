package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.List;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_11659;
import net.minecraft.class_12249;
import net.minecraft.class_1657;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_4588;
import net.minecraft.class_600;
import net.minecraft.class_811;
import net.minecraft.class_4597.class_4598;
import org.joml.Matrix4f;
import org.jspecify.annotations.Nullable;

public final class jD {
   private static final class_2960 rPixL;
   private static final List<jD$tV> zbxcJ;
   @Nullable
   private static class_1657 KGTBV;
   @Nullable
   private static class_811 euveQ;
   @Nullable
   private static jC OHnhj;
   private static final long BioyZ = gb.aYR(5961469359657005583L, -2655715135983645903L, MethodHandles.lookup().lookupClass()).a(145425912808576L);

   static {
      long var4 = BioyZ ^ 47584865304119L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var4 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var4 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var3 = var1.doFinal(
         "\u0088¡3\u0010\u0000\u008b\u0013©¾Z!\u008c8§7öeëÕZ*\\L>\u0013Ø±ÎYôt»§\u008d¥õhÂ)~;\u007fQáªz\u0085Ø'g[\u001d3Ba\u008f".getBytes("ISO-8859-1")
      );
      String var6 = bHt(var3).intern();
      byte var10001 = -1;
      String var0 = var6;
      rPixL = class_2960.method_60656(var0);
      zbxcJ = new ArrayList<>();
   }

   private static MatchException bHs(MatchException var0) {
      return var0;
   }

   @Nullable
   private static class_1657 bHn() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jD.BioyZ J
      // 03: ldc2_w 21045353005824
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jC.bHb ()I
      // 0b: istore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: ifnonnull 1b
      // 15: aconst_null
      // 16: areturn
      // 17: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: getstatic sixtwo/jD.euveQ Lnet/minecraft/class_811;
      // 1e: astore 3
      // 1f: aload 3
      // 20: iload 2
      // 21: ifeq 37
      // 24: ifnonnull 36
      // 27: goto 2e
      // 2a: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: getstatic sixtwo/jD.KGTBV Lnet/minecraft/class_1657;
      // 31: areturn
      // 32: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 3
      // 37: iload 2
      // 38: ifeq 50
      // 3b: invokevirtual net/minecraft/class_811.method_29998 ()Z
      // 3e: ifne 56
      // 41: goto 48
      // 44: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 3
      // 49: goto 50
      // 4c: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: getstatic net/minecraft/class_811.field_4317 Lnet/minecraft/class_811;
      // 53: if_acmpne 61
      // 56: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 59: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 5c: areturn
      // 5d: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: getstatic sixtwo/jD.KGTBV Lnet/minecraft/class_1657;
      // 64: areturn
   }

   private static void bHo(class_600 var0, class_4587 var1, Matrix4f var2, int var3, int var4) {
      jC var5 = bHp();
      class_4598 var6 = var5.bGU();
      RenderSystem.getModelViewStack().pushMatrix().identity().mul(var2);
      var1.method_22903();

      try {
         class_4588 var7 = var6.method_73477(class_12249.method_76000(rPixL));
         var0.method_62100(var1, var7, var3, var4, mG.hoGuU.coh());
      } finally {
         try {
            var5.bGY();
         } finally {
            var1.method_22909();
            RenderSystem.getModelViewStack().popMatrix();
         }
      }
   }

   private static String bHt(byte[] var0) {
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

   private static jC bHp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jD.BioyZ J
      // 03: ldc2_w 131049148811697
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jC.bHb ()I
      // 0b: istore 2
      // 0c: getstatic sixtwo/jD.OHnhj Lsixtwo/jC;
      // 0f: iload 2
      // 10: ifeq 31
      // 13: ifnonnull 2e
      // 16: goto 1d
      // 19: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: new sixtwo/jC
      // 20: dup
      // 21: invokespecial sixtwo/jC.<init> ()V
      // 24: putstatic sixtwo/jD.OHnhj Lsixtwo/jC;
      // 27: goto 2e
      // 2a: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: getstatic sixtwo/jD.OHnhj Lsixtwo/jC;
      // 31: areturn
   }

   public static void bHh(@Nullable class_1657 var0) {
      KGTBV = var0;
   }

   public static void bHl() {
      long var0 = BioyZ ^ 133055612373954L;
      int var2 = jC.bHc();

      try {
         if (zbxcJ.isEmpty()) {
            return;
         }
      } catch (MatchException var6) {
         throw bHs(var6);
      }

      ArrayList var3 = new ArrayList<>(zbxcJ);
      zbxcJ.clear();

      for (jD$tV var5 : var3) {
         ki.bPj(
            () -> bHo(var5.model(), var5.poseStack(), var5.modelViewMatrix(), var5.lightCoords(), var5.overlayCoords()),
            var5.color(),
            var5.color(),
            0,
            4,
            2.5F,
            1.0F,
            1.0F,
            0.0F,
            1.0F,
            1.0F
         );
         if (var2 != 0) {
            break;
         }
      }
   }

   public static void bHm() {
      zbxcJ.clear();
   }

   public static void bHj() {
      euveQ = null;
   }

   public static void bHi(@Nullable class_811 var0) {
      euveQ = var0;
   }

   public static void bHk(class_600 param0, class_4587 param1, class_11659 param2, int param3, int param4, cY param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jD.BioyZ J
      // 03: ldc2_w 118130422017346
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/jC.bHc ()I
      // 0c: istore 8
      // 0e: invokestatic sixtwo/kn.bQp ()Z
      // 11: ifeq 19
      // 14: return
      // 15: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: invokestatic sixtwo/jD.bHn ()Lnet/minecraft/class_1657;
      // 1c: astore 9
      // 1e: aload 5
      // 20: aload 9
      // 22: invokevirtual sixtwo/cY.aaK (Lnet/minecraft/class_1657;)Lsixtwo/mG;
      // 25: astore 10
      // 27: iload 8
      // 29: ifne 58
      // 2c: aload 10
      // 2e: invokevirtual sixtwo/mG.cnW ()Z
      // 31: ifeq 40
      // 34: goto 3b
      // 37: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: return
      // 3c: invokestatic sixtwo/jD.bHs (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: aload 2
      // 41: aload 1
      // 42: getstatic sixtwo/jD.rPixL Lnet/minecraft/class_2960;
      // 45: invokestatic net/minecraft/class_12249.method_76000 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1921;
      // 48: aload 0
      // 49: iload 3
      // 4a: iload 4
      // 4c: aload 10
      // 4e: invokedynamic render (Lnet/minecraft/class_600;IILsixtwo/mG;)Lnet/minecraft/class_11659$class_11660; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, sixtwo/jD.bHr (Lnet/minecraft/class_600;IILsixtwo/mG;Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V, (Lnet/minecraft/class_4587$class_4665;Lnet/minecraft/class_4588;)V ]
      // 53: invokeinterface net/minecraft/class_11659.method_73483 (Lnet/minecraft/class_4587;Lnet/minecraft/class_1921;Lnet/minecraft/class_11659$class_11660;)V 4
      // 58: return
   }
}
