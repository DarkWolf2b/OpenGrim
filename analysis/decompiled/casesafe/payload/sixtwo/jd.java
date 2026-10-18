package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.regex.Pattern;
import native.Loader;
import net.minecraft.class_7204;

public class jd {
   public static Pattern dCIsP;
   private static long oOIqE;
   private static String[] qWqsn;
   private static String[] BrPpj;
   private static Map wIsWz;
   private static long[] neBSq;
   private static Integer[] BaTRC;
   private static Map CkeqV;

   static {
      Loader.doInit(jd.class);
      _611ca11c3ecf910b3746907091198113();
   }

   private static native CallSite bAt(Lookup var0, String var1, MethodType var2);

   public static native boolean bAn(String var0);

   public static native byte[] bAj(byte[] var0);

   private static native CallSite bAw(Lookup var0, String var1, MethodType var2);

   private static native String bAr(int var0, long var1);

   public static native String bAg(byte[] var0) throws Exception;

   private static native Throwable bAp(Throwable var0);

   private static native String bAq(byte[] var0);

   private static native int bAu(int var0, long var1);

   public static native String bAk();

   public static native byte[] bAe(byte[] var0, String var1);

   public static native String bAi(byte[] var0);

   public static String bAl() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jd.oOIqE J
      // 03: ldc2_w 87917970447335
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 11: astore 3
      // 12: astore 2
      // 13: aload 3
      // 14: ifnull 27
      // 17: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1a: invokevirtual net/minecraft/class_310.method_47392 ()Z
      // 1d: ifeq 39
      // 20: goto 27
      // 23: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 26: athrow
      // 27: sipush 4309
      // 2a: ldc2_w 3415637507769365452
      // 2d: lload 0
      // 2e: lxor
      // 2f: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/jd.bAt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 34: areturn
      // 35: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38: athrow
      // 39: aload 3
      // 3a: invokevirtual net/minecraft/class_634.method_45734 ()Lnet/minecraft/class_642;
      // 3d: astore 4
      // 3f: aload 4
      // 41: aload 2
      // 42: ifnull 6b
      // 45: ifnonnull 62
      // 48: goto 4f
      // 4b: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4e: athrow
      // 4f: sipush 27583
      // 52: ldc2_w 7597808096961890471
      // 55: lload 0
      // 56: lxor
      // 57: invokedynamic m (IJ)Ljava/lang/String; bsm=sixtwo/jd.bAt (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5c: astore 5
      // 5e: aload 2
      // 5f: ifnonnull 70
      // 62: aload 4
      // 64: goto 6b
      // 67: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6a: athrow
      // 6b: getfield net/minecraft/class_642.field_3761 Ljava/lang/String;
      // 6e: astore 5
      // 70: aload 5
      // 72: areturn
   }

   public static native boolean bAm(String var0);

   public static native String bAf(byte[] var0, String var1);

   private static native Object bAs(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int bAv(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native byte[] bAh(byte[] var0) throws Exception;

   public static void bAo(class_7204 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jd.oOIqE J
      // 03: ldc2_w 130271520085907
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0f: aload 3
      // 10: ifnull 2a
      // 13: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 16: ifnull 3b
      // 19: goto 20
      // 1c: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 23: goto 2a
      // 26: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 29: athrow
      // 2a: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 2d: aload 3
      // 2e: ifnull 42
      // 31: ifnonnull 3c
      // 34: goto 3b
      // 37: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3a: athrow
      // 3b: return
      // 3c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 3f: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 42: checkcast mixin/accessors/ClientLevelAccessor
      // 45: invokeinterface mixin/accessors/ClientLevelAccessor.getBlockStatePredictionHandler ()Lnet/minecraft/class_7202; 1
      // 4a: invokevirtual net/minecraft/class_7202.method_41937 ()Lnet/minecraft/class_7202;
      // 4d: astore 4
      // 4f: aload 4
      // 51: invokevirtual net/minecraft/class_7202.method_41942 ()I
      // 54: istore 5
      // 56: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 59: invokevirtual net/minecraft/class_310.method_1562 ()Lnet/minecraft/class_634;
      // 5c: aload 0
      // 5d: iload 5
      // 5f: invokeinterface net/minecraft/class_7204.predict (I)Lnet/minecraft/class_2596; 2
      // 64: invokevirtual net/minecraft/class_634.method_52787 (Lnet/minecraft/class_2596;)V
      // 67: aload 4
      // 69: aload 3
      // 6a: ifnull 72
      // 6d: ifnull 9e
      // 70: aload 4
      // 72: invokevirtual net/minecraft/class_7202.close ()V
      // 75: goto 9e
      // 78: astore 5
      // 7a: aload 4
      // 7c: aload 3
      // 7d: ifnull 8c
      // 80: ifnull 9b
      // 83: goto 8a
      // 86: invokestatic sixtwo/jd.bAp (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 89: athrow
      // 8a: aload 4
      // 8c: invokevirtual net/minecraft/class_7202.close ()V
      // 8f: goto 9b
      // 92: astore 6
      // 94: aload 5
      // 96: aload 6
      // 98: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 9b: aload 5
      // 9d: athrow
      // 9e: return
   }

   private static native void _611ca11c3ecf910b3746907091198113();
}
