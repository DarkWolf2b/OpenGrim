package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1657;
import net.minecraft.class_4587;

public class cU extends gg {
   private final cv BauFa;
   private final cw PhtFx;
   private final cw BcQvA;
   private final cw QwJkI;
   private final cw QoAWo;
   private final cG gxark;
   private final cC GctAm;
   private final cC LHxFV;
   private final Map<class_1657, List<cU$sp>> ERVmZ;
   private static final long CcSNg = gb.aYR(-7573313126502065491L, 2677294498807651305L, MethodHandles.lookup().lookupClass()).a(154380809325564L);
   private static final long[] bhpzz;
   private static final Integer[] XmDUC;
   private static final Map JJzQs = new HashMap(13);

   public cU() {
      long var1 = CcSNg ^ 134933053654254L;
      super(gf.aZL(ZJ<"t">(18625, 4870943259738448213L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[ZJ<"t">(9343, 949116662371864004L ^ var1)];
      var10004[0] = ZJ<"t">(31156, 71868009475444742L ^ var1);
      var10004[1] = ZJ<"t">(32466, 4418043756460251001L ^ var1);
      var10004[2] = ZJ<"t">(1791, 49121656855490371L ^ var1);
      var10004[3] = ZJ<"t">(8465, 7616455811231926456L ^ var1);
      var10004[4] = ZJ<"t">(25553, 8111002030875019893L ^ var1);
      var10004[5] = ZJ<"t">(13201, 7266034005254756914L ^ var1);
      var10004[ZJ<"t">(21549, 2971666510152875416L ^ var1)] = ZJ<"t">(25475, 5107409863051774524L ^ var1);
      var10004[ZJ<"t">(29005, 2907104305029093600L ^ var1)] = ZJ<"t">(16097, 9217340418158319438L ^ var1);
      this.BauFa = new cv(this, mr.clS(var10004));
      cv var10003 = this.BauFa;
      var10004 = new int[ZJ<"t">(6881, 7254957835511624544L ^ var1)];
      var10004[0] = ZJ<"t">(12755, 7951627048605898861L ^ var1);
      var10004[1] = ZJ<"t">(12715, 3283938825665370125L ^ var1);
      var10004[2] = ZJ<"t">(945, 8918860477578537526L ^ var1);
      var10004[3] = ZJ<"t">(29487, 6931443479279704757L ^ var1);
      var10004[4] = ZJ<"t">(8641, 103643692986189908L ^ var1);
      var10004[5] = ZJ<"t">(19406, 8214018280104010315L ^ var1);
      var10004[ZJ<"t">(11999, 2424816608054888284L ^ var1)] = ZJ<"t">(25249, 3421617061808868135L ^ var1);
      this.PhtFx = new cw(var10003, mr.clS(var10004));
      var10003 = this.BauFa;
      var10004 = new int[ZJ<"t">(6881, 7254957835511624544L ^ var1)];
      var10004[0] = ZJ<"t">(26631, 5339513579535597955L ^ var1);
      var10004[1] = ZJ<"t">(19406, 8214018280104010315L ^ var1);
      var10004[2] = ZJ<"t">(25899, 5645949302975892622L ^ var1);
      var10004[3] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[4] = ZJ<"t">(22905, 4091153334936940739L ^ var1);
      var10004[5] = ZJ<"t">(10310, 6844525786136723943L ^ var1);
      var10004[ZJ<"t">(11999, 2424816608054888284L ^ var1)] = ZJ<"t">(7526, 8437129109071590640L ^ var1);
      this.BcQvA = new cw(var10003, mr.clS(var10004));
      var10003 = this.BauFa;
      var10004 = new int[ZJ<"t">(8001, 9223116529100977873L ^ var1)];
      var10004[0] = ZJ<"t">(27453, 7835191975526040215L ^ var1);
      var10004[1] = ZJ<"t">(25728, 54364901254008103L ^ var1);
      var10004[2] = ZJ<"t">(1057, 8815985847033720207L ^ var1);
      var10004[3] = ZJ<"t">(29551, 3391988523884518131L ^ var1);
      var10004[4] = ZJ<"t">(7526, 8437129109071590640L ^ var1);
      var10004[5] = ZJ<"t">(29551, 3391988523884518131L ^ var1);
      var10004[ZJ<"t">(11999, 2424816608054888284L ^ var1)] = ZJ<"t">(13355, 1775253860042300826L ^ var1);
      var10004[ZJ<"t">(6881, 7254957835511624544L ^ var1)] = ZJ<"t">(13868, 4089178469908406172L ^ var1);
      var10004[ZJ<"t">(2647, 6176820662432719841L ^ var1)] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[ZJ<"t">(12140, 6361311527541327598L ^ var1)] = ZJ<"t">(7526, 8437129109071590640L ^ var1);
      this.QwJkI = new cw(var10003, mr.clS(var10004));
      this.QoAWo = new cw(
            this.BauFa,
            mr.clS(
               new int[]{
                  ZJ<"t">(5117, 2958799187981498965L ^ var1),
                  ZJ<"t">(3589, 199845751533266836L ^ var1),
                  ZJ<"t">(13868, 4089178469908406172L ^ var1),
                  ZJ<"t">(10470, 8992567294967529798L ^ var1)
               }
            )
         )
         .Tz();
      this.gxark = new cG(
            this,
            mr.clS(
               new int[]{
                  ZJ<"t">(11344, 6537476574213260772L ^ var1),
                  ZJ<"t">(25475, 5107409863051774524L ^ var1),
                  ZJ<"t">(13868, 4089178469908406172L ^ var1),
                  ZJ<"t">(25475, 5107409863051774524L ^ var1),
                  ZJ<"t">(19406, 8214018280104010315L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[ZJ<"t">(11999, 2424816608054888284L ^ var1)];
      var10004[0] = ZJ<"t">(13241, 7759867152286571012L ^ var1);
      var10004[1] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[2] = ZJ<"t">(25728, 54364901254008103L ^ var1);
      var10004[3] = ZJ<"t">(8592, 5862187003968210957L ^ var1);
      var10004[4] = ZJ<"t">(2473, 4307689240861335601L ^ var1);
      var10004[5] = ZJ<"t">(31533, 1122370440510935734L ^ var1);
      this.GctAm = new cC(this, mr.clS(var10004)).Vy(0.01).Vw(2.0).Vx(4.0).VA(3.0);
      var10004 = new int[ZJ<"t">(5192, 6549626120451325418L ^ var1)];
      var10004[0] = ZJ<"t">(8237, 8913654296010377626L ^ var1);
      var10004[1] = ZJ<"t">(19406, 8214018280104010315L ^ var1);
      var10004[2] = ZJ<"t">(27245, 2980969302061974527L ^ var1);
      var10004[3] = ZJ<"t">(359, 8416621264331008222L ^ var1);
      var10004[4] = ZJ<"t">(29551, 3391988523884518131L ^ var1);
      var10004[5] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[ZJ<"t">(11999, 2424816608054888284L ^ var1)] = ZJ<"t">(25728, 54364901254008103L ^ var1);
      var10004[ZJ<"t">(6881, 7254957835511624544L ^ var1)] = ZJ<"t">(25903, 310369419942399160L ^ var1);
      var10004[ZJ<"t">(2647, 6176820662432719841L ^ var1)] = ZJ<"t">(25103, 9184377744539093916L ^ var1);
      var10004[ZJ<"t">(5678, 4613357346122006429L ^ var1)] = ZJ<"t">(5117, 2958799187981498965L ^ var1);
      var10004[ZJ<"t">(2454, 7909903747324305416L ^ var1)] = ZJ<"t">(31857, 6152301101134976477L ^ var1);
      var10004[ZJ<"t">(17546, 1913807766822628627L ^ var1)] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[ZJ<"t">(11815, 9210051431578093471L ^ var1)] = ZJ<"t">(3589, 199845751533266836L ^ var1);
      var10004[ZJ<"t">(29957, 8420430114756566170L ^ var1)] = ZJ<"t">(359, 8416621264331008222L ^ var1);
      this.LHxFV = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0);
      this.ERVmZ = new HashMap<>();
   }

   static {
      long var0 = CcSNg ^ 136742376114165L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[56];
      int var5 = 0;
      String var6 = "uI.Z├┤├╣\u0083:├Ş\u0012├▓├¬\u0001├ť\u0094┬▓├╣├ł├Ü├Ľ\u009f/\u001aS├Ł┬á\u008cy├ć&\u001c~3O.(\u009d├ü├Ő┬▓├ó\u0081\u0084┬ż├ą├«q├Ĺ├Ö\u0013.^\u0087\u001f├Á├ë\u009f┬╝\u00ad}├â\u001a\u000b)o\u001c┬ą\u000f├┤├░\u0089\u008c<┬╗Ai\u0098j>\tCjH├╣V\"\u001f)├Čb├ĘR0S$,\\├ť{R\u0007\u0019├¬-s├Ś┬│<├Ö┬ż\u0017├ö\u0014┬ž[├ö\u009aZ├┐\"├ľ\u009b├╗H├╣┬║┬Ş├ć&a\u001a┬Ě├»c┬│uC├Ť+k?├▒\u0088Wj,├î┬Ž\u0010├Á├ůn├ş\u0080\u0089├í\u0093├Ž├é-\u001b\u0010┬▓r\u009d\u0080\u0092\u0081UW├Ç.┬Žr├┤┬│\t┬żi-\u00adp├Ä├Ĺ\u001f\u000f\u0086q:kRk\u0013\u008blE├ë`d\u000b├Ź\t\u0003├É├Ć├╝}├┐R\u0086'BT`\u0098\u009f├ä┬í']├ë├çs┬┐\u008a3├É┬Â\u0099\u0098\u0081\f\u0019├▒o\u0004T[FQ┬á_├▒\u0091├Ö\u001b\u009a\u0091├ęk┬ĄP4├Ě├Ł\u009d├║├┐[├│\u0011├ł\u0096~O\u0083<┬╗┬«┬Č├╝├Âf\u0085┬í├Ą8├ö┬░├ś\u001d├Ć├▒\u0098Ih├ą┬«├ČA\u0014├╝\u0007\u0017j├Ĺ\u00038/\u0080\u0011\u0016$├«├Ä┬░J├Ł┬╝├áN├╝┬«\u0094├×A┬Â├č┬▒├ë~\u0012├Áy\u008d1?\u0002\u0092├Á*┬╣\u0019=ey├ó├Ş\u0087├Žr├«┬«├ż┬Ż┬á\u001f├á\u0016BT\u0087*┬┐├Ź\"\u000f┬╗\u0016vl\u009c┬╝/\u0099├Ć├ę├Ś├Â\u0000h┬Ą┬╣sJC-├ĹF\u008e┬í├ĺ]├░\b\u001f\u00adC\u008b├Áz\u009b \u0007t├ő\u000eJ\u0012%├Č┬ą\u008b├úh{\u0012h├í├Ä┬╝\u0080\"┬│.\u0086├âp┬ź\"G\u0005*\u0006\u009e\u0092s8\f\u0019_├ç";
      int var7 = "uI.Z├┤├╣\u0083:├Ş\u0012├▓├¬\u0001├ť\u0094┬▓├╣├ł├Ü├Ľ\u009f/\u001aS├Ł┬á\u008cy├ć&\u001c~3O.(\u009d├ü├Ő┬▓├ó\u0081\u0084┬ż├ą├«q├Ĺ├Ö\u0013.^\u0087\u001f├Á├ë\u009f┬╝\u00ad}├â\u001a\u000b)o\u001c┬ą\u000f├┤├░\u0089\u008c<┬╗Ai\u0098j>\tCjH├╣V\"\u001f)├Čb├ĘR0S$,\\├ť{R\u0007\u0019├¬-s├Ś┬│<├Ö┬ż\u0017├ö\u0014┬ž[├ö\u009aZ├┐\"├ľ\u009b├╗H├╣┬║┬Ş├ć&a\u001a┬Ě├»c┬│uC├Ť+k?├▒\u0088Wj,├î┬Ž\u0010├Á├ůn├ş\u0080\u0089├í\u0093├Ž├é-\u001b\u0010┬▓r\u009d\u0080\u0092\u0081UW├Ç.┬Žr├┤┬│\t┬żi-\u00adp├Ä├Ĺ\u001f\u000f\u0086q:kRk\u0013\u008blE├ë`d\u000b├Ź\t\u0003├É├Ć├╝}├┐R\u0086'BT`\u0098\u009f├ä┬í']├ë├çs┬┐\u008a3├É┬Â\u0099\u0098\u0081\f\u0019├▒o\u0004T[FQ┬á_├▒\u0091├Ö\u001b\u009a\u0091├ęk┬ĄP4├Ě├Ł\u009d├║├┐[├│\u0011├ł\u0096~O\u0083<┬╗┬«┬Č├╝├Âf\u0085┬í├Ą8├ö┬░├ś\u001d├Ć├▒\u0098Ih├ą┬«├ČA\u0014├╝\u0007\u0017j├Ĺ\u00038/\u0080\u0011\u0016$├«├Ä┬░J├Ł┬╝├áN├╝┬«\u0094├×A┬Â├č┬▒├ë~\u0012├Áy\u008d1?\u0002\u0092├Á*┬╣\u0019=ey├ó├Ş\u0087├Žr├«┬«├ż┬Ż┬á\u001f├á\u0016BT\u0087*┬┐├Ź\"\u000f┬╗\u0016vl\u009c┬╝/\u0099├Ć├ę├Ś├Â\u0000h┬Ą┬╣sJC-├ĹF\u008e┬í├ĺ]├░\b\u001f\u00adC\u008b├Áz\u009b \u0007t├ő\u000eJ\u0012%├Č┬ą\u008b├úh{\u0012h├í├Ä┬╝\u0080\"┬│.\u0086├âp┬ź\"G\u0005*\u0006\u009e\u0092s8\f\u0019_├ç"
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
                     bhpzz = var8;
                     XmDUC = new Integer[56];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "s_O.\u0003├ł%)U┬Ę\u009c├▒┬ú;q\u008e";
                  var7 = "s_O.\u0003├ł%)U┬Ę\u009c├▒┬ú;q\u008e".length();
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

   private static CallSite ZJ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ZI".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cU" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void Zz(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cU.CcSNg J
      // 003: ldc2_w 77249030641426
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cU.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/go$sX.bbi ()F
      // 01d: fstore 5
      // 01f: invokestatic java/lang/System.currentTimeMillis ()J
      // 022: lstore 6
      // 024: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 027: astore 8
      // 029: aload 1
      // 02a: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 02d: astore 9
      // 02f: aload 9
      // 031: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 034: aload 9
      // 036: invokestatic sixtwo/jI.bIr (Lnet/minecraft/class_4587;)V
      // 039: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 03f: invokevirtual net/minecraft/class_638.method_18456 ()Ljava/util/List;
      // 042: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 047: astore 10
      // 049: aload 10
      // 04b: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 050: ifeq 317
      // 053: aload 10
      // 055: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 05a: checkcast net/minecraft/class_1657
      // 05d: astore 11
      // 05f: aload 4
      // 061: ifnonnull 31c
      // 064: aload 11
      // 066: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 069: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 06c: if_acmpne 09f
      // 06f: goto 076
      // 072: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: getfield sixtwo/cU.QoAWo Lsixtwo/cw;
      // 07a: invokevirtual sixtwo/cw.TC ()Z
      // 07d: aload 4
      // 07f: ifnonnull 0c8
      // 082: goto 089
      // 085: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: ifne 0c1
      // 08c: goto 093
      // 08f: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 092: athrow
      // 093: aload 4
      // 095: ifnull 049
      // 098: goto 09f
      // 09b: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: aload 0
      // 0a0: getfield sixtwo/cU.PhtFx Lsixtwo/cw;
      // 0a3: invokevirtual sixtwo/cw.TC ()Z
      // 0a6: aload 4
      // 0a8: ifnonnull 0c8
      // 0ab: ifne 0c1
      // 0ae: goto 0b5
      // 0b1: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b4: athrow
      // 0b5: aload 4
      // 0b7: ifnull 049
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: aload 0
      // 0c2: getfield sixtwo/cU.BcQvA Lsixtwo/cw;
      // 0c5: invokevirtual sixtwo/cw.TC ()Z
      // 0c8: aload 4
      // 0ca: ifnonnull 113
      // 0cd: ifne 100
      // 0d0: goto 0d7
      // 0d3: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d6: athrow
      // 0d7: aload 8
      // 0d9: aload 11
      // 0db: invokevirtual sixtwo/qQ.ddy (Lnet/minecraft/class_1657;)Z
      // 0de: aload 4
      // 0e0: ifnonnull 113
      // 0e3: goto 0ea
      // 0e6: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e9: athrow
      // 0ea: ifeq 100
      // 0ed: goto 0f4
      // 0f0: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f3: athrow
      // 0f4: aload 4
      // 0f6: ifnull 049
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: aload 0
      // 101: getfield sixtwo/cU.QwJkI Lsixtwo/cw;
      // 104: aload 4
      // 106: ifnonnull 14d
      // 109: invokevirtual sixtwo/cw.TC ()Z
      // 10c: goto 113
      // 10f: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 112: athrow
      // 113: ifne 13d
      // 116: aload 11
      // 118: aload 4
      // 11a: ifnonnull 14d
      // 11d: goto 124
      // 120: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 123: athrow
      // 124: invokevirtual net/minecraft/class_1657.method_5767 ()Z
      // 127: ifeq 13d
      // 12a: goto 131
      // 12d: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 130: athrow
      // 131: aload 4
      // 133: ifnull 049
      // 136: goto 13d
      // 139: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13c: athrow
      // 13d: aload 0
      // 13e: getfield sixtwo/cU.ERVmZ Ljava/util/Map;
      // 141: aload 11
      // 143: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/cU.ZF (Lnet/minecraft/class_1657;)Ljava/util/List;, (Lnet/minecraft/class_1657;)Ljava/util/List; ]
      // 148: invokeinterface java/util/Map.computeIfAbsent (Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object; 3
      // 14d: checkcast java/util/List
      // 150: astore 12
      // 152: ldc_w 125.0
      // 155: aload 0
      // 156: getfield sixtwo/cU.GctAm Lsixtwo/cC;
      // 159: invokevirtual sixtwo/cC.VB ()F
      // 15c: fmul
      // 15d: f2l
      // 15e: lstore 13
      // 160: aload 11
      // 162: fload 5
      // 164: invokevirtual net/minecraft/class_1657.method_30950 (F)Lnet/minecraft/class_243;
      // 167: astore 15
      // 169: aload 12
      // 16b: invokeinterface java/util/List.size ()I 1
      // 170: istore 16
      // 172: iload 16
      // 174: aload 4
      // 176: ifnonnull 1c8
      // 179: ifeq 1af
      // 17c: goto 183
      // 17f: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 182: athrow
      // 183: aload 12
      // 185: iload 16
      // 187: bipush 1
      // 188: isub
      // 189: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 18e: checkcast sixtwo/cU$sp
      // 191: getfield sixtwo/cU$sp.WyFYf Lnet/minecraft/class_243;
      // 194: aload 15
      // 196: invokevirtual net/minecraft/class_243.equals (Ljava/lang/Object;)Z
      // 199: aload 4
      // 19b: ifnonnull 1ca
      // 19e: goto 1a5
      // 1a1: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a4: athrow
      // 1a5: ifne 1c9
      // 1a8: goto 1af
      // 1ab: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ae: athrow
      // 1af: aload 12
      // 1b1: new sixtwo/cU$sp
      // 1b4: dup
      // 1b5: aload 15
      // 1b7: lload 6
      // 1b9: invokespecial sixtwo/cU$sp.<init> (Lnet/minecraft/class_243;J)V
      // 1bc: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1c1: goto 1c8
      // 1c4: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c7: athrow
      // 1c8: pop
      // 1c9: bipush 0
      // 1ca: istore 17
      // 1cc: bipush -1
      // 1cd: istore 18
      // 1cf: bipush -1
      // 1d0: istore 19
      // 1d2: aload 12
      // 1d4: invokeinterface java/util/List.size ()I 1
      // 1d9: istore 20
      // 1db: bipush 0
      // 1dc: istore 21
      // 1de: iload 21
      // 1e0: iload 20
      // 1e2: if_icmpge 28e
      // 1e5: aload 12
      // 1e7: iload 21
      // 1e9: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 1ee: checkcast sixtwo/cU$sp
      // 1f1: astore 22
      // 1f3: lload 6
      // 1f5: aload 22
      // 1f7: getfield sixtwo/cU$sp.TJJOB J
      // 1fa: lsub
      // 1fb: lload 13
      // 1fd: lcmp
      // 1fe: aload 4
      // 200: ifnonnull 290
      // 203: aload 4
      // 205: ifnonnull 22e
      // 208: goto 20f
      // 20b: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20e: athrow
      // 20f: ifle 225
      // 212: goto 219
      // 215: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 218: athrow
      // 219: aload 4
      // 21b: ifnull 286
      // 21e: goto 225
      // 221: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 224: athrow
      // 225: iload 17
      // 227: goto 22e
      // 22a: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22d: athrow
      // 22e: aload 4
      // 230: ifnonnull 25a
      // 233: iload 21
      // 235: if_icmpeq 252
      // 238: goto 23f
      // 23b: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23e: athrow
      // 23f: aload 12
      // 241: iload 17
      // 243: aload 22
      // 245: invokeinterface java/util/List.set (ILjava/lang/Object;)Ljava/lang/Object; 3
      // 24a: pop
      // 24b: goto 252
      // 24e: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 251: athrow
      // 252: aload 22
      // 254: getfield sixtwo/cU$sp.WyFYf Lnet/minecraft/class_243;
      // 257: invokestatic sixtwo/jJ.bIA (Lnet/minecraft/class_243;)Z
      // 25a: aload 4
      // 25c: ifnonnull 26b
      // 25f: ifeq 283
      // 262: goto 269
      // 265: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 268: athrow
      // 269: iload 18
      // 26b: aload 4
      // 26d: ifnonnull 281
      // 270: bipush -1
      // 271: if_icmpne 27f
      // 274: goto 27b
      // 277: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27a: athrow
      // 27b: iload 17
      // 27d: istore 18
      // 27f: iload 17
      // 281: istore 19
      // 283: iinc 17 1
      // 286: iinc 21 1
      // 289: aload 4
      // 28b: ifnull 1de
      // 28e: iload 17
      // 290: iload 20
      // 292: aload 4
      // 294: ifnonnull 2c0
      // 297: if_icmpge 2b8
      // 29a: goto 2a1
      // 29d: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a0: athrow
      // 2a1: aload 12
      // 2a3: iload 17
      // 2a5: iload 20
      // 2a7: invokeinterface java/util/List.subList (II)Ljava/util/List; 3
      // 2ac: invokeinterface java/util/List.clear ()V 1
      // 2b1: goto 2b8
      // 2b4: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b7: athrow
      // 2b8: aload 12
      // 2ba: invokeinterface java/util/List.size ()I 1
      // 2bf: bipush 2
      // 2c0: aload 4
      // 2c2: ifnonnull 2de
      // 2c5: if_icmpge 2db
      // 2c8: goto 2cf
      // 2cb: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ce: athrow
      // 2cf: aload 4
      // 2d1: ifnull 049
      // 2d4: goto 2db
      // 2d7: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2da: athrow
      // 2db: iload 18
      // 2dd: bipush -1
      // 2de: aload 4
      // 2e0: ifnonnull 2f5
      // 2e3: if_icmpeq 049
      // 2e6: goto 2ed
      // 2e9: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ec: athrow
      // 2ed: iload 19
      // 2ef: iload 18
      // 2f1: isub
      // 2f2: bipush 1
      // 2f3: iadd
      // 2f4: bipush 2
      // 2f5: if_icmpge 304
      // 2f8: aload 4
      // 2fa: ifnull 049
      // 2fd: goto 304
      // 300: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 303: athrow
      // 304: aload 0
      // 305: aload 9
      // 307: aload 11
      // 309: aload 12
      // 30b: iload 18
      // 30d: iload 19
      // 30f: invokevirtual sixtwo/cU.ZA (Lnet/minecraft/class_4587;Lnet/minecraft/class_1657;Ljava/util/List;II)V
      // 312: aload 4
      // 314: ifnull 049
      // 317: aload 9
      // 319: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 31c: return
   }

   private void ZA(class_4587 param1, class_1657 param2, List<cU$sp> param3, int param4, int param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cU.CcSNg J
      // 003: ldc2_w 59472237250072
      // 006: lxor
      // 007: lstore 6
      // 009: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00c: astore 8
      // 00e: aload 2
      // 00f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 012: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 015: if_acmpne 03b
      // 018: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01b: getfield net/minecraft/class_310.field_1690 Lnet/minecraft/class_315;
      // 01e: invokevirtual net/minecraft/class_315.method_31044 ()Lnet/minecraft/class_5498;
      // 021: invokevirtual net/minecraft/class_5498.method_31034 ()Z
      // 024: aload 8
      // 026: ifnonnull 041
      // 029: goto 030
      // 02c: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: ifeq 03b
      // 033: goto 03a
      // 036: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 039: athrow
      // 03a: return
      // 03b: aload 3
      // 03c: invokeinterface java/util/List.size ()I 1
      // 041: istore 9
      // 043: iload 9
      // 045: aload 8
      // 047: ifnonnull 05c
      // 04a: bipush 2
      // 04b: if_icmpge 05a
      // 04e: goto 055
      // 051: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: return
      // 056: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 059: athrow
      // 05a: iload 4
      // 05c: aload 8
      // 05e: ifnonnull 070
      // 061: ifge 06e
      // 064: goto 06b
      // 067: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06a: athrow
      // 06b: bipush 0
      // 06c: istore 4
      // 06e: iload 5
      // 070: iload 9
      // 072: aload 8
      // 074: ifnonnull 08d
      // 077: if_icmplt 087
      // 07a: goto 081
      // 07d: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 080: athrow
      // 081: iload 9
      // 083: bipush 1
      // 084: isub
      // 085: istore 5
      // 087: iload 5
      // 089: iload 4
      // 08b: isub
      // 08c: bipush 1
      // 08d: iadd
      // 08e: istore 10
      // 090: iload 10
      // 092: bipush 2
      // 093: if_icmpge 09b
      // 096: return
      // 097: invokestatic sixtwo/cU.ZG (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09a: athrow
      // 09b: aload 3
      // 09c: invokeinterface java/util/List.stream ()Ljava/util/stream/Stream; 1
      // 0a1: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/cU.ZE (Lsixtwo/cU$sp;)Lnet/minecraft/class_243;, (Lsixtwo/cU$sp;)Lnet/minecraft/class_243; ]
      // 0a6: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 0ab: invokeinterface java/util/stream/Stream.toList ()Ljava/util/List; 1
      // 0b0: astore 11
      // 0b2: aload 2
      // 0b3: invokevirtual net/minecraft/class_1657.method_17682 ()F
      // 0b6: fstore 12
      // 0b8: aload 0
      // 0b9: getfield sixtwo/cU.LHxFV Lsixtwo/cC;
      // 0bc: invokevirtual sixtwo/cC.VC ()I
      // 0bf: istore 13
      // 0c1: aload 0
      // 0c2: getfield sixtwo/cU.gxark Lsixtwo/cG;
      // 0c5: invokevirtual sixtwo/cG.Wf ()Lsixtwo/mG;
      // 0c8: astore 14
      // 0ca: aload 1
      // 0cb: aload 11
      // 0cd: iload 10
      // 0cf: iload 4
      // 0d1: iload 5
      // 0d3: fload 12
      // 0d5: aload 14
      // 0d7: iload 13
      // 0d9: invokedynamic apply (Lsixtwo/mG;I)Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/cU.ZD (Lsixtwo/mG;ILjava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG;, (Ljava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG; ]
      // 0de: invokestatic sixtwo/kp.bQA (Lnet/minecraft/class_4587;Ljava/util/List;IIIFLjava/util/function/BiFunction;)V
      // 0e1: aload 1
      // 0e2: aload 11
      // 0e4: iload 10
      // 0e6: iload 4
      // 0e8: iload 5
      // 0ea: bipush 1
      // 0eb: fload 12
      // 0ed: aload 14
      // 0ef: iload 13
      // 0f1: invokedynamic apply (Lsixtwo/mG;I)Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/cU.ZC (Lsixtwo/mG;ILjava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG;, (Ljava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG; ]
      // 0f6: invokestatic sixtwo/kp.bQB (Lnet/minecraft/class_4587;Ljava/util/List;IIIZFLjava/util/function/BiFunction;)V
      // 0f9: aload 1
      // 0fa: aload 11
      // 0fc: iload 10
      // 0fe: iload 4
      // 100: iload 5
      // 102: bipush 0
      // 103: fload 12
      // 105: aload 14
      // 107: iload 13
      // 109: invokedynamic apply (Lsixtwo/mG;I)Ljava/util/function/BiFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/cU.ZB (Lsixtwo/mG;ILjava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG;, (Ljava/lang/Integer;Ljava/lang/Integer;)Lsixtwo/mG; ]
      // 10e: invokestatic sixtwo/kp.bQB (Lnet/minecraft/class_4587;Ljava/util/List;IIIZFLjava/util/function/BiFunction;)V
      // 111: return
   }

   private static MatchException ZG(MatchException var0) {
      return var0;
   }

   private static int ZH(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28595;
      if (XmDUC[var3] == null) {
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
         long var5 = bhpzz[var3];
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
         Object[] var9 = (Object[])JJzQs.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JJzQs.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cU", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         XmDUC[var3] = var15;
      }

      return XmDUC[var3];
   }

   private static int ZI(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ZH(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }
}
