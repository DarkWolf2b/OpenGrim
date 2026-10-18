package sixtwo;

import com.mojang.blaze3d.vertex.VertexFormat;
import it.unimi.dsi.fastutil.objects.Object2IntMap;
import it.unimi.dsi.fastutil.objects.Object2IntOpenHashMap;
import java.io.Closeable;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.FloatBuffer;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import org.joml.Matrix4f;

public class jN implements Closeable {
   private static final String kPOcq;
   private static final String SQSpe;
   private final lU hbdsS;
   private final lW pqgLF;
   private final Object2IntMap<String> UMoVo;
   private final int hxaAS;
   private final int BvSGk;
   private final Matrix4f gsSlM;
   private final Matrix4f QdyLm;
   private final Matrix4f jiKOF;
   private static final long EuHrv = gb.aYR(-4188272765790085521L, 2895016500510754455L, MethodHandles.lookup().lookupClass()).a(24422337496964L);
   private static final String[] fAbkF;
   private static final String[] SUbhZ;
   private static final Map NLXzj = new HashMap(13);

   // $VF: Could not verify finally blocks. A semaphore variable has been added to preserve control flow.
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   public jN(VertexFormat var1, jM... var2) {
      long var3 = EuHrv ^ 18818737277520L;
      super();
      this.UMoVo = new Object2IntOpenHashMap();
      int var10000 = jL.bIQ();
      this.gsSlM = new Matrix4f();
      this.QdyLm = new Matrix4f();
      this.jiKOF = new Matrix4f();
      int var5 = var10000;
      this.hbdsS = lT.ciQ();
      lV[] var6 = new lV[var2.length];
      int var7 = 0;

      while (true) {
         if (var7 < var2.length) {
            try {
               var6[var7] = var2[var7].bJb();
               var7++;
               if (var5 == 0) {
                  break;
               }

               if (var5 != 0) {
                  continue;
               }
            } catch (MatchException var22) {
               throw bJB(var22);
            }

            iS.bwK("OOfzgb");
         }

         boolean var19 = false /* VF: Semaphore variable */;

         try {
            var19 = true;
            this.pqgLF = this.hbdsS.createProgram(var1, var6);
            var19 = false;
            break;
         } finally {
            if (var19) {
               for (jM var15 : var2) {
                  var15.close();
                  if (var5 == 0) {
                     break;
                  }
               }
            }
         }
      }

      jM[] var23 = var2;
      int var8 = var2.length;
      int var9 = 0;

      while (true) {
         if (var9 < var8) {
            jM var10 = var23[var9];

            try {
               var10.close();
               var9++;
               if (var5 == 0) {
                  break;
               }

               if (var5 != 0) {
                  continue;
               }
            } catch (MatchException var21) {
               throw bJB(var21);
            }
         }

         this.hxaAS = this.bJn(bJF<"b">(25374, 6053996733434219365L ^ var3));
         this.BvSGk = this.bJn(bJF<"b">(4349, 7666634568763357319L ^ var3));
         break;
      }
   }

   static {
      long var0 = EuHrv ^ 52998875579115L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[4];
      int var7 = 0;
      String var6 = "¸þà|Ñã¸\f¥ÕÑG{2Ò\t bPÝÐ@#ioÌbML\u0087Þ£hU\u00171ÍlÏ\u0013\u0003Fì^\u0094¿\u0089¯ø";
      int var8 = "¸þà|Ñã¸\f¥ÕÑG{2Ò\t bPÝÐ@#ioÌbML\u0087Þ£hU\u00171ÍlÏ\u0013\u0003Fì^\u0094¿\u0089¯ø".length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bJC(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     fAbkF = var9;
                     SUbhZ = new String[4];
                     SQSpe = bJF<"b">(31567, 1357790180969962381L ^ var0);
                     kPOcq = bJF<"b">(860, 7210030969419703199L ^ var0);
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "\u0005ì\u0012èý9\u001dF`\u0003üHê:.÷ÅYü\u0014\u0016¦¯Ñ\u0010\u0089¨¢Çµ\u001b ö¾)\u0019YÉIiÓ";
                  var8 = "\u0005ì\u0012èý9\u001dF`\u0003üHê:.÷ÅYü\u0014\u0016¦¯Ñ\u0010\u0089¨¢Çµ\u001b ö¾)\u0019YÉIiÓ".length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public void close() {
      this.pqgLF.close();
   }

   public lW bJz() {
      return this.pqgLF;
   }

   private void bJp() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jN.EuHrv J
      // 03: ldc2_w 101114897597933
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jL.bIQ ()I
      // 0b: istore 3
      // 0c: iload 3
      // 0d: ifeq 5a
      // 10: getstatic sixtwo/jN$tY.gCqNy [I
      // 13: invokestatic sixtwo/lF.cfY ()Lsixtwo/lB;
      // 16: invokevirtual sixtwo/lB.ordinal ()I
      // 19: iaload
      // 1a: tableswitch 129 1 3 30 68 99
      // 34: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: aload 0
      // 39: getfield sixtwo/jN.gsSlM Lorg/joml/Matrix4f;
      // 3c: invokevirtual org/joml/Matrix4f.identity ()Lorg/joml/Matrix4f;
      // 3f: fconst_0
      // 40: fconst_0
      // 41: ldc -11000.0
      // 43: invokevirtual org/joml/Matrix4f.translate (FFF)Lorg/joml/Matrix4f;
      // 46: pop
      // 47: aload 0
      // 48: aload 0
      // 49: getfield sixtwo/jN.BvSGk I
      // 4c: aload 0
      // 4d: getfield sixtwo/jN.gsSlM Lorg/joml/Matrix4f;
      // 50: invokevirtual sixtwo/jN.bJw (ILorg/joml/Matrix4f;)V
      // 53: goto 5a
      // 56: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 59: athrow
      // 5a: iload 3
      // 5b: ifne 9b
      // 5e: aload 0
      // 5f: getfield sixtwo/jN.QdyLm Lorg/joml/Matrix4f;
      // 62: invokevirtual org/joml/Matrix4f.identity ()Lorg/joml/Matrix4f;
      // 65: pop
      // 66: aload 0
      // 67: aload 0
      // 68: getfield sixtwo/jN.BvSGk I
      // 6b: aload 0
      // 6c: getfield sixtwo/jN.QdyLm Lorg/joml/Matrix4f;
      // 6f: invokevirtual sixtwo/jN.bJw (ILorg/joml/Matrix4f;)V
      // 72: iload 3
      // 73: ifne 9b
      // 76: goto 7d
      // 79: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7c: athrow
      // 7d: aload 0
      // 7e: getfield sixtwo/jN.jiKOF Lorg/joml/Matrix4f;
      // 81: invokestatic com/mojang/blaze3d/systems/RenderSystem.getModelViewMatrix ()Lorg/joml/Matrix4f;
      // 84: invokevirtual org/joml/Matrix4f.set (Lorg/joml/Matrix4fc;)Lorg/joml/Matrix4f;
      // 87: pop
      // 88: aload 0
      // 89: aload 0
      // 8a: getfield sixtwo/jN.BvSGk I
      // 8d: aload 0
      // 8e: getfield sixtwo/jN.jiKOF Lorg/joml/Matrix4f;
      // 91: invokevirtual sixtwo/jN.bJw (ILorg/joml/Matrix4f;)V
      // 94: goto 9b
      // 97: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: return
   }

   public static jN bJk(VertexFormat var0, jM... var1) {
      return new jN(var0, var1);
   }

   private void bJw(int var1, Matrix4f var2) {
      this.hbdsS.setUniform(var1, var2);
   }

   private static String bJC(byte[] var0) {
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

   public void bJv(String var1, Matrix4f var2) {
      int var3 = this.bJn(var1);
      this.bJw(var3, var2);
   }

   public void bJx(String var1, int var2) {
      this.hbdsS.setUniform(this.bJn(var1), var2);
   }

   public void bJr(String var1, float var2, float var3) {
      this.hbdsS.setUniform(this.bJn(var1), var2, var3);
   }

   public void bJt(String var1, float var2, float var3, float var4, float var5) {
      this.hbdsS.setUniform(this.bJn(var1), var2, var3, var4, var5);
   }

   public void bJl() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jN.EuHrv J
      // 03: ldc2_w 24158030722541
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jL.bIQ ()I
      // 0b: aload 0
      // 0c: getfield sixtwo/jN.hbdsS Lsixtwo/lU;
      // 0f: aload 0
      // 10: getfield sixtwo/jN.pqgLF Lsixtwo/lW;
      // 13: invokeinterface sixtwo/lU.bindProgram (Lsixtwo/lW;)V 2
      // 18: istore 3
      // 19: aload 0
      // 1a: getfield sixtwo/jN.hxaAS I
      // 1d: bipush -1
      // 1e: iload 3
      // 1f: ifeq 47
      // 22: if_icmpeq 37
      // 25: goto 2c
      // 28: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2b: athrow
      // 2c: aload 0
      // 2d: invokevirtual sixtwo/jN.bJo ()V
      // 30: goto 37
      // 33: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 36: athrow
      // 37: aload 0
      // 38: iload 3
      // 39: ifeq 4b
      // 3c: getfield sixtwo/jN.BvSGk I
      // 3f: bipush -1
      // 40: goto 47
      // 43: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: if_icmpeq 4e
      // 4a: aload 0
      // 4b: invokevirtual sixtwo/jN.bJp ()V
      // 4e: return
   }

   private void bJo() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jN.EuHrv J
      // 03: ldc2_w 104016084955713
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jL.bIQ ()I
      // 0b: istore 3
      // 0c: iload 3
      // 0d: ifeq 3b
      // 10: invokestatic sixtwo/lF.cfY ()Lsixtwo/lB;
      // 13: getstatic sixtwo/lB.xCeuB Lsixtwo/lB;
      // 16: if_acmpne 30
      // 19: goto 20
      // 1c: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: aload 0
      // 21: aload 0
      // 22: getfield sixtwo/jN.hxaAS I
      // 25: invokestatic sixtwo/rm.dij ()Lorg/joml/Matrix4f;
      // 28: invokevirtual sixtwo/jN.bJw (ILorg/joml/Matrix4f;)V
      // 2b: return
      // 2c: invokestatic sixtwo/jN.bJB (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2f: athrow
      // 30: aload 0
      // 31: aload 0
      // 32: getfield sixtwo/jN.hxaAS I
      // 35: invokestatic sixtwo/jI.bIk ()Lorg/joml/Matrix4f;
      // 38: invokevirtual sixtwo/jN.bJw (ILorg/joml/Matrix4f;)V
      // 3b: return
   }

   public void bJm() {
      this.hbdsS.unbindProgram();
   }

   private static CallSite bJF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bJE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jN" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public int bJn(String var1) {
      return this.UMoVo.computeIfAbsent(var1, var1x -> this.hbdsS.uniformLocation(this.pqgLF, (String)var1x));
   }

   public void bJq(String var1, float var2) {
      this.hbdsS.setUniform(this.bJn(var1), var2);
   }

   private static MatchException bJB(MatchException var0) {
      return var0;
   }

   public void bJy(String var1, FloatBuffer var2) {
      this.hbdsS.setUniform(this.bJn(var1), var2);
   }

   private static String bJD(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 24500;
      if (SUbhZ[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])NLXzj.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               NLXzj.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jN", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = fAbkF[var5].getBytes("ISO-8859-1");
         SUbhZ[var5] = bJC(((Cipher)var4[0]).doFinal(var9));
      }

      return SUbhZ[var5];
   }

   public void bJu(String var1, float[] var2) {
      this.hbdsS.setUniform(this.bJn(var1), var2);
   }

   private static Object bJE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bJD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void bJs(String var1, float var2, float var3, float var4) {
      this.hbdsS.setUniform(this.bJn(var1), var2, var3, var4);
   }
}
