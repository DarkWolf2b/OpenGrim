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
import media.IMediaSession;
import media.MediaInfo;

public class cc extends cr {
   private final ct poEJg;
   private final cu cdPcl;
   private final cu DnfPC;
   private final rk[] nKTkB;
   private final float[] ywaEw;
   private final mT Uslxa;
   private final ri tYJbR;
   private final ri wNrIZ;
   private final rk LzQrF;
   private final rk QpQRV;
   private final rk debmQ;
   private final rk IbiJA;
   private final rk zzuzN;
   private static final long axaUP = gb.aYR(5575654254560810711L, 2251488754095607058L, MethodHandles.lookup().lookupClass()).a(201337464245299L);
   private static final String[] wtTpp;
   private static final String[] vRGNc;
   private static final Map nvHhc = new HashMap(13);
   private static final long[] dunGn;
   private static final Integer[] NQYLH;
   private static final Map rhxtg;
   private static final long QlUSv;

   private static Object PD(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = PC(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cc() {
      long var1 = axaUP ^ 79369443946215L;
      super(
         new int[]{
            PH<"l">(7657, 523372729067269685L ^ var1),
            PH<"l">(19555, 8666856377869877161L ^ var1),
            PH<"l">(10145, 2545981195913253992L ^ var1),
            PH<"l">(26710, 2057377911143242675L ^ var1),
            PH<"l">(18870, 45839649366358627L ^ var1)
         },
         lf.MZXpZ
      );
      boolean var10000 = ca.OX();
      int[] var10005 = new int[PH<"l">(12172, 43286016427121763L ^ var1)];
      var10005[0] = PH<"l">(1992, 5445684010929353770L ^ var1);
      var10005[1] = PH<"l">(17592, 3399184640835467093L ^ var1);
      var10005[2] = PH<"l">(13380, 2279357867901503361L ^ var1);
      var10005[3] = PH<"l">(18365, 678010730056365163L ^ var1);
      var10005[4] = PH<"l">(26133, 2952055509344949718L ^ var1);
      var10005[5] = PH<"l">(8647, 9079682997994279440L ^ var1);
      var10005[PH<"l">(13599, 6375244957692446400L ^ var1)] = PH<"l">(31573, 1539935058596038814L ^ var1);
      var10005[PH<"l">(26194, 5303113973994165632L ^ var1)] = PH<"l">(16470, 3681064287109886865L ^ var1);
      var10005[PH<"l">(14469, 7231544645594565483L ^ var1)] = PH<"l">(2901, 5874183734923360405L ^ var1);
      var10005[PH<"l">(29670, 3473159124690042887L ^ var1)] = PH<"l">(678, 5591568605390762367L ^ var1);
      var10005[PH<"l">(29721, 4778506050966194139L ^ var1)] = PH<"l">(30040, 552506579501778612L ^ var1);
      var10005[PH<"l">(13901, 4083376925105800621L ^ var1)] = PH<"l">(14655, 1213023159300082411L ^ var1);
      var10005[PH<"l">(15394, 5619254275300970490L ^ var1)] = PH<"l">(2901, 5874183734923360405L ^ var1);
      var10005[PH<"l">(31788, 1440348340236128252L ^ var1)] = PH<"l">(29898, 204209343254202129L ^ var1);
      var10005[PH<"l">(14582, 7700548515549137694L ^ var1)] = PH<"l">(10598, 1667854689107860149L ^ var1);
      this.poEJg = new ct(this, mr.clS(var10005));
      ct var10004 = this.poEJg;
      var10005 = new int[PH<"l">(18904, 6678983120872880700L ^ var1)];
      var10005[0] = PH<"l">(5237, 5672760781280503736L ^ var1);
      var10005[1] = PH<"l">(22068, 3587181706040518126L ^ var1);
      var10005[2] = PH<"l">(18992, 5031017963116182012L ^ var1);
      var10005[3] = PH<"l">(12827, 4727409250341798357L ^ var1);
      var10005[4] = PH<"l">(14371, 6332928503281830885L ^ var1);
      var10005[5] = PH<"l">(23535, 2489473554616461358L ^ var1);
      this.cdPcl = new cu(var10004, mr.clS(var10005));
      var10004 = this.poEJg;
      var10005 = new int[PH<"l">(18904, 6678983120872880700L ^ var1)];
      var10005[0] = PH<"l">(18210, 3681391095357781185L ^ var1);
      var10005[1] = PH<"l">(10312, 1112936415909075852L ^ var1);
      var10005[2] = PH<"l">(16438, 5740244881299387385L ^ var1);
      var10005[3] = PH<"l">(14609, 7667532349933046522L ^ var1);
      var10005[4] = PH<"l">(27836, 8884009104855375701L ^ var1);
      var10005[5] = PH<"l">(12827, 4727409250341798357L ^ var1);
      this.DnfPC = new cu(var10004, mr.clS(var10005)).SY();
      this.nKTkB = new rk[PH<"l">(18904, 6678983120872880700L ^ var1)];
      this.ywaEw = new float[PH<"l">(18904, 6678983120872880700L ^ var1)];
      this.Uslxa = mT.cpz();
      boolean var3 = var10000;
      this.tYJbR = new ri(PH<"l">(15293, 2144076369961109603L ^ var1));
      this.wNrIZ = new ri(PH<"l">(9998, 1032491919921272006L ^ var1));
      this.LzQrF = new rk(PH<"l">(3475, 11306865289690745L ^ var1)).dhs(rj.NJlxm);
      this.QpQRV = new rk(PH<"l">(23819, 4943501133558427354L ^ var1)).dhs(rj.UPXqT);
      this.debmQ = new rk(PH<"l">(23819, 4943501133558427354L ^ var1)).dhs(rj.UPXqT);
      this.IbiJA = new rk(PH<"l">(23819, 4943501133558427354L ^ var1)).dhs(rj.UPXqT);
      this.zzuzN = new rk(PH<"l">(21582, 4349953104927565715L ^ var1)).dhs(rj.Xmkbr);
      int var4 = 0;

      while (var4 < this.nKTkB.length) {
         this.nKTkB[var4] = new rk(PH<"l">(9998, 1032491919921272006L ^ var1)).dhs(rj.Xmkbr);
         this.nKTkB[var4].dhf(0.35F);
         this.ywaEw[var4] = 0.35F;
         var4++;
         if (var3) {
            break;
         }
      }
   }

   static {
      long var16 = axaUP ^ 59834845167809L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[2];
      int var23 = 0;
      String var22 = "6¼=Ä¥ÞªË\u0088ñ59C¦û¹¾\u001cD\u0098çøk-\u008c+\u0005\u00881\u0086¬ó±$ê{\u0017Qy½ ßv\u0089*}âVnLó\u0016©\u0016,©ý,9OH\u0093\u0006ï\u008c#Õ\u0082ÆÇLi7";
      int var24 = "6¼=Ä¥ÞªË\u0088ñ59C¦û¹¾\u001cD\u0098çøk-\u008c+\u0005\u00881\u0086¬ó±$ê{\u0017Qy½ ßv\u0089*}âVnLó\u0016©\u0016,©ý,9OH\u0093\u0006ï\u008c#Õ\u0082ÆÇLi7"
         .length();
      char var21 = '(';
      int var20 = -1;

      while (true) {
         byte[] var26 = var18.doFinal(var22.substring(++var20, var20 + var21).getBytes("ISO-8859-1"));
         String var37 = PB(var26).intern();
         int var10001 = -1;
         var25[var23++] = var37;
         if ((var20 += var21) >= var24) {
            wtTpp = var25;
            vRGNc = new String[2];
            rhxtg = new HashMap(13);
            Cipher var5;
            var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var6 = 1; var6 < 8; var6++) {
               var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var11 = new long[46];
            int var8 = 0;
            String var9 = "rFK\u001dâ¿\u009b\u009b¸Èñ¤\u0015!\t\u007fq08b\u0016\u008bãÖØ\u001aQËb¾?W\u008cÉþä{\u008d0Æ.UmÅx¸ÍEö\u0005V+¦\u001a§@gé\u0007,¹4ìúþ±û³Gd\u001e9*D¨pþqV·ë_{v0\u00043:\u0093·<\u0081\u0093_©cã#×^7_ZQ\u0086\u009923 Iýf\u0083?\u0005\u001c^\u0003t\u0006Û}&0X¤l\u0010¾Öl«\u0080ò\u0014x_õ«\u0092JÎ\u0081gPO8\u0007j'n¹ìr\u0012\u0007à\u0004\u0096~Y¡9\u000eü@\u001aP³Å<<\u001b¼qÐ<à4\u001eÖ\u0005£Ä\u008c¡e\u009c5·ü2\u000evã\"\u0086x0ôüh±lÄ\u0087Ïï\u0011åÎ¢Òc¹\u001d¶Î\t3&$\u001f¨§´Z|¢_Ý\u0083\u0003®\u001aÀ\u000f\u008bQ·ºGù\u009dÿE#\u008fÖ\u0005ûÖ®\ró\u001b½¥Ô¥:*L+Ê%ëñ\u007fëÑÔ@{Î,ÞÐ^Æì\u0003\u0089Ã\u008b/Óð) Ð\u000es\u0011)ä'\u008bswð\u000bi\rPP(Â«£\u0081\u0084\u0015í÷\u0001§\u009dNüU ;]2^_\u009cýÜüã\u009e\u0018\u0019Ã[\u001c\u0006\u001d¹\u009eëÇk5ù\u008d\u009cþ:t";
            int var10 = "rFK\u001dâ¿\u009b\u009b¸Èñ¤\u0015!\t\u007fq08b\u0016\u008bãÖØ\u001aQËb¾?W\u008cÉþä{\u008d0Æ.UmÅx¸ÍEö\u0005V+¦\u001a§@gé\u0007,¹4ìúþ±û³Gd\u001e9*D¨pþqV·ë_{v0\u00043:\u0093·<\u0081\u0093_©cã#×^7_ZQ\u0086\u009923 Iýf\u0083?\u0005\u001c^\u0003t\u0006Û}&0X¤l\u0010¾Öl«\u0080ò\u0014x_õ«\u0092JÎ\u0081gPO8\u0007j'n¹ìr\u0012\u0007à\u0004\u0096~Y¡9\u000eü@\u001aP³Å<<\u001b¼qÐ<à4\u001eÖ\u0005£Ä\u008c¡e\u009c5·ü2\u000evã\"\u0086x0ôüh±lÄ\u0087Ïï\u0011åÎ¢Òc¹\u001d¶Î\t3&$\u001f¨§´Z|¢_Ý\u0083\u0003®\u001aÀ\u000f\u008bQ·ºGù\u009dÿE#\u008fÖ\u0005ûÖ®\ró\u001b½¥Ô¥:*L+Ê%ëñ\u007fëÑÔ@{Î,ÞÐ^Æì\u0003\u0089Ã\u008b/Óð) Ð\u000es\u0011)ä'\u008bswð\u000bi\rPP(Â«£\u0081\u0084\u0015í÷\u0001§\u009dNüU ;]2^_\u009cýÜüã\u009e\u0018\u0019Ã[\u001c\u0006\u001d¹\u009eëÇk5ù\u008d\u009cþ:t"
               .length();
            byte var7 = 0;

            label42:
            while (true) {
               var10001 = var7;
               var7 += 8;
               byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
               long[] var30 = var11;
               var10001 = var8++;
               long var40 = (var12[0] & 255L) << 56
                  | (var12[1] & 255L) << 48
                  | (var12[2] & 255L) << 40
                  | (var12[3] & 255L) << 32
                  | (var12[4] & 255L) << 24
                  | (var12[5] & 255L) << 16
                  | (var12[6] & 255L) << 8
                  | var12[7] & 255L;
               byte var45 = -1;

               while (true) {
                  long var13 = var40;
                  byte[] var15 = var5.doFinal(
                     new byte[]{
                        (byte)(var13 >>> 56),
                        (byte)(var13 >>> 48),
                        (byte)(var13 >>> 40),
                        (byte)(var13 >>> 32),
                        (byte)(var13 >>> 24),
                        (byte)(var13 >>> 16),
                        (byte)(var13 >>> 8),
                        (byte)var13
                     }
                  );
                  long var48 = (var15[0] & 255L) << 56
                     | (var15[1] & 255L) << 48
                     | (var15[2] & 255L) << 40
                     | (var15[3] & 255L) << 32
                     | (var15[4] & 255L) << 24
                     | (var15[5] & 255L) << 16
                     | (var15[6] & 255L) << 8
                     | var15[7] & 255L;
                  switch (var45) {
                     case 0:
                        var30[var10001] = var48;
                        if (var7 >= var10) {
                           dunGn = var11;
                           NQYLH = new Integer[46];
                           Cipher var0;
                           var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                           var10002 = SecretKeyFactory.getInstance("DES");
                           var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                           for (int var1 = 1; var1 < 8; var1++) {
                              var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                           }

                           var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                           long var2 = 6537864497686658242L;
                           byte[] var4 = var0.doFinal(
                              new byte[]{
                                 (byte)(var2 >>> 56),
                                 (byte)(var2 >>> 48),
                                 (byte)(var2 >>> 40),
                                 (byte)(var2 >>> 32),
                                 (byte)(var2 >>> 24),
                                 (byte)(var2 >>> 16),
                                 (byte)(var2 >>> 8),
                                 (byte)var2
                              }
                           );
                           long var43 = (var4[0] & 255L) << 56
                              | (var4[1] & 255L) << 48
                              | (var4[2] & 255L) << 40
                              | (var4[3] & 255L) << 32
                              | (var4[4] & 255L) << 24
                              | (var4[5] & 255L) << 16
                              | (var4[6] & 255L) << 8
                              | var4[7] & 255L;
                           byte var36 = -1;
                           QlUSv = var43;
                           return;
                        }
                        break;
                     default:
                        var30[var10001] = var48;
                        if (var7 < var10) {
                           continue label42;
                        }

                        var9 = "ü¿\u008a\u0090x\u0012\u008eÕÀ.¯`\u0088\u009c½\u0091";
                        var10 = "ü¿\u008a\u0090x\u0012\u008eÕÀ.¯`\u0088\u009c½\u0091".length();
                        var7 = 0;
                  }

                  byte var35 = var7;
                  var7 += 8;
                  var12 = var9.substring(var35, var7).getBytes("ISO-8859-1");
                  var30 = var11;
                  var10001 = var8++;
                  var40 = (var12[0] & 255L) << 56
                     | (var12[1] & 255L) << 48
                     | (var12[2] & 255L) << 40
                     | (var12[3] & 255L) << 32
                     | (var12[4] & 255L) << 24
                     | (var12[5] & 255L) << 16
                     | (var12[6] & 255L) << 8
                     | var12[7] & 255L;
                  var45 = 0;
               }
            }
         }

         var21 = var22.charAt(var20);
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
      // 000: getstatic sixtwo/cc.axaUP J
      // 003: ldc2_w 13073517335315
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OY ()Z
      // 00b: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 00e: astore 5
      // 010: istore 4
      // 012: aload 0
      // 013: getfield sixtwo/cc.ormBS Lsixtwo/rk;
      // 016: invokevirtual sixtwo/rk.dhj ()F
      // 019: fstore 6
      // 01b: aload 0
      // 01c: getfield sixtwo/cc.gILqY Lsixtwo/rk;
      // 01f: invokevirtual sixtwo/rk.dhj ()F
      // 022: fstore 7
      // 024: getstatic sixtwo/mG.QHTxQ Lsixtwo/mG;
      // 027: ldc_w 0.3
      // 02a: fload 7
      // 02c: fmul
      // 02d: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 030: astore 8
      // 032: aload 1
      // 033: aload 0
      // 034: getfield sixtwo/cc.toIeR F
      // 037: ldc_w 5.0
      // 03a: fsub
      // 03b: aload 0
      // 03c: getfield sixtwo/cc.QWaAn F
      // 03f: ldc_w 5.0
      // 042: fsub
      // 043: aload 0
      // 044: getfield sixtwo/cc.jTsqG F
      // 047: ldc_w 10.0
      // 04a: fadd
      // 04b: aload 0
      // 04c: getfield sixtwo/cc.Xtjvx F
      // 04f: ldc_w 10.0
      // 052: fadd
      // 053: ldc_w 15.0
      // 056: ldc_w 6.0
      // 059: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 05c: aload 8
      // 05e: invokevirtual sixtwo/lC.ccY (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 061: aload 1
      // 062: aload 0
      // 063: getfield sixtwo/cc.toIeR F
      // 066: aload 0
      // 067: getfield sixtwo/cc.QWaAn F
      // 06a: aload 0
      // 06b: getfield sixtwo/cc.jTsqG F
      // 06e: aload 0
      // 06f: getfield sixtwo/cc.Xtjvx F
      // 072: fload 6
      // 074: fload 7
      // 076: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 079: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 07c: astore 9
      // 07e: aload 9
      // 080: invokevirtual sixtwo/qO.dcK ()Lnet/minecraft/class_1044;
      // 083: iload 4
      // 085: ifeq 09e
      // 088: ifnull 0a1
      // 08b: goto 092
      // 08e: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: aload 9
      // 094: invokevirtual sixtwo/qO.dcK ()Lnet/minecraft/class_1044;
      // 097: goto 09e
      // 09a: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: goto 0b1
      // 0a1: sipush 25611
      // 0a4: ldc2_w 3310658822238917880
      // 0a7: lload 2
      // 0a8: lxor
      // 0a9: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cc.PE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ae: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // 0b1: astore 10
      // 0b3: ldc_w 26.0
      // 0b6: fstore 11
      // 0b8: aload 1
      // 0b9: aload 10
      // 0bb: aload 0
      // 0bc: getfield sixtwo/cc.toIeR F
      // 0bf: ldc_w 7.0
      // 0c2: fadd
      // 0c3: aload 0
      // 0c4: getfield sixtwo/cc.QWaAn F
      // 0c7: ldc_w 7.0
      // 0ca: fadd
      // 0cb: fload 11
      // 0cd: fload 11
      // 0cf: ldc_w 3.0
      // 0d2: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 0d5: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 0d8: invokevirtual sixtwo/lC.cef (Lnet/minecraft/class_1044;FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 0db: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 0de: ldc_w 8.0
      // 0e1: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 0e4: astore 12
      // 0e6: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 0e9: ldc_w 7.0
      // 0ec: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 0ef: astore 13
      // 0f1: aload 5
      // 0f3: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0f6: ldc_w 255.0
      // 0f9: fload 6
      // 0fb: fmul
      // 0fc: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0ff: astore 14
      // 101: aload 0
      // 102: getfield sixtwo/cc.toIeR F
      // 105: ldc_w 7.0
      // 108: fadd
      // 109: fload 11
      // 10b: fadd
      // 10c: ldc_w 7.0
      // 10f: fadd
      // 110: fstore 15
      // 112: aload 0
      // 113: getfield sixtwo/cc.QWaAn F
      // 116: ldc_w 10.0
      // 119: fadd
      // 11a: fstore 16
      // 11c: aload 9
      // 11e: iload 4
      // 120: ifeq 149
      // 123: invokevirtual sixtwo/qO.dcX ()Ljava/lang/String;
      // 126: invokevirtual java/lang/String.isBlank ()Z
      // 129: ifeq 147
      // 12c: goto 133
      // 12f: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 132: athrow
      // 133: sipush 24446
      // 136: ldc2_w 1809442907373563788
      // 139: lload 2
      // 13a: lxor
      // 13b: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/cc.PE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 140: goto 14c
      // 143: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 146: athrow
      // 147: aload 9
      // 149: invokevirtual sixtwo/qO.dcX ()Ljava/lang/String;
      // 14c: astore 17
      // 14e: aload 1
      // 14f: aload 12
      // 151: aload 17
      // 153: fload 15
      // 155: fload 16
      // 157: aload 14
      // 159: ldc_w 0.3
      // 15c: ldc_w 0.7
      // 15f: ldc_w 140.0
      // 162: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 165: aload 9
      // 167: iload 4
      // 169: ifeq 182
      // 16c: invokevirtual sixtwo/qO.dcQ ()Z
      // 16f: ifeq 1f7
      // 172: goto 179
      // 175: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 178: athrow
      // 179: aload 9
      // 17b: goto 182
      // 17e: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 181: athrow
      // 182: invokevirtual sixtwo/qO.dcS ()Lmedia/IMediaSession;
      // 185: astore 18
      // 187: aload 18
      // 189: invokeinterface media/IMediaSession.media ()Lmedia/MediaInfo; 1
      // 18e: astore 19
      // 190: aload 0
      // 191: getfield sixtwo/cc.LzQrF Lsixtwo/rk;
      // 194: aload 19
      // 196: invokevirtual media/MediaInfo.playing ()Z
      // 199: ifeq 1a4
      // 19c: fconst_1
      // 19d: goto 1a5
      // 1a0: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a3: athrow
      // 1a4: fconst_0
      // 1a5: invokevirtual sixtwo/rk.dhd (F)F
      // 1a8: pop
      // 1a9: aload 19
      // 1ab: invokevirtual media/MediaInfo.artist ()Ljava/lang/String;
      // 1ae: astore 20
      // 1b0: aload 1
      // 1b1: aload 13
      // 1b3: aload 20
      // 1b5: fload 15
      // 1b7: fload 16
      // 1b9: aload 12
      // 1bb: invokevirtual sixtwo/lq.cat ()F
      // 1be: fadd
      // 1bf: ldc_w 4.0
      // 1c2: fadd
      // 1c3: aload 14
      // 1c5: ldc_w 0.5
      // 1c8: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 1cb: ldc_w 0.3
      // 1ce: ldc_w 0.7
      // 1d1: ldc_w 140.0
      // 1d4: invokevirtual sixtwo/lC.ceH (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;FFF)V
      // 1d7: aload 0
      // 1d8: aload 1
      // 1d9: aload 14
      // 1db: aload 19
      // 1dd: invokevirtual sixtwo/cc.Pw (Lsixtwo/lC;Lsixtwo/mG;Lmedia/MediaInfo;)V
      // 1e0: aload 0
      // 1e1: aload 1
      // 1e2: aload 9
      // 1e4: invokevirtual sixtwo/qO.dcU ()Lsixtwo/mG;
      // 1e7: aload 14
      // 1e9: aload 19
      // 1eb: invokevirtual sixtwo/cc.Px (Lsixtwo/lC;Lsixtwo/mG;Lsixtwo/mG;Lmedia/MediaInfo;)V
      // 1ee: aload 0
      // 1ef: aload 1
      // 1f0: aload 14
      // 1f2: aload 18
      // 1f4: invokevirtual sixtwo/cc.Pz (Lsixtwo/lC;Lsixtwo/mG;Lmedia/IMediaSession;)V
      // 1f7: return
   }

   @Override
   public void LX(lC var1) {
      this.jTsqG = 160.0F;
      this.Xtjvx = 75.0F;
      super.LX(var1);
   }

   @Override
   public boolean Om() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cc.axaUP J
      // 03: ldc2_w 9270634157625
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OY ()Z
      // 0b: istore 3
      // 0c: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 0f: invokevirtual sixtwo/qO.dcQ ()Z
      // 12: iload 3
      // 13: ifeq 3f
      // 16: ifne 3e
      // 19: goto 20
      // 1c: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 26: instanceof net/minecraft/class_408
      // 29: iload 3
      // 2a: ifeq 3f
      // 2d: goto 34
      // 30: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: ifeq 42
      // 37: goto 3e
      // 3a: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: bipush 1
      // 3f: goto 43
      // 42: bipush 0
      // 43: ireturn
   }

   @Override
   public boolean onMouseClicked(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cc.axaUP J
      // 003: ldc2_w 618920796475
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/ca.OY ()Z
      // 00c: invokestatic sixtwo/rD.dmg ()Lsixtwo/qO;
      // 00f: astore 9
      // 011: istore 8
      // 013: aload 9
      // 015: invokevirtual sixtwo/qO.dcS ()Lmedia/IMediaSession;
      // 018: astore 10
      // 01a: aload 10
      // 01c: ifnull 133
      // 01f: aload 0
      // 020: getfield sixtwo/cc.toIeR F
      // 023: aload 0
      // 024: getfield sixtwo/cc.jTsqG F
      // 027: fconst_2
      // 028: fdiv
      // 029: fadd
      // 02a: fstore 11
      // 02c: aload 0
      // 02d: getfield sixtwo/cc.QWaAn F
      // 030: ldc_w 50.0
      // 033: fadd
      // 034: fstore 12
      // 036: new sixtwo/lc
      // 039: dup
      // 03a: fload 11
      // 03c: ldc_w 40.0
      // 03f: fsub
      // 040: fload 12
      // 042: ldc_w 16.0
      // 045: ldc_w 16.0
      // 048: invokespecial sixtwo/lc.<init> (FFFF)V
      // 04b: astore 13
      // 04d: new sixtwo/lc
      // 050: dup
      // 051: fload 11
      // 053: ldc_w 8.0
      // 056: fsub
      // 057: fload 12
      // 059: ldc_w 16.0
      // 05c: ldc_w 16.0
      // 05f: invokespecial sixtwo/lc.<init> (FFFF)V
      // 062: astore 14
      // 064: new sixtwo/lc
      // 067: dup
      // 068: fload 11
      // 06a: ldc_w 24.0
      // 06d: fadd
      // 06e: fload 12
      // 070: ldc_w 16.0
      // 073: ldc_w 16.0
      // 076: invokespecial sixtwo/lc.<init> (FFFF)V
      // 079: astore 15
      // 07b: new sixtwo/lc
      // 07e: dup
      // 07f: aload 0
      // 080: getfield sixtwo/cc.toIeR F
      // 083: aload 0
      // 084: getfield sixtwo/cc.jTsqG F
      // 087: fadd
      // 088: ldc_w 24.0
      // 08b: fsub
      // 08c: fload 12
      // 08e: ldc_w 4.0
      // 091: fadd
      // 092: ldc_w 8.0
      // 095: ldc_w 8.0
      // 098: invokespecial sixtwo/lc.<init> (FFFF)V
      // 09b: astore 16
      // 09d: aload 13
      // 09f: dload 1
      // 0a0: dload 3
      // 0a1: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0a4: iload 8
      // 0a6: ifeq 0c7
      // 0a9: ifeq 0c0
      // 0ac: goto 0b3
      // 0af: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: aload 10
      // 0b5: invokeinterface media/IMediaSession.previous ()V 1
      // 0ba: bipush 1
      // 0bb: ireturn
      // 0bc: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: aload 14
      // 0c2: dload 1
      // 0c3: dload 3
      // 0c4: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0c7: iload 8
      // 0c9: ifeq 0ea
      // 0cc: ifeq 0e3
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: aload 10
      // 0d8: invokeinterface media/IMediaSession.playPause ()V 1
      // 0dd: bipush 1
      // 0de: ireturn
      // 0df: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 15
      // 0e5: dload 1
      // 0e6: dload 3
      // 0e7: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0ea: iload 8
      // 0ec: ifeq 10d
      // 0ef: ifeq 106
      // 0f2: goto 0f9
      // 0f5: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f8: athrow
      // 0f9: aload 10
      // 0fb: invokeinterface media/IMediaSession.next ()V 1
      // 100: bipush 1
      // 101: ireturn
      // 102: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 105: athrow
      // 106: aload 16
      // 108: dload 1
      // 109: dload 3
      // 10a: invokevirtual sixtwo/lc.bXD (DD)Z
      // 10d: iload 8
      // 10f: ifeq 13b
      // 112: ifeq 133
      // 115: goto 11c
      // 118: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11b: athrow
      // 11c: aload 10
      // 11e: invokeinterface media/IMediaSession.swapCycle ()V 1
      // 123: aload 10
      // 125: invokeinterface media/IMediaSession.getCycleType ()I 1
      // 12a: invokestatic media/impl/win/WindowsMediaSession.setCycle (I)V
      // 12d: bipush 1
      // 12e: ireturn
      // 12f: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 132: athrow
      // 133: aload 0
      // 134: dload 1
      // 135: dload 3
      // 136: aload 5
      // 138: invokespecial sixtwo/cr.onMouseClicked (DDLsixtwo/mA;)Z
      // 13b: ireturn
   }

   private static MatchException PA(MatchException var0) {
      return var0;
   }

   private void Pw(lC var1, mG var2, MediaInfo var3) {
      lq var4 = lE.SVnNc.bYM(6.0F);
      String var5 = jf.bAN(var3.position());
      long var6 = Math.max(0L, var3.duration() - var3.position());
      String var8 = jf.bAN(var6);
      float var9 = 110.0F;
      float var10 = 3.0F;
      float var11 = this.toIeR + this.jTsqG / 2.0F - var9 / 2.0F;
      float var12 = this.QWaAn + 40.0F;
      var1.cdg(var11, var12, var9, var10, ld.all(0.5F), var2.coa(63.75F));
      this.zzuzN.dhd(Math.min(1.0F, (float)var3.position() / (float)var3.duration()));
      float var13 = var9 * this.zzuzN.dhj();
      var1.cdg(var11, var12, var13, var10, ld.all(0.5F), var2.coa(150.0F));
      var1.cez(var4, var5, var11 - var4.cao(var5) - 3.0F, var12 - 0.75F, var2.cob(0.5F));
      var1.cez(var4, var8, var11 + var9 + 3.0F, var12 - 0.75F, var2.cob(0.5F));
   }

   private static CallSite PE(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("PD".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void Py(boolean param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cc.axaUP J
      // 03: ldc2_w 103749903855284
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: istore 4
      // 0d: iload 1
      // 0e: iload 4
      // 10: ifne 35
      // 13: ifne 2b
      // 16: goto 1d
      // 19: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: getfield sixtwo/cc.ywaEw [F
      // 21: ldc 0.35
      // 23: invokestatic java/util/Arrays.fill ([FF)V
      // 26: return
      // 27: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: aload 0
      // 2c: getfield sixtwo/cc.Uslxa Lsixtwo/mT;
      // 2f: getstatic sixtwo/cc.QlUSv J
      // 32: invokevirtual sixtwo/mT.cpE (J)Z
      // 35: iload 4
      // 37: ifne 46
      // 3a: ifne 45
      // 3d: goto 44
      // 40: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: return
      // 45: bipush 0
      // 46: istore 5
      // 48: iload 5
      // 4a: aload 0
      // 4b: getfield sixtwo/cc.ywaEw [F
      // 4e: arraylength
      // 4f: if_icmpge 6b
      // 52: aload 0
      // 53: getfield sixtwo/cc.ywaEw [F
      // 56: iload 5
      // 58: invokestatic java/lang/Math.random ()D
      // 5b: d2f
      // 5c: ldc 0.35
      // 5e: fconst_1
      // 5f: invokestatic net/minecraft/class_3532.method_16439 (FFF)F
      // 62: fastore
      // 63: iinc 5 1
      // 66: iload 4
      // 68: ifeq 48
      // 6b: return
   }

   private static String PC(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 22823;
      if (vRGNc[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])nvHhc.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               nvHhc.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cc", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = wtTpp[var5].getBytes("ISO-8859-1");
         vRGNc[var5] = PB(((Cipher)var4[0]).doFinal(var9));
      }

      return vRGNc[var5];
   }

   private static String PB(byte[] var0) {
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

   private void Pz(lC param1, mG param2, IMediaSession param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cc.axaUP J
      // 003: ldc2_w 80694777663515
      // 006: lxor
      // 007: lstore 4
      // 009: aload 0
      // 00a: getfield sixtwo/cc.toIeR F
      // 00d: aload 0
      // 00e: getfield sixtwo/cc.jTsqG F
      // 011: fconst_2
      // 012: fdiv
      // 013: fadd
      // 014: fstore 7
      // 016: aload 0
      // 017: getfield sixtwo/cc.QWaAn F
      // 01a: ldc_w 50.0
      // 01d: fadd
      // 01e: fstore 8
      // 020: new sixtwo/lc
      // 023: dup
      // 024: fload 7
      // 026: ldc_w 40.0
      // 029: fsub
      // 02a: fload 8
      // 02c: ldc_w 16.0
      // 02f: ldc_w 16.0
      // 032: invokespecial sixtwo/lc.<init> (FFFF)V
      // 035: astore 9
      // 037: new sixtwo/lc
      // 03a: dup
      // 03b: fload 7
      // 03d: ldc_w 8.0
      // 040: fsub
      // 041: fload 8
      // 043: ldc_w 16.0
      // 046: ldc_w 16.0
      // 049: invokespecial sixtwo/lc.<init> (FFFF)V
      // 04c: astore 10
      // 04e: new sixtwo/lc
      // 051: dup
      // 052: fload 7
      // 054: ldc_w 24.0
      // 057: fadd
      // 058: fload 8
      // 05a: ldc_w 16.0
      // 05d: ldc_w 16.0
      // 060: invokespecial sixtwo/lc.<init> (FFFF)V
      // 063: astore 11
      // 065: new sixtwo/lc
      // 068: dup
      // 069: aload 0
      // 06a: getfield sixtwo/cc.toIeR F
      // 06d: aload 0
      // 06e: getfield sixtwo/cc.jTsqG F
      // 071: fadd
      // 072: ldc_w 24.0
      // 075: fsub
      // 076: fload 8
      // 078: ldc_w 4.0
      // 07b: fadd
      // 07c: ldc_w 8.0
      // 07f: ldc_w 8.0
      // 082: invokespecial sixtwo/lc.<init> (FFFF)V
      // 085: astore 12
      // 087: invokestatic sixtwo/rm.dis ()Lnet/minecraft/class_241;
      // 08a: astore 13
      // 08c: aload 0
      // 08d: aload 13
      // 08f: getfield net/minecraft/class_241.field_1343 F
      // 092: f2d
      // 093: invokevirtual sixtwo/cc.RR (D)D
      // 096: dstore 14
      // 098: aload 0
      // 099: aload 13
      // 09b: getfield net/minecraft/class_241.field_1342 F
      // 09e: f2d
      // 09f: invokevirtual sixtwo/cc.RS (D)D
      // 0a2: dstore 16
      // 0a4: aload 0
      // 0a5: getfield sixtwo/cc.QpQRV Lsixtwo/rk;
      // 0a8: aload 9
      // 0aa: dload 14
      // 0ac: dload 16
      // 0ae: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0b1: invokevirtual sixtwo/rk.dhc (Z)V
      // 0b4: aload 0
      // 0b5: getfield sixtwo/cc.debmQ Lsixtwo/rk;
      // 0b8: aload 10
      // 0ba: dload 14
      // 0bc: dload 16
      // 0be: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0c1: invokevirtual sixtwo/rk.dhc (Z)V
      // 0c4: aload 0
      // 0c5: getfield sixtwo/cc.IbiJA Lsixtwo/rk;
      // 0c8: aload 11
      // 0ca: dload 14
      // 0cc: dload 16
      // 0ce: invokevirtual sixtwo/lc.bXD (DD)Z
      // 0d1: invokevirtual sixtwo/rk.dhc (Z)V
      // 0d4: invokestatic sixtwo/ca.OY ()Z
      // 0d7: aload 1
      // 0d8: getstatic sixtwo/lf.RJfxY Lsixtwo/lf;
      // 0db: aload 9
      // 0dd: aload 2
      // 0de: ldc_w 255.0
      // 0e1: ldc_w 100.0
      // 0e4: aload 0
      // 0e5: getfield sixtwo/cc.QpQRV Lsixtwo/rk;
      // 0e8: invokevirtual sixtwo/rk.dhj ()F
      // 0eb: fmul
      // 0ec: fsub
      // 0ed: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0f0: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 0f3: aload 0
      // 0f4: getfield sixtwo/cc.LzQrF Lsixtwo/rk;
      // 0f7: invokevirtual sixtwo/rk.dhj ()F
      // 0fa: fstore 18
      // 0fc: aload 10
      // 0fe: invokevirtual sixtwo/lc.bXF ()F
      // 101: aload 10
      // 103: invokevirtual sixtwo/lc.bXH ()F
      // 106: fconst_2
      // 107: fdiv
      // 108: fadd
      // 109: fstore 19
      // 10b: aload 10
      // 10d: invokevirtual sixtwo/lc.bXG ()F
      // 110: aload 10
      // 112: invokevirtual sixtwo/lc.bXI ()F
      // 115: fconst_2
      // 116: fdiv
      // 117: fadd
      // 118: fstore 20
      // 11a: aload 1
      // 11b: invokevirtual sixtwo/lC.ceV ()V
      // 11e: aload 1
      // 11f: fload 19
      // 121: fload 20
      // 123: ldc_w 90.0
      // 126: fload 18
      // 128: fmul
      // 129: invokevirtual sixtwo/lC.cfb (FFF)V
      // 12c: aload 1
      // 12d: fload 19
      // 12f: fload 20
      // 131: fconst_1
      // 132: fload 18
      // 134: fsub
      // 135: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 138: aload 1
      // 139: getstatic sixtwo/lf.bLlHc Lsixtwo/lf;
      // 13c: aload 10
      // 13e: aload 2
      // 13f: ldc_w 255.0
      // 142: fconst_1
      // 143: fload 18
      // 145: fsub
      // 146: fmul
      // 147: ldc_w 100.0
      // 14a: aload 0
      // 14b: getfield sixtwo/cc.debmQ Lsixtwo/rk;
      // 14e: invokevirtual sixtwo/rk.dhj ()F
      // 151: fmul
      // 152: fsub
      // 153: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 156: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 159: invokestatic sixtwo/jH.bIf ()V
      // 15c: aload 1
      // 15d: invokevirtual sixtwo/lC.ceW ()V
      // 160: aload 1
      // 161: invokevirtual sixtwo/lC.ceV ()V
      // 164: aload 1
      // 165: fload 19
      // 167: fload 20
      // 169: ldc_w -90.0
      // 16c: ldc_w 90.0
      // 16f: fload 18
      // 171: fmul
      // 172: fadd
      // 173: invokevirtual sixtwo/lC.cfb (FFF)V
      // 176: aload 1
      // 177: fload 19
      // 179: fload 20
      // 17b: fload 18
      // 17d: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 180: aload 1
      // 181: getstatic sixtwo/lf.wJqgL Lsixtwo/lf;
      // 184: aload 10
      // 186: aload 2
      // 187: ldc_w 255.0
      // 18a: fload 18
      // 18c: fmul
      // 18d: ldc_w 100.0
      // 190: aload 0
      // 191: getfield sixtwo/cc.debmQ Lsixtwo/rk;
      // 194: invokevirtual sixtwo/rk.dhj ()F
      // 197: fmul
      // 198: fsub
      // 199: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 19c: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 19f: invokestatic sixtwo/jH.bIf ()V
      // 1a2: aload 1
      // 1a3: invokevirtual sixtwo/lC.ceW ()V
      // 1a6: istore 6
      // 1a8: aload 1
      // 1a9: getstatic sixtwo/lf.xesLS Lsixtwo/lf;
      // 1ac: aload 11
      // 1ae: aload 2
      // 1af: ldc_w 255.0
      // 1b2: ldc_w 100.0
      // 1b5: aload 0
      // 1b6: getfield sixtwo/cc.IbiJA Lsixtwo/rk;
      // 1b9: invokevirtual sixtwo/rk.dhj ()F
      // 1bc: fmul
      // 1bd: fsub
      // 1be: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 1c1: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 1c4: iload 6
      // 1c6: ifeq 20a
      // 1c9: aload 3
      // 1ca: invokeinterface media/IMediaSession.getCycleType ()I 1
      // 1cf: tableswitch 117 0 2 29 64 93
      // 1e8: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1eb: athrow
      // 1ec: aload 1
      // 1ed: getstatic sixtwo/lf.PzeJx Lsixtwo/lf;
      // 1f0: aload 12
      // 1f2: aload 0
      // 1f3: getfield sixtwo/cc.wNrIZ Lsixtwo/ri;
      // 1f6: aload 2
      // 1f7: ldc_w 0.5
      // 1fa: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 1fd: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 200: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 203: goto 20a
      // 206: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 209: athrow
      // 20a: iload 6
      // 20c: ifne 244
      // 20f: aload 1
      // 210: getstatic sixtwo/lf.PzeJx Lsixtwo/lf;
      // 213: aload 12
      // 215: aload 0
      // 216: getfield sixtwo/cc.wNrIZ Lsixtwo/ri;
      // 219: aload 2
      // 21a: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 21d: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 220: iload 6
      // 222: ifne 244
      // 225: goto 22c
      // 228: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22b: athrow
      // 22c: aload 1
      // 22d: getstatic sixtwo/lf.QZzTA Lsixtwo/lf;
      // 230: aload 12
      // 232: aload 0
      // 233: getfield sixtwo/cc.wNrIZ Lsixtwo/ri;
      // 236: aload 2
      // 237: invokevirtual sixtwo/ri.dfT (Lsixtwo/mG;)Lsixtwo/mG;
      // 23a: invokevirtual sixtwo/lC.ceq (Lsixtwo/lf;Lsixtwo/lc;Lsixtwo/mG;)V
      // 23d: goto 244
      // 240: invokestatic sixtwo/cc.PA (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 243: athrow
      // 244: return
   }

   private static int PF(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26601;
      if (NQYLH[var3] == null) {
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
         long var5 = dunGn[var3];
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
         Object[] var9 = (Object[])rhxtg.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rhxtg.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cc", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NQYLH[var3] = var15;
      }

      return NQYLH[var3];
   }

   private void Px(lC var1, mG var2, mG var3, MediaInfo var4) {
      long var5 = axaUP ^ 82464751920831L;
      boolean var10000 = ca.OX();
      this.Py(var4.playing());
      boolean var7 = var10000;

      label27: {
         try {
            if (this.cdPcl.SZ()) {
               var24 = var2.coc(mG.hoGuU, 0.2F);
               break label27;
            }
         } catch (MatchException var23) {
            throw PA(var23);
         }

         var24 = var3;
      }

      mG var8 = var24;
      mG var9 = this.tYJbR.dfT(var8.cob(this.ormBS.dhj()));
      kW var10 = new kW(var9.cof(), var9);
      float var11 = 1.2F;
      float var12 = 7.0F;
      float var13 = 1.0F;
      int var14 = this.nKTkB.length;
      float var15 = var11 * var14 + (var14 - 1) * var13;
      float var16 = this.toIeR + this.jTsqG - 7.0F - var15 * this.ormBS.dhj();
      float var17 = this.QWaAn + 10.0F + 3.5F;
      int var18 = 0;

      while (var18 < var14) {
         this.nKTkB[var18].dhq(PH<"l">(23819, 4943504579485509250L ^ var5));
         float var19 = this.nKTkB[var18].dhd(this.ywaEw[var18]);
         float var20 = var12 * var19;
         float var21 = var16 + var18 * (var11 + var13);
         float var22 = var17 - var20 / 2.0F;
         var1.cdP(var21, var22, var11, var20, ld.all(0.5F), var10, 0.5F);
         var18++;
         if (var7) {
            break;
         }
      }
   }

   private static int PG(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = PF(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite PH(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("PG".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
