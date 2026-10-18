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
import net.minecraft.class_1297;
import net.minecraft.class_241;

public class pm extends pA {
   private final cv wmwwQ;
   private final cw UWuKt;
   private final cw GuPiN;
   private static final long itXeZ = gb.aYR(5021050216701824963L, -5341645102715513153L, MethodHandles.lookup().lookupClass()).a(126845200019705L);
   private static final String[] BoTju;
   private static final String[] bDxhm;
   private static final Map XiyBs = new HashMap(13);
   private static final long[] wXsxf;
   private static final Integer[] GTbia;
   private static final Map dwQBi;

   public pm() {
      long var1 = itXeZ ^ 38497583063063L;
      super(cOg<"s">(11639, 1826305503899758037L ^ var1), cOg<"s">(24776, 4441250135539802219L ^ var1));
      int[] var10004 = new int[cOj<"z">(5162, 5243217390020812933L ^ var1)];
      var10004[0] = cOj<"z">(19205, 2635759244874530726L ^ var1);
      var10004[1] = cOj<"z">(18589, 6856234038543694897L ^ var1);
      var10004[2] = cOj<"z">(11947, 3752039121765161478L ^ var1);
      var10004[3] = cOj<"z">(30454, 3519387648491389528L ^ var1);
      var10004[4] = cOj<"z">(4021, 2309671764517944081L ^ var1);
      var10004[5] = cOj<"z">(7858, 564241110621022727L ^ var1);
      var10004[cOj<"z">(29350, 218127361242826252L ^ var1)] = cOj<"z">(16226, 6843443921515957186L ^ var1);
      var10004[cOj<"z">(27591, 630945698569265009L ^ var1)] = cOj<"z">(11937, 4994642957390699012L ^ var1);
      this.wmwwQ = new cv(this, mr.clS(var10004)).Tm(1).Tl(true);
      this.UWuKt = new cw(
            this.wmwwQ,
            mr.clS(
               new int[]{
                  cOj<"z">(19404, 7921349065682992996L ^ var1),
                  cOj<"z">(12862, 3645641401586140831L ^ var1),
                  cOj<"z">(5504, 2092402290444362036L ^ var1),
                  cOj<"z">(27369, 1554631889027702350L ^ var1)
               }
            )
         )
         .Tz();
      this.GuPiN = new cw(
            this.wmwwQ,
            mr.clS(
               new int[]{
                  cOj<"z">(11470, 6916298783346481260L ^ var1),
                  cOj<"z">(4021, 2309671764517944081L ^ var1),
                  cOj<"z">(14386, 4538064842535816347L ^ var1),
                  cOj<"z">(16802, 2218026762893997321L ^ var1)
               }
            )
         )
         .Tz();
      this.position(pM.ODjfB);
   }

   static {
      long var11 = itXeZ ^ 20176128734507L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[3];
      int var18 = 0;
      String var17 = "\u0091\u0094├Ś dnV┬┐B\u001e┬Ż┬Ž\u001c├Ż\u00adO\u00107n├Ž├ő├╣@\u009d\u0005\u0002┬úO\u0086\u0098\u0011\u009e|\u0010┬ą├Ť\u0098┬╝c├Ö|\u0003\u009dK\u008e├Ő<├Ş\u008f\u009d";
      int var19 = "\u0091\u0094├Ś dnV┬┐B\u001e┬Ż┬Ž\u001c├Ż\u00adO\u00107n├Ž├ő├╣@\u009d\u0005\u0002┬úO\u0086\u0098\u0011\u009e|\u0010┬ą├Ť\u0098┬╝c├Ö|\u0003\u009dK\u008e├Ő<├Ş\u008f\u009d"
         .length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cOd(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            BoTju = var20;
            bDxhm = new String[3];
            dwQBi = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[19];
            int var3 = 0;
            String var4 = "├Ł┬Ž┬ą├ę\u001d┬╣\u008bp├Á$\u0006Z\u0015┬▓\u000e*├łoO\u0011:├Ç┬╣├óu├ç┬Ě├Ť7i├é┬ž├Č\u0017┬Ż}O├źF\u001c├╣R┬▓4\u0099├╗┬»*$F)\u001aX\tF\u0001d\u000fl\nC4n┬íy~┬ź├«SSO\u0006ps0\u0091┬▓k#┬Ż├«├Ç\u0086├Â├ô├ť{┬▓H├ś\bZ┬ź┬░┬ú\u0018H├Ç┬»o>├Ü\u001f\u008d\u007fJ\u0097\u008e&├ł├ł\u00ad├ÂK${:├Ü├źq\u0013├Áu├â├ô├Č%R┬ó├Ä\u0090├ś\u00942f├ş";
            int var5 = "├Ł┬Ž┬ą├ę\u001d┬╣\u008bp├Á$\u0006Z\u0015┬▓\u000e*├łoO\u0011:├Ç┬╣├óu├ç┬Ě├Ť7i├é┬ž├Č\u0017┬Ż}O├źF\u001c├╣R┬▓4\u0099├╗┬»*$F)\u001aX\tF\u0001d\u000fl\nC4n┬íy~┬ź├«SSO\u0006ps0\u0091┬▓k#┬Ż├«├Ç\u0086├Â├ô├ť{┬▓H├ś\bZ┬ź┬░┬ú\u0018H├Ç┬»o>├Ü\u001f\u008d\u007fJ\u0097\u008e&├ł├ł\u00ad├ÂK${:├Ü├źq\u0013├Áu├â├ô├Č%R┬ó├Ä\u0090├ś\u00942f├ş"
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
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
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           wXsxf = var6;
                           GTbia = new Integer[19];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "u#<T\u0097{├ą┬Â0├╗\u001f├ş┬╣├ö\u008a{";
                        var5 = "u#<T\u0097{├ą┬Â0├╗\u001f├ş┬╣├ö\u008a{".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   @Override
   public class_241 measure(lC param1, lc param2, class_1297 param3, boolean param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pm.itXeZ J
      // 003: ldc2_w 50899084850426
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 00c: aload 0
      // 00d: aload 2
      // 00e: aload 3
      // 00f: iload 4
      // 011: invokevirtual sixtwo/pm.cNZ (Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lsixtwo/pm$vv;
      // 014: astore 8
      // 016: astore 7
      // 018: aload 8
      // 01a: ifnonnull 026
      // 01d: aload 0
      // 01e: invokevirtual sixtwo/pm.cQL ()Lnet/minecraft/class_241;
      // 021: areturn
      // 022: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: fconst_0
      // 027: fstore 9
      // 029: fconst_0
      // 02a: fstore 10
      // 02c: fconst_0
      // 02d: fstore 11
      // 02f: aload 0
      // 030: getfield sixtwo/pm.wmwwQ Lsixtwo/cv;
      // 033: invokevirtual sixtwo/cv.Ts ()Ljava/util/List;
      // 036: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 03b: astore 12
      // 03d: aload 12
      // 03f: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 044: ifeq 132
      // 047: aload 12
      // 049: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04e: checkcast sixtwo/cw
      // 051: astore 13
      // 053: aload 13
      // 055: aload 0
      // 056: getfield sixtwo/pm.UWuKt Lsixtwo/cw;
      // 059: aload 7
      // 05b: ifnonnull 0d2
      // 05e: if_acmpne 0c5
      // 061: goto 068
      // 064: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: aload 8
      // 06a: invokevirtual sixtwo/pm$vv.iconOutput ()F
      // 06d: fstore 14
      // 06f: fload 14
      // 071: fconst_0
      // 072: aload 7
      // 074: ifnonnull 0b7
      // 077: fcmpl
      // 078: ifne 08e
      // 07b: goto 082
      // 07e: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 081: athrow
      // 082: aload 7
      // 084: ifnull 03d
      // 087: goto 08e
      // 08a: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08d: athrow
      // 08e: fload 9
      // 090: aload 0
      // 091: aload 8
      // 093: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 096: fload 11
      // 098: fload 14
      // 09a: invokevirtual sixtwo/pm.cOb (FFF)F
      // 09d: fadd
      // 09e: fstore 9
      // 0a0: fload 9
      // 0a2: aload 8
      // 0a4: invokevirtual sixtwo/pm$vv.iconWidth ()F
      // 0a7: fload 14
      // 0a9: fmul
      // 0aa: fadd
      // 0ab: fstore 9
      // 0ad: fload 10
      // 0af: aload 8
      // 0b1: invokevirtual sixtwo/pm$vv.iconHeight ()F
      // 0b4: fload 14
      // 0b6: fmul
      // 0b7: invokestatic java/lang/Math.max (FF)F
      // 0ba: fstore 10
      // 0bc: fload 14
      // 0be: fstore 11
      // 0c0: aload 7
      // 0c2: ifnull 12d
      // 0c5: aload 13
      // 0c7: aload 0
      // 0c8: getfield sixtwo/pm.GuPiN Lsixtwo/cw;
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: if_acmpne 12d
      // 0d5: aload 8
      // 0d7: invokevirtual sixtwo/pm$vv.textOutput ()F
      // 0da: fstore 14
      // 0dc: fload 14
      // 0de: fconst_0
      // 0df: aload 7
      // 0e1: ifnonnull 124
      // 0e4: fcmpl
      // 0e5: ifne 0fb
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: aload 7
      // 0f1: ifnull 03d
      // 0f4: goto 0fb
      // 0f7: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fa: athrow
      // 0fb: fload 9
      // 0fd: aload 0
      // 0fe: aload 8
      // 100: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 103: fload 11
      // 105: fload 14
      // 107: invokevirtual sixtwo/pm.cOb (FFF)F
      // 10a: fadd
      // 10b: fstore 9
      // 10d: fload 9
      // 10f: aload 8
      // 111: invokevirtual sixtwo/pm$vv.textWidth ()F
      // 114: fload 14
      // 116: fmul
      // 117: fadd
      // 118: fstore 9
      // 11a: fload 10
      // 11c: aload 8
      // 11e: invokevirtual sixtwo/pm$vv.textHeight ()F
      // 121: fload 14
      // 123: fmul
      // 124: invokestatic java/lang/Math.max (FF)F
      // 127: fstore 10
      // 129: fload 14
      // 12b: fstore 11
      // 12d: aload 7
      // 12f: ifnull 03d
      // 132: new net/minecraft/class_241
      // 135: dup
      // 136: fload 9
      // 138: aload 8
      // 13a: invokevirtual sixtwo/pm$vv.paddingX ()F
      // 13d: fconst_2
      // 13e: fmul
      // 13f: fadd
      // 140: fload 10
      // 142: aload 8
      // 144: invokevirtual sixtwo/pm$vv.paddingY ()F
      // 147: fconst_2
      // 148: fmul
      // 149: fadd
      // 14a: invokespecial net/minecraft/class_241.<init> (FF)V
      // 14d: areturn
   }

   @Override
   public void drawBox(lC param1, lc param2, lc param3, class_1297 param4, boolean param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pm.itXeZ J
      // 003: ldc2_w 52566065249975
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 00c: aload 0
      // 00d: aload 3
      // 00e: aload 4
      // 010: iload 5
      // 012: invokevirtual sixtwo/pm.cNZ (Lsixtwo/lc;Lnet/minecraft/class_1297;Z)Lsixtwo/pm$vv;
      // 015: astore 9
      // 017: astore 8
      // 019: aload 8
      // 01b: ifnonnull 03f
      // 01e: aload 9
      // 020: ifnonnull 02f
      // 023: goto 02a
      // 026: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 029: athrow
      // 02a: return
      // 02b: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02e: athrow
      // 02f: aload 0
      // 030: aload 1
      // 031: aload 2
      // 032: aload 9
      // 034: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 037: aload 9
      // 039: invokevirtual sixtwo/pm$vv.alpha ()F
      // 03c: invokevirtual sixtwo/pm.cRI (Lsixtwo/lC;Lsixtwo/lc;FF)V
      // 03f: aload 2
      // 040: invokevirtual sixtwo/lc.bXF ()F
      // 043: aload 9
      // 045: invokevirtual sixtwo/pm$vv.paddingX ()F
      // 048: fadd
      // 049: fstore 10
      // 04b: fconst_0
      // 04c: fstore 11
      // 04e: aload 0
      // 04f: getfield sixtwo/pm.wmwwQ Lsixtwo/cv;
      // 052: invokevirtual sixtwo/cv.Ts ()Ljava/util/List;
      // 055: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 05a: astore 12
      // 05c: aload 12
      // 05e: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 063: ifeq 192
      // 066: aload 12
      // 068: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 06d: checkcast sixtwo/cw
      // 070: astore 13
      // 072: aload 13
      // 074: aload 0
      // 075: getfield sixtwo/pm.UWuKt Lsixtwo/cw;
      // 078: aload 8
      // 07a: ifnonnull 113
      // 07d: if_acmpne 106
      // 080: goto 087
      // 083: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 086: athrow
      // 087: aload 9
      // 089: invokevirtual sixtwo/pm$vv.iconOutput ()F
      // 08c: fstore 14
      // 08e: fload 14
      // 090: fconst_0
      // 091: aload 8
      // 093: ifnonnull 0cf
      // 096: fcmpl
      // 097: ifne 0ad
      // 09a: goto 0a1
      // 09d: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a0: athrow
      // 0a1: aload 8
      // 0a3: ifnull 05c
      // 0a6: goto 0ad
      // 0a9: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: fload 10
      // 0af: aload 0
      // 0b0: aload 9
      // 0b2: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 0b5: fload 11
      // 0b7: fload 14
      // 0b9: invokevirtual sixtwo/pm.cOb (FFF)F
      // 0bc: fadd
      // 0bd: fstore 10
      // 0bf: aload 2
      // 0c0: invokevirtual sixtwo/lc.bXG ()F
      // 0c3: aload 9
      // 0c5: invokevirtual sixtwo/pm$vv.iconHeight ()F
      // 0c8: aload 2
      // 0c9: invokevirtual sixtwo/lc.bXI ()F
      // 0cc: invokestatic sixtwo/jf.bAH (FF)F
      // 0cf: fadd
      // 0d0: fstore 15
      // 0d2: aload 1
      // 0d3: fload 10
      // 0d5: fload 15
      // 0d7: aload 9
      // 0d9: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 0dc: aload 9
      // 0de: invokevirtual sixtwo/pm$vv.ping ()I
      // 0e1: aload 0
      // 0e2: aload 9
      // 0e4: invokevirtual sixtwo/pm$vv.alpha ()F
      // 0e7: fload 14
      // 0e9: fmul
      // 0ea: invokevirtual sixtwo/pm.cRH (F)Lsixtwo/mG;
      // 0ed: invokestatic sixtwo/le.bXO (Lsixtwo/lC;FFFILsixtwo/mG;)V
      // 0f0: fload 10
      // 0f2: aload 9
      // 0f4: invokevirtual sixtwo/pm$vv.iconWidth ()F
      // 0f7: fload 14
      // 0f9: fmul
      // 0fa: fadd
      // 0fb: fstore 10
      // 0fd: fload 14
      // 0ff: fstore 11
      // 101: aload 8
      // 103: ifnull 18d
      // 106: aload 13
      // 108: aload 0
      // 109: getfield sixtwo/pm.GuPiN Lsixtwo/cw;
      // 10c: goto 113
      // 10f: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: if_acmpne 18d
      // 116: aload 9
      // 118: invokevirtual sixtwo/pm$vv.textOutput ()F
      // 11b: fstore 14
      // 11d: fload 14
      // 11f: fconst_0
      // 120: aload 8
      // 122: ifnonnull 15e
      // 125: fcmpl
      // 126: ifne 13c
      // 129: goto 130
      // 12c: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12f: athrow
      // 130: aload 8
      // 132: ifnull 05c
      // 135: goto 13c
      // 138: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13b: athrow
      // 13c: fload 10
      // 13e: aload 0
      // 13f: aload 9
      // 141: invokevirtual sixtwo/pm$vv.renderScale ()F
      // 144: fload 11
      // 146: fload 14
      // 148: invokevirtual sixtwo/pm.cOb (FFF)F
      // 14b: fadd
      // 14c: fstore 10
      // 14e: aload 2
      // 14f: invokevirtual sixtwo/lc.bXG ()F
      // 152: aload 9
      // 154: invokevirtual sixtwo/pm$vv.textHeight ()F
      // 157: aload 2
      // 158: invokevirtual sixtwo/lc.bXI ()F
      // 15b: invokestatic sixtwo/jf.bAH (FF)F
      // 15e: fadd
      // 15f: fstore 15
      // 161: aload 0
      // 162: aload 1
      // 163: aload 9
      // 165: invokevirtual sixtwo/pm$vv.font ()Lsixtwo/lq;
      // 168: aload 9
      // 16a: invokevirtual sixtwo/pm$vv.text ()Ljava/lang/String;
      // 16d: fload 10
      // 16f: fload 15
      // 171: aload 9
      // 173: invokevirtual sixtwo/pm$vv.alpha ()F
      // 176: fload 14
      // 178: fmul
      // 179: invokevirtual sixtwo/pm.cRG (Lsixtwo/lC;Lsixtwo/lq;Ljava/lang/String;FFF)V
      // 17c: fload 10
      // 17e: aload 9
      // 180: invokevirtual sixtwo/pm$vv.textWidth ()F
      // 183: fload 14
      // 185: fmul
      // 186: fadd
      // 187: fstore 10
      // 189: fload 14
      // 18b: fstore 11
      // 18d: aload 8
      // 18f: ifnull 05c
      // 192: return
   }

   @Override
   protected String cNC(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pm.itXeZ J
      // 03: ldc2_w 61235390587519
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: iload 2
      // 0e: invokevirtual sixtwo/pm.cOa (Lnet/minecraft/class_1297;Z)I
      // 11: istore 6
      // 13: astore 5
      // 15: iload 6
      // 17: aload 5
      // 19: ifnonnull 2e
      // 1c: ifge 2c
      // 1f: goto 26
      // 22: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aconst_null
      // 27: areturn
      // 28: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: iload 6
      // 2e: sipush 31324
      // 31: ldc2_w 5230816299621464212
      // 34: lload 3
      // 35: lxor
      // 36: invokedynamic s (IJ)Ljava/lang/String; bsm=sixtwo/pm.cOg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3b: invokedynamic makeConcatWithConstants (ILjava/lang/String;)Ljava/lang/String; bsm=java/lang/invoke/StringConcatFactory.makeConcatWithConstants (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/invoke/CallSite; args=[ "\u0001\u0001" ]
      // 40: areturn
   }

   private static MatchException cOc(MatchException var0) {
      return var0;
   }

   private static CallSite cOj(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOi".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pm" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cOe(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5235;
      if (bDxhm[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])XiyBs.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               XiyBs.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pm", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = BoTju[var5].getBytes("ISO-8859-1");
         bDxhm[var5] = cOd(((Cipher)var4[0]).doFinal(var9));
      }

      return bDxhm[var5];
   }

   private static Object cOf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cOe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private pm$vv cNZ(lc param1, class_1297 param2, boolean param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pm.itXeZ J
      // 03: ldc2_w 91963593878792
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0c: aload 0
      // 0d: aload 2
      // 0e: iload 3
      // 0f: invokevirtual sixtwo/pm.cRJ (Lnet/minecraft/class_1297;Z)Ljava/lang/String;
      // 12: astore 7
      // 14: astore 6
      // 16: aload 0
      // 17: aload 2
      // 18: iload 3
      // 19: invokevirtual sixtwo/pm.cOa (Lnet/minecraft/class_1297;Z)I
      // 1c: istore 8
      // 1e: aload 7
      // 20: aload 6
      // 22: ifnonnull 31
      // 25: ifnull 48
      // 28: goto 2f
      // 2b: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 7
      // 31: invokevirtual java/lang/String.isBlank ()Z
      // 34: aload 6
      // 36: ifnonnull 45
      // 39: ifne 48
      // 3c: goto 43
      // 3f: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: iload 8
      // 45: ifge 4e
      // 48: aconst_null
      // 49: areturn
      // 4a: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: aload 0
      // 4f: getfield sixtwo/pm.UWuKt Lsixtwo/cw;
      // 52: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 55: aload 0
      // 56: getfield sixtwo/pm.UWuKt Lsixtwo/cw;
      // 59: invokevirtual sixtwo/cw.TC ()Z
      // 5c: invokevirtual sixtwo/rk.dhc (Z)V
      // 5f: aload 0
      // 60: getfield sixtwo/pm.GuPiN Lsixtwo/cw;
      // 63: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 66: aload 0
      // 67: getfield sixtwo/pm.GuPiN Lsixtwo/cw;
      // 6a: invokevirtual sixtwo/cw.TC ()Z
      // 6d: invokevirtual sixtwo/rk.dhc (Z)V
      // 70: aload 0
      // 71: getfield sixtwo/pm.UWuKt Lsixtwo/cw;
      // 74: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 77: invokevirtual sixtwo/rk.dhj ()F
      // 7a: fstore 9
      // 7c: aload 0
      // 7d: getfield sixtwo/pm.GuPiN Lsixtwo/cw;
      // 80: invokevirtual sixtwo/cw.TI ()Lsixtwo/rk;
      // 83: invokevirtual sixtwo/rk.dhj ()F
      // 86: fstore 10
      // 88: fload 9
      // 8a: aload 6
      // 8c: ifnonnull c1
      // 8f: fconst_0
      // 90: fcmpl
      // 91: ifne bb
      // 94: goto 9b
      // 97: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: fload 10
      // 9d: aload 6
      // 9f: ifnonnull c1
      // a2: goto a9
      // a5: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a8: athrow
      // a9: fconst_0
      // aa: fcmpl
      // ab: ifne bb
      // ae: goto b5
      // b1: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b4: athrow
      // b5: aconst_null
      // b6: areturn
      // b7: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ba: athrow
      // bb: aload 0
      // bc: aload 1
      // bd: iload 3
      // be: invokevirtual sixtwo/pm.cQJ (Lsixtwo/lc;Z)F
      // c1: fstore 11
      // c3: aload 0
      // c4: fconst_1
      // c5: fload 11
      // c7: invokevirtual sixtwo/pm.cQI (FF)F
      // ca: fstore 12
      // cc: new sixtwo/pm$vv
      // cf: dup
      // d0: aload 7
      // d2: aload 0
      // d3: fload 11
      // d5: invokevirtual sixtwo/pm.cRL (F)Lsixtwo/lq;
      // d8: fload 11
      // da: aload 0
      // db: iload 3
      // dc: invokevirtual sixtwo/pm.cQM (Z)F
      // df: fload 12
      // e1: fload 12
      // e3: iload 8
      // e5: fload 9
      // e7: fload 10
      // e9: invokespecial sixtwo/pm$vv.<init> (Ljava/lang/String;Lsixtwo/lq;FFFFIFF)V
      // ec: areturn
   }

   private static CallSite cOg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cOf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pm" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cOd(byte[] var0) {
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

   private int cOa(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pm.itXeZ J
      // 03: ldc2_w 120561264464830
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: iload 2
      // 0e: aload 5
      // 10: ifnonnull 33
      // 13: ifeq 2f
      // 16: goto 1d
      // 19: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: sipush 25653
      // 20: ldc2_w 8462899350398329658
      // 23: lload 3
      // 24: lxor
      // 25: invokedynamic z (IJ)I bsm=sixtwo/pm.cOj (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: ireturn
      // 2b: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2e: athrow
      // 2f: aload 1
      // 30: instanceof net/minecraft/class_1657
      // 33: aload 5
      // 35: ifnonnull 55
      // 38: ifeq 4d
      // 3b: goto 42
      // 3e: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 1
      // 43: checkcast net/minecraft/class_1657
      // 46: astore 6
      // 48: aload 5
      // 4a: ifnull 56
      // 4d: bipush -1
      // 4e: goto 55
      // 51: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: ireturn
      // 56: bipush 0
      // 57: aload 6
      // 59: invokestatic sixtwo/jg.bBx (Lnet/minecraft/class_1657;)I
      // 5c: invokestatic java/lang/Math.max (II)I
      // 5f: ireturn
   }

   private float cOb(float param1, float param2, float param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pm.itXeZ J
      // 03: ldc2_w 42802218908643
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/pq.cOM ()Ljava/lang/String;
      // 0c: astore 6
      // 0e: fload 2
      // 0f: fconst_0
      // 10: aload 6
      // 12: ifnonnull 31
      // 15: fcmpl
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: fconst_0
      // 21: freturn
      // 22: invokestatic sixtwo/pm.cOc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: fconst_2
      // 28: fload 1
      // 29: invokevirtual sixtwo/pm.cQI (FF)F
      // 2c: fload 2
      // 2d: fload 3
      // 2e: invokestatic java/lang/Math.min (FF)F
      // 31: fmul
      // 32: freturn
   }

   private static int cOh(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24693;
      if (GTbia[var3] == null) {
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
         long var5 = wXsxf[var3];
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
         Object[] var9 = (Object[])dwQBi.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               dwQBi.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pm", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         GTbia[var3] = var15;
      }

      return GTbia[var3];
   }

   private static int cOi(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cOh(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
