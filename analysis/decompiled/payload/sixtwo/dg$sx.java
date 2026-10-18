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
import net.minecraft.class_1802;
import net.minecraft.class_241;
import net.minecraft.class_243;

class dg$sx {
   private final class_243 BQXcJ;
   private final int SDjuQ;
   private final int EVltR;
   private final int rSDHs;
   private boolean sDPfY;
   private final rk iAudN;
   private static final long PLZSI = gb.aYR(3324331490446598336L, -997322021819081517L, MethodHandles.lookup().lookupClass()).a(239710145818019L);
   private static final String NkcQX;
   private static final long[] UKhvu;
   private static final Integer[] hhkIM;
   private static final Map JoHyM;

   public dg$sx(class_243 var1, int var2, int var3) {
      long var4 = PLZSI ^ 17532493508009L;
      super();
      this.sDPfY = false;
      this.iAudN = new rk(dou<"z">(4745, 7189684610587162255L ^ var4));
      this.BQXcJ = var1;
      this.SDjuQ = var2;
      this.EVltR = var3;
      this.rSDHs = rD.dlmvG.field_1724.field_6012;
   }

   static {
      long var11 = PLZSI ^ 3664491742002L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("ã7§»Ii¸Ê".getBytes("ISO-8859-1"));
      String var19 = dor(var15).intern();
      int var10001 = -1;
      NkcQX = var19;
      JoHyM = new HashMap(13);
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
      String var4 = "õKhöð<ÍÉ\u0098úÙÆ~Ðqz";
      int var5 = "õKhöð<ÍÉ\u0098úÙÆ~Ðqz".length();
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
         byte var22 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      UKhvu = var6;
      hhkIM = new Integer[2];
   }

   private static int dot(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dos(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int dos(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 3149;
      if (hhkIM[var3] == null) {
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
         long var5 = UKhvu[var3];
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
         Object[] var9 = (Object[])JoHyM.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JoHyM.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dg$sx", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         hhkIM[var3] = var15;
      }

      return hhkIM[var3];
   }

   private static MatchException doq(MatchException var0) {
      return var0;
   }

   private static CallSite dou(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dot".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dg$sx" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private int don() {
      int var1 = rD.dlmvG.field_1724.field_6012 - this.rSDHs;
      return Math.max(this.EVltR - var1, 0);
   }

   private static String dor(byte[] var0) {
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

   public boolean dop() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dg$sx.PLZSI J
      // 03: ldc2_w 3895886383195
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/dg$sx.iAudN Lsixtwo/rk;
      // 10: invokevirtual sixtwo/rk.dhj ()F
      // 13: fconst_0
      // 14: fcmpl
      // 15: aload 3
      // 16: ifnonnull 2e
      // 19: ifne 40
      // 1c: goto 23
      // 1f: invokestatic sixtwo/dg$sx.doq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 0
      // 24: getfield sixtwo/dg$sx.sDPfY Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/dg$sx.doq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnonnull 3d
      // 32: ifeq 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/dg$sx.doq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void doo(lC var1, boolean var2) {
      long var3 = PLZSI ^ 92431900395106L;
      iS[] var5 = dh.afl();

      rk var10000;
      boolean var10001;
      label76: {
         label75: {
            try {
               var10000 = this.iAudN;
               var10001 = this.sDPfY;
               if (var5 != null) {
                  break label76;
               }

               if (!this.sDPfY) {
                  break label75;
               }
            } catch (MatchException var25) {
               throw doq(var25);
            }

            var10001 = false;
            break label76;
         }

         var10001 = true;
      }

      label67: {
         try {
            var10000.dhc(var10001);
            var10000 = this.iAudN;
            if (!this.sDPfY) {
               var27 = rj.XzDkv;
               break label67;
            }
         } catch (MatchException var24) {
            throw doq(var24);
         }

         var27 = rj.AYqck;
      }

      var10000.dhs(var27);
      class_241 var6 = jI.bIw(this.BQXcJ);

      try {
         if (var6 == null) {
            return;
         }
      } catch (MatchException var23) {
         throw doq(var23);
      }

      mG var7 = rD.dlM().bjb();
      float var8 = 25.0F;
      float var9 = var6.field_1343 - var8 / 2.0F;
      float var10 = var6.field_1342;
      float var11 = var9 + jf.bAH(16.0F, var8);
      float var12 = var10 + jf.bAH(16.0F, var8);
      float var13 = this.iAudN.dhj();

      label52: {
         label51: {
            label80: {
               try {
                  jH.bId(var1, var9 + var8 / 2.0F, var10 + var8 / 2.0F, 0.5F + 0.5F * var13);
                  if (var5 != null) {
                     break label51;
                  }

                  if (!var2) {
                     break label80;
                  }
               } catch (MatchException var22) {
                  throw doq(var22);
               }

               float var14 = 35.0F;
               lq var15 = lE.WTzbi.bYM(7.0F);
               int var16 = this.don();
               double var17 = var16 * dou<"z">(28533, 7306804569590227129L ^ var3) / 1000.0;
               String var19 = String.format(NkcQX, var17);

               try {
                  var1.ccW(var9, var10, var8, var14, var13, 0.0F, ld.all(8.0F), 3.0F);
                  var1.cdZ(class_1802.field_8634, var11, var12, 1.0F).bGv();
                  var1.cez(var15, var19, var9 + jf.bAH(var15.cao(var19), var8), var12 + 18.0F, var7);
                  if (var5 == null) {
                     break label52;
                  }
               } catch (MatchException var21) {
                  throw doq(var21);
               }
            }

            try {
               var1.ccW(var9, var10, var8, var8, var13, 0.0F, ld.all(var8 / 2.0F), 3.0F);
            } catch (MatchException var20) {
               throw doq(var20);
            }
         }

         var1.cdZ(class_1802.field_8634, var11, var12, 1.0F).bGv();
      }

      jH.bIf();
   }
}
