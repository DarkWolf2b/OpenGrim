package sixtwo;

import com.mojang.datafixers.util.Pair;
import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.net.URI;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpResponse.BodyHandlers;
import java.time.Duration;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import net.minecraft.class_1011;
import net.minecraft.class_2960;
import net.minecraft.class_742;

public class qG {
   private final Map<String, Pair<String, Integer>> UopWF;
   private final Map<String, List<class_2960>> jDwdU;
   private final Map<String, qz> egLkf;
   private final Map<String, CompletableFuture<Void>> ENods;
   private byte[] odGBQ;
   private volatile qz FTUdq;
   private static boolean Rqahi;
   private static long qFzUN;
   private static String[] FHYfw;
   private static String[] TuhKH;
   private static Map jQdvd;
   private static long[] Paxlo;
   private static Integer[] NneDD;
   private static Map qVsnc;
   private static long nzygq;

   public qG() {
      long var1 = qFzUN ^ 86255826318546L;
      super();
      this.UopWF = new ConcurrentHashMap<>();
      this.jDwdU = new ConcurrentHashMap<>();
      this.egLkf = new ConcurrentHashMap<>();
      this.ENods = new ConcurrentHashMap<>();

      try {
         HttpRequest var3 = HttpRequest.newBuilder()
            .uri(URI.create(mr.clQ(daH<"c">(9737, 69902671628384855L ^ var1)).toString()))
            .header(daH<"c">(27861, 1926343390919422088L ^ var1), daH<"c">(31931, 8325423172938555620L ^ var1) + ry.dkB().dkJ())
            .timeout(Duration.ofSeconds(nzygq))
            .build();
         HttpResponse var4 = oe.cBX(var3, BodyHandlers.ofByteArray());

         try {
            if (var4.statusCode() == daK<"x">(15144, 3822718228625346727L ^ var1)) {
               this.odGBQ = (byte[])var4.body();
            }
         } catch (Exception var5) {
            throw daD(var5);
         }
      } catch (Exception var6) {
      }
   }

   static {
      Loader.doInit(qG.class);
      _1a0104b3d4a302ac89dcc809aa4dc02f();
   }

   private native void dap(String var1, String var2) throws IOException;

   public class_2960 daj(class_742 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qG.qFzUN J
      // 03: ldc2_w 47592981747561
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/qG.daC ()Z
      // 0b: istore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 13: iload 4
      // 15: ifeq 29
      // 18: ifnonnull 28
      // 1b: goto 22
      // 1e: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: aconst_null
      // 23: areturn
      // 24: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual net/minecraft/class_742.method_5477 ()Lnet/minecraft/class_2561;
      // 2c: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 31: astore 5
      // 33: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 36: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 39: invokevirtual net/minecraft/class_746.method_5477 ()Lnet/minecraft/class_2561;
      // 3c: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 41: astore 6
      // 43: aload 5
      // 45: aload 6
      // 47: invokevirtual java/lang/String.equals (Ljava/lang/Object;)Z
      // 4a: ifeq 6b
      // 4d: aload 0
      // 4e: invokevirtual sixtwo/qG.dal ()Lnet/minecraft/class_2960;
      // 51: astore 7
      // 53: aload 7
      // 55: iload 4
      // 57: ifeq 75
      // 5a: ifnull 6b
      // 5d: goto 64
      // 60: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 63: athrow
      // 64: aload 7
      // 66: areturn
      // 67: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6a: athrow
      // 6b: aload 0
      // 6c: aload 5
      // 6e: invokevirtual sixtwo/qG.dak (Ljava/lang/String;)Lnet/minecraft/class_2960;
      // 71: astore 7
      // 73: aload 7
      // 75: iload 4
      // 77: ifeq 86
      // 7a: ifnull 87
      // 7d: goto 84
      // 80: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 83: athrow
      // 84: aload 7
      // 86: areturn
      // 87: aload 1
      // 88: invokevirtual net/minecraft/class_742.method_52814 ()Lnet/minecraft/class_8685;
      // 8b: invokevirtual net/minecraft/class_8685.comp_1627 ()Lnet/minecraft/class_12079$class_12081;
      // 8e: astore 8
      // 90: aload 8
      // 92: iload 4
      // 94: ifeq a3
      // 97: ifnull ab
      // 9a: goto a1
      // 9d: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a0: athrow
      // a1: aload 8
      // a3: invokeinterface net/minecraft/class_12079$class_12081.comp_3627 ()Lnet/minecraft/class_2960; 1
      // a8: goto ac
      // ab: aconst_null
      // ac: areturn
   }

   public static native boolean daB();

   public static native boolean daC();

   public native Map<String, Pair<String, Integer>> das();

   public native Map<String, List<class_2960>> dat();

   private static native CallSite daK(Lookup var0, String var1, MethodType var2);

   private class_2960 dal() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qG.qFzUN J
      // 03: ldc2_w 23745963638279
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/qG.daB ()Z
      // 0b: istore 3
      // 0c: aload 0
      // 0d: getfield sixtwo/qG.FTUdq Lsixtwo/qz;
      // 10: iload 3
      // 11: ifne 29
      // 14: ifnull 2f
      // 17: goto 1e
      // 1a: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d: athrow
      // 1e: aload 0
      // 1f: getfield sixtwo/qG.FTUdq Lsixtwo/qz;
      // 22: goto 29
      // 25: invokestatic sixtwo/qG.daD (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 28: athrow
      // 29: invokevirtual sixtwo/qz.cZk ()Lnet/minecraft/class_2960;
      // 2c: goto 30
      // 2f: aconst_null
      // 30: areturn
   }

   private static native CallSite daH(Lookup var0, String var1, MethodType var2);

   private native int[] dan(int[] var1);

   private native void daq(String var1, String var2) throws IOException;

   private static native Throwable daD(Throwable var0);

   private native void dao(String var1, String var2);

   public String dar(String var1) {
      long var2 = qFzUN ^ 62022553562530L;
      String var4 = var1.substring(var1.lastIndexOf(daK<"x">(13532, 856446169524241952L ^ var2)) + 1);
      return var4.substring(0, var4.lastIndexOf(daK<"x">(4683, 6784118241789616304L ^ var2)));
   }

   public static native class_1011 dah(class_1011 var0);

   public native void dai();

   private class_2960 dak(String var1) {
      long var2 = qFzUN ^ 114819340175376L;
      boolean var4 = daB();

      Map var10000;
      String var10001;
      label56: {
         label60: {
            try {
               var10000 = this.UopWF;
               var10001 = var1;
               if (var4) {
                  break label56;
               }

               if (!this.UopWF.containsKey(var1)) {
                  break label60;
               }
            } catch (MatchException var9) {
               throw daD(var9);
            }

            int var5 = (Integer)this.UopWF.get(var1).getSecond();

            label48: {
               try {
                  if (var5 == -1) {
                     var11 = new qy(var1);
                     break label48;
                  }
               } catch (MatchException var8) {
                  throw daD(var8);
               }

               var11 = new qB(var1, var5);
            }

            Object var6 = var11;
            this.egLkf.put(var1, (qz)var6);
            this.UopWF.remove(var1);
         }

         var10000 = this.egLkf;
         var10001 = var1;
      }

      qz var10 = (qz)var10000.get(var10001);

      try {
         if (var4) {
            return var10.cZk();
         }

         if (var10 == null) {
            return null;
         }
      } catch (MatchException var7) {
         throw daD(var7);
      }

      return var10.cZk();
   }

   private static native String daE(byte[] var0);

   private static native int daI(int var0, long var1);

   private static native int daJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void daA(boolean var0);

   private static native Object daG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String daF(int var0, long var1);

   public native void dam();

   private static native void _1a0104b3d4a302ac89dcc809aa4dc02f();
}
