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
import net.minecraft.class_1299;

public class du extends gg implements lG {
   private final cF SqUZV;
   private final cC cKwty;
   private final cG dGHqh;
   private final cG wOZVj;
   private final ct iuknf;
   private final cu wUMpA;
   private final cu MmkQv;
   private final cu rlVJG;
   private final cu jJCGV;
   private final cJ PNacL;
   private static final long xvoyR = gb.aYR(-7089000681231288140L, 5103037887475186815L, MethodHandles.lookup().lookupClass()).a(178314533697462L);
   private static final long[] UwvDF;
   private static final Integer[] tbAeR;
   private static final Map avvBW = new HashMap(13);

   public du() {
      long var1 = xvoyR ^ 111331166393328L;
      super(gf.aZL(aiH<"f">(9957, 7459524871493011176L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aiH<"f">(24233, 666526388304428707L ^ var1)];
      var10004[0] = aiH<"f">(28763, 1073985989536845949L ^ var1);
      var10004[1] = aiH<"f">(27326, 8149615882083142332L ^ var1);
      var10004[2] = aiH<"f">(3718, 1206620346133081768L ^ var1);
      var10004[3] = aiH<"f">(26499, 2055746456432248711L ^ var1);
      var10004[4] = aiH<"f">(2596, 4549326476569963021L ^ var1);
      var10004[5] = aiH<"f">(1613, 8710068626679555667L ^ var1);
      var10004[aiH<"f">(6858, 2313461327479700202L ^ var1)] = aiH<"f">(25216, 8361278439937737375L ^ var1);
      var10004[aiH<"f">(26576, 4875260857243961296L ^ var1)] = aiH<"f">(29067, 2263938673203483012L ^ var1);
      this.SqUZV = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM).VT(class_1299.field_6052, class_1299.field_6126, class_1299.field_6053);
      var10004 = new int[aiH<"f">(30493, 9138750752769840958L ^ var1)];
      var10004[0] = aiH<"f">(3862, 5557611623138127674L ^ var1);
      var10004[1] = aiH<"f">(1613, 8710068626679555667L ^ var1);
      var10004[2] = aiH<"f">(8613, 2445635736501404083L ^ var1);
      var10004[3] = aiH<"f">(15106, 4923043896484977426L ^ var1);
      var10004[4] = aiH<"f">(455, 4697738329769173442L ^ var1);
      var10004[5] = aiH<"f">(4095, 6191881828161089508L ^ var1);
      var10004[aiH<"f">(17509, 6784292687620744311L ^ var1)] = aiH<"f">(1613, 8710068626679555667L ^ var1);
      var10004[aiH<"f">(27315, 8614630117949475503L ^ var1)] = aiH<"f">(15361, 7257121921986518031L ^ var1);
      var10004[aiH<"f">(25727, 5445600424259323001L ^ var1)] = aiH<"f">(2596, 4549326476569963021L ^ var1);
      var10004[aiH<"f">(32696, 1313504711560765331L ^ var1)] = aiH<"f">(3655, 8558425772815969871L ^ var1);
      this.cKwty = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
      this.dGHqh = new cG(
            this,
            mr.clS(
               new int[]{
                  aiH<"f">(10518, 4000657535033461009L ^ var1),
                  aiH<"f">(14876, 5024118670963235364L ^ var1),
                  aiH<"f">(7952, 8467413346192719677L ^ var1),
                  aiH<"f">(15115, 799488879267502883L ^ var1),
                  aiH<"f">(30763, 7103584992134141956L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[aiH<"f">(19546, 1512557635986828411L ^ var1)];
      var10004[0] = aiH<"f">(27209, 3232319327444994668L ^ var1);
      var10004[1] = aiH<"f">(219, 3746434414633509082L ^ var1);
      var10004[2] = aiH<"f">(1613, 8710068626679555667L ^ var1);
      var10004[3] = aiH<"f">(15106, 4923043896484977426L ^ var1);
      var10004[4] = aiH<"f">(8613, 2445635736501404083L ^ var1);
      var10004[5] = aiH<"f">(4983, 1118220632170820478L ^ var1);
      var10004[aiH<"f">(17509, 6784292687620744311L ^ var1)] = aiH<"f">(31560, 843553797089008476L ^ var1);
      var10004[aiH<"f">(27315, 8614630117949475503L ^ var1)] = aiH<"f">(29617, 3076829390280627112L ^ var1);
      var10004[aiH<"f">(25727, 5445600424259323001L ^ var1)] = aiH<"f">(15115, 799488879267502883L ^ var1);
      var10004[aiH<"f">(24267, 4359931837795221212L ^ var1)] = aiH<"f">(16692, 9181141220216906021L ^ var1);
      var10004[aiH<"f">(19773, 2298138644060384537L ^ var1)] = aiH<"f">(15115, 799488879267502883L ^ var1);
      var10004[aiH<"f">(653, 634536505975693999L ^ var1)] = aiH<"f">(219, 3746434414633509082L ^ var1);
      this.wOZVj = new cG(this, mr.clS(var10004)).Uf(jk.jEkxo);
      this.iuknf = new ct(
         this,
         mr.clS(
            new int[]{
               aiH<"f">(22249, 1353713485775189717L ^ var1),
               aiH<"f">(15115, 799488879267502883L ^ var1),
               aiH<"f">(4983, 1118220632170820478L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1)
            }
         )
      );
      this.wUMpA = new cu(
         this.iuknf,
         mr.clS(
            new int[]{
               aiH<"f">(11133, 6452427641805917029L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1),
               aiH<"f">(4492, 5656506494478512561L ^ var1),
               aiH<"f">(4983, 1118220632170820478L ^ var1)
            }
         )
      );
      this.MmkQv = new cu(
         this.iuknf,
         mr.clS(
            new int[]{
               aiH<"f">(29617, 3076829390280627112L ^ var1),
               aiH<"f">(21487, 1579282866286998524L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1),
               aiH<"f">(3709, 3293999912969530967L ^ var1),
               aiH<"f">(2596, 4549326476569963021L ^ var1)
            }
         )
      );
      this.rlVJG = new cu(
         this.iuknf,
         mr.clS(
            new int[]{
               aiH<"f">(7602, 1780301371726003596L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1),
               aiH<"f">(19980, 1552622697198300687L ^ var1),
               aiH<"f">(3709, 3293999912969530967L ^ var1)
            }
         )
      );
      this.jJCGV = new cu(
         this.iuknf,
         mr.clS(
            new int[]{
               aiH<"f">(1575, 874909374231963197L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1),
               aiH<"f">(15106, 4923043896484977426L ^ var1),
               aiH<"f">(2596, 4549326476569963021L ^ var1)
            }
         )
      );
      var10004 = new int[aiH<"f">(17809, 7583432411657676164L ^ var1)];
      var10004[0] = aiH<"f">(9529, 6950655338668508452L ^ var1);
      var10004[1] = aiH<"f">(5376, 2224301035459835199L ^ var1);
      var10004[2] = aiH<"f">(8613, 2445635736501404083L ^ var1);
      var10004[3] = aiH<"f">(15115, 799488879267502883L ^ var1);
      var10004[4] = aiH<"f">(219, 3746434414633509082L ^ var1);
      var10004[5] = aiH<"f">(15106, 4923043896484977426L ^ var1);
      var10004[aiH<"f">(17509, 6784292687620744311L ^ var1)] = aiH<"f">(31560, 843553797089008476L ^ var1);
      var10004[aiH<"f">(27315, 8614630117949475503L ^ var1)] = aiH<"f">(1575, 874909374231963197L ^ var1);
      var10004[aiH<"f">(25727, 5445600424259323001L ^ var1)] = aiH<"f">(219, 3746434414633509082L ^ var1);
      var10004[aiH<"f">(24267, 4359931837795221212L ^ var1)] = aiH<"f">(1613, 8710068626679555667L ^ var1);
      var10004[aiH<"f">(19773, 2298138644060384537L ^ var1)] = aiH<"f">(15106, 4923043896484977426L ^ var1);
      var10004[aiH<"f">(10130, 8321001805870614425L ^ var1)] = aiH<"f">(8613, 2445635736501404083L ^ var1);
      var10004[aiH<"f">(1610, 4645710093648750189L ^ var1)] = aiH<"f">(4983, 1118220632170820478L ^ var1);
      var10004[aiH<"f">(10029, 5150569483289904929L ^ var1)] = aiH<"f">(3709, 3293999912969530967L ^ var1);
      this.PNacL = new cJ(this, mr.clS(var10004)).WE(true);
   }

   static {
      long var0 = xvoyR ^ 35044295229386L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[53];
      int var5 = 0;
      String var6 = "íÔ[ \u00ad\u0091C\u0096}%>VV^â\n\u0000\u009e\u001fkz\u009dþ9ÿó.\u000eéÊ\u0003ØÜ&t$\u00113Ô\u0081|\u009f\u0080\u0096b\u000eBt¦\u0098øsÇ\u0098\u0099\u0082YF«\u0087ñ ¤\\\u001a<0\u0019\u0085KÓÏQêè\u0090dØ\u0011N\u0090\u008fïÉT¾\u008e«ÕM\u009f\u0000Ao\u007fÔ\u0084È\u008fûõpEf|RR\u0082æ\u009bz5N!îãp\fö\u0018LJ¦å\u001fwµ¢²5HùÁGÂFwëÏ´O\u0083\u0004\u0080\u0082©®\u0015t¶\u0006)õ×à!¾òO~ék<+®£\u009fÝÒq\u0097;M´\u00190\u009bYË.â\u0014iÉ\u001cÁ\u0098\u0083\u009bèY¯üQ\u009aBSÌ\u0012¹¹\u0089ï`!ÊMhq\u0084;wD#Tô\u0080¦0wO¢QdÑE\u0001Ý@º\u0004ös6\u0095ãã\u0093\u0003^Æ9\u0088Í\u001e4\u0083(óA(\u0081\u0002Äªü®ëþîöµx\u0093\u0006Çy\u009c,½\u0018qS\u0013Å÷÷\u0015\u009c\u0018)ÕÞ\u0011JÃ í0\u008e¬ªà\u009d®\t\n\u001b)²uÌ\u009a\u0002ßLE\u0091i®Lò\u009a\u008eu/«µÔíge\u0005\u007fºÊ\u0015\u009eM\u0012±\u0005·/\u0092j»Jçz\u0094«\u0083Ö\u008c¥\u001eHÜÐ:\u008dõqë-9±ZÓC0P¼«v\u0084}Ê*YÒ!B×x\u0086*\u0007\u000b\u0088Ó\u0007\u0090#5kº»ðTs¬Å\râJ\u0087\rXí÷J\nâ\u008erÆ";
      int var7 = "íÔ[ \u00ad\u0091C\u0096}%>VV^â\n\u0000\u009e\u001fkz\u009dþ9ÿó.\u000eéÊ\u0003ØÜ&t$\u00113Ô\u0081|\u009f\u0080\u0096b\u000eBt¦\u0098øsÇ\u0098\u0099\u0082YF«\u0087ñ ¤\\\u001a<0\u0019\u0085KÓÏQêè\u0090dØ\u0011N\u0090\u008fïÉT¾\u008e«ÕM\u009f\u0000Ao\u007fÔ\u0084È\u008fûõpEf|RR\u0082æ\u009bz5N!îãp\fö\u0018LJ¦å\u001fwµ¢²5HùÁGÂFwëÏ´O\u0083\u0004\u0080\u0082©®\u0015t¶\u0006)õ×à!¾òO~ék<+®£\u009fÝÒq\u0097;M´\u00190\u009bYË.â\u0014iÉ\u001cÁ\u0098\u0083\u009bèY¯üQ\u009aBSÌ\u0012¹¹\u0089ï`!ÊMhq\u0084;wD#Tô\u0080¦0wO¢QdÑE\u0001Ý@º\u0004ös6\u0095ãã\u0093\u0003^Æ9\u0088Í\u001e4\u0083(óA(\u0081\u0002Äªü®ëþîöµx\u0093\u0006Çy\u009c,½\u0018qS\u0013Å÷÷\u0015\u009c\u0018)ÕÞ\u0011JÃ í0\u008e¬ªà\u009d®\t\n\u001b)²uÌ\u009a\u0002ßLE\u0091i®Lò\u009a\u008eu/«µÔíge\u0005\u007fºÊ\u0015\u009eM\u0012±\u0005·/\u0092j»Jçz\u0094«\u0083Ö\u008c¥\u001eHÜÐ:\u008dõqë-9±ZÓC0P¼«v\u0084}Ê*YÒ!B×x\u0086*\u0007\u000b\u0088Ó\u0007\u0090#5kº»ðTs¬Å\râJ\u0087\rXí÷J\nâ\u008erÆ"
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
                     UwvDF = var8;
                     tbAeR = new Integer[53];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "~\u00ad/ziéÝ\u000f>\u000e\\ÐÃï®\u0087";
                  var7 = "~\u00ad/ziéÝ\u000f>\u000e\\ÐÃï®\u0087".length();
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

   private static int aiF(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8504;
      if (tbAeR[var3] == null) {
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
         long var5 = UwvDF[var3];
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
         Object[] var9 = (Object[])avvBW.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               avvBW.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/du", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         tbAeR[var3] = var15;
      }

      return tbAeR[var3];
   }

   private static MatchException aiE(MatchException var0) {
      return var0;
   }

   private static CallSite aiH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aiG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/du" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void aiD(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/du.xvoyR J
      // 003: ldc2_w 50828063374759
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/du.bab ()Z
      // 011: ifeq 024
      // 014: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 017: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 01a: ifnonnull 029
      // 01d: goto 024
      // 020: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: return
      // 025: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: aload 1
      // 02a: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 02d: astore 5
      // 02f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 032: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 035: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 038: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 03b: istore 6
      // 03d: aload 0
      // 03e: getfield sixtwo/du.cKwty Lsixtwo/cC;
      // 041: invokevirtual sixtwo/cC.VB ()F
      // 044: fstore 7
      // 046: getstatic sixtwo/du.dJxyG Lsixtwo/kL;
      // 049: invokevirtual sixtwo/kL.startBatch ()V
      // 04c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 04f: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 052: aload 1
      // 053: invokevirtual sixtwo/go$sX.bbi ()F
      // 056: invokevirtual net/minecraft/class_1297.method_30950 (F)Lnet/minecraft/class_243;
      // 059: astore 8
      // 05b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 05e: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 061: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 064: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 067: invokevirtual net/minecraft/class_1297.method_18376 ()Lnet/minecraft/class_4050;
      // 06a: invokevirtual net/minecraft/class_1297.method_18381 (Lnet/minecraft/class_4050;)F
      // 06d: fstore 9
      // 06f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 072: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 075: invokevirtual net/minecraft/class_1297.method_36455 ()F
      // 078: f2d
      // 079: invokestatic java/lang/Math.toRadians (D)D
      // 07c: dneg
      // 07d: d2f
      // 07e: fstore 10
      // 080: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 083: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 086: invokevirtual net/minecraft/class_1297.method_36454 ()F
      // 089: f2d
      // 08a: invokestatic java/lang/Math.toRadians (D)D
      // 08d: dneg
      // 08e: d2f
      // 08f: fstore 11
      // 091: new net/minecraft/class_243
      // 094: dup
      // 095: dconst_0
      // 096: dconst_0
      // 097: ldc2_w 75.0
      // 09a: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 09d: fload 10
      // 09f: invokevirtual net/minecraft/class_243.method_1037 (F)Lnet/minecraft/class_243;
      // 0a2: fload 11
      // 0a4: invokevirtual net/minecraft/class_243.method_1024 (F)Lnet/minecraft/class_243;
      // 0a7: aload 8
      // 0a9: dconst_0
      // 0aa: fload 9
      // 0ac: f2d
      // 0ad: dconst_0
      // 0ae: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 0b1: invokevirtual net/minecraft/class_243.method_1019 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 0b4: astore 12
      // 0b6: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0b9: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0bc: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 0bf: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 0c4: astore 13
      // 0c6: aload 13
      // 0c8: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0cd: ifeq 2a5
      // 0d0: aload 13
      // 0d2: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0d7: checkcast net/minecraft/class_1297
      // 0da: astore 14
      // 0dc: aload 4
      // 0de: ifnonnull 2ab
      // 0e1: aload 14
      // 0e3: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e6: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0e9: if_acmpne 0ff
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 4
      // 0f5: ifnull 0c6
      // 0f8: goto 0ff
      // 0fb: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fe: athrow
      // 0ff: aload 0
      // 100: getfield sixtwo/du.SqUZV Lsixtwo/cF;
      // 103: aload 14
      // 105: invokevirtual sixtwo/cF.VX (Lnet/minecraft/class_1297;)Z
      // 108: ifne 117
      // 10b: aload 4
      // 10d: ifnull 0c6
      // 110: goto 117
      // 113: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 116: athrow
      // 117: dconst_0
      // 118: dstore 15
      // 11a: aload 14
      // 11c: instanceof net/minecraft/class_1657
      // 11f: istore 17
      // 121: iload 17
      // 123: aload 4
      // 125: ifnonnull 1b7
      // 128: ifeq 1b5
      // 12b: goto 132
      // 12e: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: aload 0
      // 133: getfield sixtwo/du.PNacL Lsixtwo/cJ;
      // 136: invokevirtual sixtwo/cJ.WF ()Z
      // 139: aload 4
      // 13b: ifnonnull 183
      // 13e: goto 145
      // 141: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: ifeq 17c
      // 148: goto 14f
      // 14b: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14e: athrow
      // 14f: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 152: aload 14
      // 154: checkcast net/minecraft/class_1657
      // 157: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 15a: aload 4
      // 15c: ifnonnull 183
      // 15f: goto 166
      // 162: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 165: athrow
      // 166: ifeq 17c
      // 169: goto 170
      // 16c: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16f: athrow
      // 170: aload 4
      // 172: ifnull 0c6
      // 175: goto 17c
      // 178: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17b: athrow
      // 17c: aload 0
      // 17d: getfield sixtwo/du.iuknf Lsixtwo/ct;
      // 180: invokevirtual sixtwo/ct.ST ()I
      // 183: tableswitch 47 0 2 25 35 41
      // 19c: ldc2_w 1.6
      // 19f: goto 1b3
      // 1a2: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a5: athrow
      // 1a6: ldc2_w 1.2
      // 1a9: goto 1b3
      // 1ac: ldc2_w 0.5
      // 1af: goto 1b3
      // 1b2: dconst_0
      // 1b3: dstore 15
      // 1b5: iload 17
      // 1b7: aload 4
      // 1b9: ifnonnull 1d5
      // 1bc: ifeq 1e8
      // 1bf: goto 1c6
      // 1c2: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c5: athrow
      // 1c6: aload 14
      // 1c8: checkcast net/minecraft/class_1657
      // 1cb: invokevirtual net/minecraft/class_1657.method_6128 ()Z
      // 1ce: goto 1d5
      // 1d1: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d4: athrow
      // 1d5: aload 4
      // 1d7: ifnonnull 1e5
      // 1da: ifeq 1e8
      // 1dd: goto 1e4
      // 1e0: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e3: athrow
      // 1e4: bipush 1
      // 1e5: goto 1e9
      // 1e8: bipush 0
      // 1e9: istore 18
      // 1eb: aload 14
      // 1ed: aload 1
      // 1ee: invokevirtual sixtwo/go$sX.bbi ()F
      // 1f1: invokevirtual net/minecraft/class_1297.method_30950 (F)Lnet/minecraft/class_243;
      // 1f4: astore 19
      // 1f6: aload 14
      // 1f8: invokevirtual net/minecraft/class_1297.method_20232 ()Z
      // 1fb: aload 4
      // 1fd: ifnonnull 22f
      // 200: ifne 22d
      // 203: goto 20a
      // 206: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 209: athrow
      // 20a: iload 18
      // 20c: aload 4
      // 20e: ifnonnull 22f
      // 211: goto 218
      // 214: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 217: athrow
      // 218: ifne 22d
      // 21b: goto 222
      // 21e: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 221: athrow
      // 222: aload 19
      // 224: dconst_0
      // 225: dload 15
      // 227: dconst_0
      // 228: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 22b: astore 19
      // 22d: iload 6
      // 22f: aload 4
      // 231: ifnonnull 24c
      // 234: ifne 24a
      // 237: goto 23e
      // 23a: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23d: athrow
      // 23e: aload 8
      // 240: dconst_0
      // 241: fload 9
      // 243: f2d
      // 244: dconst_0
      // 245: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 248: astore 12
      // 24a: iload 17
      // 24c: aload 4
      // 24e: ifnonnull 26d
      // 251: ifeq 27e
      // 254: goto 25b
      // 257: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25a: athrow
      // 25b: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 25e: aload 14
      // 260: checkcast net/minecraft/class_1657
      // 263: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 266: goto 26d
      // 269: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26c: athrow
      // 26d: ifeq 27e
      // 270: aload 0
      // 271: getfield sixtwo/du.wOZVj Lsixtwo/cG;
      // 274: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 277: goto 285
      // 27a: invokestatic sixtwo/du.aiE (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27d: athrow
      // 27e: aload 0
      // 27f: getfield sixtwo/du.dGHqh Lsixtwo/cG;
      // 282: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 285: astore 20
      // 287: getstatic sixtwo/du.dJxyG Lsixtwo/kL;
      // 28a: aload 5
      // 28c: aload 12
      // 28e: aload 19
      // 290: aload 20
      // 292: invokestatic sixtwo/kF.bTn (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lsixtwo/mG;)Lsixtwo/kF$un;
      // 295: fload 7
      // 297: invokevirtual sixtwo/kF$un.dts (F)Lsixtwo/kF$un;
      // 29a: invokevirtual sixtwo/kF$un.dtt ()Lsixtwo/kF;
      // 29d: invokevirtual sixtwo/kL.bUv (Lsixtwo/kF;)V
      // 2a0: aload 4
      // 2a2: ifnull 0c6
      // 2a5: getstatic sixtwo/du.dJxyG Lsixtwo/kL;
      // 2a8: invokevirtual sixtwo/kL.endBatch ()V
      // 2ab: goto 2b9
      // 2ae: astore 21
      // 2b0: getstatic sixtwo/du.dJxyG Lsixtwo/kL;
      // 2b3: invokevirtual sixtwo/kL.endBatch ()V
      // 2b6: aload 21
      // 2b8: athrow
      // 2b9: return
   }

   private static int aiG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aiF(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
