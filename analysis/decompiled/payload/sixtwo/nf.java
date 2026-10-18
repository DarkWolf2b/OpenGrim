package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;

public class nf implements rp {
   private transient boolean lhkSE = true;
   private String BDwrc;
   private nc RVkIg;
   private nd DUmbm;
   private List<nd> SkOYI = new ArrayList<>();
   private ne HJcWp;
   private List<ng> CrfVL = new ArrayList<>();
   private long KTPlM;
   private long oeMul;
   private transient boolean vRKRG;
   private static int fUtsn;
   private static final long swToy = gb.aYR(6230878624443814068L, -7722965818960441323L, MethodHandles.lookup().lookupClass()).a(149748787231919L);
   private static final String[] QVzDB;
   private static final String[] DFnfj;
   private static final Map CIsYm = new HashMap(13);
   private static final long[] yZmOu;
   private static final Integer[] ktNLe;
   private static final Map tdXcS;

   static {
      cun(12);
      long var11 = swToy ^ 74343483594231L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[26];
      int var18 = 0;
      String var17 = "\u007fÐ\u0085µ£AÐü[ât¦\u007fLX\u0016¸\\d\u0080\u0016ä v\u007fá\u001dÙXçVÆ\u0089w¿\u0093\u001bØ\t(\u0018rµÁÚT\u0005aÑ¨\u0097\u0006n>üNÜ\u0092¦¿WÍÏ¾\u0083\u0018-)~\u0081´\u0005\u0018*\u001a\u0087\u008d«;kR=ø4`\u0091ÁÛ§e\u0010\u009c»\u0089§zXêÞÿ^\u009e\u0089\u001e§fÅ\u0018@\u0004ïü=8\u000e\u008eÌ\u008f[(É0à\u0019¸\u000bQÒ~,\u009cä\u0010\u001bÁ\u00adµ\n\u000eÒ\u000bÖ{Ö¼\u009c,¢\u0001\u0018~îúè«\u0080tÏ5õ\u0002?\u00adÈH7ÕÉ?ì&«\u009dñ\u0018:í¢\u008c*ÜèA:2E\u0083þóÛ@ª1Í×jÔN¾ t,X\u0085\b\u0010è¾ê6\u00874}W\bîC\u007f\nE(Ý|Ø'â\t§d\u008b\u001d7 ß\u0096£rÕr?Ü;t\u0001¯?%\u0017\u000f«L`Ð)Ç½Éb\n\u0087M×\u0007d¡(÷Ù¹Ýé\u008bÖ\u001b[R\u009f\u009e\u0017#bSWnä\u001b¼¶Ö¶Ã\u0017<Y©\u001c\u0085±¸\u009c\u001agÍ\u0091)G\u0018\u0013xÚØ#\u0004ØíHåS\u009a\u0013Üý\u008a}\u000fÞà\u0090q\u009f² \u0090\u008bÿc\u0016\u0098Ä?\u0018Ñd\u008d\u0012@\u0012jøªÆA¬\u0097dþ*Û-k\u008a\u0080°\u008b(\u009cñÅ\u0016J<[\u009a\u0014\u0010Â\u000bG\u0089¦2iW&ú\u000fõ\u0081\u0098³ýÉýÏÇÿ±³\u009e=\u0012x>yü ïV\u0083\u008b\u009f\u001d«¼ÿéu\u008fC-\u0019\u0005\\_8ÝS\u007f^-*úKÃ\u0016 6\u001e \u0000kJ\u0015W\u0095À=\u000b\u0084«,.À\u0087 4ÙQw~\u009e\r£.æ@Â\u0014¶ÁÖ8\u0000\u008d<lß5PP%\u0096G\u001be¿\u0097¹·Ðm¯ù+SkbÙ\u0010x¢+T\u0010ÃvüÎ¿vtÎÇ\u0091Ìv\u000bÂ\u0016:o¢VxLöB¦\u0018®\u0096TôÂíêZ\u001a\u009e\u0004\u0081W°\u0004ÞHýåi$v\\u\u0018$öGx\u0087ÜÍhY\u0010\u0016H\u0088÷]ð\u0002->\nG\u009f°\n âR\u008c¾RûW\u009d<I³\u000f\u0098\fI\u009aêÈc«ÏÒ([¬°[¥\u0086\u009bHâ BÞb^ßã\u0084t´\u0095ìGØôêPkLK4w³k÷ï\u0017½ùiºQ²(Cï#jÞ\u0006'KQ\u008cÎÈWÚ®ãí\u0016ø\u009d\u0083\u009d\u001c¾G÷3#$¼\u008e²yì*[h¦tW(\u0016P\u009ba^L(<ü¡ø³\u0013~/´É^\u0014Ç·\u000b#ó}ÞcÏS\u0004\u0091Í\u008e\u0000-?(_Å\u009b \u00ad\u009a¦\u001dÚV½\u0096,G¥\u00874cA\r,úÖ6<ô\u00ad\\y\u0087(SBtáÖ";
      int var19 = "\u007fÐ\u0085µ£AÐü[ât¦\u007fLX\u0016¸\\d\u0080\u0016ä v\u007fá\u001dÙXçVÆ\u0089w¿\u0093\u001bØ\t(\u0018rµÁÚT\u0005aÑ¨\u0097\u0006n>üNÜ\u0092¦¿WÍÏ¾\u0083\u0018-)~\u0081´\u0005\u0018*\u001a\u0087\u008d«;kR=ø4`\u0091ÁÛ§e\u0010\u009c»\u0089§zXêÞÿ^\u009e\u0089\u001e§fÅ\u0018@\u0004ïü=8\u000e\u008eÌ\u008f[(É0à\u0019¸\u000bQÒ~,\u009cä\u0010\u001bÁ\u00adµ\n\u000eÒ\u000bÖ{Ö¼\u009c,¢\u0001\u0018~îúè«\u0080tÏ5õ\u0002?\u00adÈH7ÕÉ?ì&«\u009dñ\u0018:í¢\u008c*ÜèA:2E\u0083þóÛ@ª1Í×jÔN¾ t,X\u0085\b\u0010è¾ê6\u00874}W\bîC\u007f\nE(Ý|Ø'â\t§d\u008b\u001d7 ß\u0096£rÕr?Ü;t\u0001¯?%\u0017\u000f«L`Ð)Ç½Éb\n\u0087M×\u0007d¡(÷Ù¹Ýé\u008bÖ\u001b[R\u009f\u009e\u0017#bSWnä\u001b¼¶Ö¶Ã\u0017<Y©\u001c\u0085±¸\u009c\u001agÍ\u0091)G\u0018\u0013xÚØ#\u0004ØíHåS\u009a\u0013Üý\u008a}\u000fÞà\u0090q\u009f² \u0090\u008bÿc\u0016\u0098Ä?\u0018Ñd\u008d\u0012@\u0012jøªÆA¬\u0097dþ*Û-k\u008a\u0080°\u008b(\u009cñÅ\u0016J<[\u009a\u0014\u0010Â\u000bG\u0089¦2iW&ú\u000fõ\u0081\u0098³ýÉýÏÇÿ±³\u009e=\u0012x>yü ïV\u0083\u008b\u009f\u001d«¼ÿéu\u008fC-\u0019\u0005\\_8ÝS\u007f^-*úKÃ\u0016 6\u001e \u0000kJ\u0015W\u0095À=\u000b\u0084«,.À\u0087 4ÙQw~\u009e\r£.æ@Â\u0014¶ÁÖ8\u0000\u008d<lß5PP%\u0096G\u001be¿\u0097¹·Ðm¯ù+SkbÙ\u0010x¢+T\u0010ÃvüÎ¿vtÎÇ\u0091Ìv\u000bÂ\u0016:o¢VxLöB¦\u0018®\u0096TôÂíêZ\u001a\u009e\u0004\u0081W°\u0004ÞHýåi$v\\u\u0018$öGx\u0087ÜÍhY\u0010\u0016H\u0088÷]ð\u0002->\nG\u009f°\n âR\u008c¾RûW\u009d<I³\u000f\u0098\fI\u009aêÈc«ÏÒ([¬°[¥\u0086\u009bHâ BÞb^ßã\u0084t´\u0095ìGØôêPkLK4w³k÷ï\u0017½ùiºQ²(Cï#jÞ\u0006'KQ\u008cÎÈWÚ®ãí\u0016ø\u009d\u0083\u009d\u001c¾G÷3#$¼\u008e²yì*[h¦tW(\u0016P\u009ba^L(<ü¡ø³\u0013~/´É^\u0014Ç·\u000b#ó}ÞcÏS\u0004\u0091Í\u008e\u0000-?(_Å\u009b \u00ad\u009a¦\u001dÚV½\u0096,G¥\u00874cA\r,úÖ6<ô\u00ad\\y\u0087(SBtáÖ"
         .length();
      char var16 = '(';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = cur(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     QVzDB = var20;
                     DFnfj = new String[26];
                     tdXcS = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[8];
                     int var3 = 0;
                     String var4 = "l\u009b\u0081Ëç8\u00adÍµ_ÀÌâ¬íå h\u0083Ùö\u001199\u0095¿ô\u001da*h}¬D½í\u001dN\u0096¦WálòC?\"Z";
                     int var5 = "l\u009b\u0081Ëç8\u00adÍµ_ÀÌâ¬íå h\u0083Ùö\u001199\u0095¿ô\u001da*h}¬D½í\u001dN\u0096¦WálòC?\"Z".length();
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
                                    yZmOu = var6;
                                    ktNLe = new Integer[8];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "F£\no©(ºLl^G!ÂB\u0001©";
                                 var5 = "F£\no©(ºLl^G!ÂB\u0001©".length();
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

                  var17 = "\u0016FÜÅ«\u009eE?\r³±\u0001àßÉã\u0096\u008a\u0084=þ)ÚJ\u001f»Fv5#(3P¸\u009e°UÏ\u0007\u009f\u0018\u0081-|Å\bgJe®[qÞülâ×\u008aEaosÁRg";
                  var19 = "\u0016FÜÅ«\u009eE?\r³±\u0001àßÉã\u0096\u008a\u0084=þ)ÚJ\u001f»Fv5#(3P¸\u009e°UÏ\u0007\u009f\u0018\u0081-|Å\bgJe®[qÞülâ×\u008aEaosÁRg"
                     .length();
                  var16 = '(';
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
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 18986940853943
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/nf.cuo ()I
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifeq 025
      // 013: aload 0
      // 014: if_acmpne 024
      // 017: goto 01e
      // 01a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: iload 4
      // 027: ifeq 03e
      // 02a: instanceof sixtwo/nf
      // 02d: ifne 03d
      // 030: goto 037
      // 033: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: ireturn
      // 039: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 1
      // 03e: checkcast sixtwo/nf
      // 041: astore 5
      // 043: aload 5
      // 045: aload 0
      // 046: invokevirtual sixtwo/nf.cum (Ljava/lang/Object;)Z
      // 049: iload 4
      // 04b: ifeq 068
      // 04e: ifne 05e
      // 051: goto 058
      // 054: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: bipush 0
      // 059: ireturn
      // 05a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: aload 0
      // 05f: invokevirtual sixtwo/nf.ctZ ()J
      // 062: aload 5
      // 064: invokevirtual sixtwo/nf.ctZ ()J
      // 067: lcmp
      // 068: iload 4
      // 06a: ifeq 093
      // 06d: ifeq 07d
      // 070: goto 077
      // 073: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 076: athrow
      // 077: bipush 0
      // 078: ireturn
      // 079: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07c: athrow
      // 07d: aload 0
      // 07e: iload 4
      // 080: ifeq 09d
      // 083: invokevirtual sixtwo/nf.cua ()J
      // 086: aload 5
      // 088: invokevirtual sixtwo/nf.cua ()J
      // 08b: lcmp
      // 08c: goto 093
      // 08f: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 092: athrow
      // 093: ifeq 09c
      // 096: bipush 0
      // 097: ireturn
      // 098: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09b: athrow
      // 09c: aload 0
      // 09d: invokevirtual sixtwo/nf.ctT ()Ljava/lang/String;
      // 0a0: astore 6
      // 0a2: aload 5
      // 0a4: invokevirtual sixtwo/nf.ctT ()Ljava/lang/String;
      // 0a7: astore 7
      // 0a9: aload 6
      // 0ab: iload 4
      // 0ad: ifeq 0cf
      // 0b0: ifnonnull 0cd
      // 0b3: goto 0ba
      // 0b6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b9: athrow
      // 0ba: aload 7
      // 0bc: ifnull 0e5
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: goto 0e3
      // 0c9: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: aload 6
      // 0cf: aload 7
      // 0d1: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0d4: iload 4
      // 0d6: ifeq 0e4
      // 0d9: ifne 0e5
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: bipush 0
      // 0e4: ireturn
      // 0e5: aload 0
      // 0e6: invokevirtual sixtwo/nf.ctU ()Lsixtwo/nc;
      // 0e9: astore 8
      // 0eb: aload 5
      // 0ed: invokevirtual sixtwo/nf.ctU ()Lsixtwo/nc;
      // 0f0: astore 9
      // 0f2: aload 8
      // 0f4: iload 4
      // 0f6: ifeq 118
      // 0f9: ifnonnull 116
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: aload 9
      // 105: ifnull 12e
      // 108: goto 10f
      // 10b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: goto 12c
      // 112: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 115: athrow
      // 116: aload 8
      // 118: aload 9
      // 11a: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 11d: iload 4
      // 11f: ifeq 12d
      // 122: ifne 12e
      // 125: goto 12c
      // 128: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12b: athrow
      // 12c: bipush 0
      // 12d: ireturn
      // 12e: aload 0
      // 12f: invokevirtual sixtwo/nf.ctV ()Lsixtwo/nd;
      // 132: astore 10
      // 134: aload 5
      // 136: invokevirtual sixtwo/nf.ctV ()Lsixtwo/nd;
      // 139: astore 11
      // 13b: aload 10
      // 13d: iload 4
      // 13f: ifeq 161
      // 142: ifnonnull 15f
      // 145: goto 14c
      // 148: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14b: athrow
      // 14c: aload 11
      // 14e: ifnull 177
      // 151: goto 158
      // 154: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 157: athrow
      // 158: goto 175
      // 15b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15e: athrow
      // 15f: aload 10
      // 161: aload 11
      // 163: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 166: iload 4
      // 168: ifeq 176
      // 16b: ifne 177
      // 16e: goto 175
      // 171: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 174: athrow
      // 175: bipush 0
      // 176: ireturn
      // 177: aload 0
      // 178: invokevirtual sixtwo/nf.ctW ()Ljava/util/List;
      // 17b: astore 12
      // 17d: aload 5
      // 17f: invokevirtual sixtwo/nf.ctW ()Ljava/util/List;
      // 182: astore 13
      // 184: aload 12
      // 186: iload 4
      // 188: ifeq 1aa
      // 18b: ifnonnull 1a8
      // 18e: goto 195
      // 191: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 194: athrow
      // 195: aload 13
      // 197: ifnull 1c0
      // 19a: goto 1a1
      // 19d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a0: athrow
      // 1a1: goto 1be
      // 1a4: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a7: athrow
      // 1a8: aload 12
      // 1aa: aload 13
      // 1ac: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 1af: iload 4
      // 1b1: ifeq 1bf
      // 1b4: ifne 1c0
      // 1b7: goto 1be
      // 1ba: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bd: athrow
      // 1be: bipush 0
      // 1bf: ireturn
      // 1c0: aload 0
      // 1c1: invokevirtual sixtwo/nf.ctX ()Lsixtwo/ne;
      // 1c4: astore 14
      // 1c6: aload 5
      // 1c8: invokevirtual sixtwo/nf.ctX ()Lsixtwo/ne;
      // 1cb: astore 15
      // 1cd: aload 14
      // 1cf: iload 4
      // 1d1: ifeq 1f3
      // 1d4: ifnonnull 1f1
      // 1d7: goto 1de
      // 1da: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1dd: athrow
      // 1de: aload 15
      // 1e0: ifnull 209
      // 1e3: goto 1ea
      // 1e6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e9: athrow
      // 1ea: goto 207
      // 1ed: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f0: athrow
      // 1f1: aload 14
      // 1f3: aload 15
      // 1f5: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 1f8: iload 4
      // 1fa: ifeq 208
      // 1fd: ifne 209
      // 200: goto 207
      // 203: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 206: athrow
      // 207: bipush 0
      // 208: ireturn
      // 209: aload 0
      // 20a: invokevirtual sixtwo/nf.ctY ()Ljava/util/List;
      // 20d: astore 16
      // 20f: aload 5
      // 211: invokevirtual sixtwo/nf.ctY ()Ljava/util/List;
      // 214: astore 17
      // 216: aload 16
      // 218: iload 4
      // 21a: ifeq 23c
      // 21d: ifnonnull 23a
      // 220: goto 227
      // 223: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 226: athrow
      // 227: aload 17
      // 229: ifnull 256
      // 22c: goto 233
      // 22f: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 232: athrow
      // 233: goto 250
      // 236: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 239: athrow
      // 23a: aload 16
      // 23c: aload 17
      // 23e: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 241: iload 4
      // 243: ifeq 257
      // 246: ifne 256
      // 249: goto 250
      // 24c: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24f: athrow
      // 250: bipush 0
      // 251: ireturn
      // 252: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 255: athrow
      // 256: bipush 1
      // 257: ireturn
   }

   @Override
   public String toString() {
      long var1 = swToy ^ 17852383911745L;
      boolean var10000 = this.ctS();
      String var10001 = this.ctT();
      String var10002 = String.valueOf(this.ctU());
      String var10003 = String.valueOf(this.ctV());
      String var10004 = String.valueOf(this.ctW());
      String var10005 = String.valueOf(this.ctX());
      String var10006 = String.valueOf(this.ctY());
      long var10007 = this.ctZ();
      boolean var3 = this.cub();
      long var4 = this.cua();
      long var6 = var10007;
      String var8 = var10006;
      String var9 = var10005;
      String var10 = var10004;
      String var11 = var10003;
      String var12 = var10002;
      String var13 = var10001;
      boolean var14 = var10000;
      return cuu<"q">(6228, 79654356752941314L ^ var1)
         + var14
         + cuu<"q">(21972, 4043780776154958976L ^ var1)
         + var13
         + cuu<"q">(8008, 1585393377805125134L ^ var1)
         + var12
         + cuu<"q">(29730, 3429727261073026419L ^ var1)
         + var11
         + cuu<"q">(10531, 5730237824761622634L ^ var1)
         + var10
         + cuu<"q">(21170, 5135624951856040938L ^ var1)
         + var9
         + cuu<"q">(17718, 5826782993560149092L ^ var1)
         + var8
         + cuu<"q">(13809, 7684642748418157754L ^ var1)
         + var6
         + cuu<"q">(13141, 432927072234924569L ^ var1)
         + var4
         + cuu<"q">(10448, 4276333989254361503L ^ var1)
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
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 105433248727396
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/nf.cup ()I
      // 00b: sipush 6130
      // 00e: ldc2_w 566096104055358136
      // 011: lload 1
      // 012: lxor
      // 013: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 018: istore 4
      // 01a: bipush 1
      // 01b: istore 5
      // 01d: aload 0
      // 01e: invokevirtual sixtwo/nf.ctZ ()J
      // 021: lstore 6
      // 023: iload 5
      // 025: sipush 6238
      // 028: ldc2_w 7645076172752801047
      // 02b: lload 1
      // 02c: lxor
      // 02d: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 032: imul
      // 033: lload 6
      // 035: sipush 18755
      // 038: ldc2_w 6860622444071263243
      // 03b: lload 1
      // 03c: lxor
      // 03d: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 042: lushr
      // 043: lload 6
      // 045: lxor
      // 046: l2i
      // 047: iadd
      // 048: istore 5
      // 04a: istore 3
      // 04b: aload 0
      // 04c: invokevirtual sixtwo/nf.cua ()J
      // 04f: lstore 8
      // 051: iload 5
      // 053: sipush 6238
      // 056: ldc2_w 7645076172752801047
      // 059: lload 1
      // 05a: lxor
      // 05b: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 060: imul
      // 061: lload 8
      // 063: sipush 7855
      // 066: ldc2_w 238859296040963040
      // 069: lload 1
      // 06a: lxor
      // 06b: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 070: lushr
      // 071: lload 8
      // 073: lxor
      // 074: l2i
      // 075: iadd
      // 076: istore 5
      // 078: aload 0
      // 079: invokevirtual sixtwo/nf.ctT ()Ljava/lang/String;
      // 07c: astore 10
      // 07e: iload 5
      // 080: sipush 6238
      // 083: ldc2_w 7645076172752801047
      // 086: lload 1
      // 087: lxor
      // 088: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08d: imul
      // 08e: aload 10
      // 090: iload 3
      // 091: ifne 0b4
      // 094: ifnonnull 0b2
      // 097: goto 09e
      // 09a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09d: athrow
      // 09e: sipush 10299
      // 0a1: ldc2_w 7407003558212238711
      // 0a4: lload 1
      // 0a5: lxor
      // 0a6: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ab: goto 0b7
      // 0ae: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b1: athrow
      // 0b2: aload 10
      // 0b4: invokevirtual java/lang/Object.hashCode ()I
      // 0b7: iadd
      // 0b8: istore 5
      // 0ba: aload 0
      // 0bb: invokevirtual sixtwo/nf.ctU ()Lsixtwo/nc;
      // 0be: astore 11
      // 0c0: iload 5
      // 0c2: sipush 6238
      // 0c5: ldc2_w 7645076172752801047
      // 0c8: lload 1
      // 0c9: lxor
      // 0ca: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cf: imul
      // 0d0: aload 11
      // 0d2: iload 3
      // 0d3: ifne 0f6
      // 0d6: ifnonnull 0f4
      // 0d9: goto 0e0
      // 0dc: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: sipush 2500
      // 0e3: ldc2_w 2780212503920073866
      // 0e6: lload 1
      // 0e7: lxor
      // 0e8: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ed: goto 0f9
      // 0f0: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: aload 11
      // 0f6: invokevirtual java/lang/Object.hashCode ()I
      // 0f9: iadd
      // 0fa: istore 5
      // 0fc: aload 0
      // 0fd: invokevirtual sixtwo/nf.ctV ()Lsixtwo/nd;
      // 100: astore 12
      // 102: iload 5
      // 104: sipush 6238
      // 107: ldc2_w 7645076172752801047
      // 10a: lload 1
      // 10b: lxor
      // 10c: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 111: imul
      // 112: aload 12
      // 114: iload 3
      // 115: ifne 138
      // 118: ifnonnull 136
      // 11b: goto 122
      // 11e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 121: athrow
      // 122: sipush 2500
      // 125: ldc2_w 2780212503920073866
      // 128: lload 1
      // 129: lxor
      // 12a: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 12f: goto 13b
      // 132: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 135: athrow
      // 136: aload 12
      // 138: invokevirtual java/lang/Object.hashCode ()I
      // 13b: iadd
      // 13c: istore 5
      // 13e: aload 0
      // 13f: invokevirtual sixtwo/nf.ctW ()Ljava/util/List;
      // 142: astore 13
      // 144: iload 5
      // 146: sipush 6238
      // 149: ldc2_w 7645076172752801047
      // 14c: lload 1
      // 14d: lxor
      // 14e: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 153: imul
      // 154: aload 13
      // 156: iload 3
      // 157: ifne 17a
      // 15a: ifnonnull 178
      // 15d: goto 164
      // 160: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 163: athrow
      // 164: sipush 2500
      // 167: ldc2_w 2780212503920073866
      // 16a: lload 1
      // 16b: lxor
      // 16c: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 171: goto 17d
      // 174: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 177: athrow
      // 178: aload 13
      // 17a: invokevirtual java/lang/Object.hashCode ()I
      // 17d: iadd
      // 17e: istore 5
      // 180: aload 0
      // 181: invokevirtual sixtwo/nf.ctX ()Lsixtwo/ne;
      // 184: astore 14
      // 186: iload 5
      // 188: sipush 6238
      // 18b: ldc2_w 7645076172752801047
      // 18e: lload 1
      // 18f: lxor
      // 190: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 195: imul
      // 196: aload 14
      // 198: iload 3
      // 199: ifne 1bc
      // 19c: ifnonnull 1ba
      // 19f: goto 1a6
      // 1a2: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a5: athrow
      // 1a6: sipush 2500
      // 1a9: ldc2_w 2780212503920073866
      // 1ac: lload 1
      // 1ad: lxor
      // 1ae: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1b3: goto 1bf
      // 1b6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b9: athrow
      // 1ba: aload 14
      // 1bc: invokevirtual java/lang/Object.hashCode ()I
      // 1bf: iadd
      // 1c0: istore 5
      // 1c2: aload 0
      // 1c3: invokevirtual sixtwo/nf.ctY ()Ljava/util/List;
      // 1c6: astore 15
      // 1c8: iload 5
      // 1ca: sipush 6238
      // 1cd: ldc2_w 7645076172752801047
      // 1d0: lload 1
      // 1d1: lxor
      // 1d2: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d7: imul
      // 1d8: aload 15
      // 1da: iload 3
      // 1db: ifne 1fe
      // 1de: ifnonnull 1fc
      // 1e1: goto 1e8
      // 1e4: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e7: athrow
      // 1e8: sipush 2500
      // 1eb: ldc2_w 2780212503920073866
      // 1ee: lload 1
      // 1ef: lxor
      // 1f0: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1f5: goto 201
      // 1f8: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1fb: athrow
      // 1fc: aload 15
      // 1fe: invokevirtual java/lang/Object.hashCode ()I
      // 201: iadd
      // 202: istore 5
      // 204: iload 5
      // 206: iload 3
      // 207: ifeq 217
      // 20a: ldc_w "SHxqIc"
      // 20d: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 210: goto 217
      // 213: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 216: athrow
      // 217: ireturn
   }

   private static String cur(byte[] var0) {
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

   @Override
   public void fromJson(JsonObject param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 2523503470221
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: aload 0
      // 00a: aload 1
      // 00b: sipush 25153
      // 00e: ldc2_w 4620125706311025361
      // 011: lload 2
      // 012: lxor
      // 013: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 018: invokevirtual sixtwo/nf.readString (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/String;
      // 01b: putfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 01e: aload 0
      // 01f: aload 0
      // 020: aload 1
      // 021: sipush 20553
      // 024: ldc2_w 2308860469111484638
      // 027: lload 2
      // 028: lxor
      // 029: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 02e: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/nc.<init> ()V, ()Lsixtwo/nc; ]
      // 033: invokevirtual sixtwo/nf.readObject (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Lsixtwo/rp;
      // 036: checkcast sixtwo/nc
      // 039: putfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 03c: aload 0
      // 03d: aload 0
      // 03e: aload 1
      // 03f: sipush 18796
      // 042: ldc2_w 5300531653894400494
      // 045: lload 2
      // 046: lxor
      // 047: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 04c: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/nd.<init> ()V, ()Lsixtwo/nd; ]
      // 051: invokevirtual sixtwo/nf.readObject (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Lsixtwo/rp;
      // 054: checkcast sixtwo/nd
      // 057: putfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 05a: invokestatic sixtwo/nf.cup ()I
      // 05d: aload 0
      // 05e: aload 0
      // 05f: aload 1
      // 060: sipush 15399
      // 063: ldc2_w 8764733419912109228
      // 066: lload 2
      // 067: lxor
      // 068: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 06d: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/nd.<init> ()V, ()Lsixtwo/nd; ]
      // 072: invokevirtual sixtwo/nf.readList (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Ljava/util/List;
      // 075: putfield sixtwo/nf.SkOYI Ljava/util/List;
      // 078: aload 0
      // 079: aload 0
      // 07a: aload 1
      // 07b: sipush 31348
      // 07e: ldc2_w 278262029764745953
      // 081: lload 2
      // 082: lxor
      // 083: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 088: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/ne.<init> ()V, ()Lsixtwo/ne; ]
      // 08d: invokevirtual sixtwo/nf.readObject (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Lsixtwo/rp;
      // 090: checkcast sixtwo/ne
      // 093: putfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 096: aload 0
      // 097: aload 1
      // 098: sipush 19779
      // 09b: ldc2_w 2369957816253246917
      // 09e: lload 2
      // 09f: lxor
      // 0a0: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a5: invokedynamic get ()Ljava/util/function/Supplier; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()Ljava/lang/Object;, sixtwo/ng.<init> ()V, ()Lsixtwo/ng; ]
      // 0aa: invokevirtual sixtwo/nf.readList (Lcom/google/gson/JsonObject;Ljava/lang/String;Ljava/util/function/Supplier;)Ljava/util/List;
      // 0ad: astore 5
      // 0af: istore 4
      // 0b1: aload 0
      // 0b2: aload 5
      // 0b4: ifnonnull 0c5
      // 0b7: new java/util/ArrayList
      // 0ba: dup
      // 0bb: invokespecial java/util/ArrayList.<init> ()V
      // 0be: goto 0c7
      // 0c1: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c4: athrow
      // 0c5: aload 5
      // 0c7: putfield sixtwo/nf.CrfVL Ljava/util/List;
      // 0ca: aload 0
      // 0cb: aload 1
      // 0cc: sipush 15043
      // 0cf: ldc2_w 5517305564798098012
      // 0d2: lload 2
      // 0d3: lxor
      // 0d4: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d9: invokevirtual sixtwo/nf.readLong (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/Long;
      // 0dc: astore 6
      // 0de: aload 0
      // 0df: aload 6
      // 0e1: iload 4
      // 0e3: ifne 0fa
      // 0e6: ifnonnull 0f8
      // 0e9: goto 0f0
      // 0ec: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ef: athrow
      // 0f0: lconst_0
      // 0f1: goto 0fd
      // 0f4: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: aload 6
      // 0fa: invokevirtual java/lang/Long.longValue ()J
      // 0fd: putfield sixtwo/nf.KTPlM J
      // 100: aload 0
      // 101: aload 1
      // 102: sipush 31808
      // 105: ldc2_w 8090697707669347521
      // 108: lload 2
      // 109: lxor
      // 10a: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 10f: invokevirtual sixtwo/nf.readLong (Lcom/google/gson/JsonObject;Ljava/lang/String;)Ljava/lang/Long;
      // 112: astore 7
      // 114: aload 0
      // 115: aload 7
      // 117: iload 4
      // 119: ifne 130
      // 11c: ifnonnull 12e
      // 11f: goto 126
      // 122: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: lconst_0
      // 127: goto 133
      // 12a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12d: athrow
      // 12e: aload 7
      // 130: invokevirtual java/lang/Long.longValue ()J
      // 133: putfield sixtwo/nf.oeMul J
      // 136: aload 0
      // 137: bipush 1
      // 138: putfield sixtwo/nf.lhkSE Z
      // 13b: aload 0
      // 13c: bipush 0
      // 13d: putfield sixtwo/nf.vRKRG Z
      // 140: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 143: ifnonnull 155
      // 146: iinc 4 1
      // 149: iload 4
      // 14b: invokestatic sixtwo/nf.cun (I)V
      // 14e: goto 155
      // 151: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 154: athrow
      // 155: return
   }

   @Override
   public JsonObject toJson() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 31064572024838
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/nf.cup ()I
      // 00b: new com/google/gson/JsonObject
      // 00e: dup
      // 00f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 012: astore 4
      // 014: istore 3
      // 015: aload 0
      // 016: iload 3
      // 017: ifne 045
      // 01a: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 01d: ifnull 044
      // 020: goto 027
      // 023: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 026: athrow
      // 027: aload 4
      // 029: sipush 17697
      // 02c: ldc2_w 934497813977897788
      // 02f: lload 1
      // 030: lxor
      // 031: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 036: aload 0
      // 037: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 03a: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 03d: goto 044
      // 040: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: aload 0
      // 045: iload 3
      // 046: ifne 077
      // 049: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 04c: ifnull 076
      // 04f: goto 056
      // 052: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 055: athrow
      // 056: aload 4
      // 058: sipush 1985
      // 05b: ldc2_w 5696208765026523611
      // 05e: lload 1
      // 05f: lxor
      // 060: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 065: aload 0
      // 066: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 069: invokevirtual sixtwo/nc.toJson ()Lcom/google/gson/JsonObject;
      // 06c: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 06f: goto 076
      // 072: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: iload 3
      // 078: ifne 0a9
      // 07b: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 07e: ifnull 0a8
      // 081: goto 088
      // 084: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: aload 4
      // 08a: sipush 4213
      // 08d: ldc2_w 5360655787378364026
      // 090: lload 1
      // 091: lxor
      // 092: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 097: aload 0
      // 098: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 09b: invokevirtual sixtwo/nd.toJson ()Lcom/google/gson/JsonObject;
      // 09e: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 0a1: goto 0a8
      // 0a4: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a7: athrow
      // 0a8: aload 0
      // 0a9: iload 3
      // 0aa: ifne 0dc
      // 0ad: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 0b0: ifnull 0db
      // 0b3: goto 0ba
      // 0b6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b9: athrow
      // 0ba: aload 4
      // 0bc: sipush 24198
      // 0bf: ldc2_w 7325754233552437396
      // 0c2: lload 1
      // 0c3: lxor
      // 0c4: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c9: aload 0
      // 0ca: aload 0
      // 0cb: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 0ce: invokevirtual sixtwo/nf.writeList (Ljava/util/List;)Lcom/google/gson/JsonArray;
      // 0d1: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: aload 0
      // 0dc: iload 3
      // 0dd: ifne 10e
      // 0e0: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 0e3: ifnull 10d
      // 0e6: goto 0ed
      // 0e9: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ec: athrow
      // 0ed: aload 4
      // 0ef: sipush 22623
      // 0f2: ldc2_w 7627960097007633990
      // 0f5: lload 1
      // 0f6: lxor
      // 0f7: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0fc: aload 0
      // 0fd: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 100: invokevirtual sixtwo/ne.toJson ()Lcom/google/gson/JsonObject;
      // 103: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 106: goto 10d
      // 109: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10c: athrow
      // 10d: aload 0
      // 10e: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 111: ifnull 135
      // 114: aload 4
      // 116: sipush 19613
      // 119: ldc2_w 7350129295012663941
      // 11c: lload 1
      // 11d: lxor
      // 11e: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 123: aload 0
      // 124: aload 0
      // 125: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 128: invokevirtual sixtwo/nf.writeList (Ljava/util/List;)Lcom/google/gson/JsonArray;
      // 12b: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 12e: goto 135
      // 131: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 134: athrow
      // 135: aload 4
      // 137: sipush 11990
      // 13a: ldc2_w 8163171292200366273
      // 13d: lload 1
      // 13e: lxor
      // 13f: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 144: aload 0
      // 145: getfield sixtwo/nf.KTPlM J
      // 148: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 14b: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 14e: aload 4
      // 150: sipush 31102
      // 153: ldc2_w 5310116918063966062
      // 156: lload 1
      // 157: lxor
      // 158: invokedynamic q (IJ)Ljava/lang/String; bsm=sixtwo/nf.cuu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15d: aload 0
      // 15e: getfield sixtwo/nf.oeMul J
      // 161: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 164: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 167: aload 4
      // 169: areturn
   }

   public static int cuo() {
      return fUtsn;
   }

   public static int cup() {
      int var0 = cuo();

      try {
         return var0 == 0 ? 18 : 0;
      } catch (MatchException var1) {
         throw cuq(var1);
      }
   }

   public boolean ctI(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 131222374588883
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/nf.ctG ()Z
      // 11: iload 4
      // 13: ifne 2e
      // 16: ifne 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 0
      // 27: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 2a: iload 1
      // 2b: invokevirtual sixtwo/ne.cts (I)Z
      // 2e: istore 5
      // 30: iload 5
      // 32: iload 4
      // 34: ifne 6e
      // 37: ifeq 6c
      // 3a: goto 41
      // 3d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: aload 0
      // 42: getfield sixtwo/nf.lhkSE Z
      // 45: iload 4
      // 47: ifne 6e
      // 4a: goto 51
      // 4d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 50: athrow
      // 51: ifeq 6c
      // 54: goto 5b
      // 57: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: aload 0
      // 5c: bipush 0
      // 5d: putfield sixtwo/nf.lhkSE Z
      // 60: aload 0
      // 61: bipush 1
      // 62: putfield sixtwo/nf.vRKRG Z
      // 65: goto 6c
      // 68: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: iload 5
      // 6e: ireturn
   }

   private boolean ctP() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 35830461280965
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 10: iload 3
      // 11: ifeq 29
      // 14: ifnull 79
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 22: goto 29
      // 25: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: iload 3
      // 2a: ifeq 64
      // 2d: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 30: ifnull 59
      // 33: goto 3a
      // 36: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 3e: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 41: invokevirtual java/lang/String.isBlank ()Z
      // 44: iload 3
      // 45: ifeq 76
      // 48: goto 4f
      // 4b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: ifeq 75
      // 52: goto 59
      // 55: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 0
      // 5a: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 5d: goto 64
      // 60: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: invokevirtual sixtwo/nd.ctb ()I
      // 67: iload 3
      // 68: ifeq 76
      // 6b: ifle 79
      // 6e: goto 75
      // 71: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 74: athrow
      // 75: bipush 1
      // 76: goto 7a
      // 79: bipush 0
      // 7a: ireturn
   }

   public static void cun(int var0) {
      fUtsn = var0;
   }

   private static MatchException cuq(MatchException var0) {
      return var0;
   }

   public ne ctX() {
      return this.HJcWp;
   }

   public long cua() {
      return this.oeMul;
   }

   private static CallSite cux(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cuw".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nf" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static CallSite cuu(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cut".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nf" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public boolean ctL(class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 57136908756869
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/nf.cup ()I
      // 00b: istore 4
      // 00d: aload 0
      // 00e: iload 4
      // 010: ifne 029
      // 013: getfield sixtwo/nf.oeMul J
      // 016: lconst_0
      // 017: lcmp
      // 018: ifgt 028
      // 01b: goto 022
      // 01e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 021: athrow
      // 022: bipush 0
      // 023: ireturn
      // 024: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 027: athrow
      // 028: aload 0
      // 029: iload 4
      // 02b: ifne 066
      // 02e: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 031: ifnull 065
      // 034: goto 03b
      // 037: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03a: athrow
      // 03b: aload 0
      // 03c: iload 4
      // 03e: ifne 066
      // 041: goto 048
      // 044: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 047: athrow
      // 048: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 04b: aload 1
      // 04c: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 04f: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 052: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 055: ifne 065
      // 058: goto 05f
      // 05b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: bipush 0
      // 060: ireturn
      // 061: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: aload 0
      // 066: iload 4
      // 068: ifne 09d
      // 06b: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 06e: ifnull 09c
      // 071: goto 078
      // 074: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 077: athrow
      // 078: aload 0
      // 079: iload 4
      // 07b: ifne 09d
      // 07e: goto 085
      // 081: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 088: aload 1
      // 089: invokevirtual sixtwo/nc.matches (Lnet/minecraft/class_1799;)Z
      // 08c: ifne 09c
      // 08f: goto 096
      // 092: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 095: athrow
      // 096: bipush 0
      // 097: ireturn
      // 098: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09b: athrow
      // 09c: aload 0
      // 09d: iload 4
      // 09f: ifne 0d4
      // 0a2: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 0a5: ifnull 0d3
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: aload 0
      // 0b0: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 0b3: aload 1
      // 0b4: invokevirtual sixtwo/nd.matches (Lnet/minecraft/class_1799;)Z
      // 0b7: iload 4
      // 0b9: ifne 0e4
      // 0bc: goto 0c3
      // 0bf: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c2: athrow
      // 0c3: ifne 0d3
      // 0c6: goto 0cd
      // 0c9: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cc: athrow
      // 0cd: bipush 0
      // 0ce: ireturn
      // 0cf: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d2: athrow
      // 0d3: aload 0
      // 0d4: iload 4
      // 0d6: ifne 0ee
      // 0d9: aload 1
      // 0da: invokevirtual sixtwo/nf.ctN (Lnet/minecraft/class_1799;)Z
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: ifne 0ed
      // 0e7: bipush 0
      // 0e8: ireturn
      // 0e9: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ec: athrow
      // 0ed: aload 0
      // 0ee: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 0f1: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0f6: astore 5
      // 0f8: aload 5
      // 0fa: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0ff: ifeq 136
      // 102: aload 5
      // 104: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 109: checkcast sixtwo/ng
      // 10c: astore 6
      // 10e: aload 6
      // 110: aload 1
      // 111: invokevirtual sixtwo/ng.matches (Lnet/minecraft/class_1799;)Z
      // 114: iload 4
      // 116: ifne 137
      // 119: iload 4
      // 11b: ifne 130
      // 11e: goto 125
      // 121: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 124: athrow
      // 125: ifne 131
      // 128: goto 12f
      // 12b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12e: athrow
      // 12f: bipush 0
      // 130: ireturn
      // 131: iload 4
      // 133: ifeq 0f8
      // 136: bipush 1
      // 137: ireturn
   }

   private int ctQ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 82084545198373
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 10: iload 3
      // 11: ifne 29
      // 14: ifnull 3c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 22: goto 29
      // 25: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokeinterface java/util/List.isEmpty ()Z 1
      // 2e: iload 3
      // 2f: ifne 43
      // 32: ifeq 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 0
      // 3d: ireturn
      // 3e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: bipush 0
      // 43: istore 4
      // 45: aload 0
      // 46: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 49: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 4e: astore 5
      // 50: aload 5
      // 52: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 57: ifeq ae
      // 5a: aload 5
      // 5c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 61: checkcast sixtwo/ng
      // 64: astore 6
      // 66: aload 6
      // 68: iload 3
      // 69: ifne 83
      // 6c: ifnonnull 81
      // 6f: goto 76
      // 72: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: iload 3
      // 77: ifeq 50
      // 7a: goto 81
      // 7d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 6
      // 83: invokevirtual sixtwo/ng.cuA ()Ljava/lang/String;
      // 86: astore 7
      // 88: aload 7
      // 8a: iload 3
      // 8b: ifne 9a
      // 8e: ifnull aa
      // 91: goto 98
      // 94: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 7
      // 9a: invokevirtual java/lang/String.isBlank ()Z
      // 9d: ifne aa
      // a0: iinc 4 1
      // a3: goto aa
      // a6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: iload 3
      // ab: ifeq 50
      // ae: iload 4
      // b0: ireturn
   }

   private int ctR() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 112367969392786
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 10: iload 3
      // 11: ifne 29
      // 14: ifnull 3c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 22: goto 29
      // 25: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokeinterface java/util/List.isEmpty ()Z 1
      // 2e: iload 3
      // 2f: ifne 43
      // 32: ifeq 42
      // 35: goto 3c
      // 38: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 0
      // 3d: ireturn
      // 3e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: bipush 0
      // 43: istore 4
      // 45: aload 0
      // 46: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 49: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 4e: astore 5
      // 50: aload 5
      // 52: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 57: ifeq ae
      // 5a: aload 5
      // 5c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 61: checkcast sixtwo/nd
      // 64: astore 6
      // 66: aload 6
      // 68: iload 3
      // 69: ifne 83
      // 6c: ifnonnull 81
      // 6f: goto 76
      // 72: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: iload 3
      // 77: ifeq 50
      // 7a: goto 81
      // 7d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 6
      // 83: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 86: astore 7
      // 88: aload 7
      // 8a: iload 3
      // 8b: ifne 9a
      // 8e: ifnull aa
      // 91: goto 98
      // 94: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 7
      // 9a: invokevirtual java/lang/String.isBlank ()Z
      // 9d: ifne aa
      // a0: iinc 4 1
      // a3: goto aa
      // a6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: iload 3
      // ab: ifeq 50
      // ae: iload 4
      // b0: ireturn
   }

   public boolean ctH() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 110987480003972
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/nf.ctG ()Z
      // 10: iload 3
      // 11: ifne 3b
      // 14: ifeq 3a
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 22: invokevirtual sixtwo/ne.ctr ()Z
      // 25: iload 3
      // 26: ifne 3b
      // 29: goto 30
      // 2c: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: ifne 3e
      // 33: goto 3a
      // 36: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: bipush 1
      // 3b: goto 3f
      // 3e: bipush 0
      // 3f: ireturn
   }

   public nc ctU() {
      return this.RVkIg;
   }

   public nd ctV() {
      return this.DUmbm;
   }

   private boolean ctN(class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 113169153628819
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 11: iload 4
      // 13: ifne 2b
      // 16: ifnull 3f
      // 19: goto 20
      // 1c: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 24: goto 2b
      // 27: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: iload 4
      // 2d: ifne 49
      // 30: invokeinterface java/util/List.isEmpty ()Z 1
      // 35: ifeq 45
      // 38: goto 3f
      // 3b: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: bipush 1
      // 40: ireturn
      // 41: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 0
      // 46: getfield sixtwo/nf.SkOYI Ljava/util/List;
      // 49: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 4e: astore 5
      // 50: aload 5
      // 52: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 57: ifeq d7
      // 5a: aload 5
      // 5c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 61: checkcast sixtwo/nd
      // 64: astore 6
      // 66: aload 6
      // 68: iload 4
      // 6a: ifne 85
      // 6d: ifnonnull 83
      // 70: goto 77
      // 73: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: iload 4
      // 79: ifeq 50
      // 7c: goto 83
      // 7f: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: aload 6
      // 85: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 88: astore 7
      // 8a: aload 7
      // 8c: iload 4
      // 8e: ifne 9d
      // 91: ifnull 50
      // 94: goto 9b
      // 97: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: aload 7
      // 9d: invokevirtual java/lang/String.isBlank ()Z
      // a0: iload 4
      // a2: ifne c1
      // a5: ifeq bb
      // a8: goto af
      // ab: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: iload 4
      // b1: ifeq 50
      // b4: goto bb
      // b7: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ba: athrow
      // bb: aload 6
      // bd: aload 1
      // be: invokevirtual sixtwo/nd.matches (Lnet/minecraft/class_1799;)Z
      // c1: iload 4
      // c3: ifne d1
      // c6: ifeq d2
      // c9: goto d0
      // cc: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cf: athrow
      // d0: bipush 0
      // d1: ireturn
      // d2: iload 4
      // d4: ifeq 50
      // d7: bipush 1
      // d8: ireturn
   }

   public int ctM() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 3867362329320
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: bipush 0
      // 0c: istore 4
      // 0e: istore 3
      // 0f: aload 0
      // 10: iload 3
      // 11: ifne 41
      // 14: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 17: ifnull 40
      // 1a: goto 21
      // 1d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 25: invokevirtual java/lang/String.isBlank ()Z
      // 28: iload 3
      // 29: ifne 44
      // 2c: goto 33
      // 2f: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifne 40
      // 36: goto 3d
      // 39: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: iinc 4 100
      // 40: aload 0
      // 41: invokevirtual sixtwo/nf.ctO ()Z
      // 44: iload 3
      // 45: ifne 5c
      // 48: ifeq 58
      // 4b: goto 52
      // 4e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: wide iinc 4 250
      // 58: aload 0
      // 59: invokevirtual sixtwo/nf.ctP ()Z
      // 5c: iload 3
      // 5d: ifne a0
      // 60: ifeq 70
      // 63: goto 6a
      // 66: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: wide iinc 4 1000
      // 70: iload 4
      // 72: aload 0
      // 73: invokevirtual sixtwo/nf.ctQ ()I
      // 76: sipush 4576
      // 79: ldc2_w 2552945304338548513
      // 7c: lload 1
      // 7d: lxor
      // 7e: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 83: imul
      // 84: iadd
      // 85: istore 4
      // 87: iload 4
      // 89: aload 0
      // 8a: invokevirtual sixtwo/nf.ctR ()I
      // 8d: sipush 3078
      // 90: ldc2_w 6971693957827189441
      // 93: lload 1
      // 94: lxor
      // 95: invokedynamic p (IJ)I bsm=sixtwo/nf.cux (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 9a: imul
      // 9b: iadd
      // 9c: istore 4
      // 9e: iload 4
      // a0: ireturn
   }

   public List<nd> ctW() {
      return this.SkOYI;
   }

   public long ctZ() {
      return this.KTPlM;
   }

   public boolean ctG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 137693097813362
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 10: iload 3
      // 11: ifne 29
      // 14: ifnull 3e
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 22: goto 29
      // 25: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokevirtual sixtwo/ne.cto ()Z
      // 2c: iload 3
      // 2d: ifne 3b
      // 30: ifeq 3e
      // 33: goto 3a
      // 36: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: bipush 1
      // 3b: goto 3f
      // 3e: bipush 0
      // 3f: ireturn
   }

   public void ctJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 96538696922705
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 2d
      // 11: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 14: ifnull 2c
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.HJcWp Lsixtwo/ne;
      // 22: invokevirtual sixtwo/ne.ctp ()V
      // 25: goto 2c
      // 28: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: iload 3
      // 2e: ifeq 4b
      // 31: getfield sixtwo/nf.vRKRG Z
      // 34: ifeq 4f
      // 37: goto 3e
      // 3a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 0
      // 3f: bipush 1
      // 40: putfield sixtwo/nf.lhkSE Z
      // 43: aload 0
      // 44: goto 4b
      // 47: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: bipush 0
      // 4c: putfield sixtwo/nf.vRKRG Z
      // 4f: return
   }

   private boolean ctO() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nf.swToy J
      // 03: ldc2_w 42962093837971
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 10: iload 3
      // 11: ifeq 29
      // 14: ifnull 5d
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 22: goto 29
      // 25: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: invokevirtual sixtwo/nc.csI ()Ljava/lang/String;
      // 2c: iload 3
      // 2d: ifeq 48
      // 30: ifnull 5d
      // 33: goto 3a
      // 36: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 39: athrow
      // 3a: aload 0
      // 3b: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 3e: invokevirtual sixtwo/nc.csI ()Ljava/lang/String;
      // 41: goto 48
      // 44: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: invokevirtual java/lang/String.isBlank ()Z
      // 4b: iload 3
      // 4c: ifeq 5a
      // 4f: ifne 5d
      // 52: goto 59
      // 55: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: bipush 1
      // 5a: goto 5e
      // 5d: bipush 0
      // 5e: ireturn
   }

   public boolean cub() {
      return this.vRKRG;
   }

   public void cuc(boolean var1) {
      this.lhkSE = var1;
   }

   public boolean ctK(ny param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/nf.swToy J
      // 003: ldc2_w 122770614081771
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/nf.cuo ()I
      // 00b: istore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/nf.ctH ()Z
      // 011: iload 4
      // 013: ifeq 02c
      // 016: ifne 026
      // 019: goto 020
      // 01c: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: bipush 0
      // 021: ireturn
      // 022: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 025: athrow
      // 026: aload 0
      // 027: getfield sixtwo/nf.KTPlM J
      // 02a: lconst_0
      // 02b: lcmp
      // 02c: iload 4
      // 02e: ifeq 03c
      // 031: ifgt 03d
      // 034: goto 03b
      // 037: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03a: athrow
      // 03b: bipush 0
      // 03c: ireturn
      // 03d: aload 1
      // 03e: invokevirtual sixtwo/ny.cwf ()Lnet/minecraft/class_1799;
      // 041: astore 5
      // 043: aload 0
      // 044: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 047: iload 4
      // 049: ifeq 061
      // 04c: ifnull 081
      // 04f: goto 056
      // 052: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 055: athrow
      // 056: aload 0
      // 057: getfield sixtwo/nf.BDwrc Ljava/lang/String;
      // 05a: goto 061
      // 05d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: aload 5
      // 063: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 066: invokevirtual net/minecraft/class_1792.method_7876 ()Ljava/lang/String;
      // 069: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 06c: iload 4
      // 06e: ifeq 088
      // 071: ifne 081
      // 074: goto 07b
      // 077: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07a: athrow
      // 07b: bipush 0
      // 07c: ireturn
      // 07d: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: aload 1
      // 082: invokevirtual sixtwo/ny.cwf ()Lnet/minecraft/class_1799;
      // 085: invokevirtual net/minecraft/class_1799.method_7947 ()I
      // 088: istore 6
      // 08a: aload 1
      // 08b: invokevirtual sixtwo/ny.cwl ()J
      // 08e: aload 0
      // 08f: getfield sixtwo/nf.KTPlM J
      // 092: iload 6
      // 094: i2l
      // 095: lmul
      // 096: lcmp
      // 097: iload 4
      // 099: ifeq 0a7
      // 09c: ifle 0a8
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: bipush 0
      // 0a7: ireturn
      // 0a8: aload 0
      // 0a9: iload 4
      // 0ab: ifeq 0e1
      // 0ae: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 0b1: ifnull 0e0
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: aload 0
      // 0bc: iload 4
      // 0be: ifeq 0e1
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: getfield sixtwo/nf.RVkIg Lsixtwo/nc;
      // 0cb: aload 5
      // 0cd: invokevirtual sixtwo/nc.matches (Lnet/minecraft/class_1799;)Z
      // 0d0: ifne 0e0
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: bipush 0
      // 0db: ireturn
      // 0dc: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0df: athrow
      // 0e0: aload 0
      // 0e1: iload 4
      // 0e3: ifeq 119
      // 0e6: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 0e9: ifnull 118
      // 0ec: goto 0f3
      // 0ef: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f2: athrow
      // 0f3: aload 0
      // 0f4: getfield sixtwo/nf.DUmbm Lsixtwo/nd;
      // 0f7: aload 5
      // 0f9: invokevirtual sixtwo/nd.matches (Lnet/minecraft/class_1799;)Z
      // 0fc: iload 4
      // 0fe: ifeq 12a
      // 101: goto 108
      // 104: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 107: athrow
      // 108: ifne 118
      // 10b: goto 112
      // 10e: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: bipush 0
      // 113: ireturn
      // 114: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 117: athrow
      // 118: aload 0
      // 119: iload 4
      // 11b: ifeq 134
      // 11e: aload 5
      // 120: invokevirtual sixtwo/nf.ctN (Lnet/minecraft/class_1799;)Z
      // 123: goto 12a
      // 126: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: ifne 133
      // 12d: bipush 0
      // 12e: ireturn
      // 12f: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 132: athrow
      // 133: aload 0
      // 134: getfield sixtwo/nf.CrfVL Ljava/util/List;
      // 137: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 13c: astore 7
      // 13e: aload 7
      // 140: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 145: ifeq 17d
      // 148: aload 7
      // 14a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 14f: checkcast sixtwo/ng
      // 152: astore 8
      // 154: aload 8
      // 156: aload 5
      // 158: invokevirtual sixtwo/ng.matches (Lnet/minecraft/class_1799;)Z
      // 15b: iload 4
      // 15d: ifeq 17e
      // 160: iload 4
      // 162: ifeq 177
      // 165: goto 16c
      // 168: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16b: athrow
      // 16c: ifne 178
      // 16f: goto 176
      // 172: invokestatic sixtwo/nf.cuq (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 175: athrow
      // 176: bipush 0
      // 177: ireturn
      // 178: iload 4
      // 17a: ifne 13e
      // 17d: bipush 1
      // 17e: ireturn
   }

   public void cuf(nd var1) {
      this.DUmbm = var1;
   }

   public void cug(List<nd> var1) {
      this.SkOYI = var1;
   }

   private static String cus(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 19888;
      if (DFnfj[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])CIsYm.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               CIsYm.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/nf", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = QVzDB[var5].getBytes("ISO-8859-1");
         DFnfj[var5] = cur(((Cipher)var4[0]).doFinal(var9));
      }

      return DFnfj[var5];
   }

   public void cul(boolean var1) {
      this.vRKRG = var1;
   }

   public void cuk(long var1) {
      this.oeMul = var1;
   }

   private static int cuv(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 8069;
      if (ktNLe[var3] == null) {
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
         long var5 = yZmOu[var3];
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
         Object[] var9 = (Object[])tdXcS.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               tdXcS.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/nf", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ktNLe[var3] = var15;
      }

      return ktNLe[var3];
   }

   public void cuh(ne var1) {
      this.HJcWp = var1;
   }

   public void cui(List<ng> var1) {
      this.CrfVL = var1;
   }

   private static Object cut(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cus(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected boolean cum(Object var1) {
      return var1 instanceof nf;
   }

   public void cuj(long var1) {
      this.KTPlM = var1;
   }

   private static int cuw(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cuv(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public boolean ctS() {
      return this.lhkSE;
   }

   public void cud(String var1) {
      this.BDwrc = var1;
   }

   public void cue(nc var1) {
      this.RVkIg = var1;
   }

   public List<ng> ctY() {
      return this.CrfVL;
   }

   public String ctT() {
      return this.BDwrc;
   }
}
