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

public enum aI {
   JkFqu,
   OOZEg,
   PGwMP,
   ejRch,
   fhJit,
   MltoB,
   LYUHl,
   mMivt;

   private final od KPbhi;
   private static final long oldYq = gb.aYR(2029796362745907490L, -873967833286070265L, MethodHandles.lookup().lookupClass()).a(36526231130882L);
   private static final long[] ToNoi;
   private static final Integer[] naBWA;
   private static final Map nSztn;

   private aI(od var3) {
      this.KPbhi = var3;
   }

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      long var20 = oldYq ^ 74037699898462L;
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
      String var16 = "Ác:Ô%Ë³¼ \u008d\u001aÀ&vCÛÉeD\u009e\u007f-7U\u0010Ác:Ô%Ë³¼íì\u001f\u0091Î\u000bDõ\b\u000b(íÃ!ûÿq\bÏ©\u0016¬\u009fot×\u0018Ác:Ô%Ë³¼:\u0002¿·î?C\u001aèVR\u0088\rBzJ\b^Tdw\u008c2£Ú\u0010Ác:Ô%Ë³¼Ý;@SàÎ\u0080\u0014\bÙü\u0098Ýcëø7\u0018Ác:Ô%Ë³¼è\u000fZYEÿüTÞÇ#`<UK\u0003\u00107\u009bÕt\u0016ÁF\u00ad³\u0005X\u0014í\u000b]¸\bÞ\u0018E$üÁ(â\bBÊÍS8»\u0017Û\u0018Ác:Ô%Ë³¼Í;ªÎ;TB®a\u0018QÝðLÂ×\u0010Ác:Ô%Ë³¼\u001dz\u0086óÉ\u008d=æ";
      int var18 = "Ác:Ô%Ë³¼ \u008d\u001aÀ&vCÛÉeD\u009e\u007f-7U\u0010Ác:Ô%Ë³¼íì\u001f\u0091Î\u000bDõ\b\u000b(íÃ!ûÿq\bÏ©\u0016¬\u009fot×\u0018Ác:Ô%Ë³¼:\u0002¿·î?C\u001aèVR\u0088\rBzJ\b^Tdw\u008c2£Ú\u0010Ác:Ô%Ë³¼Ý;@SàÎ\u0080\u0014\bÙü\u0098Ýcëø7\u0018Ác:Ô%Ë³¼è\u000fZYEÿüTÞÇ#`<UK\u0003\u00107\u009bÕt\u0016ÁF\u00ad³\u0005X\u0014í\u000b]¸\bÞ\u0018E$üÁ(â\bBÊÍS8»\u0017Û\u0018Ác:Ô%Ë³¼Í;ªÎ;TB®a\u0018QÝðLÂ×\u0010Ác:Ô%Ë³¼\u001dz\u0086óÉ\u008d=æ"
         .length();
      char var15 = 24;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var16.substring(++var24, var24 + var15);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var12.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = wa(var19).intern();
            switch (var10001) {
               case 0:
                  var11[var17++] = var36;
                  if ((var24 += var15) >= var18) {
                     nSztn = new HashMap(13);
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
                     String var4 = "e_2\u0018åÈWº\u009a\u001c)U5º¡d&i9ôqvê\u001b";
                     int var5 = "e_2\u0018åÈWº\u009a\u001c)U5º¡d&i9ôqvê\u001b".length();
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
                                    ToNoi = var6;
                                    naBWA = new Integer[5];
                                    JkFqu = new aI(od.cBQ(var11[13]));
                                    OOZEg = new aI(od.cBQ(var11[8]));
                                    PGwMP = new aI(od.cBQ(var11[1]));
                                    ejRch = new aI(od.cBQ(var11[0]));
                                    fhJit = new aI(od.cBQ(var11[6]));
                                    MltoB = new aI(od.cBQ(var11[12]));
                                    LYUHl = new aI(od.cBQ(var11[4]));
                                    mMivt = new aI(od.cBQ(var11[14]));
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "zÕh\u0013'äHàs-Ã»ÚÅ\u0098ö";
                                 var5 = "zÕh\u0013'äHàs-Ã»ÚÅ\u0098ö".length();
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

                  var16 = "Ác:Ô%Ë³¼\u0012M`ûè¡;\u0017\b\u001fÙÐéKJ\u0016\u001b";
                  var18 = "Ác:Ô%Ë³¼\u0012M`ûè¡;\u0017\b\u001fÙÐéKJ\u0016\u001b".length();
                  var15 = 16;
                  var24 = -1;
            }

            var25 = var16.substring(++var24, var24 + var15);
            var10001 = 0;
         }
      }
   }

   private static int wc(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = wb(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite wd(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("wc".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/aI" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String wa(byte[] var0) {
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

   private static int wb(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 17674;
      if (naBWA[var3] == null) {
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
         long var5 = ToNoi[var3];
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
         Object[] var9 = (Object[])nSztn.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               nSztn.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/aI", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         naBWA[var3] = var15;
      }

      return naBWA[var3];
   }

   public od vY() {
      return this.KPbhi;
   }
}
