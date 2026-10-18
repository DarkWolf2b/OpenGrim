package sixtwo;

import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;

public class hF {
   private static final Map<Class<? extends hH>, List<hI>> PTGDf = new ConcurrentHashMap<>();
   private static final Lookup JRwhO = MethodHandles.lookup();
   public static volatile boolean BQuMu = false;

   public static void bdI(Object var0) {
      bdJ(var0, null);
   }

   public static void bdM(Object var0) {
      PTGDf.values().forEach(var1 -> var1.removeIf(var1x -> var1x.source().equals(var0)));
      bdN(true);
   }

   public static void bdH() {
      BQuMu = true;
   }

   public static void bdP() {
      BQuMu = false;
      PTGDf.clear();
   }

   private static void bdL(Method var0, Object var1) {
      Class var2 = var0.getParameterTypes()[0];

      try {
         MethodHandle var3 = JRwhO.unreflect(var0);
         hI var4 = new hI(var1, var3, var0.getAnnotation(hG.class).priority().cmD());
         List var5 = PTGDf.computeIfAbsent(var2, var0x -> new CopyOnWriteArrayList<>());
         if (!var5.contains(var4)) {
            var5.add(var4);
            var5.sort((var0x, var1x) -> Integer.compare(var1x.value(), var0x.value()));
         }
      } catch (IllegalAccessException var6) {
      }
   }

   public static void bdN(boolean var0) {
      PTGDf.entrySet().removeIf(var1 -> var0 && var1.getValue().isEmpty());
   }

   public static List<hI> bdO(Class<? extends hH> var0) {
      return PTGDf.getOrDefault(var0, Collections.emptyList());
   }

   private static boolean bdK(Method var0, Class<? extends hH> var1) {
      return var0.getParameterCount() == 1
         && (var1 == null || var0.getParameterTypes()[0].equals(var1))
         && var0.isAnnotationPresent(hG.class)
         && Modifier.isPublic(var0.getModifiers());
   }

   public static void bdJ(Object var0, Class<? extends hH> var1) {
      for (Class var2 = var0.getClass(); var2 != null && var2 != Object.class; var2 = var2.getSuperclass()) {
         Method[] var3 = var2.getDeclaredMethods();

         for (Method var7 : var3) {
            if (bdK(var7, var1)) {
               bdL(var7, var0);
            }
         }
      }
   }
}
