package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class iq {
   private in lsCzm;
   private final ip Logfc;
   private final il dgdgv;
   private final iv RBLhk;
   private final String PDCrp;
   private boolean iYzgC;
   private static boolean xZxfr;
   private static long yDzoy;
   private static String[] unsdy;
   private static String[] MFDwi;
   private static Map Rubgn;

   public iq(il param1, iv param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iq.yDzoy J
      // 03: ldc2_w 83205355987325
      // 06: lxor
      // 07: lstore 3
      // 08: aload 0
      // 09: invokespecial java/lang/Object.<init> ()V
      // 0c: invokestatic sixtwo/iq.bmv ()Z
      // 0f: aload 0
      // 10: getstatic sixtwo/in.FBjZE Lsixtwo/in;
      // 13: putfield sixtwo/iq.lsCzm Lsixtwo/in;
      // 16: istore 5
      // 18: aload 0
      // 19: sipush 6878
      // 1c: ldc2_w 5957666428788367966
      // 1f: lload 3
      // 20: lxor
      // 21: invokedynamic o (IJ)Ljava/lang/String; bsm=sixtwo/iq.bmA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 26: putfield sixtwo/iq.PDCrp Ljava/lang/String;
      // 29: aload 0
      // 2a: bipush 0
      // 2b: putfield sixtwo/iq.iYzgC Z
      // 2e: aload 0
      // 2f: aload 1
      // 30: putfield sixtwo/iq.dgdgv Lsixtwo/il;
      // 33: aload 0
      // 34: aload 2
      // 35: putfield sixtwo/iq.RBLhk Lsixtwo/iv;
      // 38: aload 0
      // 39: new sixtwo/ip
      // 3c: dup
      // 3d: invokespecial sixtwo/ip.<init> ()V
      // 40: putfield sixtwo/iq.Logfc Lsixtwo/ip;
      // 43: aload 2
      // 44: aload 0
      // 45: invokedynamic run (Lsixtwo/iq;)Ljava/lang/Runnable; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ ()V, sixtwo/iq.blH ()V, ()V ]
      // 4a: invokevirtual sixtwo/iv.bnI (Ljava/lang/Runnable;)V
      // 4d: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 50: ifnonnull 6b
      // 53: iload 5
      // 55: ifeq 67
      // 58: goto 5f
      // 5b: invokestatic sixtwo/iq.bmw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: bipush 0
      // 60: goto 68
      // 63: invokestatic sixtwo/iq.bmw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 66: athrow
      // 67: bipush 1
      // 68: invokestatic sixtwo/iq.bmt (Z)V
      // 6b: return
   }

   static {
      Loader.doInit(iq.class);
      _d9ce10a827bf62b322c566465ff2cb7c();
   }

   public native void blX(boolean var1);

   public native in blM(in var1);

   public native String bmb();

   public native il blZ();

   public native CompletableFuture<Boolean> blQ(in var1);

   public native void blK(in var1);

   private static native CallSite bmA(Lookup var0, String var1, MethodType var2);

   public native CompletableFuture<Boolean> blO(in var1);

   private native String blS(String var1);

   private native void blH();

   public native void blW(in var1);

   public static native boolean bmu();

   public native CompletableFuture<ir> blN(int[] var1);

   private static native String bmy(int var0, long var1);

   private static native Object bmz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException bmw(MatchException var0);

   public native boolean blL(in var1);

   private native boolean blT(String var1);

   private static native String bmx(byte[] var0);

   public native CompletableFuture<List<ir>> blG();

   private native void blI(List<ir> var1);

   private native void blJ();

   public native ip blY();

   public native boolean bmc();

   private native im blV(im var1);

   public static native boolean bmv();

   private native in blU(String var1);

   public native iv bma();

   public static native void bmt(boolean var0);

   public native CompletableFuture<Boolean> blP(String var1);

   private static native void _d9ce10a827bf62b322c566465ff2cb7c();

   public native in bmd();

   public native im blR(float var1);
}
