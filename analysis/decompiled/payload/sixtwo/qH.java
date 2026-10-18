package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2761;
import net.minecraft.class_3532;

public class qH {
   private final float[] EFaXY;
   private int hmLXh;
   private long rKpiB;
   private static final long vQBUz = gb.aYR(8407708198654730706L, -1162873222052260305L, MethodHandles.lookup().lookupClass()).a(265778250782702L);
   private static final long ZDZYG;
   private static final long[] ugjsz;
   private static final Long[] RyufA;
   private static final Map jyQcM;

   public qH() {
      long var1 = vQBUz ^ 131188575825855L;
      super();
      this.EFaXY = new float[(int)ZDZYG];
      this.hmLXh = 0;
      this.rKpiB = daQ<"h">(15985, 6535396734432945860L ^ var1);
      Arrays.fill(this.EFaXY, 0.0F);
      hF.bdI(this);
   }

   static {
      long var11 = vQBUz ^ 88494838673566L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long var15 = -5289938854357887191L;
      byte[] var17 = var13.doFinal(
         new byte[]{
            (byte)(var15 >>> 56),
            (byte)(var15 >>> 48),
            (byte)(var15 >>> 40),
            (byte)(var15 >>> 32),
            (byte)(var15 >>> 24),
            (byte)(var15 >>> 16),
            (byte)(var15 >>> 8),
            (byte)var15
         }
      );
      long var21 = (var17[0] & 255L) << 56
         | (var17[1] & 255L) << 48
         | (var17[2] & 255L) << 40
         | (var17[3] & 255L) << 32
         | (var17[4] & 255L) << 24
         | (var17[5] & 255L) << 16
         | (var17[6] & 255L) << 8
         | var17[7] & 255L;
      int var10001 = -1;
      ZDZYG = var21;
      jyQcM = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[2];
      int var3 = 0;
      String var4 = "9³!3»ò`Øü\u0006b\u000bÁÒÍ!";
      int var5 = "9³!3»ò`Øü\u0006b\u000bÁÒÍ!".length();
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
         byte var24 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      ugjsz = var6;
      RyufA = new Long[2];
   }

   @hG
   public void daL(gL$tk var1) {
      long var2 = vQBUz ^ 90806927320326L;
      boolean var4 = qL.dcb();

      qH var9;
      label37: {
         label32: {
            try {
               var10000 = var1.bcf() instanceof class_2761;
               if (!var4) {
                  break label32;
               }

               if (!var10000) {
                  return;
               }
            } catch (MatchException var8) {
               throw daN(var8);
            }

            try {
               var9 = this;
               if (!var4) {
                  break label37;
               }

               long var10;
               var10000 = (var10 = this.rKpiB - daQ<"h">(27469, 1617221549858552128L ^ var2)) == 0L ? 0 : (var10 < 0L ? -1 : 1);
            } catch (MatchException var7) {
               throw daN(var7);
            }
         }

         if (var10000) {
            float var5 = (float)(System.nanoTime() - this.rKpiB) / 1.0E9F;
            float var6 = class_3532.method_15363(20.0F / var5, 0.0F, 20.0F);
            this.EFaXY[this.hmLXh % this.EFaXY.length] = var6;
            this.hmLXh++;
         }

         var9 = this;
      }

      var9.rKpiB = System.nanoTime();
   }

   private static long daP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = daO(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   private static long daO(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13984;
      if (RyufA[var3] == null) {
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
         long var5 = ugjsz[var3];
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
         Object[] var9 = (Object[])jyQcM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               jyQcM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/qH", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         RyufA[var3] = var15;
      }

      return RyufA[var3];
   }

   private static MatchException daN(MatchException var0) {
      return var0;
   }

   private static CallSite daQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("daP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/qH" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public float daM() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qH.vQBUz J
      // 03: ldc2_w 43738205019769
      // 06: lxor
      // 07: lstore 1
      // 08: fconst_0
      // 09: fstore 4
      // 0b: invokestatic sixtwo/qL.dcb ()Z
      // 0e: fconst_0
      // 0f: fstore 5
      // 11: aload 0
      // 12: getfield sixtwo/qH.EFaXY [F
      // 15: astore 6
      // 17: istore 3
      // 18: aload 6
      // 1a: arraylength
      // 1b: istore 7
      // 1d: bipush 0
      // 1e: istore 8
      // 20: iload 8
      // 22: iload 7
      // 24: if_icmpge 6a
      // 27: aload 6
      // 29: iload 8
      // 2b: faload
      // 2c: fstore 9
      // 2e: fload 9
      // 30: fconst_0
      // 31: iload 3
      // 32: ifeq 70
      // 35: iload 3
      // 36: ifeq 60
      // 39: goto 40
      // 3c: invokestatic sixtwo/qH.daN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: fcmpg
      // 41: ifgt 56
      // 44: goto 4b
      // 47: invokestatic sixtwo/qH.daN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: iload 3
      // 4c: ifne 63
      // 4f: goto 56
      // 52: invokestatic sixtwo/qH.daN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: fload 4
      // 58: fload 9
      // 5a: fadd
      // 5b: fstore 4
      // 5d: fload 5
      // 5f: fconst_1
      // 60: fadd
      // 61: fstore 5
      // 63: iinc 8 1
      // 66: iload 3
      // 67: ifne 20
      // 6a: fload 4
      // 6c: fload 5
      // 6e: fdiv
      // 6f: fconst_0
      // 70: ldc 20.0
      // 72: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 75: freturn
   }
}
