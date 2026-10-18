package sixtwo;

import native.Loader;

public enum gd {
   ipLAD,
   zlSAY;

   // $VF: Failed to inline enum fields
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   static {
      Loader.doInit(gd.class);
      _e41e234a93f47358128ee75c5f1c7220();
   }

   private static native String aZp(byte[] var0);

   private static native void _e41e234a93f47358128ee75c5f1c7220();
}
