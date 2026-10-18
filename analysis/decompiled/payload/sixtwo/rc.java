package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public final class rc {
   private final int exHvn;
   private final int PyCSl;
   private final int[] mNMrC;
   private int grmLL;
   private static long ChNvS;
   private static String[] KvKGW;
   private static String[] vvkyJ;
   private static Map RtYsp;

   public native boolean der(int var1);

   public rc(int param1, int param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/rc.ChNvS J
      // 03: ldc2_w 113886349343905
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/re.dfh ()[I
      // 0b: aload 0
      // 0c: invokespecial java/lang/Object.<init> ()V
      // 0f: astore 5
      // 11: iload 1
      // 12: aload 5
      // 14: ifnull 3b
      // 17: ifgt 3a
      // 1a: goto 21
      // 1d: invokestatic sixtwo/rc.dev (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 20: athrow
      // 21: new java/lang/IllegalArgumentException
      // 24: dup
      // 25: sipush 1955
      // 28: ldc2_w 8952911733156793919
      // 2b: lload 3
      // 2c: lxor
      // 2d: invokedynamic v (IJ)Ljava/lang/String; bsm=sixtwo/rc.dez (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 32: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 35: athrow
      // 36: invokestatic sixtwo/rc.dev (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 39: athrow
      // 3a: iload 2
      // 3b: ifgt 57
      // 3e: new java/lang/IllegalArgumentException
      // 41: dup
      // 42: sipush 22334
      // 45: ldc2_w 1900877597095206561
      // 48: lload 3
      // 49: lxor
      // 4a: invokedynamic v (IJ)Ljava/lang/String; bsm=sixtwo/rc.dez (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4f: invokespecial java/lang/IllegalArgumentException.<init> (Ljava/lang/String;)V
      // 52: athrow
      // 53: invokestatic sixtwo/rc.dev (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 56: athrow
      // 57: aload 0
      // 58: iload 1
      // 59: putfield sixtwo/rc.exHvn I
      // 5c: aload 0
      // 5d: iload 2
      // 5e: putfield sixtwo/rc.PyCSl I
      // 61: aload 0
      // 62: iload 1
      // 63: iload 2
      // 64: imul
      // 65: newarray 10
      // 67: putfield sixtwo/rc.mNMrC [I
      // 6a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 6d: ifnonnull 7d
      // 70: bipush 1
      // 71: newarray 10
      // 73: invokestatic sixtwo/re.dfg ([I)V
      // 76: goto 7d
      // 79: invokestatic sixtwo/rc.dev (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException;
      // 7c: athrow
      // 7d: return
   }

   static {
      Loader.doInit(rc.class);
      _d028f71408c9f836a0b711b98a80110d();
   }

   private static native IllegalArgumentException dev(IllegalArgumentException var0);

   public native void des();

   public native int dep(int var1);

   public native void det(int[] var1);

   private static native void _d028f71408c9f836a0b711b98a80110d();

   private static native Object dey(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native int deu();

   private static native String dex(int var0, long var1);

   private static native CallSite dez(Lookup var0, String var1, MethodType var2);

   public native boolean deq();

   private static native String dew(byte[] var0);
}
