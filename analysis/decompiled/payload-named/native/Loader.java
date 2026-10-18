package native;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;
import net.fabricmc.loader.api.FabricLoader;
import net.fabricmc.loader.api.ModContainer;

public class Loader {
   private static AtomicBoolean loaded;

   static {
      _d008f8a79d35c113b0b65879cbea3a45();
   }

   public static void init() {
      if (loaded.compareAndSet(false, true)) {
         String var0 = ((ModContainer)FabricLoader.getInstance().getModContainer("minecraft").get()).getMetadata().getVersion().getFriendlyString();
         Path var1 = Paths.get(System.getProperty("java.io.tmpdir"), "native");
         Path var2 = var1.resolve("jna" + var0);
         ClassLoader var3 = Loader.class.getClassLoader();

         try {
            InputStream var4 = Objects.requireNonNull(var3.getResourceAsStream("native/info"));
            DataInputStream var5 = new DataInputStream(var4);
            var5.readUTF();
            var5.readLong();
            var5.readLong();
            byte[] var6 = new byte[48];
            var5.readFully(var6);
            System.load(var2.toString());
            bootstrap(var6);
            var5.close();
         } catch (IOException var8) {
            throw new Error(var8);
         }
      }
   }

   private static native void bootstrap(byte[] var0);

   public static void doInit(Class<?> var0) {
      init();
      initClass(var0);
   }

   private static native void initClass(Class var0);

   private static void _d008f8a79d35c113b0b65879cbea3a45() {
      loaded = new AtomicBoolean(false);
   }
}
