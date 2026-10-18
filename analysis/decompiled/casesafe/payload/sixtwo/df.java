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

public class df extends gg {
   private final ct jtYSu;
   private final cu JRiAq;
   private final cu ZzGuW;
   private final cu hfdrQ;
   private final cu XSYSg;
   private final cC uvSVP;
   static double AnzBQ;
   static double fUTAw;
   static double XmhqK;
   private static final long zRIgN = gb.aYR(-8849052166120782493L, 2128902902352512798L, MethodHandles.lookup().lookupClass()).a(269574731207117L);
   private static final long[] yjgWN;
   private static final Integer[] iGHTG;
   private static final Map JhLmD = new HashMap(13);

   public df() {
      long var1 = zRIgN ^ 8173232036737L;
      super(gf.aZL(aef<"f">(12159, 7968036975146136413L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[aef<"f">(3762, 8817654217706820232L ^ var1)];
      var10004[0] = aef<"f">(13548, 3020174061846948062L ^ var1);
      var10004[1] = aef<"f">(19412, 1926224578394560482L ^ var1);
      var10004[2] = aef<"f">(27683, 3755038906603712516L ^ var1);
      var10004[3] = aef<"f">(24975, 6595098805240118688L ^ var1);
      var10004[4] = aef<"f">(14467, 6597190663521264826L ^ var1);
      var10004[5] = aef<"f">(21835, 616685485724043636L ^ var1);
      this.jtYSu = new ct(this, mr.clS(var10004));
      ct var10003 = this.jtYSu;
      var10004 = new int[aef<"f">(20796, 9036244821198245148L ^ var1)];
      var10004[0] = aef<"f">(32642, 6751663748184777641L ^ var1);
      var10004[1] = aef<"f">(12852, 2023943365785480730L ^ var1);
      var10004[2] = aef<"f">(32696, 2562754315079984005L ^ var1);
      var10004[3] = aef<"f">(13470, 52824206666655914L ^ var1);
      var10004[4] = aef<"f">(11169, 3073277197493139346L ^ var1);
      var10004[5] = aef<"f">(15124, 1324451264500361002L ^ var1);
      this.JRiAq = new cu(var10003, mr.clS(var10004));
      this.ZzGuW = new cu(
         this.jtYSu,
         mr.clS(
            new int[]{
               aef<"f">(26819, 4056103152569365735L ^ var1),
               aef<"f">(25472, 2654625887409946531L ^ var1),
               aef<"f">(5441, 1132133073258072445L ^ var1),
               aef<"f">(14880, 636412778555401755L ^ var1)
            }
         )
      );
      this.hfdrQ = new cu(
         this.jtYSu,
         mr.clS(
            new int[]{
               aef<"f">(4738, 3736244364303617710L ^ var1),
               aef<"f">(24571, 8633126062916142046L ^ var1),
               aef<"f">(6509, 7758333064999257408L ^ var1),
               aef<"f">(4738, 3736244364303617710L ^ var1),
               aef<"f">(6839, 3497608685437961858L ^ var1)
            }
         )
      );
      this.XSYSg = new cu(
         this.jtYSu,
         mr.clS(
            new int[]{aef<"f">(21129, 1241912650603957937L ^ var1), aef<"f">(6509, 7758333064999257408L ^ var1), aef<"f">(16543, 5253030290462743727L ^ var1)}
         )
      );
      this.uvSVP = new cC(
            this,
            mr.clS(
               new int[]{
                  aef<"f">(31281, 5952875123624748560L ^ var1),
                  aef<"f">(17463, 371224555886778368L ^ var1),
                  aef<"f">(13470, 52824206666655914L ^ var1),
                  aef<"f">(18606, 1148761732897412255L ^ var1),
                  aef<"f">(16804, 8124009758445641090L ^ var1)
               }
            )
         )
         .Vy(0.001)
         .Vw(0.1F)
         .Vx(5.0)
         .VA(AnzBQ);
      this.uvSVP.Vf(this.JRiAq::SZ);
   }

   static {
      long var0 = zRIgN ^ 3682577616864L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[29];
      int var5 = 0;
      String var6 = "[├×\u0096├┐\u0094├Ş\u0004├ť├╣\u001c├ćZ\u0080\u0017\n\u0013├┤\u009a\u0015a┬Ěe)j├ž├č ├Ł┬ú┬ą_P├ś├│\t\u008cJE├┤%├śc\u001ct2[├ľ├Č?┬Ě├Č\u009bJ├Ç├×\u009c\u001a-├î├░┬Á┬ź\u0017├│#{├ŽQ\u007f├Ł\u0018┬ź\u009b@├Ť0├ů\u0099e┬¬\u000e|g\u0091|├ę\u0015\u0004┬ÂC┬╣\u00001├Ľ'w\t_┬ź├ú=Lb>├×!V┬ó\u001a├Ź\u0081h\u001b|\u0017a\u0014R=:\u0091├É├ž\u0090┬óz\u00ad;6\u0004├ů\u001c{\u0083┬║\u0097\u0003\u0093K┬žE\"\u0006├×├Ť┬«├Ą├╣7\u0010├▓┬Ě\u008a\u0002\u008a\u009f├Ę├ę┬á├ę\u0004┬┐├âf\u000e\u001dG┬║\t\u0097├ć%├▒\u000b2\u0085\u009e\u009b\u009b┬Ęs├Ü}\u0000'\u0002├ś┬╣e├ů├Č├»\u009d├ż\u0010├ú=6A\u0094*+lG├«\u001e\u0081@y9\u008e\u0099J;\ng";
      int var7 = "[├×\u0096├┐\u0094├Ş\u0004├ť├╣\u001c├ćZ\u0080\u0017\n\u0013├┤\u009a\u0015a┬Ěe)j├ž├č ├Ł┬ú┬ą_P├ś├│\t\u008cJE├┤%├śc\u001ct2[├ľ├Č?┬Ě├Č\u009bJ├Ç├×\u009c\u001a-├î├░┬Á┬ź\u0017├│#{├ŽQ\u007f├Ł\u0018┬ź\u009b@├Ť0├ů\u0099e┬¬\u000e|g\u0091|├ę\u0015\u0004┬ÂC┬╣\u00001├Ľ'w\t_┬ź├ú=Lb>├×!V┬ó\u001a├Ź\u0081h\u001b|\u0017a\u0014R=:\u0091├É├ž\u0090┬óz\u00ad;6\u0004├ů\u001c{\u0083┬║\u0097\u0003\u0093K┬žE\"\u0006├×├Ť┬«├Ą├╣7\u0010├▓┬Ě\u008a\u0002\u008a\u009f├Ę├ę┬á├ę\u0004┬┐├âf\u000e\u001dG┬║\t\u0097├ć%├▒\u000b2\u0085\u009e\u009b\u009b┬Ęs├Ü}\u0000'\u0002├ś┬╣e├ů├Č├»\u009d├ż\u0010├ú=6A\u0094*+lG├«\u001e\u0081@y9\u008e\u0099J;\ng"
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
                     yjgWN = var8;
                     iGHTG = new Integer[29];
                     AnzBQ = 1.7777777777777777;
                     fUTAw = 1.6;
                     XmhqK = 1.3333333333333333;
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "┬ú'w\u0082O├í\u0006^├¬o├ź\u001eP┬Á\u0004F";
                  var7 = "┬ú'w\u0082O├í\u0006^├¬o├ź\u001eP┬Á\u0004F".length();
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

   public cC aeb() {
      return this.uvSVP;
   }

   public cu aea() {
      return this.XSYSg;
   }

   public float adV() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/df.zRIgN J
      // 03: ldc2_w 12657170512973
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/df.ZzGuW Lsixtwo/cu;
      // 10: invokevirtual sixtwo/cu.SZ ()Z
      // 13: aload 3
      // 14: ifnonnull 31
      // 17: ifeq 2a
      // 1a: goto 21
      // 1d: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: getstatic sixtwo/df.AnzBQ D
      // 24: d2f
      // 25: freturn
      // 26: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: getfield sixtwo/df.hfdrQ Lsixtwo/cu;
      // 2e: invokevirtual sixtwo/cu.SZ ()Z
      // 31: aload 3
      // 32: ifnonnull 5a
      // 35: ifeq 48
      // 38: goto 3f
      // 3b: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: getstatic sixtwo/df.fUTAw D
      // 42: d2f
      // 43: freturn
      // 44: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: aload 3
      // 4a: ifnonnull 67
      // 4d: getfield sixtwo/df.XSYSg Lsixtwo/cu;
      // 50: invokevirtual sixtwo/cu.SZ ()Z
      // 53: goto 5a
      // 56: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: ifeq 66
      // 5d: getstatic sixtwo/df.XmhqK D
      // 60: d2f
      // 61: freturn
      // 62: invokestatic sixtwo/df.aec (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 0
      // 67: getfield sixtwo/df.uvSVP Lsixtwo/cC;
      // 6a: invokevirtual sixtwo/cC.VB ()F
      // 6d: freturn
   }

   public cu adX() {
      return this.JRiAq;
   }

   private static int aee(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aed(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite aef(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aee".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/df" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int aed(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 5619;
      if (iGHTG[var3] == null) {
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
         long var5 = yjgWN[var3];
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
         Object[] var9 = (Object[])JhLmD.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JhLmD.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/df", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         iGHTG[var3] = var15;
      }

      return iGHTG[var3];
   }

   private static MatchException aec(MatchException var0) {
      return var0;
   }

   public ct adW() {
      return this.jtYSu;
   }

   public cu adZ() {
      return this.hfdrQ;
   }

   public cu adY() {
      return this.ZzGuW;
   }
}
