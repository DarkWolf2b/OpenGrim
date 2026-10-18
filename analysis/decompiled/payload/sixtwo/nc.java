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
import net.minecraft.class_1799;

public class nc implements nb {
   private String hYtne;
   private boolean igUoH;
   private boolean JPVqp;
   private static final long QSAvd = gb.aYR(-3680703847985104501L, -3092701088504091093L, MethodHandles.lookup().lookupClass()).a(235940842565768L);
   private static final String[] gDKAf;
   private static final String[] sjYYh;
   private static final Map LwJfx = new HashMap(13);
   private static final long[] Hshvn;
   private static final Integer[] jCSBB;
   private static final Map oLYNn;

   static {
      long var11 = QSAvd ^ 48695811114515L;
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
      String var17 = "qU\r\u0004\u0005]\u0091\u0018¦\u0099´ùî¨\u0001ýÒxSÐ°*¿é\u00183º¦+j\u0015Ùõû°\u001bEßôà\u001d'É\u0092\u0097þæ9D <ÃÞc&a4A0:j\fãýÖâM(Öæ\u001a\u009dèÀÍ\u001bè·\u0006¨r\r ý%¤\u0000\u0014\u0089$Èò§s\u009b\u0005$+\u001dO\u000f\u0003á\u0001=<<á\u0086\u0007<6\u0013Ì¢\u0018Ã\u001fâ+.`°bäÛ\u0013\u0093\u0016Mó\u00975¦=Ð\u0088\u001c\u009c< rv\u0088c¢\u0094}Ö¬\u0082ôÁ8o¦3\u0084o\u0007)À\u001e\u0011®\fo\u000bh1\r¡þ\u0010¢\u008f\u0098§\u0087¸/ÞµC\u0094ôTp>¬";
      int var19 = "qU\r\u0004\u0005]\u0091\u0018¦\u0099´ùî¨\u0001ýÒxSÐ°*¿é\u00183º¦+j\u0015Ùõû°\u001bEßôà\u001d'É\u0092\u0097þæ9D <ÃÞc&a4A0:j\fãýÖâM(Öæ\u001a\u009dèÀÍ\u001bè·\u0006¨r\r ý%¤\u0000\u0014\u0089$Èò§s\u009b\u0005$+\u001dO\u000f\u0003á\u0001=<<á\u0086\u0007<6\u0013Ì¢\u0018Ã\u001fâ+.`°bäÛ\u0013\u0093\u0016Mó\u00975¦=Ð\u0088\u001c\u009c< rv\u0088c¢\u0094}Ö¬\u0082ôÁ8o¦3\u0084o\u0007)À\u001e\u0011®\fo\u000bh1\r¡þ\u0010¢\u008f\u0098§\u0087¸/ÞµC\u0094ôTp>¬"
         .length();
      char var16 = 24;
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = csQ(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     gDKAf = var20;
                     sjYYh = new String[9];
                     oLYNn = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[7];
                     int var3 = 0;
                     String var4 = "\u0018\u0017\u0014tp\nP\u0018&ÓCçN¥\u0083#%ÓÅ$;\u0094k7I¤\u009a'\u000e\u001f\u00018?U9\u0007-¾E\u001e";
                     int var5 = "\u0018\u0017\u0014tp\nP\u0018&ÓCçN¥\u0083#%ÓÅ$;\u0094k7I¤\u009a'\u000e\u001f\u00018?U9\u0007-¾E\u001e".length();
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
                                    Hshvn = var6;
                                    jCSBB = new Integer[7];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "\u0001Z!ûÐ\u0007\u0088@³÷\u008em\b\u0095\u0004\u008c";
                                 var5 = "\u0001Z!ûÐ\u0007\u0088@³÷\u008em\b\u0095\u0004\u008c".length();
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

                  var17 = "ÁÎ¬\u0016·\u008d\u0089ôâq/u\u0098/;éÃ\u0093u\u00ad=¡\u000bÖ\u0010y¼\u008d?\\Ô\\\u0005B\u0083£ ðf\b5";
                  var19 = "ÁÎ¬\u0016·\u008d\u0089ôâq/u\u0098/;éÃ\u0093u\u00ad=¡\u000bÖ\u0010y¼\u008d?\\Ô\\\u0005B\u0083£ ðf\b5".length();
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
      // 00: getstatic sixtwo/nc.QSAvd J
      // 03: ldc2_w 15547180161301
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
      // 1a: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: ireturn
      // 20: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23: athrow
      // 24: aload 1
      // 25: iload 4
      // 27: ifne 3e
      // 2a: instanceof sixtwo/nc
      // 2d: ifne 3d
      // 30: goto 37
      // 33: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: bipush 0
      // 38: ireturn
      // 39: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 1
      // 3e: checkcast sixtwo/nc
      // 41: astore 5
      // 43: aload 5
      // 45: aload 0
      // 46: invokevirtual sixtwo/nc.csO (Ljava/lang/Object;)Z
      // 49: iload 4
      // 4b: ifne 62
      // 4e: ifne 5e
      // 51: goto 58
      // 54: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: bipush 0
      // 59: ireturn
      // 5a: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 0
      // 5f: invokevirtual sixtwo/nc.csJ ()Z
      // 62: aload 5
      // 64: invokevirtual sixtwo/nc.csJ ()Z
      // 67: iload 4
      // 69: ifne 91
      // 6c: if_icmpeq 7c
      // 6f: goto 76
      // 72: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 75: athrow
      // 76: bipush 0
      // 77: ireturn
      // 78: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 0
      // 7d: iload 4
      // 7f: ifne 9b
      // 82: invokevirtual sixtwo/nc.csK ()Z
      // 85: aload 5
      // 87: invokevirtual sixtwo/nc.csK ()Z
      // 8a: goto 91
      // 8d: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: if_icmpeq 9a
      // 94: bipush 0
      // 95: ireturn
      // 96: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 99: athrow
      // 9a: aload 0
      // 9b: invokevirtual sixtwo/nc.csI ()Ljava/lang/String;
      // 9e: astore 6
      // a0: aload 5
      // a2: invokevirtual sixtwo/nc.csI ()Ljava/lang/String;
      // a5: astore 7
      // a7: aload 6
      // a9: iload 4
      // ab: ifne cd
      // ae: ifnonnull cb
      // b1: goto b8
      // b4: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b7: athrow
      // b8: aload 7
      // ba: ifnull e7
      // bd: goto c4
      // c0: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c3: athrow
      // c4: goto e1
      // c7: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ca: athrow
      // cb: aload 6
      // cd: aload 7
      // cf: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // d2: iload 4
      // d4: ifne e8
      // d7: ifne e7
      // da: goto e1
      // dd: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e0: athrow
      // e1: bipush 0
      // e2: ireturn
      // e3: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e6: athrow
      // e7: bipush 1
      // e8: ireturn
   }

   @Override
   public String toString() {
      long var1 = QSAvd ^ 38234360273112L;
      String var10000 = this.csI();
      boolean var3 = this.csK();
      boolean var4 = this.csJ();
      String var5 = var10000;
      return csT<"h">(3974, 3070024954839128492L ^ var1)
         + var5
         + csT<"h">(17558, 5135943379548705470L ^ var1)
         + var4
         + csT<"h">(28038, 6621834001909431208L ^ var1)
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
      // 00: getstatic sixtwo/nc.QSAvd J
      // 03: ldc2_w 130707242461572
      // 06: lxor
      // 07: lstore 1
      // 08: sipush 20465
      // 0b: ldc2_w 8728059555920035829
      // 0e: lload 1
      // 0f: lxor
      // 10: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15: istore 4
      // 17: invokestatic sixtwo/nf.cup ()I
      // 1a: bipush 1
      // 1b: istore 5
      // 1d: istore 3
      // 1e: iload 5
      // 20: sipush 5165
      // 23: ldc2_w 4078879280511345706
      // 26: lload 1
      // 27: lxor
      // 28: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d: imul
      // 2e: aload 0
      // 2f: invokevirtual sixtwo/nc.csJ ()Z
      // 32: iload 3
      // 33: ifne 4d
      // 36: ifeq 50
      // 39: goto 40
      // 3c: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3f: athrow
      // 40: sipush 17840
      // 43: ldc2_w 6127249342061852085
      // 46: lload 1
      // 47: lxor
      // 48: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4d: goto 5d
      // 50: sipush 26521
      // 53: ldc2_w 1622468391857756058
      // 56: lload 1
      // 57: lxor
      // 58: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5d: iadd
      // 5e: istore 5
      // 60: iload 5
      // 62: sipush 5165
      // 65: ldc2_w 4078879280511345706
      // 68: lload 1
      // 69: lxor
      // 6a: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6f: imul
      // 70: aload 0
      // 71: invokevirtual sixtwo/nc.csK ()Z
      // 74: iload 3
      // 75: ifne 8f
      // 78: ifeq 92
      // 7b: goto 82
      // 7e: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 81: athrow
      // 82: sipush 31907
      // 85: ldc2_w 1837355260198489253
      // 88: lload 1
      // 89: lxor
      // 8a: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8f: goto 9f
      // 92: sipush 5862
      // 95: ldc2_w 7748280945673791206
      // 98: lload 1
      // 99: lxor
      // 9a: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 9f: iadd
      // a0: istore 5
      // a2: aload 0
      // a3: invokevirtual sixtwo/nc.csI ()Ljava/lang/String;
      // a6: astore 6
      // a8: iload 5
      // aa: sipush 5165
      // ad: ldc2_w 4078879280511345706
      // b0: lload 1
      // b1: lxor
      // b2: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // b7: imul
      // b8: aload 6
      // ba: iload 3
      // bb: ifne de
      // be: ifnonnull dc
      // c1: goto c8
      // c4: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c7: athrow
      // c8: sipush 10824
      // cb: ldc2_w 6187787160969304650
      // ce: lload 1
      // cf: lxor
      // d0: invokedynamic v (IJ)I bsm=sixtwo/nc.csW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // d5: goto e1
      // d8: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // db: athrow
      // dc: aload 6
      // de: invokevirtual java/lang/Object.hashCode ()I
      // e1: iadd
      // e2: istore 5
      // e4: iload 5
      // e6: ireturn
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
      // 00: getstatic sixtwo/nc.QSAvd J
      // 03: ldc2_w 52045424338640
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 4
      // 0d: aload 1
      // 0e: iload 4
      // 10: ifne 1e
      // 13: ifnull 30
      // 16: goto 1d
      // 19: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 21: iload 4
      // 23: ifne 31
      // 26: ifeq 32
      // 29: goto 30
      // 2c: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: bipush 0
      // 31: ireturn
      // 32: aload 0
      // 33: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 36: iload 4
      // 38: ifne 50
      // 3b: ifnull 62
      // 3e: goto 45
      // 41: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: aload 0
      // 46: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 49: goto 50
      // 4c: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: iload 4
      // 52: ifne 6c
      // 55: invokevirtual java/lang/String.isBlank ()Z
      // 58: ifeq 68
      // 5b: goto 62
      // 5e: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: bipush 1
      // 63: ireturn
      // 64: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 1
      // 69: invokestatic sixtwo/jc.bzE (Lnet/minecraft/class_1799;)Ljava/lang/String;
      // 6c: astore 5
      // 6e: aload 0
      // 6f: iload 4
      // 71: ifne 90
      // 74: getfield sixtwo/nc.JPVqp Z
      // 77: ifeq 8f
      // 7a: goto 81
      // 7d: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: aload 0
      // 82: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 85: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 88: goto 93
      // 8b: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: aload 0
      // 90: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 93: astore 6
      // 95: aload 0
      // 96: getfield sixtwo/nc.JPVqp Z
      // 99: ifeq a8
      // 9c: aload 5
      // 9e: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // a1: goto aa
      // a4: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a7: athrow
      // a8: aload 5
      // aa: astore 7
      // ac: aload 0
      // ad: getfield sixtwo/nc.igUoH Z
      // b0: iload 4
      // b2: ifne e9
      // b5: ifeq e2
      // b8: goto bf
      // bb: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: aload 7
      // c1: aload 6
      // c3: invokevirtual java/lang/String.contains (Ljava/lang/CharSequence;)Z
      // c6: iload 4
      // c8: ifne ff
      // cb: goto d2
      // ce: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d1: athrow
      // d2: ifeq fe
      // d5: goto dc
      // d8: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // db: athrow
      // dc: bipush 1
      // dd: ireturn
      // de: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e1: athrow
      // e2: aload 7
      // e4: aload 6
      // e6: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // e9: iload 4
      // eb: ifne ff
      // ee: ifeq fe
      // f1: goto f8
      // f4: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // f7: athrow
      // f8: bipush 1
      // f9: ireturn
      // fa: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // fd: athrow
      // fe: bipush 0
      // ff: ireturn
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = QSAvd ^ 106967838294227L;
      this.hYtne = this.readString(var1, csT<"h">(29229, 1041622018777283585L ^ var2));
      this.igUoH = this.readBoolean(var1, csT<"h">(20308, 7396137716460208500L ^ var2), false);
      this.JPVqp = this.readBoolean(var1, csT<"h">(2184, 4328599750265112236L ^ var2), false);
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
      // 00: getstatic sixtwo/nc.QSAvd J
      // 03: ldc2_w 139921985764952
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 4
      // 14: istore 3
      // 15: iload 3
      // 16: ifne 75
      // 19: aload 0
      // 1a: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 1d: ifnull 43
      // 20: goto 27
      // 23: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: bipush 16
      // 2b: ldc2_w 4248074374119911609
      // 2e: lload 1
      // 2f: lxor
      // 30: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/nc.csT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 35: aload 0
      // 36: getfield sixtwo/nc.hYtne Ljava/lang/String;
      // 39: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 3c: goto 43
      // 3f: invokestatic sixtwo/nc.csP (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 4
      // 45: sipush 21627
      // 48: ldc2_w 1893298972301305047
      // 4b: lload 1
      // 4c: lxor
      // 4d: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/nc.csT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 52: aload 0
      // 53: getfield sixtwo/nc.igUoH Z
      // 56: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 59: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Boolean;)V
      // 5c: aload 4
      // 5e: sipush 6173
      // 61: ldc2_w 2258751015741155504
      // 64: lload 1
      // 65: lxor
      // 66: invokedynamic h (IJ)Ljava/lang/String; bsm=sixtwo/nc.csT (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6b: aload 0
      // 6c: getfield sixtwo/nc.JPVqp Z
      // 6f: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 72: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Boolean;)V
      // 75: aload 4
      // 77: areturn
   }

   private static CallSite csT(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("csS".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException csP(MatchException var0) {
      return var0;
   }

   private static String csR(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 25351;
      if (sjYYh[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])LwJfx.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               LwJfx.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/nc", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = gDKAf[var5].getBytes("ISO-8859-1");
         sjYYh[var5] = csQ(((Cipher)var4[0]).doFinal(var9));
      }

      return sjYYh[var5];
   }

   protected boolean csO(Object var1) {
      return var1 instanceof nc;
   }

   private static int csV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = csU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String csQ(byte[] var0) {
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

   public boolean csK() {
      return this.JPVqp;
   }

   public String csI() {
      return this.hYtne;
   }

   public boolean csJ() {
      return this.igUoH;
   }

   private static int csU(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 13426;
      if (jCSBB[var3] == null) {
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
         long var5 = Hshvn[var3];
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
         Object[] var9 = (Object[])oLYNn.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               oLYNn.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/nc", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jCSBB[var3] = var15;
      }

      return jCSBB[var3];
   }

   private static CallSite csW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("csV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/nc" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Object csS(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = csR(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void csM(boolean var1) {
      this.igUoH = var1;
   }

   public void csL(String var1) {
      this.hYtne = var1;
   }

   public void csN(boolean var1) {
      this.JPVqp = var1;
   }
}
