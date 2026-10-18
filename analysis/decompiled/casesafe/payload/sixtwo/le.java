package sixtwo;

import java.lang.invoke.MethodHandles;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public final class le {
   private static final int[] xtASQ;
   private static final int htTCa;
   private static final float GLjms = 2.0F;
   private static final float PSymY = 2.7F;
   private static final float UNxQA = 3.0F;
   private static final float adjwS = 1.0F;
   private static final long hrkhD = gb.aYR(1124504309614787235L, 5053722010824664136L, MethodHandles.lookup().lookupClass()).a(124166132722104L);

   static {
      long var11 = hrkhD ^ 86954150140937L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var11 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var0 = new long[5];
      int var4 = 0;
      String var5 = "┬ę├ť\u009b┬»jcD┬í├╝├Ť\u0090Ym\f\u0086├Ę<\u001f#X\u0018├óf┬ó";
      int var6 = "┬ę├ť\u009b┬»jcD┬í├╝├Ť\u0090Ym\f\u0086├Ę<\u001f#X\u0018├óf┬ó".length();
      byte var3 = 0;

      label23:
      while (true) {
         int var10001 = var3;
         var3 += 8;
         byte[] var7 = var5.substring(var10001, var3).getBytes("ISO-8859-1");
         long[] var14 = var0;
         var10001 = var4++;
         long var17 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var8 = var17;
            byte[] var10 = var1.doFinal(
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
            long var21 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var3 >= var6) {
                     htTCa = (int)var0[3];
                     xtASQ = new int[]{(int)var0[0], (int)var0[4], (int)var0[1], (int)var0[2]};
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var3 < var6) {
                     continue label23;
                  }

                  var5 = "├»┬║=├Ä8\u0006┬╗┬╣6/\u0093)]├ć├¬;";
                  var6 = "├»┬║=├Ä8\u0006┬╗┬╣6/\u0093)]├ć├¬;".length();
                  var3 = 0;
            }

            byte var16 = var3;
            var3 += 8;
            var7 = var5.substring(var16, var3).getBytes("ISO-8859-1");
            var14 = var0;
            var10001 = var4++;
            var17 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var19 = 0;
         }
      }
   }

   public static void bXO(lC param0, float param1, float param2, float param3, int param4, mG param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/le.hrkhD J
      // 03: ldc2_w 97473443908531
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/ld.b ()Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 5
      // 10: aload 8
      // 12: ifnull 34
      // 15: invokevirtual sixtwo/mG.cnW ()Z
      // 18: ifeq 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 5
      // 29: aload 5
      // 2b: invokevirtual sixtwo/mG.cou ()F
      // 2e: ldc 0.2
      // 30: fmul
      // 31: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 34: astore 9
      // 36: bipush 0
      // 37: istore 10
      // 39: iload 10
      // 3b: bipush 4
      // 3c: if_icmpge 5e
      // 3f: aload 0
      // 40: fload 1
      // 41: fload 2
      // 42: fload 3
      // 43: iload 10
      // 45: aload 9
      // 47: invokestatic sixtwo/le.bXP (Lsixtwo/lC;FFFILsixtwo/mG;)V
      // 4a: iinc 10 1
      // 4d: aload 8
      // 4f: ifnull 61
      // 52: aload 8
      // 54: ifnonnull 39
      // 57: goto 5e
      // 5a: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: bipush 0
      // 5f: istore 10
      // 61: iload 10
      // 63: bipush 4
      // 64: if_icmpge 9f
      // 67: iload 4
      // 69: getstatic sixtwo/le.xtASQ [I
      // 6c: iload 10
      // 6e: iaload
      // 6f: if_icmplt 85
      // 72: goto 79
      // 75: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 8
      // 7b: ifnonnull 97
      // 7e: goto 85
      // 81: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 84: athrow
      // 85: aload 0
      // 86: fload 1
      // 87: fload 2
      // 88: fload 3
      // 89: iload 10
      // 8b: aload 5
      // 8d: invokestatic sixtwo/le.bXP (Lsixtwo/lC;FFFILsixtwo/mG;)V
      // 90: goto 97
      // 93: invokestatic sixtwo/le.bXQ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: iinc 10 1
      // 9a: aload 8
      // 9c: ifnonnull 61
      // 9f: return
   }

   public static float bXM(float var0) {
      return 10.1F * var0;
   }

   private static void bXP(lC var0, float var1, float var2, float var3, int var4, mG var5) {
      float var6 = bXN(var3);
      float var7 = (3.0F + 1.0F * var4) * var3;
      float var8 = var1 + var4 * 2.7F * var3;
      float var9 = var2 + var6 - var7;
      var0.cdg(var8, var9, 2.0F * var3, var7, ld.all(0.1F * var3), var5);
   }

   private static MatchException bXQ(MatchException var0) {
      return var0;
   }

   public static float bXN(float var0) {
      return 6.0F * var0;
   }
}
