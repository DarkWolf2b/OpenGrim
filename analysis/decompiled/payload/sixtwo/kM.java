package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat.class_5596;
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
import net.minecraft.class_1044;
import net.minecraft.class_290;

public class kM extends kQ<kG> {
   private static final kS QtUiq;
   private kS CVExj;
   private class_1044 YBRYO;
   private lB igkON = lB.xCeuB;
   private static final long ucBJB = gb.aYR(-5198685296692602802L, -8926943184206132909L, MethodHandles.lookup().lookupClass()).a(75236766599661L);
   private static final String[] gGbVS;
   private static final String[] SchCH;
   private static final Map JoxgO = new HashMap(13);
   private static final long[] wyhzh;
   private static final Integer[] ZsPCG;
   private static final Map Hsssh;

   static {
      long var11 = ucBJB ^ 103050957133292L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[4];
      int var18 = 0;
      String var17 = "Å{¤AY\u001e*mó\u0093äôK^Òþ<GË1\u0081ø\u0085´ Kâ\u009d`\u0012!\u0000Âpß/ÊD}\u00adô²xNx¨¾\u008acÏãM\u0094~¸\u009fÂ";
      int var19 = "Å{¤AY\u001e*mó\u0093äôK^Òþ<GË1\u0081ø\u0085´ Kâ\u009d`\u0012!\u0000Âpß/ÊD}\u00adô²xNx¨¾\u008acÏãM\u0094~¸\u009fÂ".length();
      char var16 = 24;
      int var23 = -1;

      label45:
      while (true) {
         String var24 = var17.substring(++var23, var23 + var16);
         int var10001 = -1;

         while (true) {
            byte[] var21 = var13.doFinal(var24.getBytes("ISO-8859-1"));
            String var33 = bUL(var21).intern();
            switch (var10001) {
               case 0:
                  var20[var18++] = var33;
                  if ((var23 += var16) >= var19) {
                     gGbVS = var20;
                     SchCH = new String[4];
                     Hsssh = new HashMap(13);
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
                     String var4 = "\u0001^\u0094$[êC\u000b¨=\u0084\u0011\u0006p!\u0097";
                     int var5 = "\u0001^\u0094$[êC\u000b¨=\u0084\u0011\u0006p!\u0097".length();
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
                        byte var38 = -1;
                        var6[var10001] = var10004;
                     } while (var2 < var5);

                     wyhzh = var6;
                     ZsPCG = new Integer[2];
                     QtUiq = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
                     return;
                  }

                  var16 = var17.charAt(var23);
                  break;
               default:
                  var20[var18++] = var33;
                  if ((var23 += var16) < var19) {
                     var16 = var17.charAt(var23);
                     continue label45;
                  }

                  var17 = "³Ëµ·4úñÅdôýÂØ[Ù¾\u0011M4D¸ñÞ-¢ÈñLp\u009b´r\u0018\u0094i±^ð,\u00180\u0085*y\u009d«Ú\u001f\u001f\u001a,:~\u0017@«C";
                  var19 = "³Ëµ·4úñÅdôýÂØ[Ù¾\u0011M4D¸ñÞ-¢ÈñLp\u009b´r\u0018\u0094i±^ð,\u00180\u0085*y\u009d«Ú\u001f\u001f\u001a,:~\u0017@«C".length();
                  var16 = ' ';
                  var23 = -1;
            }

            var24 = var17.substring(++var23, var23 + var16);
            var10001 = 0;
         }
      }
   }

   @Override
   public void flush() {
      this.bVj();
      this.bUG();
      this.bVi(class_5596.field_27382, class_290.field_20888);
   }

   @Override
   public kS defaultState() {
      return QtUiq;
   }

   @Override
   public void startBatch(class_1044 var1, kS var2) {
      this.CVExj = var2;
      this.YBRYO = var1;
      this.igkON = lB.xCeuB;
      this.bVi(class_5596.field_27382, class_290.field_20888);
   }

   @Override
   public void endBatch() {
      this.bVj();
      this.bUG();
      this.bVl();
   }

   public void bUH(kG param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kM.ucBJB J
      // 003: ldc2_w 136244496435687
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/kJ.bUj ()Z
      // 00b: aload 0
      // 00c: invokevirtual sixtwo/kM.bVj ()V
      // 00f: istore 4
      // 011: aload 1
      // 012: invokevirtual sixtwo/kG.bTz ()Lorg/joml/Matrix3x2fStack;
      // 015: ifnull 022
      // 018: getstatic sixtwo/lB.xCeuB Lsixtwo/lB;
      // 01b: goto 025
      // 01e: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 021: athrow
      // 022: getstatic sixtwo/lB.rMraa Lsixtwo/lB;
      // 025: astore 5
      // 027: iload 4
      // 029: ifeq 047
      // 02c: aload 5
      // 02e: aload 0
      // 02f: getfield sixtwo/kM.igkON Lsixtwo/lB;
      // 032: if_acmpeq 04d
      // 035: goto 03c
      // 038: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03b: athrow
      // 03c: aload 0
      // 03d: invokevirtual sixtwo/kM.flush ()V
      // 040: goto 047
      // 043: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 046: athrow
      // 047: aload 0
      // 048: aload 5
      // 04a: putfield sixtwo/kM.igkON Lsixtwo/lB;
      // 04d: aload 1
      // 04e: invokevirtual sixtwo/kG.bTA ()F
      // 051: fstore 6
      // 053: aload 1
      // 054: invokevirtual sixtwo/kG.bTB ()F
      // 057: fstore 7
      // 059: aload 1
      // 05a: invokevirtual sixtwo/kG.bTC ()F
      // 05d: fstore 8
      // 05f: aload 1
      // 060: invokevirtual sixtwo/kG.bTD ()F
      // 063: fstore 9
      // 065: aload 1
      // 066: invokevirtual sixtwo/kG.bTE ()F
      // 069: fstore 10
      // 06b: aload 1
      // 06c: invokevirtual sixtwo/kG.bTF ()Lsixtwo/mG;
      // 06f: invokevirtual sixtwo/mG.coh ()I
      // 072: istore 11
      // 074: aload 1
      // 075: iload 4
      // 077: ifeq 167
      // 07a: invokevirtual sixtwo/kG.bTz ()Lorg/joml/Matrix3x2fStack;
      // 07d: ifnull 166
      // 080: goto 087
      // 083: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 086: athrow
      // 087: aload 1
      // 088: invokevirtual sixtwo/kG.bTz ()Lorg/joml/Matrix3x2fStack;
      // 08b: astore 12
      // 08d: aload 0
      // 08e: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 091: aload 12
      // 093: fload 6
      // 095: fload 7
      // 097: invokevirtual net/minecraft/class_287.method_70815 (Lorg/joml/Matrix3x2fc;FF)Lnet/minecraft/class_4588;
      // 09a: iload 11
      // 09c: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0a1: fconst_0
      // 0a2: fconst_0
      // 0a3: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0a8: bipush 0
      // 0a9: sipush 22300
      // 0ac: ldc2_w 6986319951426574212
      // 0af: lload 2
      // 0b0: lxor
      // 0b1: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0b6: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0bb: pop
      // 0bc: aload 0
      // 0bd: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 0c0: aload 12
      // 0c2: fload 6
      // 0c4: fload 7
      // 0c6: fload 10
      // 0c8: fadd
      // 0c9: invokevirtual net/minecraft/class_287.method_70815 (Lorg/joml/Matrix3x2fc;FF)Lnet/minecraft/class_4588;
      // 0cc: iload 11
      // 0ce: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0d3: fconst_0
      // 0d4: fconst_1
      // 0d5: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 0da: bipush 0
      // 0db: sipush 13009
      // 0de: ldc2_w 109574477583921736
      // 0e1: lload 2
      // 0e2: lxor
      // 0e3: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e8: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 0ed: pop
      // 0ee: aload 0
      // 0ef: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 0f2: aload 12
      // 0f4: fload 6
      // 0f6: fload 9
      // 0f8: fadd
      // 0f9: fload 7
      // 0fb: fload 10
      // 0fd: fadd
      // 0fe: invokevirtual net/minecraft/class_287.method_70815 (Lorg/joml/Matrix3x2fc;FF)Lnet/minecraft/class_4588;
      // 101: iload 11
      // 103: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 108: fconst_1
      // 109: fconst_1
      // 10a: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 10f: bipush 0
      // 110: sipush 13009
      // 113: ldc2_w 109574477583921736
      // 116: lload 2
      // 117: lxor
      // 118: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 11d: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 122: pop
      // 123: aload 0
      // 124: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 127: aload 12
      // 129: fload 6
      // 12b: fload 9
      // 12d: fadd
      // 12e: fload 7
      // 130: invokevirtual net/minecraft/class_287.method_70815 (Lorg/joml/Matrix3x2fc;FF)Lnet/minecraft/class_4588;
      // 133: iload 11
      // 135: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 13a: fconst_1
      // 13b: fconst_0
      // 13c: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 141: bipush 0
      // 142: sipush 13009
      // 145: ldc2_w 109574477583921736
      // 148: lload 2
      // 149: lxor
      // 14a: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 14f: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 154: pop
      // 155: iload 4
      // 157: ifne 242
      // 15a: ldc "jEHAVb"
      // 15c: invokestatic sixtwo/iS.bwK (Ljava/lang/String;)V
      // 15f: goto 166
      // 162: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 165: athrow
      // 166: aload 1
      // 167: invokevirtual sixtwo/kG.bTy ()Lnet/minecraft/class_4587;
      // 16a: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 16d: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 170: astore 12
      // 172: aload 0
      // 173: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 176: aload 12
      // 178: fload 6
      // 17a: fload 7
      // 17c: fload 8
      // 17e: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 181: iload 11
      // 183: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 188: fconst_0
      // 189: fconst_1
      // 18a: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 18f: bipush 0
      // 190: sipush 13009
      // 193: ldc2_w 109574477583921736
      // 196: lload 2
      // 197: lxor
      // 198: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19d: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 1a2: pop
      // 1a3: aload 0
      // 1a4: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 1a7: aload 12
      // 1a9: fload 6
      // 1ab: fload 7
      // 1ad: fload 10
      // 1af: fadd
      // 1b0: fload 8
      // 1b2: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1b5: iload 11
      // 1b7: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1bc: fconst_0
      // 1bd: fconst_0
      // 1be: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 1c3: bipush 0
      // 1c4: sipush 13009
      // 1c7: ldc2_w 109574477583921736
      // 1ca: lload 2
      // 1cb: lxor
      // 1cc: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1d1: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 1d6: pop
      // 1d7: aload 0
      // 1d8: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 1db: aload 12
      // 1dd: fload 6
      // 1df: fload 9
      // 1e1: fadd
      // 1e2: fload 7
      // 1e4: fload 10
      // 1e6: fadd
      // 1e7: fload 8
      // 1e9: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 1ec: iload 11
      // 1ee: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 1f3: fconst_1
      // 1f4: fconst_0
      // 1f5: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 1fa: bipush 0
      // 1fb: sipush 13009
      // 1fe: ldc2_w 109574477583921736
      // 201: lload 2
      // 202: lxor
      // 203: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 208: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 20d: pop
      // 20e: aload 0
      // 20f: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 212: aload 12
      // 214: fload 6
      // 216: fload 9
      // 218: fadd
      // 219: fload 7
      // 21b: fload 8
      // 21d: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 220: iload 11
      // 222: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 227: fconst_1
      // 228: fconst_1
      // 229: invokeinterface net/minecraft/class_4588.method_22913 (FF)Lnet/minecraft/class_4588; 3
      // 22e: bipush 0
      // 22f: sipush 13009
      // 232: ldc2_w 109574477583921736
      // 235: lload 2
      // 236: lxor
      // 237: invokedynamic i (IJ)I bsm=sixtwo/kM.bUR (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 23c: invokeinterface net/minecraft/class_4588.method_22921 (II)Lnet/minecraft/class_4588; 3
      // 241: pop
      // 242: return
   }

   @Override
   public void swapTexture(class_1044 var1) {
      this.bVj();
      this.flush();
      this.YBRYO = var1;
   }

   private static Throwable bUK(Throwable var0) {
      return var0;
   }

   private void bUG() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kM.ucBJB J
      // 03: ldc2_w 139242617356656
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: aload 0
      // 0c: getfield sixtwo/kM.WfBOj Lnet/minecraft/class_287;
      // 0f: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 12: astore 4
      // 14: istore 3
      // 15: aload 4
      // 17: iload 3
      // 18: ifne ad
      // 1b: ifnull ab
      // 1e: goto 25
      // 21: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 24: athrow
      // 25: getstatic sixtwo/kR.Dmmsd Lsixtwo/kO;
      // 28: iload 3
      // 29: ifne 56
      // 2c: goto 33
      // 2f: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 32: athrow
      // 33: ifnonnull 53
      // 36: goto 3d
      // 39: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3c: athrow
      // 3d: aload 4
      // 3f: iload 3
      // 40: ifne 4f
      // 43: ifnull 52
      // 46: goto 4d
      // 49: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4c: athrow
      // 4d: aload 4
      // 4f: invokevirtual net/minecraft/class_9801.close ()V
      // 52: return
      // 53: getstatic sixtwo/kR.Dmmsd Lsixtwo/kO;
      // 56: aload 0
      // 57: getfield sixtwo/kM.CVExj Lsixtwo/kS;
      // 5a: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 5d: astore 5
      // 5f: iload 3
      // 60: ifne 88
      // 63: aload 0
      // 64: getfield sixtwo/kM.igkON Lsixtwo/lB;
      // 67: getstatic sixtwo/lB.rMraa Lsixtwo/lB;
      // 6a: if_acmpne 9e
      // 6d: goto 74
      // 70: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 73: athrow
      // 74: aload 5
      // 76: aload 4
      // 78: aload 0
      // 79: invokedynamic accept (Lsixtwo/kM;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kM.bUJ (Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 7e: invokestatic sixtwo/lF.cfQ (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 81: goto 88
      // 84: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 87: athrow
      // 88: aload 4
      // 8a: iload 3
      // 8b: ifne 9a
      // 8e: ifnull 9d
      // 91: goto 98
      // 94: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 97: athrow
      // 98: aload 4
      // 9a: invokevirtual net/minecraft/class_9801.close ()V
      // 9d: return
      // 9e: aload 5
      // a0: aload 4
      // a2: aload 0
      // a3: invokedynamic accept (Lsixtwo/kM;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kM.bUI (Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // a8: invokestatic sixtwo/lF.cfP (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // ab: aload 4
      // ad: iload 3
      // ae: ifne bd
      // b1: ifnull e9
      // b4: goto bb
      // b7: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ba: athrow
      // bb: aload 4
      // bd: invokevirtual net/minecraft/class_9801.close ()V
      // c0: goto e9
      // c3: astore 5
      // c5: aload 4
      // c7: iload 3
      // c8: ifne d7
      // cb: ifnull e6
      // ce: goto d5
      // d1: invokestatic sixtwo/kM.bUK (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // d4: athrow
      // d5: aload 4
      // d7: invokevirtual net/minecraft/class_9801.close ()V
      // da: goto e6
      // dd: astore 6
      // df: aload 5
      // e1: aload 6
      // e3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // e6: aload 5
      // e8: athrow
      // e9: return
   }

   private static CallSite bUO(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bUN".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int bUQ(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bUP(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bUP(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 29598;
      if (ZsPCG[var3] == null) {
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
         long var5 = wyhzh[var3];
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
         Object[] var9 = (Object[])Hsssh.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               Hsssh.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kM", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ZsPCG[var3] = var15;
      }

      return ZsPCG[var3];
   }

   private static CallSite bUR(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bUQ".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kM" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bUM(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 12449;
      if (SchCH[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])JoxgO.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               JoxgO.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kM", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = gGbVS[var5].getBytes("ISO-8859-1");
         SchCH[var5] = bUL(((Cipher)var4[0]).doFinal(var9));
      }

      return SchCH[var5];
   }

   private static Object bUN(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bUM(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bUL(byte[] var0) {
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
}
