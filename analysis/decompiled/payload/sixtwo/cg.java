package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1291;
import net.minecraft.class_1293;

public class cg extends co {
   private final cJ KsSMf;
   private final Map<String, class_1293> lkRFs;
   private final Map<class_1291, Boolean> XXdvi;
   private static final long kjqzv = gb.aYR(24728271087640463L, 2606469178279783025L, MethodHandles.lookup().lookupClass()).a(62859203139507L);
   private static final String[] GQfMq;
   private static final String[] XMEkj;
   private static final Map ysebq = new HashMap(13);
   private static final long[] QgNXY;
   private static final Integer[] yyYQj;
   private static final Map phUmR;

   public cg() {
      long var1 = kjqzv ^ 79725156635237L;
      int[] var10001 = new int[Qj<"f">(26790, 6330795969076752625L ^ var1)];
      var10001[0] = Qj<"f">(401, 1346736519029430723L ^ var1);
      var10001[1] = Qj<"f">(24151, 3012683880593901069L ^ var1);
      var10001[2] = Qj<"f">(8527, 3239010536085305603L ^ var1);
      var10001[3] = Qj<"f">(17782, 1360151600436731193L ^ var1);
      var10001[4] = Qj<"f">(835, 9169659355899337494L ^ var1);
      var10001[5] = Qj<"f">(6567, 5095470161344954878L ^ var1);
      var10001[Qj<"f">(11237, 1488808817310643129L ^ var1)] = Qj<"f">(12840, 4650762250660391542L ^ var1);
      super(var10001, lf.DyMwJ);
      this.KsSMf = new cJ(
            this,
            mr.clS(
               new int[]{
                  Qj<"f">(22745, 6747512955099365510L ^ var1),
                  Qj<"f">(12734, 4448477326423468528L ^ var1),
                  Qj<"f">(15718, 4658362519703889214L ^ var1),
                  Qj<"f">(9778, 4142816755671416417L ^ var1),
                  Qj<"f">(6986, 5590219541354414875L ^ var1)
               }
            )
         )
         .WE(false);
      this.lkRFs = new TreeMap<>();
      this.XXdvi = new HashMap<>();
      hF.bdI(this);
   }

   static {
      long var11 = kjqzv ^ 127414406724590L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[8];
      int var18 = 0;
      String var17 = "2Ú#©\u0083dýÏdÜc\u0084Ç\u0087 ¤\u0010\u0093vß\rûÅ\u009a\u0080mÎ`SìKO\u0099\u0010\u0006<Î<¦¨1Ì=³|M3r«\u0096(\u0084Å.àÃ©Õ\u0095^!\u000f\u001fò±:¡\u009eÊÝXâÏÙ8ø\u0098\u0088\u0088ó&®[Û\u001e\u008cuñ\u0092ß\u0084 9±¥\u0016\u000fd§?\u0084¢C\u0019½¯\u0003àö\f\u0004\u001a;\u0003\u0004K\u001aí¦Æ\u001dO}\u0089 \u0002¥Ø'¡0ö5\u0098V\u0010ô\u0087\u0086ãÛhË\u009a\u00ad#\u0086C þ\u00173Ë_3¥\u008c";
      int var19 = "2Ú#©\u0083dýÏdÜc\u0084Ç\u0087 ¤\u0010\u0093vß\rûÅ\u009a\u0080mÎ`SìKO\u0099\u0010\u0006<Î<¦¨1Ì=³|M3r«\u0096(\u0084Å.àÃ©Õ\u0095^!\u000f\u001fò±:¡\u009eÊÝXâÏÙ8ø\u0098\u0088\u0088ó&®[Û\u001e\u008cuñ\u0092ß\u0084 9±¥\u0016\u000fd§?\u0084¢C\u0019½¯\u0003àö\f\u0004\u001a;\u0003\u0004K\u001aí¦Æ\u001dO}\u0089 \u0002¥Ø'¡0ö5\u0098V\u0010ô\u0087\u0086ãÛhË\u009a\u00ad#\u0086C þ\u00173Ë_3¥\u008c"
         .length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = Qd(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     GQfMq = var20;
                     XMEkj = new String[8];
                     phUmR = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[20];
                     int var3 = 0;
                     String var4 = "B}ôØýÇ%5^¯z¥N>\u0015i}X8\f\u008dC¦\u0084°\u0096õgæY\u0081@[ë\u0004Ð\u0098§´\u0094g\u0016_\u00ad\u0090bt:IÝ\u0010ß)\u009b6å\u009djvõáº\u0015Cç\u000e©¤\u007fhZä¶IR\u0002ü¥0\u008a ÛíBâ³\u0006Ýo4)\u0090\u009eþ\u009a\u000b½V_Â\u0017åj\u0004!ïbxàN\u00909Ðá-JªÝ\u008d\u001e\u0096Þúp\u0097Óän`Ìn\u00000\u0012å\u000bô\u009a\u0010Þ\u0089\u0082\u0093\u0001";
                     int var5 = "B}ôØýÇ%5^¯z¥N>\u0015i}X8\f\u008dC¦\u0084°\u0096õgæY\u0081@[ë\u0004Ð\u0098§´\u0094g\u0016_\u00ad\u0090bt:IÝ\u0010ß)\u009b6å\u009djvõáº\u0015Cç\u000e©¤\u007fhZä¶IR\u0002ü¥0\u008a ÛíBâ³\u0006Ýo4)\u0090\u009eþ\u009a\u000b½V_Â\u0017åj\u0004!ïbxàN\u00909Ðá-JªÝ\u008d\u001e\u0096Þúp\u0097Óän`Ìn\u00000\u0012å\u000bô\u009a\u0010Þ\u0089\u0082\u0093\u0001"
                        .length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    QgNXY = var6;
                                    yyYQj = new Integer[20];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "|oqcy\u0010ee\u0084õ\u009fÁ<\u0006ï¹";
                                 var5 = "|oqcy\u0010ee\u0084õ\u009fÁ<\u0006ï¹".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "³1\u0086Vî\u0014\u0004\u0088\u0083\u0001\u001dq\u001b\u0095\u0004pGÆ³Ws\u0015ÏI\u0010væ©¯2Þò@\u009dÉ\u008c»4Ê\u0084\u000f";
                  var19 = "³1\u0086Vî\u0014\u0004\u0088\u0083\u0001\u001dq\u001b\u0095\u0004pGÆ³Ws\u0015ÏI\u0010væ©¯2Þò@\u009dÉ\u008c»4Ê\u0084\u000f".length();
                  var16 = 24;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   @Override
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cg.kjqzv J
      // 003: ldc2_w 17096044552792
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: aload 1
      // 00a: invokespecial sixtwo/co.NV (Lsixtwo/lC;)V
      // 00d: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 010: ldc 7.0
      // 012: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 015: astore 5
      // 017: invokestatic sixtwo/ca.OY ()Z
      // 01a: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 01d: astore 6
      // 01f: ldc_w 22.0
      // 022: fstore 7
      // 024: istore 4
      // 026: aconst_null
      // 027: astore 8
      // 029: aload 0
      // 02a: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 02d: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 032: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 037: astore 9
      // 039: aload 9
      // 03b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 040: ifeq 112
      // 043: aload 9
      // 045: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04a: checkcast net/minecraft/class_1293
      // 04d: astore 10
      // 04f: aload 10
      // 051: checkcast sixtwo/mM
      // 054: invokeinterface sixtwo/mM.getFadeAnimation ()Lsixtwo/rk; 1
      // 059: astore 11
      // 05b: aload 11
      // 05d: invokevirtual sixtwo/rk.dhj ()F
      // 060: fconst_0
      // 061: iload 4
      // 063: ifeq 090
      // 066: fcmpl
      // 067: iload 4
      // 069: ifeq 136
      // 06c: goto 073
      // 06f: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 072: athrow
      // 073: ifne 086
      // 076: goto 07d
      // 079: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: aload 10
      // 07f: astore 8
      // 081: iload 4
      // 083: ifne 039
      // 086: ldc_w 4.5
      // 089: aload 11
      // 08b: invokevirtual sixtwo/rk.dhj ()F
      // 08e: fconst_1
      // 08f: fsub
      // 090: fmul
      // 091: fstore 12
      // 093: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 096: invokevirtual net/minecraft/class_310.method_72703 ()Lnet/minecraft/class_11697;
      // 099: getstatic sixtwo/iW.HaVqD Lnet/minecraft/class_2960;
      // 09c: invokevirtual net/minecraft/class_11697.method_73025 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1059;
      // 09f: aload 10
      // 0a1: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 0a4: invokestatic net/minecraft/class_329.method_71644 (Lnet/minecraft/class_6880;)Lnet/minecraft/class_2960;
      // 0a7: invokevirtual net/minecraft/class_1059.method_4608 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1058;
      // 0aa: astore 13
      // 0ac: aload 1
      // 0ad: aload 13
      // 0af: invokevirtual net/minecraft/class_1058.method_45852 ()Lnet/minecraft/class_2960;
      // 0b2: aload 0
      // 0b3: getfield sixtwo/cg.toIeR F
      // 0b6: ldc 7.0
      // 0b8: aload 11
      // 0ba: invokevirtual sixtwo/rk.dhj ()F
      // 0bd: fmul
      // 0be: fadd
      // 0bf: aload 0
      // 0c0: getfield sixtwo/cg.QWaAn F
      // 0c3: fload 7
      // 0c5: fadd
      // 0c6: fload 12
      // 0c8: fadd
      // 0c9: ldc_w 8.0
      // 0cc: ldc_w 18.0
      // 0cf: invokestatic sixtwo/jf.bAH (FF)F
      // 0d2: fadd
      // 0d3: ldc_w 8.0
      // 0d6: ldc_w 8.0
      // 0d9: aload 13
      // 0db: invokevirtual net/minecraft/class_1058.method_4594 ()F
      // 0de: aload 13
      // 0e0: invokevirtual net/minecraft/class_1058.method_4593 ()F
      // 0e3: aload 13
      // 0e5: invokevirtual net/minecraft/class_1058.method_4577 ()F
      // 0e8: aload 13
      // 0ea: invokevirtual net/minecraft/class_1058.method_4575 ()F
      // 0ed: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0f0: ldc_w 255.0
      // 0f3: aload 11
      // 0f5: invokevirtual sixtwo/rk.dhj ()F
      // 0f8: fmul
      // 0f9: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0fc: invokevirtual sixtwo/lC.cdY (Lnet/minecraft/class_2960;FFFFFFFFLsixtwo/mG;)V
      // 0ff: fload 7
      // 101: ldc_w 18.0
      // 104: aload 11
      // 106: invokevirtual sixtwo/rk.dhj ()F
      // 109: fmul
      // 10a: fadd
      // 10b: fstore 7
      // 10d: iload 4
      // 10f: ifne 039
      // 112: ldc_w 22.0
      // 115: fstore 7
      // 117: getstatic sixtwo/cg.zXCXX Lsixtwo/kJ;
      // 11a: aload 5
      // 11c: invokevirtual sixtwo/kJ.bUa (Lsixtwo/lq;)V
      // 11f: aload 0
      // 120: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 123: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 128: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 12d: astore 9
      // 12f: aload 9
      // 131: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 136: ifeq 386
      // 139: aload 9
      // 13b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 140: checkcast net/minecraft/class_1293
      // 143: astore 10
      // 145: aload 10
      // 147: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 14a: invokeinterface net/minecraft/class_6880.comp_349 ()Ljava/lang/Object; 1
      // 14f: checkcast net/minecraft/class_1291
      // 152: astore 11
      // 154: aload 10
      // 156: checkcast sixtwo/mM
      // 159: invokeinterface sixtwo/mM.getFadeAnimation ()Lsixtwo/rk; 1
      // 15e: astore 12
      // 160: aload 10
      // 162: checkcast sixtwo/mM
      // 165: invokeinterface sixtwo/mM.getTimerAnimation ()Lsixtwo/Z; 1
      // 16a: astore 13
      // 16c: aload 12
      // 16e: iload 4
      // 170: ifeq 3ae
      // 173: invokevirtual sixtwo/rk.dhj ()F
      // 176: fconst_0
      // 177: fcmpl
      // 178: ifne 18e
      // 17b: goto 182
      // 17e: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 181: athrow
      // 182: iload 4
      // 184: ifne 12f
      // 187: goto 18e
      // 18a: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18d: athrow
      // 18e: aload 6
      // 190: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 193: ldc_w 255.0
      // 196: aload 12
      // 198: invokevirtual sixtwo/rk.dhj ()F
      // 19b: fmul
      // 19c: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 19f: astore 14
      // 1a1: aload 11
      // 1a3: invokevirtual net/minecraft/class_1291.method_5560 ()Lnet/minecraft/class_2561;
      // 1a6: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 1ab: aload 10
      // 1ad: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 1b0: iload 4
      // 1b2: ifeq 1cd
      // 1b5: ifle 1d3
      // 1b8: goto 1bf
      // 1bb: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1be: athrow
      // 1bf: aload 10
      // 1c1: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 1c4: bipush 1
      // 1c5: iadd
      // 1c6: goto 1cd
      // 1c9: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cc: athrow
      // 1cd: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 1d0: goto 1d6
      // 1d3: ldc_w ""
      // 1d6: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001 \u0001" ]
      // 1db: astore 15
      // 1dd: ldc_w -4.5
      // 1e0: ldc_w 4.5
      // 1e3: aload 12
      // 1e5: invokevirtual sixtwo/rk.dhj ()F
      // 1e8: fmul
      // 1e9: fadd
      // 1ea: fstore 16
      // 1ec: aload 0
      // 1ed: getfield sixtwo/cg.toIeR F
      // 1f0: ldc_w 13.0
      // 1f3: fadd
      // 1f4: ldc 7.0
      // 1f6: aload 12
      // 1f8: invokevirtual sixtwo/rk.dhj ()F
      // 1fb: fmul
      // 1fc: fadd
      // 1fd: fstore 17
      // 1ff: aload 0
      // 200: getfield sixtwo/cg.QWaAn F
      // 203: fload 7
      // 205: fadd
      // 206: fload 16
      // 208: fadd
      // 209: aload 5
      // 20b: invokevirtual sixtwo/lq.cat ()F
      // 20e: ldc_w 18.0
      // 211: invokestatic sixtwo/jf.bAH (FF)F
      // 214: fadd
      // 215: fstore 18
      // 217: aload 1
      // 218: aload 5
      // 21a: aload 15
      // 21c: fload 17
      // 21e: fload 18
      // 220: aload 14
      // 222: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 225: aload 0
      // 226: getfield sixtwo/cg.toIeR F
      // 229: aload 0
      // 22a: getfield sixtwo/cg.jTsqG F
      // 22d: fadd
      // 22e: ldc 7.0
      // 230: aload 12
      // 232: invokevirtual sixtwo/rk.dhj ()F
      // 235: fmul
      // 236: fsub
      // 237: fstore 19
      // 239: aload 10
      // 23b: invokevirtual net/minecraft/class_1293.method_48559 ()Z
      // 23e: iload 4
      // 240: ifeq 259
      // 243: ifne 275
      // 246: goto 24d
      // 249: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24c: athrow
      // 24d: aload 10
      // 24f: invokevirtual net/minecraft/class_1293.method_5584 ()I
      // 252: goto 259
      // 255: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 258: athrow
      // 259: sipush 22088
      // 25c: ldc2_w 7195861460517715493
      // 25f: lload 2
      // 260: lxor
      // 261: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 266: iload 4
      // 268: ifeq 2bb
      // 26b: if_icmplt 2a2
      // 26e: goto 275
      // 271: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 274: athrow
      // 275: sipush 31904
      // 278: ldc2_w 4802436344857664317
      // 27b: lload 2
      // 27c: lxor
      // 27d: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 282: astore 20
      // 284: aload 1
      // 285: aload 5
      // 287: sipush 31904
      // 28a: ldc2_w 4802436344857664317
      // 28d: lload 2
      // 28e: lxor
      // 28f: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 294: fload 19
      // 296: fload 18
      // 298: aload 14
      // 29a: invokevirtual sixtwo/lC.cev (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 29d: iload 4
      // 29f: ifne 373
      // 2a2: aload 10
      // 2a4: invokevirtual net/minecraft/class_1293.method_5584 ()I
      // 2a7: sipush 30520
      // 2aa: ldc2_w 1375935685821259603
      // 2ad: lload 2
      // 2ae: lxor
      // 2af: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2b4: goto 2bb
      // 2b7: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ba: athrow
      // 2bb: idiv
      // 2bc: istore 20
      // 2be: sipush 13655
      // 2c1: iload 20
      // 2c3: sipush 2430
      // 2c6: ldc2_w 8900718079139553566
      // 2c9: lload 2
      // 2ca: lxor
      // 2cb: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d0: idiv
      // 2d1: istore 21
      // 2d3: ldc2_w 6103395322653364940
      // 2d6: lload 2
      // 2d7: lxor
      // 2d8: iload 20
      // 2da: sipush 2430
      // 2dd: ldc2_w 8900718079139553566
      // 2e0: lload 2
      // 2e1: lxor
      // 2e2: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2e7: irem
      // 2e8: istore 22
      // 2ea: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2ef: bipush 1
      // 2f0: anewarray 380
      // 2f3: dup
      // 2f4: bipush 0
      // 2f5: iload 21
      // 2f7: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 2fa: aastore
      // 2fb: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 2fe: astore 23
      // 300: sipush 7099
      // 303: ldc2_w 6140833719285709859
      // 306: lload 2
      // 307: lxor
      // 308: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 30d: bipush 2
      // 30e: anewarray 380
      // 311: dup
      // 312: bipush 0
      // 313: iload 21
      // 315: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 318: aastore
      // 319: dup
      // 31a: bipush 1
      // 31b: iload 22
      // 31d: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 320: aastore
      // 321: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 324: astore 24
      // 326: aload 5
      // 328: aload 23
      // 32a: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 32d: fstore 25
      // 32f: aload 5
      // 331: aload 24
      // 333: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 336: fstore 26
      // 338: aload 1
      // 339: aload 5
      // 33b: aload 23
      // 33d: fload 19
      // 33f: fload 26
      // 341: fsub
      // 342: fload 18
      // 344: aload 14
      // 346: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 349: fload 19
      // 34b: fload 26
      // 34d: fsub
      // 34e: fload 25
      // 350: fadd
      // 351: fstore 27
      // 353: aload 13
      // 355: bipush 1
      // 356: aload 14
      // 358: invokevirtual sixtwo/Z.kS (ZLsixtwo/mG;)Lsixtwo/Z;
      // 35b: pop
      // 35c: aload 13
      // 35e: iload 22
      // 360: invokevirtual sixtwo/Z.kO (I)V
      // 363: aload 13
      // 365: fload 27
      // 367: fload 18
      // 369: invokevirtual sixtwo/Z.sW (FF)Lsixtwo/az;
      // 36c: pop
      // 36d: aload 13
      // 36f: aload 1
      // 370: invokevirtual sixtwo/Z.su (Lsixtwo/lC;)V
      // 373: fload 7
      // 375: ldc_w 18.0
      // 378: aload 12
      // 37a: invokevirtual sixtwo/rk.dhj ()F
      // 37d: fmul
      // 37e: fadd
      // 37f: fstore 7
      // 381: iload 4
      // 383: ifne 12f
      // 386: getstatic sixtwo/cg.zXCXX Lsixtwo/kJ;
      // 389: invokevirtual sixtwo/kJ.endBatch ()V
      // 38c: aload 8
      // 38e: iload 4
      // 390: ifeq 3ae
      // 393: ifnull 3c9
      // 396: goto 39d
      // 399: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39c: athrow
      // 39d: aload 8
      // 39f: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 3a2: invokeinterface net/minecraft/class_6880.comp_349 ()Ljava/lang/Object; 1
      // 3a7: goto 3ae
      // 3aa: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3ad: athrow
      // 3ae: checkcast net/minecraft/class_1291
      // 3b1: astore 9
      // 3b3: aload 0
      // 3b4: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 3b7: aload 9
      // 3b9: invokevirtual net/minecraft/class_1291.method_5560 ()Lnet/minecraft/class_2561;
      // 3bc: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 3c1: aload 8
      // 3c3: invokeinterface java/util/Map.remove (Ljava/lang/Object;Ljava/lang/Object;)Z 3
      // 3c8: pop
      // 3c9: return
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
      // 000: getstatic sixtwo/cg.kjqzv J
      // 003: ldc2_w 29925481139608
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: ldc 92.0
      // 00b: putfield sixtwo/cg.jTsqG F
      // 00e: aload 0
      // 00f: ldc 20.0
      // 011: putfield sixtwo/cg.Xtjvx F
      // 014: invokestatic sixtwo/ca.OX ()Z
      // 017: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01a: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01d: invokevirtual net/minecraft/class_746.method_6026 ()Ljava/util/Collection;
      // 020: astore 5
      // 022: istore 4
      // 024: aload 5
      // 026: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 02b: astore 6
      // 02d: aload 6
      // 02f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 034: ifeq 100
      // 037: aload 6
      // 039: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 03e: checkcast net/minecraft/class_1293
      // 041: astore 7
      // 043: aload 7
      // 045: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 048: invokeinterface net/minecraft/class_6880.comp_349 ()Ljava/lang/Object; 1
      // 04d: checkcast net/minecraft/class_1291
      // 050: astore 8
      // 052: aload 8
      // 054: invokevirtual net/minecraft/class_1291.method_5560 ()Lnet/minecraft/class_2561;
      // 057: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 05c: astore 9
      // 05e: aload 9
      // 060: invokevirtual java/lang/String.isBlank ()Z
      // 063: iload 4
      // 065: ifne 115
      // 068: iload 4
      // 06a: ifne 0a1
      // 06d: goto 074
      // 070: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: ifeq 08a
      // 077: goto 07e
      // 07a: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07d: athrow
      // 07e: iload 4
      // 080: ifeq 02d
      // 083: goto 08a
      // 086: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: aload 0
      // 08b: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 08e: aload 9
      // 090: iload 4
      // 092: ifne 0f3
      // 095: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: ifeq 0e6
      // 0a4: aload 0
      // 0a5: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 0a8: aload 9
      // 0aa: aload 7
      // 0ac: invokeinterface java/util/Map.replace (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0b1: pop
      // 0b2: aload 7
      // 0b4: checkcast sixtwo/mM
      // 0b7: invokeinterface sixtwo/mM.getFadeAnimation ()Lsixtwo/rk; 1
      // 0bc: astore 10
      // 0be: aload 10
      // 0c0: iload 4
      // 0c2: ifne 0dd
      // 0c5: invokevirtual sixtwo/rk.dhj ()F
      // 0c8: fconst_0
      // 0c9: fcmpl
      // 0ca: ifne 0e1
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: aload 10
      // 0d6: goto 0dd
      // 0d9: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dc: athrow
      // 0dd: fconst_1
      // 0de: invokevirtual sixtwo/rk.dhe (F)V
      // 0e1: iload 4
      // 0e3: ifeq 0fb
      // 0e6: aload 0
      // 0e7: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 0ea: aload 9
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 7
      // 0f5: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0fa: pop
      // 0fb: iload 4
      // 0fd: ifeq 02d
      // 100: aload 0
      // 101: iload 4
      // 103: ifne 119
      // 106: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 109: invokeinterface java/util/Map.isEmpty ()Z 1
      // 10e: goto 115
      // 111: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: ifne 123
      // 118: aload 0
      // 119: dup
      // 11a: getfield sixtwo/cg.Xtjvx F
      // 11d: ldc 5.0
      // 11f: fadd
      // 120: putfield sixtwo/cg.Xtjvx F
      // 123: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 126: ldc 7.0
      // 128: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 12b: astore 6
      // 12d: aload 0
      // 12e: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 131: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 136: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 13b: astore 7
      // 13d: aload 7
      // 13f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 144: ifeq 403
      // 147: aload 7
      // 149: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 14e: checkcast net/minecraft/class_1293
      // 151: astore 8
      // 153: aload 8
      // 155: checkcast sixtwo/mM
      // 158: invokeinterface sixtwo/mM.getFadeAnimation ()Lsixtwo/rk; 1
      // 15d: astore 9
      // 15f: aload 8
      // 161: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 164: invokeinterface net/minecraft/class_6880.comp_349 ()Ljava/lang/Object; 1
      // 169: checkcast net/minecraft/class_1291
      // 16c: astore 10
      // 16e: iload 4
      // 170: ifne 2bb
      // 173: aload 0
      // 174: iload 4
      // 176: ifne 404
      // 179: goto 180
      // 17c: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17f: athrow
      // 180: getfield sixtwo/cg.KsSMf Lsixtwo/cJ;
      // 183: invokevirtual sixtwo/cJ.WF ()Z
      // 186: ifeq 2a4
      // 189: goto 190
      // 18c: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18f: athrow
      // 190: aload 10
      // 192: invokevirtual net/minecraft/class_1291.method_5560 ()Lnet/minecraft/class_2561;
      // 195: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 19a: aload 8
      // 19c: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 19f: iload 4
      // 1a1: ifne 1c3
      // 1a4: goto 1ab
      // 1a7: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1aa: athrow
      // 1ab: ifle 1c9
      // 1ae: goto 1b5
      // 1b1: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b4: athrow
      // 1b5: aload 8
      // 1b7: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 1ba: bipush 1
      // 1bb: iadd
      // 1bc: goto 1c3
      // 1bf: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c2: athrow
      // 1c3: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 1c6: goto 1cc
      // 1c9: ldc_w ""
      // 1cc: invokestatic java/lang/String.valueOf (Ljava/lang/Object;)Ljava/lang/String;
      // 1cf: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001 \u0001" ]
      // 1d4: astore 11
      // 1d6: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1d9: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1dc: iload 4
      // 1de: ifne 2a3
      // 1e1: aload 8
      // 1e3: invokevirtual net/minecraft/class_1293.method_5579 ()Lnet/minecraft/class_6880;
      // 1e6: invokevirtual net/minecraft/class_746.method_6059 (Lnet/minecraft/class_6880;)Z
      // 1e9: ifne 28d
      // 1ec: goto 1f3
      // 1ef: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f2: athrow
      // 1f3: aload 0
      // 1f4: getfield sixtwo/cg.XXdvi Ljava/util/Map;
      // 1f7: aload 10
      // 1f9: bipush 0
      // 1fa: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 1fd: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 202: checkcast java/lang/Boolean
      // 205: invokevirtual java/lang/Boolean.booleanValue ()Z
      // 208: iload 4
      // 20a: ifne 23c
      // 20d: goto 214
      // 210: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 213: athrow
      // 214: ifne 2a4
      // 217: goto 21e
      // 21a: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21d: athrow
      // 21e: aload 10
      // 220: iload 4
      // 222: ifne 2bd
      // 225: goto 22c
      // 228: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22b: athrow
      // 22c: invokevirtual net/minecraft/class_1291.method_18792 ()Lnet/minecraft/class_4081;
      // 22f: getstatic net/minecraft/class_4081.field_18272 Lnet/minecraft/class_4081;
      // 232: invokevirtual net/minecraft/class_4081.equals (Ljava/lang/Object;)Z
      // 235: goto 23c
      // 238: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23b: athrow
      // 23c: ifne 2a4
      // 23f: aload 11
      // 241: sipush 31255
      // 244: ldc2_w 8860898950464860745
      // 247: lload 2
      // 248: lxor
      // 249: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 24e: swap
      // 24f: sipush 10882
      // 252: ldc2_w 3499432574078264027
      // 255: lload 2
      // 256: lxor
      // 257: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 25c: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001\u0001" ]
      // 261: sipush 7359
      // 264: ldc2_w 8031778270325839072
      // 267: lload 2
      // 268: lxor
      // 269: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 26e: invokestatic sixtwo/cN.XQ (Ljava/lang/String;Ljava/lang/String;)V
      // 271: aload 0
      // 272: getfield sixtwo/cg.XXdvi Ljava/util/Map;
      // 275: aload 10
      // 277: bipush 1
      // 278: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 27b: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 280: pop
      // 281: iload 4
      // 283: ifeq 2a4
      // 286: goto 28d
      // 289: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28c: athrow
      // 28d: aload 0
      // 28e: getfield sixtwo/cg.XXdvi Ljava/util/Map;
      // 291: aload 10
      // 293: bipush 0
      // 294: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 297: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 29c: goto 2a3
      // 29f: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a2: athrow
      // 2a3: pop
      // 2a4: aload 9
      // 2a6: aload 5
      // 2a8: aload 8
      // 2aa: invokeinterface java/util/Collection.contains (Ljava/lang/Object;)Z 2
      // 2af: invokevirtual sixtwo/rk.dhc (Z)V
      // 2b2: aload 9
      // 2b4: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 2b7: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 2ba: pop
      // 2bb: aload 10
      // 2bd: invokevirtual net/minecraft/class_1291.method_5560 ()Lnet/minecraft/class_2561;
      // 2c0: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 2c5: aload 8
      // 2c7: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 2ca: iload 4
      // 2cc: ifne 2e7
      // 2cf: ifle 2ed
      // 2d2: goto 2d9
      // 2d5: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d8: athrow
      // 2d9: aload 8
      // 2db: invokevirtual net/minecraft/class_1293.method_5578 ()I
      // 2de: bipush 1
      // 2df: iadd
      // 2e0: goto 2e7
      // 2e3: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e6: athrow
      // 2e7: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 2ea: goto 2f0
      // 2ed: ldc_w ""
      // 2f0: invokestatic java/lang/String.valueOf (Ljava/lang/Object;)Ljava/lang/String;
      // 2f3: invokedynamic makeConcatWithConstants (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001 \u0001" ]
      // 2f8: astore 11
      // 2fa: aload 6
      // 2fc: aload 11
      // 2fe: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 301: fstore 12
      // 303: aload 8
      // 305: invokevirtual net/minecraft/class_1293.method_48559 ()Z
      // 308: iload 4
      // 30a: ifne 323
      // 30d: ifne 33f
      // 310: goto 317
      // 313: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 316: athrow
      // 317: aload 8
      // 319: invokevirtual net/minecraft/class_1293.method_5584 ()I
      // 31c: goto 323
      // 31f: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 322: athrow
      // 323: sipush 22872
      // 326: ldc2_w 7285557963839413992
      // 329: lload 2
      // 32a: lxor
      // 32b: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 330: iload 4
      // 332: ifne 36c
      // 335: if_icmplt 353
      // 338: goto 33f
      // 33b: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33e: athrow
      // 33f: sipush 25873
      // 342: ldc2_w 6279610284547665229
      // 345: lload 2
      // 346: lxor
      // 347: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 34c: astore 13
      // 34e: iload 4
      // 350: ifeq 3b9
      // 353: aload 8
      // 355: invokevirtual net/minecraft/class_1293.method_5584 ()I
      // 358: sipush 27560
      // 35b: ldc2_w 44593545406196737
      // 35e: lload 2
      // 35f: lxor
      // 360: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 365: goto 36c
      // 368: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36b: athrow
      // 36c: idiv
      // 36d: istore 14
      // 36f: sipush 25358
      // 372: iload 14
      // 374: sipush 22640
      // 377: ldc2_w 5650285629085065174
      // 37a: lload 2
      // 37b: lxor
      // 37c: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 381: idiv
      // 382: istore 15
      // 384: ldc2_w 841274481665010516
      // 387: lload 2
      // 388: lxor
      // 389: iload 14
      // 38b: sipush 2430
      // 38e: ldc2_w 8900704220790345438
      // 391: lload 2
      // 392: lxor
      // 393: invokedynamic f (IJ)I bsm=sixtwo/cg.Qj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 398: irem
      // 399: istore 16
      // 39b: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cg.Qg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3a0: bipush 2
      // 3a1: anewarray 380
      // 3a4: dup
      // 3a5: bipush 0
      // 3a6: iload 15
      // 3a8: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 3ab: aastore
      // 3ac: dup
      // 3ad: bipush 1
      // 3ae: iload 16
      // 3b0: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 3b3: aastore
      // 3b4: invokestatic java/lang/String.format (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;
      // 3b7: astore 13
      // 3b9: aload 6
      // 3bb: aload 13
      // 3bd: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 3c0: fstore 14
      // 3c2: ldc 7.0
      // 3c4: fstore 15
      // 3c6: ldc_w 8.0
      // 3c9: fstore 16
      // 3cb: fload 15
      // 3cd: fload 16
      // 3cf: fadd
      // 3d0: fload 12
      // 3d2: fadd
      // 3d3: ldc_w 14.0
      // 3d6: fadd
      // 3d7: fload 14
      // 3d9: fadd
      // 3da: fload 15
      // 3dc: fadd
      // 3dd: fstore 17
      // 3df: aload 0
      // 3e0: fload 17
      // 3e2: aload 0
      // 3e3: getfield sixtwo/cg.jTsqG F
      // 3e6: invokestatic java/lang/Math.max (FF)F
      // 3e9: putfield sixtwo/cg.jTsqG F
      // 3ec: aload 0
      // 3ed: dup
      // 3ee: getfield sixtwo/cg.Xtjvx F
      // 3f1: ldc_w 18.0
      // 3f4: aload 9
      // 3f6: invokevirtual sixtwo/rk.dhj ()F
      // 3f9: fmul
      // 3fa: fadd
      // 3fb: putfield sixtwo/cg.Xtjvx F
      // 3fe: iload 4
      // 400: ifeq 13d
      // 403: aload 0
      // 404: aload 1
      // 405: invokespecial sixtwo/co.LX (Lsixtwo/lC;)V
      // 408: return
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
      // 00: getstatic sixtwo/cg.kjqzv J
      // 03: ldc2_w 13202413447026
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/cg.lkRFs Ljava/util/Map;
      // 10: invokeinterface java/util/Map.isEmpty ()Z 1
      // 15: iload 3
      // 16: ifne 24
      // 19: ifne 27
      // 1c: goto 23
      // 1f: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: bipush 1
      // 24: goto 28
      // 27: bipush 0
      // 28: istore 4
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 30: instanceof net/minecraft/class_408
      // 33: istore 5
      // 35: iload 4
      // 37: iload 3
      // 38: ifne 5d
      // 3b: ifne 5c
      // 3e: goto 45
      // 41: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: iload 5
      // 47: iload 3
      // 48: ifne 5d
      // 4b: goto 52
      // 4e: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: ifeq 60
      // 55: goto 5c
      // 58: invokestatic sixtwo/cg.Qc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: bipush 1
      // 5d: goto 61
      // 60: bipush 0
      // 61: ireturn
   }

   private static String Qe(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3656;
      if (XMEkj[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ysebq.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ysebq.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cg", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = GQfMq[var5].getBytes("ISO-8859-1");
         XMEkj[var5] = Qd(((Cipher)var4[0]).doFinal(var9));
      }

      return XMEkj[var5];
   }

   @hG
   public void Qb(gM var1) {
      this.lkRFs.clear();
      this.XXdvi.clear();
   }

   private static MatchException Qc(MatchException var0) {
      return var0;
   }

   private static CallSite Qj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Qi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite Qg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Qf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cg" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String Qd(byte[] var0) {
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

   private static Object Qf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Qe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Qh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16820;
      if (yyYQj[var3] == null) {
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
         long var5 = QgNXY[var3];
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
         Object[] var9 = (Object[])phUmR.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               phUmR.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cg", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         yyYQj[var3] = var15;
      }

      return yyYQj[var3];
   }

   private static int Qi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Qh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
