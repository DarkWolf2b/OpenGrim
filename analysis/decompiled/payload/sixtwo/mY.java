package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.Comparator;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public enum mY {
   riWOz,
   ofgUy,
   kGYlY,
   LYeIf,
   EKEPD,
   nXBiI,
   dgaxA,
   QsHIY,
   cjEmH,
   hJBwZ,
   fVXfs,
   SQcHy,
   QizSS;

   private final int eQCNL;
   private static final long zDKBw = gb.aYR(-4170146750888990672L, -5783277496622966282L, MethodHandles.lookup().lookupClass()).a(99670126162367L);
   private static final String[] hLjXS;
   private static final String[] qbMjv;
   private static final Map TeVtD = new HashMap(13);
   private static final long[] fzAnG;
   private static final Integer[] UIauL;
   private static final Map mNcKz;

   private mY(int var3) {
      this.eQCNL = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = zDKBw ^ 33377401271851L;
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var20 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var18 = new String[7];
      int var16 = 0;
      String var15 = "K\u0087W¨¡ïôZÿ³F\u0085\u0080»'?\u0010\u0087Ý3\u0086ÞÑi`M\u0012\u0012©[Ài\u0010\u0010éR\u0004Ø%Y \u0002èO\u009cs7öaº\u0010\u0001]¾P¯÷\u0091\"Ç»¬õo£&È@ø\u0092*òá=+§o|)\u0099wK\u0018Î|BS\t*ÿ*\u009baû×CVÇoD4e\u009eÛ\u001cÜ\u0097Þ-ZüÜ«\u001bÕÔ³\u0085-\u0092\t$q\u0011\u0016À_ÑD$§í";
      int var17 = "K\u0087W¨¡ïôZÿ³F\u0085\u0080»'?\u0010\u0087Ý3\u0086ÞÑi`M\u0012\u0012©[Ài\u0010\u0010éR\u0004Ø%Y \u0002èO\u009cs7öaº\u0010\u0001]¾P¯÷\u0091\"Ç»¬õo£&È@ø\u0092*òá=+§o|)\u0099wK\u0018Î|BS\t*ÿ*\u009baû×CVÇoD4e\u009eÛ\u001cÜ\u0097Þ-ZüÜ«\u001bÕÔ³\u0085-\u0092\t$q\u0011\u0016À_ÑD$§í"
         .length();
      char var14 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var15.substring(++var24, var24 + var14);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var11.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = crU(var19).intern();
            switch (var10001) {
               case 0:
                  var18[var16++] = var36;
                  if ((var24 += var14) >= var17) {
                     hLjXS = var18;
                     qbMjv = new String[7];
                     mNcKz = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[24];
                     int var3 = 0;
                     String var4 = "¨Pá\u0083¿}s\bòN¾cô\u00146ÝzÝÁÄf\u0000.öH\u009dtê5ñw\u007fk\u0000S²°õüðk»\u0003\u0012((\u001f\u0010\u0090\u0081(\u0012ÍñDð\u0091\u001e¼<\u008eE-1¿#\u009dNz×®d¼¦×\u0087\u0017>\u0095oOP¡\u0095\u001a!V\u008císä\u001bmHÀ_CäfÌG\u0005·\u008fÏ¬\u0001%uì8Ptµq¥é8\\O Y$ì0\u0080 & .|ìå/Ô\u009fo-´Ù[!.\";\u0092J+¯á.\u001cÕÌÄy\u0080`áÝ&Ö\u0083nûIqq'°xæ\u0002\u0085\u001aø";
                     int var5 = "¨Pá\u0083¿}s\bòN¾cô\u00146ÝzÝÁÄf\u0000.öH\u009dtê5ñw\u007fk\u0000S²°õüðk»\u0003\u0012((\u001f\u0010\u0090\u0081(\u0012ÍñDð\u0091\u001e¼<\u008eE-1¿#\u009dNz×®d¼¦×\u0087\u0017>\u0095oOP¡\u0095\u001a!V\u008císä\u001bmHÀ_CäfÌG\u0005·\u008fÏ¬\u0001%uì8Ptµq¥é8\\O Y$ì0\u0080 & .|ìå/Ô\u009fo-´Ù[!.\";\u0092J+¯á.\u001cÕÌÄy\u0080`áÝ&Ö\u0083nûIqq'°xæ\u0002\u0085\u001aø"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    fzAnG = var6;
                                    UIauL = new Integer[24];
                                    riWOz = new mY(1);
                                    ofgUy = new mY(4);
                                    kGYlY = new mY(5);
                                    LYeIf = new mY(csa<"c">(5813, 7684601672013758936L ^ var20));
                                    EKEPD = new mY(csa<"c">(19549, 5485242769999633201L ^ var20));
                                    nXBiI = new mY(csa<"c">(4821, 7028161733177001379L ^ var20));
                                    dgaxA = new mY(csa<"c">(29621, 5972372226790696130L ^ var20));
                                    QsHIY = new mY(csa<"c">(14765, 5130674883951193821L ^ var20));
                                    cjEmH = new mY(csa<"c">(8318, 6035528325983074059L ^ var20));
                                    hJBwZ = new mY(csa<"c">(2364, 8977023937885494866L ^ var20));
                                    fVXfs = new mY(csa<"c">(25903, 126152381186716228L ^ var20));
                                    SQcHy = new mY(csa<"c">(14454, 8056142061109309212L ^ var20));
                                    QizSS = new mY(csa<"c">(13027, 783289275735991709L ^ var20));
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "\u001eIñ.\u0017nk\u009c\u00909(Ä~.+Ó";
                                 var5 = "\u001eIñ.\u0017nk\u009c\u00909(Ä~.+Ó".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var14 = var15.charAt(var24);
                  break;
               default:
                  var18[var16++] = var36;
                  if ((var24 += var14) < var17) {
                     var14 = var15.charAt(var24);
                     continue label54;
                  }

                  var15 = "\u008fBý]$EÓL3 hìâk\u009bÎ\u0010\r)S\u0007\u001ci-\u000bc\u001a\bCõ©Yv";
                  var17 = "\u008fBý]$EÓL3 hìâk\u009bÎ\u0010\r)S\u0007\u001ci-\u000bc\u001a\bCõ©Yv".length();
                  var14 = 16;
                  var24 = -1;
            }

            var25 = var15.substring(++var24, var24 + var14);
            var10001 = 0;
         }
      }
   }

   private static IllegalArgumentException crT(IllegalArgumentException var0) {
      return var0;
   }

   private static int crY(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13009;
      if (UIauL[var3] == null) {
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
         long var5 = fzAnG[var3];
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
         Object[] var9 = (Object[])mNcKz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               mNcKz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mY", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         UIauL[var3] = var15;
      }

      return UIauL[var3];
   }

   private static CallSite csa(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("crZ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public int crQ() {
      return this.eQCNL;
   }

   private static int crZ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = crY(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static List<mY> crO() {
      return Arrays.stream(values()).sorted(Comparator.<mY, Integer>comparing(var0 -> var0.eQCNL).reversed()).collect(Collectors.toList());
   }

   private static String crV(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 424;
      if (qbMjv[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])TeVtD.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               TeVtD.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/mY", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = hLjXS[var5].getBytes("ISO-8859-1");
         qbMjv[var5] = crU(((Cipher)var4[0]).doFinal(var9));
      }

      return qbMjv[var5];
   }

   private static String crU(byte[] var0) {
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

   private static CallSite crX(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("crW".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object crW(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = crV(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static int[] crP(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mY.zDKBw J
      // 03: ldc2_w 18052201166853
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mZ.csy ()[I
      // 0b: astore 3
      // 0c: iload 0
      // 0d: aload 3
      // 0e: ifnonnull 1c
      // 11: ifle 2c
      // 14: goto 1b
      // 17: invokestatic sixtwo/mY.crT (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 1a: athrow
      // 1b: iload 0
      // 1c: sipush 20032
      // 1f: ldc2_w 6846032983269955334
      // 22: lload 1
      // 23: lxor
      // 24: invokedynamic c (IJ)I bsm=sixtwo/mY.csa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 29: if_icmple 4b
      // 2c: new java/lang/IllegalArgumentException
      // 2f: dup
      // 30: iload 0
      // 31: sipush 741
      // 34: ldc2_w 7598553972914628815
      // 37: lload 1
      // 38: lxor
      // 39: invokedynamic t (IJ)Ljava/lang/String; bsm=sixtwo/mY.crX (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3e: invokedynamic makeConcatWithConstants (ILjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 43: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 46: athrow
      // 47: invokestatic sixtwo/mY.crT (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 4a: athrow
      // 4b: invokestatic sixtwo/mY.crO ()Ljava/util/List;
      // 4e: astore 4
      // 50: bipush 0
      // 51: istore 5
      // 53: new java/lang/StringBuilder
      // 56: dup
      // 57: invokespecial java/lang/StringBuilder.<init> ()V
      // 5a: astore 6
      // 5c: iload 0
      // 5d: ifle ba
      // 60: iload 5
      // 62: aload 4
      // 64: invokeinterface java/util/List.size ()I 1
      // 69: if_icmpge ba
      // 6c: aload 4
      // 6e: iload 5
      // 70: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 75: checkcast sixtwo/mY
      // 78: astore 7
      // 7a: aload 7
      // 7c: invokevirtual sixtwo/mY.crQ ()I
      // 7f: iload 0
      // 80: aload 3
      // 81: ifnonnull a6
      // 84: if_icmpgt ac
      // 87: goto 8e
      // 8a: invokestatic sixtwo/mY.crT (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 8d: athrow
      // 8e: aload 6
      // 90: aload 7
      // 92: invokevirtual sixtwo/mY.name ()Ljava/lang/String;
      // 95: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 98: pop
      // 99: iload 0
      // 9a: aload 7
      // 9c: invokevirtual sixtwo/mY.crQ ()I
      // 9f: goto a6
      // a2: invokestatic sixtwo/mY.crT (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // a5: athrow
      // a6: isub
      // a7: istore 0
      // a8: aload 3
      // a9: ifnull b6
      // ac: iinc 5 1
      // af: goto b6
      // b2: invokestatic sixtwo/mY.crT (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // b5: athrow
      // b6: aload 3
      // b7: ifnull 5c
      // ba: aload 6
      // bc: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // bf: invokestatic sixtwo/mZ.csh (Ljava/lang/String;)[I
      // c2: areturn
   }
}
