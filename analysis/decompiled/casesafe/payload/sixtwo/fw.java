package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2338;
import net.minecraft.class_3965;

public class fw extends gg {
   private final ct sGDWO;
   private final cu aRvvg;
   private final cu Qksff;
   private final ct YBVgI;
   private final cu pJxNC;
   private final cu wbUnO;
   private final cA KzsPl;
   private final ct tYcBL;
   private final cu ZtDkv;
   private final cu UFdMN;
   private final cu NnigP;
   private final cu vyhuq;
   private final cu KuKPX;
   private final ct cuIXt;
   private final cu SzYmi;
   private final cu qzZfU;
   private final cJ FbvPk;
   private final mT AOeRT;
   private final oj WJJbs;
   private final List<class_2338> NrVzh;
   private static long QmxeW;
   private static String zAhcx;
   private static long[] YezLm;
   private static Integer[] lSNgg;
   private static Map SVJts;

   public fw() {
      long var1 = QmxeW ^ 56367897141435L;
      super(gf.aZL(aRi<"v">(32503, 7941617562067626564L ^ var1), false, gh.xwjCw));
      this.sGDWO = new ct(
         this,
         mr.clS(
            new int[]{
               aRi<"v">(31369, 2230084900380110356L ^ var1),
               aRi<"v">(8108, 2209599712813124471L ^ var1),
               aRi<"v">(20771, 440237394149393793L ^ var1),
               aRi<"v">(31256, 6640067051164626586L ^ var1)
            }
         )
      );
      ct var10003 = this.sGDWO;
      int[] var10004 = new int[aRi<"v">(32175, 4297260799145371966L ^ var1)];
      var10004[0] = aRi<"v">(7338, 9030500231571900450L ^ var1);
      var10004[1] = aRi<"v">(11263, 6560372311176560493L ^ var1);
      var10004[2] = aRi<"v">(2116, 8860257959875091697L ^ var1);
      var10004[3] = aRi<"v">(32385, 1902263905617668665L ^ var1);
      var10004[4] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[5] = aRi<"v">(20136, 3452555808462035496L ^ var1);
      var10004[aRi<"v">(8647, 6468879946417616247L ^ var1)] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      this.aRvvg = new cu(var10003, mr.clS(var10004));
      this.Qksff = new cu(
         this.sGDWO,
         mr.clS(
            new int[]{
               aRi<"v">(17140, 3798223199160686144L ^ var1),
               aRi<"v">(8586, 5202042430121882906L ^ var1),
               aRi<"v">(26401, 6102630272045183990L ^ var1),
               aRi<"v">(29290, 8677140010485343987L ^ var1),
               aRi<"v">(3201, 1152682111011690591L ^ var1)
            }
         )
      );
      var10004 = new int[aRi<"v">(12282, 6080803195646983031L ^ var1)];
      var10004[0] = aRi<"v">(26516, 6981520565118759717L ^ var1);
      var10004[1] = aRi<"v">(30876, 2794358262822300680L ^ var1);
      var10004[2] = aRi<"v">(12356, 8874459852743255274L ^ var1);
      var10004[3] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      var10004[4] = aRi<"v">(12609, 5713003106712430022L ^ var1);
      var10004[5] = aRi<"v">(26039, 293645649625641234L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(29876, 7561136144316751981L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(3030, 2049935425156292469L ^ var1);
      var10004[aRi<"v">(3713, 5024078854725114426L ^ var1)] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[aRi<"v">(13179, 1437294136594212776L ^ var1)] = aRi<"v">(32420, 728771096940964469L ^ var1);
      var10004[aRi<"v">(1300, 5425063067778945422L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      this.YBVgI = new ct(this, mr.clS(var10004));
      this.pJxNC = new cu(
         this.YBVgI,
         mr.clS(
            new int[]{
               aRi<"v">(18060, 2603616370749329965L ^ var1),
               aRi<"v">(5671, 1499356748970033849L ^ var1),
               aRi<"v">(3201, 1152682111011690591L ^ var1),
               aRi<"v">(14258, 5773884061832291102L ^ var1)
            }
         )
      );
      var10003 = this.YBVgI;
      var10004 = new int[aRi<"v">(23221, 1786644711427952191L ^ var1)];
      var10004[0] = aRi<"v">(3030, 2049935425156292469L ^ var1);
      var10004[1] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[2] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[3] = aRi<"v">(23725, 6206817974487926830L ^ var1);
      var10004[4] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[5] = aRi<"v">(26403, 4679444640626537457L ^ var1);
      this.wbUnO = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aRi<"v">(11159, 8209560164722753346L ^ var1)];
      var10004[0] = aRi<"v">(6385, 2337447483033685073L ^ var1);
      var10004[1] = aRi<"v">(23725, 6206817974487926830L ^ var1);
      var10004[2] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      var10004[3] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[4] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[5] = aRi<"v">(704, 5498295391669229087L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(17193, 6650781133197596591L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(12356, 8874459852743255274L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(14578, 4096363932830346355L ^ var1);
      var10004[aRi<"v">(25298, 4704624714682365532L ^ var1)] = aRi<"v">(18621, 3790184791799913568L ^ var1);
      var10004[aRi<"v">(1420, 2967226251396157788L ^ var1)] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(6903, 5746242823449415256L ^ var1)] = aRi<"v">(13142, 1175663694595368834L ^ var1);
      var10004[aRi<"v">(22036, 2613580003500835528L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[aRi<"v">(22473, 7203216151335420789L ^ var1)] = aRi<"v">(26403, 4679444640626537457L ^ var1);
      var10004[aRi<"v">(1322, 1302479349406044563L ^ var1)] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[aRi<"v">(9560, 6623867496845816270L ^ var1)] = aRi<"v">(6004, 1230271992283923402L ^ var1);
      this.KzsPl = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(20.0).UI(1.0, 1.0).UH(zAhcx);
      var10004 = new int[aRi<"v">(25298, 4704624714682365532L ^ var1)];
      var10004[0] = aRi<"v">(704, 5498295391669229087L ^ var1);
      var10004[1] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      var10004[2] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[3] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[4] = aRi<"v">(26403, 4679444640626537457L ^ var1);
      var10004[5] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(3030, 2049935425156292469L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(32420, 728771096940964469L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      this.tYcBL = new ct(this, mr.clS(var10004));
      var10003 = this.tYcBL;
      var10004 = new int[aRi<"v">(12729, 2044126789742044513L ^ var1)];
      var10004[0] = aRi<"v">(27549, 223435276732104506L ^ var1);
      var10004[1] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[2] = aRi<"v">(3201, 1152682111011690591L ^ var1);
      var10004[3] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[4] = aRi<"v">(7553, 6377802009268455709L ^ var1);
      var10004[5] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(1888, 7641891788660872137L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(2230, 1606227187365289023L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(17193, 6650781133197596591L ^ var1);
      var10004[aRi<"v">(25298, 4704624714682365532L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[aRi<"v">(1420, 2967226251396157788L ^ var1)] = aRi<"v">(208, 3540663682863305795L ^ var1);
      this.ZtDkv = new cu(var10003, mr.clS(var10004));
      var10003 = this.tYcBL;
      var10004 = new int[aRi<"v">(1420, 2967226251396157788L ^ var1)];
      var10004[0] = aRi<"v">(13396, 8657615483285283051L ^ var1);
      var10004[1] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[2] = aRi<"v">(16628, 6560688675878753407L ^ var1);
      var10004[3] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[4] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[5] = aRi<"v">(10616, 6168628016646700540L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(208, 3540663682863305795L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(17193, 6650781133197596591L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[aRi<"v">(25298, 4704624714682365532L ^ var1)] = aRi<"v">(208, 3540663682863305795L ^ var1);
      this.UFdMN = new cu(var10003, mr.clS(var10004));
      this.NnigP = new cu(
         this.tYcBL,
         mr.clS(
            new int[]{
               aRi<"v">(27074, 6742377824166182221L ^ var1),
               aRi<"v">(6552, 5697586027690396962L ^ var1),
               aRi<"v">(3201, 1152682111011690591L ^ var1),
               aRi<"v">(8586, 5202042430121882906L ^ var1),
               aRi<"v">(22387, 2372569032310342616L ^ var1)
            }
         )
      );
      this.vyhuq = new cu(
         this.tYcBL,
         mr.clS(
            new int[]{
               aRi<"v">(13396, 8657615483285283051L ^ var1),
               aRi<"v">(6552, 5697586027690396962L ^ var1),
               aRi<"v">(28814, 6724782394316710934L ^ var1),
               aRi<"v">(6552, 5697586027690396962L ^ var1)
            }
         )
      );
      this.KuKPX = new cu(
         this.tYcBL,
         mr.clS(
            new int[]{aRi<"v">(6385, 2337447483033685073L ^ var1), aRi<"v">(26403, 4679444640626537457L ^ var1), aRi<"v">(26403, 4679444640626537457L ^ var1)}
         )
      );
      var10004 = new int[aRi<"v">(25298, 4704624714682365532L ^ var1)];
      var10004[0] = aRi<"v">(10616, 6168628016646700540L ^ var1);
      var10004[1] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[2] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[3] = aRi<"v">(14578, 4096363932830346355L ^ var1);
      var10004[4] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[5] = aRi<"v">(26403, 4679444640626537457L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(25956, 3324887132589027762L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(14258, 5773884061832291102L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(22387, 2372569032310342616L ^ var1);
      this.cuIXt = new ct(this, mr.clS(var10004));
      this.SzYmi = new cu(
         this.cuIXt,
         mr.clS(
            new int[]{aRi<"v">(27274, 4772543704074681877L ^ var1), aRi<"v">(17193, 6650781133197596591L ^ var1), aRi<"v">(15788, 4670769573267646730L ^ var1)}
         )
      );
      var10003 = this.cuIXt;
      var10004 = new int[aRi<"v">(29527, 4104387834517350348L ^ var1)];
      var10004[0] = aRi<"v">(7226, 976531329435732108L ^ var1);
      var10004[1] = aRi<"v">(22387, 2372569032310342616L ^ var1);
      var10004[2] = aRi<"v">(12356, 8874459852743255274L ^ var1);
      var10004[3] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[4] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[5] = aRi<"v">(32420, 728771096940964469L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(10909, 2048765790158405128L ^ var1);
      this.qzZfU = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aRi<"v">(19525, 5732394252120316141L ^ var1)];
      var10004[0] = aRi<"v">(10616, 6168628016646700540L ^ var1);
      var10004[1] = aRi<"v">(6552, 5697586027690396962L ^ var1);
      var10004[2] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[3] = aRi<"v">(14578, 4096363932830346355L ^ var1);
      var10004[4] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[5] = aRi<"v">(26403, 4679444640626537457L ^ var1);
      var10004[aRi<"v">(23221, 1786644711427952191L ^ var1)] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(29527, 4104387834517350348L ^ var1)] = aRi<"v">(8482, 4105891318319232437L ^ var1);
      var10004[aRi<"v">(22224, 7246131452407530087L ^ var1)] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[aRi<"v">(29794, 6330030481410285752L ^ var1)] = aRi<"v">(16869, 7038676033396036952L ^ var1);
      var10004[aRi<"v">(25298, 4704624714682365532L ^ var1)] = aRi<"v">(704, 5498295391669229087L ^ var1);
      var10004[aRi<"v">(1420, 2967226251396157788L ^ var1)] = aRi<"v">(14578, 4096363932830346355L ^ var1);
      var10004[aRi<"v">(12729, 2044126789742044513L ^ var1)] = aRi<"v">(22387, 2372569032310342616L ^ var1);
      var10004[aRi<"v">(29240, 1133066562483742397L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[aRi<"v">(22473, 7203216151335420789L ^ var1)] = aRi<"v">(8586, 5202042430121882906L ^ var1);
      var10004[aRi<"v">(30614, 2571914466685608730L ^ var1)] = aRi<"v">(15788, 4670769573267646730L ^ var1);
      var10004[aRi<"v">(10530, 761400330423582088L ^ var1)] = aRi<"v">(24374, 5724309736826096516L ^ var1);
      this.FbvPk = new cJ(this, mr.clS(var10004)).WE(false);
      this.AOeRT = mT.cpz();
      this.NrVzh = new ArrayList<>();
      this.WJJbs = new oj();
   }

   static {
      Loader.doInit(fw.class);
      _961434ad71bdf72b01d088a497663a38();
   }

   private static native void _961434ad71bdf72b01d088a497663a38();

   @hG
   public native void aQZ(gW$tq var1);

   @hG
   public native void aQX(gv var1);

   @hG
   public native void aQY(gH$th var1);

   private static native int aRh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aRa();

   private static native String aRf(byte[] var0);

   private class_3965 aRb() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fw.QmxeW J
      // 003: ldc2_w 83789467979757
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/fg.aIW ()[I
      // 00b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 011: invokevirtual net/minecraft/class_746.method_55754 ()D
      // 014: d2i
      // 015: istore 4
      // 017: astore 3
      // 018: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 01b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 01e: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 021: invokestatic net/minecraft/class_2338.method_49638 (Lnet/minecraft/class_2374;)Lnet/minecraft/class_2338;
      // 024: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 027: iload 4
      // 029: iload 4
      // 02b: iload 4
      // 02d: invokestatic net/minecraft/class_2338.method_25996 (Lnet/minecraft/class_2338;III)Ljava/lang/Iterable;
      // 030: astore 5
      // 032: aload 5
      // 034: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 039: astore 6
      // 03b: aload 6
      // 03d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 042: ifeq 6b8
      // 045: aload 6
      // 047: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04c: checkcast net/minecraft/class_2338
      // 04f: astore 7
      // 051: aload 0
      // 052: getfield sixtwo/fw.NrVzh Ljava/util/List;
      // 055: aload 7
      // 057: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 05c: ifeq 063
      // 05f: aload 3
      // 060: ifnull 03b
      // 063: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 066: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 069: aload 7
      // 06b: invokevirtual net/minecraft/class_638.method_8316 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_3610;
      // 06e: astore 8
      // 070: aload 8
      // 072: invokevirtual net/minecraft/class_3610.method_15771 ()Z
      // 075: ifne 083
      // 078: aload 3
      // 079: ifnull 03b
      // 07c: goto 083
      // 07f: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 082: athrow
      // 083: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 086: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 089: aload 7
      // 08b: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 08e: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 091: astore 9
      // 093: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 096: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 099: aload 7
      // 09b: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 09e: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 0a1: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 0a4: astore 10
      // 0a6: aload 9
      // 0a8: getstatic net/minecraft/class_2246.field_10382 Lnet/minecraft/class_2248;
      // 0ab: if_acmpne 0b6
      // 0ae: bipush 1
      // 0af: goto 0b7
      // 0b2: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b5: athrow
      // 0b6: bipush 0
      // 0b7: istore 11
      // 0b9: aload 9
      // 0bb: getstatic net/minecraft/class_2246.field_10164 Lnet/minecraft/class_2248;
      // 0be: if_acmpne 0c9
      // 0c1: bipush 1
      // 0c2: goto 0ca
      // 0c5: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c8: athrow
      // 0c9: bipush 0
      // 0ca: istore 12
      // 0cc: aload 10
      // 0ce: getstatic net/minecraft/class_2246.field_10343 Lnet/minecraft/class_2248;
      // 0d1: if_acmpne 0dc
      // 0d4: bipush 1
      // 0d5: goto 0dd
      // 0d8: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: bipush 0
      // 0dd: istore 13
      // 0df: aload 0
      // 0e0: iload 11
      // 0e2: iload 12
      // 0e4: iload 13
      // 0e6: invokevirtual sixtwo/fw.aRc (ZZZ)Z
      // 0e9: ifne 0f7
      // 0ec: aload 3
      // 0ed: ifnull 03b
      // 0f0: goto 0f7
      // 0f3: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f6: athrow
      // 0f7: aload 8
      // 0f9: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0fc: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 0ff: aload 7
      // 101: invokevirtual net/minecraft/class_3610.method_17776 (Lnet/minecraft/class_1922;Lnet/minecraft/class_2338;)Lnet/minecraft/class_265;
      // 104: astore 14
      // 106: aload 14
      // 108: invokevirtual net/minecraft/class_265.method_1110 ()Z
      // 10b: ifeq 119
      // 10e: aload 3
      // 10f: ifnull 03b
      // 112: goto 119
      // 115: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 118: athrow
      // 119: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 11c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11f: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 122: astore 15
      // 124: aload 7
      // 126: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 129: astore 16
      // 12b: aload 15
      // 12d: aload 16
      // 12f: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 132: invokevirtual net/minecraft/class_243.method_1029 ()Lnet/minecraft/class_243;
      // 135: astore 17
      // 137: new java/util/ArrayList
      // 13a: dup
      // 13b: invokespecial java/util/ArrayList.<init> ()V
      // 13e: astore 18
      // 140: bipush 4
      // 141: istore 19
      // 143: aload 14
      // 145: invokevirtual net/minecraft/class_265.method_1090 ()Ljava/util/List;
      // 148: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14d: astore 20
      // 14f: aload 20
      // 151: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 156: ifeq 42f
      // 159: aload 20
      // 15b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 160: checkcast net/minecraft/class_238
      // 163: astore 21
      // 165: sipush 23221
      // 168: aload 21
      // 16a: getfield net/minecraft/class_238.field_1323 D
      // 16d: aload 7
      // 16f: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 172: i2d
      // 173: dadd
      // 174: dstore 22
      // 176: ldc2_w 1786539916993995113
      // 179: lload 1
      // 17a: lxor
      // 17b: aload 21
      // 17d: getfield net/minecraft/class_238.field_1320 D
      // 180: aload 7
      // 182: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 185: i2d
      // 186: dadd
      // 187: dstore 24
      // 189: aload 21
      // 18b: getfield net/minecraft/class_238.field_1322 D
      // 18e: aload 7
      // 190: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 193: i2d
      // 194: dadd
      // 195: dstore 26
      // 197: aload 21
      // 199: getfield net/minecraft/class_238.field_1325 D
      // 19c: aload 7
      // 19e: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 1a1: i2d
      // 1a2: dadd
      // 1a3: dstore 28
      // 1a5: aload 21
      // 1a7: getfield net/minecraft/class_238.field_1321 D
      // 1aa: aload 7
      // 1ac: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 1af: i2d
      // 1b0: dadd
      // 1b1: dstore 30
      // 1b3: aload 21
      // 1b5: getfield net/minecraft/class_238.field_1324 D
      // 1b8: aload 7
      // 1ba: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 1bd: i2d
      // 1be: dadd
      // 1bf: dstore 32
      // 1c1: invokedynamic v (IJ)I bsm=sixtwo/fw.aRi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1c6: anewarray 505
      // 1c9: dup
      // 1ca: bipush 0
      // 1cb: new net/minecraft/class_243
      // 1ce: dup
      // 1cf: dconst_1
      // 1d0: dconst_0
      // 1d1: dconst_0
      // 1d2: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 1d5: aastore
      // 1d6: dup
      // 1d7: bipush 1
      // 1d8: new net/minecraft/class_243
      // 1db: dup
      // 1dc: ldc2_w -1.0
      // 1df: dconst_0
      // 1e0: dconst_0
      // 1e1: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 1e4: aastore
      // 1e5: dup
      // 1e6: bipush 2
      // 1e7: new net/minecraft/class_243
      // 1ea: dup
      // 1eb: dconst_0
      // 1ec: dconst_1
      // 1ed: dconst_0
      // 1ee: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 1f1: aastore
      // 1f2: dup
      // 1f3: bipush 3
      // 1f4: new net/minecraft/class_243
      // 1f7: dup
      // 1f8: dconst_0
      // 1f9: ldc2_w -1.0
      // 1fc: dconst_0
      // 1fd: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 200: aastore
      // 201: dup
      // 202: bipush 4
      // 203: new net/minecraft/class_243
      // 206: dup
      // 207: dconst_0
      // 208: dconst_0
      // 209: dconst_1
      // 20a: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 20d: aastore
      // 20e: dup
      // 20f: bipush 5
      // 210: new net/minecraft/class_243
      // 213: dup
      // 214: dconst_0
      // 215: dconst_0
      // 216: ldc2_w -1.0
      // 219: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 21c: aastore
      // 21d: astore 34
      // 21f: aload 34
      // 221: astore 35
      // 223: aload 35
      // 225: arraylength
      // 226: istore 36
      // 228: bipush 0
      // 229: aload 3
      // 22a: ifnonnull 43c
      // 22d: istore 37
      // 22f: iload 37
      // 231: iload 36
      // 233: if_icmpge 42b
      // 236: aload 35
      // 238: iload 37
      // 23a: aaload
      // 23b: astore 38
      // 23d: aload 38
      // 23f: aload 17
      // 241: invokevirtual net/minecraft/class_243.method_1026 (Lnet/minecraft/class_243;)D
      // 244: dconst_0
      // 245: dcmpg
      // 246: aload 3
      // 247: ifnonnull 156
      // 24a: aload 3
      // 24b: ifnonnull 271
      // 24e: ifgt 263
      // 251: goto 258
      // 254: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 257: athrow
      // 258: aload 3
      // 259: ifnull 424
      // 25c: goto 263
      // 25f: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 262: athrow
      // 263: aload 38
      // 265: getfield net/minecraft/class_243.field_1352 D
      // 268: dconst_0
      // 269: dcmpl
      // 26a: goto 271
      // 26d: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 270: athrow
      // 271: aload 3
      // 272: ifnonnull 29a
      // 275: ifle 288
      // 278: goto 27f
      // 27b: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27e: athrow
      // 27f: dload 24
      // 281: goto 2a5
      // 284: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 287: athrow
      // 288: aload 38
      // 28a: getfield net/minecraft/class_243.field_1352 D
      // 28d: aload 3
      // 28e: ifnonnull 29f
      // 291: dconst_0
      // 292: dcmpg
      // 293: goto 29a
      // 296: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 299: athrow
      // 29a: ifge 2a2
      // 29d: dload 22
      // 29f: goto 2a5
      // 2a2: ldc2_w NaN
      // 2a5: dstore 39
      // 2a7: aload 38
      // 2a9: getfield net/minecraft/class_243.field_1351 D
      // 2ac: dconst_0
      // 2ad: dcmpl
      // 2ae: aload 3
      // 2af: ifnonnull 2d7
      // 2b2: ifle 2c5
      // 2b5: goto 2bc
      // 2b8: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2bb: athrow
      // 2bc: dload 28
      // 2be: goto 2e2
      // 2c1: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c4: athrow
      // 2c5: aload 38
      // 2c7: getfield net/minecraft/class_243.field_1351 D
      // 2ca: aload 3
      // 2cb: ifnonnull 2dc
      // 2ce: dconst_0
      // 2cf: dcmpg
      // 2d0: goto 2d7
      // 2d3: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d6: athrow
      // 2d7: ifge 2df
      // 2da: dload 26
      // 2dc: goto 2e2
      // 2df: ldc2_w NaN
      // 2e2: dstore 41
      // 2e4: aload 38
      // 2e6: getfield net/minecraft/class_243.field_1350 D
      // 2e9: dconst_0
      // 2ea: dcmpl
      // 2eb: aload 3
      // 2ec: ifnonnull 314
      // 2ef: ifle 302
      // 2f2: goto 2f9
      // 2f5: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f8: athrow
      // 2f9: dload 32
      // 2fb: goto 31f
      // 2fe: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 301: athrow
      // 302: aload 38
      // 304: getfield net/minecraft/class_243.field_1350 D
      // 307: aload 3
      // 308: ifnonnull 319
      // 30b: dconst_0
      // 30c: dcmpg
      // 30d: goto 314
      // 310: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 313: athrow
      // 314: ifge 31c
      // 317: dload 30
      // 319: goto 31f
      // 31c: ldc2_w NaN
      // 31f: dstore 43
      // 321: bipush 0
      // 322: istore 45
      // 324: iload 45
      // 326: bipush 4
      // 327: if_icmpge 424
      // 32a: dload 39
      // 32c: aload 3
      // 32d: ifnonnull 358
      // 330: invokestatic java/lang/Double.isNaN (D)Z
      // 333: aload 3
      // 334: ifnonnull 231
      // 337: goto 33e
      // 33a: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33d: athrow
      // 33e: ifeq 35b
      // 341: dload 22
      // 343: dload 24
      // 345: dload 22
      // 347: dsub
      // 348: iload 45
      // 34a: i2d
      // 34b: ldc2_w 3.0
      // 34e: ddiv
      // 34f: dmul
      // 350: dadd
      // 351: goto 358
      // 354: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 357: athrow
      // 358: goto 35d
      // 35b: dload 39
      // 35d: dstore 46
      // 35f: bipush 0
      // 360: istore 48
      // 362: iload 48
      // 364: bipush 4
      // 365: if_icmpge 41d
      // 368: dload 41
      // 36a: aload 3
      // 36b: ifnonnull 396
      // 36e: invokestatic java/lang/Double.isNaN (D)Z
      // 371: aload 3
      // 372: ifnonnull 326
      // 375: goto 37c
      // 378: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37b: athrow
      // 37c: ifeq 399
      // 37f: dload 26
      // 381: dload 28
      // 383: dload 26
      // 385: dsub
      // 386: iload 48
      // 388: i2d
      // 389: ldc2_w 3.0
      // 38c: ddiv
      // 38d: dmul
      // 38e: dadd
      // 38f: goto 396
      // 392: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 395: athrow
      // 396: goto 39b
      // 399: dload 41
      // 39b: dstore 49
      // 39d: dload 43
      // 39f: invokestatic java/lang/Double.isNaN (D)Z
      // 3a2: aload 3
      // 3a3: ifnonnull 3cf
      // 3a6: ifne 3b8
      // 3a9: goto 3b0
      // 3ac: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3af: athrow
      // 3b0: dload 43
      // 3b2: dstore 51
      // 3b4: aload 3
      // 3b5: ifnull 401
      // 3b8: dload 41
      // 3ba: aload 3
      // 3bb: ifnonnull 3ff
      // 3be: goto 3c5
      // 3c1: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c4: athrow
      // 3c5: invokestatic java/lang/Double.isNaN (D)Z
      // 3c8: goto 3cf
      // 3cb: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3ce: athrow
      // 3cf: ifeq 3e8
      // 3d2: dload 30
      // 3d4: dload 32
      // 3d6: dload 30
      // 3d8: dsub
      // 3d9: iload 48
      // 3db: i2d
      // 3dc: ldc2_w 3.0
      // 3df: ddiv
      // 3e0: dmul
      // 3e1: dadd
      // 3e2: dstore 51
      // 3e4: aload 3
      // 3e5: ifnull 401
      // 3e8: dload 30
      // 3ea: dload 32
      // 3ec: dload 30
      // 3ee: dsub
      // 3ef: iload 45
      // 3f1: i2d
      // 3f2: ldc2_w 3.0
      // 3f5: ddiv
      // 3f6: dmul
      // 3f7: dadd
      // 3f8: goto 3ff
      // 3fb: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3fe: athrow
      // 3ff: dstore 51
      // 401: aload 18
      // 403: new net/minecraft/class_243
      // 406: dup
      // 407: dload 46
      // 409: dload 49
      // 40b: dload 51
      // 40d: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 410: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 415: pop
      // 416: iinc 48 1
      // 419: aload 3
      // 41a: ifnull 362
      // 41d: iinc 45 1
      // 420: aload 3
      // 421: ifnull 324
      // 424: iinc 37 1
      // 427: aload 3
      // 428: ifnull 22f
      // 42b: aload 3
      // 42c: ifnull 14f
      // 42f: sipush 20403
      // 432: ldc2_w 7606990662980219969
      // 435: lload 1
      // 436: lxor
      // 437: invokedynamic v (IJ)I bsm=sixtwo/fw.aRi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 43c: istore 20
      // 43e: new java/util/Random
      // 441: dup
      // 442: aload 7
      // 444: invokevirtual net/minecraft/class_2338.hashCode ()I
      // 447: i2l
      // 448: invokespecial java/util/Random.<init> (J)V
      // 44b: astore 21
      // 44d: aload 14
      // 44f: invokevirtual net/minecraft/class_265.method_1090 ()Ljava/util/List;
      // 452: astore 22
      // 454: bipush 0
      // 455: istore 23
      // 457: iload 23
      // 459: sipush 5843
      // 45c: ldc2_w 3469466251136560424
      // 45f: lload 1
      // 460: lxor
      // 461: invokedynamic v (IJ)I bsm=sixtwo/fw.aRi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 466: if_icmpge 628
      // 469: aload 22
      // 46b: aload 21
      // 46d: aload 22
      // 46f: invokeinterface java/util/List.size ()I 1
      // 474: invokevirtual java/util/Random.nextInt (I)I
      // 477: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 47c: checkcast net/minecraft/class_238
      // 47f: astore 24
      // 481: aload 21
      // 483: sipush 23221
      // 486: ldc2_w 1786539916993995113
      // 489: lload 1
      // 48a: lxor
      // 48b: invokedynamic v (IJ)I bsm=sixtwo/fw.aRi (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 490: invokevirtual java/util/Random.nextInt (I)I
      // 493: istore 25
      // 495: aload 21
      // 497: invokevirtual java/util/Random.nextBoolean ()Z
      // 49a: aload 3
      // 49b: ifnonnull 042
      // 49e: aload 3
      // 49f: ifnonnull 4ae
      // 4a2: ifeq 4f4
      // 4a5: goto 4ac
      // 4a8: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4ab: athrow
      // 4ac: iload 25
      // 4ae: aload 3
      // 4af: ifnonnull 4ca
      // 4b2: ifne 4c8
      // 4b5: goto 4bc
      // 4b8: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4bb: athrow
      // 4bc: aload 24
      // 4be: getfield net/minecraft/class_238.field_1323 D
      // 4c1: goto 50b
      // 4c4: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c7: athrow
      // 4c8: iload 25
      // 4ca: bipush 1
      // 4cb: if_icmpne 4da
      // 4ce: aload 24
      // 4d0: getfield net/minecraft/class_238.field_1320 D
      // 4d3: goto 50b
      // 4d6: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d9: athrow
      // 4da: aload 24
      // 4dc: getfield net/minecraft/class_238.field_1323 D
      // 4df: aload 21
      // 4e1: invokevirtual java/util/Random.nextDouble ()D
      // 4e4: aload 24
      // 4e6: getfield net/minecraft/class_238.field_1320 D
      // 4e9: aload 24
      // 4eb: getfield net/minecraft/class_238.field_1323 D
      // 4ee: dsub
      // 4ef: dmul
      // 4f0: dadd
      // 4f1: goto 50b
      // 4f4: aload 24
      // 4f6: getfield net/minecraft/class_238.field_1323 D
      // 4f9: aload 21
      // 4fb: invokevirtual java/util/Random.nextDouble ()D
      // 4fe: aload 24
      // 500: getfield net/minecraft/class_238.field_1320 D
      // 503: aload 24
      // 505: getfield net/minecraft/class_238.field_1323 D
      // 508: dsub
      // 509: dmul
      // 50a: dadd
      // 50b: dstore 26
      // 50d: aload 21
      // 50f: invokevirtual java/util/Random.nextBoolean ()Z
      // 512: aload 3
      // 513: ifnonnull 522
      // 516: ifeq 569
      // 519: goto 520
      // 51c: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51f: athrow
      // 520: iload 25
      // 522: bipush 2
      // 523: aload 3
      // 524: ifnonnull 540
      // 527: if_icmpne 53d
      // 52a: goto 531
      // 52d: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 530: athrow
      // 531: aload 24
      // 533: getfield net/minecraft/class_238.field_1322 D
      // 536: goto 580
      // 539: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53c: athrow
      // 53d: iload 25
      // 53f: bipush 3
      // 540: if_icmpne 54f
      // 543: aload 24
      // 545: getfield net/minecraft/class_238.field_1325 D
      // 548: goto 580
      // 54b: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54e: athrow
      // 54f: aload 24
      // 551: getfield net/minecraft/class_238.field_1322 D
      // 554: aload 21
      // 556: invokevirtual java/util/Random.nextDouble ()D
      // 559: aload 24
      // 55b: getfield net/minecraft/class_238.field_1325 D
      // 55e: aload 24
      // 560: getfield net/minecraft/class_238.field_1322 D
      // 563: dsub
      // 564: dmul
      // 565: dadd
      // 566: goto 580
      // 569: aload 24
      // 56b: getfield net/minecraft/class_238.field_1322 D
      // 56e: aload 21
      // 570: invokevirtual java/util/Random.nextDouble ()D
      // 573: aload 24
      // 575: getfield net/minecraft/class_238.field_1325 D
      // 578: aload 24
      // 57a: getfield net/minecraft/class_238.field_1322 D
      // 57d: dsub
      // 57e: dmul
      // 57f: dadd
      // 580: dstore 28
      // 582: aload 21
      // 584: invokevirtual java/util/Random.nextBoolean ()Z
      // 587: aload 3
      // 588: ifnonnull 597
      // 58b: ifeq 5de
      // 58e: goto 595
      // 591: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 594: athrow
      // 595: iload 25
      // 597: bipush 4
      // 598: aload 3
      // 599: ifnonnull 5b5
      // 59c: if_icmpne 5b2
      // 59f: goto 5a6
      // 5a2: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a5: athrow
      // 5a6: aload 24
      // 5a8: getfield net/minecraft/class_238.field_1321 D
      // 5ab: goto 5f5
      // 5ae: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b1: athrow
      // 5b2: iload 25
      // 5b4: bipush 5
      // 5b5: if_icmpne 5c4
      // 5b8: aload 24
      // 5ba: getfield net/minecraft/class_238.field_1324 D
      // 5bd: goto 5f5
      // 5c0: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c3: athrow
      // 5c4: aload 24
      // 5c6: getfield net/minecraft/class_238.field_1321 D
      // 5c9: aload 21
      // 5cb: invokevirtual java/util/Random.nextDouble ()D
      // 5ce: aload 24
      // 5d0: getfield net/minecraft/class_238.field_1324 D
      // 5d3: aload 24
      // 5d5: getfield net/minecraft/class_238.field_1321 D
      // 5d8: dsub
      // 5d9: dmul
      // 5da: dadd
      // 5db: goto 5f5
      // 5de: aload 24
      // 5e0: getfield net/minecraft/class_238.field_1321 D
      // 5e3: aload 21
      // 5e5: invokevirtual java/util/Random.nextDouble ()D
      // 5e8: aload 24
      // 5ea: getfield net/minecraft/class_238.field_1324 D
      // 5ed: aload 24
      // 5ef: getfield net/minecraft/class_238.field_1321 D
      // 5f2: dsub
      // 5f3: dmul
      // 5f4: dadd
      // 5f5: dstore 30
      // 5f7: aload 18
      // 5f9: new net/minecraft/class_243
      // 5fc: dup
      // 5fd: dload 26
      // 5ff: aload 7
      // 601: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 604: i2d
      // 605: dadd
      // 606: dload 28
      // 608: aload 7
      // 60a: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 60d: i2d
      // 60e: dadd
      // 60f: dload 30
      // 611: aload 7
      // 613: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 616: i2d
      // 617: dadd
      // 618: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 61b: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 620: pop
      // 621: iinc 23 1
      // 624: aload 3
      // 625: ifnull 457
      // 628: aload 18
      // 62a: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 62f: astore 23
      // 631: aload 23
      // 633: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 638: ifeq 6b4
      // 63b: aload 23
      // 63d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 642: checkcast net/minecraft/class_243
      // 645: astore 24
      // 647: new net/minecraft/class_3959
      // 64a: dup
      // 64b: aload 15
      // 64d: aload 24
      // 64f: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 652: getstatic net/minecraft/class_3959$class_242.field_1345 Lnet/minecraft/class_3959$class_242;
      // 655: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 658: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 65b: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 65e: astore 25
      // 660: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 663: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 666: aload 25
      // 668: invokevirtual net/minecraft/class_638.method_17742 (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // 66b: astore 26
      // 66d: aload 26
      // 66f: aload 3
      // 670: ifnonnull 690
      // 673: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 676: aload 3
      // 677: ifnonnull 04c
      // 67a: goto 681
      // 67d: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 680: athrow
      // 681: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 684: if_acmpne 6b0
      // 687: aload 26
      // 689: goto 690
      // 68c: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68f: athrow
      // 690: aload 3
      // 691: ifnonnull 6af
      // 694: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // 697: aload 7
      // 699: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 69c: ifeq 6b0
      // 69f: goto 6a6
      // 6a2: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6a5: athrow
      // 6a6: aload 26
      // 6a8: goto 6af
      // 6ab: invokestatic sixtwo/fw.aRe (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6ae: athrow
      // 6af: areturn
      // 6b0: aload 3
      // 6b1: ifnull 631
      // 6b4: aload 3
      // 6b5: ifnull 03b
      // 6b8: aconst_null
      // 6b9: areturn
   }

   private static native MatchException aRe(MatchException var0);

   private native boolean aRc(boolean var1, boolean var2, boolean var3);

   private static native CallSite aRi(Lookup var0, String var1, MethodType var2);

   private static native int aRg(int var0, long var1);
}
