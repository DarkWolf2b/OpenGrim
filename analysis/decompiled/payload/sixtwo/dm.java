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

public class dm extends gg implements lG {
   cC VCZOE;
   private static final long Ghvyo = gb.aYR(-7113462162564744883L, -507166634579139577L, MethodHandles.lookup().lookupClass()).a(139596413189431L);
   private static final String jfMvl;
   private static final long[] WrUNj;
   private static final Integer[] FDPXW;
   private static final Map RdvpA;

   public dm() {
      long var1 = Ghvyo ^ 68946521484217L;
      super(gf.aZL(agZ<"l">(17221, 2157584403125516744L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[agZ<"l">(12148, 8635617604071773688L ^ var1)];
      var10004[0] = agZ<"l">(17211, 145106511023290803L ^ var1);
      var10004[1] = agZ<"l">(8857, 6221051602721527826L ^ var1);
      var10004[2] = agZ<"l">(15883, 5494123056283010177L ^ var1);
      var10004[3] = agZ<"l">(7351, 708793972614882873L ^ var1);
      var10004[4] = agZ<"l">(23689, 6560999444054353408L ^ var1);
      var10004[5] = agZ<"l">(19150, 6896848627985035329L ^ var1);
      this.VCZOE = new cC(this, mr.clS(var10004)).Vy(0.1F).Vw(0.4F).Vx(1.6F).VA(1.2F).Vz(jfMvl);
   }

   static {
      long var11 = Ghvyo ^ 93131619793499L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u0081\u0005ÿo\u0083;á\u0002".getBytes("ISO-8859-1"));
      String var22 = agW(var15).intern();
      int var10001 = -1;
      jfMvl = var22;
      RdvpA = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[8];
      int var3 = 0;
      String var4 = "P\u0089Y5\u0086í8¼\u0096d·<\u0082À8éYÝâf#!\u0014×\u009bÙ½û¨cÁÙ\u0086V/hÄé$\u0013¤,BÍ'Ë\u0088t";
      int var5 = "P\u0089Y5\u0086í8¼\u0096d·<\u0082À8éYÝâf#!\u0014×\u009bÙ½û¨cÁÙ\u0086V/hÄé$\u0013¤,BÍ'Ë\u0088t".length();
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
                     WrUNj = var6;
                     FDPXW = new Integer[8];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "ø\u0012\u0084:ï]ù¦3\u0018,\u001ai<E´";
                  var5 = "ø\u0012\u0084:ï]ù¦3\u0018,\u001ai<E´".length();
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

   private static String agW(byte[] var0) {
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

   private static CallSite agZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("agY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dm" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int agX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 19732;
      if (FDPXW[var3] == null) {
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
         long var5 = WrUNj[var3];
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
         Object[] var9 = (Object[])RdvpA.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               RdvpA.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dm", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         FDPXW[var3] = var15;
      }

      return FDPXW[var3];
   }

   private static MatchException agV(MatchException var0) {
      return var0;
   }

   @hG
   public void agU(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dm.Ghvyo J
      // 03: ldc2_w 125705536402598
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dm.bab ()Z
      // 11: ifne 19
      // 14: return
      // 15: invokestatic sixtwo/dm.agV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18: athrow
      // 19: aload 1
      // 1a: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 1d: astore 5
      // 1f: getstatic sixtwo/dm.AswNN Lsixtwo/kK;
      // 22: invokevirtual sixtwo/kK.startBatch ()V
      // 25: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 28: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 2b: invokevirtual net/minecraft/class_638.method_18456 ()Ljava/util/List;
      // 2e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 33: astore 6
      // 35: aload 6
      // 37: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3c: ifeq c2
      // 3f: aload 6
      // 41: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 46: checkcast net/minecraft/class_742
      // 49: astore 7
      // 4b: aload 4
      // 4d: ifnonnull c8
      // 50: aload 4
      // 52: ifnonnull 7a
      // 55: goto 5c
      // 58: invokestatic sixtwo/dm.agV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 5f: aload 7
      // 61: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 64: ifeq bd
      // 67: goto 6e
      // 6a: invokestatic sixtwo/dm.agV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 5
      // 70: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 73: goto 7a
      // 76: invokestatic sixtwo/dm.agV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 7
      // 7c: aload 1
      // 7d: invokevirtual sixtwo/go$sX.bbi ()F
      // 80: invokevirtual net/minecraft/class_742.method_30950 (F)Lnet/minecraft/class_243;
      // 83: dconst_0
      // 84: aload 7
      // 86: invokevirtual net/minecraft/class_742.method_17682 ()F
      // 89: aload 0
      // 8a: getfield sixtwo/dm.VCZOE Lsixtwo/cC;
      // 8d: invokevirtual sixtwo/cC.VB ()F
      // 90: fadd
      // 91: f2d
      // 92: dconst_0
      // 93: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 96: astore 8
      // 98: aload 5
      // 9a: aload 8
      // 9c: invokestatic sixtwo/jI.bIs (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;)V
      // 9f: getstatic sixtwo/dm.AswNN Lsixtwo/kK;
      // a2: aload 5
      // a4: dconst_0
      // a5: dconst_0
      // a6: dconst_0
      // a7: ldc 0.1
      // a9: invokestatic sixtwo/kE.bTf (Lnet/minecraft/class_4587;DDDF)Lsixtwo/kE$um;
      // ac: getstatic sixtwo/jk.jEkxo Lsixtwo/mG;
      // af: invokevirtual sixtwo/kE$um.dti (Lsixtwo/mG;)Lsixtwo/kE$um;
      // b2: invokevirtual sixtwo/kE$um.dtj ()Lsixtwo/kE;
      // b5: invokevirtual sixtwo/kK.bUp (Lsixtwo/kE;)V
      // b8: aload 5
      // ba: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // bd: aload 4
      // bf: ifnull 35
      // c2: getstatic sixtwo/dm.AswNN Lsixtwo/kK;
      // c5: invokevirtual sixtwo/kK.endBatch ()V
      // c8: goto d6
      // cb: astore 9
      // cd: getstatic sixtwo/dm.AswNN Lsixtwo/kK;
      // d0: invokevirtual sixtwo/kK.endBatch ()V
      // d3: aload 9
      // d5: athrow
      // d6: return
   }

   private static int agY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = agX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
