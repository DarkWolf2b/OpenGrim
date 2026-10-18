package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1269;
import net.minecraft.class_1297;
import net.minecraft.class_1299;
import net.minecraft.class_1309;
import net.minecraft.class_1657;
import net.minecraft.class_1934;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import net.minecraft.class_2828.class_2829;

public class jg {
   public static final String gaLzx;
   public static final Set<class_1299<? extends class_1297>> hZYeV;
   public static final Set<class_1299<? extends class_1297>> fbEDU;
   public static final Set<class_1299<? extends class_1297>> skTlu;
   private static final String[] okfwP;
   private static int aIWFT;
   private static final long CcOBc = gb.aYR(-4077821107154291975L, -7390323926547277616L, MethodHandles.lookup().lookupClass()).a(133219813590623L);
   private static final long[] xEBCE;
   private static final Integer[] bSsdq;
   private static final Map KBkDM;

   static {
      long var20 = CcOBc ^ 116231379233606L;
      if (bCa() != 0) {
         bBY(14);
      }

      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var20 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var11 = new String[5];
      int var17 = 0;
      String var16 = "&\u0080\"\u0088\t\u009f\u008b┬ę\b┬á>├╗K\u008e^D8\b2\u0091P\u001f\u001b├é├×\u001c";
      int var18 = "&\u0080\"\u0088\t\u009f\u008b┬ę\b┬á>├╗K\u008e^D8\b2\u0091P\u001f\u001b├é├×\u001c".length();
      char var15 = '\b';
      int var24 = -1;

      label58:
      while (true) {
         String var25 = var16.substring(++var24, var24 + var15);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var12.doFinal(var25.getBytes("ISO-8859-1"));
            String var38 = bCc(var19).intern();
            switch (var10001) {
               case 0:
                  var11[var17++] = var38;
                  if ((var24 += var15) >= var18) {
                     gaLzx = var11[3];
                     KBkDM = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[26];
                     int var3 = 0;
                     String var4 = "\u0011\u0083\u00ad├ó\u009c_c5├Ç|q/\f┬Ž├╣\u0005┬í\u0086┬á├«U┬Ą┬╗┬Ę\u0098\u008e\u0001├Ć├Ő\u0019\u0081\u0088t\u001ek\rD.\f├Ęv\u008c\u0081├Ę┬ąU\u009c├ö├ŚQ^p<┬ÂWw2/\u007fOW├ś0~J.├őD3x\u0092\u0010├Ş\u009ez├Ž\u009bO\t├ç\u0005├Ä├Ç├Ě├Ĺ┬Â\u0083├äq├╣\u001bYl\u009d┬Ž\u0095e\f├ć┬ád!├â┬ę\u0014├×\u008f3├┤\u0005\\V\u0005├Ö┬Č├│├┤n\u0084\u0097+┬░a0├Č├žrc=├ő\u0090-z\u0002E├ő├ś\u001c├î\u0096├ł\u0011\u0090\u0094.\u001b├Ąz┬ónZ5dV](├Ť├ť\u0089\u0018U┬┐\nd\u0092\n├Á$e├Ł\u0098┬í├Ą├żX5V├Ç├╝┬ę~\u0007`2\u0082\u00993\u007f*├Ş├ę\u0012";
                     int var5 = "\u0011\u0083\u00ad├ó\u009c_c5├Ç|q/\f┬Ž├╣\u0005┬í\u0086┬á├«U┬Ą┬╗┬Ę\u0098\u008e\u0001├Ć├Ő\u0019\u0081\u0088t\u001ek\rD.\f├Ęv\u008c\u0081├Ę┬ąU\u009c├ö├ŚQ^p<┬ÂWw2/\u007fOW├ś0~J.├őD3x\u0092\u0010├Ş\u009ez├Ž\u009bO\t├ç\u0005├Ä├Ç├Ě├Ĺ┬Â\u0083├äq├╣\u001bYl\u009d┬Ž\u0095e\f├ć┬ád!├â┬ę\u0014├×\u008f3├┤\u0005\\V\u0005├Ö┬Č├│├┤n\u0084\u0097+┬░a0├Č├žrc=├ő\u0090-z\u0002E├ő├ś\u001c├î\u0096├ł\u0011\u0090\u0094.\u001b├Ąz┬ónZ5dV](├Ť├ť\u0089\u0018U┬┐\nd\u0092\n├Á$e├Ł\u0098┬í├Ą├żX5V├Ç├╝┬ę~\u0007`2\u0082\u00993\u007f*├Ş├ę\u0012"
                        .length();
                     byte var2 = 0;

                     label40:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var42 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var45 = -1;

                        while (true) {
                           long var8 = var42;
                           byte[] var10 = var0.doFinal(
                              new byte[]{
                                 (byte)(var8 >>> 56),
                                 (byte)(var8 >>> 48),
                                 (byte)(var8 >>> 40),
                                 (byte)(var8 >>> 32),
                                 (byte)(var8 >>> 24),
                                 (byte)(var8 >>> 16),
                                 (byte)(var8 >>> 8),
                                 (byte)var8
                              }
                           );
                           long var47 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var45) {
                              case 0:
                                 var28[var10001] = var47;
                                 if (var2 >= var5) {
                                    xEBCE = var6;
                                    bSsdq = new Integer[26];
                                    hZYeV = bBS();
                                    fbEDU = bBU();
                                    long var36 = 4565298335807544230L ^ var20;
                                    skTlu = bBT();
                                    String[] var29 = new String[bCf<"i">(6484, var36)];
                                    var29[0] = "N";
                                    var29[1] = var11[0];
                                    var29[2] = "E";
                                    var29[3] = var11[4];
                                    var29[4] = "S";
                                    var29[5] = var11[2];
                                    var29[bCf<"i">(9041, 6702167822508499371L ^ var20)] = "W";
                                    var29[bCf<"i">(22629, 5563684398666701465L ^ var20)] = var11[1];
                                    okfwP = var29;
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var47;
                                 if (var2 < var5) {
                                    continue label40;
                                 }

                                 var4 = "r\u0007┬»├ĺ├╗\u0097\u001b\u001f\u001c├ĺ├é├í├Ş\u0097┬»├Ś";
                                 var5 = "r\u0007┬»├ĺ├╗\u0097\u001b\u001f\u001c├ĺ├é├í├Ş\u0097┬»├Ś".length();
                                 var2 = 0;
                           }

                           byte var35 = var2;
                           var2 += 8;
                           var7 = var4.substring(var35, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var42 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var45 = 0;
                        }
                     }
                  }

                  var15 = var16.charAt(var24);
                  break;
               default:
                  var11[var17++] = var38;
                  if ((var24 += var15) < var18) {
                     var15 = var16.charAt(var24);
                     continue label58;
                  }

                  var16 = "├ź├«:├č├Ź9m├ťAzi,+\u009a\u0099\u001b\u0093┬ĚU-Q<├╝\u0016\bX├Át┬╝E┬Ę\u009a!";
                  var18 = "├ź├«:├č├Ź9m├ťAzi,+\u009a\u0099\u001b\u0093┬ĚU-Q<├╝\u0016\bX├Át┬╝E┬Ę\u009a!".length();
                  var15 = 24;
                  var24 = -1;
            }

            var25 = var16.substring(++var24, var24 + var15);
            var10001 = 0;
         }
      }
   }

   public static double bBI(class_1297 var0) {
      return bBJ(rD.dlmvG.field_1724.method_33571(), var0.method_5829());
   }

   private static CallSite bCf(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bCe".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static class_243 bBE(class_243 param0, float param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 19442602171610
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual net/minecraft/class_243.method_1027 ()D
      // 0f: dstore 6
      // 11: astore 5
      // 13: dload 6
      // 15: ldc2_w 1.0E-7
      // 18: dcmpg
      // 19: aload 5
      // 1b: ifnull 34
      // 1e: ifge 30
      // 21: goto 28
      // 24: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 27: athrow
      // 28: getstatic net/minecraft/class_243.field_1353 Lnet/minecraft/class_243;
      // 2b: areturn
      // 2c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 2f: athrow
      // 30: dload 6
      // 32: dconst_1
      // 33: dcmpl
      // 34: ifle 42
      // 37: aload 0
      // 38: invokevirtual net/minecraft/class_243.method_1029 ()Lnet/minecraft/class_243;
      // 3b: goto 43
      // 3e: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 41: athrow
      // 42: aload 0
      // 43: fload 1
      // 44: f2d
      // 45: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 48: astore 8
      // 4a: fload 2
      // 4b: ldc_w 0.017453292
      // 4e: fmul
      // 4f: f2d
      // 50: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 53: fstore 9
      // 55: fload 2
      // 56: ldc_w 0.017453292
      // 59: fmul
      // 5a: f2d
      // 5b: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 5e: fstore 10
      // 60: new net/minecraft/class_243
      // 63: dup
      // 64: aload 8
      // 66: getfield net/minecraft/class_243.field_1352 D
      // 69: fload 10
      // 6b: f2d
      // 6c: dmul
      // 6d: aload 8
      // 6f: getfield net/minecraft/class_243.field_1350 D
      // 72: fload 9
      // 74: f2d
      // 75: dmul
      // 76: dsub
      // 77: aload 8
      // 79: getfield net/minecraft/class_243.field_1351 D
      // 7c: aload 8
      // 7e: getfield net/minecraft/class_243.field_1350 D
      // 81: fload 10
      // 83: f2d
      // 84: dmul
      // 85: aload 8
      // 87: getfield net/minecraft/class_243.field_1352 D
      // 8a: fload 9
      // 8c: f2d
      // 8d: dmul
      // 8e: dadd
      // 8f: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 92: areturn
   }

   public static int bBx(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 71435378303362
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 12: aload 3
      // 13: ifnull 2c
      // 16: ifnonnull 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 25: athrow
      // 26: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 29: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 2c: aload 0
      // 2d: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 30: invokevirtual net/minecraft/class_634.method_2871 (Ljava/util/UUID;)Lnet/minecraft/class_640;
      // 33: astore 4
      // 35: aload 4
      // 37: aload 3
      // 38: ifnull 4d
      // 3b: ifnonnull 4b
      // 3e: goto 45
      // 41: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 44: athrow
      // 45: bipush 0
      // 46: ireturn
      // 47: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 4a: athrow
      // 4b: aload 4
      // 4d: invokevirtual net/minecraft/class_640.method_2959 ()I
      // 50: ireturn
   }

   public static double bBJ(class_243 var0, class_238 var1) {
      class_243 var2 = bBK(var0, var1);
      return bBH(var2, var0);
   }

   public static boolean bBL(class_1297 var0, class_1297 var1) {
      long var2 = CcOBc ^ 125061689981223L;
      String[] var10000 = jf.bBe();
      class_243 var5 = var0.method_5631(0.0F, var0.method_5791());
      class_243 var6 = var1.method_73189().method_1035(var0.method_73189());
      var6 = new class_243(var6.field_1352, 0.0, var6.field_1350).method_1029();
      String[] var4 = var10000;

      try {
         double var10;
         int var9 = (var10 = var6.method_1026(var5) - 0.0) == 0.0 ? 0 : (var10 < 0.0 ? -1 : 1);
         if (var4 == null) {
            return (boolean)var9;
         }

         if (var9 < 0) {
            return (boolean)1;
         }
      } catch (MatchException var7) {
         throw bCb(var7);
      }

      return (boolean)0;
   }

   public static boolean bBR(class_1269 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 65442531419512
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 26
      // 11: instanceof net/minecraft/class_1269$class_9860
      // 14: ifeq 3e
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 25: athrow
      // 26: checkcast net/minecraft/class_1269$class_9860
      // 29: astore 4
      // 2b: aload 4
      // 2d: invokevirtual net/minecraft/class_1269$class_9860.comp_2909 ()Lnet/minecraft/class_1269$class_9861;
      // 30: getstatic net/minecraft/class_1269$class_9861.field_52427 Lnet/minecraft/class_1269$class_9861;
      // 33: if_acmpne 3e
      // 36: bipush 1
      // 37: goto 3f
      // 3a: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3d: athrow
      // 3e: bipush 0
      // 3f: ireturn
   }

   private static int bCe(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bCd(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static int bCa() {
      int var0 = bBZ();

      try {
         return var0 == 0 ? 51 : 0;
      } catch (MatchException var1) {
         throw bCb(var1);
      }
   }

   private static int bCd(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 12347;
      if (bSsdq[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = xEBCE[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])KBkDM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               KBkDM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         bSsdq[var3] = var15;
      }

      return bSsdq[var3];
   }

   @Deprecated
   public static void bBr() {
      double var0 = class_3532.method_15357(rD.dlmvG.field_1724.method_23317()) + 0.5;
      double var2 = class_3532.method_15357(rD.dlmvG.field_1724.method_23321()) + 0.5;
      rD.dlmvG.field_1724.method_5814(var0, rD.dlmvG.field_1724.method_23318(), var2);
      rD.dlmvG
         .field_1724
         .field_3944
         .method_52787(
            new class_2829(
               rD.dlmvG.field_1724.method_23317(),
               rD.dlmvG.field_1724.method_23318(),
               rD.dlmvG.field_1724.method_23321(),
               rD.dlmvG.field_1724.method_24828(),
               rD.dlmvG.field_1724.field_5976
            )
         );
   }

   public static boolean bBP(class_1309 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 61601394108257
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 25
      // 11: invokestatic sixtwo/jg.bBQ (Lnet/minecraft/class_1309;)Z
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1d: athrow
      // 1e: bipush 0
      // 1f: ireturn
      // 20: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 23: athrow
      // 24: aload 0
      // 25: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 28: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2b: aload 3
      // 2c: ifnull 46
      // 2f: if_acmpne 3f
      // 32: goto 39
      // 35: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 38: athrow
      // 39: bipush 1
      // 3a: ireturn
      // 3b: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3e: athrow
      // 3f: aload 0
      // 40: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 43: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 46: invokestatic sixtwo/jg.bBL (Lnet/minecraft/class_1297;Lnet/minecraft/class_1297;)Z
      // 49: ireturn
   }

   public static class_243 bBK(class_243 var0, class_238 var1) {
      double var2 = class_3532.method_15350(var0.field_1352, var1.field_1323, var1.field_1320);
      double var4 = class_3532.method_15350(var0.field_1351, var1.field_1322, var1.field_1325);
      double var6 = class_3532.method_15350(var0.field_1350, var1.field_1321, var1.field_1324);
      return new class_243(var2, var4, var6);
   }

   public static int bBZ() {
      return aIWFT;
   }

   public static boolean bBM(class_1309 var0) {
      return bBN(var0, 0.0);
   }

   public static boolean bBG(class_243 var0, float var1) {
      long var2 = CcOBc ^ 30760724280325L;
      String[] var4 = jf.bBe();

      try {
         double var6;
         int var10000 = (var6 = bBH(rD.dlmvG.field_1724.method_33571(), var0) - var1) == 0.0 ? 0 : (var6 < 0.0 ? -1 : 1);
         if (var4 == null) {
            return (boolean)var10000;
         }

         if (var10000 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var5) {
         throw bCb(var5);
      }

      return (boolean)0;
   }

   private static Exception bCb(Exception var0) {
      return var0;
   }

   public static Set<class_1299<? extends class_1297>> bBU() {
      long var0 = CcOBc ^ 93690788643585L;
      Set var2 = bBS();
      class_1299[] var10000 = new class_1299[bCf<"i">(8041, 3385157763136304584L ^ var0)];
      var10000[0] = class_1299.field_6063;
      var10000[1] = class_1299.field_6083;
      var10000[2] = class_1299.field_42623;
      var10000[3] = class_1299.field_6138;
      var10000[4] = class_1299.field_6112;
      var10000[5] = class_1299.field_6120;
      var10000[bCf<"i">(24349, 3566935902058575280L ^ var0)] = class_1299.field_6131;
      var10000[bCf<"i">(22629, 5563654161760154334L ^ var0)] = class_1299.field_6089;
      var10000[bCf<"i">(6776, 2538440681442554070L ^ var0)] = class_1299.field_42456;
      var10000[bCf<"i">(31974, 1282182386881844817L ^ var0)] = class_1299.field_42460;
      var10000[bCf<"i">(26754, 5276032614986695208L ^ var0)] = class_1299.field_42457;
      var10000[bCf<"i">(30494, 8792682149458927030L ^ var0)] = class_1299.field_6103;
      var10000[bCf<"i">(16810, 119343873021471516L ^ var0)] = class_1299.field_6124;
      var10000[bCf<"i">(9548, 9160921673762803710L ^ var0)] = class_1299.field_6130;
      var10000[bCf<"i">(31941, 6613060033132713593L ^ var0)] = class_1299.field_6133;
      var10000[bCf<"i">(20955, 4793888388244142949L ^ var0)] = class_1299.field_6100;
      var10000[bCf<"i">(27411, 4734543305694167465L ^ var0)] = class_1299.field_6135;
      var10000[bCf<"i">(25631, 367161729849806502L ^ var0)] = class_1299.field_6122;
      var10000[bCf<"i">(26487, 83293111131131355L ^ var0)] = class_1299.field_6061;
      var10000[bCf<"i">(7506, 8087510251779667938L ^ var0)] = class_1299.field_6044;
      var10000[bCf<"i">(31896, 8392274899520083511L ^ var0)] = class_1299.field_6064;
      var10000[bCf<"i">(18380, 8669199357398445432L ^ var0)] = class_1299.field_6060;
      var10000[bCf<"i">(32304, 7367367173026698376L ^ var0)] = class_1299.field_6066;
      var10000[bCf<"i">(11356, 7819094621996943087L ^ var0)] = class_1299.field_6049;
      var10000[bCf<"i">(23713, 2884960115660715530L ^ var0)] = class_1299.field_6129;
      var10000[bCf<"i">(22966, 2697781416038200095L ^ var0)] = class_1299.field_6043;
      var10000[bCf<"i">(22845, 4612729819878159234L ^ var0)] = class_1299.field_28401;
      Set var3 = Set.of(var10000);
      var2.removeAll(var3);
      return var2;
   }

   public static class_238 bBA(class_1297 var0) {
      class_243 var1 = var0.method_30950(rD.dlmvG.method_61966().method_60637(true));
      return bBB(var0, var1);
   }

   public static float bBv(class_1309 var0, float var1) {
      return var1 / var0.method_6063() * 100.0F;
   }

   public static class_238 bBz(class_1297 var0) {
      class_243 var1 = var0.method_73189();
      return new class_238(
         var1.field_1352 - var0.method_17681() / 2.0F,
         var1.field_1351,
         var1.field_1350 - var0.method_17681() / 2.0F,
         var1.field_1352 + var0.method_17681() / 2.0F,
         var1.field_1351 + var0.method_17682(),
         var1.field_1350 + var0.method_17681() / 2.0F
      );
   }

   public static double bBH(class_243 var0, class_243 var1) {
      return var0.method_1022(var1);
   }

   public static Set<class_1299<? extends class_1297>> bBS() {
      long var0 = CcOBc ^ 23713150827272L;
      LinkedHashSet var2 = new LinkedHashSet();

      for (Field var6 : class_1299.class.getDeclaredFields()) {
         if (var6.getType() == class_1299.class) {
            var6.setAccessible(true);

            try {
               Object var7 = var6.get(null);

               try {
                  if (var7 instanceof class_1299) {
                     var2.add((class_1299)var7);
                  }
               } catch (IllegalAccessException var8) {
                  throw bCb(var8);
               }
            } catch (IllegalAccessException var9) {
            }
         }
      }

      return var2;
   }

   public static boolean bBQ(class_1309 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jg.CcOBc J
      // 003: ldc2_w 86603667627040
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: invokevirtual net/minecraft/class_1309.method_6047 ()Lnet/minecraft/class_1799;
      // 00f: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 012: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 015: istore 4
      // 017: astore 3
      // 018: aload 0
      // 019: invokevirtual net/minecraft/class_1309.method_6079 ()Lnet/minecraft/class_1799;
      // 01c: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 01f: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 022: istore 5
      // 024: iload 4
      // 026: aload 3
      // 027: ifnull 055
      // 02a: ifne 051
      // 02d: goto 034
      // 030: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 033: athrow
      // 034: iload 5
      // 036: aload 3
      // 037: ifnull 055
      // 03a: goto 041
      // 03d: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 040: athrow
      // 041: ifne 051
      // 044: goto 04b
      // 047: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 04a: athrow
      // 04b: bipush 0
      // 04c: ireturn
      // 04d: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 050: athrow
      // 051: aload 0
      // 052: invokevirtual net/minecraft/class_1309.method_6039 ()Z
      // 055: aload 3
      // 056: ifnull 06d
      // 059: ifeq 069
      // 05c: goto 063
      // 05f: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 062: athrow
      // 063: bipush 1
      // 064: ireturn
      // 065: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 068: athrow
      // 069: aload 0
      // 06a: invokevirtual net/minecraft/class_1309.method_6115 ()Z
      // 06d: aload 3
      // 06e: ifnull 0a4
      // 071: ifeq 0a0
      // 074: goto 07b
      // 077: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 07a: athrow
      // 07b: aload 0
      // 07c: invokevirtual net/minecraft/class_1309.method_6030 ()Lnet/minecraft/class_1799;
      // 07f: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 082: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 085: aload 3
      // 086: ifnull 0a4
      // 089: goto 090
      // 08c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 08f: athrow
      // 090: ifeq 0a0
      // 093: goto 09a
      // 096: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 099: athrow
      // 09a: bipush 1
      // 09b: ireturn
      // 09c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: invokevirtual net/minecraft/class_1309.method_6115 ()Z
      // 0a4: aload 3
      // 0a5: ifnull 10a
      // 0a8: ifeq 109
      // 0ab: goto 0b2
      // 0ae: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0b1: athrow
      // 0b2: aload 0
      // 0b3: invokevirtual net/minecraft/class_1309.method_6058 ()Lnet/minecraft/class_1268;
      // 0b6: astore 6
      // 0b8: aload 6
      // 0ba: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 0bd: aload 3
      // 0be: ifnull 0e9
      // 0c1: if_acmpne 0e4
      // 0c4: goto 0cb
      // 0c7: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ca: athrow
      // 0cb: iload 4
      // 0cd: aload 3
      // 0ce: ifnull 0e3
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0d7: athrow
      // 0d8: ifeq 0e4
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0e1: athrow
      // 0e2: bipush 1
      // 0e3: ireturn
      // 0e4: aload 6
      // 0e6: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 0e9: if_acmpne 109
      // 0ec: iload 5
      // 0ee: aload 3
      // 0ef: ifnull 10a
      // 0f2: goto 0f9
      // 0f5: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0f8: athrow
      // 0f9: ifeq 109
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 102: athrow
      // 103: bipush 1
      // 104: ireturn
      // 105: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 108: athrow
      // 109: bipush 0
      // 10a: ireturn
   }

   public static boolean bBq() {
      return rD.dlmvG.field_1687.method_18456().parallelStream().filter(var0 -> {
         long var1 = CcOBc ^ 118835830955022L;

         try {
            if (rD.dlmvG.field_1724 != var0) {
               return true;
            }
         } catch (MatchException var3) {
            throw bCb(var3);
         }

         return false;
      }).filter(var0 -> {
         long var1 = CcOBc ^ 72973661186438L;
         String[] var3 = jf.bBe();

         try {
            double var5;
            int var10000 = (var5 = var0.method_5858(rD.dlmvG.field_1724) - 36.0) == 0.0 ? 0 : (var5 < 0.0 ? -1 : 1);
            if (var3 == null) {
               return (boolean)var10000;
            }

            if (var10000 < 0) {
               return (boolean)1;
            }
         } catch (MatchException var4) {
            throw bCb(var4);
         }

         return (boolean)0;
      }).anyMatch(class_1309::method_29504);
   }

   public static boolean bBC(class_1297 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 17899277514488
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 11: astore 4
      // 13: astore 3
      // 14: aload 4
      // 16: aload 3
      // 17: ifnull 2b
      // 1a: ifnonnull 2a
      // 1d: goto 24
      // 20: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 23: athrow
      // 24: bipush 0
      // 25: ireturn
      // 26: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 29: athrow
      // 2a: aload 0
      // 2b: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 2e: astore 5
      // 30: aload 4
      // 32: invokevirtual net/minecraft/class_1297.method_33571 ()Lnet/minecraft/class_243;
      // 35: astore 6
      // 37: aload 6
      // 39: aload 5
      // 3b: sipush 491
      // 3e: ldc2_w 9083843222008127154
      // 41: lload 1
      // 42: lxor
      // 43: invokedynamic i (IJ)I bsm=sixtwo/jg.bCf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 48: invokestatic sixtwo/pf.cNi (Lnet/minecraft/class_243;Lnet/minecraft/class_238;I)Ljava/util/List;
      // 4b: astore 7
      // 4d: aload 7
      // 4f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 54: astore 8
      // 56: aload 8
      // 58: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 5d: ifeq bf
      // 60: aload 8
      // 62: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 67: checkcast net/minecraft/class_243
      // 6a: astore 9
      // 6c: aload 6
      // 6e: aload 9
      // 70: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 73: ldc2_w 9.999999747378752E-6
      // 76: dcmpg
      // 77: aload 3
      // 78: ifnull c0
      // 7b: ifge 88
      // 7e: goto 85
      // 81: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 84: athrow
      // 85: goto 56
      // 88: new net/minecraft/class_3959
      // 8b: dup
      // 8c: aload 6
      // 8e: aload 9
      // 90: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 93: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 96: aload 4
      // 98: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 9b: astore 10
      // 9d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // a0: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // a3: aload 10
      // a5: invokevirtual net/minecraft/class_638.method_17742 (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // a8: astore 11
      // aa: aload 11
      // ac: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // af: getstatic net/minecraft/class_239$class_240.field_1333 Lnet/minecraft/class_239$class_240;
      // b2: if_acmpne bb
      // b5: bipush 0
      // b6: ireturn
      // b7: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // ba: athrow
      // bb: aload 3
      // bc: ifnonnull 56
      // bf: bipush 1
      // c0: ireturn
   }

   public static class_1934 bBw(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 70496718445104
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 12: aload 3
      // 13: ifnull 2c
      // 16: ifnonnull 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 1f: athrow
      // 20: aconst_null
      // 21: areturn
      // 22: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 25: athrow
      // 26: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 29: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 2c: aload 0
      // 2d: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 30: invokevirtual net/minecraft/class_634.method_2871 (Ljava/util/UUID;)Lnet/minecraft/class_640;
      // 33: astore 4
      // 35: aload 4
      // 37: aload 3
      // 38: ifnull 4d
      // 3b: ifnonnull 4b
      // 3e: goto 45
      // 41: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 44: athrow
      // 45: aconst_null
      // 46: areturn
      // 47: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 4a: athrow
      // 4b: aload 4
      // 4d: invokevirtual net/minecraft/class_640.method_2958 ()Lnet/minecraft/class_1934;
      // 50: areturn
   }

   public static double bBy(class_1297 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jg.CcOBc J
      // 003: ldc2_w 28546101876612
      // 006: lxor
      // 007: lstore 1
      // 008: aload 0
      // 009: invokevirtual net/minecraft/class_1297.method_73183 ()Lnet/minecraft/class_1937;
      // 00c: astore 4
      // 00e: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 011: aload 0
      // 012: invokevirtual net/minecraft/class_1297.method_24515 ()Lnet/minecraft/class_2338;
      // 015: astore 5
      // 017: astore 3
      // 018: aload 5
      // 01a: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 01d: istore 6
      // 01f: iload 6
      // 021: aload 4
      // 023: invokevirtual net/minecraft/class_1937.method_31607 ()I
      // 026: if_icmplt 108
      // 029: new net/minecraft/class_2338
      // 02c: dup
      // 02d: aload 5
      // 02f: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 032: iload 6
      // 034: aload 5
      // 036: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 039: invokespecial net/minecraft/class_2338.<init> (III)V
      // 03c: astore 7
      // 03e: aload 4
      // 040: aload 7
      // 042: invokevirtual net/minecraft/class_1937.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 045: astore 8
      // 047: aload 8
      // 049: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 04c: astore 9
      // 04e: aload 9
      // 050: getstatic net/minecraft/class_2246.field_10382 Lnet/minecraft/class_2248;
      // 053: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 056: aload 3
      // 057: ifnull 073
      // 05a: ifne 0d8
      // 05d: goto 064
      // 060: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 063: athrow
      // 064: aload 9
      // 066: getstatic net/minecraft/class_2246.field_10164 Lnet/minecraft/class_2248;
      // 069: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 06c: goto 073
      // 06f: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 072: athrow
      // 073: aload 3
      // 074: ifnull 090
      // 077: ifne 0d8
      // 07a: goto 081
      // 07d: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 080: athrow
      // 081: aload 9
      // 083: getstatic net/minecraft/class_2246.field_10030 Lnet/minecraft/class_2248;
      // 086: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 089: goto 090
      // 08c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 08f: athrow
      // 090: aload 3
      // 091: ifnull 0ad
      // 094: ifne 0d8
      // 097: goto 09e
      // 09a: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 09d: athrow
      // 09e: aload 9
      // 0a0: getstatic net/minecraft/class_2246.field_21211 Lnet/minecraft/class_2248;
      // 0a3: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0a6: goto 0ad
      // 0a9: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ac: athrow
      // 0ad: aload 3
      // 0ae: ifnull 0ca
      // 0b1: ifne 0d8
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0ba: athrow
      // 0bb: aload 9
      // 0bd: getstatic net/minecraft/class_2246.field_10343 Lnet/minecraft/class_2248;
      // 0c0: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0c3: goto 0ca
      // 0c6: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0c9: athrow
      // 0ca: aload 3
      // 0cb: ifnull 0ec
      // 0ce: ifeq 0e0
      // 0d1: goto 0d8
      // 0d4: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0d7: athrow
      // 0d8: ldc2_w -1.0
      // 0db: dreturn
      // 0dc: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 0df: athrow
      // 0e0: aload 8
      // 0e2: aload 4
      // 0e4: aload 7
      // 0e6: invokevirtual net/minecraft/class_2680.method_26220 (Lnet/minecraft/class_1922;Lnet/minecraft/class_2338;)Lnet/minecraft/class_265;
      // 0e9: invokevirtual net/minecraft/class_265.method_1110 ()Z
      // 0ec: ifne 101
      // 0ef: aload 0
      // 0f0: invokevirtual net/minecraft/class_1297.method_23318 ()D
      // 0f3: aload 7
      // 0f5: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 0f8: i2d
      // 0f9: dsub
      // 0fa: dconst_1
      // 0fb: dsub
      // 0fc: dreturn
      // 0fd: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 100: athrow
      // 101: iinc 6 -1
      // 104: aload 3
      // 105: ifnonnull 01f
      // 108: ldc2_w -1.0
      // 10b: dreturn
   }

   public static class_238 bBB(class_1297 var0, class_243 var1) {
      return new class_238(
         var1.field_1352 - var0.method_17681() / 2.0F,
         var1.field_1351,
         var1.field_1350 - var0.method_17681() / 2.0F,
         var1.field_1352 + var0.method_17681() / 2.0F,
         var1.field_1351 + var0.method_17682(),
         var1.field_1350 + var0.method_17681() / 2.0F
      );
   }

   public static boolean bBD(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 83246060478343
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getstatic net/minecraft/class_1304.field_6166 Lnet/minecraft/class_1304;
      // 10: invokevirtual net/minecraft/class_1657.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 13: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 16: aload 3
      // 17: ifnull 35
      // 1a: ifeq 85
      // 1d: goto 24
      // 20: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 23: athrow
      // 24: aload 0
      // 25: getstatic net/minecraft/class_1304.field_6172 Lnet/minecraft/class_1304;
      // 28: invokevirtual net/minecraft/class_1657.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 2b: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 2e: goto 35
      // 31: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 34: athrow
      // 35: aload 3
      // 36: ifnull 54
      // 39: ifeq 85
      // 3c: goto 43
      // 3f: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 42: athrow
      // 43: aload 0
      // 44: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 47: invokevirtual net/minecraft/class_1657.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 4a: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 4d: goto 54
      // 50: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 53: athrow
      // 54: aload 3
      // 55: ifnull 73
      // 58: ifeq 85
      // 5b: goto 62
      // 5e: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 61: athrow
      // 62: aload 0
      // 63: getstatic net/minecraft/class_1304.field_6169 Lnet/minecraft/class_1304;
      // 66: invokevirtual net/minecraft/class_1657.method_6118 (Lnet/minecraft/class_1304;)Lnet/minecraft/class_1799;
      // 69: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 6c: goto 73
      // 6f: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 72: athrow
      // 73: aload 3
      // 74: ifnull 82
      // 77: ifeq 85
      // 7a: goto 81
      // 7d: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 80: athrow
      // 81: bipush 1
      // 82: goto 86
      // 85: bipush 0
      // 86: ireturn
   }

   public static String bBO(float var0) {
      long var1 = CcOBc ^ 61673077272306L;
      String[] var10000 = jf.bBe();
      float var4 = (var0 + 180.0F) % 360.0F;
      String[] var3 = var10000;

      label21: {
         label20: {
            try {
               float var8;
               var7 = (var8 = var4 - 0.0F) == 0.0F ? 0 : (var8 < 0.0F ? -1 : 1);
               if (var3 == null) {
                  break label21;
               }

               if (var7 >= 0) {
                  break label20;
               }
            } catch (MatchException var6) {
               throw bCb(var6);
            }

            var4 += 360.0F;
         }

         var7 = (int)Math.floor((var4 + 22.5F) / 45.0F) & bCf<"i">(22629, 5563771669621219117L ^ var1);
      }

      int var5 = var7;
      return okfwP[var5];
   }

   public static boolean bBs(class_1309 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 130525909799315
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual net/minecraft/class_1309.method_5829 ()Lnet/minecraft/class_238;
      // 0f: astore 4
      // 11: new net/minecraft/class_2338$class_2339
      // 14: dup
      // 15: invokespecial net/minecraft/class_2338$class_2339.<init> ()V
      // 18: astore 5
      // 1a: astore 3
      // 1b: aload 4
      // 1d: getfield net/minecraft/class_238.field_1323 D
      // 20: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 23: istore 6
      // 25: iload 6
      // 27: aload 4
      // 29: getfield net/minecraft/class_238.field_1320 D
      // 2c: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 2f: if_icmpgt c8
      // 32: aload 4
      // 34: getfield net/minecraft/class_238.field_1322 D
      // 37: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 3a: aload 3
      // 3b: ifnull c9
      // 3e: istore 7
      // 40: iload 7
      // 42: aload 4
      // 44: getfield net/minecraft/class_238.field_1325 D
      // 47: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 4a: if_icmpgt c1
      // 4d: aload 4
      // 4f: getfield net/minecraft/class_238.field_1321 D
      // 52: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 55: aload 3
      // 56: ifnull 27
      // 59: istore 8
      // 5b: iload 8
      // 5d: aload 4
      // 5f: getfield net/minecraft/class_238.field_1324 D
      // 62: invokestatic net/minecraft/class_3532.method_15357 (D)I
      // 65: if_icmpgt ba
      // 68: aload 5
      // 6a: iload 6
      // 6c: iload 7
      // 6e: iload 8
      // 70: invokevirtual net/minecraft/class_2338$class_2339.method_10103 (III)Lnet/minecraft/class_2338$class_2339;
      // 73: pop
      // 74: aload 3
      // 75: ifnull b6
      // 78: aload 4
      // 7a: aload 5
      // 7c: invokevirtual net/minecraft/class_238.method_71152 (Lnet/minecraft/class_2338;)Z
      // 7f: aload 3
      // 80: ifnull 42
      // 83: goto 8a
      // 86: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 89: athrow
      // 8a: ifeq b3
      // 8d: aload 0
      // 8e: invokevirtual net/minecraft/class_1309.method_73183 ()Lnet/minecraft/class_1937;
      // 91: aload 5
      // 93: invokevirtual net/minecraft/class_1937.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 96: getstatic net/minecraft/class_2246.field_10343 Lnet/minecraft/class_2248;
      // 99: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 9c: aload 3
      // 9d: ifnull b2
      // a0: goto a7
      // a3: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // a6: athrow
      // a7: ifeq b3
      // aa: goto b1
      // ad: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // b0: athrow
      // b1: bipush 1
      // b2: ireturn
      // b3: iinc 8 1
      // b6: aload 3
      // b7: ifnonnull 5b
      // ba: iinc 7 1
      // bd: aload 3
      // be: ifnonnull 40
      // c1: iinc 6 1
      // c4: aload 3
      // c5: ifnonnull 25
      // c8: bipush 0
      // c9: ireturn
   }

   public static boolean bBV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jg.CcOBc J
      // 03: ldc2_w 108557599341470
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: aload 2
      // 13: ifnull 2f
      // 16: invokevirtual net/minecraft/class_746.method_5854 ()Lnet/minecraft/class_1297;
      // 19: ifnull 29
      // 1c: goto 23
      // 1f: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 22: athrow
      // 23: bipush 0
      // 24: ireturn
      // 25: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 28: athrow
      // 29: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2f: invokevirtual net/minecraft/class_746.method_5799 ()Z
      // 32: aload 2
      // 33: ifnull 52
      // 36: ifeq 46
      // 39: goto 40
      // 3c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 3f: athrow
      // 40: bipush 0
      // 41: ireturn
      // 42: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 45: athrow
      // 46: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 49: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 4c: invokevirtual net/minecraft/class_746.method_31549 ()Lnet/minecraft/class_1656;
      // 4f: getfield net/minecraft/class_1656.field_7477 Z
      // 52: aload 2
      // 53: ifnull 72
      // 56: ifeq 66
      // 59: goto 60
      // 5c: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 5f: athrow
      // 60: bipush 1
      // 61: ireturn
      // 62: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 65: athrow
      // 66: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 69: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 6c: invokevirtual net/minecraft/class_746.method_7344 ()Lnet/minecraft/class_1702;
      // 6f: invokevirtual net/minecraft/class_1702.method_7586 ()I
      // 72: aload 2
      // 73: ifnull 95
      // 76: sipush 20644
      // 79: ldc2_w 5897280709353865866
      // 7c: lload 0
      // 7d: lxor
      // 7e: invokedynamic i (IJ)I bsm=sixtwo/jg.bCf (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 83: if_icmplt 98
      // 86: goto 8d
      // 89: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 8c: athrow
      // 8d: bipush 1
      // 8e: goto 95
      // 91: invokestatic sixtwo/jg.bCb (Ljava/lang/Exception;)Ljava/lang/Exception;
      // 94: athrow
      // 95: goto 99
      // 98: bipush 0
      // 99: ireturn
   }

   public static boolean bBF(class_243 var0) {
      long var1 = CcOBc ^ 90876706159910L;
      String[] var3 = jf.bBe();

      try {
         double var5;
         int var10000 = (var5 = bBH(rD.dlmvG.field_1724.method_33571(), var0) - rD.dlmvG.field_1724.method_55754()) == 0.0 ? 0 : (var5 < 0.0 ? -1 : 1);
         if (var3 == null) {
            return (boolean)var10000;
         }

         if (var10000 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw bCb(var4);
      }

      return (boolean)0;
   }

   public static boolean bBt(class_1309 var0, float var1) {
      long var2 = CcOBc ^ 17925807828055L;
      String[] var4 = jf.bBe();

      try {
         float var6;
         int var10000 = (var6 = var0.method_6032() - var1 - 0.0F) == 0.0F ? 0 : (var6 < 0.0F ? -1 : 1);
         if (var4 == null) {
            return (boolean)var10000;
         }

         if (var10000 <= 0) {
            return (boolean)1;
         }
      } catch (MatchException var5) {
         throw bCb(var5);
      }

      return (boolean)0;
   }

   public static boolean bBN(class_1309 var0, double var1) {
      class_238 var3 = rD.dlmvG.field_1724.method_5829().method_1009(var1, 0.0, var1);
      return var0.method_5829().method_994(var3);
   }

   public static void bBY(int var0) {
      aIWFT = var0;
   }

   public static Set<class_1299<? extends class_1297>> bBT() {
      long var0 = CcOBc ^ 17918914978939L;
      LinkedHashSet var2 = new LinkedHashSet();

      for (Field var6 : class_1299.class.getDeclaredFields()) {
         if (var6.getType() == class_1299.class) {
            var6.setAccessible(true);

            try {
               Object var7 = var6.get(null);
               if (var7 instanceof class_1299 && var6.getGenericType() instanceof ParameterizedType var9) {
                  Type[] var10 = var9.getActualTypeArguments();
                  if (var10.length == 1 && var10[0] instanceof Class var11) {
                     try {
                        if (class_1309.class.isAssignableFrom(var11)) {
                           var2.add((class_1299)var7);
                        }
                     } catch (IllegalAccessException var13) {
                        throw bCb(var13);
                     }
                  }
               }
            } catch (IllegalAccessException var14) {
            }
         }
      }

      var2.remove(class_1299.field_6131);
      return var2;
   }

   public static float bBu(float var0) {
      return var0 / rD.dlmvG.field_1724.method_6063() * 100.0F;
   }

   private static String bCc(byte[] var0) {
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
}
