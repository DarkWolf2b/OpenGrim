package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.systems.RenderPass;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;
import org.lwjgl.glfw.GLFW;

public final class kj {
   private static final ls mNSdG;
   private static final ls dVZad;
   private static final long LGtJN = gb.aYR(-5100149887312655670L, -641086698390901533L, MethodHandles.lookup().lookupClass()).a(231343024895401L);
   private static final String[] wMCjL;
   private static final String[] wOOLq;
   private static final Map LaLaT = new HashMap(13);

   static {
      long var0 = LGtJN ^ 43175818618112L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[46];
      int var7 = 0;
      String var6 = "\u0094\u0095\u0004├Ö!O9l├ĆL\u0019\u0098<1G├Á\\_\u008e+\u007fB\u001e:\u0018\u0016c#├Ž{v\u001b\u007f\u000e%w├üK!\u0083┬▓ .├ę├╣┬Â┬║\u0012┬Ž \\├Ž\u0012\u008a\u0005├Ç├Ě├Ż\u001e\u0018├ş\u0011├â┬╝\u008dn\u0096Rh├é+┬»├Ż \f\u008f├ż\u0007M├ć\u0004+\u0018\u0085├č├ł@├Ő}├ż├ë├ťY├ž[w\u00ad├Ü├░\u00932KL├Ü┬Ě├ź, v┬Ż@\u001e├ć#p├ę├┤\b\u008a┬╝r┬┐\u0017├Ĺ\u0007┬»+\u009668V6/=├║├▒R\u0005├ő\u0012\u0018g┬ę├Ł┬┤\u009e├×&\u008cEX\u0014\u008d├Ĺ/M┬ĄT\u008b\u0092\u009e`┬ž├Ö├Ž o├╗$├ľ┬╣\u008d\bU \u0095├Ä\u000f\u009d\u0010\u0000├Ť├ĺ┬╝├¬\u0004\u0006├Ľt├ů├ą9┬ąG\u008ao┬▓E\u0010\u008c\u001eG├Ť├Â├╗├ę\u000e├Ęf┬«\\\t├ó┬žZ\u0010\u008b\u008f┬Ą┬ČN7D|\u009e\u009a\u008f├í\u001f22┬╣\u0010*\u0015┬░├┤_┬Ě\u008b\u0011┬Ę;\u008b\u0098P\"├Éa\u0010f`├«k2┬Â├ç)┬ź\u001b├Ł├ë@├Ą├»├Ő\u0010K2├«┬Ę├áx\u0004┬ó├Ő├Ä\u0013 b├ö\u0083w Q\u0011├Ö┬ęB\n\u001b\u0018u├ó=├î├╗\u009f├ŁMy\u0081s├Â┬Żt\u0080H├ľ├Ě├Á┬│├Ć\u009c]\u00ad\u0018@\u0081c┬»\u0096\f%\u001a\u008f┬«\t├Ç^\u009d\u0011\u000b&┬ŞC\u0019├Ş┬╝0[ ├ą7\t├ş├┐\u0007├ł├Ť-){W┬Ą<\u0014\u0084┬ó├ő\"├┐z\u009c\u000e┬Ą├ž├ô(v\u0095┬ę┬Žo\u0010v├ä6├ô├ôh┬í\u0087├ĺW\u008f┬▓l┬«├▓F(├¬\u0086\u0093N\u0086\u0087C*┬«\u000f├Ł\u008b\u0097f\u000b8├ť.\u0084}├▒┬▓+\u0082M^\u008c\u001c├ů├«├Şg\u001f├ťP├Ę\u0005├Śt\u009e ┬Á)P\u0001/├Ś├▒\u001c\t├┐┬┐├Ĺ+├▒\u009f├Ĺq├Ę+{├ż\u0099x┬Ż\u0003├╗\\├Á}d┬ž├Á ├║\u0087\u0081p\u0084\u0086\u009a├án┬▓C├ę\u001a┬Â}\u009aS[┬╣k├×\u0096┬Á├ö├ö├ô┬ż{├ä\u0088├ć┬╝ ├ć├âb├ő┬ž*pa├Ł┬ęi\u0085├╗┬┐3┬á\"┬╣┬░o6_\u001ba┬░\b├žT┬ú├Ą=├ť\u0018]├ç\u0097┬ó\u0000\u000b┬ę=\u008f├őf\u008b├░\u0000├ł\"\u008ef┬Č_?├ök\u0080 ├╗u├Ź\u0089├č\u000f&┬╝├ŤI\u0006├ŁL┬ž├ąX├ľ├Ü├Ź\u009e├Ě┬í#\u0094'├â├ź┬Č┬▓┬¬n\u0000 _\u008dH\u009e├¬ao4┬Ş\u0084(├ő\u008d9(SOJS\u0088_┬╣O|┬ą┬╣L├┐P┬Ě\u0088├×($\u009d\u0003├ę├ĄP\u001b┬║├«\u0094K\n^┬á \u0089├ů├Ž\u0002┬┤┬ĚPJ\u0004├ť├║├▒\t[K\u001b├ÜSI├č├î@├Ż├é\u007f\u0010├Ö┬Ż┬▓\u009f&├í\u0001┬Ě├¬f┬á┬«├¬\u008b\u0080; \u008c┬Ě\u0084\u0089┬Ę:┬│V├öm\u0080\u001b\u001ftg├▓├É\"├ë├╗├Ĺ├░\u0098┬┤A├Ž\u0080├Ťdez| ┬╣\u0005├░├Ě8\u0017\\\u000e\u001c┬Â├«\u0000┬»(├ů\u0019nYI├║├Şg^\u0097XI\u0087├č\u009b\u0017\u0081\u008e\u0010C├┤\u0096Z\u009e_├ů.├ł├┤R├Ő├×oR\u008d\u0010$\u008b├Ś5┬ź\u0003G\u0095├ź-├Ž\u0095L├Ć\u0087[\u0018\u000e├¬\u0087\u008b\u0018┬▒├ú┬╗ ┬¬\u001d├ź┬Ş?┬ž`Y├Ż├»├Ç├×\u0013'┬Ě ┬í#$\u007f\u0095├ĺ├Ü┬Ą├Ś├Á&┬Ş\u0080['%j\u0000\u0083o├Ö┬│Q\u008bJ├╣├╝#K┬▒┬á├Ü ┬ú├ľ┬á4\u008csR├áG\u001c\"c┬Č┬ą\u001e├┤4#V├î├×\u0001├ú\u0018\u008c├Ö┬╣\"├ô├ó\u001e┬Ą([4├╝9I\u0086K\u0087\u001du├ś\u0017F\u0090├▒:6\u00879├¬:┬Č\u008d├╗├Ą=!\u0015┬«n\u0088\u0006├Ĺ\u008d\u0086\u0001Fp~├î\u0018?zC├íMc┬ú├ž├ä%\u009d\u009c├ç\u009b├×├ĺ┬Ę\u001b\u000f4{D├Łe ├Ť\u0090┬Ž\b;\u001a┬║3\u0012┬ę├Ť3\u001f]^┬║┬Čq\u000f.├ł\u0094TJ\u0005'\u0005├Ą_A├ż[ h\u0093)├ś\u0096┬┐├âA>\t┬║\u0016├ä\u0093r^\u0080S├Ľ├ô\u009b┬«\u0002\n├ť7\u0017├▓,rn\u0002\u0010Y┬ó\u009b^\u0094%]┬┐9├Ťb├ź\u0011\b\u009f├Á\u0018\u0017\u0000├ů├ílp_\u007f\u008dh├ä\u0010(u├ĺ├║I┬¬R\u007f┬ę,z\u00ad ├ą\u001c├╗├Č├┐┬ú┬Ą\u0010\u0006├ö├▒\u009a\u009f\u001d4┬í├éd\u0019E\u0019\u0080├╣├ë[\u0083\u009c<├ś├Ü3┬║ )e├źH├Ä\u001c├ź┬ż\u0001├┐\u0014├ü\u008a├î\u0093├ş\u001f\u0017├Ş├ć┬Ą├Ľt\tspJ\u009cK\t\u0097┬«\u0010\\┬Ş├Ć\u0092┬Â\u00ad├Ç2├Ą\u0098\u0088;4├ÁE! \u009f\u0005)v├ź├»\u0093c|\"\u0019├Ľ\t├▒├Ť├╝V\u0006\u007f┬Ş├Ć├Č┬Ě├ź┬á_\u0084\"[i\u008b\u001f ├╝g3\u008e┬╝?y\u00976┬«├ő├Ę┬▓\t├Ü├▒┬Â\u009dv┬║J\u009c├ž\u0085\u000ba\u0007A├Ĺi├Ť8\u0010\u0085┬┐├Ç┬á├Žb├ç\u008fI.\u0017┬┤┬Ž\\S%";
      int var8 = "\u0094\u0095\u0004├Ö!O9l├ĆL\u0019\u0098<1G├Á\\_\u008e+\u007fB\u001e:\u0018\u0016c#├Ž{v\u001b\u007f\u000e%w├üK!\u0083┬▓ .├ę├╣┬Â┬║\u0012┬Ž \\├Ž\u0012\u008a\u0005├Ç├Ě├Ż\u001e\u0018├ş\u0011├â┬╝\u008dn\u0096Rh├é+┬»├Ż \f\u008f├ż\u0007M├ć\u0004+\u0018\u0085├č├ł@├Ő}├ż├ë├ťY├ž[w\u00ad├Ü├░\u00932KL├Ü┬Ě├ź, v┬Ż@\u001e├ć#p├ę├┤\b\u008a┬╝r┬┐\u0017├Ĺ\u0007┬»+\u009668V6/=├║├▒R\u0005├ő\u0012\u0018g┬ę├Ł┬┤\u009e├×&\u008cEX\u0014\u008d├Ĺ/M┬ĄT\u008b\u0092\u009e`┬ž├Ö├Ž o├╗$├ľ┬╣\u008d\bU \u0095├Ä\u000f\u009d\u0010\u0000├Ť├ĺ┬╝├¬\u0004\u0006├Ľt├ů├ą9┬ąG\u008ao┬▓E\u0010\u008c\u001eG├Ť├Â├╗├ę\u000e├Ęf┬«\\\t├ó┬žZ\u0010\u008b\u008f┬Ą┬ČN7D|\u009e\u009a\u008f├í\u001f22┬╣\u0010*\u0015┬░├┤_┬Ě\u008b\u0011┬Ę;\u008b\u0098P\"├Éa\u0010f`├«k2┬Â├ç)┬ź\u001b├Ł├ë@├Ą├»├Ő\u0010K2├«┬Ę├áx\u0004┬ó├Ő├Ä\u0013 b├ö\u0083w Q\u0011├Ö┬ęB\n\u001b\u0018u├ó=├î├╗\u009f├ŁMy\u0081s├Â┬Żt\u0080H├ľ├Ě├Á┬│├Ć\u009c]\u00ad\u0018@\u0081c┬»\u0096\f%\u001a\u008f┬«\t├Ç^\u009d\u0011\u000b&┬ŞC\u0019├Ş┬╝0[ ├ą7\t├ş├┐\u0007├ł├Ť-){W┬Ą<\u0014\u0084┬ó├ő\"├┐z\u009c\u000e┬Ą├ž├ô(v\u0095┬ę┬Žo\u0010v├ä6├ô├ôh┬í\u0087├ĺW\u008f┬▓l┬«├▓F(├¬\u0086\u0093N\u0086\u0087C*┬«\u000f├Ł\u008b\u0097f\u000b8├ť.\u0084}├▒┬▓+\u0082M^\u008c\u001c├ů├«├Şg\u001f├ťP├Ę\u0005├Śt\u009e ┬Á)P\u0001/├Ś├▒\u001c\t├┐┬┐├Ĺ+├▒\u009f├Ĺq├Ę+{├ż\u0099x┬Ż\u0003├╗\\├Á}d┬ž├Á ├║\u0087\u0081p\u0084\u0086\u009a├án┬▓C├ę\u001a┬Â}\u009aS[┬╣k├×\u0096┬Á├ö├ö├ô┬ż{├ä\u0088├ć┬╝ ├ć├âb├ő┬ž*pa├Ł┬ęi\u0085├╗┬┐3┬á\"┬╣┬░o6_\u001ba┬░\b├žT┬ú├Ą=├ť\u0018]├ç\u0097┬ó\u0000\u000b┬ę=\u008f├őf\u008b├░\u0000├ł\"\u008ef┬Č_?├ök\u0080 ├╗u├Ź\u0089├č\u000f&┬╝├ŤI\u0006├ŁL┬ž├ąX├ľ├Ü├Ź\u009e├Ě┬í#\u0094'├â├ź┬Č┬▓┬¬n\u0000 _\u008dH\u009e├¬ao4┬Ş\u0084(├ő\u008d9(SOJS\u0088_┬╣O|┬ą┬╣L├┐P┬Ě\u0088├×($\u009d\u0003├ę├ĄP\u001b┬║├«\u0094K\n^┬á \u0089├ů├Ž\u0002┬┤┬ĚPJ\u0004├ť├║├▒\t[K\u001b├ÜSI├č├î@├Ż├é\u007f\u0010├Ö┬Ż┬▓\u009f&├í\u0001┬Ě├¬f┬á┬«├¬\u008b\u0080; \u008c┬Ě\u0084\u0089┬Ę:┬│V├öm\u0080\u001b\u001ftg├▓├É\"├ë├╗├Ĺ├░\u0098┬┤A├Ž\u0080├Ťdez| ┬╣\u0005├░├Ě8\u0017\\\u000e\u001c┬Â├«\u0000┬»(├ů\u0019nYI├║├Şg^\u0097XI\u0087├č\u009b\u0017\u0081\u008e\u0010C├┤\u0096Z\u009e_├ů.├ł├┤R├Ő├×oR\u008d\u0010$\u008b├Ś5┬ź\u0003G\u0095├ź-├Ž\u0095L├Ć\u0087[\u0018\u000e├¬\u0087\u008b\u0018┬▒├ú┬╗ ┬¬\u001d├ź┬Ş?┬ž`Y├Ż├»├Ç├×\u0013'┬Ě ┬í#$\u007f\u0095├ĺ├Ü┬Ą├Ś├Á&┬Ş\u0080['%j\u0000\u0083o├Ö┬│Q\u008bJ├╣├╝#K┬▒┬á├Ü ┬ú├ľ┬á4\u008csR├áG\u001c\"c┬Č┬ą\u001e├┤4#V├î├×\u0001├ú\u0018\u008c├Ö┬╣\"├ô├ó\u001e┬Ą([4├╝9I\u0086K\u0087\u001du├ś\u0017F\u0090├▒:6\u00879├¬:┬Č\u008d├╗├Ą=!\u0015┬«n\u0088\u0006├Ĺ\u008d\u0086\u0001Fp~├î\u0018?zC├íMc┬ú├ž├ä%\u009d\u009c├ç\u009b├×├ĺ┬Ę\u001b\u000f4{D├Łe ├Ť\u0090┬Ž\b;\u001a┬║3\u0012┬ę├Ť3\u001f]^┬║┬Čq\u000f.├ł\u0094TJ\u0005'\u0005├Ą_A├ż[ h\u0093)├ś\u0096┬┐├âA>\t┬║\u0016├ä\u0093r^\u0080S├Ľ├ô\u009b┬«\u0002\n├ť7\u0017├▓,rn\u0002\u0010Y┬ó\u009b^\u0094%]┬┐9├Ťb├ź\u0011\b\u009f├Á\u0018\u0017\u0000├ů├ílp_\u007f\u008dh├ä\u0010(u├ĺ├║I┬¬R\u007f┬ę,z\u00ad ├ą\u001c├╗├Č├┐┬ú┬Ą\u0010\u0006├ö├▒\u009a\u009f\u001d4┬í├éd\u0019E\u0019\u0080├╣├ë[\u0083\u009c<├ś├Ü3┬║ )e├źH├Ä\u001c├ź┬ż\u0001├┐\u0014├ü\u008a├î\u0093├ş\u001f\u0017├Ş├ć┬Ą├Ľt\tspJ\u009cK\t\u0097┬«\u0010\\┬Ş├Ć\u0092┬Â\u00ad├Ç2├Ą\u0098\u0088;4├ÁE! \u009f\u0005)v├ź├»\u0093c|\"\u0019├Ľ\t├▒├Ť├╝V\u0006\u007f┬Ş├Ć├Č┬Ě├ź┬á_\u0084\"[i\u008b\u001f ├╝g3\u008e┬╝?y\u00976┬«├ő├Ę┬▓\t├Ü├▒┬Â\u009dv┬║J\u009c├ž\u0085\u000ba\u0007A├Ĺi├Ť8\u0010\u0085┬┐├Ç┬á├Žb├ç\u008fI.\u0017┬┤┬Ž\\S%"
         .length();
      char var5 = 24;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bPD(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     wMCjL = var9;
                     wOOLq = new String[46];
                     mNSdG = new ls();
                     dVZad = new ls();
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "m\u0093\u008a├┤\u0092g@\\K$├Ę\u0016├ó\u000e┬▒├ĺ\u0018\u0089┬│┬│n\u008c├«┬Č\t@├Á├╝T┬Ż├Ş├╣┬░├ž/┬Ą┬¬v~k┬Ą";
                  var8 = "m\u0093\u008a├┤\u0092g@\\K$├Ę\u0016├ó\u000e┬▒├ĺ\u0018\u0089┬│┬│n\u008c├«┬Č\t@├Á├╝T┬Ż├Ş├╣┬░├ž/┬Ą┬¬v~k┬Ą".length();
                  var5 = 16;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   private static CallSite bPG(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bPF".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static void bPv(Runnable param0, RenderPipeline param1, Consumer<RenderPass> param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kj.LGtJN J
      // 03: ldc2_w 104141555701214
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 5
      // 0f: ifnull 30
      // 12: invokestatic sixtwo/kj.bPw ()Z
      // 15: ifne 24
      // 18: goto 1f
      // 1b: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e: athrow
      // 1f: return
      // 20: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: getstatic sixtwo/kj.dVZad Lsixtwo/ls;
      // 27: invokevirtual sixtwo/ls.caK ()V
      // 2a: getstatic sixtwo/kj.dVZad Lsixtwo/ls;
      // 2d: invokevirtual sixtwo/ls.caM ()V
      // 30: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 33: checkcast mixin/accessors/MinecraftAccessor
      // 36: astore 6
      // 38: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3b: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 3e: astore 7
      // 40: aload 6
      // 42: getstatic sixtwo/kj.dVZad Lsixtwo/ls;
      // 45: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 4a: aload 0
      // 4b: invokestatic sixtwo/kn.bQo (Ljava/lang/Runnable;)V
      // 4e: aload 6
      // 50: aload 7
      // 52: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 57: goto 68
      // 5a: astore 8
      // 5c: aload 6
      // 5e: aload 7
      // 60: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 65: aload 8
      // 67: athrow
      // 68: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6b: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 6e: astore 8
      // 70: aload 1
      // 71: aload 8
      // 73: aload 2
      // 74: invokedynamic accept (Ljava/util/function/Consumer;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kj.bPx (Ljava/util/function/Consumer;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 79: invokestatic sixtwo/kn.bQr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;Ljava/util/function/Consumer;)V
      // 7c: return
   }

   public static boolean bPw() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kj.LGtJN J
      // 03: ldc2_w 130354790665684
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: invokestatic sixtwo/jo.bEh ()Lnet/minecraft/class_276;
      // 0e: astore 3
      // 0f: astore 2
      // 10: getstatic sixtwo/kj.mNSdG Lsixtwo/ls;
      // 13: aload 3
      // 14: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 17: aload 3
      // 18: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 1b: aload 2
      // 1c: ifnull 36
      // 1f: ifnull 67
      // 22: goto 29
      // 25: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: getstatic sixtwo/kj.mNSdG Lsixtwo/ls;
      // 2c: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 2f: goto 36
      // 32: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 2
      // 37: ifnull 4f
      // 3a: ifnull 67
      // 3d: goto 44
      // 40: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 3
      // 45: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 48: goto 4f
      // 4b: invokestatic sixtwo/kj.bPC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: getstatic sixtwo/kj.mNSdG Lsixtwo/ls;
      // 52: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 55: bipush 0
      // 56: bipush 0
      // 57: bipush 0
      // 58: bipush 0
      // 59: bipush 0
      // 5a: aload 3
      // 5b: getfield net/minecraft/class_276.field_1482 I
      // 5e: aload 3
      // 5f: getfield net/minecraft/class_276.field_1481 I
      // 62: invokestatic sixtwo/lu.cbf (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;IIIIIII)V
      // 65: bipush 1
      // 66: ireturn
      // 67: bipush 0
      // 68: ireturn
   }

   private static Object bPF(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bPE(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bPC(MatchException var0) {
      return var0;
   }

   private static String bPE(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 9182;
      if (wOOLq[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LaLaT.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LaLaT.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kj", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = wMCjL[var5].getBytes("ISO-8859-1");
         wOOLq[var5] = bPD(((Cipher)var4[0]).doFinal(var9));
      }

      return wOOLq[var5];
   }

   private static String bPD(byte[] var0) {
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

   public static void bPs(Runnable var0, float[] var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8) {
      bPv(var0, kR.OkSsT, var8x -> {
         long var9 = LGtJN ^ 10492763130178L;
         jL.aXSot.bJl();
         class_276 var11 = rD.dlmvG.method_1522();
         jL.aXSot.bJr(bPG<"u">(4430, 6422162484244487107L ^ var9), var11.field_1482, var11.field_1481);
         jL.aXSot.bJq(bPG<"u">(29091, 9040588801398373133L ^ var9), (float)GLFW.glfwGetTime());
         jL.aXSot.bJt(bPG<"u">(30288, 2141148376759336160L ^ var9), var1[0], var1[1], var1[2], var1[3]);
         jL.aXSot.bJq(bPG<"u">(19794, 7083516274347067364L ^ var9), var2);
         jL.aXSot.bJq(bPG<"u">(25681, 2271069931793411820L ^ var9), var3);
         jL.aXSot.bJt(bPG<"u">(7861, 5185369605478716439L ^ var9), 1.0F, 1.0F, 1.0F, 1.0F);
         jL.aXSot.bJq(bPG<"u">(11014, 6565161270601130418L ^ var9), var4);
         jL.aXSot.bJq(bPG<"u">(8410, 3877426679973259870L ^ var9), var5);
         jL.aXSot.bJq(bPG<"u">(16517, 2261555497298807358L ^ var9), var6);
         jL.aXSot.bJq(bPG<"u">(18954, 8962169775589605507L ^ var9), var7);
         jL.aXSot.bJq(bPG<"u">(16613, 4077043654486411867L ^ var9), var8);
      });
   }

   public static void bPr(Runnable var0, float var1, float var2, float var3, float var4, float[] var5, float var6, float var7, float[] var8, float var9) {
      bPv(var0, kR.DrDBo, var9x -> {
         long var10 = LGtJN ^ 26189762297892L;
         jL.Dract.bJl();
         class_276 var12 = rD.dlmvG.method_1522();
         jL.Dract.bJr(bPG<"u">(6408, 3537353475340294871L ^ var10), var12.field_1482, var12.field_1481);
         jL.Dract.bJq(bPG<"u">(30015, 6353588529415894768L ^ var10), var1);
         jL.Dract.bJq(bPG<"u">(28541, 151176071214640279L ^ var10), var2);
         jL.Dract.bJq(bPG<"u">(8959, 2815613002209714485L ^ var10), var3);
         jL.Dract.bJq(bPG<"u">(6824, 3733225453076142408L ^ var10), var4);
         jL.Dract.bJt(bPG<"u">(12990, 2475180284971151709L ^ var10), var5[0], var5[1], var5[2], var5[3]);
         jL.Dract.bJt(bPG<"u">(4505, 7336382722872103537L ^ var10), 1.0F, 1.0F, 1.0F, 1.0F);
         jL.Dract.bJq(bPG<"u">(7958, 5074665422740020466L ^ var10), var6);
         jL.Dract.bJq(bPG<"u">(2867, 7505265760246810877L ^ var10), var7);
         jL.Dract.bJt(bPG<"u">(26839, 3966151507244624688L ^ var10), var8[0], var8[1], var8[2], var5[3]);
         jL.Dract.bJq(bPG<"u">(27190, 7696154319940397535L ^ var10), var9);
      });
   }

   public static void bPt(Runnable var0, float[] var1, float var2, float var3, float var4) {
      bPv(var0, kR.gMhtR, var4x -> {
         long var5 = LGtJN ^ 4969471310675L;
         jL.LsZdJ.bJl();
         class_276 var7 = rD.dlmvG.method_1522();
         jL.LsZdJ.bJr(bPG<"u">(6408, 3537339371534295456L ^ var5), var7.field_1482, var7.field_1481);
         jL.LsZdJ.bJq(bPG<"u">(1864, 504474558173560793L ^ var5), (float)GLFW.glfwGetTime());
         jL.LsZdJ.bJq(bPG<"u">(21772, 959304477824478626L ^ var5), var4);
         jL.LsZdJ.bJt(bPG<"u">(23144, 4418080566889636563L ^ var5), var1[0], var1[1], var1[2], var1[3]);
         jL.LsZdJ.bJq(bPG<"u">(850, 5564440182405577713L ^ var5), var2);
         jL.LsZdJ.bJq(bPG<"u">(5175, 2017898254999661697L ^ var5), var3);
         jL.LsZdJ.bJt(bPG<"u">(4505, 7336366420331211014L ^ var5), 1.0F, 1.0F, 1.0F, 1.0F);
      });
   }

   public static void bPu(
      Runnable var0,
      float var1,
      float var2,
      float var3,
      float var4,
      float var5,
      float var6,
      float var7,
      float[] var8,
      float[] var9,
      float[] var10,
      float[] var11,
      float var12,
      float var13,
      float var14,
      float var15,
      float var16,
      float var17
   ) {
      long var18 = LGtJN ^ 80306746164004L;
      kk.bPU();
      bPv(var0, kR.ZxxjD, var17x -> {
         long var18x = LGtJN ^ 75412256236128L;
         jL.vcspz.bJl();
         class_276 var20 = rD.dlmvG.method_1522();
         jL.vcspz.bJq(bPG<"u">(1864, 504404134649456362L ^ var18x), (float)GLFW.glfwGetTime());
         jL.vcspz.bJr(bPG<"u">(6408, 3537409805761312915L ^ var18x), var20.field_1482, var20.field_1481);
         jL.vcspz.bJt(bPG<"u">(4505, 7336436845999222837L ^ var18x), 1.0F, 1.0F, 1.0F, 1.0F);
         jL.vcspz.bJq(bPG<"u">(32016, 3749085807119670431L ^ var18x), var1);
         jL.vcspz.bJq(bPG<"u">(18462, 501948277451532698L ^ var18x), var2);
         jL.vcspz.bJq(bPG<"u">(29496, 1186202092703617709L ^ var18x), var3);
         jL.vcspz.bJq(bPG<"u">(26957, 7567860951818242254L ^ var18x), var4);
         jL.vcspz.bJq(bPG<"u">(6451, 2602486468317116566L ^ var18x), var5);
         jL.vcspz.bJq(bPG<"u">(16636, 4405562921731563898L ^ var18x), var6);
         jL.vcspz.bJq(bPG<"u">(10949, 2168987196942895972L ^ var18x), var7);
         jL.vcspz.bJs(bPG<"u">(3139, 7905174145403153870L ^ var18x), var8[0], var8[1], var8[2]);
         jL.vcspz.bJs(bPG<"u">(31414, 7328621963510094655L ^ var18x), var9[0], var9[1], var9[2]);
         jL.vcspz.bJs(bPG<"u">(3267, 7465645262426434921L ^ var18x), var10[0], var10[1], var10[2]);
         jL.vcspz.bJs(bPG<"u">(10665, 5404583812526491703L ^ var18x), var11[0], var11[1], var11[2]);
         jL.vcspz.bJq(bPG<"u">(2150, 3423098650144074209L ^ var18x), var12);
         jL.vcspz.bJq(bPG<"u">(4272, 9147422646446780714L ^ var18x), var13);
         jL.vcspz.bJq(bPG<"u">(23497, 2079166269279353438L ^ var18x), var14);
         jL.vcspz.bJq(bPG<"u">(31270, 1991438985386597301L ^ var18x), var15);
         jL.vcspz.bJq(bPG<"u">(32593, 6043425682481880784L ^ var18x), var16);
         jL.vcspz.bJq(bPG<"u">(3155, 1869824710455782859L ^ var18x), var17);
      });

      try {
         if (iS.bwL() == null) {
            kk.bPT("Vs09Vb");
         }
      } catch (MatchException var21) {
         throw bPC(var21);
      }
   }
}
