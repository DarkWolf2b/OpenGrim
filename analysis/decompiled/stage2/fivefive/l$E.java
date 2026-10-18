package fivefive;

import natives.Loader;

final class l$E extends ClassLoader {
   private l$E() {
   }

   static {
      Loader.doInit(l$E.class);
   }

   native Class fz(Object[] var1);
}
