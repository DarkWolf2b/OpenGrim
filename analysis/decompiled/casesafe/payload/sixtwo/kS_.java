package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
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

public final class kS {
   private final lh vZbkm;
   private final DepthTestFunction oUMAN;
   private final boolean tzDoa;
   private final boolean ZYDbu;
   private static final long ChKiU = gb.aYR(-3901967882336315437L, 7506001769993996843L, MethodHandles.lookup().lookupClass()).a(20918945148665L);
   private static final long[] ZJWWD;
   private static final Integer[] duoUG;
   private static final Map uBoRz = new HashMap(13);

   private kS(lh var1, DepthTestFunction var2, boolean var3, boolean var4) {
      this.vZbkm = var1;
      this.oUMAN = var2;
      this.tzDoa = var3;
      this.ZYDbu = var4;
   }

   private kS(kS$ur var1) {
      this(var1.QzklF, var1.NpNot, var1.bEunq, var1.wgMTt);
   }

   static {
      long var0 = ChKiU ^ 94831269508244L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[8];
      int var5 = 0;
      String var6 = "'\u008fk\u0097\u008eJ┬ú\u0080k\u0013\u0095g\u000f\u0093(┬Ş┬»\u0015┬ĚT\u0012┬»\u0081ny\u0090├ë├»\"o\u009cr@┬«\u009a├ô\n\u0004\u0016├ĘY┬ę├âg├Ě┬»3/";
      int var7 = "'\u008fk\u0097\u008eJ┬ú\u0080k\u0013\u0095g\u000f\u0093(┬Ş┬»\u0015┬ĚT\u0012┬»\u0081ny\u0090├ë├»\"o\u009cr@┬«\u009a├ô\n\u0004\u0016├ĘY┬ę├âg├Ě┬»3/".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     ZJWWD = var8;
                     duoUG = new Integer[8];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = " \u0098\u0087_\u007f┬┤├łir┬ú┬ó\u0085df├öq";
                  var7 = " \u0098\u0087_\u007f┬┤├łir┬ú┬ó\u0085df├öq".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
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
      // 000: getstatic sixtwo/kS.ChKiU J
      // 003: ldc2_w 63363857272456
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/kR.bVy ()Z
      // 00b: istore 4
      // 00d: aload 1
      // 00e: iload 4
      // 010: ifne 025
      // 013: aload 0
      // 014: if_acmpne 024
      // 017: goto 01e
      // 01a: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01d: athrow
      // 01e: bipush 1
      // 01f: ireturn
      // 020: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 1
      // 025: iload 4
      // 027: ifne 03e
      // 02a: instanceof sixtwo/kS
      // 02d: ifne 03d
      // 030: goto 037
      // 033: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 036: athrow
      // 037: bipush 0
      // 038: ireturn
      // 039: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03c: athrow
      // 03d: aload 1
      // 03e: checkcast sixtwo/kS
      // 041: astore 5
      // 043: aload 0
      // 044: invokevirtual sixtwo/kS.bVL ()Z
      // 047: aload 5
      // 049: invokevirtual sixtwo/kS.bVL ()Z
      // 04c: iload 4
      // 04e: ifne 076
      // 051: if_icmpeq 061
      // 054: goto 05b
      // 057: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 05a: athrow
      // 05b: bipush 0
      // 05c: ireturn
      // 05d: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 060: athrow
      // 061: aload 0
      // 062: iload 4
      // 064: ifne 080
      // 067: invokevirtual sixtwo/kS.bVM ()Z
      // 06a: aload 5
      // 06c: invokevirtual sixtwo/kS.bVM ()Z
      // 06f: goto 076
      // 072: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 075: athrow
      // 076: if_icmpeq 07f
      // 079: bipush 0
      // 07a: ireturn
      // 07b: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: aload 0
      // 080: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 083: astore 6
      // 085: aload 5
      // 087: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 08a: astore 7
      // 08c: aload 6
      // 08e: iload 4
      // 090: ifne 0b2
      // 093: ifnonnull 0b0
      // 096: goto 09d
      // 099: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09c: athrow
      // 09d: aload 7
      // 09f: ifnull 0c8
      // 0a2: goto 0a9
      // 0a5: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a8: athrow
      // 0a9: goto 0c6
      // 0ac: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 6
      // 0b2: aload 7
      // 0b4: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 0b7: iload 4
      // 0b9: ifne 0c7
      // 0bc: ifne 0c8
      // 0bf: goto 0c6
      // 0c2: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c5: athrow
      // 0c6: bipush 0
      // 0c7: ireturn
      // 0c8: aload 0
      // 0c9: invokevirtual sixtwo/kS.bVK ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 0cc: astore 8
      // 0ce: aload 5
      // 0d0: invokevirtual sixtwo/kS.bVK ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 0d3: astore 9
      // 0d5: aload 8
      // 0d7: iload 4
      // 0d9: ifne 0fb
      // 0dc: ifnonnull 0f9
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e5: athrow
      // 0e6: aload 9
      // 0e8: ifnull 115
      // 0eb: goto 0f2
      // 0ee: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f1: athrow
      // 0f2: goto 10f
      // 0f5: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f8: athrow
      // 0f9: aload 8
      // 0fb: aload 9
      // 0fd: invokevirtual java/lang/Object.equals (Ljava/lang/Object;)Z
      // 100: iload 4
      // 102: ifne 116
      // 105: ifne 115
      // 108: goto 10f
      // 10b: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10e: athrow
      // 10f: bipush 0
      // 110: ireturn
      // 111: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 114: athrow
      // 115: bipush 1
      // 116: ireturn
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
      // 000: getstatic sixtwo/kS.ChKiU J
      // 003: ldc2_w 87648271625095
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/kR.bVx ()Z
      // 00b: sipush 24529
      // 00e: ldc2_w 3663934222339045277
      // 011: lload 1
      // 012: lxor
      // 013: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 018: istore 4
      // 01a: bipush 1
      // 01b: istore 5
      // 01d: istore 3
      // 01e: iload 5
      // 020: sipush 16211
      // 023: ldc2_w 6617842495802742552
      // 026: lload 1
      // 027: lxor
      // 028: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 02d: imul
      // 02e: aload 0
      // 02f: invokevirtual sixtwo/kS.bVL ()Z
      // 032: iload 3
      // 033: ifeq 04d
      // 036: ifeq 050
      // 039: goto 040
      // 03c: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03f: athrow
      // 040: sipush 31758
      // 043: ldc2_w 529290376948569158
      // 046: lload 1
      // 047: lxor
      // 048: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 04d: goto 05d
      // 050: sipush 9973
      // 053: ldc2_w 1999184285003288250
      // 056: lload 1
      // 057: lxor
      // 058: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 05d: iadd
      // 05e: istore 5
      // 060: iload 5
      // 062: sipush 16211
      // 065: ldc2_w 6617842495802742552
      // 068: lload 1
      // 069: lxor
      // 06a: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 06f: imul
      // 070: aload 0
      // 071: invokevirtual sixtwo/kS.bVM ()Z
      // 074: iload 3
      // 075: ifeq 08f
      // 078: ifeq 092
      // 07b: goto 082
      // 07e: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 081: athrow
      // 082: sipush 29968
      // 085: ldc2_w 1794314668358983002
      // 088: lload 1
      // 089: lxor
      // 08a: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08f: goto 09f
      // 092: sipush 6603
      // 095: ldc2_w 5721139760213242242
      // 098: lload 1
      // 099: lxor
      // 09a: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09f: iadd
      // 0a0: istore 5
      // 0a2: aload 0
      // 0a3: invokevirtual sixtwo/kS.bVJ ()Lsixtwo/lh;
      // 0a6: astore 6
      // 0a8: iload 5
      // 0aa: sipush 16211
      // 0ad: ldc2_w 6617842495802742552
      // 0b0: lload 1
      // 0b1: lxor
      // 0b2: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b7: imul
      // 0b8: aload 6
      // 0ba: iload 3
      // 0bb: ifeq 0de
      // 0be: ifnonnull 0dc
      // 0c1: goto 0c8
      // 0c4: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c7: athrow
      // 0c8: sipush 31797
      // 0cb: ldc2_w 279890749963097211
      // 0ce: lload 1
      // 0cf: lxor
      // 0d0: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0d5: goto 0e1
      // 0d8: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0db: athrow
      // 0dc: aload 6
      // 0de: invokevirtual java/lang/Object.hashCode ()I
      // 0e1: iadd
      // 0e2: istore 5
      // 0e4: aload 0
      // 0e5: invokevirtual sixtwo/kS.bVK ()Lcom/mojang/blaze3d/platform/DepthTestFunction;
      // 0e8: astore 7
      // 0ea: iload 5
      // 0ec: sipush 16211
      // 0ef: ldc2_w 6617842495802742552
      // 0f2: lload 1
      // 0f3: lxor
      // 0f4: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f9: imul
      // 0fa: aload 7
      // 0fc: iload 3
      // 0fd: ifeq 120
      // 100: ifnonnull 11e
      // 103: goto 10a
      // 106: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 109: athrow
      // 10a: sipush 16406
      // 10d: ldc2_w 4486399632293095515
      // 110: lload 1
      // 111: lxor
      // 112: invokedynamic y (IJ)I bsm=sixtwo/kS.bVQ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 117: goto 123
      // 11a: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11d: athrow
      // 11e: aload 7
      // 120: invokevirtual java/lang/Object.hashCode ()I
      // 123: iadd
      // 124: istore 5
      // 126: iload 5
      // 128: iload 3
      // 129: ifne 138
      // 12c: ldc "AtZWO"
      // 12e: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 131: goto 138
      // 134: invokestatic sixtwo/kS.bVN (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 137: athrow
      // 138: ireturn
   }

   public kS bVH(boolean var1) {
      return new kS(this.vZbkm, this.oUMAN, var1, this.ZYDbu);
   }

   public kS bVG(DepthTestFunction var1) {
      return new kS(this.vZbkm, var1, this.tzDoa, this.ZYDbu);
   }

   public static kS$ur bVE() {
      return new kS$ur();
   }

   private static CallSite bVQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bVP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kS" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public DepthTestFunction bVK() {
      return this.oUMAN;
   }

   private static int bVO(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 31682;
      if (duoUG[var3] == null) {
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
         long var5 = ZJWWD[var3];
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
         Object[] var9 = (Object[])uBoRz.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uBoRz.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kS", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         duoUG[var3] = var15;
      }

      return duoUG[var3];
   }

   public lh bVJ() {
      return this.vZbkm;
   }

   public boolean bVM() {
      return this.ZYDbu;
   }

   public boolean bVL() {
      return this.tzDoa;
   }

   public kS bVF(lh var1) {
      return new kS(var1, this.oUMAN, this.tzDoa, this.ZYDbu);
   }

   private static int bVP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bVO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bVN(MatchException var0) {
      return var0;
   }

   public kS bVI(boolean var1) {
      return new kS(this.vZbkm, this.oUMAN, this.tzDoa, var1);
   }
}
