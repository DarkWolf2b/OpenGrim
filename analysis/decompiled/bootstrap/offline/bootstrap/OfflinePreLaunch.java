package offline.bootstrap;

import java.io.InputStream;
import java.lang.reflect.Method;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import net.fabricmc.loader.api.entrypoint.PreLaunchEntrypoint;

public final class OfflinePreLaunch implements PreLaunchEntrypoint {
   private static final long PROTECTED_NATIVE_SIZE = 292957184L;

   public OfflinePreLaunch() {
   }

   public void onPreLaunch() {
      if (!RuntimeState.initialized) {
         try {
            OfflineNetworkPolicy.install();
            Path var1 = Path.of(System.getProperty("java.io.tmpdir"), "offline-client-runtime-" + ProcessHandle.current().pid());
            Files.createDirectories(var1);
            Path var2 = var1.resolve("stage2-runtime.jar");

            try (InputStream var3 = OfflinePreLaunch.class.getResourceAsStream("/offline/stage2-runtime.jar")) {
               if (var3 == null) {
                  throw new IllegalStateException("Embedded stage2-runtime.jar is missing");
               }

               Files.copy(var3, var2, StandardCopyOption.REPLACE_EXISTING);
            }

            ClassLoader var21 = OfflinePreLaunch.class.getClassLoader();
            prepareProtectedNative();
            Class var4 = Class.forName("native.Loader", true, var21);
            var4.getMethod("init").invoke(null);
            System.out.println("[offline-bootstrap] native.Loader.init completed");
            ChildFirstClassLoader var5 = new ChildFirstClassLoader(var2.toUri().toURL(), var21);
            Thread var6 = Thread.currentThread();
            ClassLoader var7 = var6.getContextClassLoader();
            var6.setContextClassLoader(var5);

            try {
               Class var8 = Class.forName("main.Loader", true, var5);
               Object var9 = var8.getDeclaredConstructor().newInstance();
               Method var10 = var8.getMethod("init");
               var10.invoke(var9);
               String var11 = System.getProperty("offline.client.exitHookPath");
               if (var11 != null && !var11.isBlank()) {
                  System.load(Path.of(var11).toAbsolutePath().normalize().toString());
                  System.out.println("[offline-bootstrap] native exit tracer installed");
               }

               RuntimeState.stage2Loader = var5;
               RuntimeState.runtime = var9;
               RuntimeState.initialized = true;
               System.out.println("[offline-bootstrap] main.Loader.init completed");
            } finally {
               var6.setContextClassLoader(var7);
            }
         } catch (Throwable var20) {
            var20.printStackTrace();
            throw new RuntimeException("Offline client preLaunch failed", var20);
         }
      }
   }

   private static void prepareProtectedNative() throws Exception {
      String var0 = System.getProperty("offline.client.nativePath");
      if (var0 != null && !var0.isBlank()) {
         Path var1 = Path.of(var0).toAbsolutePath().normalize();
         if (Files.isRegularFile(var1) && Files.size(var1) == 292957184L) {
            Path var2 = Path.of(System.getProperty("java.io.tmpdir"), "native");
            Files.createDirectories(var2);
            Path var3 = var2.resolve("jna1.21.11");
            if (!Files.isRegularFile(var3) || Files.size(var3) != 292957184L) {
               Files.copy(var1, var3, StandardCopyOption.REPLACE_EXISTING);
            }
         } else {
            throw new IllegalStateException("Invalid protected native: " + var1);
         }
      } else {
         throw new IllegalStateException("Missing -Doffline.client.nativePath=<path to jna1.21.11>");
      }
   }
}
