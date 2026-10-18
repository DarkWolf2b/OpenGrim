package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;
import net.minecraft.class_4588;
import org.joml.Matrix4f;

public final class lj {
   private final class_1044 gIqkN;
   private final li$ux huWPq;
   private final li$ut ZTLTq;
   private final Map<Integer, ll> ppJSr;
   private final Map<Integer, Map<Integer, Float>> hyjPr;
   private final ConcurrentHashMap<Long, Float> sJMLD = new ConcurrentHashMap<>();
   private final ConcurrentHashMap<Long, Float> RMDjl = new ConcurrentHashMap<>();
   private static String oxhLM;
   private static final long NptTm = gb.aYR(7281799083301821257L, 293512084061843237L, MethodHandles.lookup().lookupClass()).a(123464497878635L);
   private static final long[] BvobX;
   private static final Integer[] WnbWs;
   private static final Map rQzTB = new HashMap(13);
   private static final long[] wHyUV;
   private static final Long[] Wnpsy;
   private static final Map HqyXG;

   public lj(class_1044 var1, li$ux var2, li$ut var3, Map<Integer, ll> var4, Map<Integer, Map<Integer, Float>> var5) {
      this.gIqkN = var1;
      this.huWPq = var2;
      this.ZTLTq = var3;
      this.ppJSr = var4;
      this.hyjPr = var5;
   }

   static {
      bYU("Yh2DZ");
      long var11 = NptTm ^ 117272306303326L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var19 = new long[10];
      int var16 = 0;
      String var17 = "å \u007f\u001c\u0093éÅ\u0099ÿ\u0006Ò¼Ò\u0087§¦Ý½Òîêá8k\u0014qÓÿ ½Îi°-[ó ·¾\u008d\b-!ÇòóJ'ÁGö}Ê+¹Î$!è\u009a>Ý7ä";
      int var18 = "å \u007f\u001c\u0093éÅ\u0099ÿ\u0006Ò¼Ò\u0087§¦Ý½Òîêá8k\u0014qÓÿ ½Îi°-[ó ·¾\u008d\b-!ÇòóJ'ÁGö}Ê+¹Î$!è\u009a>Ý7ä".length();
      byte var15 = 0;

      label41:
      while (true) {
         int var10001 = var15;
         var15 += 8;
         byte[] var20 = var17.substring(var10001, var15).getBytes("ISO-8859-1");
         long[] var25 = var19;
         var10001 = var16++;
         long var31 = (var20[0] & 255L) << 56
            | (var20[1] & 255L) << 48
            | (var20[2] & 255L) << 40
            | (var20[3] & 255L) << 32
            | (var20[4] & 255L) << 24
            | (var20[5] & 255L) << 16
            | (var20[6] & 255L) << 8
            | var20[7] & 255L;
         byte var34 = -1;

         while (true) {
            long var21 = var31;
            byte[] var23 = var13.doFinal(
               new byte[]{
                  (byte)(var21 >>> 56),
                  (byte)(var21 >>> 48),
                  (byte)(var21 >>> 40),
                  (byte)(var21 >>> 32),
                  (byte)(var21 >>> 24),
                  (byte)(var21 >>> 16),
                  (byte)(var21 >>> 8),
                  (byte)var21
               }
            );
            long var38 = (var23[0] & 255L) << 56
               | (var23[1] & 255L) << 48
               | (var23[2] & 255L) << 40
               | (var23[3] & 255L) << 32
               | (var23[4] & 255L) << 24
               | (var23[5] & 255L) << 16
               | (var23[6] & 255L) << 8
               | var23[7] & 255L;
            switch (var34) {
               case 0:
                  var25[var10001] = var38;
                  if (var15 >= var18) {
                     BvobX = var19;
                     WnbWs = new Integer[10];
                     HqyXG = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "Ã\u0011ê\"0d·ä·ïÒÒ·%©_";
                     int var5 = "Ã\u0011ê\"0d·ä·ïÒÒ·%©_".length();
                     byte var2 = 0;

                     do {
                        int var29 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                        var29 = var3++;
                        long var8 = (var7[0] & 255L) << 56
                           | (var7[1] & 255L) << 48
                           | (var7[2] & 255L) << 40
                           | (var7[3] & 255L) << 32
                           | (var7[4] & 255L) << 24
                           | (var7[5] & 255L) << 16
                           | (var7[6] & 255L) << 8
                           | var7[7] & 255L;
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
                        var38 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var37 = -1;
                        var6[var29] = var38;
                     } while (var2 < var5);

                     wHyUV = var6;
                     Wnpsy = new Long[2];
                     return;
                  }
                  break;
               default:
                  var25[var10001] = var38;
                  if (var15 < var18) {
                     continue label41;
                  }

                  var17 = "Æ\u0010<;TäÛ\bÝbÚ\u00055\u007fæV";
                  var18 = "Æ\u0010<;TäÛ\bÝbÚ\u00055\u007fæV".length();
                  var15 = 0;
            }

            byte var28 = var15;
            var15 += 8;
            var20 = var17.substring(var28, var15).getBytes("ISO-8859-1");
            var25 = var19;
            var10001 = var16++;
            var31 = (var20[0] & 255L) << 56
               | (var20[1] & 255L) << 48
               | (var20[2] & 255L) << 40
               | (var20[3] & 255L) << 32
               | (var20[4] & 255L) << 24
               | (var20[5] & 255L) << 16
               | (var20[6] & 255L) << 8
               | var20[7] & 255L;
            var34 = 0;
         }
      }
   }

   private static int bYY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bYX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void bYL() {
      this.sJMLD.clear();
      this.RMDjl.clear();
   }

   private static int bYX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28729;
      if (WnbWs[var3] == null) {
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
         long var5 = BvobX[var3];
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
         Object[] var9 = (Object[])rQzTB.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               rQzTB.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lj", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         WnbWs[var3] = var15;
      }

      return WnbWs[var3];
   }

   public ConcurrentHashMap<Long, Float> bYT() {
      return this.RMDjl;
   }

   private static long bYA(String var0, float var1) {
      long var2 = NptTm ^ 4621637866616L;
      int var4 = var0.hashCode();
      return var4 & bZc<"y">(218, 6385556733079592533L ^ var2) ^ (long)Float.floatToIntBits(var1) << bYZ<"h">(21178, 2467883596893846877L ^ var2);
   }

   public li$ux bYO() {
      return this.huWPq;
   }

   private static long bZb(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = bZa(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   private float bYx(int[] param1, int param2, int param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 37590951591482
      // 006: lxor
      // 007: lstore 5
      // 009: bipush -1
      // 00a: istore 8
      // 00c: fconst_0
      // 00d: fstore 9
      // 00f: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 012: bipush 0
      // 013: istore 10
      // 015: iload 2
      // 016: istore 11
      // 018: astore 7
      // 01a: iload 11
      // 01c: iload 3
      // 01d: if_icmpge 108
      // 020: aload 1
      // 021: iload 11
      // 023: iaload
      // 024: istore 12
      // 026: iload 10
      // 028: aload 7
      // 02a: ifnull 048
      // 02d: ifeq 03f
      // 030: goto 037
      // 033: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: istore 10
      // 03a: aload 7
      // 03c: ifnonnull 100
      // 03f: iload 12
      // 041: goto 048
      // 044: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 047: athrow
      // 048: aload 7
      // 04a: ifnull 06d
      // 04d: sipush 1757
      // 050: ldc2_w 884385236789822325
      // 053: lload 5
      // 055: lxor
      // 056: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05b: if_icmpne 074
      // 05e: goto 065
      // 061: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: bipush 1
      // 066: goto 06d
      // 069: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: istore 10
      // 06f: aload 7
      // 071: ifnonnull 100
      // 074: aload 0
      // 075: getfield sixtwo/lj.ppJSr Ljava/util/Map;
      // 078: iload 12
      // 07a: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 07d: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 082: checkcast sixtwo/ll
      // 085: astore 13
      // 087: aload 13
      // 089: aload 7
      // 08b: ifnull 0b9
      // 08e: ifnonnull 0a4
      // 091: goto 098
      // 094: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 097: athrow
      // 098: aload 7
      // 09a: ifnonnull 100
      // 09d: goto 0a4
      // 0a0: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a3: athrow
      // 0a4: aload 0
      // 0a5: getfield sixtwo/lj.hyjPr Ljava/util/Map;
      // 0a8: iload 8
      // 0aa: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0ad: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0b2: goto 0b9
      // 0b5: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b8: athrow
      // 0b9: checkcast java/util/Map
      // 0bc: astore 14
      // 0be: aload 7
      // 0c0: ifnull 0fc
      // 0c3: aload 14
      // 0c5: ifnull 0ed
      // 0c8: goto 0cf
      // 0cb: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ce: athrow
      // 0cf: fload 9
      // 0d1: aload 14
      // 0d3: iload 12
      // 0d5: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0d8: fconst_0
      // 0d9: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 0dc: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0e1: checkcast java/lang/Float
      // 0e4: invokevirtual java/lang/Float.floatValue ()F
      // 0e7: fload 4
      // 0e9: fmul
      // 0ea: fadd
      // 0eb: fstore 9
      // 0ed: fload 9
      // 0ef: aload 13
      // 0f1: fload 4
      // 0f3: invokevirtual sixtwo/ll.bZl (F)F
      // 0f6: ldc 0.25
      // 0f8: fadd
      // 0f9: fadd
      // 0fa: fstore 9
      // 0fc: iload 12
      // 0fe: istore 8
      // 100: iinc 11 1
      // 103: aload 7
      // 105: ifnonnull 01a
      // 108: fload 9
      // 10a: freturn
   }

   public li$ut bYP() {
      return this.ZTLTq;
   }

   public ConcurrentHashMap<Long, Float> bYS() {
      return this.sJMLD;
   }

   private static long bZa(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16729;
      if (Wnpsy[var3] == null) {
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
         long var5 = wHyUV[var3];
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
         Object[] var9 = (Object[])HqyXG.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HqyXG.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lj", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         Wnpsy[var3] = var15;
      }

      return Wnpsy[var3];
   }

   private float bYz(int[] param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 122264315296935
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 00b: fconst_0
      // 00c: fstore 6
      // 00e: bipush 0
      // 00f: istore 7
      // 011: bipush 0
      // 012: istore 8
      // 014: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 017: astore 9
      // 019: bipush 0
      // 01a: istore 10
      // 01c: astore 5
      // 01e: iload 10
      // 020: aload 1
      // 021: arraylength
      // 022: if_icmpge 137
      // 025: aload 1
      // 026: iload 10
      // 028: iaload
      // 029: istore 11
      // 02b: aload 5
      // 02d: ifnull 132
      // 030: iload 11
      // 032: sipush 1757
      // 035: ldc2_w 884318155536663016
      // 038: lload 3
      // 039: lxor
      // 03a: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 03f: aload 5
      // 041: ifnull 147
      // 044: goto 04b
      // 047: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04a: athrow
      // 04b: if_icmpne 12f
      // 04e: goto 055
      // 051: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 054: athrow
      // 055: iload 10
      // 057: bipush 1
      // 058: iadd
      // 059: aload 1
      // 05a: arraylength
      // 05b: aload 5
      // 05d: ifnull 088
      // 060: goto 067
      // 063: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 066: athrow
      // 067: if_icmpge 12f
      // 06a: goto 071
      // 06d: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 070: athrow
      // 071: iload 10
      // 073: aload 5
      // 075: ifnull 0be
      // 078: goto 07f
      // 07b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: iload 7
      // 081: goto 088
      // 084: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: if_icmple 0b3
      // 08b: iload 8
      // 08d: ifeq 0a0
      // 090: goto 097
      // 093: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: aload 9
      // 099: goto 0a1
      // 09c: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09f: athrow
      // 0a0: aload 0
      // 0a1: astore 12
      // 0a3: fload 6
      // 0a5: aload 12
      // 0a7: aload 1
      // 0a8: iload 7
      // 0aa: iload 10
      // 0ac: fload 2
      // 0ad: invokevirtual sixtwo/lj.bYx ([IIIF)F
      // 0b0: fadd
      // 0b1: fstore 6
      // 0b3: aload 1
      // 0b4: iinc 10 1
      // 0b7: iload 10
      // 0b9: iaload
      // 0ba: i2c
      // 0bb: invokestatic java/lang/Character.toLowerCase (C)C
      // 0be: istore 12
      // 0c0: iload 12
      // 0c2: invokestatic sixtwo/jk.bDy (C)Z
      // 0c5: aload 5
      // 0c7: ifnull 0fa
      // 0ca: ifne 0f9
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: iload 12
      // 0d6: sipush 21032
      // 0d9: ldc2_w 7454797377166693662
      // 0dc: lload 3
      // 0dd: lxor
      // 0de: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e3: aload 5
      // 0e5: ifnull 117
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: if_icmpne 101
      // 0f2: goto 0f9
      // 0f5: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f8: athrow
      // 0f9: bipush 0
      // 0fa: istore 8
      // 0fc: aload 5
      // 0fe: ifnonnull 129
      // 101: iload 12
      // 103: sipush 15202
      // 106: ldc2_w 4989260936498429009
      // 109: lload 3
      // 10a: lxor
      // 10b: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 110: goto 117
      // 113: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 116: athrow
      // 117: aload 5
      // 119: ifnull 12c
      // 11c: if_icmpne 129
      // 11f: goto 126
      // 122: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 125: athrow
      // 126: bipush 1
      // 127: istore 8
      // 129: iload 10
      // 12b: bipush 1
      // 12c: iadd
      // 12d: istore 7
      // 12f: iinc 10 1
      // 132: aload 5
      // 134: ifnonnull 01e
      // 137: iload 7
      // 139: aload 5
      // 13b: ifnull 14c
      // 13e: aload 1
      // 13f: arraylength
      // 140: goto 147
      // 143: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 146: athrow
      // 147: if_icmpge 16b
      // 14a: iload 8
      // 14c: ifeq 158
      // 14f: aload 9
      // 151: goto 159
      // 154: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 157: athrow
      // 158: aload 0
      // 159: astore 10
      // 15b: fload 6
      // 15d: aload 10
      // 15f: aload 1
      // 160: iload 7
      // 162: aload 1
      // 163: arraylength
      // 164: fload 2
      // 165: invokevirtual sixtwo/lj.bYx ([IIIF)F
      // 168: fadd
      // 169: fstore 6
      // 16b: fload 6
      // 16d: freturn
   }

   private static CallSite bZc(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bZb".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public class_1044 bYN() {
      return this.gIqkN;
   }

   private float bYH(String param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 59557580876940
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 00b: aload 0
      // 00c: fload 2
      // 00d: invokevirtual sixtwo/lj.bYG (F)F
      // 010: fstore 6
      // 012: astore 5
      // 014: aload 0
      // 015: getfield sixtwo/lj.ZTLTq Lsixtwo/li$ut;
      // 018: invokevirtual sixtwo/li$ut.duE ()F
      // 01b: fload 2
      // 01c: fmul
      // 01d: fstore 7
      // 01f: aload 1
      // 020: aload 5
      // 022: ifnull 030
      // 025: ifnull 042
      // 028: goto 02f
      // 02b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02e: athrow
      // 02f: aload 1
      // 030: invokevirtual java/lang/String.isEmpty ()Z
      // 033: aload 5
      // 035: ifnull 04a
      // 038: ifeq 049
      // 03b: goto 042
      // 03e: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 041: athrow
      // 042: fload 6
      // 044: freturn
      // 045: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 048: athrow
      // 049: bipush 0
      // 04a: istore 8
      // 04c: fconst_0
      // 04d: fstore 9
      // 04f: fconst_0
      // 050: fstore 10
      // 052: bipush 1
      // 053: istore 11
      // 055: bipush 0
      // 056: istore 12
      // 058: iload 12
      // 05a: aload 1
      // 05b: invokevirtual java/lang/String.length ()I
      // 05e: if_icmpge 125
      // 061: aload 1
      // 062: iload 12
      // 064: invokevirtual java/lang/String.charAt (I)C
      // 067: istore 13
      // 069: aload 5
      // 06b: ifnull 142
      // 06e: iload 8
      // 070: aload 5
      // 072: ifnull 097
      // 075: goto 07c
      // 078: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07b: athrow
      // 07c: ifeq 08e
      // 07f: goto 086
      // 082: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 085: athrow
      // 086: bipush 0
      // 087: istore 8
      // 089: aload 5
      // 08b: ifnonnull 11d
      // 08e: iload 13
      // 090: goto 097
      // 093: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 096: athrow
      // 097: sipush 1757
      // 09a: ldc2_w 884363270194352579
      // 09d: lload 3
      // 09e: lxor
      // 09f: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a4: aload 5
      // 0a6: ifnull 0d1
      // 0a9: if_icmpne 0bb
      // 0ac: goto 0b3
      // 0af: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b2: athrow
      // 0b3: bipush 1
      // 0b4: istore 8
      // 0b6: aload 5
      // 0b8: ifnonnull 11d
      // 0bb: iload 13
      // 0bd: sipush 15418
      // 0c0: ldc2_w 3787250746039200544
      // 0c3: lload 3
      // 0c4: lxor
      // 0c5: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: if_icmpne 0eb
      // 0d4: fload 10
      // 0d6: fload 6
      // 0d8: fload 9
      // 0da: invokestatic java/lang/Math.max (FF)F
      // 0dd: fadd
      // 0de: fstore 10
      // 0e0: fconst_0
      // 0e1: fstore 9
      // 0e3: iinc 11 1
      // 0e6: aload 5
      // 0e8: ifnonnull 11d
      // 0eb: aload 0
      // 0ec: getfield sixtwo/lj.ppJSr Ljava/util/Map;
      // 0ef: iload 13
      // 0f1: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0f4: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0f9: checkcast sixtwo/ll
      // 0fc: astore 14
      // 0fe: aload 14
      // 100: ifnonnull 10f
      // 103: aload 5
      // 105: ifnonnull 11d
      // 108: goto 10f
      // 10b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: fload 9
      // 111: aload 14
      // 113: invokevirtual sixtwo/ll.bZu ()F
      // 116: fload 2
      // 117: fmul
      // 118: invokestatic java/lang/Math.max (FF)F
      // 11b: fstore 9
      // 11d: iinc 12 1
      // 120: aload 5
      // 122: ifnonnull 058
      // 125: fload 10
      // 127: fload 6
      // 129: fload 9
      // 12b: invokestatic java/lang/Math.max (FF)F
      // 12e: fadd
      // 12f: fstore 10
      // 131: fload 10
      // 133: bipush 0
      // 134: iload 11
      // 136: bipush 1
      // 137: isub
      // 138: invokestatic java/lang/Math.max (II)I
      // 13b: i2f
      // 13c: fload 7
      // 13e: fmul
      // 13f: fadd
      // 140: fstore 10
      // 142: fload 10
      // 144: freturn
   }

   private float bYI(int[] param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 107018596532867
      // 006: lxor
      // 007: lstore 3
      // 008: aload 0
      // 009: fload 2
      // 00a: invokevirtual sixtwo/lj.bYG (F)F
      // 00d: fstore 6
      // 00f: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 012: aload 0
      // 013: getfield sixtwo/lj.ZTLTq Lsixtwo/li$ut;
      // 016: invokevirtual sixtwo/li$ut.duE ()F
      // 019: fload 2
      // 01a: fmul
      // 01b: fstore 7
      // 01d: astore 5
      // 01f: aload 1
      // 020: aload 5
      // 022: ifnull 030
      // 025: ifnull 040
      // 028: goto 02f
      // 02b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 02e: athrow
      // 02f: aload 1
      // 030: arraylength
      // 031: aload 5
      // 033: ifnull 048
      // 036: ifne 047
      // 039: goto 040
      // 03c: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03f: athrow
      // 040: fload 6
      // 042: freturn
      // 043: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 046: athrow
      // 047: bipush 0
      // 048: istore 8
      // 04a: fconst_0
      // 04b: fstore 9
      // 04d: fconst_0
      // 04e: fstore 10
      // 050: bipush 1
      // 051: istore 11
      // 053: aload 1
      // 054: astore 12
      // 056: aload 12
      // 058: arraylength
      // 059: istore 13
      // 05b: bipush 0
      // 05c: istore 14
      // 05e: iload 14
      // 060: iload 13
      // 062: if_icmpge 128
      // 065: aload 12
      // 067: iload 14
      // 069: iaload
      // 06a: istore 15
      // 06c: aload 5
      // 06e: ifnull 145
      // 071: iload 8
      // 073: aload 5
      // 075: ifnull 09a
      // 078: goto 07f
      // 07b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: ifeq 091
      // 082: goto 089
      // 085: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: bipush 0
      // 08a: istore 8
      // 08c: aload 5
      // 08e: ifnonnull 120
      // 091: iload 15
      // 093: goto 09a
      // 096: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: sipush 13452
      // 09d: ldc2_w 8998600500341607825
      // 0a0: lload 3
      // 0a1: lxor
      // 0a2: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0a7: aload 5
      // 0a9: ifnull 0d4
      // 0ac: if_icmpne 0be
      // 0af: goto 0b6
      // 0b2: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b5: athrow
      // 0b6: bipush 1
      // 0b7: istore 8
      // 0b9: aload 5
      // 0bb: ifnonnull 120
      // 0be: iload 15
      // 0c0: sipush 24116
      // 0c3: ldc2_w 5590149976216102695
      // 0c6: lload 3
      // 0c7: lxor
      // 0c8: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0cd: goto 0d4
      // 0d0: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d3: athrow
      // 0d4: if_icmpne 0ee
      // 0d7: fload 10
      // 0d9: fload 6
      // 0db: fload 9
      // 0dd: invokestatic java/lang/Math.max (FF)F
      // 0e0: fadd
      // 0e1: fstore 10
      // 0e3: fconst_0
      // 0e4: fstore 9
      // 0e6: iinc 11 1
      // 0e9: aload 5
      // 0eb: ifnonnull 120
      // 0ee: aload 0
      // 0ef: getfield sixtwo/lj.ppJSr Ljava/util/Map;
      // 0f2: iload 15
      // 0f4: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0f7: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0fc: checkcast sixtwo/ll
      // 0ff: astore 16
      // 101: aload 16
      // 103: ifnonnull 112
      // 106: aload 5
      // 108: ifnonnull 120
      // 10b: goto 112
      // 10e: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: fload 9
      // 114: aload 16
      // 116: invokevirtual sixtwo/ll.bZu ()F
      // 119: fload 2
      // 11a: fmul
      // 11b: invokestatic java/lang/Math.max (FF)F
      // 11e: fstore 9
      // 120: iinc 14 1
      // 123: aload 5
      // 125: ifnonnull 05e
      // 128: fload 10
      // 12a: fload 6
      // 12c: fload 9
      // 12e: invokestatic java/lang/Math.max (FF)F
      // 131: fadd
      // 132: fstore 10
      // 134: fload 10
      // 136: bipush 0
      // 137: iload 11
      // 139: bipush 1
      // 13a: isub
      // 13b: invokestatic java/lang/Math.max (II)I
      // 13e: i2f
      // 13f: fload 7
      // 141: fmul
      // 142: fadd
      // 143: fstore 10
      // 145: fload 10
      // 147: freturn
   }

   public Map<Integer, ll> bYQ() {
      return this.ppJSr;
   }

   private static long bYB(int[] var0, float var1) {
      long var2 = NptTm ^ 91186405605169L;
      int var4 = Arrays.hashCode(var0);
      return var4 & bZc<"y">(9842, 830857208614261685L ^ var2) ^ (long)Float.floatToIntBits(var1) << bYZ<"h">(18020, 8020205607539327680L ^ var2);
   }

   public static void bYU(String var0) {
      oxhLM = var0;
   }

   private float bYy(String param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 93395772294272
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 00b: fconst_0
      // 00c: fstore 6
      // 00e: bipush 0
      // 00f: istore 7
      // 011: bipush 0
      // 012: istore 8
      // 014: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 017: astore 9
      // 019: astore 5
      // 01b: bipush 0
      // 01c: istore 10
      // 01e: iload 10
      // 020: aload 1
      // 021: invokevirtual java/lang/String.length ()I
      // 024: if_icmpge 13e
      // 027: aload 1
      // 028: iload 10
      // 02a: invokevirtual java/lang/String.charAt (I)C
      // 02d: istore 11
      // 02f: aload 5
      // 031: ifnull 139
      // 034: iload 11
      // 036: sipush 1757
      // 039: ldc2_w 884255215018129871
      // 03c: lload 3
      // 03d: lxor
      // 03e: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 043: aload 5
      // 045: ifnull 150
      // 048: goto 04f
      // 04b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04e: athrow
      // 04f: if_icmpne 136
      // 052: goto 059
      // 055: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 058: athrow
      // 059: iload 10
      // 05b: bipush 1
      // 05c: iadd
      // 05d: aload 1
      // 05e: invokevirtual java/lang/String.length ()I
      // 061: aload 5
      // 063: ifnull 08e
      // 066: goto 06d
      // 069: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: if_icmpge 136
      // 070: goto 077
      // 073: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 076: athrow
      // 077: iload 10
      // 079: aload 5
      // 07b: ifnull 0c5
      // 07e: goto 085
      // 081: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 084: athrow
      // 085: iload 7
      // 087: goto 08e
      // 08a: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08d: athrow
      // 08e: if_icmple 0b9
      // 091: iload 8
      // 093: ifeq 0a6
      // 096: goto 09d
      // 099: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09c: athrow
      // 09d: aload 9
      // 09f: goto 0a7
      // 0a2: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: aload 0
      // 0a7: astore 12
      // 0a9: fload 6
      // 0ab: aload 12
      // 0ad: aload 1
      // 0ae: iload 7
      // 0b0: iload 10
      // 0b2: fload 2
      // 0b3: invokevirtual sixtwo/lj.bYw (Ljava/lang/String;IIF)F
      // 0b6: fadd
      // 0b7: fstore 6
      // 0b9: aload 1
      // 0ba: iinc 10 1
      // 0bd: iload 10
      // 0bf: invokevirtual java/lang/String.charAt (I)C
      // 0c2: invokestatic java/lang/Character.toLowerCase (C)C
      // 0c5: istore 12
      // 0c7: iload 12
      // 0c9: invokestatic sixtwo/jk.bDy (C)Z
      // 0cc: aload 5
      // 0ce: ifnull 101
      // 0d1: ifne 100
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: iload 12
      // 0dd: sipush 24034
      // 0e0: ldc2_w 8422686112232694517
      // 0e3: lload 3
      // 0e4: lxor
      // 0e5: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ea: aload 5
      // 0ec: ifnull 11e
      // 0ef: goto 0f6
      // 0f2: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f5: athrow
      // 0f6: if_icmpne 108
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: bipush 0
      // 101: istore 8
      // 103: aload 5
      // 105: ifnonnull 130
      // 108: iload 12
      // 10a: sipush 6315
      // 10d: ldc2_w 7786519906126997432
      // 110: lload 3
      // 111: lxor
      // 112: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 117: goto 11e
      // 11a: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11d: athrow
      // 11e: aload 5
      // 120: ifnull 133
      // 123: if_icmpne 130
      // 126: goto 12d
      // 129: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12c: athrow
      // 12d: bipush 1
      // 12e: istore 8
      // 130: iload 10
      // 132: bipush 1
      // 133: iadd
      // 134: istore 7
      // 136: iinc 10 1
      // 139: aload 5
      // 13b: ifnonnull 01e
      // 13e: iload 7
      // 140: aload 5
      // 142: ifnull 155
      // 145: aload 1
      // 146: invokevirtual java/lang/String.length ()I
      // 149: goto 150
      // 14c: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14f: athrow
      // 150: if_icmpge 176
      // 153: iload 8
      // 155: ifeq 161
      // 158: aload 9
      // 15a: goto 162
      // 15d: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 160: athrow
      // 161: aload 0
      // 162: astore 10
      // 164: fload 6
      // 166: aload 10
      // 168: aload 1
      // 169: iload 7
      // 16b: aload 1
      // 16c: invokevirtual java/lang/String.length ()I
      // 16f: fload 2
      // 170: invokevirtual sixtwo/lj.bYw (Ljava/lang/String;IIF)F
      // 173: fadd
      // 174: fstore 6
      // 176: fload 6
      // 178: freturn
   }

   public Map<Integer, Map<Integer, Float>> bYR() {
      return this.hyjPr;
   }

   public lq bYM(float var1) {
      return new lq(this, var1);
   }

   public float bYF(int var1, float var2) {
      return this.ppJSr.get(var1).bZu() * var2;
   }

   public float bYJ(String var1, float var2) {
      long var3 = NptTm ^ 87705590043839L;
      String var10000 = bYV();
      long var6 = bYA(var1, var2);
      String var5 = var10000;
      Float var8 = this.RMDjl.get(var6);

      label30: {
         try {
            if (var5 == null) {
               return var8;
            }

            if (var8 == null) {
               break label30;
            }
         } catch (MatchException var10) {
            throw bYW(var10);
         }

         return var8;
      }

      float var9 = this.bYH(var1, var2);
      this.RMDjl.put(var6, var9);
      return var9;
   }

   public float bYE(int var1, float var2) {
      return this.ppJSr.get(var1).bZt() * var2;
   }

   public float bYD(int[] param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lj.NptTm J
      // 03: ldc2_w 79179139066584
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 1e
      // 13: ifnull 2e
      // 16: goto 1d
      // 19: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: arraylength
      // 1f: aload 5
      // 21: ifnull 44
      // 24: ifne 34
      // 27: goto 2e
      // 2a: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: fconst_0
      // 2f: freturn
      // 30: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 1
      // 35: aload 5
      // 37: ifnull 53
      // 3a: invokestatic sixtwo/jk.bDA ([I)Z
      // 3d: goto 44
      // 40: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: ifeq 52
      // 47: aload 0
      // 48: aload 1
      // 49: fload 2
      // 4a: invokevirtual sixtwo/lj.bYz ([IF)F
      // 4d: freturn
      // 4e: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 51: athrow
      // 52: aload 1
      // 53: fload 2
      // 54: invokestatic sixtwo/lj.bYB ([IF)J
      // 57: lstore 6
      // 59: aload 0
      // 5a: getfield sixtwo/lj.sJMLD Ljava/util/concurrent/ConcurrentHashMap;
      // 5d: lload 6
      // 5f: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 62: invokevirtual java/util/concurrent/ConcurrentHashMap.get (Ljava/lang/Object;)Ljava/lang/Object;
      // 65: checkcast java/lang/Float
      // 68: astore 8
      // 6a: aload 8
      // 6c: aload 5
      // 6e: ifnull 7d
      // 71: ifnull 81
      // 74: goto 7b
      // 77: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7a: athrow
      // 7b: aload 8
      // 7d: invokevirtual java/lang/Float.floatValue ()F
      // 80: freturn
      // 81: aload 0
      // 82: aload 1
      // 83: fload 2
      // 84: invokevirtual sixtwo/lj.bYv ([IF)F
      // 87: fstore 9
      // 89: aload 0
      // 8a: getfield sixtwo/lj.sJMLD Ljava/util/concurrent/ConcurrentHashMap;
      // 8d: lload 6
      // 8f: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 92: fload 9
      // 94: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 97: invokevirtual java/util/concurrent/ConcurrentHashMap.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
      // 9a: pop
      // 9b: fload 9
      // 9d: freturn
   }

   public float bYG(float var1) {
      return 0.7F * var1;
   }

   public float bYC(String param1, float param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lj.NptTm J
      // 03: ldc2_w 100193725148578
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 1e
      // 13: ifnull 30
      // 16: goto 1d
      // 19: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: invokevirtual java/lang/String.isBlank ()Z
      // 21: aload 5
      // 23: ifnull 46
      // 26: ifeq 36
      // 29: goto 30
      // 2c: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: fconst_0
      // 31: freturn
      // 32: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 1
      // 37: aload 5
      // 39: ifnull 55
      // 3c: invokestatic sixtwo/jk.bDz (Ljava/lang/String;)Z
      // 3f: goto 46
      // 42: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: ifeq 54
      // 49: aload 0
      // 4a: aload 1
      // 4b: fload 2
      // 4c: invokevirtual sixtwo/lj.bYy (Ljava/lang/String;F)F
      // 4f: freturn
      // 50: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 53: athrow
      // 54: aload 1
      // 55: fload 2
      // 56: invokestatic sixtwo/lj.bYA (Ljava/lang/String;F)J
      // 59: lstore 6
      // 5b: aload 0
      // 5c: getfield sixtwo/lj.sJMLD Ljava/util/concurrent/ConcurrentHashMap;
      // 5f: lload 6
      // 61: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 64: invokevirtual java/util/concurrent/ConcurrentHashMap.get (Ljava/lang/Object;)Ljava/lang/Object;
      // 67: checkcast java/lang/Float
      // 6a: astore 8
      // 6c: aload 8
      // 6e: aload 5
      // 70: ifnull 7f
      // 73: ifnull 83
      // 76: goto 7d
      // 79: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 8
      // 7f: invokevirtual java/lang/Float.floatValue ()F
      // 82: freturn
      // 83: aload 0
      // 84: aload 1
      // 85: fload 2
      // 86: invokevirtual sixtwo/lj.bYu (Ljava/lang/String;F)F
      // 89: fstore 9
      // 8b: aload 0
      // 8c: getfield sixtwo/lj.sJMLD Ljava/util/concurrent/ConcurrentHashMap;
      // 8f: lload 6
      // 91: invokestatic java/lang/Long.valueOf (J)Ljava/lang/Long;
      // 94: fload 9
      // 96: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 99: invokevirtual java/util/concurrent/ConcurrentHashMap.put (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
      // 9c: pop
      // 9d: fload 9
      // 9f: freturn
   }

   public float bYK(int[] var1, float var2) {
      long var3 = NptTm ^ 30758384301536L;
      String var10000 = bYV();
      long var6 = bYB(var1, var2);
      String var5 = var10000;
      Float var8 = this.RMDjl.get(var6);

      label30: {
         try {
            if (var5 == null) {
               return var8;
            }

            if (var8 == null) {
               break label30;
            }
         } catch (MatchException var10) {
            throw bYW(var10);
         }

         return var8;
      }

      float var9 = this.bYI(var1, var2);
      this.RMDjl.put(var6, var9);
      return var9;
   }

   public static String bYV() {
      return oxhLM;
   }

   public void bYt(
      Matrix4f param1, class_4588 param2, int[] param3, float param4, float param5, float param6, float param7, float param8, float param9, int param10
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 75542359778228
      // 006: lxor
      // 007: lstore 11
      // 009: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 00c: bipush -1
      // 00d: istore 14
      // 00f: bipush 0
      // 010: istore 15
      // 012: astore 13
      // 014: aload 3
      // 015: astore 16
      // 017: aload 16
      // 019: arraylength
      // 01a: istore 17
      // 01c: bipush 0
      // 01d: istore 18
      // 01f: iload 18
      // 021: iload 17
      // 023: if_icmpge 11c
      // 026: aload 16
      // 028: iload 18
      // 02a: iaload
      // 02b: istore 19
      // 02d: iload 15
      // 02f: aload 13
      // 031: ifnull 04f
      // 034: ifeq 046
      // 037: goto 03e
      // 03a: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: bipush 0
      // 03f: istore 15
      // 041: aload 13
      // 043: ifnonnull 114
      // 046: iload 19
      // 048: goto 04f
      // 04b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04e: athrow
      // 04f: aload 13
      // 051: ifnull 074
      // 054: sipush 1757
      // 057: ldc2_w 884272516449754875
      // 05a: lload 11
      // 05c: lxor
      // 05d: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 062: if_icmpne 07b
      // 065: goto 06c
      // 068: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06b: athrow
      // 06c: bipush 1
      // 06d: goto 074
      // 070: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 073: athrow
      // 074: istore 15
      // 076: aload 13
      // 078: ifnonnull 114
      // 07b: aload 0
      // 07c: getfield sixtwo/lj.ppJSr Ljava/util/Map;
      // 07f: iload 19
      // 081: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 084: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 089: checkcast sixtwo/ll
      // 08c: astore 20
      // 08e: aload 20
      // 090: aload 13
      // 092: ifnull 0c0
      // 095: ifnonnull 0ab
      // 098: goto 09f
      // 09b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: aload 13
      // 0a1: ifnonnull 114
      // 0a4: goto 0ab
      // 0a7: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0aa: athrow
      // 0ab: aload 0
      // 0ac: getfield sixtwo/lj.hyjPr Ljava/util/Map;
      // 0af: iload 14
      // 0b1: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0b4: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0b9: goto 0c0
      // 0bc: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0bf: athrow
      // 0c0: checkcast java/util/Map
      // 0c3: astore 21
      // 0c5: aload 13
      // 0c7: ifnull 110
      // 0ca: aload 21
      // 0cc: ifnull 0f4
      // 0cf: goto 0d6
      // 0d2: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d5: athrow
      // 0d6: fload 7
      // 0d8: aload 21
      // 0da: iload 19
      // 0dc: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0df: fconst_0
      // 0e0: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 0e3: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0e8: checkcast java/lang/Float
      // 0eb: invokevirtual java/lang/Float.floatValue ()F
      // 0ee: fload 4
      // 0f0: fmul
      // 0f1: fadd
      // 0f2: fstore 7
      // 0f4: fload 7
      // 0f6: aload 20
      // 0f8: aload 1
      // 0f9: aload 2
      // 0fa: fload 4
      // 0fc: fload 7
      // 0fe: fload 8
      // 100: fload 9
      // 102: iload 10
      // 104: invokevirtual sixtwo/ll.bZk (Lorg/joml/Matrix4f;Lnet/minecraft/class_4588;FFFFI)F
      // 107: fload 5
      // 109: fadd
      // 10a: fload 6
      // 10c: fadd
      // 10d: fadd
      // 10e: fstore 7
      // 110: iload 19
      // 112: istore 14
      // 114: iinc 18 1
      // 117: aload 13
      // 119: ifnonnull 01f
      // 11c: return
   }

   private float bYw(String param1, int param2, int param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/lj.NptTm J
      // 003: ldc2_w 36278295564132
      // 006: lxor
      // 007: lstore 5
      // 009: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 00c: bipush -1
      // 00d: istore 8
      // 00f: astore 7
      // 011: fconst_0
      // 012: fstore 9
      // 014: bipush 0
      // 015: istore 10
      // 017: iload 2
      // 018: istore 11
      // 01a: iload 11
      // 01c: iload 3
      // 01d: if_icmpge 10a
      // 020: aload 1
      // 021: iload 11
      // 023: invokevirtual java/lang/String.charAt (I)C
      // 026: istore 12
      // 028: iload 10
      // 02a: aload 7
      // 02c: ifnull 04a
      // 02f: ifeq 041
      // 032: goto 039
      // 035: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 038: athrow
      // 039: bipush 0
      // 03a: istore 10
      // 03c: aload 7
      // 03e: ifnonnull 102
      // 041: iload 12
      // 043: goto 04a
      // 046: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 049: athrow
      // 04a: aload 7
      // 04c: ifnull 06f
      // 04f: sipush 1757
      // 052: ldc2_w 884382698990105131
      // 055: lload 5
      // 057: lxor
      // 058: invokedynamic h (IJ)I bsm=sixtwo/lj.bYZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05d: if_icmpne 076
      // 060: goto 067
      // 063: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 066: athrow
      // 067: bipush 1
      // 068: goto 06f
      // 06b: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06e: athrow
      // 06f: istore 10
      // 071: aload 7
      // 073: ifnonnull 102
      // 076: aload 0
      // 077: getfield sixtwo/lj.ppJSr Ljava/util/Map;
      // 07a: iload 12
      // 07c: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 07f: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 084: checkcast sixtwo/ll
      // 087: astore 13
      // 089: aload 13
      // 08b: aload 7
      // 08d: ifnull 0bb
      // 090: ifnonnull 0a6
      // 093: goto 09a
      // 096: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: aload 7
      // 09c: ifnonnull 102
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: aload 0
      // 0a7: getfield sixtwo/lj.hyjPr Ljava/util/Map;
      // 0aa: iload 8
      // 0ac: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0af: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: checkcast java/util/Map
      // 0be: astore 14
      // 0c0: aload 7
      // 0c2: ifnull 0fe
      // 0c5: aload 14
      // 0c7: ifnull 0ef
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/lj.bYW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: fload 9
      // 0d3: aload 14
      // 0d5: iload 12
      // 0d7: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 0da: fconst_0
      // 0db: invokestatic java/lang/Float.valueOf (F)Ljava/lang/Float;
      // 0de: invokeinterface java/util/Map.getOrDefault (Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object; 3
      // 0e3: checkcast java/lang/Float
      // 0e6: invokevirtual java/lang/Float.floatValue ()F
      // 0e9: fload 4
      // 0eb: fmul
      // 0ec: fadd
      // 0ed: fstore 9
      // 0ef: fload 9
      // 0f1: aload 13
      // 0f3: fload 4
      // 0f5: invokevirtual sixtwo/ll.bZl (F)F
      // 0f8: ldc 0.25
      // 0fa: fadd
      // 0fb: fadd
      // 0fc: fstore 9
      // 0fe: iload 12
      // 100: istore 8
      // 102: iinc 11 1
      // 105: aload 7
      // 107: ifnonnull 01a
      // 10a: fload 9
      // 10c: freturn
   }

   private float bYv(int[] var1, float var2) {
      return this.bYx(var1, 0, var1.length, var2);
   }

   private static MatchException bYW(MatchException var0) {
      return var0;
   }

   private static CallSite bYZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bYY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public float bYu(String var1, float var2) {
      return this.bYw(var1, 0, var1.length(), var2);
   }
}
