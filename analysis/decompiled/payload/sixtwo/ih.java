package sixtwo;

import java.util.List;
import java.util.Map;
import native.Loader;

public class ih {
   private final Map<String, ig> WUEfC;
   private final mu<bb<ig>> JopFf;
   private final mu<bb<ig>> XGrSW;
   private final List<ig> RmnBU;
   private static long UZuoX;

   public ih() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ih.UZuoX J
      // 03: ldc2_w 77264517612871
      // 06: lxor
      // 07: lstore 1
      // 08: aload 0
      // 09: invokespecial java/lang/Object.<init> ()V
      // 0c: invokestatic sixtwo/ii.bjT ()Z
      // 0f: aload 0
      // 10: new java/util/concurrent/ConcurrentHashMap
      // 13: dup
      // 14: invokespecial java/util/concurrent/ConcurrentHashMap.<init> ()V
      // 17: putfield sixtwo/ih.WUEfC Ljava/util/Map;
      // 1a: istore 3
      // 1b: aload 0
      // 1c: new sixtwo/mu
      // 1f: dup
      // 20: invokespecial sixtwo/mu.<init> ()V
      // 23: putfield sixtwo/ih.JopFf Lsixtwo/mu;
      // 26: aload 0
      // 27: new sixtwo/mu
      // 2a: dup
      // 2b: invokespecial sixtwo/mu.<init> ()V
      // 2e: putfield sixtwo/ih.XGrSW Lsixtwo/mu;
      // 31: aload 0
      // 32: getstatic sixtwo/ig.PtFoz Lsixtwo/ig;
      // 35: getstatic sixtwo/ig.gsTXO Lsixtwo/ig;
      // 38: getstatic sixtwo/ig.hzckK Lsixtwo/ig;
      // 3b: getstatic sixtwo/ig.eaYCr Lsixtwo/ig;
      // 3e: getstatic sixtwo/ig.pHENl Lsixtwo/ig;
      // 41: getstatic sixtwo/ig.WSWRe Lsixtwo/ig;
      // 44: getstatic sixtwo/ig.OetCB Lsixtwo/ig;
      // 47: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 4a: putfield sixtwo/ih.RmnBU Ljava/util/List;
      // 4d: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 50: ifnonnull 6a
      // 53: iload 3
      // 54: ifeq 66
      // 57: goto 5e
      // 5a: invokestatic sixtwo/ih.biR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: bipush 0
      // 5f: goto 67
      // 62: invokestatic sixtwo/ih.biR (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 65: athrow
      // 66: bipush 1
      // 67: invokestatic sixtwo/ii.bjS (Z)V
      // 6a: return
   }

   static {
      Loader.doInit(ih.class);
      _40ff4fd37e63ca4e3dd1b28d8fef6d7f();
   }

   public native int biK();

   private static native MatchException biR(MatchException var0);

   public native Map<String, ig> biN();

   public native mu<bb<ig>> biP();

   public native List<ig> biQ();

   public native ij biL(String var1);

   public native void biM(ig var1);

   public native mu<bb<ig>> biO();

   private static native void _40ff4fd37e63ca4e3dd1b28d8fef6d7f();
}
