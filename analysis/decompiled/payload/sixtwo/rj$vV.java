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

public class rj$vV extends rj {
   private static final int ipeRR;
   private static final float wEmyK = 1.0E-5F;
   private static final float AnKrK = 1.0E-6F;
   private final float bArOr;
   private final float MuadK;
   private final float abnpf;
   private final float miipA;
   private static final long DXdxL = gb.aYR(-6848697711308440762L, 4430593489452481817L, MethodHandles.lookup().lookupClass()).a(126799501890428L);
   private static final long[] UQbqj;
   private static final Integer[] IshHt;
   private static final Map AChNI = new HashMap(13);

   public rj$vV(float var1, float var2, float var3, float var4) {
      this.bArOr = var1;
      this.MuadK = var2;
      this.abnpf = var3;
      this.miipA = var4;
   }

   static {
      long var0 = DXdxL ^ 85679369327560L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "\u0094¿\u0018óØ\f\u0014ã}wØ&¦;\u000f¦";
      int var7 = "\u0094¿\u0018óØ\f\u0014ã}wØ&¦;\u000f¦".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      UQbqj = var8;
      IshHt = new Integer[2];
      ipeRR = dyB<"e">(14916, var0 ^ 6443219373212305992L);
   }

   @Override
   public float dga(float param1, float param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rj$vV.DXdxL J
      // 03: ldc2_w 118913936094340
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 0c: astore 7
      // 0e: fload 4
      // 10: aload 7
      // 12: ifnonnull 3b
      // 15: fconst_0
      // 16: fcmpg
      // 17: ifle 3a
      // 1a: goto 21
      // 1d: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: fload 1
      // 22: fconst_0
      // 23: fcmpg
      // 24: aload 7
      // 26: ifnonnull 4c
      // 29: goto 30
      // 2c: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: ifgt 3c
      // 33: goto 3a
      // 36: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: fload 2
      // 3b: freturn
      // 3c: fload 1
      // 3d: fload 4
      // 3f: aload 7
      // 41: ifnonnull 5a
      // 44: fcmpl
      // 45: goto 4c
      // 48: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: iflt 57
      // 4f: fload 2
      // 50: fload 3
      // 51: fadd
      // 52: freturn
      // 53: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: fload 1
      // 58: fload 4
      // 5a: fdiv
      // 5b: fstore 8
      // 5d: aload 0
      // 5e: fload 8
      // 60: invokevirtual sixtwo/rj$vV.dyu (F)F
      // 63: fstore 9
      // 65: aload 0
      // 66: fload 9
      // 68: invokevirtual sixtwo/rj$vV.dyx (F)F
      // 6b: fstore 10
      // 6d: fload 2
      // 6e: fload 3
      // 6f: fload 10
      // 71: fmul
      // 72: fadd
      // 73: freturn
   }

   private float dyu(float param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rj$vV.DXdxL J
      // 03: ldc2_w 13359204525398
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/rk.dhz ()[Ljava/lang/String;
      // 0b: fload 1
      // 0c: fstore 5
      // 0e: astore 4
      // 10: bipush 0
      // 11: istore 6
      // 13: iload 6
      // 15: sipush 27462
      // 18: ldc2_w 7153740495037869525
      // 1b: lload 2
      // 1c: lxor
      // 1d: invokedynamic e (IJ)I bsm=sixtwo/rj$vV.dyB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 22: if_icmpge a6
      // 25: aload 0
      // 26: fload 5
      // 28: invokevirtual sixtwo/rj$vV.dyv (F)F
      // 2b: fstore 7
      // 2d: aload 0
      // 2e: fload 5
      // 30: invokevirtual sixtwo/rj$vV.dyw (F)F
      // 33: fstore 8
      // 35: fload 7
      // 37: fload 1
      // 38: fsub
      // 39: invokestatic java/lang/Math.abs (F)F
      // 3c: aload 4
      // 3e: ifnonnull a8
      // 41: aload 4
      // 43: ifnonnull a8
      // 46: goto 4d
      // 49: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: ldc 1.0E-5
      // 4f: fcmpg
      // 50: iflt a6
      // 53: goto 5a
      // 56: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: fload 8
      // 5c: invokestatic java/lang/Math.abs (F)F
      // 5f: ldc 1.0E-6
      // 61: aload 4
      // 63: ifnonnull 94
      // 66: goto 6d
      // 69: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6c: athrow
      // 6d: fcmpg
      // 6e: ifge 84
      // 71: goto 78
      // 74: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: aload 4
      // 7a: ifnull a6
      // 7d: goto 84
      // 80: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: fload 5
      // 86: fload 7
      // 88: fload 1
      // 89: fsub
      // 8a: fload 8
      // 8c: fdiv
      // 8d: goto 94
      // 90: invokestatic sixtwo/rj$vV.dyy (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: fsub
      // 95: fstore 5
      // 97: fload 5
      // 99: invokestatic sixtwo/rj.dgq (F)F
      // 9c: fstore 5
      // 9e: iinc 6 1
      // a1: aload 4
      // a3: ifnull 13
      // a6: fload 5
      // a8: freturn
   }

   private float dyv(float var1) {
      float var2 = 1.0F - var1;
      return 3.0F * var2 * var2 * var1 * this.bArOr + 3.0F * var2 * var1 * var1 * this.abnpf + var1 * var1 * var1;
   }

   private static MatchException dyy(MatchException var0) {
      return var0;
   }

   private static CallSite dyB(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dyA".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/rj$vV" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private float dyx(float var1) {
      float var2 = 1.0F - var1;
      return 3.0F * var2 * var2 * var1 * this.MuadK + 3.0F * var2 * var1 * var1 * this.miipA + var1 * var1 * var1;
   }

   private static int dyA(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dyz(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private float dyw(float var1) {
      return 3.0F * ((1.0F - var1) * (1.0F - 3.0F * var1) * this.bArOr + (2.0F * var1 - 3.0F * var1 * var1) * this.abnpf) + 3.0F * var1 * var1;
   }

   private static int dyz(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2428;
      if (IshHt[var3] == null) {
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
         long var5 = UQbqj[var3];
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
         Object[] var9 = (Object[])AChNI.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               AChNI.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/rj$vV", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         IshHt[var3] = var15;
      }

      return IshHt[var3];
   }
}
