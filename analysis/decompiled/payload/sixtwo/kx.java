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

public class kx extends kr {
   private final cJ AwWpm;
   private static final long wgOUI = gb.aYR(-8848240246949541778L, 697613170944507932L, MethodHandles.lookup().lookupClass()).a(139670070571909L);
   private static final long[] aCLXk;
   private static final Integer[] DscPi;
   private static final Map FqygG = new HashMap(13);

   private static CallSite bSc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bSb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kx" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public boolean bQX() {
      return this.AwWpm.WF();
   }

   private static int bSa(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 24969;
      if (DscPi[var3] == null) {
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
         long var5 = aCLXk[var3];
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
         Object[] var9 = (Object[])FqygG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FqygG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kx", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         DscPi[var3] = var15;
      }

      return DscPi[var3];
   }

   private static int bSb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bSa(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public kx(gg var1, ku var2) {
      long var3 = wgOUI ^ 44539434378459L;
      super(var1, var2, false);
      int[] var10004 = new int[bSc<"z">(5925, 6237024134423840339L ^ var3)];
      var10004[0] = bSc<"z">(21529, 8125812265848063350L ^ var3);
      var10004[1] = bSc<"z">(18627, 192008760150907312L ^ var3);
      var10004[2] = bSc<"z">(4671, 5781388367097168717L ^ var3);
      var10004[3] = bSc<"z">(12280, 91123263614926482L ^ var3);
      var10004[4] = bSc<"z">(22857, 7484305116700002354L ^ var3);
      var10004[5] = bSc<"z">(25978, 3682908111442801674L ^ var3);
      var10004[bSc<"z">(30162, 4407025980702057649L ^ var3)] = bSc<"z">(22704, 8639976728661903835L ^ var3);
      var10004[bSc<"z">(29176, 8938227610937352351L ^ var3)] = bSc<"z">(4010, 3914435973628796612L ^ var3);
      var10004[bSc<"z">(18527, 7574994694672865593L ^ var3)] = bSc<"z">(18104, 8741323011458750428L ^ var3);
      var10004[bSc<"z">(29435, 3415899757143942041L ^ var3)] = bSc<"z">(20384, 2030781402339106496L ^ var3);
      var10004[bSc<"z">(3581, 6829732251798936720L ^ var3)] = bSc<"z">(19285, 1828983372325870137L ^ var3);
      var10004[bSc<"z">(20669, 8103108255253578188L ^ var3)] = bSc<"z">(29088, 5182752545622221013L ^ var3);
      var10004[bSc<"z">(13108, 6728724731919311452L ^ var3)] = bSc<"z">(12216, 6388369712005529292L ^ var3);
      var10004[bSc<"z">(13894, 4360156521535055663L ^ var3)] = bSc<"z">(15410, 6561573311268269381L ^ var3);
      var10004[bSc<"z">(5402, 4000743811926262907L ^ var3)] = bSc<"z">(20969, 3468708241526177932L ^ var3);
      this.AwWpm = new cJ(var1, mr.clS(var10004));
      this.bQO(var1);
      this.WRPii.Vf(this.AwWpm::WF);
      this.vgDNV.Vf(this.AwWpm::WF);
   }

   static {
      long var0 = wgOUI ^ 121985736836861L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[25];
      int var5 = 0;
      String var6 = "i»§)\fï\u0082\u0088Ë9|é=;çÀ2m\tMö¸\u0098ôR¡zÆ\u007f\u0097Ý\u001f@^ Ì±,ZE\u001c\"\u001d;Óç¢©×1<¯§å¾\t\u0080×w:³=\u0094`\u0093\u0004Ýz\u0005uopäý.¾ì4-\u00ad|\\\u0002y\u001aUÆ¿©»í&//,½\u00ad¹Á¯»±\u0012+[ßÕ\u008c\u0090\u0085·\u0087õ\u0097'\u00ad§\ryý\r\u008bw\u0002:ª¬\u0093mE\r:Òb°°¬\u00862;\u0087\u0082Õ£bìz\f\u009fÖk>\f@V¨ITå\u009dêE\u0019aÝ¥À\u0018\u001c½©á«êS¤f\u009dï¦x\u009cý¢";
      int var7 = "i»§)\fï\u0082\u0088Ë9|é=;çÀ2m\tMö¸\u0098ôR¡zÆ\u007f\u0097Ý\u001f@^ Ì±,ZE\u001c\"\u001d;Óç¢©×1<¯§å¾\t\u0080×w:³=\u0094`\u0093\u0004Ýz\u0005uopäý.¾ì4-\u00ad|\\\u0002y\u001aUÆ¿©»í&//,½\u00ad¹Á¯»±\u0012+[ßÕ\u008c\u0090\u0085·\u0087õ\u0097'\u00ad§\ryý\r\u008bw\u0002:ª¬\u0093mE\r:Òb°°¬\u00862;\u0087\u0082Õ£bìz\f\u009fÖk>\f@V¨ITå\u009dêE\u0019aÝ¥À\u0018\u001c½©á«êS¤f\u009dï¦x\u009cý¢"
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
                     aCLXk = var8;
                     DscPi = new Integer[25];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "\u008bÐm\u0010\u000b%ÓÞ4\u0088¯þ\u001dú\u001ap";
                  var7 = "\u008bÐm\u0010\u000b%ÓÞ4\u0088¯þ\u001dú\u001ap".length();
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
