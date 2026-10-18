package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1799;
import net.minecraft.class_241;

public class pw extends py implements pz {
   private final pD aOASd;
   private final cJ OloIp;
   private static final long IKziL = gb.aYR(-5794470918470730534L, -7543978674238232209L, MethodHandles.lookup().lookupClass()).a(260206726731924L);
   private static final String[] JjFpr;
   private static final String[] DWrFD;
   private static final Map IENpm = new HashMap(13);
   private static final long[] oZrxe;
   private static final Integer[] nXGGC;
   private static final Map PZzkR;

   public pw() {
      long var1 = IKziL ^ 66768316463920L;
      super(cQl<"f">(20513, 4916489172742448749L ^ var1), cQl<"f">(24606, 1282149189679978067L ^ var1), 1.25);
      this.aOASd = new pD(this).cSd(true);
      pv.cPR();
      int[] var10005 = new int[cQo<"v">(11087, 944581307658712625L ^ var1)];
      var10005[0] = cQo<"v">(17367, 8583468219983552165L ^ var1);
      var10005[1] = cQo<"v">(13471, 803512653144861156L ^ var1);
      var10005[2] = cQo<"v">(27631, 6726420529790776986L ^ var1);
      var10005[3] = cQo<"v">(32556, 678069662759608911L ^ var1);
      var10005[4] = cQo<"v">(14842, 7580935058188641434L ^ var1);
      var10005[5] = cQo<"v">(9267, 8105121174310172992L ^ var1);
      var10005[cQo<"v">(10367, 5204671449474118912L ^ var1)] = cQo<"v">(29397, 72381934242951080L ^ var1);
      var10005[cQo<"v">(588, 824291959931445046L ^ var1)] = cQo<"v">(12046, 4724686804885779065L ^ var1);
      var10005[cQo<"v">(23158, 8549521064396015362L ^ var1)] = cQo<"v">(1592, 2380033851885132608L ^ var1);
      var10005[cQo<"v">(4601, 2988845760558173320L ^ var1)] = cQo<"v">(26759, 692853784880674295L ^ var1);
      this.OloIp = new cJ(this, mr.clS(var10005)).WE(true);

      try {
         this.position(pM.gvTMb);
         this.aOASd.cSn().VA(50.0);
         if (iS.bwL() == null) {
            pv.cPQ("I96q1b");
         }
      } catch (MatchException var4) {
         throw cQh(var4);
      }
   }

   static {
      long var11 = IKziL ^ 92365587332259L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "\u0094\"b├ö├ć├ľI├▓B├┤s\u008668\u0080├Ł\u0010├Ç\u008b├Ć=:\u0099├Ö├ÇA\u0096\u009f\u0018\u00159z├É";
      int var19 = "\u0094\"b├ö├ć├ľI├▓B├┤s\u008668\u0080├Ł\u0010├Ç\u008b├Ć=:\u0099├Ö├ÇA\u0096\u009f\u0018\u00159z├É".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = cQi(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            JjFpr = var20;
            DWrFD = new String[2];
            PZzkR = new HashMap(13);
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
            String var4 = "├»├Ćk├║\u00146├á├Ü\u0000T├íK┬┐\u0012\u0002\u009f\u000e├Ś├ź-&LX├ö\u001e├ô├Ć2\u008d\u009a├Â├ú\u008e├Ç\u0004{\u008c\u009f├ć\u008d├â├é2\u0092]├ś├▓RC+)}#\u009f\u0016├Ą\u0012├é\u0001[\u0096\u0004├ś,├«┬í]@├ÇIW\u008a├Č┬┤z\u00adGo\u00197\u009dP\u008c├Ö┬┤>A\u0014┬¬\u0000┬íh├ÜH├Ę6\t┬╝\u0084:[\u0019F├ľ┬ż┬Ě┬Ą┬ęfz├ü├ô\tsI\u0095' \n/G\u0000cnw├ö%\u0005k/\u001cMY]├»1├Ž├┤├ä8├óT\u0003┬á";
            int var5 = "├»├Ćk├║\u00146├á├Ü\u0000T├íK┬┐\u0012\u0002\u009f\u000e├Ś├ź-&LX├ö\u001e├ô├Ć2\u008d\u009a├Â├ú\u008e├Ç\u0004{\u008c\u009f├ć\u008d├â├é2\u0092]├ś├▓RC+)}#\u009f\u0016├Ą\u0012├é\u0001[\u0096\u0004├ś,├«┬í]@├ÇIW\u008a├Č┬┤z\u00adGo\u00197\u009dP\u008c├Ö┬┤>A\u0014┬¬\u0000┬íh├ÜH├Ę6\t┬╝\u0084:[\u0019F├ľ┬ż┬Ě┬Ą┬ęfz├ü├ô\tsI\u0095' \n/G\u0000cnw├ö%\u0005k/\u001cMY]├»1├Ž├┤├ä8├óT\u0003┬á"
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
                           oZrxe = var6;
                           nXGGC = new Integer[20];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "├Ľj├×\b┬╗┬»^├Ç\u0084├č\u001e\u008f┬ú#\\\u0084";
                        var5 = "├Ľj├×\b┬╗┬»^├Ç\u0084├č\u001e\u008f┬ú#\\\u0084".length();
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
      // 00: getstatic sixtwo/pw.IKziL J
      // 03: ldc2_w 129251797054782
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0c: aload 0
      // 0d: aload 3
      // 0e: iload 4
      // 10: invokevirtual sixtwo/pw.cQd (Lnet/minecraft/class_1297;Z)Ljava/util/List;
      // 13: astore 8
      // 15: astore 7
      // 17: aload 8
      // 19: invokeinterface java/util/List.isEmpty ()Z 1
      // 1e: ifeq 2a
      // 21: aload 0
      // 22: invokevirtual sixtwo/pw.cQL ()Lnet/minecraft/class_241;
      // 25: areturn
      // 26: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: aload 2
      // 2c: iload 4
      // 2e: invokevirtual sixtwo/pw.cQJ (Lsixtwo/lc;Z)F
      // 31: fstore 9
      // 33: aload 0
      // 34: aload 7
      // 36: ifnonnull 59
      // 39: getfield sixtwo/pw.OloIp Lsixtwo/cJ;
      // 3c: invokevirtual sixtwo/cJ.WF ()Z
      // 3f: ifeq 58
      // 42: goto 49
      // 45: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 0
      // 4a: aload 8
      // 4c: fload 9
      // 4e: invokevirtual sixtwo/pw.cQb (Ljava/util/List;F)F
      // 51: goto 69
      // 54: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: aload 0
      // 59: fload 9
      // 5b: invokevirtual sixtwo/pw.cQg (F)F
      // 5e: aload 0
      // 5f: ldc 16.0
      // 61: fload 9
      // 63: invokevirtual sixtwo/pw.cQI (FF)F
      // 66: invokestatic java/lang/Math.max (FF)F
      // 69: fstore 10
      // 6b: aload 8
      // 6d: invokeinterface java/util/List.size ()I 1
      // 72: i2f
      // 73: aload 0
      // 74: ldc 16.0
      // 76: fload 9
      // 78: invokevirtual sixtwo/pw.cQI (FF)F
      // 7b: fmul
      // 7c: bipush 0
      // 7d: aload 8
      // 7f: invokeinterface java/util/List.size ()I 1
      // 84: bipush 1
      // 85: isub
      // 86: invokestatic java/lang/Math.max (II)I
      // 89: i2f
      // 8a: aload 0
      // 8b: fconst_2
      // 8c: fload 9
      // 8e: invokevirtual sixtwo/pw.cQI (FF)F
      // 91: fmul
      // 92: fadd
      // 93: fstore 11
      // 95: new net/minecraft/class_241
      // 98: dup
      // 99: fload 10
      // 9b: fload 11
      // 9d: invokespecial net/minecraft/class_241.<init> (FF)V
      // a0: areturn
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
      // 00: getstatic sixtwo/pw.IKziL J
      // 03: ldc2_w 127585879687027
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0c: aload 0
      // 0d: aload 4
      // 0f: iload 5
      // 11: invokevirtual sixtwo/pw.cQd (Lnet/minecraft/class_1297;Z)Ljava/util/List;
      // 14: astore 9
      // 16: astore 8
      // 18: aload 9
      // 1a: invokeinterface java/util/List.isEmpty ()Z 1
      // 1f: ifeq 27
      // 22: return
      // 23: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 0
      // 28: iload 5
      // 2a: invokevirtual sixtwo/pw.cQM (Z)F
      // 2d: fstore 10
      // 2f: fload 10
      // 31: aload 8
      // 33: ifnonnull 4e
      // 36: fconst_0
      // 37: fcmpl
      // 38: ifne 47
      // 3b: goto 42
      // 3e: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: return
      // 43: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 0
      // 48: aload 3
      // 49: iload 5
      // 4b: invokevirtual sixtwo/pw.cQJ (Lsixtwo/lc;Z)F
      // 4e: fstore 11
      // 50: aload 0
      // 51: ldc 0.5
      // 53: fload 11
      // 55: invokevirtual sixtwo/pw.cQI (FF)F
      // 58: fstore 12
      // 5a: ldc 16.0
      // 5c: fload 12
      // 5e: fmul
      // 5f: fstore 13
      // 61: aload 0
      // 62: ldc 16.0
      // 64: fload 11
      // 66: invokevirtual sixtwo/pw.cQI (FF)F
      // 69: fstore 14
      // 6b: aload 0
      // 6c: fconst_2
      // 6d: fload 11
      // 6f: invokevirtual sixtwo/pw.cQI (FF)F
      // 72: fstore 15
      // 74: aload 0
      // 75: fload 11
      // 77: invokevirtual sixtwo/pw.cQf (F)Lsixtwo/lq;
      // 7a: astore 16
      // 7c: aload 2
      // 7d: invokevirtual sixtwo/lc.bXG ()F
      // 80: fstore 17
      // 82: aload 9
      // 84: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 89: astore 18
      // 8b: aload 18
      // 8d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 92: ifeq cd
      // 95: aload 18
      // 97: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 9c: checkcast net/minecraft/class_1799
      // 9f: astore 19
      // a1: aload 0
      // a2: aload 1
      // a3: aload 19
      // a5: aload 2
      // a6: invokevirtual sixtwo/lc.bXF ()F
      // a9: fload 17
      // ab: aload 2
      // ac: invokevirtual sixtwo/lc.bXH ()F
      // af: fload 14
      // b1: fload 12
      // b3: fload 13
      // b5: aload 16
      // b7: fload 11
      // b9: fload 10
      // bb: invokevirtual sixtwo/pw.cQa (Lsixtwo/lC;Lnet/minecraft/class_1799;FFFFFFLsixtwo/lq;FF)V
      // be: fload 17
      // c0: fload 14
      // c2: fload 15
      // c4: fadd
      // c5: fadd
      // c6: fstore 17
      // c8: aload 8
      // ca: ifnull 8b
      // cd: return
   }

   private void cQa(
      lC param1, class_1799 param2, float param3, float param4, float param5, float param6, float param7, float param8, lq param9, float param10, float param11
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pw.IKziL J
      // 03: ldc2_w 43469895539471
      // 06: lxor
      // 07: lstore 12
      // 09: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0c: aload 0
      // 0d: getfield sixtwo/pw.aOASd Lsixtwo/pD;
      // 10: aload 1
      // 11: new sixtwo/lc
      // 14: dup
      // 15: fload 3
      // 16: fload 4
      // 18: fload 5
      // 1a: fload 6
      // 1c: invokespecial sixtwo/lc.<init> (FFFF)V
      // 1f: fload 10
      // 21: fload 11
      // 23: invokevirtual sixtwo/pD.cSe (Lsixtwo/lC;Lsixtwo/lc;FF)V
      // 26: astore 14
      // 28: aload 0
      // 29: getfield sixtwo/pw.OloIp Lsixtwo/cJ;
      // 2c: invokevirtual sixtwo/cJ.WF ()Z
      // 2f: ifeq 44
      // 32: fload 3
      // 33: aload 0
      // 34: ldc_w 5.0
      // 37: fload 10
      // 39: invokevirtual sixtwo/pw.cQI (FF)F
      // 3c: fadd
      // 3d: goto 4d
      // 40: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: fload 3
      // 45: fload 8
      // 47: fload 5
      // 49: invokestatic sixtwo/jf.bAH (FF)F
      // 4c: fadd
      // 4d: fstore 15
      // 4f: fload 4
      // 51: fload 8
      // 53: fload 6
      // 55: invokestatic sixtwo/jf.bAH (FF)F
      // 58: fadd
      // 59: fstore 16
      // 5b: aload 0
      // 5c: aload 1
      // 5d: aload 2
      // 5e: fload 15
      // 60: fload 16
      // 62: fload 7
      // 64: fload 11
      // 66: invokevirtual sixtwo/pw.cQK (Lsixtwo/lC;Lnet/minecraft/class_1799;FFFF)V
      // 69: aload 0
      // 6a: aload 14
      // 6c: ifnonnull 85
      // 6f: getfield sixtwo/pw.OloIp Lsixtwo/cJ;
      // 72: invokevirtual sixtwo/cJ.WF ()Z
      // 75: ifne 84
      // 78: goto 7f
      // 7b: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: return
      // 80: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 83: athrow
      // 84: aload 0
      // 85: aload 2
      // 86: invokevirtual sixtwo/pw.cQc (Lnet/minecraft/class_1799;)Ljava/lang/String;
      // 89: astore 17
      // 8b: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 8e: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 91: ldc_w 255.0
      // 94: fload 11
      // 96: fmul
      // 97: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 9a: astore 18
      // 9c: fload 15
      // 9e: fload 8
      // a0: fadd
      // a1: aload 0
      // a2: fconst_2
      // a3: fload 10
      // a5: invokevirtual sixtwo/pw.cQI (FF)F
      // a8: fadd
      // a9: fstore 19
      // ab: fload 4
      // ad: aload 9
      // af: invokevirtual sixtwo/lq.cat ()F
      // b2: fload 6
      // b4: invokestatic sixtwo/jf.bAH (FF)F
      // b7: fadd
      // b8: fstore 20
      // ba: aload 1
      // bb: aload 9
      // bd: aload 17
      // bf: fload 19
      // c1: fload 20
      // c3: aload 18
      // c5: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // c8: return
   }

   private float cQb(List<class_1799> var1, float var2) {
      long var3 = IKziL ^ 39800800960345L;
      lq var6 = this.cQf(var2);
      String var10000 = pv.cPR();
      float var7 = 0.0F;
      String var5 = var10000;
      Iterator var8 = var1.iterator();

      while (true) {
         if (var8.hasNext()) {
            class_1799 var9 = (class_1799)var8.next();
            var10 = Math.max(var7, var6.cao(this.cQc(var9)));
            if (var5 != null) {
               break;
            }

            var7 = var10;
            if (var5 == null) {
               continue;
            }
         }

         var10 = this.cQI(5.0F, var2) + this.cQg(var2) + this.cQI(2.0F, var2) + var7 + this.cQI(5.0F, var2);
         break;
      }

      return var10;
   }

   private static String cQi(byte[] var0) {
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

   private static Object cQk(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cQj(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cQm(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4929;
      if (nXGGC[var3] == null) {
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
         long var5 = oZrxe[var3];
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
         Object[] var9 = (Object[])PZzkR.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               PZzkR.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pw", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         nXGGC[var3] = var15;
      }

      return nXGGC[var3];
   }

   private lq cQf(float var1) {
      return lE.joxgd.bYM(this.cQI(7.0F, var1));
   }

   private class_1799 cQe(class_1799 param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pw.IKziL J
      // 03: ldc2_w 130433453491189
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: invokevirtual net/minecraft/class_1799.method_7963 ()Z
      // 11: aload 5
      // 13: ifnonnull 39
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: areturn
      // 22: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: iload 2
      // 27: i2l
      // 28: bipush 0
      // 29: sipush 21663
      // 2c: ldc2_w 1973098799311597883
      // 2f: lload 3
      // 30: lxor
      // 31: invokedynamic v (IJ)I bsm=sixtwo/pw.cQo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: invokestatic java/lang/Math.clamp (JII)I
      // 39: istore 6
      // 3b: aload 1
      // 3c: invokevirtual net/minecraft/class_1799.method_7936 ()I
      // 3f: i2f
      // 40: ldc_w 100.0
      // 43: iload 6
      // 45: i2f
      // 46: fsub
      // 47: fmul
      // 48: ldc_w 100.0
      // 4b: fdiv
      // 4c: invokestatic java/lang/Math.round (F)I
      // 4f: istore 7
      // 51: aload 1
      // 52: iload 7
      // 54: invokevirtual net/minecraft/class_1799.method_7974 (I)V
      // 57: aload 1
      // 58: areturn
   }

   private static CallSite cQo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cQn".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private List<class_1799> cQd(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pw.IKziL J
      // 003: ldc2_w 70323483191779
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: invokespecial java/util/ArrayList.<init> ()V
      // 012: astore 6
      // 014: astore 5
      // 016: iload 2
      // 017: aload 5
      // 019: ifnonnull 0b9
      // 01c: ifeq 0a9
      // 01f: goto 026
      // 022: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: aload 6
      // 028: aload 0
      // 029: getstatic net/minecraft/class_1802.field_22027 Lnet/minecraft/class_1792;
      // 02c: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 02f: sipush 24650
      // 032: ldc2_w 4655064873042980847
      // 035: lload 3
      // 036: lxor
      // 037: invokedynamic v (IJ)I bsm=sixtwo/pw.cQo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 03c: invokevirtual sixtwo/pw.cQe (Lnet/minecraft/class_1799;I)Lnet/minecraft/class_1799;
      // 03f: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 044: pop
      // 045: aload 6
      // 047: aload 0
      // 048: getstatic net/minecraft/class_1802.field_22028 Lnet/minecraft/class_1792;
      // 04b: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 04e: sipush 3256
      // 051: ldc2_w 8356173517209486098
      // 054: lload 3
      // 055: lxor
      // 056: invokedynamic v (IJ)I bsm=sixtwo/pw.cQo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05b: invokevirtual sixtwo/pw.cQe (Lnet/minecraft/class_1799;I)Lnet/minecraft/class_1799;
      // 05e: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 063: pop
      // 064: aload 6
      // 066: aload 0
      // 067: getstatic net/minecraft/class_1802.field_22029 Lnet/minecraft/class_1792;
      // 06a: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 06d: sipush 29194
      // 070: ldc2_w 115112350024416677
      // 073: lload 3
      // 074: lxor
      // 075: invokedynamic v (IJ)I bsm=sixtwo/pw.cQo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 07a: invokevirtual sixtwo/pw.cQe (Lnet/minecraft/class_1799;I)Lnet/minecraft/class_1799;
      // 07d: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 082: pop
      // 083: aload 6
      // 085: aload 0
      // 086: getstatic net/minecraft/class_1802.field_22030 Lnet/minecraft/class_1792;
      // 089: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 08c: sipush 4254
      // 08f: ldc2_w 2055266212844101423
      // 092: lload 3
      // 093: lxor
      // 094: invokedynamic v (IJ)I bsm=sixtwo/pw.cQo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 099: invokevirtual sixtwo/pw.cQe (Lnet/minecraft/class_1799;I)Lnet/minecraft/class_1799;
      // 09c: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0a1: pop
      // 0a2: aload 6
      // 0a4: areturn
      // 0a5: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: aload 1
      // 0aa: aload 5
      // 0ac: ifnonnull 0bd
      // 0af: instanceof net/minecraft/class_1309
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: ifeq 0c7
      // 0bc: aload 1
      // 0bd: checkcast net/minecraft/class_1309
      // 0c0: astore 7
      // 0c2: aload 5
      // 0c4: ifnull 0ce
      // 0c7: aload 6
      // 0c9: areturn
      // 0ca: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cd: athrow
      // 0ce: aload 7
      // 0d0: invokestatic sixtwo/oP.cJr (Lnet/minecraft/class_1309;)Lsixtwo/oQ;
      // 0d3: invokevirtual sixtwo/oQ.cJE ()Ljava/util/List;
      // 0d6: astore 8
      // 0d8: aload 8
      // 0da: invokeinterface java/util/List.size ()I 1
      // 0df: bipush 1
      // 0e0: isub
      // 0e1: istore 9
      // 0e3: iload 9
      // 0e5: iflt 123
      // 0e8: aload 8
      // 0ea: iload 9
      // 0ec: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 0f1: checkcast net/minecraft/class_1799
      // 0f4: astore 10
      // 0f6: aload 5
      // 0f8: ifnonnull 11e
      // 0fb: aload 10
      // 0fd: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 100: ifne 11b
      // 103: goto 10a
      // 106: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: aload 6
      // 10c: aload 10
      // 10e: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 113: pop
      // 114: goto 11b
      // 117: invokestatic sixtwo/pw.cQh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11a: athrow
      // 11b: iinc 9 -1
      // 11e: aload 5
      // 120: ifnull 0e3
      // 123: aload 6
      // 125: areturn
   }

   private String cQc(class_1799 var1) {
      return jc.bze(var1) + "%";
   }

   private static MatchException cQh(MatchException var0) {
      return var0;
   }

   private static int cQn(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cQm(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private float cQg(float var1) {
      return 16.0F * this.cQI(0.5F, var1);
   }

   private static String cQj(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 30846;
      if (DWrFD[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])IENpm.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               IENpm.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pw", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = JjFpr[var5].getBytes("ISO-8859-1");
         DWrFD[var5] = cQi(((Cipher)var4[0]).doFinal(var9));
      }

      return DWrFD[var5];
   }

   private static CallSite cQl(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cQk".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pw" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
