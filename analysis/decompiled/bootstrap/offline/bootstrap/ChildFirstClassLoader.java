package offline.bootstrap;

import java.net.URL;
import java.net.URLClassLoader;

final class ChildFirstClassLoader extends URLClassLoader {
   private static final String[] CHILD_FIRST = new String[]{"main.", "natives.", "fivefive.", "org.jose4j."};

   ChildFirstClassLoader(URL var1, ClassLoader var2) {
      super("offline-stage2", new URL[]{var1}, var2);
   }

   @Override
   protected Class<?> loadClass(String var1, boolean var2) throws ClassNotFoundException {
      synchronized (this.getClassLoadingLock(var1)) {
         Class var4 = this.findLoadedClass(var1);
         if (var4 == null && isChildFirst(var1)) {
            try {
               var4 = this.findClass(var1);
            } catch (ClassNotFoundException var7) {
               var4 = super.loadClass(var1, false);
            }
         } else if (var4 == null) {
            var4 = super.loadClass(var1, false);
         }

         if (var2) {
            this.resolveClass(var4);
         }

         return var4;
      }
   }

   private static boolean isChildFirst(String var0) {
      for (String var4 : CHILD_FIRST) {
         if (var0.startsWith(var4)) {
            return true;
         }
      }

      return false;
   }
}
