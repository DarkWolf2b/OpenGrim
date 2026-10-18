package sixtwo;

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
import net.minecraft.class_591;

public interface pY {
   long QZmgt = gb.aYR(-6133195020221149175L, -1383166985107431704L, MethodHandles.lookup().lookupClass()).a(272923819504050L);
   String GPwAt;
   long[] DbCCK;
   Integer[] pIufn;
   Map Lfqki;

   static {
      long var11 = QZmgt ^ 100111622845463L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("ÂI\u0015¢ÀÏý:".getBytes("ISO-8859-1"));
      String var19 = a(var15).intern();
      int var10001 = -1;
      GPwAt = var19;
      Lfqki = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[3];
      int var3 = 0;
      String var4 = "÷JD²\u0092\u0094\u000eã\u0099'`\u0084 «À\u0010¡ÌÝ\u0082Ü\u009f\u0010\u0010";
      int var5 = "÷JD²\u0092\u0094\u000eã\u0099'`\u0084 «À\u0010¡ÌÝ\u0082Ü\u009f\u0010\u0010".length();
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
         byte var22 = -1;
         var6[var10001] = var10004;
      } while (var2 < var5);

      DbCCK = var6;
      pIufn = new Integer[3];
   }

   private static MatchException b(MatchException var0) {
      return var0;
   }

   private static CallSite a(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("a".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/pY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String a(byte[] var0) {
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

   private static int a(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 7591;
      if (pIufn[var3] == null) {
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
         long var5 = DbCCK[var3];
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
         Object[] var9 = (Object[])Lfqki.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Lfqki.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/pY", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         pIufn[var3] = var15;
      }

      return pIufn[var3];
   }

   private static int a(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = a(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   String id();

   default String label() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/pY.QZmgt J
      // 003: ldc2_w 24408327844553
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/qa.cUe ()[Ljava/lang/String;
      // 00b: aload 0
      // 00c: invokeinterface sixtwo/pY.id ()Ljava/lang/String; 1
      // 011: astore 4
      // 013: astore 3
      // 014: aload 4
      // 016: aload 3
      // 017: ifnull 048
      // 01a: ifnull 03e
      // 01d: goto 024
      // 020: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 4
      // 026: aload 3
      // 027: ifnull 068
      // 02a: goto 031
      // 02d: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: invokevirtual java/lang/String.isBlank ()Z
      // 034: ifeq 049
      // 037: goto 03e
      // 03a: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03d: athrow
      // 03e: getstatic sixtwo/pY.GPwAt Ljava/lang/String;
      // 041: goto 048
      // 044: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 047: athrow
      // 048: areturn
      // 049: aload 4
      // 04b: sipush 21558
      // 04e: ldc2_w 7388900026718043952
      // 051: lload 1
      // 052: lxor
      // 053: invokedynamic h (IJ)I bsm=sixtwo/pY.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 058: sipush 5283
      // 05b: ldc2_w 7445149863726514086
      // 05e: lload 1
      // 05f: lxor
      // 060: invokedynamic h (IJ)I bsm=sixtwo/pY.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 065: invokevirtual java/lang/String.replace (CC)Ljava/lang/String;
      // 068: ldc "_"
      // 06a: invokevirtual java/lang/String.split (Ljava/lang/String;)[Ljava/lang/String;
      // 06d: astore 5
      // 06f: new java/lang/StringBuilder
      // 072: dup
      // 073: invokespecial java/lang/StringBuilder.<init> ()V
      // 076: astore 6
      // 078: aload 5
      // 07a: astore 7
      // 07c: aload 7
      // 07e: arraylength
      // 07f: istore 8
      // 081: bipush 0
      // 082: istore 9
      // 084: iload 9
      // 086: iload 8
      // 088: if_icmpge 130
      // 08b: aload 7
      // 08d: iload 9
      // 08f: aaload
      // 090: astore 10
      // 092: aload 10
      // 094: invokevirtual java/lang/String.isBlank ()Z
      // 097: aload 3
      // 098: ifnull 140
      // 09b: aload 3
      // 09c: ifnull 0c7
      // 09f: goto 0a6
      // 0a2: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a5: athrow
      // 0a6: ifeq 0bb
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 3
      // 0b1: ifnonnull 129
      // 0b4: goto 0bb
      // 0b7: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ba: athrow
      // 0bb: aload 6
      // 0bd: invokevirtual java/lang/StringBuilder.isEmpty ()Z
      // 0c0: goto 0c7
      // 0c3: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c6: athrow
      // 0c7: aload 3
      // 0c8: ifnull 10f
      // 0cb: ifne 0ef
      // 0ce: goto 0d5
      // 0d1: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d4: athrow
      // 0d5: aload 6
      // 0d7: sipush 20896
      // 0da: ldc2_w 1664053006390901415
      // 0dd: lload 1
      // 0de: lxor
      // 0df: invokedynamic h (IJ)I bsm=sixtwo/pY.a (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e4: invokevirtual java/lang/StringBuilder.append (C)Ljava/lang/StringBuilder;
      // 0e7: pop
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ee: athrow
      // 0ef: aload 6
      // 0f1: aload 10
      // 0f3: bipush 0
      // 0f4: bipush 1
      // 0f5: invokevirtual java/lang/String.substring (II)Ljava/lang/String;
      // 0f8: invokevirtual java/lang/String.toUpperCase ()Ljava/lang/String;
      // 0fb: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 0fe: pop
      // 0ff: aload 3
      // 100: ifnull 12c
      // 103: aload 10
      // 105: invokevirtual java/lang/String.length ()I
      // 108: goto 10f
      // 10b: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: bipush 1
      // 110: if_icmple 129
      // 113: aload 6
      // 115: aload 10
      // 117: bipush 1
      // 118: invokevirtual java/lang/String.substring (I)Ljava/lang/String;
      // 11b: invokevirtual java/lang/String.toLowerCase ()Ljava/lang/String;
      // 11e: invokevirtual java/lang/StringBuilder.append (Ljava/lang/String;)Ljava/lang/StringBuilder;
      // 121: pop
      // 122: goto 129
      // 125: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 128: athrow
      // 129: iinc 9 1
      // 12c: aload 3
      // 12d: ifnonnull 084
      // 130: aload 6
      // 132: aload 3
      // 133: ifnull 14e
      // 136: invokevirtual java/lang/StringBuilder.isEmpty ()Z
      // 139: goto 140
      // 13c: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 13f: athrow
      // 140: ifeq 14c
      // 143: aload 4
      // 145: goto 151
      // 148: invokestatic sixtwo/pY.b (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14b: athrow
      // 14c: aload 6
      // 14e: invokevirtual java/lang/StringBuilder.toString ()Ljava/lang/String;
      // 151: areturn
   }

   pX createInstance();

   void applyPreviewKeyframe(class_591 var1);
}
