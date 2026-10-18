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

public class bP extends bS {
   private static final long OrHSZ = gb.aYR(6415508564072682166L, 1219073124727057371L, MethodHandles.lookup().lookupClass()).a(63773572064124L);
   private static final long[] FeWAQ;
   private static final Integer[] IwENq;
   private static final Map mTYzX = new HashMap(13);

   private static CallSite NE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ND".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bP" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public bP(cv var1) {
      long var2 = OrHSZ ^ 136687220498084L;
      int[] var10002 = new int[NE<"y">(20142, 5149248249899609751L ^ var2)];
      var10002[0] = NE<"y">(8616, 3765890742151119255L ^ var2);
      var10002[1] = NE<"y">(15001, 4705960402370894524L ^ var2);
      var10002[2] = NE<"y">(8464, 2519042801797103923L ^ var2);
      var10002[3] = NE<"y">(11625, 2814473345200590150L ^ var2);
      var10002[4] = NE<"y">(21535, 1906969579897254917L ^ var2);
      var10002[5] = NE<"y">(17893, 1090632185459729883L ^ var2);
      var10002[NE<"y">(10558, 1539694150808504609L ^ var2)] = NE<"y">(4988, 1263837571968807750L ^ var2);
      var10002[NE<"y">(21728, 1742575573054518520L ^ var2)] = NE<"y">(6192, 8600465475783211013L ^ var2);
      var10002[NE<"y">(24181, 3668487668093058633L ^ var2)] = NE<"y">(24314, 3389359313315856081L ^ var2);
      var10002[NE<"y">(32117, 5227714263472725325L ^ var2)] = NE<"y">(23266, 2183311392897137346L ^ var2);
      var10002[NE<"y">(4159, 4496039901901402131L ^ var2)] = NE<"y">(11821, 2862758925261442614L ^ var2);
      var10002[NE<"y">(13224, 176449406131245966L ^ var2)] = NE<"y">(23266, 2183311392897137346L ^ var2);
      var10002[NE<"y">(30058, 7087429100836214104L ^ var2)] = NE<"y">(4283, 5706963943547940998L ^ var2);
      var10002[NE<"y">(30103, 305813819030394276L ^ var2)] = NE<"y">(24178, 8930555522878439007L ^ var2);
      super(var1, mr.clS(var10002));
      this.TB();
      this.Tz();
   }

   static {
      long var0 = OrHSZ ^ 108478420721736L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[38];
      int var5 = 0;
      String var6 = "¡Ý\u0099\u0094\u000eb\u009aÊ \"\u00062\u009f\u009dj;å^\u0005bJCUóÛüÁÌ\u0096\u008aß\u001b\u0004¯HpÔ\u0085<i¸nÀÃ@gOô\u0019Å\"Wº\u0002.\u001ff\u008f½ç\u0018É\réY`÷R°ü·\u0006ï\u0083Â¿U\u0097%ÖR\u00ad±QÝªì~g\u0090Æ\f\u008f\u0094êxÍx\u001cÎ\f\u008a\u009c=xÂ\u0092¦\u0094h\u008að\u0080þ\\qß\u0005\\Æ\u0015M{zBófÌ\u001c*¯Q`ö/:\u001f\u0003\u000bíi8PîEIO\u008c\u0003ñ~6\u008fäÅ¥Vw\u0018\u0093\u001f\u0012l¤Åµl\u0014\u0007.Ie²º61¬?Ïëó\u0006HW+1\u007f\u0000\u001e\u0017Û\\\u000f\u0084\u008a\feÍ\u0019 Q«À2pÏÚ\fÐIqö\u0007{~,\u0011\u008fìßØÝ\u0010\u0086W«ÌfÜã\u001c§´-]\u0095\u001e\u008fÁ\u0086Ùó\u008c3\u0098i\u00820}\u0018ó\u001eBhú6\u008d\rËco?\u008a#\u009b\u0001Úô@l+Z\u0093ìóquÍ\u0007öKõ±R\u00ad?ð§";
      int var7 = "¡Ý\u0099\u0094\u000eb\u009aÊ \"\u00062\u009f\u009dj;å^\u0005bJCUóÛüÁÌ\u0096\u008aß\u001b\u0004¯HpÔ\u0085<i¸nÀÃ@gOô\u0019Å\"Wº\u0002.\u001ff\u008f½ç\u0018É\réY`÷R°ü·\u0006ï\u0083Â¿U\u0097%ÖR\u00ad±QÝªì~g\u0090Æ\f\u008f\u0094êxÍx\u001cÎ\f\u008a\u009c=xÂ\u0092¦\u0094h\u008að\u0080þ\\qß\u0005\\Æ\u0015M{zBófÌ\u001c*¯Q`ö/:\u001f\u0003\u000bíi8PîEIO\u008c\u0003ñ~6\u008fäÅ¥Vw\u0018\u0093\u001f\u0012l¤Åµl\u0014\u0007.Ie²º61¬?Ïëó\u0006HW+1\u007f\u0000\u001e\u0017Û\\\u000f\u0084\u008a\feÍ\u0019 Q«À2pÏÚ\fÐIqö\u0007{~,\u0011\u008fìßØÝ\u0010\u0086W«ÌfÜã\u001c§´-]\u0095\u001e\u008fÁ\u0086Ùó\u008c3\u0098i\u00820}\u0018ó\u001eBhú6\u008d\rËco?\u008a#\u009b\u0001Úô@l+Z\u0093ìóquÍ\u0007öKõ±R\u00ad?ð§"
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
                     FeWAQ = var8;
                     IwENq = new Integer[38];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u000f'ç.®¯#\u0006<Û\u008c$¥y§8";
                  var7 = "\u000f'ç.®¯#\u0006<Û\u008c$¥y§8".length();
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
      return true;
   }

   private static MatchException NB(MatchException var0) {
      return var0;
   }

   @Override
   public void MG(lC var1, ii var2) {
      long var3 = OrHSZ ^ 119587086872919L;
      bU var6 = rD.dlK().RC();
      float var7 = var6.RW();
      float var8 = var6.RX();
      boolean var10000 = bJ.MN();
      lq var9 = lE.WTzbi.bYM(7.0F);
      int[] var10001 = new int[NE<"y">(31399, 1972544158929483119L ^ var3)];
      var10001[0] = NE<"y">(19527, 140726421082358659L ^ var3);
      var10001[1] = NE<"y">(31165, 3785161044369372783L ^ var3);
      var10001[2] = NE<"y">(17670, 3606303592434617053L ^ var3);
      var10001[3] = NE<"y">(8976, 7190370590506626258L ^ var3);
      var10001[4] = NE<"y">(10748, 2593105908295411240L ^ var3);
      var10001[5] = NE<"y">(26194, 4140586752097708437L ^ var3);
      var10001[NE<"y">(31224, 8935039189026240061L ^ var3)] = NE<"y">(498, 4046490978589314584L ^ var3);
      var10001[NE<"y">(30171, 7948920037642566198L ^ var3)] = NE<"y">(28416, 6929880474266132698L ^ var3);
      var10001[NE<"y">(2348, 188040735210571515L ^ var3)] = NE<"y">(31712, 2003804481006597181L ^ var3);
      var10001[NE<"y">(28097, 918545015071138328L ^ var3)] = NE<"y">(26229, 3190693325686270390L ^ var3);
      var10001[NE<"y">(4789, 4218880261516959076L ^ var3)] = NE<"y">(23266, 2183329615095682353L ^ var3);
      int[] var10 = var10001;
      float var11 = 20.0F + var9.cap(var10);
      float var12 = 15.0F;
      boolean var5 = var10000;
      this.fGWTH.NU(var11, var12);
      float var13 = var7 - 6.0F + 10.0F * this.dExGi.dhj();
      float var14 = var8 + 4.0F;
      la var15 = la.bWA(var2.bjf(), var2.bjf().coc(mG.hoGuU, 0.4F), var2.bjf().coc(mG.hoGuU, 0.4F), var2.bjf().coc(mG.hoGuU, 0.2F));

      try {
         var1.cde(var13, var14, 7.0F, var15);
         var1.ceA(var9, var10, var7 + 25.0F - 10.0F * this.dExGi.dhj(), var8 + 5.0F, var2.bjb());
         if (var5) {
            iS.bwK("walN4b");
         }
      } catch (MatchException var16) {
         throw NB(var16);
      }
   }

   private static int ND(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = NC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int NC(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11521;
      if (IwENq[var3] == null) {
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
         long var5 = FeWAQ[var3];
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
         Object[] var9 = (Object[])mTYzX.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               mTYzX.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bP", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         IwENq[var3] = var15;
      }

      return IwENq[var3];
   }
}
