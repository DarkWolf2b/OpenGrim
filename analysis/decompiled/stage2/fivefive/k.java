package fivefive;

import java.io.InputStream;
import java.net.URL;
import java.net.URLConnection;
import natives.Loader;

public class k extends URLConnection {
   private final Object anLuz;
   private static C[] VtRSJ;

   public k(URL param1, Object param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: aload 0
      // 01: aload 1
      // 02: invokespecial java/net/URLConnection.<init> (Ljava/net/URL;)V
      // 05: invokestatic fivefive/j.bd ()Ljava/lang/String;
      // 08: aload 0
      // 09: aload 2
      // 0a: putfield fivefive/k.anLuz Ljava/lang/Object;
      // 0d: astore 3
      // 0e: aload 3
      // 0f: ifnull 2b
      // 12: invokestatic fivefive/C.eP ()Z
      // 15: ifne 27
      // 18: goto 1f
      // 1b: invokestatic fivefive/k.bh (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 1e: athrow
      // 1f: bipush 0
      // 20: goto 28
      // 23: invokestatic fivefive/k.bh (Ljava/lang/RuntimeException;)Ljava/lang/RuntimeException;
      // 26: athrow
      // 27: bipush 1
      // 28: invokestatic fivefive/C.eN (Z)V
      // 2b: return
   }

   static {
      Loader.doInit(k.class);
      _bf4a93797766b4536191964d5dece71f();
   }

   @Override
   public native void connect();

   @Override
   public native InputStream getInputStream();

   private static native RuntimeException bh(RuntimeException var0);

   public static native C[] bg();

   public static native void bf(C[] var0);

   private static native void _bf4a93797766b4536191964d5dece71f();
}
