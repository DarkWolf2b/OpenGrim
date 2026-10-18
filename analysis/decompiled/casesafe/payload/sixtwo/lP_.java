package sixtwo;

import com.sun.jna.Pointer;
import com.sun.jna.platform.win32.User32;
import com.sun.jna.platform.win32.WinDef.DWORD;
import com.sun.jna.platform.win32.WinDef.HWND;
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
import mixin.accessors.WindowAccessor;
import org.lwjgl.glfw.GLFW;
import org.lwjgl.opengl.GLCapabilities;
import oshi.PlatformEnum;

public final class lP {
   private static final int KhWwj;
   private static final int HBHSs;
   private static final int iYpaF;
   private static final int qkiXH;
   private static final int qnDjA;
   private static final int hTEkI = 1;
   private long elAyx;
   private HWND qTwYj;
   private GLCapabilities BSwIK;
   private boolean kwzfa;
   private int IUKmP;
   private static final long kNCTj = gb.aYR(1296029901778457980L, 7696269203822812648L, MethodHandles.lookup().lookupClass()).a(60703086122575L);
   private static final String[] Jzazp;
   private static final String[] QsknF;
   private static final Map kkDgQ = new HashMap(13);
   private static final long[] KaxKL;
   private static final Integer[] Vgibd;
   private static final Map sFkGh;
   private static final long vCtRE;

   static {
      long var16 = kNCTj ^ 56394850504256L;
      Cipher var18;
      Cipher var10000 = var18 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var19 = 1; var19 < 8; var19++) {
         var10003[var19] = (byte)(var16 << var19 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var25 = new String[2];
      int var23 = 0;
      String var22 = "┬┐f\u0089├Ľs├ó\u001ePO0t#├┤pW├Ľ8F├▓9$\u0001*\u0017p├┤├î#V\u0000┬╗)\u001eG┬¬1├ż├»U\u0001@├Ť┬Ş┬ą\u009dHfU\u0099\tU\u0013\u009f~├Ą┬źK├ó\u009e├╗├ĚY<┬ęl \u0019┬ą\u007f├č├Ľ├ü\u009c";
      int var24 = "┬┐f\u0089├Ľs├ó\u001ePO0t#├┤pW├Ľ8F├▓9$\u0001*\u0017p├┤├î#V\u0000┬╗)\u001eG┬¬1├ż├»U\u0001@├Ť┬Ş┬ą\u009dHfU\u0099\tU\u0013\u009f~├Ą┬źK├ó\u009e├╗├ĚY<┬ęl \u0019┬ą\u007f├č├Ľ├ü\u009c"
         .length();
      char var21 = 16;
      int var20 = -1;

      while (true) {
         byte[] var26 = var18.doFinal(var22.substring(++var20, var20 + var21).getBytes("ISO-8859-1"));
         String var37 = chs(var26).intern();
         int var10001 = -1;
         var25[var23++] = var37;
         if ((var20 += var21) >= var24) {
            Jzazp = var25;
            QsknF = new String[2];
            sFkGh = new HashMap(13);
            Cipher var5;
            var10000 = var5 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var6 = 1; var6 < 8; var6++) {
               var10003[var6] = (byte)(var16 << var6 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var11 = new long[12];
            int var8 = 0;
            String var9 = "\"_\u0012\u009e3B\u009f\f3\u000b├Ő\u00959\u001c┬Â├é\u0003Ug┬Ş┬╗├É5├×├▓├┤├Ĺb┬á┬┤+)├Ág┬»├Ě\t├┐├ÇI\u0013z\u0096\u0085\u000b┬╝\"^\u0014'┬ú\u009b\u001d\t\u009eg├Ž├ł\u001em├ś┬░┬ĚH┬¬b\u001f┬╝KZ&\u0005├ô\u009c┬│GG\u000b\u0098X";
            int var10 = "\"_\u0012\u009e3B\u009f\f3\u000b├Ő\u00959\u001c┬Â├é\u0003Ug┬Ş┬╗├É5├×├▓├┤├Ĺb┬á┬┤+)├Ág┬»├Ě\t├┐├ÇI\u0013z\u0096\u0085\u000b┬╝\"^\u0014'┬ú\u009b\u001d\t\u009eg├Ž├ł\u001em├ś┬░┬ĚH┬¬b\u001f┬╝KZ&\u0005├ô\u009c┬│GG\u000b\u0098X"
               .length();
            byte var7 = 0;

            label42:
            while (true) {
               var10001 = var7;
               var7 += 8;
               byte[] var12 = var9.substring(var10001, var7).getBytes("ISO-8859-1");
               long[] var30 = var11;
               var10001 = var8++;
               long var40 = (var12[0] & 255L) << 56
                  | (var12[1] & 255L) << 48
                  | (var12[2] & 255L) << 40
                  | (var12[3] & 255L) << 32
                  | (var12[4] & 255L) << 24
                  | (var12[5] & 255L) << 16
                  | (var12[6] & 255L) << 8
                  | var12[7] & 255L;
               byte var45 = -1;

               while (true) {
                  long var13 = var40;
                  byte[] var15 = var5.doFinal(
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
                  long var48 = (var15[0] & 255L) << 56
                     | (var15[1] & 255L) << 48
                     | (var15[2] & 255L) << 40
                     | (var15[3] & 255L) << 32
                     | (var15[4] & 255L) << 24
                     | (var15[5] & 255L) << 16
                     | (var15[6] & 255L) << 8
                     | var15[7] & 255L;
                  switch (var45) {
                     case 0:
                        var30[var10001] = var48;
                        if (var7 >= var10) {
                           KaxKL = var11;
                           Vgibd = new Integer[12];
                           KhWwj = chy<"q">(12769, var16 ^ 4904930010869667720L);
                           HBHSs = chy<"q">(26804, var16 ^ 2817515029522140881L);
                           iYpaF = chy<"q">(18392, var16 ^ 2103880364131082686L);
                           qkiXH = chy<"q">(9822, var16 ^ 5445074071285268534L);
                           qnDjA = chy<"q">(22360, var16 ^ 6780327527577383228L);
                           Cipher var0;
                           var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
                           var10002 = SecretKeyFactory.getInstance("DES");
                           var10003 = new byte[]{(byte)(var16 >>> 56), 0, 0, 0, 0, 0, 0, 0};

                           for (int var1 = 1; var1 < 8; var1++) {
                              var10003[var1] = (byte)(var16 << var1 * 8 >>> 56);
                           }

                           var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
                           long var2 = 5060178470276032762L;
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
                           long var43 = (var4[0] & 255L) << 56
                              | (var4[1] & 255L) << 48
                              | (var4[2] & 255L) << 40
                              | (var4[3] & 255L) << 32
                              | (var4[4] & 255L) << 24
                              | (var4[5] & 255L) << 16
                              | (var4[6] & 255L) << 8
                              | var4[7] & 255L;
                           byte var36 = -1;
                           vCtRE = var43;
                           return;
                        }
                        break;
                     default:
                        var30[var10001] = var48;
                        if (var7 < var10) {
                           continue label42;
                        }

                        var9 = "\u001b\u0086├ä├Ą\b\u0089├Ä\u008a\u0006\u0002\u0016┬«├ä├┤┬╣Z";
                        var10 = "\u001b\u0086├ä├Ą\b\u0089├Ä\u008a\u0006\u0002\u0016┬«├ä├┤┬╣Z".length();
                        var7 = 0;
                  }

                  byte var35 = var7;
                  var7 += 8;
                  var12 = var9.substring(var35, var7).getBytes("ISO-8859-1");
                  var30 = var11;
                  var10001 = var8++;
                  var40 = (var12[0] & 255L) << 56
                     | (var12[1] & 255L) << 48
                     | (var12[2] & 255L) << 40
                     | (var12[3] & 255L) << 32
                     | (var12[4] & 255L) << 24
                     | (var12[5] & 255L) << 16
                     | (var12[6] & 255L) << 8
                     | var12[7] & 255L;
                  var45 = 0;
               }
            }
         }

         var21 = var22.charAt(var20);
      }
   }

   private static String chs(byte[] var0) {
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

   private static Throwable chr(Throwable var0) {
      return var0;
   }

   public void cgZ(Runnable var1) {
   }

   public boolean cgY() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 133647030684912
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: invokevirtual sixtwo/lP.cgW ()Z
      // 10: aload 3
      // 11: ifnull 28
      // 14: ifne 24
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: bipush 0
      // 1f: ireturn
      // 20: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 23: athrow
      // 24: aload 0
      // 25: invokevirtual sixtwo/lP.chj ()Z
      // 28: aload 3
      // 29: ifnull 45
      // 2c: ifne 40
      // 2f: goto 36
      // 32: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 35: athrow
      // 36: aload 0
      // 37: invokevirtual sixtwo/lP.chl ()V
      // 3a: bipush 0
      // 3b: ireturn
      // 3c: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3f: athrow
      // 40: aload 0
      // 41: invokevirtual sixtwo/lP.che ()V
      // 44: bipush 1
      // 45: ireturn
   }

   public void chl() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 74903467418260
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 24
      // 11: getfield sixtwo/lP.kwzfa Z
      // 14: ifne 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: aload 0
      // 24: aload 3
      // 25: ifnull 56
      // 28: getfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 2b: ifnull 4e
      // 2e: goto 35
      // 31: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 34: athrow
      // 35: getstatic com/sun/jna/platform/win32/User32.INSTANCE Lcom/sun/jna/platform/win32/User32;
      // 38: aload 0
      // 39: getfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 3c: bipush 0
      // 3d: invokeinterface com/sun/jna/platform/win32/User32.ShowWindow (Lcom/sun/jna/platform/win32/WinDef$HWND;I)Z 3
      // 42: pop
      // 43: aload 3
      // 44: ifnonnull 5c
      // 47: goto 4e
      // 4a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4d: athrow
      // 4e: aload 0
      // 4f: goto 56
      // 52: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 55: athrow
      // 56: getfield sixtwo/lP.elAyx J
      // 59: invokestatic org/lwjgl/glfw/GLFW.glfwHideWindow (J)V
      // 5c: aload 0
      // 5d: bipush 0
      // 5e: putfield sixtwo/lP.kwzfa Z
      // 61: return
   }

   public boolean cgW() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 50556506384294
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/lP.elAyx J
      // 10: lconst_0
      // 11: lcmp
      // 12: aload 3
      // 13: ifnull 2e
      // 16: ifeq 40
      // 19: goto 20
      // 1c: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/lP.elAyx J
      // 24: invokestatic org/lwjgl/glfw/GLFW.glfwWindowShouldClose (J)Z
      // 27: goto 2e
      // 2a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2d: athrow
      // 2e: aload 3
      // 2f: ifnull 3d
      // 32: ifne 40
      // 35: goto 3c
      // 38: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3b: athrow
      // 3c: bipush 1
      // 3d: goto 41
      // 40: bipush 0
      // 41: ireturn
   }

   public void chf(int var1, int var2) {
      long var3 = kNCTj ^ 60660508506484L;
      String[] var5 = lR.ciF();

      int var10000;
      label32: {
         try {
            var10000 = this.cgW();
            if (var5 == null) {
               break label32;
            }

            if (var10000 == 0) {
               return;
            }
         } catch (MatchException var11) {
            throw chr(var11);
         }

         this.IUKmP = this.chi();
         var10000 = this.chg();
      }

      int var6 = var10000;
      int var7 = this.chh();
      int var8 = var1 - this.IUKmP;
      int var9 = var2 - this.IUKmP;

      try {
         GLFW.glfwSetWindowPos(this.elAyx, var8, var9);
         GLFW.glfwSetWindowSize(this.elAyx, var6, var7);
         if (this.qTwYj != null) {
            User32.INSTANCE
               .SetWindowPos(this.qTwYj, new HWND(Pointer.createConstant(vCtRE)), var8, var9, var6, var7, chy<"q">(32109, 1896963230271138866L ^ var3));
         }
      } catch (MatchException var10) {
         throw chr(var10);
      }
   }

   public void cgX() {
   }

   public void cha(Runnable param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 83049359867068
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: getfield sixtwo/lP.elAyx J
      // 11: aload 4
      // 13: ifnull 2a
      // 16: lconst_0
      // 17: lcmp
      // 18: ifne 27
      // 1b: goto 22
      // 1e: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: return
      // 23: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 26: athrow
      // 27: invokestatic org/lwjgl/glfw/GLFW.glfwGetCurrentContext ()J
      // 2a: lstore 5
      // 2c: invokestatic org/lwjgl/opengl/GL.getCapabilities ()Lorg/lwjgl/opengl/GLCapabilities;
      // 2f: astore 7
      // 31: aload 0
      // 32: getfield sixtwo/lP.elAyx J
      // 35: invokestatic org/lwjgl/glfw/GLFW.glfwMakeContextCurrent (J)V
      // 38: aload 0
      // 39: getfield sixtwo/lP.BSwIK Lorg/lwjgl/opengl/GLCapabilities;
      // 3c: invokestatic org/lwjgl/opengl/GL.setCapabilities (Lorg/lwjgl/opengl/GLCapabilities;)V
      // 3f: aload 1
      // 40: invokeinterface java/lang/Runnable.run ()V 1
      // 45: aload 0
      // 46: lload 5
      // 48: aload 7
      // 4a: invokevirtual sixtwo/lP.chq (JLorg/lwjgl/opengl/GLCapabilities;)V
      // 4d: aload 0
      // 4e: getfield sixtwo/lP.elAyx J
      // 51: invokestatic org/lwjgl/glfw/GLFW.glfwDestroyWindow (J)V
      // 54: aload 0
      // 55: lconst_0
      // 56: putfield sixtwo/lP.elAyx J
      // 59: aload 0
      // 5a: aconst_null
      // 5b: putfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 5e: aload 0
      // 5f: aconst_null
      // 60: putfield sixtwo/lP.BSwIK Lorg/lwjgl/opengl/GLCapabilities;
      // 63: aload 0
      // 64: bipush 0
      // 65: putfield sixtwo/lP.kwzfa Z
      // 68: aload 0
      // 69: bipush 0
      // 6a: putfield sixtwo/lP.IUKmP I
      // 6d: goto ca
      // 70: astore 8
      // 72: aload 0
      // 73: lload 5
      // 75: aload 7
      // 77: invokevirtual sixtwo/lP.chq (JLorg/lwjgl/opengl/GLCapabilities;)V
      // 7a: aload 0
      // 7b: getfield sixtwo/lP.elAyx J
      // 7e: invokestatic org/lwjgl/glfw/GLFW.glfwDestroyWindow (J)V
      // 81: aload 0
      // 82: lconst_0
      // 83: putfield sixtwo/lP.elAyx J
      // 86: aload 0
      // 87: aconst_null
      // 88: putfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 8b: aload 0
      // 8c: aconst_null
      // 8d: putfield sixtwo/lP.BSwIK Lorg/lwjgl/opengl/GLCapabilities;
      // 90: aload 0
      // 91: bipush 0
      // 92: putfield sixtwo/lP.kwzfa Z
      // 95: aload 0
      // 96: bipush 0
      // 97: putfield sixtwo/lP.IUKmP I
      // 9a: goto ca
      // 9d: astore 9
      // 9f: aload 0
      // a0: lload 5
      // a2: aload 7
      // a4: invokevirtual sixtwo/lP.chq (JLorg/lwjgl/opengl/GLCapabilities;)V
      // a7: aload 0
      // a8: getfield sixtwo/lP.elAyx J
      // ab: invokestatic org/lwjgl/glfw/GLFW.glfwDestroyWindow (J)V
      // ae: aload 0
      // af: lconst_0
      // b0: putfield sixtwo/lP.elAyx J
      // b3: aload 0
      // b4: aconst_null
      // b5: putfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // b8: aload 0
      // b9: aconst_null
      // ba: putfield sixtwo/lP.BSwIK Lorg/lwjgl/opengl/GLCapabilities;
      // bd: aload 0
      // be: bipush 0
      // bf: putfield sixtwo/lP.kwzfa Z
      // c2: aload 0
      // c3: bipush 0
      // c4: putfield sixtwo/lP.IUKmP I
      // c7: aload 9
      // c9: athrow
      // ca: return
   }

   private static CallSite chy(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("chx".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lP" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private boolean chj() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 49716586574971
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: aload 0
      // 0c: invokevirtual sixtwo/lP.chp ()J
      // 0f: lstore 4
      // 11: astore 3
      // 12: lload 4
      // 14: lconst_0
      // 15: lcmp
      // 16: aload 3
      // 17: ifnull 3d
      // 1a: ifeq 9f
      // 1d: goto 24
      // 20: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 23: athrow
      // 24: lload 4
      // 26: sipush 10092
      // 29: ldc2_w 7382972610990144317
      // 2c: lload 1
      // 2d: lxor
      // 2e: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 33: invokestatic org/lwjgl/glfw/GLFW.glfwGetWindowAttrib (JI)I
      // 36: goto 3d
      // 39: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3c: athrow
      // 3d: aload 3
      // 3e: ifnull 64
      // 41: ifne 9f
      // 44: goto 4b
      // 47: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4a: athrow
      // 4b: lload 4
      // 4d: sipush 687
      // 50: ldc2_w 3285813041352662779
      // 53: lload 1
      // 54: lxor
      // 55: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5a: invokestatic org/lwjgl/glfw/GLFW.glfwGetWindowAttrib (JI)I
      // 5d: goto 64
      // 60: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 63: athrow
      // 64: bipush 1
      // 65: aload 3
      // 66: ifnull 98
      // 69: if_icmpne 9f
      // 6c: goto 73
      // 6f: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 72: athrow
      // 73: lload 4
      // 75: sipush 16490
      // 78: ldc2_w 3211139638148013116
      // 7b: lload 1
      // 7c: lxor
      // 7d: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 82: invokestatic org/lwjgl/glfw/GLFW.glfwGetWindowAttrib (JI)I
      // 85: aload 3
      // 86: ifnull 9c
      // 89: goto 90
      // 8c: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8f: athrow
      // 90: bipush 1
      // 91: goto 98
      // 94: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 97: athrow
      // 98: if_icmpne 9f
      // 9b: bipush 1
      // 9c: goto a0
      // 9f: bipush 0
      // a0: ireturn
   }

   private void che() {
      int var1 = this.chn();
      int var2 = this.cho();
      this.chf(var1, var2);
   }

   private void chq(long param1, GLCapabilities param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 8534734215793
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0c: astore 6
      // 0e: aload 6
      // 10: ifnull 2f
      // 13: lload 1
      // 14: lconst_0
      // 15: lcmp
      // 16: ifeq 2b
      // 19: goto 20
      // 1c: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: lload 1
      // 21: invokestatic org/lwjgl/glfw/GLFW.glfwMakeContextCurrent (J)V
      // 24: goto 2b
      // 27: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2a: athrow
      // 2b: aload 3
      // 2c: invokestatic org/lwjgl/opengl/GL.setCapabilities (Lorg/lwjgl/opengl/GLCapabilities;)V
      // 2f: return
   }

   private void chb(HWND var1) {
   }

   private int cho() {
      int[] var1 = new int[1];
      int[] var2 = new int[1];
      GLFW.glfwGetWindowPos(this.chp(), var1, var2);
      return var2[0];
   }

   private void chk() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 63607368367459
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 28
      // 11: getfield sixtwo/lP.kwzfa Z
      // 14: ifeq 23
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: return
      // 1f: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 22: athrow
      // 23: aload 0
      // 24: invokevirtual sixtwo/lP.chm ()V
      // 27: aload 0
      // 28: bipush 1
      // 29: putfield sixtwo/lP.kwzfa Z
      // 2c: return
   }

   private long chp() {
      return ((WindowAccessor)rD.dlmvG.method_22683()).getHandle();
   }

   private static String cht(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 23715;
      if (QsknF[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])kkDgQ.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kkDgQ.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/lP", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = Jzazp[var5].getBytes("ISO-8859-1");
         QsknF[var5] = chs(((Cipher)var4[0]).doFinal(var9));
      }

      return QsknF[var5];
   }

   private int chg() {
      return Math.max(1, rD.dlmvG.method_22683().method_4480() + this.IUKmP * 2);
   }

   private int chn() {
      int[] var1 = new int[1];
      int[] var2 = new int[1];
      GLFW.glfwGetWindowPos(this.chp(), var1, var2);
      return var1[0];
   }

   private void chd(HWND var1) {
      try {
         jm$tP var2 = new jm$tP();
         var2.rBxXl = new DWORD(1L);
         var2.sYiMT = true;
         var2.SXjPG = null;
         var2.frouI = false;
         var2.write();
         jm$tQ.nQOKr.DwmEnableBlurBehindWindow(var1, var2).intValue();
      } catch (Throwable var3) {
      }
   }

   private int chi() {
      long var1 = kNCTj ^ 2250649893143L;

      try {
         if (rt.dju() == PlatformEnum.WINDOWS) {
            return 1;
         }
      } catch (MatchException var3) {
         throw chr(var3);
      }

      return 0;
   }

   private static int chw(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 1724;
      if (Vgibd[var3] == null) {
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
         long var5 = KaxKL[var3];
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
         Object[] var9 = (Object[])sFkGh.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               sFkGh.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/lP", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         Vgibd[var3] = var15;
      }

      return Vgibd[var3];
   }

   private static int chx(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = chw(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private int chh() {
      return Math.max(1, rD.dlmvG.method_22683().method_4507() + this.IUKmP * 2);
   }

   private static Object chu(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = cht(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private boolean chc(HWND param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 33874446305081
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 4
      // 0d: new sixtwo/jm$tS
      // 10: dup
      // 11: invokespecial sixtwo/jm$tS.<init> ()V
      // 14: astore 5
      // 16: aload 5
      // 18: sipush 11204
      // 1b: ldc2_w 6465615421656155354
      // 1e: lload 2
      // 1f: lxor
      // 20: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 25: putfield sixtwo/jm$tS.aaeEj I
      // 28: aload 5
      // 2a: sipush 17984
      // 2d: ldc2_w 8769378453216045397
      // 30: lload 2
      // 31: lxor
      // 32: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 37: putfield sixtwo/jm$tS.oDYGJ I
      // 3a: aload 5
      // 3c: bipush 0
      // 3d: putfield sixtwo/jm$tS.ycxcQ I
      // 40: aload 5
      // 42: bipush 0
      // 43: putfield sixtwo/jm$tS.GOmgg I
      // 46: aload 5
      // 48: invokevirtual sixtwo/jm$tS.write ()V
      // 4b: new sixtwo/jm$tO
      // 4e: dup
      // 4f: invokespecial sixtwo/jm$tO.<init> ()V
      // 52: astore 6
      // 54: aload 6
      // 56: sipush 15228
      // 59: ldc2_w 2170271755008693355
      // 5c: lload 2
      // 5d: lxor
      // 5e: invokedynamic q (IJ)I bsm=sixtwo/lP.chy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 63: putfield sixtwo/jm$tO.pqLqB I
      // 66: aload 6
      // 68: aload 5
      // 6a: invokevirtual sixtwo/jm$tS.getPointer ()Lcom/sun/jna/Pointer;
      // 6d: putfield sixtwo/jm$tO.QEuUZ Lcom/sun/jna/Pointer;
      // 70: aload 6
      // 72: aload 5
      // 74: invokevirtual sixtwo/jm$tS.size ()I
      // 77: putfield sixtwo/jm$tO.zJceD I
      // 7a: aload 6
      // 7c: invokevirtual sixtwo/jm$tO.write ()V
      // 7f: sipush 11842
      // 82: ldc2_w 2289478678270679881
      // 85: lload 2
      // 86: lxor
      // 87: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/lP.chv (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8c: invokestatic com/sun/jna/NativeLibrary.getInstance (Ljava/lang/String;)Lcom/sun/jna/NativeLibrary;
      // 8f: sipush 26949
      // 92: ldc2_w 548623529774439503
      // 95: lload 2
      // 96: lxor
      // 97: invokedynamic i (IJ)Ljava/lang/String; bsm=sixtwo/lP.chv (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 9c: invokevirtual com/sun/jna/NativeLibrary.getFunction (Ljava/lang/String;)Lcom/sun/jna/Function;
      // 9f: astore 7
      // a1: aload 7
      // a3: ldc java/lang/Integer
      // a5: bipush 2
      // a6: anewarray 4
      // a9: dup
      // aa: bipush 0
      // ab: aload 1
      // ac: aastore
      // ad: dup
      // ae: bipush 1
      // af: aload 6
      // b1: aastore
      // b2: invokevirtual com/sun/jna/Function.invoke (Ljava/lang/Class;[Ljava/lang/Object;)Ljava/lang/Object;
      // b5: checkcast java/lang/Integer
      // b8: astore 8
      // ba: aload 8
      // bc: aload 4
      // be: ifnull cd
      // c1: ifnull eb
      // c4: goto cb
      // c7: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ca: athrow
      // cb: aload 8
      // cd: invokevirtual java/lang/Integer.intValue ()I
      // d0: aload 4
      // d2: ifnull e8
      // d5: bipush 1
      // d6: if_icmpne eb
      // d9: goto e0
      // dc: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // df: athrow
      // e0: bipush 1
      // e1: goto e8
      // e4: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // e7: athrow
      // e8: goto ec
      // eb: bipush 0
      // ec: ireturn
      // ed: astore 5
      // ef: bipush 0
      // f0: ireturn
   }

   private void chm() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/lP.kNCTj J
      // 03: ldc2_w 4206813592830
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/lR.ciF ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 3f
      // 11: getfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 14: ifnull 37
      // 17: goto 1e
      // 1a: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: getstatic com/sun/jna/platform/win32/User32.INSTANCE Lcom/sun/jna/platform/win32/User32;
      // 21: aload 0
      // 22: getfield sixtwo/lP.qTwYj Lcom/sun/jna/platform/win32/WinDef$HWND;
      // 25: bipush 4
      // 26: invokeinterface com/sun/jna/platform/win32/User32.ShowWindow (Lcom/sun/jna/platform/win32/WinDef$HWND;I)Z 3
      // 2b: pop
      // 2c: aload 3
      // 2d: ifnonnull 45
      // 30: goto 37
      // 33: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 36: athrow
      // 37: aload 0
      // 38: goto 3f
      // 3b: invokestatic sixtwo/lP.chr (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: getfield sixtwo/lP.elAyx J
      // 42: invokestatic org/lwjgl/glfw/GLFW.glfwShowWindow (J)V
      // 45: return
   }

   private static CallSite chv(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("chu".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/lP" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
