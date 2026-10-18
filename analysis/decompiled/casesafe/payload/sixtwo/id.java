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

public class id implements rp {
   private float Qqebw;
   private float jIvgU;
   private float orOtZ;
   private float BgypB;
   private float RRbDv;
   private int YiIng;
   private float XbTKn;
   private int bzSgC;
   private static final long McFCz = gb.aYR(-5013027614629213397L, 2779332694424698739L, MethodHandles.lookup().lookupClass()).a(279584518025401L);
   private static final String[] NoJGG;
   private static final String[] mcPaW;
   private static final Map fzQcm = new HashMap(13);
   private static final long[] Aeqvg;
   private static final Integer[] QlXjr;
   private static final Map JuNfN;

   static {
      long var11 = McFCz ^ 122894762246623L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[24];
      int var18 = 0;
      String var17 = "q\u0011├í\u009c\u0010z\u0007\u0087├Á\u0005\"\u001a├Ü\u0011\u009c├ą\u0018├ö┬║┬Á┬▒\u001a\u007f┬Â┬ąA~\u0007%├ő├É;+\u0017├ź\u00805;}├Ę┬Â\u0010'@gu\u00ad├Ě*g┬╗┬ę\u0091H├Ł\u008a\u001a\u00ad\u0018┬║y├Ś+\u009f├î\u0019\u0086>\u0094ix┬Ą\u0084├ů\u009a├░x├▒tzp┬¬├ą\u0018\u00ad┬í~\u0085├Ě┬Ż├ę2┬ž?┬┤\u0003├¬>┬│├ô├ź├ë)0├É├╝\u0091\u009d mm┬Ę4├Ĺ/cY├Ö├Ć├Č\u00ad├Ç\u001d_X\u0099├»┬»B├«\u0092~a\u001b┬░/\u0012├ť\u0093┬Ž\u0088 ├¬\u0010CA_F\\├ĺ├ÁY├í\u008c┬Ą┬║├╝├│├║├░+\u0097w\u0019\u0016W\u0007\u001d├ë\u0092├Ęn├ú\u0010 ├ľ┬ę┬ą;/\u0012┬ž├║V&E\u0004├ł\u0003├Äm┬║├»\u0080\u0019p\u0093\u0092├í^├«\u0094┬Ş\u009ag<{\u0010\u0007\u0019'j43\u0087\u001e├▒;\u0081├░├şo├ö\u008a ┬ó┬žY\u007fk%├│\u0014E├ž\u0016Q├ç4┬┤┬ó├î├Ľ_├î(├Ż┬┤z\u000eO\u0085:}u┬ź\u001a ;┬Č├Ź\u009c3├ö┬╝\u0086\u0081┬Ž├ó├Ś\u0010?├╗|\\\u0085├╝\u001c├ů[┬╣EV├ů\u00ad1K\u0013W┬ź\u0010$├Ż┬ż├ö├âN)@\u0080b├ęUI┬ży\u0000\u0010\u0082\u0006i\u0004├╣┬│├âZ\n=\u0000\u007f\u0003+├Ć├╣\u0018├â\u008e]├»\u009fm┬│┬▓├î├Ľ┬Â┬ĄI├Ĺ\u0097Se├ĺ├╝├Ł\u008d&├ç├Ć\u0018\u0002├░%├Ťu\u0006t├╗├ć\u0082├▒\u00ad├Ą┬╣├Â6[\u0000\u0092├Ĺ├«\u009a├ť┬▒\u0010~┬á.┬┐%A┬┐\u0012\t\u007fPSe\u0092├ž2 \u009a├Ć\u0003x)\u008dm├í\u008f┬▓G├Â├źm├«\u0017┬á\u00ad├Ł├ĺ\u0093A\u0006├ő{├Ç9!├Ł\u001d\u00ad\u008d \u0099├üm├î├î├ş┬żv├ĺf├âV7.r┬░e┬Ěv┬í├É├č\u0014v\u0096\u0088!q\u0087V├Á\u0014 f\u00979S3\u0086├â├Ł;├║o┬ż├ž├Ä\u0012z\\\u001b\u0087.DFM\u008e,├č┬╣┬ęP├í┬»\u001c \u00176┬┤G\u0000┬║┬┤apr}\u009e\u009b┬«\u008d\u0010\u0092├ö~s├żl\u001c├á├čI\u0000\\dr\u008a\u0019 ├Éi├Ś┬║H?`├ón├íN\"├Ź#xb\u0018├Ľ┬Á\u0082┬Şf\u0018\u008f├ů\u001d├Ü├«├Ę+\u001e├╝@\u000e\u0095├ä8R├ä├í'├Ł├│┬á├ş├Ł\u0007B├╗w\u0004G┬Á\u00ad\u001f┬¬\u0081\u0095#Y\u009e\u0013\u0016V┬│\\3┬░\u00ad\u001b├Üa\u009eu├¬├Ü\b├ż)S├ąm├Ş┬Ě\u0017├┐├ś┬▒├Ş\u0099+├ä*U├Ěr├Ž";
      int var19 = "q\u0011├í\u009c\u0010z\u0007\u0087├Á\u0005\"\u001a├Ü\u0011\u009c├ą\u0018├ö┬║┬Á┬▒\u001a\u007f┬Â┬ąA~\u0007%├ő├É;+\u0017├ź\u00805;}├Ę┬Â\u0010'@gu\u00ad├Ě*g┬╗┬ę\u0091H├Ł\u008a\u001a\u00ad\u0018┬║y├Ś+\u009f├î\u0019\u0086>\u0094ix┬Ą\u0084├ů\u009a├░x├▒tzp┬¬├ą\u0018\u00ad┬í~\u0085├Ě┬Ż├ę2┬ž?┬┤\u0003├¬>┬│├ô├ź├ë)0├É├╝\u0091\u009d mm┬Ę4├Ĺ/cY├Ö├Ć├Č\u00ad├Ç\u001d_X\u0099├»┬»B├«\u0092~a\u001b┬░/\u0012├ť\u0093┬Ž\u0088 ├¬\u0010CA_F\\├ĺ├ÁY├í\u008c┬Ą┬║├╝├│├║├░+\u0097w\u0019\u0016W\u0007\u001d├ë\u0092├Ęn├ú\u0010 ├ľ┬ę┬ą;/\u0012┬ž├║V&E\u0004├ł\u0003├Äm┬║├»\u0080\u0019p\u0093\u0092├í^├«\u0094┬Ş\u009ag<{\u0010\u0007\u0019'j43\u0087\u001e├▒;\u0081├░├şo├ö\u008a ┬ó┬žY\u007fk%├│\u0014E├ž\u0016Q├ç4┬┤┬ó├î├Ľ_├î(├Ż┬┤z\u000eO\u0085:}u┬ź\u001a ;┬Č├Ź\u009c3├ö┬╝\u0086\u0081┬Ž├ó├Ś\u0010?├╗|\\\u0085├╝\u001c├ů[┬╣EV├ů\u00ad1K\u0013W┬ź\u0010$├Ż┬ż├ö├âN)@\u0080b├ęUI┬ży\u0000\u0010\u0082\u0006i\u0004├╣┬│├âZ\n=\u0000\u007f\u0003+├Ć├╣\u0018├â\u008e]├»\u009fm┬│┬▓├î├Ľ┬Â┬ĄI├Ĺ\u0097Se├ĺ├╝├Ł\u008d&├ç├Ć\u0018\u0002├░%├Ťu\u0006t├╗├ć\u0082├▒\u00ad├Ą┬╣├Â6[\u0000\u0092├Ĺ├«\u009a├ť┬▒\u0010~┬á.┬┐%A┬┐\u0012\t\u007fPSe\u0092├ž2 \u009a├Ć\u0003x)\u008dm├í\u008f┬▓G├Â├źm├«\u0017┬á\u00ad├Ł├ĺ\u0093A\u0006├ő{├Ç9!├Ł\u001d\u00ad\u008d \u0099├üm├î├î├ş┬żv├ĺf├âV7.r┬░e┬Ěv┬í├É├č\u0014v\u0096\u0088!q\u0087V├Á\u0014 f\u00979S3\u0086├â├Ł;├║o┬ż├ž├Ä\u0012z\\\u001b\u0087.DFM\u008e,├č┬╣┬ęP├í┬»\u001c \u00176┬┤G\u0000┬║┬┤apr}\u009e\u009b┬«\u008d\u0010\u0092├ö~s├żl\u001c├á├čI\u0000\\dr\u008a\u0019 ├Éi├Ś┬║H?`├ón├íN\"├Ź#xb\u0018├Ľ┬Á\u0082┬Şf\u0018\u008f├ů\u001d├Ü├«├Ę+\u001e├╝@\u000e\u0095├ä8R├ä├í'├Ł├│┬á├ş├Ł\u0007B├╗w\u0004G┬Á\u00ad\u001f┬¬\u0081\u0095#Y\u009e\u0013\u0016V┬│\\3┬░\u00ad\u001b├Üa\u009eu├¬├Ü\b├ż)S├ąm├Ş┬Ě\u0017├┐├ś┬▒├Ş\u0099+├ä*U├Ěr├Ž"
         .length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = bhw(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     NoJGG = var20;
                     mcPaW = new String[24];
                     JuNfN = new HashMap(13);
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
                     String var4 = "YZ\u009e{\u001e\u0081\u001e├ü)8s┬ó┬ę├╗{┬Á";
                     int var5 = "YZ\u009e{\u001e\u0081\u001e├ü)8s┬ó┬ę├╗{┬Á".length();
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
                                    Aeqvg = var6;
                                    QlXjr = new Integer[4];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "┬Č┬żq┬╣\"e├ÜAz:├┤┬Ęx,>┬Ą";
                                 var5 = "┬Č┬żq┬╣\"e├ÜAz:├┤┬Ęx,>┬Ą".length();
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

                  var17 = "(\u0011├ú┬í1├ÜV3\n├ő\u001czJ┬¬R├ťYMx\u0089(0├░K├╝\u0089b\u000b%├ł├Ş3 ;\u0002├îU\u0005├║Ds2\u0094\u0015D┬Ę┬ŻH3\u009f├ó&;\u000f\u001b├ü├ť├ç┬┤1├║\u008f9┬¬W";
                  var19 = "(\u0011├ú┬í1├ÜV3\n├ő\u001czJ┬¬R├ťYMx\u0089(0├░K├╝\u0089b\u000b%├ł├Ş3 ;\u0002├îU\u0005├║Ds2\u0094\u0015D┬Ę┬ŻH3\u009f├ó&;\u000f\u001b├ü├ť├ç┬┤1├║\u008f9┬¬W"
                     .length();
                  var16 = ' ';
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
      // 000: getstatic sixtwo/id.McFCz J
      // 003: ldc2_w 102123321563100
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
      // 01a: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: aload 4
      // 027: ifnonnull 03e
      // 02a: instanceof sixtwo/id
      // 02d: ifne 03d
      // 030: goto 037
      // 033: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: ireturn
      // 039: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 1
      // 03e: checkcast sixtwo/id
      // 041: astore 5
      // 043: aload 5
      // 045: aload 0
      // 046: invokevirtual sixtwo/id.bhu (Ljava/lang/Object;)Z
      // 049: aload 4
      // 04b: ifnonnull 06a
      // 04e: ifne 05e
      // 051: goto 058
      // 054: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: bipush 0
      // 059: ireturn
      // 05a: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: aload 0
      // 05f: invokevirtual sixtwo/id.bhg ()F
      // 062: aload 5
      // 064: invokevirtual sixtwo/id.bhg ()F
      // 067: invokestatic java/lang/Float.compare (FF)I
      // 06a: aload 4
      // 06c: ifnonnull 08b
      // 06f: ifeq 07f
      // 072: goto 079
      // 075: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 078: athrow
      // 079: bipush 0
      // 07a: ireturn
      // 07b: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: aload 0
      // 080: invokevirtual sixtwo/id.bhh ()F
      // 083: aload 5
      // 085: invokevirtual sixtwo/id.bhh ()F
      // 088: invokestatic java/lang/Float.compare (FF)I
      // 08b: aload 4
      // 08d: ifnonnull 0ac
      // 090: ifeq 0a0
      // 093: goto 09a
      // 096: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: bipush 0
      // 09b: ireturn
      // 09c: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: invokevirtual sixtwo/id.bhi ()F
      // 0a4: aload 5
      // 0a6: invokevirtual sixtwo/id.bhi ()F
      // 0a9: invokestatic java/lang/Float.compare (FF)I
      // 0ac: aload 4
      // 0ae: ifnonnull 0cd
      // 0b1: ifeq 0c1
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: bipush 0
      // 0bc: ireturn
      // 0bd: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: aload 0
      // 0c2: invokevirtual sixtwo/id.bhj ()F
      // 0c5: aload 5
      // 0c7: invokevirtual sixtwo/id.bhj ()F
      // 0ca: invokestatic java/lang/Float.compare (FF)I
      // 0cd: aload 4
      // 0cf: ifnonnull 0fa
      // 0d2: ifeq 0e2
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: bipush 0
      // 0dd: ireturn
      // 0de: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e1: athrow
      // 0e2: aload 0
      // 0e3: aload 4
      // 0e5: ifnonnull 104
      // 0e8: invokevirtual sixtwo/id.bhk ()F
      // 0eb: aload 5
      // 0ed: invokevirtual sixtwo/id.bhk ()F
      // 0f0: invokestatic java/lang/Float.compare (FF)I
      // 0f3: goto 0fa
      // 0f6: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f9: athrow
      // 0fa: ifeq 103
      // 0fd: bipush 0
      // 0fe: ireturn
      // 0ff: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: aload 0
      // 104: invokevirtual sixtwo/id.bhe ()Lsixtwo/mG;
      // 107: astore 6
      // 109: aload 5
      // 10b: invokevirtual sixtwo/id.bhe ()Lsixtwo/mG;
      // 10e: astore 7
      // 110: aload 6
      // 112: aload 4
      // 114: ifnonnull 136
      // 117: ifnonnull 134
      // 11a: goto 121
      // 11d: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: aload 7
      // 123: ifnull 150
      // 126: goto 12d
      // 129: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12c: athrow
      // 12d: goto 14a
      // 130: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 133: athrow
      // 134: aload 6
      // 136: aload 7
      // 138: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 13b: aload 4
      // 13d: ifnonnull 168
      // 140: ifne 150
      // 143: goto 14a
      // 146: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 149: athrow
      // 14a: bipush 0
      // 14b: ireturn
      // 14c: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: aload 0
      // 151: aload 4
      // 153: ifnonnull 172
      // 156: invokevirtual sixtwo/id.bhl ()F
      // 159: aload 5
      // 15b: invokevirtual sixtwo/id.bhl ()F
      // 15e: invokestatic java/lang/Float.compare (FF)I
      // 161: goto 168
      // 164: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 167: athrow
      // 168: ifeq 171
      // 16b: bipush 0
      // 16c: ireturn
      // 16d: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 170: athrow
      // 171: aload 0
      // 172: invokevirtual sixtwo/id.bhf ()Lsixtwo/mG;
      // 175: astore 8
      // 177: aload 5
      // 179: invokevirtual sixtwo/id.bhf ()Lsixtwo/mG;
      // 17c: astore 9
      // 17e: aload 8
      // 180: aload 4
      // 182: ifnonnull 1a4
      // 185: ifnonnull 1a2
      // 188: goto 18f
      // 18b: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18e: athrow
      // 18f: aload 9
      // 191: ifnull 1be
      // 194: goto 19b
      // 197: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19a: athrow
      // 19b: goto 1b8
      // 19e: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a1: athrow
      // 1a2: aload 8
      // 1a4: aload 9
      // 1a6: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 1a9: aload 4
      // 1ab: ifnonnull 1bf
      // 1ae: ifne 1be
      // 1b1: goto 1b8
      // 1b4: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b7: athrow
      // 1b8: bipush 0
      // 1b9: ireturn
      // 1ba: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bd: athrow
      // 1be: bipush 1
      // 1bf: ireturn
   }

   @Override
   public String toString() {
      long var1 = McFCz ^ 77431593901282L;
      float var10000 = this.bhg();
      float var10001 = this.bhh();
      float var10002 = this.bhi();
      float var10003 = this.bhj();
      float var10004 = this.bhk();
      String var10005 = String.valueOf(this.bhe());
      String var3 = String.valueOf(this.bhf());
      float var4 = this.bhl();
      String var5 = var10005;
      float var6 = var10004;
      float var7 = var10003;
      float var8 = var10002;
      float var9 = var10001;
      float var10 = var10000;
      return bhz<"o">(21352, 3620844250966097185L ^ var1)
         + var10
         + bhz<"o">(7277, 8975680269232452130L ^ var1)
         + var9
         + bhz<"o">(19270, 6555644457605752084L ^ var1)
         + var8
         + bhz<"o">(14306, 4113161043097819560L ^ var1)
         + var7
         + bhz<"o">(23009, 8069610867015907242L ^ var1)
         + var6
         + bhz<"o">(30386, 2559467276732389611L ^ var1)
         + var5
         + bhz<"o">(8946, 6343581990284397736L ^ var1)
         + var4
         + bhz<"o">(1708, 1974394744627570932L ^ var1)
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
      // 000: getstatic sixtwo/id.McFCz J
      // 003: ldc2_w 50751765109485
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ie.bhR ()Ljava/lang/String;
      // 00b: sipush 11443
      // 00e: ldc2_w 8657934632194307775
      // 011: lload 1
      // 012: lxor
      // 013: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 018: istore 4
      // 01a: astore 3
      // 01b: bipush 1
      // 01c: istore 5
      // 01e: iload 5
      // 020: sipush 22093
      // 023: ldc2_w 6245367369324104768
      // 026: lload 1
      // 027: lxor
      // 028: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 02d: imul
      // 02e: aload 0
      // 02f: invokevirtual sixtwo/id.bhg ()F
      // 032: invokestatic java/lang/Float.floatToIntBits (F)I
      // 035: iadd
      // 036: istore 5
      // 038: iload 5
      // 03a: sipush 22093
      // 03d: ldc2_w 6245367369324104768
      // 040: lload 1
      // 041: lxor
      // 042: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 047: imul
      // 048: aload 0
      // 049: invokevirtual sixtwo/id.bhh ()F
      // 04c: invokestatic java/lang/Float.floatToIntBits (F)I
      // 04f: iadd
      // 050: istore 5
      // 052: iload 5
      // 054: sipush 22093
      // 057: ldc2_w 6245367369324104768
      // 05a: lload 1
      // 05b: lxor
      // 05c: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 061: imul
      // 062: aload 0
      // 063: invokevirtual sixtwo/id.bhi ()F
      // 066: invokestatic java/lang/Float.floatToIntBits (F)I
      // 069: iadd
      // 06a: istore 5
      // 06c: iload 5
      // 06e: sipush 22093
      // 071: ldc2_w 6245367369324104768
      // 074: lload 1
      // 075: lxor
      // 076: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 07b: imul
      // 07c: aload 0
      // 07d: invokevirtual sixtwo/id.bhj ()F
      // 080: invokestatic java/lang/Float.floatToIntBits (F)I
      // 083: iadd
      // 084: istore 5
      // 086: iload 5
      // 088: sipush 22093
      // 08b: ldc2_w 6245367369324104768
      // 08e: lload 1
      // 08f: lxor
      // 090: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 095: imul
      // 096: aload 0
      // 097: invokevirtual sixtwo/id.bhk ()F
      // 09a: invokestatic java/lang/Float.floatToIntBits (F)I
      // 09d: iadd
      // 09e: istore 5
      // 0a0: aload 0
      // 0a1: invokevirtual sixtwo/id.bhe ()Lsixtwo/mG;
      // 0a4: astore 6
      // 0a6: iload 5
      // 0a8: sipush 22093
      // 0ab: ldc2_w 6245367369324104768
      // 0ae: lload 1
      // 0af: lxor
      // 0b0: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b5: imul
      // 0b6: aload 6
      // 0b8: aload 3
      // 0b9: ifnonnull 0dc
      // 0bc: ifnonnull 0da
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: sipush 14081
      // 0c9: ldc2_w 2915447062779227407
      // 0cc: lload 1
      // 0cd: lxor
      // 0ce: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d3: goto 0df
      // 0d6: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: aload 6
      // 0dc: invokevirtual java/lang/Object.hashCode ()I
      // 0df: iadd
      // 0e0: istore 5
      // 0e2: iload 5
      // 0e4: sipush 22093
      // 0e7: ldc2_w 6245367369324104768
      // 0ea: lload 1
      // 0eb: lxor
      // 0ec: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f1: imul
      // 0f2: aload 0
      // 0f3: invokevirtual sixtwo/id.bhl ()F
      // 0f6: invokestatic java/lang/Float.floatToIntBits (F)I
      // 0f9: iadd
      // 0fa: istore 5
      // 0fc: aload 0
      // 0fd: invokevirtual sixtwo/id.bhf ()Lsixtwo/mG;
      // 100: astore 7
      // 102: iload 5
      // 104: sipush 22093
      // 107: ldc2_w 6245367369324104768
      // 10a: lload 1
      // 10b: lxor
      // 10c: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 111: imul
      // 112: aload 7
      // 114: aload 3
      // 115: ifnonnull 138
      // 118: ifnonnull 136
      // 11b: goto 122
      // 11e: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 121: athrow
      // 122: sipush 19000
      // 125: ldc2_w 2324698106096980023
      // 128: lload 1
      // 129: lxor
      // 12a: invokedynamic k (IJ)I bsm=sixtwo/id.bhC (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 12f: goto 13b
      // 132: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 135: athrow
      // 136: aload 7
      // 138: invokevirtual java/lang/Object.hashCode ()I
      // 13b: iadd
      // 13c: istore 5
      // 13e: iload 5
      // 140: aload 3
      // 141: ifnull 150
      // 144: ldc "xXflVb"
      // 146: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 149: goto 150
      // 14c: invokestatic sixtwo/id.bhv (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: ireturn
   }

   public float bhk() {
      return this.RRbDv;
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = McFCz ^ 79113157104234L;
      this.Qqebw = this.readFloat(var1, bhz<"o">(13485, 6074187680725619816L ^ var2));
      this.jIvgU = this.readFloat(var1, bhz<"o">(20952, 6535150623156875534L ^ var2));
      this.orOtZ = this.readFloat(var1, bhz<"o">(11121, 5530175444525829034L ^ var2));
      this.BgypB = this.readFloat(var1, bhz<"o">(25088, 7859666360592925376L ^ var2));
      this.RRbDv = this.readFloat(var1, bhz<"o">(12461, 3183882836220072050L ^ var2));
      this.YiIng = this.readInt(var1, bhz<"o">(10247, 9141769922347681985L ^ var2));
      this.XbTKn = this.readFloat(var1, bhz<"o">(1716, 1202143282982184553L ^ var2));
      this.bzSgC = this.readInt(var1, bhz<"o">(30762, 2474842252930816244L ^ var2));
   }

   @Override
   public JsonObject toJson() {
      long var1 = McFCz ^ 98924704607457L;
      JsonObject var3 = new JsonObject();
      var3.addProperty(bhz<"o">(25865, 1896502153737239366L ^ var1), this.Qqebw);
      var3.addProperty(bhz<"o">(10842, 5866146539238634501L ^ var1), this.jIvgU);
      var3.addProperty(bhz<"o">(2293, 3791183968263149222L ^ var1), this.orOtZ);
      var3.addProperty(bhz<"o">(5711, 2181450787712206871L ^ var1), this.BgypB);
      var3.addProperty(bhz<"o">(735, 176451420946898056L ^ var1), this.RRbDv);
      var3.addProperty(bhz<"o">(16725, 4078049931956281099L ^ var1), this.YiIng);
      var3.addProperty(bhz<"o">(20010, 365902912040292472L ^ var1), this.XbTKn);
      var3.addProperty(bhz<"o">(21501, 6346884368510143905L ^ var1), this.bzSgC);
      return var3;
   }

   public mG bhe() {
      return mG.cnQ(this.YiIng);
   }

   public mG bhf() {
      return mG.cnQ(this.bzSgC);
   }

   public float bhl() {
      return this.XbTKn;
   }

   public float bhg() {
      return this.Qqebw;
   }

   public float bhj() {
      return this.BgypB;
   }

   public float bhh() {
      return this.jIvgU;
   }

   public float bhi() {
      return this.orOtZ;
   }

   public static id bhd(float var0, float var1, float var2, float var3, float var4, mG var5, float var6, mG var7) {
      return new id().bhm(var0).bhn(var1).bho(var2).bhp(var3).bhq(var4).bhr(var5.coh()).bhs(var6).bht(var7.coh());
   }

   public id bhm(float var1) {
      this.Qqebw = var1;
      return this;
   }

   public id bhn(float var1) {
      this.jIvgU = var1;
      return this;
   }

   private static int bhA(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16296;
      if (QlXjr[var3] == null) {
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
         long var5 = Aeqvg[var3];
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
         Object[] var9 = (Object[])JuNfN.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JuNfN.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/id", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         QlXjr[var3] = var15;
      }

      return QlXjr[var3];
   }

   private static CallSite bhC(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bhB".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/id" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bhx(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 3575;
      if (mcPaW[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])fzQcm.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               fzQcm.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/id", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = NoJGG[var5].getBytes("ISO-8859-1");
         mcPaW[var5] = bhw(((Cipher)var4[0]).doFinal(var9));
      }

      return mcPaW[var5];
   }

   private static Object bhy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bhx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bhv(MatchException var0) {
      return var0;
   }

   private static CallSite bhz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bhy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/id" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bhw(byte[] var0) {
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

   public id bhq(float var1) {
      this.RRbDv = var1;
      return this;
   }

   protected boolean bhu(Object var1) {
      return var1 instanceof id;
   }

   public id bho(float var1) {
      this.orOtZ = var1;
      return this;
   }

   public id bhs(float var1) {
      this.XbTKn = var1;
      return this;
   }

   public id bhr(int var1) {
      this.YiIng = var1;
      return this;
   }

   public id bhp(float var1) {
      this.BgypB = var1;
      return this;
   }

   private static int bhB(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bhA(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public id bht(int var1) {
      this.bzSgC = var1;
      return this;
   }
}
