package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1922;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_2382;
import net.minecraft.class_243;
import net.minecraft.class_265;
import net.minecraft.class_2680;
import net.minecraft.class_3610;
import net.minecraft.class_3959;
import net.minecraft.class_3965;

public class oC {
   private static final int NNvjo;
   private static final double OFezW = 0.15;
   private static final double EoHES = 0.85;
   private static final class_2382[] YuMVe;
   public static final Predicate<class_2680> djrGf;
   private static final long baTmf = gb.aYR(-3941548029273195598L, -7304090693425401748L, MethodHandles.lookup().lookupClass()).a(150658425836150L);
   private static final long[] dJuiY;
   private static final Integer[] cjEmj;
   private static final Map kGycZ = new HashMap(13);

   static {
      long var11 = baTmf ^ 81886890889163L;
      Cipher var0;
      Cipher var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[4];
      int var3 = 0;
      String var4 = "Ó²\u0096Ü\u0095\u009betÄz\u0083\u0092X\u0083ÔÖ";
      int var5 = "Ó²\u0096Ü\u0095\u009betÄz\u0083\u0092X\u0083ÔÖ".length();
      byte var2 = 0;

      label23:
      while (true) {
         int var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var14 = var6;
         var10001 = var3++;
         long var18 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var20 = -1;

         while (true) {
            long var8 = var18;
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
            long var22 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var20) {
               case 0:
                  var14[var10001] = var22;
                  if (var2 >= var5) {
                     dJuiY = var6;
                     cjEmj = new Integer[4];
                     NNvjo = cIl<"j">(16917, var11 ^ 1500631190412593863L);
                     class_2382[] var15 = new class_2382[cIl<"j">(10251, 3852772743206723803L ^ var11)];
                     var15[0] = new class_2382(0, -1, 0);
                     var15[1] = new class_2382(0, 1, 0);
                     var15[2] = new class_2382(-1, 0, 0);
                     var15[3] = new class_2382(1, 0, 0);
                     var15[4] = new class_2382(0, 0, 1);
                     var15[5] = new class_2382(0, 0, -1);
                     YuMVe = var15;
                     djrGf = oC::cHP;
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var22;
                  if (var2 < var5) {
                     continue label23;
                  }

                  var4 = "¬\u0087\u0012c¥Ç|>²r\u008cxÐ\u0097ß\u009f";
                  var5 = "¬\u0087\u0012c¥Ç|>²r\u008cxÐ\u0097ß\u009f".length();
                  var2 = 0;
            }

            byte var17 = var2;
            var2 += 8;
            var7 = var4.substring(var17, var2).getBytes("ISO-8859-1");
            var14 = var6;
            var10001 = var3++;
            var18 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var20 = 0;
         }
      }
   }

   public oz cHT(class_2338 param1, oD param2, oB param3, boolean param4, Predicate<class_2680> param5, List<oy> param6, oz param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oC.baTmf J
      // 003: ldc2_w 73791509079049
      // 006: lxor
      // 007: lstore 8
      // 009: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 00c: astore 10
      // 00e: iload 4
      // 010: aload 10
      // 012: ifnonnull 02a
      // 015: ifne 03d
      // 018: goto 01f
      // 01b: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01e: athrow
      // 01f: aload 1
      // 020: invokestatic sixtwo/jl.bDT (Lnet/minecraft/class_2338;)Z
      // 023: goto 02a
      // 026: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 029: athrow
      // 02a: aload 10
      // 02c: ifnonnull 03a
      // 02f: ifeq 03d
      // 032: goto 039
      // 035: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 038: athrow
      // 039: bipush 1
      // 03a: goto 03e
      // 03d: bipush 0
      // 03e: istore 11
      // 040: iload 11
      // 042: aload 10
      // 044: ifnonnull 060
      // 047: ifeq 057
      // 04a: goto 051
      // 04d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 050: athrow
      // 051: aconst_null
      // 052: areturn
      // 053: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 056: athrow
      // 057: getstatic sixtwo/oU.Xrdom Ljava/util/Map;
      // 05a: aload 1
      // 05b: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 060: istore 12
      // 062: iload 12
      // 064: ifeq 06d
      // 067: aconst_null
      // 068: areturn
      // 069: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 06c: athrow
      // 06d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 070: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 073: aload 1
      // 074: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 077: astore 13
      // 079: aload 5
      // 07b: aload 13
      // 07d: invokeinterface java/util/function/Predicate.test (Ljava/lang/Object;)Z 2
      // 082: aload 10
      // 084: ifnonnull 092
      // 087: ifne 095
      // 08a: goto 091
      // 08d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 090: athrow
      // 091: bipush 1
      // 092: goto 096
      // 095: bipush 0
      // 096: istore 14
      // 098: iload 14
      // 09a: ifeq 0a3
      // 09d: aconst_null
      // 09e: areturn
      // 09f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a2: athrow
      // 0a3: aload 2
      // 0a4: getstatic sixtwo/oD.xBObQ Lsixtwo/oD;
      // 0a7: if_acmpne 0db
      // 0aa: new net/minecraft/class_3959
      // 0ad: dup
      // 0ae: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0b1: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0b4: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 0b7: aload 1
      // 0b8: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 0bb: getstatic net/minecraft/class_3959$class_3960.field_17558 Lnet/minecraft/class_3959$class_3960;
      // 0be: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 0c1: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0c4: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0c7: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 0ca: aload 1
      // 0cb: invokestatic sixtwo/ox.cHc (Lnet/minecraft/class_3959;Lnet/minecraft/class_2338;)Lnet/minecraft/class_3965;
      // 0ce: astore 15
      // 0d0: new sixtwo/oz
      // 0d3: dup
      // 0d4: aload 1
      // 0d5: aload 15
      // 0d7: invokespecial sixtwo/oz.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_3965;)V
      // 0da: areturn
      // 0db: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0de: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0e1: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 0e4: astore 15
      // 0e6: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // 0e9: invokevirtual sixtwo/qL.dbC ()Lsixtwo/ov;
      // 0ec: astore 16
      // 0ee: aload 16
      // 0f0: invokevirtual sixtwo/ov.cGH ()Lnet/minecraft/class_243;
      // 0f3: astore 17
      // 0f5: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f8: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0fb: invokevirtual net/minecraft/class_746.method_55754 ()D
      // 0fe: dstore 18
      // 100: aload 0
      // 101: aload 1
      // 102: aload 7
      // 104: aload 6
      // 106: aload 2
      // 107: dload 18
      // 109: aload 15
      // 10b: invokevirtual sixtwo/oC.cHU (Lnet/minecraft/class_2338;Lsixtwo/oz;Ljava/util/List;Lsixtwo/oD;DLnet/minecraft/class_243;)Lsixtwo/oz;
      // 10e: astore 20
      // 110: aload 20
      // 112: aload 10
      // 114: ifnonnull 123
      // 117: ifnull 124
      // 11a: goto 121
      // 11d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: aload 20
      // 123: areturn
      // 124: aload 3
      // 125: getstatic sixtwo/oB.FXGPX Lsixtwo/oB;
      // 128: if_acmpne 139
      // 12b: new java/util/ArrayList
      // 12e: dup
      // 12f: invokespecial java/util/ArrayList.<init> ()V
      // 132: goto 13a
      // 135: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 138: athrow
      // 139: aconst_null
      // 13a: astore 21
      // 13c: aconst_null
      // 13d: astore 22
      // 13f: ldc2_w 1.7976931348623157E308
      // 142: dstore 23
      // 144: aload 0
      // 145: aload 1
      // 146: invokevirtual sixtwo/oC.cIe (Lnet/minecraft/class_2338;)Ljava/util/List;
      // 149: astore 25
      // 14b: aload 25
      // 14d: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 152: astore 26
      // 154: aload 26
      // 156: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 15b: ifeq 277
      // 15e: aload 26
      // 160: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 165: checkcast sixtwo/oF
      // 168: astore 27
      // 16a: aload 0
      // 16b: aload 27
      // 16d: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 170: aload 27
      // 172: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 175: aload 15
      // 177: invokevirtual sixtwo/oC.cIb (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;Lnet/minecraft/class_243;)Z
      // 17a: aload 10
      // 17c: ifnonnull 298
      // 17f: ifeq 195
      // 182: goto 189
      // 185: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 188: athrow
      // 189: aload 10
      // 18b: ifnull 154
      // 18e: goto 195
      // 191: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 194: athrow
      // 195: aload 3
      // 196: getstatic sixtwo/oB.FXGPX Lsixtwo/oB;
      // 199: if_acmpne 1b8
      // 19c: aload 0
      // 19d: aload 1
      // 19e: aload 27
      // 1a0: aload 2
      // 1a1: aload 15
      // 1a3: dload 18
      // 1a5: aload 6
      // 1a7: aload 21
      // 1a9: invokevirtual sixtwo/oC.cHW (Lnet/minecraft/class_2338;Lsixtwo/oF;Lsixtwo/oD;Lnet/minecraft/class_243;DLjava/util/List;Ljava/util/List;)V
      // 1ac: aload 10
      // 1ae: ifnull 154
      // 1b1: goto 1b8
      // 1b4: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1b7: athrow
      // 1b8: aload 0
      // 1b9: aload 27
      // 1bb: aload 2
      // 1bc: aload 15
      // 1be: aload 17
      // 1c0: dload 18
      // 1c2: invokevirtual sixtwo/oC.cHV (Lsixtwo/oF;Lsixtwo/oD;Lnet/minecraft/class_243;Lnet/minecraft/class_243;D)Lnet/minecraft/class_243;
      // 1c5: astore 28
      // 1c7: aload 28
      // 1c9: aload 10
      // 1cb: ifnonnull 1f6
      // 1ce: ifnonnull 1e4
      // 1d1: goto 1d8
      // 1d4: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d7: athrow
      // 1d8: aload 10
      // 1da: ifnull 154
      // 1dd: goto 1e4
      // 1e0: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e3: athrow
      // 1e4: aload 0
      // 1e5: aload 28
      // 1e7: aload 27
      // 1e9: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 1ec: aload 27
      // 1ee: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 1f1: aload 6
      // 1f3: invokevirtual sixtwo/oC.cHX (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;Ljava/util/List;)Lnet/minecraft/class_243;
      // 1f6: astore 29
      // 1f8: aload 0
      // 1f9: aload 29
      // 1fb: aload 27
      // 1fd: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 200: aload 27
      // 202: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 205: aload 2
      // 206: getstatic sixtwo/oD.pxPhl Lsixtwo/oD;
      // 209: if_acmpne 214
      // 20c: bipush 1
      // 20d: goto 215
      // 210: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 213: athrow
      // 214: bipush 0
      // 215: dload 18
      // 217: invokevirtual sixtwo/oC.cHY (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;ZD)Z
      // 21a: ifeq 229
      // 21d: aload 10
      // 21f: ifnull 154
      // 222: goto 229
      // 225: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 228: athrow
      // 229: aload 0
      // 22a: aload 29
      // 22c: aload 15
      // 22e: aload 17
      // 230: invokevirtual sixtwo/oC.cIa (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)D
      // 233: dstore 30
      // 235: dload 30
      // 237: aload 10
      // 239: ifnonnull 252
      // 23c: dload 23
      // 23e: dcmpg
      // 23f: ifge 272
      // 242: goto 249
      // 245: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 248: athrow
      // 249: dload 30
      // 24b: goto 252
      // 24e: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 251: athrow
      // 252: dstore 23
      // 254: new sixtwo/oz
      // 257: dup
      // 258: aload 1
      // 259: new net/minecraft/class_3965
      // 25c: dup
      // 25d: aload 29
      // 25f: aload 27
      // 261: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 264: aload 27
      // 266: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 269: bipush 0
      // 26a: invokespecial net/minecraft/class_3965.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V
      // 26d: invokespecial sixtwo/oz.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_3965;)V
      // 270: astore 22
      // 272: aload 10
      // 274: ifnull 154
      // 277: aload 3
      // 278: getstatic sixtwo/oB.FXGPX Lsixtwo/oB;
      // 27b: if_acmpne 2b9
      // 27e: aload 21
      // 280: aload 10
      // 282: ifnonnull 2b5
      // 285: goto 28c
      // 288: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28b: athrow
      // 28c: invokeinterface java/util/List.isEmpty ()Z 1
      // 291: goto 298
      // 294: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 297: athrow
      // 298: ifeq 2a1
      // 29b: aconst_null
      // 29c: areturn
      // 29d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2a0: athrow
      // 2a1: aload 21
      // 2a3: invokestatic java/util/concurrent/ThreadLocalRandom.current ()Ljava/util/concurrent/ThreadLocalRandom;
      // 2a6: aload 21
      // 2a8: invokeinterface java/util/List.size ()I 1
      // 2ad: invokevirtual java/util/concurrent/ThreadLocalRandom.nextInt (I)I
      // 2b0: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 2b5: checkcast sixtwo/oz
      // 2b8: areturn
      // 2b9: aload 22
      // 2bb: areturn
   }

   private double cIa(class_243 param1, class_243 param2, class_243 param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 18811117612785
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0c: aload 1
      // 0d: aload 2
      // 0e: invokevirtual net/minecraft/class_243.method_1020 (Lnet/minecraft/class_243;)Lnet/minecraft/class_243;
      // 11: astore 7
      // 13: aload 7
      // 15: invokevirtual net/minecraft/class_243.method_1027 ()D
      // 18: dstore 8
      // 1a: astore 6
      // 1c: dload 8
      // 1e: aload 6
      // 20: ifnonnull 3d
      // 23: ldc2_w 1.0E-12
      // 26: dcmpg
      // 27: ifgt 37
      // 2a: goto 31
      // 2d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: dconst_0
      // 32: dreturn
      // 33: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 7
      // 39: aload 3
      // 3a: invokevirtual net/minecraft/class_243.method_1026 (Lnet/minecraft/class_243;)D
      // 3d: dstore 10
      // 3f: dload 8
      // 41: dload 10
      // 43: dload 10
      // 45: dmul
      // 46: dsub
      // 47: dreturn
   }

   private boolean cIc(class_243 param1, class_2338 param2, class_2350 param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/oC.baTmf J
      // 003: ldc2_w 78609663796848
      // 006: lxor
      // 007: lstore 4
      // 009: aload 1
      // 00a: getfield net/minecraft/class_243.field_1352 D
      // 00d: aload 2
      // 00e: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 011: i2d
      // 012: dsub
      // 013: dstore 7
      // 015: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 018: aload 1
      // 019: getfield net/minecraft/class_243.field_1351 D
      // 01c: aload 2
      // 01d: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 020: i2d
      // 021: dsub
      // 022: dstore 9
      // 024: astore 6
      // 026: aload 1
      // 027: getfield net/minecraft/class_243.field_1350 D
      // 02a: aload 2
      // 02b: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 02e: i2d
      // 02f: dsub
      // 030: dstore 11
      // 032: getstatic sixtwo/oC$vl.GISLY [I
      // 035: aload 3
      // 036: invokevirtual net/minecraft/class_2350.ordinal ()I
      // 039: iaload
      // 03a: aload 6
      // 03c: ifnonnull 0f6
      // 03f: tableswitch 41 1 6 55 55 116 116 177 177
      // 064: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 067: athrow
      // 068: new java/lang/MatchException
      // 06b: dup
      // 06c: aconst_null
      // 06d: aconst_null
      // 06e: invokespecial java/lang/MatchException.<init> (Ljava/lang/String;Ljava/lang/Throwable;)V
      // 071: athrow
      // 072: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: aload 0
      // 077: dload 7
      // 079: invokevirtual sixtwo/oC.cId (D)Z
      // 07c: aload 6
      // 07e: ifnonnull 0b0
      // 081: ifeq 0af
      // 084: goto 08b
      // 087: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 08a: athrow
      // 08b: aload 0
      // 08c: dload 11
      // 08e: invokevirtual sixtwo/oC.cId (D)Z
      // 091: aload 6
      // 093: ifnonnull 0b0
      // 096: goto 09d
      // 099: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09c: athrow
      // 09d: ifeq 0af
      // 0a0: goto 0a7
      // 0a3: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a6: athrow
      // 0a7: bipush 1
      // 0a8: goto 126
      // 0ab: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: bipush 0
      // 0b0: goto 126
      // 0b3: aload 0
      // 0b4: dload 9
      // 0b6: invokevirtual sixtwo/oC.cId (D)Z
      // 0b9: aload 6
      // 0bb: ifnonnull 0ed
      // 0be: ifeq 0ec
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: aload 0
      // 0c9: dload 11
      // 0cb: invokevirtual sixtwo/oC.cId (D)Z
      // 0ce: aload 6
      // 0d0: ifnonnull 0ed
      // 0d3: goto 0da
      // 0d6: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d9: athrow
      // 0da: ifeq 0ec
      // 0dd: goto 0e4
      // 0e0: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e3: athrow
      // 0e4: bipush 1
      // 0e5: goto 126
      // 0e8: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0eb: athrow
      // 0ec: bipush 0
      // 0ed: goto 126
      // 0f0: aload 0
      // 0f1: dload 7
      // 0f3: invokevirtual sixtwo/oC.cId (D)Z
      // 0f6: aload 6
      // 0f8: ifnonnull 112
      // 0fb: ifeq 125
      // 0fe: goto 105
      // 101: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 104: athrow
      // 105: aload 0
      // 106: dload 9
      // 108: invokevirtual sixtwo/oC.cId (D)Z
      // 10b: goto 112
      // 10e: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: aload 6
      // 114: ifnonnull 122
      // 117: ifeq 125
      // 11a: goto 121
      // 11d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 120: athrow
      // 121: bipush 1
      // 122: goto 126
      // 125: bipush 0
      // 126: ireturn
   }

   private boolean cId(double param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 45122492429533
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0b: astore 5
      // 0d: dload 1
      // 0e: ldc2_w 0.15
      // 11: dcmpl
      // 12: aload 5
      // 14: ifnonnull 2d
      // 17: iflt 40
      // 1a: goto 21
      // 1d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: dload 1
      // 22: ldc2_w 0.85
      // 25: dcmpg
      // 26: goto 2d
      // 29: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 5
      // 2f: ifnonnull 3d
      // 32: ifgt 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }

   private boolean cIf(class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 10106597271464
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 13: aload 1
      // 14: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 17: invokevirtual net/minecraft/class_2680.method_51367 ()Z
      // 1a: aload 4
      // 1c: ifnonnull 49
      // 1f: ifne 48
      // 22: goto 29
      // 25: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: getstatic sixtwo/oU.Xrdom Ljava/util/Map;
      // 2c: aload 1
      // 2d: invokeinterface java/util/Map.containsKey (Ljava/lang/Object;)Z 2
      // 32: aload 4
      // 34: ifnonnull 49
      // 37: goto 3e
      // 3a: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifeq 4c
      // 41: goto 48
      // 44: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: bipush 1
      // 49: goto 4d
      // 4c: bipush 0
      // 4d: ireturn
   }

   private static CallSite cIl(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("cIk".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/oC" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private class_3965 cHZ(class_3959 var1) {
      return (class_3965)class_1922.method_17744(
         var1.method_17750(),
         var1.method_17747(),
         var1,
         (var0, var1x) -> {
            long var2 = baTmf ^ 133242461471076L;
            class_2680 var4 = rD.dlmvG.field_1687.method_8320(var1x);

            try {
               if (cHP(var4)) {
                  return null;
               }
            } catch (MatchException var19) {
               throw cIi(var19);
            }

            class_3610 var5 = rD.dlmvG.field_1687.method_8316(var1x);
            class_243 var6 = var0.method_17750();
            class_243 var7 = var0.method_17747();
            class_265 var8 = var0.method_17748(var4, rD.dlmvG.field_1687, var1x);
            class_3965 var9 = rD.dlmvG.field_1687.method_17745(var6, var7, var1x, var8, var4);
            class_265 var10 = var0.method_17749(var5, rD.dlmvG.field_1687, var1x);
            class_3965 var11 = var10.method_1092(var6, var7, var1x);

            double var10000;
            label50: {
               try {
                  if (var9 == null) {
                     var10000 = Double.MAX_VALUE;
                     break label50;
                  }
               } catch (MatchException var18) {
                  throw cIi(var18);
               }

               var10000 = var6.method_1025(var9.method_17784());
            }

            double var12 = var10000;

            label42: {
               try {
                  if (var11 == null) {
                     var10000 = Double.MAX_VALUE;
                     break label42;
                  }
               } catch (MatchException var17) {
                  throw cIi(var17);
               }

               var10000 = var6.method_1025(var11.method_17784());
            }

            double var14 = var10000;

            try {
               if (var12 <= var14) {
                  return var9;
               }
            } catch (MatchException var16) {
               throw cIi(var16);
            }

            return var11;
         },
         var0 -> {
            class_243 var1x = var0.method_17750().method_1020(var0.method_17747());
            return class_3965.method_17778(
               var0.method_17747(), class_2350.method_10142(var1x.field_1352, var1x.field_1351, var1x.field_1350), class_2338.method_49638(var0.method_17747())
            );
         }
      );
   }

   private static int cIj(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 80;
      if (cjEmj[var3] == null) {
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
         long var5 = dJuiY[var3];
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
         Object[] var9 = (Object[])kGycZ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kGycZ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/oC", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         cjEmj[var3] = var15;
      }

      return cjEmj[var3];
   }

   private static int cIk(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = cIj(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static boolean cHP(class_2680 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 58536257209812
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual net/minecraft/class_2680.method_26204 ()Lnet/minecraft/class_2248;
      // 0f: astore 4
      // 11: astore 3
      // 12: aload 4
      // 14: instanceof net/minecraft/class_2358
      // 17: aload 3
      // 18: ifnonnull 74
      // 1b: ifne 73
      // 1e: goto 25
      // 21: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 4
      // 27: instanceof net/minecraft/class_2526
      // 2a: aload 3
      // 2b: ifnonnull 74
      // 2e: goto 35
      // 31: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: ifne 73
      // 38: goto 3f
      // 3b: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: aload 4
      // 41: instanceof net/minecraft/class_2488
      // 44: aload 3
      // 45: ifnonnull 74
      // 48: goto 4f
      // 4b: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: ifne 73
      // 52: goto 59
      // 55: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 58: athrow
      // 59: aload 4
      // 5b: instanceof net/minecraft/class_2541
      // 5e: aload 3
      // 5f: ifnonnull 74
      // 62: goto 69
      // 65: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 68: athrow
      // 69: ifeq 77
      // 6c: goto 73
      // 6f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: bipush 1
      // 74: goto 78
      // 77: bipush 0
      // 78: istore 5
      // 7a: aload 0
      // 7b: invokevirtual net/minecraft/class_2680.method_45474 ()Z
      // 7e: aload 3
      // 7f: ifnonnull a4
      // 82: ifne a3
      // 85: goto 8c
      // 88: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8b: athrow
      // 8c: iload 5
      // 8e: aload 3
      // 8f: ifnonnull a4
      // 92: goto 99
      // 95: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: ifeq a7
      // 9c: goto a3
      // 9f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a2: athrow
      // a3: bipush 1
      // a4: goto a8
      // a7: bipush 0
      // a8: ireturn
   }

   private static MatchException cIi(MatchException var0) {
      return var0;
   }

   public oz cHQ(class_2338 var1, oD var2, boolean var3, Predicate<class_2680> var4) {
      return this.cHT(var1, var2, oB.LwHxs, var3, var4, Collections.emptyList(), null);
   }

   public oz cHR(class_2338 var1, oD var2, boolean var3, Predicate<class_2680> var4, List<oy> var5) {
      return this.cHT(var1, var2, oB.LwHxs, var3, var4, var5, null);
   }

   public oz cHS(class_2338 var1, oD var2, boolean var3, Predicate<class_2680> var4, List<oy> var5, oz var6) {
      return this.cHT(var1, var2, oB.LwHxs, var3, var4, var5, var6);
   }

   private oz cHU(class_2338 param1, oz param2, List<oy> param3, oD param4, double param5, class_243 param7) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 56537248156793
      // 06: lxor
      // 07: lstore 8
      // 09: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0c: astore 10
      // 0e: aload 2
      // 0f: aload 10
      // 11: ifnonnull 1f
      // 14: ifnull 35
      // 17: goto 1e
      // 1a: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 2
      // 1f: aload 10
      // 21: ifnonnull 3c
      // 24: invokevirtual sixtwo/oz.blockPos ()Lnet/minecraft/class_2338;
      // 27: aload 1
      // 28: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // 2b: ifne 3b
      // 2e: goto 35
      // 31: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aconst_null
      // 36: areturn
      // 37: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3a: athrow
      // 3b: aload 2
      // 3c: invokevirtual sixtwo/oz.blockHitResult ()Lnet/minecraft/class_3965;
      // 3f: astore 11
      // 41: aload 11
      // 43: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // 46: astore 12
      // 48: aload 11
      // 4a: invokevirtual net/minecraft/class_3965.method_17780 ()Lnet/minecraft/class_2350;
      // 4d: astore 13
      // 4f: aload 0
      // 50: aload 1
      // 51: invokevirtual sixtwo/oC.cIe (Lnet/minecraft/class_2338;)Ljava/util/List;
      // 54: new sixtwo/oF
      // 57: dup
      // 58: aload 12
      // 5a: aload 13
      // 5c: invokespecial sixtwo/oF.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V
      // 5f: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 64: aload 10
      // 66: ifnonnull 8f
      // 69: ifne 79
      // 6c: goto 73
      // 6f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 72: athrow
      // 73: aconst_null
      // 74: areturn
      // 75: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 78: athrow
      // 79: aload 0
      // 7a: aload 10
      // 7c: ifnonnull 99
      // 7f: aload 12
      // 81: aload 13
      // 83: aload 7
      // 85: invokevirtual sixtwo/oC.cIb (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;Lnet/minecraft/class_243;)Z
      // 88: goto 8f
      // 8b: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 8e: athrow
      // 8f: ifeq 98
      // 92: aconst_null
      // 93: areturn
      // 94: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 0
      // 99: aload 11
      // 9b: invokevirtual net/minecraft/class_3965.method_17784 ()Lnet/minecraft/class_243;
      // 9e: aload 12
      // a0: aload 13
      // a2: aload 3
      // a3: invokevirtual sixtwo/oC.cHX (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;Ljava/util/List;)Lnet/minecraft/class_243;
      // a6: astore 14
      // a8: aload 0
      // a9: aload 14
      // ab: aload 12
      // ad: aload 13
      // af: aload 4
      // b1: getstatic sixtwo/oD.pxPhl Lsixtwo/oD;
      // b4: if_acmpne bf
      // b7: bipush 1
      // b8: goto c0
      // bb: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // be: athrow
      // bf: bipush 0
      // c0: dload 5
      // c2: invokevirtual sixtwo/oC.cHY (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;ZD)Z
      // c5: ifeq ce
      // c8: aconst_null
      // c9: areturn
      // ca: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cd: athrow
      // ce: new sixtwo/oz
      // d1: dup
      // d2: aload 1
      // d3: new net/minecraft/class_3965
      // d6: dup
      // d7: aload 14
      // d9: aload 13
      // db: aload 12
      // dd: bipush 0
      // de: invokespecial net/minecraft/class_3965.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V
      // e1: invokespecial sixtwo/oz.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_3965;)V
      // e4: areturn
   }

   private List<oF> cIe(class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 138028622077635
      // 06: lxor
      // 07: lstore 2
      // 08: new java/util/ArrayList
      // 0b: dup
      // 0c: invokespecial java/util/ArrayList.<init> ()V
      // 0f: astore 5
      // 11: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 14: bipush 0
      // 15: istore 6
      // 17: astore 4
      // 19: iload 6
      // 1b: getstatic sixtwo/oC.YuMVe [Lnet/minecraft/class_2382;
      // 1e: arraylength
      // 1f: if_icmpge 69
      // 22: aload 1
      // 23: getstatic sixtwo/oC.YuMVe [Lnet/minecraft/class_2382;
      // 26: iload 6
      // 28: aaload
      // 29: invokevirtual net/minecraft/class_2338.method_10081 (Lnet/minecraft/class_2382;)Lnet/minecraft/class_2338;
      // 2c: astore 7
      // 2e: aload 4
      // 30: ifnonnull 64
      // 33: aload 0
      // 34: aload 7
      // 36: invokevirtual sixtwo/oC.cIf (Lnet/minecraft/class_2338;)Z
      // 39: ifeq 61
      // 3c: goto 43
      // 3f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 5
      // 45: new sixtwo/oF
      // 48: dup
      // 49: aload 7
      // 4b: getstatic sixtwo/ja.toQLU [Lnet/minecraft/class_2350;
      // 4e: iload 6
      // 50: aaload
      // 51: invokespecial sixtwo/oF.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V
      // 54: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 59: pop
      // 5a: goto 61
      // 5d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: iinc 6 1
      // 64: aload 4
      // 66: ifnull 19
      // 69: aload 5
      // 6b: areturn
   }

   private boolean cIb(class_2338 var1, class_2350 var2, class_243 var3) {
      long var4 = baTmf ^ 125121563716501L;
      String[] var6 = oz.b();

      class_243 var10000;
      label57: {
         label56: {
            label55: {
               label54: {
                  label53: {
                     label52: {
                        try {
                           switch (oC$vl.GISLY[var2.ordinal()]) {
                              case 1:
                                 break label56;
                              case 2:
                                 break label55;
                              case 3:
                                 break label54;
                              case 4:
                                 break label53;
                              case 5:
                                 break label52;
                              case 6:
                                 break;
                              default:
                                 throw new MatchException(null, null);
                           }
                        } catch (MatchException var11) {
                           throw cIi(var11);
                        }

                        var10000 = new class_243(var1.method_10263() + 0.5, var1.method_10264() + 0.5, var1.method_10260() + 1.0);
                        break label57;
                     }

                     var10000 = new class_243(var1.method_10263() + 0.5, var1.method_10264() + 0.5, var1.method_10260());
                     break label57;
                  }

                  var10000 = new class_243(var1.method_10263(), var1.method_10264() + 0.5, var1.method_10260() + 0.5);
                  break label57;
               }

               var10000 = new class_243(var1.method_10263() + 1.0, var1.method_10264() + 0.5, var1.method_10260() + 0.5);
               break label57;
            }

            var10000 = new class_243(var1.method_10263() + 0.5, var1.method_10264(), var1.method_10260() + 0.5);
            break label57;
         }

         var10000 = new class_243(var1.method_10263() + 0.5, var1.method_10264() + 1.0, var1.method_10260() + 0.5);
      }

      class_243 var7 = var10000;
      class_243 var8 = var3.method_1020(var7);
      class_243 var9 = new class_243(var2.method_10148(), var2.method_10164(), var2.method_10165());

      try {
         double var13;
         int var12 = (var13 = var8.method_1026(var9) - 0.0) == 0.0 ? 0 : (var13 < 0.0 ? -1 : 1);
         if (var6 != null) {
            return (boolean)var12;
         }

         if (var12 < 0) {
            return (boolean)1;
         }
      } catch (MatchException var10) {
         throw cIi(var10);
      }

      return (boolean)0;
   }

   private void cHW(class_2338 param1, oF param2, oD param3, class_243 param4, double param5, List<oy> param7, List<oz> param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 52844468710755
      // 06: lxor
      // 07: lstore 9
      // 09: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0c: aload 2
      // 0d: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 10: aload 2
      // 11: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 14: sipush 6501
      // 17: ldc2_w 6047978668473905950
      // 1a: lload 9
      // 1c: lxor
      // 1d: invokedynamic j (IJ)I bsm=sixtwo/oC.cIl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 22: invokestatic sixtwo/oE.cIq (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;I)Ljava/util/List;
      // 25: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 2a: astore 12
      // 2c: astore 11
      // 2e: aload 12
      // 30: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 35: ifeq e1
      // 38: aload 12
      // 3a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 3f: checkcast net/minecraft/class_243
      // 42: astore 13
      // 44: aload 0
      // 45: aload 13
      // 47: aload 2
      // 48: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 4b: aload 2
      // 4c: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 4f: aload 11
      // 51: ifnonnull 78
      // 54: invokevirtual sixtwo/oC.cIc (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z
      // 57: ifne 6d
      // 5a: goto 61
      // 5d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 60: athrow
      // 61: aload 11
      // 63: ifnull 2e
      // 66: goto 6d
      // 69: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6c: athrow
      // 6d: aload 0
      // 6e: aload 13
      // 70: aload 2
      // 71: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 74: aload 2
      // 75: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 78: aload 7
      // 7a: invokevirtual sixtwo/oC.cHX (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;Ljava/util/List;)Lnet/minecraft/class_243;
      // 7d: astore 14
      // 7f: aload 0
      // 80: aload 14
      // 82: aload 2
      // 83: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 86: aload 2
      // 87: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 8a: aload 3
      // 8b: getstatic sixtwo/oD.pxPhl Lsixtwo/oD;
      // 8e: if_acmpne 99
      // 91: bipush 1
      // 92: goto 9a
      // 95: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: bipush 0
      // 9a: dload 5
      // 9c: invokevirtual sixtwo/oC.cHY (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;ZD)Z
      // 9f: aload 11
      // a1: ifnonnull db
      // a4: ifeq ba
      // a7: goto ae
      // aa: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ad: athrow
      // ae: aload 11
      // b0: ifnull 2e
      // b3: goto ba
      // b6: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b9: athrow
      // ba: aload 8
      // bc: new sixtwo/oz
      // bf: dup
      // c0: aload 1
      // c1: new net/minecraft/class_3965
      // c4: dup
      // c5: aload 14
      // c7: aload 2
      // c8: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // cb: aload 2
      // cc: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // cf: bipush 0
      // d0: invokespecial net/minecraft/class_3965.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_2350;Lnet/minecraft/class_2338;Z)V
      // d3: invokespecial sixtwo/oz.<init> (Lnet/minecraft/class_2338;Lnet/minecraft/class_3965;)V
      // d6: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // db: pop
      // dc: aload 11
      // de: ifnull 2e
      // e1: return
   }

   private class_243 cHV(oF param1, oD param2, class_243 param3, class_243 param4, double param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 20905002830177
      // 06: lxor
      // 07: lstore 7
      // 09: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0c: aconst_null
      // 0d: astore 10
      // 0f: ldc2_w 1.7976931348623157E308
      // 12: dstore 11
      // 14: aload 1
      // 15: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 18: aload 1
      // 19: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 1c: sipush 30560
      // 1f: ldc2_w 5237553198130608411
      // 22: lload 7
      // 24: lxor
      // 25: invokedynamic j (IJ)I bsm=sixtwo/oC.cIl (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: invokestatic sixtwo/oE.cIq (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;I)Ljava/util/List;
      // 2d: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 32: astore 13
      // 34: astore 9
      // 36: aload 13
      // 38: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 3d: ifeq dc
      // 40: aload 13
      // 42: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 47: checkcast net/minecraft/class_243
      // 4a: aload 9
      // 4c: ifnonnull de
      // 4f: astore 14
      // 51: aload 0
      // 52: aload 14
      // 54: aload 1
      // 55: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 58: aload 1
      // 59: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 5c: aload 9
      // 5e: ifnonnull 85
      // 61: invokevirtual sixtwo/oC.cIc (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Z
      // 64: ifne 7a
      // 67: goto 6e
      // 6a: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6d: athrow
      // 6e: aload 9
      // 70: ifnull 36
      // 73: goto 7a
      // 76: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 79: athrow
      // 7a: aload 0
      // 7b: aload 14
      // 7d: aload 1
      // 7e: invokevirtual sixtwo/oF.blockPos ()Lnet/minecraft/class_2338;
      // 81: aload 1
      // 82: invokevirtual sixtwo/oF.direction ()Lnet/minecraft/class_2350;
      // 85: aload 2
      // 86: getstatic sixtwo/oD.pxPhl Lsixtwo/oD;
      // 89: if_acmpne 94
      // 8c: bipush 1
      // 8d: goto 95
      // 90: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 93: athrow
      // 94: bipush 0
      // 95: dload 5
      // 97: invokevirtual sixtwo/oC.cHY (Lnet/minecraft/class_243;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;ZD)Z
      // 9a: ifeq a9
      // 9d: aload 9
      // 9f: ifnull 36
      // a2: goto a9
      // a5: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a8: athrow
      // a9: aload 0
      // aa: aload 14
      // ac: aload 3
      // ad: aload 4
      // af: invokevirtual sixtwo/oC.cIa (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_243;)D
      // b2: dstore 15
      // b4: dload 15
      // b6: aload 9
      // b8: ifnonnull d1
      // bb: dload 11
      // bd: dcmpg
      // be: ifge d7
      // c1: goto c8
      // c4: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c7: athrow
      // c8: dload 15
      // ca: goto d1
      // cd: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d0: athrow
      // d1: dstore 11
      // d3: aload 14
      // d5: astore 10
      // d7: aload 9
      // d9: ifnull 36
      // dc: aload 10
      // de: areturn
   }

   private class_243 cHX(class_243 var1, class_2338 var2, class_2350 var3, List<oy> var4) {
      long var5 = baTmf ^ 96668799851L;
      String[] var10000 = oz.b();
      class_243 var8 = var1;
      Iterator var9 = var4.iterator();
      String[] var7 = var10000;

      while (true) {
         if (var9.hasNext()) {
            oy var10 = (oy)var9.next();
            var11 = var10.process(var8, var2, var3);
            if (var7 != null) {
               break;
            }

            var8 = var11;
            if (var7 == null) {
               continue;
            }
         }

         var11 = var8;
         break;
      }

      return var11;
   }

   private boolean cHY(class_243 param1, class_2338 param2, class_2350 param3, boolean param4, double param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/oC.baTmf J
      // 03: ldc2_w 107190516093916
      // 06: lxor
      // 07: lstore 7
      // 09: invokestatic sixtwo/oz.b ()[Ljava/lang/String;
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 12: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 15: aload 1
      // 16: invokestatic sixtwo/jg.bBH (Lnet/minecraft/class_243;Lnet/minecraft/class_243;)D
      // 19: dstore 10
      // 1b: astore 9
      // 1d: dload 10
      // 1f: dload 5
      // 21: dcmpl
      // 22: aload 9
      // 24: ifnonnull 32
      // 27: ifle 33
      // 2a: goto 31
      // 2d: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 30: athrow
      // 31: bipush 1
      // 32: ireturn
      // 33: aload 1
      // 34: aload 3
      // 35: invokevirtual net/minecraft/class_2350.method_10148 ()I
      // 38: i2d
      // 39: ldc2_w 0.001
      // 3c: dmul
      // 3d: aload 3
      // 3e: invokevirtual net/minecraft/class_2350.method_10164 ()I
      // 41: i2d
      // 42: ldc2_w 0.001
      // 45: dmul
      // 46: aload 3
      // 47: invokevirtual net/minecraft/class_2350.method_10165 ()I
      // 4a: i2d
      // 4b: ldc2_w 0.001
      // 4e: dmul
      // 4f: invokevirtual net/minecraft/class_243.method_1023 (DDD)Lnet/minecraft/class_243;
      // 52: astore 12
      // 54: new net/minecraft/class_3959
      // 57: dup
      // 58: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 5b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 5e: invokevirtual net/minecraft/class_746.method_33571 ()Lnet/minecraft/class_243;
      // 61: aload 12
      // 63: getstatic net/minecraft/class_3959$class_3960.field_17559 Lnet/minecraft/class_3959$class_3960;
      // 66: getstatic net/minecraft/class_3959$class_242.field_1348 Lnet/minecraft/class_3959$class_242;
      // 69: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6c: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 6f: invokespecial net/minecraft/class_3959.<init> (Lnet/minecraft/class_243;Lnet/minecraft/class_243;Lnet/minecraft/class_3959$class_3960;Lnet/minecraft/class_3959$class_242;Lnet/minecraft/class_1297;)V
      // 72: astore 13
      // 74: aload 0
      // 75: aload 13
      // 77: invokevirtual sixtwo/oC.cHZ (Lnet/minecraft/class_3959;)Lnet/minecraft/class_3965;
      // 7a: astore 14
      // 7c: aload 14
      // 7e: aload 9
      // 80: ifnonnull 9c
      // 83: invokevirtual net/minecraft/class_3965.method_17783 ()Lnet/minecraft/class_239$class_240;
      // 86: getstatic net/minecraft/class_239$class_240.field_1332 Lnet/minecraft/class_239$class_240;
      // 89: if_acmpne b8
      // 8c: goto 93
      // 8f: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 92: athrow
      // 93: aload 14
      // 95: goto 9c
      // 98: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9b: athrow
      // 9c: invokevirtual net/minecraft/class_3965.method_17777 ()Lnet/minecraft/class_2338;
      // 9f: aload 2
      // a0: invokevirtual net/minecraft/class_2338.equals (Ljava/lang/Object;)Z
      // a3: aload 9
      // a5: ifnonnull ba
      // a8: ifeq b8
      // ab: goto b2
      // ae: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b1: athrow
      // b2: bipush 0
      // b3: ireturn
      // b4: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b7: athrow
      // b8: iload 4
      // ba: aload 9
      // bc: ifnonnull ca
      // bf: ifne cd
      // c2: goto c9
      // c5: invokestatic sixtwo/oC.cIi (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // c8: athrow
      // c9: bipush 1
      // ca: goto ce
      // cd: bipush 0
      // ce: ireturn
   }
}
