package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2561;
import net.minecraft.class_268;

public class ca extends co {
   private final mT kkoKC;
   private Map<String, ca$sl> BmYio;
   private final Set<ca$sl> SZBrr;
   private static boolean tONvf;
   private static final long PHZMk = gb.aYR(-3997543779765898199L, 6302167764031353379L, MethodHandles.lookup().lookupClass()).a(35836888017871L);
   private static final String[] pbFOM;
   private static final String[] qtBBV;
   private static final Map mckkR = new HashMap(13);
   private static final long[] zZGgU;
   private static final Integer[] vMfEW;
   private static final Map WQoAo;
   private static final long pgXwp;

   public ca() {
      long var1 = PHZMk ^ 108248185882894L;
      int[] var10001 = new int[Pg<"e">(16402, 5811050368364875201L ^ var1)];
      var10001[0] = Pg<"e">(14970, 5472187174083524520L ^ var1);
      var10001[1] = Pg<"e">(30956, 6768530711253234995L ^ var1);
      var10001[2] = Pg<"e">(32614, 52204727961891510L ^ var1);
      var10001[3] = Pg<"e">(2733, 9028931442224482167L ^ var1);
      var10001[4] = Pg<"e">(746, 7029668329460158257L ^ var1);
      var10001[5] = Pg<"e">(32183, 6253054027177668710L ^ var1);
      var10001[Pg<"e">(24895, 5635325709592407266L ^ var1)] = Pg<"e">(29561, 7447089655517068975L ^ var1);
      var10001[Pg<"e">(4831, 1975977643990802183L ^ var1)] = Pg<"e">(19010, 3985958966441838468L ^ var1);
      var10001[Pg<"e">(7587, 1675966989588222079L ^ var1)] = Pg<"e">(31858, 945289210374140332L ^ var1);
      var10001[Pg<"e">(14659, 7479467588108055702L ^ var1)] = Pg<"e">(1528, 7698231469007128620L ^ var1);
      super(var10001, lf.MiBKQ);
      this.kkoKC = mT.cpA();
      this.BmYio = new TreeMap<>();
      this.SZBrr = new HashSet<>();
   }

   static {
      OW(false);
      long var16 = PHZMk ^ 33888719175133L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[23];
      int var23 = 0;
      String var22 = "\u001d\u0084'G\u0011åä6¶nã\u0086@\u0007\u0017\u0095x\r?ÞÏ\u007f__ \u007f¶«>ÜAä ®åYE\b\u0084¶a£å\u0004XÇh\u001bIÔ×\f{s\b~'\u0010S¡¦ÿþ\u000e¯Ëë\u0004\u0002\u009faÛ\u0094\u0006\u0010\u0016¬¤\u008b1ßQÚs\u008d\u008c\u009fÚ\u0092©N\u0010µe\u0017äl\u001a\u001e\u0084\u0000À\u000f6ÿ°Î] ä\u0088åc@Ã¨ö\u0014ea1¨_g\u0016Ê\u0098..\u001cÃ\u0015\u000f\n.z\u009f´Ó±N\u0010\u001aÿz\u0005?\u0092\u00adÖ\u0090\u00ad\u0094q\u0091Ã\u000f\u009f\u0010<\u0003\u000bk÷\u0091\u0004\u0088M`Æ¶Ä\u0005¡¯\u0018\u0001â4@¦ÄY\u009f\u009fa\u0013þm+Z?+ØÝ\u00ad®\u0092q»\u0010Òò(Êý|P\u0013pþQëÒî\"?\u0010¿~w\u000f\ró \u0019\u0090÷W³µºÁf\u0010PµÛ\u0096'×çT3¬\u0092(\bC\u0080·\u0010ó\u0000VÜãBE#ci\tGÎ>~m\u0010î´\u0019ý5ÈÙB¿«M\u0005¿\u009bF\u00ad(Ú\u0083w\u0096{G\u0098QàY©Ã¬ë\u0090ÿvma\u0093ó\u0007\u001bÚ\u0090³É\u0016j°ùÞ.Úý\u001fë-r\t\u0010\u0083þ¹õ#ü\u00adP\n\u008bx÷Ô\t(s\u00104q¢Ï\u0095\u008e\u00893ÿy\r\u0081&Fü\u0018 \u0012ëè¿Ö¤\u0015ÌÕUÈSÄÝDG~§ÊÛ¥&E\u0096¶ö/\u0084\u0082÷\u0002s\u0018_¢\u0083UÆ${¯Eì\fí`Çè¢î~\u009a\u0010\"qìß\u0010\u0000KtÓ}ö\u008e9\u0006eè<\u0084=Ò\u008f\u0010\u0002ì\bÂò\u00134\u001e\u0010 í\b\"\u0098Ó\u0082";
      int var24 = "\u001d\u0084'G\u0011åä6¶nã\u0086@\u0007\u0017\u0095x\r?ÞÏ\u007f__ \u007f¶«>ÜAä ®åYE\b\u0084¶a£å\u0004XÇh\u001bIÔ×\f{s\b~'\u0010S¡¦ÿþ\u000e¯Ëë\u0004\u0002\u009faÛ\u0094\u0006\u0010\u0016¬¤\u008b1ßQÚs\u008d\u008c\u009fÚ\u0092©N\u0010µe\u0017äl\u001a\u001e\u0084\u0000À\u000f6ÿ°Î] ä\u0088åc@Ã¨ö\u0014ea1¨_g\u0016Ê\u0098..\u001cÃ\u0015\u000f\n.z\u009f´Ó±N\u0010\u001aÿz\u0005?\u0092\u00adÖ\u0090\u00ad\u0094q\u0091Ã\u000f\u009f\u0010<\u0003\u000bk÷\u0091\u0004\u0088M`Æ¶Ä\u0005¡¯\u0018\u0001â4@¦ÄY\u009f\u009fa\u0013þm+Z?+ØÝ\u00ad®\u0092q»\u0010Òò(Êý|P\u0013pþQëÒî\"?\u0010¿~w\u000f\ró \u0019\u0090÷W³µºÁf\u0010PµÛ\u0096'×çT3¬\u0092(\bC\u0080·\u0010ó\u0000VÜãBE#ci\tGÎ>~m\u0010î´\u0019ý5ÈÙB¿«M\u0005¿\u009bF\u00ad(Ú\u0083w\u0096{G\u0098QàY©Ã¬ë\u0090ÿvma\u0093ó\u0007\u001bÚ\u0090³É\u0016j°ùÞ.Úý\u001fë-r\t\u0010\u0083þ¹õ#ü\u00adP\n\u008bx÷Ô\t(s\u00104q¢Ï\u0095\u008e\u00893ÿy\r\u0081&Fü\u0018 \u0012ëè¿Ö¤\u0015ÌÕUÈSÄÝDG~§ÊÛ¥&E\u0096¶ö/\u0084\u0082÷\u0002s\u0018_¢\u0083UÆ${¯Eì\fí`Çè¢î~\u009a\u0010\"qìß\u0010\u0000KtÓ}ö\u008e9\u0006eè<\u0084=Ò\u008f\u0010\u0002ì\bÂò\u00134\u001e\u0010 í\b\"\u0098Ó\u0082"
         .length();
      char var21 = 24;
      int var29 = -1;

      label64:
      while (true) {
         String var30 = var22.substring(++var29, var29 + var21);
         int var10001 = -1;

         while (true) {
            byte[] var26 = var18.doFinal(var30.getBytes("ISO-8859-1"));
            String var43 = Pa(var26).intern();
            switch (var10001) {
               case 0:
                  var25[var23++] = var43;
                  if ((var29 += var21) >= var24) {
                     pbFOM = var25;
                     qtBBV = new String[23];
                     WQoAo = new HashMap(13);
                     Cipher var5;
                     var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var6 = 1; var6 < 8; var6++) {
                        var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var11 = new long[17];
                     int var8 = 0;
                     String var9 = "\u008cÒí\u00adæAÆ\u008e³\u0006 ü{*â\u0015Í¡ÏæmQÇÐ¯9hWî\u008d¨8\u009fÙí[ë©Ø\u0099\u0003sòm\u0003¼Du\u009d6l\u0092S·\u0010^wA: òJ\u0017\u0088b\u0018\u00ad<óü\"\u0006@ó)â@åkM>#8ï-\u0085ö\u0082ë÷\u0080¢Ò\u0012^Ø3@\u0007y`UA\u0095\u0085Úÿ¸\u0084Ð\u0010Æ§ UúÓh¤Ù";
                     int var10 = "\u008cÒí\u00adæAÆ\u008e³\u0006 ü{*â\u0015Í¡ÏæmQÇÐ¯9hWî\u008d¨8\u009fÙí[ë©Ø\u0099\u0003sòm\u0003¼Du\u009d6l\u0092S·\u0010^wA: òJ\u0017\u0088b\u0018\u00ad<óü\"\u0006@ó)â@åkM>#8ï-\u0085ö\u0082ë÷\u0080¢Ò\u0012^Ø3@\u0007y`UA\u0095\u0085Úÿ¸\u0084Ð\u0010Æ§ UúÓh¤Ù"
                        .length();
                     byte var7 = 0;

                     label46:
                     while (true) {
                        var10001 = var7;
                        var7 += 8;
                        byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
                        long[] var33 = var11;
                        var10001 = var8++;
                        long var47 = (var12[0] & 255L) << 56
                           | (var12[1] & 255L) << 48
                           | (var12[2] & 255L) << 40
                           | (var12[3] & 255L) << 32
                           | (var12[4] & 255L) << 24
                           | (var12[5] & 255L) << 16
                           | (var12[6] & 255L) << 8
                           | var12[7] & 255L;
                        byte var52 = -1;

                        while (true) {
                           long var13 = var47;
                           byte[] var15 = var5.doFinal(
                              new byte[]{
                                 (byte)(var13 >>> 56),
                                 (byte)(var13 >>> 48),
                                 (byte)(var13 >>> 40),
                                 (byte)(var13 >>> 32),
                                 (byte)(var13 >>> 24),
                                 (byte)(var13 >>> 16),
                                 (byte)(var13 >>> 8),
                                 (byte)var13
                              }
                           );
                           long var55 = (var15[0] & 255L) << 56
                              | (var15[1] & 255L) << 48
                              | (var15[2] & 255L) << 40
                              | (var15[3] & 255L) << 32
                              | (var15[4] & 255L) << 24
                              | (var15[5] & 255L) << 16
                              | (var15[6] & 255L) << 8
                              | var15[7] & 255L;
                           switch (var52) {
                              case 0:
                                 var33[var10001] = var55;
                                 if (var7 >= var10) {
                                    zZGgU = var11;
                                    vMfEW = new Integer[17];
                                    Cipher var0;
                                    var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                                    var10002 = SecretKeyFactory.getInstance("DES");
                                    var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                                    for (int var1 = 1; var1 < 8; var1++) {
                                       var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                                    }

                                    var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                                    long var2 = -3313581412779160603L;
                                    byte[] var4 = var0.doFinal(
                                       new byte[]{
                                          (byte)(var2 >>> 56),
                                          (byte)(var2 >>> 48),
                                          (byte)(var2 >>> 40),
                                          (byte)(var2 >>> 32),
                                          (byte)(var2 >>> 24),
                                          (byte)(var2 >>> 16),
                                          (byte)(var2 >>> 8),
                                          (byte)var2
                                       }
                                    );
                                    long var50 = (var4[0] & 255L) << 56
                                       | (var4[1] & 255L) << 48
                                       | (var4[2] & 255L) << 40
                                       | (var4[3] & 255L) << 32
                                       | (var4[4] & 255L) << 24
                                       | (var4[5] & 255L) << 16
                                       | (var4[6] & 255L) << 8
                                       | var4[7] & 255L;
                                    byte var41 = -1;
                                    pgXwp = var50;
                                    return;
                                 }
                                 break;
                              default:
                                 var33[var10001] = var55;
                                 if (var7 < var10) {
                                    continue label46;
                                 }

                                 var9 = "\u0094b\u001að¹+W\u0001\u001fuÌ\u0004\u0007´U\u0086";
                                 var10 = "\u0094b\u001að¹+W\u0001\u001fuÌ\u0004\u0007´U\u0086".length();
                                 var7 = 0;
                           }

                           byte var40 = var7;
                           var7 += 8;
                           var12 = var9.substring(var40, var7).getBytes("ISO-8859-1");
                           var33 = var11;
                           var10001 = var8++;
                           var47 = (var12[0] & 255L) << 56
                              | (var12[1] & 255L) << 48
                              | (var12[2] & 255L) << 40
                              | (var12[3] & 255L) << 32
                              | (var12[4] & 255L) << 24
                              | (var12[5] & 255L) << 16
                              | (var12[6] & 255L) << 8
                              | var12[7] & 255L;
                           var52 = 0;
                        }
                     }
                  }

                  var21 = var22.charAt(var29);
                  break;
               default:
                  var25[var23++] = var43;
                  if ((var29 += var21) < var24) {
                     var21 = var22.charAt(var29);
                     continue label64;
                  }

                  var22 = "\u0089õz\u008dðãùßa\u00965\u0080U}kS0ÏCZ\u0087J\u0089\u0092®\u0093±óí\u0090ÅG¢UM\u0005½ö\u0089\u0010\u0080=ôç\u0087ÑÚ\u001eþg\nÂSùG\u000eì\u008fßìQÌÌÀo";
                  var24 = "\u0089õz\u008dðãùßa\u00965\u0080U}kS0ÏCZ\u0087J\u0089\u0092®\u0093±óí\u0090ÅG¢UM\u0005½ö\u0089\u0010\u0080=ôç\u0087ÑÚ\u001eþg\nÂSùG\u000eì\u008fßìQÌÌÀo"
                     .length();
                  var21 = 16;
                  var29 = -1;
            }

            var30 = var22.substring(++var29, var29 + var21);
            var10001 = 0;
         }
      }
   }

   private static CallSite Pd(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Pc".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ca" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int Pe(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26822;
      if (vMfEW[var3] == null) {
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
         long var5 = zZGgU[var3];
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
         Object[] var9 = (Object[])WQoAo.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               WQoAo.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ca", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         vMfEW[var3] = var15;
      }

      return vMfEW[var3];
   }

   private static Object Pc(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = Pb(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int Pf(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = Pe(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private List<ca$sl> OP() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ca.PHZMk J
      // 003: ldc2_w 39680352717862
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ca.OY ()Z
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: invokespecial java/util/ArrayList.<init> ()V
      // 012: astore 4
      // 014: istore 3
      // 015: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 018: iload 3
      // 019: ifeq 033
      // 01c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 01f: ifnull 05f
      // 022: goto 029
      // 025: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 02c: goto 033
      // 02f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: iload 3
      // 034: ifeq 04e
      // 037: invokevirtual net/minecraft/class_310.method_47392 ()Z
      // 03a: ifne 05f
      // 03d: goto 044
      // 040: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 047: goto 04e
      // 04a: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04d: athrow
      // 04e: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 051: iload 3
      // 052: ifeq 06c
      // 055: ifnonnull 066
      // 058: goto 05f
      // 05b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 4
      // 061: areturn
      // 062: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 065: athrow
      // 066: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 069: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 06c: invokevirtual net/minecraft/class_634.method_2880 ()Ljava/util/Collection;
      // 06f: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 074: astore 5
      // 076: aload 5
      // 078: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 07d: ifeq 178
      // 080: aload 5
      // 082: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 087: checkcast net/minecraft/class_640
      // 08a: astore 6
      // 08c: aload 6
      // 08e: invokevirtual net/minecraft/class_640.method_2955 ()Lnet/minecraft/class_268;
      // 091: iload 3
      // 092: ifeq 0af
      // 095: ifnonnull 0aa
      // 098: goto 09f
      // 09b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: iload 3
      // 0a0: ifne 076
      // 0a3: goto 0aa
      // 0a6: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a9: athrow
      // 0aa: aload 6
      // 0ac: invokevirtual net/minecraft/class_640.method_2955 ()Lnet/minecraft/class_268;
      // 0af: astore 7
      // 0b1: aload 7
      // 0b3: invokevirtual net/minecraft/class_268.method_1144 ()Lnet/minecraft/class_2561;
      // 0b6: astore 8
      // 0b8: aload 8
      // 0ba: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 0bf: invokestatic sixtwo/ru.djG (Ljava/lang/String;)Ljava/lang/String;
      // 0c2: astore 9
      // 0c4: aload 9
      // 0c6: invokestatic net/minecraft/class_124.method_539 (Ljava/lang/String;)Ljava/lang/String;
      // 0c9: astore 10
      // 0cb: aload 10
      // 0cd: iload 3
      // 0ce: ifeq 0f2
      // 0d1: ifnonnull 0e6
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: iload 3
      // 0dc: ifne 076
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: aload 10
      // 0e8: invokestatic sixtwo/ru.djG (Ljava/lang/String;)Ljava/lang/String;
      // 0eb: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 0ee: astore 10
      // 0f0: aload 10
      // 0f2: iload 3
      // 0f3: ifeq 123
      // 0f6: invokestatic sixtwo/ca.OR (Ljava/lang/String;)Z
      // 0f9: ifne 10e
      // 0fc: goto 103
      // 0ff: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 102: athrow
      // 103: iload 3
      // 104: ifne 076
      // 107: goto 10e
      // 10a: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10d: athrow
      // 10e: sipush 16931
      // 111: ldc2_w 4971403483610658073
      // 114: lload 1
      // 115: lxor
      // 116: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 11b: aload 7
      // 11d: invokevirtual net/minecraft/class_268.method_1204 ()Ljava/util/Collection;
      // 120: invokestatic java/lang/String.join (Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;
      // 123: astore 11
      // 125: aload 0
      // 126: aload 8
      // 128: aload 7
      // 12a: invokevirtual sixtwo/ca.OS (Lnet/minecraft/class_2561;Lnet/minecraft/class_268;)Lsixtwo/mG;
      // 12d: astore 12
      // 12f: aload 6
      // 131: invokevirtual net/minecraft/class_640.method_2958 ()Lnet/minecraft/class_1934;
      // 134: getstatic net/minecraft/class_1934.field_9219 Lnet/minecraft/class_1934;
      // 137: if_acmpne 14e
      // 13a: sipush 27778
      // 13d: ldc2_w 7128527194054171567
      // 140: lload 1
      // 141: lxor
      // 142: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 147: goto 15b
      // 14a: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14d: athrow
      // 14e: sipush 25768
      // 151: ldc2_w 3087373076005524379
      // 154: lload 1
      // 155: lxor
      // 156: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15b: astore 13
      // 15d: aload 4
      // 15f: new sixtwo/ca$sl
      // 162: dup
      // 163: aload 11
      // 165: aload 9
      // 167: aload 12
      // 169: aload 13
      // 16b: invokespecial sixtwo/ca$sl.<init> (Ljava/lang/String;Ljava/lang/String;Lsixtwo/mG;Ljava/lang/String;)V
      // 16e: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 173: pop
      // 174: iload 3
      // 175: ifne 076
      // 178: aload 4
      // 17a: areturn
   }

   @Override
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ca.PHZMk J
      // 003: ldc2_w 35556887037386
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OY ()Z
      // 00b: aload 0
      // 00c: aload 1
      // 00d: invokespecial sixtwo/co.NV (Lsixtwo/lC;)V
      // 010: istore 4
      // 012: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 015: astore 5
      // 017: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 01a: ldc 7.0
      // 01c: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 01f: astore 6
      // 021: ldc_w 22.0
      // 024: fstore 7
      // 026: getstatic sixtwo/ca.zXCXX Lsixtwo/kJ;
      // 029: aload 6
      // 02b: invokevirtual sixtwo/kJ.bUa (Lsixtwo/lq;)V
      // 02e: aconst_null
      // 02f: astore 8
      // 031: aload 0
      // 032: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 035: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 03a: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 03f: astore 9
      // 041: aload 9
      // 043: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 048: ifeq 18a
      // 04b: aload 9
      // 04d: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 052: checkcast sixtwo/ca$sl
      // 055: astore 10
      // 057: aload 10
      // 059: getfield sixtwo/ca$sl.VoBja Lsixtwo/rk;
      // 05c: astore 11
      // 05e: aload 11
      // 060: iload 4
      // 062: ifeq 1b6
      // 065: invokevirtual sixtwo/rk.dhj ()F
      // 068: fconst_0
      // 069: fcmpl
      // 06a: iload 4
      // 06c: ifeq 09e
      // 06f: goto 076
      // 072: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: ifne 089
      // 079: goto 080
      // 07c: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07f: athrow
      // 080: aload 10
      // 082: astore 8
      // 084: iload 4
      // 086: ifne 041
      // 089: aload 10
      // 08b: getfield sixtwo/ca$sl.BwIFl Ljava/lang/String;
      // 08e: sipush 28568
      // 091: ldc2_w 3482304562359898433
      // 094: lload 2
      // 095: lxor
      // 096: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09b: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 09e: ifeq 0ab
      // 0a1: getstatic sixtwo/lf.XzjRK Lsixtwo/lf;
      // 0a4: goto 0ae
      // 0a7: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0aa: athrow
      // 0ab: getstatic sixtwo/lf.DzxCD Lsixtwo/lf;
      // 0ae: astore 12
      // 0b0: ldc_w -4.5
      // 0b3: ldc_w 4.5
      // 0b6: aload 11
      // 0b8: invokevirtual sixtwo/rk.dhj ()F
      // 0bb: fmul
      // 0bc: fadd
      // 0bd: fstore 13
      // 0bf: aload 5
      // 0c1: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 0c4: ldc_w 255.0
      // 0c7: aload 11
      // 0c9: invokevirtual sixtwo/rk.dhj ()F
      // 0cc: fmul
      // 0cd: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0d0: astore 14
      // 0d2: aload 5
      // 0d4: invokevirtual sixtwo/ii.bjc ()Lsixtwo/mG;
      // 0d7: ldc_w 255.0
      // 0da: aload 11
      // 0dc: invokevirtual sixtwo/rk.dhj ()F
      // 0df: fmul
      // 0e0: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0e3: astore 15
      // 0e5: aload 0
      // 0e6: getfield sixtwo/ca.toIeR F
      // 0e9: ldc 7.0
      // 0eb: aload 11
      // 0ed: invokevirtual sixtwo/rk.dhj ()F
      // 0f0: fmul
      // 0f1: fadd
      // 0f2: fstore 16
      // 0f4: aload 0
      // 0f5: getfield sixtwo/ca.QWaAn F
      // 0f8: fload 7
      // 0fa: fadd
      // 0fb: fload 13
      // 0fd: fadd
      // 0fe: ldc_w 8.0
      // 101: ldc_w 18.0
      // 104: invokestatic sixtwo/jf.bAH (FF)F
      // 107: fadd
      // 108: fstore 17
      // 10a: aload 1
      // 10b: aload 12
      // 10d: fload 16
      // 10f: fload 17
      // 111: ldc_w 8.0
      // 114: aload 15
      // 116: invokevirtual sixtwo/lC.cem (Lsixtwo/lf;FFFLsixtwo/mG;)V
      // 119: aload 0
      // 11a: getfield sixtwo/ca.toIeR F
      // 11d: ldc_w 13.0
      // 120: fadd
      // 121: ldc 7.0
      // 123: aload 11
      // 125: invokevirtual sixtwo/rk.dhj ()F
      // 128: fmul
      // 129: fadd
      // 12a: fstore 18
      // 12c: aload 0
      // 12d: getfield sixtwo/ca.QWaAn F
      // 130: fload 7
      // 132: fadd
      // 133: fload 13
      // 135: fadd
      // 136: aload 6
      // 138: invokevirtual sixtwo/lq.cat ()F
      // 13b: ldc_w 18.0
      // 13e: invokestatic sixtwo/jf.bAH (FF)F
      // 141: fadd
      // 142: fstore 19
      // 144: aload 1
      // 145: aload 6
      // 147: aload 10
      // 149: getfield sixtwo/ca$sl.sliuY Ljava/lang/String;
      // 14c: fload 18
      // 14e: fload 19
      // 150: aload 10
      // 152: getfield sixtwo/ca$sl.iIDDI Lsixtwo/mG;
      // 155: invokevirtual sixtwo/lC.cer (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 158: aload 0
      // 159: getfield sixtwo/ca.toIeR F
      // 15c: aload 0
      // 15d: getfield sixtwo/ca.jTsqG F
      // 160: fadd
      // 161: ldc 7.0
      // 163: aload 11
      // 165: invokevirtual sixtwo/rk.dhj ()F
      // 168: fmul
      // 169: fsub
      // 16a: fstore 20
      // 16c: aload 1
      // 16d: aload 6
      // 16f: aload 10
      // 171: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 174: fload 20
      // 176: fload 19
      // 178: aload 14
      // 17a: invokevirtual sixtwo/lC.cev (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 17d: fload 7
      // 17f: ldc_w 18.0
      // 182: fadd
      // 183: fstore 7
      // 185: iload 4
      // 187: ifne 041
      // 18a: getstatic sixtwo/ca.zXCXX Lsixtwo/kJ;
      // 18d: invokevirtual sixtwo/kJ.endBatch ()V
      // 190: aload 8
      // 192: iload 4
      // 194: ifeq 1b6
      // 197: ifnull 1b7
      // 19a: goto 1a1
      // 19d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a0: athrow
      // 1a1: aload 0
      // 1a2: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 1a5: aload 8
      // 1a7: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 1aa: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 1af: goto 1b6
      // 1b2: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b5: athrow
      // 1b6: pop
      // 1b7: return
   }

   @Override
   public void LX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ca.PHZMk J
      // 003: ldc2_w 58193881000458
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: ldc 92.0
      // 00b: putfield sixtwo/ca.jTsqG F
      // 00e: invokestatic sixtwo/ca.OX ()Z
      // 011: aload 0
      // 012: ldc 20.0
      // 014: putfield sixtwo/ca.Xtjvx F
      // 017: istore 4
      // 019: aload 0
      // 01a: iload 4
      // 01c: ifne 066
      // 01f: getfield sixtwo/ca.kkoKC Lsixtwo/mT;
      // 022: getstatic sixtwo/ca.pgXwp J
      // 025: invokevirtual sixtwo/mT.cpC (J)Z
      // 028: ifeq 065
      // 02b: goto 032
      // 02e: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 031: athrow
      // 032: aload 0
      // 033: getfield sixtwo/ca.SZBrr Ljava/util/Set;
      // 036: invokeinterface java/util/Set.clear ()V 1
      // 03b: aload 0
      // 03c: getfield sixtwo/ca.SZBrr Ljava/util/Set;
      // 03f: aload 0
      // 040: invokevirtual sixtwo/ca.OP ()Ljava/util/List;
      // 043: invokeinterface java/util/Set.addAll (Ljava/util/Collection;)Z 2
      // 048: pop
      // 049: aload 0
      // 04a: getfield sixtwo/ca.SZBrr Ljava/util/Set;
      // 04d: aload 0
      // 04e: invokevirtual sixtwo/ca.OQ ()Ljava/util/List;
      // 051: invokeinterface java/util/Set.addAll (Ljava/util/Collection;)Z 2
      // 056: pop
      // 057: aload 0
      // 058: getfield sixtwo/ca.kkoKC Lsixtwo/mT;
      // 05b: invokevirtual sixtwo/mT.cpB ()V
      // 05e: goto 065
      // 061: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: aload 0
      // 066: getfield sixtwo/ca.SZBrr Ljava/util/Set;
      // 069: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 06e: astore 5
      // 070: aload 5
      // 072: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 077: ifeq 115
      // 07a: aload 5
      // 07c: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 081: checkcast sixtwo/ca$sl
      // 084: astore 6
      // 086: aload 0
      // 087: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 08a: aload 6
      // 08c: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 08f: iload 4
      // 091: ifne 0ff
      // 094: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 099: iload 4
      // 09b: ifne 12a
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a4: athrow
      // 0a5: ifeq 0ef
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: aload 0
      // 0b0: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 0b3: aload 6
      // 0b5: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 0b8: aload 6
      // 0ba: invokeinterface java/util/Map.replace (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0bf: pop
      // 0c0: aload 6
      // 0c2: getfield sixtwo/ca$sl.VoBja Lsixtwo/rk;
      // 0c5: astore 7
      // 0c7: aload 7
      // 0c9: iload 4
      // 0cb: ifne 0e6
      // 0ce: invokevirtual sixtwo/rk.dhj ()F
      // 0d1: fconst_0
      // 0d2: fcmpl
      // 0d3: ifne 0ea
      // 0d6: goto 0dd
      // 0d9: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dc: athrow
      // 0dd: aload 7
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: fconst_1
      // 0e7: invokevirtual sixtwo/rk.dhe (F)V
      // 0ea: iload 4
      // 0ec: ifeq 110
      // 0ef: aload 0
      // 0f0: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 0f3: aload 6
      // 0f5: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 0f8: goto 0ff
      // 0fb: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fe: athrow
      // 0ff: aload 6
      // 101: invokeinterface java/util/Map.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 106: pop
      // 107: aload 6
      // 109: getfield sixtwo/ca$sl.VoBja Lsixtwo/rk;
      // 10c: fconst_1
      // 10d: invokevirtual sixtwo/rk.dhe (F)V
      // 110: iload 4
      // 112: ifeq 070
      // 115: aload 0
      // 116: iload 4
      // 118: ifne 12e
      // 11b: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 11e: invokeinterface java/util/Map.isEmpty ()Z 1
      // 123: goto 12a
      // 126: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 129: athrow
      // 12a: ifne 138
      // 12d: aload 0
      // 12e: dup
      // 12f: getfield sixtwo/ca.Xtjvx F
      // 132: ldc 5.0
      // 134: fadd
      // 135: putfield sixtwo/ca.Xtjvx F
      // 138: getstatic sixtwo/lE.joxgd Lsixtwo/lj;
      // 13b: ldc 7.0
      // 13d: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 140: astore 5
      // 142: aload 0
      // 143: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 146: invokeinterface java/util/Map.values ()Ljava/util/Collection; 1
      // 14b: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 150: astore 6
      // 152: aload 6
      // 154: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 159: ifeq 1e1
      // 15c: aload 6
      // 15e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 163: checkcast sixtwo/ca$sl
      // 166: astore 7
      // 168: aload 7
      // 16a: getfield sixtwo/ca$sl.VoBja Lsixtwo/rk;
      // 16d: astore 8
      // 16f: aload 7
      // 171: getfield sixtwo/ca$sl.EVJUd Ljava/lang/String;
      // 174: astore 9
      // 176: aload 7
      // 178: getfield sixtwo/ca$sl.sliuY Ljava/lang/String;
      // 17b: astore 10
      // 17d: aload 8
      // 17f: aload 0
      // 180: getfield sixtwo/ca.SZBrr Ljava/util/Set;
      // 183: invokeinterface java/util/Set.stream ()Ljava/util/stream/Stream; 1
      // 188: aload 9
      // 18a: invokedynamic test (Ljava/lang/String;)Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/ca.OV (Ljava/lang/String;Lsixtwo/ca$sl;)Z, (Lsixtwo/ca$sl;)Z ]
      // 18f: invokeinterface java/util/stream/Stream.anyMatch (Ljava/util/function/Predicate;)Z 2
      // 194: invokevirtual sixtwo/rk.dhc (Z)V
      // 197: aload 8
      // 199: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 19c: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 19f: pop
      // 1a0: aload 0
      // 1a1: aload 5
      // 1a3: aload 9
      // 1a5: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 1a8: aload 5
      // 1aa: aload 10
      // 1ac: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 1af: fadd
      // 1b0: ldc_w 30.0
      // 1b3: fadd
      // 1b4: aload 0
      // 1b5: getfield sixtwo/ca.jTsqG F
      // 1b8: invokestatic java/lang/Math.max (FF)F
      // 1bb: putfield sixtwo/ca.jTsqG F
      // 1be: aload 0
      // 1bf: dup
      // 1c0: getfield sixtwo/ca.Xtjvx F
      // 1c3: ldc_w 18.0
      // 1c6: aload 8
      // 1c8: invokevirtual sixtwo/rk.dhj ()F
      // 1cb: fmul
      // 1cc: fadd
      // 1cd: putfield sixtwo/ca.Xtjvx F
      // 1d0: iload 4
      // 1d2: ifne 1e6
      // 1d5: iload 4
      // 1d7: ifeq 152
      // 1da: goto 1e1
      // 1dd: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e0: athrow
      // 1e1: aload 0
      // 1e2: aload 1
      // 1e3: invokespecial sixtwo/co.LX (Lsixtwo/lC;)V
      // 1e6: return
   }

   public static boolean OR(String param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ca.PHZMk J
      // 003: ldc2_w 89423018311326
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ca.OX ()Z
      // 00b: istore 3
      // 00c: aload 0
      // 00d: sipush 14372
      // 010: ldc2_w 8294348487133494709
      // 013: lload 1
      // 014: lxor
      // 015: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 01a: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 01d: iload 3
      // 01e: ifne 28c
      // 021: ifne 28b
      // 024: goto 02b
      // 027: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02a: athrow
      // 02b: aload 0
      // 02c: sipush 1576
      // 02f: ldc2_w 121373762140554159
      // 032: lload 1
      // 033: lxor
      // 034: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 039: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 03c: iload 3
      // 03d: ifne 28c
      // 040: goto 047
      // 043: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 046: athrow
      // 047: ifne 28b
      // 04a: goto 051
      // 04d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 050: athrow
      // 051: aload 0
      // 052: sipush 28453
      // 055: ldc2_w 6464205823746517676
      // 058: lload 1
      // 059: lxor
      // 05a: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05f: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 062: iload 3
      // 063: ifne 28c
      // 066: goto 06d
      // 069: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: ifne 28b
      // 070: goto 077
      // 073: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 076: athrow
      // 077: aload 0
      // 078: sipush 3997
      // 07b: ldc2_w 3741513895763331614
      // 07e: lload 1
      // 07f: lxor
      // 080: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 085: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 088: iload 3
      // 089: ifne 28c
      // 08c: goto 093
      // 08f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 092: athrow
      // 093: ifne 28b
      // 096: goto 09d
      // 099: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09c: athrow
      // 09d: aload 0
      // 09e: sipush 13311
      // 0a1: ldc2_w 5914144424430794351
      // 0a4: lload 1
      // 0a5: lxor
      // 0a6: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ab: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 0ae: iload 3
      // 0af: ifne 28c
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: ifne 28b
      // 0bc: goto 0c3
      // 0bf: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c2: athrow
      // 0c3: aload 0
      // 0c4: sipush 26701
      // 0c7: ldc2_w 3958275727681596867
      // 0ca: lload 1
      // 0cb: lxor
      // 0cc: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d1: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 0d4: iload 3
      // 0d5: ifne 28c
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0de: athrow
      // 0df: ifne 28b
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e8: athrow
      // 0e9: aload 0
      // 0ea: sipush 18675
      // 0ed: ldc2_w 266508729504959868
      // 0f0: lload 1
      // 0f1: lxor
      // 0f2: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f7: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 0fa: iload 3
      // 0fb: ifne 28c
      // 0fe: goto 105
      // 101: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: ifne 28b
      // 108: goto 10f
      // 10b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: aload 0
      // 110: sipush 24200
      // 113: ldc2_w 6192329771866888974
      // 116: lload 1
      // 117: lxor
      // 118: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 11d: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 120: iload 3
      // 121: ifne 28c
      // 124: goto 12b
      // 127: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: ifne 28b
      // 12e: goto 135
      // 131: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 134: athrow
      // 135: aload 0
      // 136: sipush 17848
      // 139: ldc2_w 8119044736344621104
      // 13c: lload 1
      // 13d: lxor
      // 13e: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 143: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 146: iload 3
      // 147: ifne 28c
      // 14a: goto 151
      // 14d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 150: athrow
      // 151: ifne 28b
      // 154: goto 15b
      // 157: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15a: athrow
      // 15b: aload 0
      // 15c: sipush 26272
      // 15f: ldc2_w 5129332640401302308
      // 162: lload 1
      // 163: lxor
      // 164: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 169: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 16c: iload 3
      // 16d: ifne 28c
      // 170: goto 177
      // 173: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 176: athrow
      // 177: ifne 28b
      // 17a: goto 181
      // 17d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 180: athrow
      // 181: aload 0
      // 182: sipush 8505
      // 185: ldc2_w 2204629160551867576
      // 188: lload 1
      // 189: lxor
      // 18a: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18f: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 192: iload 3
      // 193: ifne 28c
      // 196: goto 19d
      // 199: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19c: athrow
      // 19d: ifne 28b
      // 1a0: goto 1a7
      // 1a3: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a6: athrow
      // 1a7: aload 0
      // 1a8: sipush 18944
      // 1ab: ldc2_w 902297459678482326
      // 1ae: lload 1
      // 1af: lxor
      // 1b0: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1b5: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 1b8: iload 3
      // 1b9: ifne 28c
      // 1bc: goto 1c3
      // 1bf: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c2: athrow
      // 1c3: ifne 28b
      // 1c6: goto 1cd
      // 1c9: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1cc: athrow
      // 1cd: aload 0
      // 1ce: sipush 9306
      // 1d1: ldc2_w 7373589449904185814
      // 1d4: lload 1
      // 1d5: lxor
      // 1d6: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1db: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 1de: iload 3
      // 1df: ifne 28c
      // 1e2: goto 1e9
      // 1e5: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e8: athrow
      // 1e9: ifne 28b
      // 1ec: goto 1f3
      // 1ef: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f2: athrow
      // 1f3: aload 0
      // 1f4: sipush 16267
      // 1f7: ldc2_w 6531728990994364929
      // 1fa: lload 1
      // 1fb: lxor
      // 1fc: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 201: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 204: iload 3
      // 205: ifne 28c
      // 208: goto 20f
      // 20b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20e: athrow
      // 20f: ifne 28b
      // 212: goto 219
      // 215: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 218: athrow
      // 219: aload 0
      // 21a: sipush 551
      // 21d: ldc2_w 6285690880302696373
      // 220: lload 1
      // 221: lxor
      // 222: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 227: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 22a: iload 3
      // 22b: ifne 28c
      // 22e: goto 235
      // 231: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 234: athrow
      // 235: ifne 28b
      // 238: goto 23f
      // 23b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23e: athrow
      // 23f: aload 0
      // 240: sipush 16447
      // 243: ldc2_w 8148732865740998079
      // 246: lload 1
      // 247: lxor
      // 248: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 24d: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 250: iload 3
      // 251: ifne 28c
      // 254: goto 25b
      // 257: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25a: athrow
      // 25b: ifne 28b
      // 25e: goto 265
      // 261: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 264: athrow
      // 265: aload 0
      // 266: sipush 2457
      // 269: ldc2_w 6428896681058585628
      // 26c: lload 1
      // 26d: lxor
      // 26e: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 273: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // 276: iload 3
      // 277: ifne 28c
      // 27a: goto 281
      // 27d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 280: athrow
      // 281: ifeq 28f
      // 284: goto 28b
      // 287: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28a: athrow
      // 28b: bipush 1
      // 28c: goto 290
      // 28f: bipush 0
      // 290: ireturn
   }

   @Override
   public boolean Om() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ca.PHZMk J
      // 03: ldc2_w 39424261832928
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OY ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ca.BmYio Ljava/util/Map;
      // 10: invokeinterface java/util/Map.isEmpty ()Z 1
      // 15: iload 3
      // 16: ifeq 24
      // 19: ifne 27
      // 1c: goto 23
      // 1f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: bipush 1
      // 24: goto 28
      // 27: bipush 0
      // 28: istore 4
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 30: instanceof net/minecraft/class_408
      // 33: istore 5
      // 35: iload 4
      // 37: iload 3
      // 38: ifeq 5d
      // 3b: ifne 5c
      // 3e: goto 45
      // 41: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: iload 5
      // 47: iload 3
      // 48: ifeq 5d
      // 4b: goto 52
      // 4e: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: ifeq 60
      // 55: goto 5c
      // 58: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: bipush 1
      // 5d: goto 61
      // 60: bipush 0
      // 61: ireturn
   }

   public static void OW(boolean var0) {
      tONvf = var0;
   }

   public static boolean OX() {
      return tONvf;
   }

   private static CallSite Pg(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("Pf".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ca" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException OZ(MatchException var0) {
      return var0;
   }

   private List<ca$sl> OQ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ca.PHZMk J
      // 003: ldc2_w 37164835536518
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/ca.OX ()Z
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: invokespecial java/util/ArrayList.<init> ()V
      // 012: astore 4
      // 014: istore 3
      // 015: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 018: iload 3
      // 019: ifne 033
      // 01c: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 01f: ifnull 05f
      // 022: goto 029
      // 025: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 028: athrow
      // 029: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 02c: goto 033
      // 02f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: iload 3
      // 034: ifne 04e
      // 037: invokevirtual net/minecraft/class_310.method_47392 ()Z
      // 03a: ifne 05f
      // 03d: goto 044
      // 040: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 043: athrow
      // 044: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 047: goto 04e
      // 04a: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04d: athrow
      // 04e: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 051: iload 3
      // 052: ifne 086
      // 055: ifnonnull 066
      // 058: goto 05f
      // 05b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05e: athrow
      // 05f: aload 4
      // 061: areturn
      // 062: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 065: athrow
      // 066: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 069: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 06c: invokevirtual net/minecraft/class_634.method_2880 ()Ljava/util/Collection;
      // 06f: invokeinterface java/util/Collection.stream ()Ljava/util/stream/Stream; 1
      // 074: invokedynamic apply ()Ljava/util/function/Function; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Ljava/lang/Object;, sixtwo/ca.OU (Lnet/minecraft/class_640;)Ljava/lang/String;, (Lnet/minecraft/class_640;)Ljava/lang/String; ]
      // 079: invokeinterface java/util/stream/Stream.map (Ljava/util/function/Function;)Ljava/util/stream/Stream; 2
      // 07e: invokestatic java/util/stream/Collectors.toSet ()Ljava/util/stream/Collector;
      // 081: invokeinterface java/util/stream/Stream.collect (Ljava/util/stream/Collector;)Ljava/lang/Object; 2
      // 086: checkcast java/util/Set
      // 089: astore 5
      // 08b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 08e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 091: invokevirtual net/minecraft/class_638.method_8428 ()Lnet/minecraft/class_269;
      // 094: invokevirtual net/minecraft/class_269.method_1159 ()Ljava/util/Collection;
      // 097: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 09c: astore 6
      // 09e: aload 6
      // 0a0: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0a5: ifeq 1da
      // 0a8: aload 6
      // 0aa: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0af: checkcast net/minecraft/class_268
      // 0b2: astore 7
      // 0b4: aload 7
      // 0b6: invokevirtual net/minecraft/class_268.method_1204 ()Ljava/util/Collection;
      // 0b9: astore 8
      // 0bb: aload 8
      // 0bd: invokeinterface java/util/Collection.isEmpty ()Z 1
      // 0c2: iload 3
      // 0c3: ifne 0dc
      // 0c6: ifeq 0db
      // 0c9: goto 0d0
      // 0cc: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: iload 3
      // 0d1: ifeq 09e
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: bipush 0
      // 0dc: istore 9
      // 0de: aload 8
      // 0e0: invokeinterface java/util/Collection.iterator ()Ljava/util/Iterator; 1
      // 0e5: astore 10
      // 0e7: aload 10
      // 0e9: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0ee: ifeq 131
      // 0f1: aload 10
      // 0f3: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0f8: checkcast java/lang/String
      // 0fb: astore 11
      // 0fd: aload 5
      // 0ff: aload 11
      // 101: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 106: iload 3
      // 107: ifne 133
      // 10a: iload 3
      // 10b: ifne 120
      // 10e: goto 115
      // 111: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: ifeq 126
      // 118: goto 11f
      // 11b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11e: athrow
      // 11f: bipush 1
      // 120: istore 9
      // 122: iload 3
      // 123: ifeq 131
      // 126: iload 3
      // 127: ifeq 0e7
      // 12a: goto 131
      // 12d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 130: athrow
      // 131: iload 9
      // 133: ifeq 141
      // 136: iload 3
      // 137: ifeq 09e
      // 13a: goto 141
      // 13d: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 140: athrow
      // 141: aload 7
      // 143: invokevirtual net/minecraft/class_268.method_1144 ()Lnet/minecraft/class_2561;
      // 146: astore 10
      // 148: aload 10
      // 14a: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 14f: astore 11
      // 151: aload 11
      // 153: iload 3
      // 154: ifne 17a
      // 157: invokevirtual java/lang/String.isEmpty ()Z
      // 15a: ifeq 16f
      // 15d: goto 164
      // 160: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 163: athrow
      // 164: iload 3
      // 165: ifeq 09e
      // 168: goto 16f
      // 16b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 16e: athrow
      // 16f: aload 11
      // 171: invokestatic net/minecraft/class_124.method_539 (Ljava/lang/String;)Ljava/lang/String;
      // 174: invokestatic sixtwo/ru.djG (Ljava/lang/String;)Ljava/lang/String;
      // 177: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 17a: astore 12
      // 17c: aload 12
      // 17e: iload 3
      // 17f: ifne 1ac
      // 182: invokestatic sixtwo/ca.OR (Ljava/lang/String;)Z
      // 185: ifne 19a
      // 188: goto 18f
      // 18b: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 18e: athrow
      // 18f: iload 3
      // 190: ifeq 09e
      // 193: goto 19a
      // 196: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 199: athrow
      // 19a: sipush 14959
      // 19d: ldc2_w 6105009628520202208
      // 1a0: lload 1
      // 1a1: lxor
      // 1a2: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1a7: aload 8
      // 1a9: invokestatic java/lang/String.join (Ljava/lang/CharSequence;Ljava/lang/Iterable;)Ljava/lang/String;
      // 1ac: astore 13
      // 1ae: aload 4
      // 1b0: new sixtwo/ca$sl
      // 1b3: dup
      // 1b4: aload 13
      // 1b6: aload 11
      // 1b8: aload 0
      // 1b9: aload 10
      // 1bb: aload 7
      // 1bd: invokevirtual sixtwo/ca.OS (Lnet/minecraft/class_2561;Lnet/minecraft/class_268;)Lsixtwo/mG;
      // 1c0: sipush 18353
      // 1c3: ldc2_w 5593718357101789757
      // 1c6: lload 1
      // 1c7: lxor
      // 1c8: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/ca.Pd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1cd: invokespecial sixtwo/ca$sl.<init> (Ljava/lang/String;Ljava/lang/String;Lsixtwo/mG;Ljava/lang/String;)V
      // 1d0: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 1d5: pop
      // 1d6: iload 3
      // 1d7: ifeq 09e
      // 1da: aload 4
      // 1dc: areturn
   }

   private mG OS(class_2561 param1, class_268 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ca.PHZMk J
      // 03: ldc2_w 1195582167833
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: aload 1
      // 0c: invokeinterface net/minecraft/class_2561.method_10866 ()Lnet/minecraft/class_2583; 1
      // 11: invokevirtual net/minecraft/class_2583.method_10973 ()Lnet/minecraft/class_5251;
      // 14: astore 6
      // 16: istore 5
      // 18: aload 6
      // 1a: ifnull 38
      // 1d: sipush 9687
      // 20: ldc2_w 7314696611421010457
      // 23: lload 3
      // 24: lxor
      // 25: invokedynamic e (IJ)I bsm=sixtwo/ca.Pg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: aload 6
      // 2c: invokevirtual net/minecraft/class_5251.method_27716 ()I
      // 2f: ior
      // 30: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 33: areturn
      // 34: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: bipush 1
      // 39: anewarray 601
      // 3c: astore 7
      // 3e: aload 1
      // 3f: aload 7
      // 41: invokedynamic accept ([Lnet/minecraft/class_5251;)Lnet/minecraft/class_5348$class_5246; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, sixtwo/ca.OT ([Lnet/minecraft/class_5251;Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional;, (Lnet/minecraft/class_2583;Ljava/lang/String;)Ljava/util/Optional; ]
      // 46: getstatic net/minecraft/class_2583.field_24360 Lnet/minecraft/class_2583;
      // 49: invokeinterface net/minecraft/class_2561.method_27658 (Lnet/minecraft/class_5348$class_5246;Lnet/minecraft/class_2583;)Ljava/util/Optional; 3
      // 4e: pop
      // 4f: aload 7
      // 51: bipush 0
      // 52: aaload
      // 53: ifnull 73
      // 56: sipush 9834
      // 59: ldc2_w 5988973080164940202
      // 5c: lload 3
      // 5d: lxor
      // 5e: invokedynamic e (IJ)I bsm=sixtwo/ca.Pg (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 63: aload 7
      // 65: bipush 0
      // 66: aaload
      // 67: invokevirtual net/minecraft/class_5251.method_27716 ()I
      // 6a: ior
      // 6b: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 6e: areturn
      // 6f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: aload 2
      // 74: iload 5
      // 76: ifne 84
      // 79: ifnull c3
      // 7c: goto 83
      // 7f: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: aload 2
      // 84: invokevirtual net/minecraft/class_268.method_1202 ()Lnet/minecraft/class_124;
      // 87: iload 5
      // 89: ifne a4
      // 8c: invokevirtual net/minecraft/class_124.method_542 ()Z
      // 8f: ifeq c3
      // 92: goto 99
      // 95: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: aload 2
      // 9a: invokevirtual net/minecraft/class_268.method_1202 ()Lnet/minecraft/class_124;
      // 9d: goto a4
      // a0: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: invokevirtual net/minecraft/class_124.method_532 ()Ljava/lang/Integer;
      // a7: astore 8
      // a9: aload 8
      // ab: iload 5
      // ad: ifne bc
      // b0: ifnull c3
      // b3: goto ba
      // b6: invokestatic sixtwo/ca.OZ (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b9: athrow
      // ba: aload 8
      // bc: invokevirtual java/lang/Integer.intValue ()I
      // bf: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // c2: areturn
      // c3: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // c6: areturn
   }

   private static String Pb(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 5892;
      if (qtBBV[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])mckkR.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               mckkR.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ca", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = pbFOM[var5].getBytes("ISO-8859-1");
         qtBBV[var5] = Pa(((Cipher)var4[0]).doFinal(var9));
      }

      return qtBBV[var5];
   }

   private static String Pa(byte[] var0) {
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

   public static boolean OY() {
      boolean var0 = OX();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw OZ(var1);
      }
   }
}
