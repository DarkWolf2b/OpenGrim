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

public class la {
   public static final int dSrGG;
   protected kY irnms;
   protected mG ynWlL;
   protected mG EzdzQ;
   protected mG MbRuH;
   protected mG pUlwC;
   protected mG[] DIglq;
   protected float[] UGbmX;
   protected float VlJqC;
   private static iS[] tZGSB;
   private static final long LrJMC = gb.aYR(-2861327991740537490L, -2468379374040924800L, MethodHandles.lookup().lookupClass()).a(254068701844855L);
   private static final long[] chDhf;
   private static final Integer[] YxUPE;
   private static final Map Pfwiz = new HashMap(13);

   protected la(mG var1, mG var2, mG var3, mG var4) {
      long var5 = LrJMC ^ 50071641598091L;
      bXl();
      super();
      this.irnms = kY.DsgDa;
      this.DIglq = new mG[0];
      this.UGbmX = new float[0];
      this.VlJqC = 0.0F;

      try {
         this.bWW(var1, var2, var3, var4);
         if (iS.bwL() == null) {
            bXk(new iS[4]);
         }
      } catch (MatchException var8) {
         throw bXm(var8);
      }
   }

   protected la(kY var1, mG[] var2, float[] var3, float var4) {
      long var5 = LrJMC ^ 13501946246286L;
      iS[] var10000 = bXl();
      super();
      iS[] var7 = var10000;

      try {
         this.irnms = bWZ(var1);
         this.bWY(var2, var3);
         this.VlJqC = var4;
         this.bWW(this.DIglq[0], this.DIglq[this.DIglq.length - 1], this.DIglq[0], this.DIglq[this.DIglq.length - 1]);
         if (var7 == null) {
            iS.bwK("iuOlM");
         }
      } catch (MatchException var8) {
         throw bXm(var8);
      }
   }

   static {
      iS[] var10000 = new iS[4];
      bXk(var10000);
      long var0 = LrJMC ^ 20013917634314L;
      Cipher var2;
      Cipher var13 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var13.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "├╣\u0091d_z\u001b\u0005├č┬║Th<a\u0085├Ć7";
      int var7 = "├╣\u0091d_z\u001b\u0005├č┬║Th<a\u0085├Ć7".length();
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
         byte var15 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      chDhf = var8;
      YxUPE = new Integer[2];
      dSrGG = bXp<"l">(6189, var0 ^ 657455715268601490L);
   }

   protected final void bWW(mG var1, mG var2, mG var3, mG var4) {
      this.ynWlL = var1;
      this.EzdzQ = var2;
      this.MbRuH = var3;
      this.pUlwC = var4;
   }

   public la bWu() {
      return this.bWX(this.VlJqC);
   }

   public float[] bWV() {
      return (float[])this.UGbmX.clone();
   }

   public static la bWH(mG[] var0, float[] var1) {
      return bWE().dut(var0, var1).duy();
   }

   public static la bWD(mG var0, mG var1) {
      return new lb(var0, var1);
   }

   public la bWP(float var1) {
      return this.bWO(var1);
   }

   private static float[] bXb(float[] param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/la.LrJMC J
      // 03: ldc2_w 131401019710038
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/la.bXl ()[Lsixtwo/iS;
      // 0b: iload 1
      // 0c: newarray 6
      // 0e: astore 5
      // 10: astore 4
      // 12: aload 0
      // 13: aload 4
      // 15: ifnull 23
      // 18: ifnull 34
      // 1b: goto 22
      // 1e: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 0
      // 23: arraylength
      // 24: aload 4
      // 26: ifnull 7b
      // 29: iload 1
      // 2a: if_icmpge 7a
      // 2d: goto 34
      // 30: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: bipush 0
      // 35: istore 6
      // 37: iload 6
      // 39: iload 1
      // 3a: if_icmpge 77
      // 3d: aload 5
      // 3f: aload 4
      // 41: ifnull 79
      // 44: iload 6
      // 46: iload 1
      // 47: aload 4
      // 49: ifnull 68
      // 4c: goto 53
      // 4f: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: bipush 1
      // 54: if_icmpne 66
      // 57: goto 5e
      // 5a: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: fconst_0
      // 5f: goto 6e
      // 62: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: iload 6
      // 68: i2f
      // 69: iload 1
      // 6a: bipush 1
      // 6b: isub
      // 6c: i2f
      // 6d: fdiv
      // 6e: fastore
      // 6f: iinc 6 1
      // 72: aload 4
      // 74: ifnonnull 37
      // 77: aload 5
      // 79: areturn
      // 7a: bipush 0
      // 7b: istore 6
      // 7d: iload 6
      // 7f: iload 1
      // 80: if_icmpge a5
      // 83: aload 5
      // 85: aload 4
      // 87: ifnull a7
      // 8a: iload 6
      // 8c: aload 0
      // 8d: iload 6
      // 8f: faload
      // 90: fconst_0
      // 91: fconst_1
      // 92: invokestatic java/lang/Math.clamp (FFF)F
      // 95: fastore
      // 96: iinc 6 1
      // 99: aload 4
      // 9b: ifnonnull 7d
      // 9e: goto a5
      // a1: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a4: athrow
      // a5: aload 5
      // a7: areturn
   }

   public mG[] bWU() {
      return (mG[])this.DIglq.clone();
   }

   private static CallSite bXp(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bXo".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/la" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public boolean bWQ() {
      return this.irnms.bWx();
   }

   public static void bXk(iS[] var0) {
      tZGSB = var0;
   }

   public static la bWC(mG var0, mG var1) {
      return new kW(var0, var1);
   }

   public mG bXf() {
      return this.EzdzQ;
   }

   public static la bWA(mG var0, mG var1, mG var2, mG var3) {
      return new la(var0, var1, var2, var3);
   }

   public float bXi() {
      return this.VlJqC;
   }

   private static int bXo(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bXn(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bXm(MatchException var0) {
      return var0;
   }

   public float bWT(int var1) {
      return this.UGbmX[var1];
   }

   private la bWX(float var1) {
      long var2 = LrJMC ^ 135738682865381L;
      iS[] var4 = bXl();

      label27: {
         try {
            if (var4 == null) {
               return this;
            }

            if (!this.bWQ()) {
               break label27;
            }
         } catch (MatchException var6) {
            throw bXm(var6);
         }

         return new la(this.irnms, this.DIglq, this.UGbmX, var1);
      }

      la var5 = bWA(this.ynWlL, this.EzdzQ, this.MbRuH, this.pUlwC);
      var5.VlJqC = var1;
      return var5;
   }

   public mG bXh() {
      return this.pUlwC;
   }

   private static int bXn(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24242;
      if (YxUPE[var3] == null) {
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
         long var5 = chDhf[var3];
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
         Object[] var9 = (Object[])Pfwiz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Pfwiz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/la", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         YxUPE[var3] = var15;
      }

      return YxUPE[var3];
   }

   public static la$us bWK(kY var0) {
      return new la$us(var0);
   }

   public static la bWG(mG... var0) {
      return bWE().dus(var0).duy();
   }

   public kY bXd() {
      return this.irnms;
   }

   public mG bXe() {
      return this.ynWlL;
   }

   public static iS[] bXl() {
      return tZGSB;
   }

   private static void bXc(mG[] var0, float[] var1) {
      long var2 = LrJMC ^ 139706567011268L;
      int var5 = var1.length;
      iS[] var10000 = bXl();
      Integer[] var6 = new Integer[var5];
      int var7 = 0;
      iS[] var4 = var10000;

      while (true) {
         if (var7 < var5) {
            try {
               var6[var7] = var7;
               var7++;
               if (var4 == null) {
                  break;
               }

               if (var4 != null) {
                  continue;
               }
            } catch (MatchException var11) {
               throw bXm(var11);
            }
         }

         Arrays.sort(var6, (var1x, var2x) -> Float.compare(var1[var1x], var1[var2x]));
         break;
      }

      mG[] var12 = (mG[])var0.clone();
      float[] var8 = (float[])var1.clone();
      int var9 = 0;

      while (true) {
         if (var9 < var5) {
            try {
               var12[var9] = var0[var6[var9]];
               var8[var9] = var1[var6[var9]];
               var9++;
               if (var4 == null) {
                  break;
               }

               if (var4 != null) {
                  continue;
               }
            } catch (MatchException var10) {
               throw bXm(var10);
            }
         }

         System.arraycopy(var12, 0, var0, 0, var5);
         System.arraycopy(var8, 0, var1, 0, var5);
         break;
      }
   }

   public la bWN(float var1) {
      return this.bWM(var1);
   }

   public mG bXg() {
      return this.MbRuH;
   }

   private static mG[] bXa(mG[] param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/la.LrJMC J
      // 03: ldc2_w 121671225457167
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/la.bXl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 49
      // 11: ifnull 32
      // 14: goto 1b
      // 17: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: arraylength
      // 1d: aload 3
      // 1e: ifnull 5c
      // 21: goto 28
      // 24: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: ifne 4a
      // 2b: goto 32
      // 2e: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: bipush 2
      // 33: anewarray 60
      // 36: dup
      // 37: bipush 0
      // 38: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 3b: aastore
      // 3c: dup
      // 3d: bipush 1
      // 3e: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 41: aastore
      // 42: goto 49
      // 45: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: areturn
      // 4a: aload 0
      // 4b: arraylength
      // 4c: sipush 17268
      // 4f: ldc2_w 8943787631319660751
      // 52: lload 1
      // 53: lxor
      // 54: invokedynamic l (IJ)I bsm=sixtwo/la.bXp (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 59: invokestatic java/lang/Math.min (II)I
      // 5c: istore 4
      // 5e: iload 4
      // 60: anewarray 60
      // 63: astore 5
      // 65: aload 0
      // 66: bipush 0
      // 67: aload 5
      // 69: bipush 0
      // 6a: iload 4
      // 6c: invokestatic java/lang/System.arraycopy (Ljava/lang/Object;ILjava/lang/Object;II)V
      // 6f: aload 5
      // 71: aload 3
      // 72: ifnull 9a
      // 75: arraylength
      // 76: bipush 1
      // 77: if_icmpne 98
      // 7a: goto 81
      // 7d: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: bipush 2
      // 82: anewarray 60
      // 85: dup
      // 86: bipush 0
      // 87: aload 5
      // 89: bipush 0
      // 8a: aaload
      // 8b: aastore
      // 8c: dup
      // 8d: bipush 1
      // 8e: aload 5
      // 90: bipush 0
      // 91: aaload
      // 92: aastore
      // 93: areturn
      // 94: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 5
      // 9a: areturn
   }

   public mG bWS(int var1) {
      return this.DIglq[var1];
   }

   public static la bWF(mG var0, mG var1) {
      return bWE().dus(var0, var1).duy();
   }

   public static la$us bWE() {
      return bWK(kY.YYiVQ);
   }

   public static la bWB(mG var0, mG var1) {
      return new kX(var0, var1);
   }

   public la bWO(float var1) {
      return this.bWM((float)Math.toRadians(var1));
   }

   private void bWY(mG[] var1, float[] var2) {
      this.DIglq = bXa(var1);
      this.UGbmX = bXb(var2, this.DIglq.length);
      bXc(this.DIglq, this.UGbmX);
   }

   private static kY bWZ(kY param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/la.LrJMC J
      // 03: ldc2_w 61386812078750
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/la.bXl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 3e
      // 11: ifnull 34
      // 14: goto 1b
      // 17: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: aload 3
      // 1d: ifnull 40
      // 20: goto 27
      // 23: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: invokevirtual sixtwo/kY.bWx ()Z
      // 2a: ifne 3f
      // 2d: goto 34
      // 30: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: getstatic sixtwo/kY.YYiVQ Lsixtwo/kY;
      // 37: goto 3e
      // 3a: invokestatic sixtwo/la.bXm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: areturn
      // 3f: aload 0
      // 40: areturn
   }

   public static la bWL(kY var0, mG[] var1, float[] var2) {
      return bWK(var0).dut(var1, var2).duy();
   }

   public la bWM(float var1) {
      return this.bWX(var1);
   }

   public int bWR() {
      return this.DIglq.length;
   }

   public static la bWI(float var0, mG[] var1, float[] var2) {
      return bWE().duw(var0).dut(var1, var2).duy();
   }

   public static la bWJ(float var0, mG... var1) {
      return bWE().dux(var0).dus(var1).duy();
   }
}
