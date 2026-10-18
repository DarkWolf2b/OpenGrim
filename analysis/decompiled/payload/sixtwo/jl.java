package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.Set;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2341;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_2680;
import net.minecraft.class_2738;

public class jl {
   private static final Set<class_2248> oVDJL;
   private static final long cuNqa = gb.aYR(2255017921502474544L, 6876587141982224328L, MethodHandles.lookup().lookupClass()).a(261621804693976L);

   public static class_2338 bDO(class_2338 param0, boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jl.cuNqa J
      // 003: ldc2_w 31313747459656
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 00b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 011: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 014: aload 0
      // 015: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 018: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 01b: astore 5
      // 01d: astore 4
      // 01f: new net/minecraft/class_243
      // 022: dup
      // 023: aload 5
      // 025: getfield net/minecraft/class_243.field_1352 D
      // 028: dconst_0
      // 029: aload 5
      // 02b: getfield net/minecraft/class_243.field_1350 D
      // 02e: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 031: astore 6
      // 033: aload 6
      // 035: invokevirtual net/minecraft/class_243.method_1027 ()D
      // 038: ldc2_w 9.999999747378752E-6
      // 03b: dcmpl
      // 03c: aload 4
      // 03e: ifnull 04c
      // 041: ifle 11c
      // 044: goto 04b
      // 047: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: iload 1
      // 04c: aload 4
      // 04e: ifnull 0b0
      // 051: ifeq 098
      // 054: goto 05b
      // 057: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: aload 6
      // 05d: getfield net/minecraft/class_243.field_1352 D
      // 060: aload 6
      // 062: getfield net/minecraft/class_243.field_1350 D
      // 065: invokestatic java/lang/Math.atan2 (DD)D
      // 068: dstore 9
      // 06a: ldc2_w 0.7853981633974483
      // 06d: dstore 11
      // 06f: dload 9
      // 071: dload 11
      // 073: ddiv
      // 074: invokestatic java/lang/Math.round (D)J
      // 077: l2d
      // 078: dload 11
      // 07a: dmul
      // 07b: dstore 13
      // 07d: dload 13
      // 07f: invokestatic java/lang/Math.sin (D)D
      // 082: invokestatic java/lang/Math.round (D)J
      // 085: l2i
      // 086: istore 7
      // 088: dload 13
      // 08a: invokestatic java/lang/Math.cos (D)D
      // 08d: invokestatic java/lang/Math.round (D)J
      // 090: l2i
      // 091: istore 8
      // 093: aload 4
      // 095: ifnonnull 112
      // 098: aload 6
      // 09a: getfield net/minecraft/class_243.field_1352 D
      // 09d: invokestatic java/lang/Math.abs (D)D
      // 0a0: aload 6
      // 0a2: getfield net/minecraft/class_243.field_1350 D
      // 0a5: invokestatic java/lang/Math.abs (D)D
      // 0a8: dcmpl
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 4
      // 0b2: ifnull 0f3
      // 0b5: ifle 0eb
      // 0b8: goto 0bf
      // 0bb: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0be: athrow
      // 0bf: aload 6
      // 0c1: getfield net/minecraft/class_243.field_1352 D
      // 0c4: dconst_0
      // 0c5: dcmpl
      // 0c6: aload 4
      // 0c8: ifnull 0dd
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: ifle 0e0
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: bipush 1
      // 0dd: goto 0e1
      // 0e0: bipush -1
      // 0e1: istore 7
      // 0e3: bipush 0
      // 0e4: istore 8
      // 0e6: aload 4
      // 0e8: ifnonnull 112
      // 0eb: bipush 0
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: istore 7
      // 0f5: aload 6
      // 0f7: getfield net/minecraft/class_243.field_1350 D
      // 0fa: dconst_0
      // 0fb: dcmpl
      // 0fc: aload 4
      // 0fe: ifnull 10c
      // 101: ifle 10f
      // 104: goto 10b
      // 107: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10a: athrow
      // 10b: bipush 1
      // 10c: goto 110
      // 10f: bipush -1
      // 110: istore 8
      // 112: aload 0
      // 113: iload 7
      // 115: bipush 0
      // 116: iload 8
      // 118: invokevirtual net/minecraft/class_2338.method_10069 (III)Lnet/minecraft/class_2338;
      // 11b: areturn
      // 11c: aload 0
      // 11d: bipush 1
      // 11e: bipush 0
      // 11f: bipush 0
      // 120: invokevirtual net/minecraft/class_2338.method_10069 (III)Lnet/minecraft/class_2338;
      // 123: areturn
   }

   public static class_2338 bDP(class_2338 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 1476210408779
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 11: aload 0
      // 12: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 15: astore 4
      // 17: astore 3
      // 18: aload 4
      // 1a: aload 3
      // 1b: ifnull 37
      // 1e: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 21: instanceof net/minecraft/class_2341
      // 24: ifeq 46
      // 27: goto 2e
      // 2a: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 4
      // 30: goto 37
      // 33: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: invokestatic sixtwo/jl.bDS (Lnet/minecraft/class_2680;)Lnet/minecraft/class_2350;
      // 3a: invokevirtual net/minecraft/class_2350.method_10153 ()Lnet/minecraft/class_2350;
      // 3d: astore 5
      // 3f: aload 0
      // 40: aload 5
      // 42: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 45: areturn
      // 46: aconst_null
      // 47: areturn
   }

   static {
      long var11 = cuNqa ^ 42122472388407L;
      Cipher var1;
      Cipher var10000 = var1 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var2 = 1; var2 < 8; var2++) {
         var10003[var2] = (byte)(var11 << var2 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var0 = new long[53];
      int var4 = 0;
      String var5 = "\u009e@hGs×\u0091Ãû³Ï\b>49#k3$Ùù\u0086k¯§G\u0082\u0002¦2\u001c\u0017R\u001a\u0087\u0094¿r+ã1¶/B¼~\u008e+Ôx»Øk1eS*B=Ì\u00ad\u001cë\u0015ï\u0010ý\u0097ºF·\u001a¦\u0083ï\u00983>?÷Ê\u0016ß%¢Cß7\u0010QTÇÔwj\u0094\u000eÏ |\u000bÿÅxÛL\u00023p)BR\u0098[ãû@\u008b)«.\u009d&x\u008aS+g\u0097^\u009e{²\u008d9çG\u0087ëâ\u0019n~X>ÿgÙ\u0096\u009aN\u008dJ\u001eÆ\u0007åÏ'\u0081-¥\u000eã7¤@£^\u001d?æãþ\u0003'\u0085í´í=EóL¬rºÇ©#mË}¨f\u00adwB\u0082\u001176ö¼ü\u0096Þeõ\u0016;\u008fÉ\u0090Àª\t¡µ÷µG\u009e&l>F\u0011GkähU\u0019\u009c\u009bÓ¶OAc\u0091³=ô¬\"T]p\u0000\u001a§¦\u0092\u008f\u0003\u0092«¨¿V\u0018¬uH®.2©\u0084º\u0011þ\u0095ûJ \u000f[{¡]\u0092\u009e\u0096¹Âd\u0082\u0088±\u0088ÜfQ\u0095=\f¨ö\u0084LÛ\u000elÕs³\u000fuz¸Äñ\u008em¶ê\u0080o\u0081\u007fR´ñæ\u009d\u0091sõ\u008dx\u0087¨\u009f½ñ\u0019D\u009eYuí÷ñ\u0010\u0083i\u008d\u0001ù®ç:º\u009fãZB]º&èà®\u0095N²Ý\u001bã\u001ep=º>xÏ\u008c^f\u001e·Ät&Q\u000eª\u0092²Æ\u0087ûæ<+þW·§\\x\u001bA>õ";
      int var6 = "\u009e@hGs×\u0091Ãû³Ï\b>49#k3$Ùù\u0086k¯§G\u0082\u0002¦2\u001c\u0017R\u001a\u0087\u0094¿r+ã1¶/B¼~\u008e+Ôx»Øk1eS*B=Ì\u00ad\u001cë\u0015ï\u0010ý\u0097ºF·\u001a¦\u0083ï\u00983>?÷Ê\u0016ß%¢Cß7\u0010QTÇÔwj\u0094\u000eÏ |\u000bÿÅxÛL\u00023p)BR\u0098[ãû@\u008b)«.\u009d&x\u008aS+g\u0097^\u009e{²\u008d9çG\u0087ëâ\u0019n~X>ÿgÙ\u0096\u009aN\u008dJ\u001eÆ\u0007åÏ'\u0081-¥\u000eã7¤@£^\u001d?æãþ\u0003'\u0085í´í=EóL¬rºÇ©#mË}¨f\u00adwB\u0082\u001176ö¼ü\u0096Þeõ\u0016;\u008fÉ\u0090Àª\t¡µ÷µG\u009e&l>F\u0011GkähU\u0019\u009c\u009bÓ¶OAc\u0091³=ô¬\"T]p\u0000\u001a§¦\u0092\u008f\u0003\u0092«¨¿V\u0018¬uH®.2©\u0084º\u0011þ\u0095ûJ \u000f[{¡]\u0092\u009e\u0096¹Âd\u0082\u0088±\u0088ÜfQ\u0095=\f¨ö\u0084LÛ\u000elÕs³\u000fuz¸Äñ\u008em¶ê\u0080o\u0081\u007fR´ñæ\u009d\u0091sõ\u008dx\u0087¨\u009f½ñ\u0019D\u009eYuí÷ñ\u0010\u0083i\u008d\u0001ù®ç:º\u009fãZB]º&èà®\u0095N²Ý\u001bã\u001ep=º>xÏ\u008c^f\u001e·Ät&Q\u000eª\u0092²Æ\u0087ûæ<+þW·§\\x\u001bA>õ"
         .length();
      byte var3 = 0;

      label24:
      while (true) {
         int var10001 = var3;
         var3 += 8;
         byte[] var7 = var5.substring(var10001, var3).getBytes("ISO-8859-1");
         long[] var14 = var0;
         var10001 = var4++;
         long var18 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var20 = -1;

         while (true) {
            long var8 = var18;
            byte[] var10 = var1.doFinal(
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
            long var22 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var20) {
               case 0:
                  var14[var10001] = var22;
                  if (var3 >= var6) {
                     class_2248[] var15 = new class_2248[(int)var0[16]];
                     var15[0] = class_2246.field_10443;
                     var15[1] = class_2246.field_10034;
                     var15[2] = class_2246.field_10380;
                     var15[3] = class_2246.field_9980;
                     var15[4] = class_2246.field_10486;
                     var15[5] = class_2246.field_40285;
                     var15[(int)var0[11]] = class_2246.field_10246;
                     var15[(int)var0[4]] = class_2246.field_42740;
                     var15[(int)var0[52]] = class_2246.field_10535;
                     var15[(int)var0[7]] = class_2246.field_10333;
                     var15[(int)var0[49]] = class_2246.field_10312;
                     var15[(int)var0[8]] = class_2246.field_10228;
                     var15[(int)var0[25]] = class_2246.field_10200;
                     var15[(int)var0[33]] = class_2246.field_10608;
                     var15[(int)var0[22]] = class_2246.field_10485;
                     var15[(int)var0[46]] = class_2246.field_10199;
                     var15[(int)var0[29]] = class_2246.field_10407;
                     var15[(int)var0[18]] = class_2246.field_10063;
                     var15[(int)var0[24]] = class_2246.field_10203;
                     var15[(int)var0[32]] = class_2246.field_10600;
                     var15[(int)var0[1]] = class_2246.field_10275;
                     var15[(int)var0[30]] = class_2246.field_10051;
                     var15[(int)var0[41]] = class_2246.field_10140;
                     var15[(int)var0[48]] = class_2246.field_10532;
                     var15[(int)var0[31]] = class_2246.field_10268;
                     var15[(int)var0[19]] = class_2246.field_10605;
                     var15[(int)var0[21]] = class_2246.field_10373;
                     var15[(int)var0[13]] = class_2246.field_10055;
                     var15[(int)var0[37]] = class_2246.field_10068;
                     var15[(int)var0[36]] = class_2246.field_10371;
                     var15[(int)var0[12]] = class_2246.field_10105;
                     var15[(int)var0[20]] = class_2246.field_10414;
                     var15[(int)var0[0]] = class_2246.field_10278;
                     var15[(int)var0[38]] = class_2246.field_10417;
                     var15[(int)var0[10]] = class_2246.field_40286;
                     var15[(int)var0[43]] = class_2246.field_42743;
                     var15[(int)var0[28]] = class_2246.field_10493;
                     var15[(int)var0[26]] = class_2246.field_10553;
                     var15[(int)var0[23]] = class_2246.field_10057;
                     var15[(int)var0[50]] = class_2246.field_10066;
                     var15[(int)var0[9]] = class_2246.field_22100;
                     var15[(int)var0[39]] = class_2246.field_22101;
                     var15[(int)var0[40]] = class_2246.field_23864;
                     var15[(int)var0[44]] = class_2246.field_23863;
                     var15[(int)var0[15]] = class_2246.field_10397;
                     var15[(int)var0[47]] = class_2246.field_10592;
                     var15[(int)var0[27]] = class_2246.field_40284;
                     var15[(int)var0[51]] = class_2246.field_42737;
                     var15[(int)var0[17]] = class_2246.field_10470;
                     var15[(int)var0[45]] = class_2246.field_10026;
                     var15[(int)var0[5]] = class_2246.field_10484;
                     var15[(int)var0[2]] = class_2246.field_10332;
                     var15[(int)var0[3]] = class_2246.field_22130;
                     var15[(int)var0[6]] = class_2246.field_22131;
                     var15[(int)var0[42]] = class_2246.field_10224;
                     var15[(int)var0[35]] = class_2246.field_10582;
                     var15[(int)var0[14]] = class_2246.field_10494;
                     var15[(int)var0[34]] = class_2246.field_10158;
                     oVDJL = Set.of(var15);
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var22;
                  if (var3 < var6) {
                     continue label24;
                  }

                  var5 = "\u001d^Ï\u007fãU\u0099y\u001e\u0090©)m\u0003 ë";
                  var6 = "\u001d^Ï\u007fãU\u0099y\u001e\u0090©)m\u0003 ë".length();
                  var3 = 0;
            }

            byte var17 = var3;
            var3 += 8;
            var7 = var5.substring(var17, var3).getBytes("ISO-8859-1");
            var14 = var0;
            var10001 = var4++;
            var18 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var20 = 0;
         }
      }
   }

   public static class_2350 bDS(class_2680 var0) {
      long var1 = cuNqa ^ 25736819929111L;

      try {
         switch (jl$tN.stCYF[((class_2738)var0.method_11654(class_2341.field_11007)).ordinal()]) {
            case 1:
               return class_2350.field_11033;
            case 2:
               return class_2350.field_11036;
         }
      } catch (MatchException var3) {
         throw bDX(var3);
      }

      return (class_2350)var0.method_11654(class_2341.field_11177);
   }

   public static boolean bDI(class_2338 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 10979169134644
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: ifnonnull 16
      // 10: bipush 0
      // 11: ireturn
      // 12: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15: athrow
      // 16: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 19: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1c: aload 0
      // 1d: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 20: astore 4
      // 22: aload 4
      // 24: getstatic net/minecraft/class_2246.field_23152 Lnet/minecraft/class_2248;
      // 27: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 2a: aload 3
      // 2b: ifnull 62
      // 2e: ifeq 61
      // 31: goto 38
      // 34: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 4
      // 3a: getstatic net/minecraft/class_4969.field_23153 Lnet/minecraft/class_2758;
      // 3d: invokevirtual net/minecraft/class_2680.method_11654 (Lnet/minecraft/class_2769;)Ljava/lang/Comparable;
      // 40: checkcast java/lang/Integer
      // 43: invokevirtual java/lang/Integer.intValue ()I
      // 46: aload 3
      // 47: ifnull 5c
      // 4a: goto 51
      // 4d: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: ifeq 5f
      // 54: goto 5b
      // 57: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: bipush 1
      // 5c: goto 60
      // 5f: bipush 0
      // 60: ireturn
      // 61: bipush 0
      // 62: ireturn
   }

   private static boolean bDU(class_1297 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 93357844743081
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: instanceof net/minecraft/class_1542
      // 10: aload 3
      // 11: ifnull 29
      // 14: ifne 54
      // 17: goto 1e
      // 1a: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: instanceof net/minecraft/class_1303
      // 22: goto 29
      // 25: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 3
      // 2a: ifnull 42
      // 2d: ifne 54
      // 30: goto 37
      // 33: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 0
      // 38: instanceof net/minecraft/class_1665
      // 3b: goto 42
      // 3e: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 3
      // 43: ifnull 51
      // 46: ifne 54
      // 49: goto 50
      // 4c: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 1
      // 51: goto 55
      // 54: bipush 0
      // 55: ireturn
   }

   public static class_2248 bDR(double var0, double var2, double var4) {
      class_2338 var6 = class_2338.method_49638(rD.dlmvG.field_1724.method_73189().method_1031(var0, var2, var4));
      return rD.dlmvG.field_1687.method_8320(var6).method_26204();
   }

   public static class_2350 bDQ(class_2338 param0, class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 77440321662130
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic net/minecraft/class_2350.values ()[Lnet/minecraft/class_2350;
      // 0b: astore 5
      // 0d: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 10: aload 5
      // 12: arraylength
      // 13: istore 6
      // 15: astore 4
      // 17: bipush 0
      // 18: istore 7
      // 1a: iload 7
      // 1c: iload 6
      // 1e: if_icmpge 50
      // 21: aload 5
      // 23: iload 7
      // 25: aaload
      // 26: astore 8
      // 28: aload 4
      // 2a: ifnull 4b
      // 2d: aload 0
      // 2e: aload 8
      // 30: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 33: aload 1
      // 34: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 37: ifeq 48
      // 3a: goto 41
      // 3d: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 8
      // 43: areturn
      // 44: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: iinc 7 1
      // 4b: aload 4
      // 4d: ifnonnull 1a
      // 50: aconst_null
      // 51: areturn
   }

   public static boolean bDT(class_2338 var0) {
      long var1 = cuNqa ^ 124063261813147L;
      String[] var10000 = jf.bBe();
      class_238 var4 = new class_238(var0);
      String[] var3 = var10000;
      Iterator var5 = rD.dlmvG.field_1687.method_8333(rD.dlmvG.field_1724, var4, jl::bDU).iterator();

      label27: {
         try {
            boolean var8 = var5.hasNext();
            if (var3 == null) {
               return var8;
            }

            if (var8) {
               break label27;
            }
         } catch (MatchException var7) {
            throw bDX(var7);
         }

         return false;
      }

      class_1297 var6 = (class_1297)var5.next();
      return true;
   }

   public static boolean bDK(class_2338 param0, int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 84009471131683
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 11: aload 0
      // 12: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 15: astore 5
      // 17: astore 4
      // 19: aload 5
      // 1b: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 1e: astore 6
      // 20: aload 6
      // 22: getstatic net/minecraft/class_2246.field_23152 Lnet/minecraft/class_2248;
      // 25: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 28: aload 4
      // 2a: ifnull 6a
      // 2d: ifeq 69
      // 30: goto 37
      // 33: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 5
      // 39: getstatic net/minecraft/class_4969.field_23153 Lnet/minecraft/class_2758;
      // 3c: invokevirtual net/minecraft/class_2680.method_11654 (Lnet/minecraft/class_2769;)Ljava/lang/Comparable;
      // 3f: checkcast java/lang/Integer
      // 42: invokevirtual java/lang/Integer.intValue ()I
      // 45: aload 4
      // 47: ifnull 64
      // 4a: goto 51
      // 4d: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: iload 1
      // 52: if_icmplt 67
      // 55: goto 5c
      // 58: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: bipush 1
      // 5d: goto 64
      // 60: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: goto 68
      // 67: bipush 0
      // 68: ireturn
      // 69: bipush 0
      // 6a: ireturn
   }

   private static MatchException bDX(MatchException var0) {
      return var0;
   }

   public static boolean bDJ(class_2338 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jl.cuNqa J
      // 03: ldc2_w 117487116442642
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: ifnonnull 16
      // 10: bipush 0
      // 11: ireturn
      // 12: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15: athrow
      // 16: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 19: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1c: aload 0
      // 1d: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 20: astore 4
      // 22: aload 4
      // 24: getstatic net/minecraft/class_2246.field_23152 Lnet/minecraft/class_2248;
      // 27: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 2a: aload 3
      // 2b: ifnull 62
      // 2e: ifeq 61
      // 31: goto 38
      // 34: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 4
      // 3a: getstatic net/minecraft/class_4969.field_23153 Lnet/minecraft/class_2758;
      // 3d: invokevirtual net/minecraft/class_2680.method_11654 (Lnet/minecraft/class_2769;)Ljava/lang/Comparable;
      // 40: checkcast java/lang/Integer
      // 43: invokevirtual java/lang/Integer.intValue ()I
      // 46: aload 3
      // 47: ifnull 5c
      // 4a: goto 51
      // 4d: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: ifne 5f
      // 54: goto 5b
      // 57: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: bipush 1
      // 5c: goto 60
      // 5f: bipush 0
      // 60: ireturn
      // 61: bipush 0
      // 62: ireturn
   }

   public static boolean bDL(class_2680 var0) {
      return oVDJL.contains(var0.method_26204());
   }

   public static boolean bDM(class_2248 var0) {
      return oVDJL.contains(var0);
   }

   public static boolean bDN(class_2338 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jl.cuNqa J
      // 003: ldc2_w 61850698779434
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 00b: astore 3
      // 00c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 012: aload 3
      // 013: ifnull 02c
      // 016: ifnonnull 026
      // 019: goto 020
      // 01c: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: bipush 0
      // 021: ireturn
      // 022: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 029: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 02c: aload 0
      // 02d: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 030: astore 4
      // 032: aload 4
      // 034: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 037: getstatic net/minecraft/class_2246.field_10540 Lnet/minecraft/class_2248;
      // 03a: aload 3
      // 03b: ifnull 057
      // 03e: if_acmpeq 060
      // 041: goto 048
      // 044: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 047: athrow
      // 048: aload 4
      // 04a: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 04d: getstatic net/minecraft/class_2246.field_9987 Lnet/minecraft/class_2248;
      // 050: goto 057
      // 053: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: if_acmpeq 060
      // 05a: bipush 0
      // 05b: ireturn
      // 05c: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05f: athrow
      // 060: aload 0
      // 061: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 064: astore 5
      // 066: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 069: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 06c: aload 5
      // 06e: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 071: astore 6
      // 073: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 076: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 079: aload 5
      // 07b: invokevirtual net/minecraft/class_638.method_22347 (Lnet/minecraft/class_2338;)Z
      // 07e: aload 3
      // 07f: ifnull 0bc
      // 082: ifeq 0bb
      // 085: goto 08c
      // 088: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08b: athrow
      // 08c: aload 6
      // 08e: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 091: getstatic net/minecraft/class_2246.field_10540 Lnet/minecraft/class_2248;
      // 094: aload 3
      // 095: ifnull 0b8
      // 098: goto 09f
      // 09b: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: if_acmpeq 0bb
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: aload 6
      // 0ab: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 0ae: getstatic net/minecraft/class_2246.field_9987 Lnet/minecraft/class_2248;
      // 0b1: goto 0b8
      // 0b4: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: if_acmpne 0bd
      // 0bb: bipush 0
      // 0bc: ireturn
      // 0bd: new net/minecraft/class_238
      // 0c0: dup
      // 0c1: aload 5
      // 0c3: invokespecial net/minecraft/class_238.<init> (Lnet/minecraft/class_2338;)V
      // 0c6: ldc2_w 0.5
      // 0c9: dconst_0
      // 0ca: ldc2_w 0.5
      // 0cd: invokevirtual net/minecraft/class_238.method_989 (DDD)Lnet/minecraft/class_238;
      // 0d0: dconst_0
      // 0d1: ldc2_w 2.0
      // 0d4: dconst_0
      // 0d5: invokevirtual net/minecraft/class_238.method_1012 (DDD)Lnet/minecraft/class_238;
      // 0d8: astore 7
      // 0da: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0dd: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0e0: ldc net/minecraft/class_1297
      // 0e2: aload 7
      // 0e4: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/jl.bDW (Lnet/minecraft/class_1297;)Z, (Lnet/minecraft/class_1297;)Z ]
      // 0e9: invokevirtual net/minecraft/class_638.method_8390 (Ljava/lang/Class;Lnet/minecraft/class_238;Ljava/util/function/Predicate;)Ljava/util/List;
      // 0ec: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 0f1: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/jl.bDV (Lnet/minecraft/class_1297;)Z, (Lnet/minecraft/class_1297;)Z ]
      // 0f6: invokeinterface java/util/stream/Stream.anyMatch (Ljava/util/function/Predicate;)Z 2
      // 0fb: istore 8
      // 0fd: iload 8
      // 0ff: aload 3
      // 100: ifnull 10e
      // 103: ifne 111
      // 106: goto 10d
      // 109: invokestatic sixtwo/jl.bDX (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10c: athrow
      // 10d: bipush 1
      // 10e: goto 112
      // 111: bipush 0
      // 112: ireturn
   }
}
