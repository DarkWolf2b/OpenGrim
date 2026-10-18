package natives;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.StandardCopyOption;
import java.util.Objects;
import java.util.concurrent.atomic.AtomicBoolean;

public class Loader {
   private static AtomicBoolean loaded;

   static {
      _bf5dab347a3c271a30f2e9d6b1ccebb0();
   }

   public static void init() {
      if (loaded.compareAndSet(false, true)) {
         try {
            ClassLoader var0 = Loader.class.getClassLoader();
            InputStream var1 = Objects.requireNonNull(var0.getResourceAsStream("natives/info"));
            DataInputStream var2 = new DataInputStream(var1);
            var2.readUTF();
            var2.readLong();
            var2.readLong();
            byte[] var3 = new byte[48];
            var2.readFully(var3);
            InputStream var4 = Objects.requireNonNull(var0.getResourceAsStream("natives/data"));
            Path var5 = Files.createTempFile("lib", Platform.osType == 2 ? ".dll" : "");
            var5.toFile().deleteOnExit();
            Files.copy(var4, var5, StandardCopyOption.REPLACE_EXISTING);
            System.load(var5.toString());
            bootstrap(var3);
            var4.close();
            var2.close();
         } catch (IOException var7) {
            throw new Error(var7);
         }
      }
   }

   private static native void bootstrap(byte[] var0);

   public static void doInit(Class<?> var0) {
      init();
      initClass(var0);
   }

   private static native void initClass(Class var0);

   private static void _bf5dab347a3c271a30f2e9d6b1ccebb0() {
      loaded = new AtomicBoolean(false);
   }
}
