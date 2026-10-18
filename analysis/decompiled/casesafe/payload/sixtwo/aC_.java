package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;

public class aC extends aF {
   private final List<bg> yfSFR;
   private gh mvWDQ;
   private bg nEhCf;
   private final Y YZFGi;
   private static final long jNpun = gb.aYR(-8194529757589197398L, 694691784488164671L, MethodHandles.lookup().lookupClass()).a(208218874951726L);
   private static final long[] QSCCk;
   private static final Integer[] jbUMH;
   private static final Map AHrLJ = new HashMap(13);

   public aC() {
      long var1 = jNpun ^ 89849699237561L;
      iS[] var10000 = lc.bXK();
      super(
         new int[]{
            uq<"r">(18453, 6096274503189371598L ^ var1),
            uq<"r">(17575, 8153751148325967480L ^ var1),
            uq<"r">(5631, 2739399394748155681L ^ var1),
            uq<"r">(19949, 7854847930945675057L ^ var1)
         }
      );
      iS[] var3 = var10000;
      this.yfSFR = new ArrayList<>();
      this.mvWDQ = null;
      Iterator var4 = rD.dlJ().aZz().values().iterator();

      while (true) {
         if (var4.hasNext()) {
            gg var5 = (gg)var4.next();
            bg var6 = new bg(var5);

            try {
               var10000 = this.yfSFR;
               if (var3 == null) {
                  break;
               }

               this.yfSFR.add(var6);
               if (var3 != null) {
                  continue;
               }
            } catch (MatchException var7) {
               throw un(var7);
            }
         }

         var10000 = this.yfSFR.get(0);
         break;
      }

      bg var8 = (bg)var10000;
      this.nEhCf = var8;
      this.YZFGi = new Y()
         .kf(lE.joxgd.bYM(7.0F))
         .ko(mG.hoGuU.cob(0.5F))
         .kg(var8.CX().bae())
         .ki(5.0F)
         .kj(uq<"r">(23903, 1016346615501590402L ^ var1))
         .kk(rj.UPXqT);
   }

   static {
      long var0 = jNpun ^ 121802149965389L;
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
      String var6 = "\u009ee\u0080\u0081V\u0082\u000e\u0086\u0000┬Ž\u0091\u0081├ÁV┬ż├ů\u0005\u0089├á\f\u008cb├čE";
      int var7 = "\u009ee\u0080\u0081V\u0082\u000e\u0086\u0000┬Ž\u0091\u0081├ÁV┬ż├ů\u0005\u0089├á\f\u008cb├čE".length();
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
                     QSCCk = var8;
                     jbUMH = new Integer[5];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u009e├ĺ\u008eTU├ś\u008eN├Ą┬┐\u0005\u0017\u0092\f\u000b\u0090";
                  var7 = "\u009e├ĺ\u008eTU├ś\u008eN├Ą┬┐\u0005\u0017\u0092\f\u000b\u0090".length();
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

   private static int up(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = uo(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public bg ui() {
      return this.nEhCf;
   }

   @Override
   public void dY() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aC.jNpun J
      // 03: ldc2_w 116017960756120
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: invokespecial sixtwo/aF.dY ()V
      // 0c: invokestatic sixtwo/lc.bXK ()[Lsixtwo/iS;
      // 0f: aload 0
      // 10: getfield sixtwo/aC.LGwHI Ljava/util/List;
      // 13: invokeinterface java/util/List.clear ()V 1
      // 18: aload 0
      // 19: aload 0
      // 1a: getfield sixtwo/aC.mvWDQ Lsixtwo/gh;
      // 1d: invokevirtual sixtwo/gh.baG ()Lsixtwo/mr;
      // 20: invokevirtual sixtwo/mr.clT ()[I
      // 23: putfield sixtwo/aC.YYZes [I
      // 26: astore 3
      // 27: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 2a: aload 0
      // 2b: invokedynamic test (Lsixtwo/aC;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/aC.um (Lsixtwo/gg;)Z, (Lsixtwo/gg;)Z ]
      // 30: invokevirtual sixtwo/ge.aZw (Ljava/util/function/Predicate;)Ljava/util/List;
      // 33: astore 4
      // 35: aload 0
      // 36: getfield sixtwo/aC.yfSFR Ljava/util/List;
      // 39: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 3e: astore 5
      // 40: aload 5
      // 42: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 47: ifeq 8f
      // 4a: aload 5
      // 4c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 51: checkcast sixtwo/bg
      // 54: astore 6
      // 56: aload 4
      // 58: aload 6
      // 5a: invokevirtual sixtwo/bg.CX ()Lsixtwo/gg;
      // 5d: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 62: aload 3
      // 63: ifnull 8a
      // 66: ifeq 8b
      // 69: goto 70
      // 6c: invokestatic sixtwo/aC.un (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6f: athrow
      // 70: aload 6
      // 72: invokevirtual sixtwo/bg.CR ()Lsixtwo/rk;
      // 75: invokevirtual sixtwo/rk.dhg ()V
      // 78: aload 0
      // 79: getfield sixtwo/aC.LGwHI Ljava/util/List;
      // 7c: aload 6
      // 7e: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 83: goto 8a
      // 86: invokestatic sixtwo/aC.un (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 89: athrow
      // 8a: pop
      // 8b: aload 3
      // 8c: ifnonnull 40
      // 8f: return
   }

   public gh uh() {
      return this.mvWDQ;
   }

   @Override
   public void tP(lC param1, float param2, al param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aC.jNpun J
      // 03: ldc2_w 108538886129632
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/lc.bXK ()[Lsixtwo/iS;
      // 0c: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 0f: ldc 7.0
      // 11: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 14: astore 7
      // 16: astore 6
      // 18: invokestatic sixtwo/bl.Ex ()Lsixtwo/bl;
      // 1b: invokevirtual sixtwo/bl.manager ()Lsixtwo/g;
      // 1e: ldc_w sixtwo/bd
      // 21: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 24: astore 8
      // 26: aload 6
      // 28: ifnull 54
      // 2b: aload 8
      // 2d: invokeinterface java/util/List.isEmpty ()Z 1
      // 32: ifeq 59
      // 35: goto 3c
      // 38: invokestatic sixtwo/aC.un (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: aload 0
      // 3d: getfield sixtwo/aC.YZFGi Lsixtwo/Y;
      // 40: aload 0
      // 41: getfield sixtwo/aC.nEhCf Lsixtwo/bg;
      // 44: invokevirtual sixtwo/bg.CX ()Lsixtwo/gg;
      // 47: invokevirtual sixtwo/gg.bae ()[I
      // 4a: invokevirtual sixtwo/Y.ku ([I)V
      // 4d: goto 54
      // 50: invokestatic sixtwo/aC.un (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 6
      // 56: ifnonnull 7a
      // 59: aload 0
      // 5a: getfield sixtwo/aC.YZFGi Lsixtwo/Y;
      // 5d: aload 8
      // 5f: invokeinterface java/util/List.getLast ()Ljava/lang/Object; 1
      // 64: checkcast sixtwo/bd
      // 67: invokevirtual sixtwo/bd.BS ()Lsixtwo/bg;
      // 6a: invokevirtual sixtwo/bg.CX ()Lsixtwo/gg;
      // 6d: invokevirtual sixtwo/gg.bae ()[I
      // 70: invokevirtual sixtwo/Y.ku ([I)V
      // 73: goto 7a
      // 76: invokestatic sixtwo/aC.un (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 0
      // 7b: getfield sixtwo/aC.YZFGi Lsixtwo/Y;
      // 7e: fload 2
      // 7f: aload 3
      // 80: invokevirtual sixtwo/al.ts ()F
      // 83: aload 7
      // 85: invokevirtual sixtwo/lq.cat ()F
      // 88: aload 3
      // 89: invokevirtual sixtwo/al.dn ()F
      // 8c: invokestatic sixtwo/jf.bAH (FF)F
      // 8f: fadd
      // 90: invokevirtual sixtwo/Y.sW (FF)Lsixtwo/az;
      // 93: pop
      // 94: aload 0
      // 95: getfield sixtwo/aC.YZFGi Lsixtwo/Y;
      // 98: aload 1
      // 99: invokevirtual sixtwo/Y.su (Lsixtwo/lC;)V
      // 9c: return
   }

   @Override
   protected int tR() {
      return 2;
   }

   public aC ul(bg var1) {
      this.nEhCf = var1;
      return this;
   }

   public aC uk(gh var1) {
      this.mvWDQ = var1;
      return this;
   }

   private static MatchException un(MatchException var0) {
      return var0;
   }

   public List<bg> ug() {
      return this.yfSFR;
   }

   private static int uo(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5347;
      if (jbUMH[var3] == null) {
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
         long var5 = QSCCk[var3];
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
         Object[] var9 = (Object[])AHrLJ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               AHrLJ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/aC", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jbUMH[var3] = var15;
      }

      return jbUMH[var3];
   }

   private static CallSite uq(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("up".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/aC" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public Y uj() {
      return this.YZFGi;
   }
}
