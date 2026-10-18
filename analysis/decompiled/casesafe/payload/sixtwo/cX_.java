package sixtwo;

import com.mojang.authlib.GameProfile;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_1293;
import net.minecraft.class_1294;
import net.minecraft.class_1799;
import net.minecraft.class_745;

public class cX extends gg {
   static final double[] AekfX;
   static final double bTQok = 1.5;
   static final double uNWYG = 0.35;
   private final cy NRFCF;
   private final cJ TadoM;
   static class_745 oZvjF;
   private cX$ss SBCbE;
   private class_1268 RGVXb;
   private class_1799 aHWam;
   private static final long KKUeM = gb.aYR(-4989819808141205525L, -3482722268156601436L, MethodHandles.lookup().lookupClass()).a(161717892977365L);
   private static final String[] MQXRm;
   private static final String[] uCanr;
   private static final Map vRiTu = new HashMap(13);
   private static final long[] UzutJ;
   private static final Integer[] xjABA;
   private static final Map LLyow;

   public cX() {
      long var1 = KKUeM ^ 38024773765863L;
      super(gf.aZL(aaJ<"g">(27308, 2446073819823595902L ^ var1), false, gh.qBzlZ).aZS(false));
      this.NRFCF = new cy(
            this,
            mr.clS(
               new int[]{
                  aaJ<"g">(27196, 5717736315886854626L ^ var1),
                  aaJ<"g">(1600, 1990001447992462767L ^ var1),
                  aaJ<"g">(25808, 160545442824744705L ^ var1),
                  aaJ<"g">(14967, 6613703336284074419L ^ var1)
               }
            )
         )
         .Un(aaJ<"g">(12874, 981697578995071396L ^ var1))
         .Up("");
      int[] var10004 = new int[aaJ<"g">(23288, 157819202841923895L ^ var1)];
      var10004[0] = aaJ<"g">(25845, 1587216281477738299L ^ var1);
      var10004[1] = aaJ<"g">(22386, 3427196433148402869L ^ var1);
      var10004[2] = aaJ<"g">(24071, 1154092749879301582L ^ var1);
      var10004[3] = aaJ<"g">(17311, 1460317306204670071L ^ var1);
      var10004[4] = aaJ<"g">(9798, 313507787410779565L ^ var1);
      var10004[5] = aaJ<"g">(12337, 2280390564754799590L ^ var1);
      var10004[aaJ<"g">(3619, 5673353762369504763L ^ var1)] = aaJ<"g">(17136, 7572691066895452441L ^ var1);
      var10004[aaJ<"g">(30198, 4178982979175415323L ^ var1)] = aaJ<"g">(16071, 3923613218872341767L ^ var1);
      var10004[aaJ<"g">(17390, 5610169565858154545L ^ var1)] = aaJ<"g">(29139, 4665723345060395535L ^ var1);
      var10004[aaJ<"g">(14062, 301563771418459426L ^ var1)] = aaJ<"g">(31220, 4046616807793947189L ^ var1);
      var10004[aaJ<"g">(6641, 2688921496077537834L ^ var1)] = aaJ<"g">(25004, 750129104167856704L ^ var1);
      var10004[aaJ<"g">(28608, 243680113912734762L ^ var1)] = aaJ<"g">(7469, 8285690536408782560L ^ var1);
      var10004[aaJ<"g">(14398, 7491533834422399997L ^ var1)] = aaJ<"g">(10955, 8236281525944492291L ^ var1);
      var10004[aaJ<"g">(11462, 124008232938907392L ^ var1)] = aaJ<"g">(13730, 7583746063681371767L ^ var1);
      this.TadoM = new cJ(this, mr.clS(var10004)).WE(false);
      this.SBCbE = cX$ss.uksqJ;
      this.RGVXb = class_1268.field_5808;
      this.aHWam = class_1799.field_8037;
   }

   static {
      long var11 = KKUeM ^ 21703190965026L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[17];
      int var18 = 0;
      String var17 = "├ü├í\u0098c\u0014\u008b├î┬┐\u007f4N\\B├ä\u008b\u0012 ┬▒├é\u0080@\u001f7├ż\u0082P├í]\u009c}├╝\u0018\u0013┬ž┬ÂP,QM├«v├Ç?\u001f├í├ę\u008b├ĺ\u0098\u0010\u0010┬ól├Ĺ┬▓├ź├┐├░├É├Ö\u0004├ć├ÁE├ś\u0000\u0010├Ę\u0087├ö├Â├Ő;┬á┬Ą\u00021U├Źw┬ź\u009c# ┬Ž├╣├ç\u0099b┬╣├ë2┬ż!├čqi├ľE~\u0096┬í┬║\u0098┬ę├ą├Ź┬žs├Á$┬╣├╣├ç├ż\u0012\u0010\u0017\u001a├â\u0017Z├É\u009ce\b├ş\u008dPB┬╗m┬ą\u0010B\u0011\u0086\u0087├á├ľ\f┬»g3├┐@├Ö W\u0013\u0010├É+┬╝┬Ş\ts┬íZ├Á├Ł\u0000\u008d├│┬┤├Â\u0017 Q├Äp\f├│A┬╗┬ę├ś4E├┐\u0006\u0092\r\u0007A┬╗\u0005M├Žv├ÇT┬Ş\n├č\u00ad\u008dK├Ęl\u0010&W\u00985├üc┬ę├│C{├ąiU├ł H\u00109\u0003┬┐m├Âg┬«┬Žu├Ł\u0015\u008d├é-?h\u0010G├»┬ŞKs┬»*┬┤aU├îBN├á\u0091~\u0010C\u0095┬ĚE├Ť3l\u0082┬Ş}\u008e├Ö~K├î\u008a\u0010T├╗\u0002\u000f5├╝fd├Âk┬í\u0010├▓ ├Č\u0080\u0010├ť7P┬│RAP├ĺ\u0017├ę├žF\u00859h)";
      int var19 = "├ü├í\u0098c\u0014\u008b├î┬┐\u007f4N\\B├ä\u008b\u0012 ┬▒├é\u0080@\u001f7├ż\u0082P├í]\u009c}├╝\u0018\u0013┬ž┬ÂP,QM├«v├Ç?\u001f├í├ę\u008b├ĺ\u0098\u0010\u0010┬ól├Ĺ┬▓├ź├┐├░├É├Ö\u0004├ć├ÁE├ś\u0000\u0010├Ę\u0087├ö├Â├Ő;┬á┬Ą\u00021U├Źw┬ź\u009c# ┬Ž├╣├ç\u0099b┬╣├ë2┬ż!├čqi├ľE~\u0096┬í┬║\u0098┬ę├ą├Ź┬žs├Á$┬╣├╣├ç├ż\u0012\u0010\u0017\u001a├â\u0017Z├É\u009ce\b├ş\u008dPB┬╗m┬ą\u0010B\u0011\u0086\u0087├á├ľ\f┬»g3├┐@├Ö W\u0013\u0010├É+┬╝┬Ş\ts┬íZ├Á├Ł\u0000\u008d├│┬┤├Â\u0017 Q├Äp\f├│A┬╗┬ę├ś4E├┐\u0006\u0092\r\u0007A┬╗\u0005M├Žv├ÇT┬Ş\n├č\u00ad\u008dK├Ęl\u0010&W\u00985├üc┬ę├│C{├ąiU├ł H\u00109\u0003┬┐m├Âg┬«┬Žu├Ł\u0015\u008d├é-?h\u0010G├»┬ŞKs┬»*┬┤aU├îBN├á\u0091~\u0010C\u0095┬ĚE├Ť3l\u0082┬Ş}\u008e├Ö~K├î\u008a\u0010T├╗\u0002\u000f5├╝fd├Âk┬í\u0010├▓ ├Č\u0080\u0010├ť7P┬│RAP├ĺ\u0017├ę├žF\u00859h)"
         .length();
      char var16 = 16;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = aaD(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     MQXRm = var20;
                     uCanr = new String[17];
                     LLyow = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[40];
                     int var3 = 0;
                     String var4 = "P├┤├î├Ć├Üq├Ż┬ž┬Á├Ç\u0088├ő├á\u0001├«┬┐├ÇSY├ú├▒┬«├Ľqnz\u0001├ą┬┤├ú├ł\u001b}\u0092\u0081\u009c\u009b├Ż┬Â^├Ö├Ź┬┐\f├Ą]\u0082├║\u0093├Ś6s\u0085\u0081┬¬iz├┐┬Ą~┬ĘqD$\u0004\u0006┬║┬╝X├łgW\u000e\u0018├ęg$^\u0007\u008d├▓\u000e\u0002\u0097\"├»├Ż\u008c├â9\u008f\u008f┬▓Z├ôm├ç├â\u0085\u001f?├ś\u008d┬╗;\u00855\u008e├×G├┤├Ĺ\u009ci├░h\u00adA├ů├▓n├«├ć\u009d\u0086├ĺ\u00817┬Ák]┬ą├╗\u009dW├ęL├ĽZ`@├ş├Ą├Ź\u0011n├ŚF\u0080\u0086├░{y├ö\u0006├ç<├Ç┬ÁV┬Â├ż┬Č\u0000F\u008ci7┬▒g\u0001├ö┬ú\u008b\u008d\u0092├á├ü5├╝├│┬┐┬Ę\u0014n├ş┬í)\u00912\u0097\u008e\u0004,xh├Ě\u009c?A\u0018\u0010k\u0016\u0007\u001f%┬ó├▓&\b┬┐├Ž\u0081├ö!H├ÁQ1├Ĺ├░\u009e\u0086├ä┬«-├»8;├Ö\u008e\u001d├ú\u0084\\├ç├â\u001e├ş\u000f┬Ę8\u000e├łpRb├łF┬ú\u0015X\u001d\u008fja\re┬ŞD\t├ë┬░┬Á4\t\u0091<,├ą\u0014S-\b$V\u0092\u001a├É\u000e^k\u007f├ů!\u0091┬Â+R\r\u009e\u007f├ć├ĺw┬ž\u0014:├Ć\u008e├Şp\"";
                     int var5 = "P├┤├î├Ć├Üq├Ż┬ž┬Á├Ç\u0088├ő├á\u0001├«┬┐├ÇSY├ú├▒┬«├Ľqnz\u0001├ą┬┤├ú├ł\u001b}\u0092\u0081\u009c\u009b├Ż┬Â^├Ö├Ź┬┐\f├Ą]\u0082├║\u0093├Ś6s\u0085\u0081┬¬iz├┐┬Ą~┬ĘqD$\u0004\u0006┬║┬╝X├łgW\u000e\u0018├ęg$^\u0007\u008d├▓\u000e\u0002\u0097\"├»├Ż\u008c├â9\u008f\u008f┬▓Z├ôm├ç├â\u0085\u001f?├ś\u008d┬╗;\u00855\u008e├×G├┤├Ĺ\u009ci├░h\u00adA├ů├▓n├«├ć\u009d\u0086├ĺ\u00817┬Ák]┬ą├╗\u009dW├ęL├ĽZ`@├ş├Ą├Ź\u0011n├ŚF\u0080\u0086├░{y├ö\u0006├ç<├Ç┬ÁV┬Â├ż┬Č\u0000F\u008ci7┬▒g\u0001├ö┬ú\u008b\u008d\u0092├á├ü5├╝├│┬┐┬Ę\u0014n├ş┬í)\u00912\u0097\u008e\u0004,xh├Ě\u009c?A\u0018\u0010k\u0016\u0007\u001f%┬ó├▓&\b┬┐├Ž\u0081├ö!H├ÁQ1├Ĺ├░\u009e\u0086├ä┬«-├»8;├Ö\u008e\u001d├ú\u0084\\├ç├â\u001e├ş\u000f┬Ę8\u000e├łpRb├łF┬ú\u0015X\u001d\u008fja\re┬ŞD\t├ë┬░┬Á4\t\u0091<,├ą\u0014S-\b$V\u0092\u001a├É\u000e^k\u007f├ů!\u0091┬Â+R\r\u009e\u007f├ć├ĺw┬ž\u0014:├Ć\u008e├Şp\""
                        .length();
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
                                    UzutJ = var6;
                                    xjABA = new Integer[40];
                                    AekfX = new double[]{1.2, 1.75, 2.2};
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "├Ľ├▓\u0085├ć├╗├ş&:f├şcvw┬áJ'";
                                 var5 = "├Ľ├▓\u0085├ć├╗├ş&:f├şcvw┬áJ'".length();
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

                  var17 = "├Â\u0007=├░G*\u0013├Şj\u009c}3┬ą1g-\u0010\u0092\u00920\u0098?├▒E\u0089\u009dm~┬│\f┬Ą\u0097┬Á";
                  var19 = "├Â\u0007=├░G*\u0013├Şj\u009c}3┬ą1g-\u0010\u0092\u00920\u0098?├▒E\u0089\u009dm~┬│\f┬Ą\u0097┬Á".length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   public boolean aam() {
      long var1 = KKUeM ^ 95690506149209L;

      try {
         if (oZvjF != null) {
            return true;
         }
      } catch (NumberFormatException var3) {
         throw aaC(var3);
      }

      return false;
   }

   public void aas(cX$ss param1, class_1268 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 133505418045668
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 0
      // 0e: aload 1
      // 0f: aload 5
      // 11: ifnonnull 21
      // 14: ifnonnull 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1d: athrow
      // 1e: getstatic sixtwo/cX$ss.uksqJ Lsixtwo/cX$ss;
      // 21: goto 25
      // 24: aload 1
      // 25: putfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 28: aload 0
      // 29: aload 2
      // 2a: aload 5
      // 2c: ifnonnull 3c
      // 2f: ifnonnull 3f
      // 32: goto 39
      // 35: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 38: athrow
      // 39: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 3c: goto 40
      // 3f: aload 2
      // 40: putfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 43: aload 0
      // 44: aload 5
      // 46: ifnonnull 61
      // 49: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 4c: getstatic sixtwo/cX$ss.vNDXP Lsixtwo/cX$ss;
      // 4f: if_acmpeq 67
      // 52: goto 59
      // 55: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 58: athrow
      // 59: aload 0
      // 5a: goto 61
      // 5d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 60: athrow
      // 61: getstatic net/minecraft/class_1799.field_8037 Lnet/minecraft/class_1799;
      // 64: putfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 67: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 6a: ifnull b0
      // 6d: aload 0
      // 6e: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 71: getstatic sixtwo/cX$ss.uksqJ Lsixtwo/cX$ss;
      // 74: if_acmpne b0
      // 77: goto 7e
      // 7a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 7d: athrow
      // 7e: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 81: aload 5
      // 83: ifnonnull a4
      // 86: goto 8d
      // 89: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 8c: athrow
      // 8d: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 90: ifeq b0
      // 93: goto 9a
      // 96: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 99: athrow
      // 9a: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 9d: goto a4
      // a0: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // a3: athrow
      // a4: invokevirtual net/minecraft/class_745.method_6021 ()V
      // a7: aload 0
      // a8: bipush 0
      // a9: aload 0
      // aa: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // ad: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // b0: return
   }

   @Override
   public void aaj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 85169817867775
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 28
      // 11: invokevirtual sixtwo/cX.bab ()Z
      // 14: ifne 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 22: athrow
      // 23: aload 0
      // 24: invokespecial sixtwo/gg.aaj ()V
      // 27: aload 0
      // 28: invokevirtual sixtwo/cX.aak ()V
      // 2b: return
   }

   private static NumberFormatException aaC(NumberFormatException var0) {
      return var0;
   }

   private void aaA() {
      long var1 = KKUeM ^ 78353784234798L;
      iS[] var3 = dh.afl();

      class_745 var10000;
      label22: {
         try {
            var10000 = oZvjF;
            if (var3 != null) {
               break label22;
            }

            if (oZvjF == null) {
               return;
            }
         } catch (NumberFormatException var4) {
            throw aaC(var4);
         }

         oZvjF.method_36456(rD.dlmvG.field_1724.method_36454());
         oZvjF.method_36457(rD.dlmvG.field_1724.method_36455());
         oZvjF.field_5982 = oZvjF.method_36454();
         oZvjF.field_6004 = oZvjF.method_36455();
         oZvjF.field_6283 = oZvjF.method_36454();
         oZvjF.field_6220 = oZvjF.field_6283;
         oZvjF.field_6241 = oZvjF.method_36454();
         var10000 = oZvjF;
      }

      var10000.field_6259 = oZvjF.field_6241;
   }

   public void aal() {
      this.aaB();
   }

   private static CallSite aaJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aaI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public class_745 aan() {
      return oZvjF;
   }

   public class_1268 aap() {
      return this.RGVXb;
   }

   public void aak() {
      long var1 = KKUeM ^ 99198620003230L;
      iS[] var3 = dh.afl();

      boolean var10000;
      label58: {
         try {
            var10000 = this.bab();
            if (var3 != null) {
               break label58;
            }

            if (!var10000) {
               return;
            }
         } catch (NumberFormatException var8) {
            throw aaC(var8);
         }

         this.aaB();
         oZvjF = new class_745(rD.dlmvG.field_1687, new GameProfile(UUID.randomUUID(), this.NRFCF.Us()));
         oZvjF.method_5719(rD.dlmvG.field_1724);
         this.aaA();
         var10000 = this.TadoM.WF();
      }

      label63: {
         try {
            if (var3 != null) {
               return;
            }

            if (!var10000) {
               break label63;
            }
         } catch (NumberFormatException var7) {
            throw aaC(var7);
         }

         int var4 = aaJ<"g">(32446, 7177330653368652829L ^ var1);
         int var5 = 0;

         label40: {
            while (var5 < 4) {
               try {
                  oZvjF.method_31548().method_5447(var4 + var5, rD.dlmvG.field_1724.method_31548().method_5438(var4 + var5).method_7972());
                  var5++;
                  if (var3 != null) {
                     break label40;
                  }

                  if (var3 != null) {
                     break;
                  }
               } catch (NumberFormatException var6) {
                  throw aaC(var6);
               }
            }

            oZvjF.method_6122(class_1268.field_5808, rD.dlmvG.field_1724.method_6047().method_7972());
         }

         oZvjF.method_6122(class_1268.field_5810, rD.dlmvG.field_1724.method_6079().method_7972());
      }

      rD.dlmvG.field_1687.method_53875(oZvjF);
      oZvjF.method_6092(new class_1293(class_1294.field_5924, aaJ<"g">(22049, 1954056459808947333L ^ var1), 2));
      oZvjF.method_6092(new class_1293(class_1294.field_5898, aaJ<"g">(20063, 7972796024584611053L ^ var1), 4));
      oZvjF.method_6092(new class_1293(class_1294.field_5907, aaJ<"g">(20063, 7972796024584611053L ^ var1), 1));
   }

   private void aaB() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 130450121356052
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0f: ifnonnull 17
      // 12: return
      // 13: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 16: athrow
      // 17: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1a: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1d: aload 3
      // 1e: ifnonnull 38
      // 21: ifnull 44
      // 24: goto 2b
      // 27: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2a: athrow
      // 2b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 31: goto 38
      // 34: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 37: athrow
      // 38: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 3b: invokevirtual net/minecraft/class_745.method_5628 ()I
      // 3e: getstatic net/minecraft/class_1297$class_5529.field_26999 Lnet/minecraft/class_1297$class_5529;
      // 41: invokevirtual net/minecraft/class_638.method_2945 (ILnet/minecraft/class_1297$class_5529;)V
      // 44: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 47: getstatic net/minecraft/class_1297$class_5529.field_26999 Lnet/minecraft/class_1297$class_5529;
      // 4a: invokevirtual net/minecraft/class_745.method_31745 (Lnet/minecraft/class_1297$class_5529;)V
      // 4d: aconst_null
      // 4e: putstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 51: return
   }

   public cX$ss aao() {
      return this.SBCbE;
   }

   public void aaq(String var1) {
      this.NRFCF.Up(var1);
   }

   public boolean aar(String param1, class_1799 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cX.KKUeM J
      // 003: ldc2_w 120642295633797
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 5
      // 00d: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 010: ifnull 029
      // 013: aload 1
      // 014: ifnull 029
      // 017: goto 01e
      // 01a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 01d: athrow
      // 01e: aload 2
      // 01f: ifnonnull 02f
      // 022: goto 029
      // 025: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 028: athrow
      // 029: bipush 0
      // 02a: ireturn
      // 02b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 02e: athrow
      // 02f: aload 1
      // 030: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 033: astore 6
      // 035: aload 2
      // 036: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 039: astore 7
      // 03b: aload 6
      // 03d: astore 8
      // 03f: bipush -1
      // 040: istore 9
      // 042: aload 8
      // 044: invokevirtual java/lang/String.hashCode ()I
      // 047: aload 5
      // 049: ifnonnull 385
      // 04c: lookupswitch 823 13 -1548738978 312 -1220934547 408 -7847512 168 109935 264 3138990 708 3194991 216 3198432 360 3317797 588 3343801 120 93922241 768 94627585 468 1069952181 528 1735676010 648
      // 0c0: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0c3: athrow
      // 0c4: aload 8
      // 0c6: sipush 3900
      // 0c9: ldc2_w 8022692002955433821
      // 0cc: lload 3
      // 0cd: lxor
      // 0ce: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d3: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 0d6: aload 5
      // 0d8: ifnonnull 385
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0e1: athrow
      // 0e2: ifeq 383
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0eb: athrow
      // 0ec: bipush 0
      // 0ed: istore 9
      // 0ef: aload 5
      // 0f1: ifnull 383
      // 0f4: aload 8
      // 0f6: sipush 28155
      // 0f9: ldc2_w 3094569090395633041
      // 0fc: lload 3
      // 0fd: lxor
      // 0fe: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 103: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 106: aload 5
      // 108: ifnonnull 385
      // 10b: goto 112
      // 10e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 111: athrow
      // 112: ifeq 383
      // 115: goto 11c
      // 118: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 11b: athrow
      // 11c: bipush 1
      // 11d: istore 9
      // 11f: aload 5
      // 121: ifnull 383
      // 124: aload 8
      // 126: sipush 12472
      // 129: ldc2_w 5774514469581859029
      // 12c: lload 3
      // 12d: lxor
      // 12e: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 133: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 136: aload 5
      // 138: ifnonnull 385
      // 13b: goto 142
      // 13e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 141: athrow
      // 142: ifeq 383
      // 145: goto 14c
      // 148: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 14b: athrow
      // 14c: bipush 2
      // 14d: istore 9
      // 14f: aload 5
      // 151: ifnull 383
      // 154: aload 8
      // 156: sipush 14134
      // 159: ldc2_w 7928041346988617560
      // 15c: lload 3
      // 15d: lxor
      // 15e: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 163: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 166: aload 5
      // 168: ifnonnull 385
      // 16b: goto 172
      // 16e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 171: athrow
      // 172: ifeq 383
      // 175: goto 17c
      // 178: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 17b: athrow
      // 17c: bipush 3
      // 17d: istore 9
      // 17f: aload 5
      // 181: ifnull 383
      // 184: aload 8
      // 186: sipush 12790
      // 189: ldc2_w 3569136606792001924
      // 18c: lload 3
      // 18d: lxor
      // 18e: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 193: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 196: aload 5
      // 198: ifnonnull 385
      // 19b: goto 1a2
      // 19e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1a1: athrow
      // 1a2: ifeq 383
      // 1a5: goto 1ac
      // 1a8: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1ab: athrow
      // 1ac: bipush 4
      // 1ad: istore 9
      // 1af: aload 5
      // 1b1: ifnull 383
      // 1b4: aload 8
      // 1b6: sipush 570
      // 1b9: ldc2_w 1890078040778775121
      // 1bc: lload 3
      // 1bd: lxor
      // 1be: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1c3: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 1c6: aload 5
      // 1c8: ifnonnull 385
      // 1cb: goto 1d2
      // 1ce: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1d1: athrow
      // 1d2: ifeq 383
      // 1d5: goto 1dc
      // 1d8: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1db: athrow
      // 1dc: bipush 5
      // 1dd: istore 9
      // 1df: aload 5
      // 1e1: ifnull 383
      // 1e4: aload 8
      // 1e6: sipush 32694
      // 1e9: ldc2_w 6529068247416793050
      // 1ec: lload 3
      // 1ed: lxor
      // 1ee: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1f3: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 1f6: aload 5
      // 1f8: ifnonnull 385
      // 1fb: goto 202
      // 1fe: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 201: athrow
      // 202: ifeq 383
      // 205: goto 20c
      // 208: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 20b: athrow
      // 20c: sipush 16244
      // 20f: ldc2_w 8244252837902330324
      // 212: lload 3
      // 213: lxor
      // 214: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 219: istore 9
      // 21b: aload 5
      // 21d: ifnull 383
      // 220: aload 8
      // 222: sipush 21792
      // 225: ldc2_w 7951691774611672388
      // 228: lload 3
      // 229: lxor
      // 22a: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 22f: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 232: aload 5
      // 234: ifnonnull 385
      // 237: goto 23e
      // 23a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 23d: athrow
      // 23e: ifeq 383
      // 241: goto 248
      // 244: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 247: athrow
      // 248: sipush 6432
      // 24b: ldc2_w 3155950425318854536
      // 24e: lload 3
      // 24f: lxor
      // 250: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 255: istore 9
      // 257: aload 5
      // 259: ifnull 383
      // 25c: aload 8
      // 25e: sipush 12306
      // 261: ldc2_w 8015331536979339380
      // 264: lload 3
      // 265: lxor
      // 266: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 26b: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 26e: aload 5
      // 270: ifnonnull 385
      // 273: goto 27a
      // 276: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 279: athrow
      // 27a: ifeq 383
      // 27d: goto 284
      // 280: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 283: athrow
      // 284: sipush 15138
      // 287: ldc2_w 5604716902099856773
      // 28a: lload 3
      // 28b: lxor
      // 28c: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 291: istore 9
      // 293: aload 5
      // 295: ifnull 383
      // 298: aload 8
      // 29a: sipush 8876
      // 29d: ldc2_w 3717130896753408715
      // 2a0: lload 3
      // 2a1: lxor
      // 2a2: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a7: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 2aa: aload 5
      // 2ac: ifnonnull 385
      // 2af: goto 2b6
      // 2b2: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2b5: athrow
      // 2b6: ifeq 383
      // 2b9: goto 2c0
      // 2bc: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2bf: athrow
      // 2c0: sipush 8017
      // 2c3: ldc2_w 1739280229576772064
      // 2c6: lload 3
      // 2c7: lxor
      // 2c8: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2cd: istore 9
      // 2cf: aload 5
      // 2d1: ifnull 383
      // 2d4: aload 8
      // 2d6: sipush 17074
      // 2d9: ldc2_w 1604468540564986577
      // 2dc: lload 3
      // 2dd: lxor
      // 2de: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2e3: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 2e6: aload 5
      // 2e8: ifnonnull 385
      // 2eb: goto 2f2
      // 2ee: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2f1: athrow
      // 2f2: ifeq 383
      // 2f5: goto 2fc
      // 2f8: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2fb: athrow
      // 2fc: sipush 18754
      // 2ff: ldc2_w 4602967414553272313
      // 302: lload 3
      // 303: lxor
      // 304: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 309: istore 9
      // 30b: aload 5
      // 30d: ifnull 383
      // 310: aload 8
      // 312: sipush 25356
      // 315: ldc2_w 2668914463049284453
      // 318: lload 3
      // 319: lxor
      // 31a: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 31f: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 322: aload 5
      // 324: ifnonnull 385
      // 327: goto 32e
      // 32a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 32d: athrow
      // 32e: ifeq 383
      // 331: goto 338
      // 334: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 337: athrow
      // 338: sipush 5038
      // 33b: ldc2_w 2788577870117045532
      // 33e: lload 3
      // 33f: lxor
      // 340: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 345: istore 9
      // 347: aload 5
      // 349: ifnull 383
      // 34c: aload 8
      // 34e: sipush 13587
      // 351: ldc2_w 4662686921270799740
      // 354: lload 3
      // 355: lxor
      // 356: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 35b: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 35e: aload 5
      // 360: ifnonnull 385
      // 363: goto 36a
      // 366: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 369: athrow
      // 36a: ifeq 383
      // 36d: goto 374
      // 370: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 373: athrow
      // 374: sipush 25564
      // 377: ldc2_w 1464187679651329384
      // 37a: lload 3
      // 37b: lxor
      // 37c: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 381: istore 9
      // 383: iload 9
      // 385: aload 5
      // 387: ifnonnull 3e3
      // 38a: tableswitch 167 0 12 70 70 70 92 92 107 107 122 122 137 137 152 152
      // 3cc: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 3cf: athrow
      // 3d0: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 3d3: getstatic net/minecraft/class_1268.field_5808 Lnet/minecraft/class_1268;
      // 3d6: aload 7
      // 3d8: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 3db: bipush 1
      // 3dc: goto 3e3
      // 3df: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 3e2: athrow
      // 3e3: goto 439
      // 3e6: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 3e9: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 3ec: aload 7
      // 3ee: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 3f1: bipush 1
      // 3f2: goto 439
      // 3f5: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 3f8: getstatic net/minecraft/class_1304.field_6169 Lnet/minecraft/class_1304;
      // 3fb: aload 7
      // 3fd: invokevirtual net/minecraft/class_745.method_5673 (Lnet/minecraft/class_1304;Lnet/minecraft/class_1799;)V
      // 400: bipush 1
      // 401: goto 439
      // 404: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 407: getstatic net/minecraft/class_1304.field_6174 Lnet/minecraft/class_1304;
      // 40a: aload 7
      // 40c: invokevirtual net/minecraft/class_745.method_5673 (Lnet/minecraft/class_1304;Lnet/minecraft/class_1799;)V
      // 40f: bipush 1
      // 410: goto 439
      // 413: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 416: getstatic net/minecraft/class_1304.field_6172 Lnet/minecraft/class_1304;
      // 419: aload 7
      // 41b: invokevirtual net/minecraft/class_745.method_5673 (Lnet/minecraft/class_1304;Lnet/minecraft/class_1799;)V
      // 41e: bipush 1
      // 41f: goto 439
      // 422: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 425: getstatic net/minecraft/class_1304.field_6166 Lnet/minecraft/class_1304;
      // 428: aload 7
      // 42a: invokevirtual net/minecraft/class_745.method_5673 (Lnet/minecraft/class_1304;Lnet/minecraft/class_1799;)V
      // 42d: bipush 1
      // 42e: goto 439
      // 431: aload 0
      // 432: aload 6
      // 434: aload 7
      // 436: invokevirtual sixtwo/cX.aav (Ljava/lang/String;Lnet/minecraft/class_1799;)Z
      // 439: ireturn
   }

   private static CallSite aaG(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aaF".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void aay(boolean param1, class_1268 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 83102690659587
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 10: aload 5
      // 12: ifnonnull 23
      // 15: ifnonnull 20
      // 18: goto 1f
      // 1b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1e: athrow
      // 1f: return
      // 20: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 23: checkcast mixin/accessors/LivingEntityAccessor
      // 26: astore 6
      // 28: aload 6
      // 2a: bipush 1
      // 2b: iload 1
      // 2c: invokeinterface mixin/accessors/LivingEntityAccessor.callSetLivingEntityFlag (IZ)V 3
      // 31: aload 6
      // 33: bipush 2
      // 34: iload 1
      // 35: ifeq 4e
      // 38: aload 2
      // 39: getstatic net/minecraft/class_1268.field_5810 Lnet/minecraft/class_1268;
      // 3c: if_acmpne 4e
      // 3f: goto 46
      // 42: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 45: athrow
      // 46: bipush 1
      // 47: goto 4f
      // 4a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 4d: athrow
      // 4e: bipush 0
      // 4f: invokeinterface mixin/accessors/LivingEntityAccessor.callSetLivingEntityFlag (IZ)V 3
      // 54: return
   }

   @hG
   public void aat(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cX.KKUeM J
      // 003: ldc2_w 114455230610293
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 010: ifnonnull 018
      // 013: return
      // 014: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 017: athrow
      // 018: aload 0
      // 019: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 01c: getstatic sixtwo/cX$ss.uksqJ Lsixtwo/cX$ss;
      // 01f: if_acmpne 055
      // 022: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 025: aload 4
      // 027: ifnonnull 048
      // 02a: goto 031
      // 02d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 030: athrow
      // 031: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 034: ifeq 054
      // 037: goto 03e
      // 03a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 03d: athrow
      // 03e: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 041: goto 048
      // 044: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 047: athrow
      // 048: invokevirtual net/minecraft/class_745.method_6021 ()V
      // 04b: aload 0
      // 04c: bipush 0
      // 04d: aload 0
      // 04e: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 051: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // 054: return
      // 055: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 058: aload 0
      // 059: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 05c: invokevirtual net/minecraft/class_745.method_5998 (Lnet/minecraft/class_1268;)Lnet/minecraft/class_1799;
      // 05f: astore 5
      // 061: aload 5
      // 063: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 066: aload 4
      // 068: ifnonnull 0e2
      // 06b: ifeq 0cc
      // 06e: goto 075
      // 071: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 074: athrow
      // 075: aload 0
      // 076: aload 4
      // 078: ifnonnull 0cd
      // 07b: goto 082
      // 07e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 081: athrow
      // 082: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 085: getstatic sixtwo/cX$ss.vNDXP Lsixtwo/cX$ss;
      // 088: if_acmpne 0cc
      // 08b: goto 092
      // 08e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 091: athrow
      // 092: aload 0
      // 093: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 096: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 099: aload 4
      // 09b: ifnonnull 0e2
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0a4: athrow
      // 0a5: ifne 0cc
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0ae: athrow
      // 0af: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0b2: aload 0
      // 0b3: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 0b6: aload 0
      // 0b7: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 0ba: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 0bd: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 0c0: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0c3: aload 0
      // 0c4: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 0c7: invokevirtual net/minecraft/class_745.method_5998 (Lnet/minecraft/class_1268;)Lnet/minecraft/class_1799;
      // 0ca: astore 5
      // 0cc: aload 0
      // 0cd: aload 4
      // 0cf: ifnonnull 119
      // 0d2: aload 5
      // 0d4: aload 0
      // 0d5: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 0d8: invokevirtual sixtwo/cX.aax (Lnet/minecraft/class_1799;Lsixtwo/cX$ss;)Z
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0e1: athrow
      // 0e2: ifne 118
      // 0e5: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0e8: aload 4
      // 0ea: ifnonnull 10b
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0f3: athrow
      // 0f4: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 0f7: ifeq 117
      // 0fa: goto 101
      // 0fd: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 100: athrow
      // 101: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 104: goto 10b
      // 107: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 10a: athrow
      // 10b: invokevirtual net/minecraft/class_745.method_6021 ()V
      // 10e: aload 0
      // 10f: bipush 0
      // 110: aload 0
      // 111: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 114: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // 117: return
      // 118: aload 0
      // 119: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 11c: getstatic sixtwo/cX$ss.RymlV Lsixtwo/cX$ss;
      // 11f: aload 4
      // 121: ifnonnull 186
      // 124: if_acmpne 17f
      // 127: goto 12e
      // 12a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 12d: athrow
      // 12e: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 131: invokevirtual net/minecraft/class_745.method_7357 ()Lnet/minecraft/class_1796;
      // 134: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 137: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 13a: invokevirtual net/minecraft/class_1796.method_7904 (Lnet/minecraft/class_1799;)Z
      // 13d: aload 4
      // 13f: ifnonnull 16c
      // 142: goto 149
      // 145: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 148: athrow
      // 149: ifeq 17f
      // 14c: goto 153
      // 14f: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 152: athrow
      // 153: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 156: aload 4
      // 158: ifnonnull 172
      // 15b: goto 162
      // 15e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 161: athrow
      // 162: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 165: goto 16c
      // 168: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 16b: athrow
      // 16c: ifeq 17e
      // 16f: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 172: invokevirtual net/minecraft/class_745.method_6021 ()V
      // 175: aload 0
      // 176: bipush 0
      // 177: aload 0
      // 178: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 17b: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // 17e: return
      // 17f: aload 0
      // 180: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 183: getstatic sixtwo/cX$ss.vNDXP Lsixtwo/cX$ss;
      // 186: aload 4
      // 188: ifnonnull 1d5
      // 18b: if_acmpne 1c2
      // 18e: goto 195
      // 191: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 194: athrow
      // 195: aload 0
      // 196: aload 4
      // 198: ifnonnull 1c3
      // 19b: goto 1a2
      // 19e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1a1: athrow
      // 1a2: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 1a5: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 1a8: ifeq 1c2
      // 1ab: goto 1b2
      // 1ae: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1b1: athrow
      // 1b2: aload 0
      // 1b3: aload 5
      // 1b5: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 1b8: putfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 1bb: goto 1c2
      // 1be: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1c1: athrow
      // 1c2: aload 0
      // 1c3: aload 4
      // 1c5: ifnonnull 1d9
      // 1c8: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 1cb: getstatic sixtwo/cX$ss.vNDXP Lsixtwo/cX$ss;
      // 1ce: goto 1d5
      // 1d1: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1d4: athrow
      // 1d5: if_acmpne 22d
      // 1d8: aload 0
      // 1d9: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 1dc: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 1df: aload 4
      // 1e1: ifnonnull 23f
      // 1e4: ifne 22d
      // 1e7: goto 1ee
      // 1ea: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1ed: athrow
      // 1ee: aload 5
      // 1f0: aload 0
      // 1f1: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 1f4: invokevirtual net/minecraft/class_1799.method_7909 ()Lnet/minecraft/class_1792;
      // 1f7: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 1fa: aload 4
      // 1fc: ifnonnull 23f
      // 1ff: goto 206
      // 202: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 205: athrow
      // 206: ifne 22d
      // 209: goto 210
      // 20c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 20f: athrow
      // 210: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 213: aload 0
      // 214: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 217: aload 0
      // 218: getfield sixtwo/cX.aHWam Lnet/minecraft/class_1799;
      // 21b: invokevirtual net/minecraft/class_1799.method_7972 ()Lnet/minecraft/class_1799;
      // 21e: invokevirtual net/minecraft/class_745.method_6122 (Lnet/minecraft/class_1268;Lnet/minecraft/class_1799;)V
      // 221: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 224: aload 0
      // 225: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 228: invokevirtual net/minecraft/class_745.method_5998 (Lnet/minecraft/class_1268;)Lnet/minecraft/class_1799;
      // 22b: astore 5
      // 22d: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 230: aload 4
      // 232: ifnonnull 26c
      // 235: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 238: goto 23f
      // 23b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 23e: athrow
      // 23f: ifeq 262
      // 242: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 245: aload 4
      // 247: ifnonnull 26c
      // 24a: goto 251
      // 24d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 250: athrow
      // 251: invokevirtual net/minecraft/class_745.method_6058 ()Lnet/minecraft/class_1268;
      // 254: aload 0
      // 255: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 258: if_acmpeq 27c
      // 25b: goto 262
      // 25e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 261: athrow
      // 262: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 265: goto 26c
      // 268: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 26b: athrow
      // 26c: aload 0
      // 26d: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 270: invokevirtual net/minecraft/class_745.method_6019 (Lnet/minecraft/class_1268;)V
      // 273: aload 0
      // 274: bipush 1
      // 275: aload 0
      // 276: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 279: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // 27c: return
   }

   private boolean aax(class_1799 param1, cX$ss param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 136646568929035
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 11: aload 5
      // 13: ifnonnull 21
      // 16: ifeq 22
      // 19: goto 20
      // 1c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1f: athrow
      // 20: bipush 0
      // 21: ireturn
      // 22: aload 2
      // 23: getstatic sixtwo/cX$ss.RymlV Lsixtwo/cX$ss;
      // 26: aload 5
      // 28: ifnonnull 45
      // 2b: if_acmpne 41
      // 2e: goto 35
      // 31: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 34: athrow
      // 35: aload 1
      // 36: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 39: invokevirtual net/minecraft/class_1799.method_31574 (Lnet/minecraft/class_1792;)Z
      // 3c: ireturn
      // 3d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 40: athrow
      // 41: aload 2
      // 42: getstatic sixtwo/cX$ss.vNDXP Lsixtwo/cX$ss;
      // 45: if_acmpne 82
      // 48: getstatic sixtwo/cX$st.uFllB [I
      // 4b: aload 1
      // 4c: invokevirtual net/minecraft/class_1799.method_7976 ()Lnet/minecraft/class_1839;
      // 4f: invokevirtual net/minecraft/class_1839.ordinal ()I
      // 52: iaload
      // 53: aload 5
      // 55: ifnonnull 7d
      // 58: goto 5f
      // 5b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 5e: athrow
      // 5f: lookupswitch 33 2 1 29 2 29
      // 78: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 7b: athrow
      // 7c: bipush 1
      // 7d: goto 81
      // 80: bipush 0
      // 81: ireturn
      // 82: bipush 0
      // 83: ireturn
   }

   private boolean aav(String param1, class_1799 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cX.KKUeM J
      // 003: ldc2_w 140292673030347
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: aload 1
      // 00c: astore 6
      // 00e: astore 5
      // 010: aload 6
      // 012: sipush 1277
      // 015: ldc2_w 6675268902580896731
      // 018: lload 3
      // 019: lxor
      // 01a: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 01f: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 022: aload 5
      // 024: ifnonnull 0cc
      // 027: ifeq 0ba
      // 02a: goto 031
      // 02d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 030: athrow
      // 031: aload 6
      // 033: sipush 2473
      // 036: ldc2_w 3200338112387665538
      // 039: lload 3
      // 03a: lxor
      // 03b: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 040: invokevirtual java/lang/String.length ()I
      // 043: invokevirtual java/lang/String.substring (I)Ljava/lang/String;
      // 046: astore 7
      // 048: aload 0
      // 049: aload 7
      // 04b: invokevirtual sixtwo/cX.aaw (Ljava/lang/String;)Ljava/lang/Integer;
      // 04e: astore 8
      // 050: aload 8
      // 052: aload 5
      // 054: ifnonnull 063
      // 057: ifnull 09e
      // 05a: goto 061
      // 05d: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 060: athrow
      // 061: aload 8
      // 063: invokevirtual java/lang/Integer.intValue ()I
      // 066: aload 5
      // 068: ifnonnull 0a6
      // 06b: bipush 1
      // 06c: if_icmplt 09e
      // 06f: goto 076
      // 072: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 075: athrow
      // 076: aload 8
      // 078: invokevirtual java/lang/Integer.intValue ()I
      // 07b: aload 5
      // 07d: ifnonnull 0b9
      // 080: goto 087
      // 083: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 086: athrow
      // 087: sipush 14062
      // 08a: ldc2_w 301463729731862286
      // 08d: lload 3
      // 08e: lxor
      // 08f: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 094: if_icmple 0a7
      // 097: goto 09e
      // 09a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 09d: athrow
      // 09e: bipush 0
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0a5: athrow
      // 0a6: ireturn
      // 0a7: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0aa: invokevirtual net/minecraft/class_745.method_31548 ()Lnet/minecraft/class_1661;
      // 0ad: aload 8
      // 0af: invokevirtual java/lang/Integer.intValue ()I
      // 0b2: bipush 1
      // 0b3: isub
      // 0b4: aload 2
      // 0b5: invokevirtual net/minecraft/class_1661.method_5447 (ILnet/minecraft/class_1799;)V
      // 0b8: bipush 1
      // 0b9: ireturn
      // 0ba: aload 6
      // 0bc: sipush 17884
      // 0bf: ldc2_w 1623361569240384242
      // 0c2: lload 3
      // 0c3: lxor
      // 0c4: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0c9: invokevirtual java/lang/String.startsWith (Ljava/lang/String;)Z
      // 0cc: aload 5
      // 0ce: ifnonnull 162
      // 0d1: ifeq 161
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0da: athrow
      // 0db: aload 6
      // 0dd: sipush 11637
      // 0e0: ldc2_w 3308125940603677273
      // 0e3: lload 3
      // 0e4: lxor
      // 0e5: invokedynamic w (IJ)Ljava/lang/String; bsm=sixtwo/cX.aaG (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ea: invokevirtual java/lang/String.length ()I
      // 0ed: invokevirtual java/lang/String.substring (I)Ljava/lang/String;
      // 0f0: astore 7
      // 0f2: aload 0
      // 0f3: aload 7
      // 0f5: invokevirtual sixtwo/cX.aaw (Ljava/lang/String;)Ljava/lang/Integer;
      // 0f8: astore 8
      // 0fa: aload 8
      // 0fc: aload 5
      // 0fe: ifnonnull 10d
      // 101: ifnull 147
      // 104: goto 10b
      // 107: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 10a: athrow
      // 10b: aload 8
      // 10d: invokevirtual java/lang/Integer.intValue ()I
      // 110: aload 5
      // 112: ifnonnull 14f
      // 115: iflt 147
      // 118: goto 11f
      // 11b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 11e: athrow
      // 11f: aload 8
      // 121: invokevirtual java/lang/Integer.intValue ()I
      // 124: aload 5
      // 126: ifnonnull 160
      // 129: goto 130
      // 12c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 12f: athrow
      // 130: sipush 2472
      // 133: ldc2_w 7427753862368084048
      // 136: lload 3
      // 137: lxor
      // 138: invokedynamic g (IJ)I bsm=sixtwo/cX.aaJ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 13d: if_icmple 150
      // 140: goto 147
      // 143: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 146: athrow
      // 147: bipush 0
      // 148: goto 14f
      // 14b: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 14e: athrow
      // 14f: ireturn
      // 150: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 153: invokevirtual net/minecraft/class_745.method_31548 ()Lnet/minecraft/class_1661;
      // 156: aload 8
      // 158: invokevirtual java/lang/Integer.intValue ()I
      // 15b: aload 2
      // 15c: invokevirtual net/minecraft/class_1661.method_5447 (ILnet/minecraft/class_1799;)V
      // 15f: bipush 1
      // 160: ireturn
      // 161: bipush 0
      // 162: ireturn
   }

   private void aaz() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 33886862270286
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: aload 3
      // 10: ifnonnull 28
      // 13: invokevirtual net/minecraft/class_310.method_47392 ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 24: athrow
      // 25: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 28: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2b: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 2e: astore 4
      // 30: aload 4
      // 32: invokestatic sixtwo/jc.bzq (Lnet/minecraft/class_1799;)Z
      // 35: aload 3
      // 36: ifnonnull 4d
      // 39: ifne 44
      // 3c: goto 43
      // 3f: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 42: athrow
      // 43: return
      // 44: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 47: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 4a: invokestatic sixtwo/jc.bzw (Lnet/minecraft/class_1309;)Z
      // 4d: aload 3
      // 4e: ifnonnull 64
      // 51: ifne 5c
      // 54: goto 5b
      // 57: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 5a: athrow
      // 5b: return
      // 5c: aload 4
      // 5e: getstatic net/minecraft/class_1893.field_50159 Lnet/minecraft/class_5321;
      // 61: invokestatic sixtwo/jh.bCh (Lnet/minecraft/class_1799;Lnet/minecraft/class_5321;)I
      // 64: istore 5
      // 66: iload 5
      // 68: aload 3
      // 69: ifnonnull 7b
      // 6c: ifgt 79
      // 6f: goto 76
      // 72: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 75: athrow
      // 76: bipush 1
      // 77: istore 5
      // 79: iload 5
      // 7b: getstatic sixtwo/cX.AekfX [D
      // 7e: arraylength
      // 7f: if_icmpgt 90
      // 82: getstatic sixtwo/cX.AekfX [D
      // 85: iload 5
      // 87: bipush 1
      // 88: isub
      // 89: daload
      // 8a: dstore 6
      // 8c: aload 3
      // 8d: ifnull 9f
      // 90: ldc2_w 1.5
      // 93: iload 5
      // 95: bipush 1
      // 96: isub
      // 97: i2d
      // 98: ldc2_w 0.35
      // 9b: dmul
      // 9c: dadd
      // 9d: dstore 6
      // 9f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // a2: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // a5: dconst_0
      // a6: dload 6
      // a8: dconst_0
      // a9: invokevirtual net/minecraft/class_746.method_18800 (DDD)V
      // ac: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // af: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // b2: dconst_0
      // b3: putfield net/minecraft/class_746.field_6017 D
      // b6: return
   }

   private Integer aaw(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cX.KKUeM J
      // 03: ldc2_w 89158882490001
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnonnull 1e
      // 13: ifnull 30
      // 16: goto 1d
      // 19: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual java/lang/String.isBlank ()Z
      // 21: aload 4
      // 23: ifnonnull 3a
      // 26: ifeq 36
      // 29: goto 30
      // 2c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 2f: athrow
      // 30: aconst_null
      // 31: areturn
      // 32: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 35: athrow
      // 36: aload 1
      // 37: invokestatic java/lang/Integer.parseInt (Ljava/lang/String;)I
      // 3a: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 3d: areturn
      // 3e: astore 5
      // 40: aconst_null
      // 41: areturn
   }

   private static int aaI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aaH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String aaE(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5508;
      if (uCanr[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])vRiTu.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               vRiTu.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/cX", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = MQXRm[var5].getBytes("ISO-8859-1");
         uCanr[var5] = aaD(((Cipher)var4[0]).doFinal(var9));
      }

      return uCanr[var5];
   }

   @hG
   public void aau(hw$tv param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cX.KKUeM J
      // 003: ldc2_w 60416166464672
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cX.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/hw$tv.bdm ()Lnet/minecraft/class_1297;
      // 01d: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 020: if_acmpne 12d
      // 023: aload 0
      // 024: invokevirtual sixtwo/cX.aaz ()V
      // 027: aload 0
      // 028: getfield sixtwo/cX.SBCbE Lsixtwo/cX$ss;
      // 02b: getstatic sixtwo/cX$ss.RymlV Lsixtwo/cX$ss;
      // 02e: if_acmpne 070
      // 031: goto 038
      // 034: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 037: athrow
      // 038: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 03b: aload 4
      // 03d: ifnonnull 05e
      // 040: goto 047
      // 043: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 046: athrow
      // 047: invokevirtual net/minecraft/class_745.method_6115 ()Z
      // 04a: ifeq 070
      // 04d: goto 054
      // 050: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 053: athrow
      // 054: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 057: goto 05e
      // 05a: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 05d: athrow
      // 05e: invokevirtual net/minecraft/class_745.method_6058 ()Lnet/minecraft/class_1268;
      // 061: aload 0
      // 062: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 065: if_acmpne 070
      // 068: bipush 1
      // 069: goto 071
      // 06c: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 06f: athrow
      // 070: bipush 0
      // 071: istore 5
      // 073: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 076: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 079: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 07c: invokestatic sixtwo/jg.bBL (Lnet/minecraft/class_1297;Lnet/minecraft/class_1297;)Z
      // 07f: istore 6
      // 081: iload 5
      // 083: aload 4
      // 085: ifnonnull 094
      // 088: ifeq 115
      // 08b: goto 092
      // 08e: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 091: athrow
      // 092: iload 6
      // 094: aload 4
      // 096: ifnonnull 0c2
      // 099: ifeq 115
      // 09c: goto 0a3
      // 09f: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0a2: athrow
      // 0a3: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0a6: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0a9: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 0ac: aload 4
      // 0ae: ifnonnull 0ea
      // 0b1: goto 0b8
      // 0b4: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0b7: athrow
      // 0b8: invokestatic sixtwo/jc.bzo (Lnet/minecraft/class_1799;)Z
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0c1: athrow
      // 0c2: ifeq 114
      // 0c5: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0c8: invokevirtual net/minecraft/class_745.method_6021 ()V
      // 0cb: aload 0
      // 0cc: bipush 0
      // 0cd: aload 0
      // 0ce: getfield sixtwo/cX.RGVXb Lnet/minecraft/class_1268;
      // 0d1: invokevirtual sixtwo/cX.aay (ZLnet/minecraft/class_1268;)V
      // 0d4: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0d7: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0da: invokevirtual net/minecraft/class_746.method_6047 ()Lnet/minecraft/class_1799;
      // 0dd: getstatic net/minecraft/class_9334.field_55878 Lnet/minecraft/class_9331;
      // 0e0: invokevirtual net/minecraft/class_1799.method_58694 (Lnet/minecraft/class_9331;)Ljava/lang/Object;
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 0e9: athrow
      // 0ea: checkcast net/minecraft/class_10590
      // 0ed: astore 7
      // 0ef: aload 7
      // 0f1: ifnull 114
      // 0f4: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 0f7: invokevirtual net/minecraft/class_745.method_7357 ()Lnet/minecraft/class_1796;
      // 0fa: getstatic net/minecraft/class_1802.field_8255 Lnet/minecraft/class_1792;
      // 0fd: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 100: aload 7
      // 102: invokevirtual net/minecraft/class_10590.comp_3602 ()F
      // 105: ldc_w 20.0
      // 108: fmul
      // 109: f2i
      // 10a: invokevirtual net/minecraft/class_1796.method_62835 (Lnet/minecraft/class_1799;I)V
      // 10d: goto 114
      // 110: invokestatic sixtwo/cX.aaC (Ljava/lang/NumberFormatException;)Ljava/lang/NumberFormatException;
      // 113: athrow
      // 114: return
      // 115: getstatic sixtwo/cX.oZvjF Lnet/minecraft/class_745;
      // 118: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11b: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 11e: invokevirtual net/minecraft/class_638.method_48963 ()Lnet/minecraft/class_8109;
      // 121: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 124: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 127: invokevirtual net/minecraft/class_8109.method_48802 (Lnet/minecraft/class_1657;)Lnet/minecraft/class_1282;
      // 12a: invokevirtual net/minecraft/class_745.method_48922 (Lnet/minecraft/class_1282;)V
      // 12d: return
   }

   private static int aaH(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 6991;
      if (xjABA[var3] == null) {
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
         long var5 = UzutJ[var3];
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
         Object[] var9 = (Object[])LLyow.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LLyow.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cX", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         xjABA[var3] = var15;
      }

      return xjABA[var3];
   }

   private static Object aaF(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aaE(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String aaD(byte[] var0) {
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
   public void YO() {
      super.YO();
      this.aaB();
      this.SBCbE = cX$ss.uksqJ;
      this.aHWam = class_1799.field_8037;
   }
}
