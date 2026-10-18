package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;

public final class kl {
   public static final float gJpxr = 0.25F;
   private static final long ODwOA = gb.aYR(167732081058001962L, 6267511992392369671L, MethodHandles.lookup().lookupClass()).a(139945911792749L);
   private static final String[] jYJiI;
   private static final String[] EadsA;
   private static final Map tExRv = new HashMap(13);

   static {
      long var0 = ODwOA ^ 63144413886092L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[7];
      int var7 = 0;
      String var6 = "oI\u001ea├ŻZ\u0099├Ö\u000b\u0006┬«5JO\u000e├á\u0010[\u00ad}\u001f├ť├ç├ŁG┬ó\u0014\u0082├ä├Ľ\u008e\u000b ├Ĺ\u0016├Ç~├ž\u001b┬í┬á\u0093=++0┬á├Ć\u0099├Łm=\u000fa┬╣b4|├Ż├▓2\u0082!┬ú├é\u0018├»\u008a\u0091\u001ep\u0003├ék.┬úi\u0007├┤\u0006!.├Ż\u0010├Ś├żs├Ś\u001c\u008c 6├ë├ť├ç\u009f\u0083\u0005\u001e0┬ž_├ú`|:┬Ş├É┬╝┬ČJ\u0002\u000f├Ä├Ť\u0013┬Ş┬┐\u001b7\u0011├î├░ ┬ę4├Â\n├é├ś47\u008a\u0091\u0093┬»_├¬D├»7├ę├śiG!~/├ú├Ç\u0017D\u0006\u0082┬▓┬ę";
      int var8 = "oI\u001ea├ŻZ\u0099├Ö\u000b\u0006┬«5JO\u000e├á\u0010[\u00ad}\u001f├ť├ç├ŁG┬ó\u0014\u0082├ä├Ľ\u008e\u000b ├Ĺ\u0016├Ç~├ž\u001b┬í┬á\u0093=++0┬á├Ć\u0099├Łm=\u000fa┬╣b4|├Ż├▓2\u0082!┬ú├é\u0018├»\u008a\u0091\u001ep\u0003├ék.┬úi\u0007├┤\u0006!.├Ż\u0010├Ś├żs├Ś\u001c\u008c 6├ë├ť├ç\u009f\u0083\u0005\u001e0┬ž_├ú`|:┬Ş├É┬╝┬ČJ\u0002\u000f├Ä├Ť\u0013┬Ş┬┐\u001b7\u0011├î├░ ┬ę4├Â\n├é├ś47\u008a\u0091\u0093┬»_├¬D├»7├ę├śiG!~/├ú├Ç\u0017D\u0006\u0082┬▓┬ę"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bQk(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     jYJiI = var9;
                     EadsA = new String[7];
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "\u0081┬Ş┬Ş┬ŻCt├ż;├ö^G┬Ě├ś├║}m┬╝<,├▓q├ęF┬Ż ┬ź\u0090├Ľ\u008dzr├ą├ę┬▒├şN┬▒├ä├Ş/├┐Y\b \u0016\u000f├ž&\u008d├Ę├ü~├ü├«\b?├ú";
                  var8 = "\u0081┬Ş┬Ş┬ŻCt├ż;├ö^G┬Ě├ś├║}m┬╝<,├▓q├ęF┬Ż ┬ź\u0090├Ľ\u008dzr├ą├ę┬▒├şN┬▒├ä├Ş/├┐Y\b \u0016\u000f├ž&\u008d├Ę├ü~├ü├«\b?├ú".length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public static void bQc(kl$ug var0, class_276 var1, float var2, mG var3) {
      bQe(var0, var0.dsz(), var1, var2, var3, 0.25F);
   }

   private static MatchException bQj(MatchException var0) {
      return var0;
   }

   private static void bQf(class_276 var0, ls var1, ls var2, float var3) {
      var1.caM();
      kn.bQr(kR.JGYzq, var1, var3x -> {
         long var4 = ODwOA ^ 101631096082695L;
         var3x.bindTexture(bQn<"i">(24429, 3089530051115090052L ^ var4), var0.method_71639(), lt.caY(true));
         var3x.bindTexture(bQn<"i">(11436, 8164908103839904578L ^ var4), var2.method_71639(), lt.caX());
         jL.PTppR.bJl();
         jL.PTppR.bJq(bQn<"i">(9335, 4691631483398421404L ^ var4), var3);
      });
   }

   private static String bQl(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 17666;
      if (EadsA[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])tExRv.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               tExRv.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kl", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = jYJiI[var5].getBytes("ISO-8859-1");
         EadsA[var5] = bQk(((Cipher)var4[0]).doFinal(var9));
      }

      return EadsA[var5];
   }

   private static Object bQm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bQl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void bQe(kl$ug param0, class_276 param1, class_276 param2, float param3, mG param4, float param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kl.ODwOA J
      // 03: ldc2_w 50354122490901
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 1
      // 0f: aload 8
      // 11: ifnull 1f
      // 14: ifnull 3c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 1
      // 1f: aload 8
      // 21: ifnull 39
      // 24: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 27: ifnull 3c
      // 2a: goto 31
      // 2d: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 2
      // 32: goto 39
      // 35: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: ifnonnull 3d
      // 3c: return
      // 3d: aload 0
      // 3e: invokevirtual sixtwo/kl$ug.dsA ()Lsixtwo/ls;
      // 41: astore 9
      // 43: aload 0
      // 44: invokevirtual sixtwo/kl$ug.dsB ()Lsixtwo/ls;
      // 47: astore 10
      // 49: aload 9
      // 4b: aload 1
      // 4c: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 4f: aload 10
      // 51: aload 1
      // 52: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 55: aload 0
      // 56: dup
      // 57: getfield sixtwo/kl$ug.YgHMr I
      // 5a: dup_x1
      // 5b: bipush 1
      // 5c: iadd
      // 5d: putfield sixtwo/kl$ug.YgHMr I
      // 60: bipush 1
      // 61: iand
      // 62: aload 8
      // 64: ifnull 72
      // 67: ifne 75
      // 6a: goto 71
      // 6d: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 70: athrow
      // 71: bipush 1
      // 72: goto 76
      // 75: bipush 0
      // 76: istore 11
      // 78: iload 11
      // 7a: ifeq 86
      // 7d: aload 9
      // 7f: goto 88
      // 82: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 85: athrow
      // 86: aload 10
      // 88: astore 12
      // 8a: iload 11
      // 8c: ifeq 98
      // 8f: aload 10
      // 91: goto 9a
      // 94: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 9
      // 9a: astore 13
      // 9c: aload 8
      // 9e: ifnull d8
      // a1: aload 0
      // a2: getfield sixtwo/kl$ug.VgBRE Z
      // a5: ifeq c0
      // a8: goto af
      // ab: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: aload 13
      // b1: invokevirtual sixtwo/ls.caM ()V
      // b4: aload 0
      // b5: bipush 0
      // b6: putfield sixtwo/kl$ug.VgBRE Z
      // b9: goto c0
      // bc: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bf: athrow
      // c0: aload 1
      // c1: invokestatic sixtwo/lu.cbd (Lnet/minecraft/class_276;)V
      // c4: aload 1
      // c5: aload 12
      // c7: aload 13
      // c9: fload 5
      // cb: invokestatic sixtwo/kl.bQf (Lnet/minecraft/class_276;Lsixtwo/ls;Lsixtwo/ls;F)V
      // ce: aload 2
      // cf: aload 1
      // d0: aload 12
      // d2: fload 3
      // d3: aload 4
      // d5: invokestatic sixtwo/kl.bQg (Lnet/minecraft/class_276;Lnet/minecraft/class_276;Lsixtwo/ls;FLsixtwo/mG;)V
      // d8: return
   }

   private static CallSite bQn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bQm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kl" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bQk(byte[] var0) {
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

   private static void bQg(class_276 var0, class_276 var1, ls var2, float var3, mG var4) {
      float[] var5 = var4.con();
      kn.bQr(kR.xfXqe, var0, var4x -> {
         long var5x = ODwOA ^ 32727045137881L;
         var4x.bindTexture(bQn<"i">(22080, 5132792578234596724L ^ var5x), var1.method_71639(), lt.caX());
         var4x.bindTexture(bQn<"i">(7228, 7505059731515897614L ^ var5x), var2.method_71639(), lt.caX());
         jL.wxgUS.bJl();
         jL.wxgUS.bJq(bQn<"i">(825, 2563495996491655178L ^ var5x), var3);
         jL.wxgUS.bJs(bQn<"i">(25866, 4210263272885554748L ^ var5x), var5[0], var5[1], var5[2]);
      });
   }

   public static class_276 bQa(kl$ug param0, class_276 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kl.ODwOA J
      // 03: ldc2_w 136717002090729
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/kl$ug.dsz ()Lsixtwo/ls;
      // 0f: astore 6
      // 11: aload 0
      // 12: invokevirtual sixtwo/kl$ug.dsA ()Lsixtwo/ls;
      // 15: aload 1
      // 16: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 19: astore 5
      // 1b: aload 0
      // 1c: invokevirtual sixtwo/kl$ug.dsB ()Lsixtwo/ls;
      // 1f: aload 1
      // 20: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 23: aload 6
      // 25: aload 1
      // 26: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 29: aload 6
      // 2b: aload 5
      // 2d: ifnull 4d
      // 30: invokevirtual sixtwo/ls.caM ()V
      // 33: iload 2
      // 34: ifeq 4b
      // 37: goto 3e
      // 3a: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 6
      // 40: aload 1
      // 41: invokevirtual sixtwo/ls.method_29329 (Lnet/minecraft/class_276;)V
      // 44: goto 4b
      // 47: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 6
      // 4d: aload 5
      // 4f: ifnonnull 5e
      // 52: ldc "b0S14"
      // 54: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 57: goto 5e
      // 5a: invokestatic sixtwo/kl.bQj (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: areturn
   }

   public static void bQb(kl$ug var0) {
      var0.dsy();
   }

   public static void bQd(kl$ug var0, class_276 var1, class_276 var2, float var3, mG var4) {
      bQe(var0, var1, var2, var3, var4, 0.25F);
   }
}
