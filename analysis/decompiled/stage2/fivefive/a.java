package fivefive;

import natives.Loader;

public class a {
   private int sIfCj;
   private final int[] BDRpB;
   private int xLuKg;
   public final b JvwZu;
   private static int[] blFBZ;
   private static long IOEvS;
   private static long sXPxP;

   private native void a(Object[] var1);

   private native int b(Object[] var1);

   private native int[] c(Object[] var1);

   public a(int param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: aload 0
      // 01: invokespecial java/lang/Object.<init> ()V
      // 04: invokestatic fivefive/d.t ()[Lfivefive/C;
      // 07: aload 0
      // 08: bipush 0
      // 09: putfield fivefive/a.sIfCj I
      // 0c: aload 0
      // 0d: bipush -1
      // 0e: putfield fivefive/a.xLuKg I
      // 11: astore 2
      // 12: aload 0
      // 13: iload 1
      // 14: newarray 10
      // 16: putfield fivefive/a.BDRpB [I
      // 19: aload 0
      // 1a: new fivefive/b
      // 1d: dup
      // 1e: invokespecial fivefive/b.<init> ()V
      // 21: putfield fivefive/a.JvwZu Lfivefive/b;
      // 24: aload 2
      // 25: ifnull 41
      // 28: invokestatic fivefive/C.eO ()Z
      // 2b: ifne 3d
      // 2e: goto 35
      // 31: invokestatic fivefive/a.i (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 34: athrow
      // 35: bipush 0
      // 36: goto 3e
      // 39: invokestatic fivefive/a.i (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 3c: athrow
      // 3d: bipush 1
      // 3e: invokestatic fivefive/C.eN (Z)V
      // 41: return
   }

   public native int d(Object[] var1);

   public native int e(Object[] var1);

   public static native void g(int[] var0);

   public static native int[] h();

   static {
      Loader.doInit(a.class);
      _4d2b676d7491df3a1194c0b69e887685();
   }

   private static native RuntimeException i(RuntimeException var0);

   private static native void _4d2b676d7491df3a1194c0b69e887685();
}
