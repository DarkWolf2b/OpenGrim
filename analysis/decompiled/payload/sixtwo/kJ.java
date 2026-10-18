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
import net.minecraft.class_290;
import org.joml.Matrix4f;

public class kJ extends kQ<kD> {
   private static final kS fxNIh;
   private static final float fWKWj = 0.05F;
   private static final float fFhwG = 0.5F;
   private static final float vXVit = 0.0F;
   private kS JjsUg;
   private lq liGel;
   private static boolean RSYgP;
   private static final long jOIHs = gb.aYR(-3576148397043779238L, 6938331427060927409L, MethodHandles.lookup().lookupClass()).a(104542642239943L);
   private static final String[] hwBvu;
   private static final String[] yvyFe;
   private static final Map gnXDz = new HashMap(13);

   static {
      bUh(false);
      long var0 = jOIHs ^ 40525954447845L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[13];
      int var7 = 0;
      String var6 = "\u0086ñ<<ÉS\u008fë\nKP<¨M\u001el¥g]`¬B´xî\n\u0002æ~J\u0018¿\u0084\tÌÎÃ\u0003V|\u0018\u0092$\u000eíß$0d\u0002¡xíî¼8¤Ý\u0007¹ÆhÖ\u0097\u008b\u0018²b\"X¿\u0093ZYý\u0006Cº\u0082ª2eY}<Ý\u00893Ó»\u0018§Ê[¨Õ\u001d¨ê£¶OÑD\u001e>KôÆM1 .ò\u009f\u0010\t\u0085M\u0081G1\u0087^\u008fÜ\u009c£|×\u0089ù\u0010÷Ä\u0003\u000bnjÙ»È+Xún={W §D_)\u0088\\2\u0012P6Ì\u0095\u0018aUµ\u008fì@\u0080ßâAÁÃBÃ¨gs\u0018\u0000\u0010äl1\u0002\u0083¦´?\u0014j<pv\u000fEX\u0018øQ¥«J |Ýü=:tÛ5\u0013øt\b\u009aW\u008f\u000b\u009aÂ M1ÝMò³¯¯\u0087ý¢#U\u0000\u00ad\u007f#\u009b\u008fbì\fHÏ3ß9bÿ|Qt\u00183¬.\u0001\u0019ÂèðÂdÓ\u001a\u008er,\u0097§±\u001d/\u001eñO\u009f";
      int var8 = "\u0086ñ<<ÉS\u008fë\nKP<¨M\u001el¥g]`¬B´xî\n\u0002æ~J\u0018¿\u0084\tÌÎÃ\u0003V|\u0018\u0092$\u000eíß$0d\u0002¡xíî¼8¤Ý\u0007¹ÆhÖ\u0097\u008b\u0018²b\"X¿\u0093ZYý\u0006Cº\u0082ª2eY}<Ý\u00893Ó»\u0018§Ê[¨Õ\u001d¨ê£¶OÑD\u001e>KôÆM1 .ò\u009f\u0010\t\u0085M\u0081G1\u0087^\u008fÜ\u009c£|×\u0089ù\u0010÷Ä\u0003\u000bnjÙ»È+Xún={W §D_)\u0088\\2\u0012P6Ì\u0095\u0018aUµ\u008fì@\u0080ßâAÁÃBÃ¨gs\u0018\u0000\u0010äl1\u0002\u0083¦´?\u0014j<pv\u000fEX\u0018øQ¥«J |Ýü=:tÛ5\u0013øt\b\u009aW\u008f\u000b\u009aÂ M1ÝMò³¯¯\u0087ý¢#U\u0000\u00ad\u007f#\u009b\u008fbì\fHÏ3ß9bÿ|Qt\u00183¬.\u0001\u0019ÂèðÂdÓ\u001a\u008er,\u0097§±\u001d/\u001eñO\u009f"
         .length();
      char var5 = '(';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bUl(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     hwBvu = var9;
                     yvyFe = new String[13];
                     fxNIh = kS.bVE().duk(lh.GpGUc).duo(false).dul(false).dun(false).dup();
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

                  var6 = "\u0088ÇüÉ\u001fW\u0093\u000bïp\u001d\u0097\bA3\"\u0014\u008b\u008f \u007fhÖÒm\u00921øë\u0087`\u0093\u0018ÐU\u0004s\u0098Ë-Ùâ\u008eM\u000fÆ\u001b,\u000bÑ\u0086Ð/`\u009biG";
                  var8 = "\u0088ÇüÉ\u001fW\u0093\u000bïp\u001d\u0097\bA3\"\u0014\u008b\u008f \u007fhÖÒm\u00921øë\u0087`\u0093\u0018ÐU\u0004s\u0098Ë-Ùâ\u008eM\u000fÆ\u001b,\u000bÑ\u0086Ð/`\u009biG"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   @Override
   public void flush() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kJ.jOIHs J
      // 03: ldc2_w 124248110289335
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/kJ.bVj ()V
      // 0f: istore 3
      // 10: aload 0
      // 11: iload 3
      // 12: ifne 36
      // 15: getfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 18: ifnonnull 31
      // 1b: goto 22
      // 1e: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: aload 0
      // 23: aload 0
      // 24: invokevirtual sixtwo/kJ.defaultState ()Lsixtwo/kS;
      // 27: putfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 2a: goto 31
      // 2d: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 30: athrow
      // 31: aload 0
      // 32: invokevirtual sixtwo/kJ.bUf ()V
      // 35: aload 0
      // 36: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 39: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 3c: invokevirtual sixtwo/kJ.bVi (Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 3f: return
   }

   @Override
   public kS defaultState() {
      return fxNIh;
   }

   @Override
   public void endBatch() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kJ.jOIHs J
      // 03: ldc2_w 70664219881994
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifne 3f
      // 11: invokevirtual sixtwo/kJ.bVk ()Z
      // 14: ifne 2d
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: aconst_null
      // 20: putfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 23: aload 0
      // 24: aconst_null
      // 25: putfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 28: return
      // 29: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2c: athrow
      // 2d: aload 0
      // 2e: invokevirtual sixtwo/kJ.bVj ()V
      // 31: aload 0
      // 32: invokevirtual sixtwo/kJ.bUf ()V
      // 35: aload 0
      // 36: invokevirtual sixtwo/kJ.bVl ()V
      // 39: aload 0
      // 3a: aconst_null
      // 3b: putfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 3e: aload 0
      // 3f: aconst_null
      // 40: putfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 43: return
   }

   public static boolean bUj() {
      boolean var0 = bUi();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw bUk(var1);
      }
   }

   public static boolean bUi() {
      return RSYgP;
   }

   public static void bUh(boolean var0) {
      RSYgP = var0;
   }

   public void bUc(lq param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kJ.jOIHs J
      // 03: ldc2_w 10550181048764
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: ifnonnull 16
      // 11: return
      // 12: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15: athrow
      // 16: aload 0
      // 17: iload 4
      // 19: ifne 4b
      // 1c: getfield sixtwo/kJ.WfBOj Lnet/minecraft/class_287;
      // 1f: ifnull 43
      // 22: goto 29
      // 25: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 28: athrow
      // 29: aload 0
      // 2a: iload 4
      // 2c: ifne 55
      // 2f: goto 36
      // 32: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 35: athrow
      // 36: getfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 39: ifnonnull 54
      // 3c: goto 43
      // 3f: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 42: athrow
      // 43: aload 0
      // 44: goto 4b
      // 47: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4a: athrow
      // 4b: aload 1
      // 4c: aload 0
      // 4d: getfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 50: invokevirtual sixtwo/kJ.bUb (Lsixtwo/lq;Lsixtwo/kS;)V
      // 53: return
      // 54: aload 0
      // 55: iload 4
      // 57: ifne 72
      // 5a: getfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 5d: aload 1
      // 5e: if_acmpne 6d
      // 61: goto 68
      // 64: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 67: athrow
      // 68: return
      // 69: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6c: athrow
      // 6d: aload 0
      // 6e: invokevirtual sixtwo/kJ.flush ()V
      // 71: aload 0
      // 72: aload 1
      // 73: putfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 76: return
   }

   public void bUa(lq var1) {
      this.bUb(var1, this.defaultState());
   }

   public void bUd(kD param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kJ.jOIHs J
      // 03: ldc2_w 82390577823524
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kJ.bUi ()Z
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/kJ.bVj ()V
      // 0f: istore 4
      // 11: aload 0
      // 12: getfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 15: ifnull 4d
      // 18: aload 1
      // 19: invokevirtual sixtwo/kD.bTc ()[I
      // 1c: iload 4
      // 1e: ifne 49
      // 21: goto 28
      // 24: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: ifnull 4d
      // 2b: goto 32
      // 2e: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 31: athrow
      // 32: aload 1
      // 33: iload 4
      // 35: ifne 53
      // 38: goto 3f
      // 3b: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: invokevirtual sixtwo/kD.bTc ()[I
      // 42: goto 49
      // 45: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 48: athrow
      // 49: arraylength
      // 4a: ifne 52
      // 4d: return
      // 4e: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 51: athrow
      // 52: aload 1
      // 53: iload 4
      // 55: ifne 71
      // 58: invokevirtual sixtwo/kD.bSX ()Lorg/joml/Matrix4f;
      // 5b: ifnull 70
      // 5e: goto 65
      // 61: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 64: athrow
      // 65: aload 1
      // 66: invokevirtual sixtwo/kD.bSX ()Lorg/joml/Matrix4f;
      // 69: goto 77
      // 6c: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6f: athrow
      // 70: aload 1
      // 71: invokevirtual sixtwo/kD.bSW ()Lorg/joml/Matrix3x2fStack;
      // 74: invokestatic sixtwo/jI.bIl (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // 77: astore 5
      // 79: aload 0
      // 7a: aload 0
      // 7b: getfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 7e: aload 1
      // 7f: invokevirtual sixtwo/kD.bTc ()[I
      // 82: aload 1
      // 83: invokevirtual sixtwo/kD.bTb ()F
      // 86: aload 1
      // 87: invokevirtual sixtwo/kD.bTd ()Lsixtwo/mG;
      // 8a: aload 5
      // 8c: aload 1
      // 8d: invokevirtual sixtwo/kD.bSY ()F
      // 90: aload 1
      // 91: invokevirtual sixtwo/kD.bSZ ()F
      // 94: aload 1
      // 95: invokevirtual sixtwo/kD.bTa ()F
      // 98: invokevirtual sixtwo/kJ.bUe (Lsixtwo/lq;[IFLsixtwo/mG;Lorg/joml/Matrix4f;FFF)V
      // 9b: return
   }

   public void bUb(lq var1, kS var2) {
      long var3 = jOIHs ^ 97769634976590L;
      boolean var5 = bUj();

      kJ var10000;
      kS var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var2;
               if (!var5) {
                  break label22;
               }

               if (var2 != null) {
                  break label21;
               }
            } catch (MatchException var6) {
               throw bUk(var6);
            }

            var10001 = this.defaultState();
            break label22;
         }

         var10001 = var2;
      }

      var10000.JjsUg = var10001;
      this.liGel = var1;
      this.bVi(class_5596.field_27382, class_290.field_1575);
   }

   private void bUe(lq var1, int[] var2, float var3, mG var4, Matrix4f var5, float var6, float var7, float var8) {
      this.bUc(var1);
      lj var9 = var1.cav();
      var9.bYt(var5, this.WfBOj, var2, var3, 0.025F * var3, 0.0F, var6, var7 + var9.bYG(var3), var8, var4.coh());
   }

   private void bUf() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kJ.jOIHs J
      // 03: ldc2_w 19050840407136
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kJ.bUj ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: iload 3
      // 0e: ifeq 26
      // 11: getfield sixtwo/kJ.WfBOj Lnet/minecraft/class_287;
      // 14: ifnull 39
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: goto 26
      // 22: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: getfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 29: ifnull 39
      // 2c: getstatic sixtwo/kR.dCUka Lsixtwo/kO;
      // 2f: ifnonnull 3e
      // 32: goto 39
      // 35: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38: athrow
      // 39: return
      // 3a: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3d: athrow
      // 3e: aload 0
      // 3f: getfield sixtwo/kJ.WfBOj Lnet/minecraft/class_287;
      // 42: invokevirtual net/minecraft/class_287.method_60794 ()Lnet/minecraft/class_9801;
      // 45: astore 4
      // 47: aload 4
      // 49: iload 3
      // 4a: ifeq 52
      // 4d: ifnonnull 66
      // 50: aload 4
      // 52: iload 3
      // 53: ifeq 62
      // 56: ifnull 65
      // 59: goto 60
      // 5c: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 5f: athrow
      // 60: aload 4
      // 62: invokevirtual net/minecraft/class_9801.close ()V
      // 65: return
      // 66: aload 0
      // 67: getfield sixtwo/kJ.liGel Lsixtwo/lq;
      // 6a: invokevirtual sixtwo/lq.cav ()Lsixtwo/lj;
      // 6d: astore 5
      // 6f: getstatic sixtwo/kR.dCUka Lsixtwo/kO;
      // 72: aload 0
      // 73: getfield sixtwo/kJ.JjsUg Lsixtwo/kS;
      // 76: invokevirtual sixtwo/kO.bUZ (Lsixtwo/kS;)Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 79: astore 6
      // 7b: aload 6
      // 7d: aload 4
      // 7f: aload 5
      // 81: invokedynamic accept (Lsixtwo/lj;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kJ.bUg (Lsixtwo/lj;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 86: invokestatic sixtwo/lF.cfP (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 89: aload 4
      // 8b: iload 3
      // 8c: ifeq 94
      // 8f: ifnull c0
      // 92: aload 4
      // 94: invokevirtual net/minecraft/class_9801.close ()V
      // 97: goto c0
      // 9a: astore 5
      // 9c: aload 4
      // 9e: iload 3
      // 9f: ifeq ae
      // a2: ifnull bd
      // a5: goto ac
      // a8: invokestatic sixtwo/kJ.bUk (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ab: athrow
      // ac: aload 4
      // ae: invokevirtual net/minecraft/class_9801.close ()V
      // b1: goto bd
      // b4: astore 6
      // b6: aload 5
      // b8: aload 6
      // ba: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // bd: aload 5
      // bf: athrow
      // c0: return
   }

   private static CallSite bUo(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bUn".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kJ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String bUl(byte[] var0) {
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

   private static Throwable bUk(Throwable var0) {
      return var0;
   }

   private static Object bUn(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bUm(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static String bUm(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 31711;
      if (yvyFe[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])gnXDz.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               gnXDz.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kJ", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = hwBvu[var5].getBytes("ISO-8859-1");
         yvyFe[var5] = bUl(((Cipher)var4[0]).doFinal(var9));
      }

      return yvyFe[var5];
   }
}
