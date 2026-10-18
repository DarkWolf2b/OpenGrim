package sixtwo;

import com.google.gson.JsonObject;
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

public class ie implements rp {
   private int BfTib;
   private int ptNnz;
   private int lARDN;
   private int XyyGI;
   private int yCtLw;
   private static String XizrS;
   private static final long qWzEO = gb.aYR(1097760136818681097L, 1776082063223176851L, MethodHandles.lookup().lookupClass()).a(2024396379798L);
   private static final String[] tIpzv;
   private static final String[] mekAn;
   private static final Map piaZM = new HashMap(13);
   private static final long[] BmhIr;
   private static final Integer[] NeskM;
   private static final Map OUvGJ;

   static {
      long var11 = qWzEO ^ 8414969092560L;
      bhQ(null);
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[15];
      int var18 = 0;
      String var17 = "├ž├ş├ź\u0093┬╗\u0097\u0019FJ:├Á├ü├┤├źVq=\"H├Ç├ę├╗\u0011┬¬├ĺ\u0087Q├şK\t├â\b ┬ąs\u009fq\u0014├ö\u009a├ť├│9]├«\u00adO├ä┬ó├é├░F5├╣├▓k├╗$\bB├Ź├ô├Ĺ├ó\u0088\u0018┬Ż{9`┬Ş<N├Ł┬ó\u009bh├ë\u0098U\u008e├»├Ő\u0005\u00055g┬Ě├č┬Ş Q├¬├Ş├Ĺ.├¬├┐├Â\u0010┬┐┬┐├ĺ├Ą(F├Ĺa\u000f\u00ad+#├Ž!z\u0018├â]\u00ad\u0014{'├î ├Ż&{├ŽmU\u008e├▒\u0019├ąNMW\u0085\u009a{├éB┬Á'\u0081xO├łQ<├äuI`┬▓┬│8\u0096L>\u000e\u0013&├╝V┬á\u0012?├░\u0081\r3\u0014\u0080\u000f├×┬┐h┬Ž├Ž\u0001\u0083\u001e├Ś\u0095┬ó┬á├ë\r├Ö├×Q\u001d├▒x├Ť%Psi├ů┬ą├Ő┬▓┬«l┬ú├Ą\b!\u0003├ö\u009e\u0018Z\u0097┬Ş9ifV\u0004┬┐\u001b\u001f\u001d\u001f!├ł\u001ao\u000f\u009a├┐├«├Ĺ├╣D <\u0006:\u001d?├╗/┬Ę├Čvi\u000bd┬ó\u001d\u001d[K├Ż\u009f\u007f├Ş├ć├Ć┬«┬í(YFH├░\f@├ë├Ł├ż\u009f(┬áaN├ž\u009f\u0080├░\u0083G├âf\u0016┬Ž├¬├┤(G \u0002├Č\u0005$'├Ç\u008e a┬á\u0015b \u00ad@Y├Ą\u0099├žA├ŐgP├┤├Ş┬ĄF┬Ě\u009e┬▒\u008d┬ą├╝3├ô0\u0096├ů┬Č├ąJ \u0080\f\u008b├Ł├ô\"@├ł&]]\u007f)0┬ž\u0097┬┐┬░├Ĺ\u008b┬ž├ŹH\u0091Q├ś\u008b\u0081├č\u008d\u008c├ő F┬Ęv\u0010\"┬╝├Â ├ő┬░V├Ľ\u0095┬ź\u0004F(&┬Â┬Ą├Ť┬Ž├é├Â\u001c├»3l├Ś\u001f/+0G├á├┤8\u0085\u0006├ç├ło├Źlj>\u00ad\u001f~P\u001dE┬Ż\u000b├ą┬«\u0013cj├ów\u001a├┐^├ę\u009d├Ě\b/\u0002├Ç\u0082'$}├▓├«X├ô├╣2 \u008bo8W├ż├ĚI\u008b\u0015S5Z├ż[┬Ž┬Ě\u0096:├ŞV\u0086'o_<┬ó├äcH\u007f├×├ů";
      int var19 = "├ž├ş├ź\u0093┬╗\u0097\u0019FJ:├Á├ü├┤├źVq=\"H├Ç├ę├╗\u0011┬¬├ĺ\u0087Q├şK\t├â\b ┬ąs\u009fq\u0014├ö\u009a├ť├│9]├«\u00adO├ä┬ó├é├░F5├╣├▓k├╗$\bB├Ź├ô├Ĺ├ó\u0088\u0018┬Ż{9`┬Ş<N├Ł┬ó\u009bh├ë\u0098U\u008e├»├Ő\u0005\u00055g┬Ě├č┬Ş Q├¬├Ş├Ĺ.├¬├┐├Â\u0010┬┐┬┐├ĺ├Ą(F├Ĺa\u000f\u00ad+#├Ž!z\u0018├â]\u00ad\u0014{'├î ├Ż&{├ŽmU\u008e├▒\u0019├ąNMW\u0085\u009a{├éB┬Á'\u0081xO├łQ<├äuI`┬▓┬│8\u0096L>\u000e\u0013&├╝V┬á\u0012?├░\u0081\r3\u0014\u0080\u000f├×┬┐h┬Ž├Ž\u0001\u0083\u001e├Ś\u0095┬ó┬á├ë\r├Ö├×Q\u001d├▒x├Ť%Psi├ů┬ą├Ő┬▓┬«l┬ú├Ą\b!\u0003├ö\u009e\u0018Z\u0097┬Ş9ifV\u0004┬┐\u001b\u001f\u001d\u001f!├ł\u001ao\u000f\u009a├┐├«├Ĺ├╣D <\u0006:\u001d?├╗/┬Ę├Čvi\u000bd┬ó\u001d\u001d[K├Ż\u009f\u007f├Ş├ć├Ć┬«┬í(YFH├░\f@├ë├Ł├ż\u009f(┬áaN├ž\u009f\u0080├░\u0083G├âf\u0016┬Ž├¬├┤(G \u0002├Č\u0005$'├Ç\u008e a┬á\u0015b \u00ad@Y├Ą\u0099├žA├ŐgP├┤├Ş┬ĄF┬Ě\u009e┬▒\u008d┬ą├╝3├ô0\u0096├ů┬Č├ąJ \u0080\f\u008b├Ł├ô\"@├ł&]]\u007f)0┬ž\u0097┬┐┬░├Ĺ\u008b┬ž├ŹH\u0091Q├ś\u008b\u0081├č\u008d\u008c├ő F┬Ęv\u0010\"┬╝├Â ├ő┬░V├Ľ\u0095┬ź\u0004F(&┬Â┬Ą├Ť┬Ž├é├Â\u001c├»3l├Ś\u001f/+0G├á├┤8\u0085\u0006├ç├ło├Źlj>\u00ad\u001f~P\u001dE┬Ż\u000b├ą┬«\u0013cj├ów\u001a├┐^├ę\u009d├Ě\b/\u0002├Ç\u0082'$}├▓├«X├ô├╣2 \u008bo8W├ż├ĚI\u008b\u0015S5Z├ż[┬Ž┬Ě\u0096:├ŞV\u0086'o_<┬ó├äcH\u007f├×├ů"
         .length();
      char var16 = ' ';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = bhT(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     tIpzv = var20;
                     mekAn = new String[15];
                     OUvGJ = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[4];
                     int var3 = 0;
                     String var4 = "r\u0018\u0003\u008e\u009e@┬░\u0086├ź├Ö├×├┐p├ŞJ\t";
                     int var5 = "r\u0018\u0003\u008e\u009e@┬░\u0086├ź├Ö├×├┐p├ŞJ\t".length();
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
                                    BmhIr = var6;
                                    NeskM = new Integer[4];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "┬ę├í+X\u0002VuSV\u0006I├╝)\u007fVY";
                                 var5 = "┬ę├í+X\u0002VuSV\u0006I├╝)\u007fVY".length();
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

                  var16 = var17.charAt(var24);
                  break;
               default:
                  var20[var18++] = var36;
                  if ((var24 += var16) < var19) {
                     var16 = var17.charAt(var24);
                     continue label54;
                  }

                  var17 = "├č>Z\u001b┬ÂE\u001d├Ć├▓0<├âu\u0089@cl├ź├ü;├çI@┬Ž├ůa├ś├Ľ┬Ę\u0081├ł├ć├żO├ô┬»├ÇY├«┬┤\u0080├Ę┬á\u009f├ú\u009eH\u0000(├║Z\b├Ä┬żjc\u001aU\u0083\u000eB!┬á┬Ž├╗\u0081├Ę]┬Ą>c2├Ü5?├é┬Č\\\u0088\u0081├│┬▒S┬żv\u009a\u0005\u0002\u0002";
                  var19 = "├č>Z\u001b┬ÂE\u001d├Ć├▓0<├âu\u0089@cl├ź├ü;├çI@┬Ž├ůa├ś├Ľ┬Ę\u0081├ł├ć├żO├ô┬»├ÇY├«┬┤\u0080├Ę┬á\u009f├ú\u009eH\u0000(├║Z\b├Ä┬żjc\u001aU\u0083\u000eB!┬á┬Ž├╗\u0081├Ę]┬Ą>c2├Ü5?├é┬Č\\\u0088\u0081├│┬▒S┬żv\u009a\u0005\u0002\u0002"
                     .length();
                  var16 = '0';
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   @Override
   public boolean equals(Object param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ie.qWzEO J
      // 003: ldc2_w 91089224181807
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ie.bhR ()Ljava/lang/String;
      // 00b: astore 4
      // 00d: aload 1
      // 00e: aload 4
      // 010: ifnonnull 025
      // 013: aload 0
      // 014: if_acmpne 024
      // 017: goto 01e
      // 01a: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: aload 4
      // 027: ifnonnull 03e
      // 02a: instanceof sixtwo/ie
      // 02d: ifne 03d
      // 030: goto 037
      // 033: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: ireturn
      // 039: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 1
      // 03e: checkcast sixtwo/ie
      // 041: astore 5
      // 043: aload 5
      // 045: aload 4
      // 047: ifnonnull 05f
      // 04a: aload 0
      // 04b: invokevirtual sixtwo/ie.bhP (Ljava/lang/Object;)Z
      // 04e: ifne 05e
      // 051: goto 058
      // 054: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: bipush 0
      // 059: ireturn
      // 05a: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: aload 0
      // 05f: invokevirtual sixtwo/ie.bhF ()Lsixtwo/mG;
      // 062: astore 6
      // 064: aload 5
      // 066: invokevirtual sixtwo/ie.bhF ()Lsixtwo/mG;
      // 069: astore 7
      // 06b: aload 6
      // 06d: aload 4
      // 06f: ifnonnull 099
      // 072: ifnonnull 097
      // 075: goto 07c
      // 078: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: aload 7
      // 07e: aload 4
      // 080: ifnonnull 0b7
      // 083: goto 08a
      // 086: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: ifnull 0b3
      // 08d: goto 094
      // 090: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: goto 0ad
      // 097: aload 6
      // 099: aload 4
      // 09b: ifnonnull 0b7
      // 09e: aload 7
      // 0a0: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0a3: ifne 0b3
      // 0a6: goto 0ad
      // 0a9: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ac: athrow
      // 0ad: bipush 0
      // 0ae: ireturn
      // 0af: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: aload 0
      // 0b4: invokevirtual sixtwo/ie.bhG ()Lsixtwo/mG;
      // 0b7: astore 8
      // 0b9: aload 5
      // 0bb: invokevirtual sixtwo/ie.bhG ()Lsixtwo/mG;
      // 0be: astore 9
      // 0c0: aload 8
      // 0c2: aload 4
      // 0c4: ifnonnull 0ee
      // 0c7: ifnonnull 0ec
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: aload 9
      // 0d3: aload 4
      // 0d5: ifnonnull 10c
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: ifnull 108
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e8: athrow
      // 0e9: goto 102
      // 0ec: aload 8
      // 0ee: aload 4
      // 0f0: ifnonnull 10c
      // 0f3: aload 9
      // 0f5: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0f8: ifne 108
      // 0fb: goto 102
      // 0fe: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 101: athrow
      // 102: bipush 0
      // 103: ireturn
      // 104: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 107: athrow
      // 108: aload 0
      // 109: invokevirtual sixtwo/ie.bhH ()Lsixtwo/mG;
      // 10c: astore 10
      // 10e: aload 5
      // 110: invokevirtual sixtwo/ie.bhH ()Lsixtwo/mG;
      // 113: astore 11
      // 115: aload 10
      // 117: aload 4
      // 119: ifnonnull 143
      // 11c: ifnonnull 141
      // 11f: goto 126
      // 122: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: aload 11
      // 128: aload 4
      // 12a: ifnonnull 161
      // 12d: goto 134
      // 130: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 133: athrow
      // 134: ifnull 15d
      // 137: goto 13e
      // 13a: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13d: athrow
      // 13e: goto 157
      // 141: aload 10
      // 143: aload 4
      // 145: ifnonnull 161
      // 148: aload 11
      // 14a: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 14d: ifne 15d
      // 150: goto 157
      // 153: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 156: athrow
      // 157: bipush 0
      // 158: ireturn
      // 159: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15c: athrow
      // 15d: aload 0
      // 15e: invokevirtual sixtwo/ie.bhI ()Lsixtwo/mG;
      // 161: astore 12
      // 163: aload 5
      // 165: invokevirtual sixtwo/ie.bhI ()Lsixtwo/mG;
      // 168: astore 13
      // 16a: aload 12
      // 16c: aload 4
      // 16e: ifnonnull 198
      // 171: ifnonnull 196
      // 174: goto 17b
      // 177: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17a: athrow
      // 17b: aload 13
      // 17d: aload 4
      // 17f: ifnonnull 1b6
      // 182: goto 189
      // 185: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 188: athrow
      // 189: ifnull 1b2
      // 18c: goto 193
      // 18f: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 192: athrow
      // 193: goto 1ac
      // 196: aload 12
      // 198: aload 4
      // 19a: ifnonnull 1b6
      // 19d: aload 13
      // 19f: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 1a2: ifne 1b2
      // 1a5: goto 1ac
      // 1a8: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ab: athrow
      // 1ac: bipush 0
      // 1ad: ireturn
      // 1ae: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b1: athrow
      // 1b2: aload 0
      // 1b3: invokevirtual sixtwo/ie.bhJ ()Lsixtwo/mG;
      // 1b6: astore 14
      // 1b8: aload 5
      // 1ba: invokevirtual sixtwo/ie.bhJ ()Lsixtwo/mG;
      // 1bd: astore 15
      // 1bf: aload 14
      // 1c1: aload 4
      // 1c3: ifnonnull 1e5
      // 1c6: ifnonnull 1e3
      // 1c9: goto 1d0
      // 1cc: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cf: athrow
      // 1d0: aload 15
      // 1d2: ifnull 1ff
      // 1d5: goto 1dc
      // 1d8: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1db: athrow
      // 1dc: goto 1f9
      // 1df: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e2: athrow
      // 1e3: aload 14
      // 1e5: aload 15
      // 1e7: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 1ea: aload 4
      // 1ec: ifnonnull 200
      // 1ef: ifne 1ff
      // 1f2: goto 1f9
      // 1f5: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f8: athrow
      // 1f9: bipush 0
      // 1fa: ireturn
      // 1fb: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1fe: athrow
      // 1ff: bipush 1
      // 200: ireturn
   }

   @Override
   public String toString() {
      long var1 = qWzEO ^ 36586612259321L;
      String var10000 = String.valueOf(this.bhF());
      String var10001 = String.valueOf(this.bhG());
      String var10002 = String.valueOf(this.bhH());
      String var3 = String.valueOf(this.bhJ());
      String var4 = String.valueOf(this.bhI());
      String var5 = var10002;
      String var6 = var10001;
      String var7 = var10000;
      return bhW<"e">(12996, 1402717467274160459L ^ var1)
         + var7
         + bhW<"e">(12256, 6101709367474336875L ^ var1)
         + var6
         + bhW<"e">(4879, 6806378320299395206L ^ var1)
         + var5
         + bhW<"e">(4380, 3321931389602007696L ^ var1)
         + var4
         + bhW<"e">(13751, 2528405229592391225L ^ var1)
         + var3
         + ")";
   }

   @Override
   public int hashCode() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ie.qWzEO J
      // 003: ldc2_w 85692233698989
      // 006: lxor
      // 007: lstore 1
      // 008: sipush 6909
      // 00b: ldc2_w 1316038742570903490
      // 00e: lload 1
      // 00f: lxor
      // 010: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 015: istore 4
      // 017: bipush 1
      // 018: istore 5
      // 01a: invokestatic sixtwo/ie.bhR ()Ljava/lang/String;
      // 01d: aload 0
      // 01e: invokevirtual sixtwo/ie.bhF ()Lsixtwo/mG;
      // 021: astore 6
      // 023: astore 3
      // 024: iload 5
      // 026: sipush 26106
      // 029: ldc2_w 366855388218218695
      // 02c: lload 1
      // 02d: lxor
      // 02e: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 033: imul
      // 034: aload 6
      // 036: aload 3
      // 037: ifnonnull 05a
      // 03a: ifnonnull 058
      // 03d: goto 044
      // 040: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: sipush 20101
      // 047: ldc2_w 6653733693900944313
      // 04a: lload 1
      // 04b: lxor
      // 04c: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 051: goto 05d
      // 054: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: aload 6
      // 05a: invokevirtual java/lang/Object.hashCode ()I
      // 05d: iadd
      // 05e: istore 5
      // 060: aload 0
      // 061: invokevirtual sixtwo/ie.bhG ()Lsixtwo/mG;
      // 064: astore 7
      // 066: iload 5
      // 068: sipush 26106
      // 06b: ldc2_w 366855388218218695
      // 06e: lload 1
      // 06f: lxor
      // 070: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 075: imul
      // 076: aload 7
      // 078: aload 3
      // 079: ifnonnull 09c
      // 07c: ifnonnull 09a
      // 07f: goto 086
      // 082: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 085: athrow
      // 086: sipush 25428
      // 089: ldc2_w 729831070794178154
      // 08c: lload 1
      // 08d: lxor
      // 08e: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 093: goto 09f
      // 096: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: aload 7
      // 09c: invokevirtual java/lang/Object.hashCode ()I
      // 09f: iadd
      // 0a0: istore 5
      // 0a2: aload 0
      // 0a3: invokevirtual sixtwo/ie.bhH ()Lsixtwo/mG;
      // 0a6: astore 8
      // 0a8: iload 5
      // 0aa: sipush 26106
      // 0ad: ldc2_w 366855388218218695
      // 0b0: lload 1
      // 0b1: lxor
      // 0b2: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b7: imul
      // 0b8: aload 8
      // 0ba: aload 3
      // 0bb: ifnonnull 0de
      // 0be: ifnonnull 0dc
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: sipush 25428
      // 0cb: ldc2_w 729831070794178154
      // 0ce: lload 1
      // 0cf: lxor
      // 0d0: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d5: goto 0e1
      // 0d8: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: aload 8
      // 0de: invokevirtual java/lang/Object.hashCode ()I
      // 0e1: iadd
      // 0e2: istore 5
      // 0e4: aload 0
      // 0e5: invokevirtual sixtwo/ie.bhI ()Lsixtwo/mG;
      // 0e8: astore 9
      // 0ea: iload 5
      // 0ec: sipush 26106
      // 0ef: ldc2_w 366855388218218695
      // 0f2: lload 1
      // 0f3: lxor
      // 0f4: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f9: imul
      // 0fa: aload 9
      // 0fc: aload 3
      // 0fd: ifnonnull 120
      // 100: ifnonnull 11e
      // 103: goto 10a
      // 106: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: sipush 25428
      // 10d: ldc2_w 729831070794178154
      // 110: lload 1
      // 111: lxor
      // 112: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 117: goto 123
      // 11a: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11d: athrow
      // 11e: aload 9
      // 120: invokevirtual java/lang/Object.hashCode ()I
      // 123: iadd
      // 124: istore 5
      // 126: aload 0
      // 127: invokevirtual sixtwo/ie.bhJ ()Lsixtwo/mG;
      // 12a: astore 10
      // 12c: iload 5
      // 12e: sipush 26106
      // 131: ldc2_w 366855388218218695
      // 134: lload 1
      // 135: lxor
      // 136: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13b: imul
      // 13c: aload 10
      // 13e: aload 3
      // 13f: ifnonnull 162
      // 142: ifnonnull 160
      // 145: goto 14c
      // 148: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14b: athrow
      // 14c: sipush 25428
      // 14f: ldc2_w 729831070794178154
      // 152: lload 1
      // 153: lxor
      // 154: invokedynamic u (IJ)I bsm=sixtwo/ie.bhZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 159: goto 165
      // 15c: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15f: athrow
      // 160: aload 10
      // 162: invokevirtual java/lang/Object.hashCode ()I
      // 165: iadd
      // 166: istore 5
      // 168: iload 5
      // 16a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 16d: ifnonnull 17c
      // 170: ldc "FvtEVc"
      // 172: invokestatic sixtwo/ie.bhQ (Ljava/lang/String;)V
      // 175: goto 17c
      // 178: invokestatic sixtwo/ie.bhS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17b: athrow
      // 17c: ireturn
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = qWzEO ^ 139709897774172L;
      this.BfTib = this.readInt(var1, bhW<"e">(20574, 1437374259455305334L ^ var2));
      this.ptNnz = this.readInt(var1, bhW<"e">(9472, 480798074185863969L ^ var2));
      this.lARDN = this.readInt(var1, bhW<"e">(5517, 6144634241987142574L ^ var2));
      this.XyyGI = this.readInt(var1, bhW<"e">(12793, 3652279980828280790L ^ var2));
      this.yCtLw = this.readInt(var1, bhW<"e">(3475, 6276528031942048693L ^ var2));
   }

   @Override
   public JsonObject toJson() {
      long var1 = qWzEO ^ 106772796074711L;
      JsonObject var3 = new JsonObject();
      var3.addProperty(bhW<"e">(16634, 7323648333431097427L ^ var1), this.BfTib);
      var3.addProperty(bhW<"e">(16856, 5692921726412376438L ^ var1), this.ptNnz);
      var3.addProperty(bhW<"e">(3561, 8728377700043720006L ^ var1), this.lARDN);
      var3.addProperty(bhW<"e">(26137, 2557621098952650421L ^ var1), this.XyyGI);
      var3.addProperty(bhW<"e">(5967, 1224252905254232036L ^ var1), this.yCtLw);
      return var3;
   }

   public static ie bhE(mG var0, mG var1, mG var2, mG var3, mG var4) {
      return bhD(var0.coh(), var1.coh(), var2.coh(), var3.coh(), var4.coh());
   }

   public mG bhF() {
      return mG.cnQ(this.BfTib);
   }

   public mG bhI() {
      return mG.cnQ(this.XyyGI);
   }

   public mG bhJ() {
      return mG.cnQ(this.yCtLw);
   }

   public mG bhG() {
      return mG.cnQ(this.ptNnz);
   }

   public mG bhH() {
      return mG.cnQ(this.lARDN);
   }

   public ie bhL(int var1) {
      this.ptNnz = var1;
      return this;
   }

   private static CallSite bhZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bhY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ie" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public ie bhM(int var1) {
      this.lARDN = var1;
      return this;
   }

   public ie bhN(int var1) {
      this.XyyGI = var1;
      return this;
   }

   public static void bhQ(String var0) {
      XizrS = var0;
   }

   public ie bhK(int var1) {
      this.BfTib = var1;
      return this;
   }

   public static ie bhD(int var0, int var1, int var2, int var3, int var4) {
      return new ie().bhK(var0).bhL(var1).bhM(var2).bhN(var3).bhO(var4);
   }

   public ie bhO(int var1) {
      this.yCtLw = var1;
      return this;
   }

   private static MatchException bhS(MatchException var0) {
      return var0;
   }

   protected boolean bhP(Object var1) {
      return var1 instanceof ie;
   }

   private static CallSite bhW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bhV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ie" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bhT(byte[] var0) {
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

   public static String bhR() {
      return XizrS;
   }

   private static Object bhV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bhU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bhY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bhX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bhU(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 6913;
      if (mekAn[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])piaZM.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               piaZM.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ie", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = tIpzv[var5].getBytes("ISO-8859-1");
         mekAn[var5] = bhT(((Cipher)var4[0]).doFinal(var9));
      }

      return mekAn[var5];
   }

   private static int bhX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 2796;
      if (NeskM[var3] == null) {
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
         long var5 = BmhIr[var3];
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
         Object[] var9 = (Object[])OUvGJ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               OUvGJ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ie", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NeskM[var3] = var15;
      }

      return NeskM[var3];
   }
}
