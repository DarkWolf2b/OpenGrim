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
import net.minecraft.class_1799;
import net.minecraft.class_2248;

public class bJ extends bS {
   private static boolean iJFTz;
   private static final long WXZJW = gb.aYR(6643231901512878892L, 9161461381816758708L, MethodHandles.lookup().lookupClass()).a(273006904077945L);
   private static final long[] qGJPS;
   private static final Integer[] NuZfs;
   private static final Map tHMUD = new HashMap(13);

   public bJ(cv var1) {
      long var2 = WXZJW ^ 81807929539716L;
      int[] var10002 = new int[MR<"z">(30279, 3745302152968257255L ^ var2)];
      var10002[0] = MR<"z">(5532, 2563882677034769727L ^ var2);
      var10002[1] = MR<"z">(14897, 6292369279727268501L ^ var2);
      var10002[2] = MR<"z">(18524, 5706287512533565685L ^ var2);
      var10002[3] = MR<"z">(16354, 2005956847734847308L ^ var2);
      var10002[4] = MR<"z">(17196, 5254473848780524429L ^ var2);
      var10002[5] = MR<"z">(17577, 7896894662041340942L ^ var2);
      var10002[MR<"z">(11775, 7090112959941109076L ^ var2)] = MR<"z">(22658, 2548015563349233696L ^ var2);
      var10002[MR<"z">(7521, 7571187402344584644L ^ var2)] = MR<"z">(18517, 7600279857235788007L ^ var2);
      var10002[MR<"z">(20934, 266208275068623221L ^ var2)] = MR<"z">(11477, 1424094224080659578L ^ var2);
      var10002[MR<"z">(792, 293162821992991657L ^ var2)] = MR<"z">(6559, 5399601749029081397L ^ var2);
      var10002[MR<"z">(8234, 4929550882442963084L ^ var2)] = MR<"z">(7001, 436265772479173620L ^ var2);
      var10002[MR<"z">(13444, 8049942358484515880L ^ var2)] = MR<"z">(615, 122286017704938191L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var0 = WXZJW ^ 40200051608194L;
      ML(true);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[19];
      int var5 = 0;
      String var6 = "¾úÔòûÓ¼\u008d\u0087\u00893-óq1Æêðd\u0095Ò-ø·\u0004\u0019\u0015ô\u008b\u008f&è\u0085oêZ0·9¤\u0096\u0007Ñø0õ\u0090O#î:ÁbÆ¿N\u00adÇÛV\u008e½$B©¢:Èìjk´¶?òR\u00997É\u0084\u0007Ù\u0099wc|\u009b\"\u0013Å#\tÓ\u009f%Gg´öÇ×â\u0086%Í(7x\u0081í\u008b<ÂÅî#\u0007ðÿ\u0084~\u0097ÖS\u0091Õ\u007fú\u0091»¹¿ÄÅ\u000fÚ";
      int var7 = "¾úÔòûÓ¼\u008d\u0087\u00893-óq1Æêðd\u0095Ò-ø·\u0004\u0019\u0015ô\u008b\u008f&è\u0085oêZ0·9¤\u0096\u0007Ñø0õ\u0090O#î:ÁbÆ¿N\u00adÇÛV\u008e½$B©¢:Èìjk´¶?òR\u00997É\u0084\u0007Ù\u0099wc|\u009b\"\u0013Å#\tÓ\u009f%Gg´öÇ×â\u0086%Í(7x\u0081í\u008b<ÂÅî#\u0007ðÿ\u0084~\u0097ÖS\u0091Õ\u007fú\u0091»¹¿ÄÅ\u000fÚ"
         .length();
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
                     qGJPS = var8;
                     NuZfs = new Integer[19];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u001f*ñ\u0014+S+,2r\u0099]RIM\u008a";
                  var7 = "\u001f*ñ\u0014+S+,2r\u0099]RIM\u008a".length();
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
   public boolean MH() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bJ.WXZJW J
      // 03: ldc2_w 50005646930534
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: istore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 12: ifnonnull 1b
      // 15: bipush 0
      // 16: ireturn
      // 17: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 1e: ldc sixtwo/dI
      // 20: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 23: checkcast sixtwo/dI
      // 26: astore 4
      // 28: aload 4
      // 2a: invokevirtual sixtwo/dI.bag ()Z
      // 2d: iload 3
      // 2e: ifne 56
      // 31: ifeq 79
      // 34: goto 3b
      // 37: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 4
      // 3d: iload 3
      // 3e: ifne 5b
      // 41: goto 48
      // 44: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: invokevirtual sixtwo/dI.alW ()Lsixtwo/ct;
      // 4b: bipush 2
      // 4c: invokevirtual sixtwo/ct.SQ (I)Z
      // 4f: goto 56
      // 52: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: ifne 79
      // 59: aload 4
      // 5b: invokevirtual sixtwo/dI.amm ()Lsixtwo/mB;
      // 5e: ifnull 79
      // 61: aload 0
      // 62: aload 4
      // 64: invokevirtual sixtwo/bJ.MK (Lsixtwo/dI;)Lnet/minecraft/class_2248;
      // 67: ifnull 79
      // 6a: goto 71
      // 6d: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 70: athrow
      // 71: bipush 1
      // 72: goto 7a
      // 75: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: bipush 0
      // 7a: ireturn
   }

   private static MatchException MO(MatchException var0) {
      return var0;
   }

   @Override
   public void MG(lC var1, ii var2) {
      long var3 = WXZJW ^ 37911421012137L;
      dI var5 = rD.dlJ().aZx(dI.class);
      class_2248 var6 = this.MK(var5);

      try {
         if (var6 == null) {
            return;
         }
      } catch (MatchException var30) {
         throw MO(var30);
      }

      bU var7 = rD.dlK().RC();
      float var8 = var7.RW();
      float var9 = var7.RX();
      lq var10 = lE.WTzbi.bYM(7.0F);
      lq var11 = lE.SVnNc.bYM(6.0F);
      mG var12 = var2.bjf();
      String var13 = var6.method_9518().getString();
      String var14 = this.MJ() + "%";
      float var15 = 255.0F * this.dExGi.dhj();
      float var16 = 20.0F * this.dExGi.dhj();
      float var17 = 4.0F;
      float var18 = 4.0F;
      float var19 = 10.0F;
      float var20 = var8 - 16.0F + var16;
      float var21 = var9 + 2.5F;
      float var22 = var20 + var19 + var18;
      float var23 = var10.cao(var13);
      float var24 = var11.cao(var14);
      this.fGWTH.NU(var19 + var23 + var24 + var18 * 2.0F + var17 * 2.0F, 15.0F);
      var1.cdg(var20, var21, var19, var19, ld.all(3.5F), var12.coa(90.0F * this.dExGi.dhj()));
      class_1799 var25 = var6.method_8389().method_7854();
      if (!var25.method_7960()) {
         float var26 = 0.45F;
         float var27 = 16.0F * var26;
         float var28 = var20 + (var19 - var27) * 0.5F;
         float var29 = var21 + (var19 - var27) * 0.5F;
         var1.cea(var25, var28, var29, var26).bGv();
      }

      float var31 = var9 + 5.0F;
      var1.cez(var10, var13, var22, var31, var2.bjb().coa(var15));
      float var32 = var9 + jf.bAH(var11.cat(), 15.0F);
      var1.cez(var11, var14, var22 + var23 + var18, var32, var12.coa(var15));
   }

   @Override
   public mG MI() {
      return rD.dlM().bjf();
   }

   public static void ML(boolean var0) {
      iJFTz = var0;
   }

   public static boolean MN() {
      boolean var0 = MM();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw MO(var1);
      }
   }

   public static boolean MM() {
      return iJFTz;
   }

   private static CallSite MR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("MQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bJ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private class_2248 MK(dI param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bJ.WXZJW J
      // 03: ldc2_w 102418383076692
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 13: ifnonnull 1c
      // 16: aconst_null
      // 17: areturn
      // 18: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b: athrow
      // 1c: aload 1
      // 1d: invokevirtual sixtwo/dI.amm ()Lsixtwo/mB;
      // 20: astore 5
      // 22: aload 5
      // 24: ifnonnull 2d
      // 27: aconst_null
      // 28: areturn
      // 29: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 30: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 33: aload 5
      // 35: invokevirtual sixtwo/mB.cnb ()Lnet/minecraft/class_2338;
      // 38: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 3b: astore 6
      // 3d: aload 6
      // 3f: iload 4
      // 41: ifne 5a
      // 44: invokevirtual net/minecraft/class_2680.method_26215 ()Z
      // 47: ifne 5e
      // 4a: goto 51
      // 4d: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: aload 6
      // 53: goto 5a
      // 56: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 5d: areturn
      // 5e: aload 1
      // 5f: invokevirtual sixtwo/dI.aml ()Lnet/minecraft/class_2248;
      // 62: areturn
   }

   private static int MQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = MP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int MP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24134;
      if (NuZfs[var3] == null) {
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
         long var5 = qGJPS[var3];
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
         Object[] var9 = (Object[])tHMUD.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               tHMUD.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bJ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NuZfs[var3] = var15;
      }

      return NuZfs[var3];
   }

   private int MJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bJ.WXZJW J
      // 03: ldc2_w 15483526089396
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: fconst_0
      // 0c: fstore 4
      // 0e: istore 3
      // 0f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 12: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 15: iload 3
      // 16: ifne 30
      // 19: ifnull 3a
      // 1c: goto 23
      // 1f: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 26: getfield net/minecraft/class_310.field_1761 Lnet/minecraft/class_636;
      // 29: goto 30
      // 2c: invokestatic sixtwo/bJ.MO (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: checkcast mixin/accessors/MultiPlayerGameModeAccessor
      // 33: invokeinterface mixin/accessors/MultiPlayerGameModeAccessor.getDestroyProgress ()F 1
      // 38: fstore 4
      // 3a: fload 4
      // 3c: fconst_0
      // 3d: fconst_1
      // 3e: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 41: ldc_w 100.0
      // 44: fmul
      // 45: invokestatic java/lang/Math.round (F)I
      // 48: ireturn
   }
}
