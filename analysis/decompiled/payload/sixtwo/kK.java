package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
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
import net.minecraft.class_290;
import net.minecraft.class_9801;
import org.joml.Vector3f;

public class kK extends kQ<kE> {
   private static final kS yEFWa;
   private static final Vector3f[] uVxmu;
   private static final int[][] pbVHD;
   private static final float[] JYPKJ;
   private kS DPAFB;
   private static final long zBGqK = gb.aYR(1976435304290874521L, 5588099496461299734L, MethodHandles.lookup().lookupClass()).a(20116882234589L);
   private static final long[] czRPh;
   private static final Integer[] HqZCZ;
   private static final Map qbodQ = new HashMap(13);

   static {
      long var11 = zBGqK ^ 74542953173046L;
      Cipher var0;
      Cipher var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[12];
      int var3 = 0;
      String var4 = "\u0004\raÅ¯\bª1\u0010dÆæ®w,áôï\u0014ïâ\u001d@Qs\"Q°¬Mlã[bQÛ \u0012÷®1\u0084È\u0085ÈÝpñ\u0005M\u008au\u00ad\u0014!YRYö\u0005õ.\t¤d¶úß\u0012þ¼\u008cú´\u001fð^\u009eJ\u008e";
      int var5 = "\u0004\raÅ¯\bª1\u0010dÆæ®w,áôï\u0014ïâ\u001d@Qs\"Q°¬Mlã[bQÛ \u0012÷®1\u0084È\u0085ÈÝpñ\u0005M\u008au\u00ad\u0014!YRYö\u0005õ.\t¤d¶úß\u0012þ¼\u008cú´\u001fð^\u009eJ\u008e"
         .length();
      byte var2 = 0;

      label23:
      while (true) {
         int var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var14 = var6;
         var10001 = var3++;
         long var20 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var22 = -1;

         while (true) {
            long var8 = var20;
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
            long var24 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var22) {
               case 0:
                  var14[var10001] = var24;
                  if (var2 >= var5) {
                     czRPh = var6;
                     HqZCZ = new Integer[12];
                     yEFWa = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
                     Vector3f[] var15 = new Vector3f[bUu<"a">(22725, 4493992105472163716L ^ var11)];
                     var15[0] = new Vector3f(0.0F, 1.5F, 0.0F);
                     var15[1] = new Vector3f(0.0F, -1.5F, 0.0F);
                     var15[2] = new Vector3f(1.0F, 0.0F, 0.0F);
                     var15[3] = new Vector3f(-1.0F, 0.0F, 0.0F);
                     var15[4] = new Vector3f(0.0F, 0.0F, 1.0F);
                     var15[5] = new Vector3f(0.0F, 0.0F, -1.0F);
                     uVxmu = var15;
                     int[][] var16 = new int[bUu<"a">(21962, 1421271518174868111L ^ var11)][];
                     var16[0] = new int[]{0, 2, 4};
                     var16[1] = new int[]{0, 4, 3};
                     var16[2] = new int[]{0, 3, 5};
                     var16[3] = new int[]{0, 5, 2};
                     var16[4] = new int[]{1, 4, 2};
                     var16[5] = new int[]{1, 3, 4};
                     var16[bUu<"a">(23340, 7377608597027880047L ^ var11)] = new int[]{1, 5, 3};
                     var16[bUu<"a">(30669, 2295487032180199555L ^ var11)] = new int[]{1, 2, 5};
                     pbVHD = var16;
                     float[] var17 = new float[bUu<"a">(21962, 1421271518174868111L ^ var11)];
                     var17[0] = 1.0F;
                     var17[1] = 0.8F;
                     var17[2] = 0.6F;
                     var17[3] = 0.9F;
                     var17[4] = 0.7F;
                     var17[5] = 0.5F;
                     var17[bUu<"a">(23340, 7377608597027880047L ^ var11)] = 0.4F;
                     var17[bUu<"a">(16836, 9205969850718545542L ^ var11)] = 0.6F;
                     JYPKJ = var17;
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var24;
                  if (var2 < var5) {
                     continue label23;
                  }

                  var4 = "R\u0090÷r¬\u0096\u009eÒ÷\n·\u0095\u007fÅ§Ý";
                  var5 = "R\u0090÷r¬\u0096\u009eÒ÷\n·\u0095\u007fÅ§Ý".length();
                  var2 = 0;
            }

            byte var19 = var2;
            var2 += 8;
            var7 = var4.substring(var19, var2).getBytes("ISO-8859-1");
            var14 = var6;
            var10001 = var3++;
            var20 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var22 = 0;
         }
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void flush() {
      long var1 = zBGqK ^ 103556725143118L;
      this.bVj();
      boolean var10000 = kJ.bUi();
      class_9801 var4 = this.WfBOj.method_60794();
      boolean var3 = var10000;

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bUr(var11);
               }

               RenderPipeline var5 = kR.rEMzB.bUZ(this.DPAFB);
               lF.cfW(var5, var4);
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bUr(var9);
               }

               try {
                  var13 = var4;
               } catch (Throwable var8) {
                  var12.addSuppressed(var8);
                  throw var12;
               }
            }

            try {
               var13.close();
            } catch (Throwable var7) {
               var12.addSuppressed(var7);
            }

            throw var12;
         }

         var14 = var4;
      }

      label54: {
         label53: {
            try {
               if (var3) {
                  break label53;
               }

               if (var14 == null) {
                  break label54;
               }
            } catch (Throwable var10) {
               throw bUr(var10);
            }

            var14 = var4;
         }

         var14.close();
      }

      this.bVi(class_5596.field_27379, class_290.field_1576);
   }

   @Override
   public kS defaultState() {
      return yEFWa;
   }

   @Override
   public void startBatch(kS var1) {
      this.DPAFB = var1;
      this.bVi(class_5596.field_27379, class_290.field_1576);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void endBatch() {
      long var1 = zBGqK ^ 122505923909107L;
      this.bVj();
      boolean var10000 = kJ.bUi();
      class_9801 var4 = this.WfBOj.method_60794();
      boolean var3 = var10000;

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bUr(var11);
               }

               RenderPipeline var5 = kR.rEMzB.bUZ(this.DPAFB);
               lF.cfW(var5, var4);
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bUr(var9);
               }

               try {
                  var13 = var4;
               } catch (Throwable var8) {
                  var12.addSuppressed(var8);
                  throw var12;
               }
            }

            try {
               var13.close();
            } catch (Throwable var7) {
               var12.addSuppressed(var7);
            }

            throw var12;
         }

         var14 = var4;
      }

      label54: {
         label53: {
            try {
               if (var3) {
                  break label53;
               }

               if (var14 == null) {
                  break label54;
               }
            } catch (Throwable var10) {
               throw bUr(var10);
            }

            var14 = var4;
         }

         var14.close();
      }

      this.bVl();
   }

   private static CallSite bUu(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bUt".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kK" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static Throwable bUr(Throwable var0) {
      return var0;
   }

   private static int bUt(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bUs(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int bUq(int var0, float var1) {
      long var2 = zBGqK ^ 3294531444047L;
      int var4 = var0 >> bUu<"a">(31324, 225356566163951722L ^ var2) & bUu<"a">(31793, 3944639215715325455L ^ var2);
      int var5 = (int)((var0 >> bUu<"a">(16490, 5244565099242138207L ^ var2) & bUu<"a">(397, 8457365057120594866L ^ var2)) * var1);
      int var6 = (int)((var0 >> bUu<"a">(26336, 6837425999575452889L ^ var2) & bUu<"a">(397, 8457365057120594866L ^ var2)) * var1);
      int var7 = (int)((var0 & bUu<"a">(397, 8457365057120594866L ^ var2)) * var1);
      var5 = Math.min(bUu<"a">(397, 8457365057120594866L ^ var2), Math.max(0, var5));
      var6 = Math.min(bUu<"a">(397, 8457365057120594866L ^ var2), Math.max(0, var6));
      var7 = Math.min(bUu<"a">(397, 8457365057120594866L ^ var2), Math.max(0, var7));
      return var4 << bUu<"a">(18124, 6616921021927402744L ^ var2)
         | var5 << bUu<"a">(22757, 5917687504777720536L ^ var2)
         | var6 << bUu<"a">(21962, 1421202198195322870L ^ var2)
         | var7;
   }

   private static int bUs(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10315;
      if (HqZCZ[var3] == null) {
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
         long var5 = czRPh[var3];
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
         Object[] var9 = (Object[])qbodQ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               qbodQ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/kK", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         HqZCZ[var3] = var15;
      }

      return HqZCZ[var3];
   }

   public void bUp(kE param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/kK.zBGqK J
      // 003: ldc2_w 47511204919519
      // 006: lxor
      // 007: lstore 2
      // 008: aload 0
      // 009: invokevirtual sixtwo/kK.bVj ()V
      // 00c: invokestatic sixtwo/kJ.bUj ()Z
      // 00f: aload 1
      // 010: invokevirtual sixtwo/kE.bTh ()Lnet/minecraft/class_4587;
      // 013: astore 5
      // 015: istore 4
      // 017: aload 1
      // 018: invokevirtual sixtwo/kE.bTi ()F
      // 01b: fstore 6
      // 01d: aload 1
      // 01e: invokevirtual sixtwo/kE.bTj ()F
      // 021: fstore 7
      // 023: aload 1
      // 024: invokevirtual sixtwo/kE.bTk ()F
      // 027: fstore 8
      // 029: aload 1
      // 02a: invokevirtual sixtwo/kE.bTl ()F
      // 02d: fstore 9
      // 02f: aload 1
      // 030: invokevirtual sixtwo/kE.bTm ()Lsixtwo/mG;
      // 033: invokevirtual sixtwo/mG.coh ()I
      // 036: istore 10
      // 038: aload 5
      // 03a: invokevirtual net/minecraft/class_4587.method_22903 ()V
      // 03d: aload 5
      // 03f: fload 6
      // 041: fload 7
      // 043: fload 8
      // 045: invokevirtual net/minecraft/class_4587.method_46416 (FFF)V
      // 048: aload 5
      // 04a: fload 9
      // 04c: fload 9
      // 04e: fload 9
      // 050: invokevirtual net/minecraft/class_4587.method_22905 (FFF)V
      // 053: aload 5
      // 055: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 058: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 05b: astore 11
      // 05d: bipush 0
      // 05e: istore 12
      // 060: iload 12
      // 062: getstatic sixtwo/kK.pbVHD [[I
      // 065: arraylength
      // 066: if_icmpge 114
      // 069: getstatic sixtwo/kK.pbVHD [[I
      // 06c: iload 12
      // 06e: aaload
      // 06f: astore 13
      // 071: getstatic sixtwo/kK.JYPKJ [F
      // 074: iload 12
      // 076: faload
      // 077: fstore 14
      // 079: getstatic sixtwo/kK.uVxmu [Lorg/joml/Vector3f;
      // 07c: aload 13
      // 07e: bipush 0
      // 07f: iaload
      // 080: aaload
      // 081: astore 15
      // 083: getstatic sixtwo/kK.uVxmu [Lorg/joml/Vector3f;
      // 086: aload 13
      // 088: bipush 1
      // 089: iaload
      // 08a: aaload
      // 08b: astore 16
      // 08d: getstatic sixtwo/kK.uVxmu [Lorg/joml/Vector3f;
      // 090: aload 13
      // 092: bipush 2
      // 093: iaload
      // 094: aaload
      // 095: astore 17
      // 097: iload 10
      // 099: fload 14
      // 09b: invokestatic sixtwo/kK.bUq (IF)I
      // 09e: istore 18
      // 0a0: aload 0
      // 0a1: getfield sixtwo/kK.WfBOj Lnet/minecraft/class_287;
      // 0a4: aload 11
      // 0a6: aload 15
      // 0a8: getfield org/joml/Vector3f.x F
      // 0ab: aload 15
      // 0ad: getfield org/joml/Vector3f.y F
      // 0b0: aload 15
      // 0b2: getfield org/joml/Vector3f.z F
      // 0b5: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0b8: iload 18
      // 0ba: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0bf: pop
      // 0c0: aload 0
      // 0c1: getfield sixtwo/kK.WfBOj Lnet/minecraft/class_287;
      // 0c4: aload 11
      // 0c6: aload 16
      // 0c8: getfield org/joml/Vector3f.x F
      // 0cb: aload 16
      // 0cd: getfield org/joml/Vector3f.y F
      // 0d0: aload 16
      // 0d2: getfield org/joml/Vector3f.z F
      // 0d5: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0d8: iload 18
      // 0da: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0df: pop
      // 0e0: aload 0
      // 0e1: getfield sixtwo/kK.WfBOj Lnet/minecraft/class_287;
      // 0e4: aload 11
      // 0e6: aload 17
      // 0e8: getfield org/joml/Vector3f.x F
      // 0eb: aload 17
      // 0ed: getfield org/joml/Vector3f.y F
      // 0f0: aload 17
      // 0f2: getfield org/joml/Vector3f.z F
      // 0f5: invokevirtual net/minecraft/class_287.method_22918 (Lorg/joml/Matrix4fc;FFF)Lnet/minecraft/class_4588;
      // 0f8: iload 18
      // 0fa: invokeinterface net/minecraft/class_4588.method_39415 (I)Lnet/minecraft/class_4588; 2
      // 0ff: pop
      // 100: iinc 12 1
      // 103: iload 4
      // 105: ifeq 119
      // 108: iload 4
      // 10a: ifne 060
      // 10d: goto 114
      // 110: invokestatic sixtwo/kK.bUr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 113: athrow
      // 114: aload 5
      // 116: invokevirtual net/minecraft/class_4587.method_22909 ()V
      // 119: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 11c: ifnonnull 137
      // 11f: iload 4
      // 121: ifeq 133
      // 124: goto 12b
      // 127: invokestatic sixtwo/kK.bUr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12a: athrow
      // 12b: bipush 0
      // 12c: goto 134
      // 12f: invokestatic sixtwo/kK.bUr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 132: athrow
      // 133: bipush 1
      // 134: invokestatic sixtwo/kJ.bUh (Z)V
      // 137: return
   }
}
