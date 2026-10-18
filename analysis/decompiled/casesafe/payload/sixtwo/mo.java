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
import net.minecraft.class_1044;

public enum mo {
   TcnVB,
   bkxjV,
   KePbo,
   Vflfx,
   kbKRO,
   mDCeI,
   KyziQ,
   KyHOi;

   private final class_1044 uPTbG;
   private static final long VYvTj = gb.aYR(-4166142091497886144L, 2212998416938231883L, MethodHandles.lookup().lookupClass()).a(87490315881986L);
   private static final long[] oQTNI;
   private static final Integer[] EUbgl;
   private static final Map FknrL;

   private mo(class_1044 var3) {
      this.uPTbG = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = VYvTj ^ 97356119203854L;
      Cipher var12;
      Cipher var10000 = var12 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var13 = 1; var13 < 8; var13++) {
         var10003[var13] = (byte)(var20 << var13 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var11 = new String[16];
      int var17 = 0;
      String var16 = "p├ľa├Ĺ┬┐\u0018├Ö1'\u001c├É\u0018├Ç├ž*├Ś\bO├Ş\u0006\u0016├áE├▓9\b:├╝xw├č├Ť├É├á\b├▒\u0086├á\u0091├Ś\u0004┬┐├ş\bF\u0011┬░a├╝\u0092├č#\b├Ż┬ę├│├ë\u0097B\b├É\u0010\u007f\u00009\u0093}o├ä├╝, ^u├á┬║y┬╗\b├Ĺ\"z\u0017^V├Ęj\b├Ľ├▓\u007f├ö_├╗├é├╣\b\t,\\┬»h├Ç][\b├á┬úG┬Á├â\u0000!C\b┬Ż├äZ._├▓\\├â\b├ş├ĺ┬┤9'*\u000f├Ą\b#\u0099\u0082├Ż|\u0084├Ž┬▓";
      int var18 = "p├ľa├Ĺ┬┐\u0018├Ö1'\u001c├É\u0018├Ç├ž*├Ś\bO├Ş\u0006\u0016├áE├▓9\b:├╝xw├č├Ť├É├á\b├▒\u0086├á\u0091├Ś\u0004┬┐├ş\bF\u0011┬░a├╝\u0092├č#\b├Ż┬ę├│├ë\u0097B\b├É\u0010\u007f\u00009\u0093}o├ä├╝, ^u├á┬║y┬╗\b├Ĺ\"z\u0017^V├Ęj\b├Ľ├▓\u007f├ö_├╗├é├╣\b\t,\\┬»h├Ç][\b├á┬úG┬Á├â\u0000!C\b┬Ż├äZ._├▓\\├â\b├ş├ĺ┬┤9'*\u000f├Ą\b#\u0099\u0082├Ż|\u0084├Ž┬▓"
         .length();
      char var15 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var16.substring(++var24, var24 + var15);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var12.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = clF(var19).intern();
            switch (var10001) {
               case 0:
                  var11[var17++] = var36;
                  if ((var24 += var15) >= var18) {
                     FknrL = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var20 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[5];
                     int var3 = 0;
                     String var4 = "\u0015├Ĺf\u001cR\b┬░┬Ál├úb├ÜL\u001bj┬┤\u0089\u001aq|\u0005├×\u0088├Ş";
                     int var5 = "\u0015├Ĺf\u001cR\b┬░┬Ál├úb├ÜL\u001bj┬┤\u0089\u001aq|\u0005├×\u0088├Ş".length();
                     byte var2 = 0;

                     label36:
                     while (true) {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        long[] var28 = var6;
                        var10001 = var3++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var43 = -1;

                        while (true) {
                           long var8 = var40;
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
                           long var45 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var43) {
                              case 0:
                                 var28[var10001] = var45;
                                 if (var2 >= var5) {
                                    oQTNI = var6;
                                    EUbgl = new Integer[5];
                                    TcnVB = new mo(ob.cBv(var11[3]));
                                    bkxjV = new mo(ob.cBv(var11[2]));
                                    KePbo = new mo(ob.cBv(var11[6]));
                                    Vflfx = new mo(ob.cBv(var11[12]));
                                    kbKRO = new mo(ob.cBv(var11[9]));
                                    mDCeI = new mo(ob.cBv(var11[1]));
                                    KyziQ = new mo(ob.cBv(var11[14]));
                                    KyHOi = new mo(ob.cBv(var11[8]));
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "J\u009dj┬¬\u009fF├ę├Ě#├░\u008c\t'\u0006┬ź\u001c";
                                 var5 = "J\u009dj┬¬\u009fF├ę├Ě#├░\u008c\t'\u0006┬ź\u001c".length();
                                 var2 = 0;
                           }

                           byte var34 = var2;
                           var2 += 8;
                           var7 = var4.substring(var34, var2).getBytes("ISO-8859-1");
                           var28 = var6;
                           var10001 = var3++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var43 = 0;
                        }
                     }
                  }

                  var15 = var16.charAt(var24);
                  break;
               default:
                  var11[var17++] = var36;
                  if ((var24 += var15) < var18) {
                     var15 = var16.charAt(var24);
                     continue label54;
                  }

                  var16 = "\u0081\u001a\u0094+\u0083┬┤&n\b├ç7\u0095<├ą├ş\u0019\u0091";
                  var18 = "\u0081\u001a\u0094+\u0083┬┤&n\b├ç7\u0095<├ą├ş\u0019\u0091".length();
                  var15 = '\b';
                  var24 = -1;
            }

            var25 = var16.substring(++var24, var24 + var15);
            var10001 = 0;
         }
      }
   }

   public class_1044 clD() {
      return this.uPTbG;
   }

   private static int clH(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = clG(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int clG(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29694;
      if (EUbgl[var3] == null) {
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
         long var5 = oQTNI[var3];
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
         Object[] var9 = (Object[])FknrL.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               FknrL.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/mo", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         EUbgl[var3] = var15;
      }

      return EUbgl[var3];
   }

   private static CallSite clI(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("clH".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/mo" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String clF(byte[] var0) {
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
