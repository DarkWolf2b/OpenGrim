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
import net.minecraft.class_4587;
import net.minecraft.class_742;

public class kr extends kt {
   protected final ct WRPii;
   protected final cu RWGtc;
   protected final cu DnIfZ;
   protected final cu gvNCh;
   protected final cG vgDNV;
   private static final long iFJYp = gb.aYR(6454543339173507659L, 276205769963652836L, MethodHandles.lookup().lookupClass()).a(147541755063085L);
   private static final long[] GpFhj;
   private static final Integer[] hrnOB;
   private static final Map faEgt = new HashMap(13);

   protected void bQO(gg param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kr.iFJYp J
      // 03: ldc2_w 94676779125616
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kt.bRw ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 1f
      // 13: ifnonnull 1e
      // 16: goto 1d
      // 19: invokestatic sixtwo/kr.bQR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: return
      // 1e: aload 1
      // 1f: invokevirtual sixtwo/gg.bwI ()Ljava/util/List;
      // 22: aload 0
      // 23: getfield sixtwo/kr.WRPii Lsixtwo/ct;
      // 26: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 2b: iload 4
      // 2d: ifne 56
      // 30: ifne 49
      // 33: goto 3a
      // 36: invokestatic sixtwo/kr.bQR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/kr.WRPii Lsixtwo/ct;
      // 3e: aload 1
      // 3f: invokevirtual sixtwo/ct.Vg (Lsixtwo/iS;)V
      // 42: goto 49
      // 45: invokestatic sixtwo/kr.bQR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 1
      // 4a: invokevirtual sixtwo/gg.bwI ()Ljava/util/List;
      // 4d: aload 0
      // 4e: getfield sixtwo/kr.vgDNV Lsixtwo/cG;
      // 51: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 56: ifne 68
      // 59: aload 0
      // 5a: getfield sixtwo/kr.vgDNV Lsixtwo/cG;
      // 5d: aload 1
      // 5e: invokevirtual sixtwo/cG.Vg (Lsixtwo/iS;)V
      // 61: goto 68
      // 64: invokestatic sixtwo/kr.bQR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: return
   }

   private static MatchException bQR(MatchException var0) {
      return var0;
   }

   private static CallSite bQU(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bQT".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   protected kw bQP() {
      long var1 = iFJYp ^ 104613081604898L;

      kv var10000;
      label35: {
         label34: {
            try {
               switch (this.WRPii.ST()) {
                  case 1:
                     var10000 = kv.CiCMa;
                     break label35;
                  case 2:
                     break label34;
               }
            } catch (MatchException var5) {
               throw bQR(var5);
            }

            var10000 = kv.DESOY;
            break label35;
         }

         var10000 = kv.epRjJ;
      }

      kv var3 = var10000;

      mG var10001;
      kv var10002;
      try {
         var6 = this.bQW().bRL();
         var10001 = this.vgDNV.Wf();
         var10002 = var3;
         if (var3 == kv.DESOY) {
            return var6.bRP(var10001, var3, 0.0F);
         }
      } catch (MatchException var4) {
         throw bQR(var4);
      }

      return var6.bRP(var10001, var10002, 0.5F);
   }

   private static int bQS(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 19463;
      if (hrnOB[var3] == null) {
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
         long var5 = GpFhj[var3];
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
         Object[] var9 = (Object[])faEgt.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               faEgt.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         hrnOB[var3] = var15;
      }

      return hrnOB[var3];
   }

   @Override
   public void bQQ(class_4587 var1, float var2, class_742 var3) {
      this.bQV(this.bQP());
      super.bQQ(var1, var2, var3);
   }

   private static int bQT(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bQS(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public kr(gg var1, ku var2) {
      this(var1, var2, true);
   }

   protected kr(gg var1, ku var2, boolean var3) {
      long var4 = iFJYp ^ 127709351740948L;
      boolean var10000 = kt.bRw();
      super(var2);
      boolean var6 = var10000;

      label27: {
         try {
            if (var3) {
               var10 = var1;
               break label27;
            }
         } catch (MatchException var9) {
            throw bQR(var9);
         }

         var10 = null;
      }

      gg var7 = var10;

      try {
         int[] var10004 = new int[bQU<"x">(26534, 1242477089093827989L ^ var4)];
         var10004[0] = bQU<"x">(16623, 4604647527171529451L ^ var4);
         var10004[1] = bQU<"x">(14330, 1025515718231322089L ^ var4);
         var10004[2] = bQU<"x">(13831, 8519001168481446963L ^ var4);
         var10004[3] = bQU<"x">(31330, 1389038454100762691L ^ var4);
         var10004[4] = bQU<"x">(27493, 991811672237715790L ^ var4);
         var10004[5] = bQU<"x">(7069, 1244483430747128203L ^ var4);
         var10004[bQU<"x">(20643, 5267161190346558126L ^ var4)] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[bQU<"x">(18673, 8098640390899962566L ^ var4)] = bQU<"x">(17922, 5637659463303896082L ^ var4);
         var10004[bQU<"x">(30718, 2301036541513018824L ^ var4)] = bQU<"x">(7364, 5684064000841893592L ^ var4);
         var10004[bQU<"x">(199, 5575577555443538681L ^ var4)] = bQU<"x">(31450, 8369835107252904153L ^ var4);
         var10004[bQU<"x">(9324, 795302451661831786L ^ var4)] = bQU<"x">(12561, 9180642102467685169L ^ var4);
         var10004[bQU<"x">(16151, 5107288131440502064L ^ var4)] = bQU<"x">(30832, 1996444031239922295L ^ var4);
         var10004[bQU<"x">(1078, 6039481333408456254L ^ var4)] = bQU<"x">(18540, 1189061430660665952L ^ var4);
         var10004[bQU<"x">(10425, 3581543329199321760L ^ var4)] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         var10004[bQU<"x">(1417, 3871606248884494253L ^ var4)] = bQU<"x">(2905, 4635286341007135056L ^ var4);
         var10004[bQU<"x">(22944, 986002525967287224L ^ var4)] = bQU<"x">(25462, 1211764155223095619L ^ var4);
         var10004[bQU<"x">(9767, 2915783609551649840L ^ var4)] = bQU<"x">(29843, 541816897794256518L ^ var4);
         var10004[bQU<"x">(13765, 5341930527018512355L ^ var4)] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[bQU<"x">(23209, 3297116010919493778L ^ var4)] = bQU<"x">(12421, 3368964494842456748L ^ var4);
         var10004[bQU<"x">(27483, 5541469822535446882L ^ var4)] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         this.WRPii = new ct(var7, mr.clS(var10004));
         this.RWGtc = new cu(
            this.WRPii,
            mr.clS(
               new int[]{
                  bQU<"x">(30310, 4306386185733221490L ^ var4),
                  bQU<"x">(17499, 8729097119137767018L ^ var4),
                  bQU<"x">(8609, 5211886543727885247L ^ var4),
                  bQU<"x">(1232, 3877810613055381201L ^ var4)
               }
            )
         );
         ct var10003 = this.WRPii;
         var10004 = new int[bQU<"x">(26765, 2562012553251566271L ^ var4)];
         var10004[0] = bQU<"x">(7641, 8198577082627868666L ^ var4);
         var10004[1] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         var10004[2] = bQU<"x">(18570, 4911873177597285013L ^ var4);
         var10004[3] = bQU<"x">(8883, 2145638380853229707L ^ var4);
         var10004[4] = bQU<"x">(3746, 5476444249583670424L ^ var4);
         var10004[5] = bQU<"x">(211, 8922097530946738889L ^ var4);
         var10004[bQU<"x">(31770, 7891666079438677546L ^ var4)] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         var10004[bQU<"x">(18082, 4354286832682409129L ^ var4)] = bQU<"x">(12421, 3368964494842456748L ^ var4);
         this.DnIfZ = new cu(var10003, mr.clS(var10004));
         var10003 = this.WRPii;
         var10004 = new int[bQU<"x">(278, 2485264423437818628L ^ var4)];
         var10004[0] = bQU<"x">(21051, 1588469388014913578L ^ var4);
         var10004[1] = bQU<"x">(11367, 2226914174878381658L ^ var4);
         var10004[2] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[3] = bQU<"x">(15710, 5615821467127441243L ^ var4);
         var10004[4] = bQU<"x">(25462, 1211764155223095619L ^ var4);
         var10004[5] = bQU<"x">(23409, 1299557424249405802L ^ var4);
         var10004[bQU<"x">(31770, 7891666079438677546L ^ var4)] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         var10004[bQU<"x">(18082, 4354286832682409129L ^ var4)] = bQU<"x">(21245, 1497573350301960385L ^ var4);
         var10004[bQU<"x">(26765, 2562012553251566271L ^ var4)] = bQU<"x">(8883, 2145638380853229707L ^ var4);
         var10004[bQU<"x">(16134, 9017536420744652089L ^ var4)] = bQU<"x">(25692, 518657124666195521L ^ var4);
         var10004[bQU<"x">(21577, 8040598188747984483L ^ var4)] = bQU<"x">(211, 8922097530946738889L ^ var4);
         var10004[bQU<"x">(18281, 2857710176150986091L ^ var4)] = bQU<"x">(18848, 2936417774358172549L ^ var4);
         var10004[bQU<"x">(20693, 4176178172746992346L ^ var4)] = bQU<"x">(12421, 3368964494842456748L ^ var4);
         this.gvNCh = new cu(var10003, mr.clS(var10004));
         var10004 = new int[bQU<"x">(28771, 2325419477934418537L ^ var4)];
         var10004[0] = bQU<"x">(32731, 2482616374167709141L ^ var4);
         var10004[1] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[2] = bQU<"x">(12221, 2228958241823126973L ^ var4);
         var10004[3] = bQU<"x">(7069, 1244483430747128203L ^ var4);
         var10004[4] = bQU<"x">(8883, 2145638380853229707L ^ var4);
         var10004[5] = bQU<"x">(7069, 1244483430747128203L ^ var4);
         var10004[bQU<"x">(31770, 7891666079438677546L ^ var4)] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[bQU<"x">(18082, 4354286832682409129L ^ var4)] = bQU<"x">(30832, 1996444031239922295L ^ var4);
         var10004[bQU<"x">(26765, 2562012553251566271L ^ var4)] = bQU<"x">(25462, 1211764155223095619L ^ var4);
         var10004[bQU<"x">(16134, 9017536420744652089L ^ var4)] = bQU<"x">(10189, 2357108562178440687L ^ var4);
         var10004[bQU<"x">(21577, 8040598188747984483L ^ var4)] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[bQU<"x">(18281, 2857710176150986091L ^ var4)] = bQU<"x">(11367, 2226914174878381658L ^ var4);
         var10004[bQU<"x">(20693, 4176178172746992346L ^ var4)] = bQU<"x">(8609, 5211886543727885247L ^ var4);
         var10004[bQU<"x">(278, 2485264423437818628L ^ var4)] = bQU<"x">(211, 8922097530946738889L ^ var4);
         this.vgDNV = new cG(var7, mr.clS(var10004)).Uf(rD.dlM().bjG().bis());
         if (var6) {
            iS.bwK("J6fYLc");
         }
      } catch (MatchException var8) {
         throw bQR(var8);
      }
   }

   static {
      long var0 = iFJYp ^ 124414492119251L;
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
      String var6 = "\u0010\u00ad\u0098\u0015├ś\u001d\u0019\u008e\u0098v}\u009cG┬░c:┬ą├é\u001eB7\u008e\u0086%\u009c2┬ę\u001bj\u0087T\f┬│8├▓├ś(j\u0093\u0083]h&\u001dl \u008e├×[xs_\u0003├Ą\u0017┬Č├ź\u0089├ö├ö:┬Ą┬Ą┬│┬¬Xn\u0001├Ľ\u0090├╝^├â'U:\u0005V┬▒GI\u0097┬Ż)├á~Mu\u0081\u0097├á\u0014\u0015\u0010├┐&┬Ęt\u0099/\b├í\u0014\u00108\u0000\u0094\u0097\\├í>┬Ž\u001eS┬▓\u0095P├ö┬ż├őD├ą├║d├ôf├ś\u0084├ź\u008f\r=┬Ż├╣├ş{^GX├Ĺ\u0089Vp├ŹF├Ş\u0010\u0011├▓4┬Ż├ů\f\u0098├▒t├Â9\u0082\u0019\u001e0├Ä\u0091H'├á\u009be├Ä\u008c\u0095[\u0097├Ś├Ą\u0083&z├čN>?x├ł\u0010├Öl\u0016\u0007\u0086c*f├│Na├â;{QM\u00ad\f┬│\u0098├če├Ş\u009b~pY├ö├á├Żk\u0007V┬ú├Ç├É\u0085!├Ż├ü}\u008f\u0018\u0090├Á\r├É\u0098\u0014\u0087\u001d├Ć├»├ĺ├Ĺ┬Á┬ź\u000b\u00192Nq\u001b├Ág[J~_\u001e┬ó├ľ\u000b\u0011\u009f├ú\u008aX\u0005├ę├éW├ô\u0019l├Ě├ö├í\u009f\u0005W├č\u0093├Ł├öd┬Ż=├Â\u0015?├ą\u009d\u009ce├í├ł├ŐdDO├É+ ├Ľ{O├Á\u000e├»\u0089\u0011├░├Ő\u0093`├î\u0000├╣H?Z┬┐\\├É|├Ě┬╗├▓\u009f├ág|\u0090Pd\u000bB@Q\u0015\"┬Ą\u0084├ş┬úit├ś├Ö├ô\u000fw\u0016\u0014h├Ť┬ę7├ę\u0010\u0015├│├▒\u0017k\u0015┬│├Őo`├Ç\u000b\b\u009c├Ĺ├╝├¬\u0080\u0082├▓M┬ž\u001e\f├ç\u000f\u0012├ş├ž0├ć9MfF┬»+\u009a├Ž\u009d\u0017I\f\u0001├░├▓├ćs\u001b\u0013┬¬├ľI├░┬▓┬╗┬źI3├ą\u009c┬╝%├ť\u0018├«├▒JNTy├é\u0092I├ť├ôH┬ę\u0083H}├çE1h\u0084\u000e5\u0090├ů\u0089QJ┬║Wv├«\u009fh";
      int var7 = "\u0010\u00ad\u0098\u0015├ś\u001d\u0019\u008e\u0098v}\u009cG┬░c:┬ą├é\u001eB7\u008e\u0086%\u009c2┬ę\u001bj\u0087T\f┬│8├▓├ś(j\u0093\u0083]h&\u001dl \u008e├×[xs_\u0003├Ą\u0017┬Č├ź\u0089├ö├ö:┬Ą┬Ą┬│┬¬Xn\u0001├Ľ\u0090├╝^├â'U:\u0005V┬▒GI\u0097┬Ż)├á~Mu\u0081\u0097├á\u0014\u0015\u0010├┐&┬Ęt\u0099/\b├í\u0014\u00108\u0000\u0094\u0097\\├í>┬Ž\u001eS┬▓\u0095P├ö┬ż├őD├ą├║d├ôf├ś\u0084├ź\u008f\r=┬Ż├╣├ş{^GX├Ĺ\u0089Vp├ŹF├Ş\u0010\u0011├▓4┬Ż├ů\f\u0098├▒t├Â9\u0082\u0019\u001e0├Ä\u0091H'├á\u009be├Ä\u008c\u0095[\u0097├Ś├Ą\u0083&z├čN>?x├ł\u0010├Öl\u0016\u0007\u0086c*f├│Na├â;{QM\u00ad\f┬│\u0098├če├Ş\u009b~pY├ö├á├Żk\u0007V┬ú├Ç├É\u0085!├Ż├ü}\u008f\u0018\u0090├Á\r├É\u0098\u0014\u0087\u001d├Ć├»├ĺ├Ĺ┬Á┬ź\u000b\u00192Nq\u001b├Ág[J~_\u001e┬ó├ľ\u000b\u0011\u009f├ú\u008aX\u0005├ę├éW├ô\u0019l├Ě├ö├í\u009f\u0005W├č\u0093├Ł├öd┬Ż=├Â\u0015?├ą\u009d\u009ce├í├ł├ŐdDO├É+ ├Ľ{O├Á\u000e├»\u0089\u0011├░├Ő\u0093`├î\u0000├╣H?Z┬┐\\├É|├Ě┬╗├▓\u009f├ág|\u0090Pd\u000bB@Q\u0015\"┬Ą\u0084├ş┬úit├ś├Ö├ô\u000fw\u0016\u0014h├Ť┬ę7├ę\u0010\u0015├│├▒\u0017k\u0015┬│├Őo`├Ç\u000b\b\u009c├Ĺ├╝├¬\u0080\u0082├▓M┬ž\u001e\f├ç\u000f\u0012├ş├ž0├ć9MfF┬»+\u009a├Ž\u009d\u0017I\f\u0001├░├▓├ćs\u001b\u0013┬¬├ľI├░┬▓┬╗┬źI3├ą\u009c┬╝%├ť\u0018├«├▒JNTy├é\u0092I├ť├ôH┬ę\u0083H}├çE1h\u0084\u000e5\u0090├ů\u0089QJ┬║Wv├«\u009fh"
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
                     GpFhj = var8;
                     hrnOB = new Integer[59];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u0005[}┬Â,├┐*\u009d\u001f\u009b├ä\u0002\u0093v┬Ą├Ę";
                  var7 = "\u0005[}┬Â,├┐*\u009d\u001f\u009b├ä\u0002\u0093v┬Ą├Ę".length();
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
}
