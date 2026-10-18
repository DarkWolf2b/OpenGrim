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

public class dn extends gg {
   private final cC xTDBB;
   private final cC zMQfx;
   private final List<dn$sF> GtFRG;
   private static final long LaMyq = gb.aYR(-9204070481229236576L, 6510353852486166732L, MethodHandles.lookup().lookupClass()).a(233154535721591L);
   private static final String AhEPk;
   private static final long[] AYzFk;
   private static final Integer[] KsQnb;
   private static final Map FpBNc;

   public dn() {
      long var1 = LaMyq ^ 124566129156059L;
      super(gf.aZL(ahg<"y">(26713, 6168048034291955630L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ahg<"y">(853, 4578731328536632485L ^ var1)];
      var10004[0] = ahg<"y">(13370, 3280529682852309978L ^ var1);
      var10004[1] = ahg<"y">(32616, 262572066777178251L ^ var1);
      var10004[2] = ahg<"y">(29346, 1331398094232038771L ^ var1);
      var10004[3] = ahg<"y">(1873, 5731909595974817980L ^ var1);
      var10004[4] = ahg<"y">(30122, 2560926880649062994L ^ var1);
      var10004[5] = ahg<"y">(23897, 3494818554734871204L ^ var1);
      var10004[ahg<"y">(14068, 3252227197710395679L ^ var1)] = ahg<"y">(12964, 1034434036203679050L ^ var1);
      var10004[ahg<"y">(23958, 4027245722161939053L ^ var1)] = ahg<"y">(18537, 3302474195044374443L ^ var1);
      var10004[ahg<"y">(27240, 7052788617560929681L ^ var1)] = ahg<"y">(7357, 1489439756058182503L ^ var1);
      var10004[ahg<"y">(5607, 1432960176710371861L ^ var1)] = ahg<"y">(26505, 2906763998602115165L ^ var1);
      var10004[ahg<"y">(28356, 1510159882472206640L ^ var1)] = ahg<"y">(12964, 1034434036203679050L ^ var1);
      var10004[ahg<"y">(27924, 7673404612096963276L ^ var1)] = ahg<"y">(31070, 8347569099711882911L ^ var1);
      var10004[ahg<"y">(32651, 4449281587913465928L ^ var1)] = ahg<"y">(4367, 2686452860759396056L ^ var1);
      var10004[ahg<"y">(16840, 6923679573257723407L ^ var1)] = ahg<"y">(12716, 9213884027237690995L ^ var1);
      var10004[ahg<"y">(8030, 7798035443340951729L ^ var1)] = ahg<"y">(12708, 5470202423732334147L ^ var1);
      var10004[ahg<"y">(24075, 894253062525256162L ^ var1)] = ahg<"y">(12599, 2371588536105529060L ^ var1);
      var10004[ahg<"y">(16744, 7252004810512506521L ^ var1)] = ahg<"y">(1454, 6123296795938609736L ^ var1);
      var10004[ahg<"y">(28395, 1746568741358547253L ^ var1)] = ahg<"y">(9359, 7016232492506381139L ^ var1);
      var10004[ahg<"y">(31053, 1008248332390377137L ^ var1)] = ahg<"y">(12964, 1034434036203679050L ^ var1);
      var10004[ahg<"y">(32716, 1413252973138649105L ^ var1)] = ahg<"y">(18088, 2605338937696557432L ^ var1);
      var10004[ahg<"y">(20832, 6186951024548253344L ^ var1)] = ahg<"y">(13158, 4144214078050823306L ^ var1);
      this.xTDBB = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(15.0).VA(8.0).Vz(AhEPk);
      var10004 = new int[ahg<"y">(16925, 8307961728019701237L ^ var1)];
      var10004[0] = ahg<"y">(25915, 6479758411611978458L ^ var1);
      var10004[1] = ahg<"y">(5911, 4435733876017088744L ^ var1);
      var10004[2] = ahg<"y">(18088, 2605338937696557432L ^ var1);
      var10004[3] = ahg<"y">(27423, 2641481361076368582L ^ var1);
      var10004[4] = ahg<"y">(32680, 3735202988026667101L ^ var1);
      var10004[5] = ahg<"y">(12716, 9213884027237690995L ^ var1);
      var10004[ahg<"y">(11415, 8804131339055526765L ^ var1)] = ahg<"y">(16186, 2360124922054828255L ^ var1);
      var10004[ahg<"y">(7962, 7818814371692462284L ^ var1)] = ahg<"y">(20939, 1379142270795484688L ^ var1);
      var10004[ahg<"y">(26901, 4860332800743978743L ^ var1)] = ahg<"y">(31070, 8347569099711882911L ^ var1);
      var10004[ahg<"y">(31107, 1349726770539439721L ^ var1)] = ahg<"y">(20294, 6689328737058951349L ^ var1);
      var10004[ahg<"y">(16980, 7826923570670247330L ^ var1)] = ahg<"y">(12716, 9213884027237690995L ^ var1);
      var10004[ahg<"y">(31234, 4440444790288786918L ^ var1)] = ahg<"y">(89, 5850109637736652683L ^ var1);
      var10004[ahg<"y">(9225, 9189026218562026460L ^ var1)] = ahg<"y">(12716, 9213884027237690995L ^ var1);
      var10004[ahg<"y">(30489, 3632375598459431143L ^ var1)] = ahg<"y">(16186, 2360124922054828255L ^ var1);
      this.zMQfx = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(10.0);
      this.GtFRG = new ArrayList<>();
   }

   static {
      long var11 = LaMyq ^ 128716650706329L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("s70Zµ<HR".getBytes("ISO-8859-1"));
      String var22 = ahd(var15).intern();
      int var10001 = -1;
      AhEPk = var22;
      FpBNc = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[53];
      int var3 = 0;
      String var4 = "ý\u0086¤\u009aã×ÌMP{jAõ\u0089²·\u0086ø/8áµd4\u001d\u0006í5 ÐZA6ãÑ²\u0094ÊäÔ|\u00adýå4\u0093$ê\"\u0099\u009aðdÂÀLQyÇ\u0088N&\u0093¯´#^v\\=\u000eô}ÍPóç3Ík!Ú{\u0095\n6}iv\u008d«O\u001dã´w#ïnÊÅ¦l¤\u008bAñfFK\fîÉ\u00847\u0014ä&vÿ\u008fêG6\u001a\u0080{Eæ\u0011\u008d¼óÌMqÎè°.9ë;\f\u009f3\u0003\u0018éî&ôÄ}Ùò»5¼ÁwÒ\u009f^£é\u00ad9Ó§®|\u009bm\u0094!\u0018Ç@þåf£v&:¡\u009c\u001c\u0000a\u009e\u009dëÄ÷íÔÂ¦(\u009a*È\u0012%¶cn\u0091E\u0087\u0004D$G@\u0004\u008dÛ\u001a«\u0011pñÊ\u0099·Óy@Àn\u0083\f·\u0018>j|\u001a\u0091P¿z&\u00129òH\u0098b\u0097\u0001 ö\u00114H\u000e\u008e@\u0003¬\\\u0081\u000e\u0086\fNcÐÛ\u008d\u0001Ký7\u0005\u0019ùÆðu\u0085MVÏ$cÞü%k\u000e£à&¥?~\u0093>o¾ñ\u0099\u0098gõ\u0083]÷ð¸KQ«©\u0091æ\u0017\fk\u0006H.\u0004~\u001aÛàÑnº\u008d¥ø»C¿|\u009boòÐ\bk+\u009eõ\u0007Û\u0097ÿz\u0082\u0086½ºo¥nñ\u0017¡\u001bBõ\u009b4ÉS\u0001ôÔ£?\u0016\u008eôú\u008d¨\u0016\bè¶ü×éÿÁÒHUíýËñ²\u0084\u009dk;\u0017\u0085²";
      int var5 = "ý\u0086¤\u009aã×ÌMP{jAõ\u0089²·\u0086ø/8áµd4\u001d\u0006í5 ÐZA6ãÑ²\u0094ÊäÔ|\u00adýå4\u0093$ê\"\u0099\u009aðdÂÀLQyÇ\u0088N&\u0093¯´#^v\\=\u000eô}ÍPóç3Ík!Ú{\u0095\n6}iv\u008d«O\u001dã´w#ïnÊÅ¦l¤\u008bAñfFK\fîÉ\u00847\u0014ä&vÿ\u008fêG6\u001a\u0080{Eæ\u0011\u008d¼óÌMqÎè°.9ë;\f\u009f3\u0003\u0018éî&ôÄ}Ùò»5¼ÁwÒ\u009f^£é\u00ad9Ó§®|\u009bm\u0094!\u0018Ç@þåf£v&:¡\u009c\u001c\u0000a\u009e\u009dëÄ÷íÔÂ¦(\u009a*È\u0012%¶cn\u0091E\u0087\u0004D$G@\u0004\u008dÛ\u001a«\u0011pñÊ\u0099·Óy@Àn\u0083\f·\u0018>j|\u001a\u0091P¿z&\u00129òH\u0098b\u0097\u0001 ö\u00114H\u000e\u008e@\u0003¬\\\u0081\u000e\u0086\fNcÐÛ\u008d\u0001Ký7\u0005\u0019ùÆðu\u0085MVÏ$cÞü%k\u000e£à&¥?~\u0093>o¾ñ\u0099\u0098gõ\u0083]÷ð¸KQ«©\u0091æ\u0017\fk\u0006H.\u0004~\u001aÛàÑnº\u008d¥ø»C¿|\u009boòÐ\bk+\u009eõ\u0007Û\u0097ÿz\u0082\u0086½ºo¥nñ\u0017¡\u001bBõ\u009b4ÉS\u0001ôÔ£?\u0016\u008eôú\u008d¨\u0016\bè¶ü×éÿÁÒHUíýËñ²\u0084\u009dk;\u0017\u0085²"
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
                     AYzFk = var6;
                     KsQnb = new Integer[53];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "\u007fÖ3v\u0097\u0096Ýïßâ\u0094ÈÍ\u008c\u0098\u000b";
                  var5 = "\u007fÖ3v\u0097\u0096Ýïßâ\u0094ÈÍ\u008c\u0098\u000b".length();
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

   @Override
   public void YO() {
      super.YO();
      this.GtFRG.clear();
   }

   @hG
   public void aha(gk var1) {
      long var2 = LaMyq ^ 132086821552489L;
      iS[] var4 = dh.afl();

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var9) {
         throw ahc(var9);
      }

      lC var5 = var1.baT();
      Iterator var6 = this.GtFRG.iterator();

      while (var6.hasNext()) {
         dn$sF var7 = (dn$sF)var6.next();

         try {
            var7.doJ(var5, this.xTDBB.VC());
            if (var7.doK()) {
               var6.remove();
            }
         } catch (MatchException var8) {
            throw ahc(var8);
         }

         if (var4 != null) {
            break;
         }
      }
   }

   private static MatchException ahc(MatchException var0) {
      return var0;
   }

   private static int ahe(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26148;
      if (KsQnb[var3] == null) {
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
         long var5 = AYzFk[var3];
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
         Object[] var9 = (Object[])FpBNc.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FpBNc.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dn", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         KsQnb[var3] = var15;
      }

      return KsQnb[var3];
   }

   private static int ahf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ahe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @hG
   public void ahb(hu param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dn.LaMyq J
      // 03: ldc2_w 85105790662507
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/hu.bdj ()Lnet/minecraft/class_1297;
      // 0f: astore 6
      // 11: astore 4
      // 13: aload 6
      // 15: aload 4
      // 17: ifnonnull 30
      // 1a: instanceof net/minecraft/class_1671
      // 1d: ifeq a1
      // 20: goto 27
      // 23: invokestatic sixtwo/dn.ahc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 6
      // 29: goto 30
      // 2c: invokestatic sixtwo/dn.ahc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: checkcast net/minecraft/class_1671
      // 33: astore 5
      // 35: aload 0
      // 36: getfield sixtwo/dn.GtFRG Ljava/util/List;
      // 39: new sixtwo/dn$sF
      // 3c: dup
      // 3d: aload 5
      // 3f: invokevirtual net/minecraft/class_1671.method_73189 ()Lnet/minecraft/class_243;
      // 42: invokespecial sixtwo/dn$sF.<init> (Lnet/minecraft/class_243;)V
      // 45: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 4a: pop
      // 4b: aload 0
      // 4c: getfield sixtwo/dn.GtFRG Ljava/util/List;
      // 4f: invokeinterface java/util/List.size ()I 1
      // 54: aload 0
      // 55: getfield sixtwo/dn.zMQfx Lsixtwo/cC;
      // 58: invokevirtual sixtwo/cC.VC ()I
      // 5b: isub
      // 5c: istore 6
      // 5e: iload 6
      // 60: aload 4
      // 62: ifnonnull 70
      // 65: ifle a1
      // 68: goto 6f
      // 6b: invokestatic sixtwo/dn.ahc (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: bipush 0
      // 70: istore 7
      // 72: iload 7
      // 74: iload 6
      // 76: if_icmpge a1
      // 79: aload 0
      // 7a: getfield sixtwo/dn.GtFRG Ljava/util/List;
      // 7d: iload 7
      // 7f: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 84: checkcast sixtwo/dn$sF
      // 87: astore 8
      // 89: aload 8
      // 8b: getfield sixtwo/dn$sF.DUqGa Lsixtwo/rk;
      // 8e: fconst_0
      // 8f: invokevirtual sixtwo/rk.dhd (F)F
      // 92: pop
      // 93: aload 8
      // 95: bipush 1
      // 96: putfield sixtwo/dn$sF.uAOSS Z
      // 99: iinc 7 1
      // 9c: aload 4
      // 9e: ifnull 72
      // a1: return
   }

   private static CallSite ahg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ahf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dn" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String ahd(byte[] var0) {
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
}
