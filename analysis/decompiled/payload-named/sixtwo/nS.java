package sixtwo;

import native.Loader;

public final class nS extends RuntimeException {
   public nS(Throwable var1) {
      super(var1);
   }

   static {
      Loader.doInit(nS.class);
   }

   @Override
   public synchronized native Throwable fillInStackTrace();
}
