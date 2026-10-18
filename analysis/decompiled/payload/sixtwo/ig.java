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

public class ig implements rp {
   private static final id UauPc;
   private static final if ckEfn;
   public static final ig PtFoz;
   public static final ig gsTXO;
   public static final ig hzckK;
   public static final ig eaYCr;
   public static final ig pHENl;
   public static final ig WSWRe;
   public static final ig OetCB;
   private int[] ZMxLk;
   private ie yJarQ;
   private if eurvE;
   private id ZphLO;
   private static int[] sYFFC;
   private static final long yAiNR = gb.aYR(-775033035814565264L, -894757739909991001L, MethodHandles.lookup().lookupClass()).a(18112101325254L);
   private static final String[] XkqOU;
   private static final String[] wICbh;
   private static final Map jNjLa = new HashMap(13);

   public mG bio() {
      return this.yJarQ.bhF();
   }

   public ig() {
   }

   public ig(int[] var1, ie var2, if var3, id var4) {
      this.ZMxLk = var1;
      this.yJarQ = var2;
      this.eurvE = var3;
      this.ZphLO = var4;
   }

   static {
      long var20 = yAiNR ^ 55073402633458L;
      biD(null);
      Cipher var11;
      Cipher var10000 = var11 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var12 = 1; var12 < 8; var12++) {
         var10003[var12] = (byte)(var20 << var12 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var18 = new String[9];
      int var16 = 0;
      String var15 = "Ä#¯\u008aªeð7p\u001eæbXôdï<ùì¨\u0003Ü£\u009aÂô\u009aÑ±{FH*ªú}g2\u001b\u0016\u0018\u008e\u008d\u0007Ë\u0096øèt¬¸þ1\\9\u001c$s×Y\u001f%ÑÆÅ  \f\u0088í@j9\u0004ü\t\u0097ëÍ\u0000hÎ\r\u009d\u0092!Èú& \u0089:\u0002|@\u00adàM \u008dj\u0092\u0018¼ÅÞµvÎò\u0017ea\u0097\u008c\u007f¡ãÑþ\u0019ÿ\u0015þô\u009cádò`p\u0010\u008cÞ´õÎ\t\u008c\u0017\u0082ê\t\u0090\u0012\u009f|« Ì\u0086j\u000fj'R:9óÿ¾\u0016.åYqÊÏ\u0013\u0006¤\u009e\u0083û\u0088}\u0016ïý$Ñ\u0010£ÇfGÅ£<!Ür\u0007\u0010äG'f";
      int var17 = "Ä#¯\u008aªeð7p\u001eæbXôdï<ùì¨\u0003Ü£\u009aÂô\u009aÑ±{FH*ªú}g2\u001b\u0016\u0018\u008e\u008d\u0007Ë\u0096øèt¬¸þ1\\9\u001c$s×Y\u001f%ÑÆÅ  \f\u0088í@j9\u0004ü\t\u0097ëÍ\u0000hÎ\r\u009d\u0092!Èú& \u0089:\u0002|@\u00adàM \u008dj\u0092\u0018¼ÅÞµvÎò\u0017ea\u0097\u008c\u007f¡ãÑþ\u0019ÿ\u0015þô\u009cádò`p\u0010\u008cÞ´õÎ\t\u008c\u0017\u0082ê\t\u0090\u0012\u009f|« Ì\u0086j\u000fj'R:9óÿ¾\u0016.åYqÊÏ\u0013\u0006¤\u009e\u0083û\u0088}\u0016ïý$Ñ\u0010£ÇfGÅ£<!Ür\u0007\u0010äG'f"
         .length();
      char var14 = '(';
      int var24 = -1;

      label55:
      while (true) {
         String var25 = var15.substring(++var24, var24 + var14);
         int var10001 = -1;

         while (true) {
            byte[] var19 = var11.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = biG(var19).intern();
            switch (var10001) {
               case 0:
                  var18[var16++] = var36;
                  if ((var24 += var14) >= var17) {
                     XkqOU = var18;
                     wICbh = new String[9];
                     Cipher var1;
                     var10000 = var1 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var20 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var2 = 1; var2 < 8; var2++) {
                        var10003[var2] = (byte)(var20 << var2 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var0 = new long[31];
                     int var4 = 0;
                     String var5 = "Á\u0001»Ìø\u0017\u0007ÏÈK>\u0096fýºëXvvsieôÔòA\u0007ÀüøH\u001e¤ò\u0014¬PBÔqøT(\rÑÁõ\u007fÛ\u0096½MnJ2¹xr«#>J\u0003©>=\u0013V2øW\u0091\u0081ÌÀî}\u0017½oÌ\"/\u0094Z \u0004Èó\fR\"\nq\u000bÜ\u0007Ù\u0018Û@zW1\u001c¾ \u009cÏÌ\u001ftp zr\u0007Ò¾Àâcq\u0000\u0004ÃÓH#a*åò^0ÁúdD\ncÞoFþ\u008d\u0018\u0083¾áøÛË£è¶îg\u000b\u0007\u0005ð9\u00829\u0094\u0011Zi±&\u009dnæ9ét\u0019I´ù·\u00adª\u009fK\u0090ÖÖ¯}B\u0000\u009aÉâA$$i\u0081¥\u008c¬éîjÛ.lô6Ö\u001a\u001a_\u0082ºÁ%\u0092\u0007È?ª^.P¥\u000f\u009fx";
                     int var6 = "Á\u0001»Ìø\u0017\u0007ÏÈK>\u0096fýºëXvvsieôÔòA\u0007ÀüøH\u001e¤ò\u0014¬PBÔqøT(\rÑÁõ\u007fÛ\u0096½MnJ2¹xr«#>J\u0003©>=\u0013V2øW\u0091\u0081ÌÀî}\u0017½oÌ\"/\u0094Z \u0004Èó\fR\"\nq\u000bÜ\u0007Ù\u0018Û@zW1\u001c¾ \u009cÏÌ\u001ftp zr\u0007Ò¾Àâcq\u0000\u0004ÃÓH#a*åò^0ÁúdD\ncÞoFþ\u008d\u0018\u0083¾áøÛË£è¶îg\u000b\u0007\u0005ð9\u00829\u0094\u0011Zi±&\u009dnæ9ét\u0019I´ù·\u00adª\u009fK\u0090ÖÖ¯}B\u0000\u009aÉâA$$i\u0081¥\u008c¬éîjÛ.lô6Ö\u001a\u001a_\u0082ºÁ%\u0092\u0007È?ª^.P¥\u000f\u009fx"
                        .length();
                     byte var3 = 0;

                     label37:
                     while (true) {
                        var10001 = var3;
                        var3 += 8;
                        byte[] var7 = var5.substring(var10001, var3).getBytes("ISO-8859-1");
                        long[] var28 = var0;
                        var10001 = var4++;
                        long var40 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
                        byte var47 = -1;

                        while (true) {
                           long var8 = var40;
                           byte[] var10 = var1.doFinal(
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
                           long var49 = (var10[0] & 255L) << 56
                              | (var10[1] & 255L) << 48
                              | (var10[2] & 255L) << 40
                              | (var10[3] & 255L) << 32
                              | (var10[4] & 255L) << 24
                              | (var10[5] & 255L) << 16
                              | (var10[6] & 255L) << 8
                              | var10[7] & 255L;
                           switch (var47) {
                              case 0:
                                 var28[var10001] = var49;
                                 if (var3 >= var6) {
                                    UauPc = id.bhd(100.0F, 100.0F, 100.0F, 0.0F, 0.0F, mG.UhgnI, 1.5F, mG.hoGuU);
                                    ckEfn = if.bia(20.0F, 1.0F);
                                    int[] var42 = new int[(int)var0[26]];
                                    var42[0] = (int)var0[7];
                                    var42[1] = (int)var0[28];
                                    var42[2] = (int)var0[4];
                                    var42[3] = (int)var0[23];
                                    var42[4] = (int)var0[10];
                                    var42[5] = (int)var0[11];
                                    var42[(int)var0[20]] = (int)var0[18];
                                    PtFoz = new ig(
                                       var42, ie.bhE(mG.hoGuU, mG.hoGuU, mG.cnP(12.0F, 12.0F, 12.0F), mG.cnP(24.0F, 24.0F, 27.0F), mG.yHyOB), ckEfn, UauPc
                                    );
                                    gsTXO = new ig(
                                       new int[]{(int)var0[29], (int)var0[16], (int)var0[1]},
                                       ie.bhE(
                                          mG.hoGuU,
                                          mG.cnP(255.0F, 58.0F, 47.0F),
                                          mG.cnP(14.0F, 2.0F, 1.0F),
                                          mG.cnP(43.0F, 20.0F, 19.0F),
                                          mG.cnP(255.0F, 58.0F, 47.0F)
                                       ),
                                       ckEfn,
                                       UauPc
                                    );
                                    hzckK = new ig(
                                       new int[]{(int)var0[19], (int)var0[24], (int)var0[27], (int)var0[17]},
                                       ie.bhE(
                                          mG.hoGuU,
                                          mG.cnP(255.0F, 191.0F, 0.0F),
                                          mG.cnP(15.0F, 12.0F, 2.0F),
                                          mG.cnP(45.0F, 35.0F, 10.0F),
                                          mG.cnP(255.0F, 191.0F, 0.0F)
                                       ),
                                       ckEfn,
                                       UauPc
                                    );
                                    int[] var43 = new int[(int)var0[9]];
                                    var43[0] = (int)var0[21];
                                    var43[1] = (int)var0[3];
                                    var43[2] = (int)var0[16];
                                    var43[3] = (int)var0[30];
                                    var43[4] = (int)var0[12];
                                    var43[5] = (int)var0[27];
                                    var43[(int)var0[0]] = (int)var0[17];
                                    eaYCr = new ig(
                                       var43,
                                       ie.bhE(
                                          mG.hoGuU,
                                          mG.cnP(46.0F, 204.0F, 113.0F),
                                          mG.cnP(2.0F, 12.0F, 8.0F),
                                          mG.cnP(10.0F, 35.0F, 20.0F),
                                          mG.cnP(46.0F, 204.0F, 113.0F)
                                       ),
                                       ckEfn,
                                       UauPc
                                    );
                                    pHENl = new ig(
                                       new int[]{(int)var0[5], (int)var0[27], (int)var0[15], (int)var0[16]},
                                       ie.bhE(
                                          mG.hoGuU,
                                          mG.cnP(79.0F, 124.0F, 255.0F),
                                          mG.cnP(5.0F, 5.0F, 8.0F),
                                          mG.cnP(8.0F, 10.0F, 20.0F),
                                          mG.cnP(79.0F, 124.0F, 255.0F)
                                       ),
                                       ckEfn,
                                       UauPc
                                    );
                                    int[] var44 = new int[(int)var0[8]];
                                    var44[0] = (int)var0[13];
                                    var44[1] = (int)var0[12];
                                    var44[2] = (int)var0[22];
                                    var44[3] = (int)var0[16];
                                    var44[4] = (int)var0[25];
                                    var44[5] = (int)var0[17];
                                    var44[(int)var0[0]] = (int)var0[16];
                                    var44[(int)var0[9]] = (int)var0[2];
                                    WSWRe = new ig(
                                       var44, ie.bhE(mG.hoGuU, mG.JTHGB, mG.cnP(10.0F, 10.0F, 22.0F), mG.cnP(22.0F, 22.0F, 38.0F), mG.JTHGB), ckEfn, UauPc
                                    );
                                    int[] var45 = new int[(int)var0[0]];
                                    var45[0] = (int)var0[6];
                                    var45[1] = (int)var0[15];
                                    var45[2] = (int)var0[2];
                                    var45[3] = (int)var0[14];
                                    var45[4] = (int)var0[27];
                                    var45[5] = (int)var0[16];
                                    OetCB = new ig(
                                       var45, ie.bhE(mG.hoGuU, mG.yHyOB, mG.cnP(13.0F, 4.0F, 25.0F), mG.cnP(26.0F, 16.0F, 40.0F), mG.yHyOB), ckEfn, UauPc
                                    );
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var49;
                                 if (var3 < var6) {
                                    continue label37;
                                 }

                                 var5 = " 1\u0012ÓË¿CÛ²ÖH\u00ad\u000eûéI";
                                 var6 = " 1\u0012ÓË¿CÛ²ÖH\u00ad\u000eûéI".length();
                                 var3 = 0;
                           }

                           byte var34 = var3;
                           var3 += 8;
                           var7 = var5.substring(var34, var3).getBytes("ISO-8859-1");
                           var28 = var0;
                           var10001 = var4++;
                           var40 = (var7[0] & 255L) << 56
                              | (var7[1] & 255L) << 48
                              | (var7[2] & 255L) << 40
                              | (var7[3] & 255L) << 32
                              | (var7[4] & 255L) << 24
                              | (var7[5] & 255L) << 16
                              | (var7[6] & 255L) << 8
                              | var7[7] & 255L;
                           var47 = 0;
                        }
                     }
                  }

                  var14 = var15.charAt(var24);
                  break;
               default:
                  var18[var16++] = var36;
                  if ((var24 += var14) < var17) {
                     var14 = var15.charAt(var24);
                     continue label55;
                  }

                  var15 = "û\u009cOî\u001f\\Ë#©\u009cSÄ\u0093\u001a\u007fø¤×\u0014\u009e¾\u008dÍn_\u001anúètCÆ±=4\u008e»\u0006»â\u0018\u0014`\u0014·ù½Þ\u0096\u0096ÿìV\u0098\u009c\r`\u000bm3\u0080I\u0014\u0096\u0091";
                  var17 = "û\u009cOî\u001f\\Ë#©\u009cSÄ\u0093\u001a\u007fø¤×\u0014\u009e¾\u008dÍn_\u001anúètCÆ±=4\u008e»\u0006»â\u0018\u0014`\u0014·ù½Þ\u0096\u0096ÿìV\u0098\u009c\r`\u000bm3\u0080I\u0014\u0096\u0091"
                     .length();
                  var14 = '(';
                  var24 = -1;
            }

            var25 = var15.substring(++var24, var24 + var14);
            var10001 = 0;
         }
      }
   }

   public String bit() {
      long var1 = yAiNR ^ 17008531048442L;
      return biJ<"c">(21808, 7546190854494249148L ^ var1) + iH.bsA(this.ZMxLk);
   }

   public mG bir() {
      return this.yJarQ.bhI();
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = yAiNR ^ 28813133318696L;
      this.ZMxLk = this.readIntArray(var1, biJ<"c">(22006, 2591615889189006765L ^ var2));
      int[] var10000 = biE();
      this.yJarQ = this.readObject(var1, biJ<"c">(21368, 1615621249108929325L ^ var2), ie::new);
      int[] var4 = var10000;

      try {
         this.eurvE = this.readObject(var1, biJ<"c">(8797, 3247802785115838977L ^ var2), if::new);
         this.ZphLO = this.readObject(var1, biJ<"c">(25986, 6760154418197650904L ^ var2), id::new);
         if (var4 != null) {
            iS.bwK("Mbh4J");
         }
      } catch (MatchException var5) {
         throw biF(var5);
      }
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
      // 00: getstatic sixtwo/ig.yAiNR J
      // 03: ldc2_w 4672132969635
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ig.biE ()[I
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 4
      // 14: astore 3
      // 15: aload 0
      // 16: aload 3
      // 17: ifnonnull 49
      // 1a: getfield sixtwo/ig.ZMxLk [I
      // 1d: ifnull 48
      // 20: goto 27
      // 23: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: sipush 395
      // 2c: ldc2_w 6506912947041191769
      // 2f: lload 1
      // 30: lxor
      // 31: invokedynamic c (IJ)Ljava/lang/String; bsm=sixtwo/ig.biJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: aload 0
      // 37: aload 0
      // 38: getfield sixtwo/ig.ZMxLk [I
      // 3b: invokevirtual sixtwo/ig.writeIntArray ([I)Lcom/google/gson/JsonArray;
      // 3e: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 41: goto 48
      // 44: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: aload 0
      // 49: aload 3
      // 4a: ifnonnull 7b
      // 4d: getfield sixtwo/ig.yJarQ Lsixtwo/ie;
      // 50: ifnull 7a
      // 53: goto 5a
      // 56: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: aload 4
      // 5c: sipush 25012
      // 5f: ldc2_w 8159349412004734823
      // 62: lload 1
      // 63: lxor
      // 64: invokedynamic c (IJ)Ljava/lang/String; bsm=sixtwo/ig.biJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 69: aload 0
      // 6a: getfield sixtwo/ig.yJarQ Lsixtwo/ie;
      // 6d: invokevirtual sixtwo/ie.toJson ()Lcom/google/gson/JsonObject;
      // 70: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // 73: goto 7a
      // 76: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 0
      // 7b: aload 3
      // 7c: ifnonnull ad
      // 7f: getfield sixtwo/ig.eurvE Lsixtwo/if;
      // 82: ifnull ac
      // 85: goto 8c
      // 88: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8b: athrow
      // 8c: aload 4
      // 8e: sipush 23042
      // 91: ldc2_w 4408249560675392726
      // 94: lload 1
      // 95: lxor
      // 96: invokedynamic c (IJ)Ljava/lang/String; bsm=sixtwo/ig.biJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 9b: aload 0
      // 9c: getfield sixtwo/ig.eurvE Lsixtwo/if;
      // 9f: invokevirtual sixtwo/if.toJson ()Lcom/google/gson/JsonObject;
      // a2: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // a5: goto ac
      // a8: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ab: athrow
      // ac: aload 0
      // ad: getfield sixtwo/ig.ZphLO Lsixtwo/id;
      // b0: ifnull d3
      // b3: aload 4
      // b5: sipush 6026
      // b8: ldc2_w 9074284833250169180
      // bb: lload 1
      // bc: lxor
      // bd: invokedynamic c (IJ)Ljava/lang/String; bsm=sixtwo/ig.biJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // c2: aload 0
      // c3: getfield sixtwo/ig.ZphLO Lsixtwo/id;
      // c6: invokevirtual sixtwo/id.toJson ()Lcom/google/gson/JsonObject;
      // c9: invokevirtual com/google/gson/JsonObject.add (Ljava/lang/String;Lcom/google/gson/JsonElement;)V
      // cc: goto d3
      // cf: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d2: athrow
      // d3: aload 4
      // d5: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // d8: ifnonnull e8
      // db: bipush 1
      // dc: newarray 10
      // de: invokestatic sixtwo/ig.biD ([I)V
      // e1: goto e8
      // e4: invokestatic sixtwo/ig.biF (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e7: athrow
      // e8: areturn
   }

   public mG bis() {
      return this.yJarQ.bhJ();
   }

   public static void biD(int[] var0) {
      sYFFC = var0;
   }

   public mG biq() {
      return this.yJarQ.bhH();
   }

   public id biy() {
      return this.ZphLO;
   }

   public if bix() {
      return this.eurvE;
   }

   public mG bip() {
      return this.yJarQ.bhG();
   }

   public static int[] biE() {
      return sYFFC;
   }

   public void biA(ie var1) {
      this.yJarQ = var1;
   }

   private static String biG(byte[] var0) {
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

   public int[] biv() {
      return this.ZMxLk;
   }

   private static Object biI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = biH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void biB(if var1) {
      this.eurvE = var1;
   }

   private static CallSite biJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("biI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ig" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException biF(MatchException var0) {
      return var0;
   }

   public ie biw() {
      return this.yJarQ;
   }

   public void biC(id var1) {
      this.ZphLO = var1;
   }

   public boolean biu() {
      return false;
   }

   private static String biH(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 21886;
      if (wICbh[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])jNjLa.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               jNjLa.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ig", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = XkqOU[var5].getBytes("ISO-8859-1");
         wICbh[var5] = biG(((Cipher)var4[0]).doFinal(var9));
      }

      return wICbh[var5];
   }

   public void biz(int[] var1) {
      this.ZMxLk = var1;
   }
}
