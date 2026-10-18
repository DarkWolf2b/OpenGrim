package fivefive;

import java.net.URL;
import java.net.URLConnection;
import java.net.URLStreamHandler;
import natives.Loader;

public class j extends URLStreamHandler {
   private final Object PAHoi;
   private static String IZUmt;

   public j(Object var1) {
      bd();
      super();

      try {
         this.PAHoi = var1;
         if (C.eP()) {
            bc("WZy9ob");
         }
      } catch (RuntimeException var3) {
         throw be(var3);
      }
   }

   static {
      Loader.doInit(j.class);
      _a8838a72640e8ac4d14b2f59278e5857();
   }

   private static native RuntimeException be(RuntimeException var0);

   @Override
   protected native URLConnection openConnection(URL var1);

   public static native void bc(String var0);

   public static native String bd();

   private static native void _a8838a72640e8ac4d14b2f59278e5857();
}
