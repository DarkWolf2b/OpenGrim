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
import net.minecraft.class_1657;

public class bM extends bS {
   private class_1657 BChTb;
   private static final long wgjAG = gb.aYR(492535554697354735L, -6085061503076846657L, MethodHandles.lookup().lookupClass()).a(174947226645567L);
   private static final long[] GvhUT;
   private static final Integer[] jriia;
   private static final Map xzNLw = new HashMap(13);

   public bM(cv var1) {
      long var2 = wgjAG ^ 11538316727890L;
      int[] var10002 = new int[Ns<"x">(31088, 5718994469664530350L ^ var2)];
      var10002[0] = Ns<"x">(21757, 9125094867787854376L ^ var2);
      var10002[1] = Ns<"x">(26933, 2283209376555405308L ^ var2);
      var10002[2] = Ns<"x">(16993, 7583280870761309346L ^ var2);
      var10002[3] = Ns<"x">(4673, 1053058983273985182L ^ var2);
      var10002[4] = Ns<"x">(15651, 5898439624030247915L ^ var2);
      var10002[5] = Ns<"x">(22638, 3243741323292360381L ^ var2);
      var10002[Ns<"x">(17016, 2872055026437629092L ^ var2)] = Ns<"x">(5820, 3247997058040393835L ^ var2);
      var10002[Ns<"x">(20971, 8864610515966572349L ^ var2)] = Ns<"x">(13672, 2485367836294927277L ^ var2);
      var10002[Ns<"x">(20827, 8501676439670339484L ^ var2)] = Ns<"x">(12381, 5244144541019362962L ^ var2);
      var10002[Ns<"x">(9462, 6808795073906033206L ^ var2)] = Ns<"x">(10684, 4082167154101899110L ^ var2);
      var10002[Ns<"x">(4165, 3955536007265547915L ^ var2)] = Ns<"x">(15895, 2616457700331051215L ^ var2);
      var10002[Ns<"x">(3247, 2693592285188844110L ^ var2)] = Ns<"x">(15116, 8260111303483186652L ^ var2);
      var10002[Ns<"x">(22829, 1201298474456301564L ^ var2)] = Ns<"x">(14690, 1133993248550313858L ^ var2);
      var10002[Ns<"x">(9901, 9172333389680230496L ^ var2)] = Ns<"x">(10972, 7415695277203082245L ^ var2);
      var10002[Ns<"x">(2578, 6241817901500361950L ^ var2)] = Ns<"x">(27690, 6001412866140179168L ^ var2);
      var10002[Ns<"x">(19653, 3336431638552160798L ^ var2)] = Ns<"x">(31899, 4557796041079593551L ^ var2);
      var10002[Ns<"x">(27843, 4930494790565300741L ^ var2)] = Ns<"x">(12269, 3506587675314211120L ^ var2);
      var10002[Ns<"x">(15841, 8817618698075167525L ^ var2)] = Ns<"x">(31899, 4557796041079593551L ^ var2);
      var10002[Ns<"x">(27710, 5776021563771030252L ^ var2)] = Ns<"x">(27259, 8779953073534438576L ^ var2);
      var10002[Ns<"x">(27161, 4394363190621965528L ^ var2)] = Ns<"x">(28505, 6178546390790900123L ^ var2);
      super(var1, mr.clS(var10002));
   }

   static {
      long var0 = wgjAG ^ 57906051530428L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[34];
      int var5 = 0;
      String var6 = "Q\u0018├śW├╣b\u0002├│├Ě:m┬Â┬Ě9f┬ą├ĽG\u0002T├ź\u0013T\u0099\u008b\u0096Zw\u0089:\u000f┬╗├á├▓├Ź\u000b┬¬├Ž3!\u0095┬Ą{┬ó\u001f┬Č~\u0083\u001cS├Č├úU\u0010z├┐2\u0012├Ć\u0004┬Ę'[┬»\u0098\u001d\u0002├Ť├ĺx├â/#:\u008d\u0090D\u0093┬║'\u0096├ę├¬\u0080├Ť├ęG1NsMD\u008cD├│I\\├Ľ\u009eZ-├íT\u0086v\u001bT├ą\u001dA├ŐE├ú├śWrh├í=&&r\u009a]├ś;W)C├¬.<\u009d\u0090y\u009dj\u008alT\u0013W├í├┤├ą├Ä\u0084├ŁM\u0094b&:U>\u0088\u0086├ç\u001b\u0002├▓\u008a\u001b\u000f┬úmj├É├╣├ů├ę}BQ\u0003~├Ć├ć├┐├»|\u008b┬Č\u008f├í\u0085┬ú┬á\u009a\u0016\u009f┬╝├Ć├ČO&\u000b\u0003├ł\u009b├Ť)├╗├ę├Ę├Ő\u0083\u0091U>┬«n\u001a├Ę┬ž┬╣\u001e:\u0080┬┐{├č┬ź`├î├×├Ł├▓\u008e├Ź├Ä7┬░J\u0010?\u001e├ŹC\u0081n3├ů\u0092\u0086.*4├╗├Ä├«\u001d├┤\u000b8├Ż";
      int var7 = "Q\u0018├śW├╣b\u0002├│├Ě:m┬Â┬Ě9f┬ą├ĽG\u0002T├ź\u0013T\u0099\u008b\u0096Zw\u0089:\u000f┬╗├á├▓├Ź\u000b┬¬├Ž3!\u0095┬Ą{┬ó\u001f┬Č~\u0083\u001cS├Č├úU\u0010z├┐2\u0012├Ć\u0004┬Ę'[┬»\u0098\u001d\u0002├Ť├ĺx├â/#:\u008d\u0090D\u0093┬║'\u0096├ę├¬\u0080├Ť├ęG1NsMD\u008cD├│I\\├Ľ\u009eZ-├íT\u0086v\u001bT├ą\u001dA├ŐE├ú├śWrh├í=&&r\u009a]├ś;W)C├¬.<\u009d\u0090y\u009dj\u008alT\u0013W├í├┤├ą├Ä\u0084├ŁM\u0094b&:U>\u0088\u0086├ç\u001b\u0002├▓\u008a\u001b\u000f┬úmj├É├╣├ů├ę}BQ\u0003~├Ć├ć├┐├»|\u008b┬Č\u008f├í\u0085┬ú┬á\u009a\u0016\u009f┬╝├Ć├ČO&\u000b\u0003├ł\u009b├Ť)├╗├ę├Ę├Ő\u0083\u0091U>┬«n\u001a├Ę┬ž┬╣\u001e:\u0080┬┐{├č┬ź`├î├×├Ł├▓\u008e├Ź├Ä7┬░J\u0010?\u001e├ŹC\u0081n3├ů\u0092\u0086.*4├╗├Ä├«\u001d├┤\u000b8├Ż"
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
                     GvhUT = var8;
                     jriia = new Integer[34];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "ny┬╝├Ż├║=|├Ő├Ĺ\u0014~|z├Â├íR";
                  var7 = "ny┬╝├Ż├║=|├Ő├Ĺ\u0014~|z├Â├íR".length();
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
      long var1 = wgjAG ^ 118557466647473L;

      try {
         if (this.No() != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw Np(var3);
      }

      return false;
   }

   private class_1657 No() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bM.wgjAG J
      // 03: ldc2_w 93933305993059
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bJ.MN ()Z
      // 0b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0e: ldc_w sixtwo/fg
      // 11: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 14: checkcast sixtwo/fg
      // 17: astore 4
      // 19: istore 3
      // 1a: aload 4
      // 1c: iload 3
      // 1d: ifne 36
      // 20: invokevirtual sixtwo/fg.bag ()Z
      // 23: ifeq 54
      // 26: goto 2d
      // 29: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 4
      // 2f: goto 36
      // 32: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 39: iload 3
      // 3a: ifne 53
      // 3d: ifnull 54
      // 40: goto 47
      // 43: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 4
      // 49: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 4c: goto 53
      // 4f: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: areturn
      // 54: aconst_null
      // 55: areturn
   }

   @Override
   public void MG(lC param1, ii param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bM.wgjAG J
      // 003: ldc2_w 110861288300926
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/bJ.MN ()Z
      // 00b: aload 0
      // 00c: invokevirtual sixtwo/bM.No ()Lnet/minecraft/class_1657;
      // 00f: astore 6
      // 011: istore 5
      // 013: aload 6
      // 015: iload 5
      // 017: ifne 035
      // 01a: ifnull 031
      // 01d: goto 024
      // 020: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 0
      // 025: aload 6
      // 027: putfield sixtwo/bM.BChTb Lnet/minecraft/class_1657;
      // 02a: goto 031
      // 02d: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: aload 0
      // 032: getfield sixtwo/bM.BChTb Lnet/minecraft/class_1657;
      // 035: ifnonnull 039
      // 038: return
      // 039: invokestatic sixtwo/rD.dlK ()Lsixtwo/cq;
      // 03c: invokevirtual sixtwo/cq.RC ()Lsixtwo/bU;
      // 03f: astore 7
      // 041: aload 7
      // 043: invokevirtual sixtwo/bU.RW ()F
      // 046: fstore 8
      // 048: aload 7
      // 04a: invokevirtual sixtwo/bU.RX ()F
      // 04d: fstore 9
      // 04f: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 052: ldc 7.0
      // 054: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 057: astore 10
      // 059: aload 0
      // 05a: invokevirtual sixtwo/bM.Nn ()Ljava/lang/String;
      // 05d: astore 11
      // 05f: ldc 10.0
      // 061: fstore 12
      // 063: ldc 20.0
      // 065: fload 12
      // 067: fadd
      // 068: aload 10
      // 06a: aload 11
      // 06c: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 06f: fadd
      // 070: fstore 13
      // 072: ldc 15.0
      // 074: fstore 14
      // 076: aload 0
      // 077: getfield sixtwo/bM.fGWTH Lsixtwo/bT;
      // 07a: fload 13
      // 07c: fload 14
      // 07e: invokevirtual sixtwo/bT.NU (FF)V
      // 081: fload 8
      // 083: ldc 6.0
      // 085: fsub
      // 086: ldc 10.0
      // 088: aload 0
      // 089: getfield sixtwo/bM.dExGi Lsixtwo/rk;
      // 08c: invokevirtual sixtwo/rk.dhj ()F
      // 08f: fmul
      // 090: fadd
      // 091: fstore 15
      // 093: fload 9
      // 095: fload 12
      // 097: fload 14
      // 099: invokestatic sixtwo/jf.bAH (FF)F
      // 09c: fadd
      // 09d: fstore 16
      // 09f: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0a2: ldc 255.0
      // 0a4: aload 0
      // 0a5: getfield sixtwo/bM.dExGi Lsixtwo/rk;
      // 0a8: invokevirtual sixtwo/rk.dhj ()F
      // 0ab: fmul
      // 0ac: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 0af: astore 17
      // 0b1: aload 0
      // 0b2: getfield sixtwo/bM.BChTb Lnet/minecraft/class_1657;
      // 0b5: astore 19
      // 0b7: aload 19
      // 0b9: iload 5
      // 0bb: ifne 0d4
      // 0be: instanceof net/minecraft/class_742
      // 0c1: ifeq 0ec
      // 0c4: goto 0cb
      // 0c7: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ca: athrow
      // 0cb: aload 19
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/bM.Np (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: checkcast net/minecraft/class_742
      // 0d7: astore 18
      // 0d9: aload 1
      // 0da: aload 18
      // 0dc: fload 15
      // 0de: fload 16
      // 0e0: fload 12
      // 0e2: ldc 4.0
      // 0e4: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0e7: aload 17
      // 0e9: invokevirtual sixtwo/lC.ccZ (Lnet/minecraft/class_742;FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 0ec: aload 2
      // 0ed: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0f0: astore 18
      // 0f2: fload 8
      // 0f4: ldc 25.0
      // 0f6: fadd
      // 0f7: ldc 10.0
      // 0f9: aload 0
      // 0fa: getfield sixtwo/bM.dExGi Lsixtwo/rk;
      // 0fd: invokevirtual sixtwo/rk.dhj ()F
      // 100: fmul
      // 101: fsub
      // 102: fload 12
      // 104: fadd
      // 105: fstore 19
      // 107: fload 9
      // 109: ldc 5.0
      // 10b: fadd
      // 10c: fstore 20
      // 10e: aload 1
      // 10f: aload 10
      // 111: aload 11
      // 113: fload 19
      // 115: fload 20
      // 117: aload 18
      // 119: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 11c: return
   }

   private static MatchException Np(MatchException var0) {
      return var0;
   }

   private static CallSite Ns(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Nr".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private String Nn() {
      long var1 = wgjAG ^ 18714860712226L;
      String var3 = this.BChTb.method_7334().name();
      if (this.BChTb == rD.dlmvG.field_1724) {
         var3 = rD.dlJ().aZx(fS.class).aWP(var3);
      }

      return var3;
   }

   private static int Nr(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Nq(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Nq(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13092;
      if (jriia[var3] == null) {
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
         long var5 = GvhUT[var3];
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
         Object[] var9 = (Object[])xzNLw.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               xzNLw.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bM", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jriia[var3] = var15;
      }

      return jriia[var3];
   }
}
