package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1792;

public class pv extends pB {
   static Map<UUID, List<pv$vx>> ulHnJ;
   static Set<Integer> UDUQa;
   private static String lzgfS;
   private static final long ILcIQ = gb.aYR(2862271683564752160L, -6939398280777294265L, MethodHandles.lookup().lookupClass()).a(59230611963832L);
   private static final String[] ldfzw;
   private static final String[] LSPqb;
   private static final Map HfBgG = new HashMap(13);
   private static final long eADIq;
   private static final long[] TMVjy;
   private static final Long[] GXKJH;
   private static final Map JYwOo;

   public pv() {
      long var1 = ILcIQ ^ 43171584258891L;
      super(cPW<"g">(15351, 3700853719518198297L ^ var1), cPW<"g">(21364, 5217300961134301849L ^ var1));
      this.position(pM.gvTMb);
   }

   static {
      long var16 = ILcIQ ^ 13262211686181L;
      cPQ(null);
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[4];
      int var23 = 0;
      String var22 = "\u0091×«\u0010?p\u0095=\u001cÓ\\L¦\u0084Bú<\\:lDÿ°X\u0010£ÇÖ\u009eHz\u0007`ì?$$ød?Ö";
      int var24 = "\u0091×«\u0010?p\u0095=\u001cÓ\\L¦\u0084Bú<\\:lDÿ°X\u0010£ÇÖ\u009eHz\u0007`ì?$$ød?Ö".length();
      char var21 = 24;
      int var28 = -1;

      label57:
      while (true) {
         String var29 = var22.substring(++var28, var28 + var21);
         int var10001 = -1;

         while (true) {
            byte[] var26 = var18.doFinal(var29.getBytes("ISO-8859-1"));
            String var40 = cPT(var26).intern();
            switch (var10001) {
               case 0:
                  var25[var23++] = var40;
                  if ((var28 += var21) >= var24) {
                     ldfzw = var25;
                     LSPqb = new String[4];
                     Cipher var11;
                     var10000 = var11 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var12 = 1; var12 < 8; var12++) {
                        var10003[var12] = (byte)(var16 << var12 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var13 = -6135447453576717152L;
                     byte[] var15 = var11.doFinal(
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
                     long var44 = (var15[0] & 255L) << 56
                        | (var15[1] & 255L) << 48
                        | (var15[2] & 255L) << 40
                        | (var15[3] & 255L) << 32
                        | (var15[4] & 255L) << 24
                        | (var15[5] & 255L) << 16
                        | (var15[6] & 255L) << 8
                        | var15[7] & 255L;
                     var10001 = (byte)-1;
                     eADIq = var44;
                     JYwOo = new HashMap(13);
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long[] var6 = new long[2];
                     int var3 = 0;
                     String var4 = "\u0015=qºõ¼\u007fêM\u0083@0l\u0017>n";
                     int var5 = "\u0015=qºõ¼\u007fêM\u0083@0l\u0017>n".length();
                     byte var2 = 0;

                     do {
                        var10001 = var2;
                        var2 += 8;
                        byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
                        var10001 = var3++;
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
                        long var10004 = (var10[0] & 255L) << 56
                           | (var10[1] & 255L) << 48
                           | (var10[2] & 255L) << 40
                           | (var10[3] & 255L) << 32
                           | (var10[4] & 255L) << 24
                           | (var10[5] & 255L) << 16
                           | (var10[6] & 255L) << 8
                           | var10[7] & 255L;
                        byte var48 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     TMVjy = var6;
                     GXKJH = new Long[2];
                     ulHnJ = new HashMap<>();
                     UDUQa = new HashSet<>();
                     return;
                  }

                  var21 = var22.charAt(var28);
                  break;
               default:
                  var25[var23++] = var40;
                  if ((var28 += var21) < var24) {
                     var21 = var22.charAt(var28);
                     continue label57;
                  }

                  var22 = "¿¥é\u008aOgÚó\u0015«vª¿çÉb \u0080\nÂøjÔØdî'\u0091bEê>\u0081É\u0017N\u0097¸{q6Cs=\u0018ª«]?";
                  var24 = "¿¥é\u008aOgÚó\u0015«vª¿çÉb \u0080\nÂøjÔØdî'\u0091bEê>\u0081É\u0017N\u0097¸{q6Cs=\u0018ª«]?".length();
                  var21 = 16;
                  var28 = -1;
            }

            var29 = var22.substring(++var28, var28 + var21);
            var10001 = 0;
         }
      }
   }

   public static String cPR() {
      return lzgfS;
   }

   private static void cPL(List<pv$vx> var0) {
      var0.removeIf(var0x -> {
         long var1 = ILcIQ ^ 124169387770381L;
         String var3 = cPR();

         try {
            long var5;
            int var10000 = (var5 = var0x.remainingMillis() - 0L) == 0L ? 0 : (var5 < 0L ? -1 : 1);
            if (var3 != null) {
               return (boolean)var10000;
            }

            if (var10000 <= 0) {
               return (boolean)1;
            }
         } catch (MatchException var4) {
            throw cPS(var4);
         }

         return (boolean)0;
      });
   }

   private String cPM(long var1) {
      long var3 = ILcIQ ^ 103376248502062L;
      return String.format(Locale.US, cPW<"g">(17225, 1002969025605109440L ^ var3), (float)Math.max(0L, var1) / 1000.0F);
   }

   private static long cPY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      long var7 = cPX(var4, var5);
      MethodHandle var9 = MethodHandles.constant(long.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var9, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected List<pB$vz> cNI(class_1297 param1, boolean param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pv.ILcIQ J
      // 003: ldc2_w 106608822613835
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 00b: astore 5
      // 00d: iload 2
      // 00e: aload 5
      // 010: ifnonnull 04f
      // 013: ifeq 03f
      // 016: goto 01d
      // 019: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01c: athrow
      // 01d: new sixtwo/pB$vz
      // 020: dup
      // 021: getstatic net/minecraft/class_1802.field_8288 Lnet/minecraft/class_1792;
      // 024: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 027: sipush 15457
      // 02a: ldc2_w 8885855991030610318
      // 02d: lload 3
      // 02e: lxor
      // 02f: invokedynamic g (IJ)Ljava/lang/String; bsm=sixtwo/pv.cPW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 034: invokespecial sixtwo/pB$vz.<init> (Lnet/minecraft/class_1799;Ljava/lang/String;)V
      // 037: invokestatic java/util/List.of (Ljava/lang/Object;)Ljava/util/List;
      // 03a: areturn
      // 03b: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03e: athrow
      // 03f: aload 1
      // 040: aload 5
      // 042: ifnonnull 053
      // 045: instanceof net/minecraft/class_1657
      // 048: goto 04f
      // 04b: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 04e: athrow
      // 04f: ifeq 05d
      // 052: aload 1
      // 053: checkcast net/minecraft/class_1657
      // 056: astore 6
      // 058: aload 5
      // 05a: ifnull 065
      // 05d: invokestatic java/util/List.of ()Ljava/util/List;
      // 060: areturn
      // 061: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 064: athrow
      // 065: getstatic sixtwo/pv.ulHnJ Ljava/util/Map;
      // 068: aload 6
      // 06a: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 06d: invokeinterface java/util/Map.get (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 072: checkcast java/util/List
      // 075: astore 7
      // 077: aload 7
      // 079: aload 5
      // 07b: ifnonnull 0a8
      // 07e: ifnull 0a5
      // 081: goto 088
      // 084: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 087: athrow
      // 088: aload 7
      // 08a: invokeinterface java/util/List.isEmpty ()Z 1
      // 08f: aload 5
      // 091: ifnonnull 0c1
      // 094: goto 09b
      // 097: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09a: athrow
      // 09b: ifeq 0a9
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a4: athrow
      // 0a5: invokestatic java/util/List.of ()Ljava/util/List;
      // 0a8: areturn
      // 0a9: aload 7
      // 0ab: invokestatic sixtwo/pv.cPL (Ljava/util/List;)V
      // 0ae: aload 7
      // 0b0: aload 5
      // 0b2: ifnonnull 0dc
      // 0b5: invokeinterface java/util/List.isEmpty ()Z 1
      // 0ba: goto 0c1
      // 0bd: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c0: athrow
      // 0c1: ifeq 0dd
      // 0c4: getstatic sixtwo/pv.ulHnJ Ljava/util/Map;
      // 0c7: aload 6
      // 0c9: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // 0cc: invokeinterface java/util/Map.remove (Ljava/lang/Object;)Ljava/lang/Object; 2
      // 0d1: pop
      // 0d2: invokestatic java/util/List.of ()Ljava/util/List;
      // 0d5: goto 0dc
      // 0d8: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: areturn
      // 0dd: new java/util/ArrayList
      // 0e0: dup
      // 0e1: invokespecial java/util/ArrayList.<init> ()V
      // 0e4: astore 8
      // 0e6: aload 7
      // 0e8: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0ed: astore 9
      // 0ef: aload 9
      // 0f1: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0f6: ifeq 136
      // 0f9: aload 9
      // 0fb: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 100: checkcast sixtwo/pv$vx
      // 103: astore 10
      // 105: aload 8
      // 107: aload 5
      // 109: ifnonnull 138
      // 10c: new sixtwo/pB$vz
      // 10f: dup
      // 110: aload 10
      // 112: invokevirtual sixtwo/pv$vx.item ()Lnet/minecraft/class_1792;
      // 115: invokevirtual net/minecraft/class_1792.method_7854 ()Lnet/minecraft/class_1799;
      // 118: aload 0
      // 119: aload 10
      // 11b: invokevirtual sixtwo/pv$vx.remainingMillis ()J
      // 11e: invokevirtual sixtwo/pv.cPM (J)Ljava/lang/String;
      // 121: invokespecial sixtwo/pB$vz.<init> (Lnet/minecraft/class_1799;Ljava/lang/String;)V
      // 124: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 129: pop
      // 12a: aload 5
      // 12c: ifnull 0ef
      // 12f: goto 136
      // 132: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 135: athrow
      // 136: aload 8
      // 138: areturn
   }

   private static CallSite cPW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pv" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static MatchException cPS(MatchException var0) {
      return var0;
   }

   private static String cPT(byte[] var0) {
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

   private static Object cPV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cPU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void cPQ(String var0) {
      lzgfS = var0;
   }

   private static CallSite cPZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cPY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pv" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static long cPX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 16795;
      if (GXKJH[var3] == null) {
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
         long var5 = TMVjy[var3];
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
         Object[] var9 = (Object[])JYwOo.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JYwOo.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pv", var14);
         }

         long var15 = (var10[0] & 255L) << 56
            | (var10[1] & 255L) << 48
            | (var10[2] & 255L) << 40
            | (var10[3] & 255L) << 32
            | (var10[4] & 255L) << 24
            | (var10[5] & 255L) << 16
            | (var10[6] & 255L) << 8
            | var10[7] & 255L;
         GXKJH[var3] = var15;
      }

      return GXKJH[var3];
   }

   private static void cPK(UUID var0, class_1792 var1, long var2) {
      List var4 = ulHnJ.computeIfAbsent(var0, var0x -> new ArrayList<>());
      var4.removeIf(var1x -> {
         long var2x = ILcIQ ^ 57323550165135L;

         try {
            if (var1x.item() == var1) {
               return true;
            }
         } catch (MatchException var4x) {
            throw cPS(var4x);
         }

         return false;
      });
      var4.add(new pv$vx(var1, System.currentTimeMillis(), var2));
   }

   private static String cPU(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20185;
      if (LSPqb[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])HfBgG.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HfBgG.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/pv", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = ldfzw[var5].getBytes("ISO-8859-1");
         LSPqb[var5] = cPT(((Cipher)var4[0]).doFinal(var9));
      }

      return LSPqb[var5];
   }

   public static void cPJ() {
      ulHnJ.clear();
      UDUQa.clear();
   }

   public static void cPI() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pv.ILcIQ J
      // 03: ldc2_w 12562052878435
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 12: ifnonnull 1a
      // 15: return
      // 16: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 19: athrow
      // 1a: new java/util/HashSet
      // 1d: dup
      // 1e: invokespecial java/util/HashSet.<init> ()V
      // 21: astore 3
      // 22: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 25: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 28: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 2b: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 30: astore 4
      // 32: aload 4
      // 34: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 39: ifeq d8
      // 3c: aload 4
      // 3e: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 43: checkcast net/minecraft/class_1297
      // 46: astore 5
      // 48: aload 5
      // 4a: aload 2
      // 4b: ifnonnull 68
      // 4e: instanceof net/minecraft/class_1684
      // 51: aload 2
      // 52: ifnonnull e1
      // 55: goto 5c
      // 58: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5b: athrow
      // 5c: ifeq 32
      // 5f: goto 66
      // 62: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: aload 5
      // 68: checkcast net/minecraft/class_1684
      // 6b: astore 6
      // 6d: aload 6
      // 6f: invokevirtual net/minecraft/class_1684.method_5628 ()I
      // 72: istore 7
      // 74: aload 3
      // 75: iload 7
      // 77: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 7a: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 7f: pop
      // 80: getstatic sixtwo/pv.UDUQa Ljava/util/Set;
      // 83: iload 7
      // 85: invokestatic java/lang/Integer.valueOf (I)Ljava/lang/Integer;
      // 88: invokeinterface java/util/Set.add (Ljava/lang/Object;)Z 2
      // 8d: ifeq d4
      // 90: aload 6
      // 92: invokevirtual net/minecraft/class_1684.method_24921 ()Lnet/minecraft/class_1297;
      // 95: astore 9
      // 97: aload 9
      // 99: aload 2
      // 9a: ifnonnull b3
      // 9d: instanceof net/minecraft/class_1657
      // a0: ifeq d4
      // a3: goto aa
      // a6: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: aload 9
      // ac: goto b3
      // af: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: checkcast net/minecraft/class_1657
      // b6: astore 8
      // b8: sipush 21606
      // bb: ldc2_w 7186297608885271008
      // be: lload 0
      // bf: lxor
      // c0: invokedynamic y (IJ)J bsm=sixtwo/pv.cPZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // c5: lstore 9
      // c7: aload 8
      // c9: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // cc: getstatic net/minecraft/class_1802.field_8634 Lnet/minecraft/class_1792;
      // cf: lload 9
      // d1: invokestatic sixtwo/pv.cPK (Ljava/util/UUID;Lnet/minecraft/class_1792;J)V
      // d4: aload 2
      // d5: ifnull 32
      // d8: getstatic sixtwo/pv.UDUQa Ljava/util/Set;
      // db: aload 3
      // dc: invokeinterface java/util/Set.retainAll (Ljava/util/Collection;)Z 2
      // e1: pop
      // e2: return
   }

   public static void cPH(gL$tk param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/pv.ILcIQ J
      // 03: ldc2_w 659892859312
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/pv.cPR ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: ifnull 20
      // 10: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 13: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 16: ifnonnull 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 29: astore 4
      // 2b: aload 4
      // 2d: aload 3
      // 2e: ifnonnull 47
      // 31: instanceof net/minecraft/class_2663
      // 34: ifeq 63
      // 37: goto 3e
      // 3a: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 4
      // 40: goto 47
      // 43: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: checkcast net/minecraft/class_2663
      // 4a: astore 5
      // 4c: aload 5
      // 4e: aload 3
      // 4f: ifnonnull 6a
      // 52: invokevirtual net/minecraft/class_2663.method_11470 ()B
      // 55: getstatic sixtwo/pv.eADIq J
      // 58: l2i
      // 59: if_icmpeq 68
      // 5c: goto 63
      // 5f: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 62: athrow
      // 63: return
      // 64: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: aload 5
      // 6a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6d: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 70: invokevirtual net/minecraft/class_2663.method_11469 (Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;
      // 73: astore 6
      // 75: aload 6
      // 77: aload 3
      // 78: ifnonnull 91
      // 7b: instanceof net/minecraft/class_1657
      // 7e: ifeq b2
      // 81: goto 88
      // 84: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 6
      // 8a: goto 91
      // 8d: invokestatic sixtwo/pv.cPS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: checkcast net/minecraft/class_1657
      // 94: astore 7
      // 96: sipush 21181
      // 99: ldc2_w 3249967631093145321
      // 9c: lload 1
      // 9d: lxor
      // 9e: invokedynamic y (IJ)J bsm=sixtwo/pv.cPZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // a3: lstore 8
      // a5: aload 7
      // a7: invokevirtual net/minecraft/class_1657.method_5667 ()Ljava/util/UUID;
      // aa: getstatic net/minecraft/class_1802.field_8288 Lnet/minecraft/class_1792;
      // ad: lload 8
      // af: invokestatic sixtwo/pv.cPK (Ljava/util/UUID;Lnet/minecraft/class_1792;J)V
      // b2: return
   }
}
