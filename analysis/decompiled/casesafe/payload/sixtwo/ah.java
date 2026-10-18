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

public class ah extends az {
   private double jHuGT;
   private double TCqpd;
   private double spjLF;
   private double sZwZd;
   private double UUSmJ;
   private final rk xyejr;
   private static final long DnwET = gb.aYR(3253819375579256058L, -242973308182835243L, MethodHandles.lookup().lookupClass()).a(112643053348745L);
   private static final long[] Ewwsz;
   private static final Integer[] MFJtF;
   private static final Map yjZJj = new HashMap(13);

   public ah() {
      long var1 = DnwET ^ 48909849427893L;
      super();
      this.TCqpd = 0.0;
      this.spjLF = 0.0;
      this.sZwZd = 20.0;
      this.UUSmJ = 0.0;
      this.xyejr = new rk(nY<"d">(27226, 6255605433280518561L ^ var1)).dhs(rj.XzDkv);
   }

   static {
      long var0 = DnwET ^ 96048043455601L;
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
      String var6 = "├Ś\u0099@├┤├Ę\u0001\u0014├é┬╣*├┐├ĚH\u0014l\u0080┬┐I├Ä┬┤\u001b├Ş├â\u0003";
      int var7 = "├Ś\u0099@├┤├Ę\u0001\u0014├é┬╣*├┐├ĚH\u0014l\u0080┬┐I├Ä┬┤\u001b├Ş├â\u0003".length();
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
                     Ewwsz = var8;
                     MFJtF = new Integer[5];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "y`V?┬ź\u008f\u009f\u0094e\u0011┬žR┬┐├Ż┬ó├Ç";
                  var7 = "y`V?┬ź\u008f\u009f\u0094e\u0011┬žR┬┐├Ż┬ó├Ç".length();
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

   @Override
   public boolean dm(int param1, int param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ah.DnwET J
      // 03: ldc2_w 3504260882887
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0c: astore 6
      // 0e: iload 1
      // 0f: sipush 16454
      // 12: ldc2_w 3182823879767076300
      // 15: lload 4
      // 17: lxor
      // 18: invokedynamic d (IJ)I bsm=sixtwo/ah.nY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d: aload 6
      // 1f: ifnull 52
      // 22: if_icmpne 37
      // 25: goto 2c
      // 28: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: dconst_1
      // 2e: invokevirtual sixtwo/ah.nJ (D)V
      // 31: bipush 1
      // 32: ireturn
      // 33: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: iload 1
      // 38: aload 6
      // 3a: ifnull 69
      // 3d: sipush 17877
      // 40: ldc2_w 9034512377933703261
      // 43: lload 4
      // 45: lxor
      // 46: invokedynamic d (IJ)I bsm=sixtwo/ah.nY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: if_icmpne 62
      // 55: aload 0
      // 56: ldc2_w -1.0
      // 59: invokevirtual sixtwo/ah.nJ (D)V
      // 5c: bipush 1
      // 5d: ireturn
      // 5e: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: iload 1
      // 64: iload 2
      // 65: iload 3
      // 66: invokespecial sixtwo/az.dm (III)Z
      // 69: ireturn
   }

   @Override
   protected void bV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ah.DnwET J
      // 03: ldc2_w 132364783972616
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/ah.UUSmJ D
      // 11: aload 0
      // 12: getfield sixtwo/ah.WjISQ F
      // 15: f2d
      // 16: dcmpg
      // 17: aload 4
      // 19: ifnull 3f
      // 1c: ifle 42
      // 1f: goto 26
      // 22: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: aload 4
      // 29: ifnull 44
      // 2c: goto 33
      // 2f: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: getfield sixtwo/ah.jHuGT D
      // 36: dconst_0
      // 37: dcmpg
      // 38: goto 3f
      // 3b: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: ifgt 43
      // 42: return
      // 43: aload 0
      // 44: getfield sixtwo/ah.WjISQ F
      // 47: aload 0
      // 48: getfield sixtwo/ah.UUSmJ D
      // 4b: d2f
      // 4c: fdiv
      // 4d: fstore 5
      // 4f: ldc 24.0
      // 51: aload 0
      // 52: getfield sixtwo/ah.WjISQ F
      // 55: fload 5
      // 57: fmul
      // 58: invokestatic java/lang/Math.max (FF)F
      // 5b: fstore 6
      // 5d: aload 0
      // 5e: invokevirtual sixtwo/ah.nH ()D
      // 61: dstore 7
      // 63: dconst_0
      // 64: dload 7
      // 66: aload 0
      // 67: getfield sixtwo/ah.jHuGT D
      // 6a: invokestatic java/lang/Math.min (DD)D
      // 6d: invokestatic java/lang/Math.max (DD)D
      // 70: dstore 7
      // 72: aload 0
      // 73: getfield sixtwo/ah.WjISQ F
      // 76: fload 6
      // 78: fsub
      // 79: fstore 9
      // 7b: dload 7
      // 7d: aload 0
      // 7e: getfield sixtwo/ah.jHuGT D
      // 81: ddiv
      // 82: d2f
      // 83: fstore 10
      // 85: return
   }

   private static int nW(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 3961;
      if (MFJtF[var3] == null) {
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
         long var5 = Ewwsz[var3];
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
         Object[] var9 = (Object[])yjZJj.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               yjZJj.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ah", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         MFJtF[var3] = var15;
      }

      return MFJtF[var3];
   }

   public void nG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ah.DnwET J
      // 03: ldc2_w 42996004446073
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: dconst_0
      // 0a: aload 0
      // 0b: getfield sixtwo/ah.spjLF D
      // 0e: aload 0
      // 0f: getfield sixtwo/ah.jHuGT D
      // 12: invokestatic java/lang/Math.min (DD)D
      // 15: invokestatic java/lang/Math.max (DD)D
      // 18: putfield sixtwo/ah.spjLF D
      // 1b: aload 0
      // 1c: getfield sixtwo/ah.spjLF D
      // 1f: aload 0
      // 20: getfield sixtwo/ah.TCqpd D
      // 23: dsub
      // 24: dstore 4
      // 26: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 29: aload 0
      // 2a: dup
      // 2b: getfield sixtwo/ah.TCqpd D
      // 2e: dload 4
      // 30: dadd
      // 31: putfield sixtwo/ah.TCqpd D
      // 34: astore 3
      // 35: dload 4
      // 37: invokestatic java/lang/Math.abs (D)D
      // 3a: dstore 6
      // 3c: aload 3
      // 3d: ifnull ca
      // 40: dload 6
      // 42: dconst_0
      // 43: dcmpl
      // 44: ifle bd
      // 47: goto 4e
      // 4a: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: getfield sixtwo/ah.xyejr Lsixtwo/rk;
      // 52: dload 6
      // 54: ldc2_w 21.0
      // 57: dcmpl
      // 58: ifle 6c
      // 5b: goto 62
      // 5e: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: getstatic sixtwo/rj.JbGQS Lsixtwo/rj;
      // 65: goto 6f
      // 68: invokestatic sixtwo/ah.nV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 6f: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 72: pop
      // 73: sipush 30077
      // 76: ldc2_w 1301453422319396424
      // 79: lload 1
      // 7a: lxor
      // 7b: invokedynamic d (IJ)I bsm=sixtwo/ah.nY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 80: istore 8
      // 82: dload 6
      // 84: ldc2_w 61.0
      // 87: dsub
      // 88: ldc2_w 20.0
      // 8b: ddiv
      // 8c: invokestatic java/lang/Math.ceil (D)D
      // 8f: d2i
      // 90: istore 9
      // 92: bipush 0
      // 93: bipush 3
      // 94: iload 9
      // 96: invokestatic java/lang/Math.min (II)I
      // 99: invokestatic java/lang/Math.max (II)I
      // 9c: istore 9
      // 9e: iload 8
      // a0: iload 9
      // a2: sipush 27501
      // a5: ldc2_w 4175019985503909981
      // a8: lload 1
      // a9: lxor
      // aa: invokedynamic d (IJ)I bsm=sixtwo/ah.nY (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // af: imul
      // b0: iadd
      // b1: istore 10
      // b3: aload 0
      // b4: getfield sixtwo/ah.xyejr Lsixtwo/rk;
      // b7: iload 10
      // b9: invokevirtual sixtwo/rk.dhq (I)Lsixtwo/rk;
      // bc: pop
      // bd: aload 0
      // be: getfield sixtwo/ah.xyejr Lsixtwo/rk;
      // c1: aload 0
      // c2: getfield sixtwo/ah.TCqpd D
      // c5: d2f
      // c6: invokevirtual sixtwo/rk.dhd (F)F
      // c9: pop
      // ca: return
   }

   public void nI() {
      this.TCqpd = 0.0;
      this.spjLF = 0.0;
      this.xyejr.dhg();
   }

   public ah nQ(double var1) {
      this.jHuGT = var1;
      return this;
   }

   public double nH() {
      return this.xyejr.dhj();
   }

   public void nJ(double var1) {
      this.spjLF = this.spjLF - var1 * this.sZwZd;
   }

   public double nN() {
      return this.sZwZd;
   }

   public double nK() {
      return this.jHuGT;
   }

   public double nO() {
      return this.UUSmJ;
   }

   public rk nP() {
      return this.xyejr;
   }

   public ah nR(double var1) {
      this.TCqpd = var1;
      return this;
   }

   private static MatchException nV(MatchException var0) {
      return var0;
   }

   private static int nX(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = nW(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public ah nS(double var1) {
      this.spjLF = var1;
      return this;
   }

   public double nM() {
      return this.spjLF;
   }

   public ah nU(double var1) {
      this.UUSmJ = var1;
      return this;
   }

   private static CallSite nY(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("nX".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ah" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public double nL() {
      return this.TCqpd;
   }

   public ah nT(double var1) {
      this.sZwZd = var1;
      return this;
   }
}
