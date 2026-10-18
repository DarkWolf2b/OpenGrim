package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ThreadLocalRandom;
import java.util.stream.Collectors;
import java.util.stream.IntStream;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class mU {
   private static final ThreadLocalRandom pcazh;
   private static final char GQDjz;
   private static final char PeGTC;
   private static int gRpmW;
   private static final long LxHYI = gb.aYR(-5642763879656398978L, -7638232348856279786L, MethodHandles.lookup().lookupClass()).a(29478026005498L);
   private static final long[] afDxp;
   private static final Integer[] PeZwE;
   private static final Map HYksB = new HashMap(13);

   static {
      cpT(0);
      long var0 = LxHYI ^ 63210747173377L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[6];
      int var5 = 0;
      String var6 = "O7\u0007Õ#\u000bº nÍ»ç\u00adr÷Ùh?\u0092%)âqX\u001eÙCl=\u0001q ";
      int var7 = "O7\u0007Õ#\u000bº nÍ»ç\u00adr÷Ùh?\u0092%)âqX\u001eÙCl=\u0001q ".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     afDxp = var8;
                     PeZwE = new Integer[6];
                     GQDjz = (char)cpZ<"y">(2169, var0 ^ 6741156703855048282L);
                     PeGTC = (char)cpZ<"y">(16718, var0 ^ 406387938239463273L);
                     pcazh = ThreadLocalRandom.current();
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "`è\u009aC¡\u0087³^Þ\u000b\\@\u00140Ô½";
                  var7 = "`è\u009aC¡\u0087³^Þ\u000b\\@\u00140Ô½".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   public static int cpO(int var0, int var1) {
      return pcazh.nextInt(var1 - var0 + 1) + var0;
   }

   public static double cpP(double var0, double var2) {
      return pcazh.nextDouble() * (var2 - var0) + var0;
   }

   public static float cpQ(float var0, float var1) {
      return pcazh.nextFloat() * (var1 - var0) + var0;
   }

   public static boolean cpN(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mU.LxHYI J
      // 03: ldc2_w 119064555433279
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mU.cpU ()I
      // 0b: istore 3
      // 0c: iload 0
      // 0d: iload 3
      // 0e: ifne 22
      // 11: ifgt 21
      // 14: goto 1b
      // 17: invokestatic sixtwo/mU.cpW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: bipush 0
      // 1c: ireturn
      // 1d: invokestatic sixtwo/mU.cpW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: iload 0
      // 22: sipush 4118
      // 25: ldc2_w 6894951297207326984
      // 28: lload 1
      // 29: lxor
      // 2a: invokedynamic y (IJ)I bsm=sixtwo/mU.cpZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2f: iload 3
      // 30: ifne 62
      // 33: if_icmplt 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/mU.cpW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: ireturn
      // 3f: invokestatic sixtwo/mU.cpW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: getstatic sixtwo/mU.pcazh Ljava/util/concurrent/ThreadLocalRandom;
      // 46: sipush 11500
      // 49: ldc2_w 7372816740571309556
      // 4c: lload 1
      // 4d: lxor
      // 4e: invokedynamic y (IJ)I bsm=sixtwo/mU.cpZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 53: invokevirtual java/util/concurrent/ThreadLocalRandom.nextInt (I)I
      // 56: iload 3
      // 57: ifne 66
      // 5a: iload 0
      // 5b: goto 62
      // 5e: invokestatic sixtwo/mU.cpW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: if_icmpge 69
      // 65: bipush 1
      // 66: goto 6a
      // 69: bipush 0
      // 6a: ireturn
   }

   private static MatchException cpW(MatchException var0) {
      return var0;
   }

   public static int cpV() {
      int var0 = cpU();

      try {
         return var0 == 0 ? 12 : 0;
      } catch (MatchException var1) {
         throw cpW(var1);
      }
   }

   public static String cpM(int var0) {
      return IntStream.range(0, var0).mapToObj(var0x -> {
         long var1 = LxHYI ^ 3974379206881L;
         return String.valueOf((char)pcazh.nextInt(cpZ<"y">(2409, 694686017354274216L ^ var1), cpZ<"y">(32090, 3863840196494418328L ^ var1)));
      }).collect(Collectors.joining());
   }

   public static double cpR(cA var0) {
      double var1 = (Double)var0.UW().getLeft();
      double var3 = (Double)var0.UW().getRight();
      return cpP(var1, var3);
   }

   public static void cpT(int var0) {
      gRpmW = var0;
   }

   public static int cpU() {
      return gRpmW;
   }

   private static CallSite cpZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cpY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mU" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cpY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cpX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cpX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4717;
      if (PeZwE[var3] == null) {
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
         long var5 = afDxp[var3];
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
         Object[] var9 = (Object[])HYksB.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HYksB.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mU", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         PeZwE[var3] = var15;
      }

      return PeZwE[var3];
   }
}
