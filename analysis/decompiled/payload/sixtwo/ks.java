package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.WalkAnimationStateAccessor;
import net.minecraft.class_1068;
import net.minecraft.class_1268;
import net.minecraft.class_1304;
import net.minecraft.class_1799;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_4050;
import net.minecraft.class_742;
import net.minecraft.class_7920;
import net.minecraft.class_8685;
import net.minecraft.class_12079.class_12081;

public record ks(
   class_8685 skin,
   class_2960 texture,
   class_2960 capeTexture,
   class_2960 elytraTexture,
   class_7920 modelType,
   float yRot,
   float xRot,
   float yRotO,
   float xRotO,
   float yBodyRot,
   float yBodyRotO,
   float yHeadRot,
   float yHeadRotO,
   int hurtTime,
   int deathTime,
   class_4050 pose,
   boolean shiftDown,
   boolean sprinting,
   boolean onGround,
   class_243 deltaMovement,
   class_1799 mainHand,
   class_1799 offHand,
   class_1799 chestEquipment,
   float walkAnimationSpeed,
   float walkAnimationPos,
   boolean fallFlying,
   boolean usingItem,
   class_1268 usedItemHand
) {
   private static final class_2960 DEFAULT_ELYTRA_TEXTURE;
   private static final long a = gb.aYR(7382530991093434877L, 5271008029939073395L, MethodHandles.lookup().lookupClass()).a(79907227809167L);

   static {
      long var4 = a ^ 33634908220847L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var4 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var4 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var3 = var1.doFinal(
         "\u0084\u0012$:î>\u0007(²ºÌ-6ñ«Îæ\u001cá¡\u0094Ë¿?\u0099m¦º¯C^\u0000+lA\u000b¸[¥y\u0010K\u0012·2\u0099\\ê".getBytes("ISO-8859-1")
      );
      String var6 = a(var3).intern();
      byte var10001 = -1;
      String var0 = var6;
      DEFAULT_ELYTRA_TEXTURE = class_2960.method_60656(var0);
   }

   private static MatchException a(MatchException var0) {
      return var0;
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

   public static ks capture(class_742 var0) {
      long var1 = a ^ 122087371270836L;
      class_8685 var4 = resolveSkin(var0);
      WalkAnimationStateAccessor var5 = (WalkAnimationStateAccessor)var0.field_42108;
      float var6 = var0.method_36454();
      float var7 = var0.method_36455();
      float var8 = var0.field_6283;
      boolean var10000 = kt.bRx();
      float var9 = var0.field_6241;
      boolean var3 = var10000;

      ks var10001;
      class_8685 var10002;
      class_2960 var10003;
      class_2960 var10004;
      class_2960 var10005;
      class_7920 var10006;
      float var10007;
      float var10008;
      float var10009;
      float var10010;
      float var10011;
      float var10012;
      float var10013;
      float var10014;
      int var10015;
      int var10016;
      class_4050 var10017;
      boolean var10018;
      boolean var10019;
      boolean var10020;
      class_243 var10021;
      class_1799 var10022;
      class_1799 var10023;
      class_1799 var10024;
      float var10025;
      float var10026;
      boolean var10027;
      boolean var10028;
      class_1268 var10029;
      label33: {
         try {
            var12 = new ks;
            var10001 = var12;
            var10002 = var4;
            var10003 = var4.comp_1626().comp_3627();
            var10004 = resolveCapeTexture(var0);
            var10005 = resolveElytraTexture(var0);
            var10006 = var4.comp_1629();
            var10007 = var6;
            var10008 = var7;
            var10009 = var6;
            var10010 = var7;
            var10011 = var8;
            var10012 = var8;
            var10013 = var9;
            var10014 = var9;
            var10015 = var0.field_6235;
            var10016 = var0.field_6213;
            var10017 = var0.method_18376();
            var10018 = var0.method_5715();
            var10019 = var0.method_5624();
            var10020 = var0.method_24828();
            var10021 = var0.method_18798();
            var10022 = var0.method_6047().method_7972();
            var10023 = var0.method_6079().method_7972();
            var10024 = var0.method_6118(class_1304.field_6174).method_7972();
            var10025 = var0.field_42108.method_48566();
            var10026 = var5.getPosition();
            var10027 = var0.method_6128();
            var10028 = var0.method_6115();
            if (var0.method_6115()) {
               var10029 = var0.method_6058();
               break label33;
            }
         } catch (MatchException var11) {
            throw a(var11);
         }

         var10029 = class_1268.field_5808;
      }

      var10001./* $VF: Unable to resugar constructor */<init>(
         var10002,
         var10003,
         var10004,
         var10005,
         var10006,
         var10007,
         var10008,
         var10009,
         var10010,
         var10011,
         var10012,
         var10013,
         var10014,
         var10015,
         var10016,
         var10017,
         var10018,
         var10019,
         var10020,
         var10021,
         var10022,
         var10023,
         var10024,
         var10025,
         var10026,
         var10027,
         var10028,
         var10029
      );
      if (iS.bwL() == null) {
         label24: {
            try {
               if (var3) {
                  var13 = false;
                  break label24;
               }
            } catch (MatchException var10) {
               throw a(var10);
            }

            var13 = true;
         }

         kt.bRv(var13);
      }

      return var12;
   }

   private static class_2960 resolveElytraTexture(class_742 var0) {
      long var1 = a ^ 24827874461638L;
      boolean var10000 = kt.bRx();
      class_12081 var4 = resolveSkin(var0).comp_1628();
      boolean var3 = var10000;

      try {
         if (!var3) {
            return var4.comp_3627();
         }

         if (var4 == null) {
            return DEFAULT_ELYTRA_TEXTURE;
         }
      } catch (MatchException var5) {
         throw a(var5);
      }

      return var4.comp_3627();
   }

   private static class_2960 resolveCapeTexture(class_742 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ks.a J
      // 03: ldc2_w 2333291055632
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0e: ldc_w sixtwo/ee
      // 11: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 14: checkcast sixtwo/ee
      // 17: astore 4
      // 19: istore 3
      // 1a: aload 4
      // 1c: iload 3
      // 1d: ifne 2c
      // 20: ifnull 52
      // 23: goto 2a
      // 26: invokestatic sixtwo/ks.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 4
      // 2c: invokevirtual sixtwo/ee.bag ()Z
      // 2f: ifeq 52
      // 32: invokestatic sixtwo/rD.dlT ()Lsixtwo/qG;
      // 35: iload 3
      // 36: ifne 4d
      // 39: goto 40
      // 3c: invokestatic sixtwo/ks.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: ifnull 52
      // 43: goto 4a
      // 46: invokestatic sixtwo/ks.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: invokestatic sixtwo/rD.dlT ()Lsixtwo/qG;
      // 4d: aload 0
      // 4e: invokevirtual sixtwo/qG.daj (Lnet/minecraft/class_742;)Lnet/minecraft/class_2960;
      // 51: areturn
      // 52: aload 0
      // 53: invokestatic sixtwo/ks.resolveSkin (Lnet/minecraft/class_742;)Lnet/minecraft/class_8685;
      // 56: invokevirtual net/minecraft/class_8685.comp_1627 ()Lnet/minecraft/class_12079$class_12081;
      // 59: astore 5
      // 5b: aload 5
      // 5d: iload 3
      // 5e: ifne 6d
      // 61: ifnull 75
      // 64: goto 6b
      // 67: invokestatic sixtwo/ks.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a: athrow
      // 6b: aload 5
      // 6d: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // 72: goto 76
      // 75: aconst_null
      // 76: areturn
   }

   private static class_8685 resolveSkin(class_742 var0) {
      long var1 = a ^ 112329090563367L;
      boolean var10000 = kt.bRx();
      class_8685 var4 = var0.method_52814();
      boolean var3 = var10000;

      try {
         if (!var3) {
            return var4;
         }

         if (var4 != null) {
            return var4;
         }
      } catch (MatchException var5) {
         throw a(var5);
      }

      return class_1068.method_62620();
   }
}
