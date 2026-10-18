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
import net.minecraft.class_1887;
import net.minecraft.class_5321;

public class ng implements nb {
   private transient rk gANkz;
   private String AhZpO;
   private int UgHqn;
   private boolean GkUnW;
   private boolean RpMDi;
   private static final long YmNtq = gb.aYR(847945890627004067L, 5479451422923301529L, MethodHandles.lookup().lookupClass()).a(102929415432139L);
   private static final String[] yRPAE;
   private static final String[] hehSp;
   private static final Map RIaWJ = new HashMap(13);
   private static final long[] vAtMC;
   private static final Integer[] OceTR;
   private static final Map sIxDy;

   public ng(class_5321<class_1887> var1, int var2, boolean var3, boolean var4) {
      this(var1.method_29177().toString(), var2, var3, var4);
   }

   public ng(class_5321<class_1887> var1, int var2, boolean var3) {
      this(var1.method_29177().toString(), var2, var3);
   }

   public ng(String var1, int var2, boolean var3, boolean var4) {
      this.AhZpO = var1;
      this.UgHqn = var2;
      this.GkUnW = var3;
      this.RpMDi = var4;
   }

   public ng(String var1, int var2, boolean var3) {
      this(var1, var2, var3, false);
   }

   public ng() {
   }

   static {
      long var11 = YmNtq ^ 84310439665730L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[13];
      int var18 = 0;
      String var17 = "¢á\u0083ô,1cþb\u001d\u0001P\u0010½*»~Ì\u0083Ns\u0013\u009d»æ\u0099Q\u0006äÚä½\u0018\u0087Í\t^6³7ù-I6f({ÖJ«û\u001a\u0002Ù\u001fßÊ\u0018ÿ<Q\u0086\u0091ìºÖjÎ\u008c¡L\u00ad\u0082?1\u009dó\u0087úâPz qf\bµw5XÛ\u001f\u009e³P¦ ,#\\=Z\u0082/\fõAâÀÃe4P5Á\u0010~¢gÊ®Ç]\u00875ß%qy\u008d!w\u0018àË`;Ú±UÝ/~>É\u0018ú¦¾X<õS\u001a¢*Ò\u0018Iv\u009b\u0015¼\u0080ÝHª¼ýJP3\u0097\u001aÄ¨ÓJE§éì xT\u008fP\\Þ\u0014Çgã\u001cû)øæQ\u0096ÔèÇ\u001bØ\u0098dâÚ\u0093\u0019Î¶üî\u00103#£¿\u0091/´ÎÆ*4S|Ñä°8l»\u0011\u009aÿ\u0010\u001eT-Ñy\u001e5\u000b±2ñusgê£ÞA\u0016üB¢Q`vaãg\u007f\u0085¹Ñ9I§e\u009eI?û\u0089\u0004Jx+{T\tbã\u0010W\u0081ù\u0005¬§:\u0095[khæXÈÖ¯";
      int var19 = "¢á\u0083ô,1cþb\u001d\u0001P\u0010½*»~Ì\u0083Ns\u0013\u009d»æ\u0099Q\u0006äÚä½\u0018\u0087Í\t^6³7ù-I6f({ÖJ«û\u001a\u0002Ù\u001fßÊ\u0018ÿ<Q\u0086\u0091ìºÖjÎ\u008c¡L\u00ad\u0082?1\u009dó\u0087úâPz qf\bµw5XÛ\u001f\u009e³P¦ ,#\\=Z\u0082/\fõAâÀÃe4P5Á\u0010~¢gÊ®Ç]\u00875ß%qy\u008d!w\u0018àË`;Ú±UÝ/~>É\u0018ú¦¾X<õS\u001a¢*Ò\u0018Iv\u009b\u0015¼\u0080ÝHª¼ýJP3\u0097\u001aÄ¨ÓJE§éì xT\u008fP\\Þ\u0014Çgã\u001cû)øæQ\u0096ÔèÇ\u001bØ\u0098dâÚ\u0093\u0019Î¶üî\u00103#£¿\u0091/´ÎÆ*4S|Ñä°8l»\u0011\u009aÿ\u0010\u001eT-Ñy\u001e5\u000b±2ñusgê£ÞA\u0016üB¢Q`vaãg\u007f\u0085¹Ñ9I§e\u009eI?û\u0089\u0004Jx+{T\tbã\u0010W\u0081ù\u0005¬§:\u0095[khæXÈÖ¯"
         .length();
      char var16 = ' ';
      int var24 = -1;

      label54:
      while (true) {
         String var25 = var17.substring(++var24, var24 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var25.getBytes("ISO-8859-1"));
            String var36 = cuL(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var36;
                  if ((var24 += var16) >= var19) {
                     yRPAE = var20;
                     hehSp = new String[13];
                     sIxDy = new HashMap(13);
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
                     String var4 = "M\u0084DHV°\u0088{\rGj\u008dô©c\u001cÓü\u008e õi·\u0013\u0005\u009d-C$\u0019GÒs=\u0095²fÿ[s«×ï\b,\u0081\u0010\u009b";
                     int var5 = "M\u0084DHV°\u0088{\rGj\u008dô©c\u001cÓü\u008e õi·\u0013\u0005\u009d-C$\u0019GÒs=\u0095²fÿ[s«×ï\b,\u0081\u0010\u009b".length();
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
                                    vAtMC = var6;
                                    OceTR = new Integer[8];
                                    return;
                                 }
                                 break;
                              default:
                                 var28[var10001] = var45;
                                 if (var2 < var5) {
                                    continue label36;
                                 }

                                 var4 = "\u0012dYDaO~!Þ\u008a\u001cág~ó\u001f";
                                 var5 = "\u0012dYDaO~!Þ\u008a\u001cág~ó\u001f".length();
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

                  var17 = "'Üº0y÷y¦1l!1Â\u001c/=?7@ÌíZ6âåX{+ù`ßç\u0010Ü\u000e\u001eÉ®<ÏæmÇl¿q[<\u008f";
                  var19 = "'Üº0y÷y¦1l!1Â\u001c/=?7@ÌíZ6âåX{+ù`ßç\u0010Ü\u000e\u001eÉ®<ÏæmÇl¿q[<\u008f".length();
                  var16 = ' ';
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
      // 000: getstatic sixtwo/ng.YmNtq J
      // 003: ldc2_w 126412884387972
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
      // 01a: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: iload 4
      // 027: ifeq 03e
      // 02a: instanceof sixtwo/ng
      // 02d: ifne 03d
      // 030: goto 037
      // 033: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: ireturn
      // 039: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 1
      // 03e: checkcast sixtwo/ng
      // 041: astore 5
      // 043: aload 5
      // 045: aload 0
      // 046: invokevirtual sixtwo/ng.cuJ (Ljava/lang/Object;)Z
      // 049: iload 4
      // 04b: ifeq 062
      // 04e: ifne 05e
      // 051: goto 058
      // 054: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 057: athrow
      // 058: bipush 0
      // 059: ireturn
      // 05a: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05d: athrow
      // 05e: aload 0
      // 05f: invokevirtual sixtwo/ng.cuB ()I
      // 062: aload 5
      // 064: invokevirtual sixtwo/ng.cuB ()I
      // 067: iload 4
      // 069: ifeq 085
      // 06c: if_icmpeq 07c
      // 06f: goto 076
      // 072: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: bipush 0
      // 077: ireturn
      // 078: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: aload 0
      // 07d: invokevirtual sixtwo/ng.cuC ()Z
      // 080: aload 5
      // 082: invokevirtual sixtwo/ng.cuC ()Z
      // 085: iload 4
      // 087: ifeq 0af
      // 08a: if_icmpeq 09a
      // 08d: goto 094
      // 090: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 093: athrow
      // 094: bipush 0
      // 095: ireturn
      // 096: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: aload 0
      // 09b: iload 4
      // 09d: ifeq 0b9
      // 0a0: invokevirtual sixtwo/ng.cuD ()Z
      // 0a3: aload 5
      // 0a5: invokevirtual sixtwo/ng.cuD ()Z
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: if_icmpeq 0b8
      // 0b2: bipush 0
      // 0b3: ireturn
      // 0b4: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 0
      // 0b9: invokevirtual sixtwo/ng.cuA ()Ljava/lang/String;
      // 0bc: astore 6
      // 0be: aload 5
      // 0c0: invokevirtual sixtwo/ng.cuA ()Ljava/lang/String;
      // 0c3: astore 7
      // 0c5: aload 6
      // 0c7: iload 4
      // 0c9: ifeq 0eb
      // 0cc: ifnonnull 0e9
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: aload 7
      // 0d8: ifnull 105
      // 0db: goto 0e2
      // 0de: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e1: athrow
      // 0e2: goto 0ff
      // 0e5: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e8: athrow
      // 0e9: aload 6
      // 0eb: aload 7
      // 0ed: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0f0: iload 4
      // 0f2: ifeq 106
      // 0f5: ifne 105
      // 0f8: goto 0ff
      // 0fb: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0fe: athrow
      // 0ff: bipush 0
      // 100: ireturn
      // 101: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: bipush 1
      // 106: ireturn
   }

   @Override
   public String toString() {
      long var1 = YmNtq ^ 116740329178536L;
      String var10000 = String.valueOf(this.cuz());
      String var10001 = this.cuA();
      int var10002 = this.cuB();
      boolean var3 = this.cuD();
      boolean var4 = this.cuC();
      int var5 = var10002;
      String var6 = var10001;
      String var7 = var10000;
      return cuO<"i">(19710, 8788870287402246798L ^ var1)
         + var7
         + cuO<"i">(14956, 3967194411484763159L ^ var1)
         + var6
         + cuO<"i">(19963, 1336249258442335107L ^ var1)
         + var5
         + cuO<"i">(3071, 6642655761797473664L ^ var1)
         + var4
         + cuO<"i">(19461, 2019928408682046073L ^ var1)
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
      // 00: getstatic sixtwo/ng.YmNtq J
      // 03: ldc2_w 6254485444745
      // 06: lxor
      // 07: lstore 1
      // 08: sipush 11646
      // 0b: ldc2_w 3297053821796265482
      // 0e: lload 1
      // 0f: lxor
      // 10: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 15: istore 4
      // 17: invokestatic sixtwo/nf.cuo ()I
      // 1a: bipush 1
      // 1b: istore 5
      // 1d: istore 3
      // 1e: iload 5
      // 20: sipush 13629
      // 23: ldc2_w 7742603348376303176
      // 26: lload 1
      // 27: lxor
      // 28: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2d: imul
      // 2e: aload 0
      // 2f: invokevirtual sixtwo/ng.cuB ()I
      // 32: iadd
      // 33: istore 5
      // 35: iload 5
      // 37: sipush 13629
      // 3a: ldc2_w 7742603348376303176
      // 3d: lload 1
      // 3e: lxor
      // 3f: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 44: imul
      // 45: aload 0
      // 46: invokevirtual sixtwo/ng.cuC ()Z
      // 49: iload 3
      // 4a: ifeq 64
      // 4d: ifeq 67
      // 50: goto 57
      // 53: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 56: athrow
      // 57: sipush 20637
      // 5a: ldc2_w 8957441101802394606
      // 5d: lload 1
      // 5e: lxor
      // 5f: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 64: goto 74
      // 67: sipush 30345
      // 6a: ldc2_w 2030289919128761848
      // 6d: lload 1
      // 6e: lxor
      // 6f: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 74: iadd
      // 75: istore 5
      // 77: iload 5
      // 79: sipush 13629
      // 7c: ldc2_w 7742603348376303176
      // 7f: lload 1
      // 80: lxor
      // 81: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 86: imul
      // 87: aload 0
      // 88: invokevirtual sixtwo/ng.cuD ()Z
      // 8b: iload 3
      // 8c: ifeq a6
      // 8f: ifeq a9
      // 92: goto 99
      // 95: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: sipush 14284
      // 9c: ldc2_w 6685299446039262398
      // 9f: lload 1
      // a0: lxor
      // a1: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a6: goto b6
      // a9: sipush 15817
      // ac: ldc2_w 2019703380106428089
      // af: lload 1
      // b0: lxor
      // b1: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // b6: iadd
      // b7: istore 5
      // b9: aload 0
      // ba: invokevirtual sixtwo/ng.cuA ()Ljava/lang/String;
      // bd: astore 6
      // bf: iload 5
      // c1: sipush 13629
      // c4: ldc2_w 7742603348376303176
      // c7: lload 1
      // c8: lxor
      // c9: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // ce: imul
      // cf: aload 6
      // d1: iload 3
      // d2: ifeq f5
      // d5: ifnonnull f3
      // d8: goto df
      // db: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // de: athrow
      // df: sipush 570
      // e2: ldc2_w 6221112937384608076
      // e5: lload 1
      // e6: lxor
      // e7: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // ec: goto f8
      // ef: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // f2: athrow
      // f3: aload 6
      // f5: invokevirtual java/lang/Object.hashCode ()I
      // f8: iadd
      // f9: istore 5
      // fb: iload 5
      // fd: ireturn
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
      // 000: getstatic sixtwo/ng.YmNtq J
      // 003: ldc2_w 19334279757036
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/nf.cup ()I
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifne 01e
      // 013: ifnull 030
      // 016: goto 01d
      // 019: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: aload 1
      // 01e: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 021: iload 4
      // 023: ifne 031
      // 026: ifeq 032
      // 029: goto 030
      // 02c: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02f: athrow
      // 030: bipush 0
      // 031: ireturn
      // 032: aload 0
      // 033: getfield sixtwo/ng.AhZpO Ljava/lang/String;
      // 036: iload 4
      // 038: ifne 050
      // 03b: ifnull 062
      // 03e: goto 045
      // 041: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 044: athrow
      // 045: aload 0
      // 046: getfield sixtwo/ng.AhZpO Ljava/lang/String;
      // 049: goto 050
      // 04c: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04f: athrow
      // 050: iload 4
      // 052: ifne 06c
      // 055: invokevirtual java/lang/String.isBlank ()Z
      // 058: ifeq 068
      // 05b: goto 062
      // 05e: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: bipush 1
      // 063: ireturn
      // 064: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: aload 0
      // 069: getfield sixtwo/ng.AhZpO Ljava/lang/String;
      // 06c: invokestatic net/minecraft/class_2960.method_12829 (Ljava/lang/String;)Lnet/minecraft/class_2960;
      // 06f: astore 5
      // 071: aload 5
      // 073: ifnonnull 07c
      // 076: bipush 0
      // 077: ireturn
      // 078: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 07f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 082: invokevirtual net/minecraft/class_638.method_30349 ()Lnet/minecraft/class_5455;
      // 085: getstatic net/minecraft/class_7924.field_41265 Lnet/minecraft/class_5321;
      // 088: invokeinterface net/minecraft/class_5455.method_30530 (Lnet/minecraft/class_5321;)Lnet/minecraft/class_2378; 2
      // 08d: astore 6
      // 08f: aload 6
      // 091: aload 5
      // 093: invokeinterface net/minecraft/class_2378.method_10223 (Lnet/minecraft/class_2960;)Ljava/util/Optional; 2
      // 098: aconst_null
      // 099: invokevirtual java/util/Optional.orElse (Ljava/lang/Object;)Ljava/lang/Object;
      // 09c: checkcast net/minecraft/class_6880
      // 09f: astore 7
      // 0a1: aload 7
      // 0a3: iload 4
      // 0a5: ifne 0c3
      // 0a8: ifnonnull 0b8
      // 0ab: goto 0b2
      // 0ae: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b1: athrow
      // 0b2: bipush 0
      // 0b3: ireturn
      // 0b4: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b7: athrow
      // 0b8: aload 1
      // 0b9: aload 1
      // 0ba: invokestatic sixtwo/jh.bCi (Lnet/minecraft/class_1799;)Lnet/minecraft/class_9331;
      // 0bd: getstatic net/minecraft/class_9304.field_49385 Lnet/minecraft/class_9304;
      // 0c0: invokevirtual net/minecraft/class_1799.method_58695 (Lnet/minecraft/class_9331;Ljava/lang/Object;)Ljava/lang/Object;
      // 0c3: checkcast net/minecraft/class_9304
      // 0c6: astore 8
      // 0c8: aload 8
      // 0ca: iload 4
      // 0cc: ifne 0e6
      // 0cf: invokevirtual net/minecraft/class_9304.method_57543 ()Z
      // 0d2: ifeq 0e4
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: bipush 0
      // 0dd: goto 0eb
      // 0e0: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: aload 8
      // 0e6: aload 7
      // 0e8: invokevirtual net/minecraft/class_9304.method_57536 (Lnet/minecraft/class_6880;)I
      // 0eb: istore 9
      // 0ed: aload 0
      // 0ee: getfield sixtwo/ng.RpMDi Z
      // 0f1: iload 4
      // 0f3: ifne 13c
      // 0f6: ifeq 138
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: aload 0
      // 101: getfield sixtwo/ng.UgHqn I
      // 104: iload 4
      // 106: ifne 13c
      // 109: goto 110
      // 10c: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10f: athrow
      // 110: ifgt 138
      // 113: goto 11a
      // 116: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 119: athrow
      // 11a: iload 9
      // 11c: iload 4
      // 11e: ifne 133
      // 121: goto 128
      // 124: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: ifgt 136
      // 12b: goto 132
      // 12e: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: bipush 1
      // 133: goto 137
      // 136: bipush 0
      // 137: ireturn
      // 138: aload 0
      // 139: getfield sixtwo/ng.RpMDi Z
      // 13c: iload 4
      // 13e: ifne 185
      // 141: ifne 183
      // 144: goto 14b
      // 147: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14a: athrow
      // 14b: aload 0
      // 14c: getfield sixtwo/ng.UgHqn I
      // 14f: iload 4
      // 151: ifne 185
      // 154: goto 15b
      // 157: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15a: athrow
      // 15b: ifgt 183
      // 15e: goto 165
      // 161: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 164: athrow
      // 165: iload 9
      // 167: iload 4
      // 169: ifne 17e
      // 16c: goto 173
      // 16f: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 172: athrow
      // 173: ifle 181
      // 176: goto 17d
      // 179: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17c: athrow
      // 17d: bipush 1
      // 17e: goto 182
      // 181: bipush 0
      // 182: ireturn
      // 183: iload 9
      // 185: iload 4
      // 187: ifne 19f
      // 18a: ifle 1e5
      // 18d: goto 194
      // 190: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 193: athrow
      // 194: aload 0
      // 195: getfield sixtwo/ng.GkUnW Z
      // 198: goto 19f
      // 19b: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19e: athrow
      // 19f: iload 4
      // 1a1: ifne 1c7
      // 1a4: ifeq 1c5
      // 1a7: goto 1ae
      // 1aa: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ad: athrow
      // 1ae: iload 9
      // 1b0: aload 0
      // 1b1: getfield sixtwo/ng.UgHqn I
      // 1b4: if_icmplt 1e5
      // 1b7: goto 1be
      // 1ba: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1bd: athrow
      // 1be: goto 1da
      // 1c1: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c4: athrow
      // 1c5: iload 9
      // 1c7: iload 4
      // 1c9: ifne 1e2
      // 1cc: aload 0
      // 1cd: getfield sixtwo/ng.UgHqn I
      // 1d0: if_icmpne 1e5
      // 1d3: goto 1da
      // 1d6: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d9: athrow
      // 1da: bipush 1
      // 1db: goto 1e2
      // 1de: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e1: athrow
      // 1e2: goto 1e6
      // 1e5: bipush 0
      // 1e6: istore 10
      // 1e8: aload 0
      // 1e9: getfield sixtwo/ng.RpMDi Z
      // 1ec: iload 4
      // 1ee: ifne 21b
      // 1f1: ifeq 219
      // 1f4: goto 1fb
      // 1f7: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1fa: athrow
      // 1fb: iload 10
      // 1fd: iload 4
      // 1ff: ifne 214
      // 202: goto 209
      // 205: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 208: athrow
      // 209: ifne 217
      // 20c: goto 213
      // 20f: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 212: athrow
      // 213: bipush 1
      // 214: goto 218
      // 217: bipush 0
      // 218: ireturn
      // 219: iload 10
      // 21b: ireturn
   }

   @Override
   public void fromJson(JsonObject var1) {
      long var2 = YmNtq ^ 105043053697775L;
      this.AhZpO = this.readString(var1, cuO<"i">(15417, 5966009178334563588L ^ var2));
      this.UgHqn = this.readInt(var1, cuO<"i">(17154, 1786141463304860214L ^ var2));
      this.GkUnW = this.readBoolean(var1, cuO<"i">(8971, 5673612498371154489L ^ var2), false);
      this.RpMDi = this.readBoolean(var1, cuO<"i">(32493, 6935598133772570580L ^ var2), false);
      this.gANkz = null;
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
      // 00: getstatic sixtwo/ng.YmNtq J
      // 03: ldc2_w 72028642485348
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: new com/google/gson/JsonObject
      // 0e: dup
      // 0f: invokespecial com/google/gson/JsonObject.<init> ()V
      // 12: astore 4
      // 14: istore 3
      // 15: iload 3
      // 16: ifne 8f
      // 19: aload 0
      // 1a: getfield sixtwo/ng.AhZpO Ljava/lang/String;
      // 1d: ifnull 44
      // 20: goto 27
      // 23: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 26: athrow
      // 27: aload 4
      // 29: sipush 12857
      // 2c: ldc2_w 2053202845859609991
      // 2f: lload 1
      // 30: lxor
      // 31: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/ng.cuO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 36: aload 0
      // 37: getfield sixtwo/ng.AhZpO Ljava/lang/String;
      // 3a: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/String;)V
      // 3d: goto 44
      // 40: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: aload 4
      // 46: sipush 4104
      // 49: ldc2_w 6784614920315297721
      // 4c: lload 1
      // 4d: lxor
      // 4e: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/ng.cuO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 53: aload 0
      // 54: getfield sixtwo/ng.UgHqn I
      // 57: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 5a: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Number;)V
      // 5d: aload 4
      // 5f: sipush 12933
      // 62: ldc2_w 1592127843133586744
      // 65: lload 1
      // 66: lxor
      // 67: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/ng.cuO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6c: aload 0
      // 6d: getfield sixtwo/ng.GkUnW Z
      // 70: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 73: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Boolean;)V
      // 76: aload 4
      // 78: sipush 2695
      // 7b: ldc2_w 5192759964120270130
      // 7e: lload 1
      // 7f: lxor
      // 80: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/ng.cuO (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 85: aload 0
      // 86: getfield sixtwo/ng.RpMDi Z
      // 89: invokestatic java/lang/Boolean.valueOf (Z)Ljava/lang/Boolean;
      // 8c: invokevirtual com/google/gson/JsonObject.addProperty (Ljava/lang/String;Ljava/lang/Boolean;)V
      // 8f: aload 4
      // 91: areturn
   }

   public void cuI(boolean var1) {
      this.RpMDi = var1;
   }

   public void cuG(int var1) {
      this.UgHqn = var1;
   }

   public boolean cuD() {
      return this.RpMDi;
   }

   public void cuH(boolean var1) {
      this.GkUnW = var1;
   }

   private static Object cuN(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cuM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int cuQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cuP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void cuF(String var1) {
      this.AhZpO = var1;
   }

   public rk cuz() {
      return this.gANkz;
   }

   private static MatchException cuK(MatchException var0) {
      return var0;
   }

   private static CallSite cuO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cuN".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ng" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   protected boolean cuJ(Object var1) {
      return var1 instanceof ng;
   }

   public void cuE(rk var1) {
      this.gANkz = var1;
   }

   private static CallSite cuR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cuQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ng" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public rk cuy() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ng.YmNtq J
      // 03: ldc2_w 99531483034895
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/nf.cup ()I
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/ng.gANkz Lsixtwo/rk;
      // 10: iload 3
      // 11: ifne 47
      // 14: ifnonnull 43
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: new sixtwo/rk
      // 22: dup
      // 23: sipush 17511
      // 26: ldc2_w 3458301690648783510
      // 29: lload 1
      // 2a: lxor
      // 2b: invokedynamic f (IJ)I bsm=sixtwo/ng.cuR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 30: invokespecial sixtwo/rk.<init> (I)V
      // 33: getstatic sixtwo/rj.UPXqT Lsixtwo/rj;
      // 36: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 39: putfield sixtwo/ng.gANkz Lsixtwo/rk;
      // 3c: goto 43
      // 3f: invokestatic sixtwo/ng.cuK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 0
      // 44: getfield sixtwo/ng.gANkz Lsixtwo/rk;
      // 47: areturn
   }

   private static int cuP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 11314;
      if (OceTR[var3] == null) {
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
         long var5 = vAtMC[var3];
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
         Object[] var9 = (Object[])sIxDy.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               sIxDy.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ng", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         OceTR[var3] = var15;
      }

      return OceTR[var3];
   }

   private static String cuM(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23581;
      if (hehSp[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])RIaWJ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               RIaWJ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ng", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = yRPAE[var5].getBytes("ISO-8859-1");
         hehSp[var5] = cuL(((Cipher)var4[0]).doFinal(var9));
      }

      return hehSp[var5];
   }

   private static String cuL(byte[] var0) {
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

   public int cuB() {
      return this.UgHqn;
   }

   public boolean cuC() {
      return this.GkUnW;
   }

   public String cuA() {
      return this.AhZpO;
   }
}
