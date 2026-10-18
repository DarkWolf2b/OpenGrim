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
import net.minecraft.class_241;

public class bl extends av implements aw {
   private static bl VyQNu;
   private final lc CEIOv;
   private final ah WOOwr;
   private final ad TUFvs;
   private final aJ wraGo;
   private final al ZmUwR;
   private final bi cjnmJ;
   private final g lDPYv;
   private final az vjKVl;
   private boolean TCMij;
   private float bvjoR;
   private float dKaMJ;
   private boolean ncerH;
   private final sixtwo.R uuFQh;
   private static iS[] rxHWS;
   private static final long AGQWN = gb.aYR(6184744718404640296L, 5828307648978400804L, MethodHandles.lookup().lookupClass()).a(200750414847398L);
   private static final String afmPV;
   private static final long[] iSqCx;
   private static final Integer[] VgeZy;
   private static final Map sBqsw;

   public static void EM(iS[] var0) {
      rxHWS = var0;
   }

   public bl() {
      long var1 = AGQWN ^ 92221578138197L;
      super();
      this.lDPYv = new g();
      VyQNu = this;
      this.lDPYv.aV(() -> this.sg());
      float var4 = 465.0F;
      float var5 = 305.5F;
      class_241 var6 = rm.diq();
      this.CEIOv = new lc(var6.field_1343 / 2.0F - var4 / 2.0F, var6.field_1342 / 2.0F - var5 / 2.0F, var4, var5);
      this.WOOwr = new ah();
      this.TUFvs = new ad(lE.WTzbi.bYM(6.0F));
      this.wraGo = new aJ();
      this.ZmUwR = new al();
      this.cjnmJ = new bi();
      this.uuFQh = (sixtwo.R)new sixtwo.R(od.cBQ(afmPV)).iA(W.igoQj).jb(var1x -> this.Er()).sX(20.0F, 20.0F);
      iS[] var10000 = EN();
      this.vjKVl = new bl$sd(this);
      this.vjKVl.sI(this.wraGo);
      this.vjKVl.sI(this.ZmUwR);
      this.vjKVl.sI(this.uuFQh);
      this.vjKVl.sI(this.cjnmJ);
      iS[] var3 = var10000;

      try {
         this.lDPYv.aE(this.vjKVl);
         if (var3 != null) {
            iS.bwK("sWBKJ");
         }
      } catch (MatchException var7) {
         throw EO(var7);
      }
   }

   static {
      long var11 = AGQWN ^ 2541012324948L;
      EM(null);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("I┬ą├ůl├┐\u000bp\t".getBytes("ISO-8859-1"));
      String var22 = EP(var15).intern();
      int var10001 = -1;
      afmPV = var22;
      sBqsw = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[7];
      int var3 = 0;
      String var4 = "├Ą├Ćn┬Č\u0090├é\u001a\u001da├ć├ťBN┬¬\u0010┬á\u009f├ľ┬ó├║5U6`.├ĺY6{\u0080├î├Ĺ├╗├ć├×#├á_\u007f├╣";
      int var5 = "├Ą├Ćn┬Č\u0090├é\u001a\u001da├ć├ťBN┬¬\u0010┬á\u009f├ľ┬ó├║5U6`.├ĺY6{\u0080├î├Ĺ├╗├ć├×#├á_\u007f├╣".length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
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
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     iSqCx = var6;
                     VgeZy = new Integer[7];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "\u000562\u0083\u0002\u000e├Ě\u000e┬ú\u0080├ĹZft\u0086├Ś";
                  var5 = "\u000562\u0083\u0002\u000e├Ě\u000e┬ú\u0080├ĹZft\u0086├Ś".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }

   @Override
   protected class_241 n() {
      return new class_241(this.CEIOv.bXH() + 14.0F, this.CEIOv.bXI() + 14.0F);
   }

   @Override
   public void m(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 60395715323255
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/bl.Weytw Lsixtwo/rk;
      // 11: aload 0
      // 12: getfield sixtwo/bl.VWsmm Z
      // 15: aload 4
      // 17: ifnonnull 25
      // 1a: ifne 28
      // 1d: goto 24
      // 20: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: bipush 1
      // 25: goto 29
      // 28: bipush 0
      // 29: invokevirtual sixtwo/rk.dhc (Z)V
      // 2c: aload 0
      // 2d: getfield sixtwo/bl.Weytw Lsixtwo/rk;
      // 30: aload 0
      // 31: getfield sixtwo/bl.VWsmm Z
      // 34: ifne 41
      // 37: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 3a: goto 44
      // 3d: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 44: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 47: pop
      // 48: aload 0
      // 49: getfield sixtwo/bl.WOOwr Lsixtwo/ah;
      // 4c: invokevirtual sixtwo/ah.nG ()V
      // 4f: aload 0
      // 50: aload 4
      // 52: ifnonnull 95
      // 55: getfield sixtwo/bl.TCMij Z
      // 58: ifeq 84
      // 5b: goto 62
      // 5e: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 0
      // 63: getfield sixtwo/bl.CEIOv Lsixtwo/lc;
      // 66: aload 1
      // 67: invokevirtual sixtwo/lC.cff ()D
      // 6a: d2f
      // 6b: aload 0
      // 6c: getfield sixtwo/bl.bvjoR F
      // 6f: fsub
      // 70: aload 1
      // 71: invokevirtual sixtwo/lC.cfg ()D
      // 74: d2f
      // 75: aload 0
      // 76: getfield sixtwo/bl.dKaMJ F
      // 79: fsub
      // 7a: invokevirtual sixtwo/lc.bXt (FF)V
      // 7d: goto 84
      // 80: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: aload 0
      // 85: invokevirtual sixtwo/bl.Et ()V
      // 88: aload 0
      // 89: getfield sixtwo/bl.vjKVl Lsixtwo/az;
      // 8c: aload 0
      // 8d: getfield sixtwo/bl.CEIOv Lsixtwo/lc;
      // 90: invokevirtual sixtwo/az.sZ (Lsixtwo/lc;)Lsixtwo/az;
      // 93: pop
      // 94: aload 0
      // 95: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 98: aload 1
      // 99: invokevirtual sixtwo/g.aL (Lsixtwo/lC;)V
      // 9c: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 9f: ifnonnull b0
      // a2: bipush 5
      // a3: anewarray 223
      // a6: invokestatic sixtwo/bl.EM ([Lsixtwo/iS;)V
      // a9: goto b0
      // ac: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // af: athrow
      // b0: return
   }

   private static int EQ(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8932;
      if (VgeZy[var3] == null) {
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
         long var5 = iSqCx[var3];
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
         Object[] var9 = (Object[])sBqsw.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               sBqsw.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bl", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         VgeZy[var3] = var15;
      }

      return VgeZy[var3];
   }

   @Override
   public g manager() {
      return this.lDPYv;
   }

   public al EC() {
      return this.ZmUwR;
   }

   public static iS[] EN() {
      return rxHWS;
   }

   private static CallSite ES(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ER".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bl" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public bi ED() {
      return this.cjnmJ;
   }

   public ah Ez() {
      return this.WOOwr;
   }

   public boolean EF() {
      return this.TCMij;
   }

   @Override
   public boolean onMouseDragged(double var1, double var3, mA var5, double var6, double var8) {
      return this.lDPYv.aP(var1, var3, var5, var6, var8);
   }

   @Override
   public boolean onCharTyped(char var1) {
      return this.lDPYv.aT(var1);
   }

   @Override
   public boolean onMouseClicked(double var1, double var3, mA var5) {
      return this.lDPYv.aN(var1, var3, var5);
   }

   @Override
   public boolean onKeyPressed(int param1, int param2, int param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bl.AGQWN J
      // 003: ldc2_w 13873581510973
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 00c: astore 6
      // 00e: iload 1
      // 00f: aload 6
      // 011: ifnonnull 06e
      // 014: sipush 2482
      // 017: ldc2_w 8696227825315521541
      // 01a: lload 4
      // 01c: lxor
      // 01d: invokedynamic u (IJ)I bsm=sixtwo/bl.ES (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 022: if_icmpne 068
      // 025: goto 02c
      // 028: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02b: athrow
      // 02c: aload 0
      // 02d: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 030: ldc_w sixtwo/bc
      // 033: invokevirtual sixtwo/g.ba (Ljava/lang/Class;)Ljava/util/Optional;
      // 036: aconst_null
      // 037: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 03a: checkcast sixtwo/bc
      // 03d: astore 7
      // 03f: aload 7
      // 041: aload 6
      // 043: ifnonnull 065
      // 046: ifnull 068
      // 049: goto 050
      // 04c: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04f: athrow
      // 050: aload 7
      // 052: invokevirtual sixtwo/bc.Bv ()Lsixtwo/ad;
      // 055: invokevirtual sixtwo/ad.ly ()V
      // 058: aload 7
      // 05a: bipush 0
      // 05b: invokevirtual sixtwo/bc.oj (Z)Lsixtwo/aj;
      // 05e: goto 065
      // 061: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: pop
      // 066: bipush 1
      // 067: ireturn
      // 068: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 06b: invokevirtual net/minecraft/class_310.method_74188 ()Z
      // 06e: aload 6
      // 070: ifnonnull 0b7
      // 073: ifeq 0ad
      // 076: goto 07d
      // 079: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: iload 1
      // 07e: aload 6
      // 080: ifnonnull 0b7
      // 083: goto 08a
      // 086: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: sipush 3701
      // 08d: ldc2_w 2994959173415445447
      // 090: lload 4
      // 092: lxor
      // 093: invokedynamic u (IJ)I bsm=sixtwo/bl.ES (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 098: if_icmpne 0ad
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 0
      // 0a3: invokevirtual sixtwo/bl.Er ()Lsixtwo/bc;
      // 0a6: pop
      // 0a7: bipush 1
      // 0a8: ireturn
      // 0a9: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: aload 0
      // 0ae: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 0b1: iload 1
      // 0b2: iload 2
      // 0b3: iload 3
      // 0b4: invokevirtual sixtwo/g.aS (III)Z
      // 0b7: aload 6
      // 0b9: ifnonnull 0d6
      // 0bc: ifeq 0cc
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: bipush 1
      // 0c7: ireturn
      // 0c8: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cb: athrow
      // 0cc: aload 0
      // 0cd: getfield sixtwo/bl.WOOwr Lsixtwo/ah;
      // 0d0: iload 1
      // 0d1: iload 2
      // 0d2: iload 3
      // 0d3: invokevirtual sixtwo/ah.dm (III)Z
      // 0d6: aload 6
      // 0d8: ifnonnull 0ec
      // 0db: ifeq 0eb
      // 0de: goto 0e5
      // 0e1: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e4: athrow
      // 0e5: bipush 1
      // 0e6: ireturn
      // 0e7: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ea: athrow
      // 0eb: iload 1
      // 0ec: aload 6
      // 0ee: ifnonnull 114
      // 0f1: sipush 24648
      // 0f4: ldc2_w 6967017233858481662
      // 0f7: lload 4
      // 0f9: lxor
      // 0fa: invokedynamic u (IJ)I bsm=sixtwo/bl.ES (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ff: if_icmpne 113
      // 102: goto 109
      // 105: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 108: athrow
      // 109: aload 0
      // 10a: invokevirtual sixtwo/bl.Ew ()V
      // 10d: bipush 1
      // 10e: ireturn
      // 10f: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: bipush 0
      // 114: ireturn
   }

   @Override
   public boolean onMouseReleased(double var1, double var3, mA var5) {
      return this.lDPYv.aO(var1, var3, var5);
   }

   @Override
   public boolean onMouseScrolled(double var1, double var3, double var5) {
      return this.lDPYv.aQ(var1, var3, var5);
   }

   @Override
   public void addOverlay(aj var1) {
      this.addOverlay(var1, true);
   }

   @Override
   public void addOverlay(aj param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 52048668780037
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: sipush 22170
      // 0f: ldc2_w 3718906122651749393
      // 12: lload 3
      // 13: lxor
      // 14: invokedynamic u (IJ)I bsm=sixtwo/bl.ES (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19: invokevirtual sixtwo/aj.sP (I)Lsixtwo/az;
      // 1c: bipush 1
      // 1d: invokevirtual sixtwo/az.sT (Z)Lsixtwo/az;
      // 20: pop
      // 21: astore 5
      // 23: aload 0
      // 24: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 27: aload 5
      // 29: ifnonnull 45
      // 2c: aload 1
      // 2d: invokevirtual sixtwo/g.aF (Lsixtwo/az;)Lsixtwo/az;
      // 30: pop
      // 31: iload 2
      // 32: ifne 41
      // 35: goto 3c
      // 38: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: return
      // 3d: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 0
      // 42: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 45: ldc_w sixtwo/aj
      // 48: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 4b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 50: astore 6
      // 52: aload 6
      // 54: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 59: ifeq a8
      // 5c: aload 6
      // 5e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 63: checkcast sixtwo/aj
      // 66: astore 7
      // 68: aload 7
      // 6a: aload 5
      // 6c: ifnonnull 83
      // 6f: aload 1
      // 70: if_acmpeq a3
      // 73: goto 7a
      // 76: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 7
      // 7c: goto 83
      // 7f: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: aload 5
      // 85: ifnonnull a2
      // 88: invokevirtual sixtwo/aj.tz ()Z
      // 8b: ifeq a3
      // 8e: goto 95
      // 91: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 94: athrow
      // 95: aload 7
      // 97: bipush 0
      // 98: invokevirtual sixtwo/aj.oj (Z)Lsixtwo/aj;
      // 9b: goto a2
      // 9e: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: pop
      // a3: aload 5
      // a5: ifnull 52
      // a8: return
   }

   @Override
   public void addTooltip(k param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 101364568890085
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: aload 0
      // 0c: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 0f: ldc_w sixtwo/k
      // 12: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 15: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 1a: astore 5
      // 1c: astore 4
      // 1e: aload 5
      // 20: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 25: ifeq 56
      // 28: aload 5
      // 2a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 2f: checkcast sixtwo/k
      // 32: astore 6
      // 34: aload 6
      // 36: invokevirtual sixtwo/k.cn ()Lsixtwo/az;
      // 39: aload 4
      // 3b: ifnonnull 64
      // 3e: aload 1
      // 3f: invokevirtual sixtwo/k.cn ()Lsixtwo/az;
      // 42: if_acmpne 51
      // 45: goto 4c
      // 48: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: return
      // 4d: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: aload 4
      // 53: ifnull 1e
      // 56: aload 1
      // 57: bipush 1
      // 58: invokevirtual sixtwo/k.sS (Z)Lsixtwo/az;
      // 5b: pop
      // 5c: aload 0
      // 5d: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 60: aload 1
      // 61: invokevirtual sixtwo/g.aF (Lsixtwo/az;)Lsixtwo/az;
      // 64: pop
      // 65: return
   }

   @Override
   public void addPopup(ap param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 124976861849980
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: sipush 2566
      // 0f: ldc2_w 9059082616130232307
      // 12: lload 2
      // 13: lxor
      // 14: invokedynamic u (IJ)I bsm=sixtwo/bl.ES (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19: invokevirtual sixtwo/ap.sP (I)Lsixtwo/az;
      // 1c: bipush 0
      // 1d: invokevirtual sixtwo/az.sT (Z)Lsixtwo/az;
      // 20: pop
      // 21: aload 0
      // 22: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 25: aload 1
      // 26: invokevirtual sixtwo/g.aF (Lsixtwo/az;)Lsixtwo/az;
      // 29: pop
      // 2a: aload 0
      // 2b: getfield sixtwo/bl.lDPYv Lsixtwo/g;
      // 2e: ldc_w sixtwo/ap
      // 31: invokevirtual sixtwo/g.aY (Ljava/lang/Class;)Ljava/util/List;
      // 34: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 39: astore 5
      // 3b: astore 4
      // 3d: aload 5
      // 3f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 44: ifeq ae
      // 47: aload 5
      // 49: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 4e: checkcast sixtwo/ap
      // 51: astore 6
      // 53: aload 6
      // 55: aload 4
      // 57: ifnonnull 6e
      // 5a: aload 1
      // 5b: if_acmpeq a9
      // 5e: goto 65
      // 61: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: aload 6
      // 67: goto 6e
      // 6a: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: invokevirtual sixtwo/ap.sN ()I
      // 71: aload 4
      // 73: ifnonnull 98
      // 76: ifle a9
      // 79: goto 80
      // 7c: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7f: athrow
      // 80: aload 6
      // 82: aload 4
      // 84: ifnonnull a8
      // 87: goto 8e
      // 8a: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8d: athrow
      // 8e: invokevirtual sixtwo/ap.tz ()Z
      // 91: goto 98
      // 94: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: ifne a9
      // 9b: aload 6
      // 9d: bipush 0
      // 9e: invokevirtual sixtwo/ap.oj (Z)Lsixtwo/aj;
      // a1: goto a8
      // a4: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: pop
      // a9: aload 4
      // ab: ifnull 3d
      // ae: return
   }

   public lc Ey() {
      return this.CEIOv;
   }

   @Override
   public void addPopupComponent(aj var1) {
      long var2 = AGQWN ^ 99584634313363L;
      var1.sP(ES<"u">(9009, 1342082021762303274L ^ var2)).sT(false);
      this.lDPYv.aF(var1);
   }

   public void method_25419() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 33036904850050
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/bl.VWsmm Z
      // 10: aload 3
      // 11: ifnonnull 37
      // 14: ifeq d1
      // 17: goto 1e
      // 1a: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/bl.Weytw Lsixtwo/rk;
      // 22: fconst_0
      // 23: invokevirtual sixtwo/rk.dhd (F)F
      // 26: pop
      // 27: aload 0
      // 28: getfield sixtwo/bl.Weytw Lsixtwo/rk;
      // 2b: invokevirtual sixtwo/rk.dhj ()F
      // 2e: fconst_0
      // 2f: fcmpg
      // 30: goto 37
      // 33: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: ifgt d1
      // 3a: getstatic sixtwo/ad.rmmkh Lsixtwo/ad;
      // 3d: aload 3
      // 3e: ifnonnull 60
      // 41: goto 48
      // 44: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: ifnull 61
      // 4b: goto 52
      // 4e: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: getstatic sixtwo/ad.rmmkh Lsixtwo/ad;
      // 55: bipush 0
      // 56: invokevirtual sixtwo/ad.lQ (Z)Lsixtwo/ad;
      // 59: goto 60
      // 5c: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5f: athrow
      // 60: pop
      // 61: aload 0
      // 62: invokespecial sixtwo/av.method_25419 ()V
      // 65: aload 0
      // 66: aload 3
      // 67: ifnonnull 92
      // 6a: getfield sixtwo/bl.ncerH Z
      // 6d: ifeq d1
      // 70: goto 77
      // 73: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 7a: checkcast mixin/accessors/MinecraftAccessor
      // 7d: getstatic net/minecraft/class_338$class_11732.field_62004 Lnet/minecraft/class_338$class_11732;
      // 80: invokeinterface mixin/accessors/MinecraftAccessor.callOpenChatScreen (Lnet/minecraft/class_338$class_11732;)V 2
      // 85: aload 0
      // 86: bipush 0
      // 87: putfield sixtwo/bl.ncerH Z
      // 8a: aload 0
      // 8b: goto 92
      // 8e: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 91: athrow
      // 92: getfield sixtwo/bl.wraGo Lsixtwo/aJ;
      // 95: invokevirtual sixtwo/aJ.we ()V
      // 98: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 9b: astore 4
      // 9d: aload 4
      // 9f: invokevirtual sixtwo/cq.Rw ()Ljava/util/List;
      // a2: invokeinterface java/util/List.isEmpty ()Z 1
      // a7: ifeq af
      // aa: return
      // ab: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: ldc_w 90.0
      // b2: fstore 5
      // b4: invokestatic sixtwo/rm.diq ()Lnet/minecraft/class_241;
      // b7: astore 6
      // b9: aload 4
      // bb: fload 5
      // bd: aload 6
      // bf: getfield net/minecraft/class_241.field_1343 F
      // c2: invokestatic sixtwo/jf.bAH (FF)F
      // c5: aload 6
      // c7: getfield net/minecraft/class_241.field_1342 F
      // ca: ldc_w 4.0
      // cd: fdiv
      // ce: invokevirtual sixtwo/cq.Ru (FF)V
      // d1: return
   }

   public void method_25426() {
      this.TCMij = false;
      this.VWsmm = false;
   }

   public void method_25393() {
      this.si();
      this.method_25419();
   }

   public static void Eu() {
      long var0 = AGQWN ^ 128004762571458L;

      try {
         if (rD.dlmvG.field_1687 == null) {
            return;
         }
      } catch (MatchException var3) {
         throw EO(var3);
      }

      bl var2 = Ex();
      var2.VWsmm = false;
      var2.Weytw.dhg();
      rD.dlmvG.method_1507(var2);
   }

   public static bl Ex() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bl.AGQWN J
      // 03: ldc2_w 63563713356661
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/bl.EN ()[Lsixtwo/iS;
      // 0b: astore 2
      // 0c: getstatic sixtwo/bl.VyQNu Lsixtwo/bl;
      // 0f: aload 2
      // 10: ifnonnull 2f
      // 13: ifnonnull 2c
      // 16: goto 1d
      // 19: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: new sixtwo/bl
      // 20: dup
      // 21: invokespecial sixtwo/bl.<init> ()V
      // 24: pop
      // 25: goto 2c
      // 28: invokestatic sixtwo/bl.EO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getstatic sixtwo/bl.VyQNu Lsixtwo/bl;
      // 2f: areturn
   }

   public void Eq(bd var1) {
      var1.sP(0).sT(false);
      this.lDPYv.aF(var1);
   }

   public aJ EB() {
      return this.wraGo;
   }

   private static MatchException EO(MatchException var0) {
      return var0;
   }

   public bc Er() {
      bc var1 = this.lDPYv.aX(bc.class, () -> {
         long var0 = AGQWN ^ 65293512233214L;
         bc var2 = new bc();
         var2.sP(ES<"u">(10990, 4958198623473141404L ^ var0)).sT(true);
         return var2;
      });
      var1.Bv().lx();
      var1.oj(true);
      return var1;
   }

   public void Es() {
      this.ncerH = true;
   }

   private void Ep(lC var1) {
      ii var2 = rD.dlM();
      float var3 = Math.min(1.0F, this.Weytw.dhj());
      jF.bHz(1.0F, 1.0F, 1.0F, var3);
      jH.bId(var1, this.CEIOv.bXF() + this.CEIOv.bXH() / 2.0F, this.CEIOv.bXG() + this.CEIOv.bXI() / 2.0F, this.sf());
      var1.cej(this.CEIOv.bXF(), this.CEIOv.bXG(), this.CEIOv.bXH(), this.CEIOv.bXI(), 5.0F, ld.all(11.0F), this.Weytw.dhj());
      var1.cdm(
         this.CEIOv.bXF(),
         this.CEIOv.bXG(),
         this.CEIOv.bXH(),
         this.CEIOv.bXI(),
         5.0F,
         ld.all(6.0F + 5.0F * var3),
         var2.bjd().coa(255.0F * var3).coc(var2.bje(), 0.3F).coc(var2.bjd().cob(0.75F), var3)
      );
      float var4 = 7.0F;
      float var5 = 28.0F;
      float var6 = 100.0F;
      float var7 = var5 + 2.0F * var4;
      this.wraGo.sW(this.CEIOv.bXF(), this.CEIOv.bXG());
      this.wraGo.sX(this.CEIOv.bXH() - var6, this.CEIOv.bXI());
      this.wraGo.su(var1);
      float var8 = this.CEIOv.bXH() - var6 - 10.0F;
      this.ZmUwR.sW(this.CEIOv.bXF() + var6, this.CEIOv.bXG() + var4);
      this.ZmUwR.sX(var8, var5);
      this.ZmUwR.su(var1);
      this.uuFQh.sW(this.ZmUwR.tc() - this.uuFQh.kN() - 7.0F, this.ZmUwR.ts() + jf.bAH(this.uuFQh.dn(), var5));
      this.uuFQh.su(var1);
      this.cjnmJ.sW(this.CEIOv.bXF() + var6, this.CEIOv.bXG() + var7);
      this.cjnmJ.sX(var8, this.CEIOv.bXI() - var7);
      this.cjnmJ.su(var1);
      jH.bIf();
      jF.bHz(1.0F, 1.0F, 1.0F, 1.0F);
   }

   public void Ew() {
      this.VWsmm = true;
      this.lDPYv.bb(aj.class);
      this.lDPYv.bb(bd.class);
      this.lDPYv.bb(aR.class);
   }

   public static void Ev() {
      Ex().Ew();
   }

   public ad EA() {
      return this.TUFvs;
   }

   private void Et() {
      class_241 var1 = rm.diq();
      float var2 = 0.0F;
      float var3 = 0.0F;
      float var4 = Math.max(0.0F, var1.field_1343 - this.CEIOv.bXH());
      float var5 = Math.max(0.0F, var1.field_1342 - this.CEIOv.bXI());
      this.CEIOv.bXt(Math.clamp(this.CEIOv.bXF(), var2, var4), Math.clamp(this.CEIOv.bXG(), var3, var5));
   }

   public sixtwo.R EI() {
      return this.uuFQh;
   }

   public float EG() {
      return this.bvjoR;
   }

   public float EH() {
      return this.dKaMJ;
   }

   private static String EP(byte[] var0) {
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

   private static int ER(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = EQ(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public az EE() {
      return this.vjKVl;
   }
}
