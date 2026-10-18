package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_437;

public interface aw {
   long WbltW = gb.aYR(5997638455782309412L, 2626269204656746336L, MethodHandles.lookup().lookupClass()).a(58560763372423L);

   private static MatchException a(MatchException var0) {
      return var0;
   }

   default boolean closing() {
      return false;
   }

   g manager();

   static boolean route(ap var0) {
      long var1 = WbltW ^ 99899857722861L;
      String var10000 = az.tE();
      class_437 var5 = rD.dlmvG.field_1755;
      String var3 = var10000;

      label27: {
         try {
            boolean var7 = var5 instanceof aw;
            if (var3 == null) {
               return var7;
            }

            if (var7) {
               break label27;
            }
         } catch (MatchException var6) {
            throw a(var6);
         }

         return false;
      }

      aw var4 = (aw)var5;
      var4.addPopup(var0);
      return true;
   }

   static boolean route(k var0) {
      long var1 = WbltW ^ 78181400036524L;
      String var10000 = az.tE();
      class_437 var5 = rD.dlmvG.field_1755;
      String var3 = var10000;

      label27: {
         try {
            boolean var7 = var5 instanceof aw;
            if (var3 == null) {
               return var7;
            }

            if (var7) {
               break label27;
            }
         } catch (MatchException var6) {
            throw a(var6);
         }

         return false;
      }

      aw var4 = (aw)var5;
      var0.cB(ay.ss());
      var4.addTooltip(var0);
      return true;
   }

   static boolean route(aj var0) {
      long var1 = WbltW ^ 53866698337108L;
      String var10000 = az.tE();
      class_437 var5 = rD.dlmvG.field_1755;
      String var3 = var10000;

      label27: {
         try {
            boolean var7 = var5 instanceof aw;
            if (var3 == null) {
               return var7;
            }

            if (var7) {
               break label27;
            }
         } catch (MatchException var6) {
            throw a(var6);
         }

         return false;
      }

      aw var4 = (aw)var5;
      var4.addPopupComponent(var0);
      return true;
   }

   default void addOverlay(aj var1) {
      this.addPopupComponent(var1);
   }

   default void addOverlay(aj var1, boolean var2) {
      this.addOverlay(var1);
   }

   void addTooltip(k var1);

   void addPopup(ap var1);

   default Object hoveredRoot(Iterable<? extends az> param1, double param2, double param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/aw.WbltW J
      // 03: ldc2_w 50540086143418
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/az.tE ()Ljava/lang/String;
      // 0c: aload 1
      // 0d: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 12: astore 9
      // 14: astore 8
      // 16: aload 9
      // 18: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 1d: ifeq 52
      // 20: aload 9
      // 22: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 27: checkcast sixtwo/az
      // 2a: astore 10
      // 2c: aload 10
      // 2e: aload 8
      // 30: ifnull 4c
      // 33: dload 2
      // 34: dload 4
      // 36: invokevirtual sixtwo/az.tg (DD)Z
      // 39: ifeq 4d
      // 3c: goto 43
      // 3f: invokestatic sixtwo/aw.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 42: athrow
      // 43: aload 10
      // 45: goto 4c
      // 48: invokestatic sixtwo/aw.a (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: areturn
      // 4d: aload 8
      // 4f: ifnonnull 16
      // 52: aconst_null
      // 53: areturn
   }

   static boolean routeOverlay(aj var0, boolean var1) {
      long var2 = WbltW ^ 73554103293128L;
      String var10000 = az.tE();
      class_437 var6 = rD.dlmvG.field_1755;
      String var4 = var10000;

      label27: {
         try {
            boolean var8 = var6 instanceof aw;
            if (var4 == null) {
               return var8;
            }

            if (var8) {
               break label27;
            }
         } catch (MatchException var7) {
            throw a(var7);
         }

         return false;
      }

      aw var5 = (aw)var6;
      var5.addOverlay(var0, var1);
      return true;
   }

   void addPopupComponent(aj var1);
}
