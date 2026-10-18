package sixtwo;

import native.Loader;

public class nu {
   private final ny gDkRl;
   private final long SstgA;
   private final long bRkjV;
   private final nf tzqLw;
   private static long CQkKj;

   public nu(ny param1, long param2, nf param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/nu.CQkKj J
      // 03: ldc2_w 87007449124474
      // 06: lxor
      // 07: lstore 5
      // 09: aload 0
      // 0a: invokespecial java/lang/Object.<init> ()V
      // 0d: aload 0
      // 0e: aload 1
      // 0f: putfield sixtwo/nu.gDkRl Lsixtwo/ny;
      // 12: aload 0
      // 13: lload 2
      // 14: putfield sixtwo/nu.SstgA J
      // 17: invokestatic sixtwo/nx.cwi ()Z
      // 1a: aload 0
      // 1b: aload 4
      // 1d: putfield sixtwo/nu.tzqLw Lsixtwo/nf;
      // 20: istore 7
      // 22: aload 0
      // 23: invokestatic sixtwo/nQ.cyR ()I
      // 26: i2l
      // 27: putfield sixtwo/nu.bRkjV J
      // 2a: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 2d: ifnonnull 48
      // 30: iload 7
      // 32: ifeq 44
      // 35: goto 3c
      // 38: invokestatic sixtwo/nu.cvW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3b: athrow
      // 3c: bipush 0
      // 3d: goto 45
      // 40: invokestatic sixtwo/nu.cvW (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 43: athrow
      // 44: bipush 1
      // 45: invokestatic sixtwo/nx.cwh (Z)V
      // 48: return
   }

   static {
      Loader.doInit(nu.class);
      _d670a9340e999c38d08d3f1f7820fa9c();
   }

   private static native MatchException cvW(MatchException var0);

   public native boolean cvQ(nK var1);

   private native boolean cvR();

   public native ny cvS();

   public native long cvT();

   public native nf cvV();

   public native long cvU();

   private static native void _d670a9340e999c38d08d3f1f7820fa9c();
}
