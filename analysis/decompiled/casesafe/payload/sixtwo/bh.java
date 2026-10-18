package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class bh extends aj {
   private J uWBQz;
   private final ab aYcjN;
   private final ab GluTT;
   private final rk qNHZV;
   private final rk ENqLr;
   private final gg puHqY;
   private static long iyHFM;
   private static String[] VhSun;
   private static String[] GKLQn;
   private static Map YBvpH;
   private static long[] lTlRr;
   private static Integer[] dpRyX;
   private static Map DUMCq;

   public bh(float param1, float param2, float param3, gg param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bh.iyHFM J
      // 003: ldc2_w 86031097531256
      // 006: lxor
      // 007: lstore 5
      // 009: aload 0
      // 00a: fload 1
      // 00b: fload 2
      // 00c: ldc 110.0
      // 00e: ldc 80.0
      // 010: invokespecial sixtwo/aj.<init> (FFFF)V
      // 013: aload 0
      // 014: fload 3
      // 015: putfield sixtwo/bh.IzFhM F
      // 018: aload 0
      // 019: aload 4
      // 01b: putfield sixtwo/bh.puHqY Lsixtwo/gg;
      // 01e: aload 0
      // 01f: new sixtwo/ab
      // 022: dup
      // 023: aload 4
      // 025: invokevirtual sixtwo/gg.bai ()Z
      // 028: invokespecial sixtwo/ab.<init> (Z)V
      // 02b: aload 4
      // 02d: invokedynamic run (Lsixtwo/gg;)Lsixtwo/aa; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lsixtwo/ab;)V, sixtwo/bh.Dm (Lsixtwo/gg;Lsixtwo/ab;)V, (Lsixtwo/ab;)V ]
      // 032: invokevirtual sixtwo/ab.li (Lsixtwo/aa;)Lsixtwo/ab;
      // 035: putfield sixtwo/bh.GluTT Lsixtwo/ab;
      // 038: aload 0
      // 039: new sixtwo/ab
      // 03c: dup
      // 03d: aload 4
      // 03f: invokevirtual sixtwo/gg.baj ()Z
      // 042: invokespecial sixtwo/ab.<init> (Z)V
      // 045: aload 4
      // 047: invokedynamic run (Lsixtwo/gg;)Lsixtwo/aa; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Lsixtwo/ab;)V, sixtwo/bh.Dl (Lsixtwo/gg;Lsixtwo/ab;)V, (Lsixtwo/ab;)V ]
      // 04c: invokevirtual sixtwo/ab.li (Lsixtwo/aa;)Lsixtwo/ab;
      // 04f: putfield sixtwo/bh.aYcjN Lsixtwo/ab;
      // 052: invokestatic sixtwo/bg.Dd ()I
      // 055: aload 0
      // 056: new sixtwo/rk
      // 059: dup
      // 05a: sipush 26729
      // 05d: ldc2_w 8605557674067646733
      // 060: lload 5
      // 062: lxor
      // 063: invokedynamic s (IJ)I bsm=sixtwo/bh.Du (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 068: aload 0
      // 069: getfield sixtwo/bh.BcpIo F
      // 06c: invokespecial sixtwo/rk.<init> (IF)V
      // 06f: getstatic sixtwo/rj.NJlxm Lsixtwo/rj;
      // 072: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 075: putfield sixtwo/bh.ENqLr Lsixtwo/rk;
      // 078: istore 7
      // 07a: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 07d: ldc 7.0
      // 07f: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 082: astore 8
      // 084: aload 4
      // 086: invokevirtual sixtwo/gg.baf ()Lsixtwo/gc;
      // 089: astore 9
      // 08b: aload 9
      // 08d: invokevirtual sixtwo/gc.aZf ()Z
      // 090: iload 7
      // 092: ifne 0b9
      // 095: ifeq 0b4
      // 098: goto 09f
      // 09b: invokestatic sixtwo/bh.Dn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 09e: athrow
      // 09f: sipush 21931
      // 0a2: ldc2_w 6967835068272759315
      // 0a5: lload 5
      // 0a7: lxor
      // 0a8: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/bh.Dr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0ad: goto 0bc
      // 0b0: invokestatic sixtwo/bh.Dn (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0b3: athrow
      // 0b4: aload 9
      // 0b6: invokevirtual sixtwo/gc.aZh ()I
      // 0b9: invokestatic sixtwo/jb.byM (I)Ljava/lang/String;
      // 0bc: astore 10
      // 0be: aload 8
      // 0c0: aload 10
      // 0c2: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 0c5: ldc 7.0
      // 0c7: fadd
      // 0c8: fstore 11
      // 0ca: aload 0
      // 0cb: new sixtwo/rk
      // 0ce: dup
      // 0cf: sipush 11925
      // 0d2: ldc2_w 8097700931625295856
      // 0d5: lload 5
      // 0d7: lxor
      // 0d8: invokedynamic s (IJ)I bsm=sixtwo/bh.Du (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0dd: fload 11
      // 0df: invokespecial sixtwo/rk.<init> (IF)V
      // 0e2: getstatic sixtwo/rj.UPXqT Lsixtwo/rj;
      // 0e5: invokevirtual sixtwo/rk.dhs (Lsixtwo/rj;)Lsixtwo/rk;
      // 0e8: putfield sixtwo/bh.qNHZV Lsixtwo/rk;
      // 0eb: aload 0
      // 0ec: ldc 110.0
      // 0ee: aload 0
      // 0ef: getfield sixtwo/bh.bQoPs F
      // 0f2: aload 8
      // 0f4: sipush 16278
      // 0f7: ldc2_w 2687765262847359017
      // 0fa: lload 5
      // 0fc: lxor
      // 0fd: invokedynamic y (IJ)Ljava/lang/String; bsm=sixtwo/bh.Dr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 102: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 105: fadd
      // 106: aload 0
      // 107: getfield sixtwo/bh.bQoPs F
      // 10a: fadd
      // 10b: fload 11
      // 10d: fadd
      // 10e: aload 0
      // 10f: getfield sixtwo/bh.bQoPs F
      // 112: fadd
      // 113: invokestatic java/lang/Math.max (FF)F
      // 116: putfield sixtwo/bh.BcpIo F
      // 119: aload 0
      // 11a: bipush 1
      // 11b: putfield sixtwo/bh.FHbTC Z
      // 11e: return
   }

   static {
      Loader.doInit(bh.class);
      _e08a76d36db0a6ffacf3e754f4e33af5();
   }

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   private static native void _e08a76d36db0a6ffacf3e754f4e33af5();

   private static native int Dt(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String Dp(int var0, long var1);

   private static native Object Dq(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void Dj(double var1, double var3);

   private static native MatchException Dn(MatchException var0);

   private static native String Do(byte[] var0);

   private static native CallSite Dr(Lookup var0, String var1, MethodType var2);

   private static native int Ds(int var0, long var1);

   private static native CallSite Du(Lookup var0, String var1, MethodType var2);
}
