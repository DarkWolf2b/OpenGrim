package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_591;
import net.minecraft.class_742;

public class cT extends gg {
   private final ct IOXoW;
   private final cu tjQAr;
   private final cu SSPDb;
   private final cG cxjIy;
   private final cC CeLKq;
   private final cC LesoJ;
   private final CopyOnWriteArrayList<cT$so> iJyDI;
   private static final long AanCe = gb.aYR(-223167312884541134L, 15059470583241982L, MethodHandles.lookup().lookupClass()).a(168970528046976L);
   private static final String[] UiVsP;
   private static final String[] VapyU;
   private static final Map bpJNw = new HashMap(13);
   private static final long[] wyaXa;
   private static final Integer[] GsgQV;
   private static final Map PgAJk;

   public cT() {
      long var1 = AanCe ^ 122006620542703L;
      super(gf.aZL(Zy<"f">(7671, 7262830315809921099L ^ var1), false, gh.nOCvV));
      this.IOXoW = new ct(
         this,
         mr.clS(
            new int[]{
               Zy<"f">(11553, 9220172847961761920L ^ var1),
               Zy<"f">(30751, 3027490870975053227L ^ var1),
               Zy<"f">(13955, 5408775907587814159L ^ var1),
               Zy<"f">(8379, 3802392014806836516L ^ var1)
            }
         )
      );
      ct var10003 = this.IOXoW;
      int[] var10004 = new int[Zy<"f">(17396, 7076658464958711422L ^ var1)];
      var10004[0] = Zy<"f">(25459, 4504354664061871848L ^ var1);
      var10004[1] = Zy<"f">(28230, 377502045038881789L ^ var1);
      var10004[2] = Zy<"f">(1695, 2638013725923722002L ^ var1);
      var10004[3] = Zy<"f">(21855, 3923456769824329957L ^ var1);
      var10004[4] = Zy<"f">(8710, 4102112822415419286L ^ var1);
      var10004[5] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      this.tjQAr = new cu(var10003, mr.clS(var10004));
      var10003 = this.IOXoW;
      var10004 = new int[Zy<"f">(19698, 6350727357047114060L ^ var1)];
      var10004[0] = Zy<"f">(20511, 993631780954281353L ^ var1);
      var10004[1] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[2] = Zy<"f">(6809, 5643069516052291371L ^ var1);
      var10004[3] = Zy<"f">(30869, 172568558526250257L ^ var1);
      var10004[4] = Zy<"f">(22700, 333772980318379281L ^ var1);
      var10004[5] = Zy<"f">(24266, 8420155170720422735L ^ var1);
      var10004[Zy<"f">(7973, 9038155694576229020L ^ var1)] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[Zy<"f">(24065, 3414829677439196048L ^ var1)] = Zy<"f">(12106, 7853480750465673981L ^ var1);
      this.SSPDb = new cu(var10003, mr.clS(var10004));
      this.cxjIy = new cG(
            this,
            mr.clS(
               new int[]{
                  Zy<"f">(1699, 715655615986484017L ^ var1),
                  Zy<"f">(15745, 6785286219695912993L ^ var1),
                  Zy<"f">(24770, 5337010818327782720L ^ var1),
                  Zy<"f">(15745, 6785286219695912993L ^ var1),
                  Zy<"f">(15639, 7055339293663623347L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[Zy<"f">(23956, 3589148997615032339L ^ var1)];
      var10004[0] = Zy<"f">(24793, 3426229190309750142L ^ var1);
      var10004[1] = Zy<"f">(26305, 8753769034195018591L ^ var1);
      var10004[2] = Zy<"f">(9688, 2080495177429934187L ^ var1);
      var10004[3] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[4] = Zy<"f">(26579, 1236390621624967787L ^ var1);
      var10004[5] = Zy<"f">(24793, 3426229190309750142L ^ var1);
      var10004[Zy<"f">(7973, 9038155694576229020L ^ var1)] = Zy<"f">(15745, 6785286219695912993L ^ var1);
      var10004[Zy<"f">(4341, 613544796359382390L ^ var1)] = Zy<"f">(1745, 3108627775038735193L ^ var1);
      var10004[Zy<"f">(9219, 2200899243338228099L ^ var1)] = Zy<"f">(21253, 4438587316155913874L ^ var1);
      var10004[Zy<"f">(30843, 842894790978158055L ^ var1)] = Zy<"f">(26305, 8753769034195018591L ^ var1);
      var10004[Zy<"f">(14940, 6854048551019380713L ^ var1)] = Zy<"f">(28508, 2033465932879702765L ^ var1);
      var10004[Zy<"f">(165, 6802077607454098688L ^ var1)] = Zy<"f">(19773, 1212529805737953467L ^ var1);
      var10004[Zy<"f">(22052, 289929145858560923L ^ var1)] = Zy<"f">(3042, 4335497865395588728L ^ var1);
      var10004[Zy<"f">(10906, 98240872309288713L ^ var1)] = Zy<"f">(3042, 4335497865395588728L ^ var1);
      var10004[Zy<"f">(26855, 1601402009306770793L ^ var1)] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[Zy<"f">(16329, 7280097777709185617L ^ var1)] = Zy<"f">(411, 9196818480868049963L ^ var1);
      var10004[Zy<"f">(1508, 4309792120356388977L ^ var1)] = Zy<"f">(15639, 7055339293663623347L ^ var1);
      this.CeLKq = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(10.0).VA(3.0).Vz(Zv<"o">(31067, 4111317686702737780L ^ var1));
      var10004 = new int[Zy<"f">(13865, 3033484415828718498L ^ var1)];
      var10004[0] = Zy<"f">(99, 4350119763117655532L ^ var1);
      var10004[1] = Zy<"f">(24770, 5337010818327782720L ^ var1);
      var10004[2] = Zy<"f">(14196, 8330735619785585376L ^ var1);
      var10004[3] = Zy<"f">(1745, 3108627775038735193L ^ var1);
      var10004[4] = Zy<"f">(18369, 1173950377879929436L ^ var1);
      var10004[5] = Zy<"f">(3042, 4335497865395588728L ^ var1);
      var10004[Zy<"f">(7973, 9038155694576229020L ^ var1)] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[Zy<"f">(4341, 613544796359382390L ^ var1)] = Zy<"f">(9348, 6232578508633792797L ^ var1);
      var10004[Zy<"f">(9219, 2200899243338228099L ^ var1)] = Zy<"f">(12106, 7853480750465673981L ^ var1);
      this.LesoJ = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(-2.0).Vx(2.0).VA(0.4);
      this.iJyDI = new CopyOnWriteArrayList<>();
   }

   static {
      long var11 = AanCe ^ 74823685195229L;
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
      String var17 = "\u009fâI}·¸@\u0018\nÚ\u009ehP}y2\u0094Ò*(ï\u0011\u007fN\u0010Ýb\u0019\u000f>Î\u0088è\u008f\u008b~\u009bÿÿ<^";
      int var19 = "\u009fâI}·¸@\u0018\nÚ\u009ehP}y2\u0094Ò*(ï\u0011\u007fN\u0010Ýb\u0019\u000f>Î\u0088è\u008f\u008b~\u009bÿÿ<^".length();
      char var16 = 24;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = Zs(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            UiVsP = var20;
            VapyU = new String[2];
            PgAJk = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[54];
            int var3 = 0;
            String var4 = "4â \u001b6\u00014\u0084Äk\u0019fR\u0003(\u0090j\u009e\u0084\u008d\u001dÙå\u0001Å\u0017ü±\u0006Ë.º»\u009c\u001fä½\b¹üVG9.«T+ß\ny\u009aÛ\u007fì¤\u0098ç\u001aÔ¤\u0080¦Ñ,\u0090«¤)\u0097®Çò\u0093G\u0001Êm×.¬=;ä¯Ö¸(kG\u009aIb2û©}2KÍ*j/òyN,Æ½^îJ³À\u008f\u001cx\u009f,¦\u00102±\tt\u001e\u001bùaI\u0085å:\u0000ÅCÜnZÙ\u0091öÆ\u007fßÈ\u0080{Hù0\u0096\bømVw\nÐöìdÂâ\u0091¬yÊ\u0001³4aÁ\u0013\u0098ùÃ&\u008bi³`å®\u0007ð^Ö¶\u0099B\u0016´ö¶ÎE\u008aJ3NL¹â\u0003{\u0019o\b/\u0015\rBó×nt6ÂÉ\f\u001em\u0099}¥Åå\b'\u0085÷Ë\u008eúî9Õ=6\u0018ê\rÝ\u0002e:êñW¢.\u0012·Û\u001e\tïÉE\u008c\u0096\u0007³\u0092_}«<cªP+ã.°Þ\u0004ÝÚ¯Ç8\u0099Ù>\u000e$6\b\u009c#Óó&\fJ\u009f\u0012\rÎÓñ\u0014\u0019ßÄøæ\r}s8å[I\u0094 #)w¯\u0013\u0006C\u0083N~Ù\u0013-,'\u001a+\u000f3/\u0014ªw\t0]ú\t2þ\u0086§`ÍS>T\u000e\u008c\u0086xð\u009e\u0006kL9\u00adn\u0087l\u009cF¸ó¸\u0088p\u0010z|¤«\u008dÍ\u0083Ó4á.ôk»\u0098/ð¾k\u0081]\\êmÙ¥'5Æ%QßtT_êü¾z\u0001";
            int var5 = "4â \u001b6\u00014\u0084Äk\u0019fR\u0003(\u0090j\u009e\u0084\u008d\u001dÙå\u0001Å\u0017ü±\u0006Ë.º»\u009c\u001fä½\b¹üVG9.«T+ß\ny\u009aÛ\u007fì¤\u0098ç\u001aÔ¤\u0080¦Ñ,\u0090«¤)\u0097®Çò\u0093G\u0001Êm×.¬=;ä¯Ö¸(kG\u009aIb2û©}2KÍ*j/òyN,Æ½^îJ³À\u008f\u001cx\u009f,¦\u00102±\tt\u001e\u001bùaI\u0085å:\u0000ÅCÜnZÙ\u0091öÆ\u007fßÈ\u0080{Hù0\u0096\bømVw\nÐöìdÂâ\u0091¬yÊ\u0001³4aÁ\u0013\u0098ùÃ&\u008bi³`å®\u0007ð^Ö¶\u0099B\u0016´ö¶ÎE\u008aJ3NL¹â\u0003{\u0019o\b/\u0015\rBó×nt6ÂÉ\f\u001em\u0099}¥Åå\b'\u0085÷Ë\u008eúî9Õ=6\u0018ê\rÝ\u0002e:êñW¢.\u0012·Û\u001e\tïÉE\u008c\u0096\u0007³\u0092_}«<cªP+ã.°Þ\u0004ÝÚ¯Ç8\u0099Ù>\u000e$6\b\u009c#Óó&\fJ\u009f\u0012\rÎÓñ\u0014\u0019ßÄøæ\r}s8å[I\u0094 #)w¯\u0013\u0006C\u0083N~Ù\u0013-,'\u001a+\u000f3/\u0014ªw\t0]ú\t2þ\u0086§`ÍS>T\u000e\u008c\u0086xð\u009e\u0006kL9\u00adn\u0087l\u009cF¸ó¸\u0088p\u0010z|¤«\u008dÍ\u0083Ó4á.ôk»\u0098/ð¾k\u0081]\\êmÙ¥'5Æ%QßtT_êü¾z\u0001"
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
                           wyaXa = var6;
                           GsgQV = new Integer[54];
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "äô\u009dÐ°«a®fÐy6AÑüs";
                        var5 = "äô\u009dÐ°«a®fÐy6AÑüs".length();
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

   private static String Zs(byte[] var0) {
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

   private void Zl(class_4587 param1, class_742 param2, class_591 param3, class_2960 param4, float param5, float param6) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cT.AanCe J
      // 003: ldc2_w 93325792430213
      // 006: lxor
      // 007: lstore 7
      // 009: aload 3
      // 00a: getfield net/minecraft/class_591.field_3482 Lnet/minecraft/class_630;
      // 00d: bipush 1
      // 00e: putfield net/minecraft/class_630.field_3665 Z
      // 011: aload 3
      // 012: getfield net/minecraft/class_591.field_3479 Lnet/minecraft/class_630;
      // 015: bipush 1
      // 016: putfield net/minecraft/class_630.field_3665 Z
      // 019: aload 3
      // 01a: getfield net/minecraft/class_591.field_3484 Lnet/minecraft/class_630;
      // 01d: bipush 1
      // 01e: putfield net/minecraft/class_630.field_3665 Z
      // 021: aload 3
      // 022: getfield net/minecraft/class_591.field_3486 Lnet/minecraft/class_630;
      // 025: bipush 1
      // 026: putfield net/minecraft/class_630.field_3665 Z
      // 029: aload 3
      // 02a: getfield net/minecraft/class_591.field_3483 Lnet/minecraft/class_630;
      // 02d: bipush 1
      // 02e: putfield net/minecraft/class_630.field_3665 Z
      // 031: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 034: aload 3
      // 035: getfield net/minecraft/class_591.field_3394 Lnet/minecraft/class_630;
      // 038: bipush 1
      // 039: putfield net/minecraft/class_630.field_3665 Z
      // 03c: aload 2
      // 03d: invokevirtual net/minecraft/class_742.method_73189 ()Lnet/minecraft/class_243;
      // 040: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 043: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 046: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 049: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 04c: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 04f: astore 10
      // 051: aload 2
      // 052: aload 2
      // 053: invokevirtual net/minecraft/class_742.method_73189 ()Lnet/minecraft/class_243;
      // 056: dconst_0
      // 057: aload 0
      // 058: getfield sixtwo/cT.LesoJ Lsixtwo/cC;
      // 05b: invokevirtual sixtwo/cC.VI ()D
      // 05e: ldc2_w 50.0
      // 061: ddiv
      // 062: dconst_0
      // 063: invokevirtual net/minecraft/class_243.method_1031 (DDD)Lnet/minecraft/class_243;
      // 066: invokevirtual net/minecraft/class_742.method_33574 (Lnet/minecraft/class_243;)V
      // 069: aload 2
      // 06a: aload 2
      // 06b: invokevirtual net/minecraft/class_742.method_23317 ()D
      // 06e: putfield net/minecraft/class_742.field_6014 D
      // 071: aload 2
      // 072: aload 2
      // 073: invokevirtual net/minecraft/class_742.method_23318 ()D
      // 076: putfield net/minecraft/class_742.field_6036 D
      // 079: aload 2
      // 07a: aload 2
      // 07b: invokevirtual net/minecraft/class_742.method_23321 ()D
      // 07e: putfield net/minecraft/class_742.field_5969 D
      // 081: aload 2
      // 082: aload 2
      // 083: getfield net/minecraft/class_742.field_6283 F
      // 086: putfield net/minecraft/class_742.field_6220 F
      // 089: aload 2
      // 08a: aload 2
      // 08b: getfield net/minecraft/class_742.field_6241 F
      // 08e: putfield net/minecraft/class_742.field_6259 F
      // 091: aload 2
      // 092: aload 2
      // 093: invokevirtual net/minecraft/class_742.method_36454 ()F
      // 096: putfield net/minecraft/class_742.field_5982 F
      // 099: astore 9
      // 09b: aload 2
      // 09c: aload 2
      // 09d: invokevirtual net/minecraft/class_742.method_36455 ()F
      // 0a0: putfield net/minecraft/class_742.field_6004 F
      // 0a3: aload 1
      // 0a4: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 0a7: aload 1
      // 0a8: aload 10
      // 0aa: getfield net/minecraft/class_243.field_1352 D
      // 0ad: aload 10
      // 0af: getfield net/minecraft/class_243.field_1351 D
      // 0b2: aload 10
      // 0b4: getfield net/minecraft/class_243.field_1350 D
      // 0b7: invokevirtual net/minecraft/class_4587.method_22904 (DDD)V
      // 0ba: fload 6
      // 0bc: aload 2
      // 0bd: getfield net/minecraft/class_742.field_6220 F
      // 0c0: aload 2
      // 0c1: getfield net/minecraft/class_742.field_6283 F
      // 0c4: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 0c7: fstore 11
      // 0c9: aload 1
      // 0ca: getstatic net/minecraft/class_7833.field_40716 Lnet/minecraft/class_7833;
      // 0cd: ldc_w 180.0
      // 0d0: fload 11
      // 0d2: fsub
      // 0d3: invokeinterface net/minecraft/class_7833.rotationDegrees (F)Lorg/joml/Quaternionf; 2
      // 0d8: invokevirtual net/minecraft/class_4587.method_22907 (Lorg/joml/Quaternionfc;)V
      // 0db: aload 0
      // 0dc: aload 1
      // 0dd: invokevirtual sixtwo/cT.Zm (Lnet/minecraft/class_4587;)V
      // 0e0: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e3: invokevirtual net/minecraft/class_310.method_1561 ()Lnet/minecraft/class_898;
      // 0e6: aload 2
      // 0e7: invokevirtual net/minecraft/class_898.method_74405 (Lnet/minecraft/class_742;)Lnet/minecraft/class_1007;
      // 0ea: astore 12
      // 0ec: new net/minecraft/class_10055
      // 0ef: dup
      // 0f0: invokespecial net/minecraft/class_10055.<init> ()V
      // 0f3: astore 13
      // 0f5: aload 12
      // 0f7: aload 2
      // 0f8: aload 13
      // 0fa: fload 6
      // 0fc: invokevirtual net/minecraft/class_1007.method_62604 (Lnet/minecraft/class_11890;Lnet/minecraft/class_10055;F)V
      // 0ff: aload 2
      // 100: getfield net/minecraft/class_742.field_42108 Lnet/minecraft/class_8080;
      // 103: checkcast mixin/accessors/WalkAnimationStateAccessor
      // 106: astore 14
      // 108: aload 13
      // 10a: aload 2
      // 10b: getfield net/minecraft/class_742.field_42108 Lnet/minecraft/class_8080;
      // 10e: invokevirtual net/minecraft/class_8080.method_48566 ()F
      // 111: putfield net/minecraft/class_10055.field_53451 F
      // 114: aload 13
      // 116: aload 14
      // 118: invokeinterface mixin/accessors/WalkAnimationStateAccessor.getPosition ()F 1
      // 11d: putfield net/minecraft/class_10055.field_53450 F
      // 120: aload 3
      // 121: aload 13
      // 123: invokevirtual net/minecraft/class_591.method_62110 (Lnet/minecraft/class_10055;)V
      // 126: aload 0
      // 127: getfield sixtwo/cT.cxjIy Lsixtwo/cG;
      // 12a: invokevirtual sixtwo/cG.Wh ()I
      // 12d: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 130: fload 5
      // 132: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 135: astore 15
      // 137: aload 15
      // 139: invokevirtual sixtwo/mG.con ()[F
      // 13c: astore 16
      // 13e: aload 13
      // 140: fconst_0
      // 141: invokestatic net/minecraft/class_922.method_23622 (Lnet/minecraft/class_10042;F)I
      // 144: istore 17
      // 146: aload 0
      // 147: getfield sixtwo/cT.IOXoW Lsixtwo/ct;
      // 14a: bipush 1
      // 14b: invokevirtual sixtwo/ct.SQ (I)Z
      // 14e: ifeq 235
      // 151: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 154: invokevirtual net/minecraft/class_310.method_1531 ()Lnet/minecraft/class_1060;
      // 157: aload 4
      // 159: invokevirtual net/minecraft/class_1060.method_4619 (Lnet/minecraft/class_2960;)Lnet/minecraft/class_1044;
      // 15c: astore 18
      // 15e: new net/minecraft/class_9799
      // 161: dup
      // 162: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 165: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 168: sipush 18015
      // 16b: ldc2_w 7927451159427276179
      // 16e: lload 7
      // 170: lxor
      // 171: invokedynamic f (IJ)I bsm=sixtwo/cT.Zy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 176: imul
      // 177: invokespecial net/minecraft/class_9799.<init> (I)V
      // 17a: astore 19
      // 17c: new net/minecraft/class_287
      // 17f: dup
      // 180: aload 19
      // 182: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 185: getstatic net/minecraft/class_290.field_1585 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 188: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 18b: astore 20
      // 18d: aload 3
      // 18e: aload 1
      // 18f: aload 20
      // 191: sipush 12751
      // 194: ldc2_w 6631827471017585188
      // 197: lload 7
      // 199: lxor
      // 19a: invokedynamic f (IJ)I bsm=sixtwo/cT.Zy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19f: iload 17
      // 1a1: invokevirtual net/minecraft/class_591.method_60879 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;II)V
      // 1a4: aload 20
      // 1a6: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 1a9: astore 21
      // 1ab: aload 21
      // 1ad: aload 9
      // 1af: ifnonnull 1d4
      // 1b2: ifnull 1d2
      // 1b5: goto 1bc
      // 1b8: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1bb: athrow
      // 1bc: getstatic sixtwo/kR.NElVn Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 1bf: aload 21
      // 1c1: aload 18
      // 1c3: invokedynamic accept (Lnet/minecraft/class_1044;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/cT.Zo (Lnet/minecraft/class_1044;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 1c8: invokestatic sixtwo/lF.cfD (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 1cb: goto 1d2
      // 1ce: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d1: athrow
      // 1d2: aload 21
      // 1d4: aload 9
      // 1d6: ifnonnull 1e5
      // 1d9: ifnull 212
      // 1dc: goto 1e3
      // 1df: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e2: athrow
      // 1e3: aload 21
      // 1e5: invokevirtual net/minecraft/class_9801.close ()V
      // 1e8: goto 212
      // 1eb: astore 22
      // 1ed: aload 21
      // 1ef: aload 9
      // 1f1: ifnonnull 200
      // 1f4: ifnull 20f
      // 1f7: goto 1fe
      // 1fa: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1fd: athrow
      // 1fe: aload 21
      // 200: invokevirtual net/minecraft/class_9801.close ()V
      // 203: goto 20f
      // 206: astore 23
      // 208: aload 22
      // 20a: aload 23
      // 20c: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 20f: aload 22
      // 211: athrow
      // 212: aload 19
      // 214: invokevirtual net/minecraft/class_9799.close ()V
      // 217: goto 230
      // 21a: astore 20
      // 21c: aload 19
      // 21e: invokevirtual net/minecraft/class_9799.close ()V
      // 221: goto 22d
      // 224: astore 21
      // 226: aload 20
      // 228: aload 21
      // 22a: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 22d: aload 20
      // 22f: athrow
      // 230: aload 9
      // 232: ifnull 305
      // 235: new net/minecraft/class_9799
      // 238: dup
      // 239: getstatic net/minecraft/class_290.field_1592 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 23c: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 23f: sipush 2303
      // 242: ldc2_w 2830415235329397532
      // 245: lload 7
      // 247: lxor
      // 248: invokedynamic f (IJ)I bsm=sixtwo/cT.Zy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 24d: imul
      // 24e: invokespecial net/minecraft/class_9799.<init> (I)V
      // 251: astore 18
      // 253: new net/minecraft/class_287
      // 256: dup
      // 257: aload 18
      // 259: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 25c: getstatic net/minecraft/class_290.field_1592 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 25f: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 262: astore 19
      // 264: aload 3
      // 265: aload 1
      // 266: aload 19
      // 268: sipush 14940
      // 26b: ldc2_w 6853989076366369155
      // 26e: lload 7
      // 270: lxor
      // 271: invokedynamic f (IJ)I bsm=sixtwo/cT.Zy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 276: iload 17
      // 278: invokevirtual net/minecraft/class_591.method_60879 (Lnet/minecraft/class_4587;Lnet/minecraft/class_4588;II)V
      // 27b: aload 19
      // 27d: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 280: astore 20
      // 282: aload 20
      // 284: aload 9
      // 286: ifnonnull 2a9
      // 289: ifnull 2a7
      // 28c: goto 293
      // 28f: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 292: athrow
      // 293: getstatic sixtwo/kR.vTohM Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 296: aload 20
      // 298: invokedynamic accept ()Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/cT.Zn (Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 29d: invokestatic sixtwo/lF.cfD (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 2a0: goto 2a7
      // 2a3: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2a6: athrow
      // 2a7: aload 20
      // 2a9: aload 9
      // 2ab: ifnonnull 2ba
      // 2ae: ifnull 2e7
      // 2b1: goto 2b8
      // 2b4: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2b7: athrow
      // 2b8: aload 20
      // 2ba: invokevirtual net/minecraft/class_9801.close ()V
      // 2bd: goto 2e7
      // 2c0: astore 21
      // 2c2: aload 20
      // 2c4: aload 9
      // 2c6: ifnonnull 2d5
      // 2c9: ifnull 2e4
      // 2cc: goto 2d3
      // 2cf: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2d2: athrow
      // 2d3: aload 20
      // 2d5: invokevirtual net/minecraft/class_9801.close ()V
      // 2d8: goto 2e4
      // 2db: astore 22
      // 2dd: aload 21
      // 2df: aload 22
      // 2e1: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2e4: aload 21
      // 2e6: athrow
      // 2e7: aload 18
      // 2e9: invokevirtual net/minecraft/class_9799.close ()V
      // 2ec: goto 305
      // 2ef: astore 19
      // 2f1: aload 18
      // 2f3: invokevirtual net/minecraft/class_9799.close ()V
      // 2f6: goto 302
      // 2f9: astore 20
      // 2fb: aload 19
      // 2fd: aload 20
      // 2ff: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 302: aload 19
      // 304: athrow
      // 305: aload 1
      // 306: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 309: return
   }

   private static CallSite Zy(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Zx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cT" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite Zv(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Zu".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cT" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void Zm(class_4587 var1) {
      var1.method_22905(-1.0F, -1.0F, 1.0F);
      var1.method_22905(1.6F, 1.8F, 1.6F);
      var1.method_46416(0.0F, -1.501F, 0.0F);
   }

   private static Throwable Zr(Throwable var0) {
      return var0;
   }

   private static int Zw(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8593;
      if (GsgQV[var3] == null) {
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
         long var5 = wyaXa[var3];
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
         Object[] var9 = (Object[])PgAJk.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               PgAJk.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cT", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         GsgQV[var3] = var15;
      }

      return GsgQV[var3];
   }

   private static Object Zu(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Zt(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String Zt(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5162;
      if (VapyU[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])bpJNw.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               bpJNw.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cT", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = UiVsP[var5].getBytes("ISO-8859-1");
         VapyU[var5] = Zs(((Cipher)var4[0]).doFinal(var9));
      }

      return VapyU[var5];
   }

   @hG
   public void Zj(go$sX var1) {
      long var2 = AanCe ^ 131719275682388L;

      try {
         if (!this.bab()) {
            return;
         }
      } catch (MatchException var6) {
         throw Zr(var6);
      }

      class_4587 var4 = var1.bbh();
      float var5 = var1.bbi();
      this.iJyDI.forEach(var3 -> this.Zl(var4, var3.VwpaT, var3.ugYAv, var3.UvTDM, var3.dnx(), var5));
   }

   @hG
   public void Zi(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cT.AanCe J
      // 03: ldc2_w 85349506500474
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 26
      // 13: invokevirtual sixtwo/cT.bab ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 24: athrow
      // 25: aload 0
      // 26: getfield sixtwo/cT.iJyDI Ljava/util/concurrent/CopyOnWriteArrayList;
      // 29: aload 0
      // 2a: invokedynamic accept (Lsixtwo/cT;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/cT.Zq (Lsixtwo/cT$so;)V, (Lsixtwo/cT$so;)V ]
      // 2f: invokevirtual java/util/concurrent/CopyOnWriteArrayList.forEach (Ljava/util/function/Consumer;)V
      // 32: return
   }

   @hG
   public void Zk(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cT.AanCe J
      // 003: ldc2_w 52463006548846
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cT.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 01d: astore 5
      // 01f: aload 5
      // 021: aload 4
      // 023: ifnonnull 03c
      // 026: instanceof net/minecraft/class_2663
      // 029: ifeq 147
      // 02c: goto 033
      // 02f: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 032: athrow
      // 033: aload 5
      // 035: goto 03c
      // 038: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03b: athrow
      // 03c: checkcast net/minecraft/class_2663
      // 03f: astore 6
      // 041: aload 6
      // 043: aload 4
      // 045: ifnonnull 06b
      // 048: invokevirtual net/minecraft/class_2663.method_11470 ()B
      // 04b: sipush 30938
      // 04e: ldc2_w 887313110723373293
      // 051: lload 2
      // 052: lxor
      // 053: invokedynamic f (IJ)I bsm=sixtwo/cT.Zy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 058: if_icmpne 147
      // 05b: goto 062
      // 05e: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 061: athrow
      // 062: aload 6
      // 064: goto 06b
      // 067: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 06a: athrow
      // 06b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 06e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 071: invokevirtual net/minecraft/class_2663.method_11469 (Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;
      // 074: astore 7
      // 076: aload 7
      // 078: aload 4
      // 07a: ifnonnull 093
      // 07d: instanceof net/minecraft/class_1657
      // 080: ifeq 147
      // 083: goto 08a
      // 086: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 089: athrow
      // 08a: aload 7
      // 08c: goto 093
      // 08f: invokestatic sixtwo/cT.Zr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 092: athrow
      // 093: checkcast net/minecraft/class_1657
      // 096: astore 8
      // 098: new net/minecraft/class_745
      // 09b: dup
      // 09c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 09f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0a2: new com/mojang/authlib/GameProfile
      // 0a5: dup
      // 0a6: aload 8
      // 0a8: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 0ab: aload 8
      // 0ad: invokevirtual net/minecraft/class_1657.method_5477 ()Lnet/minecraft/class_2561;
      // 0b0: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 0b5: invokespecial com/mojang/authlib/GameProfile.<init> (Ljava/util/UUID;Ljava/lang/String;)V
      // 0b8: invokespecial net/minecraft/class_745.<init> (Lnet/minecraft/class_638;Lcom/mojang/authlib/GameProfile;)V
      // 0bb: astore 9
      // 0bd: aload 9
      // 0bf: aload 8
      // 0c1: invokevirtual net/minecraft/class_745.method_5719 (Lnet/minecraft/class_1297;)V
      // 0c4: aload 9
      // 0c6: aload 8
      // 0c8: getfield net/minecraft/class_1657.field_6283 F
      // 0cb: putfield net/minecraft/class_745.field_6283 F
      // 0ce: aload 9
      // 0d0: aload 8
      // 0d2: getfield net/minecraft/class_1657.field_6241 F
      // 0d5: putfield net/minecraft/class_745.field_6241 F
      // 0d8: aload 9
      // 0da: aload 9
      // 0dc: getfield net/minecraft/class_745.field_6283 F
      // 0df: putfield net/minecraft/class_745.field_6220 F
      // 0e2: aload 9
      // 0e4: aload 9
      // 0e6: getfield net/minecraft/class_745.field_6241 F
      // 0e9: putfield net/minecraft/class_745.field_6259 F
      // 0ec: aload 9
      // 0ee: aload 8
      // 0f0: invokevirtual net/minecraft/class_1657.method_5715 ()Z
      // 0f3: invokevirtual net/minecraft/class_745.method_5660 (Z)V
      // 0f6: aload 8
      // 0f8: getfield net/minecraft/class_1657.field_42108 Lnet/minecraft/class_8080;
      // 0fb: checkcast mixin/accessors/WalkAnimationStateAccessor
      // 0fe: astore 10
      // 100: aload 9
      // 102: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 105: checkcast mixin/accessors/WalkAnimationStateAccessor
      // 108: astore 11
      // 10a: aload 9
      // 10c: getfield net/minecraft/class_745.field_42108 Lnet/minecraft/class_8080;
      // 10f: aload 8
      // 111: getfield net/minecraft/class_1657.field_42108 Lnet/minecraft/class_8080;
      // 114: invokevirtual net/minecraft/class_8080.method_48566 ()F
      // 117: invokevirtual net/minecraft/class_8080.method_48567 (F)V
      // 11a: aload 11
      // 11c: aload 10
      // 11e: invokeinterface mixin/accessors/WalkAnimationStateAccessor.getPosition ()F 1
      // 123: invokeinterface mixin/accessors/WalkAnimationStateAccessor.setPosition (F)V 2
      // 128: aload 0
      // 129: getfield sixtwo/cT.iJyDI Ljava/util/concurrent/CopyOnWriteArrayList;
      // 12c: new sixtwo/cT$so
      // 12f: dup
      // 130: aload 0
      // 131: aload 9
      // 133: aload 9
      // 135: invokevirtual net/minecraft/class_745.method_52814 ()Lnet/minecraft/class_8685;
      // 138: invokevirtual net/minecraft/class_8685.comp_1626 ()Lnet/minecraft/class_12079$class_12081;
      // 13b: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // 140: invokespecial sixtwo/cT$so.<init> (Lsixtwo/cT;Lnet/minecraft/class_742;Lnet/minecraft/class_2960;)V
      // 143: invokevirtual java/util/concurrent/CopyOnWriteArrayList.add (Ljava/lang/Object;)Z
      // 146: pop
      // 147: return
   }

   private static int Zx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Zw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
