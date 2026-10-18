package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_243;

public class do extends gg implements lG {
   private final cF LHfSj;
   private final cC ylItw;
   private final cC UCwZL;
   private final cG HnmDa;
   private final cG OTssl;
   private final List<do$sG> Gfvqi;
   private float YXgYB;
   private final rk lgSYH;
   private static final long LNOpt = gb.aYR(-6227257557269339647L, 3723473440923874246L, MethodHandles.lookup().lookupClass()).a(268850252280759L);
   private static final String eLTLf;
   private static final long[] kSkhp;
   private static final Integer[] YQLde;
   private static final Map GjXic;

   public do() {
      long var1 = LNOpt ^ 49855255944906L;
      super(gf.aZL(ahq<"c">(22666, 3617739646870614376L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ahq<"c">(16539, 2102522768266652001L ^ var1)];
      var10004[0] = ahq<"c">(25228, 8442287579963444079L ^ var1);
      var10004[1] = ahq<"c">(14677, 3820832754798039211L ^ var1);
      var10004[2] = ahq<"c">(5979, 7163704568855936689L ^ var1);
      var10004[3] = ahq<"c">(22941, 6227385634159718467L ^ var1);
      var10004[4] = ahq<"c">(29815, 3166754215796006296L ^ var1);
      var10004[5] = ahq<"c">(20671, 8757784959117490508L ^ var1);
      var10004[ahq<"c">(30231, 2230274469517418492L ^ var1)] = ahq<"c">(19087, 9218922848719922024L ^ var1);
      var10004[ahq<"c">(6776, 8440559026273891216L ^ var1)] = ahq<"c">(18817, 2213925185856200801L ^ var1);
      this.LHfSj = new cF(this, mr.clS(var10004)).VS(jg$tJ.OCdZM);
      this.ylItw = new cC(
            this,
            mr.clS(
               new int[]{
                  ahq<"c">(20413, 1925453501556844108L ^ var1),
                  ahq<"c">(20671, 8757784959117490508L ^ var1),
                  ahq<"c">(22012, 2960946117422447651L ^ var1),
                  ahq<"c">(30324, 1991135854191796140L ^ var1)
               }
            )
         )
         .Vy(0.1)
         .Vw(1.0)
         .Vx(10.0)
         .VA(3.0);
      var10004 = new int[ahq<"c">(28790, 5185639853290543512L ^ var1)];
      var10004[0] = ahq<"c">(25950, 7244114701139954818L ^ var1);
      var10004[1] = ahq<"c">(27869, 6317862445378127149L ^ var1);
      var10004[2] = ahq<"c">(3357, 1269637591416612089L ^ var1);
      var10004[3] = ahq<"c">(20671, 8757784959117490508L ^ var1);
      var10004[4] = ahq<"c">(16465, 689815381763221895L ^ var1);
      var10004[5] = ahq<"c">(8895, 3965445838276922210L ^ var1);
      this.UCwZL = new cC(this, mr.clS(var10004)).Vy(0.5).Vw(20.0).Vx(100.0).VA(50.0);
      this.HnmDa = new cG(
            this,
            mr.clS(
               new int[]{
                  ahq<"c">(25840, 6293045665369607439L ^ var1),
                  ahq<"c">(14690, 8123495706598117534L ^ var1),
                  ahq<"c">(11948, 8357833119938250590L ^ var1),
                  ahq<"c">(9141, 7610043178621635156L ^ var1),
                  ahq<"c">(24671, 2055117906795874692L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[ahq<"c">(12053, 7182288510258382574L ^ var1)];
      var10004[0] = ahq<"c">(18926, 959415875522519047L ^ var1);
      var10004[1] = ahq<"c">(29214, 1692882479385205737L ^ var1);
      var10004[2] = ahq<"c">(20671, 8757784959117490508L ^ var1);
      var10004[3] = ahq<"c">(30324, 1991135854191796140L ^ var1);
      var10004[4] = ahq<"c">(20798, 6026810308457167067L ^ var1);
      var10004[5] = ahq<"c">(10040, 3121682492596293325L ^ var1);
      var10004[ahq<"c">(28790, 5185639853290543512L ^ var1)] = ahq<"c">(18489, 7960137895056826820L ^ var1);
      var10004[ahq<"c">(8001, 1798313367793186471L ^ var1)] = ahq<"c">(31615, 7643370494959243944L ^ var1);
      var10004[ahq<"c">(19643, 3567983248963986754L ^ var1)] = ahq<"c">(9141, 7610043178621635156L ^ var1);
      var10004[ahq<"c">(31653, 465077868739351113L ^ var1)] = ahq<"c">(13484, 8013565574627859796L ^ var1);
      var10004[ahq<"c">(30670, 6667065931270118932L ^ var1)] = ahq<"c">(9141, 7610043178621635156L ^ var1);
      var10004[ahq<"c">(31404, 1900703617752617845L ^ var1)] = ahq<"c">(29214, 1692882479385205737L ^ var1);
      this.OTssl = new cG(this, mr.clS(var10004)).Uf(jk.jEkxo);
      this.Gfvqi = new ArrayList<>();
      this.lgSYH = new rk(ahq<"c">(11367, 168673322390226314L ^ var1)).dhs(rj.XzDkv);
   }

   static {
      long var11 = LNOpt ^ 98232728530769L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("V.\u008a├▓D&X├Ç".getBytes("ISO-8859-1"));
      String var22 = ahn(var15).intern();
      int var10001 = -1;
      eLTLf = var22;
      GjXic = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[42];
      int var3 = 0;
      String var4 = "]\fsl\u0092g\u0084├î\u009b\u009f\u0082O├Ş+t├ô┬áB\u0095├×\u0004j├Č┬úE├ż<lG'┬▒l├Č\u0092^c┬ą├Á├▓\u0084U*[\f├¬├Ĺm├á\u0098├ź┬ž├░\u0088\u0084┬óM┬á`\u009e[+b\u0019├ę├Č├»┬╝_├ó├Ś┬Á├ęk\fj├úki?:\u000b┬Ę\u0089\u0099_┬Á\u0098┬║%┬źD\u0090├č┬░M$┬║Y\u0082\u0006┬Ę>\u0015x├╝oE1\u0087┬ó├ż*├«├¬┬ę├ş├Üp\u00ad├ĹZ9[├ĄEC├ä\u0084L5┬Á\u0005├Ü├ö!├ż.Qkr#\u008f\u008a/├ä┬Ę$a\u0002\u008a┬┤├â┬░├â\u0089\u008c├┤l7├Şp├ú\u001d\u0005\u008c\u001f┬░├úV┬ó├«\u009b├Őp├ĘB┬┐\u0084\t├î├▓├ž?\u009a*y├î\u0097\u0080J\u0001├Ż├Üw├Ç\u0011├»P$o├Čk├«\u0095mQ\u0019\u0095b┬ę~├»├ĺ├â├Ä1┬╝F-B\b├Ć├Ě\u0015┬┤├Ż\b\u0015├Č├Ĺ6\u0014┬Ż\u009f1e├ż┬░\u0080s┬▓├Ż$\u0083\r├ęAH├ź├╝\u0015┬ŞxGv├á\"V\temY├╝├Č\r/┬óP%.├┤┬žS\u0090┬ú0\u00ad├Ž┬ĘmW├Źv>Bt^\u0010V├ü┬Ą┬Ę\\┬ĄW├Ť\u0099e┬╝\u008a5├Ü\u0084\u008bi9\u0004├ť?O├Ś;┬żv├ë┬ž┬í├╝01";
      int var5 = "]\fsl\u0092g\u0084├î\u009b\u009f\u0082O├Ş+t├ô┬áB\u0095├×\u0004j├Č┬úE├ż<lG'┬▒l├Č\u0092^c┬ą├Á├▓\u0084U*[\f├¬├Ĺm├á\u0098├ź┬ž├░\u0088\u0084┬óM┬á`\u009e[+b\u0019├ę├Č├»┬╝_├ó├Ś┬Á├ęk\fj├úki?:\u000b┬Ę\u0089\u0099_┬Á\u0098┬║%┬źD\u0090├č┬░M$┬║Y\u0082\u0006┬Ę>\u0015x├╝oE1\u0087┬ó├ż*├«├¬┬ę├ş├Üp\u00ad├ĹZ9[├ĄEC├ä\u0084L5┬Á\u0005├Ü├ö!├ż.Qkr#\u008f\u008a/├ä┬Ę$a\u0002\u008a┬┤├â┬░├â\u0089\u008c├┤l7├Şp├ú\u001d\u0005\u008c\u001f┬░├úV┬ó├«\u009b├Őp├ĘB┬┐\u0084\t├î├▓├ž?\u009a*y├î\u0097\u0080J\u0001├Ż├Üw├Ç\u0011├»P$o├Čk├«\u0095mQ\u0019\u0095b┬ę~├»├ĺ├â├Ä1┬╝F-B\b├Ć├Ě\u0015┬┤├Ż\b\u0015├Č├Ĺ6\u0014┬Ż\u009f1e├ż┬░\u0080s┬▓├Ż$\u0083\r├ęAH├ź├╝\u0015┬ŞxGv├á\"V\temY├╝├Č\r/┬óP%.├┤┬žS\u0090┬ú0\u00ad├Ž┬ĘmW├Źv>Bt^\u0010V├ü┬Ą┬Ę\\┬ĄW├Ť\u0099e┬╝\u008a5├Ü\u0084\u008bi9\u0004├ť?O├Ś;┬żv├ë┬ž┬í├╝01"
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
                     kSkhp = var6;
                     YQLde = new Integer[42];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "\u0014├║┬▓f├Ö├ź\u0084├Ü:\u0097\u001bS*├ą├íP";
                  var5 = "\u0014├║┬▓f├Ö├ź\u0084├Ü:\u0097\u001bS*├ą├íP".length();
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

   private static CallSite ahq(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ahp".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/do" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String ahn(byte[] var0) {
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

   private static MatchException ahm(MatchException var0) {
      return var0;
   }

   private static int ahp(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aho(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @hG
   public void ahj(gk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/do.LNOpt J
      // 003: ldc2_w 38683845552766
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/do.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/gk.baT ()Lsixtwo/lC;
      // 01d: astore 5
      // 01f: invokestatic sixtwo/rm.diq ()Lnet/minecraft/class_241;
      // 022: astore 6
      // 024: aload 6
      // 026: getfield net/minecraft/class_241.field_1343 F
      // 029: fconst_2
      // 02a: fdiv
      // 02b: fstore 7
      // 02d: aload 6
      // 02f: getfield net/minecraft/class_241.field_1342 F
      // 032: fconst_2
      // 033: fdiv
      // 034: fstore 8
      // 036: aload 5
      // 038: invokevirtual sixtwo/lC.cfh ()F
      // 03b: fstore 9
      // 03d: aload 0
      // 03e: getfield sixtwo/do.ylItw Lsixtwo/cC;
      // 041: invokevirtual sixtwo/cC.VB ()F
      // 044: fstore 10
      // 046: aload 0
      // 047: getfield sixtwo/do.UCwZL Lsixtwo/cC;
      // 04a: invokevirtual sixtwo/cC.VB ()F
      // 04d: fstore 11
      // 04f: aload 0
      // 050: getfield sixtwo/do.lgSYH Lsixtwo/rk;
      // 053: aload 0
      // 054: getfield sixtwo/do.YXgYB F
      // 057: invokevirtual sixtwo/rk.dhd (F)F
      // 05a: fstore 12
      // 05c: aload 0
      // 05d: getfield sixtwo/do.Gfvqi Ljava/util/List;
      // 060: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 065: astore 13
      // 067: getstatic sixtwo/do.XSRvt Lsixtwo/kM;
      // 06a: getstatic sixtwo/do.eLTLf Ljava/lang/String;
      // 06d: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 070: invokevirtual sixtwo/kM.startBatch (Lnet/minecraft/class_1044;)V
      // 073: aload 13
      // 075: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 07a: ifeq 15f
      // 07d: aload 13
      // 07f: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 084: checkcast sixtwo/do$sG
      // 087: astore 14
      // 089: aload 0
      // 08a: getfield sixtwo/do.HnmDa Lsixtwo/cG;
      // 08d: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 090: astore 15
      // 092: aload 14
      // 094: getfield sixtwo/do$sG.ZaYMC Lnet/minecraft/class_1297;
      // 097: astore 17
      // 099: aload 4
      // 09b: ifnonnull 165
      // 09e: aload 4
      // 0a0: ifnonnull 0fc
      // 0a3: goto 0aa
      // 0a6: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a9: athrow
      // 0aa: aload 17
      // 0ac: instanceof net/minecraft/class_1657
      // 0af: ifeq 0f7
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: aload 17
      // 0bb: checkcast net/minecraft/class_1657
      // 0be: astore 16
      // 0c0: invokestatic sixtwo/rD.dml ()Lsixtwo/fo;
      // 0c3: aload 16
      // 0c5: invokevirtual sixtwo/fo.aLp (Lnet/minecraft/class_1657;)Z
      // 0c8: aload 4
      // 0ca: ifnonnull 0eb
      // 0cd: ifeq 0e3
      // 0d0: goto 0d7
      // 0d3: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: aload 4
      // 0d9: ifnull 073
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 0e6: aload 16
      // 0e8: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 0eb: ifeq 0f7
      // 0ee: aload 0
      // 0ef: getfield sixtwo/do.OTssl Lsixtwo/cG;
      // 0f2: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0f5: astore 15
      // 0f7: aload 5
      // 0f9: invokevirtual sixtwo/lC.ceV ()V
      // 0fc: aload 0
      // 0fd: aload 14
      // 0ff: getfield sixtwo/do$sG.ZaYMC Lnet/minecraft/class_1297;
      // 102: fload 9
      // 104: invokevirtual sixtwo/do.ahk (Lnet/minecraft/class_1297;F)F
      // 107: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10a: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 10d: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 110: fsub
      // 111: fstore 16
      // 113: aload 5
      // 115: fload 7
      // 117: fload 8
      // 119: fload 16
      // 11b: invokevirtual sixtwo/lC.cfb (FFF)V
      // 11e: fload 10
      // 120: ldc_w 5.0
      // 123: fmul
      // 124: fstore 17
      // 126: fload 8
      // 128: fload 11
      // 12a: fsub
      // 12b: fload 12
      // 12d: fsub
      // 12e: fstore 18
      // 130: aload 14
      // 132: aload 5
      // 134: fload 7
      // 136: fload 18
      // 138: fload 17
      // 13a: aload 15
      // 13c: invokevirtual sixtwo/do$sG.doM (Lsixtwo/lC;FFFLsixtwo/mG;)V
      // 13f: aload 5
      // 141: invokevirtual sixtwo/lC.ceW ()V
      // 144: aload 14
      // 146: invokevirtual sixtwo/do$sG.doN ()Z
      // 149: ifeq 15a
      // 14c: aload 13
      // 14e: invokeinterface java/util/Iterator.remove ()V 1
      // 153: goto 15a
      // 156: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 159: athrow
      // 15a: aload 4
      // 15c: ifnull 073
      // 15f: getstatic sixtwo/do.XSRvt Lsixtwo/kM;
      // 162: invokevirtual sixtwo/kM.endBatch ()V
      // 165: return
   }

   @hG
   public void ahi(gJ param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/do.LNOpt J
      // 03: ldc2_w 114555214916885
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/gJ.bcd ()Lnet/minecraft/class_437;
      // 0f: astore 5
      // 11: astore 4
      // 13: aload 5
      // 15: instanceof net/minecraft/class_465
      // 18: istore 6
      // 1a: aload 4
      // 1c: ifnonnull 81
      // 1f: iload 6
      // 21: ifeq 75
      // 24: goto 2b
      // 27: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: sipush 15311
      // 2f: ldc2_w 6948131051326595556
      // 32: lload 2
      // 33: lxor
      // 34: invokedynamic c (IJ)I bsm=sixtwo/do.ahq (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 39: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3c: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 3f: invokevirtual net/minecraft/class_315.method_42474 ()Lnet/minecraft/class_7172;
      // 42: invokevirtual net/minecraft/class_7172.method_41753 ()Ljava/lang/Object;
      // 45: checkcast java/lang/Integer
      // 48: invokevirtual java/lang/Integer.intValue ()I
      // 4b: sipush 3999
      // 4e: ldc2_w 6349659174100719030
      // 51: lload 2
      // 52: lxor
      // 53: invokedynamic c (IJ)I bsm=sixtwo/do.ahq (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 58: imul
      // 59: iadd
      // 5a: i2f
      // 5b: putfield sixtwo/do.YXgYB F
      // 5e: aload 0
      // 5f: getfield sixtwo/do.lgSYH Lsixtwo/rk;
      // 62: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 65: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 68: pop
      // 69: aload 4
      // 6b: ifnull 8c
      // 6e: goto 75
      // 71: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: aload 0
      // 76: fconst_0
      // 77: putfield sixtwo/do.YXgYB F
      // 7a: goto 81
      // 7d: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 0
      // 82: getfield sixtwo/do.lgSYH Lsixtwo/rk;
      // 85: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 88: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 8b: pop
      // 8c: return
   }

   @hG
   public void ahh(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/do.LNOpt J
      // 003: ldc2_w 66215545365277
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/do.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: new java/util/HashSet
      // 01c: dup
      // 01d: invokespecial java/util/HashSet.<init> ()V
      // 020: astore 5
      // 022: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 025: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 028: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 02b: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 030: astore 6
      // 032: aload 6
      // 034: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 039: ifeq 0dc
      // 03c: aload 6
      // 03e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 043: checkcast net/minecraft/class_1297
      // 046: astore 7
      // 048: aload 7
      // 04a: aload 4
      // 04c: ifnonnull 16d
      // 04f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 052: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 055: if_acmpne 06b
      // 058: goto 05f
      // 05b: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 4
      // 061: ifnull 032
      // 064: goto 06b
      // 067: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: aload 0
      // 06c: getfield sixtwo/do.LHfSj Lsixtwo/cF;
      // 06f: aload 7
      // 071: invokevirtual sixtwo/cF.VX (Lnet/minecraft/class_1297;)Z
      // 074: aload 4
      // 076: ifnonnull 094
      // 079: ifne 08f
      // 07c: goto 083
      // 07f: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 082: athrow
      // 083: aload 4
      // 085: ifnull 032
      // 088: goto 08f
      // 08b: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08e: athrow
      // 08f: aload 7
      // 091: instanceof net/minecraft/class_1657
      // 094: aload 4
      // 096: ifnonnull 0d6
      // 099: ifeq 0cd
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a2: athrow
      // 0a3: aload 7
      // 0a5: checkcast net/minecraft/class_1657
      // 0a8: astore 8
      // 0aa: invokestatic sixtwo/rD.dml ()Lsixtwo/fo;
      // 0ad: aload 8
      // 0af: invokevirtual sixtwo/fo.aLp (Lnet/minecraft/class_1657;)Z
      // 0b2: aload 4
      // 0b4: ifnonnull 0d6
      // 0b7: ifeq 0cd
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: aload 4
      // 0c3: ifnull 032
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: aload 5
      // 0cf: aload 7
      // 0d1: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 0d6: pop
      // 0d7: aload 4
      // 0d9: ifnull 032
      // 0dc: aload 5
      // 0de: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 0e3: astore 6
      // 0e5: aload 6
      // 0e7: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0ec: ifeq 14a
      // 0ef: aload 6
      // 0f1: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0f6: checkcast net/minecraft/class_1297
      // 0f9: astore 7
      // 0fb: aload 0
      // 0fc: getfield sixtwo/do.Gfvqi Ljava/util/List;
      // 0ff: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 104: aload 7
      // 106: invokedynamic test (Lnet/minecraft/class_1297;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/do.ahl (Lnet/minecraft/class_1297;Lsixtwo/do$sG;)Z, (Lsixtwo/do$sG;)Z ]
      // 10b: invokeinterface java/util/stream/Stream.noneMatch (Ljava/util/function/Predicate;)Z 2
      // 110: aload 4
      // 112: ifnonnull 15c
      // 115: aload 4
      // 117: ifnonnull 144
      // 11a: goto 121
      // 11d: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: ifeq 145
      // 124: goto 12b
      // 127: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: aload 0
      // 12c: getfield sixtwo/do.Gfvqi Ljava/util/List;
      // 12f: new sixtwo/do$sG
      // 132: dup
      // 133: aload 7
      // 135: invokespecial sixtwo/do$sG.<init> (Lnet/minecraft/class_1297;)V
      // 138: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 13d: goto 144
      // 140: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 143: athrow
      // 144: pop
      // 145: aload 4
      // 147: ifnull 0e5
      // 14a: aload 0
      // 14b: getfield sixtwo/do.Gfvqi Ljava/util/List;
      // 14e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 153: astore 6
      // 155: aload 6
      // 157: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 15c: ifeq 1ab
      // 15f: aload 6
      // 161: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 166: goto 16d
      // 169: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16c: athrow
      // 16d: checkcast sixtwo/do$sG
      // 170: astore 7
      // 172: aload 4
      // 174: ifnonnull 19a
      // 177: aload 5
      // 179: aload 7
      // 17b: getfield sixtwo/do$sG.ZaYMC Lnet/minecraft/class_1297;
      // 17e: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 183: ifne 1a6
      // 186: goto 18d
      // 189: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18c: athrow
      // 18d: aload 7
      // 18f: bipush 1
      // 190: putfield sixtwo/do$sG.hkzUL Z
      // 193: goto 19a
      // 196: invokestatic sixtwo/do.ahm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 199: athrow
      // 19a: aload 7
      // 19c: getfield sixtwo/do$sG.zzzOY Lsixtwo/rk;
      // 19f: getstatic sixtwo/rj.AYqck Lsixtwo/rj;
      // 1a2: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 1a5: pop
      // 1a6: aload 4
      // 1a8: ifnull 155
      // 1ab: return
   }

   private static int aho(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5089;
      if (YQLde[var3] == null) {
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
         long var5 = kSkhp[var3];
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
         Object[] var9 = (Object[])GjXic.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               GjXic.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/do", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         YQLde[var3] = var15;
      }

      return YQLde[var3];
   }

   private float ahk(class_1297 var1, float var2) {
      class_243 var3 = rD.dlmvG.field_1724.method_30950(var2);
      class_243 var4 = var1.method_30950(var2);
      double var5 = var4.field_1352 - var3.field_1352;
      double var7 = var4.field_1350 - var3.field_1350;
      return (float)(-(Math.atan2(var5, var7) * (180.0 / Math.PI)));
   }

   @Override
   public void YO() {
      super.YO();
      this.Gfvqi.clear();
   }
}
