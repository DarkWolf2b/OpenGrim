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

public class dr extends gg {
   private final cC CWkfv;
   private final cJ BkqiN;
   private final cJ gKqqU;
   private static final long vTteC = gb.aYR(3145743272352896967L, 8872174630551885469L, MethodHandles.lookup().lookupClass()).a(90327463092827L);
   private static final long[] OylXe;
   private static final Integer[] upfQT;
   private static final Map UMELB = new HashMap(13);

   public dr() {
      long var1 = vTteC ^ 139911915838349L;
      super(gf.aZL(aif<"v">(10541, 7207153838797859724L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aif<"v">(11951, 9202671399259647004L ^ var1)];
      var10004[0] = aif<"v">(24523, 1792200710465641792L ^ var1);
      var10004[1] = aif<"v">(30564, 7267379063497848305L ^ var1);
      var10004[2] = aif<"v">(25477, 3242509889990385962L ^ var1);
      var10004[3] = aif<"v">(4351, 8645120556324917871L ^ var1);
      var10004[4] = aif<"v">(5890, 4970217394292331959L ^ var1);
      var10004[5] = aif<"v">(13109, 3878682332817011094L ^ var1);
      var10004[aif<"v">(2, 5988138747134182053L ^ var1)] = aif<"v">(13730, 7786484579233249058L ^ var1);
      var10004[aif<"v">(10360, 3813466806862916330L ^ var1)] = aif<"v">(22461, 728506744166601995L ^ var1);
      var10004[aif<"v">(14313, 4963053878335747450L ^ var1)] = aif<"v">(16088, 8765825203330006116L ^ var1);
      var10004[aif<"v">(14074, 599773453559411837L ^ var1)] = aif<"v">(14083, 3578026705524897192L ^ var1);
      var10004[aif<"v">(4443, 4310349929254949861L ^ var1)] = aif<"v">(3418, 4260366889493925838L ^ var1);
      var10004[aif<"v">(25969, 2066224052342187977L ^ var1)] = aif<"v">(11962, 2724580196056148992L ^ var1);
      var10004[aif<"v">(29139, 8685763823445046115L ^ var1)] = aif<"v">(15593, 4549154364559638125L ^ var1);
      var10004[aif<"v">(32448, 224707225763708031L ^ var1)] = aif<"v">(606, 3644678538541400310L ^ var1);
      this.CWkfv = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(30.0).VA(10.0);
      var10004 = new int[aif<"v">(24343, 8345191261877460381L ^ var1)];
      var10004[0] = aif<"v">(16356, 7414264943714450762L ^ var1);
      var10004[1] = aif<"v">(3452, 4815871427306688481L ^ var1);
      var10004[2] = aif<"v">(32544, 1319055861035826617L ^ var1);
      var10004[3] = aif<"v">(27192, 6590959022183049373L ^ var1);
      var10004[4] = aif<"v">(31519, 194545391244802491L ^ var1);
      var10004[5] = aif<"v">(21690, 8088147296069604872L ^ var1);
      var10004[aif<"v">(7462, 8622099369111560103L ^ var1)] = aif<"v">(12552, 1887640823549965226L ^ var1);
      var10004[aif<"v">(31697, 8462324783448586592L ^ var1)] = aif<"v">(14587, 6140149023184534112L ^ var1);
      var10004[aif<"v">(26926, 8971696319510440895L ^ var1)] = aif<"v">(16088, 8765825203330006116L ^ var1);
      this.BkqiN = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aif<"v">(6386, 3923692494794398303L ^ var1)];
      var10004[0] = aif<"v">(11968, 7539170368714943580L ^ var1);
      var10004[1] = aif<"v">(21690, 8088147296069604872L ^ var1);
      var10004[2] = aif<"v">(31519, 194545391244802491L ^ var1);
      var10004[3] = aif<"v">(21690, 8088147296069604872L ^ var1);
      var10004[4] = aif<"v">(19384, 4327038236131871024L ^ var1);
      var10004[5] = aif<"v">(18569, 818246952923875892L ^ var1);
      var10004[aif<"v">(7462, 8622099369111560103L ^ var1)] = aif<"v">(16088, 8765825203330006116L ^ var1);
      var10004[aif<"v">(31697, 8462324783448586592L ^ var1)] = aif<"v">(3418, 4260366889493925838L ^ var1);
      var10004[aif<"v">(26926, 8971696319510440895L ^ var1)] = aif<"v">(962, 8706223189177205113L ^ var1);
      var10004[aif<"v">(24343, 8345191261877460381L ^ var1)] = aif<"v">(5247, 8684255490653165256L ^ var1);
      var10004[aif<"v">(6266, 5349208133672835802L ^ var1)] = aif<"v">(14083, 3578026705524897192L ^ var1);
      var10004[aif<"v">(7081, 1922927781091776831L ^ var1)] = aif<"v">(11686, 8119084990006341436L ^ var1);
      var10004[aif<"v">(17448, 5314896889440519851L ^ var1)] = aif<"v">(11652, 4741227169437331261L ^ var1);
      var10004[aif<"v">(13538, 6596492471356274248L ^ var1)] = aif<"v">(26285, 586828901579645963L ^ var1);
      var10004[aif<"v">(23204, 3454921207043479610L ^ var1)] = aif<"v">(18053, 4072535957011088391L ^ var1);
      var10004[aif<"v">(19419, 7144355889533733188L ^ var1)] = aif<"v">(3418, 4260366889493925838L ^ var1);
      var10004[aif<"v">(12465, 3984480149800595973L ^ var1)] = aif<"v">(21677, 6180737325412570682L ^ var1);
      var10004[aif<"v">(19945, 3431383072898535276L ^ var1)] = aif<"v">(5781, 1707982054758061075L ^ var1);
      var10004[aif<"v">(28379, 7618131970425875570L ^ var1)] = aif<"v">(18569, 818246952923875892L ^ var1);
      var10004[aif<"v">(28261, 6484256683089259721L ^ var1)] = aif<"v">(18569, 818246952923875892L ^ var1);
      var10004[aif<"v">(9848, 3850105818389193952L ^ var1)] = aif<"v">(31519, 194545391244802491L ^ var1);
      this.gKqqU = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      long var0 = vTteC ^ 36504529395124L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[59];
      int var5 = 0;
      String var6 = "åeË#\u009a\u008fòÙjX\u00153§T\u008bm\u0007Hl \u00989à·ª=ö@nî³»o\u0006\u001eÔòròª?l\u0012ÈB\u00adùï\u0089È¬MåL«lêã>\u0084´¯âcÞô\u008c\nÖ\r\u001dâÊ\u001aFÆ7Ôã-o[\u00adRÁ|\u001b©ã\u001dDZ\u0099b!ÀEò\u0080\u0098ã/c4\u0018®ò´C4\u0014.\u001b\u0005\u008båÐãª}é`ËR\rïJ¾=ÿ¶ä\u008cèá±\u0098\n«Ð\u009eö\u0093ö\u0095¼À\nR \u0092Å\u00973\u0010ö\u0094j\u008c{Ê{ÑáCb>(§:U\u009dAz3\u008eÅ\u0081\u009b¨ÏÊ!ÕôuEçÂ8\u001cÄ1«oyìµÝ\u0099&qî-\\YH1®®/\u00adVxÕòÿ²¶\u007fKfÍ;`\u0088GÂ/\u0085¹Õ|+â\u009d¤Â®\u0011º\u0081¶\u0083\u0084©¡\u0087î6PJ>çhµßñ1\u008eî?wÂÏ\t#\u009bÙ\u008b¶PÉr\u000e«f·WUjëp¢\u009bÔ\u001dâ\u0090þ3gO5«]sþÜ× ')7\u0083o\u008c\f`Ðý\u0085©Ñu\u008bÅõlmqçº9ß#\nÀö\u001d'õ\u000eg\u001eqN\u0086\u000b7\u0019L\u009e6Gåß\u0090²Èò)-!\u0086º¹&üÏ\u0006ª\u008bQY\"é¦\u0098EÐGæ\u008eÎ\u0099I0·X\u009d/Å\u0091\n§â\u008bÞS/å\n»¬y ¶~»QÔ6L7\u0081UÉz$a\u008fÙù\u000e¦´C\u000bêp \tÎÚ\u000e\tx\u001f1\bòÞ\u009ap9õÔÃÔ\u0003cx%ÞÁ\u0088çüù\u000bê\u0092>©Ö";
      int var7 = "åeË#\u009a\u008fòÙjX\u00153§T\u008bm\u0007Hl \u00989à·ª=ö@nî³»o\u0006\u001eÔòròª?l\u0012ÈB\u00adùï\u0089È¬MåL«lêã>\u0084´¯âcÞô\u008c\nÖ\r\u001dâÊ\u001aFÆ7Ôã-o[\u00adRÁ|\u001b©ã\u001dDZ\u0099b!ÀEò\u0080\u0098ã/c4\u0018®ò´C4\u0014.\u001b\u0005\u008båÐãª}é`ËR\rïJ¾=ÿ¶ä\u008cèá±\u0098\n«Ð\u009eö\u0093ö\u0095¼À\nR \u0092Å\u00973\u0010ö\u0094j\u008c{Ê{ÑáCb>(§:U\u009dAz3\u008eÅ\u0081\u009b¨ÏÊ!ÕôuEçÂ8\u001cÄ1«oyìµÝ\u0099&qî-\\YH1®®/\u00adVxÕòÿ²¶\u007fKfÍ;`\u0088GÂ/\u0085¹Õ|+â\u009d¤Â®\u0011º\u0081¶\u0083\u0084©¡\u0087î6PJ>çhµßñ1\u008eî?wÂÏ\t#\u009bÙ\u008b¶PÉr\u000e«f·WUjëp¢\u009bÔ\u001dâ\u0090þ3gO5«]sþÜ× ')7\u0083o\u008c\f`Ðý\u0085©Ñu\u008bÅõlmqçº9ß#\nÀö\u001d'õ\u000eg\u001eqN\u0086\u000b7\u0019L\u009e6Gåß\u0090²Èò)-!\u0086º¹&üÏ\u0006ª\u008bQY\"é¦\u0098EÐGæ\u008eÎ\u0099I0·X\u009d/Å\u0091\n§â\u008bÞS/å\n»¬y ¶~»QÔ6L7\u0081UÉz$a\u008fÙù\u000e¦´C\u000bêp \tÎÚ\u000e\tx\u001f1\bòÞ\u009ap9õÔÃÔ\u0003cx%ÞÁ\u0088çüù\u000bê\u0092>©Ö"
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
                     OylXe = var8;
                     upfQT = new Integer[59];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "ö¤Ô÷\u0097\u0087Ñj\t½Ë'Àn1w";
                  var7 = "ö¤Ô÷\u0097\u0087Ñj\t½Ë'Àn1w".length();
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

   private static int aid(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 14441;
      if (upfQT[var3] == null) {
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
         long var5 = OylXe[var3];
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
         Object[] var9 = (Object[])UMELB.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               UMELB.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         upfQT[var3] = var15;
      }

      return upfQT[var3];
   }

   private static int aie(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aid(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException aic(MatchException var0) {
      return var0;
   }

   @hG
   public void aib(gi param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dr.vTteC J
      // 03: ldc2_w 52501574560915
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: getstatic sixtwo/kn.YNOIY Z
      // 10: ifeq 18
      // 13: return
      // 14: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17: athrow
      // 18: aload 1
      // 19: invokevirtual sixtwo/gi.baL ()Lnet/minecraft/class_1297;
      // 1c: astore 6
      // 1e: aload 6
      // 20: aload 4
      // 22: ifnonnull 3b
      // 25: instanceof net/minecraft/class_742
      // 28: ifeq 45
      // 2b: goto 32
      // 2e: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 6
      // 34: goto 3b
      // 37: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: checkcast net/minecraft/class_742
      // 3e: astore 5
      // 40: aload 4
      // 42: ifnull 4a
      // 45: return
      // 46: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 5
      // 4c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 4f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 52: if_acmpne 5a
      // 55: return
      // 56: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: aload 0
      // 5b: getfield sixtwo/dr.BkqiN Lsixtwo/cJ;
      // 5e: invokevirtual sixtwo/cJ.WF ()Z
      // 61: aload 4
      // 63: ifnonnull 7c
      // 66: ifne 80
      // 69: goto 70
      // 6c: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6f: athrow
      // 70: aload 5
      // 72: invokevirtual net/minecraft/class_742.method_5767 ()Z
      // 75: goto 7c
      // 78: invokestatic sixtwo/dr.aic (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: ifeq 80
      // 7f: return
      // 80: aload 1
      // 81: invokevirtual sixtwo/gi.baN ()Lnet/minecraft/class_4587;
      // 84: aload 5
      // 86: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 89: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 8c: aload 1
      // 8d: invokevirtual sixtwo/gi.baO ()Lnet/minecraft/class_11659;
      // 90: aload 0
      // 91: getfield sixtwo/dr.CWkfv Lsixtwo/cC;
      // 94: invokevirtual sixtwo/cC.VC ()I
      // 97: aload 0
      // 98: getfield sixtwo/dr.gKqqU Lsixtwo/cJ;
      // 9b: invokevirtual sixtwo/cJ.WF ()Z
      // 9e: invokestatic sixtwo/rs.djl (Lnet/minecraft/class_4587;Lnet/minecraft/class_11890;Lnet/minecraft/class_898;Lnet/minecraft/class_11659;IZ)V
      // a1: return
   }

   private static CallSite aif(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aie".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
