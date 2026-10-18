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
import net.minecraft.class_243;
import net.minecraft.class_4587;

public class mn extends mq implements lG {
   private final long kaAKN;
   private final mT iTDVy;
   private boolean tyKgU;
   private final rk QETnW;
   private static final long ZOPtL = gb.aYR(4337217784066446677L, -1430240155685216216L, MethodHandles.lookup().lookupClass()).a(242932562373776L);
   private static final long[] VgdKt;
   private static final Integer[] CqWYY;
   private static final Map VdPek = new HashMap(13);

   public mn(class_243 var1, mp var2, class_243 var3, float var4) {
      long var5 = ZOPtL ^ 100779217350559L;
      super(var1, var3, var2, var4);
      this.iTDVy = mT.cpz();
      this.tyKgU = false;
      this.QETnW = new rk(clC<"l">(15236, 1407361183944399495L ^ var5)).dhs(rj.UPXqT);
      this.kaAKN = mU.cpO(clC<"l">(45, 5459353398914441517L ^ var5), clC<"l">(31570, 7864645912765569616L ^ var5));
   }

   static {
      long var0 = ZOPtL ^ 26405059220740L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[3];
      int var5 = 0;
      String var6 = ".1├ÉE`├Ą\u001c\u0082\u0081DV4\u00853j=├ô\u000e]┬Ę├öH├Á\u0099";
      int var7 = ".1├ÉE`├Ą\u001c\u0082\u0081DV4\u00853j=├ô\u000e]┬Ę├öH├Á\u0099".length();
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

      VgdKt = var8;
      CqWYY = new Integer[3];
   }

   @Override
   public void cls(class_4587 var1, float var2) {
      float var3 = 0.07F;
      jI.bIs(var1, this.clL(var2));
      var1.method_22905(var3, var3, var3);
      jI.bIt(var1, this.hMiLh / 2.0F);
      jI.bIu(var1);
      jI.bIt(var1, -this.hMiLh / 2.0F);
   }

   private static MatchException clz(MatchException var0) {
      return var0;
   }

   private static CallSite clC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("clB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mn" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int clA(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 23717;
      if (CqWYY[var3] == null) {
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
         long var5 = VgdKt[var3];
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
         Object[] var9 = (Object[])VdPek.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               VdPek.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mn", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         CqWYY[var3] = var15;
      }

      return CqWYY[var3];
   }

   private static int clB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = clA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public boolean clp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/mn.ZOPtL J
      // 03: ldc2_w 79724985314565
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/mm.clx ()I
      // 0b: istore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: ifnonnull 1b
      // 15: bipush 1
      // 16: ireturn
      // 17: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: getfield sixtwo/mn.tyKgU Z
      // 1f: iload 3
      // 20: ifeq 78
      // 23: ifne 5d
      // 26: goto 2d
      // 29: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 0
      // 2e: iload 3
      // 2f: ifeq 99
      // 32: goto 39
      // 35: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: getfield sixtwo/mn.iTDVy Lsixtwo/mT;
      // 3c: aload 0
      // 3d: getfield sixtwo/mn.kaAKN J
      // 40: invokevirtual sixtwo/mT.cpC (J)Z
      // 43: ifeq 81
      // 46: goto 4d
      // 49: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: aload 0
      // 4e: bipush 1
      // 4f: putfield sixtwo/mn.tyKgU Z
      // 52: iload 3
      // 53: ifne 81
      // 56: goto 5d
      // 59: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 0
      // 5e: iload 3
      // 5f: ifeq 99
      // 62: goto 69
      // 65: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: getfield sixtwo/mn.QETnW Lsixtwo/rk;
      // 6c: invokevirtual sixtwo/rk.dhj ()F
      // 6f: fconst_0
      // 70: fcmpl
      // 71: goto 78
      // 74: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 77: athrow
      // 78: ifne 81
      // 7b: bipush 1
      // 7c: ireturn
      // 7d: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 0
      // 82: aload 0
      // 83: getfield sixtwo/mn.vMbcc Lnet/minecraft/class_243;
      // 86: putfield sixtwo/mn.fmdTe Lnet/minecraft/class_243;
      // 89: aload 0
      // 8a: aload 0
      // 8b: getfield sixtwo/mn.vMbcc Lnet/minecraft/class_243;
      // 8e: aload 0
      // 8f: getfield sixtwo/mn.AkpJr Lnet/minecraft/class_243;
      // 92: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 95: putfield sixtwo/mn.vMbcc Lnet/minecraft/class_243;
      // 98: aload 0
      // 99: aload 0
      // 9a: getfield sixtwo/mn.AkpJr Lnet/minecraft/class_243;
      // 9d: dconst_1
      // 9e: aload 0
      // 9f: getfield sixtwo/mn.XIaIs Lsixtwo/mp;
      // a2: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // a5: if_acmpne b2
      // a8: ldc2_w 0.8999999761581421
      // ab: goto b3
      // ae: invokestatic sixtwo/mn.clz (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b1: athrow
      // b2: dconst_1
      // b3: dconst_1
      // b4: invokevirtual net/minecraft/class_243.method_18805 (DDD)Lnet/minecraft/class_243;
      // b7: putfield sixtwo/mn.AkpJr Lnet/minecraft/class_243;
      // ba: aload 0
      // bb: aload 0
      // bc: getfield sixtwo/mn.AkpJr Lnet/minecraft/class_243;
      // bf: dconst_0
      // c0: ldc2_w -0.0010000000474974513
      // c3: dconst_0
      // c4: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // c7: putfield sixtwo/mn.AkpJr Lnet/minecraft/class_243;
      // ca: bipush 0
      // cb: ireturn
   }

   @Override
   public void clr(class_4587 var1, float var2, mG var3) {
      mG var4 = var3.coa(255.0F * this.QETnW.dhj() * 0.4F);
      var1.method_22903();
      this.cls(var1, var2);
      double var5 = 2.0;
      double var7 = this.hMiLh * var5;
      double var9 = (this.hMiLh - var7) / 2.0;
      double var11 = (this.hMiLh - var7) / 2.0;
      XSRvt.bUH(kG.bTv(var1, var9, var11, 0.0, var7, var7).dtF(var4).dtG());
      var1.method_22909();
   }

   @Override
   public void clq(class_4587 var1, float var2, mG var3) {
      long var4 = ZOPtL ^ 127764514981273L;
      int var6 = mm.clw();

      rk var10000;
      boolean var10001;
      label22: {
         label21: {
            try {
               var10000 = this.QETnW;
               var10001 = this.tyKgU;
               if (var6 != 0) {
                  break label22;
               }

               if (!this.tyKgU) {
                  break label21;
               }
            } catch (MatchException var8) {
               throw clz(var8);
            }

            var10001 = false;
            break label22;
         }

         var10001 = true;
      }

      var10000.dhc(var10001);
      mG var7 = var3.coa(255.0F * this.QETnW.dhj() * 0.4F);
      var1.method_22903();
      this.cls(var1, var2);
      XSRvt.bUH(kG.bTv(var1, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(var7).dtG());
      var1.method_22909();
   }
}
