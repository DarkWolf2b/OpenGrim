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
import net.minecraft.class_1753;
import net.minecraft.class_1792;
import net.minecraft.class_4587;

public class cP extends gg {
   private final cG TaCDX;
   private final cG rHwiT;
   private final cG QyPao;
   private final cJ ZVcly;
   private static final long rSiDa = gb.aYR(-2284223492630732071L, 1537918581710625755L, MethodHandles.lookup().lookupClass()).a(202044020695558L);
   private static final long[] zuzcl;
   private static final Integer[] Qajnw;
   private static final Map woehX = new HashMap(13);

   public cP() {
      long var1 = rSiDa ^ 83107466726309L;
      super(gf.aZL(YE<"c">(17563, 5174677978008615565L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[YE<"c">(27583, 997177229781554568L ^ var1)];
      var10004[0] = YE<"c">(25837, 3056322251201272528L ^ var1);
      var10004[1] = YE<"c">(31313, 7785409830391891045L ^ var1);
      var10004[2] = YE<"c">(21148, 8523629606843247774L ^ var1);
      var10004[3] = YE<"c">(7708, 7003548551118266404L ^ var1);
      var10004[4] = YE<"c">(3090, 3536745426897580590L ^ var1);
      var10004[5] = YE<"c">(9048, 2800152986765630795L ^ var1);
      var10004[YE<"c">(29079, 8108666212168847269L ^ var1)] = YE<"c">(1440, 8301965467314076566L ^ var1);
      var10004[YE<"c">(8146, 8201210733030941163L ^ var1)] = YE<"c">(20557, 8168808257258385002L ^ var1);
      var10004[YE<"c">(6715, 88005310177420304L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(3369, 2460120180683780868L ^ var1)] = YE<"c">(13834, 6405909243902101548L ^ var1);
      this.TaCDX = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis());
      var10004 = new int[YE<"c">(18970, 137689268509930543L ^ var1)];
      var10004[0] = YE<"c">(21075, 1735215283031567436L ^ var1);
      var10004[1] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[2] = YE<"c">(18332, 689822109978950027L ^ var1);
      var10004[3] = YE<"c">(22861, 6661466506511574873L ^ var1);
      var10004[4] = YE<"c">(21666, 5974571363597937331L ^ var1);
      var10004[5] = YE<"c">(15465, 3123606239556207190L ^ var1);
      var10004[YE<"c">(25068, 6734923273965199300L ^ var1)] = YE<"c">(24199, 1727319249934246045L ^ var1);
      var10004[YE<"c">(4078, 7020323573350674933L ^ var1)] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[YE<"c">(30215, 3684485874747230234L ^ var1)] = YE<"c">(25500, 1978115314150301101L ^ var1);
      var10004[YE<"c">(5727, 978619796096067695L ^ var1)] = YE<"c">(26911, 3556783414952941360L ^ var1);
      var10004[YE<"c">(13162, 8904140039676955977L ^ var1)] = YE<"c">(879, 4030619995453537620L ^ var1);
      var10004[YE<"c">(16686, 2368515633655545660L ^ var1)] = YE<"c">(22861, 6661466506511574873L ^ var1);
      var10004[YE<"c">(819, 6505029491255557407L ^ var1)] = YE<"c">(12844, 7042078129289792569L ^ var1);
      var10004[YE<"c">(12630, 8987445442471858040L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(26537, 4568971930299423144L ^ var1)] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[YE<"c">(14368, 6701196485803804190L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(7916, 2177420294193783036L ^ var1)] = YE<"c">(17266, 4085355299367583064L ^ var1);
      this.rHwiT = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis());
      var10004 = new int[YE<"c">(32394, 5753511953091739816L ^ var1)];
      var10004[0] = YE<"c">(18391, 9196715303323859412L ^ var1);
      var10004[1] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[2] = YE<"c">(18600, 2742734399866238610L ^ var1);
      var10004[3] = YE<"c">(22861, 6661466506511574873L ^ var1);
      var10004[4] = YE<"c">(23705, 8361970106461348541L ^ var1);
      var10004[5] = YE<"c">(25500, 1978115314150301101L ^ var1);
      var10004[YE<"c">(25068, 6734923273965199300L ^ var1)] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[YE<"c">(4078, 7020323573350674933L ^ var1)] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[YE<"c">(30215, 3684485874747230234L ^ var1)] = YE<"c">(22861, 6661466506511574873L ^ var1);
      var10004[YE<"c">(5727, 978619796096067695L ^ var1)] = YE<"c">(12844, 7042078129289792569L ^ var1);
      var10004[YE<"c">(13162, 8904140039676955977L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(10010, 6657418518228703546L ^ var1)] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[YE<"c">(31190, 7546086314072819685L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(11575, 3444135320939041579L ^ var1)] = YE<"c">(17266, 4085355299367583064L ^ var1);
      this.QyPao = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F));
      var10004 = new int[YE<"c">(13162, 8904140039676955977L ^ var1)];
      var10004[0] = YE<"c">(27437, 6756794499849180468L ^ var1);
      var10004[1] = YE<"c">(25500, 1978115314150301101L ^ var1);
      var10004[2] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[3] = YE<"c">(7343, 3248577773697278647L ^ var1);
      var10004[4] = YE<"c">(879, 4030619995453537620L ^ var1);
      var10004[5] = YE<"c">(27870, 680055826641900287L ^ var1);
      var10004[YE<"c">(25068, 6734923273965199300L ^ var1)] = YE<"c">(22861, 6661466506511574873L ^ var1);
      var10004[YE<"c">(4078, 7020323573350674933L ^ var1)] = YE<"c">(18391, 9196715303323859412L ^ var1);
      var10004[YE<"c">(30215, 3684485874747230234L ^ var1)] = YE<"c">(2197, 8994727048474998448L ^ var1);
      var10004[YE<"c">(5727, 978619796096067695L ^ var1)] = YE<"c">(18600, 2742734399866238610L ^ var1);
      this.ZVcly = new cJ(this, mr.clS(var10004)).WE(true);
   }

   static {
      long var0 = rSiDa ^ 26719622568547L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[51];
      int var5 = 0;
      String var6 = "\u008cS\u007fÌrF;\u0005åÂÇg¼:Ó\u0002,\u0094à\u00999¨\u0093\u0093ô<cÊP`3\u0097\u0094&\u0087¡\u009e\u009fe©\u0014GÁnãý¿É§\u007fùÆ\u0013ª\\:\u0099\u0091yÁäÂÜ\u0019-±õ\u008eZÖÛM¼áÉ+¼\u0081\u009c¾\u0003L? Ú.çÞ\\~\u0004¥dçâ\ré\u008d\u0019\u0012\u009bË$î;9¥£¢3caÕ»7_\u008eûNö«ù\ndõÖ£g´äÁ»S\u0096\"q\u0099\u001aØ\u0080ÛvÇ¾èÖðÉ·iLO\u0000ê¸µðÛ\u008b\u009cömáïaÔ\u0004Ø\u0007\u0016M\u001c\u0010Ð\u009e½\u00026\u0010Ô\u009a3¡\u0092äÿ\u001e\u001aä^I\u00836|Y})Í\u0015\u0095:\u0081ÆU¶xÍ\u0007\u000bæ\u007fÞµ;[O\u0095lA\u001fDá±ÞbApaWÅm~/$¸ÅÅ>l\u0081×3Ùw\u0000¨»¬ªpÌ%\u008dµ§d-0iYþ\u007f\u0084äà\u007f+áêÿ1!\b_Ä«#/ã\u0085laC\u0097¾I´\u009dL£:¬Ä\u0086\"Í\u009eaÓæ\u000e\u008da÷\u0014ÈÚr®&ºIu\u0085÷ºpT¾/j\u00047âî\u0005Ë\u001f¯\u0002¥%o\u0007\u0094\u0018h\u001c\u001eW?ðw\u0012üzFÑ\u0093±2â\u008a=oN\u009b\u0093\u000e×ÜõâÙ\u0001]÷\u0097\u001b\u000f\u0084Õ`\u009c\u001cxL³(Cà\u0001ý\u0089r_}ZÒ\fPc";
      int var7 = "\u008cS\u007fÌrF;\u0005åÂÇg¼:Ó\u0002,\u0094à\u00999¨\u0093\u0093ô<cÊP`3\u0097\u0094&\u0087¡\u009e\u009fe©\u0014GÁnãý¿É§\u007fùÆ\u0013ª\\:\u0099\u0091yÁäÂÜ\u0019-±õ\u008eZÖÛM¼áÉ+¼\u0081\u009c¾\u0003L? Ú.çÞ\\~\u0004¥dçâ\ré\u008d\u0019\u0012\u009bË$î;9¥£¢3caÕ»7_\u008eûNö«ù\ndõÖ£g´äÁ»S\u0096\"q\u0099\u001aØ\u0080ÛvÇ¾èÖðÉ·iLO\u0000ê¸µðÛ\u008b\u009cömáïaÔ\u0004Ø\u0007\u0016M\u001c\u0010Ð\u009e½\u00026\u0010Ô\u009a3¡\u0092äÿ\u001e\u001aä^I\u00836|Y})Í\u0015\u0095:\u0081ÆU¶xÍ\u0007\u000bæ\u007fÞµ;[O\u0095lA\u001fDá±ÞbApaWÅm~/$¸ÅÅ>l\u0081×3Ùw\u0000¨»¬ªpÌ%\u008dµ§d-0iYþ\u007f\u0084äà\u007f+áêÿ1!\b_Ä«#/ã\u0085laC\u0097¾I´\u009dL£:¬Ä\u0086\"Í\u009eaÓæ\u000e\u008da÷\u0014ÈÚr®&ºIu\u0085÷ºpT¾/j\u00047âî\u0005Ë\u001f¯\u0002¥%o\u0007\u0094\u0018h\u001c\u001eW?ðw\u0012üzFÑ\u0093±2â\u008a=oN\u009b\u0093\u000e×ÜõâÙ\u0001]÷\u0097\u001b\u000f\u0084Õ`\u009c\u001cxL³(Cà\u0001ý\u0089r_}ZÒ\fPc"
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
                     zuzcl = var8;
                     Qajnw = new Integer[51];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0017\u0081µ¢\u0098\u008e\u0011å\t\u008dQÊãCé\u0099";
                  var7 = "\u0017\u0081µ¢\u0098\u008e\u0011å\t\u008dQÊãCé\u0099".length();
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

   private int Yw(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cP.rSiDa J
      // 03: ldc2_w 11745487157312
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: instanceof net/minecraft/class_1828
      // 11: aload 4
      // 13: ifnonnull 61
      // 16: ifne 54
      // 19: goto 20
      // 1c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: instanceof net/minecraft/class_1803
      // 24: aload 4
      // 26: ifnonnull 61
      // 29: goto 30
      // 2c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: ifne 54
      // 33: goto 3a
      // 36: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 1
      // 3b: instanceof net/minecraft/class_1779
      // 3e: aload 4
      // 40: ifnonnull 63
      // 43: goto 4a
      // 46: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: ifeq 62
      // 4d: goto 54
      // 50: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: sipush 21567
      // 57: ldc2_w 3336332942632704452
      // 5a: lload 2
      // 5b: lxor
      // 5c: invokedynamic c (IJ)I bsm=sixtwo/cP.YE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 61: ireturn
      // 62: bipush 0
      // 63: ireturn
   }

   public cG Yy() {
      return this.rHwiT;
   }

   private float Yv(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cP.rSiDa J
      // 03: ldc2_w 96473961217463
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: instanceof net/minecraft/class_1828
      // 11: aload 4
      // 13: ifnonnull 2b
      // 16: ifne 3a
      // 19: goto 20
      // 1c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: instanceof net/minecraft/class_1803
      // 24: goto 2b
      // 27: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 4
      // 2d: ifnonnull 46
      // 30: ifeq 42
      // 33: goto 3a
      // 36: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: ldc_w 0.4
      // 3d: freturn
      // 3e: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: aload 1
      // 43: instanceof net/minecraft/class_1779
      // 46: aload 4
      // 48: ifnonnull 61
      // 4b: ifeq 5d
      // 4e: goto 55
      // 51: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: ldc_w 0.59
      // 58: freturn
      // 59: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: aload 1
      // 5e: instanceof net/minecraft/class_1835
      // 61: ifeq 6a
      // 64: fconst_2
      // 65: freturn
      // 66: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: ldc_w 1.5
      // 6d: freturn
   }

   private static CallSite YE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("YD".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cP" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cJ YA() {
      return this.ZVcly;
   }

   private float Yu(class_1792 var1) {
      long var2 = rSiDa ^ 15907459268706L;

      try {
         if (var1 instanceof class_1753) {
            return 1.0F;
         }
      } catch (MatchException var4) {
         throw YB(var4);
      }

      return 0.4F;
   }

   private boolean Yt(class_1792 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cP.rSiDa J
      // 03: ldc2_w 96632805683458
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: instanceof net/minecraft/class_1776
      // 11: aload 4
      // 13: ifnonnull bd
      // 16: ifne bc
      // 19: goto 20
      // 1c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 1
      // 21: instanceof net/minecraft/class_1835
      // 24: aload 4
      // 26: ifnonnull bd
      // 29: goto 30
      // 2c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: ifne bc
      // 33: goto 3a
      // 36: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 1
      // 3b: instanceof net/minecraft/class_1779
      // 3e: aload 4
      // 40: ifnonnull bd
      // 43: goto 4a
      // 46: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: ifne bc
      // 4d: goto 54
      // 50: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 1
      // 55: instanceof net/minecraft/class_1823
      // 58: aload 4
      // 5a: ifnonnull bd
      // 5d: goto 64
      // 60: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: ifne bc
      // 67: goto 6e
      // 6a: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 1
      // 6f: instanceof net/minecraft/class_1771
      // 72: aload 4
      // 74: ifnonnull bd
      // 77: goto 7e
      // 7a: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: ifne bc
      // 81: goto 88
      // 84: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 1
      // 89: instanceof net/minecraft/class_1828
      // 8c: aload 4
      // 8e: ifnonnull bd
      // 91: goto 98
      // 94: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: ifne bc
      // 9b: goto a2
      // 9e: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a1: athrow
      // a2: aload 1
      // a3: instanceof net/minecraft/class_1803
      // a6: aload 4
      // a8: ifnonnull bd
      // ab: goto b2
      // ae: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b1: athrow
      // b2: ifeq c0
      // b5: goto bc
      // b8: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bb: athrow
      // bc: bipush 1
      // bd: goto c1
      // c0: bipush 0
      // c1: ireturn
   }

   private static int YD(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = YC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int YC(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5285;
      if (Qajnw[var3] == null) {
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
         long var5 = zuzcl[var3];
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
         Object[] var9 = (Object[])woehX.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               woehX.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cP", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         Qajnw[var3] = var15;
      }

      return Qajnw[var3];
   }

   private static MatchException YB(MatchException var0) {
      return var0;
   }

   public cG Yx() {
      return this.TaCDX;
   }

   public cG Yz() {
      return this.QyPao;
   }

   @hG
   public void Yr(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cP.rSiDa J
      // 003: ldc2_w 103206144198664
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cP.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 02d
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 024: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 027: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 02a: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 02d: ifne 031
      // 030: return
      // 031: aload 1
      // 032: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 035: astore 5
      // 037: aload 1
      // 038: invokevirtual sixtwo/go$sX.bbi ()F
      // 03b: fstore 6
      // 03d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 040: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 043: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 046: astore 8
      // 048: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 04b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 04e: invokevirtual net/minecraft/class_746.method_6079 ()Lnet/minecraft/class_1799;
      // 051: astore 9
      // 053: aload 8
      // 055: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 058: instanceof net/minecraft/class_1753
      // 05b: aload 4
      // 05d: ifnonnull 079
      // 060: ifne 0a7
      // 063: goto 06a
      // 066: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 069: athrow
      // 06a: aload 8
      // 06c: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 06f: instanceof net/minecraft/class_1764
      // 072: goto 079
      // 075: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 4
      // 07b: ifnonnull 098
      // 07e: ifne 0a7
      // 081: goto 088
      // 084: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: aload 0
      // 089: aload 8
      // 08b: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 08e: invokevirtual sixtwo/cP.Yt (Lnet/minecraft/class_1792;)Z
      // 091: goto 098
      // 094: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 097: athrow
      // 098: aload 4
      // 09a: ifnonnull 0c0
      // 09d: ifeq 0b1
      // 0a0: goto 0a7
      // 0a3: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a6: athrow
      // 0a7: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 0aa: astore 7
      // 0ac: aload 4
      // 0ae: ifnull 10f
      // 0b1: aload 9
      // 0b3: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 0b6: instanceof net/minecraft/class_1753
      // 0b9: goto 0c0
      // 0bc: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: aload 4
      // 0c2: ifnonnull 0de
      // 0c5: ifne 100
      // 0c8: goto 0cf
      // 0cb: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ce: athrow
      // 0cf: aload 9
      // 0d1: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 0d4: instanceof net/minecraft/class_1764
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: aload 4
      // 0e0: ifnonnull 0fd
      // 0e3: ifne 100
      // 0e6: goto 0ed
      // 0e9: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ec: athrow
      // 0ed: aload 0
      // 0ee: aload 9
      // 0f0: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 0f3: invokevirtual sixtwo/cP.Yt (Lnet/minecraft/class_1792;)Z
      // 0f6: goto 0fd
      // 0f9: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fc: athrow
      // 0fd: ifeq 10a
      // 100: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 103: astore 7
      // 105: aload 4
      // 107: ifnull 10f
      // 10a: return
      // 10b: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 112: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 115: invokevirtual net/minecraft/class_315.method_42448 ()Lnet/minecraft/class_7172;
      // 118: invokevirtual net/minecraft/class_7172.method_41753 ()Ljava/lang/Object;
      // 11b: checkcast java/lang/Boolean
      // 11e: invokevirtual java/lang/Boolean.booleanValue ()Z
      // 121: istore 10
      // 123: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 126: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 129: invokevirtual net/minecraft/class_315.method_42448 ()Lnet/minecraft/class_7172;
      // 12c: bipush 0
      // 12d: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 130: invokevirtual net/minecraft/class_7172.method_41748 (Ljava/lang/Object;)V
      // 133: aload 9
      // 135: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 138: instanceof net/minecraft/class_1764
      // 13b: aload 4
      // 13d: ifnonnull 177
      // 140: ifeq 168
      // 143: goto 14a
      // 146: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 149: athrow
      // 14a: aload 9
      // 14c: getstatic net/minecraft/class_1893.field_9108 Lnet/minecraft/class_5321;
      // 14f: invokestatic sixtwo/jh.bCh (Lnet/minecraft/class_1799;Lnet/minecraft/class_5321;)I
      // 152: aload 4
      // 154: ifnonnull 177
      // 157: goto 15e
      // 15a: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15d: athrow
      // 15e: ifne 198
      // 161: goto 168
      // 164: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: aload 8
      // 16a: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 16d: instanceof net/minecraft/class_1764
      // 170: goto 177
      // 173: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 176: athrow
      // 177: aload 4
      // 179: ifnonnull 195
      // 17c: ifeq 22a
      // 17f: goto 186
      // 182: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 185: athrow
      // 186: aload 8
      // 188: getstatic net/minecraft/class_1893.field_9108 Lnet/minecraft/class_5321;
      // 18b: invokestatic sixtwo/jh.bCh (Lnet/minecraft/class_1799;Lnet/minecraft/class_5321;)I
      // 18e: goto 195
      // 191: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 194: athrow
      // 195: ifeq 22a
      // 198: aload 0
      // 199: aload 5
      // 19b: aload 7
      // 19d: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 1a0: if_acmpne 1b6
      // 1a3: goto 1aa
      // 1a6: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a9: athrow
      // 1aa: aload 9
      // 1ac: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1af: goto 1bb
      // 1b2: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b5: athrow
      // 1b6: aload 8
      // 1b8: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1bb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1be: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1c1: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 1c4: ldc_w 10.0
      // 1c7: fsub
      // 1c8: fload 6
      // 1ca: invokevirtual sixtwo/cP.Ys (Lnet/minecraft/class_4587;Lnet/minecraft/class_1792;FF)V
      // 1cd: aload 0
      // 1ce: aload 5
      // 1d0: aload 7
      // 1d2: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 1d5: if_acmpne 1e4
      // 1d8: aload 9
      // 1da: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1dd: goto 1e9
      // 1e0: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e3: athrow
      // 1e4: aload 8
      // 1e6: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1e9: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1ec: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1ef: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 1f2: fload 6
      // 1f4: invokevirtual sixtwo/cP.Ys (Lnet/minecraft/class_4587;Lnet/minecraft/class_1792;FF)V
      // 1f7: aload 0
      // 1f8: aload 5
      // 1fa: aload 7
      // 1fc: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 1ff: if_acmpne 20e
      // 202: aload 9
      // 204: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 207: goto 213
      // 20a: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20d: athrow
      // 20e: aload 8
      // 210: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 213: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 216: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 219: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 21c: ldc_w 10.0
      // 21f: fadd
      // 220: fload 6
      // 222: invokevirtual sixtwo/cP.Ys (Lnet/minecraft/class_4587;Lnet/minecraft/class_1792;FF)V
      // 225: aload 4
      // 227: ifnull 25b
      // 22a: aload 0
      // 22b: aload 5
      // 22d: aload 7
      // 22f: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 232: if_acmpne 248
      // 235: goto 23c
      // 238: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23b: athrow
      // 23c: aload 9
      // 23e: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 241: goto 24d
      // 244: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 247: athrow
      // 248: aload 8
      // 24a: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 24d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 250: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 253: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 256: fload 6
      // 258: invokevirtual sixtwo/cP.Ys (Lnet/minecraft/class_4587;Lnet/minecraft/class_1792;FF)V
      // 25b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 25e: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 261: invokevirtual net/minecraft/class_315.method_42448 ()Lnet/minecraft/class_7172;
      // 264: iload 10
      // 266: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 269: invokevirtual net/minecraft/class_7172.method_41748 (Ljava/lang/Object;)V
      // 26c: return
   }

   private void Ys(class_4587 param1, class_1792 param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cP.rSiDa J
      // 003: ldc2_w 78163735853616
      // 006: lxor
      // 007: lstore 5
      // 009: fload 4
      // 00b: f2d
      // 00c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 012: getfield net/minecraft/class_746.field_6014 D
      // 015: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 018: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01b: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 01e: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 021: dstore 8
      // 023: fload 4
      // 025: f2d
      // 026: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 029: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 02c: getfield net/minecraft/class_746.field_6036 D
      // 02f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 032: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 035: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 038: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 03b: dstore 10
      // 03d: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 040: fload 4
      // 042: f2d
      // 043: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 046: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 049: getfield net/minecraft/class_746.field_5969 D
      // 04c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 04f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 052: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 055: invokestatic net/minecraft/class_3532.method_16436 (DDD)D
      // 058: dstore 12
      // 05a: astore 7
      // 05c: dload 10
      // 05e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 061: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 064: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 067: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 06a: invokevirtual net/minecraft/class_746.method_18376 ()Lnet/minecraft/class_4050;
      // 06d: invokevirtual net/minecraft/class_746.method_18381 (Lnet/minecraft/class_4050;)F
      // 070: f2d
      // 071: dadd
      // 072: ldc2_w 0.1000000014901161
      // 075: dsub
      // 076: dstore 10
      // 078: aload 7
      // 07a: ifnonnull 0de
      // 07d: aload 2
      // 07e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 081: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 084: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 087: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 08a: if_acmpne 0c7
      // 08d: goto 094
      // 090: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: dload 8
      // 096: fload 3
      // 097: ldc_w 180.0
      // 09a: fdiv
      // 09b: ldc_w 3.1415927
      // 09e: fmul
      // 09f: f2d
      // 0a0: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 0a3: ldc_w 0.16
      // 0a6: fmul
      // 0a7: f2d
      // 0a8: dsub
      // 0a9: dstore 8
      // 0ab: dload 12
      // 0ad: fload 3
      // 0ae: ldc_w 180.0
      // 0b1: fdiv
      // 0b2: ldc_w 3.1415927
      // 0b5: fmul
      // 0b6: f2d
      // 0b7: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 0ba: ldc_w 0.16
      // 0bd: fmul
      // 0be: f2d
      // 0bf: dsub
      // 0c0: dstore 12
      // 0c2: aload 7
      // 0c4: ifnull 0f5
      // 0c7: dload 8
      // 0c9: fload 3
      // 0ca: ldc_w 180.0
      // 0cd: fdiv
      // 0ce: ldc_w 3.1415927
      // 0d1: fmul
      // 0d2: f2d
      // 0d3: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 0d6: ldc_w 0.16
      // 0d9: fmul
      // 0da: f2d
      // 0db: dadd
      // 0dc: dstore 8
      // 0de: dload 12
      // 0e0: fload 3
      // 0e1: ldc_w 180.0
      // 0e4: fdiv
      // 0e5: ldc_w 3.1415927
      // 0e8: fmul
      // 0e9: f2d
      // 0ea: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 0ed: ldc_w 0.16
      // 0f0: fmul
      // 0f1: f2d
      // 0f2: dadd
      // 0f3: dstore 12
      // 0f5: aload 0
      // 0f6: aload 2
      // 0f7: invokevirtual sixtwo/cP.Yu (Lnet/minecraft/class_1792;)F
      // 0fa: fstore 14
      // 0fc: new net/minecraft/class_243
      // 0ff: dup
      // 100: fload 3
      // 101: ldc_w 180.0
      // 104: fdiv
      // 105: ldc_w 3.1415927
      // 108: fmul
      // 109: f2d
      // 10a: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 10d: fneg
      // 10e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 111: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 114: invokevirtual net/minecraft/class_746.method_36455 ()F
      // 117: ldc_w 180.0
      // 11a: fdiv
      // 11b: ldc_w 3.1415927
      // 11e: fmul
      // 11f: f2d
      // 120: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 123: fmul
      // 124: fload 14
      // 126: fmul
      // 127: f2d
      // 128: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 12b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12e: invokevirtual net/minecraft/class_746.method_36455 ()F
      // 131: aload 0
      // 132: aload 2
      // 133: invokevirtual sixtwo/cP.Yw (Lnet/minecraft/class_1792;)I
      // 136: i2f
      // 137: fsub
      // 138: ldc_w 180.0
      // 13b: fdiv
      // 13c: ldc_w 3.1415927
      // 13f: fmul
      // 140: f2d
      // 141: invokestatic net/minecraft/class_3532.method_15374 (D)F
      // 144: fneg
      // 145: fload 14
      // 147: fmul
      // 148: f2d
      // 149: fload 3
      // 14a: ldc_w 180.0
      // 14d: fdiv
      // 14e: ldc_w 3.1415927
      // 151: fmul
      // 152: f2d
      // 153: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 156: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 159: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 15c: invokevirtual net/minecraft/class_746.method_36455 ()F
      // 15f: ldc_w 180.0
      // 162: fdiv
      // 163: ldc_w 3.1415927
      // 166: fmul
      // 167: f2d
      // 168: invokestatic net/minecraft/class_3532.method_15362 (D)F
      // 16b: fmul
      // 16c: fload 14
      // 16e: fmul
      // 16f: f2d
      // 170: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 173: astore 15
      // 175: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 178: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 17b: invokevirtual net/minecraft/class_746.method_6048 ()I
      // 17e: i2f
      // 17f: ldc_w 20.0
      // 182: fdiv
      // 183: fstore 16
      // 185: fload 16
      // 187: fload 16
      // 189: fmul
      // 18a: fload 16
      // 18c: fconst_2
      // 18d: fmul
      // 18e: fadd
      // 18f: ldc_w 3.0
      // 192: fdiv
      // 193: fstore 16
      // 195: fload 16
      // 197: aload 7
      // 199: ifnonnull 1c3
      // 19c: fconst_1
      // 19d: fcmpl
      // 19e: ifgt 1c2
      // 1a1: goto 1a8
      // 1a4: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a7: athrow
      // 1a8: fload 16
      // 1aa: fconst_0
      // 1ab: fcmpl
      // 1ac: aload 7
      // 1ae: ifnonnull 1d0
      // 1b1: goto 1b8
      // 1b4: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b7: athrow
      // 1b8: ifne 1c5
      // 1bb: goto 1c2
      // 1be: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c1: athrow
      // 1c2: fconst_1
      // 1c3: fstore 16
      // 1c5: aload 15
      // 1c7: invokevirtual net/minecraft/class_243.method_1029 ()Lnet/minecraft/class_243;
      // 1ca: astore 15
      // 1cc: aload 2
      // 1cd: instanceof net/minecraft/class_1753
      // 1d0: aload 7
      // 1d2: ifnonnull 1ee
      // 1d5: ifeq 1ea
      // 1d8: goto 1df
      // 1db: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1de: athrow
      // 1df: fload 16
      // 1e1: fconst_2
      // 1e2: fmul
      // 1e3: goto 1fc
      // 1e6: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e9: athrow
      // 1ea: aload 2
      // 1eb: instanceof net/minecraft/class_1764
      // 1ee: ifeq 1fb
      // 1f1: ldc_w 2.2
      // 1f4: goto 1fc
      // 1f7: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1fa: athrow
      // 1fb: fconst_1
      // 1fc: aload 0
      // 1fd: aload 2
      // 1fe: invokevirtual sixtwo/cP.Yv (Lnet/minecraft/class_1792;)F
      // 201: fmul
      // 202: fstore 17
      // 204: aload 15
      // 206: fload 17
      // 208: f2d
      // 209: invokevirtual net/minecraft/class_243.method_1021 (D)Lnet/minecraft/class_243;
      // 20c: astore 15
      // 20e: new net/minecraft/class_243
      // 211: dup
      // 212: dload 8
      // 214: dload 10
      // 216: dload 12
      // 218: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 21b: astore 18
      // 21d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 220: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 223: invokevirtual net/minecraft/class_746.method_24828 ()Z
      // 226: aload 7
      // 228: ifnonnull 24e
      // 22b: ifne 24a
      // 22e: goto 235
      // 231: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 234: athrow
      // 235: aload 15
      // 237: dconst_0
      // 238: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 23e: invokevirtual net/minecraft/class_746.method_18798 ()Lnet/minecraft/class_243;
      // 241: invokevirtual net/minecraft/class_243.method_10214 ()D
      // 244: dconst_0
      // 245: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 248: astore 15
      // 24a: aload 2
      // 24b: instanceof net/minecraft/class_1753
      // 24e: aload 7
      // 250: ifnonnull 273
      // 253: ifne 276
      // 256: goto 25d
      // 259: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25c: athrow
      // 25d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 260: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 263: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 266: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 269: instanceof net/minecraft/class_1764
      // 26c: goto 273
      // 26f: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 272: athrow
      // 273: ifeq 280
      // 276: ldc2_w 0.05000000074505806
      // 279: goto 283
      // 27c: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27f: athrow
      // 280: ldc2_w 0.029999999329447746
      // 283: dstore 19
      // 285: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 288: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 28b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 28e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 291: aload 18
      // 293: aload 15
      // 295: invokestatic sixtwo/mh.ckf (Lnet/minecraft/class_1937;Lnet/minecraft/class_1297;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)Lsixtwo/mh;
      // 298: sipush 14295
      // 29b: ldc2_w 8515373120908720235
      // 29e: lload 5
      // 2a0: lxor
      // 2a1: invokedynamic c (IJ)I bsm=sixtwo/cP.YE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a6: invokevirtual sixtwo/mh.cky (I)Lsixtwo/mh;
      // 2a9: ldc2_w -128.0
      // 2ac: invokevirtual sixtwo/mh.ckz (D)Lsixtwo/mh;
      // 2af: ldc2_w 0.99
      // 2b2: invokevirtual sixtwo/mh.ckA (D)Lsixtwo/mh;
      // 2b5: ldc2_w 0.8
      // 2b8: invokevirtual sixtwo/mh.ckB (D)Lsixtwo/mh;
      // 2bb: dload 19
      // 2bd: invokevirtual sixtwo/mh.ckC (D)Lsixtwo/mh;
      // 2c0: invokestatic sixtwo/me.cjZ (Lsixtwo/mh;)Lsixtwo/mg;
      // 2c3: astore 21
      // 2c5: new java/util/ArrayList
      // 2c8: dup
      // 2c9: aload 21
      // 2cb: invokevirtual sixtwo/mg.positions ()Ljava/util/List;
      // 2ce: invokespecial java/util/ArrayList.<init> (Ljava/util/Collection;)V
      // 2d1: astore 22
      // 2d3: ldc_w 0.3
      // 2d6: fstore 23
      // 2d8: bipush 1
      // 2d9: istore 24
      // 2db: iload 24
      // 2dd: aload 22
      // 2df: invokeinterface java/util/List.size ()I 1
      // 2e4: if_icmpge 3fa
      // 2e7: aload 22
      // 2e9: iload 24
      // 2eb: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 2f0: checkcast net/minecraft/class_243
      // 2f3: astore 25
      // 2f5: aload 7
      // 2f7: ifnonnull 407
      // 2fa: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2fd: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 300: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 303: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 308: astore 26
      // 30a: aload 26
      // 30c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 311: ifeq 3f2
      // 314: aload 26
      // 316: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 31b: checkcast net/minecraft/class_1297
      // 31e: astore 27
      // 320: aload 27
      // 322: instanceof net/minecraft/class_1667
      // 325: aload 7
      // 327: ifnonnull 2dd
      // 32a: aload 7
      // 32c: ifnonnull 344
      // 32f: ifne 30a
      // 332: goto 339
      // 335: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 338: athrow
      // 339: aload 27
      // 33b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 33e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 341: invokevirtual net/minecraft/class_1297.equals (Ljava/lang/Object;)Z
      // 344: aload 7
      // 346: ifnonnull 3a4
      // 349: ifeq 35f
      // 34c: goto 353
      // 34f: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 352: athrow
      // 353: aload 7
      // 355: ifnull 30a
      // 358: goto 35f
      // 35b: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35e: athrow
      // 35f: aload 27
      // 361: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 364: new net/minecraft/class_238
      // 367: dup
      // 368: aload 25
      // 36a: getfield net/minecraft/class_243.field_1352 D
      // 36d: fload 23
      // 36f: f2d
      // 370: dsub
      // 371: aload 25
      // 373: getfield net/minecraft/class_243.field_1351 D
      // 376: fload 23
      // 378: f2d
      // 379: dsub
      // 37a: aload 25
      // 37c: getfield net/minecraft/class_243.field_1350 D
      // 37f: fload 23
      // 381: f2d
      // 382: dsub
      // 383: aload 25
      // 385: getfield net/minecraft/class_243.field_1352 D
      // 388: fload 23
      // 38a: f2d
      // 38b: dadd
      // 38c: aload 25
      // 38e: getfield net/minecraft/class_243.field_1351 D
      // 391: fload 23
      // 393: f2d
      // 394: dadd
      // 395: aload 25
      // 397: getfield net/minecraft/class_243.field_1350 D
      // 39a: fload 23
      // 39c: f2d
      // 39d: dadd
      // 39e: invokespecial net/minecraft/class_238.<init> (DDDDDD)V
      // 3a1: invokevirtual net/minecraft/class_238.method_994 (Lnet/minecraft/class_238;)Z
      // 3a4: aload 7
      // 3a6: ifnonnull 3df
      // 3a9: ifeq 3e6
      // 3ac: goto 3b3
      // 3af: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b2: athrow
      // 3b3: aload 1
      // 3b4: aload 27
      // 3b6: invokevirtual net/minecraft/class_1297.method_5829 ()Lnet/minecraft/class_238;
      // 3b9: aload 0
      // 3ba: getfield sixtwo/cP.rHwiT Lsixtwo/cG;
      // 3bd: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 3c0: aload 0
      // 3c1: getfield sixtwo/cP.QyPao Lsixtwo/cG;
      // 3c4: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 3c7: aload 0
      // 3c8: getfield sixtwo/cP.ZVcly Lsixtwo/cJ;
      // 3cb: invokevirtual sixtwo/cJ.WF ()Z
      // 3ce: invokestatic sixtwo/iW.bxs (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;Lsixtwo/mG;Lsixtwo/mG;Z)V
      // 3d1: aload 22
      // 3d3: invokeinterface java/util/List.size ()I 1
      // 3d8: goto 3df
      // 3db: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3de: athrow
      // 3df: istore 24
      // 3e1: aload 7
      // 3e3: ifnull 3f2
      // 3e6: aload 7
      // 3e8: ifnull 30a
      // 3eb: goto 3f2
      // 3ee: invokestatic sixtwo/cP.YB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f1: athrow
      // 3f2: iinc 24 1
      // 3f5: aload 7
      // 3f7: ifnull 2db
      // 3fa: aload 1
      // 3fb: aload 22
      // 3fd: aload 0
      // 3fe: getfield sixtwo/cP.TaCDX Lsixtwo/cG;
      // 401: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 404: invokestatic sixtwo/iW.bxt (Lnet/minecraft/class_4587;Ljava/lang/Iterable;Lsixtwo/mG;)V
      // 407: aload 21
      // 409: invokevirtual sixtwo/mg.finalPosition ()Lnet/minecraft/class_243;
      // 40c: astore 24
      // 40e: ldc2_w 0.3
      // 411: dstore 25
      // 413: new net/minecraft/class_238
      // 416: dup
      // 417: aload 24
      // 419: getfield net/minecraft/class_243.field_1352 D
      // 41c: dload 25
      // 41e: dsub
      // 41f: aload 24
      // 421: getfield net/minecraft/class_243.field_1351 D
      // 424: dload 25
      // 426: dsub
      // 427: aload 24
      // 429: getfield net/minecraft/class_243.field_1350 D
      // 42c: dload 25
      // 42e: dsub
      // 42f: aload 24
      // 431: getfield net/minecraft/class_243.field_1352 D
      // 434: dload 25
      // 436: dadd
      // 437: aload 24
      // 439: getfield net/minecraft/class_243.field_1351 D
      // 43c: dload 25
      // 43e: dadd
      // 43f: aload 24
      // 441: getfield net/minecraft/class_243.field_1350 D
      // 444: dload 25
      // 446: dadd
      // 447: invokespecial net/minecraft/class_238.<init> (DDDDDD)V
      // 44a: astore 27
      // 44c: aload 1
      // 44d: aload 27
      // 44f: aload 0
      // 450: getfield sixtwo/cP.rHwiT Lsixtwo/cG;
      // 453: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 456: aload 0
      // 457: getfield sixtwo/cP.QyPao Lsixtwo/cG;
      // 45a: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 45d: aload 0
      // 45e: getfield sixtwo/cP.ZVcly Lsixtwo/cJ;
      // 461: invokevirtual sixtwo/cJ.WF ()Z
      // 464: invokestatic sixtwo/iW.bxs (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;Lsixtwo/mG;Lsixtwo/mG;Z)V
      // 467: return
   }
}
