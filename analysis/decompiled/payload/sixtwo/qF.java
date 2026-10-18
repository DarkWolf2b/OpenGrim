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
import net.minecraft.class_2960;
import net.minecraft.class_742;

public class qF {
   private final Map<String, Pair<String, Integer>> UOrmU;
   private final Map<String, List<class_2960>> BtiOf;
   private final Map<String, qw> iskPb;
   private final Map<String, CompletableFuture<Void>> BMURn;
   private byte[] snSlR;
   private static long JMoGY;
   private static String[] HPVXV;
   private static String[] ssXfs;
   private static Map aipts;
   private static long[] BUOYt;
   private static Integer[] jDqdN;
   private static Map atmOn;
   private static long DMVkF;

   public qF() {
      long var1 = JMoGY ^ 11790779350396L;
      super();
      this.UOrmU = new ConcurrentHashMap<>();
      this.BtiOf = new ConcurrentHashMap<>();
      this.iskPb = new ConcurrentHashMap<>();
      this.BMURn = new ConcurrentHashMap<>();

      try {
         HttpRequest var3 = HttpRequest.newBuilder()
            .uri(URI.create(mr.clQ(dad<"n">(11494, 3326200481328699454L ^ var1)).toString()))
            .header(dad<"n">(26974, 2636562173740178820L ^ var1), dad<"n">(31269, 2055753126305058556L ^ var1) + ry.dkB().dkJ())
            .timeout(Duration.ofSeconds(DMVkF))
            .build();
         HttpResponse var4 = oe.cBX(var3, BodyHandlers.ofByteArray());

         try {
            if (var4.statusCode() == dag<"e">(22441, 4974460526593094567L ^ var1)) {
               this.snSlR = (byte[])var4.body();
            }
         } catch (Exception var5) {
            throw cZZ(var5);
         }
      } catch (Exception var6) {
      }
   }

   static {
      Loader.doInit(qF.class);
      _8de2f16764985985d29135fad7a3470f();
   }

   private static native int daf(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public class_2960 cZL(class_742 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/qF.JMoGY J
      // 03: ldc2_w 125114269780353
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
      // 1e: invokestatic sixtwo/qF.cZZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 21: athrow
      // 22: aconst_null
      // 23: areturn
      // 24: invokestatic sixtwo/qF.cZZ (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual net/minecraft/class_742.method_5477 ()Lnet/minecraft/class_2561;
      // 2c: invokeinterface net/minecraft/class_2561.getString ()Ljava/lang/String; 1
      // 31: astore 5
      // 33: aload 0
      // 34: aload 5
      // 36: invokevirtual sixtwo/qF.cZM (Ljava/lang/String;)Lnet/minecraft/class_2960;
      // 39: areturn
   }

   private class_2960 cZM(String var1) {
      long var2 = JMoGY ^ 131710146708675L;
      boolean var4 = qG.daB();

      Map var10000;
      String var10001;
      label56: {
         label60: {
            try {
               var10000 = this.UOrmU;
               var10001 = var1;
               if (var4) {
                  break label56;
               }

               if (!this.UOrmU.containsKey(var1)) {
                  break label60;
               }
            } catch (MatchException var9) {
               throw cZZ(var9);
            }

            int var5 = (Integer)this.UOrmU.get(var1).getSecond();

            label48: {
               try {
                  if (var5 == -1) {
                     var11 = new qx(var1);
                     break label48;
                  }
               } catch (MatchException var8) {
                  throw cZZ(var8);
               }

               var11 = new qA(var1, var5);
            }

            Object var6 = var11;
            this.iskPb.put(var1, (qw)var6);
            this.UOrmU.remove(var1);
         }

         var10000 = this.iskPb;
         var10001 = var1;
      }

      qw var10 = (qw)var10000.get(var10001);

      try {
         if (var4) {
            return var10.cZa();
         }

         if (var10 == null) {
            return null;
         }
      } catch (MatchException var7) {
         throw cZZ(var7);
      }

      return var10.cZa();
   }

   private native void cZO(String var1, String var2) throws IOException;

   private static native Throwable cZZ(Throwable var0);

   private native void cZP(String var1, String var2) throws IOException;

   public String cZQ(String var1) {
      long var2 = JMoGY ^ 108053509893673L;
      String var4 = var1.substring(var1.lastIndexOf(dag<"e">(12448, 6981269197642975225L ^ var2)) + 1);
      return var4.substring(0, var4.lastIndexOf(dag<"e">(6876, 8003557792456142211L ^ var2)));
   }

   public native Map<String, List<class_2960>> cZS();

   private static native CallSite dad(Lookup var0, String var1, MethodType var2);

   private native void cZN(String var1, String var2);

   public native void cZK();

   public native Map<String, Pair<String, Integer>> cZR();

   private static native CallSite dag(Lookup var0, String var1, MethodType var2);

   private static native int dae(int var0, long var1);

   private static native String daa(byte[] var0);

   private static native String dab(int var0, long var1);

   private static native Object dac(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _8de2f16764985985d29135fad7a3470f();
}
