package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_241;

public abstract class pB extends py implements pz {
   private final cG UlKHa;
   private final pD USBbv;
   private static final long KKoHr = gb.aYR(3672092966761546000L, 2118606121917727811L, MethodHandles.lookup().lookupClass()).a(42857705217117L);
   private static final long[] rhTQb;
   private static final Integer[] TxeLx;
   private static final Map TEgjp = new HashMap(13);

   protected pB(String var1, String var2) {
      long var3 = KKoHr ^ 70205203521851L;
      super(var1, var2, 2.0);
      this.UlKHa = new cG(
         this,
         mr.clS(
            new int[]{
               cSc<"o">(25668, 724394558198337102L ^ var3),
               cSc<"o">(18734, 7488075874586452769L ^ var3),
               cSc<"o">(30474, 6771726856271486211L ^ var3),
               cSc<"o">(7140, 876164258010018287L ^ var3),
               cSc<"o">(11343, 4157076977440360007L ^ var3)
            }
         )
      );
      this.USBbv = new pD(this).cSd(true);
   }

   static {
      long var0 = KKoHr ^ 20398960436382L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[5];
      int var5 = 0;
      String var6 = "lE├Ő\"\u0019e├░\u007flmvS├░├Ě┬│'<9\"g\u008f├ş┬Ę\u0015";
      int var7 = "lE├Ő\"\u0019e├░\u007flmvS├░├Ě┬│'<9\"g\u008f├ş┬Ę\u0015".length();
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
                     rhTQb = var8;
                     TxeLx = new Integer[5];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "Vrv├ö├Ť\u0017\u0086\u0092r├ť├ů├ä├░\u001b├Ž)";
                  var7 = "Vrv├ö├Ť\u0017\u0086\u0092r├ť├ů├ä├░\u001b├Ž)".length();
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

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public final class_241 measure(lC var1, lc var2, class_1297 var3, boolean var4) {
      long var5 = KKoHr ^ 34725517443650L;
      boolean var10000 = pA.cRO();
      List var8 = this.cNI(var3, var4);
      boolean var7 = var10000;

      label48: {
         label43: {
            try {
               var19 = var8;
               if (!var7) {
                  break label43;
               }

               if (var8 == null) {
                  break label48;
               }
            } catch (MatchException var17) {
               throw cRZ(var17);
            }

            var19 = var8;
         }

         try {
            if (var19.isEmpty()) {
               break label48;
            }
         } catch (MatchException var16) {
            throw cRZ(var16);
         }

         float var9 = this.cQJ(var2, var4);
         lq var10 = this.cRU(var9);
         float var11 = 0.0F;
         float var12 = this.cRX(var10, var9);
         Iterator var13 = var8.iterator();

         while (true) {
            if (var13.hasNext()) {
               pB$vz var14 = (pB$vz)var13.next();
               var20 = Math.max(var11, this.cRW(var10, var14.label(), var9));
               if (!var7) {
                  break;
               }

               var11 = var20;
               if (var7) {
                  continue;
               }
            }

            var20 = var8.size() * var12 + Math.max(0, var8.size() - 1) * this.cRV(var9);
            break;
         }

         float var18 = var20;
         return new class_241(var11, var18);
      }

      try {
         return this.cQL();
      } catch (MatchException var15) {
         throw cRZ(var15);
      }
   }

   protected lq cRU(float var1) {
      return lE.SVnNc.bYM(this.cQI(5.0F, var1));
   }

   protected float cRX(lq var1, float var2) {
      return Math.max(16.0F * this.cQI(0.65F, var2), var1.cat()) + this.cQI(3.0F, var2);
   }

   protected float cRW(lq var1, String var2, float var3) {
      return this.cQI(4.0F, var3) + 16.0F * this.cQI(0.65F, var3) + this.cQI(2.0F, var3) + var1.cao(var2);
   }

   protected abstract List<pB$vz> cNI(class_1297 var1, boolean var2);

   private static MatchException cRZ(MatchException var0) {
      return var0;
   }

   protected float cRV(float var1) {
      return this.cQI(1.0F, var1);
   }

   @Override
   public final void drawBox(lC param1, lc param2, lc param3, class_1297 param4, boolean param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pB.KKoHr J
      // 03: ldc2_w 33058537048079
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/pA.cRO ()Z
      // 0c: aload 0
      // 0d: aload 4
      // 0f: iload 5
      // 11: invokevirtual sixtwo/pB.cNI (Lnet/minecraft/class_1297;Z)Ljava/util/List;
      // 14: astore 9
      // 16: istore 8
      // 18: aload 9
      // 1a: iload 8
      // 1c: ifeq 2b
      // 1f: ifnull 33
      // 22: goto 29
      // 25: invokestatic sixtwo/pB.cRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 9
      // 2b: invokeinterface java/util/List.isEmpty ()Z 1
      // 30: ifeq 38
      // 33: return
      // 34: invokestatic sixtwo/pB.cRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: iload 5
      // 3b: invokevirtual sixtwo/pB.cQM (Z)F
      // 3e: fstore 10
      // 40: fload 10
      // 42: iload 8
      // 44: ifeq 5f
      // 47: fconst_0
      // 48: fcmpl
      // 49: ifne 58
      // 4c: goto 53
      // 4f: invokestatic sixtwo/pB.cRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: return
      // 54: invokestatic sixtwo/pB.cRZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 0
      // 59: aload 3
      // 5a: iload 5
      // 5c: invokevirtual sixtwo/pB.cQJ (Lsixtwo/lc;Z)F
      // 5f: fstore 11
      // 61: aload 0
      // 62: fload 11
      // 64: invokevirtual sixtwo/pB.cRU (F)Lsixtwo/lq;
      // 67: astore 12
      // 69: aload 0
      // 6a: aload 12
      // 6c: fload 11
      // 6e: invokevirtual sixtwo/pB.cRX (Lsixtwo/lq;F)F
      // 71: fstore 13
      // 73: aload 0
      // 74: fload 11
      // 76: invokevirtual sixtwo/pB.cRV (F)F
      // 79: fstore 14
      // 7b: aload 2
      // 7c: invokevirtual sixtwo/lc.bXG ()F
      // 7f: fstore 15
      // 81: aload 9
      // 83: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 88: astore 16
      // 8a: aload 16
      // 8c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 91: ifeq d1
      // 94: aload 16
      // 96: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 9b: checkcast sixtwo/pB$vz
      // 9e: astore 17
      // a0: aload 0
      // a1: aload 1
      // a2: aload 17
      // a4: aload 2
      // a5: invokevirtual sixtwo/lc.bXF ()F
      // a8: fload 15
      // aa: aload 0
      // ab: aload 12
      // ad: aload 17
      // af: invokevirtual sixtwo/pB$vz.label ()Ljava/lang/String;
      // b2: fload 11
      // b4: invokevirtual sixtwo/pB.cRW (Lsixtwo/lq;Ljava/lang/String;F)F
      // b7: fload 13
      // b9: aload 12
      // bb: fload 11
      // bd: fload 10
      // bf: invokevirtual sixtwo/pB.cRY (Lsixtwo/lC;Lsixtwo/pB$vz;FFFFLsixtwo/lq;FF)V
      // c2: fload 15
      // c4: fload 13
      // c6: fload 14
      // c8: fadd
      // c9: fadd
      // ca: fstore 15
      // cc: iload 8
      // ce: ifne 8a
      // d1: return
   }

   protected void cRY(lC var1, pB$vz var2, float var3, float var4, float var5, float var6, lq var7, float var8, float var9) {
      this.USBbv.cSe(var1, new lc(var3, var4, var5, var6), var8, var9);
      float var10 = this.cQI(0.65F, var8);
      float var11 = 16.0F * var10;
      float var12 = this.cQI(2.0F, var8);
      float var13 = this.cQI(2.0F, var8);
      float var14 = var3 + var12;
      float var15 = var4 + jf.bAH(var11, var6);
      float var16 = var14 + var11 + var13;
      float var17 = var4 + jf.bAH(var7.cat(), var6);
      this.cQK(var1, var2.stack(), var14, var15, var10, var9);
      var1.cez(var7, var2.label(), var16, var17, this.UlKHa.Wf().cob(var9));
   }

   private static CallSite cSc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cSb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pB" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int cSb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cSa(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cSa(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2382;
      if (TxeLx[var3] == null) {
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
         long var5 = rhTQb[var3];
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
         Object[] var9 = (Object[])TEgjp.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               TEgjp.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pB", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         TxeLx[var3] = var15;
      }

      return TxeLx[var3];
   }
}
