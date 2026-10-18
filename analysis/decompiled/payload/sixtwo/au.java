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

public class au extends az {
   private final rk HxBzM;
   private final ri pNvvb;
   private at VhaVC;
   private boolean qSAqB;
   private static final long vzfUG = gb.aYR(3384193007651451487L, -2449311745717754863L, MethodHandles.lookup().lookupClass()).a(260161488895751L);
   private static final String kheUW;
   private static final long[] hlCPm;
   private static final Integer[] adMRv;
   private static final Map safNd;

   public au(float var1) {
      long var2 = vzfUG ^ 83211116363395L;
      super();
      this.HxBzM = new rk(se<"n">(19508, 5386202465332707990L ^ var2)).dhs(rj.UPXqT);
      this.BcpIo = var1;
      this.WjISQ = var1;
      ig var4 = rD.dlM().bjG();

      au var10000;
      ri var10001;
      ri var10002;
      int var10003;
      mG var10004;
      label17: {
         try {
            var10000 = this;
            var10001 = new ri;
            var10002 = var10001;
            var10003 = se<"n">(32661, 2398472926541181238L ^ var2);
            if (this.qSAqB) {
               var10004 = var4.bis();
               break label17;
            }
         } catch (MatchException var5) {
            throw sa(var5);
         }

         var10004 = var4.bir();
      }

      var10002./* $VF: Unable to resugar constructor */<init>(var10003, var10004);
      var10000.pNvvb = var10001;
   }

   static {
      long var11 = vzfUG ^ 27415997260554L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u0007\t\u0089\u0006GÄ¡ÅüwFbvSÎ\u0000".getBytes("ISO-8859-1"));
      String var19 = sb(var15).intern();
      int var10001 = -1;
      kheUW = var19;
      safNd = new HashMap(13);
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
      String var4 = "`\u0080òv\u0087¢Ïn\t\b\u000eÿÁ½jÞ";
      int var5 = "`\u0080òv\u0087¢Ïn\t\b\u000eÿÁ½jÞ".length();
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

      hlCPm = var6;
      adMRv = new Integer[2];
   }

   private static MatchException sa(MatchException var0) {
      return var0;
   }

   private static String sb(byte[] var0) {
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

   private static int sc(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16790;
      if (adMRv[var3] == null) {
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
         long var5 = hlCPm[var3];
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
         Object[] var9 = (Object[])safNd.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               safNd.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/au", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         adMRv[var3] = var15;
      }

      return adMRv[var3];
   }

   private static CallSite se(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("sd".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/au" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int sd(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = sc(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   public boolean dk(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/au.vzfUG J
      // 03: ldc2_w 41658569004878
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0c: astore 8
      // 0e: aload 0
      // 0f: dload 1
      // 10: dload 3
      // 11: invokevirtual sixtwo/au.tg (DD)Z
      // 14: aload 8
      // 16: ifnull 83
      // 19: ifeq 7b
      // 1c: goto 23
      // 1f: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: aload 5
      // 25: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 28: if_acmpne 7b
      // 2b: goto 32
      // 2e: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: aload 0
      // 34: getfield sixtwo/au.qSAqB Z
      // 37: aload 8
      // 39: ifnull 4e
      // 3c: goto 43
      // 3f: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: ifne 51
      // 46: goto 4d
      // 49: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: bipush 1
      // 4e: goto 52
      // 51: bipush 0
      // 52: putfield sixtwo/au.qSAqB Z
      // 55: aload 0
      // 56: getfield sixtwo/au.VhaVC Lsixtwo/at;
      // 59: aload 8
      // 5b: ifnull 73
      // 5e: ifnull 79
      // 61: goto 68
      // 64: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 0
      // 69: getfield sixtwo/au.VhaVC Lsixtwo/at;
      // 6c: goto 73
      // 6f: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: aload 0
      // 74: invokeinterface sixtwo/at.run (Lsixtwo/au;)V 2
      // 79: bipush 1
      // 7a: ireturn
      // 7b: aload 0
      // 7c: dload 1
      // 7d: dload 3
      // 7e: aload 5
      // 80: invokespecial sixtwo/az.dk (DDLsixtwo/mA;)Z
      // 83: ireturn
   }

   public au rV(boolean var1) {
      this.qSAqB = var1;
      return this;
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
      // 00: getstatic sixtwo/au.vzfUG J
      // 03: ldc2_w 132451097428874
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/aj.oA ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/au.pNvvb Lsixtwo/ri;
      // 11: aload 0
      // 12: aload 4
      // 14: ifnull 33
      // 17: getfield sixtwo/au.qSAqB Z
      // 1a: ifeq 32
      // 1d: goto 24
      // 20: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: getfield sixtwo/au.CtPwV Lsixtwo/ii;
      // 28: invokevirtual sixtwo/ii.bjf ()Lsixtwo/mG;
      // 2b: goto 39
      // 2e: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: getfield sixtwo/au.CtPwV Lsixtwo/ii;
      // 36: invokevirtual sixtwo/ii.bje ()Lsixtwo/mG;
      // 39: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 3c: pop
      // 3d: aload 0
      // 3e: getfield sixtwo/au.HxBzM Lsixtwo/rk;
      // 41: aload 0
      // 42: getfield sixtwo/au.qSAqB Z
      // 45: invokevirtual sixtwo/rk.dhc (Z)V
      // 48: aload 0
      // 49: getfield sixtwo/au.pNvvb Lsixtwo/ri;
      // 4c: invokevirtual sixtwo/ri.dfU ()Lsixtwo/mG;
      // 4f: aload 0
      // 50: getfield sixtwo/au.qSAqB Z
      // 53: ifeq 5f
      // 56: ldc 255.0
      // 58: goto 61
      // 5b: invokestatic sixtwo/au.sa (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: ldc 155.0
      // 61: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 64: astore 5
      // 66: aload 1
      // 67: aload 0
      // 68: getfield sixtwo/au.MCnYt F
      // 6b: aload 0
      // 6c: getfield sixtwo/au.pNyTQ F
      // 6f: aload 0
      // 70: getfield sixtwo/au.BcpIo F
      // 73: aload 0
      // 74: getfield sixtwo/au.WjISQ F
      // 77: ldc 1.5
      // 79: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 7c: aload 5
      // 7e: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 81: aload 0
      // 82: getfield sixtwo/au.HxBzM Lsixtwo/rk;
      // 85: invokevirtual sixtwo/rk.dhj ()F
      // 88: fstore 6
      // 8a: aload 0
      // 8b: getfield sixtwo/au.CtPwV Lsixtwo/ii;
      // 8e: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 91: ldc 255.0
      // 93: fload 6
      // 95: fmul
      // 96: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 99: astore 7
      // 9b: ldc 6.0
      // 9d: fstore 8
      // 9f: aload 0
      // a0: getfield sixtwo/au.MCnYt F
      // a3: fload 8
      // a5: aload 0
      // a6: getfield sixtwo/au.BcpIo F
      // a9: invokestatic sixtwo/jf.bAH (FF)F
      // ac: fadd
      // ad: fstore 9
      // af: aload 0
      // b0: getfield sixtwo/au.pNyTQ F
      // b3: fload 8
      // b5: aload 0
      // b6: getfield sixtwo/au.WjISQ F
      // b9: invokestatic sixtwo/jf.bAH (FF)F
      // bc: fadd
      // bd: fstore 10
      // bf: aload 1
      // c0: aload 0
      // c1: getfield sixtwo/au.MCnYt F
      // c4: aload 0
      // c5: getfield sixtwo/au.BcpIo F
      // c8: ldc 0.5
      // ca: fmul
      // cb: fadd
      // cc: aload 0
      // cd: getfield sixtwo/au.pNyTQ F
      // d0: aload 0
      // d1: getfield sixtwo/au.WjISQ F
      // d4: ldc 0.5
      // d6: fmul
      // d7: fadd
      // d8: fload 6
      // da: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // dd: aload 1
      // de: getstatic sixtwo/au.kheUW Ljava/lang/String;
      // e1: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // e4: fload 9
      // e6: fload 10
      // e8: fload 8
      // ea: fload 8
      // ec: aload 7
      // ee: invokevirtual sixtwo/lC.cdW (Lnet/minecraft/class_1044;FFFFLsixtwo/mG;)V
      // f1: invokestatic sixtwo/jH.bIf ()V
      // f4: return
   }

   public au rU(at var1) {
      this.VhaVC = var1;
      return this;
   }

   public boolean rZ() {
      return this.qSAqB;
   }

   public rk rW() {
      return this.HxBzM;
   }

   public ri rX() {
      return this.pNvvb;
   }

   public at rY() {
      return this.VhaVC;
   }
}
