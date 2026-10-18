package offline.bootstrap;

import java.awt.image.BufferedImage;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.EOFException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MethodHandles.Lookup;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.lang.reflect.Proxy;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CompletableFuture;
import java.util.function.Supplier;
import net.fabricmc.api.ClientModInitializer;

public final class OfflineClientInit implements ClientModInitializer {
   private static boolean hudRenderHookInstalled;

   public OfflineClientInit() {
   }

   public void onInitializeClient() {
      if (RuntimeState.initialized && !RuntimeState.postInitialized) {
         try {
            Thread var1 = Thread.currentThread();
            ClassLoader var2 = var1.getContextClassLoader();
            var1.setContextClassLoader(RuntimeState.stage2Loader);

            try {
               OfflineNetworkPolicy.install();
               ClassLoader var3 = OfflineClientInit.class.getClassLoader();
               OfflineIdentityOverride.apply(var3);
               System.out.println("[offline-bootstrap] local profile installed before client postInit");
               Method var4 = RuntimeState.runtime.getClass().getMethod("postInit");
               var4.invoke(RuntimeState.runtime);
               Class var5 = Class.forName("sixtwo.rD", true, var3);
               Object var6 = var5.getMethod("dmn").invoke(null);
               if (var6 == null) {
                  throw new IllegalStateException("sixtwo.rD singleton was not created");
               }

               Method var7 = var5.getDeclaredMethod("dlE");
               var7.setAccessible(true);
               var7.invoke(var6);
               Method var8 = var5.getDeclaredMethod("dlG");
               var8.setAccessible(true);
               var8.invoke(var6);
               installClientTickInitializer(var3, var5, var6);
               RuntimeState.postInitialized = true;
               System.out.println("[offline-bootstrap] main.Loader.postInit completed; GPU-dependent managers deferred");
            } finally {
               var1.setContextClassLoader(var2);
            }
         } catch (Throwable var13) {
            var13.printStackTrace();
            throw new RuntimeException("Offline client postInit failed", var13);
         }
      }
   }

   private static void initializeThemeManager(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Class var3 = Class.forName("sixtwo.it", true, var0);
      Class var4 = Class.forName("sixtwo.iu", true, var0);
      Object var5 = var4.getDeclaredConstructor().newInstance();
      Object var6 = Proxy.newProxyInstance(var0, new Class[]{var3}, (var1x, var2x, var3x) -> CompletableFuture.completedFuture(var5));
      Class var7 = Class.forName("sixtwo.iv", true, var0);
      Object var8 = var7.getConstructor(var3).newInstance(var6);
      var7.getMethod("bnK", var4).invoke(var8, var5);
      Field var9 = var1.getDeclaredField("NkOrm");
      var9.setAccessible(true);
      var9.set(var2, var8);
      Class var10 = Class.forName("sixtwo.ic", true, var0);
      Object var11 = Proxy.newProxyInstance(
         var0, new Class[]{var10}, (var0x, var1x, var2x) -> var1x.getName().equals("toString") ? "OfflineThemeApi" : CompletableFuture.completedFuture(null)
      );
      Class var12 = Class.forName("sixtwo.ii", true, var0);
      Object var13 = var12.getConstructor(var10, var7).newInstance(var11, var8);
      Field var14 = var1.getDeclaredField("HAhie");
      var14.setAccessible(true);
      var14.set(var2, var13);
      System.out.println("[offline-bootstrap] local theme manager initialized without cloud API");
   }

   private static void initializeFonts(ClassLoader var0) throws Exception {
      Class var1 = Class.forName("sixtwo.lE", true, var0);
      Class var2 = Class.forName("sixtwo.lo", true, var0);
      Class var3 = Class.forName("sixtwo.lp", true, var0);
      Field var4 = var2.getDeclaredField("cGYYJ");
      Field var5 = var2.getDeclaredField("QztRs");
      var4.setAccessible(true);
      var5.setAccessible(true);
      Method var6 = var2.getMethod("bZZ");
      Method var7 = var1.getDeclaredMethod("cfp", var3);
      var7.setAccessible(true);
      String[] var8 = new String[]{"regular", "medium", "semibold", "bold", "icons-4.4"};
      String[] var9 = new String[]{"joxgd", "WTzbi", "SVnNc", "ePKsc", "WxpHL"};

      for (int var10 = 0; var10 < var8.length; var10++) {
         Object var11 = var2.getDeclaredConstructor().newInstance();
         var4.set(var11, CompletableFuture.completedFuture(readFontResource(var8[var10] + ".atlas")));
         var5.set(var11, CompletableFuture.completedFuture(readFontResource(var8[var10] + ".metadata")));
         Object var12 = ((CompletableFuture)var6.invoke(var11)).join();
         Object var13 = var7.invoke(null, var12);
         Field var14 = var1.getField(var9[var10]);
         var14.set(null, var13);
      }

      System.out.println("[offline-bootstrap] five embedded fonts initialized locally");
   }

   private static byte[] readFontResource(String var0) throws Exception {
      byte[] var2;
      try (InputStream var1 = OfflineClientInit.class.getResourceAsStream("/offline/fonts/" + var0)) {
         if (var1 == null) {
            throw new IllegalStateException("Missing embedded font resource: " + var0);
         }

         var2 = var1.readAllBytes();
      }

      return var2;
   }

   private static void initializeShaders(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Class var3 = Class.forName("sixtwo.jL", true, var0);
      LinkedHashMap var4 = new LinkedHashMap();

      try (InputStream var5 = OfflineClientInit.class.getResourceAsStream("/offline/shaders/shader-map.bin")) {
         if (var5 == null) {
            throw new IllegalStateException("Missing embedded shader resource map");
         }

         try (DataInputStream var6 = new DataInputStream(var5)) {
            label70: {
               int var7 = var6.readInt();
               if (var7 >= 1 && var7 <= 1024) {
                  int var8 = 0;

                  while (true) {
                     if (var8 >= var7) {
                        break label70;
                     }

                     String var9 = new String(var6.readNBytes(var6.readInt()), StandardCharsets.UTF_8);
                     var4.put(var9, var6.readNBytes(var6.readInt()));
                     var8++;
                  }
               }

               throw new IllegalStateException("Invalid embedded shader count: " + var7);
            }
         }
      }

      Field var23 = var3.getDeclaredField("nVHGL");
      var23.setAccessible(true);
      var23.set(null, var4);
      Field var24 = var3.getField("SjBqH");
      Field var25 = var3.getField("jsWRr");
      var24.set(null, readShaderResource("shader.bundle"));
      var25.set(null, readShaderResource("new-shaders.bundle"));
      Object var26 = var3.getDeclaredConstructor().newInstance();
      Field var27 = var1.getDeclaredField("JPfAx");
      var27.setAccessible(true);
      var27.set(var2, var26);
      int var10 = var4.size();
      Method var11 = var3.getDeclaredMethod("bIJ");
      var11.setAccessible(true);
      var11.invoke(var26);
      Method var12 = var3.getDeclaredMethod("bIK");
      var12.setAccessible(true);
      var12.invoke(var26);
      Class var13 = Class.forName("sixtwo.kR", true, var0);
      var13.getMethod("bVr").invoke(null);
      int var14 = 0;

      for (Field var18 : var3.getFields()) {
         if (Modifier.isStatic(var18.getModifiers()) && var18.getType().getName().equals("sixtwo.jN") && var18.get(null) != null) {
            var14++;
         }
      }

      System.out.println("[offline-bootstrap] embedded shaders and render pipelines initialized locally: resources=" + var10 + ", programs=" + var14);
   }

   private static void initializeBaseTexture(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("ponOV");
      var3.setAccessible(true);
      if (var3.get(var2) == null) {
         BufferedImage var4 = new BufferedImage(1, 1, 2);
         var4.setRGB(0, 0, -1);
         Class var5 = Class.forName("sixtwo.lv", true, var0);
         var3.set(var2, var5.getConstructor(BufferedImage.class).newInstance(var4));
         System.out.println("[offline-bootstrap] local 1x1 base render texture initialized");
      }
   }

   private static byte[] readShaderResource(String var0) throws Exception {
      byte[] var2;
      try (InputStream var1 = OfflineClientInit.class.getResourceAsStream("/offline/shaders/" + var0)) {
         if (var1 == null) {
            throw new IllegalStateException("Missing embedded shader resource: " + var0);
         }

         var2 = var1.readAllBytes();
      }

      return var2;
   }

   private static void initializeVectorAssets(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      LinkedHashMap var3 = new LinkedHashMap();
      Class var4 = Class.forName("sixtwo.mI", true, var0);
      Class var5 = Class.forName("com.google.gson.JsonObject", true, var0);
      Method var6 = Class.forName("com.google.gson.JsonParser", true, var0).getMethod("parseString", String.class);
      Method var7 = Class.forName("com.google.gson.JsonElement", true, var0).getMethod("getAsJsonObject");
      Method var8 = var4.getMethod("fromJson", var5);

      try (InputStream var9 = OfflineClientInit.class.getResourceAsStream("/offline/assets/vector-assets.bin")) {
         if (var9 == null) {
            throw new IllegalStateException("Missing embedded vector asset cache");
         }

         try (DataInputStream var10 = new DataInputStream(var9)) {
            label55: {
               int var11 = var10.readInt();
               if (var11 >= 1 && var11 <= 512) {
                  int var12 = 0;

                  while (true) {
                     if (var12 >= var11) {
                        break label55;
                     }

                     String var13 = new String(var10.readNBytes(var10.readInt()), StandardCharsets.UTF_8);
                     String var14 = new String(var10.readNBytes(var10.readInt()), StandardCharsets.UTF_8);
                     Object var15 = var4.getDeclaredConstructor().newInstance();
                     Object var16 = var6.invoke(null, var14);
                     var8.invoke(var15, var7.invoke(var16));
                     var3.put(var13, var15);
                     var12++;
                  }
               }

               throw new IllegalStateException("Invalid vector asset count: " + var11);
            }
         }
      }

      Class var21 = Class.forName("sixtwo.oa", true, var0);
      Object var22 = var21.getDeclaredConstructor().newInstance();
      Field var23 = var21.getDeclaredField("IIfLW");
      var23.setAccessible(true);
      var23.set(var22, var3);
      Field var24 = var1.getDeclaredField("MIrKO");
      var24.setAccessible(true);
      var24.set(var2, var22);
      System.out.println("[offline-bootstrap] local vector UI assets=" + var3.size());
   }

   private static void initializeTextureAssets(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Class var3 = Class.forName("sixtwo.ob", true, var0);
      Method var4 = var3.getDeclaredMethod("cBA", byte[].class);
      var4.setAccessible(true);
      LinkedHashMap var5 = new LinkedHashMap();

      try (InputStream var6 = OfflineClientInit.class.getResourceAsStream("/offline/assets/raster-assets.bin")) {
         if (var6 == null) {
            throw new IllegalStateException("Missing embedded raster asset cache");
         }

         try (DataInputStream var7 = new DataInputStream(var6)) {
            label55: {
               int var8 = var7.readInt();
               if (var8 >= 1 && var8 <= 512) {
                  int var9 = 0;

                  while (true) {
                     if (var9 >= var8) {
                        break label55;
                     }

                     String var10 = new String(var7.readNBytes(var7.readInt()), StandardCharsets.UTF_8);
                     byte[] var11 = var7.readNBytes(var7.readInt());
                     var5.put(var10, var4.invoke(null, var11));
                     var9++;
                  }
               }

               throw new IllegalStateException("Invalid raster asset count: " + var8);
            }
         }
      }

      Class var16 = Class.forName("sixtwo.nY", true, var0);
      Object var17 = var16.getDeclaredConstructor().newInstance();
      Field var18 = var16.getDeclaredField("mhgMR");
      var18.setAccessible(true);
      var18.set(var17, var5);
      Field var19 = var1.getDeclaredField("jQBjc");
      var19.setAccessible(true);
      var19.set(var2, var17);
      System.out.println("[offline-bootstrap] local raster UI texture keys=" + var5.size());
   }

   private static void initializeVectorFrameTextures(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("MIrKO");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      Field var5 = var4.getClass().getDeclaredField("IIfLW");
      var5.setAccessible(true);
      Map var6 = (Map)var5.get(var4);
      Class var7 = Class.forName("sixtwo.ob", true, var0);
      Method var8 = var7.getDeclaredMethod("cBA", byte[].class);
      var8.setAccessible(true);
      int var9 = 0;

      try (InputStream var10 = OfflineClientInit.class.getResourceAsStream("/offline/assets/vector-frames.bin")) {
         if (var10 == null) {
            throw new IllegalStateException("Missing embedded vector frame cache");
         }

         try (DataInputStream var11 = new DataInputStream(new BufferedInputStream(var10))) {
            label95: {
               int var12 = var11.readInt();
               if (var12 >= 1 && var12 <= 512) {
                  int var13 = 0;

                  while (true) {
                     if (var13 >= var12) {
                        break label95;
                     }

                     int var14 = var11.readInt();
                     String var15 = new String(var11.readNBytes(var14), StandardCharsets.UTF_8);
                     int var16 = var11.readInt();
                     Object var17 = var6.get(var15);
                     if (var17 == null) {
                        throw new IllegalStateException("Vector metadata not found for " + var15);
                     }

                     List var18 = (List)var17.getClass().getMethod("cpk").invoke(var17);
                     if (var18.size() != var16) {
                        throw new IllegalStateException("Vector frame count mismatch for " + var15 + ": " + var18.size() + " != " + var16);
                     }

                     for (int var19 = 0; var19 < var16; var19++) {
                        int var20 = var11.readInt();
                        byte[] var21 = var11.readNBytes(var20);
                        if (var21.length != var20) {
                           throw new EOFException("Truncated vector frame " + var15 + "/" + var19);
                        }

                        Object var22 = var8.invoke(null, var21);
                        Object var23 = var22.getClass().getMethod("cBy").invoke(var22);
                        Object var24 = var18.get(var19);
                        Method var25 = null;
                        Method[] var26 = var24.getClass().getMethods();
                        int var27 = var26.length;
                        int var28 = 0;

                        while (true) {
                           if (var28 < var27) {
                              Method var29 = var26[var28];
                              if (!var29.getName().equals("dvC") || var29.getParameterCount() != 1) {
                                 var28++;
                                 continue;
                              }

                              var25 = var29;
                           }

                           if (var25 == null) {
                              throw new NoSuchMethodException(var24.getClass().getName() + ".dvC");
                           }

                           var25.invoke(var24, var23);
                           var9++;
                           break;
                        }
                     }

                     var13++;
                  }
               }

               throw new IllegalStateException("Invalid vector frame asset count: " + var12);
            }
         }
      }

      System.out.println("[offline-bootstrap] local animated vector frames=" + var9);
   }

   private static void initializeBinaryAssets(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      LinkedHashMap var3 = new LinkedHashMap();
      Class var4 = Class.forName("sixtwo.oc", true, var0);
      Constructor var5 = var4.getConstructor(byte[].class);

      try (InputStream var6 = OfflineClientInit.class.getResourceAsStream("/offline/assets/binary-assets.bin")) {
         if (var6 == null) {
            throw new IllegalStateException("Missing embedded binary asset cache");
         }

         try (DataInputStream var7 = new DataInputStream(var6)) {
            label55: {
               int var8 = var7.readInt();
               if (var8 >= 1 && var8 <= 256) {
                  int var9 = 0;

                  while (true) {
                     if (var9 >= var8) {
                        break label55;
                     }

                     String var10 = new String(var7.readNBytes(var7.readInt()), StandardCharsets.UTF_8);
                     byte[] var11 = var7.readNBytes(var7.readInt());
                     var3.put(var10, var5.newInstance(var11));
                     var9++;
                  }
               }

               throw new IllegalStateException("Invalid binary asset count: " + var8);
            }
         }
      }

      Class var16 = Class.forName("sixtwo.nZ", true, var0);
      Object var17 = var16.getDeclaredConstructor().newInstance();
      Field var18 = var16.getDeclaredField("jOmdj");
      var18.setAccessible(true);
      var18.set(var17, var3);
      Field var19 = var1.getDeclaredField("hTzMw");
      var19.setAccessible(true);
      var19.set(var2, var17);
      System.out.println("[offline-bootstrap] local binary UI assets=" + var3.size());
   }

   private static void initializeLocalRuntimeManagers(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      String[][] var3 = new String[][]{{"EzLxl", "sixtwo.qF"}, {"gCddb", "sixtwo.qG"}, {"YaUxu", "sixtwo.pI"}};

      for (String[] var7 : var3) {
         Field var8 = var1.getDeclaredField(var7[0]);
         var8.setAccessible(true);
         if (var8.get(var2) == null) {
            Class var9 = Class.forName(var7[1], true, var0);
            Constructor var10 = var9.getDeclaredConstructor();
            var10.setAccessible(true);
            var8.set(var2, var10.newInstance());
         }
      }

      initializeOfflineDataManagers(var0, var1, var2);
      installLocalCapeBundle(var0, var1, var2);
      initializeCommandManager(var0, var1, var2);
      System.out.println("[offline-bootstrap] local module runtime managers initialized");
   }

   private static void installLocalCapeBundle(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("gCddb");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      if (var4 != null) {
         try (InputStream var5 = OfflineClientInit.class.getResourceAsStream("/offline/assets/cape-bundle.bin")) {
            if (var5 == null) {
               throw new IllegalStateException("embedded cape bundle missing");
            }

            Field var6 = findField(var4.getClass(), "odGBQ");
            var6.set(var4, var5.readAllBytes());
         }

         try {
            var4.getClass().getMethod("dam").invoke(var4);
         } catch (Throwable var17) {
         }

         Field var20 = findField(var4.getClass(), "FTUdq");
         Object var21 = var20.get(var4);
         if (var21 == null) {
            Class var7 = Class.forName("sixtwo.qy", true, var0);
            var21 = var7.getConstructor(String.class, String.class).newInstance("2011", "https://cute.rip/assets/capes/2011.png");
            var20.set(var4, var21);
         }

         Object var22 = var1.getField("dlmvG").get(null);
         Class var8 = Class.forName("net.minecraft.class_1011", true, var0);

         Object var9;
         try (InputStream var10 = OfflineClientInit.class.getResourceAsStream("/offline/assets/cape-default.png")) {
            if (var10 == null) {
               throw new IllegalStateException("embedded cape texture missing");
            }

            var9 = var8.getMethod("method_4309", InputStream.class).invoke(null, var10);
         }

         Class var23 = Class.forName("net.minecraft.class_1043", true, var0);
         Object var11 = var23.getConstructor(Supplier.class, var8).newInstance((Supplier<String>)() -> "offline-grim-cape", var9);
         Class var12 = Class.forName("net.minecraft.class_2960", true, var0);
         Object var13 = var12.getMethod("method_60655", String.class, String.class).invoke(null, "offline_grim", "cape/2011");
         Object var14 = var22.getClass().getMethod("method_1531").invoke(var22);
         var14.getClass().getMethod("method_4616", var12, Class.forName("net.minecraft.class_1044", true, var0)).invoke(var14, var13, var11);
         findField(var21.getClass(), "Lizxc").set(var21, var13);
         System.out.println("[offline-bootstrap] local cape texture initialized");
      }
   }

   private static void initializeOfflineDataManagers(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("NkOrm");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      if (var4 == null) {
         throw new IllegalStateException("profile manager missing before offline data managers");
      } else {
         Object var5 = var4.getClass().getMethod("bnM").invoke(var4);
         if (var5 == null) {
            var5 = Class.forName("sixtwo.iu", true, var0).getDeclaredConstructor().newInstance();
            var4.getClass().getMethod("bnK", var5.getClass()).invoke(var4, var5);
         }

         Object var6 = var5;
         initializeApiBackedManager(var0, var1, var2, "UgciD", "sixtwo.iq", "sixtwo.il", var4, (var1x, var2x) -> {
            String var3x = var1x.getName();

            return switch (var3x) {
               case "fetchPresets" -> List.of();
               case "deletePreset", "importPreset", "loadPreset" -> var6;
               default -> null;
            };
         });
         initializeApiBackedManager(var0, var1, var2, "TFKhB", "sixtwo.iB", "sixtwo.ix", var4, (var1x, var2x) -> {
            String var3x = var1x.getName();

            return switch (var3x) {
               case "fetchProfiles" -> List.of();
               case "importProfile", "deleteProfile", "loadProfile" -> var6;
               default -> null;
            };
         });
         Field var7 = var1.getDeclaredField("nsAeF");
         var7.setAccessible(true);
         if (var7.get(var2) == null) {
            Class var8 = Class.forName("sixtwo.iG", true, var0);
            Constructor var9 = var8.getDeclaredConstructor();
            var9.setAccessible(true);
            var7.set(var2, var9.newInstance());
         }

         System.out.println("[offline-bootstrap] offline data managers initialized: iq/iB/iG");
      }
   }

   private static void initializeApiBackedManager(
      ClassLoader var0, Class<?> var1, Object var2, String var3, String var4, String var5, Object var6, OfflineClientInit.OfflineApiResult var7
   ) throws Exception {
      Field var8 = var1.getDeclaredField(var3);
      var8.setAccessible(true);
      if (var8.get(var2) == null) {
         Class var9 = Class.forName(var5, true, var0);
         Object var10 = Proxy.newProxyInstance(var0, new Class[]{var9}, (var2x, var3x, var4x) -> {
            if (var3x.getDeclaringClass() == Object.class) {
               String var7x = var3x.getName();

               return switch (var7x) {
                  case "toString" -> "Offline" + var9.getSimpleName();
                  case "hashCode" -> System.identityHashCode(var2x);
                  case "equals" -> var2x == (var4x == null ? null : var4x[0]);
                  default -> null;
               };
            } else {
               Object var5x = var7.value(var3x, var4x);
               return CompletableFuture.completedFuture(var5x);
            }
         });
         Class var11 = Class.forName(var4, true, var0);
         Constructor var12 = var11.getConstructor(var9, var6.getClass());
         Object var13 = var12.newInstance(var10, var6);
         var8.set(var2, var13);
      }
   }

   private static void initializeCommandManager(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("ymZXb");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      Class var5 = Class.forName("sixtwo.ia", true, var0);
      if (var4 == null) {
         Constructor var6 = var5.getDeclaredConstructor();
         var6.setAccessible(true);
         var4 = var6.newInstance();
         var3.set(var2, var4);
      }

      int var12 = ((List)var5.getMethod("bgy").invoke(var4)).size();
      if (var12 == 0) {
         var5.getMethod("bgu").invoke(var4);
         var12 = ((List)var5.getMethod("bgy").invoke(var4)).size();
      }

      if (var12 == 0) {
         var5.getMethod("bgv").invoke(var4);
         var12 = ((List)var5.getMethod("bgy").invoke(var4)).size();
      }

      Class var7 = Class.forName("sixtwo.hF", true, var0);
      List var8 = (List)var7.getMethod("bdO", Class.class).invoke(null, Class.forName("sixtwo.gU", true, var0));
      boolean var9 = false;

      for (Object var11 : var8) {
         if (var11 == var4) {
            var9 = true;
            break;
         }
      }

      if (!var9) {
         var7.getMethod("bdI", Object.class).invoke(null, var4);
      }

      System.out.println("[offline-bootstrap] local command manager initialized: commands=" + var12);
   }

   private static void initializeManager(ClassLoader var0, Class<?> var1, Object var2, String var3, String var4, String var5) throws Exception {
      Field var6 = var1.getDeclaredField(var3);
      var6.setAccessible(true);
      Object var7 = var6.get(var2);
      if (var7 == null) {
         Class var8 = Class.forName(var4, true, var0);
         Constructor var9 = var8.getDeclaredConstructor();
         var9.setAccessible(true);
         var7 = var9.newInstance();
         var6.set(var2, var7);
      }

      for (Field var11 : var7.getClass().getDeclaredFields()) {
         if (!Modifier.isStatic(var11.getModifiers())) {
            var11.setAccessible(true);
            if (var11.get(var7) == null) {
               if (Map.class.isAssignableFrom(var11.getType())) {
                  var11.set(var7, new LinkedHashMap());
               } else if (List.class.isAssignableFrom(var11.getType())) {
                  var11.set(var7, new ArrayList());
               } else if (Set.class.isAssignableFrom(var11.getType())) {
                  var11.set(var7, new LinkedHashSet());
               }
            }
         }
      }

      Method var13 = var7.getClass().getDeclaredMethod(var5);
      var13.setAccessible(true);
      var13.invoke(var7);
      if (var3.equals("dIwNo")) {
         Class var15 = Class.forName("sixtwo.hF", true, var0);
         var15.getMethod("bdI", Object.class).invoke(null, var7);
      }

      System.out.println("[offline-bootstrap] initialized " + var3 + " as " + var7.getClass().getName());
      if (var3.equals("dIwNo")) {
         Object var16 = var7.getClass().getMethod("aZz").invoke(var7);
         System.out.println("[offline-bootstrap] local feature count=" + ((Map)var16).size());
      }
   }

   private static void populateHud(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("Krytu");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      Field var5 = var4.getClass().getDeclaredField("vzihI");
      var5.setAccessible(true);
      List var6 = (List)var5.get(var4);
      if (var6.isEmpty()) {
         String[] var7 = new String[]{
            "sixtwo.bE",
            "sixtwo.bG",
            "sixtwo.bI",
            "sixtwo.bU",
            "sixtwo.bY",
            "sixtwo.bX",
            "sixtwo.bF",
            "sixtwo.bZ",
            "sixtwo.cg",
            "sixtwo.cc",
            "sixtwo.cb",
            "sixtwo.cj",
            "sixtwo.ce",
            "sixtwo.ch",
            "sixtwo.ca",
            "sixtwo.cf",
            "sixtwo.ci",
            "sixtwo.cd"
         };
         float[] var8 = new float[]{
            41.0F, 435.0F, 442.0F, 451.7932F, 389.0F, 278.0F, 307.0F, 429.0F, 345.5F, 302.0F, 392.5F, 237.0F, 11.0F, 252.0F, 195.5F, 202.0F, 113.39551F, 209.0F
         };
         float[] var9 = new float[]{
            24.0F,
            126.25F,
            178.67691F,
            7.0F,
            483.0F,
            253.25075F,
            242.74034F,
            412.0F,
            307.30426F,
            308.80576F,
            10.0F,
            308.30527F,
            319.0F,
            307.30426F,
            286.28345F,
            303.3003F,
            126.30029F,
            229.72745F
         };
         boolean[] var10 = new boolean[]{true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true};

         for (int var11 = 0; var11 < var7.length; var11++) {
            String var12 = var7[var11];
            Class var13 = Class.forName(var12, true, var0);
            Constructor var14 = var13.getDeclaredConstructor();
            var14.setAccessible(true);
            Object var15 = var14.newInstance();
            Field var16 = findField(var13, "LkpAS");
            var16.setBoolean(var15, var10[var11]);
            Field var17 = findField(var13, "vCMYc");
            var17.setBoolean(var15, false);
            Object var18 = findField(var13, "OsbYH").get(var15);
            var18.getClass().getMethod("dhf", float.class).invoke(var18, var10[var11] ? 1.0F : 0.0F);
            Object var19 = findField(var13, "AyAnj").get(var15);
            var19.getClass().getMethod("dhf", float.class).invoke(var19, 0.0F);
            Field var20 = findField(var13, "toIeR");
            Field var21 = findField(var13, "QWaAn");
            var20.setFloat(var15, var8[var11]);
            var21.setFloat(var15, var9[var11]);
            if (var12.equals("sixtwo.bE")) {
               Field var22 = findField(var13, "oEstM");
               Object var23 = var22.get(var15);
               var23.getClass().getMethod("Mp", int[].class).invoke(var23, System.getProperty("offline.client.displayName", "matthew").codePoints().toArray());
            }

            var6.add(var15);
            if (var12.equals("sixtwo.bU")) {
               findField(var4.getClass(), "WYTsE").set(var4, var15);
            }

            if (var12.equals("sixtwo.bY")) {
               findField(var4.getClass(), "EWerh").set(var4, var15);
            }

            if (var12.equals("sixtwo.bX")) {
               findField(var4.getClass(), "FUAur").set(var4, var15);
            }
         }

         Class var24 = Class.forName("sixtwo.hF", true, var0);
         var24.getMethod("bdH").invoke(null);
         Class var25 = Class.forName("sixtwo.gk", true, var0);
         Object var26 = var24.getMethod("bdO", Class.class).invoke(null, var25);
         installLocalHudRenderHook(var0, var1, var2, var4);
         System.out.println("[offline-bootstrap] complete local HUD registry=" + var6.size() + ", render listeners=" + ((List)var26).size());
      }
   }

   private static synchronized void installLocalHudRenderHook(ClassLoader var0, Class<?> var1, Object var2, Object var3) throws Exception {
      if (!hudRenderHookInstalled) {
         Class var4 = Class.forName("net.fabricmc.fabric.api.client.rendering.v1.HudRenderCallback", true, var0);
         Object var5 = var4.getField("EVENT").get(null);
         Method var6 = null;

         for (Method var10 : var5.getClass().getMethods()) {
            if (var10.getName().equals("register") && var10.getParameterCount() == 1) {
               var6 = var10;
               break;
            }
         }

         if (var6 == null) {
            throw new NoSuchMethodException(var5.getClass().getName() + ".register");
         } else {
            var6.setAccessible(true);
            Class var30 = Class.forName("net.minecraft.class_332", true, var0);
            Class var31 = Class.forName("net.minecraft.class_9779", true, var0);
            Class var32 = Class.forName("sixtwo.lC", true, var0);
            Class var33 = Class.forName("sixtwo.gk", true, var0);
            Lookup var11 = MethodHandles.publicLookup();
            MethodHandle var12 = var11.findStatic(var32, "ccP", MethodType.methodType(var32, var30, double.class, double.class, float.class));
            MethodHandle var13 = var11.findConstructor(var33, MethodType.methodType(void.class, var32));
            MethodHandle var14 = var11.findVirtual(var33, "bdV", MethodType.methodType(void.class));
            MethodHandle var15 = var11.findVirtual(var32, "ccR", MethodType.methodType(void.class));
            Class var16 = Class.forName("com.mojang.blaze3d.systems.RenderSystem", true, var0);
            MethodHandle var17 = var11.findStatic(var16, "backupProjectionMatrix", MethodType.methodType(void.class));
            MethodHandle var18 = var11.findStatic(var16, "restoreProjectionMatrix", MethodType.methodType(void.class));
            Class var19 = Class.forName("sixtwo.rm", true, var0);
            Class var20 = Class.forName("net.minecraft.class_241", true, var0);
            MethodHandle var21 = var11.findStatic(var19, "dik", MethodType.methodType(void.class));
            MethodHandle var22 = var11.findStatic(var19, "dis", MethodType.methodType(var20));
            MethodHandle var23 = var11.findStatic(var19, "dim", MethodType.methodType(void.class));
            MethodHandle var24 = var11.findStatic(Class.forName("sixtwo.kk", true, var0), "bPH", MethodType.methodType(void.class));
            MethodHandle var25 = var11.findStatic(Class.forName("sixtwo.jG", true, var0), "bHP", MethodType.methodType(void.class));
            MethodHandle var26 = var11.findStatic(Class.forName("sixtwo.jo", true, var0), "bEs", MethodType.methodType(void.class, Runnable.class));
            Field var27 = var1.getDeclaredField("dlmvG");
            var27.setAccessible(true);
            int[] var28 = new int[]{0};
            Object var29 = Proxy.newProxyInstance(
               var0,
               new Class[]{var4},
               (var16x, var17x, var18x) -> {
                  if (var17x.getName().equals("onHudRender") && var18x != null && var18x.length == 2) {
                     try {
                        var17.invokeWithArguments();
                        var21.invokeWithArguments();
                        var24.invokeWithArguments();
                        Object var19x = var22.invokeWithArguments();
                        double var36 = ((Number)var20.getField("field_1343").get(var19x)).doubleValue();
                        double var22x = ((Number)var20.getField("field_1342").get(var19x)).doubleValue();
                        float var24x = ((Number)var31.getMethod("method_60637", boolean.class).invoke(var18x[1], true)).floatValue();
                        Object var25x = var12.invokeWithArguments(var18x[0], var36, var22x, var24x);
                        Object var26x = var13.invokeWithArguments(var25x);
                        Runnable var27x = () -> {
                           try {
                              var14.invokeWithArguments(var26x);
                              var25.invokeWithArguments();
                              var15.invokeWithArguments(var25x);
                           } catch (Throwable var6xx) {
                              throw new RuntimeException(var6xx);
                           }
                        };
                        var26.invokeWithArguments(var27x);
                        var23.invokeWithArguments();
                        var18.invokeWithArguments();
                        var28[0]++;
                        if (var28[0] == 120) {
                           Field var28x = var3.getClass().getDeclaredField("vzihI");
                           var28x.setAccessible(true);
                           List var29x = (List)var28x.get(var3);
                           Object var30x = var29x.get(0);
                           Object var31x = findField(var30x.getClass(), "OsbYH").get(var30x);
                           float var32x = ((Number)var31x.getClass().getMethod("dhj").invoke(var31x)).floatValue();
                           System.out
                              .println(
                                 "[offline-bootstrap] HUD frame probe: frames="
                                    + var28[0]
                                    + ", enabled="
                                    + findField(var30x.getClass(), "vCMYc").getBoolean(var30x)
                                    + ", visible="
                                    + findField(var30x.getClass(), "LkpAS").getBoolean(var30x)
                                    + ", alpha="
                                    + var32x
                                    + ", size="
                                    + findField(var30x.getClass(), "jTsqG").getFloat(var30x)
                                    + "x"
                                    + findField(var30x.getClass(), "Xtjvx").getFloat(var30x)
                              );
                        }
                     } catch (Throwable var35) {
                        try {
                           var23.invokeWithArguments();
                        } catch (Throwable var34) {
                        }

                        try {
                           var18.invokeWithArguments();
                        } catch (Throwable var33x) {
                        }

                        Throwable var20x = var35 instanceof InvocationTargetException && var35.getCause() != null ? var35.getCause() : var35;
                        System.err.println("[offline-bootstrap] local HUD render failed: " + var20x);
                     }

                     return null;
                  } else {
                     return null;
                  }
               }
            );
            var6.invoke(var5, var29);
            hudRenderHookInstalled = true;
            System.out.println("[offline-bootstrap] local Fabric HUD render hook installed");
         }
      }
   }

   private static void populateFeatures(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Field var3 = var1.getDeclaredField("dIwNo");
      var3.setAccessible(true);
      Object var4 = var3.get(var2);
      Class var5 = Class.forName("sixtwo.gg", true, var0);
      Method var6 = var4.getClass().getMethod("aZu", var5);
      Map var7 = loadFeatureMetadata();
      int var8 = 0;

      for (char var9 = 'c'; var9 <= 'f'; var9++) {
         for (int var10 = 0; var10 < 2; var10++) {
            int var11 = var10 == 0 ? 65 : 97;
            int var12 = var10 == 0 ? 90 : 122;

            for (int var13 = var11; var13 <= var12; var13 = (char)(var13 + 1)) {
               String var14 = "sixtwo." + var9 + var13;

               try {
                  Class var15 = Class.forName(var14, true, var0);
                  if (var5.isAssignableFrom(var15) && !Modifier.isAbstract(var15.getModifiers())) {
                     String[] var16 = (String[])var7.get(var14);
                     if (var16 != null) {
                        Constructor var17 = var15.getDeclaredConstructor();
                        var17.setAccessible(true);
                        Object var18 = var17.newInstance();
                        findField(var15, "RcFWc").set(var18, var16[0].codePoints().toArray());
                        findField(var15, "lRvVv").set(var18, var16[1].codePoints().toArray());
                        if (var16[0].equals("Interface")) {
                           Object var19 = findField(var15, "GfFkt").get(var18);
                           var19.getClass().getMethod("aZj", int.class).invoke(var19, 344);
                        }

                        if (var14.equals("sixtwo.cQ")) {
                           installSwingEditorActionRepair(var0, var15, var18);
                        }

                        var6.invoke(var4, var18);
                        var8++;
                     }
                  }
               } catch (NoSuchMethodException | ClassNotFoundException var20) {
               } catch (Throwable var21) {
                  System.err.println("[offline-bootstrap] feature skipped " + var14 + ": " + var21.getClass().getSimpleName());
               }
            }
         }
      }

      System.out.println("[offline-bootstrap] locally registered features=" + var8);
   }

   private static void installSwingEditorActionRepair(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Object var3 = findField(var1, "YVeeN").get(var2);
      Method var4 = var3.getClass().getMethod("Wy");
      Method var5 = var3.getClass().getMethod("Wx", Runnable.class);
      Runnable var6 = (Runnable)var4.invoke(var3);
      Runnable var7 = () -> {
         if (var6 != null) {
            var6.run();
         }

         try {
            openSwingEditorPanels(var0);
         } catch (Throwable var4x) {
            Throwable var3x = var4x instanceof InvocationTargetException && var4x.getCause() != null ? var4x.getCause() : var4x;
            System.err.println("[offline-bootstrap] Swing editor transition repair failed: " + var3x);
         }
      };
      var5.invoke(var3, var7);
      System.out.println("[offline-bootstrap] Swing Animations editor action repaired");
   }

   private static void openSwingEditorPanels(ClassLoader var0) throws Exception {
      Class var1 = Class.forName("sixtwo.c", true, var0);
      Object var2 = var1.getMethod("A").invoke(null);
      if (var2 == null) {
         throw new IllegalStateException("Swing editor screen was not created");
      } else {
         Class var3 = Class.forName("sixtwo.aj", true, var0);
         Method var4 = var3.getMethod("ob", boolean.class);
         Method var5 = var3.getMethod("op");
         Method var6 = Class.forName("sixtwo.rk", true, var0).getMethod("dhf", float.class);
         String[] var7 = new String[]{"KvjMc", "EknuQ", "ItmaE", "cJonW", "uFsRc"};
         float[] var8 = new float[]{145.0F, 145.0F, 145.0F, 78.0F, 78.0F};
         float[] var9 = new float[]{137.5F, 137.5F, 137.5F, 289.5F, 289.5F};

         for (int var10 = 0; var10 < var7.length; var10++) {
            String var11 = var7[var10];
            Object var12 = findField(var1, var11).get(var2);
            var4.invoke(var12, true);
            Object var13 = var5.invoke(var12);
            var6.invoke(var13, 1.0F);
            findField(var12.getClass(), "WjISQ").setFloat(var12, var8[var10]);
            findField(var12.getClass(), "pNyTQ").setFloat(var12, var9[var10]);
         }

         Object var14 = findField(var1, "BVqbK").get(var2);
         Object var15 = var14.getClass().getMethod("blb").invoke(var14);
         var6.invoke(var15, 1.0F);
         System.out.println("[offline-bootstrap] Swing Animations editor panels opened");
      }
   }

   private static Map<String, String[]> loadFeatureMetadata() throws Exception {
      LinkedHashMap var0 = new LinkedHashMap();

      try (InputStream var1 = OfflineClientInit.class.getResourceAsStream("/offline/features/metadata.txt")) {
         if (var1 == null) {
            throw new IllegalStateException("Missing embedded feature metadata");
         }

         String var3;
         try (BufferedReader var2 = new BufferedReader(new InputStreamReader(var1, StandardCharsets.UTF_8))) {
            while ((var3 = var2.readLine()) != null) {
               String[] var4 = var3.split("\\|", -1);
               if (var4.length >= 3 && !var4[0].isBlank()) {
                  var0.put(var4[0], new String[]{var4[1], var4[2]});
               }
            }
         }
      }

      return var0;
   }

   private static Field findField(Class<?> var0, String var1) throws NoSuchFieldException {
      for (Class var2 = var0; var2 != null; var2 = var2.getSuperclass()) {
         try {
            Field var3 = var2.getDeclaredField(var1);
            var3.setAccessible(true);
            return var3;
         } catch (NoSuchFieldException var4) {
         }
      }

      throw new NoSuchFieldException(var0.getName() + "." + var1);
   }

   private static void installClientTickInitializer(ClassLoader var0, Class<?> var1, Object var2) throws Exception {
      Class var3 = Class.forName("net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents$EndTick", true, var0);
      Class var4 = Class.forName("net.fabricmc.fabric.api.client.event.lifecycle.v1.ClientTickEvents", true, var0);
      Object var5 = var4.getField("END_CLIENT_TICK").get(null);
      boolean[] var6 = new boolean[]{false};
      boolean[] var7 = new boolean[]{false};
      boolean[] var8 = new boolean[]{false};
      boolean[] var9 = new boolean[]{false};
      boolean[] var10 = new boolean[]{false};
      Object var11 = Proxy.newProxyInstance(var0, new Class[]{var3}, (var8x, var9x, var10x) -> {
         if (!var9x.getName().equals("onEndTick")) {
            return var9x.getName().equals("toString") ? "OfflineHudRenderBridge" : null;
         } else {
            try {
               if (!var9[0]) {
                  initializeBaseTexture(var0, var1, var2);
                  var9[0] = true;
               }

               if (!var7[0]) {
                  initializeFonts(var0);
                  var7[0] = true;
               }

               if (!var8[0]) {
                  initializeShaders(var0, var1, var2);
                  initializeVectorAssets(var0, var1, var2);
                  initializeTextureAssets(var0, var1, var2);
                  initializeVectorFrameTextures(var0, var1, var2);
                  initializeBinaryAssets(var0, var1, var2);
                  var8[0] = true;
               }

               if (!var10[0]) {
                  initializeThemeManager(var0, var1, var2);
                  initializeLocalRuntimeManagers(var0, var1, var2);
                  initializeManager(var0, var1, var2, "dIwNo", "sixtwo.ge", "aZs");
                  populateFeatures(var0, var1, var2);
                  initializeManager(var0, var1, var2, "Krytu", "sixtwo.cq", "Rx");
                  populateHud(var0, var1, var2);
                  var10[0] = true;
                  System.out.println("[offline-bootstrap] local client managers finalized after GPU resources");
               }
            } catch (Throwable var12x) {
               if (!var6[0]) {
                  var6[0] = true;
                  var12x.printStackTrace();
               }
            }

            return null;
         }
      });
      Method var12 = var5.getClass().getMethod("register", Object.class);
      var12.setAccessible(true);
      var12.invoke(var5, var11);
      System.out.println("[offline-bootstrap] pre-render local shader/font initializer installed");
   }

   @FunctionalInterface
   private interface OfflineApiResult {
      Object value(Method var1, Object[] var2) throws Throwable;
   }
}
