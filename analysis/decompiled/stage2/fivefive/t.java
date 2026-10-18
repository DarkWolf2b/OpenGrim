package fivefive;

import natives.Loader;

public class t {
   private final byte[] LWCBx;
   private final String KPjKn;
   private static boolean WdoId;

   public t(byte[] param1, String param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: invokestatic fivefive/t.dt ()Z
      // 03: aload 0
      // 04: invokespecial java/lang/Object.<init> ()V
      // 07: istore 3
      // 08: aload 0
      // 09: aload 1
      // 0a: putfield fivefive/t.LWCBx [B
      // 0d: aload 0
      // 0e: aload 2
      // 0f: putfield fivefive/t.KPjKn Ljava/lang/String;
      // 12: iload 3
      // 13: ifeq 2f
      // 16: invokestatic fivefive/C.eP ()Z
      // 19: ifne 2b
      // 1c: goto 23
      // 1f: invokestatic fivefive/t.du (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 22: athrow
      // 23: bipush 0
      // 24: goto 2c
      // 27: invokestatic fivefive/t.du (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 2a: athrow
      // 2b: bipush 1
      // 2c: invokestatic fivefive/C.eN (Z)V
      // 2f: return
   }

   static {
      Loader.doInit(t.class);
      _8432b8e22c62b86ce805d1704480aced();
   }

   public native byte[] dp(Object[] var1);

   public static native boolean dt();

   public static native boolean ds();

   public native String dq(Object[] var1);

   private static native void _8432b8e22c62b86ce805d1704480aced();

   private static native RuntimeException du(RuntimeException var0);

   public static native void dr(boolean var0);
}
