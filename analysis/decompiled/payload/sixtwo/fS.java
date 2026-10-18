package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2561;
import net.minecraft.class_327;
import net.minecraft.class_9011;
import org.apache.commons.lang3.mutable.MutableInt;

public class fS extends gg {
   private final cv lHFev;
   private final cw JniNV;
   private final cw serPq;
   private final cw VNukw;
   private final cy nVujd;
   private final cy MSZPL;
   private final cy IKiTs;
   private final Comparator<class_9011> oHxpG;
   private static final long IRkCy = gb.aYR(-2839741502377196459L, -7431597977380522631L, MethodHandles.lookup().lookupClass()).a(72607446886649L);
   private static final String[] bgliR;
   private static final String[] wzHAy;
   private static final Map dwVZR = new HashMap(13);
   private static final long[] ZTpYF;
   private static final Integer[] mEaUS;
   private static final Map KvXEV;

   public fS() {
      long var1 = IRkCy ^ 117350320501076L;
      super(gf.aZL(aXo<"w">(10057, 8164752937666524355L ^ var1), false, gh.KfAlY));
      int[] var10004 = new int[aXo<"w">(23720, 8762537226928738053L ^ var1)];
      var10004[0] = aXo<"w">(9006, 1903016068844400798L ^ var1);
      var10004[1] = aXo<"w">(16134, 2116518021662747784L ^ var1);
      var10004[2] = aXo<"w">(2850, 8161668790227278014L ^ var1);
      var10004[3] = aXo<"w">(25933, 3331470398117279467L ^ var1);
      var10004[4] = aXo<"w">(27969, 6070332388555292352L ^ var1);
      var10004[5] = aXo<"w">(1998, 1061025517691966561L ^ var1);
      var10004[aXo<"w">(7783, 8952274558948380156L ^ var1)] = aXo<"w">(14441, 7945317865448352731L ^ var1);
      this.lHFev = new cv(this, mr.clS(var10004));
      this.JniNV = new cw(
            this.lHFev,
            mr.clS(
               new int[]{
                  aXo<"w">(21186, 7270734399023235431L ^ var1),
                  aXo<"w">(24430, 8557213781417020626L ^ var1),
                  aXo<"w">(70, 3360024532050940875L ^ var1),
                  aXo<"w">(30576, 2608685686337823990L ^ var1)
               }
            )
         )
         .Tz();
      cv var10003 = this.lHFev;
      var10004 = new int[aXo<"w">(14656, 8925833720971537150L ^ var1)];
      var10004[0] = aXo<"w">(7394, 2079994755291877190L ^ var1);
      var10004[1] = aXo<"w">(25605, 226486955937855416L ^ var1);
      var10004[2] = aXo<"w">(22870, 2058877745805314773L ^ var1);
      var10004[3] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[4] = aXo<"w">(25728, 7628216746200889143L ^ var1);
      var10004[5] = aXo<"w">(12189, 8063026879378537493L ^ var1);
      var10004[aXo<"w">(5469, 4893650156643780319L ^ var1)] = aXo<"w">(3022, 2394611155129473122L ^ var1);
      this.serPq = new cw(var10003, mr.clS(var10004));
      var10003 = this.lHFev;
      var10004 = new int[aXo<"w">(5469, 4893650156643780319L ^ var1)];
      var10004[0] = aXo<"w">(1388, 5964639568002520770L ^ var1);
      var10004[1] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[2] = aXo<"w">(25605, 226486955937855416L ^ var1);
      var10004[3] = aXo<"w">(24127, 4665827135335878068L ^ var1);
      var10004[4] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[5] = aXo<"w">(25605, 226486955937855416L ^ var1);
      this.VNukw = new cw(var10003, mr.clS(var10004));
      this.nVujd = new cy(
            this,
            mr.clS(
               new int[]{
                  aXo<"w">(21901, 5545475955155355190L ^ var1),
                  aXo<"w">(17772, 1350150235599034073L ^ var1),
                  aXo<"w">(30579, 1356149204758619374L ^ var1),
                  aXo<"w">(30576, 2608685686337823990L ^ var1)
               }
            )
         )
         .Un(aXo<"w">(25903, 8519681813700474503L ^ var1))
         .Up(aXl<"x">(18335, 2375384097787526526L ^ var1));
      var10004 = new int[aXo<"w">(28920, 3804073075722675064L ^ var1)];
      var10004[0] = aXo<"w">(9485, 4797272682154309266L ^ var1);
      var10004[1] = aXo<"w">(25605, 226486955937855416L ^ var1);
      var10004[2] = aXo<"w">(918, 3224614367952900114L ^ var1);
      var10004[3] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[4] = aXo<"w">(3621, 7983850443036630402L ^ var1);
      var10004[5] = aXo<"w">(11648, 7617442102537895481L ^ var1);
      var10004[aXo<"w">(5469, 4893650156643780319L ^ var1)] = aXo<"w">(30166, 802756284762416721L ^ var1);
      var10004[aXo<"w">(14656, 8925833720971537150L ^ var1)] = aXo<"w">(13636, 6229960008222910191L ^ var1);
      var10004[aXo<"w">(18205, 8422367595232220305L ^ var1)] = aXo<"w">(21901, 5545475955155355190L ^ var1);
      var10004[aXo<"w">(24959, 6350142213237600960L ^ var1)] = aXo<"w">(17772, 1350150235599034073L ^ var1);
      var10004[aXo<"w">(32422, 4811582418649050380L ^ var1)] = aXo<"w">(30579, 1356149204758619374L ^ var1);
      var10004[aXo<"w">(32677, 7592380270039166013L ^ var1)] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      this.MSZPL = new cy(this, mr.clS(var10004)).Un(aXo<"w">(25887, 106768903890433672L ^ var1)).Up(aXl<"x">(14060, 1040203826045013006L ^ var1));
      var10004 = new int[aXo<"w">(3834, 5082723940666219854L ^ var1)];
      var10004[0] = aXo<"w">(17937, 9069442506670822808L ^ var1);
      var10004[1] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[2] = aXo<"w">(25605, 226486955937855416L ^ var1);
      var10004[3] = aXo<"w">(32018, 2377671144212754056L ^ var1);
      var10004[4] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      var10004[5] = aXo<"w">(25605, 226486955937855416L ^ var1);
      var10004[aXo<"w">(5469, 4893650156643780319L ^ var1)] = aXo<"w">(14227, 5276227057311851570L ^ var1);
      var10004[aXo<"w">(14656, 8925833720971537150L ^ var1)] = aXo<"w">(21901, 5545475955155355190L ^ var1);
      var10004[aXo<"w">(903, 47076776366247988L ^ var1)] = aXo<"w">(17772, 1350150235599034073L ^ var1);
      var10004[aXo<"w">(27095, 2836187028006402633L ^ var1)] = aXo<"w">(30579, 1356149204758619374L ^ var1);
      var10004[aXo<"w">(8424, 2549741524180153191L ^ var1)] = aXo<"w">(30576, 2608685686337823990L ^ var1);
      this.IKiTs = new cy(this, mr.clS(var10004)).Un(aXo<"w">(25887, 106768903890433672L ^ var1)).Up(aXl<"x">(11720, 4515444845326325547L ^ var1));
      this.oHxpG = Comparator.comparing(class_9011::comp_2128).reversed().thenComparing(class_9011::comp_2127, String.CASE_INSENSITIVE_ORDER);
      this.nVujd.Vf(this.JniNV::TC);
      this.MSZPL.Vf(this.serPq::TC);
      this.IKiTs.Vf(this.VNukw::TC);
   }

   static {
      long var11 = IRkCy ^ 64542017902453L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "é×Hv\u008b\u008fë\u0017\u00ad,½W\u0088È03ç\bsmø~c\u009c;ÓH\u008fÈ\u001dÚ\u0093íJr\u001c}cco \u0098êOÛò»Ã\u0090@\u0019þA\u0098s_¹)\u0082·\u00ad\u0016ø¹¼G\f\u000b\u007fB\u00ad\u0000\u001c";
      int var19 = "é×Hv\u008b\u008fë\u0017\u00ad,½W\u0088È03ç\bsmø~c\u009c;ÓH\u008fÈ\u001dÚ\u0093íJr\u001c}cco \u0098êOÛò»Ã\u0090@\u0019þA\u0098s_¹)\u0082·\u00ad\u0016ø¹¼G\f\u000b\u007fB\u00ad\u0000\u001c"
         .length();
      char var16 = '(';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = aXi(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     bgliR = var20;
                     wzHAy = new String[4];
                     KvXEV = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[57];
                     int var3 = 0;
                     String var4 = "ê6q\u008d`|F\u008cC§Ü\u0018\u008fÉ: øZ¸L-\" o¤\u008f\rõú±:M\u0007\u008eíW§k½Vñ\u008esv\u0018A\f\u0092\u0014ÑýrÊ\u008d\u0002üÌ$±ÉNX\u0006\u0010ÞOª¦Î\u0081\"+Ëí1¥?\u0002S\u0002\u008f//\u008b¬ÿ\u008f\u008b\u001a\u008dÉ\u0003}\u001d ©oÇ\u000e®\u008cwUøª\u0012\u001c¹©\u0004)¹\u008aw±Ë\u008a:ë\u009f\u0097VªºÜW\u000b\u0001n<±Ò\u0082W\u0094êe\f\u0010\u0096\u001f¢¯FZmW\u0090v4÷u8x²¸é·\u001bÈj\u0007ÒY!\u0098ÌnzØ¨æ\u008fÏV1pöRuiWjôFøÞI×\u0006ÛrVTÌ,\u0011;°\u0006\u0087¸[&sj^¤ªº|Hß/ú°\u0002³q8\u008e¼\u0086\u009a\u0087gÛëÔÓb\t9<Å_ç\u0095\u008eo³\u0094¸Å\u0019+Ñ+8ÿRðd\u008bm\u0093\u008e\u001b_\ra(\tZ/e\u001fðVäÛ\u0080\u000b\u0007ÖF\\\u0005¹Þ[NeZÞ!&ÈÂD2tf³ÂóÅ§+Üü¤!ÞúÂ¡ï(,ZI\u009aNíÈF«\u008bª\u001fvâ\u009aú®mã\u0087¬·oz\u0096Àç\u0092=¼R\u001ervùÙõ\u008bÛ\u0084ãl·\u0097\u008a§z¬¶ÜP\u0081\b±vé±ew_%3\u007f\u001aÁ|\u001f&²ÍZÛ\u008d×Oø·þH\u0089°\u0002¯\u0082Úó\u0099\u0083\thÚ¯Çl\u008cÏmT\u009e\u0086lû§qâP\u009e\u0010!Mí©D\u0018Eöß«XR\u009d\u0093\u0086{\u001f$Hû¸br";
                     int var5 = "ê6q\u008d`|F\u008cC§Ü\u0018\u008fÉ: øZ¸L-\" o¤\u008f\rõú±:M\u0007\u008eíW§k½Vñ\u008esv\u0018A\f\u0092\u0014ÑýrÊ\u008d\u0002üÌ$±ÉNX\u0006\u0010ÞOª¦Î\u0081\"+Ëí1¥?\u0002S\u0002\u008f//\u008b¬ÿ\u008f\u008b\u001a\u008dÉ\u0003}\u001d ©oÇ\u000e®\u008cwUøª\u0012\u001c¹©\u0004)¹\u008aw±Ë\u008a:ë\u009f\u0097VªºÜW\u000b\u0001n<±Ò\u0082W\u0094êe\f\u0010\u0096\u001f¢¯FZmW\u0090v4÷u8x²¸é·\u001bÈj\u0007ÒY!\u0098ÌnzØ¨æ\u008fÏV1pöRuiWjôFøÞI×\u0006ÛrVTÌ,\u0011;°\u0006\u0087¸[&sj^¤ªº|Hß/ú°\u0002³q8\u008e¼\u0086\u009a\u0087gÛëÔÓb\t9<Å_ç\u0095\u008eo³\u0094¸Å\u0019+Ñ+8ÿRðd\u008bm\u0093\u008e\u001b_\ra(\tZ/e\u001fðVäÛ\u0080\u000b\u0007ÖF\\\u0005¹Þ[NeZÞ!&ÈÂD2tf³ÂóÅ§+Üü¤!ÞúÂ¡ï(,ZI\u009aNíÈF«\u008bª\u001fvâ\u009aú®mã\u0087¬·oz\u0096Àç\u0092=¼R\u001ervùÙõ\u008bÛ\u0084ãl·\u0097\u008a§z¬¶ÜP\u0081\b±vé±ew_%3\u007f\u001aÁ|\u001f&²ÍZÛ\u008d×Oø·þH\u0089°\u0002¯\u0082Úó\u0099\u0083\thÚ¯Çl\u008cÏmT\u009e\u0086lû§qâP\u009e\u0010!Mí©D\u0018Eöß«XR\u009d\u0093\u0086{\u001f$Hû¸br"
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
                                    ZTpYF = var6;
                                    mEaUS = new Integer[57];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "£,\u0097Û.\u0094)ªÆz:³\u0084õ¥\u009a";
                                 var5 = "£,\u0097Û.\u0094)ªÆz:³\u0084õ¥\u009a".length();
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

                  var17 = "\u0095\u0080\u0080È\u0095)\u008fp#u}¢²\u0091ñ5\u0018kð\u009cx\u0095×Ï÷¦\\\u0080Ä3«+DSb\u008fÏé\f\u00ad6";
                  var19 = "\u0095\u0080\u0080È\u0095)\u008fp#u}¢²\u0091ñ5\u0018kð\u009cx\u0095×Ï÷¦\\\u0080Ä3«+DSb\u008fÏé\f\u00ad6".length();
                  var16 = 16;
                  var24 = -1;
            }

            var25 = var17.substring(++var24, var24 + var16);
            var10001 = 0;
         }
      }
   }

   public class_2561 aWR(class_2561 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fS.IRkCy J
      // 03: ldc2_w 137933474804838
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fX.aYu ()[I
      // 0b: astore 4
      // 0d: aload 1
      // 0e: aload 4
      // 10: ifnull 48
      // 13: ifnull 47
      // 16: goto 1d
      // 19: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 0
      // 1e: getfield sixtwo/fS.RliRe Z
      // 21: aload 4
      // 23: ifnull 44
      // 26: goto 2d
      // 29: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: ifeq 47
      // 30: goto 37
      // 33: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 3a: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 3d: goto 44
      // 40: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: ifeq 49
      // 47: aload 1
      // 48: areturn
      // 49: invokestatic net/minecraft/class_2561.method_43473 ()Lnet/minecraft/class_5250;
      // 4c: astore 5
      // 4e: aload 1
      // 4f: aload 0
      // 50: aload 5
      // 52: invokedynamic accept (Lsixtwo/fS;Lnet/minecraft/class_5250;)Lnet/minecraft/class_5348$class_5246; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, sixtwo/fS.aXg (Lnet/minecraft/class_5250;Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional; ]
      // 57: getstatic net/minecraft/class_2583.field_24360 Lnet/minecraft/class_2583;
      // 5a: invokeinterface net/minecraft/class_2561.method_27658 (Lnet/minecraft/class_5348$class_5246;Lnet/minecraft/class_2583;)Ljava/util/Optional; 3
      // 5f: pop
      // 60: aload 5
      // 62: areturn
   }

   public class_2561 aWS(class_2561 param1, class_327 param2, MutableInt param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fS.IRkCy J
      // 003: ldc2_w 70130708169503
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/fX.aYu ()[I
      // 00c: astore 6
      // 00e: aload 0
      // 00f: getfield sixtwo/fS.RliRe Z
      // 012: aload 6
      // 014: ifnull 02f
      // 017: ifeq 04e
      // 01a: goto 021
      // 01d: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 020: athrow
      // 021: aload 0
      // 022: getfield sixtwo/fS.VNukw Lsixtwo/cw;
      // 025: invokevirtual sixtwo/cw.TC ()Z
      // 028: goto 02f
      // 02b: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02e: athrow
      // 02f: aload 6
      // 031: ifnull 04b
      // 034: ifeq 04e
      // 037: goto 03e
      // 03a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 041: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 044: goto 04b
      // 047: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: ifeq 054
      // 04e: aload 1
      // 04f: areturn
      // 050: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 053: athrow
      // 054: aload 1
      // 055: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 05a: astore 7
      // 05c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 05f: invokevirtual net/minecraft/class_310.method_1558 ()Lnet/minecraft/class_642;
      // 062: astore 8
      // 064: aload 0
      // 065: getfield sixtwo/fS.IKiTs Lsixtwo/cy;
      // 068: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 06b: astore 9
      // 06d: aload 9
      // 06f: invokestatic sixtwo/ru.djF (Ljava/lang/String;)Ljava/lang/String;
      // 072: astore 10
      // 074: aload 8
      // 076: aload 6
      // 078: ifnull 087
      // 07b: ifnull 090
      // 07e: goto 085
      // 081: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: aload 8
      // 087: getfield net/minecraft/class_642.field_3761 Ljava/lang/String;
      // 08a: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 08d: goto 093
      // 090: ldc_w ""
      // 093: astore 11
      // 095: aload 11
      // 097: aload 6
      // 099: ifnull 0e6
      // 09c: invokevirtual java/lang/String.isEmpty ()Z
      // 09f: ifne 0dc
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: aload 11
      // 0ab: sipush 25326
      // 0ae: ldc2_w 497836538724696838
      // 0b1: lload 4
      // 0b3: lxor
      // 0b4: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b9: invokevirtual java/lang/String.indexOf (I)I
      // 0bc: istore 13
      // 0be: iload 13
      // 0c0: bipush -1
      // 0c1: if_icmple 0d3
      // 0c4: aload 11
      // 0c6: bipush 0
      // 0c7: iload 13
      // 0c9: invokevirtual java/lang/String.substring (II)Ljava/lang/String;
      // 0cc: goto 0d5
      // 0cf: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d2: athrow
      // 0d3: aload 11
      // 0d5: astore 12
      // 0d7: aload 6
      // 0d9: ifnonnull 0e8
      // 0dc: ldc_w ""
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: astore 12
      // 0e8: aload 7
      // 0ea: invokestatic sixtwo/ru.djG (Ljava/lang/String;)Ljava/lang/String;
      // 0ed: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 0f0: astore 13
      // 0f2: aload 11
      // 0f4: invokevirtual java/lang/String.isEmpty ()Z
      // 0f7: aload 6
      // 0f9: ifnull 114
      // 0fc: ifne 127
      // 0ff: goto 106
      // 102: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 105: athrow
      // 106: aload 13
      // 108: aload 11
      // 10a: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 10d: goto 114
      // 110: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 113: athrow
      // 114: aload 6
      // 116: ifnull 124
      // 119: ifeq 127
      // 11c: goto 123
      // 11f: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 122: athrow
      // 123: bipush 1
      // 124: goto 128
      // 127: bipush 0
      // 128: istore 14
      // 12a: aload 12
      // 12c: invokevirtual java/lang/String.isEmpty ()Z
      // 12f: aload 6
      // 131: ifnull 14c
      // 134: ifne 15f
      // 137: goto 13e
      // 13a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13d: athrow
      // 13e: aload 13
      // 140: aload 12
      // 142: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 145: goto 14c
      // 148: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14b: athrow
      // 14c: aload 6
      // 14e: ifnull 15c
      // 151: ifeq 15f
      // 154: goto 15b
      // 157: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15a: athrow
      // 15b: bipush 1
      // 15c: goto 160
      // 15f: bipush 0
      // 160: istore 15
      // 162: getstatic sixtwo/jd.dCIsP Ljava/util/regex/Pattern;
      // 165: aload 7
      // 167: invokevirtual java/util/regex/Pattern.matcher (Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;
      // 16a: invokevirtual java/util/regex/Matcher.find ()Z
      // 16d: aload 6
      // 16f: ifnull 1a1
      // 172: ifne 1a0
      // 175: goto 17c
      // 178: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17b: athrow
      // 17c: getstatic sixtwo/jd.dCIsP Ljava/util/regex/Pattern;
      // 17f: aload 7
      // 181: invokestatic sixtwo/ru.djG (Ljava/lang/String;)Ljava/lang/String;
      // 184: invokevirtual java/util/regex/Pattern.matcher (Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;
      // 187: invokevirtual java/util/regex/Matcher.find ()Z
      // 18a: aload 6
      // 18c: ifnull 1a1
      // 18f: goto 196
      // 192: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 195: athrow
      // 196: ifeq 1a4
      // 199: goto 1a0
      // 19c: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19f: athrow
      // 1a0: bipush 1
      // 1a1: goto 1a5
      // 1a4: bipush 0
      // 1a5: istore 16
      // 1a7: iload 14
      // 1a9: aload 6
      // 1ab: ifnull 1f3
      // 1ae: ifne 1ee
      // 1b1: goto 1b8
      // 1b4: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b7: athrow
      // 1b8: iload 15
      // 1ba: aload 6
      // 1bc: ifnull 1f3
      // 1bf: goto 1c6
      // 1c2: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c5: athrow
      // 1c6: ifne 1ee
      // 1c9: goto 1d0
      // 1cc: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cf: athrow
      // 1d0: iload 16
      // 1d2: aload 6
      // 1d4: ifnull 1f3
      // 1d7: goto 1de
      // 1da: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1dd: athrow
      // 1de: ifne 1ee
      // 1e1: goto 1e8
      // 1e4: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e7: athrow
      // 1e8: aload 1
      // 1e9: areturn
      // 1ea: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ed: athrow
      // 1ee: aload 2
      // 1ef: aload 1
      // 1f0: invokevirtual net/minecraft/class_327.method_27525 (Lnet/minecraft/class_5348;)I
      // 1f3: istore 17
      // 1f5: aload 3
      // 1f6: invokevirtual org/apache/commons/lang3/mutable/MutableInt.intValue ()I
      // 1f9: istore 18
      // 1fb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1fe: getfield net/minecraft/class_310.field_1705 Lnet/minecraft/class_329;
      // 201: checkcast sixtwo/mO
      // 204: invokeinterface sixtwo/mO.getSidebarX ()I 1
      // 209: istore 19
      // 20b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 20e: getfield net/minecraft/class_310.field_1705 Lnet/minecraft/class_329;
      // 211: checkcast sixtwo/mO
      // 214: invokeinterface sixtwo/mO.getSidebarWidth ()I 1
      // 219: istore 20
      // 21b: iload 19
      // 21d: i2f
      // 21e: iload 20
      // 220: iload 17
      // 222: isub
      // 223: i2f
      // 224: fconst_2
      // 225: fdiv
      // 226: fadd
      // 227: fstore 21
      // 229: iload 18
      // 22b: i2f
      // 22c: fload 21
      // 22e: fsub
      // 22f: invokestatic java/lang/Math.abs (F)F
      // 232: ldc_w 1.5
      // 235: fcmpg
      // 236: aload 6
      // 238: ifnull 246
      // 23b: ifgt 249
      // 23e: goto 245
      // 241: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 244: athrow
      // 245: bipush 1
      // 246: goto 24a
      // 249: bipush 0
      // 24a: istore 22
      // 24c: new java/lang/StringBuilder
      // 24f: dup
      // 250: invokespecial java/lang/StringBuilder.<init> ()V
      // 253: astore 23
      // 255: iload 16
      // 257: aload 6
      // 259: ifnull 295
      // 25c: ifeq 290
      // 25f: goto 266
      // 262: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 265: athrow
      // 266: aload 23
      // 268: sipush 19383
      // 26b: ldc2_w 277817632028197660
      // 26e: lload 4
      // 270: lxor
      // 271: invokedynamic x (IJ)Ljava/lang/String; bsm=sixtwo/fS.aXl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 276: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 279: getstatic sixtwo/jd.dCIsP Ljava/util/regex/Pattern;
      // 27c: invokevirtual java/util/regex/Pattern.pattern ()Ljava/lang/String;
      // 27f: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 282: ldc_w ")"
      // 285: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 288: pop
      // 289: goto 290
      // 28c: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28f: athrow
      // 290: aload 11
      // 292: invokevirtual java/lang/String.isEmpty ()Z
      // 295: aload 6
      // 297: ifnull 2eb
      // 29a: ifne 2da
      // 29d: goto 2a4
      // 2a0: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a3: athrow
      // 2a4: aload 23
      // 2a6: aload 6
      // 2a8: ifnull 2d9
      // 2ab: goto 2b2
      // 2ae: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b1: athrow
      // 2b2: invokevirtual java/lang/StringBuilder.isEmpty ()Z
      // 2b5: ifne 2cf
      // 2b8: goto 2bf
      // 2bb: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2be: athrow
      // 2bf: aload 23
      // 2c1: ldc_w "|"
      // 2c4: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 2c7: pop
      // 2c8: goto 2cf
      // 2cb: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ce: athrow
      // 2cf: aload 23
      // 2d1: aload 11
      // 2d3: invokestatic java/util/regex/Pattern.quote (Ljava/lang/String;)Ljava/lang/String;
      // 2d6: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 2d9: pop
      // 2da: aload 12
      // 2dc: aload 6
      // 2de: ifnull 346
      // 2e1: invokevirtual java/lang/String.isEmpty ()Z
      // 2e4: goto 2eb
      // 2e7: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2ea: athrow
      // 2eb: ifne 341
      // 2ee: aload 12
      // 2f0: aload 6
      // 2f2: ifnull 346
      // 2f5: goto 2fc
      // 2f8: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2fb: athrow
      // 2fc: aload 11
      // 2fe: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 301: ifne 341
      // 304: goto 30b
      // 307: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30a: athrow
      // 30b: aload 23
      // 30d: aload 6
      // 30f: ifnull 340
      // 312: goto 319
      // 315: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 318: athrow
      // 319: invokevirtual java/lang/StringBuilder.isEmpty ()Z
      // 31c: ifne 336
      // 31f: goto 326
      // 322: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 325: athrow
      // 326: aload 23
      // 328: ldc_w "|"
      // 32b: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 32e: pop
      // 32f: goto 336
      // 332: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 335: athrow
      // 336: aload 23
      // 338: aload 12
      // 33a: invokestatic java/util/regex/Pattern.quote (Ljava/lang/String;)Ljava/lang/String;
      // 33d: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 340: pop
      // 341: aload 23
      // 343: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 346: bipush 2
      // 347: invokestatic java/util/regex/Pattern.compile (Ljava/lang/String;I)Ljava/util/regex/Pattern;
      // 34a: astore 24
      // 34c: new java/util/ArrayList
      // 34f: dup
      // 350: invokespecial java/util/ArrayList.<init> ()V
      // 353: astore 25
      // 355: new java/lang/StringBuilder
      // 358: dup
      // 359: invokespecial java/lang/StringBuilder.<init> ()V
      // 35c: astore 26
      // 35e: new java/lang/StringBuilder
      // 361: dup
      // 362: invokespecial java/lang/StringBuilder.<init> ()V
      // 365: astore 27
      // 367: invokestatic net/minecraft/class_2561.method_43473 ()Lnet/minecraft/class_5250;
      // 36a: astore 28
      // 36c: aload 25
      // 36e: aload 26
      // 370: aload 27
      // 372: invokedynamic accept (Ljava/util/List;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;)Ljava/util/function/BiConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;Ljava/lang/Object;)V, sixtwo/fS.aXf (Ljava/util/List;Ljava/lang/StringBuilder;Ljava/lang/StringBuilder;Lnet/minecraft/class_2583;Ljava/lang/String;)V, (Lnet/minecraft/class_2583;Ljava/lang/String;)V ]
      // 377: astore 29
      // 379: aload 25
      // 37b: aload 28
      // 37d: invokedynamic accept (Ljava/util/List;Lnet/minecraft/class_5250;)Ljava/util/function/IntConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (I)V, sixtwo/fS.aXe (Ljava/util/List;Lnet/minecraft/class_5250;I)V, (I)V ]
      // 382: astore 30
      // 384: aload 25
      // 386: invokedynamic accept (Ljava/util/List;)Ljava/util/function/IntConsumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (I)V, sixtwo/fS.aXd (Ljava/util/List;I)V, (I)V ]
      // 38b: astore 31
      // 38d: aload 25
      // 38f: invokedynamic apply (Ljava/util/List;)Ljava/util/function/IntFunction; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (I)Ljava/lang/Object;, sixtwo/fS.aXc (Ljava/util/List;I)Lnet/minecraft/class_2583;, (I)Lnet/minecraft/class_2583; ]
      // 394: astore 32
      // 396: aload 1
      // 397: aload 29
      // 399: invokedynamic accept (Ljava/util/function/BiConsumer;)Lnet/minecraft/class_5348$class_5246; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, sixtwo/fS.aXb (Ljava/util/function/BiConsumer;Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional; ]
      // 39e: getstatic net/minecraft/class_2583.field_24360 Lnet/minecraft/class_2583;
      // 3a1: invokeinterface net/minecraft/class_2561.method_27658 (Lnet/minecraft/class_5348$class_5246;Lnet/minecraft/class_2583;)Ljava/util/Optional; 3
      // 3a6: pop
      // 3a7: aload 24
      // 3a9: aload 27
      // 3ab: invokevirtual java/util/regex/Pattern.matcher (Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;
      // 3ae: astore 33
      // 3b0: aload 33
      // 3b2: invokevirtual java/util/regex/Matcher.find ()Z
      // 3b5: ifne 3bb
      // 3b8: goto 6a2
      // 3bb: aload 33
      // 3bd: invokevirtual java/util/regex/Matcher.start ()I
      // 3c0: istore 34
      // 3c2: aload 33
      // 3c4: invokevirtual java/util/regex/Matcher.end ()I
      // 3c7: istore 35
      // 3c9: iload 34
      // 3cb: ifle 44d
      // 3ce: aload 27
      // 3d0: iload 34
      // 3d2: bipush 1
      // 3d3: isub
      // 3d4: invokevirtual java/lang/StringBuilder.charAt (I)C
      // 3d7: istore 36
      // 3d9: aload 6
      // 3db: ifnull 448
      // 3de: iload 36
      // 3e0: invokestatic java/lang/Character.isLetterOrDigit (C)Z
      // 3e3: aload 6
      // 3e5: ifnull 44f
      // 3e8: goto 3ef
      // 3eb: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3ee: athrow
      // 3ef: ifne 445
      // 3f2: goto 3f9
      // 3f5: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f8: athrow
      // 3f9: iload 36
      // 3fb: sipush 27750
      // 3fe: ldc2_w 639988118482505111
      // 401: lload 4
      // 403: lxor
      // 404: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 409: aload 6
      // 40b: ifnull 436
      // 40e: goto 415
      // 411: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 414: athrow
      // 415: if_icmpeq 445
      // 418: goto 41f
      // 41b: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41e: athrow
      // 41f: iload 36
      // 421: sipush 14958
      // 424: ldc2_w 4514442373672246176
      // 427: lload 4
      // 429: lxor
      // 42a: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 42f: goto 436
      // 432: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 435: athrow
      // 436: aload 6
      // 438: ifnull 454
      // 43b: if_icmpne 44d
      // 43e: goto 445
      // 441: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 444: athrow
      // 445: iinc 34 -1
      // 448: aload 6
      // 44a: ifnonnull 3c9
      // 44d: iload 35
      // 44f: aload 27
      // 451: invokevirtual java/lang/StringBuilder.length ()I
      // 454: if_icmpge 58b
      // 457: aload 27
      // 459: iload 35
      // 45b: invokevirtual java/lang/StringBuilder.charAt (I)C
      // 45e: istore 36
      // 460: aload 6
      // 462: ifnull 586
      // 465: iload 36
      // 467: sipush 26313
      // 46a: ldc2_w 601880159131649824
      // 46d: lload 4
      // 46f: lxor
      // 470: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 475: aload 6
      // 477: ifnull 58f
      // 47a: goto 481
      // 47d: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 480: athrow
      // 481: if_icmpeq 583
      // 484: goto 48b
      // 487: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48a: athrow
      // 48b: iload 36
      // 48d: sipush 7479
      // 490: ldc2_w 3237227168982219978
      // 493: lload 4
      // 495: lxor
      // 496: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 49b: aload 6
      // 49d: ifnull 4c8
      // 4a0: goto 4a7
      // 4a3: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a6: athrow
      // 4a7: if_icmpeq 583
      // 4aa: goto 4b1
      // 4ad: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b0: athrow
      // 4b1: iload 36
      // 4b3: sipush 23189
      // 4b6: ldc2_w 2632304829994662758
      // 4b9: lload 4
      // 4bb: lxor
      // 4bc: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4c1: goto 4c8
      // 4c4: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c7: athrow
      // 4c8: aload 6
      // 4ca: ifnull 4fa
      // 4cd: if_icmpeq 583
      // 4d0: goto 4d7
      // 4d3: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4d6: athrow
      // 4d7: iload 36
      // 4d9: aload 6
      // 4db: ifnull 509
      // 4de: goto 4e5
      // 4e1: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e4: athrow
      // 4e5: sipush 26144
      // 4e8: ldc2_w 440376041692022746
      // 4eb: lload 4
      // 4ed: lxor
      // 4ee: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4f3: goto 4fa
      // 4f6: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f9: athrow
      // 4fa: if_icmpeq 583
      // 4fd: iload 36
      // 4ff: invokestatic java/lang/Character.isLetterOrDigit (C)Z
      // 502: goto 509
      // 505: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 508: athrow
      // 509: aload 6
      // 50b: ifnull 51a
      // 50e: ifne 583
      // 511: goto 518
      // 514: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 517: athrow
      // 518: iload 36
      // 51a: sipush 2165
      // 51d: ldc2_w 234041812042262951
      // 520: lload 4
      // 522: lxor
      // 523: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 528: aload 6
      // 52a: ifnull 54e
      // 52d: if_icmpeq 583
      // 530: goto 537
      // 533: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 536: athrow
      // 537: iload 36
      // 539: sipush 31363
      // 53c: ldc2_w 7197588530318793569
      // 53f: lload 4
      // 541: lxor
      // 542: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 547: goto 54e
      // 54a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54d: athrow
      // 54e: aload 6
      // 550: ifnull 574
      // 553: if_icmpeq 583
      // 556: goto 55d
      // 559: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55c: athrow
      // 55d: iload 36
      // 55f: sipush 12699
      // 562: ldc2_w 7255333634817560688
      // 565: lload 4
      // 567: lxor
      // 568: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 56d: goto 574
      // 570: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 573: athrow
      // 574: aload 6
      // 576: ifnull 58f
      // 579: if_icmpne 58b
      // 57c: goto 583
      // 57f: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 582: athrow
      // 583: iinc 35 1
      // 586: aload 6
      // 588: ifnonnull 44d
      // 58b: iload 35
      // 58d: iload 34
      // 58f: aload 6
      // 591: ifnull 5d2
      // 594: if_icmple 5ce
      // 597: goto 59e
      // 59a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59d: athrow
      // 59e: aload 27
      // 5a0: iload 35
      // 5a2: bipush 1
      // 5a3: isub
      // 5a4: invokevirtual java/lang/StringBuilder.charAt (I)C
      // 5a7: sipush 12699
      // 5aa: ldc2_w 7255333634817560688
      // 5ad: lload 4
      // 5af: lxor
      // 5b0: invokedynamic w (IJ)I bsm=sixtwo/fS.aXo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5b5: aload 6
      // 5b7: ifnull 5d2
      // 5ba: goto 5c1
      // 5bd: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c0: athrow
      // 5c1: if_icmpne 5ce
      // 5c4: goto 5cb
      // 5c7: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5ca: athrow
      // 5cb: iinc 35 -1
      // 5ce: iload 35
      // 5d0: iload 34
      // 5d2: isub
      // 5d3: istore 36
      // 5d5: aload 30
      // 5d7: iload 34
      // 5d9: invokeinterface java/util/function/IntConsumer.accept (I)V 2
      // 5de: aload 26
      // 5e0: iload 34
      // 5e2: iload 35
      // 5e4: invokevirtual java/lang/StringBuilder.substring (II)Ljava/lang/String;
      // 5e7: astore 37
      // 5e9: aload 27
      // 5eb: iload 34
      // 5ed: iload 35
      // 5ef: invokevirtual java/lang/StringBuilder.substring (II)Ljava/lang/String;
      // 5f2: astore 38
      // 5f4: aload 37
      // 5f6: aload 38
      // 5f8: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 5fb: aload 6
      // 5fd: ifnull 60b
      // 600: ifne 60e
      // 603: goto 60a
      // 606: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 609: athrow
      // 60a: bipush 1
      // 60b: goto 60f
      // 60e: bipush 0
      // 60f: istore 39
      // 611: iload 39
      // 613: ifeq 61f
      // 616: aload 10
      // 618: goto 621
      // 61b: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61e: athrow
      // 61f: aload 9
      // 621: astore 40
      // 623: bipush 0
      // 624: istore 41
      // 626: iload 41
      // 628: aload 40
      // 62a: invokevirtual java/lang/String.length ()I
      // 62d: if_icmpge 682
      // 630: iload 41
      // 632: i2d
      // 633: aload 40
      // 635: invokevirtual java/lang/String.length ()I
      // 638: i2d
      // 639: ddiv
      // 63a: dstore 42
      // 63c: dload 42
      // 63e: iload 36
      // 640: i2d
      // 641: dmul
      // 642: d2i
      // 643: iload 36
      // 645: bipush 1
      // 646: isub
      // 647: invokestatic java/lang/Math.min (II)I
      // 64a: istore 44
      // 64c: aload 28
      // 64e: aload 40
      // 650: iload 41
      // 652: invokevirtual java/lang/String.charAt (I)C
      // 655: invokestatic java/lang/String.valueOf (C)Ljava/lang/String;
      // 658: invokestatic net/minecraft/class_2561.method_43470 (Ljava/lang/String;)Lnet/minecraft/class_5250;
      // 65b: aload 32
      // 65d: iload 44
      // 65f: invokeinterface java/util/function/IntFunction.apply (I)Ljava/lang/Object; 2
      // 664: checkcast net/minecraft/class_2583
      // 667: invokevirtual net/minecraft/class_5250.method_10862 (Lnet/minecraft/class_2583;)Lnet/minecraft/class_5250;
      // 66a: invokevirtual net/minecraft/class_5250.method_10852 (Lnet/minecraft/class_2561;)Lnet/minecraft/class_5250;
      // 66d: pop
      // 66e: iinc 41 1
      // 671: aload 6
      // 673: ifnull 69d
      // 676: aload 6
      // 678: ifnonnull 626
      // 67b: goto 682
      // 67e: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 681: athrow
      // 682: aload 31
      // 684: iload 36
      // 686: invokeinterface java/util/function/IntConsumer.accept (I)V 2
      // 68b: aload 26
      // 68d: bipush 0
      // 68e: iload 35
      // 690: invokevirtual java/lang/StringBuilder.delete (II)Ljava/lang/StringBuilder;
      // 693: pop
      // 694: aload 27
      // 696: bipush 0
      // 697: iload 35
      // 699: invokevirtual java/lang/StringBuilder.delete (II)Ljava/lang/StringBuilder;
      // 69c: pop
      // 69d: aload 6
      // 69f: ifnonnull 3a7
      // 6a2: aload 30
      // 6a4: aload 26
      // 6a6: invokevirtual java/lang/StringBuilder.length ()I
      // 6a9: invokeinterface java/util/function/IntConsumer.accept (I)V 2
      // 6ae: iload 22
      // 6b0: aload 6
      // 6b2: ifnull 6cc
      // 6b5: ifeq 6e3
      // 6b8: goto 6bf
      // 6bb: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6be: athrow
      // 6bf: aload 2
      // 6c0: aload 28
      // 6c2: invokevirtual net/minecraft/class_327.method_27525 (Lnet/minecraft/class_5348;)I
      // 6c5: goto 6cc
      // 6c8: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6cb: athrow
      // 6cc: istore 33
      // 6ce: iload 19
      // 6d0: i2f
      // 6d1: iload 20
      // 6d3: iload 33
      // 6d5: isub
      // 6d6: i2f
      // 6d7: fconst_2
      // 6d8: fdiv
      // 6d9: fadd
      // 6da: fstore 34
      // 6dc: aload 3
      // 6dd: fload 34
      // 6df: f2i
      // 6e0: invokevirtual org/apache/commons/lang3/mutable/MutableInt.setValue (I)V
      // 6e3: aload 28
      // 6e5: areturn
   }

   public String aWQ(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/fS.IRkCy J
      // 003: ldc2_w 49508803515360
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/fX.aYu ()[I
      // 00b: astore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/fS.RliRe Z
      // 011: aload 4
      // 013: ifnull 02e
      // 016: ifeq 059
      // 019: goto 020
      // 01c: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: aload 0
      // 021: getfield sixtwo/fS.serPq Lsixtwo/cw;
      // 024: invokevirtual sixtwo/cw.TC ()Z
      // 027: goto 02e
      // 02a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02d: athrow
      // 02e: aload 4
      // 030: ifnull 04a
      // 033: ifeq 059
      // 036: goto 03d
      // 039: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 040: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 043: goto 04a
      // 046: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 4
      // 04c: ifnull 060
      // 04f: ifeq 05f
      // 052: goto 059
      // 055: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 058: athrow
      // 059: aload 1
      // 05a: areturn
      // 05b: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: bipush 0
      // 060: istore 5
      // 062: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 065: invokevirtual sixtwo/qQ.ddE ()Ljava/util/List;
      // 068: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 06d: astore 6
      // 06f: aload 6
      // 071: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 076: ifeq 0ee
      // 079: aload 6
      // 07b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 080: checkcast sixtwo/mE
      // 083: astore 7
      // 085: aload 4
      // 087: ifnull 0f9
      // 08a: aload 7
      // 08c: aload 4
      // 08e: ifnull 0a4
      // 091: goto 098
      // 094: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 097: athrow
      // 098: ifnull 06f
      // 09b: goto 0a2
      // 09e: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a1: athrow
      // 0a2: aload 7
      // 0a4: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 0a7: aload 4
      // 0a9: ifnull 0c3
      // 0ac: ifnonnull 0c2
      // 0af: goto 0b6
      // 0b2: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b5: athrow
      // 0b6: aload 4
      // 0b8: ifnonnull 06f
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: aload 1
      // 0c3: aload 7
      // 0c5: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 0c8: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 0cb: aload 4
      // 0cd: ifnull 0db
      // 0d0: ifeq 0e2
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: bipush 1
      // 0db: istore 5
      // 0dd: aload 4
      // 0df: ifnonnull 0ee
      // 0e2: aload 4
      // 0e4: ifnonnull 06f
      // 0e7: goto 0ee
      // 0ea: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ed: athrow
      // 0ee: iload 5
      // 0f0: ifne 0f9
      // 0f3: aload 1
      // 0f4: areturn
      // 0f5: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f8: athrow
      // 0f9: aload 0
      // 0fa: invokevirtual sixtwo/fS.aWY ()Lsixtwo/cy;
      // 0fd: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 100: astore 6
      // 102: invokestatic sixtwo/rD.dmc ()Lsixtwo/qQ;
      // 105: invokevirtual sixtwo/qQ.ddE ()Ljava/util/List;
      // 108: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 10d: astore 7
      // 10f: aload 7
      // 111: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 116: ifeq 186
      // 119: aload 7
      // 11b: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 120: checkcast sixtwo/mE
      // 123: astore 8
      // 125: aload 8
      // 127: aload 4
      // 129: ifnull 138
      // 12c: ifnull 10f
      // 12f: goto 136
      // 132: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 135: athrow
      // 136: aload 8
      // 138: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 13b: aload 4
      // 13d: ifnull 157
      // 140: ifnonnull 156
      // 143: goto 14a
      // 146: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 149: athrow
      // 14a: aload 4
      // 14c: ifnonnull 10f
      // 14f: goto 156
      // 152: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 155: athrow
      // 156: aload 1
      // 157: aload 8
      // 159: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 15c: aload 4
      // 15e: ifnull 17b
      // 161: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 164: ifeq 181
      // 167: goto 16e
      // 16a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16d: athrow
      // 16e: aload 1
      // 16f: aload 8
      // 171: invokevirtual sixtwo/mE.cnD ()Ljava/lang/String;
      // 174: goto 17b
      // 177: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17a: athrow
      // 17b: aload 6
      // 17d: invokevirtual java/lang/String.replace (Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;
      // 180: astore 1
      // 181: aload 4
      // 183: ifnonnull 10f
      // 186: aload 1
      // 187: areturn
   }

   public String aWP(String param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/fS.IRkCy J
      // 03: ldc2_w 108340331039301
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/fX.aYu ()[I
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/fS.RliRe Z
      // 11: aload 4
      // 13: ifnull 2e
      // 16: ifeq 4d
      // 19: goto 20
      // 1c: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/fS.JniNV Lsixtwo/cw;
      // 24: invokevirtual sixtwo/cw.TC ()Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: aload 4
      // 30: ifnull 4a
      // 33: ifeq 4d
      // 36: goto 3d
      // 39: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: getstatic sixtwo/qu.cmARD Ljava/util/concurrent/atomic/AtomicBoolean;
      // 40: invokevirtual java/util/concurrent/atomic/AtomicBoolean.get ()Z
      // 43: goto 4a
      // 46: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: ifeq 53
      // 4d: aload 1
      // 4e: areturn
      // 4f: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 56: invokevirtual net/minecraft/class_310.method_1548 ()Lnet/minecraft/class_320;
      // 59: invokevirtual net/minecraft/class_320.method_1676 ()Ljava/lang/String;
      // 5c: astore 5
      // 5e: aload 1
      // 5f: aload 4
      // 61: ifnull 80
      // 64: aload 5
      // 66: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 69: ifne 79
      // 6c: goto 73
      // 6f: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: aload 1
      // 74: areturn
      // 75: invokestatic sixtwo/fS.aXh (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 0
      // 7a: invokevirtual sixtwo/fS.aWX ()Lsixtwo/cy;
      // 7d: invokevirtual sixtwo/cy.Us ()Ljava/lang/String;
      // 80: astore 6
      // 82: aload 1
      // 83: aload 5
      // 85: aload 6
      // 87: invokevirtual java/lang/String.replace (Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;
      // 8a: areturn
   }

   private static CallSite aXl(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aXk".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fS" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cv aWT() {
      return this.lHFev;
   }

   public cw aWU() {
      return this.JniNV;
   }

   public cw aWV() {
      return this.serPq;
   }

   private static String aXi(byte[] var0) {
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

   private static int aXn(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = aXm(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite aXo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("aXn".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/fS" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public cw aWW() {
      return this.VNukw;
   }

   private static String aXj(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 21640;
      if (wzHAy[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])dwVZR.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               dwVZR.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/fS", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = bgliR[var5].getBytes("ISO-8859-1");
         wzHAy[var5] = aXi(((Cipher)var4[0]).doFinal(var9));
      }

      return wzHAy[var5];
   }

   private static MatchException aXh(MatchException var0) {
      return var0;
   }

   public cy aWX() {
      return this.nVujd;
   }

   private static int aXm(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 15813;
      if (mEaUS[var3] == null) {
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
         long var5 = ZTpYF[var3];
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
         Object[] var9 = (Object[])KvXEV.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               KvXEV.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/fS", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         mEaUS[var3] = var15;
      }

      return mEaUS[var3];
   }

   public Comparator<class_9011> aXa() {
      return this.oHxpG;
   }

   private static Object aXk(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = aXj(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public cy aWZ() {
      return this.IKiTs;
   }

   public cy aWY() {
      return this.MSZPL;
   }
}
