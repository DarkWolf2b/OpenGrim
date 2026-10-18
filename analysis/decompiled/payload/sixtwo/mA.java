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

public enum mA {
   sCBUa,
   frWTZ,
   OGQHF,
   tYwDF,
   eKpBI,
   bVTAk,
   SbfUE;

   private final int UyRGG;
   private static boolean NXHWP;
   private static final long dnsnI = gb.aYR(7349253894837860685L, -2966708561316324497L, MethodHandles.lookup().lookupClass()).a(164991762327259L);
   private static final long[] GTUCr;
   private static final Integer[] BvkEY;
   private static final Map rFDhT;

   private mA(int var3) {
      this.UyRGG = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = dnsnI ^ 104693569841189L;
      if (cmR()) {
         cmQ(true);
      }

      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var20 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var11 = new String[7];
      int var17 = 0;
      String var16 = "\u009f¿\u008c\u001fÇê!\u0014\bn¥\"\u0082\u0099\b\u0084Y\bQzbC\u009dË_«\u0010OV\u0012\u0006!³\u0093 ûâóÉ\u0012ãh´\u0010èW¿Q\u0004BÈ¥\u008céÔ8\u009cØMä";
      int var18 = "\u009f¿\u008c\u001fÇê!\u0014\bn¥\"\u0082\u0099\b\u0084Y\bQzbC\u009dË_«\u0010OV\u0012\u0006!³\u0093 ûâóÉ\u0012ãh´\u0010èW¿Q\u0004BÈ¥\u008céÔ8\u009cØMä"
         .length();
      char var15 = '\b';
      int var23 = -1;

      label49:
      while (true) {
         String var24 = var16.substring(++var23, var23 + var15);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var12.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = cmU(var19).intern();
            switch (var10001) {
               case 0:
                  var11[var17++] = var33;
                  if ((var23 += var15) >= var18) {
                     rFDhT = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[3];
                     int var3 = 0;
                     String var4 = "iàñ \u0097$=¢\u009c °\u007fBÄ²\u000bç\u0082.ì\u001fiy8";
                     int var5 = "iàñ \u0097$=¢\u009c °\u007fBÄ²\u000bç\u0082.ì\u001fiy8".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var38 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     GTUCr = var6;
                     BvkEY = new Integer[3];
                     sCBUa = new mA(0);
                     frWTZ = new mA(1);
                     OGQHF = new mA(2);
                     tYwDF = new mA(3);
                     eKpBI = new mA(4);
                     bVTAk = new mA(5);
                     SbfUE = new mA(cmX<"i">(4285, 6958970864224545680L ^ var20));
                     return;
                  }

                  var15 = var16.charAt(var23);
                  break;
               default:
                  var11[var17++] = var33;
                  if ((var23 += var15) < var18) {
                     var15 = var16.charAt(var23);
                     continue label49;
                  }

                  var16 = "Ê½rá¨\nÖíÆ41ë½ÝúÏ\u0010\u0090±S\râø)\u001b\u000erÛ[~×$È";
                  var18 = "Ê½rá¨\nÖíÆ41ë½ÝúÏ\u0010\u0090±S\râø)\u001b\u000erÛ[~×$È".length();
                  var15 = 16;
                  var23 = -1;
            }

            var24 = var16.substring(++var23, var23 + var15);
            var10001 = 0;
         }
      }
   }

   public static mA cmN(int param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mA.dnsnI J
      // 03: ldc2_w 124687906911640
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mr.clW ()[I
      // 0b: invokestatic sixtwo/mA.values ()[Lsixtwo/mA;
      // 0e: astore 4
      // 10: aload 4
      // 12: arraylength
      // 13: istore 5
      // 15: bipush 0
      // 16: istore 6
      // 18: astore 3
      // 19: iload 6
      // 1b: iload 5
      // 1d: if_icmpge 62
      // 20: aload 4
      // 22: iload 6
      // 24: aaload
      // 25: astore 7
      // 27: aload 7
      // 29: aload 3
      // 2a: ifnonnull 65
      // 2d: aload 3
      // 2e: ifnonnull 5a
      // 31: goto 38
      // 34: invokestatic sixtwo/mA.cmT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: invokevirtual sixtwo/mA.cmO ()I
      // 3b: iload 0
      // 3c: if_icmpeq 51
      // 3f: goto 46
      // 42: invokestatic sixtwo/mA.cmT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 3
      // 47: ifnull 5b
      // 4a: goto 51
      // 4d: invokestatic sixtwo/mA.cmT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: aload 7
      // 53: goto 5a
      // 56: invokestatic sixtwo/mA.cmT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: areturn
      // 5b: iinc 6 1
      // 5e: aload 3
      // 5f: ifnull 19
      // 62: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 65: areturn
   }

   private static String cmU(byte[] var0) {
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

   public static boolean cmS() {
      boolean var0 = cmR();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw cmT(var1);
      }
   }

   public static boolean cmR() {
      return NXHWP;
   }

   private static MatchException cmT(MatchException var0) {
      return var0;
   }

   private static CallSite cmX(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cmW".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mA" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cmW(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cmV(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cmV(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8993;
      if (BvkEY[var3] == null) {
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
         long var5 = GTUCr[var3];
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
         Object[] var9 = (Object[])rFDhT.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rFDhT.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mA", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         BvkEY[var3] = var15;
      }

      return BvkEY[var3];
   }

   public static void cmQ(boolean var0) {
      NXHWP = var0;
   }

   public int cmO() {
      return this.UyRGG;
   }
}
