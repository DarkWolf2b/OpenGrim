package sixtwo;

import native.Loader;

public enum cl {
   BisXp,
   zjBim;

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(cl.class);
      _a944dbd9cc62ce6eb69c5bfb13cd6494();
   }

   private static native String QM(byte[] var0);

   private static native void _a944dbd9cc62ce6eb69c5bfb13cd6494();
}
