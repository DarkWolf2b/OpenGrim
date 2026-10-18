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

public enum mV$uZ {
   JLDtP,
   dMdAl,
   gqgma,
   NsAOG,
   rnupK,
   OJvwU,
   scLLw;

   private static final mV$uZ[] NkoZK;
   private static final long krSMA = gb.aYR(7444314463263922757L, -7512938632512613020L, MethodHandles.lookup().lookupClass()).a(57058766281784L);
   private static final long[] LdypA;
   private static final Integer[] qAFfj;
   private static final Map OTQwC;

   private static mV$uZ[] dvS() {
      long var0 = krSMA ^ 5660458965440L;
      mV$uZ[] var10000 = new mV$uZ[dvW<"r">(4244, 1755892918772215097L ^ var0)];
      var10000[0] = JLDtP;
      var10000[1] = dMdAl;
      var10000[2] = gqgma;
      var10000[3] = NsAOG;
      var10000[4] = rnupK;
      var10000[5] = OJvwU;
      var10000[dvW<"r">(6455, 7561186090275972251L ^ var0)] = scLLw;
      return var10000;
   }

   private static CallSite dvW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("dvV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mV$uZ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String dvT(byte[] var0) {
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

   private static int dvU(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7871;
      if (qAFfj[var3] == null) {
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
         long var5 = LdypA[var3];
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
         Object[] var9 = (Object[])OTQwC.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               OTQwC.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mV$uZ", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         qAFfj[var3] = var15;
      }

      return qAFfj[var3];
   }

   private static int dvV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = dvU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = krSMA ^ 3428308779186L;
      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var20 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var11 = new String[7];
      int var17 = 0;
      String var16 = "î2I¡;2ÞûzG\n/²Aòñ\u0010î2I¡;2ÞûÖoÙ¿yçRÜ\u0010î2I¡;2Þû\u0086\u0013Ö@÷YBa\u0010î2I¡;2Þû\u0086\u007f+é²î¬3\u0010î2I¡;2ÞûJ\u009bêd=Tô\u008a";
      int var18 = "î2I¡;2ÞûzG\n/²Aòñ\u0010î2I¡;2ÞûÖoÙ¿yçRÜ\u0010î2I¡;2Þû\u0086\u0013Ö@÷YBa\u0010î2I¡;2Þû\u0086\u007f+é²î¬3\u0010î2I¡;2ÞûJ\u009bêd=Tô\u008a"
         .length();
      char var15 = 16;
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var16.substring(++var23, var23 + var15);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var12.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = dvT(var19).intern();
            switch (var10001) {
               case 0:
                  var11[var17++] = var33;
                  if ((var23 += var15) >= var18) {
                     OTQwC = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[3];
                     int var3 = 0;
                     String var4 = "êB\u0014Ê\u0083\u009cÒ\u0091j26ûíy%\u008að\u0006ÿÓ\u0013|°\u009d";
                     int var5 = "êB\u0014Ê\u0083\u009cÒ\u0091j26ûíy%\u008að\u0006ÿÓ\u0013|°\u009d".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var38 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     LdypA = var6;
                     qAFfj = new Integer[3];
                     JLDtP = new mV$uZ();
                     dMdAl = new mV$uZ();
                     gqgma = new mV$uZ();
                     NsAOG = new mV$uZ();
                     rnupK = new mV$uZ();
                     OJvwU = new mV$uZ();
                     scLLw = new mV$uZ();
                     NkoZK = dvS();
                     return;
                  }

                  var15 = var16.charAt(var23);
                  break;
               default:
                  var11[var17++] = var33;
                  if ((var23 += var15) < var18) {
                     var15 = var16.charAt(var23);
                     continue label45;
                  }

                  var16 = "î2I¡;2ÞûøÂc\u0012\u0019ÍUË\u0010¤R\u009b-ÞÔ¬MEµ\bb\u0090 &\u0004";
                  var18 = "î2I¡;2ÞûøÂc\u0012\u0019ÍUË\u0010¤R\u009b-ÞÔ¬MEµ\bb\u0090 &\u0004".length();
                  var15 = 16;
                  var23 = -1;
            }

            var24 = var16.substring(++var23, var23 + var15);
            var10001 = 0;
         }
      }
   }
}
