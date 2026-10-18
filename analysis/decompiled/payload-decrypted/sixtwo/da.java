package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.sound.SoundInstance;
import net.minecraft.util.math.Vec3d;

public class da extends gg implements lA {
   private final cC BBPZZ;
   private final cC GOeqg;
   private final cC shvfT;
   private final List<da$sv> nRjhq;
   private static final long awOVO = gb.aYR(5880329299012704929L, 5876319557294907811L, MethodHandles.lookup().lookupClass()).a(246502944508976L);
   private static final String[] xfLQW;
   private static final String[] UGxHV;
   private static final Map VRJeL = new HashMap(13);
   private static final long[] rgyMI;
   private static final Integer[] GldDA;
   private static final Map eBuXP;

   public da() {
      long var1 = awOVO ^ 3105473772547L;
      super(gf.aZL(85, false, gh.nOCvV));
      int[] var10004 = new int[21];
      var10004[0] = 84;
      var10004[1] = 105;
      var10004[2] = 109;
      var10004[3] = 101;
      var10004[4] = 32;
      var10004[5] = 66;
      var10004[6] = 101;
      var10004[7] = 102;
      var10004[8] = 111;
      var10004[9] = 114;
      var10004[10] = 101;
      var10004[11] = 32;
      var10004[12] = 68;
      var10004[13] = 105;
      var10004[14] = 115;
      var10004[15] = 97;
      var10004[16] = 112;
      var10004[17] = 112;
      var10004[18] = 101;
      var10004[19] = 97;
      var10004[20] = 114;
      this.BBPZZ = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(15.0).VA(8.0).Vz(" s");
      var10004 = new int[14];
      var10004[0] = 81;
      var10004[1] = 117;
      var10004[2] = 97;
      var10004[3] = 110;
      var10004[4] = 116;
      var10004[5] = 105;
      var10004[6] = 116;
      var10004[7] = 121;
      var10004[8] = 32;
      var10004[9] = 76;
      var10004[10] = 105;
      var10004[11] = 109;
      var10004[12] = 105;
      var10004[13] = 116;
      this.GOeqg = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(10.0);
      var10004 = new int[12];
      var10004[0] = 77;
      var10004[1] = 97;
      var10004[2] = 120;
      var10004[3] = 32;
      var10004[4] = 68;
      var10004[5] = 105;
      var10004[6] = 115;
      var10004[7] = 116;
      var10004[8] = 97;
      var10004[9] = 110;
      var10004[10] = 99;
      var10004[11] = 101;
      this.shvfT = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(128.0).VA(32.0).Vz(" blocks");
      this.nRjhq = new ArrayList<>();
   }

   static {
      long var11 = awOVO ^ 40588433248011L;
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
      String var17 = "\u001eÚk\u0011Ù\u0088Tà\u0088\u007fB°È,\u008aæ\u0010ßGØãÐ\u0095¶yæ<ø¢_}Põ";
      int var19 = "\u001eÚk\u0011Ù\u0088Tà\u0088\u007fB°È,\u008aæ\u0010ßGØãÐ\u0095¶yæ<ø¢_}Põ".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = abv(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            xfLQW = var20;
            UGxHV = new String[2];
            eBuXP = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[59];
            int var3 = 0;
            String var4 = "¸\u0006\u0099äL\u0083t\u0098%5 ¶c\u009f\u001aS û¿\u0006#,óÅ_¨\u001düù1Ysa\u008fÅ{ÎÕø\u001f\u00854¶#\u0085²\u0083Ê\u000eO\u009c\u009e\u0092\u009f\u0014;ªHÇøöÓm[T\u001b« \u001aáü`\u00897/\u001d6«\u008e9t/\u0002º3\u0086Au\u0094Ø\u009a\u0080\u0005ÞñµÉ\u0014\u0098ï\u0084u\u0010è\u0006Ñ\u0086I²¢\u0011Q¥\u009cv\u0012\u008dgàÖJP1r\u0017öb~\u0019\u0015J\u0002[Ñ.Ú(\u009a-Ñ\u0015ås \u0089\rÔP!\u0083\"\u0098Ùß[ \u0094B0Dp2.\u0012«µý\u0087ñE]\u0017×§\u001fÄÊ\u0002(º8ü\u0091ÇXUb\u0090E®%«\u000f\"p\u001dã¶ªÐ\u008dÇ2{ÁÍt8gZ\u0019\u000eåF\u0000Ì%»´\u008ed\u0081\u0085}LTþå\u0002\u0000}\u0013æÂOI\u007f`áEçÊ\u008e\u0082\u001e[e\u0084\u0002`*(\u00ad\u0093ii:\u0016A\u0086(}\u0091¡\u000f\u0010m¤ìOP´TüÂë\u0004\u000f¬ë}(¿ÛF\u008euR\u009fE-\"\u0096GÙÃ\u0006\u009dôÆÙ2ÿ\u0080S\u0013Øµ¿ub÷ìý\u0003\u009e\\Ú&/|9Ï°Ù\u0089Ûo\u00adÒ\u0014µ\u0096Gÿ&È\u008a\u0011I¯\u0081Æú²HTË\u0086N½\u0000,ð×îÕEÂ\u001eX\u008cÑÍ8û©\u0081(\u0082ñg\u0096ùXÕ<\u0082ÝÌ\u008aËò*ÍcG«¯Á¯\u0086};vt~\u0001\u008e\u0099\u0083?®Wáü$Ë\u00adó6a\u008b\u0010å¥±$\u0099çfæ>\u001d\u0007Ò½ñ\u0006rDmíjé\u00adÍÞ²\u0015úY\\Èê\u0002\u00adû\u0093D\u0093nÇ?z\t";
            int var5 = "¸\u0006\u0099äL\u0083t\u0098%5 ¶c\u009f\u001aS û¿\u0006#,óÅ_¨\u001düù1Ysa\u008fÅ{ÎÕø\u001f\u00854¶#\u0085²\u0083Ê\u000eO\u009c\u009e\u0092\u009f\u0014;ªHÇøöÓm[T\u001b« \u001aáü`\u00897/\u001d6«\u008e9t/\u0002º3\u0086Au\u0094Ø\u009a\u0080\u0005ÞñµÉ\u0014\u0098ï\u0084u\u0010è\u0006Ñ\u0086I²¢\u0011Q¥\u009cv\u0012\u008dgàÖJP1r\u0017öb~\u0019\u0015J\u0002[Ñ.Ú(\u009a-Ñ\u0015ås \u0089\rÔP!\u0083\"\u0098Ùß[ \u0094B0Dp2.\u0012«µý\u0087ñE]\u0017×§\u001fÄÊ\u0002(º8ü\u0091ÇXUb\u0090E®%«\u000f\"p\u001dã¶ªÐ\u008dÇ2{ÁÍt8gZ\u0019\u000eåF\u0000Ì%»´\u008ed\u0081\u0085}LTþå\u0002\u0000}\u0013æÂOI\u007f`áEçÊ\u008e\u0082\u001e[e\u0084\u0002`*(\u00ad\u0093ii:\u0016A\u0086(}\u0091¡\u000f\u0010m¤ìOP´TüÂë\u0004\u000f¬ë}(¿ÛF\u008euR\u009fE-\"\u0096GÙÃ\u0006\u009dôÆÙ2ÿ\u0080S\u0013Øµ¿ub÷ìý\u0003\u009e\\Ú&/|9Ï°Ù\u0089Ûo\u00adÒ\u0014µ\u0096Gÿ&È\u008a\u0011I¯\u0081Æú²HTË\u0086N½\u0000,ð×îÕEÂ\u001eX\u008cÑÍ8û©\u0081(\u0082ñg\u0096ùXÕ<\u0082ÝÌ\u008aËò*ÍcG«¯Á¯\u0086};vt~\u0001\u008e\u0099\u0083?®Wáü$Ë\u00adó6a\u008b\u0010å¥±$\u0099çfæ>\u001d\u0007Ò½ñ\u0006rDmíjé\u00adÍÞ²\u0015úY\\Èê\u0002\u00adû\u0093D\u0093nÇ?z\t"
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
                           rgyMI = var6;
                           GldDA = new Integer[59];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u0094¬\b N\u0099\u0006ÿ*]\u001f\u008deIid";
                        var5 = "\u0094¬\b N\u0099\u0006ÿ*]\u001f\u008deIid".length();
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

   @hG
   public void abs(gI var1) {
      long var2 = awOVO ^ 65128421803877L;
      iS[] var4 = dh.afl();

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var14) {
         throw abu(var14);
      }

      SoundInstance var5 = var1.bcc();
      Vec3d var6 = new Vec3d(var5.getX(), var5.getY(), var5.getZ());
      double var7 = rD.dlmvG.player.getEntityPos().distanceTo(var6);

      int var10000;
      label53: {
         try {
            double var16;
            var10000 = (var16 = var7 - this.shvfT.VB()) == 0.0 ? 0 : (var16 < 0.0 ? -1 : 1);
            if (var4 != null) {
               break label53;
            }

            if (var10000 > 0) {
               return;
            }
         } catch (MatchException var13) {
            throw abu(var13);
         }

         this.nRjhq.add(new da$sv(var5, var6));
         var10000 = this.nRjhq.size() - this.GOeqg.VC();
      }

      int var9 = var10000;

      label41: {
         try {
            var10000 = var9;
            if (var4 != null) {
               break label41;
            }

            if (var9 <= 0) {
               return;
            }
         } catch (MatchException var12) {
            throw abu(var12);
         }

         var10000 = 0;
      }

      int var10 = var10000;

      while (var10 < var9) {
         da$sv var11 = this.nRjhq.get(var10);
         var11.Taibw.dhd(0.0F);
         var11.zUbCd = true;
         var10++;
         if (var4 != null) {
            break;
         }
      }
   }

   private static CallSite abB(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("abA".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/da" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int abA(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = abz(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String abw(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 9102;
      if (UGxHV[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])VRJeL.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               VRJeL.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/da", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = xfLQW[var5].getBytes("ISO-8859-1");
         UGxHV[var5] = abv(((Cipher)var4[0]).doFinal(var9));
      }

      return UGxHV[var5];
   }

   private static MatchException abu(MatchException var0) {
      return var0;
   }

   private static CallSite aby(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("abx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/da" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object abx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = abw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @hG
   public void abt(gk var1) {
      long var2 = awOVO ^ 7924955209476L;
      iS[] var4 = dh.afl();

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var10) {
         throw abu(var10);
      }

      lC var5 = var1.baT();
      int var6 = this.BBPZZ.VC();
      Iterator var7 = this.nRjhq.iterator();

      while (var7.hasNext()) {
         da$sv var8 = (da$sv)var7.next();

         try {
            var8.doj(var5, var6);
            if (var8.dok()) {
               var7.remove();
            }
         } catch (MatchException var9) {
            throw abu(var9);
         }

         if (var4 != null) {
            break;
         }
      }
   }

   private static String abv(byte[] var0) {
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

   private static int abz(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 9048;
      if (GldDA[var3] == null) {
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
         long var5 = rgyMI[var3];
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
         Object[] var9 = (Object[])eBuXP.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               eBuXP.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/da", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         GldDA[var3] = var15;
      }

      return GldDA[var3];
   }

   @Override
   public void YO() {
      super.YO();
      this.nRjhq.clear();
   }
}
