package sixtwo;

import com.google.gson.JsonObject;
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
import net.minecraft.class_1799;

public class nd implements nb {
   private String piqGr;
   private boolean AMdan;
   private int zjfHh;
   private static final long JkvGk = gb.aYR(7144442387384985690L, -4164018036204239398L, MethodHandles.lookup().lookupClass()).a(203251727708464L);
   private static final String[] DSrxK;
   private static final String[] RyUjX;
   private static final Map aCgyF = new HashMap(13);
   private static final long[] YjDPi;
   private static final Integer[] tGArl;
   private static final Map BKNKz;

   static {
      long var11 = JkvGk ^ 120380323727684L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[9];
      int var18 = 0;
      String var17 = ",M-┬▒┬╝├×├ĆsT├ó\t├╗]r3├»-├č├╗/Y├Ą┬│9\u0088\u0012├ä\u0086Rm├é- ┬ú\u000e├ćv├╝Un┬ż\u0011\t\u0003p't├ëh\u00134\u0085m├ÄPh<\u0016├╗!\u001fA3├×├ç\u0018O├é1\u008c├á├Ç├»┬Ě\u001c├ů:\u0090\u0095SA┬╝K\u0006├ö\u009bi\u008d\u00100\u0010xmU\u0085}+=^├┤├ą├ů8Q├ś├ć9\u0010\u0010_\b}\u000f├║├Ť┬┐├╣UJyD┬»2\u0012\u00180K├Ę\u000f├ľ\u0015w┬ĄWI\u0094\u0094\u0001?\f\u0012sN┬ę┬ę\\m\u007f5 ├Ö\u001f\tH\u0085!┬Č4r[$P├▒@\u0092X├ć5┬¬\u0097z_j#_\u0099sM├ś├Ť$I";
      int var19 = ",M-┬▒┬╝├×├ĆsT├ó\t├╗]r3├»-├č├╗/Y├Ą┬│9\u0088\u0012├ä\u0086Rm├é- ┬ú\u000e├ćv├╝Un┬ż\u0011\t\u0003p't├ëh\u00134\u0085m├ÄPh<\u0016├╗!\u001fA3├×├ç\u0018O├é1\u008c├á├Ç├»┬Ě\u001c├ů:\u0090\u0095SA┬╝K\u0006├ö\u009bi\u008d\u00100\u0010xmU\u0085}+=^├┤├ą├ů8Q├ś├ć9\u0010\u0010_\b}\u000f├║├Ť┬┐├╣UJyD┬»2\u0012\u00180K├Ę\u000f├ľ\u0015w┬ĄWI\u0094\u0094\u0001?\f\u0012sN┬ę┬ę\\m\u007f5 ├Ö\u001f\tH\u0085!┬Č4r[$P├▒@\u0092X├ć5┬¬\u0097z_j#_\u0099sM├ś├Ť$I"
         .length();
      char var16 = ' ';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = cth(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     DSrxK = var20;
                     RyUjX = new String[9];
                     BKNKz = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[5];
                     int var3 = 0;
                     String var4 = "┬Ą┬ż├ś┬»\u0010\u0006_┬Ž|8c├É\u0003\u00187\u0019z3T\u0013)├Żm\u0089";
                     int var5 = "┬Ą┬ż├ś┬»\u0010\u0006_┬Ž|8c├É\u0003\u00187\u0019z3T\u0013)├Żm\u0089".length();
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
                                    YjDPi = var6;
                                    tGArl = new Integer[5];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "v\u0016├Ą├č├úF├ź_p├Ç\u009b\u0087R\u0082\u0097_";
                                 var5 = "v\u0016├Ą├č├úF├ź_p├Ç\u009b\u0087R\u0082\u0097_".length();
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

                  var17 = "X├║\r\u001bC{Mn├ť├Ć\u0091├Ľkg\u0093\u0014G8┬Ż\u0090├Ć├Ś├Ő% %├│├ů├ęhr┬¬├Â'm \u001fX├â;├░┬ż\u0085w\u001e┬í$E├Ć;\u0099\n┬┤┬ę┬żg4";
                  var19 = "X├║\r\u001bC{Mn├ť├Ć\u0091├Ľkg\u0093\u0014G8┬Ż\u0090├Ć├Ś├Ő% %├│├ů├ęhr┬¬├Â'm \u001fX├â;├░┬ż\u0085w\u001e┬í$E├Ć;\u0099\n┬┤┬ę┬żg4".length();
                  var16 = 24;
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
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 69436710817040
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 25
      // 13: aload 0
      // 14: if_acmpne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: iload 4
      // 27: ifne 3e
      // 2a: instanceof sixtwo/nd
      // 2d: ifne 3d
      // 30: goto 37
      // 33: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: bipush 0
      // 38: ireturn
      // 39: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 1
      // 3e: checkcast sixtwo/nd
      // 41: astore 5
      // 43: aload 5
      // 45: aload 0
      // 46: invokevirtual sixtwo/nd.ctf (Ljava/lang/Object;)Z
      // 49: iload 4
      // 4b: ifne 62
      // 4e: ifne 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: bipush 0
      // 59: ireturn
      // 5a: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: invokevirtual sixtwo/nd.cta ()Z
      // 62: aload 5
      // 64: invokevirtual sixtwo/nd.cta ()Z
      // 67: iload 4
      // 69: ifne 91
      // 6c: if_icmpeq 7c
      // 6f: goto 76
      // 72: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: bipush 0
      // 77: ireturn
      // 78: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 0
      // 7d: iload 4
      // 7f: ifne 9b
      // 82: invokevirtual sixtwo/nd.ctb ()I
      // 85: aload 5
      // 87: invokevirtual sixtwo/nd.ctb ()I
      // 8a: goto 91
      // 8d: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: if_icmpeq 9a
      // 94: bipush 0
      // 95: ireturn
      // 96: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 99: athrow
      // 9a: aload 0
      // 9b: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 9e: astore 6
      // a0: aload 5
      // a2: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // a5: astore 7
      // a7: aload 6
      // a9: iload 4
      // ab: ifne cd
      // ae: ifnonnull cb
      // b1: goto b8
      // b4: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b7: athrow
      // b8: aload 7
      // ba: ifnull e7
      // bd: goto c4
      // c0: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: goto e1
      // c7: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ca: athrow
      // cb: aload 6
      // cd: aload 7
      // cf: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // d2: iload 4
      // d4: ifne e8
      // d7: ifne e7
      // da: goto e1
      // dd: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e0: athrow
      // e1: bipush 0
      // e2: ireturn
      // e3: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e6: athrow
      // e7: bipush 1
      // e8: ireturn
   }

   @Override
   public String toString() {
      long var1 = JkvGk ^ 87103775244805L;
      String var10000 = this.csZ();
      int var3 = this.ctb();
      boolean var4 = this.cta();
      String var5 = var10000;
      return ctk<"f">(15518, 3583525277001273119L ^ var1)
         + var5
         + ctk<"f">(9889, 2933940157818885411L ^ var1)
         + var4
         + ctk<"f">(7347, 4702414035620785983L ^ var1)
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
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 47210305651345
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: sipush 23215
      // 0e: ldc2_w 1418956417352921353
      // 11: lload 1
      // 12: lxor
      // 13: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 18: istore 4
      // 1a: bipush 1
      // 1b: istore 5
      // 1d: istore 3
      // 1e: iload 5
      // 20: sipush 19627
      // 23: ldc2_w 3718207752390272778
      // 26: lload 1
      // 27: lxor
      // 28: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d: imul
      // 2e: aload 0
      // 2f: invokevirtual sixtwo/nd.cta ()Z
      // 32: iload 3
      // 33: ifeq 4d
      // 36: ifeq 50
      // 39: goto 40
      // 3c: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: sipush 10402
      // 43: ldc2_w 5783983887650325255
      // 46: lload 1
      // 47: lxor
      // 48: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4d: goto 5d
      // 50: sipush 7584
      // 53: ldc2_w 1223724784517494279
      // 56: lload 1
      // 57: lxor
      // 58: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5d: iadd
      // 5e: istore 5
      // 60: iload 5
      // 62: sipush 19627
      // 65: ldc2_w 3718207752390272778
      // 68: lload 1
      // 69: lxor
      // 6a: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6f: imul
      // 70: aload 0
      // 71: invokevirtual sixtwo/nd.ctb ()I
      // 74: iadd
      // 75: istore 5
      // 77: aload 0
      // 78: invokevirtual sixtwo/nd.csZ ()Ljava/lang/String;
      // 7b: astore 6
      // 7d: iload 5
      // 7f: sipush 19627
      // 82: ldc2_w 3718207752390272778
      // 85: lload 1
      // 86: lxor
      // 87: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8c: imul
      // 8d: aload 6
      // 8f: iload 3
      // 90: ifeq b3
      // 93: ifnonnull b1
      // 96: goto 9d
      // 99: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9c: athrow
      // 9d: sipush 13053
      // a0: ldc2_w 1604292094897363289
      // a3: lload 1
      // a4: lxor
      // a5: invokedynamic w (IJ)I bsm=sixtwo/nd.ctn (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // aa: goto b6
      // ad: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b0: athrow
      // b1: aload 6
      // b3: invokevirtual java/lang/Object.hashCode ()I
      // b6: iadd
      // b7: istore 5
      // b9: iload 5
      // bb: ireturn
   }

   @Override
   public boolean matches(class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 35302715957027
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifeq 1e
      // 13: ifnull 30
      // 16: goto 1d
      // 19: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: iload 4
      // 20: ifeq 37
      // 23: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 26: ifeq 36
      // 29: goto 30
      // 2c: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: bipush 0
      // 31: ireturn
      // 32: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 1
      // 37: invokestatic sixtwo/iZ.byp (Lnet/minecraft/class_1799;)Ljava/util/List;
      // 3a: astore 5
      // 3c: aload 5
      // 3e: invokeinterface java/util/List.isEmpty ()Z 1
      // 43: iload 4
      // 45: ifeq 95
      // 48: ifeq 8f
      // 4b: goto 52
      // 4e: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 0
      // 53: iload 4
      // 55: ifeq 90
      // 58: goto 5f
      // 5b: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 62: ifnull 8f
      // 65: goto 6c
      // 68: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 70: invokevirtual java/lang/String.isBlank ()Z
      // 73: iload 4
      // 75: ifeq 95
      // 78: goto 7f
      // 7b: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7e: athrow
      // 7f: ifeq 8f
      // 82: goto 89
      // 85: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 88: athrow
      // 89: bipush 0
      // 8a: ireturn
      // 8b: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: aload 0
      // 90: aload 5
      // 92: invokevirtual sixtwo/nd.csX (Ljava/util/List;)Z
      // 95: iload 4
      // 97: ifeq b0
      // 9a: ifne aa
      // 9d: goto a4
      // a0: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a3: athrow
      // a4: bipush 0
      // a5: ireturn
      // a6: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: aload 0
      // ab: aload 5
      // ad: invokevirtual sixtwo/nd.csY (Ljava/util/List;)Z
      // b0: iload 4
      // b2: ifeq c6
      // b5: ifne c5
      // b8: goto bf
      // bb: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: bipush 0
      // c0: ireturn
      // c1: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c4: athrow
      // c5: bipush 1
      // c6: ireturn
   }

   private static int ctl(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 32055;
      if (tGArl[var3] == null) {
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
         long var5 = YjDPi[var3];
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
         Object[] var9 = (Object[])BKNKz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BKNKz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/nd", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         tGArl[var3] = var15;
      }

      return tGArl[var3];
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = JkvGk ^ 120977096620320L;
      this.piqGr = this.readString(var1, ctk<"f">(348, 6108275293263022585L ^ var2));
      this.AMdan = this.readBoolean(var1, ctk<"f">(1215, 723646807068757023L ^ var2), false);
      this.zjfHh = this.readInt(var1, ctk<"f">(2571, 6845758069700281002L ^ var2));
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
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 123198597121963
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 4
      // 14: istore 3
      // 15: iload 3
      // 16: ifne 76
      // 19: aload 0
      // 1a: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 1d: ifnull 44
      // 20: goto 27
      // 23: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: sipush 23448
      // 2c: ldc2_w 7480002741639441841
      // 2f: lload 1
      // 30: lxor
      // 31: invokedynamic f (IJ)Ljava/lang/String; bsm=sixtwo/nd.ctk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: aload 0
      // 37: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 3a: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 3d: goto 44
      // 40: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 4
      // 46: sipush 15176
      // 49: ldc2_w 6916799304506805600
      // 4c: lload 1
      // 4d: lxor
      // 4e: invokedynamic f (IJ)Ljava/lang/String; bsm=sixtwo/nd.ctk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 53: aload 0
      // 54: getfield sixtwo/nd.AMdan Z
      // 57: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 5a: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Boolean;)V
      // 5d: aload 4
      // 5f: sipush 2370
      // 62: ldc2_w 1233709094907002735
      // 65: lload 1
      // 66: lxor
      // 67: invokedynamic f (IJ)Ljava/lang/String; bsm=sixtwo/nd.ctk (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6c: aload 0
      // 6d: getfield sixtwo/nd.zjfHh I
      // 70: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 73: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 76: aload 4
      // 78: areturn
   }

   public boolean cta() {
      return this.AMdan;
   }

   public int ctb() {
      return this.zjfHh;
   }

   private static CallSite ctn(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ctm".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nd" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String cti(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 9602;
      if (RyUjX[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])aCgyF.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               aCgyF.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/nd", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = DSrxK[var5].getBytes("ISO-8859-1");
         RyUjX[var5] = cth(((Cipher)var4[0]).doFinal(var9));
      }

      return RyUjX[var5];
   }

   private static CallSite ctk(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("ctj".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nd" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private boolean csX(List<String> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 29597178277235
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 11: iload 4
      // 13: ifeq 2b
      // 16: ifnull 3d
      // 19: goto 20
      // 1c: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 24: goto 2b
      // 27: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a: athrow
      // 2b: invokevirtual java/lang/String.isBlank ()Z
      // 2e: iload 4
      // 30: ifeq 53
      // 33: ifeq 43
      // 36: goto 3d
      // 39: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: ireturn
      // 3f: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: iload 4
      // 46: ifeq 65
      // 49: getfield sixtwo/nd.AMdan Z
      // 4c: goto 53
      // 4f: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: ifeq 64
      // 56: aload 0
      // 57: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 5a: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 5d: goto 68
      // 60: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 63: athrow
      // 64: aload 0
      // 65: getfield sixtwo/nd.piqGr Ljava/lang/String;
      // 68: astore 5
      // 6a: aload 1
      // 6b: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 70: astore 6
      // 72: aload 6
      // 74: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 79: ifeq c8
      // 7c: aload 6
      // 7e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 83: checkcast java/lang/String
      // 86: astore 7
      // 88: aload 0
      // 89: getfield sixtwo/nd.AMdan Z
      // 8c: iload 4
      // 8e: ifeq c9
      // 91: ifeq a7
      // 94: goto 9b
      // 97: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: aload 7
      // 9d: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // a0: goto a9
      // a3: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: aload 7
      // a9: astore 8
      // ab: aload 8
      // ad: aload 5
      // af: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // b2: iload 4
      // b4: ifeq c2
      // b7: ifeq c3
      // ba: goto c1
      // bd: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c0: athrow
      // c1: bipush 1
      // c2: ireturn
      // c3: iload 4
      // c5: ifne 72
      // c8: bipush 0
      // c9: ireturn
   }

   private boolean csY(List<String> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nd.JkvGk J
      // 03: ldc2_w 8488052308123
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cuo ()I
      // 0b: istore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/nd.zjfHh I
      // 11: iload 4
      // 13: ifeq 21
      // 16: ifgt 22
      // 19: goto 20
      // 1c: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: bipush 1
      // 21: ireturn
      // 22: aload 1
      // 23: invokestatic sixtwo/iZ.byr (Ljava/util/List;)Ljava/time/LocalDate;
      // 26: astore 5
      // 28: aload 5
      // 2a: iload 4
      // 2c: ifeq 42
      // 2f: ifnonnull 3f
      // 32: goto 39
      // 35: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 38: athrow
      // 39: bipush 0
      // 3a: ireturn
      // 3b: invokestatic sixtwo/nd.ctg (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: invokestatic java/time/LocalDate.now ()Ljava/time/LocalDate;
      // 42: astore 6
      // 44: aload 6
      // 46: aload 0
      // 47: getfield sixtwo/nd.zjfHh I
      // 4a: i2l
      // 4b: invokevirtual java/time/LocalDate.plusDays (J)Ljava/time/LocalDate;
      // 4e: aload 5
      // 50: invokevirtual java/time/LocalDate.isBefore (Ljava/time/chrono/ChronoLocalDate;)Z
      // 53: ireturn
   }

   public String csZ() {
      return this.piqGr;
   }

   private static Object ctj(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cti(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int ctm(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ctl(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   protected boolean ctf(Object var1) {
      return var1 instanceof nd;
   }

   private static String cth(byte[] var0) {
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

   private static MatchException ctg(MatchException var0) {
      return var0;
   }

   public void ctd(boolean var1) {
      this.AMdan = var1;
   }

   public void ctc(String var1) {
      this.piqGr = var1;
   }

   public void cte(int var1) {
      this.zjfHh = var1;
   }
}
