package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_241;
import net.minecraft.class_3532;

public class bD extends av {
   private static bD tnZYS;
   private static final float zoXBz = -90.0F;
   private static final float WbPKY = 0.43F;
   private static final float lJYPx = 86.0F;
   private static final float IosTn = 118.0F;
   private static final float iXvMv = 34.0F;
   private final List<bC> OsaDL;
   private int LUWfM;
   private int QYxCg;
   private boolean zRUoI;
   private final rk BOnqc;
   private static final long QANEM = gb.aYR(8026135256837780643L, 7135336101674305979L, MethodHandles.lookup().lookupClass()).a(100175630757032L);
   private static final String VxFyM;
   private static final long[] USzpw;
   private static final Integer[] oWvYs;
   private static final Map PcTAi;

   public static bD LE() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 67828640847273
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/bB.b ()[I
      // 0b: astore 2
      // 0c: getstatic sixtwo/bD.tnZYS Lsixtwo/bD;
      // 0f: aload 2
      // 10: ifnonnull 2f
      // 13: ifnonnull 2c
      // 16: goto 1d
      // 19: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: new sixtwo/bD
      // 20: dup
      // 21: invokespecial sixtwo/bD.<init> ()V
      // 24: pop
      // 25: goto 2c
      // 28: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: getstatic sixtwo/bD.tnZYS Lsixtwo/bD;
      // 2f: areturn
   }

   public bD() {
      long var1 = QANEM ^ 75411362499230L;
      super();
      this.OsaDL = new ArrayList<>();
      this.LUWfM = -1;
      this.QYxCg = -1;
      this.BOnqc = new rk(LW<"l">(3381, 45029397330274241L ^ var1)).dhs(rj.MBpuQ);
      tnZYS = this;
      this.LF(pU.cTP());
   }

   static {
      long var11 = QANEM ^ 28912376766326L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("\u0083 \u000f6├Á├ô\n├ú".getBytes("ISO-8859-1"));
      String var19 = LT(var15).intern();
      int var10001 = -1;
      VxFyM = var19;
      PcTAi = new HashMap(13);
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
      String var4 = "$┬ČX├Ť├č\"P\u001d\u007f\u0080\u0094\u0094Y`~u";
      int var5 = "$┬ČX├Ť├č\"P\u001d\u007f\u0080\u0094\u0094Y`~u".length();
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

      USzpw = var6;
      oWvYs = new Integer[2];
   }

   @Override
   protected class_241 n() {
      float var1 = 270.0F;
      return new class_241(var1, var1);
   }

   @Override
   public void m(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bD.QANEM J
      // 003: ldc2_w 19125458847819
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/bB.b ()[I
      // 00b: aload 0
      // 00c: getfield sixtwo/bD.Weytw Lsixtwo/rk;
      // 00f: sipush 6832
      // 012: ldc2_w 3040224636931682960
      // 015: lload 2
      // 016: lxor
      // 017: invokedynamic l (IJ)I bsm=sixtwo/bD.LW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 01c: invokevirtual sixtwo/rk.dhq (I)Lsixtwo/rk;
      // 01f: pop
      // 020: aload 0
      // 021: getfield sixtwo/bD.Weytw Lsixtwo/rk;
      // 024: getstatic sixtwo/rj.XzDkv Lsixtwo/rj;
      // 027: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 02a: pop
      // 02b: astore 4
      // 02d: invokestatic sixtwo/fX.aYl ()Lsixtwo/fX;
      // 030: invokevirtual sixtwo/fX.aYm ()Lsixtwo/cD;
      // 033: invokevirtual sixtwo/cD.VP ()I
      // 036: istore 5
      // 038: aload 0
      // 039: invokevirtual sixtwo/bD.LJ ()Lsixtwo/bA;
      // 03c: astore 6
      // 03e: aload 6
      // 040: invokevirtual sixtwo/bA.centerX ()F
      // 043: fstore 7
      // 045: aload 6
      // 047: invokevirtual sixtwo/bA.centerY ()F
      // 04a: fstore 8
      // 04c: aload 6
      // 04e: invokevirtual sixtwo/bA.outerRadius ()F
      // 051: fstore 9
      // 053: aload 6
      // 055: invokevirtual sixtwo/bA.innerRadius ()F
      // 058: fstore 10
      // 05a: aload 6
      // 05c: invokevirtual sixtwo/bA.diameter ()F
      // 05f: fstore 11
      // 061: aload 0
      // 062: getfield sixtwo/bD.Weytw Lsixtwo/rk;
      // 065: fconst_1
      // 066: invokevirtual sixtwo/rk.dhd (F)F
      // 069: fstore 12
      // 06b: aload 0
      // 06c: invokevirtual sixtwo/bD.sf ()F
      // 06f: fstore 13
      // 071: aload 0
      // 072: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // 075: invokeinterface java/util/List.isEmpty ()Z 1
      // 07a: aload 4
      // 07c: ifnonnull 0a5
      // 07f: ifeq 09a
      // 082: goto 089
      // 085: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 088: athrow
      // 089: aload 0
      // 08a: bipush -1
      // 08b: putfield sixtwo/bD.LUWfM I
      // 08e: aload 4
      // 090: ifnull 0d2
      // 093: goto 09a
      // 096: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 099: athrow
      // 09a: aload 0
      // 09b: getfield sixtwo/bD.VWsmm Z
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0a4: athrow
      // 0a5: aload 4
      // 0a7: ifnonnull 0d6
      // 0aa: ifne 0d2
      // 0ad: goto 0b4
      // 0b0: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b3: athrow
      // 0b4: aload 0
      // 0b5: aload 0
      // 0b6: aload 1
      // 0b7: fload 7
      // 0b9: fload 8
      // 0bb: fload 10
      // 0bd: fload 13
      // 0bf: fmul
      // 0c0: fload 9
      // 0c2: fload 13
      // 0c4: fmul
      // 0c5: invokevirtual sixtwo/bD.LP (Lsixtwo/lC;FFFF)I
      // 0c8: putfield sixtwo/bD.LUWfM I
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d1: athrow
      // 0d2: aload 0
      // 0d3: getfield sixtwo/bD.LUWfM I
      // 0d6: aload 4
      // 0d8: ifnonnull 10c
      // 0db: aload 0
      // 0dc: getfield sixtwo/bD.QYxCg I
      // 0df: if_icmpeq 107
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e8: athrow
      // 0e9: aload 0
      // 0ea: aload 0
      // 0eb: getfield sixtwo/bD.QYxCg I
      // 0ee: invokevirtual sixtwo/bD.LR (I)V
      // 0f1: aload 0
      // 0f2: getfield sixtwo/bD.BOnqc Lsixtwo/rk;
      // 0f5: invokevirtual sixtwo/rk.dhg ()V
      // 0f8: aload 0
      // 0f9: aload 0
      // 0fa: getfield sixtwo/bD.LUWfM I
      // 0fd: putfield sixtwo/bD.QYxCg I
      // 100: goto 107
      // 103: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 106: athrow
      // 107: iload 5
      // 109: invokestatic sixtwo/rr.diW (I)Z
      // 10c: aload 4
      // 10e: ifnonnull 193
      // 111: ifne 17e
      // 114: goto 11b
      // 117: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11a: athrow
      // 11b: aload 0
      // 11c: getfield sixtwo/bD.VWsmm Z
      // 11f: aload 4
      // 121: ifnonnull 193
      // 124: goto 12b
      // 127: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 12a: athrow
      // 12b: ifne 17e
      // 12e: goto 135
      // 131: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 134: athrow
      // 135: aload 0
      // 136: getfield sixtwo/bD.zRUoI Z
      // 139: aload 4
      // 13b: ifnonnull 193
      // 13e: goto 145
      // 141: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 144: athrow
      // 145: ifne 17e
      // 148: goto 14f
      // 14b: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14e: athrow
      // 14f: aload 0
      // 150: aload 4
      // 152: ifnonnull 17a
      // 155: goto 15c
      // 158: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15b: athrow
      // 15c: getfield sixtwo/bD.LUWfM I
      // 15f: iflt 174
      // 162: goto 169
      // 165: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 168: athrow
      // 169: aload 0
      // 16a: invokevirtual sixtwo/bD.LH ()V
      // 16d: goto 174
      // 170: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 173: athrow
      // 174: aload 0
      // 175: bipush 1
      // 176: putfield sixtwo/bD.zRUoI Z
      // 179: aload 0
      // 17a: bipush 1
      // 17b: putfield sixtwo/bD.VWsmm Z
      // 17e: aload 0
      // 17f: aload 4
      // 181: ifnonnull 1be
      // 184: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // 187: invokeinterface java/util/List.isEmpty ()Z 1
      // 18c: goto 193
      // 18f: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 192: athrow
      // 193: ifeq 197
      // 196: return
      // 197: fconst_1
      // 198: fconst_1
      // 199: fconst_1
      // 19a: fload 12
      // 19c: fconst_0
      // 19d: fconst_1
      // 19e: invokestatic net/minecraft/class_3532.method_15363 (FFF)F
      // 1a1: invokestatic sixtwo/jF.bHz (FFFF)V
      // 1a4: aload 1
      // 1a5: fload 7
      // 1a7: fload 8
      // 1a9: fload 13
      // 1ab: invokestatic sixtwo/jH.bId (Lsixtwo/lC;FFF)V
      // 1ae: aload 0
      // 1af: aload 1
      // 1b0: fload 7
      // 1b2: fload 8
      // 1b4: fload 11
      // 1b6: fload 10
      // 1b8: fload 9
      // 1ba: invokevirtual sixtwo/bD.LK (Lsixtwo/lC;FFFFF)V
      // 1bd: aload 0
      // 1be: aload 1
      // 1bf: fload 7
      // 1c1: fload 8
      // 1c3: fload 10
      // 1c5: invokevirtual sixtwo/bD.LN (Lsixtwo/lC;FFF)V
      // 1c8: invokestatic sixtwo/jH.bIf ()V
      // 1cb: fconst_1
      // 1cc: fconst_1
      // 1cd: fconst_1
      // 1ce: fconst_1
      // 1cf: invokestatic sixtwo/jF.bHz (FFFF)V
      // 1d2: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 1d5: ifnonnull 1e5
      // 1d8: bipush 2
      // 1d9: newarray 10
      // 1db: invokestatic sixtwo/bB.b ([I)V
      // 1de: goto 1e5
      // 1e1: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1e4: athrow
      // 1e5: return
   }

   public void LF(Collection<? extends pY> var1) {
      long var2 = QANEM ^ 42879501376475L;
      int[] var10000 = bB.b();
      this.OsaDL.clear();
      int[] var4 = var10000;

      label28: {
         try {
            var8 = var1;
            if (var4 != null) {
               break label28;
            }

            if (var1 == null) {
               return;
            }
         } catch (MatchException var7) {
            throw LS(var7);
         }

         var8 = var1;
      }

      for (pY var6 : var8) {
         this.OsaDL.add(new bC(var6));
         if (var4 != null) {
            break;
         }
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void LL(lC var1, float var2, float var3, float var4, float var5, float var6) {
      long var7 = QANEM ^ 111352886679631L;
      int[] var9 = bB.b();

      label33: {
         label32: {
            boolean var10000;
            label31: {
               try {
                  var10000 = fX.aYf();
                  if (var9 != null) {
                     break label31;
                  }

                  if (var10000) {
                     break label32;
                  }
               } catch (MatchException var13) {
                  throw LS(var13);
               }

               var10000 = fX.aYe();
            }

            try {
               if (!var10000) {
                  break label33;
               }
            } catch (MatchException var12) {
               throw LS(var12);
            }
         }

         try {
            var1.cdN(var2, var3, var4, var4, var5, var6, 0.0F, 360.0F, 1.0F, 0.0F);
         } catch (MatchException var11) {
            throw LS(var11);
         }
      }

      try {
         ;
      } catch (MatchException var10) {
         throw LS(var10);
      }
   }

   private static String LT(byte[] var0) {
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

   public static void LD() {
      long var0 = QANEM ^ 8547830712693L;

      try {
         if (rD.dlmvG.field_1687 == null) {
            return;
         }
      } catch (MatchException var3) {
         throw LS(var3);
      }

      bD var2 = LE();
      var2.VWsmm = false;
      var2.zRUoI = false;
      rD.dlmvG.method_1507(var2);
   }

   public bC LG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 77759032777264
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bB.b ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/bD.LUWfM I
      // 10: aload 3
      // 11: ifnonnull 34
      // 14: iflt 40
      // 17: goto 1e
      // 1a: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: aload 3
      // 20: ifnonnull 53
      // 23: goto 2a
      // 26: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getfield sixtwo/bD.LUWfM I
      // 2d: goto 34
      // 30: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // 38: invokeinterface java/util/List.size ()I 1
      // 3d: if_icmplt 46
      // 40: aconst_null
      // 41: areturn
      // 42: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: aload 0
      // 47: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // 4a: aload 0
      // 4b: getfield sixtwo/bD.LUWfM I
      // 4e: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 53: checkcast sixtwo/bC
      // 56: areturn
   }

   private static CallSite LW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("LV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bD" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @Override
   public boolean onMouseClicked(double param1, double param3, mA param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 90146873845934
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/bB.b ()[I
      // 0c: astore 8
      // 0e: aload 5
      // 10: getstatic sixtwo/mA.sCBUa Lsixtwo/mA;
      // 13: if_acmpne 71
      // 16: aload 0
      // 17: invokevirtual sixtwo/bD.LJ ()Lsixtwo/bA;
      // 1a: astore 9
      // 1c: aload 0
      // 1d: invokevirtual sixtwo/bD.sf ()F
      // 20: fstore 10
      // 22: aload 0
      // 23: dload 1
      // 24: dload 3
      // 25: aload 9
      // 27: invokevirtual sixtwo/bA.centerX ()F
      // 2a: aload 9
      // 2c: invokevirtual sixtwo/bA.centerY ()F
      // 2f: aload 9
      // 31: invokevirtual sixtwo/bA.innerRadius ()F
      // 34: fload 10
      // 36: fmul
      // 37: aload 9
      // 39: invokevirtual sixtwo/bA.outerRadius ()F
      // 3c: fload 10
      // 3e: fmul
      // 3f: invokevirtual sixtwo/bD.LQ (DDFFFF)I
      // 42: istore 11
      // 44: iload 11
      // 46: aload 8
      // 48: ifnonnull 70
      // 4b: ifge 5b
      // 4e: goto 55
      // 51: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 54: athrow
      // 55: bipush 0
      // 56: ireturn
      // 57: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5a: athrow
      // 5b: aload 0
      // 5c: iload 11
      // 5e: putfield sixtwo/bD.LUWfM I
      // 61: aload 0
      // 62: invokevirtual sixtwo/bD.LH ()V
      // 65: aload 0
      // 66: bipush 1
      // 67: putfield sixtwo/bD.zRUoI Z
      // 6a: aload 0
      // 6b: bipush 1
      // 6c: putfield sixtwo/bD.VWsmm Z
      // 6f: bipush 1
      // 70: ireturn
      // 71: bipush 0
      // 72: ireturn
   }

   private static MatchException LS(MatchException var0) {
      return var0;
   }

   public void method_25419() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 133874741389923
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bB.b ()[I
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnonnull 2a
      // 11: getfield sixtwo/bD.VWsmm Z
      // 14: ifeq 2d
      // 17: goto 1e
      // 1a: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: aload 0
      // 1f: invokevirtual sixtwo/bD.LI ()V
      // 22: aload 0
      // 23: goto 2a
      // 26: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: invokespecial sixtwo/av.method_25419 ()V
      // 2d: return
   }

   public void method_25393() {
      this.si();
      this.method_25419();
   }

   public void method_25426() {
      this.VWsmm = false;
      this.zRUoI = false;
      this.LUWfM = -1;
      this.QYxCg = -1;
      this.Weytw.dhg();
      this.Weytw.dhs(rj.XzDkv);
      this.BOnqc.dhg();
   }

   private bA LJ() {
      class_241 var1 = rm.diq();
      float var2 = var1.field_1343 * 0.5F;
      float var3 = var1.field_1342 * 0.5F;
      float var4 = class_3532.method_15363(Math.min(var1.field_1343, var1.field_1342) * 0.29F, 86.0F, 118.0F);
      float var5 = var4 * 0.43F;
      return new bA(var2, var3, var5, var4);
   }

   private int LP(lC var1, float var2, float var3, float var4, float var5) {
      return this.LQ(var1.cff(), var1.cfg(), var2, var3, var4, var5);
   }

   private void LN(lC param1, float param2, float param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 18596352394072
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 0c: astore 8
      // 0e: fload 4
      // 10: ldc_w 1.65
      // 13: fmul
      // 14: fstore 9
      // 16: fload 2
      // 17: fload 9
      // 19: ldc_w 0.5
      // 1c: fmul
      // 1d: fsub
      // 1e: fstore 10
      // 20: fload 3
      // 21: fload 9
      // 23: ldc_w 0.5
      // 26: fmul
      // 27: fsub
      // 28: fstore 11
      // 2a: fload 9
      // 2c: ldc_w 0.5
      // 2f: fmul
      // 30: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 33: astore 12
      // 35: invokestatic sixtwo/bB.b ()[I
      // 38: aload 8
      // 3a: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 3d: ldc_w 0.9
      // 40: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 43: astore 13
      // 45: aload 1
      // 46: getstatic sixtwo/kd.AhlXN Lsixtwo/kd;
      // 49: fload 10
      // 4b: fload 11
      // 4d: fload 9
      // 4f: fload 9
      // 51: ldc_w 7.0
      // 54: aload 12
      // 56: fconst_1
      // 57: invokevirtual sixtwo/lC.cek (Lsixtwo/kd;FFFFFLsixtwo/ld;F)V
      // 5a: aload 1
      // 5b: fload 10
      // 5d: fload 11
      // 5f: fload 9
      // 61: fload 9
      // 63: aload 12
      // 65: aload 13
      // 67: invokevirtual sixtwo/lC.cdg (FFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 6a: aload 0
      // 6b: invokevirtual sixtwo/bD.LG ()Lsixtwo/bC;
      // 6e: astore 14
      // 70: astore 7
      // 72: aload 0
      // 73: aload 1
      // 74: aload 8
      // 76: fload 2
      // 77: fload 3
      // 78: fload 9
      // 7a: invokevirtual sixtwo/bD.LO (Lsixtwo/lC;Lsixtwo/ii;FFF)V
      // 7d: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 80: ldc_w 10.0
      // 83: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 86: astore 15
      // 88: aload 14
      // 8a: aload 7
      // 8c: ifnonnull a5
      // 8f: ifnonnull a3
      // 92: goto 99
      // 95: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 98: athrow
      // 99: getstatic sixtwo/bD.VxFyM Ljava/lang/String;
      // 9c: goto a8
      // 9f: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a2: athrow
      // a3: aload 14
      // a5: invokevirtual sixtwo/bC.Ly ()Ljava/lang/String;
      // a8: astore 16
      // aa: aload 1
      // ab: aload 15
      // ad: aload 16
      // af: fload 2
      // b0: aload 15
      // b2: aload 16
      // b4: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // b7: ldc_w 0.5
      // ba: fmul
      // bb: fsub
      // bc: fload 3
      // bd: aload 15
      // bf: invokevirtual sixtwo/lq.cat ()F
      // c2: ldc_w 0.5
      // c5: fmul
      // c6: fsub
      // c7: aload 8
      // c9: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // cc: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // cf: return
   }

   private static int LU(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4920;
      if (oWvYs[var3] == null) {
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
         long var5 = USzpw[var3];
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
         Object[] var9 = (Object[])PcTAi.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               PcTAi.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bD", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         oWvYs[var3] = var15;
      }

      return oWvYs[var3];
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   private void LR(int var1) {
      long var2 = QANEM ^ 87983579110113L;
      int[] var4 = bB.b();

      label31: {
         label30: {
            int var10000;
            label29: {
               try {
                  var10000 = var1;
                  if (var4 != null) {
                     break label29;
                  }

                  if (var1 < 0) {
                     break label30;
                  }
               } catch (MatchException var7) {
                  throw LS(var7);
               }

               var10000 = var1;
            }

            try {
               if (var10000 < this.OsaDL.size()) {
                  break label31;
               }
            } catch (MatchException var6) {
               throw LS(var6);
            }
         }

         try {
            return;
         } catch (MatchException var5) {
            throw LS(var5);
         }
      }

      this.OsaDL.get(var1).Ls();
   }

   private void LM(lC var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9) {
      mG var10 = rD.dlM().bjf().cob(var9);
      float var11 = (var7 + var8) * 0.5F;
      float var12 = (var8 - var7) * 0.5F * var9;
      float var13 = var11 - var12;
      float var14 = var11 + var12;
      la var15 = la.bWJ(var11, var10, var10.cob(0.01F));
      var1.cdG(var2, var3, var4, var4, var5, var6, var13, var14, var15);
   }

   public void LI() {
      long var1 = QANEM ^ 136285327659191L;
      int[] var10000 = bB.b();
      Iterator var4 = this.OsaDL.iterator();
      int[] var3 = var10000;

      while (true) {
         if (var4.hasNext()) {
            bC var5 = (bC)var4.next();

            try {
               var5.Ls();
               var5.LB().dhg();
               if (var3 != null) {
                  break;
               }

               if (var3 == null) {
                  continue;
               }
            } catch (MatchException var6) {
               throw LS(var6);
            }
         }

         this.BOnqc.dhg();
         this.LUWfM = -1;
         this.QYxCg = -1;
         break;
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public void LH() {
      long var1 = QANEM ^ 91293441737603L;
      int[] var10000 = bB.b();
      bC var4 = this.LG();
      int[] var3 = var10000;

      label31: {
         label30: {
            label29: {
               try {
                  var8 = var4;
                  if (var3 != null) {
                     break label29;
                  }

                  if (var4 == null) {
                     break label30;
                  }
               } catch (MatchException var7) {
                  throw LS(var7);
               }

               var8 = var4;
            }

            try {
               if (var8.Lx() != null) {
                  break label31;
               }
            } catch (MatchException var6) {
               throw LS(var6);
            }
         }

         try {
            return;
         } catch (MatchException var5) {
            throw LS(var5);
         }
      }

      pW.cTX(rD.dlmvG.field_1724, var4.Lx());
   }

   private static int LV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = LU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private void LK(lC var1, float var2, float var3, float var4, float var5, float var6) {
      long var7 = QANEM ^ 53444702543560L;
      float var10 = 360.0F / this.OsaDL.size();
      float var11 = -90.0F - var10 * 0.5F;
      float var12 = var2 - var4 * 0.5F;
      int[] var10000 = bB.b();
      float var13 = var3 - var4 * 0.5F;
      int[] var9 = var10000;

      label45: {
         label44: {
            try {
               this.LL(var1, var12, var13, var4, var5, var6);
               var24 = this.LUWfM;
               if (var9 != null) {
                  break label45;
               }

               if (this.LUWfM < 0) {
                  break label44;
               }
            } catch (MatchException var20) {
               throw LS(var20);
            }

            float var14 = var11 + this.LUWfM * var10;
            float var15 = var11 + (this.LUWfM + 1) * var10;
            float var16 = this.BOnqc.dhd(1.0F);
            this.LM(var1, var12, var13, var4, var5, var6, var14, var15, var16);
         }

         var24 = 0;
      }

      int var21 = var24;

      while (var21 < this.OsaDL.size()) {
         float var22 = var11 + var21 * var10;
         float var23 = var11 + (var21 + 1) * var10;
         float var17 = var11 + (var21 + 0.5F) * var10;

         bB var10001;
         int var10002;
         boolean var10003;
         label32: {
            try {
               var25 = new bB;
               var10001 = var25;
               var10002 = var21;
               if (var21 == this.LUWfM) {
                  var10003 = true;
                  break label32;
               }
            } catch (MatchException var19) {
               throw LS(var19);
            }

            var10003 = false;
         }

         var10001./* $VF: Unable to resugar constructor */<init>(var10002, var10003, var2, var3, var4, var5, var6, var22, var23, var17);
         bB var18 = var25;
         this.OsaDL.get(var21).Lq(var1, var18);
         var21++;
         if (var9 != null) {
            break;
         }
      }
   }

   private int LQ(double param1, double param3, float param5, float param6, float param7, float param8) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bD.QANEM J
      // 03: ldc2_w 56010757165029
      // 06: lxor
      // 07: lstore 9
      // 09: dload 1
      // 0a: fload 5
      // 0c: f2d
      // 0d: dsub
      // 0e: dstore 12
      // 10: invokestatic sixtwo/bB.b ()[I
      // 13: dload 3
      // 14: fload 6
      // 16: f2d
      // 17: dsub
      // 18: dstore 14
      // 1a: dload 12
      // 1c: dload 12
      // 1e: dmul
      // 1f: dload 14
      // 21: dload 14
      // 23: dmul
      // 24: dadd
      // 25: invokestatic java/lang/Math.sqrt (D)D
      // 28: dstore 16
      // 2a: astore 11
      // 2c: dload 16
      // 2e: fload 7
      // 30: f2d
      // 31: dcmpg
      // 32: aload 11
      // 34: ifnonnull 5e
      // 37: iflt 5d
      // 3a: goto 41
      // 3d: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 40: athrow
      // 41: dload 16
      // 43: fload 8
      // 45: f2d
      // 46: dcmpl
      // 47: aload 11
      // 49: ifnonnull 5e
      // 4c: goto 53
      // 4f: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: ifle 5f
      // 56: goto 5d
      // 59: invokestatic sixtwo/bD.LS (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: bipush -1
      // 5e: ireturn
      // 5f: ldc_w 360.0
      // 62: aload 0
      // 63: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // 66: invokeinterface java/util/List.size ()I 1
      // 6b: i2f
      // 6c: fdiv
      // 6d: fstore 18
      // 6f: dload 14
      // 71: dload 12
      // 73: invokestatic java/lang/Math.atan2 (DD)D
      // 76: invokestatic java/lang/Math.toDegrees (D)D
      // 79: invokestatic sixtwo/mZ.csu (D)D
      // 7c: dstore 19
      // 7e: ldc -90.0
      // 80: fload 18
      // 82: ldc_w 0.5
      // 85: fmul
      // 86: fsub
      // 87: f2d
      // 88: dstore 21
      // 8a: dload 19
      // 8c: dload 21
      // 8e: dsub
      // 8f: invokestatic sixtwo/mZ.csu (D)D
      // 92: dstore 23
      // 94: dload 23
      // 96: fload 18
      // 98: f2d
      // 99: ddiv
      // 9a: d2i
      // 9b: istore 25
      // 9d: iload 25
      // 9f: bipush 0
      // a0: aload 0
      // a1: getfield sixtwo/bD.OsaDL Ljava/util/List;
      // a4: invokeinterface java/util/List.size ()I 1
      // a9: bipush 1
      // aa: isub
      // ab: invokestatic net/minecraft/class_3532.method_15340 (III)I
      // ae: ireturn
   }

   private void LO(lC var1, ii var2, float var3, float var4, float var5) {
      long var6 = QANEM ^ 119330459889148L;
      float var9 = var5 * 0.5F - 2.0F;
      float var10 = var9 - var5 * 0.05F;
      int[] var10000 = bB.b();
      float var11 = var9 * 2.0F;
      float var12 = var9 * 2.0F;
      float var13 = var3 - var9;
      float var14 = var4 - var9;
      int[] var8 = var10000;
      float var15 = 360.0F / this.OsaDL.size();
      float var16 = Math.min(8.0F, var15 * 0.34F);
      float var17 = -90.0F - var15 * 0.5F;
      int var18 = 0;

      while (var18 < this.OsaDL.size()) {
         float var19 = var17 + var18 * var15 + var16 * 0.5F;
         float var20 = var17 + (var18 + 1) * var15 - var16 * 0.5F;

         label24: {
            try {
               if (var18 == this.LUWfM) {
                  var23 = var2.bjb();
                  break label24;
               }
            } catch (MatchException var22) {
               throw LS(var22);
            }

            var23 = var2.bjb().cob(0.5F);
         }

         mG var21 = var23;
         var1.cdE(var13, var14, var11, var12, var10, var9, var19, var20, var21);
         var18++;
         if (var8 != null) {
            break;
         }
      }
   }
}
