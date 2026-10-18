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

public class bE extends cn {
   cJ RblnL;
   bH laKMA;
   bH XAxpb;
   bH oEstM;
   private static final long piSZG = gb.aYR(6916381278953319919L, 1988034001570874581L, MethodHandles.lookup().lookupClass()).a(229229543666914L);
   private static final String TxDro;
   private static final long[] YOiuM;
   private static final Integer[] YBoJQ;
   private static final Map OTFbL;

   public bE() {
      long var1 = piSZG ^ 10451145686305L;
      int[] var10001 = new int[Mc<"k">(3276, 3569901727160436380L ^ var1)];
      var10001[0] = Mc<"k">(17293, 6127959975924255168L ^ var1);
      var10001[1] = Mc<"k">(16465, 3866147166764354064L ^ var1);
      var10001[2] = Mc<"k">(14584, 7666234202597143220L ^ var1);
      var10001[3] = Mc<"k">(24869, 2501851902688127867L ^ var1);
      var10001[4] = Mc<"k">(23735, 7051842695741855451L ^ var1);
      var10001[5] = Mc<"k">(26810, 3996863510986973940L ^ var1);
      var10001[Mc<"k">(5586, 4100666303987228547L ^ var1)] = Mc<"k">(26788, 9137014682414146251L ^ var1);
      var10001[Mc<"k">(25429, 6093962185904089347L ^ var1)] = Mc<"k">(14464, 4525841346097132261L ^ var1);
      var10001[Mc<"k">(18449, 1072985707948917336L ^ var1)] = Mc<"k">(19137, 2323028045424345226L ^ var1);
      super(var10001, lf.Blydk, true);
      int[] var10004 = new int[Mc<"k">(11836, 2626006957470983264L ^ var1)];
      var10004[0] = Mc<"k">(28570, 9010174344401970684L ^ var1);
      var10004[1] = Mc<"k">(14464, 4525841346097132261L ^ var1);
      var10004[2] = Mc<"k">(3854, 9061457668892427612L ^ var1);
      var10004[3] = Mc<"k">(27064, 2741744412638733275L ^ var1);
      var10004[4] = Mc<"k">(8501, 8524412242169768786L ^ var1);
      var10004[5] = Mc<"k">(15436, 5372789138913277449L ^ var1);
      var10004[Mc<"k">(32614, 7293346438106477857L ^ var1)] = Mc<"k">(27064, 2741744412638733275L ^ var1);
      var10004[Mc<"k">(31010, 6923791129371177792L ^ var1)] = Mc<"k">(23252, 1979254092493869200L ^ var1);
      var10004[Mc<"k">(31156, 2299159018370495453L ^ var1)] = Mc<"k">(15719, 8088738523056748325L ^ var1);
      var10004[Mc<"k">(31533, 2792048680931717498L ^ var1)] = Mc<"k">(26788, 9137014682414146251L ^ var1);
      var10004[Mc<"k">(13461, 1880694164333772511L ^ var1)] = Mc<"k">(12503, 3395075623470807690L ^ var1);
      var10004[Mc<"k">(9985, 886661011832712519L ^ var1)] = Mc<"k">(8501, 8524412242169768786L ^ var1);
      this.RblnL = new cJ(this, mr.clS(var10004)).WE(true);
      cv var10003 = this.ZpVra;
      var10004 = new int[Mc<"k">(13683, 8970855053503414039L ^ var1)];
      var10004[0] = Mc<"k">(30194, 3819092049479630762L ^ var1);
      var10004[1] = Mc<"k">(9169, 4325528195516377480L ^ var1);
      var10004[2] = Mc<"k">(16258, 4126462942310217153L ^ var1);
      var10004[3] = Mc<"k">(8501, 8524412242169768786L ^ var1);
      var10004[4] = Mc<"k">(22035, 5256269544285461575L ^ var1);
      var10004[5] = Mc<"k">(27064, 2741744412638733275L ^ var1);
      var10004[Mc<"k">(32614, 7293346438106477857L ^ var1)] = Mc<"k">(32735, 2538248989978883505L ^ var1);
      var10004[Mc<"k">(31010, 6923791129371177792L ^ var1)] = Mc<"k">(10934, 8781813573536325878L ^ var1);
      var10004[Mc<"k">(31156, 2299159018370495453L ^ var1)] = Mc<"k">(26788, 9137014682414146251L ^ var1);
      var10004[Mc<"k">(31533, 2792048680931717498L ^ var1)] = Mc<"k">(12503, 3395075623470807690L ^ var1);
      var10004[Mc<"k">(24361, 4322200148136482115L ^ var1)] = Mc<"k">(8501, 8524412242169768786L ^ var1);
      this.laKMA = new bH(var10003, mr.clS(var10004));
      String[] var10000 = bH.Mt();
      this.XAxpb = new bH(
         this.ZpVra,
         mr.clS(new int[]{Mc<"k">(23993, 5024328480512628721L ^ var1), Mc<"k">(5059, 1534243604045371801L ^ var1), Mc<"k">(20743, 1235012818738142063L ^ var1)}),
         TxDro
      );
      cv var9 = this.ZpVra;
      int[] var10005 = new int[Mc<"k">(32614, 7293346438106477857L ^ var1)];
      var10005[0] = Mc<"k">(4954, 5961752239504005391L ^ var1);
      var10005[1] = Mc<"k">(347, 6590271661682526984L ^ var1);
      var10005[2] = Mc<"k">(26788, 9137014682414146251L ^ var1);
      var10005[3] = Mc<"k">(28595, 4480369979962222056L ^ var1);
      var10005[4] = Mc<"k">(8501, 8524412242169768786L ^ var1);
      var10005[5] = Mc<"k">(14464, 4525841346097132261L ^ var1);
      this.oEstM = new bH(var9, mr.clS(var10005));
      String[] var3 = var10000;

      try {
         this.RO(10.0F, 10.0F);
         this.Ss(true);
         this.XAxpb.TB();
         bH var5 = this.laKMA;
         var10001 = new int[Mc<"k">(13683, 8970855053503414039L ^ var1)];
         var10001[0] = Mc<"k">(29119, 6553095872786234352L ^ var1);
         var10001[1] = Mc<"k">(14464, 4525841346097132261L ^ var1);
         var10001[2] = Mc<"k">(8445, 3309378317551905442L ^ var1);
         var10001[3] = Mc<"k">(12503, 3395075623470807690L ^ var1);
         var10001[4] = Mc<"k">(32735, 2538248989978883505L ^ var1);
         var10001[5] = Mc<"k">(6843, 246902631058084048L ^ var1);
         var10001[Mc<"k">(32614, 7293346438106477857L ^ var1)] = Mc<"k">(347, 6590271661682526984L ^ var1);
         var10001[Mc<"k">(31010, 6923791129371177792L ^ var1)] = Mc<"k">(8445, 3309378317551905442L ^ var1);
         var10001[Mc<"k">(31156, 2299159018370495453L ^ var1)] = Mc<"k">(8501, 8524412242169768786L ^ var1);
         var10001[Mc<"k">(31533, 2792048680931717498L ^ var1)] = Mc<"k">(13246, 2080937987201776083L ^ var1);
         var10001[Mc<"k">(24361, 4322200148136482115L ^ var1)] = Mc<"k">(27064, 2741744412638733275L ^ var1);
         var5.Mp(var10001);
         bH var6 = this.XAxpb;
         ry.dkB();
         var6.Mo(String.valueOf(1337));
         if (var3 == null) {
            iS.bwK("wqke4b");
         }
      } catch (MatchException var4) {
         throw LY(var4);
      }
   }

   static {
      long var11 = piSZG ^ 119153465203386L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("ouñ.¾nªÑ".getBytes("ISO-8859-1"));
      String var22 = LZ(var15).intern();
      int var10001 = -1;
      TxDro = var22;
      OTFbL = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[46];
      int var3 = 0;
      String var4 = "È\u0013:\u0000@\u008eÑ¾Ä\u0087\u000bî \u0014:\u0007¹eïZt\u0099\u009a\u000b\u008d\u008bÑ±\u0015Ï^ú'ØPFUÉ$°\r\u0001.¶\u008eá%Ú \u000bÛnuø\u0002lR\u0093'\u0083Í\n\u0000\u000eªJ·C*p±òÈg\u001a\u0017&\u008b\u0005(â¹Qg'v\u0089®zïP1I fÇÃ\u0085ºÛ|4ÿ±VT\u000bçAigq\u0013M\u009d\u0096\u0084@^D¸\u000eñ\bym\u0094c\u0004XXæþ\u0018\u00869iBEX\u0003>+µ\b¶\u008ax;\u0083\r\u009a\u0002$\u009cRSÍqÈ\u00849meÍ¯WegnÉ\u0096\u0016F\u0087\u0014a6:::æ¶%\u0001/\u001bT\u000f}Ä\u00adÎçkÂç§XØð¸»?ÿ\u0006OÆ\u008am\u009c¦¥øM,Ëï©2[éu1]ieR\u0003\u0080\u0015\u0019E\u0005£ò\u0004§\u0000á47DT]¥[ÑÁ3àmr\u0084ôZÝÂON\u0019·7#ÅV\u008eU.\u0015>¿'h§Å\bÆ=&$í¾A(\u0017ðÇ¢úh<¢ \u0094p¢+\u0011\"-TmM)£\nq\u0086$ñ\n<C3\u009bséèß>È\u0092Ë\u0019O\u009a\u0081\u000f\f\u0012\u009e\u0014àkX¾\u0099äÓ\u008c +Ó9r£$º\u00ad\"¦";
      int var5 = "È\u0013:\u0000@\u008eÑ¾Ä\u0087\u000bî \u0014:\u0007¹eïZt\u0099\u009a\u000b\u008d\u008bÑ±\u0015Ï^ú'ØPFUÉ$°\r\u0001.¶\u008eá%Ú \u000bÛnuø\u0002lR\u0093'\u0083Í\n\u0000\u000eªJ·C*p±òÈg\u001a\u0017&\u008b\u0005(â¹Qg'v\u0089®zïP1I fÇÃ\u0085ºÛ|4ÿ±VT\u000bçAigq\u0013M\u009d\u0096\u0084@^D¸\u000eñ\bym\u0094c\u0004XXæþ\u0018\u00869iBEX\u0003>+µ\b¶\u008ax;\u0083\r\u009a\u0002$\u009cRSÍqÈ\u00849meÍ¯WegnÉ\u0096\u0016F\u0087\u0014a6:::æ¶%\u0001/\u001bT\u000f}Ä\u00adÎçkÂç§XØð¸»?ÿ\u0006OÆ\u008am\u009c¦¥øM,Ëï©2[éu1]ieR\u0003\u0080\u0015\u0019E\u0005£ò\u0004§\u0000á47DT]¥[ÑÁ3àmr\u0084ôZÝÂON\u0019·7#ÅV\u008eU.\u0015>¿'h§Å\bÆ=&$í¾A(\u0017ðÇ¢úh<¢ \u0094p¢+\u0011\"-TmM)£\nq\u0086$ñ\n<C3\u009bséèß>È\u0092Ë\u0019O\u009a\u0081\u000f\f\u0012\u009e\u0014àkX¾\u0099äÓ\u008c +Ó9r£$º\u00ad\"¦"
         .length();
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
                     YOiuM = var6;
                     YBoJQ = new Integer[46];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "Ù/kUBGÃÖ³\u0002Å%ã\u0003së";
                  var5 = "Ù/kUBGÃÖ³\u0002Å%ã\u0003së".length();
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

   private static CallSite Mc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Mb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bE" + " : " + var1 + " : " + var2.toString(), var5);
      }
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
      // 00: getstatic sixtwo/bE.piSZG J
      // 03: ldc2_w 69248129013690
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/bH.Mt ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokespecial sixtwo/cn.LX (Lsixtwo/lC;)V
      // 10: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 13: ldc_w sixtwo/fS
      // 16: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 19: checkcast sixtwo/fS
      // 1c: astore 5
      // 1e: astore 4
      // 20: aload 0
      // 21: getfield sixtwo/bE.RblnL Lsixtwo/cJ;
      // 24: invokevirtual sixtwo/cJ.WF ()Z
      // 27: aload 4
      // 29: ifnull 4e
      // 2c: ifeq 5c
      // 2f: goto 36
      // 32: invokestatic sixtwo/bE.LY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 5
      // 38: aload 4
      // 3a: ifnull 53
      // 3d: goto 44
      // 40: invokestatic sixtwo/bE.LY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: invokevirtual sixtwo/fS.bag ()Z
      // 47: goto 4e
      // 4a: invokestatic sixtwo/bE.LY (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d: athrow
      // 4e: ifeq 5c
      // 51: aload 5
      // 53: invokevirtual sixtwo/fS.aWX ()Lsixtwo/cy;
      // 56: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 59: goto 68
      // 5c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 5f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 62: invokevirtual net/minecraft/class_746.method_7334 ()Lcom/mojang/authlib/GameProfile;
      // 65: invokevirtual com/mojang/authlib/GameProfile.name ()Ljava/lang/String;
      // 68: invokestatic sixtwo/mZ.csh (Ljava/lang/String;)[I
      // 6b: astore 6
      // 6d: aload 0
      // 6e: getfield sixtwo/bE.oEstM Lsixtwo/bH;
      // 71: aload 6
      // 73: invokevirtual sixtwo/bH.Mp ([I)V
      // 76: return
   }

   private static int Mb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Ma(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Ma(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26305;
      if (YBoJQ[var3] == null) {
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
         long var5 = YOiuM[var3];
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
         Object[] var9 = (Object[])OTFbL.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               OTFbL.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bE", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         YBoJQ[var3] = var15;
      }

      return YBoJQ[var3];
   }

   private static String LZ(byte[] var0) {
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

   private static MatchException LY(MatchException var0) {
      return var0;
   }
}
