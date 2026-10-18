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
import net.minecraft.class_1309;
import net.minecraft.class_3532;

public class bZ extends cr {
   private final cJ NCHJZ;
   private final ct nLbAG;
   private final cu kojYh;
   private final cu cCJxB;
   private final cu mBhYD;
   private final rk[] CCbky;
   private final rk pHErH;
   private final rk jLjXP;
   private final rk sjeIR;
   private final rk PquMu;
   private final rk dfbld;
   private class_1309 qcZhQ;
   private static final long yIQrZ = gb.aYR(3538484401670313874L, -6506673960747853613L, MethodHandles.lookup().lookupClass()).a(209388426308101L);
   private static final long[] wNQMp;
   private static final Integer[] GEMJy;
   private static final Map BwsEB = new HashMap(13);

   public bZ() {
      long var1 = yIQrZ ^ 118381771650935L;
      boolean var10000 = ca.OY();
      int[] var10002 = new int[OO<"k">(23005, 7272825491069402527L ^ var1)];
      var10002[0] = OO<"k">(30942, 5101405529079176377L ^ var1);
      var10002[1] = OO<"k">(12621, 929943816058705176L ^ var1);
      var10002[2] = OO<"k">(16572, 4135824796272518367L ^ var1);
      var10002[3] = OO<"k">(10423, 3875989419061316831L ^ var1);
      var10002[4] = OO<"k">(16330, 6455273437854997387L ^ var1);
      var10002[5] = OO<"k">(16454, 296830571530183696L ^ var1);
      var10002[OO<"k">(31564, 4470898105666133769L ^ var1)] = OO<"k">(9079, 4756146569891514151L ^ var1);
      var10002[OO<"k">(26987, 6878807189062831364L ^ var1)] = OO<"k">(23633, 5739307975964063790L ^ var1);
      var10002[OO<"k">(2558, 2829285300992159148L ^ var1)] = OO<"k">(6111, 5323726976594916277L ^ var1);
      var10002[OO<"k">(22698, 5292798114013510909L ^ var1)] = OO<"k">(15211, 2664201935225265957L ^ var1);
      super(var10002, lf.ENioA);
      this.NCHJZ = new cJ(
            this,
            mr.clS(
               new int[]{
                  OO<"k">(27347, 6873568676037086867L ^ var1),
                  OO<"k">(24518, 4493828046204238776L ^ var1),
                  OO<"k">(4519, 3742115719764948461L ^ var1),
                  OO<"k">(1010, 3338514408902600606L ^ var1)
               }
            )
         )
         .WE(true);
      int[] var10005 = new int[OO<"k">(22221, 7387167482489631362L ^ var1)];
      var10005[0] = OO<"k">(23329, 4399906056528953210L ^ var1);
      var10005[1] = OO<"k">(3276, 5575781849962064010L ^ var1);
      var10005[2] = OO<"k">(2652, 4875773244467752497L ^ var1);
      var10005[3] = OO<"k">(4519, 3742115719764948461L ^ var1);
      var10005[4] = OO<"k">(3276, 5575781849962064010L ^ var1);
      var10005[5] = OO<"k">(16694, 5374907799357875583L ^ var1);
      var10005[OO<"k">(24825, 6639314479801058432L ^ var1)] = OO<"k">(10126, 5910910180107420660L ^ var1);
      var10005[OO<"k">(23687, 9006167281625364692L ^ var1)] = OO<"k">(16145, 6414977441232264009L ^ var1);
      var10005[OO<"k">(6048, 2445953684257059790L ^ var1)] = OO<"k">(6515, 1209311221525822766L ^ var1);
      var10005[OO<"k">(23276, 8205959288843894433L ^ var1)] = OO<"k">(32346, 1954642847182608896L ^ var1);
      var10005[OO<"k">(26283, 5755554729071493876L ^ var1)] = OO<"k">(6344, 3910876206251588758L ^ var1);
      var10005[OO<"k">(23003, 1000222776671894974L ^ var1)] = OO<"k">(29066, 1558645100582327757L ^ var1);
      var10005[OO<"k">(8602, 6514782025895806460L ^ var1)] = OO<"k">(23010, 8844505610139499946L ^ var1);
      var10005[OO<"k">(10974, 8636798545978658450L ^ var1)] = OO<"k">(16694, 5374907799357875583L ^ var1);
      var10005[OO<"k">(14087, 4712033567439557503L ^ var1)] = OO<"k">(13371, 943108516882124898L ^ var1);
      var10005[OO<"k">(604, 9155457693320848949L ^ var1)] = OO<"k">(4519, 3742115719764948461L ^ var1);
      var10005[OO<"k">(26930, 1681362642968956242L ^ var1)] = OO<"k">(30664, 1213746274536641419L ^ var1);
      var10005[OO<"k">(787, 4543831798604277570L ^ var1)] = OO<"k">(2469, 2520851858137886169L ^ var1);
      this.nLbAG = new ct(this, mr.clS(var10005));
      this.kojYh = new cu(
            this.nLbAG,
            mr.clS(
               new int[]{
                  OO<"k">(15560, 6236292399637895331L ^ var1),
                  OO<"k">(4519, 3742115719764948461L ^ var1),
                  OO<"k">(7732, 1349541900255476351L ^ var1),
                  OO<"k">(2469, 2520851858137886169L ^ var1)
               }
            )
         )
         .SY();
      this.cCJxB = new cu(
         this.nLbAG,
         mr.clS(
            new int[]{
               OO<"k">(24710, 2990293871135016146L ^ var1),
               OO<"k">(29066, 1558645100582327757L ^ var1),
               OO<"k">(16594, 3286739369096373398L ^ var1),
               OO<"k">(15478, 1527557554583214098L ^ var1),
               OO<"k">(2469, 2520851858137886169L ^ var1)
            }
         )
      );
      this.mBhYD = new cu(
         this.nLbAG,
         mr.clS(
            new int[]{
               OO<"k">(25765, 6504089900834144455L ^ var1),
               OO<"k">(2308, 719250282093030777L ^ var1),
               OO<"k">(4519, 3742115719764948461L ^ var1),
               OO<"k">(25215, 8324138887619757598L ^ var1)
            }
         )
      );
      this.CCbky = new rk[4];
      this.pHErH = new rk(OO<"k">(11673, 269880821274151365L ^ var1)).dhs(rj.NJlxm);
      boolean var3 = var10000;
      this.jLjXP = new rk(OO<"k">(12884, 83272933951968815L ^ var1)).dhs(rj.XzDkv);
      this.sjeIR = new rk(OO<"k">(12884, 83272933951968815L ^ var1)).dhs(rj.XzDkv);
      this.PquMu = new rk(OO<"k">(12884, 83272933951968815L ^ var1)).dhs(rj.UPXqT);
      this.dfbld = new rk(OO<"k">(12884, 83272933951968815L ^ var1)).dhs(rj.XzDkv);
      int var4 = 0;

      while (var4 < this.CCbky.length) {
         this.CCbky[var4] = new rk(OO<"k">(12884, 83272933951968815L ^ var1)).dhs(rj.XzDkv);
         var4++;
         if (!var3) {
            break;
         }
      }
   }

   static {
      long var0 = yIQrZ ^ 100398186049059L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[56];
      int var5 = 0;
      String var6 = "²Ä\u0098\u0015úVq¦ä.}\u001e_\u0082?w\u001dódMA/tDzÞÅbây\u0082\u0088\u0098\u0087ñ¸û¬Åé\u008b¶©)õñÄG«\u0005k}+Åñ\u0012ÿøæ4,\u0096\u0001ç\u0081\u0002J\u0088Ø\u008cyþÏ;+M²$#\u0004QxÉöM\u0095\u0012ø0\tÜéµ»\u0006¥*L\u0085\u0005A'C2lÎÇû\u007fXþG\u0005\u008b##Ï¨ÜÂ¼ìáb\u0000«~ï\u009eUØ\u0018Ãó\u0013öD\u001aá\u0019Ûò\u000e£|a0.%fã\u000f\u0092kíÌ\u001f>ë\n\u001b W~\u0018:r\u009anW3ø~\u000f\u0087Yq\u001clÀ¯txÛú\u0007Ël\u007fb¤\u0000mÊÓK\u001e¡ò9(î¼%\u0012µé¡<»S\u0003â©\u0083\u0005\u0091Á\u0090åá÷BÌk\u0012\u0006)kªObðï¯=u\u0091 Áº\u0010G4ò\u0010\u0007ÉÄÉ\u008b\u0094GV0%\u0094;\u001f\u0092i\u0015\n'5mÔ³oüé×\u001c\u0014Q\u009aÅß\u0095sÒHÓµÍÎ\u009cqæCÐÅÚ÷\u0014\u00927ÞA\u0088ë\u0087\u008b\u001eÑ\u0092P-\u008c\u0087</c\u008eK\u0088m¿xÛ\u0082pÀ*¯oõ°MXCËO3\u0003¢ç.\u0091\u0090\u000e;0\u00068\u001e-ÝöóY\u0003nbõ/2¢§&ðKÊ9.¹ê\u0012×µFq¿\u0016jÞòA\u0094»\u0088<\\5V\u008döoÊ|º\u0090O k¥òjN«\u009aql\u0087\\ÿO\u0081\u008eG7y\u009f\ri¦Øa,\u008dÇyÄîK\u00ad\u0086ë[I\u0005 ";
      int var7 = "²Ä\u0098\u0015úVq¦ä.}\u001e_\u0082?w\u001dódMA/tDzÞÅbây\u0082\u0088\u0098\u0087ñ¸û¬Åé\u008b¶©)õñÄG«\u0005k}+Åñ\u0012ÿøæ4,\u0096\u0001ç\u0081\u0002J\u0088Ø\u008cyþÏ;+M²$#\u0004QxÉöM\u0095\u0012ø0\tÜéµ»\u0006¥*L\u0085\u0005A'C2lÎÇû\u007fXþG\u0005\u008b##Ï¨ÜÂ¼ìáb\u0000«~ï\u009eUØ\u0018Ãó\u0013öD\u001aá\u0019Ûò\u000e£|a0.%fã\u000f\u0092kíÌ\u001f>ë\n\u001b W~\u0018:r\u009anW3ø~\u000f\u0087Yq\u001clÀ¯txÛú\u0007Ël\u007fb¤\u0000mÊÓK\u001e¡ò9(î¼%\u0012µé¡<»S\u0003â©\u0083\u0005\u0091Á\u0090åá÷BÌk\u0012\u0006)kªObðï¯=u\u0091 Áº\u0010G4ò\u0010\u0007ÉÄÉ\u008b\u0094GV0%\u0094;\u001f\u0092i\u0015\n'5mÔ³oüé×\u001c\u0014Q\u009aÅß\u0095sÒHÓµÍÎ\u009cqæCÐÅÚ÷\u0014\u00927ÞA\u0088ë\u0087\u008b\u001eÑ\u0092P-\u008c\u0087</c\u008eK\u0088m¿xÛ\u0082pÀ*¯oõ°MXCËO3\u0003¢ç.\u0091\u0090\u000e;0\u00068\u001e-ÝöóY\u0003nbõ/2¢§&ðKÊ9.¹ê\u0012×µFq¿\u0016jÞòA\u0094»\u0088<\\5V\u008döoÊ|º\u0090O k¥òjN«\u009aql\u0087\\ÿO\u0081\u008eG7y\u009f\ri¦Øa,\u008dÇyÄîK\u00ad\u0086ë[I\u0005 "
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
                     wNQMp = var8;
                     GEMJy = new Integer[56];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "ÌÉ\u0093Ò;i¦ß\u0019¼§&8õÙµ";
                  var7 = "ÌÉ\u0093Ò;i¦ß\u0019¼§&8õÙµ".length();
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
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bZ.yIQrZ J
      // 03: ldc2_w 31919820514048
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/bZ.OK ()Lnet/minecraft/class_1309;
      // 0f: astore 5
      // 11: istore 4
      // 13: aload 5
      // 15: iload 4
      // 17: ifne 35
      // 1a: ifnull 31
      // 1d: goto 24
      // 20: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 0
      // 25: aload 5
      // 27: putfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 2a: goto 31
      // 2d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: aload 0
      // 32: getfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 35: ifnonnull 39
      // 38: return
      // 39: getstatic sixtwo/mG.QHTxQ Lsixtwo/mG;
      // 3c: ldc_w 0.3
      // 3f: aload 0
      // 40: getfield sixtwo/bZ.gILqY Lsixtwo/rk;
      // 43: invokevirtual sixtwo/rk.dhj ()F
      // 46: fmul
      // 47: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 4a: astore 6
      // 4c: aload 1
      // 4d: aload 0
      // 4e: getfield sixtwo/bZ.toIeR F
      // 51: ldc_w 5.0
      // 54: fsub
      // 55: aload 0
      // 56: getfield sixtwo/bZ.QWaAn F
      // 59: ldc_w 5.0
      // 5c: fsub
      // 5d: aload 0
      // 5e: getfield sixtwo/bZ.jTsqG F
      // 61: ldc_w 10.0
      // 64: fadd
      // 65: aload 0
      // 66: getfield sixtwo/bZ.Xtjvx F
      // 69: ldc_w 10.0
      // 6c: fadd
      // 6d: ldc_w 15.0
      // 70: ldc_w 6.0
      // 73: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 76: aload 6
      // 78: invokevirtual sixtwo/lC.ccY (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 7b: aload 1
      // 7c: aload 0
      // 7d: getfield sixtwo/bZ.toIeR F
      // 80: aload 0
      // 81: getfield sixtwo/bZ.QWaAn F
      // 84: aload 0
      // 85: getfield sixtwo/bZ.jTsqG F
      // 88: aload 0
      // 89: getfield sixtwo/bZ.Xtjvx F
      // 8c: aload 0
      // 8d: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 90: invokevirtual sixtwo/rk.dhj ()F
      // 93: aload 0
      // 94: getfield sixtwo/bZ.gILqY Lsixtwo/rk;
      // 97: invokevirtual sixtwo/rk.dhj ()F
      // 9a: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 9d: aload 0
      // 9e: aload 1
      // 9f: invokevirtual sixtwo/bZ.OJ (Lsixtwo/lC;)V
      // a2: aload 0
      // a3: aload 1
      // a4: invokevirtual sixtwo/bZ.OG (Lsixtwo/lC;)V
      // a7: aload 0
      // a8: aload 1
      // a9: invokevirtual sixtwo/bZ.OH (Lsixtwo/lC;)V
      // ac: aload 0
      // ad: aload 1
      // ae: invokevirtual sixtwo/bZ.OI (Lsixtwo/lC;)V
      // b1: return
   }

   @Override
   public void LX(lC var1) {
      super.LX(var1);
      this.jTsqG = 103.0F;
      this.Xtjvx = 31.0F;
   }

   private static int ON(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = OM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private class_1309 OK() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bZ.yIQrZ J
      // 003: ldc2_w 117149597833944
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ca.OY ()Z
      // 00b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 00e: ldc_w sixtwo/fg
      // 011: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 014: checkcast sixtwo/fg
      // 017: astore 4
      // 019: istore 3
      // 01a: aload 4
      // 01c: iload 3
      // 01d: ifeq 05a
      // 020: invokevirtual sixtwo/fg.bag ()Z
      // 023: ifeq 051
      // 026: goto 02d
      // 029: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02c: athrow
      // 02d: aload 4
      // 02f: iload 3
      // 030: ifeq 05a
      // 033: goto 03a
      // 036: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 03d: ifnull 051
      // 040: goto 047
      // 043: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 046: athrow
      // 047: aload 4
      // 049: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 04c: areturn
      // 04d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 050: athrow
      // 051: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 054: ldc_w sixtwo/fr
      // 057: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 05a: checkcast sixtwo/fr
      // 05d: astore 5
      // 05f: aload 5
      // 061: invokevirtual sixtwo/fr.aOQ ()Lnet/minecraft/class_1309;
      // 064: astore 6
      // 066: aload 5
      // 068: iload 3
      // 069: ifeq 09c
      // 06c: invokevirtual sixtwo/fr.bag ()Z
      // 06f: ifeq 093
      // 072: goto 079
      // 075: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: aload 6
      // 07b: iload 3
      // 07c: ifeq 092
      // 07f: goto 086
      // 082: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 085: athrow
      // 086: ifnull 093
      // 089: goto 090
      // 08c: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08f: athrow
      // 090: aload 6
      // 092: areturn
      // 093: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 096: ldc_w sixtwo/eP
      // 099: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 09c: checkcast sixtwo/eP
      // 09f: astore 7
      // 0a1: aload 7
      // 0a3: invokevirtual sixtwo/eP.aBS ()Lnet/minecraft/class_1309;
      // 0a6: astore 6
      // 0a8: aload 7
      // 0aa: invokevirtual sixtwo/eP.bag ()Z
      // 0ad: iload 3
      // 0ae: ifeq 0dc
      // 0b1: ifeq 0d5
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: aload 6
      // 0bd: iload 3
      // 0be: ifeq 0d4
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: ifnull 0d5
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: aload 6
      // 0d4: areturn
      // 0d5: aload 0
      // 0d6: getfield sixtwo/bZ.NCHJZ Lsixtwo/cJ;
      // 0d9: invokevirtual sixtwo/cJ.WF ()Z
      // 0dc: iload 3
      // 0dd: ifeq 123
      // 0e0: ifeq 10f
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e9: athrow
      // 0ea: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0ed: getfield net/minecraft/class_310.field_1692 Lnet/minecraft/class_1297;
      // 0f0: astore 9
      // 0f2: aload 9
      // 0f4: instanceof net/minecraft/class_1309
      // 0f7: iload 3
      // 0f8: ifeq 123
      // 0fb: ifeq 10f
      // 0fe: goto 105
      // 101: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: aload 9
      // 107: checkcast net/minecraft/class_1309
      // 10a: astore 8
      // 10c: aload 8
      // 10e: areturn
      // 10f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 112: iload 3
      // 113: ifeq 129
      // 116: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 119: instanceof net/minecraft/class_408
      // 11c: goto 123
      // 11f: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 122: athrow
      // 123: ifeq 12d
      // 126: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 129: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12c: areturn
      // 12d: aconst_null
      // 12e: areturn
   }

   @Override
   public boolean Om() {
      long var1 = yIQrZ ^ 33580186101290L;

      try {
         if (this.OK() != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw OL(var3);
      }

      return false;
   }

   private static MatchException OL(MatchException var0) {
      return var0;
   }

   private void OJ(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bZ.yIQrZ J
      // 003: ldc2_w 136029979327775
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OX ()Z
      // 00b: istore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/bZ.pHErH Lsixtwo/rk;
      // 011: aload 0
      // 012: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 015: invokevirtual sixtwo/rk.dhj ()F
      // 018: aload 0
      // 019: getfield sixtwo/bZ.KgDVz Lsixtwo/rk;
      // 01c: invokevirtual sixtwo/rk.dhj ()F
      // 01f: fmul
      // 020: fconst_1
      // 021: fcmpl
      // 022: iload 4
      // 024: ifne 032
      // 027: iflt 035
      // 02a: goto 031
      // 02d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: bipush 1
      // 032: goto 036
      // 035: bipush 0
      // 036: invokevirtual sixtwo/rk.dhc (Z)V
      // 039: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 03c: astore 5
      // 03e: aload 0
      // 03f: getfield sixtwo/bZ.kojYh Lsixtwo/cu;
      // 042: invokevirtual sixtwo/cu.SZ ()Z
      // 045: ifne 32b
      // 048: invokestatic sixtwo/jF.bHw ()[F
      // 04b: bipush 3
      // 04c: faload
      // 04d: fstore 6
      // 04f: invokestatic sixtwo/fX.aYf ()Z
      // 052: iload 4
      // 054: ifne 07b
      // 057: ifne 07a
      // 05a: goto 061
      // 05d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: invokestatic sixtwo/fX.aYe ()Z
      // 064: iload 4
      // 066: ifne 07b
      // 069: goto 070
      // 06c: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06f: athrow
      // 070: ifeq 07e
      // 073: goto 07a
      // 076: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 079: athrow
      // 07a: bipush 1
      // 07b: goto 07f
      // 07e: bipush 0
      // 07f: istore 7
      // 081: aload 0
      // 082: getfield sixtwo/bZ.cCJxB Lsixtwo/cu;
      // 085: invokevirtual sixtwo/cu.SZ ()Z
      // 088: istore 8
      // 08a: aload 0
      // 08b: getfield sixtwo/bZ.mBhYD Lsixtwo/cu;
      // 08e: invokevirtual sixtwo/cu.SZ ()Z
      // 091: istore 9
      // 093: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 096: ldc_w 6.0
      // 099: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 09c: astore 10
      // 09e: aload 5
      // 0a0: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 0a3: ldc_w 255.0
      // 0a6: invokestatic sixtwo/fX.aYh ()F
      // 0a9: fmul
      // 0aa: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0ad: astore 11
      // 0af: fconst_0
      // 0b0: fstore 12
      // 0b2: bipush 0
      // 0b3: istore 13
      // 0b5: aload 0
      // 0b6: getfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 0b9: invokestatic sixtwo/oP.cJr (Lnet/minecraft/class_1309;)Lsixtwo/oQ;
      // 0bc: invokevirtual sixtwo/oQ.cJE ()Ljava/util/List;
      // 0bf: astore 14
      // 0c1: aload 14
      // 0c3: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0c8: astore 15
      // 0ca: aload 15
      // 0cc: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0d1: ifeq 129
      // 0d4: aload 15
      // 0d6: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0db: checkcast net/minecraft/class_1799
      // 0de: astore 16
      // 0e0: iload 4
      // 0e2: ifne 133
      // 0e5: aload 16
      // 0e7: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 0ea: ifeq 100
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: iload 4
      // 0f6: ifeq 0ca
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: fload 12
      // 102: iload 9
      // 104: ifeq 111
      // 107: ldc_w 11.0
      // 10a: goto 11f
      // 10d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 110: athrow
      // 111: ldc_w 5.0
      // 114: aload 10
      // 116: aload 16
      // 118: invokestatic sixtwo/jc.bzf (Lnet/minecraft/class_1799;)Ljava/lang/String;
      // 11b: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 11e: fadd
      // 11f: fconst_2
      // 120: fadd
      // 121: fadd
      // 122: fstore 12
      // 124: iload 4
      // 126: ifeq 0ca
      // 129: aload 0
      // 12a: getfield sixtwo/bZ.jLjXP Lsixtwo/rk;
      // 12d: fload 12
      // 12f: invokevirtual sixtwo/rk.dhd (F)F
      // 132: pop
      // 133: aload 0
      // 134: getfield sixtwo/bZ.jLjXP Lsixtwo/rk;
      // 137: invokevirtual sixtwo/rk.dhj ()F
      // 13a: fneg
      // 13b: fconst_2
      // 13c: fdiv
      // 13d: fstore 15
      // 13f: aload 14
      // 141: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 146: astore 16
      // 148: aload 16
      // 14a: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 14f: ifeq 32b
      // 152: aload 16
      // 154: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 159: checkcast net/minecraft/class_1799
      // 15c: astore 17
      // 15e: aload 0
      // 15f: getfield sixtwo/bZ.CCbky [Lsixtwo/rk;
      // 162: iload 13
      // 164: aaload
      // 165: aload 17
      // 167: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 16a: iload 4
      // 16c: ifne 17a
      // 16f: ifne 17d
      // 172: goto 179
      // 175: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 178: athrow
      // 179: bipush 1
      // 17a: goto 17e
      // 17d: bipush 0
      // 17e: invokevirtual sixtwo/rk.dhc (Z)V
      // 181: aload 0
      // 182: getfield sixtwo/bZ.pHErH Lsixtwo/rk;
      // 185: invokevirtual sixtwo/rk.dhj ()F
      // 188: aload 0
      // 189: getfield sixtwo/bZ.CCbky [Lsixtwo/rk;
      // 18c: iload 13
      // 18e: aaload
      // 18f: invokevirtual sixtwo/rk.dhj ()F
      // 192: fmul
      // 193: fstore 18
      // 195: aload 17
      // 197: invokestatic sixtwo/jc.bzf (Lnet/minecraft/class_1799;)Ljava/lang/String;
      // 19a: astore 19
      // 19c: iload 9
      // 19e: ifeq 1ab
      // 1a1: ldc_w 11.0
      // 1a4: goto 1b6
      // 1a7: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1aa: athrow
      // 1ab: ldc_w 5.0
      // 1ae: aload 10
      // 1b0: aload 19
      // 1b2: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 1b5: fadd
      // 1b6: fstore 20
      // 1b8: iload 9
      // 1ba: ifeq 1c7
      // 1bd: ldc_w 11.0
      // 1c0: goto 1ca
      // 1c3: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c6: athrow
      // 1c7: ldc_w 9.0
      // 1ca: fstore 21
      // 1cc: aload 0
      // 1cd: getfield sixtwo/bZ.toIeR F
      // 1d0: aload 0
      // 1d1: getfield sixtwo/bZ.jTsqG F
      // 1d4: fconst_2
      // 1d5: fdiv
      // 1d6: fadd
      // 1d7: fload 15
      // 1d9: fadd
      // 1da: fstore 22
      // 1dc: aload 0
      // 1dd: getfield sixtwo/bZ.QWaAn F
      // 1e0: aload 0
      // 1e1: getfield sixtwo/bZ.Xtjvx F
      // 1e4: fadd
      // 1e5: ldc_w 4.0
      // 1e8: fsub
      // 1e9: ldc_w 6.0
      // 1ec: fload 18
      // 1ee: fmul
      // 1ef: fadd
      // 1f0: fstore 23
      // 1f2: iload 7
      // 1f4: iload 4
      // 1f6: ifne 281
      // 1f9: ifeq 239
      // 1fc: goto 203
      // 1ff: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 202: athrow
      // 203: fconst_1
      // 204: fconst_1
      // 205: fconst_1
      // 206: fload 6
      // 208: fload 18
      // 20a: fmul
      // 20b: invokestatic sixtwo/jF.bHz (FFFF)V
      // 20e: aload 1
      // 20f: fload 22
      // 211: fload 23
      // 213: fload 20
      // 215: fload 21
      // 217: ldc_w 5.0
      // 21a: ldc_w 1.5
      // 21d: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 220: aload 0
      // 221: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 224: invokevirtual sixtwo/rk.dhj ()F
      // 227: invokevirtual sixtwo/lC.cej (FFFFFLsixtwo/ld;F)V
      // 22a: fconst_1
      // 22b: fconst_1
      // 22c: fconst_1
      // 22d: fload 6
      // 22f: invokestatic sixtwo/jF.bHz (FFFF)V
      // 232: goto 239
      // 235: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 238: athrow
      // 239: aload 1
      // 23a: fload 22
      // 23c: fload 23
      // 23e: fload 20
      // 240: fload 21
      // 242: ldc_w 1.5
      // 245: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 248: aload 11
      // 24a: aload 11
      // 24c: invokevirtual sixtwo/mG.cou ()F
      // 24f: fload 18
      // 251: fmul
      // 252: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 255: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 258: aload 1
      // 259: fload 22
      // 25b: fload 23
      // 25d: fload 20
      // 25f: fload 21
      // 261: invokestatic sixtwo/jG.bHK (Lsixtwo/lC;FFFF)V
      // 264: fconst_1
      // 265: iload 4
      // 267: ifne 285
      // 26a: fconst_1
      // 26b: fconst_1
      // 26c: fload 6
      // 26e: fload 18
      // 270: fmul
      // 271: ldc_w 0.5
      // 274: fmul
      // 275: invokestatic sixtwo/jF.bHz (FFFF)V
      // 278: iload 8
      // 27a: goto 281
      // 27d: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 280: athrow
      // 281: ifeq 288
      // 284: fconst_1
      // 285: goto 28b
      // 288: ldc_w 0.7
      // 28b: fstore 24
      // 28d: fload 22
      // 28f: ldc_w 16.0
      // 292: fload 24
      // 294: fmul
      // 295: fload 20
      // 297: invokestatic sixtwo/jf.bAH (FF)F
      // 29a: fadd
      // 29b: fstore 25
      // 29d: fload 23
      // 29f: ldc_w 16.0
      // 2a2: fload 24
      // 2a4: fmul
      // 2a5: fload 21
      // 2a7: invokestatic sixtwo/jf.bAH (FF)F
      // 2aa: fadd
      // 2ab: fstore 26
      // 2ad: aload 1
      // 2ae: aload 17
      // 2b0: fload 25
      // 2b2: fload 26
      // 2b4: fload 24
      // 2b6: invokevirtual sixtwo/lC.cea (Lnet/minecraft/class_1799;FFF)Lsixtwo/jv;
      // 2b9: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 2bc: pop
      // 2bd: fconst_1
      // 2be: fconst_1
      // 2bf: fconst_1
      // 2c0: fload 6
      // 2c2: invokestatic sixtwo/jF.bHz (FFFF)V
      // 2c5: invokestatic sixtwo/jG.bHN ()V
      // 2c8: iload 4
      // 2ca: ifne 326
      // 2cd: iload 8
      // 2cf: ifeq 317
      // 2d2: goto 2d9
      // 2d5: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d8: athrow
      // 2d9: aload 5
      // 2db: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 2de: ldc_w 255.0
      // 2e1: fload 18
      // 2e3: fmul
      // 2e4: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 2e7: astore 27
      // 2e9: fload 22
      // 2eb: aload 10
      // 2ed: aload 19
      // 2ef: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 2f2: fload 20
      // 2f4: invokestatic sixtwo/jf.bAH (FF)F
      // 2f7: fadd
      // 2f8: fstore 28
      // 2fa: fload 23
      // 2fc: aload 10
      // 2fe: invokevirtual sixtwo/lq.cat ()F
      // 301: fload 21
      // 303: invokestatic sixtwo/jf.bAH (FF)F
      // 306: fadd
      // 307: fstore 29
      // 309: aload 1
      // 30a: aload 10
      // 30c: aload 19
      // 30e: fload 28
      // 310: fload 29
      // 312: aload 27
      // 314: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 317: fload 15
      // 319: fload 20
      // 31b: fconst_2
      // 31c: fadd
      // 31d: fload 18
      // 31f: fmul
      // 320: fadd
      // 321: fstore 15
      // 323: iinc 13 1
      // 326: iload 4
      // 328: ifeq 148
      // 32b: return
   }

   private void OG(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bZ.yIQrZ J
      // 03: ldc2_w 75197731000033
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0e: ldc_w 255.0
      // 11: aload 0
      // 12: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 15: invokevirtual sixtwo/rk.dhj ()F
      // 18: fmul
      // 19: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1c: astore 5
      // 1e: istore 4
      // 20: aload 0
      // 21: getfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 24: astore 7
      // 26: aload 7
      // 28: iload 4
      // 2a: ifne 43
      // 2d: instanceof net/minecraft/class_742
      // 30: ifeq 6e
      // 33: goto 3a
      // 36: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 7
      // 3c: goto 43
      // 3f: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: checkcast net/minecraft/class_742
      // 46: astore 6
      // 48: aload 1
      // 49: aload 6
      // 4b: aload 0
      // 4c: getfield sixtwo/bZ.toIeR F
      // 4f: ldc_w 6.0
      // 52: fadd
      // 53: aload 0
      // 54: getfield sixtwo/bZ.QWaAn F
      // 57: ldc_w 6.0
      // 5a: fadd
      // 5b: ldc_w 19.0
      // 5e: ldc_w 3.0
      // 61: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 64: aload 5
      // 66: invokevirtual sixtwo/lC.ccZ (Lnet/minecraft/class_742;FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 69: iload 4
      // 6b: ifeq 94
      // 6e: aload 1
      // 6f: aload 0
      // 70: getfield sixtwo/bZ.toIeR F
      // 73: ldc_w 6.0
      // 76: fadd
      // 77: aload 0
      // 78: getfield sixtwo/bZ.QWaAn F
      // 7b: ldc_w 6.0
      // 7e: fadd
      // 7f: ldc_w 19.0
      // 82: ldc_w 3.0
      // 85: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 88: aload 5
      // 8a: invokevirtual sixtwo/lC.cdb (FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 8d: goto 94
      // 90: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: return
   }

   private void OH(lC var1) {
      ii var2 = rD.dlM();
      float var3 = this.toIeR + 30.0F;
      float var4 = this.QWaAn + this.Xtjvx - 12.0F;
      float var5 = 65.0F;
      float var6 = 3.0F;
      var1.cdg(var3, var4, var5, var6, ld.all(0.7F), mG.QHTxQ.cob(0.3F));
      float var7 = this.qcZhQ.method_6032();
      float var8 = this.qcZhQ.method_6067();
      float var9 = this.qcZhQ.method_6063();
      float var10 = (var7 + var8) / var9;
      float var11 = var8 / Math.max(20.0F, var8);
      this.sjeIR.dhd(var10);
      this.dfbld.dhd(var11);
      this.PquMu.dhd(var7 + var8);
      float var12 = class_3532.method_15363(this.sjeIR.dhj(), 0.0F, 1.0F);
      var1.cdg(var3, var4, var5 * var12, var6, ld.all(0.7F), var2.bjf());
      float var13 = class_3532.method_15363(this.dfbld.dhj(), 0.0F, 1.0F);
      var1.cdg(var3 + var5 - var5 * var13, var4, var5 * var13, var6, ld.all(0.7F), mG.cnP(255.0F, 220.0F, 81.0F));
   }

   private static int OM(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 6639;
      if (GEMJy[var3] == null) {
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
         long var5 = wNQMp[var3];
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
         Object[] var9 = (Object[])BwsEB.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BwsEB.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bZ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         GEMJy[var3] = var15;
      }

      return GEMJy[var3];
   }

   private void OI(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bZ.yIQrZ J
      // 003: ldc2_w 89881241351348
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OX ()Z
      // 00b: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 00e: ldc_w 7.0
      // 011: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 014: astore 5
      // 016: istore 4
      // 018: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 01b: ldc_w 6.0
      // 01e: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 021: astore 6
      // 023: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 026: astore 7
      // 028: aload 7
      // 02a: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 02d: ldc_w 255.0
      // 030: aload 0
      // 031: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 034: invokevirtual sixtwo/rk.dhj ()F
      // 037: fmul
      // 038: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 03b: astore 8
      // 03d: aload 7
      // 03f: invokevirtual sixtwo/ii.bjf ()Lsixtwo/mG;
      // 042: ldc_w 255.0
      // 045: aload 0
      // 046: getfield sixtwo/bZ.ormBS Lsixtwo/rk;
      // 049: invokevirtual sixtwo/rk.dhj ()F
      // 04c: fmul
      // 04d: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 050: astore 9
      // 052: aload 0
      // 053: getfield sixtwo/bZ.PquMu Lsixtwo/rk;
      // 056: invokevirtual sixtwo/rk.dhj ()F
      // 059: iload 4
      // 05b: ifne 07d
      // 05e: ldc_w 1000.0
      // 061: fcmpl
      // 062: ifne 076
      // 065: goto 06c
      // 068: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06b: athrow
      // 06c: ldc_w "?"
      // 06f: goto 081
      // 072: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: getfield sixtwo/bZ.PquMu Lsixtwo/rk;
      // 07a: invokevirtual sixtwo/rk.dhj ()F
      // 07d: f2d
      // 07e: invokestatic sixtwo/jf.bAM (D)Ljava/lang/String;
      // 081: astore 10
      // 083: aload 0
      // 084: getfield sixtwo/bZ.toIeR F
      // 087: ldc_w 30.0
      // 08a: fadd
      // 08b: fstore 11
      // 08d: aload 0
      // 08e: getfield sixtwo/bZ.QWaAn F
      // 091: ldc_w 9.0
      // 094: fadd
      // 095: fstore 12
      // 097: aload 0
      // 098: getfield sixtwo/bZ.jTsqG F
      // 09b: ldc_w 40.0
      // 09e: fsub
      // 09f: aload 6
      // 0a1: aload 10
      // 0a3: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0a6: fsub
      // 0a7: fstore 13
      // 0a9: aload 0
      // 0aa: getfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 0ad: invokevirtual net/minecraft/class_1309.method_5477 ()Lnet/minecraft/class_2561;
      // 0b0: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 0b5: astore 14
      // 0b7: aload 0
      // 0b8: iload 4
      // 0ba: ifne 0f8
      // 0bd: getfield sixtwo/bZ.qcZhQ Lnet/minecraft/class_1309;
      // 0c0: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0c3: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0c6: if_acmpne 0e3
      // 0c9: goto 0d0
      // 0cc: invokestatic sixtwo/bZ.OL (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0d3: ldc_w sixtwo/fS
      // 0d6: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 0d9: checkcast sixtwo/fS
      // 0dc: aload 14
      // 0de: invokevirtual sixtwo/fS.aWP (Ljava/lang/String;)Ljava/lang/String;
      // 0e1: astore 14
      // 0e3: aload 1
      // 0e4: aload 5
      // 0e6: aload 14
      // 0e8: fload 11
      // 0ea: fload 12
      // 0ec: aload 8
      // 0ee: ldc_w 0.7
      // 0f1: fconst_1
      // 0f2: fload 13
      // 0f4: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 0f7: aload 0
      // 0f8: getfield sixtwo/bZ.toIeR F
      // 0fb: aload 0
      // 0fc: getfield sixtwo/bZ.jTsqG F
      // 0ff: fadd
      // 100: ldc_w 7.0
      // 103: fsub
      // 104: fstore 15
      // 106: aload 0
      // 107: getfield sixtwo/bZ.QWaAn F
      // 10a: ldc_w 10.0
      // 10d: fadd
      // 10e: fstore 16
      // 110: aload 1
      // 111: aload 6
      // 113: aload 10
      // 115: fload 15
      // 117: fload 16
      // 119: aload 9
      // 11b: invokevirtual sixtwo/lC.ceP (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 11e: return
   }

   private static CallSite OO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ON".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bZ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
