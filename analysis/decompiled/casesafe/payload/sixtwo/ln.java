package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2561;
import net.minecraft.class_287;
import org.joml.Matrix4f;

public class ln {
   private static final float psnxY = 0.05F;
   private static final float nYila = 0.5F;
   private static final float lDCRr = 0.0F;
   private static final long vWuVy = gb.aYR(4435843156865770935L, 1835440659246342495L, MethodHandles.lookup().lookupClass()).a(279522941554775L);
   private static final String[] gIkYz;
   private static final String[] WqWqa;
   private static final Map MnEpw = new HashMap(13);
   private static final long tjXri;

   private static void bZO(
      lj param0,
      Matrix4f param1,
      float param2,
      float param3,
      boolean param4,
      float param5,
      float param6,
      float param7,
      float param8,
      Consumer<class_287> param9
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/ln.vWuVy J
      // 003: ldc2_w 60298998370335
      // 006: lxor
      // 007: lstore 10
      // 009: aload 1
      // 00a: invokevirtual org/joml/Matrix4f.m00 ()F
      // 00d: aload 1
      // 00e: invokevirtual org/joml/Matrix4f.m00 ()F
      // 011: fmul
      // 012: aload 1
      // 013: invokevirtual org/joml/Matrix4f.m01 ()F
      // 016: aload 1
      // 017: invokevirtual org/joml/Matrix4f.m01 ()F
      // 01a: fmul
      // 01b: fadd
      // 01c: aload 1
      // 01d: invokevirtual org/joml/Matrix4f.m02 ()F
      // 020: aload 1
      // 021: invokevirtual org/joml/Matrix4f.m02 ()F
      // 024: fmul
      // 025: fadd
      // 026: f2d
      // 027: invokestatic java/lang/Math.sqrt (D)D
      // 02a: d2f
      // 02b: fstore 13
      // 02d: fload 7
      // 02f: fload 13
      // 031: fmul
      // 032: fstore 14
      // 034: aload 1
      // 035: invokevirtual org/joml/Matrix4f.m00 ()F
      // 038: fload 8
      // 03a: fmul
      // 03b: aload 1
      // 03c: invokevirtual org/joml/Matrix4f.m10 ()F
      // 03f: fload 2
      // 040: fmul
      // 041: fadd
      // 042: aload 1
      // 043: invokevirtual org/joml/Matrix4f.m20 ()F
      // 046: fload 3
      // 047: fmul
      // 048: fadd
      // 049: aload 1
      // 04a: invokevirtual org/joml/Matrix4f.m30 ()F
      // 04d: fadd
      // 04e: fstore 15
      // 050: invokestatic sixtwo/lj.bYV ()Ljava/lang/String;
      // 053: new net/minecraft/class_9799
      // 056: dup
      // 057: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 05a: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 05d: getstatic sixtwo/ln.tjXri J
      // 060: l2i
      // 061: imul
      // 062: invokespecial net/minecraft/class_9799.<init> (I)V
      // 065: astore 16
      // 067: astore 12
      // 069: new net/minecraft/class_287
      // 06c: dup
      // 06d: aload 16
      // 06f: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 072: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 075: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 078: astore 17
      // 07a: aload 9
      // 07c: aload 17
      // 07e: invokeinterface java/util/function/Consumer.accept (Ljava/lang/Object;)V 2
      // 083: aload 17
      // 085: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 088: astore 18
      // 08a: aload 18
      // 08c: aload 12
      // 08e: ifnull 0bc
      // 091: ifnull 0ba
      // 094: goto 09b
      // 097: invokestatic sixtwo/ln.bZS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09a: athrow
      // 09b: getstatic sixtwo/kR.mQUZT Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 09e: aload 18
      // 0a0: aload 0
      // 0a1: iload 4
      // 0a3: fload 5
      // 0a5: fload 6
      // 0a7: fload 14
      // 0a9: fload 15
      // 0ab: invokedynamic accept (Lsixtwo/lj;ZFFFF)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/ln.bZP (Lsixtwo/lj;ZFFFFLcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0b0: invokestatic sixtwo/lF.cfP (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0b3: goto 0ba
      // 0b6: invokestatic sixtwo/ln.bZS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0b9: athrow
      // 0ba: aload 18
      // 0bc: aload 12
      // 0be: ifnull 0cd
      // 0c1: ifnull 0fa
      // 0c4: goto 0cb
      // 0c7: invokestatic sixtwo/ln.bZS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ca: athrow
      // 0cb: aload 18
      // 0cd: invokevirtual net/minecraft/class_9801.close ()V
      // 0d0: goto 0fa
      // 0d3: astore 19
      // 0d5: aload 18
      // 0d7: aload 12
      // 0d9: ifnull 0e8
      // 0dc: ifnull 0f7
      // 0df: goto 0e6
      // 0e2: invokestatic sixtwo/ln.bZS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e5: athrow
      // 0e6: aload 18
      // 0e8: invokevirtual net/minecraft/class_9801.close ()V
      // 0eb: goto 0f7
      // 0ee: astore 20
      // 0f0: aload 19
      // 0f2: aload 20
      // 0f4: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 0f7: aload 19
      // 0f9: athrow
      // 0fa: aload 16
      // 0fc: invokevirtual net/minecraft/class_9799.close ()V
      // 0ff: goto 118
      // 102: astore 17
      // 104: aload 16
      // 106: invokevirtual net/minecraft/class_9799.close ()V
      // 109: goto 115
      // 10c: astore 18
      // 10e: aload 17
      // 110: aload 18
      // 112: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 115: aload 17
      // 117: athrow
      // 118: return
   }

   public static void bZM(
      lj var0, class_2561 var1, float var2, Matrix4f var3, float var4, float var5, float var6, boolean var7, float var8, float var9, float var10, float var11
   ) {
      bZN(var0, var1, mG.hoGuU, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
   }

   private static Throwable bZS(Throwable var0) {
      return var0;
   }

   private static CallSite bZW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bZV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ln" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bZT(byte[] var0) {
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

   public static void bZI(lj var0, String var1, float var2, mG var3, Matrix4f var4, float var5, float var6, float var7, boolean var8, float var9, float var10) {
      float var11 = var0.bYC(var1, var2) * 2.0F;
      bZK(var0, mZ.csh(var1), var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
   }

   public static void bZL(
      lj var0,
      int[] var1,
      float var2,
      mG var3,
      Matrix4f var4,
      float var5,
      float var6,
      float var7,
      boolean var8,
      float var9,
      float var10,
      float var11,
      float var12
   ) {
      bZO(
         var0,
         var4,
         var6,
         var7,
         var8,
         var9,
         var10,
         var11,
         var12,
         var8x -> var0.bYt(var4, var8x, var1, var2, 0.025F * var2, 0.0F, var5, var6 + var0.bYG(var2), var7, var3.coh())
      );
   }

   private static Object bZV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bZU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bZU(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 22612;
      if (WqWqa[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])MnEpw.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               MnEpw.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ln", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = gIkYz[var5].getBytes("ISO-8859-1");
         WqWqa[var5] = bZT(((Cipher)var4[0]).doFinal(var9));
      }

      return WqWqa[var5];
   }

   static {
      long var5 = vWuVy ^ 63479895216266L;
      Cipher var7;
      Cipher var10000 = var7 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var8 = 1; var8 < 8; var8++) {
         var10003[var8] = (byte)(var5 << var8 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var14 = new String[13];
      int var12 = 0;
      String var11 = "\u001d\u0014\u0086├»├│~├É┬╣┬ę├č<>i1<├ž\u0010├ą┬░\u0082\u0082├░M\u001bx\u008f├╣├ëc\u0001\f┬╗\u008d\u0018j\u0098/5\"├îs]┬Ş├ŐI├Á┬¬[I├ź┬▒┬ż\u0018├î┬Ě\u000e\u001f\u000e\u0018*├ëe├║├Łw├Ž1K\u0015\u008c\u0080|\u009b├×\u0097├┐:5\u00ad├Ż-<;\u0018u_J├ë├â├é2\u0007┬í┬Â\u0006┬í(3\u000e├Ĺ┬╗\u00adR\u0094├Ç:├ü\u000f V┬Žo6\u009b\u0013}┬╣\u0082├┐:\u0015jVd?g\u001f_Bn}┬Ákm|┬í\u001f\u001d┬Ż\u009c├ą(I\u009a\u008b\u001b\u0084q\u0016┬Ž┬│\"u\u00ad├»├Č┬║^?\u0011\u0087├ő├Ę1B├ę\u008b1}h@T)├é\u0089\u0006a├Ł┬Â├»├Ę┬╝\u0010├ą├ł┬Ě?\u0083+\u001eb\u0010┬»a\b\u009asf? \u00041├ík\b\u0017┬▒D\u009bv$>\u0011├░)<\u0001├Ś/\u0019[├Ž_$├ś┬Ę├Č&┬żD┬Ž,\u0018e┬Â┬«├┤├ü\u0018R├Ź\b\u0095w\u0087┬ú├¬\u0092├ç┬Ż├Ą\r\u0015WB\u00ad┬ż\u0018\u000f\u0090┬╝\"a\u0089\\├ő├×├Ťj├┐├žF\u0091\u008c\u0098\u0002B\u0098┬ż\"./";
      int var13 = "\u001d\u0014\u0086├»├│~├É┬╣┬ę├č<>i1<├ž\u0010├ą┬░\u0082\u0082├░M\u001bx\u008f├╣├ëc\u0001\f┬╗\u008d\u0018j\u0098/5\"├îs]┬Ş├ŐI├Á┬¬[I├ź┬▒┬ż\u0018├î┬Ě\u000e\u001f\u000e\u0018*├ëe├║├Łw├Ž1K\u0015\u008c\u0080|\u009b├×\u0097├┐:5\u00ad├Ż-<;\u0018u_J├ë├â├é2\u0007┬í┬Â\u0006┬í(3\u000e├Ĺ┬╗\u00adR\u0094├Ç:├ü\u000f V┬Žo6\u009b\u0013}┬╣\u0082├┐:\u0015jVd?g\u001f_Bn}┬Ákm|┬í\u001f\u001d┬Ż\u009c├ą(I\u009a\u008b\u001b\u0084q\u0016┬Ž┬│\"u\u00ad├»├Č┬║^?\u0011\u0087├ő├Ę1B├ę\u008b1}h@T)├é\u0089\u0006a├Ł┬Â├»├Ę┬╝\u0010├ą├ł┬Ě?\u0083+\u001eb\u0010┬»a\b\u009asf? \u00041├ík\b\u0017┬▒D\u009bv$>\u0011├░)<\u0001├Ś/\u0019[├Ž_$├ś┬Ę├Č&┬żD┬Ž,\u0018e┬Â┬«├┤├ü\u0018R├Ź\b\u0095w\u0087┬ú├¬\u0092├ç┬Ż├Ą\r\u0015WB\u00ad┬ż\u0018\u000f\u0090┬╝\"a\u0089\\├ő├×├Ťj├┐├žF\u0091\u008c\u0098\u0002B\u0098┬ż\"./"
         .length();
      char var10 = 16;
      int var17 = -1;

      label37:
      while (true) {
         String var18 = var11.substring(++var17, var17 + var10);
         byte var10001 = -1;

         while (true) {
            byte[] var15 = var7.doFinal(var18.getBytes("ISO-8859-1"));
            String var26 = bZT(var15).intern();
            switch (var10001) {
               case 0:
                  var14[var12++] = var26;
                  if ((var17 += var10) >= var13) {
                     gIkYz = var14;
                     WqWqa = new String[13];
                     Cipher var0;
                     var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                     var10002 = SecretKeyFactory.getInstance("DES");
                     var10003 = new byte[]{(byte)(var5 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                     for (int var1 = 1; var1 < 8; var1++) {
                        var10003[var1] = (byte)(var5 << var1 * 8 >>> 56);
                     }

                     var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                     long var2 = -4536067894754635093L;
                     byte[] var4 = var0.doFinal(
                        new byte[]{
                           (byte)(var2 >>> 56),
                           (byte)(var2 >>> 48),
                           (byte)(var2 >>> 40),
                           (byte)(var2 >>> 32),
                           (byte)(var2 >>> 24),
                           (byte)(var2 >>> 16),
                           (byte)(var2 >>> 8),
                           (byte)var2
                        }
                     );
                     long var30 = (var4[0] & 255L) << 56
                        | (var4[1] & 255L) << 48
                        | (var4[2] & 255L) << 40
                        | (var4[3] & 255L) << 32
                        | (var4[4] & 255L) << 24
                        | (var4[5] & 255L) << 16
                        | (var4[6] & 255L) << 8
                        | var4[7] & 255L;
                     var10001 = -1;
                     tjXri = var30;
                     return;
                  }

                  var10 = var11.charAt(var17);
                  break;
               default:
                  var14[var12++] = var26;
                  if ((var17 += var10) < var13) {
                     var10 = var11.charAt(var17);
                     continue label37;
                  }

                  var11 = "├ç┬╗\u008a├á\u0004h┬á├│_\u0098~┬░├¬e├Ö:X┬Ą├ô┬Ą\u0005\u009a\u0094├╣ |├â\u0003\u0082%=X├Ł├Ł\u0015┬Ş\u0092\u0015\u000191├ÁC#V├Ź┬Ž]\f├║┬╝┬óa\u0086├Éf\u007f";
                  var13 = "├ç┬╗\u008a├á\u0004h┬á├│_\u0098~┬░├¬e├Ö:X┬Ą├ô┬Ą\u0005\u009a\u0094├╣ |├â\u0003\u0082%=X├Ł├Ł\u0015┬Ş\u0092\u0015\u000191├ÁC#V├Ź┬Ž]\f├║┬╝┬óa\u0086├Éf\u007f"
                     .length();
                  var10 = 24;
                  var17 = -1;
            }

            var18 = var11.substring(++var17, var17 + var10);
            var10001 = 0;
         }
      }
   }

   public static void bZN(
      lj var0,
      class_2561 var1,
      mG var2,
      float var3,
      Matrix4f var4,
      float var5,
      float var6,
      float var7,
      boolean var8,
      float var9,
      float var10,
      float var11,
      float var12
   ) {
      List var13 = lm.bZw(var1, var2);
      bZO(var0, var4, var6, var7, var8, var9, var10, var11, var12, var7x -> {
         long var8x = vWuVy ^ 29583526946431L;
         String var10000 = lj.bYV();
         float var11x = var5;
         Iterator var12x = var13.iterator();
         String var10x = var10000;

         while (var12x.hasNext()) {
            lm$uy var13x = (lm$uy)var12x.next();
            var0.bYt(var4, var7x, mZ.csh(var13x.text()), var3, 0.025F * var3, -0.3F, var11x - 0.75F, var6 + var3 * 0.7F, var7, var13x.color());
            var11x += var0.bYC(var13x.text(), var3);
            if (var10x == null) {
               break;
            }
         }
      });
   }

   public static void bZK(
      lj var0, int[] var1, float var2, mG var3, Matrix4f var4, float var5, float var6, float var7, boolean var8, float var9, float var10, float var11
   ) {
      bZL(var0, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11, var5);
   }

   public static void bZJ(lj var0, int[] var1, float var2, mG var3, Matrix4f var4, float var5, float var6, float var7) {
      bZK(var0, var1, var2, var3, var4, var5, var6, var7, false, 0.0F, 1.0F, 0.0F);
   }

   public static void bZG(lj var0, String var1, float var2, mG var3, Matrix4f var4, float var5, float var6, float var7) {
      bZK(var0, mZ.csh(var1), var2, var3, var4, var5, var6, var7, false, 0.0F, 1.0F, 0.0F);
   }

   public static void bZH(
      lj var0, String var1, float var2, mG var3, Matrix4f var4, float var5, float var6, float var7, boolean var8, float var9, float var10, float var11
   ) {
      bZK(var0, mZ.csh(var1), var2, var3, var4, var5, var6, var7, var8, var9, var10, var11);
   }
}
