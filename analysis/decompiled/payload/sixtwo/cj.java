package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;

public class cj extends co {
   private final rk[] uXrKR;
   private final Z[] nfdDW;
   private final rk JSzyq;
   private static final long KQivZ = gb.aYR(-5358398472619022768L, 7241789623132261359L, MethodHandles.lookup().lookupClass()).a(274983036465735L);
   private static final long[] oTiFn;
   private static final Integer[] cyVUI;
   private static final Map FZjbT = new HashMap(13);

   public cj() {
      long var1 = KQivZ ^ 65903778188473L;
      super(
         new int[]{
            QE<"v">(21426, 5486579154934346729L ^ var1),
            QE<"v">(8633, 2271076389971542499L ^ var1),
            QE<"v">(8607, 7935385354363486657L ^ var1),
            QE<"v">(9213, 4688906122291102628L ^ var1),
            QE<"v">(3976, 2691660355707006935L ^ var1)
         },
         lf.tCZuD
      );
      this.uXrKR = new rk[4];
      this.nfdDW = new Z[4];
      boolean var10000 = ca.OX();
      this.JSzyq = new rk(QE<"v">(4464, 2037075511522619693L ^ var1)).dhs(rj.NJlxm);
      boolean var3 = var10000;
      int var4 = 0;

      while (var4 < this.uXrKR.length) {
         this.uXrKR[var4] = new rk(QE<"v">(24644, 7438348781644808220L ^ var1)).dhs(rj.XzDkv);
         lq var5 = lE.joxgd.bYM(7.0F);
         this.nfdDW[var4] = new Z().kJ(var5).kK(3.0F).kL(QE<"v">(24644, 7438348781644808220L ^ var1)).kM(rj.UPXqT).kP("%");
         var4++;
         if (var3) {
            break;
         }
      }
   }

   static {
      long var0 = KQivZ ^ 134886543400919L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[7];
      int var5 = 0;
      String var6 = "\u008dEAüÔ\u00ad©jUäùz\u0000g\u009bÖ´\u009dëã\u0088\u0002^º³ín\u0007¼\u00859\u0096ñ\u001fÔgTðJå";
      int var7 = "\u008dEAüÔ\u00ad©jUäùz\u0000g\u009bÖ´\u009dëã\u0088\u0002^º³ín\u0007¼\u00859\u0096ñ\u001fÔgTðJå".length();
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
                     oTiFn = var8;
                     cyVUI = new Integer[7];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "Nú\u008cy[ë\u0099lz\u008e¯{\u0080\fôX";
                  var7 = "Nú\u008cy[ë\u0099lz\u008e¯{\u0080\fôX".length();
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

   private static int QC(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11273;
      if (cyVUI[var3] == null) {
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
         long var5 = oTiFn[var3];
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
         Object[] var9 = (Object[])FZjbT.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FZjbT.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cj", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         cyVUI[var3] = var15;
      }

      return cyVUI[var3];
   }

   @Override
   protected void NV(lC var1) {
      long var2 = KQivZ ^ 123898563356991L;
      lq var5 = lE.WTzbi.bYM(7.0F);
      lq var6 = lE.joxgd.bYM(7.0F);
      ii var7 = rD.dlM();
      boolean var10000 = ca.OX();
      float var8 = this.ormBS.dhj();
      float var9 = this.gILqY.dhj();
      mG var10 = var7.bjb().coa(255.0F * var8);
      mG var11 = var7.bjc().coa(255.0F * var8);
      mG var12 = var7.bjc().cob(0.5F);
      float var13 = 20.0F;
      var1.ccU(this.toIeR, this.QWaAn, this.jTsqG, var13, var8, var9);
      float var14 = this.toIeR + 7.0F;
      float var15 = this.QWaAn + jf.bAH(var5.cat(), var13);
      var1.ceA(var5, this.eqWHC, var14, var15, var10);
      float var16 = 8.0F;
      float var17 = this.toIeR + this.jTsqG - var16 - 7.0F;
      float var18 = this.QWaAn + jf.bAH(var16, var13);
      boolean var4 = var10000;
      var1.cem(this.jAncU, var17, var18, var16, var11);
      float var19 = 16.0F;
      float var20 = 22.0F;
      List var21 = oP.cJq().cJE();

      int var10001;
      label51: {
         label50: {
            try {
               var41 = this.JSzyq;
               float var44;
               var10001 = (var44 = this.ormBS.dhj() * this.KgDVz.dhj() - 1.0F) == 0.0F ? 0 : (var44 < 0.0F ? -1 : 1);
               if (var4) {
                  break label51;
               }

               if (var10001 >= 0) {
                  break label50;
               }
            } catch (MatchException var40) {
               throw QB(var40);
            }

            var10001 = 0;
            break label51;
         }

         var10001 = 1;
      }

      var41.dhc((boolean)var10001);
      int var22 = var21.size() - 1;

      while (var22 >= 0) {
         class_1799 var23 = (class_1799)var21.get(var22);
         rk var24 = this.uXrKR[var22];
         Z var25 = this.nfdDW[var22];

         label38: {
            label37: {
               try {
                  var42 = var24;
                  var43 = var23.method_7960();
                  if (var4) {
                     break label38;
                  }

                  if (!var43) {
                     break label37;
                  }
               } catch (MatchException var39) {
                  throw QB(var39);
               }

               var43 = false;
               break label38;
            }

            var43 = true;
         }

         var42.dhc(var43);
         float var26 = this.JSzyq.dhj() * var24.dhj();
         mG var27 = var7.bjb().coa(255.0F * var26);
         var1.ccU(this.toIeR, this.QWaAn + var20, this.jTsqG, var19, var8, var9);
         float var28 = jF.bHw()[3];
         jF.bHz(1.0F, 1.0F, 1.0F, var28 * var26);
         var1.cea(var23, this.toIeR + 7.0F, this.QWaAn + var20 + jf.bAH(8.0F, var19), 0.5F).bGv();
         jF.bHz(1.0F, 1.0F, 1.0F, var28);
         float var29 = this.toIeR + this.jTsqG - 7.0F;
         int var30 = jc.bze(var23);
         String var31 = var30 + "%";
         float var32 = var6.cao(var31);
         float var33 = this.toIeR + 15.0F;
         float var34 = var29 - var32;
         float var35 = (var34 - var33) / 2.0F - 1.0F;
         float var36 = var33 + var35;
         float var37 = this.QWaAn + var20 + var19 / 2.0F - 1.0F;
         var1.cdc(var36, var37, var12);
         float var38 = this.QWaAn + var20 + jf.bAH(var6.cat(), var19);
         var25.kS(false, var27);
         var25.kO(var30);
         var25.sW(var34, var38);
         var25.su(var1);
         var20 += 18.0F * var26;
         var22--;
         if (var4) {
            break;
         }
      }
   }

   @Override
   public void LX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cj.KQivZ J
      // 03: ldc2_w 110039408740095
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ca.OY ()Z
      // 0b: aload 0
      // 0c: ldc 55.0
      // 0e: putfield sixtwo/cj.jTsqG F
      // 11: istore 4
      // 13: aload 0
      // 14: ldc 20.0
      // 16: putfield sixtwo/cj.Xtjvx F
      // 19: invokestatic sixtwo/oP.cJq ()Lsixtwo/oQ;
      // 1c: invokevirtual sixtwo/oQ.cJE ()Ljava/util/List;
      // 1f: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 24: astore 5
      // 26: aload 5
      // 28: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 2d: ifeq 78
      // 30: aload 5
      // 32: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 37: checkcast net/minecraft/class_1799
      // 3a: astore 6
      // 3c: iload 4
      // 3e: ifeq 7d
      // 41: iload 4
      // 43: ifeq 73
      // 46: goto 4d
      // 49: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: aload 6
      // 4f: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 52: ifeq 68
      // 55: goto 5c
      // 58: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: iload 4
      // 5e: ifne 26
      // 61: goto 68
      // 64: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 0
      // 69: dup
      // 6a: getfield sixtwo/cj.Xtjvx F
      // 6d: ldc 18.0
      // 6f: fadd
      // 70: putfield sixtwo/cj.Xtjvx F
      // 73: iload 4
      // 75: ifne 26
      // 78: aload 0
      // 79: aload 1
      // 7a: invokespecial sixtwo/co.LX (Lsixtwo/lC;)V
      // 7d: return
   }

   @Override
   public boolean Om() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cj.KQivZ J
      // 03: ldc2_w 126594016029717
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: istore 3
      // 0c: invokestatic sixtwo/oP.cJq ()Lsixtwo/oQ;
      // 0f: invokevirtual sixtwo/oQ.cJE ()Ljava/util/List;
      // 12: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 17: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, net/minecraft/class_1799.method_7960 ()Z, (Lnet/minecraft/class_1799;)Z ]
      // 1c: invokeinterface java/util/stream/Stream.allMatch (Ljava/util/function/Predicate;)Z 2
      // 21: iload 3
      // 22: ifne 30
      // 25: ifne 33
      // 28: goto 2f
      // 2b: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: bipush 1
      // 30: goto 34
      // 33: bipush 0
      // 34: istore 4
      // 36: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 39: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 3c: instanceof net/minecraft/class_408
      // 3f: istore 5
      // 41: iload 4
      // 43: iload 3
      // 44: ifne 69
      // 47: ifne 68
      // 4a: goto 51
      // 4d: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: iload 5
      // 53: iload 3
      // 54: ifne 69
      // 57: goto 5e
      // 5a: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: ifeq 6c
      // 61: goto 68
      // 64: invokestatic sixtwo/cj.QB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: bipush 1
      // 69: goto 6d
      // 6c: bipush 0
      // 6d: ireturn
   }

   private static CallSite QE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("QD".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException QB(MatchException var0) {
      return var0;
   }

   private static int QD(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = QC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
